// rea decompile_all
// name: _AMRestorePerformRecoveryModeRestore
// address: 0xef304
// body: available
// range: 0xef304-0xeffe4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xeffd3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRestorePerformRecoveryModeRestore
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  cfstringStruct *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  cfstringStruct *pcVar16;
  byte bVar17;
  bool bVar18;
  long local_148;
  ulong local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  cfstringStruct *local_108;
  long local_100;
  ulong local_f8;
  long local_f0;
  long local_e8;
  ulong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = 0;
  _AMRestoreCaptureSubsystemLogsIfNeeded();
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  if ((*(long *)(param_1 + 0x30) == 0) && (iVar5 = __AMRecoveryModeDeviceOpen(param_1), iVar5 != 0))
  {
LAB_000ef4cc:
    lVar8 = 0;
    lVar11 = 0;
  }
  else {
    local_e8 = 0;
    __copyEnvironmentVariable(param_1,&cf_build_version,&local_e8);
    lVar8 = local_e8;
    if (local_e8 != 0) {
      _AMRLog(7,&cf_iBootbuild_version___,local_e8);
      _CFRelease(lVar8);
    }
    __copyEnvironmentVariable(param_1,&cf_build_style,&local_e8);
    lVar8 = local_e8;
    if (local_e8 != 0) {
      _AMRLog(7,&cf_iBootbuild_style___,local_e8);
      _CFRelease(lVar8);
    }
    uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    iVar5 = 0;
    uVar6 = _CFDictionaryCreateMutableCopy(uVar10,0,param_2);
    if (uVar6 == 0) {
      _AMRLog(3,&cf_unabletocreatemutablecopyofoptions);
      goto LAB_000ef4cc;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      local_e8 = 0;
      local_140 = CONCAT44(local_140._4_4_,0xc);
      __AMRecoveryModeDeviceProgress(param_1,3);
      iVar5 = __sendControlPacket(param_1,0,0,0,&local_140,&local_e8);
      if (iVar5 == 0) {
        if ((char)local_e8 == '\0') goto LAB_000ef424;
        iVar5 = -1;
      }
LAB_000ef6ec:
      lVar8 = 0;
      lVar11 = 0;
LAB_000ef93d:
      _CFRelease(uVar6);
    }
    else {
LAB_000ef424:
      __AMRecoveryModeDeviceProgress(param_1,4);
      __getMaxFileTransferSize(param_1);
      if (*(long *)(param_1 + 200) == 0) {
        __AMRecoveryModeDeviceProgress(param_1,0x2d);
        local_e8 = 0;
        iVar5 = _AMRecoveryModeDeviceCopyAuthInstallPreflightOptions(param_1,uVar6);
        if (iVar5 != 0) goto LAB_000ef6ec;
        _CFRelease(uVar6);
        uVar6 = _CFDictionaryCreateMutableCopy(uVar10,0,local_e8);
        _CFRelease(local_e8);
      }
      local_128 = _CFDictionaryGetValue(uVar6,&cf_PersonalizedRestoreBundlePath);
      if (((local_128 != 0) && (cVar3 = _AMRestoreOptionsAreLegacy(uVar6), cVar3 != '\0')) &&
         (iVar5 = _AMRAuthInstallAlignOptionsToPersonalizedBundle(uVar6,local_128,1), iVar5 != 0)) {
        _AMRLog(3,&cf_failedtoalignoptionswithpersonalizedbundle);
        goto LAB_000ef8f1;
      }
      __resolveBundlePathOptions(param_1,uVar6,0,0);
      if (uVar6 == 0) {
        _AMRLog(3,&cf__resolveBundlePathOptions_true_forrecoverymodefailed);
        iVar5 = 1;
        goto LAB_000ef9ed;
      }
      lVar8 = param_1 + 0x58;
      cVar3 = _AMRestoreDeviceIsBootstrapOnly(uVar6,lVar8);
      local_100 = CONCAT71(local_100._1_7_,cVar3);
      if (cVar3 == '\0') {
        local_140 = 0;
        local_f0 = lVar8;
        __copyEnvironmentVariable(param_1,&cf_radio_error,&local_140);
        uVar2 = local_140;
        if (local_140 == 0) {
          _AMRLog(7,&cf_radio_errornotset);
          lVar8 = local_f0;
        }
        else {
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          _CFStringGetCString(local_140,&local_e8,0x80,0x8000100);
          uVar7 = _strtol((char *)&local_e8,(char **)0x0,0);
          if ((uint)uVar7 == 0) {
            _CFRelease(uVar2);
            lVar8 = local_f0;
          }
          else {
            local_f8 = uVar2;
            _AMRLog(4,&cf_radio_error__d,uVar7 & 0xffffffff);
            local_148 = 0;
            __copyEnvironmentVariable(param_1,&cf_radio_error_string,&local_148);
            lVar8 = local_148;
            if (local_148 != 0) {
              _AMRLog(4,&cf_radio_error_string_____,local_148);
              _CFRelease(lVar8);
            }
            lVar8 = local_f0;
            if (((uint)uVar7 & 0xffffff00) == 0x200) {
              _AMRLog(3,&cf_fatalrecoverymoderadioerror);
              _CFRelease(local_f8);
              _AMRLog(3,&cf_radioerrorsdetected_stopping);
              iVar5 = 0x17;
              goto LAB_000ef9ed;
            }
            _CFRelease(local_f8);
          }
        }
      }
      if ((*(char *)(param_1 + 0x54) == '\0') && (iVar5 = __loadFirmwareInfo(), iVar5 != 0)) {
LAB_000ef8f1:
        lVar11 = 0;
        lVar8 = 0;
        lVar13 = 0;
      }
      else {
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_48 = 0;
        cVar3 = __AMRestoreGetDeviceMapEntryForHardware(uVar6,lVar8);
        iVar5 = 5;
        if (cVar3 != '\x01') goto LAB_000ef8f1;
        if (*(char *)(param_1 + 0xb7) == '\0') {
          bVar17 = 0;
        }
        else {
          bVar17 = (*(byte *)(param_1 + 0x68) & 4) >> 2;
        }
        if (*(char *)(param_1 + 0xb0) == '\x01') {
          _AMRLog(4,&cf____productionfuseddevice,param_1);
        }
        lVar8 = _CFDictionaryGetValue(uVar6,&cf_BoardConfig);
        *(long *)(param_1 + 0x40) = lVar8;
        if (lVar8 == 0) {
          uVar9 = _CFStringCreateWithCString(uVar10,&uStack_80,0x8000100);
          *(undefined8 *)(param_1 + 0x40) = uVar9;
        }
        else {
          _CFRetain(lVar8);
        }
        uVar10 = _CFStringCreateWithCString(uVar10,&uStack_60,0x8000100);
        *(undefined8 *)(param_1 + 0x48) = uVar10;
        iVar5 = 0x14;
        if ((uint)uStack_e0 < *(uint *)(param_1 + 0x60) && bVar17 == 0) goto LAB_000ef8f1;
        if ((*(char *)(param_1 + 0xb7) == '\x01') && ((*(byte *)(param_1 + 0x68) & 1) != 0)) {
LAB_000efa16:
          local_108 = &cf_iBEC;
          local_f8 = local_f8 & 0xffffffff00000000;
        }
        else if (*(uint *)(param_1 + 0x60) < (uint)uStack_e0) {
          sVar4 = __AMRUSBDeviceGetProductID(*(undefined8 *)(param_1 + 0x28));
          if (((sVar4 != 0x1280) || (3 < *(uint *)(param_1 + 0x60))) || ((uint)uStack_e0 < 4))
          goto LAB_000efa16;
          local_f8 = local_f8 & 0xffffffff00000000;
          local_108 = &cf_WTF;
        }
        else {
          local_f8 = CONCAT44(local_f8._4_4_,(int)CONCAT71((uint7)(uint3)(uStack_e0 >> 8),1));
          local_108 = (cfstringStruct *)0x0;
        }
        local_f0 = __AMRestoreCopyTargetForBoardConfig(*(undefined8 *)(param_1 + 0x40));
        __resolveBundlePathOptions(param_1,uVar6,*(undefined8 *)(param_1 + 0x48),local_f0);
        uVar1 = *(uint *)(param_1 + 0x68);
        uVar10 = _CFGetAllocator(param_1);
        cVar3 = _AMAuthInstallApPersonalizationEnabled(*(undefined8 *)(param_1 + 200));
        if (((cVar3 == '\0') ||
            (lVar8 = _CFDictionaryGetValue(uVar6,&cf_PersonalizedRestoreBundlePath), lVar8 == 0)) &&
           (lVar8 = _CFDictionaryGetValue(uVar6,&cf_RestoreBundlePath), lVar8 == 0)) {
          pcVar12 = &cf_devicerequiresapersonalizedrestorebundle;
LAB_000efaeb:
          lVar11 = 0;
          _AMRLog(3,pcVar12);
        }
        else {
          lVar8 = _CFURLCreateWithFileSystemPath(uVar10,lVar8,0,1);
          if (lVar8 == 0) {
            pcVar12 = &cf_failedtocreateurlforpersonalizedrestorebundle;
            goto LAB_000efaeb;
          }
          lVar11 = _CFRetain(lVar8);
          _CFRelease(lVar8);
        }
        if ((uVar1 & 0x40) == 0) {
LAB_000efb30:
          if (((uVar1 & 2) != 0) && (iVar5 = __sendTicketToDevice(param_1,lVar11), iVar5 != 0))
          goto LAB_000efc6b;
          if ((char)local_100 == '\0' && (char)local_f8 == '\0') {
            iVar5 = __AMRestoreGetCurrentBootStage(param_1);
            if (iVar5 == 1) {
              iVar5 = __AMRestoreCopyiBootStage1FirmwareURLs(param_1,uVar6,&local_118);
              if (iVar5 != 0) {
                lVar8 = 0;
                _AMRLog(3,&cf_Couldn_tretrieveiBootStage1firmwareimages);
                lVar13 = local_f0;
                goto LAB_000ef8f6;
              }
              lVar8 = _CFDictionaryGetCount(local_118);
              if ((0 < lVar8) &&
                 (iVar5 = __sendiBootFirmwareToDevice(param_1,uVar6,local_118), iVar5 != 0))
              goto LAB_000efc6b;
            }
            iVar5 = __bootstrapRestore(param_1,uVar6,local_108);
            goto LAB_000efc6b;
          }
          pcVar12 = (cfstringStruct *)_CFDictionaryGetValue(uVar6,&cf_BootImageFile);
          if (pcVar12 == (cfstringStruct *)0x0) {
            pcVar12 = &cf_Nobootimagespecified;
LAB_000efc1b:
            lVar8 = 0;
LAB_000efc1e:
            _AMRLog(3,pcVar12);
            iVar5 = 1;
            lVar13 = local_f0;
          }
          else {
            lVar8 = _CFDictionaryGetValue(uVar6,&cf_RestoreKernelCacheFile);
            if (lVar8 == 0) {
              pcVar12 = &cf_Nokernelcachespecified;
              goto LAB_000efc1b;
            }
            iVar5 = _AMAuthInstallBundleCreatePersonalizedPath
                              (*(undefined8 *)(param_1 + 200),lVar8,&local_120);
            if (iVar5 == 0) {
              lVar8 = __copyDeviceTreePath(param_1,uVar6);
              if (lVar8 == 0) {
                pcVar12 = &cf_Nosuitabledevicetreefound;
                goto LAB_000efc1b;
              }
              cVar3 = __AMRestoreDeviceSupportsSEP(param_1,uVar6);
              if ((cVar3 == '\0') ||
                 (cVar3 = __copyRestoreSEPFirmwarePath(param_1,uVar6,&local_130), cVar3 != '\0')) {
                local_108 = pcVar12;
                iVar5 = __AMRestoreGetCurrentBootStage(param_1);
                if (iVar5 == 2) {
                  iVar5 = __AMRestoreCopyiBootStage2FirmwareURLs();
                }
                else {
                  iVar5 = __AMRestoreCopyiBootFirmwareURLs(param_1,uVar6,&local_110);
                }
                if (iVar5 == 0) {
                  local_f8 = uVar6;
                  if (local_110 == 0) {
                    bVar18 = false;
                  }
                  else {
                    cVar3 = _CFDictionaryContainsKey(local_110,&cf_RestoreDCP);
                    bVar18 = cVar3 != '\0';
                  }
                  uVar6 = local_f8;
                  cVar3 = __AMRestoreDeviceSupportsGraphics(param_1,local_f8);
                  if (((cVar3 == '\0') || (bVar18)) ||
                     (iVar5 = __AMRestorePushBootLogo(param_1,uVar6), lVar13 = local_f0, iVar5 == 0)
                     ) {
                    lVar13 = _CFDictionaryGetValue(uVar6,&cf_AdditionalBootImages);
                    if (lVar13 == 0) {
                      _AMRLog(3,&cf_Noadditionalbootimagesfound);
                    }
                    if (*(char *)(param_1 + 0xc0) == '\0') {
                      if ((char)local_100 == '\0') {
                        iVar5 = __sendiBootFirmwareToDevice(param_1,local_f8,local_110);
                        lVar13 = local_f0;
                        uVar6 = local_f8;
                        if (iVar5 == 0) {
                          lVar13 = _CFDictionaryGetValue(local_f8,&cf_PreventRestoresIfNVRAMSet);
                          if (lVar13 != 0) {
                            lVar14 = _CFGetTypeID(lVar13);
                            lVar15 = _CFBooleanGetTypeID();
                            if ((lVar14 == lVar15) &&
                               (cVar3 = _CFBooleanGetValue(lVar13), cVar3 == '\x01')) {
                              _AMRLog(3,&cf_Checkingforuncollectedfactorylogsondevice____);
                              __copyEnvironmentVariable(param_1,&cf_prevent_restores,&local_138);
                              if (local_138 != 0) {
                                _AMRLog(3,&cf_Devicehasuncollectedfactorylogs_abortingrestore___);
                                iVar5 = 0x19;
                                lVar13 = local_f0;
                                uVar6 = local_f8;
                                goto LAB_000ef8f6;
                              }
                            }
                          }
                          iVar5 = __sendBootImageToDevice(param_1,local_f8,local_108);
                          lVar13 = local_f0;
                          uVar6 = local_f8;
                          if (((iVar5 == 0) &&
                              (iVar5 = __sendDeviceTreeToDevice(param_1,lVar8), lVar13 = local_f0,
                              uVar6 = local_f8, iVar5 == 0)) &&
                             ((local_130 == 0 ||
                              (iVar5 = __sendRestoreSEPToDevice(param_1), lVar13 = local_f0,
                              uVar6 = local_f8, iVar5 == 0)))) {
                            __AMRecoveryModeDeviceProgress(param_1,7);
                            iVar5 = __sendFileToDevice(param_1,local_120);
                            lVar13 = local_f0;
                            uVar6 = local_f8;
                            if (iVar5 == 0) {
                              if (*(char *)(param_1 + 0xc0) != '\0') {
                                pcVar12 = &
                                          cf_Ausercancelrestorewasrequested_stopingbeforedeviceboot_
                                ;
                                goto LAB_000efdb2;
                              }
                              iVar5 = __bootDevice(param_1);
                              lVar13 = local_f0;
                              uVar6 = local_f8;
                            }
                          }
                        }
                      }
                      else {
                        pcVar12 = (cfstringStruct *)
                                  _CFDictionaryGetValue(local_f8,&cf_WriteBootImgToDisk);
                        if (pcVar12 == (cfstringStruct *)0x0) {
                          pcVar16 = (cfstringStruct *)0x0;
                        }
                        else {
                          local_100 = _CFGetTypeID(pcVar12);
                          lVar14 = _CFBooleanGetTypeID();
                          if ((local_100 == lVar14) &&
                             (pcVar12 == *(cfstringStruct **)PTR__kCFBooleanTrue_00441110)) {
                            pcVar16 = &cf__tmp_bootImg;
                          }
                          else {
                            local_100 = _CFGetTypeID(pcVar12);
                            lVar14 = _CFStringGetTypeID();
                            pcVar16 = (cfstringStruct *)0x0;
                            if (local_100 == lVar14) {
                              pcVar16 = pcVar12;
                            }
                          }
                        }
                        iVar5 = __sendCombinedBootImageToDevice
                                          (param_1,local_108,lVar8,local_120,lVar13,pcVar16);
                        uVar6 = local_f8;
                        lVar13 = local_f0;
                        if (iVar5 == 0) {
                          iVar5 = __membootDevice(param_1,local_f8);
                          lVar13 = local_f0;
                        }
                      }
                    }
                    else {
                      pcVar12 = &cf_Ausercancelrestorewasrequested;
LAB_000efdb2:
                      _AMRLog(3,pcVar12);
                      iVar5 = 99;
                      lVar13 = local_f0;
                      uVar6 = local_f8;
                    }
                  }
                }
                else {
                  _AMRLog(3,&cf__AMRestoreCopyiBootFirmwareURLsreturned_d,iVar5);
                  lVar13 = local_f0;
                }
                goto LAB_000ef8f6;
              }
              pcVar12 = &cf_NosuitableSEPfirmwarefound;
              goto LAB_000efc1e;
            }
            lVar8 = 0;
            _AMRLog(3,&cf_failedtogetpersonalizedkernelcachepath);
            iVar5 = 0x1f;
            lVar13 = local_f0;
          }
        }
        else {
          uVar10 = _AMAuthInstallBundleGetRestoreLocalPolicyComponentPath
                             (*(undefined8 *)(param_1 + 200));
          iVar5 = __sendPersonalizedComponentToDevice
                            (param_1,lVar11,uVar10,&cf_lpolrestore,"local policy");
          if (iVar5 == 0) goto LAB_000efb30;
LAB_000efc6b:
          lVar8 = 0;
          lVar13 = local_f0;
        }
      }
LAB_000ef8f6:
      if ((local_128 != 0) && (iVar5 != 0)) {
        local_100 = lVar8;
        _AMRAuthInstallDeletePersonalizedBundle(local_128,uVar6);
        lVar8 = local_100;
      }
      if (lVar13 != 0) {
        _CFRelease();
      }
      if (uVar6 != 0) goto LAB_000ef93d;
    }
  }
  if (local_130 != 0) {
    _CFRelease();
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (local_120 != 0) {
    _CFRelease();
  }
  if (local_110 != 0) {
    _CFRelease();
  }
  if (local_118 != 0) {
    _CFRelease();
  }
  if (local_138 != 0) {
    _CFRelease();
  }
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  if (iVar5 == 0) {
    iVar5 = 0;
    _AMRLog(6,&cf____Recoverymodesucceeded,param_1);
  }
  else {
    _AMRLog(3,&cf____Recoverymodefailed_result__d_,param_1,iVar5);
  }
LAB_000ef9ed:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

