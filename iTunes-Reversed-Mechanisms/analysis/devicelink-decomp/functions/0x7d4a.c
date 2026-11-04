// rea decompile_all
// name: __DLGetFreeDiskSpaceFromComputer
// address: 0x7d4a
// body: available
// range: 0x7d4a-0x7ec9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7ec5 to 0xee55 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLGetFreeDiskSpaceFromComputer(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  void *local_8b0;
  cfstringStruct *local_8a8;
  undefined1 local_8a0 [2168];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00015070;
  local_8a8 = (cfstringStruct *)0x0;
  local_8b0 = (void *)0x0;
  if (*(long *)(param_1 + 0x98) == 0) {
    local_8a8 = &cf_Rootdirectorynotset;
    iVar2 = -1;
  }
  else {
    iVar2 = _DLGetFileSystemRepresentation(*(long *)(param_1 + 0x98),&local_8b0,&local_8a8);
    if (iVar2 == 0) {
      iVar2 = _statfs_INODE64(local_8b0,local_8a0);
      if (iVar2 == 0) {
        iVar2 = 0;
        lVar3 = _CFNumberCreate(0,0xb);
        goto LAB_00007df1;
      }
      iVar2 = _DLStatusFromOSStatus(0xffffffff,&local_8a8);
    }
  }
  lVar3 = 0;
LAB_00007df1:
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLGetFreeDiskSpaceFromComputer",6,&cf_DLGetFreeDiskSpace____d____,iVar2,local_8a8,
            lVar3);
  }
  __DLSendStatusResponse(param_1,iVar2,local_8a8,lVar3);
  if (local_8a8 != (cfstringStruct *)0x0) {
    _CFRelease();
    local_8a8 = (cfstringStruct *)0x0;
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  _free(local_8b0);
  if (*(long *)PTR____stack_chk_guard_00015070 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

