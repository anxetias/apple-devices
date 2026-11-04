// rea decompile_all
// name: ___AFCConnectionInvalidate
// address: 0xb9c18
// body: available
// range: 0xb9c18-0xb9e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb9c68 to 0xbb076 _AFCLockUnlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___AFCConnectionInvalidate(long param_1)

{
  long lVar1;
  long local_28;
  
  local_28 = param_1;
  _AFCLog(5,"__AFCConnectionInvalidate(%p)",param_1);
  _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x10) == 1) {
    _AFCLog(2,"Warning: connection %p state going from valid->invalid",param_1);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  _CFRetain(param_1);
  if (*(long *)(param_1 + 0x30) != 0) {
    _CFSocketInvalidate();
    _CFRelease(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if ((*(int *)(param_1 + 0x38) != -1) && (*(char *)(param_1 + 0x3c) == '\x01')) {
    _shutdown(*(int *)(param_1 + 0x38),2);
    _close(*(int *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x4f0) != -1) {
    _write(*(int *)(param_1 + 0x4f0),&local_28,1);
    param_1 = local_28;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    _CFRunLoopSourceInvalidate();
    *(undefined8 *)(local_28 + 0xb0) = 0;
    param_1 = local_28;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    _CFRunLoopSourceInvalidate();
    *(undefined8 *)(local_28 + 0xb8) = 0;
    param_1 = local_28;
  }
  lVar1 = ___AFCDequeue(param_1,*(undefined8 *)(param_1 + 0x98));
  while (lVar1 != 0) {
    ___AFCOperationSetClientError
              (lVar1,0xe800400b,
               "/AppleInternal/Library/BuildRoots/4~CajzugCNjBto8zJRx1iSlPr8MUHEGs7q33K8xW8/Library/Caches/com.apple.xbs/Sources/AppleFileConduit/connection.c"
               ,0x3ca,"Connection invalidated");
    ___AFCConnectionNotifyOperationComplete(local_28,lVar1);
    _CFRelease(lVar1);
    lVar1 = ___AFCDequeue(local_28,*(undefined8 *)(local_28 + 0x98));
  }
  lVar1 = ___AFCDequeue(local_28,*(undefined8 *)(local_28 + 0xa0));
  while (lVar1 != 0) {
    ___AFCOperationSetClientError
              (lVar1,0xe800400b,
               "/AppleInternal/Library/BuildRoots/4~CajzugCNjBto8zJRx1iSlPr8MUHEGs7q33K8xW8/Library/Caches/com.apple.xbs/Sources/AppleFileConduit/connection.c"
               ,0x3d6,"Connection invalidated");
    ___AFCConnectionNotifyOperationComplete(local_28,lVar1);
    _CFRelease(lVar1);
    lVar1 = ___AFCDequeue(local_28,*(undefined8 *)(local_28 + 0xa0));
  }
  _AFCConditionSignal(*(undefined8 *)(local_28 + 0x18));
  if (*(code **)(local_28 + 0xd8) != (code *)0x0) {
    (**(code **)(local_28 + 0xd8))(local_28,2,0);
  }
  _AFCLockUnlock(*(undefined8 *)(local_28 + 0x88));
  _CFRelease(local_28);
  return;
}

