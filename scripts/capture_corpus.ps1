Add-Type -AssemblyName System.Speech
$root = Split-Path -Parent $PSScriptRoot
$fmt = New-Object System.Speech.AudioFormat.SpeechAudioFormatInfo(16000,[System.Speech.AudioFormat.AudioBitsPerSample]::Sixteen,[System.Speech.AudioFormat.AudioChannel]::Mono)
$texts = [IO.File]::ReadAllLines("$root\corpus\plain.txt", [Text.Encoding]::UTF8) | Where-Object { $_.Trim().Length -gt 0 }
$voices = @{ 'david' = 'Microsoft David Desktop'; 'zira' = 'Microsoft Zira Desktop' }
foreach ($key in $voices.Keys) {
  $dir = "$root\samples\$key"
  New-Item -ItemType Directory -Force -Path $dir | Out-Null
  $i = 0
  foreach ($t in $texts) {
    $i++
    $name = '{0:D3}.wav' -f $i
    $s = New-Object System.Speech.Synthesis.SpeechSynthesizer
    $s.SelectVoice($voices[$key])
    $s.SetOutputToWaveFile("$dir\$name", $fmt)
    $s.Speak($t)
    $s.Dispose()
    Write-Host "$key $name $($t.Substring(0,[Math]::Min(40,$t.Length)))"
  }
  $s = New-Object System.Speech.Synthesis.SpeechSynthesizer
  $s.SelectVoice($voices[$key])
  $s.SetOutputToWaveFile("$dir\ssml.wav", $fmt)
  $s.SpeakSsml((Get-Content "$root\corpus\ssml.xml" -Raw))
  $s.Dispose()
}
