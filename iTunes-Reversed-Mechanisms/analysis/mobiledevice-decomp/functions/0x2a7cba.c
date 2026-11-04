// rea decompile_all
// name: _AppleTCONRestoreInfoCopyFirmware
// address: 0x2a7cba
// body: available
// range: 0x2a7cba-0x2a7cf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a7ceb to 0x225098 _AppleTCONDP835RestoreInfoCopyFirmware (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2a7cf4 to 0x22623f _AppleTCONDP855RestoreInfoCopyFirmware (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AppleTCONRestoreInfoCopyFirmware
               (__CFDictionary *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  _AppleTCONLoggingRegisterLogSink(param_2,param_3);
  iVar1 = getAppleTCONChipID(param_1);
  if (iVar1 == 0x835) {
    _AppleTCONDP835RestoreInfoCopyFirmware();
    return;
  }
  _AppleTCONDP855RestoreInfoCopyFirmware(param_1,param_4);
  return;
}

