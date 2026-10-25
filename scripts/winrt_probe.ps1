Add-Type -AssemblyName System.Runtime.WindowsRuntime
$null = [Windows.Media.SpeechSynthesis.SpeechSynthesizer,Windows.Media.SpeechSynthesis,ContentType=WindowsRuntime]
$null = [Windows.Storage.Streams.DataReader,Windows.Storage.Streams,ContentType=WindowsRuntime]
$asTaskGeneric = ([System.WindowsRuntimeSystemExtensions].GetMethods() | Where-Object { $_.Name -eq 'AsTask' -and $_.GetParameters().Count -eq 1 -and $_.GetParameters()[0].ParameterType.Name -eq 'IAsyncOperation`1' })[0]
function Await($WinRtTask, $ResultType) {
  $asTask = $asTaskGeneric.MakeGenericMethod($ResultType)
  $netTask = $asTask.Invoke($null, @($WinRtTask))
  $netTask.Wait(-1) | Out-Null
  $netTask.Result
}
Write-Host "voices:"
[Windows.Media.SpeechSynthesis.SpeechSynthesizer]::AllVoices | ForEach-Object { Write-Host ("  {0} | {1} | {2}" -f $_.DisplayName, $_.Language, $_.Id) }
$synth = New-Object Windows.Media.SpeechSynthesis.SpeechSynthesizer
$voice = [Windows.Media.SpeechSynthesis.SpeechSynthesizer]::AllVoices | Where-Object { $_.DisplayName -like '*Zira*' } | Select-Object -First 1
if ($voice) { $synth.Voice = $voice }
Write-Host ("using: {0}" -f $synth.Voice.DisplayName)
$stream = Await ($synth.SynthesizeTextToStreamAsync("The quick brown fox jumps over the lazy dog.")) ([Windows.Media.SpeechSynthesis.SpeechSynthesisStream])
Write-Host ("content: {0} size: {1}" -f $stream.ContentType, $stream.Size)
$in = [System.IO.WindowsRuntimeStreamExtensions]::AsStreamForRead($stream)
$out = [IO.File]::Create("C:\Users\[user]\Downloads\mstts-re\samples\test_winrt_zira.wav")
$in.CopyTo($out); $out.Dispose(); $in.Dispose()
