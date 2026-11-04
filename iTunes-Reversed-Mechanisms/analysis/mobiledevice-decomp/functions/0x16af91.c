// rea decompile_all
// name: ___thr_AMRestorableBuildCopyRestoreBundleURL
// address: 0x16af91
// body: available
// range: 0x16af91-0x16b2c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableBuildCopyRestoreBundleURL(long *param_1)

{
  long lVar1;
  int iVar2;
  long in_RAX;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  long local_38;
  
  if (param_1 == (long *)0x0) {
    _AMRSafeLogAndRelease(3,&cf_Can_tcopyrestorebundleURLwithNULLargs);
    return;
  }
  lVar5 = *param_1;
  uVar7 = 0xfa1;
  local_38 = in_RAX;
  if (lVar5 == 0) {
    pcVar8 = &cf_Can_tcopyrestorebundleURLwithoutmetadata;
LAB_0016b215:
    lVar6 = 0;
  }
  else {
    lVar6 = param_1[1];
    if (lVar6 == 0) {
      pcVar8 = &cf_Can_tcopyrestorebundleURLwithoutdevice;
      goto LAB_0016b215;
    }
    lVar1 = param_1[2];
    if (lVar1 == 0) {
      pcVar8 = &cf_Can_tcopyrestorebundleURLwithNULLvariant;
      goto LAB_0016b215;
    }
    if (*(int *)(lVar5 + 0x20) == 2) {
      if (*(long *)(lVar5 + 0x10) == 0) {
        pcVar8 = &cf_Can_tgetrestorebundleURLwithNULLbaseURL;
        lVar5 = 0;
        lVar6 = _AMRCreateErrorWithDomain
                          (&cf_Can_tgetrestorebundleURLwithNULLbaseURL,0xfa1,
                           &cf_com_apple_MobileDevice_MobileRestore,0);
      }
      else {
        lVar5 = _CFRetain();
        lVar6 = 0;
        pcVar8 = (cfstringStruct *)0x0;
      }
      _AMRSafeLogAndRelease(3,pcVar8);
LAB_0016b19b:
      if (lVar5 != 0) {
        _CFRetain(lVar5);
        param_1[4] = lVar5;
        pcVar8 = (cfstringStruct *)0x0;
        goto LAB_0016b1b3;
      }
      uVar7 = 4000;
      pcVar8 = &cf_FailedtogetrestorebundleURL;
    }
    else {
      if (*(int *)(lVar5 + 0x20) == 3) {
        local_38 = 0;
        iVar2 = 0xfa1;
        if (*(long *)(lVar5 + 0x18) == 0) {
          pcVar8 = &cf_Can_tgetrestorebundleconfigwithNULLcontent;
LAB_0016b160:
          lVar6 = _AMRCreateErrorWithDomain(pcVar8,iVar2,&cf_com_apple_MobileDevice_MobileRestore,0)
          ;
          if (local_38 != 0) {
            _CFRelease();
          }
          local_38 = 0;
        }
        else {
          if (*(long *)(lVar5 + 0x10) == 0) {
            pcVar8 = &cf_Can_tgetrestorebundlewithoutbaseURL;
            goto LAB_0016b160;
          }
          lVar3 = _CFDictionaryGetValue(*(long *)(lVar5 + 0x18),&cf_RestoreBundles);
          if (lVar3 == 0) {
            pcVar8 = &cf_FailedtolocaterequiredkeyRestoreBundles;
LAB_0016b15b:
            iVar2 = 0xfa1;
            goto LAB_0016b160;
          }
          lVar4 = _CFDictionaryGetCount(lVar3);
          if (lVar4 == 0) {
            pcVar8 = &cf_Restorebundlesdictionaryisemtpyinmetadata;
            goto LAB_0016b15b;
          }
          lVar3 = _CFDictionaryGetValue(lVar3,lVar6);
          if (lVar3 == 0) {
            pcVar8 = &cf_Novariantsexistfordevice;
            goto LAB_0016b15b;
          }
          lVar4 = _CFDictionaryGetCount(lVar3);
          if (lVar4 == 0) {
            pcVar8 = &cf_Norestorebundlesinboardconfigentry;
            goto LAB_0016b15b;
          }
          lVar3 = _CFDictionaryGetValue(lVar3,lVar1);
          if (lVar3 == 0) {
            pcVar8 = (cfstringStruct *)_AMRMakeString(&cf_Variant__doesn_texistfor__,lVar1,lVar6);
            iVar2 = 0xfa1;
            if (pcVar8 != (cfstringStruct *)0x0) goto LAB_0016b160;
            pcVar8 = (cfstringStruct *)0x0;
            lVar6 = 0;
          }
          else {
            uVar7 = _CFDictionaryGetValue(lVar3,&cf_RestoreBundlePath);
            lVar6 = 0;
            iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                              (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                               *(undefined8 *)(lVar5 + 0x10),uVar7,0,&local_38);
            if (iVar2 != 0) {
              pcVar8 = &cf_FailedtocreateURLtorestorebundle;
              goto LAB_0016b160;
            }
            pcVar8 = (cfstringStruct *)0x0;
          }
        }
        _AMRSafeLogAndRelease(3,pcVar8);
        lVar5 = local_38;
        goto LAB_0016b19b;
      }
      lVar6 = 0;
      lVar5 = _AMRMakeString(&cf_Unsupportedmetadatatype_d);
      uVar7 = 4000;
      pcVar8 = &cf_FailedtogetrestorebundleURL;
      if (lVar5 != 0) {
        lVar6 = _AMRCreateErrorWithDomain(lVar5,0xfa1,&cf_com_apple_MobileDevice_MobileRestore,0);
      }
    }
  }
  if (param_1[3] != 0) {
    uVar7 = _AMRCreateErrorWithDomain(pcVar8,uVar7,&cf_com_apple_MobileDevice_MobileRestore,lVar6);
    *(undefined8 *)param_1[3] = uVar7;
  }
  lVar5 = 0;
LAB_0016b1b3:
  _AMRSafeLogAndRelease(3,pcVar8);
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return;
}

