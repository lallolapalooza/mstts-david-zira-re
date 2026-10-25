Add-Type -AssemblyName System.Runtime.WindowsRuntime
$null = [Windows.Media.SpeechSynthesis.SpeechSynthesizer,Windows.Media.SpeechSynthesis,ContentType=WindowsRuntime]
$asTaskGeneric = ([System.WindowsRuntimeSystemExtensions].GetMethods() | Where-Object { $_.Name -eq 'AsTask' -and $_.GetParameters().Count -eq 1 -and $_.GetParameters()[0].ParameterType.Name -eq 'IAsyncOperation`1' })[0]
function Await($WinRtTask, $ResultType) { $t = $asTaskGeneric.MakeGenericMethod($ResultType); $n = $t.Invoke($null,@($WinRtTask)); $n.Wait(-1)|Out-Null; $n.Result }
$synth = New-Object Windows.Media.SpeechSynthesis.SpeechSynthesizer
$synth.Voice = [Windows.Media.SpeechSynthesis.SpeechSynthesizer]::AllVoices | Where-Object { $_.DisplayName -eq 'Microsoft David' } | Select-Object -First 1
$stream = Await ($synth.SynthesizeTextToStreamAsync("The quick brown fox jumps over the lazy dog.")) ([Windows.Media.SpeechSynthesis.SpeechSynthesisStream])
$in = [System.IO.WindowsRuntimeStreamExtensions]::AsStreamForRead($stream)
$out = [IO.File]::Create("C:\Users\[user]\Downloads\mstts-re\samples\test_winrt_david.wav")
$in.CopyTo($out); $out.Dispose(); $in.Dispose()
