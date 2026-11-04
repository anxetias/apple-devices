// rea decompile_all
// name: _AMRestorePerformDFURestore
// address: 0xebd73
// body: available
// range: 0xebd73-0xed126 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xed122 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRestorePerformDFURestore
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  cfstringStruct *pcVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long local_4d8;
  long local_4d0;
  undefined8 local_4c8;
  uint local_4bc;
  long local_4b8;
  long local_4b0;
  long local_4a8;
  long local_4a0;
  uint local_494;
  long local_490;
  cfstringStruct *local_488;
  long local_480;
  long local_478;
  long local_470;
  long local_468;
  long local_460;
  long local_458;
  long local_450;
  cfstringStruct *local_448;
  cfstringStruct *local_440;
  long local_438 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_4c8 = 0;
  _AMRestoreCaptureSubsystemLogsIfNeeded();
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  pcVar9 = (cfstringStruct *)_CFDictionaryCreateMutableCopy(uVar1,0,param_2);
  if (pcVar9 == (cfstringStruct *)0x0) {
    _AMRLog(3,&cf_unabletocreatemutablecopyofoptions);
  }
  else {
    if (*(long *)(param_1 + 0xa8) == 0) {
      __AMDFUModeDeviceProgress(param_1,0x2d,0xffffffff);
      local_438[0] = 0;
      iVar7 = _AMDFUModeDeviceCopyAuthInstallPreflightOptions(param_1,pcVar9);
      if (iVar7 == 0) {
        _CFRelease(pcVar9);
        pcVar9 = (cfstringStruct *)_CFDictionaryCreateMutableCopy(uVar1,0,local_438[0]);
        _CFRelease(local_438[0]);
        goto LAB_000ebde6;
      }
LAB_000ecba3:
      _CFRelease(pcVar9);
    }
    else {
LAB_000ebde6:
      lVar10 = _CFDictionaryGetValue(pcVar9,&cf_PersonalizedRestoreBundlePath);
      if (((lVar10 == 0) || (cVar2 = _AMRestoreOptionsAreLegacy(pcVar9), cVar2 == '\0')) ||
         (iVar7 = _AMRAuthInstallAlignOptionsToPersonalizedBundle(pcVar9,lVar10,1), iVar7 == 0)) {
        cVar2 = _AMRestoreOptionsAreLegacy(pcVar9);
        if (cVar2 != '\0') {
          if (pcVar9 == (cfstringStruct *)0x0) {
            _AMRLog(3,&cf_Cannotresolvebundlepathoptionswithoutoptions);
          }
          else {
            lVar11 = _CFDictionaryGetValue(pcVar9,&cf_RestoreBundlePath);
            if (lVar11 != 0) {
              local_438[0] = 0;
              iVar7 = _AMRestoreCreatePathsForBundle(lVar11,0,0,0,0,0,0,local_438);
              if (local_438[0] != 0 && iVar7 == 0) {
                _CFDictionaryAddValue(pcVar9,&cf_FirmwareDirectory);
                _CFRelease(local_438[0]);
              }
            }
          }
        }
        local_480 = 0;
        local_490 = 0;
        cVar2 = _AMRestoreOptionsAreLegacy(pcVar9);
        if (cVar2 == '\0') {
          if (pcVar9 == (cfstringStruct *)0x0) {
            pcVar13 = &cf_Can_tgetDFUfileforNULLoptions;
          }
          else {
            iVar7 = __loadFirmwareInfoDFU(param_1);
            if (iVar7 == 0) {
              if (*(char *)(param_1 + 0x80) != '\0') {
                _AMRLog(4,&cf____productionfuseddevice,param_1);
              }
              iVar7 = _AMRAuthInstallCopyPathToFirmware(pcVar9,&local_490);
              if (iVar7 == 0) {
                if (*(int *)(param_1 + 0x9c) == 1) {
                  uVar5 = __AMRUSBDeviceGetProductID(*(undefined8 *)(param_1 + 0x90));
                  lVar11 = _CFStringCreateWithFormat(uVar1,0,&cf_x_hX,uVar5);
                  if (lVar11 == 0) {
                    pcVar13 = &cf_FailedtocreateproductIDstrignfortraditionaliPod;
                    goto LAB_000ec123;
                  }
                  local_450 = lVar10;
                  lVar12 = _CFStringCreateWithFormat
                                     (uVar1,0,&cf____dfu_WTF____RELEASE_dfu,local_490,lVar11);
                  lVar10 = local_450;
                  local_480 = lVar12;
                  if (lVar12 != 0) {
                    ___bzero(local_438,0x400);
                    _CFStringGetFileSystemRepresentation(lVar12,local_438,0x400);
                    iVar7 = _access((char *)local_438,0);
                    lVar10 = local_450;
                    if (iVar7 == -1) {
                      _CFRelease(lVar12);
                      local_480 = _CFStringCreateWithFormat
                                            (uVar1,0,&cf____dfu_FIRMWARE____RELEASE_dfu,local_490,
                                             lVar11);
                      lVar10 = local_450;
                    }
                  }
                }
                else {
                  lVar11 = local_480;
                  if (*(int *)(param_1 + 0x9c) != 0) goto LAB_000ec97d;
                  sVar6 = __AMRUSBDeviceGetProductID(*(undefined8 *)(param_1 + 0x90));
                  if ((sVar6 == 0x1222) &&
                     (sVar6 = __AMRUSBDeviceGetDeviceReleaseNumber(*(undefined8 *)(param_1 + 0x90)),
                     sVar6 == 1)) {
                    lVar11 = 0;
                    local_480 = _CFStringCreateWithFormat
                                          (uVar1,0,&cf____dfu_WTF_s5l8900xall_RELEASE_dfu,local_490)
                    ;
                  }
                  else {
                    if ((*(int *)(param_1 + 0x34) == 0) && ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
                      puVar15 = &_kAMAuthInstallBuildIdentityApiBSSKey;
                    }
                    else {
                      puVar15 = &_kAMAuthInstallBuildIdentityApiBECKey;
                    }
                    uVar1 = *puVar15;
                    iVar7 = _AMRAuthInstallCopyFileSystemPathForKey
                                      (*(undefined8 *)(param_1 + 0xa8),pcVar9,uVar1,&local_480);
                    if (iVar7 != 0) {
                      _AMRLog(3,&cf_FailedtolocateDFUfilefortype__,uVar1);
                    }
                    lVar11 = 0;
                  }
                }
                goto LAB_000ec980;
              }
              pcVar13 = &cf_FailedtogetfirmwaredirectorytolocateWTFfile_;
            }
            else {
              pcVar13 = &cf_FailedtogetfirmwareinfofromdeviceforDFUfileselection;
            }
          }
LAB_000ec123:
          lVar11 = 0;
          _AMRLog(3,pcVar13);
        }
        else {
          lVar11 = _CFDictionaryGetValue(pcVar9,&cf_DFUFile);
          if (lVar11 == 0) {
            if (*(int *)(param_1 + 0x9c) == 1) {
              local_440 = (cfstringStruct *)_CFDictionaryGetValue(pcVar9,&cf_FirmwareDirectory);
              if (local_440 == (cfstringStruct *)0x0) {
LAB_000ec437:
                lVar11 = 0;
              }
              else {
                pcVar13 = (cfstringStruct *)_CFDictionaryGetValue(pcVar9,&cf_DFUFileType);
                local_448 = &cf_RELEASE;
                if (pcVar13 != (cfstringStruct *)0x0) {
                  local_448 = pcVar13;
                }
                uVar5 = __AMRUSBDeviceGetProductID(*(undefined8 *)(param_1 + 0x90));
                lVar12 = _CFStringCreateWithFormat(uVar1,0,&cf_x_hX,uVar5);
                lVar11 = 0;
                if (lVar12 != 0) {
                  local_460 = lVar12;
                  local_450 = lVar10;
                  lVar10 = _CFStringCreateWithFormat
                                     (uVar1,0,&cf____dfu_WTF_______dfu,local_440,lVar12,local_448);
                  lVar16 = local_460;
                  lVar11 = 0;
                  if (lVar10 != 0) {
                    ___bzero(local_438,0x400);
                    _CFStringGetFileSystemRepresentation(lVar10,local_438,0x400);
                    iVar7 = _access((char *)local_438,0);
                    lVar16 = local_460;
                    lVar11 = lVar10;
                    if (iVar7 == -1) {
                      _CFRelease(lVar10);
                      lVar11 = _CFStringCreateWithFormat
                                         (uVar1,0,&cf____dfu_FIRMWARE_______dfu,local_440,local_460,
                                          local_448);
                      lVar16 = local_460;
                    }
                  }
                  goto LAB_000ec96a;
                }
              }
            }
            else if (*(int *)(param_1 + 0x9c) == 0) {
              lVar11 = _CFDictionaryGetValue(pcVar9,&cf_DFUFile);
              if (lVar11 != 0) goto LAB_000ec099;
              lVar12 = _CFDictionaryGetValue(pcVar9,&cf_FirmwareDirectory);
              if (lVar12 == 0) goto LAB_000ec437;
              sVar6 = __AMRUSBDeviceGetProductID(*(undefined8 *)(param_1 + 0x90));
              if ((sVar6 == 0x1222) &&
                 (sVar6 = __AMRUSBDeviceGetDeviceReleaseNumber(*(undefined8 *)(param_1 + 0x90)),
                 sVar6 == 1)) {
                lVar11 = _CFStringCreateWithFormat
                                   (uVar1,0,&cf____dfu_WTF_s5l8900xall_RELEASE_dfu,lVar12);
              }
              else {
                iVar7 = __loadFirmwareInfoDFU(param_1);
                if (iVar7 == 0) {
                  local_450 = lVar10;
                  if (*(char *)(param_1 + 0x80) == '\x01') {
                    _AMRLog(4,&cf____productionfuseddevice,param_1);
                  }
                  lVar16 = _CFDictionaryGetValue(pcVar9,&cf_BoardConfig);
                  if (lVar16 == 0) {
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
                    cVar2 = __AMRestoreGetDeviceMapEntryForHardware(pcVar9,param_1 + 0x28);
                    if ((cVar2 != '\x01') ||
                       (lVar16 = _CFStringCreateWithCString(uVar1,local_438 + 0xd,0x8000100),
                       lVar16 == 0)) {
                      lVar10 = local_450;
                      lVar11 = 0;
                      goto LAB_000ec97d;
                    }
                  }
                  else {
                    _CFRetain(lVar16);
                  }
                  pcVar13 = (cfstringStruct *)_CFDictionaryGetValue(pcVar9,&cf_DFUFileType);
                  local_440 = &cf_DEVELOPMENT;
                  if (pcVar13 != (cfstringStruct *)0x0) {
                    local_440 = pcVar13;
                  }
                  if ((*(int *)(param_1 + 0x34) == 0) && ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
                    local_448 = &cf_iBSS;
                  }
                  else {
                    local_448 = &cf_iBEC;
                  }
                  local_438[0] = 0;
                  iVar7 = _AMRAuthInstallCreatePathFromBundle
                                    (*(undefined8 *)(param_1 + 0xa8),pcVar9);
                  lVar11 = local_438[0];
                  if (iVar7 != 0) {
                    lVar11 = _CFStringCreateWithFormat
                                       (uVar1,0,&cf____dfu__________dfu,lVar12,local_448,lVar16,
                                        local_440);
                  }
                  goto LAB_000ec96a;
                }
                _AMRLog(3,&cf_unabletogetfirmwareinfofromdevice);
                lVar11 = 0;
              }
            }
            else {
              _AMRLog(3,&cf_don_tknowhowtofindDFUfilefordevicetype_d);
              lVar11 = 0;
            }
          }
          else {
            lVar12 = _CFDictionaryGetValue(pcVar9,&cf_OnlyPersonalizeDFUFile);
            if (lVar12 != 0) {
              local_440 = *(cfstringStruct **)PTR__kCFBooleanTrue_00441110;
              cVar2 = _CFEqual(lVar12);
              if (cVar2 != '\0') {
                local_460 = lVar11;
                local_450 = lVar10;
                ___bzero(local_438,0x400);
                lVar11 = 0;
                local_4a0 = 0;
                local_4b8 = 0;
                local_4d8 = 0;
                local_4b0 = 0;
                local_4d0 = 0;
                local_494 = 0;
                local_4a8 = 0;
                lVar10 = _AMAuthInstallCreate(uVar1);
                lVar16 = 0;
                if (lVar10 != 0) {
                  iVar7 = _AMRAuthInstallConfigureUsingOptions(lVar10,pcVar9,0,0);
                  if (iVar7 == 0) {
                    uVar8 = 0;
                    local_458 = lVar10;
                    pcVar13 = (cfstringStruct *)
                              _CFDictionaryCreateMutable
                                        (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                    lVar10 = local_458;
                    if (pcVar13 == (cfstringStruct *)0x0) goto LAB_000ec066;
                    local_488 = &cf_ECID;
                    uVar14 = _AMDFUModeDeviceGetECID(param_1);
                    _AMAuthInstallSupportDictionarySetInteger64(pcVar13,local_488,uVar14);
                    local_488 = &cf_ApChipID;
                    iVar7 = __loadFirmwareInfoDFU(param_1);
                    if (iVar7 == 0) {
                      uVar8 = *(undefined4 *)(param_1 + 0x28);
                    }
                    _AMAuthInstallSupportDictionarySetInteger32(pcVar13,local_488,uVar8);
                    uVar8 = _AMDFUModeDeviceGetBoardID(param_1);
                    _AMAuthInstallSupportDictionarySetInteger32(pcVar13,&cf_ApBoardID,uVar8);
                    iVar7 = __loadFirmwareInfoDFU(param_1);
                    uVar8 = 0;
                    if (iVar7 == 0) {
                      uVar8 = *(undefined4 *)(param_1 + 0x7c);
                    }
                    local_448 = pcVar13;
                    _AMAuthInstallSupportDictionarySetInteger32(pcVar13,&cf_ApSecurityDomain,uVar8);
                    iVar7 = __loadFirmwareInfoDFU(param_1);
                    pcVar13 = local_448;
                    if (iVar7 == 0) {
                      uVar3 = *(undefined1 *)(param_1 + 0x80);
                    }
                    else {
                      uVar3 = 0;
                    }
                    _AMAuthInstallSupportDictionarySetBoolean(local_448,&cf_ApProductionMode,uVar3);
                    iVar7 = __loadFirmwareInfoDFU(param_1);
                    if (iVar7 == 0) {
                      uVar3 = *(undefined1 *)(param_1 + 0x81);
                    }
                    else {
                      uVar3 = 0;
                    }
                    _AMAuthInstallSupportDictionarySetBoolean(pcVar13,&cf_ApSecurityMode,uVar3);
                    iVar7 = __loadFirmwareInfoDFU(param_1);
                    if (iVar7 == 0) {
                      uVar3 = *(undefined1 *)(param_1 + 0x84);
                    }
                    else {
                      uVar3 = 0;
                    }
                    _AMAuthInstallSupportDictionarySetBoolean
                              (pcVar13,&cf_ApEffectiveSecurityMode,uVar3);
                    iVar7 = __loadFirmwareInfoDFU(param_1);
                    if (iVar7 == 0) {
                      uVar3 = *(undefined1 *)(param_1 + 0x83);
                    }
                    else {
                      uVar3 = 0;
                    }
                    _AMAuthInstallSupportDictionarySetBoolean
                              (pcVar13,&cf_ApEffectiveProductionMode,uVar3);
                    _AMAuthInstallSupportDictionarySetBoolean(pcVar13,&cf_ApInRomDFU,1);
                    if (*(long *)(param_1 + 0x88) != 0) {
                      _CFDictionarySetValue(pcVar13,&cf_ApSikaFuse);
                    }
                    if (*(char *)(param_1 + 0x82) != '\0') {
                      _AMAuthInstallSupportDictionarySetBoolean(pcVar13,&cf_UIDMode,1);
                    }
                    lVar10 = _CFDictionaryGetValue(pcVar9,&cf_RequiresUIDMode);
                    if ((lVar10 != 0) && (cVar2 = _CFBooleanGetValue(lVar10), cVar2 == '\x01')) {
                      _CFDictionarySetValue(pcVar13,&cf_RequiresUIDMode,local_440);
                    }
                    lVar10 = _CFDictionaryGetValue(pcVar9,&cf_UIDMode);
                    if (lVar10 != 0) {
                      lVar11 = _CFBooleanGetTypeID();
                      lVar12 = _CFGetTypeID(lVar10);
                      if (lVar11 == lVar12) {
                        _CFDictionarySetValue(local_448,&cf_UIDMode,lVar10);
                      }
                    }
                    bVar4 = __AMRUSBDeviceGetIBFL(*(undefined8 *)(param_1 + 0x90),&local_494);
                    bVar4 = (byte)((local_494 & 4) >> 2) & bVar4;
                    local_488 = (cfstringStruct *)CONCAT44(local_488._4_4_,(uint)bVar4);
                    if (bVar4 == 1) {
                      lVar10 = _CFDictionaryGetValue(pcVar9,&cf_AuthInstallAllowMixAndMatch);
                      if ((lVar10 != 0) && (cVar2 = _CFBooleanGetValue(lVar10), cVar2 == '\x01')) {
                        _CFDictionaryAddValue(local_448,&cf_ApAllowMixAndMatch,local_440);
                      }
                      _CFDictionarySetValue(local_448,&cf_ApSupportsImg4,local_440);
                      if ((local_494 & 0x20) != 0) {
                        _CFDictionarySetValue(local_448,&cf_ApImg4DigestType,&cf_sha2_384);
                      }
                      lVar10 = _CFDictionaryGetValue(pcVar9,&cf_SkipNoncesForAPSEP);
                      if (lVar10 != 0) {
                        lVar11 = _CFBooleanGetTypeID();
                        lVar12 = _CFGetTypeID(lVar10);
                        if ((lVar11 == lVar12) &&
                           (cVar2 = _CFBooleanGetValue(lVar10), cVar2 == '\x01')) goto LAB_000ec884;
                      }
                      iVar7 = __AMRUSBDeviceCopyNonce(*(undefined8 *)(param_1 + 0x90),&local_4b8);
                      if (iVar7 == 0) {
                        uVar14 = _CFGetAllocator(local_458);
                        iVar7 = _AMAuthInstallSupportCopyDataFromHexString
                                          (uVar14,local_4b8,&local_4d8);
                        if (local_4d8 != 0 && iVar7 == 0) {
                          _CFDictionarySetValue(local_448,&cf_ApNonce);
                        }
                      }
                      iVar7 = __AMRUSBDeviceCopySEPNonce(*(undefined8 *)(param_1 + 0x90),&local_4b0)
                      ;
                      if (iVar7 == 0) {
                        uVar14 = _CFGetAllocator(local_458);
                        iVar7 = _AMAuthInstallSupportCopyDataFromHexString
                                          (uVar14,local_4b0,&local_4d0);
                        if (local_4d0 != 0 && iVar7 == 0) {
                          _CFDictionarySetValue(local_448,&cf_SepNonce);
                        }
                      }
                    }
LAB_000ec884:
                    lVar10 = _CFDictionaryGetValue(pcVar9,&cf_AuthInstallDemotionPolicyOverride);
                    pcVar13 = local_448;
                    if (lVar10 != 0) {
                      _CFDictionarySetValue(local_448,&cf_DemotionPolicy,lVar10);
                    }
                    lVar10 = local_458;
                    iVar7 = _AMAuthInstallApSetParameters(local_458,pcVar13);
                    if ((iVar7 != 0) ||
                       (iVar7 = _AMRAuthInstallSetFDRTrustObjectHash(lVar10,pcVar9), iVar7 != 0))
                    goto LAB_000ec8e3;
                    iVar7 = _AMRAuthInstallEnablePersonalization(lVar10,pcVar9);
                    if (iVar7 != 0) {
                      _AMRLog(3,&cf__s_AMRAuthInstallEnablePersonalizationfailed,
                              "_copyPersonalizedFileForDFUDevice");
                      goto LAB_000ec8e3;
                    }
                    lVar11 = _CFURLCreateWithFileSystemPath(uVar1,local_460,0,0);
                    lVar10 = local_458;
                    if (lVar11 == 0) goto LAB_000ec8e3;
                    local_460 = lVar11;
                    lVar10 = _CFURLCopyLastPathComponent(lVar11);
                    if (lVar10 == 0) {
                      lVar11 = 0;
                      lVar16 = 0;
                      lVar12 = local_458;
LAB_000ed111:
                      _CFRelease(lVar12);
                      lVar10 = local_460;
                    }
                    else {
                      local_440 = pcVar9;
                      uVar14 = _AMDFUModeDeviceGetECID(param_1);
                      lVar11 = 0;
                      lVar12 = _CFStringCreateWithFormat
                                         (uVar1,0,&cf_____llx_personalized,lVar10,uVar14);
                      lVar16 = 0;
                      if (lVar12 != 0) {
                        uVar14 = _AMAuthInstallSupportGetURLForTempDirectoryRoot();
                        lVar11 = 0;
                        local_470 = lVar12;
                        iVar7 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                                          (uVar1,uVar14,lVar12,0,&local_4a0);
                        if (iVar7 == 0) {
                          local_478 = param_1;
                          uVar14 = _CFDictionaryGetValue(local_440,&cf_RequestRestoreRulesDeviceMap)
                          ;
                          iVar7 = _AMAuthInstallApCreateImagePropertiesWithDeviceMap
                                            (local_458,local_460,uVar14,&local_4a8);
                          if (iVar7 == 0) {
                            lVar11 = 0;
                            local_468 = _CFDictionaryCreateMutableCopy(0,0,local_4a8);
                            param_1 = local_478;
                            lVar12 = local_470;
                            lVar16 = 0;
                            if (local_468 != 0) {
                              lVar11 = _CFDictionaryGetValue(local_440,&cf_RequestOverrides);
                              if (lVar11 != 0) {
                                lVar12 = _CFGetTypeID(lVar11);
                                lVar16 = _CFDictionaryGetTypeID();
                                if (lVar12 == lVar16) {
                                  _CFDictionaryApplyFunction
                                            (lVar11,__AMRestoreDFUPropertyOverrideApplier,local_468)
                                  ;
                                }
                              }
                              lVar11 = _CFDictionaryGetValue(local_440,&cf_ImageTrusted);
                              if (lVar11 != 0) {
                                lVar12 = _CFGetTypeID(lVar11);
                                lVar16 = _CFBooleanGetTypeID();
                                if (lVar12 == lVar16) {
                                  _CFDictionarySetValue(local_468,&cf_Trusted,lVar11);
                                }
                              }
                              lVar11 = _CFDictionaryGetValue(local_440,&cf_ApRequestEntries);
                              if (lVar11 != 0) {
                                _CFDictionaryApplyFunction
                                          (lVar11,__AMRestoreAPOverrideApplier,local_458);
                              }
                              if ((char)local_488 == '\0') {
                                iVar7 = _AMAuthInstallApImg3PersonalizeFile
                                                  (local_458,local_460,local_4a0,local_468);
                              }
                              else {
                                iVar7 = _AMAuthInstallApImg4PersonalizeFile
                                                  (local_458,local_460,local_4a0,local_468);
                              }
                              if ((iVar7 == 0) &&
                                 (cVar2 = _CFURLGetFileSystemRepresentation
                                                    (local_4a0,1,local_438,0x400), cVar2 != '\0')) {
                                lVar11 = _CFStringCreateWithCString(uVar1,local_438,0x8000100);
                                param_1 = local_478;
                                lVar12 = local_470;
                                lVar16 = local_468;
                              }
                              else {
                                lVar11 = 0;
                                param_1 = local_478;
                                lVar12 = local_470;
                                lVar16 = local_468;
                              }
                            }
                          }
                          else {
                            lVar11 = 0;
                            param_1 = local_478;
                            lVar12 = local_470;
                            lVar16 = 0;
                          }
                        }
                        else {
                          lVar12 = local_470;
                          lVar16 = 0;
                        }
                      }
                      _CFRelease(local_458);
                      _CFRelease(lVar10);
                      lVar10 = local_460;
                      pcVar9 = local_440;
                      if (lVar12 != 0) goto LAB_000ed111;
                    }
                  }
                  else {
LAB_000ec066:
                    local_448 = (cfstringStruct *)0x0;
LAB_000ec8e3:
                    lVar11 = 0;
                    lVar16 = 0;
                  }
                  _CFRelease(lVar10);
                  if (local_4a0 != 0) {
                    _CFRelease();
                  }
                  if (local_448 != (cfstringStruct *)0x0) {
                    _CFRelease();
                  }
                }
                if (local_4b8 != 0) {
                  _CFRelease();
                }
                if (local_4d8 != 0) {
                  _CFRelease();
                }
                if (local_4b0 != 0) {
                  _CFRelease();
                }
                if (local_4d0 != 0) {
                  _CFRelease();
                }
                if (local_4a8 != 0) {
                  _CFRelease();
                }
                lVar10 = local_450;
                if (lVar16 != 0) {
LAB_000ec96a:
                  _CFRelease(lVar16);
                  lVar10 = local_450;
                }
                goto LAB_000ec97d;
              }
            }
LAB_000ec099:
            lVar11 = _CFStringCreateCopy(uVar1,lVar11);
          }
LAB_000ec97d:
          local_480 = lVar11;
          lVar11 = 0;
        }
LAB_000ec980:
        if (local_490 != 0) {
          _CFRelease();
        }
        if (lVar11 != 0) {
          _CFRelease(lVar11);
        }
        lVar11 = local_480;
        if (local_480 == 0) {
          _AMRLog(3,&cf__copyPathToDFUFilefailed);
          iVar7 = 1;
        }
        else {
          local_4bc = 0;
          cVar2 = __AMRUSBDeviceGetIBFL(*(undefined8 *)(param_1 + 0x90));
          if ((cVar2 != '\0') && ((local_4bc & 2) != 0)) {
            _AMRAuthInstallCopyTicketData(*(undefined8 *)(param_1 + 0xa8),pcVar9,&local_4c8);
          }
          _AMRLog(8,&cf_usingDFUfile___,lVar11);
          if (*(char *)(param_1 + 0x99) == '\0') {
            iVar7 = __AMRUSBDeviceOpen(*(undefined8 *)(param_1 + 0x90));
            if (iVar7 == 0) {
              *(undefined1 *)(param_1 + 0x99) = 1;
              goto LAB_000eca0d;
            }
            _AMRLog(3,&cf_unabletoopenDFUdevice__d,iVar7);
          }
          else {
LAB_000eca0d:
            local_450 = lVar10;
            lVar10 = __createDFUDataFromFile(lVar11,local_4c8);
            if (lVar10 == 0) {
              iVar7 = 0xb;
              lVar10 = local_450;
            }
            else {
              local_440 = pcVar9;
              iVar7 = _AMRPerformDFUDataDownload
                                (*(undefined8 *)(param_1 + 0x90),lVar10,_dfuProgressCallBack,param_1
                                );
              _CFRelease(lVar10);
              pcVar9 = local_440;
              lVar10 = local_450;
              if (*(char *)(param_1 + 0xa4) != '\0') {
                _AMRLog(3,&cf_Theuserrequestedcancelrestore);
                iVar7 = 99;
                pcVar9 = local_440;
                lVar10 = local_450;
              }
            }
          }
          lVar12 = _CFDictionaryGetValue(pcVar9,&cf_OnlyPersonalizeDFUFile);
          if (((lVar12 != 0) &&
              (cVar2 = _CFEqual(lVar12,*(undefined8 *)PTR__kCFBooleanTrue_00441110), cVar2 == '\x01'
              )) && (lVar12 = _CFDictionaryGetValue(pcVar9,&cf_PreserveBundle),
                    lVar12 == *(long *)PTR__kCFBooleanFalse_00441108)) {
            local_440 = pcVar9;
            ___bzero(local_438,0x400);
            cVar2 = _CFStringGetCString(lVar11,local_438,0x400,0x8000100);
            pcVar9 = local_440;
            if (cVar2 == '\x01') {
              _unlink((char *)local_438);
              pcVar9 = local_440;
            }
          }
          _CFRelease(lVar11);
        }
      }
      else {
        _AMRLog(3,&cf_failedtoalignoptionswithpersonalizedbundle);
      }
      if ((lVar10 != 0) && (iVar7 != 0)) {
        _AMRAuthInstallDeletePersonalizedBundle(lVar10,pcVar9);
      }
      if (pcVar9 != (cfstringStruct *)0x0) goto LAB_000ecba3;
    }
    if (iVar7 != 0) {
      _AMRLog(3,&cf____DFUfailed_result__d_,param_1,iVar7);
      goto LAB_000ecbe4;
    }
  }
  iVar7 = 0;
  _AMRLog(6,&cf____DFUsucceeded,param_1);
LAB_000ecbe4:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

