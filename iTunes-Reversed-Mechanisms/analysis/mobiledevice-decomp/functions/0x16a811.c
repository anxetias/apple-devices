// rea decompile_all
// name: ___thr_AMRestorableBuildCopySupportedVariants
// address: 0x16a811
// body: available
// range: 0x16a811-0x16ab35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableBuildCopySupportedVariants(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  long local_40;
  long local_38;
  
  if (param_1 == (long *)0x0) {
    _AMRSafeLogAndRelease(3,&cf_Can_tcopysupportedvariantswithNULLargs);
    return;
  }
  lVar3 = param_1[1];
  uVar6 = 0xfa1;
  if (lVar3 == 0) {
    pcVar5 = &cf_Can_tcopysupportedvariantswithNULLboardconfig;
LAB_0016aabc:
    lVar3 = 0;
  }
  else {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      pcVar5 = &cf_Can_tcopysupportedvariantswithoutmetadata;
      goto LAB_0016aabc;
    }
    if (*(int *)(lVar1 + 0x20) == 2) {
      uVar6 = 0xfa1;
      if (*(long *)(lVar1 + 0x18) == 0) {
        pcVar5 = &cf_Can_tgetboardconfigwithNULLcontent;
LAB_0016aa24:
        lVar1 = 0;
        lVar3 = _AMRCreateErrorWithDomain(pcVar5,uVar6,&cf_com_apple_MobileDevice_MobileRestore,0);
      }
      else {
        lVar2 = _CFDictionaryGetValue(*(long *)(lVar1 + 0x18),&cf_BuildIdentities);
        if (lVar2 == 0) {
          pcVar5 = &cf_FailedtolocaterequiredkeyBuildIdentities;
          goto LAB_0016aa24;
        }
        lVar1 = _CFArrayGetCount(lVar2);
        if (lVar1 == 0) {
          pcVar5 = &cf_BuildIdentitiesarrayisemtpyinmetadata;
          goto LAB_0016aa24;
        }
        uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        uVar4 = _CFArrayGetCount(lVar2);
        lVar1 = _CFArrayCreateMutable(uVar6,uVar4,PTR__kCFTypeArrayCallBacks_004411a8);
        if (lVar1 == 0) {
          uVar6 = 0xfa2;
          pcVar5 = &cf_Failedtoallocatesupportedvariantsarray;
          goto LAB_0016aa24;
        }
        local_40 = lVar3;
        local_38 = lVar1;
        uVar6 = _CFArrayGetCount(lVar2);
        _CFArrayApplyFunction(lVar2,0,uVar6,__addVariantsForDevice,&local_40);
LAB_0016a99f:
        lVar3 = 0;
        pcVar5 = (cfstringStruct *)0x0;
      }
      _AMRSafeLogAndRelease(3,pcVar5);
      if (lVar1 != 0) {
        _CFRetain(lVar1);
        param_1[3] = lVar1;
        pcVar5 = (cfstringStruct *)0x0;
        goto LAB_0016aa63;
      }
      uVar6 = 4000;
      pcVar5 = &cf_Failedtocopysupportedvariantsforboardconfig;
    }
    else {
      if (*(int *)(lVar1 + 0x20) == 3) {
        uVar6 = 0xfa1;
        if (*(long *)(lVar1 + 0x18) == 0) {
          pcVar5 = &cf_Can_tgetvariantsconfigwithNULLcontent;
        }
        else {
          lVar1 = _CFDictionaryGetValue(*(long *)(lVar1 + 0x18),&cf_RestoreBundles);
          if (lVar1 == 0) {
            pcVar5 = &cf_FailedtolocaterequiredkeyRestoreBundles;
          }
          else {
            lVar2 = _CFDictionaryGetCount(lVar1);
            if (lVar2 == 0) {
              pcVar5 = &cf_Restorebundlesdictionaryisemtpyinmetadata;
            }
            else {
              lVar3 = _CFDictionaryGetValue(lVar1,lVar3);
              if (lVar3 == 0) {
                pcVar5 = &cf_Novariantsexistforboardconfig;
              }
              else {
                lVar1 = _CFDictionaryGetCount(lVar3);
                if (lVar1 == 0) {
                  pcVar5 = &cf_Norestorebundlesinboardconfigentry;
                }
                else {
                  lVar1 = _CFArrayCreateMutable
                                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                     PTR__kCFTypeArrayCallBacks_004411a8);
                  if (lVar1 != 0) {
                    _CFDictionaryApplyFunction(lVar3,__addKeysIntoArray,lVar1);
                    goto LAB_0016a99f;
                  }
                  pcVar5 = &cf_Failedtoallocatesupporteddevicesarray;
                  uVar6 = 0xfa2;
                }
              }
            }
          }
        }
        goto LAB_0016aa24;
      }
      lVar3 = 0;
      lVar1 = _AMRMakeString(&cf_Unsupportedmetadatatype_d);
      uVar6 = 4000;
      pcVar5 = &cf_Failedtocopysupportedvariantsforboardconfig;
      if (lVar1 != 0) {
        lVar3 = _AMRCreateErrorWithDomain(lVar1,0xfa1,&cf_com_apple_MobileDevice_MobileRestore,0);
      }
    }
  }
  if (param_1[2] != 0) {
    uVar6 = _AMRCreateErrorWithDomain(pcVar5,uVar6,&cf_com_apple_MobileDevice_MobileRestore,lVar3);
    *(undefined8 *)param_1[2] = uVar6;
  }
  lVar1 = 0;
LAB_0016aa63:
  _AMRSafeLogAndRelease(3,pcVar5);
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  return;
}

