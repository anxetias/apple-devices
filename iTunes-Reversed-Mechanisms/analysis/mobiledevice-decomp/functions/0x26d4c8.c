// rea decompile_all
// name: _AMRAuthInstallCopyAllPreflightOptions
// address: 0x26d4c8
// body: available
// range: 0x26d4c8-0x26e6a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0026df41) */

ulong _AMRAuthInstallCopyAllPreflightOptions
                (long param_1,void *param_2,void *param_3,long param_4,undefined8 *param_5)

{
  size_t sVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  cfstringStruct *pcVar12;
  undefined8 uVar13;
  void *pvVar14;
  void *pvVar15;
  long lVar16;
  ulong uVar17;
  void *pvVar18;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 *local_a0;
  cfstringStruct *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  void *local_70;
  void *local_68;
  long local_60;
  char local_51;
  long local_50;
  long local_48;
  ulong local_40;
  long local_38;
  
  local_d0 = 0;
  local_90 = 0;
  local_8c = 0xffffffff;
  local_b0 = 0;
  local_c8 = 0;
  local_48 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_51 = '\0';
  local_d8 = 0;
  _pthread_once((pthread_once_t *)&__AMRAuthInstallInitializeOnce,__AMRAuthInstallInitialize);
  local_40 = CONCAT44(local_40._4_4_,1);
  if (param_1 == 0) {
    pcVar12 = &cf__s_apPreflightDictionaryisNULL;
    goto LAB_0026d861;
  }
  local_70 = param_3;
  local_38 = param_4;
  lVar7 = _CFDictionaryGetValue(param_1,&cf_HardwareModel);
  lVar8 = _CFDictionaryGetValue(param_1,&cf_ApProductionMode);
  if (lVar7 == 0 || lVar8 == 0) {
    pcVar12 = &cf_requiredAppreflightparametersaremissing;
LAB_0026d834:
    local_78 = 0;
    _AMRLog(3,pcVar12);
  }
  else {
    local_68 = param_2;
    lVar9 = _CFDictionaryGetValue(param_1,&cf_ECID);
    if (lVar9 == 0) {
      pcVar12 = &cf__s_ecidNumisNULL;
    }
    else {
      lVar10 = _CFDictionaryGetValue(param_1,&cf_ApNonce);
      local_a0 = param_5;
      if (lVar10 != 0) {
        lVar10 = _CFGetTypeID(lVar10);
        lVar11 = _CFDataGetTypeID();
        param_5 = local_a0;
        if (lVar10 != lVar11) {
          _AMRLog(3,&cf__s_apNonceisofinvalidtype_,"AMRAuthInstallCopyAllPreflightOptions");
        }
      }
      lVar10 = _CFDictionaryGetValue(param_1,&cf_SepNonce);
      if (lVar10 != 0) {
        lVar10 = _CFGetTypeID(lVar10);
        lVar11 = _CFDataGetTypeID();
        param_5 = local_a0;
        if (lVar10 != lVar11) {
          _AMRLog(3,&cf__s_sepNonceisofinvalidtype_,"AMRAuthInstallCopyAllPreflightOptions");
        }
      }
      if (local_68 != (void *)0x0) {
        lVar10 = _CFGetTypeID(local_68);
        lVar11 = _CFDictionaryGetTypeID();
        param_5 = local_a0;
        if (lVar10 != lVar11) {
          _AMRLog(3,&cf__s_basebandPreflightDictionaryisofinvalidtype_,
                  "AMRAuthInstallCopyAllPreflightOptions");
        }
      }
      if (local_38 == 0) {
        pcVar12 = &cf__s_baseOptionsisNULL;
      }
      else {
        if (param_5 != (undefined8 *)0x0) {
          local_88 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
          local_48 = _CFDictionaryCreateMutableCopy(local_88,0,local_38);
          if (local_48 == 0) {
            local_78 = 0;
            _AMRLog(3,&cf__s_failedtocopyoptions,"AMRAuthInstallCopyAllPreflightOptions");
            lVar10 = 0;
            local_38 = 0;
            local_40 = CONCAT44(local_40._4_4_,0x12);
            lVar8 = 0;
            lVar7 = 0;
            pvVar14 = (void *)0x0;
            lVar9 = 0;
            pvVar15 = (void *)0x0;
            goto LAB_0026d892;
          }
          cVar3 = _CFNumberGetValue(lVar9,4,&local_d0);
          if (cVar3 == '\0') {
            local_68 = (void *)0x0;
            _AMRLog(4,&cf__s_can_tconvertecidtoauseabletype_can_tpersonalize,
                    "AMRAuthInstallCopyAllPreflightOptions");
            _AMRLog(8,&cf__s_ecid__llu,"AMRAuthInstallCopyAllPreflightOptions",local_d0);
            _CFDictionarySetValue
                      (local_48,&cf_SkipPreflightPersonalization,
                       *(undefined8 *)PTR__kCFBooleanTrue_00441110);
          }
          lVar9 = _CFDictionaryGetValue(local_48,&cf_RestoreBundlePath);
          uVar13 = local_88;
          if (lVar9 == 0) {
            pcVar12 = &cf_personalizedinstallisenabledbutrestorebundleisnotspecified;
            goto LAB_0026d834;
          }
          lVar9 = _CFURLCreateWithFileSystemPath(local_88,lVar9,0,1);
          if (lVar9 == 0) {
            lVar10 = 0;
            local_38 = 0;
            local_40 = CONCAT44(local_40._4_4_,0x12);
            local_78 = 0;
            lVar8 = 0;
            lVar7 = 0;
            pvVar14 = (void *)0x0;
            lVar9 = 0;
            pvVar15 = (void *)0x0;
            goto LAB_0026d892;
          }
          local_60 = lVar9;
          lVar9 = _AMAuthInstallCreate(uVar13);
          if (lVar9 == 0) {
            local_78 = 0;
            lVar10 = 0;
            local_40 = CONCAT44(local_40._4_4_,0x12);
            lVar7 = 0;
            lVar9 = 0;
            goto LAB_0026de27;
          }
          local_50 = lVar9;
          iVar5 = _AMRAuthInstallAddUUID(lVar9,local_48);
          if (iVar5 != 0) {
            _AMRLog(3,&cf_failedtoadduuid_devicewillnotprintuuid);
          }
          lVar9 = _CFDictionaryGetValue(local_38,&cf_UpdateBaseband);
          if (lVar9 != 0) {
            lVar10 = _CFBooleanGetTypeID();
            lVar11 = _CFGetTypeID(lVar9);
            if ((lVar10 == lVar11) && (cVar3 = _CFBooleanGetValue(lVar9), cVar3 == '\0')) {
              local_68 = (void *)0x0;
              _AMRLog(3,&cf_SkippingpreflightforBasebandduetoPRconfiguration);
            }
          }
          lVar9 = _CFDictionaryGetValue(local_48,&cf_BasebandFusingProfile);
          if ((lVar9 != 0) &&
             (iVar5 = _AMAuthInstallBasebandSetFusingProfileName(local_50,lVar9), iVar5 != 0)) {
            uVar6 = _AMAuthInstallToRestoreError(iVar5);
            local_40 = CONCAT44(local_40._4_4_,uVar6);
            local_78 = 0;
            _AMRLog(3,&cf_failedtosetfusingprofile___,lVar9);
            lVar10 = 0;
            local_38 = 0;
            lVar7 = 0;
            pvVar14 = (void *)0x0;
LAB_0026e5c2:
            pvVar15 = (void *)0x0;
            lVar8 = local_60;
            lVar9 = local_50;
            goto LAB_0026d892;
          }
          pcVar12 = (cfstringStruct *)_CFDictionaryGetValue(local_48,&cf_BasebandFusingProgram);
          if (pcVar12 == (cfstringStruct *)0x0) {
            local_78 = 0;
LAB_0026db31:
            if (local_68 == (void *)0x0) {
LAB_0026db7f:
              lVar9 = 0;
              local_68 = (void *)0x0;
            }
            else {
              lVar9 = _CFDictionaryGetValue(local_68,&cf_ChipSerialNo);
              if (lVar9 == 0) {
                lVar9 = 0;
              }
              else {
                lVar10 = _CFGetTypeID(lVar9);
                lVar11 = _CFDataGetTypeID();
                if (lVar10 != lVar11) {
                  _AMRLog(3,&cf__s_bbSnumisofinvalidtype_,"AMRAuthInstallCopyAllPreflightOptions");
                  goto LAB_0026db7f;
                }
              }
            }
            uVar13 = local_d0;
            uVar4 = _CFBooleanGetValue(lVar8);
            iVar5 = _AMAuthInstallBundleSetPropertiesWithBoardConfig
                              (local_50,uVar13,uVar4,lVar9,local_8c,local_60,lVar7);
            if (iVar5 == 0) {
              lVar7 = _CFDictionaryGetValue(local_48,&cf_AuthInstallDemotionPolicyOverride);
              if (lVar7 != 0) {
                _CFDictionarySetValue(param_1,&cf_DemotionPolicy,lVar7);
              }
              lVar7 = _CFDictionaryGetValue(local_48,&cf_BuildIdentityOverride);
              lVar9 = local_50;
              pvVar18 = local_70;
              if (lVar7 != 0) {
                uVar13 = _CFGetAllocator(local_50);
                lVar7 = _AMAuthInstallSupportCreateURLFromString(uVar13,lVar7);
                if (lVar7 != 0) {
                  iVar5 = _AMAuthInstallBundleOverrideBuildManifest(lVar9,lVar7);
                  if (iVar5 != 0) {
                    _AMRLog(4,&cf_failedtosetoverridebuildmanifest);
                  }
                  _CFRelease(lVar7);
                }
              }
              lVar7 = _CFDictionaryGetValue(local_48,&cf_RecoveryOSBuildIdentityOverride);
              if (lVar7 != 0) {
                uVar13 = _CFGetAllocator(lVar9);
                lVar7 = _AMAuthInstallSupportCreateURLFromString(uVar13,lVar7);
                if (lVar7 != 0) {
                  iVar5 = _AMAuthInstallBundleOverrideRecoveryOSBuildManifest(lVar9,lVar7);
                  if (iVar5 != 0) {
                    _AMRLog(4,&cf_failedtosetrecoveryOSbuildmanifestoverride);
                  }
                  _CFRelease(lVar7);
                }
              }
              iVar5 = _AMAuthInstallApSetParameters(lVar9,param_1);
              lVar7 = local_48;
              if (iVar5 != 0) {
                uVar6 = _AMAuthInstallToRestoreError(iVar5);
                local_40 = CONCAT44(local_40._4_4_,uVar6);
                goto LAB_0026dd0f;
              }
              uVar13 = _CFBooleanGetTypeID();
              __AMRAuthInstallApplyCFPreferencesOverride(lVar7,&cf_FDRSkipDataPreservation,uVar13);
              lVar7 = _CFDictionaryGetValue(param_1,&cf_ApNonceSlotID);
              if (lVar7 != 0) {
                lVar8 = _CFGetTypeID(lVar7);
                lVar9 = _CFNumberGetTypeID();
                if (lVar8 == lVar9) {
                  _CFDictionarySetValue(local_48,&cf_APNonceSlotID,lVar7);
                }
                else {
                  _AMRLog(3,&cf__s_apNonceSlotIDisofinvalidtype_,
                          "AMRAuthInstallCopyAllPreflightOptions");
                }
              }
              lVar7 = _CFDictionaryGetValue(param_1,&cf_SepNonceSlotID);
              if (lVar7 != 0) {
                lVar8 = _CFGetTypeID(lVar7);
                lVar9 = _CFNumberGetTypeID();
                if (lVar8 == lVar9) {
                  _CFDictionarySetValue(local_48,&cf_SEPNonceSlotID,lVar7);
                }
                else {
                  _AMRLog(3,&cf__s_sepNonceSlotIDisofinvalidtype_,
                          "AMRAuthInstallCopyAllPreflightOptions");
                }
              }
              lVar9 = local_50;
              iVar5 = __AMRAuthInstallSetAndCopyFDRTrustObjectHash(local_50,local_48,&local_a8);
              if (iVar5 != 0) {
                lVar10 = 0;
                lVar7 = 0;
                local_40 = CONCAT44(local_40._4_4_,iVar5);
                goto LAB_0026de27;
              }
              if (local_a8 != 0) {
                lVar7 = _CFDictionaryCreateMutable
                                  (local_88,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                if (lVar7 != 0) {
                  _CFDictionarySetValue(lVar7,&cf_TrustObjectDigest,local_a8);
                  goto LAB_0026de79;
                }
                _AMRLog(3,&cf_updaterOverrideOptionsallocationfailed);
                lVar7 = 0;
LAB_0026e1e0:
                local_40 = CONCAT44(local_40._4_4_,0x12);
                goto LAB_0026dd14;
              }
              lVar7 = 0;
LAB_0026de79:
              pvVar15 = local_68;
              if (local_68 == (void *)0x0) {
                iVar5 = _AMAuthInstallBundleCopyURLForKey(lVar9,&cf_BasebandFirmware,0,local_60);
                if (iVar5 == 0) {
                  _AMRLog(4,&cf_Devicewithbasebandfailedtopreflight);
                }
LAB_0026df46:
                lVar10 = 0;
              }
              else {
                iVar5 = _AMRAuthInstallCopyBasebandPreflightOptions
                                  (local_68,&local_48,&local_b0,&local_8c,&local_51);
                if (iVar5 != 0) goto LAB_0026df46;
                uVar13 = _CFGetAllocator(lVar9);
                lVar10 = _CFDictionaryCreateMutableCopy(uVar13,0,pvVar15);
                if (lVar10 == 0) {
                  _CFDictionarySetValue
                            (local_48,&cf_SkipPreflightPersonalization,
                             *(undefined8 *)PTR__kCFBooleanTrue_00441110);
                  goto LAB_0026e1e0;
                }
                lVar8 = _CFDictionaryGetValue(pvVar15,&cf_ChipID);
                if (lVar8 == 0) {
                  iVar5 = _AMAuthInstallBasebandGetChipID(lVar9,&local_90);
                  if (iVar5 == 0) {
                    uVar13 = _CFGetAllocator(local_50);
                    lVar8 = _CFNumberCreate(uVar13,3,&local_90);
                    if (lVar8 == 0) {
                      _CFDictionarySetValue
                                (local_48,&cf_SkipPreflightPersonalization,
                                 *(undefined8 *)PTR__kCFBooleanTrue_00441110);
                      local_40 = CONCAT44(local_40._4_4_,0x12);
                      lVar9 = local_50;
                      goto LAB_0026de27;
                    }
                    _CFDictionarySetValue(lVar10,&cf_ChipID,lVar8);
                    _CFRelease(lVar8);
                    lVar9 = local_50;
                    goto LAB_0026dee1;
                  }
LAB_0026e20a:
                  uVar6 = _AMAuthInstallToRestoreError(iVar5);
                  local_40 = CONCAT44(local_40._4_4_,uVar6);
                  lVar9 = local_50;
                  goto LAB_0026de27;
                }
LAB_0026dee1:
                iVar5 = _AMAuthInstallBasebandSetParametersWithUpdaterOutput(lVar9,lVar10);
                pvVar18 = local_70;
                if (iVar5 != 0) goto LAB_0026e20a;
              }
              local_80 = lVar7;
              if (pvVar18 == (void *)0x0) {
                local_70 = (void *)0x0;
                pvVar15 = (void *)0x0;
              }
              else {
                local_40 = _CFDictionaryGetCount(pvVar18);
                sVar1 = local_40 * 8;
                pvVar14 = _malloc(sVar1);
                pvVar15 = _malloc(sVar1);
                if (pvVar14 == (void *)0x0) {
                  local_38 = 0;
                  _AMRLog(3,&cf_keysallocationfailed);
                  pvVar14 = (void *)0x0;
                  local_40 = CONCAT44(local_40._4_4_,0x12);
                  lVar8 = local_60;
                  lVar9 = local_50;
                  goto LAB_0026d892;
                }
                if (pvVar15 == (void *)0x0) {
                  local_38 = 0;
                  _AMRLog(3,&cf_valuesallocationfailed);
                  local_40 = CONCAT44(local_40._4_4_,0x12);
                  goto LAB_0026e5c2;
                }
                _CFDictionaryGetKeysAndValues(pvVar18,pvVar14,pvVar15);
                local_70 = pvVar14;
                if (0 < (long)local_40) {
                  local_98 = &cf_DeviceInfo;
                  lVar7 = *(long *)PTR__kCFBooleanTrue_00441110;
                  uVar17 = 0;
                  local_68 = pvVar15;
                  do {
                    uVar13 = *(undefined8 *)((long)local_70 + uVar17 * 8);
                    uVar2 = *(undefined8 *)((long)pvVar15 + uVar17 * 8);
                    lVar8 = _CFGetTypeID(uVar13);
                    lVar9 = _CFStringGetTypeID();
                    if (lVar8 != lVar9) {
                      local_38 = 0;
                      _AMRLog(3,&cf_Preflightdictkeycontainsinvalidtype);
LAB_0026e16d:
                      local_40 = CONCAT44(local_40._4_4_,1);
                      lVar8 = local_60;
                      lVar7 = local_80;
                      pvVar14 = local_70;
                      lVar9 = local_50;
                      pvVar15 = local_68;
                      goto LAB_0026d892;
                    }
                    lVar8 = _CFGetTypeID(uVar2);
                    lVar9 = _CFDictionaryGetTypeID();
                    if (lVar8 != lVar9) {
                      local_38 = 0;
                      _AMRLog(3,&cf___preflightcontainsinvalidvalues,uVar13);
                      goto LAB_0026e16d;
                    }
                    lVar8 = _CFDictionaryGetValue(uVar2,local_98);
                    pvVar15 = local_68;
                    if (lVar8 == 0) {
                      local_38 = 0;
                      _AMRLog(3,&cf___preflightmissingDeviceInfo_,uVar13);
                      local_40 = CONCAT44(local_40._4_4_,1);
                      lVar8 = local_60;
                      lVar7 = local_80;
                      pvVar14 = local_70;
                      lVar9 = local_50;
                      pvVar15 = local_68;
                      goto LAB_0026d892;
                    }
                    cVar3 = _AMAuthInstallUpdaterDeviceRestoreInfo(uVar13);
                    if ((cVar3 == '\0') ||
                       (lVar9 = _CFDictionaryGetValue(local_48,&cf_DisableDeviceRestoreInfo),
                       lVar9 == lVar7)) {
                      lVar9 = _AMRAuthInstallUpdaterGetOptionName(uVar13);
                      if ((lVar9 != 0) &&
                         (lVar9 = _CFDictionaryGetValue(local_38,lVar9), lVar9 != 0)) {
                        lVar11 = _CFBooleanGetTypeID();
                        lVar16 = _CFGetTypeID(lVar9);
                        if ((lVar11 == lVar16) && (cVar3 = _CFBooleanGetValue(lVar9), cVar3 == '\0')
                           ) {
                          _AMRLog(3,&cf_Skippingpreflightfor__duetoPRconfiguration,uVar13);
                          pvVar15 = local_68;
                          goto LAB_0026e106;
                        }
                      }
                      iVar5 = __AMRestoreUpdaterSetInfoWithOverride
                                        (local_50,uVar13,lVar8,local_48,local_80,0,&local_d8);
                      pvVar15 = local_68;
                      if (iVar5 != 0) {
                        _AMRLog(3,&cf_AMRestoreUpdaterSetInfofailedfor___return__d_error___,uVar13,
                                iVar5,local_d8);
                      }
                    }
                    else {
                      _AMRLog(6,&cf_Skippingpreflightfor___,uVar13);
                    }
LAB_0026e106:
                    uVar17 = uVar17 + 1;
                  } while (local_40 != uVar17);
                }
              }
              lVar9 = local_50;
              iVar5 = _AMRAuthInstallEnablePersonalization(local_50,local_48);
              lVar7 = local_80;
              if (iVar5 != 0) {
                local_38 = 0;
                _AMRLog(3,&cf__s_AMRAuthInstallEnablePersonalizationfailed,
                        "AMRAuthInstallCopyAllPreflightOptions");
                local_40 = CONCAT44(local_40._4_4_,iVar5);
                lVar8 = local_60;
                pvVar14 = local_70;
                goto LAB_0026d892;
              }
              local_68 = pvVar15;
              if ((local_b0 != 0) && (lVar8 = _CFDataGetLength(), 0 < lVar8)) {
                _CFDictionarySetValue(local_48,&cf_BasebandNonce,local_b0);
              }
              cVar3 = _AMAuthInstallApPersonalizationEnabled(lVar9);
              if ((cVar3 == '\0') &&
                 (cVar3 = _AMAuthInstallBasebandPersonalizationEnabled(lVar9), cVar3 == '\0')) {
LAB_0026e408:
                local_38 = 0;
              }
              else {
                lVar8 = _CFDictionaryGetValue(local_48,&cf_SkipFactoryPreflightPersonalization);
                lVar9 = _CFDictionaryGetValue(local_48,&cf_SkipPreflightPersonalization);
                if (((lVar8 == 0) || (cVar3 = _CFBooleanGetValue(lVar8), cVar3 == '\0')) &&
                   ((lVar9 == 0 || (cVar3 = _CFBooleanGetValue(lVar9), cVar3 == '\0')))) {
                  local_38 = 0;
                  iVar5 = __AMRAuthInstallPersonalizeBundleInternal(local_50,local_48,0);
                  if (iVar5 != 0) goto LAB_0026e514;
                  _CFDictionarySetValue
                            (local_48,&cf_PersonalizedDuringPreflight,
                             *(undefined8 *)PTR__kCFBooleanTrue_00441110);
                  goto LAB_0026e408;
                }
                lVar8 = _CFDictionaryGetValue(local_48,&cf_SourceRestoreBundlePath);
                if ((lVar8 == 0) &&
                   (lVar8 = _CFDictionaryGetValue(local_48,&cf_RestoreBundlePath), lVar8 == 0)) {
                  local_38 = 0;
                  _AMRLog(3,&cf_norestorebundlespecified);
                  iVar5 = 1;
LAB_0026e514:
                  local_40 = CONCAT44(local_40._4_4_,iVar5);
                  lVar8 = local_60;
                  pvVar14 = local_70;
                  lVar9 = local_50;
                  pvVar15 = local_68;
                  goto LAB_0026d892;
                }
                local_38 = 0;
                local_60 = _CFURLCreateWithFileSystemPath(local_88,lVar8,0,1);
                if (local_60 == 0) {
                  local_40 = CONCAT44(local_40._4_4_,0x12);
                  lVar8 = 0;
                  pvVar14 = local_70;
                  lVar9 = local_50;
                  pvVar15 = local_68;
                  goto LAB_0026d892;
                }
                local_38 = _CFDictionaryGetValue(local_48,&cf_PersonalizedRestoreBundlePath);
                if (local_38 == 0) {
                  iVar5 = _AMAuthInstallSupportCopyURLToNewTempDirectory
                                    (local_88,"PersonalizedRestoreBundle.XXXXXXXXXX",&local_b8);
                  if (iVar5 != 0) {
                    local_38 = 0;
                    _AMRLog(3,&cf_failedtocreateapersonalizedbundledirectory);
                    local_40 = CONCAT44(local_40._4_4_,0xb);
                    lVar8 = local_60;
                    pvVar14 = local_70;
                    lVar9 = local_50;
                    pvVar15 = local_68;
                    goto LAB_0026d892;
                  }
                  local_38 = _AMRestoreCreatePathFromURL(local_88,local_b8);
                  if (local_38 == 0) {
                    local_38 = 0;
                    local_40 = CONCAT44(local_40._4_4_,0x12);
                    lVar8 = local_60;
                    pvVar14 = local_70;
                    lVar9 = local_50;
                    pvVar15 = local_68;
                    goto LAB_0026d892;
                  }
                }
                else {
                  _CFRetain(local_38);
                }
                _CFDictionarySetValue(local_48,&cf_PersonalizedRestoreBundlePath,local_38);
                _CFDictionarySetValue(local_48,&cf_SourceRestoreBundlePath,lVar8);
              }
              if ((local_51 != '\0') &&
                 (iVar5 = _AMAuthInstallBasebandCreateUpdaterStateInfo(local_50,&local_c0),
                 iVar5 == 0)) {
                _CFDictionarySetValue(local_48,&cf_BBUpdaterState,local_c0);
              }
              uVar13 = _CFRetain(local_48);
              *local_a0 = uVar13;
              local_40 = local_40 & 0xffffffff00000000;
              lVar8 = local_60;
              pvVar14 = local_70;
              lVar9 = local_50;
              pvVar15 = local_68;
              goto LAB_0026d892;
            }
            if (iVar5 == 1) {
              _AMRLog(6,&
                        cf_couldn_tpreflightagainstthecurrentlyinstalledbuild_willproceedwithanon_preflightedrestore
                     );
            }
            uVar6 = _AMAuthInstallToRestoreError(iVar5);
            local_40 = CONCAT44(local_40._4_4_,uVar6);
            lVar10 = 0;
            lVar7 = 0;
            lVar9 = local_50;
          }
          else {
            uVar13 = _CFGetAllocator(local_50);
            local_98 = pcVar12;
            local_78 = _CFURLCreateWithString(uVar13,pcVar12,0);
            lVar9 = local_50;
            if (local_78 == 0) {
              local_78 = 0;
              local_38 = 0;
              pvVar14 = (void *)0x0;
              pvVar15 = (void *)0x0;
              local_40 = CONCAT44(local_40._4_4_,0x12);
              lVar7 = 0;
              lVar10 = 0;
              lVar8 = local_60;
              goto LAB_0026d892;
            }
            uVar13 = _CFGetAllocator(local_50);
            iVar5 = _AMAuthInstallSupportCreateDictionaryFromFileURL(uVar13,&local_c8,local_78);
            if (iVar5 == 0) {
              iVar5 = _AMAuthInstallBasebandSetDevelopmentFusingProgram(lVar9,local_c8);
              if (iVar5 == 0) goto LAB_0026db31;
              uVar6 = _AMAuthInstallToRestoreError(iVar5);
              local_40 = CONCAT44(local_40._4_4_,uVar6);
              pcVar12 = &cf_failedtosetfusingprogram___;
            }
            else {
              uVar6 = _AMAuthInstallToRestoreError(iVar5);
              local_40 = CONCAT44(local_40._4_4_,uVar6);
              pcVar12 = &cf_failedtocreatefusingdatafrom___;
            }
            _AMRLog(3,pcVar12,local_98);
LAB_0026dd0f:
            lVar7 = 0;
LAB_0026dd14:
            lVar10 = 0;
          }
LAB_0026de27:
          local_38 = 0;
          lVar8 = local_60;
          pvVar14 = (void *)0x0;
          pvVar15 = (void *)0x0;
          goto LAB_0026d892;
        }
        pcVar12 = &cf__s_outPreflightOptionsisNULL;
      }
    }
LAB_0026d861:
    local_78 = 0;
    _AMRLog(3,pcVar12,"AMRAuthInstallCopyAllPreflightOptions");
  }
  lVar10 = 0;
  local_38 = 0;
  lVar8 = 0;
  lVar7 = 0;
  pvVar14 = (void *)0x0;
  lVar9 = 0;
  pvVar15 = (void *)0x0;
LAB_0026d892:
  if (local_48 != 0) {
    local_68 = pvVar15;
    _CFRelease();
    pvVar15 = local_68;
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (local_c0 != 0) {
    _CFRelease();
  }
  if ((local_51 == '\0') && ((int)local_40 == 0)) {
    _pthread_once((pthread_once_t *)&__AMRAuthInstallInitializeOnce,__AMRAuthInstallInitialize);
    local_40 = local_40 & 0xffffffff00000000;
  }
  if (local_78 != 0) {
    _CFRelease();
  }
  if (local_c8 != 0) {
    _CFRelease();
  }
  if (local_b0 != 0) {
    _CFRelease();
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (lVar10 != 0) {
    _CFRelease(lVar10);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (local_b8 != 0) {
    _CFRelease();
  }
  if (local_a8 != 0) {
    _CFRelease();
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (pvVar14 != (void *)0x0) {
    _free(pvVar14);
  }
  if (pvVar15 != (void *)0x0) {
    _free(pvVar15);
  }
  return local_40 & 0xffffffff;
}

