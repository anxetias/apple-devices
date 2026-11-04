// rea decompile_all
// name: _AMRestoreEnableFileLogging
// address: 0xe1af4
// body: available
// range: 0xe1af4-0xe1b68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe1b64 to 0xdf3df __AMRestoreErrorForErrno (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestoreEnableFileLogging(char *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (_logFD != -1) {
    _close(_logFD);
    _logFD = -1;
  }
  _logFD = _open(param_1,0x209,0x1a4);
  if (_logFD != -1) {
    _AMRLog(6,&cf_restorelibrarybuiltOct112026at23_02_35);
    return 0;
  }
  piVar1 = ___error();
  uVar2 = __AMRestoreErrorForErrno(*piVar1,0xb);
  return uVar2;
}

