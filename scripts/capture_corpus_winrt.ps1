Add-Type -AssemblyName System.Runtime.WindowsRuntime
$null = [Windows.Media.SpeechSynthesis.SpeechSynthesizer,Windows.Media.SpeechSynthesis,ContentType=WindowsRuntime]
$asTaskGeneric = ([System.WindowsRuntimeSystemExtensions].GetMethods() | Where-Object { $_.Name -eq 'AsTask' -and $_.GetParameters().Count -eq 1 -and $_.GetParameters()[0].ParameterType.Name -eq 'IAsyncOperation`1' })[0]
function Await($WinRtTask, $ResultType) { $t = $asTaskGeneric.MakeGenericMethod($ResultType); $n = $t.Invoke($null,@($WinRtTask)); $n.Wait(-1)|Out-Null; $n.Result }
$root = Split-Path -Parent $PSScriptRoot
$texts = [IO.File]::ReadAllLines("$root\corpus\plain.txt", [Text.Encoding]::UTF8) | Where-Object { $_.Trim().Length -gt 0 }
$ssml = [IO.File]::ReadAllText("$root\corpus\ssml.xml", [Text.Encoding]::UTF8)
$voices = @{ 'david-onecore' = 'Microsoft David'; 'zira-onecore' = 'Microsoft Zira' }
foreach ($key in $voices.Keys) {
  $dir = "$root\samples\$key"; New-Item -ItemType Directory -Force -Path $dir | Out-Null
  $voice = [Windows.Media.SpeechSynthesis.SpeechSynthesizer]::AllVoices | Where-Object { $_.DisplayName -eq $voices[$key] } | Select-Object -First 1
  $i = 0
  foreach ($t in $texts) {
    $i++
    $name = '{0:D3}.wav' -f $i
    $synth = New-Object Windows.Media.SpeechSynthesis.SpeechSynthesizer
    $synth.Voice = $voice
    $stream = Await ($synth.SynthesizeTextToStreamAsync($t)) ([Windows.Media.SpeechSynthesis.SpeechSynthesisStream])
    $in = [System.IO.WindowsRuntimeStreamExtensions]::AsStreamForRead($stream)
    $out = [IO.File]::Create("$dir\$name")
    $in.CopyTo($out); $out.Dispose(); $in.Dispose()
    Write-Host "$key $name"
  }
  $synth = New-Object Windows.Media.SpeechSynthesis.SpeechSynthesizer; $synth.Voice = $voice
  $stream = Await ($synth.SynthesizeSsmlToStreamAsync($ssml)) ([Windows.Media.SpeechSynthesis.SpeechSynthesisStream])
  $in = [System.IO.WindowsRuntimeStreamExtensions]::AsStreamForRead($stream)
  $out = [IO.File]::Create("$dir\ssml.wav"); $in.CopyTo($out); $out.Dispose(); $in.Dispose()
}
