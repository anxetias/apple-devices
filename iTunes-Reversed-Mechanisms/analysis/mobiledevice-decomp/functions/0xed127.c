// rea decompile_all
// name: _AMDFUModeDeviceCopyAuthInstallPreflightOptions
// address: 0xed127
// body: available
// range: 0xed127-0xed9a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000ed569) */
/* WARNING: Removing unreachable block (ram,0x000ed58b) */

int _AMDFUModeDeviceCopyAuthInstallPreflightOptions(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  bool bVar12;
  long local_50;
  long local_40;
  
  _AMRestoreCaptureSubsystemLogsIfNeeded();
  if ((param_2 == 0 || param_1 == 0) || param_3 == (undefined8 *)0x0) {
    _AMRLog(3,&cf__s_badargument_undefinedargumentspassedtofunction_callerpassedNULL,
            "AMDFUModeDeviceCopyAuthInstallPreflightOptions");
    return 1;
  }
  lVar4 = _CFDictionaryCreateMutableCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,param_2)
  ;
  if (lVar4 == 0) {
    _AMRLog(3,&cf__s_failedtocopyoptions,"AMDFUModeDeviceCopyAuthInstallPreflightOptions");
    return 0x12;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    iVar3 = __loadFirmwareInfoDFU(param_1);
    if (iVar3 != 0) {
      _AMRLog(3,&cf_unabletogetfirmwareinfofromdevice__d,iVar3);
    }
    iVar3 = __AMRUSBDeviceAddNonceWithInfo(*(undefined8 *)(param_1 + 0x90),param_1 + 0x28);
    if (iVar3 != 0) {
      _AMRLog(3,&cf_unabletogetnonceinfofromdevice__d,iVar3);
    }
    uVar6 = _CFGetAllocator(param_1);
    lVar5 = _AMAuthInstallCreate(uVar6);
    if (lVar5 == 0) {
LAB_000ed3ca:
      iVar3 = 0x12;
    }
    else {
      uVar6 = _CFGetAllocator(param_1);
      lVar7 = _CFDictionaryCreateMutable
                        (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar7 == 0) {
        _AMRLog(3,&cf_Failedtocreateapparametersdict);
        _CFRelease(lVar5);
        goto LAB_000ed3ca;
      }
      _AMAuthInstallSupportDictionarySetInteger64(lVar7,&cf_ECID,*(undefined8 *)(param_1 + 0x70));
      _AMAuthInstallSupportDictionarySetInteger32
                (lVar7,&cf_ApChipID,*(undefined4 *)(param_1 + 0x28));
      _AMAuthInstallSupportDictionarySetInteger32
                (lVar7,&cf_ApBoardID,*(undefined4 *)(param_1 + 0x2c));
      _AMAuthInstallSupportDictionarySetInteger32
                (lVar7,&cf_ApSecurityDomain,*(undefined4 *)(param_1 + 0x7c));
      if (*(long *)(param_1 + 0x88) != 0) {
        _CFDictionarySetValue(lVar7,&cf_ApSikaFuse);
      }
      if (*(char *)(param_1 + 0x82) != '\0') {
        _AMAuthInstallSupportDictionarySetBoolean(lVar7,&cf_UIDMode,1);
      }
      _AMAuthInstallSupportDictionarySetBoolean
                (lVar7,&cf_ApProductionMode,*(undefined1 *)(param_1 + 0x80));
      iVar3 = __loadFirmwareInfoDFU(param_1);
      if (iVar3 == 0) {
        uVar2 = *(undefined1 *)(param_1 + 0x81);
      }
      else {
        uVar2 = 0;
      }
      _AMAuthInstallSupportDictionarySetBoolean(lVar7,&cf_ApSecurityMode,uVar2);
      iVar3 = __loadFirmwareInfoDFU(param_1);
      if (iVar3 == 0) {
        uVar2 = *(undefined1 *)(param_1 + 0x84);
      }
      else {
        uVar2 = 0;
      }
      _AMAuthInstallSupportDictionarySetBoolean(lVar7,&cf_ApEffectiveSecurityMode,uVar2);
      iVar3 = __loadFirmwareInfoDFU(param_1);
      if (iVar3 == 0) {
        uVar2 = *(undefined1 *)(param_1 + 0x83);
      }
      else {
        uVar2 = 0;
      }
      _AMAuthInstallSupportDictionarySetBoolean(lVar7,&cf_ApEffectiveProductionMode,uVar2);
      _AMAuthInstallSupportDictionarySetBoolean(lVar7,&cf_ApInRomDFU,1);
      lVar8 = _CFDictionaryGetValue(lVar4,&cf_SkipNoncesForAPSEP);
      if (lVar8 == 0) {
        bVar12 = false;
      }
      else {
        lVar9 = _CFBooleanGetTypeID();
        lVar10 = _CFGetTypeID(lVar8);
        if (lVar9 == lVar10) {
          cVar1 = _CFBooleanGetValue(lVar8);
          bVar12 = cVar1 == '\x01';
        }
        else {
          bVar12 = false;
        }
      }
      lVar8 = _CFDictionaryGetValue(lVar4,&cf_AuthInstallRequestTicketWithoutNonce);
      if (lVar8 == 0) {
LAB_000ed501:
        if (!bVar12) {
LAB_000ed50c:
          if (*(long *)(param_1 + 0x58) != 0) {
            _CFDictionarySetValue(lVar7,&cf_ApNonce);
          }
          goto LAB_000ed52a;
        }
      }
      else {
        lVar9 = _CFBooleanGetTypeID();
        lVar10 = _CFGetTypeID(lVar8);
        if (lVar9 != lVar10) goto LAB_000ed501;
        cVar1 = _CFBooleanGetValue(lVar8);
        if (cVar1 != '\x01' && !bVar12) goto LAB_000ed50c;
LAB_000ed52a:
        if ((!bVar12) && (*(long *)(param_1 + 0x60) != 0)) {
          _CFDictionarySetValue(lVar7,&cf_SepNonce);
        }
      }
      __AMRUSBDeviceGetIBFL(*(undefined8 *)(param_1 + 0x90));
      uVar6 = _CFDictionaryGetValue(lVar4,&cf_UserLocale);
      iVar3 = _AMAuthInstallSetLocale(lVar5,uVar6);
      if (iVar3 == 0) {
        lVar8 = _CFDictionaryGetValue(lVar4,&cf_AuthInstallAllowMixAndMatch);
        if (lVar8 != 0) {
          lVar9 = _CFBooleanGetTypeID();
          lVar10 = _CFGetTypeID(lVar8);
          if ((lVar9 == lVar10) && (cVar1 = _CFBooleanGetValue(lVar8), cVar1 == '\x01')) {
            _CFDictionaryAddValue
                      (lVar7,&cf_ApAllowMixAndMatch,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar4,&cf_AuthInstallDemotionPolicyOverride);
        if (lVar8 != 0) {
          _CFDictionarySetValue(lVar7,&cf_DemotionPolicy,lVar8);
        }
        lVar8 = _CFDictionaryGetValue(lVar4,&cf_RequiresUIDMode);
        if (lVar8 != 0) {
          lVar9 = _CFBooleanGetTypeID();
          lVar10 = _CFGetTypeID(lVar8);
          if ((lVar9 == lVar10) && (cVar1 = _CFBooleanGetValue(lVar8), cVar1 == '\x01')) {
            _CFDictionarySetValue
                      (lVar7,&cf_RequiresUIDMode,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
          }
        }
        lVar8 = _CFDictionaryGetValue(lVar4,&cf_UIDMode);
        if (lVar8 != 0) {
          lVar9 = _CFBooleanGetTypeID();
          lVar10 = _CFGetTypeID(lVar8);
          if (lVar9 == lVar10) {
            _CFDictionarySetValue(lVar7,&cf_UIDMode,lVar8);
          }
        }
        iVar3 = _AMAuthInstallApSetParameters(lVar5,lVar7);
        if (iVar3 != 0) {
          uVar6 = _AMAuthInstallGetLocalizedStatusString(lVar5,iVar3);
          _AMRLog(3,&cf_Failedtosetapparameters___,uVar6);
          iVar3 = _AMAuthInstallToRestoreError(iVar3);
          _CFRelease(lVar5);
          goto LAB_000ed965;
        }
        lVar8 = _CFDictionaryGetValue(lVar4,&cf_BuildIdentityOverride);
        if (lVar8 == 0) {
          local_40 = 0;
LAB_000ed80f:
          lVar8 = _CFDictionaryGetValue(lVar4,&cf_RecoveryOSBuildIdentityOverride);
          if (lVar8 == 0) {
            local_50 = 0;
LAB_000ed8c7:
            iVar3 = _AMRAuthInstallSetFDRTrustObjectHash(lVar5,lVar4);
            if (iVar3 == 0) {
              iVar3 = _AMRAuthInstallEnablePersonalization(lVar5,lVar4);
              if (iVar3 == 0) {
                *(long *)(param_1 + 0xa8) = lVar5;
                iVar3 = 0;
              }
              else {
                _AMRLog(3,&cf__s_AMRAuthInstallEnablePersonalizationfailed,
                        "_AMDFUModeDeviceConfigureAuthInstall");
              }
            }
          }
          else {
            lVar9 = _CFStringGetTypeID();
            lVar10 = _CFGetTypeID(lVar8);
            if (lVar9 != lVar10) {
              local_50 = 0;
              goto LAB_000ed8c7;
            }
            uVar6 = _CFGetAllocator(lVar5);
            local_50 = _AMAuthInstallSupportCreateURLFromString(uVar6,lVar8);
            if (local_50 == 0) {
              _CFRelease(lVar5);
              iVar3 = 0x12;
              local_50 = 0;
            }
            else {
              iVar3 = _AMAuthInstallBundleOverrideRecoveryOSBuildManifest(lVar5,local_50);
              if (iVar3 == 0) goto LAB_000ed8c7;
              uVar6 = _AMAuthInstallGetLocalizedStatusString(lVar5,iVar3);
              _AMRLog(3,&cf_FailedtooverriderecoveryOSbuildmanifest___,uVar6);
              iVar3 = _AMAuthInstallToRestoreError(iVar3);
              _CFRelease(lVar5);
            }
          }
          _CFRelease(lVar7);
          if (local_40 != 0) goto LAB_000ed954;
        }
        else {
          lVar9 = _CFStringGetTypeID();
          lVar10 = _CFGetTypeID(lVar8);
          if (lVar9 != lVar10) {
            local_40 = 0;
            goto LAB_000ed80f;
          }
          uVar6 = _CFGetAllocator(lVar5);
          local_40 = _AMAuthInstallSupportCreateURLFromString(uVar6,lVar8);
          if (local_40 == 0) {
            _CFRelease(lVar5);
            iVar3 = 0x12;
            goto LAB_000ed965;
          }
          iVar3 = _AMAuthInstallBundleOverrideBuildManifest(lVar5,local_40);
          if (iVar3 == 0) goto LAB_000ed80f;
          uVar6 = _AMAuthInstallGetLocalizedStatusString(lVar5,iVar3);
          local_50 = 0;
          _AMRLog(3,&cf_Failedtobuildmanifestoverride___,uVar6);
          iVar3 = _AMAuthInstallToRestoreError(iVar3);
          _CFRelease(lVar5);
          _CFRelease(lVar7);
LAB_000ed954:
          _CFRelease(local_40);
        }
        lVar7 = local_50;
        if (local_50 != 0) goto LAB_000ed965;
      }
      else {
        iVar3 = _AMAuthInstallToRestoreError(iVar3);
LAB_000ed965:
        _CFRelease(lVar7);
      }
      if (iVar3 == 0) goto LAB_000ed1c0;
    }
    pcVar11 = &cf__s_failedtoconfigureauthinstall;
  }
  else {
    _AMRLog(7,&cf_authinstallhasalreadybeenconfiguredforthisdevice);
LAB_000ed1c0:
    lVar5 = _CFDictionaryGetValue(lVar4,&cf_OnlyPersonalizeDFUFile);
    if (((lVar5 != 0) &&
        (cVar1 = _CFEqual(lVar5,*(undefined8 *)PTR__kCFBooleanTrue_00441110), cVar1 != '\0')) ||
       (iVar3 = __AMRAuthInstallPersonalizeBundleInternal
                          (*(undefined8 *)(param_1 + 0xa8),lVar4,
                           (*(uint *)(param_1 + 0x38) & 0x40) >> 6), iVar3 == 0)) {
      uVar6 = _CFRetain(lVar4);
      *param_3 = uVar6;
      iVar3 = 0;
      goto LAB_000ed990;
    }
    pcVar11 = &cf__s_failedtopersonalizebundle;
  }
  _AMRLog(3,pcVar11,"AMDFUModeDeviceCopyAuthInstallPreflightOptions");
LAB_000ed990:
  _CFRelease(lVar4);
  return iVar3;
}

