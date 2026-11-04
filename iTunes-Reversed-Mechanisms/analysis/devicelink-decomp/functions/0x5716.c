// rea decompile_all
// name: __DLUploadFileToComputer
// address: 0x5716
// body: available
// range: 0x5716-0x58ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLUploadFileToComputer(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *local_40;
  long local_38;
  
  local_38 = 0;
  local_40 = (char *)0x0;
  iVar2 = __DLResolveAndValidatePath(*param_1,param_3);
  iVar3 = -1;
  if (iVar2 == 0) {
    lVar4 = _CFStringCreateWithFormat(0,0,&cf______,param_3,&cf_upload);
    iVar2 = __DLResolveAndValidatePath(*param_1,lVar4,&local_40,&local_38);
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
    if ((iVar2 != 0) ||
       ((iVar3 = _open(local_40,0x601,0x1a4), iVar3 < 0 &&
        (iVar2 = _DLStatusFromOSStatus(0xffffffff,&local_38), iVar2 != 0)))) goto LAB_000057aa;
    iVar2 = __DLReceiveFileForBulkOperation(param_1,iVar3,&local_38);
    _close(iVar3);
    if (iVar2 == 0) {
      iVar2 = _rename(local_40,(char *)0x0);
      iVar2 = _DLStatusFromOSStatus(iVar2,&local_38);
      goto LAB_000057c8;
    }
  }
  else {
LAB_000057aa:
    __DLReceiveFileForBulkOperation(param_1,iVar3,0);
    _close(iVar3);
  }
  _unlink(local_40);
LAB_000057c8:
  if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) == -0xd)) {
    lVar4 = __DLBulkOperationContextCreateResult(iVar2,local_38);
    __DLBulkOperationContextUpdate(param_1,param_2,lVar4,0);
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
    cVar1 = _DLShouldLog(6);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLUploadFileToComputer",6,&cf_UploadFile________d__,param_3,iVar2,local_38);
    }
  }
  if (local_38 != 0) {
    _CFRelease();
    local_38 = 0;
  }
  _free((void *)0x0);
  _free(local_40);
  return;
}

