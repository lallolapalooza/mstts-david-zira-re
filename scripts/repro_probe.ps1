Add-Type -AssemblyName System.Speech
$fmt = New-Object System.Speech.AudioFormat.SpeechAudioFormatInfo(16000,[System.Speech.AudioFormat.AudioBitsPerSample]::Sixteen,[System.Speech.AudioFormat.AudioChannel]::Mono)
$root = Split-Path -Parent $PSScriptRoot
$text = (Get-Content "$root\corpus\plain.txt")[0]
New-Item -ItemType Directory -Force -Path "$root\artifacts\probes" | Out-Null
foreach ($p in @(@('david','Microsoft David Desktop'),@('zira','Microsoft Zira Desktop'))) {
  $s = New-Object System.Speech.Synthesis.SpeechSynthesizer
  $s.SelectVoice($p[1]); $s.SetOutputToWaveFile("$root\artifacts\probes\repro_$($p[0]).wav",$fmt); $s.Speak($text); $s.Dispose()
}
