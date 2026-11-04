// rea decompile_all
// name: ___DLCopyItemOnComputer
// address: 0x4b16
// body: available
// range: 0x4b16-0x4c5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ___DLCopyItemOnComputer
              (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_50 = 0;
  uVar1 = *param_3;
  local_40 = param_2;
  iVar5 = __DLCreateItemAttributes(uVar1,param_1,&local_50);
  lVar2 = local_50;
  if (iVar5 == 0) {
    local_48 = param_3;
    local_38 = param_4;
    uVar6 = _CFDictionaryGetValue(local_50,&cf_DLFileType);
    lVar7 = _CFStringCompare(uVar6,&cf_DLFileTypeDirectory,0);
    puVar3 = local_38;
    uVar6 = local_40;
    if (lVar7 == 0) {
      iVar5 = ___DLCreateDirectoryOnComputer(uVar1,local_40,local_38);
      if ((iVar5 == 0) || (iVar5 == -7)) {
        local_60 = local_48;
        local_58 = local_40;
        iVar5 = __DLEnumerateContentsOfDirectoryOnComputer
                          (uVar1,param_1,__DLCopyItemOnComputerCallback,&local_60,local_38);
      }
    }
    else {
      iVar5 = __DLCopyFileOnComputer(param_1,local_40,local_48,local_38);
      cVar4 = _DLShouldLog(6);
      if (cVar4 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"__DLCopyItemOnComputer",6,&cf_DLCopyFile_____________d__,param_1,uVar6,iVar5,
                *puVar3);
      }
    }
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  return iVar5;
}

