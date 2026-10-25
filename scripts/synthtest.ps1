Add-Type -AssemblyName System.Speech
$s = New-Object System.Speech.Synthesis.SpeechSynthesizer
$fmt = New-Object System.Speech.AudioFormat.SpeechAudioFormatInfo(16000,[System.Speech.AudioFormat.AudioBitsPerSample]::Sixteen,[System.Speech.AudioFormat.AudioChannel]::Mono)
$root = Split-Path -Parent $PSScriptRoot
foreach ($n in @('Microsoft David Desktop','Microsoft Zira Desktop')) {
  $s.SelectVoice($n)
  $out = "$root\samples\test_$($n.Split(' ')[1]).wav"
  $s.SetOutputToWaveFile($out, $fmt)
  $s.Speak("The quick brown fox jumps over the lazy dog.")
  $s.SetOutputToNull()
  Write-Host $n $out
}
