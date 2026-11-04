// rea decompile_all
// name: __AMRestoreDestroyDeviceInfo
// address: 0xe0e8e
// body: available
// range: 0xe0e8e-0xe0f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe0eff to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xe0f07 to 0x26d05f __AMRestoreDestroyDeviceInfo.cold.1 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestoreDestroyDeviceInfo(long param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    __AMRestoreDestroyDeviceInfo_cold_1();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    _CFRelease();
    return;
  }
  return;
}

