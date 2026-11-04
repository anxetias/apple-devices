// rea decompile_all
// name: __DLMoveItemsOnComputerCallback
// address: 0x4d09
// body: available
// range: 0x4d09-0x4e3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLMoveItemsOnComputerCallback(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *local_48;
  char *local_40;
  long local_38;
  
  local_38 = 0;
  local_48 = (char *)0x0;
  local_40 = (char *)0x0;
  uVar1 = *param_3;
  if ((*(int *)(param_3 + 9) == 0) || (*(int *)(param_3 + 9) == -0xd)) {
    iVar3 = __DLResolveAndValidatePath(uVar1,param_1,&local_48,&local_38);
    if (iVar3 == 0) {
      iVar3 = __DLResolveAndValidatePath(uVar1,param_2,&local_40,&local_38);
      if (iVar3 == 0) {
        iVar3 = _rename(local_48,local_40);
        iVar3 = _DLStatusFromOSStatus(iVar3,&local_38);
      }
    }
    if ((*(int *)(param_3 + 9) == 0) || (*(int *)(param_3 + 9) == -0xd)) {
      lVar4 = __DLBulkOperationContextCreateResult(iVar3,local_38);
      __DLBulkOperationContextUpdate(param_3,param_1,lVar4,1);
      if (lVar4 != 0) {
        _CFRelease(lVar4);
      }
      cVar2 = _DLShouldLog(6);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLMoveItemsOnComputerCallback",6,&cf_MoveItem_____________d__,param_1,param_2,
                iVar3,local_38);
      }
    }
  }
  if (local_38 != 0) {
    _CFRelease();
    local_38 = 0;
  }
  _free(local_48);
  _free(local_40);
  return;
}

