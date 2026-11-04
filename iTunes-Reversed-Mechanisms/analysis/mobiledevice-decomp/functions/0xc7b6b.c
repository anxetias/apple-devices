// rea decompile_all
// name: _AMTADModeDeviceCopyAuthInstallPreflightOptions
// address: 0xc7b6b
// body: available
// range: 0xc7b6b-0xc8684 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMTADModeDeviceCopyAuthInstallPreflightOptions(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  cfstringStruct *pcVar16;
  long local_80;
  uint local_74;
  ulong local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long local_40;
  long *local_38;
  
  _AMRestoreCaptureSubsystemLogsIfNeeded();
  if ((param_2 == 0 || param_1 == 0) || param_3 == (undefined8 *)0x0) {
    _AMRLog(3,&cf__s_badargument_undefinedargumentspassedtofunction_callerpassedNULL,
            "AMTADModeDeviceCopyAuthInstallPreflightOptions");
    return 1;
  }
  uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar7 = _CFDictionaryCreateMutableCopy(uVar9,0,param_2);
  if (lVar7 == 0) {
    _AMRLog(3,&cf__s_failedtocopyoptions,"AMTADModeDeviceCopyAuthInstallPreflightOptions");
    return 0x12;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    iVar5 = __AMRLoadFirmwareInfoTAD(param_1);
    if (iVar5 != 0) {
      _AMRLog(3,&cf_unabletogetfirmwareinfofromdevice__d,iVar5);
    }
    local_70 = 0;
    local_68 = 0;
    plVar10 = (long *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x60) != 0) {
      _CFRelease();
      *plVar10 = 0;
    }
    local_60 = uVar9;
    local_50 = plVar10;
    if (*(long *)(param_1 + 0x58) != 0) {
      _CFRelease();
      *(long *)(param_1 + 0x58) = 0;
    }
    local_48 = (long *)(param_1 + 0x58);
    iVar5 = __AMRTADDeviceCopyNonceWithTag(param_1,&cf_NONC,&local_70);
    uVar14 = local_70;
    if ((iVar5 == 0) &&
       (iVar5 = _AMAuthInstallSupportCopyDataFromHexString(local_60,local_70,local_48), iVar5 != 0))
    {
      _AMRLog(3,&cf_unparsableapnonce___,uVar14);
      plVar10 = local_48;
LAB_000c7dc7:
      if (*plVar10 != 0) {
        _CFRelease();
        *plVar10 = 0;
      }
      iVar6 = _AMAuthInstallToRestoreError(iVar5);
    }
    else {
      iVar6 = 0;
      if ((*(char *)(param_1 + 0x87) != '\0') &&
         (((*(byte *)(param_1 + 0x38) & 4) != 0 &&
          (iVar5 = __AMRTADDeviceCopyNonceWithTag(param_1,&cf_SNON,&local_68), lVar8 = local_68,
          iVar5 == 0)))) {
        if (local_68 == 0) {
          _AMRLog(3,&cf_sepnonceisNULL);
          iVar6 = 1;
        }
        else {
          iVar5 = _AMAuthInstallSupportCopyDataFromHexString(local_60,local_68,local_50);
          if (iVar5 != 0) {
            _AMRLog(3,&cf_unparsablesepnonce___,lVar8);
            plVar10 = local_50;
            goto LAB_000c7dc7;
          }
        }
      }
    }
    if (local_70 != 0) {
      _CFRelease();
    }
    if (local_68 != 0) {
      _CFRelease();
    }
    if (iVar6 != 0) {
      _AMRLog(3,&cf_unabletogetnonceinfofromdevice__d,iVar6);
    }
    uVar9 = _CFGetAllocator(param_1);
    lVar8 = _AMAuthInstallCreate(uVar9);
    if (lVar8 == 0) {
LAB_000c7f51:
      iVar5 = 0x12;
    }
    else {
      uVar9 = _CFGetAllocator(param_1);
      plVar10 = (long *)_CFDictionaryCreateMutable
                                  (uVar9,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (plVar10 == (long *)0x0) {
        _AMRLog(3,&cf_Failedtocreateapparametersdict);
        _CFRelease(lVar8);
        goto LAB_000c7f51;
      }
      _AMAuthInstallSupportDictionarySetInteger64(plVar10,&cf_ECID,*(undefined8 *)(param_1 + 0x70));
      _AMAuthInstallSupportDictionarySetInteger32
                (plVar10,&cf_ApChipID,*(undefined4 *)(param_1 + 0x28));
      _AMAuthInstallSupportDictionarySetInteger32
                (plVar10,&cf_ApBoardID,*(undefined4 *)(param_1 + 0x2c));
      _AMAuthInstallSupportDictionarySetInteger32
                (plVar10,&cf_ApSecurityDomain,*(undefined4 *)(param_1 + 0x7c));
      if (*(long *)(param_1 + 0x88) != 0) {
        _CFDictionarySetValue(plVar10,&cf_ApSikaFuse);
      }
      local_40 = lVar8;
      if (*(char *)(param_1 + 0x82) != '\0') {
        _AMAuthInstallSupportDictionarySetBoolean(plVar10,&cf_UIDMode,1);
      }
      _AMAuthInstallSupportDictionarySetBoolean
                (plVar10,&cf_ApProductionMode,*(undefined1 *)(param_1 + 0x80));
      iVar5 = __AMRLoadFirmwareInfoTAD(param_1);
      if (iVar5 == 0) {
        uVar3 = *(undefined1 *)(param_1 + 0x81);
      }
      else {
        uVar3 = 0;
      }
      _AMAuthInstallSupportDictionarySetBoolean(plVar10,&cf_ApSecurityMode,uVar3);
      iVar5 = __AMRLoadFirmwareInfoTAD(param_1);
      if (iVar5 == 0) {
        uVar3 = *(undefined1 *)(param_1 + 0x84);
      }
      else {
        uVar3 = 0;
      }
      _AMAuthInstallSupportDictionarySetBoolean(plVar10,&cf_ApEffectiveSecurityMode,uVar3);
      iVar5 = __AMRLoadFirmwareInfoTAD(param_1);
      if (iVar5 == 0) {
        uVar3 = *(undefined1 *)(param_1 + 0x83);
      }
      else {
        uVar3 = 0;
      }
      _AMAuthInstallSupportDictionarySetBoolean(plVar10,&cf_ApEffectiveProductionMode,uVar3);
      local_38 = plVar10;
      _AMAuthInstallSupportDictionarySetBoolean(plVar10,&cf_ApInRomDFU,1);
      lVar8 = _CFDictionaryGetValue(lVar7,&cf_SkipNoncesForAPSEP);
      if (lVar8 == 0) {
LAB_000c8028:
        local_58 = (ulong)local_58._4_4_ << 0x20;
      }
      else {
        lVar11 = _CFBooleanGetTypeID();
        lVar12 = _CFGetTypeID(lVar8);
        if (lVar11 != lVar12) goto LAB_000c8028;
        uVar9 = _CFBooleanGetValue(lVar8);
        local_58 = CONCAT44(local_58._4_4_,
                            (int)CONCAT71((int7)((ulong)uVar9 >> 8),(char)uVar9 == '\x01'));
      }
      plVar10 = local_38;
      lVar8 = _CFDictionaryGetValue(lVar7,&cf_AuthInstallRequestTicketWithoutNonce);
      if (lVar8 == 0) {
LAB_000c807f:
        cVar2 = '\0';
        lVar8 = local_40;
        if ((char)local_58 == '\0') {
LAB_000c808a:
          lVar8 = local_40;
          if (*local_48 != 0) {
            _CFDictionarySetValue(plVar10,&cf_ApNonce);
            cVar2 = (char)local_58;
          }
          goto LAB_000c80ab;
        }
      }
      else {
        lVar11 = _CFBooleanGetTypeID();
        lVar12 = _CFGetTypeID(lVar8);
        plVar10 = local_38;
        if (lVar11 != lVar12) goto LAB_000c807f;
        cVar4 = _CFBooleanGetValue(lVar8);
        cVar2 = (char)local_58;
        lVar8 = local_40;
        if (cVar4 != '\x01' && (local_58 & 1) == 0) goto LAB_000c808a;
LAB_000c80ab:
        if ((cVar2 == '\0') && (*local_50 != 0)) {
          _CFDictionarySetValue(plVar10,&cf_SepNonce);
        }
      }
      local_74 = 0;
      cVar2 = __AMRTADDeviceGetIBFL(param_1);
      uVar1 = local_74;
      if (((cVar2 != '\0') && ((local_74 & 4) != 0)) &&
         (_CFDictionarySetValue
                    (local_38,&cf_ApSupportsImg4,*(undefined8 *)PTR__kCFBooleanTrue_00441110),
         (uVar1 & 0x20) != 0)) {
        _CFDictionarySetValue(local_38,&cf_ApImg4DigestType,&cf_sha2_384);
      }
      uVar9 = _CFDictionaryGetValue(lVar7,&cf_UserLocale);
      iVar5 = _AMAuthInstallSetLocale(lVar8,uVar9);
      if (iVar5 == 0) {
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_AuthInstallAllowMixAndMatch);
        plVar10 = local_38;
        if (lVar8 != 0) {
          lVar11 = _CFBooleanGetTypeID();
          lVar12 = _CFGetTypeID(lVar8);
          plVar10 = local_38;
          if ((lVar11 == lVar12) && (cVar2 = _CFBooleanGetValue(lVar8), cVar2 == '\x01')) {
            _CFDictionaryAddValue
                      (plVar10,&cf_ApAllowMixAndMatch,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_AuthInstallDemotionPolicyOverride);
        if (lVar8 != 0) {
          _CFDictionarySetValue(plVar10,&cf_DemotionPolicy,lVar8);
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_RequiresUIDMode);
        if (lVar8 != 0) {
          lVar11 = _CFBooleanGetTypeID();
          lVar12 = _CFGetTypeID(lVar8);
          plVar10 = local_38;
          if ((lVar11 == lVar12) && (cVar2 = _CFBooleanGetValue(lVar8), cVar2 == '\x01')) {
            _CFDictionarySetValue
                      (plVar10,&cf_RequiresUIDMode,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_UIDMode);
        if (lVar8 != 0) {
          lVar11 = _CFBooleanGetTypeID();
          lVar12 = _CFGetTypeID(lVar8);
          plVar10 = local_38;
          if (lVar11 == lVar12) {
            _CFDictionarySetValue(local_38,&cf_UIDMode,lVar8);
          }
        }
        lVar8 = local_40;
        iVar5 = _AMAuthInstallApSetParameters(local_40,plVar10);
        if (iVar5 != 0) {
          uVar9 = _AMAuthInstallGetLocalizedStatusString(lVar8,iVar5);
          _AMRLog(3,&cf_Failedtosetapparameters___,uVar9);
          iVar5 = _AMAuthInstallToRestoreError(iVar5);
          _CFRelease(lVar8);
          plVar10 = local_38;
          goto LAB_000c82c9;
        }
        lVar8 = _CFDictionaryGetValue(lVar7,&cf_BuildIdentityOverride);
        if (lVar8 == 0) {
LAB_000c83b9:
          plVar10 = (long *)0x0;
LAB_000c83bc:
          local_50 = plVar10;
          lVar8 = _CFDictionaryGetValue(lVar7,&cf_RecoveryOSBuildIdentityOverride);
          if (lVar8 == 0) {
LAB_000c8484:
            local_48 = (long *)0x0;
LAB_000c848c:
            lVar8 = local_40;
            iVar5 = _AMRAuthInstallSetFDRTrustObjectHash(local_40,lVar7);
            plVar10 = local_50;
            if (iVar5 == 0) {
              uVar14 = _AMRAuthInstallCopyVariant(lVar8,lVar7);
              local_80 = 0;
              if (uVar14 == 0) {
                _AMRLog(3,&cf_Failedtoreadbuildvariant_);
              }
              else {
                local_58 = uVar14;
                iVar5 = _AMRAuthInstallCopyBuildIdentity(lVar8,lVar7,uVar14,&local_80);
                uVar9 = local_60;
                if (local_80 == 0 || iVar5 != 0) {
                  _AMRLog(3,&cf_Failedtoreadbuildidentity_);
                }
                else {
                  lVar8 = _AMAuthInstallSupportGetValueForKeyPathInDict
                                    (local_60,local_80,&cf_Info_RequiresNonceSlot);
                  if (lVar8 == *(long *)PTR__kCFBooleanTrue_00441110) {
                    local_70 = local_70 & 0xffffffff00000000;
                    local_68 = CONCAT44(local_68._4_4_,2);
                    uVar15 = _CFNumberCreate(uVar9,9);
                    local_60 = _CFNumberCreate(uVar9,9,&local_68);
                    plVar10 = local_38;
                    _CFDictionarySetValue(local_38,&cf_ApNonceSlotID,uVar15);
                    uVar9 = local_60;
                    _CFDictionarySetValue(plVar10,&cf_SepNonceSlotID,local_60);
                    _CFRelease(uVar9);
                    _CFRelease(uVar15);
                    pcVar16 = &cf_Devicewillusenonceslots;
                  }
                  else {
                    pcVar16 = &cf_Devicewillnotusenonceslots;
                  }
                  _AMRLog(6,pcVar16);
                  _CFRelease(local_80);
                }
                _CFRelease(local_58);
              }
              lVar8 = local_40;
              iVar5 = _AMRAuthInstallEnablePersonalization(local_40,lVar7);
              if (iVar5 == 0) {
                *(long *)(param_1 + 0xa8) = lVar8;
                iVar5 = 0;
                plVar10 = local_50;
              }
              else {
                _AMRLog(3,&cf__s_AMRAuthInstallEnablePersonalizationfailed,
                        "_AMRTADModeDeviceConfigureAuthInstall");
                plVar10 = local_50;
              }
            }
          }
          else {
            lVar11 = _CFStringGetTypeID();
            lVar12 = _CFGetTypeID(lVar8);
            if (lVar11 != lVar12) goto LAB_000c8484;
            uVar9 = _CFGetAllocator(local_40);
            plVar13 = (long *)_AMAuthInstallSupportCreateURLFromString(uVar9,lVar8);
            plVar10 = local_50;
            if (plVar13 != (long *)0x0) {
              local_48 = plVar13;
              iVar5 = _AMAuthInstallBundleOverrideRecoveryOSBuildManifest(local_40,plVar13);
              if (iVar5 != 0) {
                uVar9 = _AMAuthInstallGetLocalizedStatusString(local_40,iVar5);
                _AMRLog(3,&cf_FailedtooverriderecoveryOSbuildmanifest___,uVar9);
                iVar5 = _AMAuthInstallToRestoreError(iVar5);
                _CFRelease(local_40);
                goto LAB_000c865d;
              }
              goto LAB_000c848c;
            }
            _CFRelease(local_40);
            iVar5 = 0x12;
            local_48 = (long *)0x0;
          }
LAB_000c865d:
          _CFRelease(local_38);
          if (plVar10 != (long *)0x0) goto LAB_000c866b;
        }
        else {
          lVar11 = _CFStringGetTypeID();
          lVar12 = _CFGetTypeID(lVar8);
          if (lVar11 != lVar12) goto LAB_000c83b9;
          uVar9 = _CFGetAllocator(local_40);
          plVar10 = (long *)_AMAuthInstallSupportCreateURLFromString(uVar9,lVar8);
          if (plVar10 == (long *)0x0) {
            _CFRelease(local_40);
            iVar5 = 0x12;
            plVar10 = local_38;
            goto LAB_000c82c9;
          }
          iVar5 = _AMAuthInstallBundleOverrideBuildManifest(local_40,plVar10);
          if (iVar5 == 0) goto LAB_000c83bc;
          uVar9 = _AMAuthInstallGetLocalizedStatusString(local_40,iVar5);
          local_48 = (long *)0x0;
          _AMRLog(3,&cf_Failedtobuildmanifestoverride___,uVar9);
          iVar5 = _AMAuthInstallToRestoreError(iVar5);
          _CFRelease(local_40);
          _CFRelease(local_38);
LAB_000c866b:
          _CFRelease(plVar10);
        }
        plVar10 = local_48;
        if (local_48 != (long *)0x0) goto LAB_000c82c9;
      }
      else {
        iVar5 = _AMAuthInstallToRestoreError(iVar5);
        plVar10 = local_38;
LAB_000c82c9:
        _CFRelease(plVar10);
      }
      if (iVar5 == 0) goto LAB_000c7c07;
    }
    pcVar16 = &cf__s_failedtoconfigureauthinstall;
  }
  else {
    _AMRLog(7,&cf_authinstallhasalreadybeenconfiguredforthisdevice);
LAB_000c7c07:
    lVar8 = _CFDictionaryGetValue(lVar7,&cf_OnlyPersonalizeDFUFile);
    if (((lVar8 != 0) &&
        (cVar2 = _CFEqual(lVar8,*(undefined8 *)PTR__kCFBooleanTrue_00441110), cVar2 != '\0')) ||
       (iVar5 = __AMRAuthInstallPersonalizeBundleInternal
                          (*(undefined8 *)(param_1 + 0xa8),lVar7,
                           (*(uint *)(param_1 + 0x38) & 0x40) >> 6), iVar5 == 0)) {
      uVar9 = _CFRetain(lVar7);
      *param_3 = uVar9;
      iVar5 = 0;
      goto LAB_000c82f1;
    }
    pcVar16 = &cf__s_failedtopersonalizebundle;
  }
  _AMRLog(3,pcVar16,"AMTADModeDeviceCopyAuthInstallPreflightOptions");
LAB_000c82f1:
  _CFRelease(lVar7);
  return iVar5;
}

