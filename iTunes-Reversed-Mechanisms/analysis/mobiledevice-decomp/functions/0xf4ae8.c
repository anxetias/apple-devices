// rea decompile_all
// name: __AMRestoreUpdaterSetInfoWithOverride
// address: 0xf4ae8
// body: available
// range: 0xf4ae8-0xf511a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRestoreUpdaterSetInfoWithOverride
              (long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6,
              long param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  int iVar11;
  long lVar12;
  long local_58;
  long local_50;
  long local_48;
  void *local_40;
  long local_38;
  
  local_58 = 0;
  if (param_1 == 0) {
    __AMRestoreUpdaterSetInfoWithOverride_cold_4(param_7);
    return -1;
  }
  if (param_2 == 0) {
    __AMRestoreUpdaterSetInfoWithOverride_cold_3(param_7);
  }
  else if (param_3 == 0) {
    __AMRestoreUpdaterSetInfoWithOverride_cold_2(param_7);
  }
  else if (param_4 == 0) {
    __AMRestoreUpdaterSetInfoWithOverride_cold_1(param_7);
  }
  else {
    lVar2 = _CFDictionaryGetValue(param_4,&cf_SourceRestoreBundlePath);
    if ((lVar2 == 0) && (lVar2 = _CFDictionaryGetValue(param_4,&cf_RestoreBundlePath), lVar2 == 0))
    {
      pcVar10 = &cf__s_failedtofindrestorebundlepathinrestoreoptionsfor__;
      uVar9 = 1;
    }
    else {
      lVar2 = _AMSupportCreateURLFromString(0,lVar2);
      if (lVar2 != 0) {
        lVar3 = _CFDictionaryGetValue(param_4,&cf_PersonalizedRestoreBundlePath);
        if (lVar3 == 0) {
          pcVar10 = &cf__s_failedtofindrestorebundlepathinrestoreoptionsfor__;
          uVar9 = 1;
        }
        else {
          lVar3 = _AMSupportCreateURLFromString(0,lVar3);
          if (lVar3 != 0) {
            lVar4 = _AMRAuthInstallCopyVariant(param_1,param_4);
            if (lVar4 == 0) {
              pcVar10 = &cf__s_failedtocopyvariant;
              uVar9 = 6;
LAB_000f4d61:
              _AMSupportCreateErrorInternal
                        (param_7,&cf_AuthInstallErrorDomain,uVar9,0,pcVar10,
                         "_AMRestoreUpdaterSetInfoWithOverride");
              iVar11 = -1;
              local_38 = 0;
              lVar5 = 0;
              pvVar7 = (void *)0x0;
              pvVar8 = (void *)0x0;
              lVar6 = 0;
            }
            else {
              local_50 = _AMAuthInstallSupportGetValueForKeyWithFormat
                                   (0,param_4,&cf_____,param_2,&cf_Options);
              if ((param_5 == 0) || (lVar5 = _CFDictionaryGetCount(param_5), lVar5 < 1)) {
                lVar5 = 0;
                pvVar7 = (void *)0x0;
                local_40 = (void *)0x0;
LAB_000f4d93:
                lVar6 = _CFStringCreateWithFormat(0,0,&cf___Firmware);
                if (lVar6 == 0) {
                  local_38 = 0;
                  _AMSupportCreateErrorInternal
                            (param_7,&cf_AMRestoreErrorDomain,0x12,0,
                             &cf__s_failedtoallocatefirmwareOvrdstrfor__,
                             "_AMRestoreUpdaterSetInfoWithOverride",param_2);
                  iVar11 = -1;
                  pvVar8 = local_40;
                }
                else {
                  local_48 = lVar6;
                  lVar6 = _CFDictionaryGetValue(param_4,lVar6);
                  iVar11 = 0;
                  if (lVar6 == 0) {
                    lVar6 = 0;
                    local_38 = 0;
LAB_000f4e6e:
                    iVar1 = _AMAuthInstallUpdaterSetInfo
                                      (param_1,param_2,param_3,lVar2,lVar3,lVar4,local_50,lVar6,
                                       param_6,param_7);
                    pvVar8 = local_40;
                    lVar6 = local_48;
                    if (iVar1 != 0) {
                      if (param_7 == 0) {
                        _AMSupportCreateErrorInternal
                                  (0,&cf_AMRestoreErrorDomain,0xffffffffffffffff,0,
                                   &cf__s_FailedtoSetInfofor__,
                                   "_AMRestoreUpdaterSetInfoWithOverride",param_2);
                      }
                      _AMRLog(3,&cf_FailedtoSetInfofor___result__d,param_2,iVar1);
                      iVar11 = (iVar1 == 0x1a) + 0x45;
                      pvVar8 = local_40;
                      lVar6 = local_48;
                    }
                  }
                  else {
                    local_38 = _AMSupportCreateURLFromString(0,lVar6);
                    if (local_38 == 0) {
                      pcVar10 = &cf__s_failedtoconvertfirmwarePathtoURLfor__;
                      local_38 = 0;
                      uVar9 = 0x1f;
                    }
                    else {
                      iVar1 = _AMAuthInstallSupportCreateDataFromMappedFileURL(0,&local_58,local_38)
                      ;
                      lVar6 = local_58;
                      if ((local_58 != 0) || (iVar1 == 0)) goto LAB_000f4e6e;
                      pcVar10 = &cf__s_failedtocopyfirmwarefromURLfor__;
                      uVar9 = 0xb;
                    }
                    _AMSupportCreateErrorInternal
                              (param_7,&cf_AMRestoreErrorDomain,uVar9,0,pcVar10,
                               "_AMRestoreUpdaterSetInfoWithOverride",param_2);
                    iVar11 = -1;
                    pvVar8 = local_40;
                    lVar6 = local_48;
                  }
                }
              }
              else {
                if (local_50 == 0) {
                  lVar5 = _CFDictionaryCreateMutable
                                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                }
                else {
                  lVar5 = _CFDictionaryCreateMutableCopy
                                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
                }
                if (lVar5 == 0) {
                  pcVar10 = &cf__s_failedtocreateupdaterOptionsCopy;
                  uVar9 = 0x12;
                  goto LAB_000f4d61;
                }
                local_50 = lVar5;
                local_38 = param_5;
                lVar6 = _CFDictionaryGetCount(param_5);
                pvVar7 = _malloc(lVar6 * 8);
                pvVar8 = _malloc(lVar6 * 8);
                if (pvVar8 != (void *)0x0 && pvVar7 != (void *)0x0) {
                  local_48 = param_2;
                  _CFDictionaryGetKeysAndValues(local_38,pvVar7,pvVar8);
                  lVar5 = local_50;
                  if (0 < lVar6) {
                    lVar12 = 0;
                    do {
                      _CFDictionarySetValue
                                (lVar5,*(undefined8 *)((long)pvVar7 + lVar12 * 8),
                                 *(undefined8 *)((long)pvVar8 + lVar12 * 8));
                      lVar12 = lVar12 + 1;
                    } while (lVar6 != lVar12);
                  }
                  param_2 = local_48;
                  local_40 = pvVar8;
                  _AMRLog(5,&cf_Override__updateroptions___,local_48,lVar5);
                  goto LAB_000f4d93;
                }
                _AMSupportCreateErrorInternal
                          (param_7,&cf_AuthInstallErrorDomain,0x12,0,
                           &cf__s_failedtoallocatekeysorvalues,
                           "_AMRestoreUpdaterSetInfoWithOverride");
                iVar11 = -1;
                local_38 = 0;
                lVar5 = local_50;
                lVar6 = 0;
              }
            }
            _CFRelease(lVar2);
            _CFRelease(lVar3);
            if (lVar4 != 0) {
              _CFRelease();
            }
            if (lVar6 != 0) {
              _CFRelease(lVar6);
            }
            if (local_38 != 0) {
              _CFRelease();
            }
            goto LAB_000f4cec;
          }
          pcVar10 = &cf__s_failedtoconvertdstBundleURLtoURLfor__;
          uVar9 = 0x1f;
        }
        _AMSupportCreateErrorInternal
                  (param_7,&cf_AMRestoreErrorDomain,uVar9,0,pcVar10,
                   "_AMRestoreUpdaterSetInfoWithOverride",param_2);
        _CFRelease(lVar2);
        goto LAB_000f4ce6;
      }
      pcVar10 = &cf__s_failedtoconvertsrcBundleURLtoURLfor__;
      uVar9 = 0x1f;
    }
    _AMSupportCreateErrorInternal
              (param_7,&cf_AMRestoreErrorDomain,uVar9,0,pcVar10,
               "_AMRestoreUpdaterSetInfoWithOverride",param_2);
  }
LAB_000f4ce6:
  pvVar8 = (void *)0x0;
  iVar11 = -1;
  pvVar7 = (void *)0x0;
  lVar5 = 0;
LAB_000f4cec:
  if (local_58 != 0) {
    _CFRelease();
    local_58 = 0;
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (pvVar7 != (void *)0x0) {
    _free(pvVar7);
  }
  if (pvVar8 != (void *)0x0) {
    _free(pvVar8);
  }
  return iVar11;
}

