// rea decompile_all
// name: __AMRAuthInstallPersonalizeBundleInternal
// address: 0xf760a
// body: available
// range: 0xf760a-0xf8e8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf8ce0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRAuthInstallPersonalizeBundleInternal(long param_1,long param_2,undefined4 param_3)

{
  cfstringStruct *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  long local_4c0;
  long local_4b8;
  undefined4 local_4ac;
  long local_4a8;
  long local_4a0;
  long local_498;
  long local_490;
  long local_488;
  long local_480;
  long local_478;
  cfstringStruct *local_470;
  long local_468;
  long local_460;
  char local_451;
  long local_450;
  long local_448;
  long local_440;
  long local_438 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_490 = 0;
  local_4a8 = 0;
  local_498 = 0;
  local_451 = '\0';
  local_4c0 = 0;
  _pthread_once((pthread_once_t *)&__AMRAuthInstallInitializeOnce,__AMRAuthInstallInitialize);
  if (param_1 == 0) {
    __AMRAuthInstallPersonalizeBundleInternal_cold_6();
LAB_000f811b:
    iVar3 = 1;
    local_480 = 0;
    local_488 = 0;
LAB_000f78ce:
    local_468 = 0;
    local_478 = 0;
    lVar5 = 0;
    local_460 = 0;
    local_450 = 0;
    lVar11 = 0;
    lVar6 = 0;
  }
  else {
    iVar3 = 1;
    if (param_2 == 0) goto LAB_000f811b;
    cVar2 = _AMAuthInstallApPersonalizationEnabled(param_1);
    if ((cVar2 != '\0') ||
       (cVar2 = _AMAuthInstallBasebandPersonalizationEnabled(param_1), cVar2 != '\0')) {
      lVar5 = _AMRAuthInstallCopyVariant(param_1,param_2);
      _AMRLog(6,&cf_requestedvariant___,lVar5);
      lVar6 = _CFDictionaryGetValue(param_2,&cf_SourceRestoreBundlePath);
      local_4ac = param_3;
      local_488 = lVar5;
      if ((lVar6 != 0) || (lVar6 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath), lVar6 != 0)
         ) {
        local_470 = *(cfstringStruct **)PTR__kCFAllocatorDefault_004410e8;
        local_4b8 = lVar6;
        local_480 = _CFURLCreateWithFileSystemPath(local_470,lVar6,0,1);
        iVar3 = 0x12;
        if (local_480 == 0) {
          local_480 = 0;
          local_468 = 0;
          lVar5 = 0;
          local_478 = 0;
          local_450 = 0;
          lVar11 = 0;
          lVar6 = 0;
          local_460 = 0;
          goto LAB_000f78df;
        }
        local_440 = param_1;
        lVar7 = _CFDictionaryGetValue(param_2,&cf_PersonalizedRestoreBundlePath);
        if (lVar7 == 0) {
          iVar4 = _AMAuthInstallSupportCopyURLToNewTempDirectory
                            (local_470,"PersonalizedRestoreBundle.XXXXXXXXXX",&local_490);
          if (iVar4 == 0) {
            uVar8 = _CFGetAllocator(local_440);
            lVar7 = _AMRestoreCreatePathFromURL(uVar8,local_490);
            if (lVar7 != 0) {
              local_448 = param_2;
              _CFDictionarySetValue(param_2,&cf_PersonalizedRestoreBundlePath,lVar7);
              goto LAB_000f7a2e;
            }
          }
          else {
            __AMRAuthInstallPersonalizeBundleInternal_cold_9();
            iVar3 = 0xb;
          }
          goto LAB_000f78ce;
        }
        local_448 = param_2;
        _CFRetain(lVar7);
        lVar6 = 0;
        local_490 = _CFURLCreateWithFileSystemPath(local_470,lVar7,0,1);
        iVar3 = 0x12;
        lVar11 = 0;
        local_450 = 0;
        local_478 = 0;
        lVar5 = 0;
        local_468 = 0;
        local_460 = lVar7;
        if (local_490 == 0) {
LAB_000f7811:
          _AMRAuthInstallDeletePersonalizedBundle(local_460,local_448);
        }
        else {
LAB_000f7a2e:
          lVar5 = local_448;
          local_460 = lVar7;
          _CFDictionarySetValue(local_448,&cf_SourceRestoreBundlePath,local_4b8);
          lVar6 = local_440;
          iVar3 = _AMRAuthInstallConfigureUsingOptions(local_440,lVar5,lVar5,&local_451);
          if (iVar3 != 0) {
            local_478 = 0;
LAB_000f7a88:
            lVar11 = 0;
            lVar6 = 0;
            local_450 = 0;
            lVar5 = 0;
            local_468 = 0;
            goto LAB_000f7811;
          }
          lVar11 = _CFDictionaryGetValue(lVar5,&cf_RequestedEntitlements);
          iVar3 = 0;
          if (lVar11 == 0) {
            local_478 = 0;
LAB_000f7b73:
            cVar2 = _AMSupportCFDictionaryGetBoolean(lVar5,&cf_SelectMediumSecurityBootPolicy,0);
            if (cVar2 == '\0') {
              uVar10 = 0xffffffffffffffff;
              do {
                if (uVar10 == 8) goto LAB_000f7ba8;
                cVar2 = _AMSupportCFDictionaryGetBoolean(lVar5,(&DAT_00447370)[uVar10],0);
                uVar10 = uVar10 + 1;
              } while (cVar2 == '\0');
              if (uVar10 < 9) goto LAB_000f7b8c;
            }
            else {
LAB_000f7b8c:
              _AMAuthInstallSetApRequestEntry
                        (lVar6,&cf_Ap_EngineeringUseOnlyUnit,
                         *(undefined8 *)PTR__kCFBooleanTrue_00441110);
            }
LAB_000f7ba8:
            lVar11 = _CFDictionaryGetValue(lVar5,&cf_RequestDisablePlatformOnlyCode);
            if (lVar11 != 0) {
              lVar7 = _CFGetTypeID(lVar11);
              lVar9 = _CFBooleanGetTypeID();
              if ((lVar7 == lVar9) && (cVar2 = _CFBooleanGetValue(lVar11), cVar2 == '\x01')) {
                _AMAuthInstallSetApRequestEntry
                          (lVar6,&cf_Ap_DisablePlatformOnlyCode,
                           *(undefined8 *)PTR__kCFBooleanTrue_00441110);
              }
            }
            lVar11 = _CFDictionaryGetValue(lVar5,&cf_RequestFactoryPrereleaseGlobalTrust);
            if (lVar11 != 0) {
              lVar7 = _CFGetTypeID(lVar11);
              lVar9 = _CFBooleanGetTypeID();
              if ((lVar7 == lVar9) && (cVar2 = _CFBooleanGetValue(lVar11), cVar2 == '\x01')) {
                _AMAuthInstallSetApRequestEntry
                          (lVar6,&cf_Ap_FactoryPrereleaseGlobalTrust,
                           *(undefined8 *)PTR__kCFBooleanTrue_00441110);
              }
            }
            lVar11 = _CFDictionaryGetValue(lVar5,&cf_RequestInternalUseOnlyUnit);
            if (lVar11 != 0) {
              lVar7 = _CFGetTypeID(lVar11);
              lVar9 = _CFBooleanGetTypeID();
              if ((lVar7 == lVar9) && (cVar2 = _CFBooleanGetValue(lVar11), cVar2 == '\x01')) {
                _AMAuthInstallSetApRequestEntry
                          (lVar6,&cf_Ap_InternalUseOnlyUnit,
                           *(undefined8 *)PTR__kCFBooleanTrue_00441110);
              }
            }
            lVar11 = _CFDictionaryGetValue(lVar5,&cf_RequestRestoreSecurityOverrides0);
            if (lVar11 != 0) {
              lVar7 = _CFGetTypeID(lVar11);
              lVar9 = _CFNumberGetTypeID();
              if (lVar7 == lVar9) {
                _AMAuthInstallSetApRequestEntry(lVar6,&cf_Ap_RestoreSecurityOverrides0,lVar11);
              }
            }
            lVar11 = _CFDictionaryGetValue(lVar5,&cf_BasebandEnableCalibration);
            if (lVar11 != 0) {
              lVar7 = _CFGetTypeID(lVar11);
              lVar9 = _CFBooleanGetTypeID();
              if (((lVar7 == lVar9) && (cVar2 = _CFBooleanGetValue(lVar11), cVar2 == '\x01')) &&
                 (iVar3 = _AMAuthInstallSetBbRequestEntry
                                    (lVar6,&cf_BbCalibrationEnable,
                                     *(undefined8 *)PTR__kCFBooleanTrue_00441110), iVar3 != 0)) {
                iVar3 = _AMAuthInstallToRestoreError(iVar3);
                local_468 = 0;
                goto LAB_000f7d99;
              }
            }
            lVar6 = _CFDictionaryGetValue(lVar5,&cf_FusingServerURL);
            if (lVar6 != 0) {
              lVar6 = _CFURLCreateWithString(local_470,lVar6,0);
              if (lVar6 == 0) {
                iVar3 = 0x12;
                goto LAB_000f7a88;
              }
              iVar3 = _AMAuthInstallSetFusingServerURL(local_440,lVar6);
              lVar5 = local_448;
              if (iVar3 == 0) goto LAB_000f7e1b;
LAB_000f7d8f:
              iVar3 = _AMAuthInstallToRestoreError(iVar3);
              local_468 = lVar6;
              goto LAB_000f7d99;
            }
            lVar6 = 0;
LAB_000f7e1b:
            iVar3 = _AMRAuthInstallSetFusingRootCA(local_440,lVar5);
            local_448 = lVar5;
            if (iVar3 != 0) {
              __AMRAuthInstallPersonalizeBundleInternal_cold_1();
              local_468 = lVar6;
              goto LAB_000f7d99;
            }
            lVar11 = _CFDictionaryGetValue(lVar5,&cf_BasebandEnableActivationBypass);
            if (lVar11 != 0) {
              lVar7 = _CFGetTypeID(lVar11);
              lVar9 = _CFBooleanGetTypeID();
              if (((lVar7 == lVar9) && (cVar2 = _CFBooleanGetValue(lVar11), cVar2 == '\x01')) &&
                 (iVar3 = _AMAuthInstallSetBbRequestEntry
                                    (local_440,&cf_BbActivationBypassEnable,
                                     *(undefined8 *)PTR__kCFBooleanTrue_00441110), iVar3 != 0))
              goto LAB_000f7d8f;
            }
            iVar3 = _AMRAuthInstallAddUUID(local_440,lVar5);
            if (iVar3 != 0) {
              _AMRLog(3,&cf_failedtoadduuid_devicewillnotprintuuid);
            }
            _AMAuthInstallSetDebugFlags(local_440,2);
            lVar11 = _CFDictionaryGetValue(lVar5,&cf_BasebandProvisioningKeyID);
            local_468 = lVar6;
            if (lVar11 != 0) {
              local_438[0] = 0;
              iVar4 = _AMAuthInstallSupportCopyDataFromHexString(local_470,lVar11,local_438);
              iVar3 = 0x1f;
              if (local_438[0] != 0 && iVar4 == 0) {
                iVar4 = _AMAuthInstallBasebandSetKeyHash
                                  (local_440,&cf_BbProvisioningManifestKeyHash);
                _CFRelease(local_438[0]);
                iVar3 = 1;
                if (iVar4 == 0) goto LAB_000f7f59;
              }
LAB_000f8101:
              lVar6 = 0;
              lVar11 = 0;
              local_450 = 0;
              lVar5 = 0;
              goto LAB_000f7811;
            }
LAB_000f7f59:
            lVar11 = _CFDictionaryGetValue(lVar5,&cf_BasebandActivationKeyID);
            if (lVar11 != 0) {
              local_438[0] = 0;
              iVar4 = _AMAuthInstallSupportCopyDataFromHexString(local_470,lVar11,local_438);
              iVar3 = 0x1f;
              if (local_438[0] != 0 && iVar4 == 0) {
                iVar4 = _AMAuthInstallBasebandSetKeyHash(local_440,&cf_BbActivationManifestKeyHash);
                _CFRelease(local_438[0]);
                iVar3 = 1;
                if (iVar4 == 0) goto LAB_000f7fdb;
              }
              goto LAB_000f8101;
            }
LAB_000f7fdb:
            lVar11 = _CFDictionaryGetValue(lVar5,&cf_BasebandCalibrationKeyID);
            if (lVar11 != 0) {
              local_438[0] = 0;
              iVar4 = _AMAuthInstallSupportCopyDataFromHexString(local_470,lVar11,local_438);
              iVar3 = 0x1f;
              if (local_438[0] != 0 && iVar4 == 0) {
                iVar4 = _AMAuthInstallBasebandSetKeyHash(local_440,&cf_BbCalibrationManifestKeyHash)
                ;
                _CFRelease(local_438[0]);
                iVar3 = 1;
                if (iVar4 == 0) goto LAB_000f805d;
              }
              goto LAB_000f8101;
            }
LAB_000f805d:
            uVar8 = _CFDictionaryGetValue(lVar5,&cf_UserLocale);
            iVar3 = _AMAuthInstallSetLocale(local_440,uVar8);
            if (iVar3 != 0) goto LAB_000f7d8f;
            lVar6 = _CFDictionaryGetValue(lVar5,&cf_BasebandFactoryActivationKeyID);
            if (lVar6 != 0) {
              local_438[0] = 0;
              iVar4 = _AMAuthInstallSupportCopyDataFromHexString(local_470,lVar6,local_438);
              iVar3 = 0x1f;
              if (local_438[0] != 0 && iVar4 == 0) {
                iVar4 = _AMAuthInstallBasebandSetKeyHash
                                  (local_440,&cf_BbFactoryActivationManifestKeyHash);
                _CFRelease(local_438[0]);
                iVar3 = 1;
                lVar5 = local_448;
                if (iVar4 == 0) goto LAB_000f8164;
              }
              goto LAB_000f8101;
            }
LAB_000f8164:
            lVar6 = _CFDictionaryGetValue(lVar5,&cf_BasebandJtagEnable);
            if (lVar6 == 0) {
LAB_000f81c0:
              cVar2 = __AMRAuthInstallGetBooleanOptionOrPreference
                                (lVar5,0,&cf_BasebandEnableFactoryDebug);
              if ((cVar2 != '\0') &&
                 (iVar3 = _AMAuthInstallSetBbRequestEntry
                                    (local_440,&cf_BbFactoryDebugEnable,
                                     *(undefined8 *)PTR__kCFBooleanTrue_00441110), iVar3 != 0))
              goto LAB_000f81f9;
              lVar5 = _CFDictionaryGetValue(local_448,&cf_CertifySEP);
              if (lVar5 == 0) {
LAB_000f8258:
                bVar12 = false;
              }
              else {
                lVar6 = _CFBooleanGetTypeID();
                lVar11 = _CFGetTypeID(lVar5);
                if (lVar6 != lVar11) goto LAB_000f8258;
                cVar2 = _CFBooleanGetValue(lVar5);
                bVar12 = cVar2 == '\x01';
              }
              lVar5 = local_448;
              cVar2 = __AMRAuthInstallFDRSupported(local_440,local_448);
              if ((cVar2 != '\0') || (bVar12)) {
                lVar5 = _CFDictionaryGetValue(lVar5,&cf_FDRSkipSealing);
                if (lVar5 != 0) {
                  lVar6 = _CFGetTypeID(lVar5);
                  lVar11 = _CFBooleanGetTypeID();
                  if (((lVar6 == lVar11) && (cVar2 = _CFBooleanGetValue(lVar5), cVar2 == '\x01')) &&
                     (iVar3 = _AMAuthInstallSetFDRRequestEntry
                                        (local_440,&cf_FDRAllowUnsealed,
                                         *(undefined8 *)PTR__kCFBooleanTrue_00441110), iVar3 != 0))
                  goto LAB_000f81f9;
                }
                lVar5 = _CFDictionaryGetValue(local_448,&cf_FDRAllowUnsealedData);
                if (lVar5 != 0) {
                  lVar6 = _CFGetTypeID(lVar5);
                  lVar11 = _CFBooleanGetTypeID();
                  if (((lVar6 == lVar11) && (cVar2 = _CFBooleanGetValue(lVar5), cVar2 == '\x01')) &&
                     (iVar3 = _AMAuthInstallSetFDRRequestEntry
                                        (local_440,&cf_FDRAllowUnsealed,
                                         *(undefined8 *)PTR__kCFBooleanTrue_00441110), iVar3 != 0))
                  goto LAB_000f81f9;
                }
                lVar5 = _CFDictionaryGetValue(local_448,&cf_FDRAllowIncompleteData);
                if (lVar5 != 0) {
                  lVar6 = _CFGetTypeID(lVar5);
                  lVar11 = _CFBooleanGetTypeID();
                  if (((lVar6 == lVar11) && (cVar2 = _CFBooleanGetValue(lVar5), cVar2 == '\x01')) &&
                     (iVar3 = _AMAuthInstallSetFDRRequestEntry
                                        (local_440,&cf_FDRAllowIncomplete,
                                         *(undefined8 *)PTR__kCFBooleanTrue_00441110), iVar3 != 0))
                  goto LAB_000f81f9;
                }
                uVar8 = _CFStringGetTypeID();
                lVar5 = local_448;
                __AMRAuthInstallApplyCFPreferencesOverride(local_448,&cf_FDRCAURL,uVar8);
                uVar8 = _CFStringGetTypeID();
                __AMRAuthInstallApplyCFPreferencesOverride(lVar5,&cf_FDRDataStoreURL,uVar8);
                uVar8 = _CFStringGetTypeID();
                __AMRAuthInstallApplyCFPreferencesOverride(lVar5,&cf_FDRSealingURL,uVar8);
                uVar8 = _CFStringGetTypeID();
                __AMRAuthInstallApplyCFPreferencesOverride(lVar5,&cf_FDRTrustObjectURL,uVar8);
                uVar8 = _CFStringGetTypeID();
                __AMRAuthInstallApplyCFPreferencesOverride(lVar5,&cf_FDRTrustObjectFile,uVar8);
                uVar8 = _CFBooleanGetTypeID();
                __AMRAuthInstallApplyCFPreferencesOverride(lVar5,&cf_FDRSkipSealing,uVar8);
                uVar8 = _CFBooleanGetTypeID();
                __AMRAuthInstallApplyCFPreferencesOverride(lVar5,&cf_FDRForceSealing,uVar8);
                uVar8 = _CFBooleanGetTypeID();
                __AMRAuthInstallApplyCFPreferencesOverride(lVar5,&cf_FDRAllowUnsealedData,uVar8);
                uVar8 = _CFBooleanGetTypeID();
                __AMRAuthInstallApplyCFPreferencesOverride(lVar5,&cf_FDRAllowIncompleteData,uVar8);
                uVar8 = _CFBooleanGetTypeID();
                __AMRAuthInstallApplyCFPreferencesOverride(lVar5,&cf_FDRDisableSSLValidation,uVar8);
                uVar8 = _CFBooleanGetTypeID();
                __AMRAuthInstallApplyCFPreferencesOverride(lVar5,&cf_FDRSkipDataPreservation,uVar8);
              }
              lVar5 = _CFDictionaryGetValue(lVar5,&cf_ApRequestEntries);
              if (lVar5 != 0) {
                _CFDictionaryApplyFunction(lVar5,__AMRAuthInstallApplyApEntries,local_440);
              }
              lVar5 = _CFDictionaryGetValue(local_448,&cf_BbRequestEntries);
              if (lVar5 != 0) {
                _CFDictionaryApplyFunction(lVar5,__AMRAuthInstallApplyBbEntries,local_440);
              }
              lVar5 = _CFDictionaryGetValue(local_448,&cf_ObjectRequestEntries);
              if (lVar5 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = _CFDictionaryGetValue(local_448,&cf_RestoreSEP);
              }
              lVar11 = _CFDictionaryGetValue(local_448,&cf_FDREnableShenanigansDeprecated);
              if (lVar11 == 0) {
LAB_000f8576:
                if (local_451 != '\x01') goto LAB_000f8620;
                if (local_498 != 0) {
                  _CFRelease();
                  local_498 = 0;
                }
                iVar3 = _AMAuthInstallApCopyParameters(local_440,&local_498);
                if (iVar3 != 0) goto LAB_000f8620;
                lVar11 = _CFDictionaryGetValue(local_498,&cf_SepNonce);
                lVar7 = _CFDictionaryGetValue(local_498,&cf_ApProductionMode);
                if (lVar7 == 0 || lVar11 == 0) goto LAB_000f8620;
                lVar11 = _CFGetTypeID(lVar7);
                lVar9 = _CFBooleanGetTypeID();
                if ((lVar11 != lVar9) || (cVar2 = _CFBooleanGetValue(lVar7), cVar2 != '\0'))
                goto LAB_000f8620;
                _AMRLog(5,&
                          cf_RequestingEnableSEPIdentityCreationentitlementforShenanigansfordevelopmentSoCwithSEP
                       );
                if (lVar6 == 0) {
                  local_450 = _CFDictionaryCreateMutable
                                        (local_470,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                }
                else {
                  local_450 = _CFDictionaryCreateMutableCopy(local_470,0,lVar6);
                }
                if (local_450 == 0) {
                  __AMRAuthInstallPersonalizeBundleInternal_cold_4();
                  iVar3 = 0x12;
                  goto LAB_000f8101;
                }
                _CFDictionaryAddValue
                          (local_450,&cf_EnableSEPIdentityCreation,
                           *(undefined8 *)PTR__kCFBooleanTrue_00441110);
                if (lVar5 == 0) {
                  lVar5 = _CFDictionaryCreateMutable
                                    (local_470,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                }
                else {
                  lVar5 = _CFDictionaryCreateMutableCopy(local_470,0,lVar5);
                }
                if (lVar5 != 0) {
                  _CFDictionaryAddValue(lVar5,&cf_RestoreSEP,local_450);
                  _CFDictionaryApplyFunction(lVar5,__AMRAuthInstallApplyObjectEntries,local_440);
                  _CFRelease(lVar5);
                  goto LAB_000f8646;
                }
                __AMRAuthInstallPersonalizeBundleInternal_cold_3();
                iVar3 = 0x12;
LAB_000f8e6b:
                lVar6 = 0;
                lVar5 = 0;
LAB_000f890b:
                lVar11 = 0;
                goto LAB_000f7811;
              }
              lVar7 = _CFGetTypeID(lVar11);
              lVar9 = _CFBooleanGetTypeID();
              if ((lVar7 != lVar9) || (cVar2 = _CFBooleanGetValue(lVar11), cVar2 == '\x01'))
              goto LAB_000f8576;
LAB_000f8620:
              if (lVar5 != 0) {
                _CFDictionaryApplyFunction(lVar5,__AMRAuthInstallApplyObjectEntries,local_440);
              }
              local_450 = 0;
LAB_000f8646:
              lVar6 = local_448;
              pcVar1 = local_470;
              lVar11 = _AMSupportGetValueForKeyPathInDict
                                 (local_470,local_448,&cf_BoraOptions_ForceDisableSSMAChecks);
              lVar5 = *(long *)PTR__kCFBooleanTrue_00441110;
              lVar6 = _AMSupportGetValueForKeyPathInDict
                                (pcVar1,lVar6,&cf_BoraOptions_ForceEnableSSMAChecks);
              local_4a0 = lVar5;
              if (lVar6 == lVar5 && lVar11 == lVar5) {
                __AMRAuthInstallPersonalizeBundleInternal_cold_2();
                iVar3 = 1;
                goto LAB_000f8e6b;
              }
              if (lVar11 == lVar5) {
                _AMRLog(6,&cf_AddingSEP_DisableStrongSSMAChecksentitlementbasedonBoraOptions_);
LAB_000f8783:
                lVar5 = _CFDictionaryCreateMutable
                                  (local_470,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                if (lVar5 == 0) {
                  iVar3 = 0x12;
                  goto LAB_000f8e6b;
                }
                _CFDictionaryAddValue(lVar5,&cf_DisableStrongSSMAChecks,local_4a0);
                _AMAuthInstallSetObjectRequestEntry(local_440,&cf_SEP,lVar5);
                _AMSupportSafeRelease(lVar5);
              }
              else if (lVar6 != lVar5) {
                local_438[0] = 0;
                _AMRAuthInstallCopyBuildIdentity(local_440,local_448,local_488,local_438);
                if (local_438[0] != 0) {
                  lVar5 = _AMSupportGetValueForKeyPathInDict
                                    (local_470,local_438[0],&cf_Info_DeviceClass);
                  bVar12 = true;
                  if ((lVar5 != 0) && (cVar2 = _CFStringHasSuffix(lVar5,&cf_dev), cVar2 != '\0')) {
                    lVar5 = _AMRAuthInstallBundleSupportsProductType(local_440,local_448);
                    if (lVar5 == 0) {
                      iVar3 = -1;
                      goto LAB_000f8e6b;
                    }
                    if (lVar5 == local_4a0) {
                      bVar12 = false;
                      _AMRLog(6,&
                                cf_AutomaticallyaddingSEP_DisableStrongSSMAChecksentitlementforadevboard_
                             );
                    }
                  }
                  if (local_438[0] != 0) {
                    _CFRelease();
                  }
                  if (!bVar12) goto LAB_000f8783;
                }
              }
              lVar5 = _CFDictionaryGetValue(local_448,&cf_OptionalFirmware);
              if (lVar5 != 0) {
                lVar6 = _CFDictionaryGetTypeID();
                lVar11 = _CFGetTypeID(lVar5);
                if (lVar6 == lVar11) {
                  _CFDictionaryApplyFunction(lVar5,__AMRAuthInstallApplyOptionalFirmware,local_440);
                }
              }
              lVar5 = _CFDictionaryGetValue(local_448,&cf_BasebandFirmware);
              if (lVar5 == 0) {
                lVar5 = 0;
LAB_000f88a9:
                lVar6 = _CFDictionaryGetValue(local_448,&cf_BasebandAntennaType);
                if (((lVar6 != 0) &&
                    (iVar3 = _AMAuthInstallBasebandSetAntennaType(local_440,lVar6), iVar3 != 0)) ||
                   ((lVar6 = _CFDictionaryGetValue(local_448,&cf_BasebandBehavior), lVar6 != 0 &&
                    (iVar3 = _AMAuthInstallBasebandSetBehavior(local_440,lVar6), iVar3 != 0)))) {
                  iVar3 = 1;
                  lVar6 = 0;
                  goto LAB_000f890b;
                }
                iVar3 = _AMRAuthInstallSetBundleOverridesFromOptions(local_440,local_448);
                if (iVar3 != 0) goto LAB_000f89e8;
                lVar6 = _CFDictionaryGetValue(local_448,&cf_RelaxedImageVerification);
                if (((lVar6 != 0) && (cVar2 = _CFBooleanGetValue(lVar6), cVar2 == '\x01')) &&
                   (iVar3 = _AMAuthInstallApEnableRelaxedImageVerification(local_440,1), iVar3 != 0)
                   ) goto LAB_000f889b;
                lVar6 = _CFDictionaryGetValue(local_448,&cf_AuthInstallDisableSymlinks);
                if (lVar6 != 0) {
                  lVar11 = _CFBooleanGetTypeID();
                  lVar7 = _CFGetTypeID(lVar6);
                  if (((lVar11 == lVar7) && (cVar2 = _CFBooleanGetValue(lVar6), cVar2 == '\x01')) &&
                     (iVar3 = _AMAuthInstallBundleAllowLinks(local_440,0), iVar3 != 0)) {
                    _AMRLog(3,&cf_AMAuthInstallBundleAllowLinksfailed);
                    iVar3 = _AMAuthInstallToRestoreError(iVar3);
                    goto LAB_000f89e8;
                  }
                }
                lVar6 = _CFDictionaryGetValue(local_448,&cf_InstallRecoveryOS);
                if ((lVar6 != 0) && (cVar2 = _CFBooleanGetValue(lVar6), cVar2 == '\0')) {
LAB_000f8a1f:
                  lVar7 = 0;
                  lVar11 = 0;
                  lVar6 = 0;
LAB_000f8a25:
                  iVar3 = __AMRAuthInstallCreateLazyBundleFiles
                                    (local_440,local_480,local_488,local_448);
                  lVar9 = local_440;
                  if (iVar3 == 0) {
                    _AMRLog(8,&cf_personalizing___,local_440);
                    iVar3 = _AMAuthInstallBundlePersonalizeWithRecoveryOS
                                      (lVar9,local_480,local_490,local_488,lVar11,lVar7);
                    if ((char)local_4ac == '\x01' && iVar3 == 0) {
                      iVar3 = _AMAuthInstallBundlePersonalizeRestoreLocalPolicy
                                        (local_440,local_490,0,0);
                      local_470 = &cf_localpolicy;
                    }
                    else {
                      local_470 = &cf_restorebundle;
                    }
                    lVar7 = local_440;
                    if (iVar3 == 0) {
                      iVar3 = _AMAuthInstallBundleCopyPersonalizediBootEANFirmwareURLs
                                        (local_440,local_490,local_488,&local_4c0);
                      if ((local_4c0 != 0 && iVar3 == 0) &&
                         (lVar7 = _CFDictionaryGetCount(), lVar7 == 0)) {
                        _CFDictionarySetValue(local_448,&cf_iBootEANNuke,local_4a0);
                        _AMRLog(6,&cf_SettingkAMRestoreOptionsiBootEANNuke_);
                      }
                      _CFDictionarySetValue(local_448,&cf_RestoreBundlePath,local_460);
                      iVar3 = 0;
                      if (lVar6 == 0) {
                        lVar6 = 0;
                      }
                      else {
                        _CFDictionarySetValue(local_448,&cf_RecoveryOSBundlePath,lVar6);
                      }
                      goto LAB_000f78df;
                    }
                    __AMRAuthInstallRegisterLocalizedServerError(local_440,iVar3);
                    uVar8 = _AMAuthInstallGetLocalizedStatusString(lVar7,iVar3);
                    _AMRLog(3,&cf_failedtopersonalizethe_____,local_470,uVar8);
                    if (iVar3 == 4) {
                      _AMRLogWithFilePath(3,local_4b8,&cf_Sourcepath);
                      _AMRLogWithFilePath(3,local_460,&cf_Destinationpath);
                    }
                  }
                  iVar3 = _AMAuthInstallToRestoreError(iVar3);
                  goto LAB_000f7da3;
                }
                lVar7 = _AMRAuthInstallCopyRecoveryOSVariant(local_440,local_448);
                if (lVar7 == 0) {
                  _AMRLog(4,&cf_Couldn_tfindrecoveryOSvariant_continuewithoutrecoveryOSinstall);
                  _CFDictionarySetValue
                            (local_448,&cf_InstallRecoveryOS,
                             *(undefined8 *)PTR__kCFBooleanFalse_00441108);
                  goto LAB_000f8a1f;
                }
                uVar8 = _CFGetAllocator(local_440);
                lVar6 = _CFStringCreateWithFormat(uVar8,0,&cf____RecoveryOS,local_460);
                lVar11 = local_448;
                _CFDictionarySetValue(local_448,&cf_PersonalizedRecoveryOSBundlePath,lVar6);
                lVar11 = _CFDictionaryGetValue(lVar11,&cf_RecoveryOSSourceBundlePath);
                if (lVar11 != 0) {
                  lVar11 = _CFURLCreateWithFileSystemPath(local_470,lVar11,0,1);
                  if (lVar11 == 0) {
                    iVar3 = 0x12;
                    goto LAB_000f890b;
                  }
                  goto LAB_000f8a25;
                }
                __AMRAuthInstallPersonalizeBundleInternal_cold_5();
                iVar3 = 8;
                goto LAB_000f890b;
              }
              _AMRLogWithFilePath(5,lVar5,&cf_custombasebandfirmwarespecified);
              lVar5 = _CFURLCreateWithFileSystemPath(local_470,lVar5,0,0);
              if (lVar5 == 0) {
                iVar3 = 0x1f;
                goto LAB_000f8e6b;
              }
              iVar3 = _AMAuthInstallBundleOverrideEntry(local_440,&cf_BasebandFirmware,lVar5);
              if (iVar3 == 0) goto LAB_000f88a9;
LAB_000f889b:
              iVar3 = _AMAuthInstallToRestoreError(iVar3);
LAB_000f89e8:
              lVar11 = 0;
              lVar6 = 0;
            }
            else {
              lVar11 = _CFGetTypeID(lVar6);
              lVar7 = _CFBooleanGetTypeID();
              if (((lVar11 != lVar7) || (cVar2 = _CFBooleanGetValue(lVar6), cVar2 != '\x01')) ||
                 (iVar3 = _AMAuthInstallSetBbRequestEntry
                                    (local_440,&cf_BbJtagEnable,
                                     *(undefined8 *)PTR__kCFBooleanTrue_00441110), iVar3 == 0))
              goto LAB_000f81c0;
LAB_000f81f9:
              iVar3 = _AMAuthInstallToRestoreError(iVar3);
              lVar5 = 0;
              local_450 = 0;
              lVar11 = 0;
              lVar6 = 0;
            }
          }
          else {
            ___bzero(local_438,0x400);
            uVar8 = _CFGetAllocator(lVar6);
            local_478 = _CFURLCreateWithString(uVar8,lVar11,0);
            if ((local_478 != 0) &&
               (cVar2 = _CFURLGetFileSystemRepresentation(local_478,1,local_438,0x400),
               cVar2 != '\0')) {
              uVar8 = _CFGetAllocator(lVar6);
              lVar7 = _CFStringCreateWithFileSystemRepresentation(uVar8,local_438);
              if (lVar7 != 0) {
                iVar3 = __AMRestoreCreateCFArrayWithContentsOfFile(lVar7,&local_4a8);
                _CFRelease(lVar7);
              }
            }
            if (local_4a8 != 0) {
              _CFDictionaryApplyFunction(local_4a8,_AMAuthInstallApplyRequestEntries,lVar6);
              goto LAB_000f7b73;
            }
            _AMRLog(3,&cf_Couldnotcreateentitlementsdictionaryfrom__,lVar11);
            local_468 = 0;
LAB_000f7d99:
            lVar5 = 0;
            local_450 = 0;
            lVar11 = 0;
            lVar6 = 0;
          }
LAB_000f7da3:
          if (iVar3 != 0) goto LAB_000f7811;
          iVar3 = 0;
        }
        bVar12 = true;
        goto LAB_000f78ed;
      }
      __AMRAuthInstallPersonalizeBundleInternal_cold_8();
      local_480 = 0;
      goto LAB_000f78ce;
    }
    __AMRAuthInstallPersonalizeBundleInternal_cold_7();
    local_480 = 0;
    local_460 = 0;
    local_468 = 0;
    lVar5 = 0;
    local_478 = 0;
    local_488 = 0;
    local_450 = 0;
    lVar11 = 0;
    lVar6 = 0;
    iVar3 = 0;
  }
LAB_000f78df:
  bVar12 = local_460 != 0;
LAB_000f78ed:
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  if (bVar12) {
    _CFRelease(local_460);
  }
  lVar6 = local_468;
  if (local_480 != 0) {
    _CFRelease();
  }
  if (local_490 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_4a8 != 0) {
    _CFRelease();
  }
  lVar5 = local_488;
  if (local_498 != 0) {
    _CFRelease();
  }
  if (local_478 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_450 != 0) {
    _CFRelease();
  }
  if (local_4c0 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

