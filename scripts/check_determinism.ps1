Add-Type -AssemblyName System.Speech
$fmt = New-Object System.Speech.AudioFormat.SpeechAudioFormatInfo(16000,[System.Speech.AudioFormat.AudioBitsPerSample]::Sixteen,[System.Speech.AudioFormat.AudioChannel]::Mono)
$base = Join-Path (Split-Path -Parent $PSScriptRoot) "samples\determinism"
New-Item -ItemType Directory -Force -Path $base | Out-Null
foreach ($n in @('Microsoft David Desktop','Microsoft Zira Desktop')) {
  for ($i=1; $i -le 3; $i++) {
    $s = New-Object System.Speech.Synthesis.SpeechSynthesizer
    $s.SelectVoice($n)
    $short = $n.Split(' ')[1]
    $s.SetOutputToWaveFile("$base\${short}_$i.wav", $fmt)
    $s.Speak("Parity check 123. The quick brown fox jumps over the lazy dog.")
    $s.Dispose()
  }
}
Get-ChildItem $base | Get-FileHash -Algorithm SHA256 | Format-Table Hash,Path -Auto
