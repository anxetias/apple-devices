// rea decompile_all
// name: __DLRemoveItemsOnComputerCallback
// address: 0x5111
// body: available
// range: 0x5111-0x51e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLRemoveItemsOnComputerCallback(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long local_30;
  
  local_30 = 0;
  if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) == -0xd)) {
    uVar2 = __DLRemoveItemOnComputer(*param_2,param_1,&local_30);
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) == -0xd)) {
      lVar3 = __DLBulkOperationContextCreateResult(uVar2,local_30);
      __DLBulkOperationContextUpdate(param_2,param_1,lVar3,1);
      if (lVar3 != 0) {
        _CFRelease(lVar3);
      }
      cVar1 = _DLShouldLog(6);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLRemoveItemsOnComputerCallback",6,&cf_RemoveItem________d__,param_1,uVar2,
                local_30);
      }
    }
    if (local_30 != 0) {
      _CFRelease();
    }
  }
  return;
}

