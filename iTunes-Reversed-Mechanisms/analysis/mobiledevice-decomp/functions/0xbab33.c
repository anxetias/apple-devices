// rea decompile_all
// name: ___AFCConnectionFinalize
// address: 0xbab33
// body: available
// range: 0xbab33-0xbad55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbad51 to 0xbb022 _AFCLockFree (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___AFCConnectionFinalize(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _AFCLog(5,"%s(%p)","__AFCConnectionFinalize",param_1);
  _AFCLockLock(uVar1);
  if (*(int *)(param_1 + 0x10) == 1) {
    pcVar4 = "Finalizing connection %p which is still valid";
  }
  else {
    if (*(int *)(param_1 + 0x10) != 2) goto LAB_000bab99;
    pcVar4 = "Finalizing connection %p which has requested invalidation";
  }
  _AFCLog(1,pcVar4,param_1);
LAB_000bab99:
  uVar3 = _CFSetCreateCopy(0,*(undefined8 *)(param_1 + 0xa8));
  _CFSetApplyFunction(uVar3,___AFCConnectionInvalidateFileDescriptor,param_1);
  _CFRelease(uVar3);
  if (*(long *)(param_1 + 0x30) != 0) {
    _CFSocketInvalidate();
    _CFRelease(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (((*(long *)(param_1 + 0xd0) != 0) && (*(char *)(param_1 + 0x3c) == '\x01')) &&
     (*(char *)(param_1 + 0x3d) == '\x01')) {
    _SSL_free();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    _AFCLockLock(lVar2);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _AFCLockUnlock(lVar2);
    _AFCLockFree(lVar2);
  }
  if (*(int *)(param_1 + 0x4e8) != -1) {
    _close(*(int *)(param_1 + 0x4e8));
    *(undefined4 *)(param_1 + 0x4e8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x4ec) != -1) {
    _close(*(int *)(param_1 + 0x4ec));
    *(undefined4 *)(param_1 + 0x4ec) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x4f0) != -1) {
    _close(*(int *)(param_1 + 0x4f0));
    *(undefined4 *)(param_1 + 0x4f0) = 0xffffffff;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 200) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  _AFCLockUnlock(uVar1);
  _AFCLockFree(uVar1);
  return;
}

