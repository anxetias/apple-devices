// rea decompile_all
// name: _AMRecoveryModeDeviceConfigureAuthInstall
// address: 0xeeb02
// body: available
// range: 0xeeb02-0xef303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xef2ff to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRecoveryModeDeviceConfigureAuthInstall(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  cfstringStruct *pcVar13;
  bool bVar14;
  bool bVar15;
  undefined4 local_84;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  ulong local_48 [3];
  
  local_48[2] = *(ulong *)PTR____stack_chk_guard_004412b8;
  local_70 = 0;
  if (*(long *)(param_1 + 200) != 0) {
    iVar3 = 0;
    _AMRLog(7,&cf_authinstallhasalreadybeenconfiguredforthisdevice);
    goto LAB_000ef2dd;
  }
  if ((*(char *)(param_1 + 0x54) == '\0') && (iVar3 = __loadFirmwareInfo(param_1), iVar3 != 0))
  goto LAB_000ef2dd;
  iVar3 = __AMRUSBDeviceAddNonceWithInfo(*(undefined8 *)(param_1 + 0x28),param_1 + 0x58);
  if (iVar3 != 0) {
    _AMRLog(3,&cf_unabletogetnonceinfofromdevice__d,iVar3);
    goto LAB_000ef2dd;
  }
  uVar5 = _CFGetAllocator(param_1);
  lVar6 = _AMAuthInstallCreate(uVar5);
  iVar3 = 0x12;
  if (lVar6 == 0) goto LAB_000ef2dd;
  uVar5 = _CFGetAllocator(param_1);
  lVar7 = _CFDictionaryCreateMutable
                    (uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar7 == 0) {
    _AMRLog(3,&cf_Failedtocreateapparamtersdict);
  }
  else {
    _AMAuthInstallSupportDictionarySetInteger64(lVar7,&cf_ECID,*(undefined8 *)(param_1 + 0xa0));
    _AMAuthInstallSupportDictionarySetInteger32(lVar7,&cf_ApChipID,*(undefined4 *)(param_1 + 0x58));
    _AMAuthInstallSupportDictionarySetInteger32(lVar7,&cf_ApBoardID,*(undefined4 *)(param_1 + 0x5c))
    ;
    _AMAuthInstallSupportDictionarySetInteger32
              (lVar7,&cf_ApSecurityDomain,*(undefined4 *)(param_1 + 0xac));
    if (*(long *)(param_1 + 0xb8) != 0) {
      _CFDictionarySetValue(lVar7,&cf_ApSikaFuse);
    }
    _AMAuthInstallSupportDictionarySetBoolean
              (lVar7,&cf_ApProductionMode,*(undefined1 *)(param_1 + 0xb0));
    _AMAuthInstallSupportDictionarySetBoolean
              (lVar7,&cf_ApSecurityMode,*(undefined1 *)(param_1 + 0xb1));
    lVar8 = _CFDictionaryGetValue(param_2,&cf_AuthInstallRequestTicketWithoutNonce);
    local_68 = lVar7;
    local_50 = lVar6;
    if (lVar8 == 0) {
LAB_000eecde:
      bVar14 = false;
    }
    else {
      lVar6 = _CFBooleanGetTypeID();
      lVar7 = _CFGetTypeID(lVar8);
      if (lVar6 != lVar7) goto LAB_000eecde;
      cVar2 = _CFBooleanGetValue(lVar8);
      bVar14 = cVar2 == '\x01';
    }
    lVar6 = _CFDictionaryGetValue(param_2,&cf_SkipNoncesForAPSEP);
    if (lVar6 == 0) {
LAB_000eed1c:
      bVar15 = false;
    }
    else {
      lVar7 = _CFBooleanGetTypeID();
      lVar8 = _CFGetTypeID(lVar6);
      if (lVar7 != lVar8) goto LAB_000eed1c;
      cVar2 = _CFBooleanGetValue(lVar6);
      bVar15 = cVar2 == '\x01';
    }
    if ((!(bool)(bVar14 | bVar15)) && (*(long *)(param_1 + 0x88) != 0)) {
      _CFDictionarySetValue(local_68,&cf_ApNonce);
    }
    puVar1 = PTR__kCFBooleanFalse_00441108;
    if ((!bVar15) && (*(long *)(param_1 + 0x90) != 0)) {
      _CFDictionarySetValue(local_68,&cf_SepNonce);
    }
    lVar6 = local_68;
    uVar5 = *(undefined8 *)puVar1;
    uVar11 = uVar5;
    if (*(char *)(param_1 + 0xb7) != '\0') {
      uVar4 = *(uint *)(param_1 + 0x68);
      if ((uVar4 & 4) != 0) {
        _CFDictionarySetValue
                  (local_68,&cf_ApSupportsImg4,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
        uVar4 = *(uint *)(param_1 + 0x68);
      }
      if ((uVar4 & 0x20) != 0) {
        _CFDictionarySetValue(lVar6,&cf_ApImg4DigestType,&cf_sha2_384);
        uVar4 = *(uint *)(param_1 + 0x68);
      }
      uVar11 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
      if ((uVar4 & 8) == 0) {
        uVar11 = uVar5;
      }
      if ((uVar4 & 0x10) != 0) {
        uVar5 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
      }
    }
    _CFDictionaryAddValue(lVar6,&cf_ApEffectiveSecurityMode,uVar11);
    _CFDictionaryAddValue(lVar6,&cf_ApEffectiveProductionMode,uVar5);
    lVar7 = _CFDictionaryGetValue(param_2,&cf_AuthInstallAllowMixAndMatch);
    if (lVar7 != 0) {
      lVar8 = _CFBooleanGetTypeID();
      lVar9 = _CFGetTypeID(lVar7);
      if ((lVar8 == lVar9) && (cVar2 = _CFBooleanGetValue(lVar7), cVar2 == '\x01')) {
        _CFDictionaryAddValue
                  (lVar6,&cf_ApAllowMixAndMatch,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
      }
    }
    lVar7 = _CFDictionaryGetValue(param_2,&cf_AuthInstallDemotionPolicyOverride);
    if (lVar7 != 0) {
      _CFDictionarySetValue(lVar6,&cf_DemotionPolicy,lVar7);
    }
    lVar7 = local_50;
    iVar3 = _AMAuthInstallApSetParameters(local_50,lVar6);
    if (iVar3 == 0) {
      lVar8 = _CFDictionaryGetValue(param_2,&cf_BuildIdentityOverride);
      if (lVar8 == 0) {
        local_60 = 0;
LAB_000eefad:
        lVar8 = _CFDictionaryGetValue(param_2,&cf_RecoveryOSBuildIdentityOverride);
        if (lVar8 == 0) {
          local_58 = 0;
LAB_000ef061:
          iVar3 = _AMRAuthInstallSetFDRTrustObjectHash(lVar7,param_2);
          lVar8 = local_58;
          if (iVar3 == 0) {
            iVar3 = _AMRAuthInstallEnablePersonalization(lVar7,param_2);
            if (iVar3 == 0) {
              lVar8 = _AMRAuthInstallCopyVariant(lVar7,param_2);
              local_78 = 0;
              if (lVar8 == 0) {
                _AMRLog(3,&cf_Failedtoreadbuildvariant_);
              }
              else {
                iVar3 = _AMRAuthInstallCopyBuildIdentity(lVar7,param_2,lVar8,&local_78);
                if (local_78 == 0 || iVar3 != 0) {
                  _AMRLog(3,&cf_Failedtoreadbuildidentity_);
                  lVar7 = local_50;
                }
                else {
                  uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
                  lVar7 = _AMAuthInstallSupportGetValueForKeyPathInDict
                                    (uVar5,local_78,&cf_Info_RequiresNonceSlot);
                  if (lVar7 == *(long *)PTR__kCFBooleanTrue_00441110) {
                    local_48[0] = local_48[0] & 0xffffffff00000000;
                    local_84 = 2;
                    local_80 = _CFNumberCreate(uVar5,9);
                    uVar11 = _CFNumberCreate(uVar5,9,&local_84);
                    uVar5 = local_80;
                    _CFDictionarySetValue(lVar6,&cf_ApNonceSlotID,local_80);
                    _CFDictionarySetValue(lVar6,&cf_SepNonceSlotID,uVar11);
                    _CFRelease(uVar11);
                    _CFRelease(uVar5);
                    pcVar13 = &cf_Devicewillusenonceslots;
                  }
                  else {
                    pcVar13 = &cf_Devicewillnotusenonceslots;
                  }
                  _AMRLog(6,pcVar13);
                  lVar7 = local_50;
                  _CFRelease(local_78);
                }
                _CFRelease(lVar8);
              }
              iVar3 = __copyEnvironmentVariable(param_1,&cf_anid,&local_70);
              uVar5 = local_70;
              if (iVar3 == 0) {
                local_48[0] = 0;
                local_48[1] = 0;
                cVar2 = _CFStringGetCString(local_70,local_48,0x10,0x8000100);
                if (cVar2 == '\0') {
                  _AMRLog(6,&cf_Invalidanidset_willnotsetanidinIM4R);
                }
                else {
                  uVar12 = _strtol((char *)local_48,(char **)0x0,0x10);
                  _AMAuthInstallSupportDictionarySetInteger32
                            (lVar6,&cf_ApNonceSlotID,uVar12 & 0xffffffff);
                }
                _CFRelease(uVar5);
                local_70 = 0;
              }
              else {
                _AMRLog(6,&cf_Noanidset_willnotsetanidinIM4R);
              }
              *(long *)(param_1 + 200) = lVar7;
              iVar3 = 0;
              lVar8 = local_58;
            }
            else {
              _AMRLog(3,&cf__s_AMRAuthInstallEnablePersonalizationfailed,
                      "AMRecoveryModeDeviceConfigureAuthInstall");
              lVar8 = local_58;
            }
          }
        }
        else {
          lVar9 = _CFStringGetTypeID();
          lVar10 = _CFGetTypeID(lVar8);
          lVar7 = local_50;
          if (lVar9 != lVar10) {
            local_58 = 0;
            goto LAB_000ef061;
          }
          uVar5 = _CFGetAllocator(local_50);
          lVar8 = _AMAuthInstallSupportCreateURLFromString(uVar5,lVar8);
          if (lVar8 == 0) {
            _CFRelease(lVar7);
            iVar3 = 0x12;
            lVar8 = 0;
          }
          else {
            local_58 = lVar8;
            iVar3 = _AMAuthInstallBundleOverrideRecoveryOSBuildManifest(lVar7,lVar8);
            if (iVar3 == 0) goto LAB_000ef061;
            uVar5 = _AMAuthInstallGetLocalizedStatusString(lVar7,iVar3);
            _AMRLog(3,&cf_FailedtooverriderecoveryOSbuildmanifest___,uVar5);
            iVar3 = _AMAuthInstallToRestoreError(iVar3);
            _CFRelease(lVar7);
            lVar8 = local_58;
          }
        }
        _CFRelease(lVar6);
        lVar6 = lVar8;
        if (local_60 != 0) goto LAB_000ef2cb;
      }
      else {
        lVar9 = _CFStringGetTypeID();
        lVar10 = _CFGetTypeID(lVar8);
        lVar7 = local_50;
        if (lVar9 != lVar10) {
          local_60 = 0;
          goto LAB_000eefad;
        }
        uVar5 = _CFGetAllocator(local_50);
        lVar8 = _AMAuthInstallSupportCreateURLFromString(uVar5,lVar8);
        if (lVar8 == 0) {
          iVar3 = 0x12;
          goto LAB_000eeee7;
        }
        local_60 = lVar8;
        iVar3 = _AMAuthInstallBundleOverrideBuildManifest(lVar7,lVar8);
        if (iVar3 == 0) goto LAB_000eefad;
        lVar8 = 0;
        _AMRLog(3,&cf_Failedtobuildmanifestoverride);
        iVar3 = _AMAuthInstallToRestoreError(iVar3);
        _CFRelease(lVar7);
        _CFRelease(lVar6);
LAB_000ef2cb:
        _CFRelease(local_60);
        lVar6 = lVar8;
      }
      if (lVar6 == 0) goto LAB_000ef2dd;
    }
    else {
      _AMRLog(3,&cf_Failedtosetapparameters);
      iVar3 = _AMAuthInstallToRestoreError(iVar3);
LAB_000eeee7:
      _CFRelease(lVar7);
    }
  }
  _CFRelease(lVar6);
LAB_000ef2dd:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_48[2]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

