// rea decompile_all
// name: _AMAuthInstallBundlePersonalizePartialWithRecoveryOS
// address: 0x28572e
// body: available
// range: 0x28572e-0x286b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMAuthInstallBundlePersonalizePartialWithRecoveryOS
                (long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                undefined8 param_6,long param_7,undefined8 param_8,long param_9,char param_10)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  cfstringStruct *pcVar15;
  char *pcVar16;
  long lVar17;
  void *pvVar18;
  bool bVar19;
  char local_108;
  undefined7 uStack_107;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined4 local_94;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  ulong local_38;
  
  local_d8 = 0;
  local_d0 = 0;
  local_100 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_f8 = 0;
  local_78 = 0;
  local_f0 = 0;
  local_a0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_38 = 1;
  local_b8 = param_4;
  local_b0 = param_5;
  if (*(long *)(param_1 + 0x10) == 0) {
    local_70 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                      "bundle personalization requires AP parameters (even with AP personalization disabled)"
                     );
LAB_002867b7:
    lVar8 = 0;
    uVar7 = local_70;
  }
  else {
    local_70 = 0;
    if (param_2 == 0) goto LAB_002867b7;
    pvVar18 = (void *)0x0;
    lVar10 = 0;
    lVar13 = 0;
    lVar8 = 0;
    lVar12 = 0;
    lVar14 = 0;
    local_90 = param_2;
    local_58 = param_1;
    uVar11 = local_38;
    if (param_3 == 0) goto LAB_002863e3;
    __AMAuthInstallBundlePersonalizeApplyPreferencesOverrides(param_1);
    local_80 = param_3;
    __AMAuthInstallBundleCreateDebugDirectory(param_1,param_3);
    local_38 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,local_90,local_b8,&local_d8);
    if (((int)local_38 != 0) || (local_38 = 0xe, local_d8 == 0)) {
      local_70 = 0;
      goto LAB_002867b7;
    }
    uVar7 = _CFGetAllocator(param_1);
    lVar8 = _CFDictionaryCreateMutableCopy(uVar7,0,local_d8);
    uVar11 = 2;
    if (lVar8 == 0) {
      local_70 = 0;
      lVar8 = 0;
      uVar7 = local_70;
      goto LAB_002867e4;
    }
    if (local_b0 == 0) {
      uVar7 = 0;
      local_50 = 0;
LAB_0028589f:
      lVar12 = local_58;
      local_70 = uVar7;
      if (param_7 == 0) {
        local_40 = 0;
LAB_002858ef:
        uVar9 = _CFGetAllocator(lVar12);
        if (param_9 == 0) {
          lVar10 = _CFArrayCreateMutable(uVar9,0,PTR__kCFTypeArrayCallBacks_004411a8);
        }
        else {
          lVar10 = _CFArrayCreateMutableCopy(uVar9,0,param_9);
        }
        lVar13 = local_40;
        lVar12 = local_50;
        lVar17 = local_58;
        if (lVar10 == 0) goto LAB_002867fb;
        local_48 = lVar10;
        if ((param_10 != '\0') && (local_40 != 0)) {
          uVar11 = __AMRAuthInstallBundleAppendFirmwareEntriesToArrays(local_58,lVar8,local_40);
          lVar10 = local_48;
          if ((int)uVar11 == 0) {
            if (lVar12 != 0) {
              uVar11 = __AMRAuthInstallBundleAppendFirmwareEntriesToArrays
                                 (lVar17,lVar12,lVar13,local_48);
              if ((int)uVar11 != 0) {
                pvVar18 = (void *)0x0;
                lVar14 = 0;
                goto LAB_002863e3;
              }
              goto LAB_00285990;
            }
            uVar4 = _AMAuthInstallBundleCopyReceiptCreateIfNecessary(lVar17,local_80,&local_78);
            if (uVar4 == 0) goto LAB_002859ad;
            goto LAB_00286698;
          }
          goto LAB_00286ae6;
        }
LAB_00285990:
        lVar17 = local_58;
        uVar4 = _AMAuthInstallBundleCopyReceiptCreateIfNecessary(local_58,local_80,&local_78);
        if (uVar4 == 0) {
          if (lVar12 == 0) {
LAB_002859ad:
            local_94 = 0;
LAB_00285a02:
            uVar4 = __AMAuthInstallBundleCopyOverrideBuildIdentity
                              (lVar17,lVar13,local_90,local_80,lVar8,local_b0,lVar12);
            if (uVar4 != 0) {
              _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                "failed to create build identity with overrides");
              goto LAB_002869e0;
            }
            local_60 = lVar8;
            if (*(long *)(lVar17 + 0x30) != 0) {
              local_88 = 0;
              uVar9 = _CFGetAllocator(lVar17);
              local_68 = __CFArrayCreateWithObjects
                                   (uVar9,&cf_BbProvisioningManifestKeyHash,
                                    &cf_BbActivationManifestKeyHash,&cf_BbCalibrationManifestKeyHash
                                    ,&cf_BbFactoryActivationManifestKeyHash,&cf_BbFDRSecurityKeyHash
                                    ,0);
              if (local_68 == 0) {
                uVar4 = 2;
              }
              else {
                uVar4 = _AMAuthInstallBundleCopyBuildIdentityForVariant
                                  (lVar17,local_90,local_b8,&local_88);
                if (uVar4 == 0) {
                  lVar12 = _CFArrayGetCount(local_68);
                  if (0 < lVar12) {
                    local_a8 = CONCAT44(local_a8._4_4_,0xe);
                    lVar10 = 0;
                    do {
                      lVar8 = _CFArrayGetValueAtIndex(local_68,lVar10);
                      if (lVar8 == 0) {
LAB_00286771:
                        lVar8 = local_60;
                        uVar7 = local_70;
                        lVar13 = local_40;
                        uVar4 = (uint)local_a8;
                        goto LAB_00285cc2;
                      }
                      lVar13 = _CFDictionaryGetValue(*(undefined8 *)(lVar17 + 0xd8),lVar8);
                      if (lVar13 == 0) {
                        lVar13 = _CFDictionaryGetValue(*(undefined8 *)(lVar17 + 0xd0),lVar8);
                        if (lVar13 == 0) {
                          iVar5 = _AMAuthInstallBasebandGetTagForKeyHashName
                                            (lVar17,lVar8,&local_108);
                          if (iVar5 == 0) {
                            if (CONCAT71(uStack_107,local_108) != 0) {
                              lVar13 = _CFDictionaryGetValue(local_88);
                              if (lVar13 != 0) {
                                _AMAuthInstallLog(6,"_AMAuthInstallBundleSetBasebandKeyHashes",
                                                  "setting (from build manifest): %@ = %@",lVar8,
                                                  lVar13);
                                iVar5 = _AMAuthInstallBasebandSetKeyHashInternal
                                                  (local_58,lVar8,lVar13);
                                if (iVar5 != 0) {
                                  pcVar16 = "Failed setting (from build manifest) %@ = %@";
                                  goto LAB_00285c91;
                                }
                              }
                              goto LAB_00285c9e;
                            }
                          }
                          else {
                            local_a8 = CONCAT44(local_a8._4_4_,iVar5);
                          }
                          goto LAB_00286771;
                        }
                        lVar14 = _CFDictionaryGetValue(*(undefined8 *)(lVar17 + 200),lVar8);
                        if ((lVar14 != 0) && (cVar3 = _CFEqual(lVar14,lVar13), cVar3 == '\0')) {
                          _AMAuthInstallLog(4,"_AMAuthInstallBundleSetBasebandKeyHashes",
                                            "key hash mismatch, triggering bbfw re-personalization")
                          ;
                          *(undefined1 *)(local_58 + 0xe0) = 1;
                        }
                        _AMAuthInstallLog(6,"_AMAuthInstallBundleSetBasebandKeyHashes",
                                          "setting (from hash baseband returned): %@ = %@",lVar8,
                                          lVar13);
                        iVar5 = _AMAuthInstallBasebandSetKeyHashInternal(local_58,lVar8,lVar13);
                        if (iVar5 != 0) {
                          pcVar16 = "Failed setting (from hash baseband returned) %@ = %@";
                          goto LAB_00285c91;
                        }
                      }
                      else {
                        _AMAuthInstallLog(6,"_AMAuthInstallBundleSetBasebandKeyHashes",
                                          "setting (from PR2 document/Override): %@ = %@",lVar8,
                                          lVar13);
                        iVar5 = _AMAuthInstallBasebandSetKeyHashInternal(lVar17,lVar8,lVar13);
                        if (iVar5 != 0) {
                          pcVar16 = "Failed setting (from PR2 document/Override) %@ = %@";
LAB_00285c91:
                          _AMAuthInstallLog(3,"_AMAuthInstallBundleSetBasebandKeyHashes",pcVar16,
                                            lVar8,lVar13);
                        }
                      }
LAB_00285c9e:
                      lVar10 = lVar10 + 1;
                      lVar17 = local_58;
                      lVar8 = local_60;
                      uVar7 = local_70;
                    } while (lVar12 != lVar10);
                  }
                  lVar13 = local_40;
                  uVar4 = 0;
                }
              }
LAB_00285cc2:
              _SafeRelease(local_68);
              _SafeRelease(local_88);
              if (uVar4 != 0) {
                lVar12 = local_50;
                uVar11 = (ulong)uVar4;
                goto LAB_00286ae6;
              }
              local_88 = 0;
              iVar5 = _AMAuthInstallBundleCopyBuildIdentityForVariant(lVar17,local_90,local_b8);
              if (iVar5 == 0) {
                lVar12 = _CFDictionaryGetValue(local_88,&cf_BbFactoryDebugEnable);
                if (lVar12 != 0) {
                  lVar10 = _CFBooleanGetTypeID();
                  lVar14 = _CFGetTypeID(lVar12);
                  lVar13 = local_40;
                  if (lVar10 == lVar14) {
                    cVar3 = _CFBooleanGetValue(lVar12);
                    if (cVar3 == '\x01') {
                      uVar9 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
                      _AMAuthInstallLog(6,"_AMAuthInstallBundleSetBasebandFactoryDebugEnable",
                                        "setting (from build manifest): %@ = %@",
                                        &cf_BbFactoryDebugEnable,uVar9);
                      iVar5 = _AMAuthInstallSetBbRequestEntry
                                        (local_58,&cf_BbFactoryDebugEnable,uVar9);
                      if (iVar5 != 0) {
                        _AMAuthInstallLog(3,"_AMAuthInstallBundleSetBasebandFactoryDebugEnable",
                                          "Failed setting (from build manifest) %@ : error = %d",
                                          &cf_BbFactoryDebugEnable,iVar5);
                      }
                    }
                    else {
                      _AMAuthInstallLog(6,"_AMAuthInstallBundleSetBasebandFactoryDebugEnable",
                                        "%@ (from build manifest) is not true. Not setting it",
                                        &cf_BbFactoryDebugEnable);
                    }
                  }
                }
              }
              else {
                _AMAuthInstallLog(3,"_AMAuthInstallBundleSetBasebandFactoryDebugEnable",
                                  "Failed to read build identity : error = %d",iVar5);
              }
              _SafeRelease(local_88);
              lVar12 = local_50;
              lVar17 = local_58;
              if (*(char *)(local_58 + 0xe0) != '\0') {
                if (local_78 == 0) {
                  local_38 = 1;
                }
                else {
                  lVar10 = _CFDictionaryGetValue(local_78,&cf_Personalized);
                  if (lVar10 != 0) {
                    lVar8 = _CFArrayGetCount(lVar10);
                    if (0 < lVar8) {
                      lVar12 = 0;
                      do {
                        lVar13 = _CFArrayGetValueAtIndex(lVar10,lVar12);
                        if (lVar13 == 0) {
                          _AMAuthInstallLog(3,"_AMAuthInstallBundleRemovePersonalizedBbfw",
                                            "failed to find personalized entry %d",lVar12);
                          lVar8 = local_60;
                          goto LAB_00286729;
                        }
                        cVar3 = _CFStringHasSuffix(lVar13,&cf__bbfw);
                        if (cVar3 != '\0') {
                          _AMAuthInstallLog(6,"_AMAuthInstallBundleRemovePersonalizedBbfw",
                                            "removing personalizedEntry %@",lVar13);
                          _CFArrayRemoveValueAtIndex(lVar10,lVar12);
                          lVar12 = lVar12 + -1;
                          lVar8 = lVar8 + -1;
                        }
                        lVar12 = lVar12 + 1;
                      } while (lVar12 < lVar8);
                    }
                    *(undefined1 *)(local_58 + 0xe0) = 0;
                    lVar17 = local_58;
                    lVar8 = local_60;
                    uVar7 = local_70;
                    lVar12 = local_50;
                    lVar13 = local_40;
                    goto LAB_00285ea0;
                  }
                  local_50 = lVar12;
                  _AMAuthInstallLog(3,"_AMAuthInstallBundleRemovePersonalizedBbfw",
                                    "failed to find personalized array");
LAB_00286729:
                  local_38 = 0xe;
                }
                uVar7 = _AMAuthInstallGetLocalizedStatusString(local_58);
                pcVar16 = "failed to remove bbfw: %@";
                goto LAB_00286747;
              }
            }
LAB_00285ea0:
            if (lVar13 == 0) {
              local_68 = 0;
              goto LAB_00286278;
            }
            uVar9 = _CFArrayGetCount(lVar13);
            cVar3 = _CFArrayContainsValue(lVar13,0,uVar9,&cf_BasebandFirmware);
            lVar10 = 0;
            if (cVar3 == '\0') {
LAB_00286100:
              lVar8 = local_60;
              local_68 = lVar10;
              local_38 = __AMAuthInstallBundleCreateServerRequestDictionary
                                   (lVar17,lVar13,local_60,local_78,local_90,lVar12,&local_100,
                                    &local_c8);
              if ((int)local_38 == 0) {
                local_38 = 0;
                lVar10 = _CFDictionaryGetValue(local_78,&cf_CumulativeResponse);
                if (lVar10 != 0 || local_100 != 0) {
                  if (local_100 == 0) {
                    local_c0 = _CFRetain(lVar10);
                    _AMAuthInstallLog(7,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                      "This is an install/stitch-only request.");
LAB_00286278:
                    lVar12 = _CFDictionaryGetValue(local_78,&cf_Updaters);
                    if (lVar12 == 0) {
                      uVar9 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
                      pvVar18 = (void *)0x0;
                    }
                    else {
                      lVar10 = _CFDictionaryGetCount(lVar12);
                      pvVar18 = _malloc(lVar10 * 8);
                      if (pvVar18 == (void *)0x0) {
                        pvVar18 = (void *)0x0;
                        lVar10 = local_48;
                        lVar13 = local_40;
                        lVar12 = local_50;
                        lVar14 = local_68;
                        uVar11 = 2;
                        goto LAB_002863e3;
                      }
                      _CFDictionaryGetKeysAndValues(lVar12,pvVar18,0);
                      if (0 < lVar10) {
                        lVar8 = 0;
                        do {
                          uVar7 = _CFDictionaryGetValue
                                            (lVar12,*(undefined8 *)((long)pvVar18 + lVar8 * 8));
                          _CFDictionaryRemoveValue(uVar7,&cf_RequestTags);
                          lVar8 = lVar8 + 1;
                        } while (lVar10 != lVar8);
                      }
                      uVar9 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
                      uVar11 = _AMAuthInstallBundleWriteReceipt(local_58,local_80,local_78,uVar9);
                      lVar8 = local_60;
                      uVar7 = local_70;
                      if ((int)uVar11 != 0) {
                        local_38 = uVar11;
                        _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                          "AMAuthInstallBundleWriteReceipt returned %d",uVar11);
                        lVar10 = local_48;
                        lVar13 = local_40;
                        lVar8 = local_60;
                        lVar12 = local_50;
                        lVar14 = local_68;
                        uVar11 = local_38;
                        goto LAB_002863e3;
                      }
                    }
                    local_38 = __AMAuthInstallBundlePopulatePersonalizedBundle
                                         (local_58,local_90,local_80,local_b8,lVar8,local_c0,
                                          local_78,local_40,param_8,local_48,uVar9);
                    lVar17 = local_58;
                    if ((int)local_38 == 0) {
                      local_38 = 0;
                      lVar10 = local_48;
                      lVar13 = local_40;
                      lVar12 = local_50;
                      lVar14 = local_68;
                      uVar11 = local_38;
                      if ((local_c8 != 0) &&
                         (uVar4 = __AMAuthInstallBundlePopulatePersonalizedBundle
                                            (local_58,local_b0,uVar7,param_6,local_50,local_f8,
                                             local_78,local_40,param_8,local_48,
                                             *(undefined8 *)PTR__kCFBooleanTrue_00441110),
                         lVar10 = local_48, lVar13 = local_40, lVar12 = local_50, lVar14 = local_68,
                         uVar11 = local_38, uVar4 != 0)) {
                        uVar7 = _AMAuthInstallGetLocalizedStatusString(lVar17,uVar4);
                        _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                          "failed to personalize recovery OS bundle",uVar7);
                        lVar10 = local_48;
                        lVar13 = local_40;
                        lVar12 = local_50;
                        lVar14 = local_68;
                        uVar11 = (ulong)uVar4;
                      }
                    }
                    else {
                      uVar7 = _AMAuthInstallGetLocalizedStatusString(local_58,local_38 & 0xffffffff)
                      ;
                      _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                        "failed to personalize bundle",uVar7);
                      lVar10 = local_48;
                      lVar13 = local_40;
                      lVar12 = local_50;
                      lVar14 = local_68;
                      uVar11 = local_38;
                    }
                    goto LAB_002863e3;
                  }
                  uVar11 = _AMAuthInstallApCreatePersonalizedResponse(lVar17,local_100,&local_c0);
                  if ((int)uVar11 == 0) {
                    if ((((byte)local_94 & local_c8 != 0) != 1) ||
                       (uVar11 = _AMAuthInstallApCreatePersonalizedResponse
                                           (lVar17,local_c8,&local_f8), (int)uVar11 == 0))
                    goto LAB_00286278;
                    pcVar16 = "failed to create ap ticket for recovery OS";
                    local_38 = uVar11;
                  }
                  else {
                    pcVar16 = "failed to create ap ticket";
                    local_38 = uVar11;
                  }
                  _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",pcVar16)
                  ;
                }
              }
              pvVar18 = (void *)0x0;
              lVar10 = local_48;
              lVar14 = local_68;
              uVar11 = local_38;
              goto LAB_002863e3;
            }
            iVar5 = *(int *)(lVar17 + 0x130);
            iVar6 = _AMAuthInstallBasebandIsFused(lVar17,&local_88);
            lVar8 = local_58;
            if (iVar6 != 0) {
LAB_002866bd:
              lVar17 = local_58;
              lVar10 = 0;
              lVar12 = local_50;
              goto LAB_00286100;
            }
            if ((char)local_88 == '\0') {
              cVar3 = _AMAuthInstallBasebandPersonalizationRequired(local_58);
              bVar19 = cVar3 != '\0';
            }
            else {
              bVar19 = false;
            }
            iVar6 = _AMAuthInstallBasebandLocalSigningEnabled(lVar8,&local_108);
            lVar17 = local_58;
            if ((iVar6 != 0) || (((!bVar19 && (local_108 == '\0')) && (iVar5 == 0))))
            goto LAB_002866bd;
            uVar1 = *(undefined4 *)(local_58 + 0x130);
            lVar10 = _CFDictionaryGetValue(local_78,&cf_Personalized);
            if (lVar10 == 0) {
              pcVar16 = "\'%@\' not found in receiptDict";
              pcVar15 = &cf_Personalized;
LAB_00286910:
              _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",pcVar16,
                                pcVar15);
              local_38 = 8;
              lVar13 = local_40;
              lVar8 = local_60;
              lVar12 = local_50;
              uVar11 = local_38;
            }
            else {
              lVar8 = _CFDictionaryGetValue(local_60,&cf_Manifest);
              if (lVar8 == 0) {
                pcVar16 = "\'%@\' not found in buildIdentity";
                pcVar15 = &cf_Manifest;
                goto LAB_00286910;
              }
              local_68 = CONCAT44(local_68._4_4_,uVar1);
              local_a8 = lVar8;
              lVar14 = _CFDictionaryGetValue(lVar8,&cf_BasebandFirmware);
              lVar8 = _CFDictionaryGetValue(**(undefined8 **)(lVar17 + 0x80),&cf_BasebandFirmware);
              if (lVar8 == 0 && lVar14 == 0) {
                pcVar16 = "\'%@\' not found in manifestDict";
                pcVar15 = &cf_BasebandFirmware;
                goto LAB_00286910;
              }
              __CFArrayRemoveValue(local_40,&cf_BasebandFirmware);
              uVar11 = _AMAuthInstallBundleCopyNextBasebandComponentName(lVar17,&local_e0);
              lVar2 = local_e0;
              lVar13 = local_40;
              lVar8 = local_60;
              lVar12 = local_50;
              if ((int)uVar11 == 0) {
                if (local_e0 != 0) {
                  uVar7 = _CFArrayGetCount(lVar10);
                  cVar3 = _CFArrayContainsValue(lVar10,0,uVar7,lVar2);
                  if (cVar3 == '\0') {
                    _AMAuthInstallLog(7,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                      "performing separate baseband firmware personalization of %@",
                                      lVar2);
                    lVar8 = _CFDictionaryGetValue(local_60,&cf_UniqueBuildID);
                    if (lVar8 != 0) {
                      uVar7 = _CFGetAllocator(local_58);
                      lVar12 = _CFDictionaryCreateMutable
                                         (uVar7,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                      if (lVar12 != 0) {
                        _CFDictionarySetValue(lVar12,&cf_UniqueBuildID,lVar8);
                        goto LAB_002864bf;
                      }
LAB_00286ad0:
                      lVar13 = local_40;
                      lVar8 = local_60;
                      lVar12 = local_50;
                      uVar11 = 2;
                      goto LAB_00286ae6;
                    }
                    lVar12 = 0;
                    _AMAuthInstallLog(6,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                      "this build lacks UniqueBuildID");
LAB_002864bf:
                    if ((*(long *)(*(long *)(local_58 + 0x10) + 0x78) != 0) ||
                       (*(long *)(*(long *)(local_58 + 0x10) + 0x80) != 0)) {
                      lVar8 = _CFDictionaryGetValue(local_60,&cf_ProductMarketingVersion);
                      if (lVar8 == 0) {
                        _AMAuthInstallLog(6,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                          "this build lacks ProductMarketingVersion");
                      }
                      else {
                        if (lVar12 == 0) {
                          uVar7 = _CFGetAllocator(local_58);
                          lVar12 = _CFDictionaryCreateMutable
                                             (uVar7,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                          if (lVar12 == 0) goto LAB_00286ad0;
                        }
                        _CFDictionarySetValue(lVar12,&cf_ProductMarketingVersion,lVar8);
                      }
                    }
                    lVar17 = local_58;
                    lVar2 = local_80;
                    pvVar18 = (void *)0x0;
                    local_68 = lVar12;
                    uVar11 = __AMAuthInstallBundleInstallPersonalizedBasebandFirmware
                                       (local_58,lVar14,0,local_a8,local_90,local_80,lVar10,lVar12);
                    uVar7 = local_70;
                    lVar10 = local_48;
                    lVar13 = local_40;
                    lVar8 = local_60;
                    lVar12 = local_50;
                    lVar14 = local_68;
                    if ((int)uVar11 != 0) goto LAB_002863e3;
                    uVar11 = _AMAuthInstallBundleWriteReceipt
                                       (lVar17,lVar2,local_78,
                                        *(undefined8 *)PTR__kCFBooleanFalse_00441108);
                    lVar12 = local_50;
                    lVar10 = local_68;
                    lVar13 = local_40;
                    if ((int)uVar11 == 0) goto LAB_00286100;
                    local_38 = uVar11;
                    uVar7 = _AMAuthInstallGetLocalizedStatusString(lVar17,uVar11 & 0xffffffff);
                    _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                      "failed to write receipt: %@",uVar7);
                    lVar14 = local_68;
                  }
                  else {
                    _AMAuthInstallLog(7,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                      "entry \"%@\" has been previously personalized; skipping it",
                                      lVar2);
                    lVar12 = local_50;
                    uVar7 = local_70;
                    if ((int)local_68 == 0) {
LAB_002860fc:
                      lVar10 = 0;
                      lVar13 = local_40;
                      goto LAB_00286100;
                    }
                    _AMAuthInstallLog(7,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                      "inserting provisioning info (if any) into existing bbfw for \"%@\""
                                      ,lVar2);
                    uVar7 = _CFGetAllocator(lVar17);
                    uVar11 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                                       (uVar7,local_80,lVar2,0,&local_a0);
                    lVar8 = local_60;
                    uVar7 = local_70;
                    lVar13 = local_40;
                    if ((int)uVar11 != 0) goto LAB_00286ae6;
                    if (local_a0 == 0) {
                      _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                        "bbfwURL AMAuthInstallPlatformCopyURLWithAppendedComponent failed"
                                       );
                      local_38 = 2;
                      lVar13 = local_40;
                      uVar11 = local_38;
                      goto LAB_00286ae6;
                    }
                    uVar11 = _AMAuthInstallBasebandCopyFirmware(lVar17,local_a0);
                    if ((int)uVar11 != 0) {
                      pcVar16 = "AMAuthInstallBasebandCopyFirmware failed";
                      local_38 = uVar11;
LAB_00286a89:
                      _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                        pcVar16);
                      lVar13 = local_40;
                      uVar11 = local_38;
                      goto LAB_00286ae6;
                    }
                    uVar11 = _AMAuthInstallBasebandCopyAllComponents(lVar17,local_a0,&local_e8);
                    if ((int)uVar11 != 0) {
                      pcVar16 = "AMAuthInstallBasebandCopyAllComponents failed";
                      local_38 = uVar11;
                      goto LAB_00286a89;
                    }
                    uVar11 = _AMAuthInstallBasebandWriteFilesToBbfw(lVar17,local_a0,local_e8);
                    if ((int)uVar11 == 0) goto LAB_002860fc;
                    local_38 = uVar11;
                    _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                      "AMAuthInstallBasebandWriteFilesToBbfw failed");
                    lVar14 = 0;
                  }
                  pvVar18 = (void *)0x0;
                  lVar10 = local_48;
                  lVar13 = local_40;
                  lVar8 = local_60;
                  uVar11 = local_38;
                  goto LAB_002863e3;
                }
                _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                                  "nextBbfwComponentStr is NULL");
                lVar13 = local_40;
                lVar8 = local_60;
                lVar12 = local_50;
                uVar11 = local_38;
              }
            }
          }
          else {
            uVar4 = _AMAuthInstallBundleCopyReceiptCreateIfNecessary(lVar17,uVar7,&local_f0);
            if (uVar4 == 0) {
              _CFDictionarySetValue(local_78,&cf_RecoveryOS,local_f0);
              uVar9 = _SafeRelease(local_f0);
              local_94 = (undefined4)CONCAT71((int7)((ulong)uVar9 >> 8),1);
              lVar17 = local_58;
              goto LAB_00285a02;
            }
            uVar7 = _AMAuthInstallGetLocalizedStatusString(local_58,uVar4);
            _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",
                              "failed to generate a recovery OS receipt: %@",uVar7);
LAB_002869e0:
            uVar11 = (ulong)uVar4;
          }
LAB_00286ae6:
          local_38 = uVar11;
          pvVar18 = (void *)0x0;
          lVar10 = local_48;
          lVar14 = 0;
          uVar11 = local_38;
          goto LAB_002863e3;
        }
LAB_00286698:
        local_38 = (ulong)uVar4;
        local_50 = lVar12;
        uVar7 = _AMAuthInstallGetLocalizedStatusString(lVar17);
        pcVar16 = "failed to generate a receipt: %@";
LAB_00286747:
        _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizePartialWithRecoveryOS",pcVar16,uVar7);
        lVar10 = local_48;
        lVar13 = local_40;
      }
      else {
        uVar9 = _CFGetAllocator(local_58);
        local_40 = _CFArrayCreateMutableCopy(uVar9,0,param_7);
        if (local_40 != 0) goto LAB_002858ef;
        lVar13 = 0;
LAB_002867fb:
        local_38 = 2;
        lVar10 = 0;
      }
      pvVar18 = (void *)0x0;
      lVar12 = local_50;
      lVar14 = 0;
      uVar11 = local_38;
      goto LAB_002863e3;
    }
    uVar7 = _CFGetAllocator(param_1);
    uVar7 = _CFURLCreateCopyAppendingPathComponent(uVar7,local_80,&cf_RecoveryOS,1);
    uVar11 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,local_b0,param_6,&local_d0);
    if ((int)uVar11 != 0) {
LAB_002867e4:
      local_70 = uVar7;
      pvVar18 = (void *)0x0;
      lVar10 = 0;
      lVar13 = 0;
      lVar12 = 0;
      lVar14 = 0;
      goto LAB_002863e3;
    }
    if (local_d0 != 0) {
      uVar9 = _CFGetAllocator(param_1);
      local_50 = _CFDictionaryCreateMutableCopy(uVar9,0,local_d0);
      if (local_50 != 0) {
        __AMAuthInstallBundleCreateDebugDirectory(param_1,uVar7);
        goto LAB_0028589f;
      }
      uVar11 = 2;
      goto LAB_002867e4;
    }
  }
  local_70 = uVar7;
  pvVar18 = (void *)0x0;
  lVar10 = 0;
  lVar13 = 0;
  lVar12 = 0;
  lVar14 = 0;
  uVar11 = local_38;
LAB_002863e3:
  local_38 = uVar11;
  _SafeRelease(lVar13);
  _SafeRelease(lVar10);
  _SafeRelease(local_d8);
  _SafeRelease(lVar8);
  _SafeRelease(local_100);
  _SafeRelease(local_c8);
  _SafeRelease(local_c0);
  _SafeRelease(local_f8);
  _SafeRelease(local_78);
  _SafeRelease(lVar14);
  _SafeRelease(local_a0);
  _SafeRelease(local_e8);
  _SafeRelease(local_e0);
  _SafeFree(pvVar18);
  _SafeRelease(local_70);
  _SafeRelease(local_d0);
  _SafeRelease(lVar12);
  return local_38;
}

