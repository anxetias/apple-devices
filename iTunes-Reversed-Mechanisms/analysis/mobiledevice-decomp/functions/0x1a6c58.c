// rea decompile_all
// name: __AMAuthInstallBundlePopulatePersonalizedBundle
// address: 0x1a6c58
// body: available
// range: 0x1a6c58-0x1a8603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMAuthInstallBundlePopulatePersonalizedBundle
                (long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                ulong param_6,long param_7,long param_8,long param_9,long param_10,
                undefined8 param_11)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  char *pcVar18;
  char *pcVar19;
  cfstringStruct *pcVar20;
  long lVar21;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  ulong local_88;
  long local_80;
  char local_71;
  long local_70;
  char *local_68;
  long local_60;
  char local_51;
  long local_50;
  long local_48;
  ulong local_40;
  ulong local_38;
  
  local_110 = 0;
  local_108 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_70 = param_5;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
LAB_001a851c:
    local_38 = 1;
    goto LAB_001a853f;
  }
  local_38 = 1;
  local_68 = (char *)0x0;
  if (param_5 != 0) {
    lVar7 = 0;
    lVar21 = 0;
    lVar17 = 0;
    local_c0 = param_2;
    local_60 = param_3;
    local_48 = param_1;
    uVar5 = local_38;
    if (param_7 == 0) goto LAB_001a7f00;
    uVar5 = _CFDictionaryGetValue(param_7,&cf_CumulativeResponse);
    if (uVar5 == 0) {
      if (*(char *)(local_48 + 0x1b3) != '\0') {
        _CFDictionarySetValue(param_7,&cf_CumulativeResponse,param_6);
        pcVar18 = "caching response dictionary on skipped install";
        goto LAB_001a6dae;
      }
    }
    else {
      local_40 = 0;
      if (param_6 == 0) {
        pcVar18 = "replaced NULL response dictionary with cumulative response";
        param_6 = uVar5;
      }
      else {
        uVar6 = _CFGetAllocator(local_48);
        uVar5 = _AMSupportCreateMergedDictionary(uVar6,uVar5,param_6,&local_40);
        if ((int)uVar5 != 0) {
          local_68 = (char *)0x0;
          local_38 = uVar5;
          _AMAuthInstallLog(3,"_AMAuthInstallBundlePopulatePersonalizedBundle",
                            "could not create merged response dictionary");
          goto LAB_001a8547;
        }
        _CFDictionarySetValue(param_7,&cf_CumulativeResponse,local_40);
        param_6 = local_40;
        _SafeRelease(local_40);
        pcVar18 = "created merged response dictionary";
      }
LAB_001a6dae:
      _AMAuthInstallLog(7,"_AMAuthInstallBundlePopulatePersonalizedBundle",pcVar18);
    }
    cVar1 = _CFBooleanGetValue(param_11);
    if ((cVar1 == '\0') || (param_7 = _CFDictionaryGetValue(param_7,&cf_RecoveryOS), param_7 != 0))
    {
      lVar7 = _CFDictionaryGetValue(param_7,&cf_Personalized);
      lVar8 = _CFDictionaryGetValue(param_7,&cf_Manifest);
      local_98 = _CFDictionaryGetValue(param_7,&cf_Linked);
      lVar9 = _CFDictionaryGetValue(param_7,&cf_Alignment);
      local_38 = 8;
      local_f0 = lVar7;
      if (lVar7 != 0) {
        local_68 = (char *)0x0;
        if (lVar8 == 0) goto LAB_001a8547;
        lVar7 = 0;
        lVar21 = 0;
        lVar17 = 0;
        local_88 = param_6;
        uVar5 = local_38;
        if (local_98 == 0) goto LAB_001a7f00;
        local_a8 = lVar8;
        local_38 = _CFDictionaryGetValue(local_70,&cf_Manifest);
        lVar7 = local_60;
        if (local_38 == 0) {
          __AMAuthInstallBundlePopulatePersonalizedBundle_cold_17();
          local_38 = 7;
          goto LAB_001a853f;
        }
        local_e8 = param_7;
        if (((local_88 == 0 || param_8 == 0) || (*(char *)(local_48 + 0x1b3) != '\0')) ||
           (local_80 = _CFArrayGetCount(param_8), local_80 < 1)) {
          local_68 = (char *)0x0;
          local_50 = 0;
        }
        else {
          local_100 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
          local_f8 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
          uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
          lVar21 = 0;
          local_50 = 0;
          local_68 = (char *)0x0;
          do {
            pcVar18 = (char *)_CFArrayGetValueAtIndex(param_8,lVar21);
            if (pcVar18 == (char *)0x0) goto LAB_001a8517;
            lVar17 = _CFStringFind(pcVar18,&cf_RecoveryOS,0);
            uVar16 = local_f8;
            if (lVar17 == -1) {
              uVar16 = local_100;
            }
            cVar1 = _CFBooleanGetValue(uVar16);
            cVar2 = _CFBooleanGetValue(param_11);
            if (cVar1 == '\0') {
              if (cVar2 == '\0') goto LAB_001a741a;
            }
            else if (cVar2 != '\0') {
              _SafeRelease(local_68);
              uVar16 = _CFGetAllocator(local_48);
              pcVar18 = (char *)_AMAuthInstallICreateTranslationOfRecoveryEnteryName(uVar16,pcVar18)
              ;
              local_68 = pcVar18;
LAB_001a741a:
              lVar17 = _CFDictionaryGetValue(local_38,pcVar18);
              if (lVar17 == 0) {
                _AMAuthInstallLog(6,"_AMAuthInstallBundlePopulatePersonalizedBundle",
                                  "no entry in manifest found for \"%@\"",pcVar18);
              }
              else {
                lVar8 = _CFStringCompare(pcVar18,&cf_BasebandFirmware,0);
                if (lVar8 == 0) {
                  if ((*(long *)(local_48 + 0x30) != 0) &&
                     (*(long *)(*(long *)(local_48 + 0x30) + 0xa0) != 0)) {
                    lVar7 = _CFDictionaryGetValue(local_70,&cf_UniqueBuildID);
                    if (lVar7 != 0) {
                      uVar16 = _CFGetAllocator(local_48);
                      lVar8 = _CFDictionaryCreateMutable
                                        (uVar16,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                      if (lVar8 != 0) {
                        local_50 = lVar8;
                        _CFDictionarySetValue(lVar8,&cf_UniqueBuildID,lVar7);
                        goto LAB_001a758d;
                      }
LAB_001a8553:
                      local_38 = 2;
                      lVar7 = 0;
                      lVar21 = 0;
                      lVar17 = 0;
                      uVar5 = local_38;
                      goto LAB_001a7f00;
                    }
LAB_001a758d:
                    if (((*(long *)(*(long *)(local_48 + 0x10) + 0x78) != 0) ||
                        (*(long *)(*(long *)(local_48 + 0x10) + 0x80) != 0)) &&
                       (lVar7 = _CFDictionaryGetValue(local_70,&cf_ProductMarketingVersion),
                       lVar7 != 0)) {
                      lVar8 = local_50;
                      if (local_50 == 0) {
                        uVar16 = _CFGetAllocator(local_48);
                        lVar8 = _CFDictionaryCreateMutable
                                          (uVar16,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                        if (lVar8 == 0) goto LAB_001a8553;
                      }
                      _CFDictionarySetValue(lVar8,&cf_ProductMarketingVersion,lVar7);
                      local_50 = lVar8;
                    }
                  }
                  lVar8 = local_60;
                  uVar4 = __AMAuthInstallBundleInstallPersonalizedBasebandFirmware
                                    (local_48,lVar17,local_88,local_38,local_c0,local_60,local_f0,
                                     local_50);
                  uVar5 = (ulong)uVar4;
                }
                else {
                  local_40 = 0;
                  local_90 = 0;
                  lVar8 = lVar7;
                  if (pcVar18 == (char *)0x0) {
                    uVar5 = 1;
                    goto LAB_001a7648;
                  }
                  uVar16 = _CFGetAllocator(local_48);
                  lVar12 = _AMAuthInstallSupportGetValueForKeyWithFormat
                                     (uVar16,lVar17,&cf______,&cf_Info,&cf_Personalize);
                  if ((lVar12 != 0) && (cVar1 = _CFBooleanGetValue(lVar12), cVar1 == '\0')) {
                    _AMAuthInstallLog(7,"_AMAuthInstallBundleInstallPersonalizedEntry",
                                      "entry \"%@\" does not require personalization; skipping it",
                                      pcVar18);
                    cVar1 = _CFDictionaryContainsKey(local_88,pcVar18);
                    if (cVar1 == '\0') {
                      uVar5 = 0;
                      goto LAB_001a7648;
                    }
                    _CFDictionarySetValue(local_a8,pcVar18,lVar17);
                    lVar17 = 0;
                    goto LAB_001a74ec;
                  }
                  uVar3 = _CFBooleanGetValue(param_11);
                  uVar5 = __AMAuthInstallBundleCopyEntryURLs
                                    (local_48,pcVar18,lVar17,local_c0,lVar7,1,uVar3,&local_90);
                  if ((int)uVar5 == 0) {
                    local_b8 = _CFDictionaryGetValue(local_90,&cf_SourceURL);
                    local_b0 = _CFDictionaryGetValue(local_90,&cf_DestURL);
                    lVar12 = _CFDictionaryGetValue(local_90,&cf_RelativeSrcPath);
                    local_e0 = _CFDictionaryGetValue(local_90,&cf_RelativeDestPath);
                    uVar5 = 8;
                    local_c8 = lVar12;
                    if (((local_b8 == 0 && local_b0 == 0) && lVar12 == 0) && local_e0 == 0)
                    goto LAB_001a7648;
                    cVar1 = _CFDictionaryContainsKey(local_a8,pcVar18);
                    if (cVar1 != '\0') {
                      lVar17 = 0;
                      _AMAuthInstallLog(7,"_AMAuthInstallBundleInstallPersonalizedEntry",
                                        "entry \"%@\" has been previously personalized; skipping it"
                                        ,pcVar18);
                      goto LAB_001a74ec;
                    }
                    uVar4 = _AMAuthInstallPlatformMakeDirectoryForURL(local_b0);
                    if (uVar4 != 0) {
                      uVar5 = (ulong)uVar4;
                      __AMAuthInstallBundlePopulatePersonalizedBundle_cold_1(local_48,uVar4);
                      lVar12 = 0;
                      goto LAB_001a764b;
                    }
                    uVar16 = _CFGetAllocator(local_48);
                    lVar12 = _CFPropertyListCreateDeepCopy(uVar16,lVar17,2);
                    if (lVar12 == 0) {
                      lVar17 = 0;
LAB_001a7b2c:
                      uVar5 = 2;
                      lVar12 = lVar17;
                      goto LAB_001a764b;
                    }
                    local_a0 = lVar12;
                    lVar12 = _CFDictionaryGetValue(lVar12,&cf_Info);
                    if (lVar12 == 0) {
                      uVar16 = 3;
                      pcVar10 = "_AMAuthInstallBundleInstallPersonalizedEntry";
                      pcVar19 = "%s: no personalized entry for %@";
                      pcVar13 = pcVar18;
LAB_001a786e:
                      _AMAuthInstallLog(uVar16,"_AMAuthInstallBundleInstallPersonalizedEntry",
                                        pcVar19,pcVar10,pcVar13);
                      lVar12 = local_a0;
                    }
                    else {
                      pcVar13 = (char *)_CFDictionaryGetValue(lVar12,&cf_Path);
                      if ((pcVar13 != (char *)0x0) &&
                         (cVar1 = _CFDictionaryContainsKey(local_a8,pcVar13), cVar1 != '\0')) {
                        uVar5 = 0;
                        uVar16 = 7;
                        pcVar19 = 
                        "entry \"%@\" has been previously personalized as part of \"%@\"; skipping it"
                        ;
                        pcVar10 = pcVar18;
                        goto LAB_001a786e;
                      }
                      local_51 = __CFDictionaryGetBoolean(lVar12,&cf_IsFTAB,0);
                      uVar16 = _CFGetAllocator(local_48);
                      uVar5 = _AMAuthInstallSupportCreatePrependedFilePath
                                        (uVar16,pcVar18,local_e0,&local_40);
                      if ((int)uVar5 == 0) {
                        _CFDictionarySetValue(lVar12,&cf_PersonalizedPath,local_40);
                        lVar14 = _CFDictionaryGetValue(local_88,pcVar18);
                        if (lVar14 != 0) {
                          local_e0 = _CFDictionaryGetTypeID();
                          lVar15 = _CFGetTypeID(lVar14);
                          if ((local_e0 != lVar15) ||
                             (cVar1 = _CFDictionaryContainsKey(lVar14,&cf_Blob), cVar1 == '\0'))
                          goto LAB_001a7959;
                          uVar5 = _AMAuthInstallApImg3PersonalizeWithEntryName
                                            (local_48,local_b8,local_b0,pcVar18,lVar17,local_88);
                          pcVar13 = pcVar18;
                          lVar17 = local_a0;
                          if ((int)uVar5 != 0) {
                            __AMAuthInstallBundlePopulatePersonalizedBundle_cold_3
                                      (local_48,uVar5 & 0xffffffff);
                            lVar12 = local_a0;
                            goto LAB_001a764b;
                          }
LAB_001a7a90:
                          _CFDictionarySetValue(local_a8,pcVar13,lVar17);
                          __CFArrayRemoveValue(local_98,local_c8);
                          goto LAB_001a74ec;
                        }
LAB_001a7959:
                        lVar17 = local_48;
                        cVar1 = _AMAuthInstallApIsImg4(local_48);
                        if (((cVar1 == '\0') ||
                            (lVar14 = _CFDictionaryGetValue(local_88,*(undefined8 *)(lVar17 + 0x58))
                            , lVar14 == 0)) || (local_51 == '\0')) {
                          cVar1 = _AMAuthInstallApIsImg4(lVar17);
                          lVar17 = local_a0;
                          if (((cVar1 == '\0') ||
                              (lVar14 = _CFDictionaryGetValue
                                                  (local_88,*(undefined8 *)(local_48 + 0x58)),
                              lVar14 == 0)) || (local_51 != '\0')) {
                            lVar14 = local_b0;
                            uVar5 = _AMAuthInstallSupportFileURLExists(local_b0,&local_71);
                            lVar8 = local_60;
                            lVar12 = local_a0;
                            if ((int)uVar5 == 0) {
                              if (local_71 == '\0') {
                                uVar5 = _AMAuthInstallBundleInstallFile(local_48,lVar14,local_b8);
                                if ((int)uVar5 != 0) {
                                  __AMAuthInstallBundlePopulatePersonalizedBundle_cold_7
                                            (local_48,uVar5 & 0xffffffff);
                                  lVar8 = local_60;
                                  lVar12 = local_a0;
                                  goto LAB_001a764b;
                                }
                                _CFArrayAppendValue(local_98,local_c8);
                              }
LAB_001a74ec:
                              uVar5 = 0;
                              lVar8 = lVar7;
                              lVar12 = lVar17;
                            }
                          }
                          else {
                            lVar14 = _CFDictionaryGetValue(lVar12,&cf_Img4PayloadType);
                            uVar5 = _AMAuthInstallApImg4StitchTicketData
                                              (local_48,lVar14,local_b8,local_b0,local_88);
                            lVar12 = lVar17;
                            if ((int)uVar5 == 0) {
                              if (lVar14 == 0) {
                                lVar14 = _AMAuthInstallApImg4GetTypeForEntryName(pcVar18);
                              }
                              lVar15 = local_b0;
                              uVar5 = _AMAuthInstallApImg4StitchRestoreInfoWithAMAI
                                                (lVar14,local_b0,local_88,0,local_48);
                              pcVar13 = pcVar18;
                              if ((int)uVar5 == 0) goto LAB_001a7a90;
                              _AMAuthInstallLog(3,"_AMAuthInstallBundleInstallPersonalizedEntry",
                                                "failed to stitch restore info to %@",lVar15);
                            }
                            else {
                              __AMAuthInstallBundlePopulatePersonalizedBundle_cold_6();
                            }
                          }
                        }
                        else {
                          lVar12 = _CFURLCreateCopyAppendingPathComponent(uVar6,lVar7,pcVar13,0);
                          lVar17 = local_a0;
                          if (lVar12 == 0) {
                            __AMAuthInstallBundlePopulatePersonalizedBundle_cold_5();
                            goto LAB_001a7b2c;
                          }
                          uVar4 = _AMAuthInstallApFtabStitchTicketData
                                            (local_48,local_b8,lVar12,local_88);
                          if (uVar4 == 0) goto LAB_001a7a90;
                          uVar5 = (ulong)uVar4;
                          __AMAuthInstallBundlePopulatePersonalizedBundle_cold_4();
                          lVar12 = lVar17;
                        }
                      }
                      else {
                        __AMAuthInstallBundlePopulatePersonalizedBundle_cold_2();
                        lVar12 = local_a0;
                      }
                    }
                  }
                  else {
                    _AMAuthInstallLog(3,"_AMAuthInstallBundleInstallPersonalizedEntry",
                                      "failed to copy bundle URLs for %@",pcVar18);
LAB_001a7648:
                    lVar12 = 0;
                  }
LAB_001a764b:
                  _SafeRelease(local_40);
                  _SafeRelease(lVar12);
                  _SafeRelease(local_90);
                  _SafeRelease(0);
                  _SafeRelease(0);
                }
                lVar7 = lVar8;
                if ((int)uVar5 != 0) {
                  local_38 = uVar5;
                  uVar6 = _AMAuthInstallGetLocalizedStatusString(local_48,uVar5 & 0xffffffff);
                  _AMAuthInstallLog(3,"_AMAuthInstallBundlePopulatePersonalizedBundle",
                                    "failed to install \"%@\" in personalized bundle: %@",pcVar18,
                                    uVar6);
                  goto LAB_001a813f;
                }
              }
            }
            lVar21 = lVar21 + 1;
          } while (local_80 != lVar21);
        }
        if (((param_9 != 0) && (*(char *)(local_48 + 0x1b3) == '\0')) &&
           (local_80 = _CFArrayGetCount(param_9), 0 < local_80)) {
          local_100 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
          local_f8 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
          lVar21 = 0;
          do {
            pcVar18 = (char *)_CFArrayGetValueAtIndex(param_9,lVar21);
            if (pcVar18 == (char *)0x0) {
              __AMAuthInstallBundlePopulatePersonalizedBundle_cold_10();
LAB_001a8517:
              __AMAuthInstallBundlePopulatePersonalizedBundle_cold_16();
              goto LAB_001a851c;
            }
            lVar17 = _CFStringFind(pcVar18,&cf_RecoveryOS,0);
            uVar6 = local_f8;
            if (lVar17 == -1) {
              uVar6 = local_100;
            }
            cVar1 = _CFBooleanGetValue(uVar6);
            cVar2 = _CFBooleanGetValue(param_11);
            if (cVar1 == '\0') {
              if (cVar2 == '\0') goto LAB_001a71b4;
            }
            else if (cVar2 != '\0') {
              _SafeRelease(local_68);
              uVar16 = _CFGetAllocator(local_48);
              pcVar18 = (char *)_AMAuthInstallICreateTranslationOfRecoveryEnteryName(uVar16,pcVar18)
              ;
              local_68 = pcVar18;
LAB_001a71b4:
              lVar17 = _CFDictionaryGetValue(local_38,pcVar18);
              if (lVar17 == 0) {
                _AMAuthInstallLog(6,"_AMAuthInstallBundlePopulatePersonalizedBundle",
                                  "no entry in manifest found for \"%@\"",pcVar18);
              }
              else {
                local_40 = 0;
                if (pcVar18 == (char *)0x0) goto LAB_001a84f4;
                uVar3 = _CFBooleanGetValue(uVar6);
                uVar5 = __AMAuthInstallBundleCopyEntryURLs
                                  (local_48,pcVar18,lVar17,local_c0,lVar7,0,uVar3,&local_40);
                if ((int)uVar5 != 0) {
                  local_38 = uVar5;
                  _AMAuthInstallLog(3,"_AMAuthInstallBundleInstallLinkedEntry",
                                    "failed to copy bundle URLs for %@",pcVar18);
                  goto LAB_001a800f;
                }
                lVar17 = _CFDictionaryGetValue(local_40,&cf_SourceURL);
                lVar8 = _CFDictionaryGetValue(local_40,&cf_DestURL);
                lVar12 = _CFDictionaryGetValue(local_40,&cf_RelativeSrcPath);
                lVar7 = local_98;
                if ((lVar17 == 0 && lVar8 == 0) && lVar12 == 0) {
                  local_38 = 8;
                  goto LAB_001a800f;
                }
                local_a8 = lVar17;
                uVar6 = _CFArrayGetCount(local_98);
                cVar1 = _CFArrayContainsValue(lVar7,0,uVar6,lVar12);
                if (cVar1 == '\0') {
                  uVar5 = _AMAuthInstallPlatformMakeDirectoryForURL(lVar8);
                  if ((int)uVar5 != 0) {
                    local_38 = uVar5;
                    __AMAuthInstallBundlePopulatePersonalizedBundle_cold_9(uVar5 & 0xffffffff);
                    goto LAB_001a800f;
                  }
                  uVar5 = _AMAuthInstallBundleInstallFile(local_48,lVar8,local_a8);
                  if ((int)uVar5 != 0) {
                    local_38 = uVar5;
                    __AMAuthInstallBundlePopulatePersonalizedBundle_cold_8(uVar5 & 0xffffffff);
                    goto LAB_001a800f;
                  }
                  _CFArrayAppendValue(local_98,lVar12);
                }
                _SafeRelease(local_40);
                lVar7 = local_60;
              }
            }
            lVar21 = lVar21 + 1;
          } while (local_80 != lVar21);
        }
        uVar6 = _CFArrayGetCount(param_8);
        lVar17 = 0;
        cVar1 = _CFArrayContainsValue(param_8,0,uVar6,&cf_BasebandFirmware);
        lVar8 = local_48;
        lVar21 = 0;
        if (cVar1 == '\0') {
          if (*(char *)(local_48 + 0x1b3) == '\0') {
            local_40 = local_40 & 0xffffffffffffff00;
            uVar6 = _CFGetAllocator(local_48);
            lVar17 = _AMAuthInstallSupportGetValueForKeyWithFormat
                               (uVar6,local_70,&cf____________,&cf_Manifest,&cf_BasebandFirmware,
                                &cf_Info,&cf_Path);
            if (lVar17 != 0) {
              lVar21 = _CFDictionaryGetValue(**(undefined8 **)(lVar8 + 0x80),&cf_BasebandFirmware);
              if (lVar21 == 0) {
                uVar6 = _CFGetAllocator(lVar8);
                lVar21 = _CFURLCreateCopyAppendingPathComponent(uVar6,local_c0,lVar17,0);
                if (lVar21 == 0) {
                  local_38 = 2;
                  lVar7 = local_50;
                  lVar21 = 0;
                  lVar17 = 0;
                  uVar5 = local_38;
                  goto LAB_001a7f00;
                }
              }
              else {
                lVar21 = _CFRetain(lVar21);
              }
              uVar6 = _CFGetAllocator(lVar8);
              uVar5 = _AMAuthInstallSupportCreatePrependedFilePath
                                (uVar6,&cf_BasebandFirmware,lVar17,&local_110);
              if ((int)uVar5 == 0) {
                uVar6 = _CFGetAllocator(lVar8);
                lVar17 = _CFURLCreateCopyAppendingPathComponent(uVar6,lVar7,local_110,0);
                if (lVar17 != 0) {
                  uVar5 = _AMAuthInstallSupportFileURLExists(lVar17,&local_40);
                  lVar7 = local_50;
                  if (((int)uVar5 != 0) ||
                     (((char)local_40 == '\0' &&
                      ((uVar5 = _AMAuthInstallSupportFileURLExists(lVar21,&local_40),
                       lVar7 = local_50, (int)uVar5 != 0 ||
                       (((char)local_40 != '\0' &&
                        (uVar5 = _AMAuthInstallPlatformCreateSoftLink(lVar17,lVar21),
                        lVar7 = local_50, (int)uVar5 != 0)))))))) goto LAB_001a7f00;
                  goto LAB_001a6f43;
                }
                uVar5 = 2;
              }
              lVar7 = local_50;
              lVar17 = 0;
              goto LAB_001a7f00;
            }
          }
          lVar17 = 0;
          lVar21 = 0;
        }
LAB_001a6f43:
        local_80 = lVar21;
        local_70 = lVar17;
        if ((param_10 != 0) && (pcVar10 = (char *)_CFArrayGetCount(param_10), 0 < (long)pcVar10)) {
          pcVar18 = (char *)0x0;
          do {
            lVar21 = _CFArrayGetValueAtIndex(param_10,pcVar18);
            lVar7 = local_98;
            if (lVar21 == 0) {
              __AMAuthInstallBundlePopulatePersonalizedBundle_cold_11();
LAB_001a84f4:
              local_38 = 1;
LAB_001a800f:
              _SafeRelease(local_40);
              _AMAuthInstallLog(3,"_AMAuthInstallBundlePopulatePersonalizedBundle",
                                "failed to install link for \"%@\" in personalized bundle",pcVar18);
LAB_001a813f:
              lVar7 = local_50;
              lVar21 = 0;
              lVar17 = 0;
              uVar5 = local_38;
              goto LAB_001a7f00;
            }
            uVar6 = _CFArrayGetCount(local_98);
            cVar1 = _CFArrayContainsValue(lVar7,0,uVar6,lVar21);
            lVar7 = local_98;
            if (cVar1 == '\0') {
              local_40 = 0;
              local_90 = 0;
              uVar6 = _CFArrayGetCount(local_98);
              cVar1 = _CFArrayContainsValue(lVar7,0,uVar6,lVar21);
              lVar7 = local_48;
              if (cVar1 == '\0') {
                uVar6 = _CFGetAllocator(local_48);
                uVar4 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                                  (uVar6,local_c0,lVar21,0,&local_40);
                if (uVar4 == 0) {
                  uVar6 = _CFGetAllocator(lVar7);
                  uVar4 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                                    (uVar6,local_60,lVar21,0,&local_90);
                  if (((uVar4 == 0) &&
                      (uVar4 = _AMAuthInstallPlatformMakeDirectoryForURL(local_90), uVar4 == 0)) &&
                     (uVar4 = _AMAuthInstallBundleInstallFile(local_48,local_90,local_40),
                     uVar4 == 0)) {
                    _CFArrayAppendValue(local_98,lVar21);
                    goto LAB_001a6fdd;
                  }
                }
                uVar5 = (ulong)uVar4;
              }
              else {
LAB_001a6fdd:
                uVar5 = 0;
              }
              _SafeRelease(local_40);
              _SafeRelease(local_90);
              if ((int)uVar5 != 0) {
                pcVar18 = "failed to install link in personalized bundle: %@";
                uVar6 = 3;
                local_38 = uVar5;
                goto LAB_001a7eed;
              }
            }
            pcVar18 = pcVar18 + 1;
          } while (pcVar10 != pcVar18);
        }
        lVar21 = local_48;
        if ((local_88 == 0) || (*(char *)(local_48 + 0x20) != '\0')) {
LAB_001a7c96:
          lVar7 = local_60;
          cVar1 = (**(code **)(lVar21 + 0x1c0))(lVar21,local_60,local_88,&local_d8);
          if (cVar1 == '\0') {
            _AMAuthInstallLog(3,"_AMAuthInstallBundlePopulatePersonalizedBundle",
                              "failed to write updater manifests: %@",local_d8);
            if (local_d8 == 0) {
              lVar7 = local_50;
              lVar21 = local_80;
              lVar17 = local_70;
              uVar5 = 4;
            }
            else {
              uVar5 = _CFErrorGetCode();
              lVar7 = local_50;
              lVar21 = local_80;
              lVar17 = local_70;
            }
            goto LAB_001a7f00;
          }
          if (lVar9 == 0) {
            local_40 = 0;
            uVar6 = _CFGetAllocator(lVar21);
            uVar16 = 0;
            lVar7 = _CFDictionaryCreateMutable
                              (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                               PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            uVar5 = 2;
            lVar17 = 0;
            if (lVar7 != 0) {
              lVar17 = __CreateRelativePathForManifestEntry(lVar21);
              if (lVar17 != 0) {
                pcVar20 = &cf_RELEASE;
                lVar8 = _CFStringFind(lVar17,&cf_RELEASE,0);
                if (lVar8 == -1) {
                  pcVar20 = &cf_DEVELOPMENT;
                  lVar8 = _CFStringFind(lVar17,&cf_DEVELOPMENT,0);
                  if (lVar8 != -1) goto LAB_001a81cb;
                  pcVar20 = &cf_DEBUG;
                  lVar8 = _CFStringFind(lVar17,&cf_DEBUG,0);
                  if (lVar8 != -1) goto LAB_001a81cb;
                }
                else {
LAB_001a81cb:
                  _CFDictionarySetValue(lVar7,&cf_DFUFileType,pcVar20);
                }
                _SafeRelease(lVar17);
              }
              lVar17 = __CreateRelativePathForManifestEntry(lVar21);
              if (lVar17 != 0) {
                _CFDictionarySetValue(lVar7,&cf_OS,lVar17);
                _SafeRelease(lVar17);
              }
              lVar17 = __CreateRelativePathForManifestEntry(lVar21);
              if (lVar17 == 0) {
LAB_001a8294:
                lVar17 = __CreateRelativePathForManifestEntry(lVar21);
                if (lVar17 != 0) {
                  uVar6 = _CFGetAllocator(lVar21);
                  uVar4 = _AMAuthInstallSupportCreatePrependedFilePath
                                    (uVar6,&cf_KernelCache,lVar17,&local_40);
                  if (uVar4 != 0) {
                    uVar5 = (ulong)uVar4;
                    __AMAuthInstallBundlePopulatePersonalizedBundle_cold_13();
                    goto LAB_001a85fc;
                  }
                  if (local_40 != 0) {
                    _CFDictionarySetValue(lVar7,&cf_KernelCache);
                    _SafeRelease(local_40);
                    local_40 = 0;
                  }
                  _SafeRelease(lVar17);
                }
                lVar17 = __CreateRelativePathForManifestEntry(lVar21);
                if (lVar17 != 0) {
                  _CFDictionarySetValue(lVar7,&cf_RestoreRamDisk,lVar17);
                  _SafeRelease(lVar17);
                }
                lVar17 = __CreateRelativePathForManifestEntry(lVar21);
                if (lVar17 != 0) {
                  _CFDictionarySetValue(lVar7,&cf_OSRamdisk,lVar17);
                  _SafeRelease(lVar17);
                }
                lVar17 = __CreateRelativePathForManifestEntry(lVar21);
                if (lVar17 != 0) {
                  uVar6 = _CFGetAllocator(lVar21);
                  uVar4 = _AMAuthInstallSupportCreatePrependedFilePath
                                    (uVar6,&cf_RestoreDeviceTree,lVar17,&local_40);
                  if (uVar4 != 0) {
                    uVar5 = (ulong)uVar4;
                    __AMAuthInstallBundlePopulatePersonalizedBundle_cold_14();
                    goto LAB_001a85fc;
                  }
                  if (local_40 != 0) {
                    _CFDictionarySetValue(lVar7,&cf_RestoreDeviceTree);
                    lVar8 = __AMAuthInstallBundleComponentCreateCopyByDeletingLastComponent
                                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar17);
                    if (lVar8 != 0) {
                      _CFDictionarySetValue(lVar7,&cf_AllFlash,lVar8);
                      _CFRelease(lVar8);
                    }
                    _SafeRelease(local_40);
                    local_40 = 0;
                  }
                  _SafeRelease(lVar17);
                }
                lVar17 = __CreateRelativePathForManifestEntry(lVar21);
                if (lVar17 != 0) {
                  uVar6 = _CFGetAllocator(lVar21);
                  uVar4 = _AMAuthInstallSupportCreatePrependedFilePath
                                    (uVar6,&cf_DeviceTree,lVar17,&local_40);
                  if (uVar4 != 0) {
                    uVar5 = (ulong)uVar4;
                    __AMAuthInstallBundlePopulatePersonalizedBundle_cold_15();
                    goto LAB_001a85fc;
                  }
                  if (local_40 != 0) {
                    _CFDictionarySetValue(lVar7,&cf_DeviceTree);
                    _SafeRelease(local_40);
                    local_40 = 0;
                  }
                  _SafeRelease(lVar17);
                }
                lVar17 = __CreateRelativePathForManifestEntry(lVar21);
                if (lVar17 != 0) {
                  _CFDictionarySetValue(lVar7,&cf_Diags,lVar17);
                  _SafeRelease(lVar17);
                }
                uVar16 = _CFRetain(lVar7);
                lVar17 = 0;
                uVar5 = 0;
              }
              else {
                uVar6 = _CFGetAllocator(lVar21);
                uVar4 = _AMAuthInstallSupportCreatePrependedFilePath
                                  (uVar6,&cf_RestoreKernelCache,lVar17,&local_40);
                if (uVar4 == 0) {
                  if (local_40 != 0) {
                    _CFDictionarySetValue(lVar7,&cf_RestoreKernelCache);
                    _SafeRelease(local_40);
                    local_40 = 0;
                  }
                  _SafeRelease(lVar17);
                  goto LAB_001a8294;
                }
                uVar5 = (ulong)uVar4;
                __AMAuthInstallBundlePopulatePersonalizedBundle_cold_12();
LAB_001a85fc:
                uVar16 = 0;
              }
            }
            _SafeRelease(lVar7);
            _SafeRelease(lVar17);
            _SafeRelease(local_40);
            if ((int)uVar5 != 0) {
              local_38 = uVar5;
              lVar21 = _AMAuthInstallGetLocalizedStatusString(lVar21,uVar5);
              pcVar18 = "_AMAuthInstallCreateAlignmentDictionary failed: %@";
              uVar6 = 3;
              goto LAB_001a7eed;
            }
            _CFDictionarySetValue(local_e8,&cf_Alignment,uVar16);
            _CFRelease(uVar16);
            lVar7 = local_60;
          }
          lVar17 = _CFDictionaryGetCount(**(undefined8 **)(lVar21 + 0x80));
          if (0 < lVar17) {
            uVar6 = _CFGetAllocator(lVar21);
            local_108 = _CFDictionaryCreateMutable
                                  (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            if (local_108 == 0) {
              lVar7 = local_50;
              lVar21 = local_80;
              lVar17 = local_70;
              uVar5 = 2;
              goto LAB_001a7f00;
            }
            _CFDictionaryApplyFunction
                      (**(undefined8 **)(lVar21 + 0x80),__AMAuthInstallBundleNormalizeOverrideURLs,
                       &local_108);
            _CFDictionarySetValue(local_e8,&cf_Overrides,local_108);
          }
          local_38 = _AMAuthInstallBundleWriteReceipt(lVar21,lVar7,local_e8,param_11);
          lVar7 = local_50;
          if ((int)local_38 == 0) {
            local_38 = 0;
            lVar21 = local_80;
            lVar17 = local_70;
            uVar5 = local_38;
          }
          else {
            uVar6 = _AMAuthInstallGetLocalizedStatusString(lVar21,local_38 & 0xffffffff);
            _AMAuthInstallLog(3,"_AMAuthInstallBundlePopulatePersonalizedBundle",
                              "failed to write receipt: %@",uVar6);
            lVar21 = local_80;
            lVar17 = local_70;
            uVar5 = local_38;
          }
        }
        else {
          cVar1 = _AMAuthInstallApIsImg4(local_48);
          lVar7 = local_f0;
          pcVar20 = &cf_amai_apimg4ticket_der;
          if (cVar1 == '\0') {
            pcVar20 = &cf_amai_apticket_der;
            puVar11 = &_kAMAuthInstallTagApTicket;
          }
          else if (*(char *)(*(long *)(lVar21 + 0x10) + 0x74) == '\0') {
            puVar11 = (undefined8 *)(lVar21 + 0x58);
          }
          else {
            puVar11 = &_kAMAuthInstallTagX86Img4Ticket;
          }
          uVar6 = *puVar11;
          uVar16 = _CFArrayGetCount(local_f0);
          cVar1 = _CFArrayContainsValue(lVar7,0,uVar16,pcVar20);
          if ((cVar1 != '\0') || (lVar7 = _CFDictionaryGetValue(local_88,uVar6), lVar7 == 0))
          goto LAB_001a7c96;
          uVar6 = _CFGetAllocator(lVar21);
          uVar5 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                            (uVar6,local_60,pcVar20,0,&local_d0);
          if ((int)uVar5 != 0) {
            local_38 = uVar5;
            _AMAuthInstallLog(3,"_AMAuthInstallBundlePopulatePersonalizedBundle",
                              "failed to create an AP ticket URL");
            lVar7 = local_50;
            lVar21 = local_80;
            lVar17 = local_70;
            uVar5 = local_38;
            goto LAB_001a7f00;
          }
          uVar6 = _CFGetAllocator(lVar21);
          uVar5 = _AMAuthInstallSupportWriteDataToFileURL(uVar6,lVar7,local_d0,1);
          if ((int)uVar5 == 0) {
            _CFArrayAppendValue(local_f0,pcVar20);
            goto LAB_001a7c96;
          }
          local_38 = uVar5;
          _AMAuthInstallLog(3,"_AMAuthInstallBundlePopulatePersonalizedBundle",
                            "failed to write the AP ticket");
          pcVar18 = "%@";
          uVar6 = 8;
          lVar21 = local_d0;
LAB_001a7eed:
          _AMAuthInstallLog(uVar6,"_AMAuthInstallBundlePopulatePersonalizedBundle",pcVar18,lVar21);
          lVar7 = local_50;
          lVar21 = local_80;
          lVar17 = local_70;
          uVar5 = local_38;
        }
        goto LAB_001a7f00;
      }
    }
    else {
      local_38 = 8;
    }
LAB_001a853f:
    local_68 = (char *)0x0;
  }
LAB_001a8547:
  lVar7 = 0;
  lVar21 = 0;
  lVar17 = 0;
  uVar5 = local_38;
LAB_001a7f00:
  local_38 = uVar5;
  _SafeRelease(lVar21);
  _SafeRelease(lVar17);
  _SafeRelease(local_110);
  _SafeRelease(local_108);
  _SafeRelease(local_d8);
  _SafeRelease(local_d0);
  _SafeRelease(lVar7);
  _SafeRelease(local_68);
  return local_38;
}

