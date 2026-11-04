// rea decompile_all
// name: __AMRAuthInstallCopyTrustObjectOverride
// address: 0xfad21
// body: available
// range: 0xfad21-0xfaf79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMRAuthInstallCopyTrustObjectOverride
          (long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_40;
  long local_38;
  
  lVar3 = 0;
  local_38 = 0;
  local_40 = 0;
  uVar6 = 1;
  if (param_4 == (long *)0x0 || param_1 == 0) goto LAB_000faece;
  lVar3 = _CFStringCompare(param_2,&cf_FDRTrustObjectFile,0);
  if ((lVar3 == 0) &&
     (lVar3 = _CFDictionaryGetValue(param_1,&cf_FDRUseEngineering),
     lVar3 == *(long *)PTR__kCFBooleanTrue_00441110)) {
    _AMRLog(6,&cf_usingEngineeringFDRtrustobjectfile);
    lVar3 = _CFRetain(&
                      cf_http___gg_engr_apple_com_8080_fdrtrustobject_80B382A9F7CC401979395559F3B7EAAF7156684FC3B3CCD262ABE9C64EBEC57A
                     );
    if (lVar3 == 0) goto LAB_000fad98;
LAB_000fadb6:
    cVar1 = _CFStringHasPrefix(lVar3,&cf_http);
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    if (cVar1 == '\0') {
      lVar5 = _AMSupportCreateURLFromString(uVar6,lVar3);
      *param_4 = lVar5;
      lVar4 = 0;
      if (lVar5 != 0) goto LAB_000faea8;
LAB_000faf6f:
      uVar6 = 0x12;
    }
    else {
      lVar4 = _CFURLCreateWithString(uVar6,lVar3,0);
      if (lVar4 == 0) {
        __AMRAuthInstallCopyTrustObjectOverride_cold_6();
        uVar6 = 0x12;
        lVar4 = 0;
      }
      else {
        iVar2 = _AMSupportHttpCreateDataFromURL(0,lVar4,0,&local_38);
        if (iVar2 == 0) {
          if (local_38 == 0) {
            __AMRAuthInstallCopyTrustObjectOverride_cold_5();
          }
          else {
            iVar2 = _AMRAuthInstallCopyPersonalizedBundleSupportRecoveryOSURL
                              (param_1,*(undefined8 *)PTR__kCFBooleanFalse_00441108,&local_40);
            if (iVar2 == 0) {
              lVar5 = _CFURLCreateCopyAppendingPathComponent(uVar6,local_40,param_3,0);
              *param_4 = lVar5;
              if (lVar5 == 0) {
                __AMRAuthInstallCopyTrustObjectOverride_cold_4();
                goto LAB_000faf6f;
              }
              iVar2 = _AMSupportWriteDataToFileURL(uVar6,local_38,lVar5,1);
              if (iVar2 == 0) goto LAB_000faea8;
              __AMRAuthInstallCopyTrustObjectOverride_cold_3();
            }
            else {
              __AMRAuthInstallCopyTrustObjectOverride_cold_2();
            }
          }
          uVar6 = 6;
        }
        else {
          __AMRAuthInstallCopyTrustObjectOverride_cold_1();
          uVar6 = 0xffffffff;
        }
      }
    }
  }
  else {
LAB_000fad98:
    uVar6 = _CFStringGetTypeID();
    lVar3 = __AMRAuthInstallCopyOptionOrPreference(param_1,0,param_2,uVar6);
    if (lVar3 != 0) goto LAB_000fadb6;
    lVar3 = 0;
    _AMRLog(3,&cf_nooverridetrustobjectfound);
    lVar4 = 0;
LAB_000faea8:
    uVar6 = 0;
  }
  if (local_40 != 0) {
    _CFRelease();
    local_40 = 0;
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
LAB_000faece:
  if (local_38 != 0) {
    _CFRelease();
    local_38 = 0;
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return uVar6;
}

