// rea decompile_all
// name: _AFCConnectionProcessOperation.cold.1
// address: 0x269ef8
// body: available
// range: 0x269ef8-0x269fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x269fb7 to 0xb9a65 ___AFCConnectionNotifyOperationComplete (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AFCConnectionProcessOperation_cold_1
               (undefined8 *param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  
  _AFCLockUnlock(*param_1);
  _AFCLockLock(*(undefined8 *)(param_2 + 0x90));
  iVar1 = ___AFCConnectionSendOperation(param_2,param_3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_3 + 0x18) = 4;
    iVar1 = ___AFCConnectionReceiveOperation(param_2,param_3);
  }
  *param_4 = iVar1;
  _AFCLockUnlock(*(undefined8 *)(param_2 + 0x90));
  if (iVar1 == -0x17ffbff5) {
    _AFCLog(5,"Socket closed when reading.\n");
    ___AFCConnectionInvalidate(param_2);
  }
  else if (iVar1 == 0) goto LAB_00269fa9;
  if (*(int *)(param_3 + 0x28) == 0) {
    lVar2 = _AFCCopyAndClearLastErrorInfo();
    ___AFCOperationSetClientErrorWithInfo(param_3,iVar1,lVar2);
    if (lVar2 != 0) {
      _CFRelease(lVar2);
    }
  }
LAB_00269fa9:
  ___AFCConnectionNotifyOperationComplete(param_2,param_3);
  return;
}

