// rea decompile_all
// name: ___thr_AMRestorablePersonalizeSendFile
// address: 0x16b403
// body: available
// range: 0x16b403-0x16c23e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorablePersonalizeSendFile(long *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  cfstringStruct *pcVar18;
  long *plVar19;
  bool bVar20;
  bool bVar21;
  long local_a8;
  long local_a0;
  char local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  char local_49;
  long local_48;
  ulong local_40;
  long *local_38;
  
  local_80 = 0;
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar17 = *param_1;
  if (lVar17 == 0) {
    pcVar18 = &cf_Can_tsendfilewithNULLpersonalizedobject;
LAB_0016c12b:
    lVar15 = 0;
LAB_0016bfec:
    lVar6 = 0;
    lVar14 = 0;
LAB_0016bfef:
    plVar19 = param_1 + 5;
LAB_0016bff3:
    *(undefined1 *)plVar19 = 0;
  }
  else {
    lVar14 = *(long *)(lVar17 + 0x10);
    if (lVar14 == 0) {
      pcVar18 = &cf_Can_tsendfilewithNULLdevice;
      goto LAB_0016c12b;
    }
    lVar6 = param_1[1];
    if (lVar6 == 0) {
      pcVar18 = &cf_Can_tsendfilewithNULLtag;
      goto LAB_0016c12b;
    }
    local_90 = param_1[2];
    if (local_90 == 0) {
      pcVar18 = &cf_Can_tsendfilewithNULLcommand;
      goto LAB_0016c12b;
    }
    local_49 = (char)param_1[3];
    local_38 = param_1;
    if (*(char *)(lVar17 + 0x28) != '\x01') {
      uVar16 = *(undefined8 *)(lVar17 + 0x18);
      local_a8 = 0;
      if (*(long *)(lVar14 + 0x20) != 0) {
        lVar15 = *(long *)(lVar14 + 0x50);
        if (lVar15 == 0) {
LAB_0016c0bf:
          bVar20 = false;
          local_78 = 0;
          local_70 = 0;
          lVar14 = 0;
        }
        else {
          uVar7 = _CFGetAllocator(lVar14);
          lVar8 = _AMAuthInstallCreate(uVar7);
          if (lVar8 == 0) goto LAB_0016c0bf;
          local_60 = lVar17;
          local_48 = lVar8;
          _AMAuthInstallLogSetHandler(__AMRestorableAuthInstallLogHandler);
          uVar7 = _CFGetAllocator(lVar14);
          lVar17 = _CFDictionaryCreateMutable
                             (uVar7,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          iVar3 = __AMDeviceProxyGetFusingInfo(*(undefined8 *)(lVar14 + 0x20));
          iVar4 = __AMDeviceProxyGetEffectiveFusingInfo(*(undefined8 *)(lVar14 + 0x20));
          uVar7 = __AMDeviceProxyGetECID(*(undefined8 *)(lVar14 + 0x20));
          _AMAuthInstallSupportDictionarySetInteger64(lVar17,&cf_ECID,uVar7);
          uVar5 = __AMDeviceProxyGetChipID(*(undefined8 *)(lVar14 + 0x20));
          _AMAuthInstallSupportDictionarySetInteger32(lVar17,&cf_ApChipID,uVar5);
          uVar5 = __AMDeviceProxyGetBoardID(*(undefined8 *)(lVar14 + 0x20));
          _AMAuthInstallSupportDictionarySetInteger32(lVar17,&cf_ApBoardID,uVar5);
          _AMAuthInstallSupportDictionarySetInteger32(lVar17,&cf_ApSecurityDomain,1);
          _AMAuthInstallSupportDictionarySetBoolean(lVar17,&cf_ApProductionMode,iVar3 == 2);
          _AMAuthInstallSupportDictionarySetBoolean(lVar17,&cf_ApSecurityMode,iVar3 == 1);
          _AMAuthInstallSupportDictionarySetBoolean(lVar17,&cf_ApEffectiveSecurityMode,iVar4 == 2);
          local_88 = lVar17;
          _AMAuthInstallSupportDictionarySetBoolean(lVar17,&cf_ApEffectiveProductionMode,iVar4 == 1)
          ;
          if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
            uVar1 = 0;
            AMDeviceProxy::Log(0,(__CFString *)((long)&MACH_HEADER.magic + 3),
                               &cf_failedtoget_sfrom_s,"image4 awareness","NULL proxy");
          }
          else {
            uVar1 = (**(code **)(**(long **)(lVar14 + 0x20) + 0x60))();
          }
          lVar8 = local_88;
          _AMAuthInstallSupportDictionarySetBoolean(local_88,&cf_ApSupportsImg4,uVar1);
          iVar3 = __AMDeviceProxyGetState();
          lVar17 = local_60;
          if (iVar3 == 1) {
            _CFDictionaryAddValue(lVar8,&cf_ApInRomDFU,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
          }
          plVar19 = *(long **)(lVar14 + 0x20);
          if (plVar19 == (long *)0x0) {
            pcVar9 = "NULL proxy";
            plVar19 = (long *)0x0;
LAB_0016b816:
            local_78 = 0;
            AMDeviceProxy::Log((int)plVar19,(__CFString *)((long)&MACH_HEADER.magic + 3),
                               &cf_failedtoget_sfrom_s,"ap nonce",pcVar9);
          }
          else {
            local_78 = (**(code **)(*plVar19 + 0x50))(plVar19);
            if (local_78 == 0) {
              pcVar9 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19);
              goto LAB_0016b816;
            }
            _CFDictionaryAddValue(lVar8,&cf_ApNonce,local_78);
          }
          plVar19 = *(long **)(lVar14 + 0x20);
          if (plVar19 == (long *)0x0) {
            pcVar9 = "NULL proxy";
            plVar19 = (long *)0x0;
LAB_0016b89f:
            local_70 = 0;
            AMDeviceProxy::Log((int)plVar19,(__CFString *)((long)&MACH_HEADER.magic + 3),
                               &cf_failedtoget_sfrom_s,"sep nonce",pcVar9);
          }
          else {
            local_70 = (**(code **)(*plVar19 + 0x58))(plVar19);
            if (local_70 == 0) {
              pcVar9 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19);
              goto LAB_0016b89f;
            }
            _CFDictionaryAddValue(lVar8,&cf_SepNonce,local_70);
          }
          lVar10 = _CFDictionaryGetValue(lVar15,&cf_AuthInstallAllowMixAndMatch);
          if (lVar10 != 0) {
            lVar11 = _CFBooleanGetTypeID();
            lVar12 = _CFGetTypeID(lVar10);
            lVar8 = local_88;
            if (lVar11 == lVar12) {
              _CFDictionaryAddValue(local_88,&cf_ApAllowMixAndMatch,lVar10);
            }
          }
          lVar10 = _CFDictionaryGetValue(lVar15,&cf_AuthInstallDemotionPolicyOverride);
          if (lVar10 != 0) {
            _CFDictionarySetValue(lVar8,&cf_DemotionPolicy,lVar10);
          }
          iVar3 = _AMAuthInstallApSetParameters(local_48,lVar8);
          if (iVar3 == 0) {
            lVar8 = _CFDictionaryGetValue(lVar15,&cf_UpdateBaseband);
            cVar2 = _CFDictionaryContainsKey(lVar15,&cf_AuthInstallVariant);
            if (cVar2 == '\0') {
              cVar2 = _CFDictionaryContainsKey(lVar15,&cf_AuthInstallRestoreBehavior);
              bVar20 = cVar2 == '\0';
            }
            else {
              bVar20 = false;
            }
            if (lVar8 == 0 || bVar20) {
              local_40 = local_40 & 0xffffffff00000000;
            }
            else {
              uVar7 = _CFBooleanGetValue(lVar8);
              local_40 = CONCAT44(local_40._4_4_,
                                  (int)CONCAT71((int7)((ulong)uVar7 >> 8),(char)uVar7 != '\0'));
            }
            if (bVar20) {
              _AMRSafeLog(6,&cf_Appersonalizationdisabled_);
            }
            lVar8 = local_48;
            iVar3 = _AMAuthInstallApEnablePersonalization(local_48,!bVar20);
            if (iVar3 != 0) goto LAB_0016c153;
            lVar17 = _CFDictionaryGetValue(lVar15,&cf_AuthInstallRequestTicketWithoutNonce);
            if (lVar17 == 0) {
              bVar20 = false;
            }
            else {
              lVar8 = _CFGetTypeID(lVar17);
              lVar10 = _CFBooleanGetTypeID();
              if (lVar8 == lVar10) {
                cVar2 = _CFBooleanGetValue(lVar17);
                bVar20 = cVar2 == '\x01';
                lVar8 = local_48;
              }
              else {
                bVar20 = false;
                lVar8 = local_48;
              }
            }
            lVar17 = _CFDictionaryGetValue(lVar15,&cf_SkipNoncesForAPSEP);
            if (lVar17 == 0) {
              bVar21 = false;
            }
            else {
              lVar8 = _CFGetTypeID(lVar17);
              lVar10 = _CFBooleanGetTypeID();
              if (lVar8 == lVar10) {
                cVar2 = _CFBooleanGetValue(lVar17);
                bVar21 = cVar2 == '\x01';
                lVar8 = local_48;
              }
              else {
                bVar21 = false;
                lVar8 = local_48;
              }
            }
            if ((bVar21 || bVar20) &&
               (iVar3 = _AMAuthInstallBundleRequestTicketWithoutNonce(lVar8,1), iVar3 != 0)) {
              bVar20 = false;
              local_40 = 0;
              lVar8 = 0;
              lVar10 = 0;
              param_1 = local_38;
              lVar17 = local_60;
            }
            else {
              bVar20 = (char)local_40 != '\0';
              if (!bVar20) {
                _AMRSafeLog(6,&cf_Basebandpersonalizationisdisabled);
              }
              iVar3 = _AMAuthInstallBasebandEnablePersonalization(lVar8,bVar20);
              lVar17 = local_60;
              if (iVar3 != 0) {
                _AMRLog(3,&cf__s_AMAuthInstallBasebandEnablePersonalizationfailed,
                        "_AMRestorableEnablePersonalization");
                goto LAB_0016c153;
              }
              lVar10 = _CFDictionaryGetValue(lVar15,&cf_BuildIdentityOverride);
              if (lVar10 == 0) {
                local_58 = 0;
LAB_0016bb34:
                lVar10 = _CFDictionaryGetValue(lVar15,&cf_RecoveryOSBuildIdentityOverride);
                if (lVar10 == 0) {
                  local_68 = 0;
LAB_0016bbae:
                  _AMAuthInstallSetDebugFlags(lVar8,2);
                  lVar10 = _CFDictionaryGetValue(lVar15,&cf_BundleOverrides);
                  if (lVar10 != 0) {
                    _CFDictionaryApplyFunction
                              (lVar10,__AMRestorableAuthInstallApplyBundleOverride,lVar8);
                  }
                  lVar8 = _CFDictionaryGetValue(lVar15,&cf_AuthInstallEnableSso);
                  if (lVar8 == 0) {
LAB_0016bc7d:
                    uVar13 = 0;
LAB_0016bc80:
                    lVar17 = _CFDictionaryGetValue(lVar15,&cf_AuthInstallSigningServerURL);
                    if (lVar17 != 0) {
                      lVar8 = _CFGetTypeID(lVar17);
                      lVar10 = _CFStringGetTypeID();
                      if (lVar8 == lVar10) {
                        if (uVar13 != 0) {
                          _CFRelease(uVar13);
                        }
                        uVar13 = _CFRetain(lVar17);
                      }
                    }
                    lVar17 = local_60;
                    if ((uVar13 == 0) &&
                       (uVar13 = _CFPreferencesCopyAppValue
                                           (&cf_AuthInstallSigningServerURL,
                                            *(undefined8 *)
                                             PTR__kCFPreferencesCurrentApplication_00441170),
                       uVar13 == 0)) {
                      uVar7 = _CFGetAllocator(lVar14);
                      uVar13 = _CFStringCreateCopy(uVar7,&cf_http___spidercab_8080);
                      if (uVar13 == 0) goto LAB_0016c0e5;
                    }
                    uVar7 = _CFGetAllocator(lVar14);
                    local_40 = uVar13;
                    lVar8 = _CFURLCreateWithString(uVar7,uVar13,0);
                    lVar11 = 0;
                    if ((lVar8 == 0) ||
                       (iVar3 = _AMAuthInstallSetSigningServerURL(local_48,lVar8), lVar11 = lVar8,
                       iVar3 != 0)) goto LAB_0016c175;
                    lVar17 = _CFDictionaryGetValue(lVar15,&cf_UUID);
                    if (lVar17 == 0) {
                      uVar7 = _CFGetAllocator(lVar14);
                      lVar17 = _CFUUIDCreate(uVar7);
                      if (lVar17 == 0) {
                        bVar20 = false;
                        lVar10 = 0;
                        lVar17 = local_60;
                        goto LAB_0016be75;
                      }
                      uVar7 = _CFGetAllocator(lVar14);
                      lVar11 = _CFUUIDCreateString(uVar7,lVar17);
                      if (lVar11 == 0) {
                        lVar11 = 0;
                      }
                      else {
                        _CFDictionarySetValue(lVar15,&cf_UUID,lVar11);
                        iVar3 = _AMAuthInstallSetUUID(local_48,lVar11);
                        if (iVar3 == 0) {
                          uVar7 = _CFGetAllocator(lVar14);
                          iVar3 = _AMAuthInstallSupportCopyURLToNewTempDirectory
                                            (uVar7,"PersonalizedBundle_XXXXXX",&local_a8);
                          if ((iVar3 == 0) &&
                             (lVar10 = _CFURLCopyFileSystemPath(local_a8,0), lVar10 != 0)) {
                            _CFDictionarySetValue(lVar15,&cf_PersonalizedRestoreBundlePath,lVar10);
                            goto LAB_0016be21;
                          }
                        }
                      }
                      lVar10 = 0;
                      bVar20 = false;
LAB_0016be51:
                      _CFRelease(lVar17);
                    }
                    else {
                      lVar17 = 0;
                      lVar11 = 0;
                      lVar10 = 0;
LAB_0016be21:
                      lVar14 = _CFDictionaryGetValue(lVar15,&cf_UserLocale);
                      if ((lVar14 == 0) ||
                         (iVar3 = _AMAuthInstallSetLocale(local_48,lVar14), iVar3 == 0)) {
                        bVar20 = true;
                      }
                      else {
                        bVar20 = false;
                      }
                      if (lVar17 != 0) goto LAB_0016be51;
                    }
                    lVar17 = local_60;
                    if (lVar11 != 0) {
                      _CFRelease(lVar11);
                      lVar17 = local_60;
                    }
                  }
                  else {
                    lVar10 = _CFGetTypeID(lVar8);
                    lVar11 = _CFBooleanGetTypeID();
                    if ((lVar10 != lVar11) ||
                       (cVar2 = _CFBooleanGetValue(lVar8), lVar8 = local_48, cVar2 == '\0'))
                    goto LAB_0016bc7d;
                    iVar3 = _AMAuthInstallSsoInitialize(0);
                    if (iVar3 != 0) goto LAB_0016c0e5;
                    iVar3 = _AMAuthInstallSsoEnable(lVar8);
                    if (iVar3 == 0) {
                      uVar7 = _CFGetAllocator(lVar14);
                      uVar13 = _CFStringCreateCopy(uVar7,&cf_https___gs_apple_com_443);
                      if (uVar13 == 0) goto LAB_0016bc5b;
                      goto LAB_0016bc80;
                    }
LAB_0016bc5b:
                    bVar20 = false;
                    local_40 = 0;
                    lVar10 = 0;
                    lVar8 = 0;
                    lVar17 = local_60;
                  }
                }
                else {
                  lVar11 = _CFStringGetTypeID();
                  lVar12 = _CFGetTypeID(lVar10);
                  lVar8 = local_48;
                  if (lVar11 != lVar12) {
                    local_68 = 0;
                    goto LAB_0016bbae;
                  }
                  uVar7 = _CFGetAllocator(local_48);
                  local_68 = _AMAuthInstallSupportCreateURLFromString(uVar7,lVar10);
                  if (local_68 == 0) {
                    local_68 = 0;
                  }
                  else {
                    iVar3 = _AMAuthInstallBundleOverrideRecoveryOSBuildManifest(lVar8,local_68);
                    if (iVar3 == 0) goto LAB_0016bbae;
                  }
LAB_0016c0e5:
                  local_40 = 0;
                  lVar11 = 0;
LAB_0016c175:
                  bVar20 = false;
                  lVar10 = 0;
                  lVar8 = lVar11;
                }
LAB_0016be75:
                param_1 = local_38;
                if (local_58 != 0) goto LAB_0016be7a;
              }
              else {
                lVar11 = _CFStringGetTypeID();
                lVar12 = _CFGetTypeID(lVar10);
                lVar8 = local_48;
                if (lVar11 != lVar12) {
                  local_58 = 0;
                  goto LAB_0016bb34;
                }
                uVar7 = _CFGetAllocator(local_48);
                lVar10 = _AMAuthInstallSupportCreateURLFromString(uVar7,lVar10);
                if (lVar10 == 0) goto LAB_0016c153;
                local_58 = lVar10;
                iVar3 = _AMAuthInstallBundleOverrideBuildManifest(lVar8,lVar10);
                if (iVar3 == 0) goto LAB_0016bb34;
                lVar10 = 0;
                lVar8 = 0;
                local_40 = 0;
                local_68 = 0;
                bVar20 = false;
LAB_0016be7a:
                param_1 = local_38;
                _CFRelease(local_58);
              }
              if (local_68 != 0) {
                _CFRelease();
              }
            }
          }
          else {
LAB_0016c153:
            bVar20 = false;
            local_40 = 0;
            lVar8 = 0;
            lVar10 = 0;
            param_1 = local_38;
          }
          if (local_88 != 0) {
            _CFRelease();
          }
          if (local_40 != 0) {
            _CFRelease();
          }
          if (lVar8 != 0) {
            _CFRelease(lVar8);
          }
          lVar14 = local_48;
          if (lVar10 != 0) {
            _CFRelease(lVar10);
            lVar14 = local_48;
          }
        }
        if (local_a8 != 0) {
          _CFRelease();
        }
        if (local_78 != 0) {
          _CFRelease();
        }
        if (local_70 != 0) {
          _CFRelease();
        }
        if (bVar20) {
          *(long *)(*(long *)(lVar17 + 0x10) + 0xe0) = lVar14;
          if (lVar14 == 0) {
            pcVar18 = &cf_Failedtocreateauthinstallobject;
          }
          else {
            uVar7 = _CFDictionaryGetValue(uVar16,&cf_AuthInstallVariant);
            lVar14 = _CFDictionaryGetValue(uVar16,&cf_PersonalizedRestoreBundlePath);
            if (lVar14 == 0) {
              pcVar18 = &cf_Can_tsendfilewithoutpersonalizedbundlepath;
            }
            else {
              lVar14 = _CFURLCreateWithFileSystemPath
                                 (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar14,0,1);
              if (lVar14 != 0) {
                iVar3 = _AMAuthInstallBundleCopyURLForKey
                                  (*(undefined8 *)(*(long *)(lVar17 + 0x10) + 0xe0),lVar6,uVar7,
                                   lVar14,&local_80);
                param_1 = local_38;
                if (iVar3 == 0) goto LAB_0016b496;
                pcVar18 = (cfstringStruct *)
                          _AMRMakeString(&cf_FailedtogetpersonalizedfileURLfor__,lVar6);
                lVar6 = 0;
                goto LAB_0016bfb0;
              }
              pcVar18 = &cf_Failedtocreatepersonalizedbundleurl;
            }
          }
          lVar6 = 0;
          lVar14 = 0;
LAB_0016bfb0:
          lVar15 = 0;
          param_1 = local_38;
          goto LAB_0016bfef;
        }
      }
      lVar15 = _AMRCreateErrorWithDomain
                         (&cf_Failedtocreateauthinstall,0xfbd,
                          &cf_com_apple_MobileDevice_MobileRestore,0);
      *(undefined8 *)(*(long *)(lVar17 + 0x10) + 0xe0) = 0;
      pcVar18 = &cf_Failedtocreateauthinstallobject;
      goto LAB_0016bfec;
    }
    if (*(long *)(lVar17 + 0x20) == 0) {
      pcVar18 = &cf_Can_tsendfilewithNULLurl;
      goto LAB_0016c12b;
    }
    local_80 = _CFRetain();
    lVar14 = 0;
LAB_0016b496:
    lVar15 = 0;
    lVar6 = _CFURLCopyFileSystemPath(local_80,0);
    if (lVar6 == 0) {
      pcVar18 = &cf_Failedtocopyfilepath;
      lVar6 = 0;
      goto LAB_0016bfef;
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      _AMRSafeLogAndRelease(3,&cf_Can_tsendcommandwithNULLdevice);
      pcVar18 = &cf_Failedtosendfiletodevice;
      lVar15 = 0;
      goto LAB_0016bfef;
    }
    local_a8 = *(long *)(lVar17 + 0x10);
    local_a0 = lVar6;
    ___thr_AMRestorableDeviceSendFile(&local_a8);
    cVar2 = local_98;
    _AMRSafeLogAndRelease(3,0);
    param_1 = local_38;
    if (cVar2 != '\x01') {
      pcVar18 = &cf_Failedtosendfiletodevice;
      goto LAB_0016bfb0;
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    plVar19 = local_38 + 5;
    if (local_49 != '\0') {
      if (lVar17 != 0) {
        local_a0 = local_90;
        local_a8 = lVar17;
        ___thr_AMRestorableDeviceSendBlindCommand(&local_a8);
        goto LAB_0016b6f8;
      }
      pcVar18 = &cf_Can_tsendblindcommandwithNULLdevice;
LAB_0016c1b7:
      _AMRSafeLogAndRelease(3,pcVar18);
      pcVar18 = &cf_Failedtosendgocommandtodevice;
      lVar15 = 0;
      goto LAB_0016bff3;
    }
    if (lVar17 == 0) {
      pcVar18 = &cf_Can_tsendcommandwithNULLdevice;
      goto LAB_0016c1b7;
    }
    local_a0 = local_90;
    local_a8 = lVar17;
    ___thr_AMRestorableDeviceSendCommand(&local_a8);
LAB_0016b6f8:
    lVar15 = 0;
    _AMRSafeLogAndRelease(3,0);
    *(char *)plVar19 = local_98;
    if (local_98 != '\0') goto LAB_0016c03c;
    pcVar18 = &cf_Failedtosendgocommandtodevice;
    param_1 = local_38;
  }
  uVar16 = _AMRCreateErrorWithDomain(pcVar18,0xfbe,&cf_com_apple_MobileDevice_MobileRestore,lVar15);
  *(undefined8 *)param_1[4] = uVar16;
  lVar17 = _CFErrorCopyDescription(*(undefined8 *)param_1[4]);
  _AMRSafeLogAndRelease(3,lVar17);
  if (lVar17 != 0) {
    _CFRelease(lVar17);
  }
LAB_0016c03c:
  if (local_80 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar14 != 0) {
    _CFRelease(lVar14);
  }
  if (lVar15 != 0) {
    _CFRelease(lVar15);
  }
  return;
}

