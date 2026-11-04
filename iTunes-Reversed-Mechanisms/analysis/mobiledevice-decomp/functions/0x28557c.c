// rea decompile_all
// name: _AMAuthInstallBundleWriteReceipt
// address: 0x28557c
// body: available
// range: 0x28557c-0x28572d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleWriteReceipt
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_48 = 0;
  uVar3 = _CFGetAllocator();
  iVar2 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                    (uVar3,param_2,&cf_amai_receipt_plist,0,&local_38);
  if (iVar2 == 0) {
    uVar3 = _CFGetAllocator(param_1);
    lVar4 = _CFPropertyListCreateData(uVar3,param_3,100,0,&local_48);
    if (local_48 == 0) {
      local_40 = param_3;
      if (lVar4 == 0) {
        iVar2 = 2;
        lVar4 = 0;
      }
      else {
        iVar2 = _AMAuthInstallPlatformMakeDirectoryForURL(local_38);
        if (iVar2 != 0) {
          uVar5 = _AMAuthInstallGetLocalizedStatusString(param_1,iVar2);
          uVar3 = 0;
          _AMAuthInstallLog(3,"AMAuthInstallBundleWriteReceipt",
                            "failed to create receipt directory: %@",uVar5);
          _AMAuthInstallLog(8,"AMAuthInstallBundleWriteReceipt","%@",local_38);
          goto LAB_002856f1;
        }
        uVar3 = _CFGetAllocator(param_1);
        iVar2 = _AMAuthInstallSupportWriteDataToFileURL(uVar3,lVar4,local_38,1);
        cVar1 = _CFBooleanGetValue(param_4);
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 8);
        if (cVar1 == '\0') {
          _SafeRelease(uVar3);
          uVar3 = _CFRetain(local_40);
          *(undefined8 *)(*(long *)(param_1 + 0x80) + 8) = uVar3;
        }
        else {
          _CFDictionarySetValue(uVar3,&cf_RecoveryOS,local_40);
        }
      }
      uVar3 = 0;
    }
    else {
      uVar3 = _CFErrorCopyDescription();
      _AMAuthInstallLog(3,"AMAuthInstallBundleWriteReceipt","%@",uVar3);
      iVar2 = 2;
    }
  }
  else {
    uVar3 = 0;
    lVar4 = 0;
  }
LAB_002856f1:
  _SafeRelease(local_38);
  _SafeRelease(lVar4);
  _SafeRelease(local_48);
  _SafeRelease(uVar3);
  return iVar2;
}

