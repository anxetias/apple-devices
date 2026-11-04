// rea decompile_all
// name: _handlePreviousLogMessage
// address: 0xd5e96
// body: available
// range: 0xd5e96-0xd5f30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd5f07 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xd5f2c to 0xdf44a _AMRLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handlePreviousLogMessage(AMRestoreMuxedDeviceMessage*) */

void _handlePreviousLogMessage(AMRestoreMuxedDeviceMessage *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_PreviousRestoreLog);
  if (lVar2 == 0) {
    pcVar4 = &cf_receivedpreviouslogmessagewithnolog;
    uVar3 = 4;
  }
  else {
    lVar2 = __AMRestoreCreateScrubbedLog(*(undefined8 *)(lVar1 + 0x110),lVar2,_AMRLog);
    if (lVar2 != 0) {
      uVar3 = _CFRetain(lVar2);
      *(undefined8 *)(lVar1 + 0x198) = uVar3;
      _AMRLog(7,&cf_previousrestorefailed_______endofpreviousrestorelog____,lVar2);
      _CFRelease(lVar2);
      return;
    }
    pcVar4 = &cf_devicereturnedpreviousrestorelogbutscrubbingfailed;
    uVar3 = 7;
  }
  _AMRLog(uVar3,pcVar4);
  return;
}

