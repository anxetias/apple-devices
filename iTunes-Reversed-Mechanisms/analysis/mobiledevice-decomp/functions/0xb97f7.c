// rea decompile_all
// name: ___AFCConnectionPerformOperationCallBack
// address: 0xb97f7
// body: available
// range: 0xb97f7-0xb9918 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb9914 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___AFCConnectionPerformOperationCallBack(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  _AFCLog(5,"%s(%p)\n","__AFCConnectionPerformOperationCallBack",param_1);
  _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
  _CFRetain(param_1);
  do {
    if (*(int *)(param_1 + 0x10) != 1) {
LAB_000b98cf:
      cVar1 = *(char *)(param_1 + 0x20);
      if (cVar1 == '\x01') {
        *(undefined1 *)(param_1 + 0x20) = 0;
        ___AFCConnectionUnscheduleFromRunLoop(param_1);
      }
      _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
      if (*(int *)(param_1 + 0x10) == 2) {
        ___AFCConnectionInvalidate(param_1);
      }
      if (cVar1 != '\0') {
        _AFCConditionSignal(*(undefined8 *)(param_1 + 0x28));
      }
      _CFRelease(param_1);
      return;
    }
    lVar3 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0xa0));
    if (*(int *)(param_1 + 0x70) <= lVar3) goto LAB_000b98cf;
    _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
    lVar3 = ___AFCDequeue(param_1,*(undefined8 *)(param_1 + 0x98));
    if (lVar3 == 0) {
      _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
      goto LAB_000b98cf;
    }
    iVar2 = ___AFCConnectionSendOperation(param_1,lVar3);
    if (iVar2 == 0) {
      ___AFCEnqueue(param_1,*(undefined8 *)(param_1 + 0xa0),lVar3);
      *(undefined4 *)(lVar3 + 0x18) = 4;
    }
    else {
      ___AFCConnectionNotifyOperationComplete(param_1,lVar3);
      _CFRelease(lVar3);
    }
    _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
  } while( true );
}

