// rea decompile_all
// name: __DLRemoveItemsUsingOldProtocol
// address: 0x4ead
// body: available
// range: 0x4ead-0x5001 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __DLRemoveItemsUsingOldProtocol
              (long param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = param_1;
  iVar2 = __DLProcessSyncMessageWithStatusResponse
                    (param_1,&local_30,param_5,0xd,&cf_DLMessageRemoveFiles,3,param_2,param_3,
                     *(undefined8 *)(param_1 + 0xa0));
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    uVar3 = _CFArrayGetCount(param_2);
    if (param_5 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *param_5;
    }
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLRemoveItemsUsingOldProtocol",6,&cf_RemoveFiles__d___d__,uVar3,iVar2,lVar4);
  }
  if (iVar2 == -0xd) {
    local_38 = _CFDictionaryCreateMutableCopy(0,0,local_30);
    _CFDictionaryApplyFunction(local_30,__DLRemoveItemsUsingOldProtocolCallback,&local_40);
    lVar4 = _CFDictionaryGetCount(local_38);
    if (lVar4 == 0) {
      iVar2 = 0;
      if ((param_5 != (long *)0x0) && (*param_5 != 0)) {
        _CFRelease();
        *param_5 = 0;
        iVar2 = 0;
      }
    }
    else {
      if (param_4 != (long *)0x0) {
        *param_4 = local_38;
        iVar2 = -0xd;
        goto LAB_00004fe5;
      }
      iVar2 = -0xd;
    }
  }
  if (local_38 != 0) {
    _CFRelease();
    local_38 = 0;
  }
LAB_00004fe5:
  if (local_30 != 0) {
    _CFRelease();
  }
  return iVar2;
}

