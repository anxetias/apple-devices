// rea decompile_all
// name: _AMRestorePerformTADRestore
// address: 0xc6acc
// body: available
// range: 0xc6acc-0xc7b6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc7b66 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRestorePerformTADRestore(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  FILE *pFVar14;
  cfstringStruct *pcVar15;
  cfstringStruct *pcVar16;
  long lVar17;
  uint uVar18;
  undefined8 local_8d0;
  long local_8c8;
  long local_8c0;
  long local_8b8;
  long local_8b0;
  long local_8a8;
  uint local_8a0;
  uint local_89c;
  long local_898;
  long local_890;
  long local_888;
  long local_880;
  long local_878;
  long local_870;
  long local_868;
  long local_860;
  cfstringStruct *local_858;
  long local_850;
  long local_848;
  cfstringStruct *local_840;
  char local_838 [1024];
  long local_438 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_8d0 = 0;
  _AMRestoreCaptureSubsystemLogsIfNeeded();
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar8 = _CFDictionaryCreateMutableCopy(uVar1,0,param_2);
  if (lVar8 == 0) {
    _AMRLog(3,&cf_unabletocreatemutablecopyofoptions);
  }
  else {
    if (*(long *)(param_1 + 0xa8) == 0) {
      _AMRLog(7,&cf____operation_dprogress_d,param_1,0x2d,0xffffffff);
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(param_1,0x2d,0xffffffff,*(undefined8 *)(param_1 + 0x18));
      }
      *(undefined8 *)(param_1 + 0x20) = 0xffffffff0000002d;
      local_438[0] = 0;
      iVar6 = _AMTADModeDeviceCopyAuthInstallPreflightOptions(param_1,lVar8);
      if (iVar6 == 0) {
        _CFRelease(lVar8);
        lVar8 = _CFDictionaryCreateMutableCopy(uVar1,0,local_438[0]);
        _CFRelease(local_438[0]);
        goto LAB_000c6b31;
      }
LAB_000c767b:
      _CFRelease(lVar8);
    }
    else {
LAB_000c6b31:
      local_8b0 = _CFDictionaryGetValue(lVar8,&cf_PersonalizedRestoreBundlePath);
      if (((local_8b0 == 0) || (cVar3 = _AMRestoreOptionsAreLegacy(lVar8), cVar3 == '\0')) ||
         (iVar6 = _AMRAuthInstallAlignOptionsToPersonalizedBundle(lVar8,local_8b0,1), iVar6 == 0)) {
        cVar3 = _AMRestoreOptionsAreLegacy(lVar8);
        if (cVar3 != '\0') {
          if (lVar8 == 0) {
            _AMRLog(3,&cf_Cannotresolvebundlepathoptionswithoutoptions);
          }
          else {
            lVar9 = _CFDictionaryGetValue(lVar8,&cf_RestoreBundlePath);
            if (lVar9 != 0) {
              local_438[0] = 0;
              iVar6 = _AMRestoreCreatePathsForBundle(lVar9,0,0,0,0,0,0,local_438);
              if (local_438[0] != 0 && iVar6 == 0) {
                _CFDictionaryAddValue(lVar8,&cf_FirmwareDirectory);
                _CFRelease(local_438[0]);
              }
            }
          }
        }
        local_880 = 0;
        local_8b8 = 0;
        cVar3 = _AMRestoreOptionsAreLegacy(lVar8);
        if (cVar3 == '\0') {
          if (lVar8 == 0) {
            pcVar16 = &cf_Can_tgetDFUfileforNULLoptions;
          }
          else {
            iVar6 = __AMRLoadFirmwareInfoTAD(param_1);
            if (iVar6 == 0) {
              if (*(char *)(param_1 + 0x80) != '\0') {
                _AMRLog(4,&cf____productionfuseddevice,param_1);
              }
              iVar6 = _AMRAuthInstallCopyPathToFirmware(lVar8,&local_8b8);
              if (iVar6 == 0) {
                if ((*(int *)(param_1 + 0x34) == 0) && ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
                  puVar12 = &_kAMAuthInstallBuildIdentityApiBSSKey;
                }
                else {
                  puVar12 = &_kAMAuthInstallBuildIdentityApiBECKey;
                }
                uVar1 = *puVar12;
                iVar6 = _AMRAuthInstallCopyFileSystemPathForKey
                                  (*(undefined8 *)(param_1 + 0xa8),lVar8,uVar1,&local_880);
                lVar9 = local_880;
                if (iVar6 != 0) {
                  _AMRLog(3,&cf_FailedtolocateDFUfilefortype__,uVar1);
                  lVar9 = local_880;
                }
                goto LAB_000c74b3;
              }
              pcVar16 = &cf_FailedtogetfirmwaredirectorytolocateWTFfile_;
            }
            else {
              pcVar16 = &cf_FailedtogetfirmwareinfofromdeviceforDFUfileselection;
            }
          }
          _AMRLog(3,pcVar16);
          lVar9 = local_880;
          goto LAB_000c74b3;
        }
        lVar9 = _CFDictionaryGetValue(lVar8,&cf_DFUFile);
        if (lVar9 == 0) {
          if (*(int *)(param_1 + 0x9c) != 0) {
            _AMRLog(3,&cf_don_tknowhowtofindDFUfilefordevicetype_d);
            lVar9 = 0;
            goto LAB_000c74b3;
          }
          lVar9 = _CFDictionaryGetValue(lVar8,&cf_DFUFile);
          if (lVar9 != 0) goto LAB_000c6e11;
          lVar10 = _CFDictionaryGetValue(lVar8,&cf_FirmwareDirectory);
          if (lVar10 == 0) {
LAB_000c7877:
            lVar9 = 0;
          }
          else {
            iVar6 = __AMRLoadFirmwareInfoTAD(param_1);
            if (iVar6 == 0) {
              if (*(char *)(param_1 + 0x80) == '\x01') {
                _AMRLog(4,&cf____productionfuseddevice,param_1);
              }
              lVar9 = _CFDictionaryGetValue(lVar8,&cf_BoardConfig);
              if (lVar9 == 0) {
                local_438[0x12] = 0;
                local_438[0x13] = 0;
                local_438[0x10] = 0;
                local_438[0x11] = 0;
                local_438[0xe] = 0;
                local_438[0xf] = 0;
                local_438[0xc] = 0;
                local_438[0xd] = 0;
                local_438[10] = 0;
                local_438[0xb] = 0;
                local_438[8] = 0;
                local_438[9] = 0;
                local_438[6] = 0;
                local_438[7] = 0;
                local_438[4] = 0;
                local_438[5] = 0;
                local_438[2] = 0;
                local_438[3] = 0;
                local_438[0] = 0;
                local_438[1] = 0;
                local_438[0x14] = 0;
                cVar3 = __AMRestoreGetDeviceMapEntryForHardware(lVar8,param_1 + 0x28);
                if ((cVar3 != '\x01') ||
                   (lVar9 = _CFStringCreateWithCString(uVar1,local_438 + 0xd,0x8000100), lVar9 == 0)
                   ) goto LAB_000c7877;
              }
              else {
                _CFRetain(lVar9);
              }
              local_840 = (cfstringStruct *)lVar9;
              pcVar15 = (cfstringStruct *)_CFDictionaryGetValue(lVar8,&cf_DFUFileType);
              pcVar16 = &cf_DEVELOPMENT;
              if (pcVar15 != (cfstringStruct *)0x0) {
                pcVar16 = pcVar15;
              }
              if ((*(int *)(param_1 + 0x34) == 0) && ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
                local_858 = &cf_iBSS;
              }
              else {
                local_858 = &cf_iBEC;
              }
              local_438[0] = 0;
              iVar6 = _AMRAuthInstallCreatePathFromBundle(*(undefined8 *)(param_1 + 0xa8),lVar8);
              pcVar15 = local_840;
              lVar9 = local_438[0];
              if (iVar6 != 0) {
                lVar9 = _CFStringCreateWithFormat
                                  (uVar1,0,&cf____dfu__________dfu,lVar10,local_858,local_840,
                                   pcVar16);
              }
              goto LAB_000c74a7;
            }
            _AMRLog(3,&cf_unabletogetfirmwareinfofromdevice);
            lVar9 = 0;
          }
        }
        else {
          lVar10 = _CFDictionaryGetValue(lVar8,&cf_OnlyPersonalizeDFUFile);
          if (lVar10 != 0) {
            pcVar16 = *(cfstringStruct **)PTR__kCFBooleanTrue_00441110;
            cVar3 = _CFEqual(lVar10,pcVar16);
            if (cVar3 != '\0') {
              local_870 = lVar9;
              local_858 = pcVar16;
              ___bzero(local_438,0x400);
              lVar9 = 0;
              local_878 = 0;
              local_898 = 0;
              local_8c8 = 0;
              local_890 = 0;
              local_8c0 = 0;
              local_8a0 = 0;
              local_888 = 0;
              lVar10 = _AMAuthInstallCreate(uVar1);
              local_840 = (cfstringStruct *)0x0;
              if (lVar10 != 0) {
                iVar6 = _AMRAuthInstallConfigureUsingOptions(lVar10,lVar8,0,0);
                if (iVar6 == 0) {
                  uVar7 = 0;
                  local_850 = lVar10;
                  lVar9 = _CFDictionaryCreateMutable
                                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                  lVar10 = local_850;
                  if (lVar9 == 0) goto LAB_000c6de9;
                  local_840 = &cf_ECID;
                  uVar11 = _AMTADModeDeviceGetECID(param_1);
                  _AMAuthInstallSupportDictionarySetInteger64(lVar9,local_840,uVar11);
                  local_840 = &cf_ApChipID;
                  iVar6 = __AMRLoadFirmwareInfoTAD(param_1);
                  if (iVar6 == 0) {
                    uVar7 = *(undefined4 *)(param_1 + 0x28);
                  }
                  _AMAuthInstallSupportDictionarySetInteger32(lVar9,local_840,uVar7);
                  uVar7 = _AMTADModeDeviceGetBoardID(param_1);
                  _AMAuthInstallSupportDictionarySetInteger32(lVar9,&cf_ApBoardID,uVar7);
                  iVar6 = __AMRLoadFirmwareInfoTAD(param_1);
                  uVar7 = 0;
                  if (iVar6 == 0) {
                    uVar7 = *(undefined4 *)(param_1 + 0x7c);
                  }
                  local_848 = lVar9;
                  _AMAuthInstallSupportDictionarySetInteger32(lVar9,&cf_ApSecurityDomain,uVar7);
                  iVar6 = __AMRLoadFirmwareInfoTAD(param_1);
                  pcVar16 = local_858;
                  if (iVar6 == 0) {
                    uVar4 = *(undefined1 *)(param_1 + 0x80);
                  }
                  else {
                    uVar4 = 0;
                  }
                  _AMAuthInstallSupportDictionarySetBoolean(local_848,&cf_ApProductionMode,uVar4);
                  iVar6 = __AMRLoadFirmwareInfoTAD(param_1);
                  if (iVar6 == 0) {
                    uVar4 = *(undefined1 *)(param_1 + 0x81);
                  }
                  else {
                    uVar4 = 0;
                  }
                  _AMAuthInstallSupportDictionarySetBoolean(local_848,&cf_ApSecurityMode,uVar4);
                  iVar6 = __AMRLoadFirmwareInfoTAD(param_1);
                  if (iVar6 == 0) {
                    uVar4 = *(undefined1 *)(param_1 + 0x84);
                  }
                  else {
                    uVar4 = 0;
                  }
                  _AMAuthInstallSupportDictionarySetBoolean
                            (local_848,&cf_ApEffectiveSecurityMode,uVar4);
                  iVar6 = __AMRLoadFirmwareInfoTAD(param_1);
                  lVar9 = local_848;
                  if (iVar6 == 0) {
                    uVar4 = *(undefined1 *)(param_1 + 0x83);
                  }
                  else {
                    uVar4 = 0;
                  }
                  _AMAuthInstallSupportDictionarySetBoolean
                            (local_848,&cf_ApEffectiveProductionMode,uVar4);
                  _AMAuthInstallSupportDictionarySetBoolean(lVar9,&cf_ApInRomDFU,1);
                  if (*(long *)(param_1 + 0x88) != 0) {
                    _CFDictionarySetValue(lVar9,&cf_ApSikaFuse);
                  }
                  if (*(char *)(param_1 + 0x82) != '\0') {
                    _AMAuthInstallSupportDictionarySetBoolean(lVar9,&cf_UIDMode,1);
                  }
                  lVar10 = _CFDictionaryGetValue(lVar8,&cf_RequiresUIDMode);
                  if ((lVar10 != 0) && (cVar3 = _CFBooleanGetValue(lVar10), cVar3 == '\x01')) {
                    _CFDictionarySetValue(lVar9,&cf_RequiresUIDMode,pcVar16);
                  }
                  lVar9 = _CFDictionaryGetValue(lVar8,&cf_UIDMode);
                  if (lVar9 != 0) {
                    lVar10 = _CFBooleanGetTypeID();
                    lVar13 = _CFGetTypeID(lVar9);
                    if (lVar10 == lVar13) {
                      _CFDictionarySetValue(local_848,&cf_UIDMode,lVar9);
                    }
                  }
                  bVar5 = __AMRTADDeviceGetIBFL(param_1,&local_8a0);
                  uVar2 = local_8a0;
                  bVar5 = (byte)((local_8a0 & 4) >> 2) & bVar5;
                  uVar18 = (uint)bVar5;
                  if (bVar5 == 1) {
                    lVar9 = _CFDictionaryGetValue(lVar8,&cf_AuthInstallAllowMixAndMatch);
                    if ((lVar9 != 0) && (cVar3 = _CFBooleanGetValue(lVar9), cVar3 == '\x01')) {
                      _CFDictionaryAddValue(local_848,&cf_ApAllowMixAndMatch,local_858);
                    }
                    _CFDictionarySetValue(local_848,&cf_ApSupportsImg4,local_858);
                    if ((uVar2 & 0x20) != 0) {
                      _CFDictionarySetValue(local_848,&cf_ApImg4DigestType,&cf_sha2_384);
                    }
                    lVar9 = _CFDictionaryGetValue(lVar8,&cf_SkipNoncesForAPSEP);
                    if (lVar9 != 0) {
                      lVar10 = _CFBooleanGetTypeID();
                      local_858 = (cfstringStruct *)CONCAT44(local_858._4_4_,1);
                      lVar13 = _CFGetTypeID(lVar9);
                      uVar18 = (uint)local_858;
                      if ((lVar10 == lVar13) && (cVar3 = _CFBooleanGetValue(lVar9), cVar3 == '\x01')
                         ) goto LAB_000c73b4;
                    }
                    iVar6 = __AMRTADDeviceCopyNonceWithTag(param_1,&cf_NONC,&local_898);
                    if (iVar6 == 0) {
                      uVar11 = _CFGetAllocator(local_850);
                      iVar6 = _AMAuthInstallSupportCopyDataFromHexString
                                        (uVar11,local_898,&local_8c8);
                      if (local_8c8 != 0 && iVar6 == 0) {
                        _CFDictionarySetValue(local_848,&cf_ApNonce);
                      }
                    }
                    iVar6 = __AMRTADDeviceCopyNonceWithTag(param_1,&cf_SNON,&local_890);
                    if (iVar6 == 0) {
                      uVar11 = _CFGetAllocator(local_850);
                      iVar6 = _AMAuthInstallSupportCopyDataFromHexString
                                        (uVar11,local_890,&local_8c0);
                      if (local_8c0 != 0 && iVar6 == 0) {
                        _CFDictionarySetValue(local_848,&cf_SepNonce);
                      }
                    }
                  }
LAB_000c73b4:
                  lVar9 = _CFDictionaryGetValue(lVar8,&cf_AuthInstallDemotionPolicyOverride);
                  lVar13 = local_848;
                  if (lVar9 != 0) {
                    _CFDictionarySetValue(local_848,&cf_DemotionPolicy,lVar9);
                  }
                  iVar6 = _AMAuthInstallApSetParameters(local_850,lVar13);
                  lVar10 = local_850;
                  if ((iVar6 != 0) ||
                     (iVar6 = _AMRAuthInstallSetFDRTrustObjectHash(local_850,lVar8),
                     lVar10 = local_850, iVar6 != 0)) goto LAB_000c7418;
                  iVar6 = _AMRAuthInstallEnablePersonalization(local_850,lVar8);
                  if (iVar6 != 0) {
                    _AMRLog(3,&cf__s_AMRAuthInstallEnablePersonalizationfailed,
                            "_copyPersonalizedFileForDFUDevice");
                    lVar10 = local_850;
                    goto LAB_000c7418;
                  }
                  local_858 = (cfstringStruct *)CONCAT44(local_858._4_4_,uVar18);
                  lVar9 = _CFURLCreateWithFileSystemPath(uVar1,local_870,0,0);
                  lVar10 = local_850;
                  if (lVar9 == 0) goto LAB_000c7418;
                  local_868 = lVar9;
                  local_870 = _CFURLCopyLastPathComponent(lVar9);
                  if (local_870 == 0) {
                    lVar9 = 0;
                    local_840 = (cfstringStruct *)0x0;
                    lVar17 = local_850;
LAB_000c7b55:
                    _CFRelease(lVar17);
                    lVar10 = local_868;
                  }
                  else {
                    uVar11 = _AMTADModeDeviceGetECID(param_1);
                    lVar9 = 0;
                    local_8a8 = _CFStringCreateWithFormat
                                          (uVar1,0,&cf_____llx_personalized,local_870,uVar11);
                    local_840 = (cfstringStruct *)0x0;
                    if (local_8a8 != 0) {
                      uVar11 = _AMAuthInstallSupportGetURLForTempDirectoryRoot();
                      lVar9 = 0;
                      iVar6 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                                        (uVar1,uVar11,local_8a8,0,&local_878);
                      if (iVar6 == 0) {
                        uVar11 = _CFDictionaryGetValue(lVar8,&cf_RequestRestoreRulesDeviceMap);
                        iVar6 = _AMAuthInstallApCreateImagePropertiesWithDeviceMap
                                          (local_850,local_868,uVar11,&local_888);
                        if (iVar6 == 0) {
                          lVar9 = 0;
                          local_860 = _CFDictionaryCreateMutableCopy(0,0,local_888);
                          local_840 = (cfstringStruct *)0x0;
                          lVar13 = local_848;
                          if (local_860 != 0) {
                            lVar9 = _CFDictionaryGetValue(lVar8,&cf_RequestOverrides);
                            if (lVar9 != 0) {
                              lVar10 = _CFGetTypeID(lVar9);
                              lVar13 = _CFDictionaryGetTypeID();
                              if (lVar10 == lVar13) {
                                _CFDictionaryApplyFunction
                                          (lVar9,__AMRestoreDFUPropertyOverrideApplier,local_860);
                              }
                            }
                            lVar9 = _CFDictionaryGetValue(lVar8,&cf_ImageTrusted);
                            if (lVar9 != 0) {
                              lVar10 = _CFGetTypeID(lVar9);
                              lVar13 = _CFBooleanGetTypeID();
                              if (lVar10 == lVar13) {
                                _CFDictionarySetValue(local_860,&cf_Trusted,lVar9);
                              }
                            }
                            lVar9 = _CFDictionaryGetValue(lVar8,&cf_ApRequestEntries);
                            if (lVar9 != 0) {
                              _CFDictionaryApplyFunction
                                        (lVar9,__AMRestoreAPOverrideApplier,local_850);
                            }
                            if ((char)local_858 == '\0') {
                              iVar6 = _AMAuthInstallApImg3PersonalizeFile
                                                (local_850,local_868,local_878,local_860);
                            }
                            else {
                              iVar6 = _AMAuthInstallApImg4PersonalizeFile
                                                (local_850,local_868,local_878,local_860);
                            }
                            if ((iVar6 == 0) &&
                               (cVar3 = _CFURLGetFileSystemRepresentation
                                                  (local_878,1,local_438,0x400), cVar3 != '\0')) {
                              lVar9 = _CFStringCreateWithCString(uVar1,local_438,0x8000100);
                            }
                            else {
                              lVar9 = 0;
                            }
                            local_840 = (cfstringStruct *)local_860;
                            lVar13 = local_848;
                          }
                        }
                        else {
                          lVar9 = 0;
                          local_840 = (cfstringStruct *)0x0;
                          lVar13 = local_848;
                        }
                      }
                      else {
                        local_840 = (cfstringStruct *)0x0;
                      }
                    }
                    _CFRelease(local_850);
                    _CFRelease(local_870);
                    lVar17 = local_8a8;
                    lVar10 = local_868;
                    if (local_8a8 != 0) goto LAB_000c7b55;
                  }
                }
                else {
LAB_000c6de9:
                  lVar13 = 0;
LAB_000c7418:
                  lVar9 = 0;
                  local_840 = (cfstringStruct *)0x0;
                }
                _CFRelease(lVar10);
                if (local_878 != 0) {
                  _CFRelease();
                }
                if (lVar13 != 0) {
                  _CFRelease(lVar13);
                }
              }
              if (local_898 != 0) {
                _CFRelease();
              }
              if (local_8c8 != 0) {
                _CFRelease();
              }
              if (local_890 != 0) {
                _CFRelease();
              }
              if (local_8c0 != 0) {
                _CFRelease();
              }
              if (local_888 != 0) {
                _CFRelease();
              }
              pcVar15 = local_840;
              if (local_840 != (cfstringStruct *)0x0) {
LAB_000c74a7:
                _CFRelease(pcVar15);
              }
              goto LAB_000c74b3;
            }
          }
LAB_000c6e11:
          lVar9 = _CFStringCreateCopy(uVar1,lVar9);
        }
LAB_000c74b3:
        local_880 = lVar9;
        if (local_8b8 != 0) {
          _CFRelease();
        }
        lVar9 = local_880;
        if (local_880 == 0) {
          _AMRLog(3,&cf__copyPathToDFUFilefailed);
          iVar6 = 1;
        }
        else {
          local_89c = 0;
          cVar3 = __AMRTADDeviceGetIBFL(param_1);
          if ((cVar3 != '\0') && ((local_89c & 2) != 0)) {
            _AMRAuthInstallCopyTicketData(*(undefined8 *)(param_1 + 0xa8),lVar8,&local_8d0);
          }
          _AMRLog(8,&cf_usingDFUfile___,lVar9);
          ___bzero(local_838,0x400);
          _CFStringGetFileSystemRepresentation(lVar9,local_838,0x400);
          pFVar14 = _fopen(local_838,"rb");
          if (pFVar14 == (FILE *)0x0) {
            _AMRLog(3,&cf_failedtogetdfuFileHandle);
            iVar6 = 1;
          }
          else {
            iVar6 = _libDFU_downloadToDevice(*(undefined8 *)(param_1 + 0x90),pFVar14,param_1);
            if (*(char *)(param_1 + 0xa4) != '\0') {
              _AMRLog(3,&cf_Theuserrequestedcancelrestore);
              iVar6 = 99;
            }
            _fclose(pFVar14);
          }
          lVar10 = _CFDictionaryGetValue(lVar8,&cf_OnlyPersonalizeDFUFile);
          if (((lVar10 != 0) &&
              (cVar3 = _CFEqual(lVar10,*(undefined8 *)PTR__kCFBooleanTrue_00441110), cVar3 == '\x01'
              )) && (lVar10 = _CFDictionaryGetValue(lVar8,&cf_PreserveBundle),
                    lVar10 == *(long *)PTR__kCFBooleanFalse_00441108)) {
            ___bzero(local_438,0x400);
            cVar3 = _CFStringGetCString(lVar9,local_438,0x400,0x8000100);
            if (cVar3 == '\x01') {
              _unlink((char *)local_438);
            }
          }
          _CFRelease(lVar9);
        }
      }
      else {
        _AMRLog(3,&cf_failedtoalignoptionswithpersonalizedbundle);
      }
      if ((local_8b0 != 0) && (iVar6 != 0)) {
        _AMRAuthInstallDeletePersonalizedBundle(local_8b0,lVar8);
      }
      if (lVar8 != 0) goto LAB_000c767b;
    }
    if (iVar6 != 0) {
      _AMRLog(3,&cf____DFUfailed_result__d_,param_1,iVar6);
      goto LAB_000c76bc;
    }
  }
  iVar6 = 0;
  _AMRLog(6,&cf____DFUsucceeded,param_1);
LAB_000c76bc:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

