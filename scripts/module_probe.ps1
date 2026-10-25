Add-Type -AssemblyName System.Speech
foreach ($n in @('Microsoft David Desktop','Microsoft Zira Desktop')) {
  $s = New-Object System.Speech.Synthesis.SpeechSynthesizer
  $s.SelectVoice($n)
  $s.SetOutputToNull()
  $s.Speak("module probe")
  $mods = [System.Diagnostics.Process]::GetCurrentProcess().Modules | Where-Object { $_.ModuleName -match 'MSTTS|Speech' } | Select-Object ModuleName,FileName,FileVersionInfo
  Write-Host "=== $n"
  $mods | ForEach-Object { Write-Host $_.ModuleName $_.FileName $_.FileVersionInfo.FileVersion }
  $s.Dispose()
}
