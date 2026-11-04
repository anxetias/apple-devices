// rea decompile_all
// name: _handleReceiptManifestRequest
// address: 0x26c587
// body: available
// range: 0x26c587-0x26c731 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleReceiptManifestRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*, __CFError**)
    */

int _handleReceiptManifestRequest
              (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  long local_40;
  long local_38;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  local_40 = 0;
  local_38 = 0;
  lVar3 = _CFDictionaryGetValue
                    (*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),
                     &cf_PersonalizedRestoreBundlePath);
  if (lVar3 == 0) {
    pcVar8 = &cf_personalizedBundlePathisNULL;
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _CFURLCreateWithFileSystemPath(uVar1,lVar3,0,1);
    if (lVar3 != 0) {
      uVar4 = _CFGetAllocator(uVar4);
      uVar5 = _AMAuthInstallBundleGetReceiptComponent();
      _AMSupportCopyURLWithAppendedComponent(uVar4,lVar3,uVar5,0,&local_40);
      if (local_40 == 0) {
        pcVar8 = &cf_receiptURLisNULL;
LAB_0026c718:
        _AMRLog(3,pcVar8);
        iVar2 = -1;
      }
      else {
        _AMSupportCreateDictionaryFromFileURL(uVar1,&local_38);
        if (local_38 == 0) {
          pcVar8 = &cf_receiptisNULL;
          goto LAB_0026c718;
        }
        lVar6 = _CFDictionaryGetValue(local_38,&cf_Manifest);
        if (lVar6 == 0) {
          pcVar8 = &cf_receiptManifestisNULL;
          goto LAB_0026c718;
        }
        lVar7 = _CFDictionaryCreateMutable
                          (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar7 != 0) {
          _CFDictionarySetValue(lVar7,&cf_ReceiptManifest,lVar6);
          iVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar7);
          iVar2 = (uint)(iVar2 != 0) * 9;
          goto LAB_0026c6a6;
        }
        iVar2 = 0x12;
      }
      lVar7 = 0;
      goto LAB_0026c6a6;
    }
    pcVar8 = &cf_personalizedBundleURLisNULL;
  }
  lVar3 = 0;
  _AMRLog(3,pcVar8);
  iVar2 = -1;
  lVar7 = 0;
LAB_0026c6a6:
  _AMSupportSafeRelease(lVar3);
  _AMSupportSafeRelease(local_40);
  _AMSupportSafeRelease(local_38);
  _AMSupportSafeRelease(lVar7);
  return iVar2;
}

