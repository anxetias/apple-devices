// rea decompile_all
// name: _AMAuthInstallBasebandFinalize
// address: 0x27d6b3
// body: available
// range: 0x27d6b3-0x27d7dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x27d7d9 to 0x1b3757 _SafeRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMAuthInstallBasebandFinalize(long param_1)

{
  if (*(long *)(param_1 + 0xb0) != 0) {
    _AMAuthInstallLog(3,"AMAuthInstallBasebandFinalize","*********************************");
    _AMAuthInstallLog(3,"AMAuthInstallBasebandFinalize","* unacknowledged fusing program *");
    _AMAuthInstallLog(3,"AMAuthInstallBasebandFinalize","*********************************");
  }
  __AMAuthInstallBasebandParametersFinalize(*(undefined8 *)(param_1 + 0x30));
  _AMAuthInstallBasebandLocalSetSigningParameters(param_1,0,0,0,0,0);
  _SafeRelease(*(undefined8 *)(param_1 + 0xa0));
  _SafeRelease(*(undefined8 *)(param_1 + 0xa8));
  _SafeRelease(*(undefined8 *)(param_1 + 0xb0));
  _SafeRelease(*(undefined8 *)(param_1 + 0xc0));
  _SafeRelease(*(undefined8 *)(param_1 + 200));
  _SafeRelease(*(undefined8 *)(param_1 + 0xd0));
  _SafeRelease(*(undefined8 *)(param_1 + 0xd8));
  _SafeRelease(*(undefined8 *)(param_1 + 0x88));
  _SafeRelease(*(undefined8 *)(param_1 + 0xf0));
  _SafeRelease(*(undefined8 *)(param_1 + 0x108));
  _SafeRelease(*(undefined8 *)(param_1 + 0xf8));
  _SafeRelease(*(undefined8 *)(param_1 + 0xe8));
  _SafeRelease(*(undefined8 *)(param_1 + 0x110));
  _SafeRelease(*(undefined8 *)(param_1 + 0x118));
  return;
}

