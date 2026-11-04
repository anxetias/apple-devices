// rea decompile_all
// name: __AMAuthInstallUpdaterSetInfoWithCallbacks
// address: 0x1b5f3b
// body: available
// range: 0x1b5f3b-0x1b6be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallUpdaterSetInfoWithCallbacks
          (undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
          undefined8 param_7,long param_8,long param_9,undefined8 *param_10,undefined8 *param_11,
          undefined8 *param_12,code *param_13,code *param_14,code *param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  char *pcVar17;
  cfstringStruct *pcVar18;
  bool bVar19;
  undefined8 in_stack_ffffffffffffff38;
  long *plVar20;
  undefined4 uVar21;
  long local_80;
  long local_68;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar8 = param_16;
  uVar21 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 0x20);
  local_40 = 0;
  local_38 = param_5;
  if (param_2 == 0) {
    __AMAuthInstallUpdaterSetInfoWithCallbacks_cold_7(param_16);
  }
  else if (param_3 == 0) {
    __AMAuthInstallUpdaterSetInfoWithCallbacks_cold_6(param_16);
  }
  else if (param_4 == 0) {
    __AMAuthInstallUpdaterSetInfoWithCallbacks_cold_5(param_16);
  }
  else {
    if (param_13 != (code *)0x0) {
      if (*(long *)(param_2 + 0x1d8) == 0) {
        bVar19 = false;
      }
      else {
        bVar19 = *(long *)(param_2 + 0x1e0) != 0;
      }
      local_68 = _AMSupportSafeRetain();
      lVar5 = _AMSupportSafeRetain(*(undefined8 *)(param_2 + 0x1e0));
      lVar6 = __updater_named();
      if (lVar6 == 0) {
        pcVar16 = (code *)0x0;
        pcVar15 = (code *)0x0;
        pcVar14 = (code *)0x0;
        pcVar13 = (code *)0x0;
      }
      else {
        pcVar16 = *(code **)(lVar6 + 8);
        pcVar15 = *(code **)(lVar6 + 0x10);
        pcVar14 = *(code **)(lVar6 + 0x18);
        pcVar13 = *(code **)(lVar6 + 0x20);
      }
      if ((bVar19) || ((pcVar15 != (code *)0x0 && pcVar16 != (code *)0x0) && pcVar14 != (code *)0x0)
         ) {
        uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar6 = _CFDictionaryCreateMutable
                          (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar6 == 0) {
          _AMSupportCreateErrorInternal
                    (uVar8,&cf_AuthInstallErrorDomain,2,0,&cf__s_failedtoallocateparametersfor__,
                     "_AMAuthInstallUpdaterSetInfoWithCallbacks",param_3);
          local_38 = 99;
          goto LAB_001b6169;
        }
        if (local_38 == 0) {
          if (param_8 != 0) {
            _CFDictionarySetValue(lVar6,&cf_Options,param_8);
          }
          lVar7 = 0;
LAB_001b61b6:
          if (param_15 == (code *)0x0) {
            lVar9 = *(long *)(*(long *)(param_2 + 0x80) + 8);
            if (lVar9 != 0) {
              uVar8 = _CFDictionaryGetValue(lVar9,&cf_Manifest);
              local_80 = _AMSupportSafeRetain(uVar8);
              goto LAB_001b61f3;
            }
LAB_001b6210:
            local_80 = 0;
            _AMSupportLogInternal
                      (6,"_AMAuthInstallUpdaterSetInfoWithCallbacks",
                       "No Manifest entry in the receipt, not adding to updater parameters.");
          }
          else {
            local_80 = (*param_15)(param_1,&local_40);
LAB_001b61f3:
            if (local_80 == 0) goto LAB_001b6210;
            _CFDictionarySetValue(lVar6,&cf_ReceiptManifest,local_80);
          }
          if (param_6 != 0) {
            _CFDictionarySetValue(lVar6,&cf_DestBundlePath);
          }
          _CFDictionarySetValue(lVar6,&cf_DeviceInfo,param_4);
          lVar9 = _CFDictionaryGetCount(*(undefined8 *)(param_2 + 0x1d0));
          if (0 < lVar9) {
            _CFDictionaryAddValue(lVar6,&cf_SharedInfo,*(undefined8 *)(param_2 + 0x1d0));
          }
          if ((lVar7 != 0) &&
             (__AMAuthInstallUpdaterInitLocalSigning(lVar7,param_3), *(long *)(lVar7 + 0x48) != 0))
          {
            if (*(long *)(lVar7 + 0x50) == 0) {
              _AMAuthInstallLog(5,"AMAuthInstallUpdaterBehaviorOverrides",
                                "Updater %@ forced for local signing by host tools.",param_3);
            }
            lVar9 = _CFDictionaryGetTypeID();
            lVar10 = _CFGetTypeID(param_4);
            if ((lVar9 == lVar10) &&
               (lVar9 = _CFDictionaryGetValue(param_4,*(undefined8 *)(lVar7 + 0x50)), lVar9 != 0)) {
              lVar10 = _CFBooleanGetTypeID();
              lVar11 = _CFGetTypeID(lVar9);
              if (lVar10 == lVar11) {
                cVar3 = _CFBooleanGetValue(lVar9);
                *(char *)(lVar7 + 0x40) = cVar3;
                pcVar17 = "local";
                if (cVar3 == '\0') {
                  pcVar17 = "server";
                }
                _AMAuthInstallLog(5,"AMAuthInstallUpdaterBehaviorOverrides",
                                  "Updater %@ requested %s signing.",param_3,pcVar17);
              }
            }
          }
          if ((local_68 == 0) &&
             (local_68 = (*pcVar16)(lVar6,__logSinkCallback,param_3,&local_40), local_68 == 0)) {
            local_68 = 0;
            _AMSupportCreateErrorInternal
                      (param_16,&cf_AuthInstallErrorDomain,0x19,local_40,&cf__s_failedtogettags,
                       "_AMAuthInstallUpdaterSetInfoWithCallbacks");
            _AMSupportLogInternal
                      (3,"_AMAuthInstallUpdaterSetInfoWithCallbacks",
                       "%@ updater getTags call failed, error=%@",param_3,local_40);
            local_38 = 99;
            local_50 = 0;
            local_48 = 0;
            lVar9 = 0;
            lVar7 = 0;
            local_58 = 0;
          }
          else {
            lVar7 = _CFDictionaryGetValue(local_68,&cf_ResponseTags);
            if ((lVar7 == 0) ||
               (iVar4 = _AMAuthInstallUpdaterSetTags
                                  (param_2,param_3,&cf_ResponseTags,lVar7,&local_40), iVar4 == 0)) {
              lVar7 = _CFDictionaryGetValue(local_68,&cf_LoopInstance);
              if ((lVar7 == 0) ||
                 (iVar4 = _AMAuthInstallUpdaterSetTags
                                    (param_2,param_3,&cf_LoopInstance,lVar7,&local_40), iVar4 == 0))
              {
                puVar2 = param_11;
                if (param_11 != (undefined8 *)0x0) {
                  uVar8 = _CFRetain(local_68);
                  *puVar2 = uVar8;
                }
                plVar20 = &local_40;
                local_58 = (*param_13)(param_1,param_2,param_3,local_68,param_7,local_38,plVar20);
                if (local_58 != 0) {
                  _CFDictionarySetValue(lVar6,&cf_BuildIdentity,local_58);
                  uVar21 = (undefined4)((ulong)plVar20 >> 0x20);
                  if (param_14 == (code *)0x0) {
                    local_48 = 0;
                    local_50 = 0;
                  }
                  else {
                    lVar7 = _CFDictionaryGetValue(local_68,&cf_BuildIdentityTags);
                    uVar21 = (undefined4)((ulong)plVar20 >> 0x20);
                    if (lVar7 == 0) {
                      pcVar17 = "updaterTags missing buildIdentityTags";
                    }
                    else {
                      lVar9 = _CFGetTypeID(lVar7);
                      lVar10 = _CFArrayGetTypeID();
                      uVar21 = (undefined4)((ulong)plVar20 >> 0x20);
                      if (lVar9 == lVar10) {
                        local_50 = _CFDictionaryCreateMutable
                                             (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                        uVar21 = (undefined4)((ulong)plVar20 >> 0x20);
                        if (local_50 != 0) {
                          lVar9 = _CFArrayGetCount(lVar7);
                          uVar21 = (undefined4)((ulong)plVar20 >> 0x20);
                          if (0 < lVar9) {
                            lVar9 = 0;
                            do {
                              uVar8 = _CFArrayGetValueAtIndex(lVar7,lVar9);
                              lVar10 = _CFDictionaryGetValue(local_58,uVar8);
                              if (lVar10 == 0) {
                                _AMSupportLogInternal
                                          (4,"_CopyFileTagsFromRequestedTags",
                                           "Requested tag %@ not found in manifest, ignoring.",uVar8
                                          );
                              }
                              else {
                                lVar11 = _CFGetTypeID(lVar10);
                                lVar12 = _CFDictionaryGetTypeID();
                                if ((lVar11 == lVar12) &&
                                   (lVar10 = _AMSupportGetValueForKeyPathInDict
                                                       (uVar1,lVar10,&cf_Info_Path), lVar10 != 0)) {
                                  lVar11 = _CFGetTypeID(lVar10);
                                  lVar12 = _CFStringGetTypeID();
                                  if (lVar11 == lVar12) {
                                    _CFDictionaryAddValue(local_50,uVar8,lVar10);
                                  }
                                }
                              }
                              lVar9 = lVar9 + 1;
                              lVar10 = _CFArrayGetCount(lVar7);
                              uVar21 = (undefined4)((ulong)plVar20 >> 0x20);
                            } while (lVar9 < lVar10);
                          }
                          local_48 = (*param_14)(param_1,param_2,param_3,local_50,param_7,param_16);
                          if (local_48 == 0) {
                            _AMSupportLogInternal
                                      (3,"_AMAuthInstallUpdaterSetInfoWithCallbacks",
                                       "%@ updater bundleCopierCallback returned NULL.",param_3);
                            goto LAB_001b6938;
                          }
                          _CFDictionarySetValue(lVar6,&cf_BundleDataDict,local_48);
                          lVar7 = _CFDictionaryGetCount(local_48);
                          if (lVar7 == 1 && param_9 == 0) {
                            _CFDictionaryGetKeysAndValues(local_48,0,&param_9);
                            _AMSupportLogInternal
                                      (6,"_AMAuthInstallUpdaterSetInfoWithCallbacks",
                                       "One file fetched from host and no override, setting as override."
                                      );
                          }
                          goto LAB_001b67d1;
                        }
                        pcVar17 = "resultDict is NULL";
                      }
                      else {
                        pcVar17 = "buildIdentityTags not an array";
                      }
                    }
                    __AMAuthInstallUpdaterSetInfoWithCallbacks_cold_2(pcVar17);
                    local_48 = 0;
                    local_50 = 0;
                  }
LAB_001b67d1:
                  if (param_9 == 0) {
                    if (local_38 != 0) {
                      pcVar18 = &cf_BundlePath;
                      goto LAB_001b67ef;
                    }
                  }
                  else {
                    pcVar18 = &cf_FirmwareData;
LAB_001b67ef:
                    _CFDictionarySetValue(lVar6,pcVar18);
                  }
                  if (bVar19) {
                    lVar7 = 0;
                  }
                  else {
                    lVar7 = (*pcVar15)(lVar6,__logSinkCallback,param_3,&local_40);
                    puVar2 = param_10;
                    if (lVar7 == 0) {
                      lVar9 = 0;
                      _AMSupportCreateErrorInternal
                                (param_16,&cf_AuthInstallErrorDomain,0x19,local_40,
                                 &cf__s_failedtocopyfirmware,
                                 "_AMAuthInstallUpdaterSetInfoWithCallbacks");
                      _AMSupportLogInternal
                                (3,"_AMAuthInstallUpdaterSetInfoWithCallbacks",
                                 "%@ updater copyFirmware call failed, error=%@",param_3,local_40);
                      local_38 = 99;
                      lVar7 = 0;
                      goto LAB_001b6710;
                    }
                    _CFDictionarySetValue(lVar6,&cf_FirmwareData,lVar7);
                    if (puVar2 != (undefined8 *)0x0) {
                      _AMSupportSafeRelease(*puVar2);
                      uVar8 = _CFRetain(lVar7);
                      *puVar2 = uVar8;
                    }
                  }
                  if ((lVar5 == 0) &&
                     (lVar5 = (*pcVar14)(lVar6,__logSinkCallback,param_3,&local_40), lVar5 == 0)) {
                    lVar5 = 0;
                    _AMSupportCreateErrorInternal
                              (param_16,&cf_AuthInstallErrorDomain,0x19,local_40,
                               &cf__s_failedtocreaterequest,
                               "_AMAuthInstallUpdaterSetInfoWithCallbacks");
                    _AMSupportLogInternal
                              (3,"_AMAuthInstallUpdaterSetInfoWithCallbacks",
                               "%@ updater createRequest call failed, error=%@",param_3,local_40);
                    goto LAB_001b6a9e;
                  }
                  puVar2 = param_12;
                  if (param_12 != (undefined8 *)0x0) {
                    _AMSupportSafeRelease(*param_12);
                    uVar8 = _CFRetain(lVar5);
                    *puVar2 = uVar8;
                  }
                  iVar4 = _AMAuthInstallUpdaterSetTags
                                    (param_2,param_3,&cf_RequestTags,lVar5,&local_40);
                  if (iVar4 != 0) {
                    _AMSupportCreateErrorInternal
                              (param_16,&cf_AuthInstallErrorDomain,0x19,local_40,
                               &cf__s_failedtosetupdatertags_result__d,
                               "_AMAuthInstallUpdaterSetInfoWithCallbacks",CONCAT44(uVar21,iVar4));
LAB_001b68f6:
                    lVar9 = 0;
                    local_38 = 99;
                    goto LAB_001b6710;
                  }
                  if ((param_6 == 0) ||
                     (cVar3 = _AMAuthInstallUpdaterSaveToReceipt(param_2,param_3,param_6,param_16),
                     cVar3 != '\0')) {
                    local_38 = 0;
                    if (!bVar19 && pcVar13 != (code *)0x0) {
                      lVar9 = _CFDictionaryGetTypeID();
                      lVar10 = _CFGetTypeID(*(undefined8 *)(param_2 + 0x1d0));
                      if (lVar9 == lVar10) {
                        lVar9 = (*pcVar13)(lVar6,__logSinkCallback,param_3,&local_40);
                        if (lVar9 != 0) {
                          _CFDictionarySetValue(*(undefined8 *)(param_2 + 0x1d0),param_3,lVar9);
                          goto LAB_001b6710;
                        }
                        _AMSupportCreateErrorInternal
                                  (param_16,&cf_AuthInstallErrorDomain,0x19,local_40,
                                   &cf__s_failedtogetsharedupdaterinfo,
                                   "_AMAuthInstallUpdaterSetInfoWithCallbacks");
                        _AMSupportLogInternal
                                  (3,"_AMAuthInstallUpdaterSetInfoWithCallbacks",
                                   "%@ updater getSharedInfo call failed, error=%@",param_3,local_40
                                  );
                        goto LAB_001b68f6;
                      }
                      __AMAuthInstallUpdaterSetInfoWithCallbacks_cold_3(param_16);
                      goto LAB_001b6a9e;
                    }
                  }
                  else {
LAB_001b6a9e:
                    local_38 = 99;
                  }
                  lVar9 = 0;
                  goto LAB_001b6710;
                }
                pcVar18 = &cf__s_failedtocopybuildidentity;
              }
              else {
                plVar20 = (long *)CONCAT44(uVar21,iVar4);
                pcVar18 = &cf__s_failedtosetupdaterloopinstance_result__d;
              }
            }
            else {
              plVar20 = (long *)CONCAT44(uVar21,iVar4);
              pcVar18 = &cf__s_failedtosetupdaterresponsetags_result__d;
            }
            local_50 = 0;
            _AMSupportCreateErrorInternal
                      (param_16,&cf_AuthInstallErrorDomain,0x19,local_40,pcVar18,
                       "_AMAuthInstallUpdaterSetInfoWithCallbacks",plVar20);
            local_38 = 99;
            local_48 = 0;
            lVar9 = 0;
            lVar7 = 0;
            local_58 = 0;
          }
        }
        else {
          lVar7 = _AMAuthInstallUpdater(param_2,param_3,local_38,param_16);
          if (lVar7 != 0) {
            if ((param_8 != 0) &&
               (_CFDictionarySetValue(lVar6,&cf_Options,param_8), *(long *)(lVar7 + 0x38) == 0)) {
              uVar8 = _CFRetain(param_8);
              *(undefined8 *)(lVar7 + 0x38) = uVar8;
            }
            goto LAB_001b61b6;
          }
          __AMAuthInstallUpdaterSetInfoWithCallbacks_cold_1(param_16);
          local_50 = 0;
          local_80 = 0;
          local_58 = 0;
LAB_001b6938:
          local_38 = 99;
          local_48 = 0;
          lVar9 = 0;
          lVar7 = 0;
        }
LAB_001b6710:
        _CFRelease(lVar6);
      }
      else {
        _AMSupportCreateErrorInternal
                  (uVar8,&cf_AuthInstallErrorDomain,0x19,0,
                   &
                   cf__s_MismatchedHostTools___Hostsupportnotfound_PleasemakesureyouarerunningtoolsfromaniOStrainoronethatmatchesyourdevice_
                   ,"_AMAuthInstallUpdaterSetInfoWithCallbacks",param_3);
        _AMSupportLogInternal
                  (3,"_AMAuthInstallUpdaterSetInfoWithCallbacks",
                   "Mismatched Host Tools.  No updater defined for %@. Please make sure you are running tools from an iOS train or one that matches your device."
                   ,param_3);
        local_38 = 0x1a;
LAB_001b6169:
        local_50 = 0;
        local_48 = 0;
        lVar9 = 0;
        lVar7 = 0;
        local_80 = 0;
        local_58 = 0;
      }
      if (local_68 != 0) {
        _CFRelease(local_68);
      }
      goto LAB_001b672e;
    }
    __AMAuthInstallUpdaterSetInfoWithCallbacks_cold_4(param_16);
  }
  local_38 = 99;
  local_58 = 0;
  local_80 = 0;
  lVar7 = 0;
  lVar9 = 0;
  lVar5 = 0;
  local_48 = 0;
  local_50 = 0;
LAB_001b672e:
  if (local_40 != 0) {
    _CFRelease();
    local_40 = 0;
  }
  if (local_58 != 0) {
    _CFRelease(local_58);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (local_50 != 0) {
    _CFRelease(local_50);
  }
  if (local_48 != 0) {
    _CFRelease(local_48);
  }
  if (local_80 != 0) {
    _CFRelease(local_80);
  }
  return local_38;
}

