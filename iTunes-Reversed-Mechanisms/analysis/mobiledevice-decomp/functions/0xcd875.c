// rea decompile_all
// name: _AMRestorePerformRestoreModeRestoreWithError
// address: 0xcd875
// body: available
// range: 0xcd875-0xceea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcee51 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMRestorePerformRestoreModeRestoreWithError(__AMRestoreModeDevice*, __CFDictionary const*,
   __CFError**) */

bool _AMRestorePerformRestoreModeRestoreWithError
               (__AMRestoreModeDevice *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  __AMRestoreModeDevice *p_Var7;
  undefined8 uVar8;
  __CFError *p_Var9;
  __AMRestoreModeDevice *p_Var10;
  long lVar11;
  long lVar12;
  long lVar13;
  cfstringStruct *in_RCX;
  char *pcVar14;
  long *plVar15;
  __CFError **extraout_RDX;
  cfstringStruct *pcVar16;
  __CFDictionary *p_Var17;
  cfstringStruct *pcVar18;
  __CFString *p_Var19;
  undefined1 auVar20 [16];
  long local_150;
  __CFError *local_148;
  __AMRestoreModeDevice *local_140;
  long local_138;
  long local_130;
  __CFDictionary *local_128;
  long local_120;
  __AMRestoreModeDevice *local_118;
  __CFError *local_110;
  __CFString *local_108;
  long local_100;
  __CFDictionary *local_f8;
  long local_f0;
  cfstringStruct local_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  cfstringStruct cStack_80;
  cfstringStruct cStack_60;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_110 = (__CFError *)0x0;
  local_138 = 0;
  local_150 = 0;
  local_148 = (__CFError *)param_3;
  _AMRestoreCaptureSubsystemLogsIfNeeded();
  p_Var7 = *(__AMRestoreModeDevice **)PTR__kCFAllocatorDefault_004410e8;
  p_Var17 = (__CFDictionary *)0x0;
  p_Var10 = p_Var7;
  local_f8 = (__CFDictionary *)_CFDictionaryCreateMutableCopy(p_Var7,0,param_2);
  local_118 = param_1;
  if (local_f8 == (__CFDictionary *)0x0) {
    _AMRLog(3,&cf_unabletocreatemutablecopyofoptions);
    local_110 = (__CFError *)
                _AMRCreateErrorWithUnderlyingError
                          ((__CFString *)((long)&MACH_HEADER.ncmds + 2),0x45a590,(__CFString *)0x0,
                           (__CFError *)in_RCX);
    uVar2 = 0x12;
  }
  else {
    local_140 = p_Var7;
    if (_ipv6MayStarveDueTo99053849()::once != -1) {
      _initConnectionTypes(p_Var10,p_Var17);
    }
    p_Var17 = local_f8;
    lVar4 = *(long *)PTR__kCFBooleanTrue_00441110;
    lVar5 = *(long *)PTR__kCFBooleanFalse_00441108;
    lVar6 = lVar4;
    if (_ipv6MayStarveDueTo99053849()::ipv6MayStarve != '\0') {
      lVar6 = lVar5;
    }
    _CFDictionaryAddValue(local_f8,&cf_HostHasFixFor99053849,lVar6);
    if (*(long *)(param_1 + 0x150) != 0) goto LAB_000cd949;
    local_e8.field0_0x0 = 0;
    uVar8 = _CFGetAllocator(param_1);
    p_Var7 = (__AMRestoreModeDevice *)_AMAuthInstallCreate(uVar8);
    p_Var17 = local_f8;
    if (p_Var7 == (__AMRestoreModeDevice *)0x0) {
      uVar2 = 0x12;
LAB_000cdbfe:
      pcVar16 = &cf_failedtoconfigureauthinstall;
    }
    else {
      local_130 = lVar5;
      local_f0 = lVar4;
      lVar4 = _CFDictionaryGetValue(local_f8,&cf_UpdateBaseband);
      uVar2 = _AMRAuthInstallEnablePersonalization(p_Var7,p_Var17);
      if (uVar2 == 0) {
        uVar8 = _CFDictionaryGetValue(p_Var17,&cf_UserLocale);
        iVar3 = _AMAuthInstallSetLocale(p_Var7,uVar8);
        if (iVar3 != 0) {
          uVar2 = _AMAuthInstallToRestoreError(iVar3);
          pcVar14 = (char *)in_RCX;
          goto LAB_000cdb09;
        }
        uVar8 = _CFGetAllocator(param_1);
        pcVar14 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
        p_Var19 = (__CFString *)
                  _CFDictionaryCreateMutable(uVar8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
        if (p_Var19 == (__CFString *)0x0) {
          _AMRLog(3,&cf_Failedtocreateapparametersdict);
          _CFRelease(p_Var7);
          uVar2 = 0x12;
          goto LAB_000cdb09;
        }
        _AMAuthInstallSupportDictionarySetInteger64
                  (p_Var19,&cf_ECID,*(undefined8 *)(param_1 + 0xd8));
        _AMAuthInstallSupportDictionarySetInteger32
                  (p_Var19,&cf_ApChipID,*(undefined4 *)(param_1 + 0x90));
        _AMAuthInstallSupportDictionarySetInteger32
                  (p_Var19,&cf_ApBoardID,*(undefined4 *)(param_1 + 0x94));
        _AMAuthInstallSupportDictionarySetInteger32
                  (p_Var19,&cf_ApSecurityDomain,*(undefined4 *)(param_1 + 0xe4));
        _AMAuthInstallSupportDictionarySetBoolean(p_Var19,&cf_ApProductionMode,param_1[0xe8]);
        _AMAuthInstallSupportDictionarySetBoolean(p_Var19,&cf_ApSecurityMode,param_1[0xe9]);
        if (param_1[0xea] != (__AMRestoreModeDevice)0x0) {
          _CFDictionarySetValue(p_Var19,&cf_UIDMode,local_f0);
        }
        lVar5 = _CFDictionaryGetValue(local_f8,&cf_RequiresUIDMode);
        local_108 = p_Var19;
        if (lVar5 != 0) {
          lVar6 = _CFBooleanGetTypeID();
          lVar11 = _CFGetTypeID(lVar5);
          p_Var19 = local_108;
          if ((lVar6 == lVar11) && (cVar1 = _CFBooleanGetValue(lVar5), cVar1 != '\0')) {
            _CFDictionarySetValue(p_Var19,&cf_RequiresUIDMode,local_f0);
          }
        }
        lVar5 = _CFDictionaryGetValue(local_f8,&cf_UIDMode);
        if (lVar5 != 0) {
          lVar6 = _CFBooleanGetTypeID();
          lVar11 = _CFGetTypeID(lVar5);
          p_Var19 = local_108;
          if (lVar6 == lVar11) {
            _CFDictionarySetValue(local_108,&cf_UIDMode,lVar5);
          }
        }
        p_Var10 = local_118;
        _AMAuthInstallSupportDictionarySetBoolean(p_Var19,&cf_ApSupportsImg4,local_118[0xed]);
        _AMAuthInstallSupportDictionarySetBoolean
                  (p_Var19,&cf_ApEffectiveProductionMode,p_Var10[0xeb]);
        _AMAuthInstallSupportDictionarySetBoolean(p_Var19,&cf_ApEffectiveSecurityMode,p_Var10[0xec])
        ;
        if (*(long *)(p_Var10 + 0xf0) != 0) {
          _CFDictionarySetValue(p_Var19,&cf_ApSikaFuse);
        }
        lVar5 = _CFDictionaryGetValue(local_f8,&cf_AuthInstallAllowMixAndMatch);
        if (lVar5 != 0) {
          lVar6 = _CFBooleanGetTypeID();
          lVar11 = _CFGetTypeID(lVar5);
          p_Var19 = local_108;
          if ((lVar6 == lVar11) && (cVar1 = _CFBooleanGetValue(lVar5), cVar1 == '\x01')) {
            _CFDictionaryAddValue(p_Var19,&cf_ApAllowMixAndMatch,local_f0);
          }
        }
        lVar5 = _CFDictionaryGetValue(local_f8,&cf_AuthInstallDemotionPolicyOverride);
        if (lVar5 != 0) {
          pcVar14 = (char *)&_kAMAuthInstallApParameterDemotionPolicy;
          _CFDictionarySetValue(p_Var19,&cf_DemotionPolicy,lVar5);
        }
        iVar3 = _AMAuthInstallApSetParameters(p_Var7,p_Var19);
        if (iVar3 != 0) {
          uVar2 = _AMAuthInstallToRestoreError(iVar3);
          _AMRLog(3,&cf_Failedtosetapparameters);
          _CFRelease(p_Var7);
          goto LAB_000cdb17;
        }
        lVar5 = _CFDictionaryGetValue(local_f8,&cf_BuildIdentityOverride);
        if (lVar5 != 0) {
          lVar6 = _CFStringGetTypeID();
          lVar11 = _CFGetTypeID(lVar5);
          if (lVar6 != lVar11) goto LAB_000ce4a3;
          uVar8 = _CFGetAllocator(p_Var7);
          lVar5 = _AMAuthInstallSupportCreateURLFromString(uVar8,lVar5);
          if (lVar5 == 0) {
            _CFRelease(p_Var7);
            uVar2 = 0x12;
            goto LAB_000cdb17;
          }
          iVar3 = _AMAuthInstallBundleOverrideBuildManifest(p_Var7,lVar5);
          if (iVar3 == 0) goto LAB_000ce4a5;
          _AMRLog(3,&cf_Failedtobuildmanifestoverride);
          uVar2 = _AMAuthInstallToRestoreError(iVar3);
          _CFRelease(p_Var7);
          goto LAB_000cdb19;
        }
LAB_000ce4a3:
        lVar5 = 0;
LAB_000ce4a5:
        lVar6 = _CFDictionaryGetValue(local_f8,&cf_RecoveryOSBuildIdentityOverride);
        if (lVar6 != 0) {
          lVar11 = _CFStringGetTypeID();
          lVar12 = _CFGetTypeID(lVar6);
          if (lVar11 != lVar12) goto LAB_000ce580;
          uVar8 = _CFGetAllocator(p_Var7);
          lVar6 = _AMAuthInstallSupportCreateURLFromString(uVar8,lVar6);
          if (lVar6 == 0) {
            _CFRelease(p_Var7);
            uVar2 = 0x12;
            goto LAB_000cdb19;
          }
          iVar3 = _AMAuthInstallBundleOverrideRecoveryOSBuildManifest(p_Var7,lVar6);
          if (iVar3 == 0) goto LAB_000ce58a;
          local_100 = lVar6;
          uVar8 = _AMAuthInstallGetLocalizedStatusString(p_Var7,iVar3);
          _AMRLog(3,&cf_FailedtooverriderecoveryOSbuildmanifest___,uVar8);
          uVar2 = _AMAuthInstallToRestoreError(iVar3);
          _CFRelease(p_Var7);
          lVar4 = 0;
          goto LAB_000cdb24;
        }
LAB_000ce580:
        lVar6 = 0;
LAB_000ce58a:
        p_Var17 = local_f8;
        local_120 = lVar5;
        uVar2 = _AMRAuthInstallSetFDRTrustObjectHash(p_Var7,local_f8);
        local_100 = lVar6;
        if (uVar2 != 0) {
          lVar4 = 0;
          lVar5 = local_120;
          goto LAB_000cdb24;
        }
        iVar3 = _AMRAuthInstallAddUUID(p_Var7,p_Var17);
        if (iVar3 != 0) {
          _AMRLog(3,&cf_failedtoadduuid_devicewillnotprintuuid);
        }
        p_Var17 = local_f8;
        cVar1 = _AMRestoreOptionsAreLegacy(local_f8);
        lVar5 = local_120;
        if (cVar1 == '\0') {
LAB_000ce8b0:
          lVar11 = 0;
          lVar4 = 0;
          lVar6 = local_f0;
LAB_000ce8bd:
          lVar12 = _CFDictionaryGetValue(local_f8,&cf_BBUpdaterState);
          if ((lVar12 == 0) ||
             (iVar3 = _AMAuthInstallBasebandSetParametersWithUpdaterOutput(p_Var7,lVar12),
             iVar3 == 0)) {
            *(__AMRestoreModeDevice **)(local_118 + 0x150) = p_Var7;
            uVar2 = 0;
          }
          else {
            uVar2 = _AMAuthInstallToRestoreError(iVar3);
          }
        }
        else {
          lVar6 = _CFDictionaryGetValue(p_Var17,&cf_BasebandFirmware);
          pcVar14 = (char *)CONCAT71((int7)((ulong)pcVar14 >> 8),lVar4 != 0 && lVar6 == 0);
          if (lVar4 == 0 || lVar6 != 0) goto LAB_000ce8b0;
          cVar1 = _CFBooleanGetValue(lVar4);
          lVar6 = local_f0;
          if ((cVar1 != '\x01') ||
             ((cVar1 = _AMAuthInstallBasebandPersonalizationEnabled(p_Var7), cVar1 != '\0' &&
              (cVar1 = _AMAuthInstallBasebandPersonalizationRequired(p_Var7), cVar1 != '\0')))) {
LAB_000ce756:
            lVar11 = 0;
            lVar4 = 0;
            goto LAB_000ce8bd;
          }
          p_Var17 = local_f8;
          lVar4 = _AMRAuthInstallCopyVariant(p_Var7,local_f8);
          if (lVar4 == 0) {
            _AMRLog(3,&cf_noBuildIdentityspecified_skippingthebasebandupdate_);
            goto LAB_000ce756;
          }
          pcVar14 = (char *)&local_e8;
          p_Var10 = p_Var7;
          uVar2 = _AMRAuthInstallCopyBuildIdentity(p_Var7,p_Var17,lVar4);
          if (uVar2 == 0) {
            if (local_e8.field0_0x0 == 0) {
              _AMRestorePerformRestoreModeRestoreWithError(p_Var10,p_Var17,extraout_RDX);
              uVar2 = 0xbc6;
              goto LAB_000cee7a;
            }
            _AMRLog(5,&cf_Gettingbasebandfirmwarefromvariant___,lVar4);
            pcVar16 = (cfstringStruct *)_CFDictionaryGetValue(local_f8,&cf_SourceRestoreBundlePath);
            if (pcVar16 == (cfstringStruct *)0x0) {
              pcVar18 = &cf_RestoreBundlePath;
              p_Var17 = local_f8;
              auVar20 = _CFDictionaryGetValue();
              pcVar16 = auVar20._0_8_;
              if (pcVar16 == (cfstringStruct *)0x0) {
                _AMRestorePerformRestoreModeRestoreWithError
                          ((__AMRestoreModeDevice *)p_Var17,(__CFDictionary *)pcVar18,auVar20._8_8_)
                ;
                uVar2 = 1;
                lVar5 = local_120;
                goto LAB_000cdb24;
              }
            }
            p_Var10 = local_118;
            uVar8 = _CFGetAllocator(local_118);
            lVar5 = _AMAuthInstallSupportGetValueForKeyPathInDict
                              (uVar8,local_e8.field0_0x0,&cf_Manifest_BasebandFirmware_Info_Path);
            if (lVar5 == 0) {
              lVar11 = 0;
              lVar5 = local_120;
              lVar6 = local_f0;
            }
            else {
              p_Var10 = (__AMRestoreModeDevice *)_CFGetAllocator(p_Var10);
              p_Var17 = (__CFDictionary *)0x0;
              auVar20 = _CFStringCreateWithFormat(p_Var10,0,&cf____c__,pcVar16,0x2f,lVar5);
              lVar11 = auVar20._0_8_;
              if (lVar11 == 0) {
                _AMRestorePerformRestoreModeRestoreWithError(p_Var10,p_Var17,auVar20._8_8_);
                uVar2 = 0x12;
                pcVar14 = (char *)pcVar16;
                lVar5 = local_120;
                goto LAB_000cdb24;
              }
              pcVar14 = "_AMRestoreModeDeviceConfigureAuthInstall";
              _AMRLogWithFilePath(5,lVar11,&cf__s_settingcustomBbfwPath);
              _CFDictionarySetValue(local_f8,&cf_BasebandFirmware,lVar11);
              lVar5 = local_120;
              lVar6 = local_f0;
            }
            goto LAB_000ce8bd;
          }
          _AMRestorePerformRestoreModeRestoreWithError(p_Var10,p_Var17,extraout_RDX);
LAB_000cee7a:
          lVar11 = 0;
          lVar5 = local_120;
        }
      }
      else {
        _AMRLog(3,&cf__s_AMRAuthInstallEnablePersonalizationfailed,
                "_AMRestoreModeDeviceConfigureAuthInstall");
        pcVar14 = (char *)in_RCX;
LAB_000cdb09:
        local_108 = (__CFString *)0x0;
LAB_000cdb17:
        lVar5 = 0;
LAB_000cdb19:
        lVar4 = 0;
        local_100 = 0;
LAB_000cdb24:
        lVar11 = 0;
        lVar6 = local_f0;
      }
      in_RCX = (cfstringStruct *)pcVar14;
      if (local_e8.field0_0x0 != 0) {
        _CFRelease();
        in_RCX = (cfstringStruct *)pcVar14;
      }
      if (lVar11 != 0) {
        _CFRelease(lVar11);
      }
      if (lVar4 != 0) {
        _CFRelease(lVar4);
      }
      lVar4 = local_100;
      if (local_108 != (__CFString *)0x0) {
        _CFRelease();
      }
      param_1 = local_118;
      if (lVar5 != 0) {
        _CFRelease(lVar5);
      }
      if (lVar4 != 0) {
        _CFRelease(lVar4);
      }
      p_Var17 = local_f8;
      if (uVar2 != 0) goto LAB_000cdbfe;
      if (*(long *)(param_1 + 0x150) == 0) {
LAB_000cd949:
        lVar4 = _CFDictionaryGetValue(p_Var17,&cf_PersonalizedRestoreBundlePath);
        if (((lVar4 == 0) || (cVar1 = _AMRestoreOptionsAreLegacy(p_Var17), cVar1 == '\0')) ||
           (uVar2 = _AMRAuthInstallAlignOptionsToPersonalizedBundle(p_Var17,lVar4,0), uVar2 == 0)) {
          ___AFCSpinMonitorStop();
          _disconnectFromDevice(param_1);
          _initConnectionTypes(param_1,p_Var17);
          if ((*(long *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x78) == -1)) {
            in_RCX = (cfstringStruct *)0x0;
            _AMRestoreModeDeviceProgressAsync(param_1,3,-1,(__CFString *)0x0);
            iVar3 = _AMRestoreModeDeviceConnectToPortInternal(param_1,0xf27e,0.0,0xf);
            if (iVar3 != -1) {
              *(int *)(param_1 + 0x78) = iVar3;
              in_RCX = (cfstringStruct *)0x0;
              _AMRestoreModeDeviceProgressAsync(param_1,4,-1,(__CFString *)0x0);
              goto LAB_000cda36;
            }
            local_108 = (__CFString *)0x0;
            uVar2 = 2;
            _AMRLog(3,&cf_unabletoconnecttodevice__d,2);
            pcVar16 = &cf_unabletoconnecttodevice;
            p_Var19 = (__CFString *)((long)&MACH_HEADER.magic + 2);
            goto LAB_000cde89;
          }
LAB_000cda36:
          lVar5 = _copyValueQueryResultUsingSocket
                            (param_1,(__CFString *)&cf_SavedDebugInfo,*(int *)(param_1 + 0x78));
          if (lVar5 == 0) {
            _AMRLog(7,&cf_devicedidnotreturnsaveddebuginfo);
          }
          else {
            lVar6 = _CFDictionaryGetValue(lVar5,&cf_USBLog);
            if (lVar6 == 0) {
              _AMRLog(7,&cf_devicedidnotreturnsavedUSBlog);
            }
            else {
              _AMRLog(3,&cf_devicehadsavedUSBlogs___,lVar6);
            }
            lVar6 = _CFDictionaryGetValue(lVar5,&cf_PanicLog);
            if (lVar6 == 0) {
              _AMRLog(6,&cf_devicedidnotreturnsavedpaniclog);
            }
            else {
              _AMRLog(3,&cf_devicehadsavedpaniclogs___,lVar6);
            }
            lVar6 = _CFDictionaryGetValue(lVar5,&cf_PreviousExitStatus);
            if (lVar6 != 0) {
              _AMRLog(3,&cf_previousrestorefailedwithexitstatus__,lVar6);
            }
            _CFRelease(lVar5);
          }
          lVar5 = _CFDictionaryGetValue(p_Var17,&cf_RestoreBundlePath);
          if (lVar5 != 0) {
            local_e8.field0_0x0 = 0;
            uVar8 = 0;
            uVar2 = _AMRestoreCreatePathsForBundle(lVar5,0,0,0,0,0,0,&local_e8);
            in_RCX = (cfstringStruct *)
                     CONCAT71((int7)((ulong)uVar8 >> 8),local_e8.field0_0x0 != 0 && uVar2 == 0);
            if (local_e8.field0_0x0 != 0 && uVar2 == 0) {
              _CFDictionaryAddValue(p_Var17,&cf_FirmwareDirectory);
              _CFRelease(local_e8.field0_0x0);
            }
            else if (uVar2 != 0) {
              pcVar16 = &cf__resolveBundlePathOptionsforrestoremodefailed;
              goto LAB_000cdd5b;
            }
          }
          iVar3 = *(int *)(param_1 + 0x78);
          local_128 = (__CFDictionary *)0x0;
          uVar2 = _queryDeviceCapabilities(param_1,iVar3,&local_128);
          p_Var19 = (__CFString *)(ulong)uVar2;
          if (((uVar2 == 0) &&
              (p_Var19 = (__CFString *)((long)&MACH_HEADER.magic + 3), *(int *)(param_1 + 0x88) == 1
              )) && (p_Var19 = (__CFString *)&MACH_HEADER.cputype, 9 < *(int *)(param_1 + 0x130))) {
            uVar8 = _CFDictionaryGetValue(local_128,&cf_Result);
            lVar5 = _CFStringCompare(uVar8,&cf_UnsupportedHardware,0);
            p_Var19 = (__CFString *)((long)&MACH_HEADER.cputype + 1);
            param_1 = local_118;
            if (lVar5 != 0) {
              lVar5 = _CFStringCompare(uVar8,&cf_Success,0);
              param_1 = local_118;
              if (lVar5 == 0) {
                _AMSupportSafeRelease(*(undefined8 *)(local_118 + 0x148));
                _AMSupportSafeRelease(*(undefined8 *)(param_1 + 0x108));
                *(undefined8 *)(param_1 + 0x148) = 0;
                *(undefined8 *)(param_1 + 0x108) = 0;
                if (*(long *)(param_1 + 0xf8) == 0) {
                  uVar8 = _AMSupportSafeRetain(*(undefined8 *)(param_1 + 0x100));
                }
                else {
                  cStack_60.field1_0x8 = 0;
                  cStack_60.field2_0x10 = (undefined *)0x0;
                  cStack_80.field3_0x18 = 0;
                  cStack_60.field0_0x0 = 0;
                  cStack_80.field1_0x8 = 0;
                  cStack_80.field2_0x10 = (undefined *)0x0;
                  local_88 = 0;
                  cStack_80.field0_0x0 = 0;
                  local_98 = 0;
                  uStack_90 = 0;
                  local_a8 = 0;
                  uStack_a0 = 0;
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_c8 = 0;
                  uStack_c0 = 0;
                  local_e8.field2_0x10 = (undefined *)0x0;
                  local_e8.field3_0x18 = 0;
                  local_e8.field0_0x0 = 0;
                  local_e8.field1_0x8 = 0;
                  cStack_60.field3_0x18 = 0;
                  cVar1 = __AMRestoreGetDeviceMapEntryForHardware(p_Var17,param_1 + 0x90);
                  p_Var7 = local_140;
                  if (cVar1 != '\x01') {
                    _AMRLog(7,&cf_boardconfig___,*(undefined8 *)(param_1 + 0x108));
                    goto LAB_000cde43;
                  }
                  uVar8 = _CFStringCreateWithCString(local_140,&cStack_60,0x8000100);
                  *(undefined8 *)(param_1 + 0x148) = uVar8;
                  uVar8 = _CFStringCreateWithCString(p_Var7,&cStack_80,0x8000100);
                }
                *(undefined8 *)(param_1 + 0x108) = uVar8;
                _AMRLog(7,&cf_boardconfig___,uVar8);
                if (*(long *)(param_1 + 0x108) == 0) {
                  pcVar16 = &cf__copyDeviceProperty__failedforhardwaremodel;
                }
                else {
                  if (*(long *)(param_1 + 0x110) != 0) {
                    if (*(long *)(param_1 + 0x138) == 0) {
                      in_RCX = &cf_BootArgs;
                      lVar5 = _copyDeviceProperty(param_1,iVar3,local_128,(__CFString *)&cf_BootArgs
                                                 );
                      *(long *)(param_1 + 0x138) = lVar5;
                      if (lVar5 == 0) {
                        _AMRLog(4,&cf__copyDeviceProperty__failedforrestorebootargs);
                      }
                    }
                    p_Var19 = (__CFString *)0x0;
                    if (*(long *)(param_1 + 0x140) == 0) {
                      in_RCX = &cf_MarketingPartNumber;
                      lVar5 = _copyDeviceProperty(param_1,iVar3,local_128,
                                                  (__CFString *)&cf_MarketingPartNumber);
                      *(long *)(param_1 + 0x140) = lVar5;
                      if (lVar5 == 0) {
                        p_Var19 = (__CFString *)0x0;
                        _AMRLog(4,&cf__copyDeviceProperty__failedformpn);
                      }
                    }
                    goto LAB_000cde43;
                  }
                  pcVar16 = &cf__copyDeviceProperty__failedforserialnumber;
                }
                _AMRLog(3,pcVar16);
                p_Var19 = (__CFString *)((long)&MACH_HEADER.cpusubtype + 2);
              }
              else {
                _AMRLog(4,&cf_unrecognizedresult____intypequeryresponse,uVar8);
                p_Var19 = (__CFString *)((long)&MACH_HEADER.cpusubtype + 2);
                param_1 = local_118;
              }
            }
          }
LAB_000cde43:
          uVar2 = (uint)p_Var19;
          if (local_128 != (__CFDictionary *)0x0) {
            _CFRelease();
          }
          p_Var17 = local_f8;
          if ((uVar2 & 0xe) == 4) {
            pcVar16 = &cf_unsupportedhardwareorsoftwareondevice;
LAB_000cde7e:
            local_108 = (__CFString *)0x0;
            goto LAB_000cde89;
          }
          if (uVar2 != 0) {
            pcVar16 = &cf_failedtogetdeviceinformation;
            goto LAB_000cde7e;
          }
          uVar2 = _resolveSystemRestoreImageOptions(param_1,local_f8);
          if (uVar2 != 0) {
            pcVar16 = &cf__resolveSystemRestoreImageOptionsfailed;
            goto LAB_000cdd5b;
          }
          if (*(long *)(param_1 + 0x100) == 0) {
LAB_000ce91d:
            uVar2 = 0;
            _AMRLog(3,&cf_Failedtocopyboardconfig_can_tgetcorrectpaddingnow);
            local_110 = (__CFError *)
                        _AMRCreateErrorWithUnderlyingError
                                  ((__CFString *)0x0,0x45ca70,(__CFString *)0x0,(__CFError *)in_RCX)
            ;
            local_108 = (__CFString *)0x0;
            goto LAB_000cde97;
          }
          auVar20 = _AMRestoreCopyNormalizedBoardConfig();
          p_Var19 = auVar20._0_8_;
          if (p_Var19 == (__CFString *)0x0) goto LAB_000ce91d;
          uVar2 = _checkAndAdjustSystemPartitionSize
                            (p_Var19,(__AMRestoreModeDevice *)p_Var17,auVar20._8_8_);
          local_108 = p_Var19;
          if (uVar2 == 0) {
            local_f0 = __AMRestoreCopySystemPartitionPaddingDictionary(p_Var19,p_Var17);
            if (local_f0 == 0) {
              _AMRLog(4,&cf_Nopaddingdictionaryfoundinrestorebundle_Continuing___);
            }
            else {
              _CFDictionaryAddValue(p_Var17,&cf_SystemPartitionPadding,local_f0);
            }
            lVar5 = _AMRAuthInstallCopyVariant(*(undefined8 *)(param_1 + 0x150),p_Var17);
            _AMRAuthInstallCopyPersonalizedBundleURL(p_Var17,&local_150);
            local_100 = lVar5;
            lVar5 = _AMAuthInstallBundleGetManifestEntry
                              (*(undefined8 *)(param_1 + 0x150),&cf_Manifest_SEP_Info,lVar5,
                               local_150,0);
            if ((lVar5 != 0) &&
               (lVar5 = _CFDictionaryGetValue(lVar5,&cf_RequiredCapacity), lVar5 != 0)) {
              _CFDictionaryAddValue(p_Var17,&cf_TZ0RequiredCapacity,lVar5);
            }
            lVar5 = _AMRestoreReverseProxyContextCreate(param_1);
            lVar6 = _RPCreateSocksProxyWithCallback(_AMRestoreReverseProxyConnect,lVar5,0x43a);
            if (lVar6 == 0) {
              _AMRLog(4,&cf_UnabletoconfigureSOCKSproxyfordevice);
            }
            else {
              _AMRLog(4,&cf_EstablishedSOCKSproxyfordevice);
              local_e8.field0_0x0 = CONCAT44(local_e8.field0_0x0._4_4_,3);
              lVar11 = _CFDictionaryGetValue(p_Var17,&cf_PRPLogLevel);
              if (lVar11 != 0) {
                lVar12 = _CFGetTypeID(lVar11);
                lVar13 = _CFNumberGetTypeID();
                if (lVar12 == lVar13) {
                  _CFNumberGetValue(lVar11,9,&local_e8);
                  _AMRLog(6,&cf_OverridingPurpleReverseProxyloglevelwith_d,
                          local_e8.field0_0x0 & 0xffffffff);
                }
              }
              _RPSocksProxySetLogCallback
                        (lVar6,local_e8.field0_0x0 & 0xffffffff,_AMRProxyLog,local_118);
              _CFRetain(lVar5);
              _CFRetain(lVar6);
              _RPSocksProxySetDoneCallback(lVar6,_AMRestoreReverseProxyDone,lVar5);
              _RPSocksProxyStart(lVar6);
            }
            lVar11 = _restored_get_supported_message_types();
            lVar12 = _restored_get_supported_data_types();
            local_130 = _restored_get_supported_async_data_types();
            local_120 = _restored_get_supported_protocols();
            if (lVar11 != 0) {
              _CFDictionaryAddValue(local_f8,&cf_SupportedMessageTypes,lVar11);
              _CFRelease(lVar11);
            }
            p_Var17 = local_f8;
            if (lVar12 != 0) {
              _CFDictionaryAddValue(local_f8,&cf_SupportedDataTypes,lVar12);
              _CFRelease(lVar12);
            }
            lVar12 = local_120;
            lVar11 = local_130;
            if (local_130 != 0) {
              _CFDictionaryAddValue(p_Var17,&cf_SupportedAsyncDataTypes);
              p_Var17 = local_f8;
              _CFRelease(lVar11);
            }
            if (lVar12 != 0) {
              _CFDictionaryAddValue(p_Var17,&cf_SupportedHostProtocols,lVar12);
              _CFRelease(lVar12);
            }
            p_Var7 = local_118;
            lVar11 = *(long *)(local_118 + 0x1b8);
            if (lVar11 == 0) {
              lVar11 = _CFDictionaryCreateMutable
                                 (local_140,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              *(long *)(p_Var7 + 0x1b8) = lVar11;
            }
            cVar1 = _AMRestoreAttestationShouldAttest
                              (*(undefined8 *)(p_Var7 + 0x150),p_Var17,lVar11);
            pcVar16 = &cf_Restoresecurityattestation_UNAVAILABLE;
            if (cVar1 != '\0') {
              pcVar16 = &cf_Restoresecurityattestation_AVAILABLE;
            }
            uVar2 = 0;
            _AMRLog(6,pcVar16);
            cVar1 = _performRestore(p_Var7,local_f8,&local_110);
            if (cVar1 == '\0') {
              uVar2 = _CFErrorGetCode(local_110);
            }
            goto LAB_000cdeb5;
          }
          local_f0 = 0;
          _AMRLog(3,&cf__checkAndAdjustSystemPartitionSizefailed);
          local_110 = (__CFError *)
                      _AMRCreateErrorWithUnderlyingError
                                ((__CFString *)(long)(int)uVar2,0x45ca90,(__CFString *)0x0,
                                 (__CFError *)in_RCX);
        }
        else {
          pcVar16 = &cf_failedtoalignoptionswithpersonalizedbundle;
LAB_000cdd5b:
          local_108 = (__CFString *)0x0;
          _AMRLog(3,pcVar16);
          p_Var19 = (__CFString *)(long)(int)uVar2;
LAB_000cde89:
          local_110 = (__CFError *)
                      _AMRCreateErrorWithUnderlyingError
                                (p_Var19,(long)pcVar16,(__CFString *)0x0,(__CFError *)in_RCX);
LAB_000cde97:
          local_f0 = 0;
        }
        lVar6 = 0;
        lVar5 = 0;
        local_100 = 0;
        goto LAB_000cdeb5;
      }
      in_RCX = (cfstringStruct *)0x0;
      _AMRestoreModeDeviceProgressAsync(param_1,0x2d,-1,(__CFString *)0x0);
      uVar2 = _AMRAuthInstallPersonalizeBundle(*(undefined8 *)(param_1 + 0x150),p_Var17);
      p_Var17 = local_f8;
      lVar4 = local_130;
      if (uVar2 == 0) {
        if (*(long *)(param_1 + 0x150) != 0) {
          plVar15 = &local_138;
          iVar3 = _AMRAuthInstallCopyURLForKey
                            (*(long *)(param_1 + 0x150),local_f8,&cf_Diags,plVar15);
          lVar5 = _CFDictionaryGetValue(p_Var17,&cf_InstallDiags);
          in_RCX = (cfstringStruct *)CONCAT71((int7)((ulong)plVar15 >> 8),iVar3 == 0);
          if ((local_138 == 0 || lVar5 == lVar4) || iVar3 != 0) {
            _CFDictionarySetValue(p_Var17,&cf_InstallDiags,lVar4);
            param_1 = local_118;
            if (lVar5 != lVar4) {
              _AMRLog(4,&cf_overwriteInstallDiagstofalse);
            }
          }
          else {
            _CFDictionarySetValue(p_Var17,&cf_InstallDiags,lVar6);
            param_1 = local_118;
          }
        }
        goto LAB_000cd949;
      }
      pcVar16 = &cf_failedtopersonalizebundle;
    }
    _AMRLog(3,pcVar16);
    local_110 = (__CFError *)
                _AMRCreateErrorWithUnderlyingError
                          ((__CFString *)(long)(int)uVar2,(long)pcVar16,(__CFString *)0x0,
                           (__CFError *)in_RCX);
  }
  lVar4 = 0;
  local_108 = (__CFString *)0x0;
  local_f0 = 0;
  lVar6 = 0;
  lVar5 = 0;
  local_100 = 0;
LAB_000cdeb5:
  p_Var7 = local_118;
  _disconnectFromDevice(local_118);
  p_Var17 = local_f8;
  *(undefined8 *)(p_Var7 + 0x10) = 0;
  *(undefined8 *)(p_Var7 + 0x18) = 0;
  *(undefined8 *)(p_Var7 + 0x20) = 0;
  if ((lVar4 != 0) && (uVar2 != 0)) {
    _AMRAuthInstallDeletePersonalizedBundle(lVar4,local_f8);
  }
  if (lVar6 != 0) {
    _RPSocksProxyInvalidate(lVar6);
    _CFRelease(lVar6);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_108 != (__CFString *)0x0) {
    _CFRelease();
  }
  p_Var7 = local_118;
  if (local_f0 != 0) {
    _CFRelease();
  }
  if (p_Var17 != (__CFDictionary *)0x0) {
    _CFRelease(p_Var17);
  }
  if (local_138 != 0) {
    _CFRelease();
  }
  if (local_100 != 0) {
    _CFRelease();
  }
  if (local_150 != 0) {
    _CFRelease();
  }
  if (uVar2 == 0) {
    _AMRLog(6,&cf____Restoresucceeded,p_Var7);
  }
  else {
    _AMRLog(3,&cf____Restorefailed_result__d_,p_Var7,uVar2);
    if (local_148 == (__CFError *)0x0) {
      if (local_110 != (__CFError *)0x0) {
        _CFRelease(local_110);
      }
    }
    else {
      p_Var9 = local_110;
      if (local_110 == (__CFError *)0x0) {
        p_Var9 = (__CFError *)
                 _AMRCreateErrorWithUnderlyingError
                           ((__CFString *)(long)(int)uVar2,0x45cc50,(__CFString *)0x0,local_148);
      }
      *(__CFError **)local_148 = p_Var9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2 == 0;
}

