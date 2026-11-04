// rea decompile_all
// name: _AMRAuthInstallBundleSupportsProductType
// address: 0xf91c0
// body: available
// range: 0xf91c0-0xf93b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRAuthInstallBundleSupportsProductType(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  cfstringStruct *pcVar9;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_48 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    _AMRAuthInstallBundleSupportsProductType_cold_5();
LAB_000f9365:
    lVar5 = 0;
  }
  else {
    if (param_2 == 0) {
      _AMRAuthInstallBundleSupportsProductType_cold_4();
      goto LAB_000f9365;
    }
    lVar3 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
    if (lVar3 == 0) {
      _AMRAuthInstallBundleSupportsProductType_cold_3();
      goto LAB_000f9365;
    }
    uVar4 = _CFGetAllocator(param_1);
    lVar5 = _CFURLCreateWithFileSystemPath(uVar4,lVar3,0,1);
    if (lVar5 != 0) {
      uVar4 = _CFGetAllocator(param_1);
      iVar2 = _AMSupportCopyURLWithAppendedComponent
                        (uVar4,lVar5,&cf_BuildManifest_plist,0,&local_48);
      if (iVar2 == 0) {
        uVar4 = _CFGetAllocator(param_1);
        iVar2 = _AMAuthInstallSupportCreateDictionaryFromFileURL(uVar4,&local_40,local_48);
        if (iVar2 == 0) {
          uVar4 = _CFDictionaryGetValue(local_40,&cf_SupportedProductTypes);
          lVar3 = _CFGetTypeID(uVar4);
          lVar6 = _CFArrayGetTypeID();
          if (lVar3 == lVar6) {
            local_38 = lVar5;
            lVar3 = _CFArrayGetCount(uVar4);
            puVar8 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
            if (0 < lVar3) {
              lVar3 = 0;
              do {
                uVar7 = _CFArrayGetValueAtIndex(uVar4,lVar3);
                lVar5 = _CFGetTypeID(uVar7);
                lVar6 = _CFStringGetTypeID();
                if (lVar5 != lVar6) {
                  _AMRAuthInstallBundleSupportsProductType_cold_2();
                  uVar4 = 0;
                  lVar5 = local_38;
                  goto LAB_000f931c;
                }
                cVar1 = _CFStringHasPrefix(uVar7,&cf_RealityDevice);
                puVar8 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
                if (cVar1 != '\0') break;
                lVar3 = lVar3 + 1;
                lVar5 = _CFArrayGetCount(uVar4);
                puVar8 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
              } while (lVar3 < lVar5);
            }
            uVar4 = *puVar8;
            lVar5 = local_38;
            goto LAB_000f931c;
          }
          _AMRAuthInstallBundleSupportsProductType_cold_1();
          goto LAB_000f93ae;
        }
        pcVar9 = &cf_AMAuthInstallSupportCreateDictionaryFromFileURLfailed_d;
      }
      else {
        pcVar9 = &cf_AMAuthInstallPlatformCopyURLWithAppendedComponentfailed_d;
      }
      uVar4 = 0;
      _AMRLog(3,pcVar9,iVar2);
      goto LAB_000f931c;
    }
    lVar5 = 0;
    _AMRLog(3,&cf_failedtocreatebundleURLfrom____,lVar3);
  }
LAB_000f93ae:
  uVar4 = 0;
LAB_000f931c:
  _AMSupportSafeRelease(lVar5);
  _AMSupportSafeRelease(local_48);
  _AMSupportSafeRelease(local_40);
  return uVar4;
}

