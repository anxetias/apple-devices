// rea decompile_all
// name: _AMPortDFUModeDeviceCopyAuthInstallPreflightOptions
// address: 0xdebee
// body: available
// range: 0xdebee-0xdf317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMPortDFUModeDeviceCopyAuthInstallPreflightOptions
              (long param_1,long param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  long local_78;
  undefined8 local_70;
  long local_68;
  undefined8 *local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_68 = 0;
  _AMRestoreCaptureSubsystemLogsIfNeeded();
  local_78 = 0;
  local_48 = 0;
  local_58 = 0;
  if ((param_2 == 0 || param_1 == 0) || param_3 == (undefined8 *)0x0) {
    local_40 = 0;
    _AMRLog(3,&cf__s_badargument_undefinedargumentspassedtofunction_callerpassedNULL,
            "AMPortDFUModeDeviceCopyAuthInstallPreflightOptions");
    iVar3 = 1;
  }
  else {
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_38 = _CFDictionaryCreateMutableCopy(uVar6,0,param_2);
    if (local_38 != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        local_50 = uVar6;
        uVar6 = _CFGetAllocator(param_1);
        lVar5 = _AMAuthInstallCreate(uVar6);
        iVar3 = 0x12;
        if (lVar5 != 0) {
          local_60 = param_3;
          uVar6 = _CFGetAllocator(param_1);
          lVar7 = _CFDictionaryCreateMutable
                            (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar7 == 0) {
            _AMRLog(3,&cf_FailedtocreateAPparametersdict);
            _CFRelease(lVar5);
            _CFRelease(lVar5);
          }
          else {
            __AMPortDFUDeviceInitParameters(param_1);
            __AMPortDFUDeviceInitParameters(param_1);
            _AMAuthInstallSupportDictionarySetInteger32
                      (lVar7,&cf_ApChipID,*(undefined4 *)(param_1 + 0x18));
            __AMPortDFUDeviceInitParameters(param_1);
            _AMAuthInstallSupportDictionarySetInteger32
                      (lVar7,&cf_ApBoardID,*(undefined4 *)(param_1 + 0x1c));
            uVar1 = _AMPortDFUModeDeviceGetProductionMode(param_1);
            _AMAuthInstallSupportDictionarySetBoolean(lVar7,&cf_ApProductionMode,uVar1);
            uVar1 = _AMPortDFUModeDeviceGetSecurityMode(param_1);
            _AMAuthInstallSupportDictionarySetBoolean(lVar7,&cf_ApSecurityMode,uVar1);
            iVar3 = _AMAuthInstallApSetParameters(lVar5,lVar7);
            if (iVar3 == 0) {
              lVar8 = _CFDictionaryGetValue(local_38,&cf_AuthInstallEnableSso);
              if (lVar8 != 0) {
                local_40 = _CFGetTypeID(lVar8);
                lVar9 = _CFBooleanGetTypeID();
                if (((local_40 == lVar9) && (cVar2 = _CFBooleanGetValue(lVar8), cVar2 != '\0')) &&
                   (iVar3 = _AMRAuthInstallSsoEnable(lVar5), iVar3 != 0)) goto LAB_000df0a3;
              }
              *(long *)(param_1 + 0x10) = lVar5;
              _CFRetain(lVar5);
              iVar3 = 0;
            }
            else {
              uVar6 = _AMAuthInstallGetLocalizedStatusString(lVar5,iVar3);
              _AMRLog(3,&cf_FailedtosetAPparameters___,uVar6);
              iVar3 = _AMAuthInstallToRestoreError(iVar3);
              _CFRelease(lVar5);
            }
LAB_000df0a3:
            _CFRelease(lVar5);
            _CFRelease(lVar7);
            param_3 = local_60;
            uVar6 = local_50;
            if (iVar3 == 0) goto LAB_000dec9e;
          }
        }
        pcVar11 = &cf__s_failedtoconfigureauthinstall;
LAB_000df0ca:
        local_40 = 0;
        _AMRLog(3,pcVar11,"AMPortDFUModeDeviceCopyAuthInstallPreflightOptions");
      }
      else {
        _AMRLog(7,&cf_PortDFUWARNING_authinstallhasalreadybeenconfiguredforthisdevice);
LAB_000dec9e:
        iVar3 = _AMRAuthInstallSetBundleOverridesFromOptions
                          (*(undefined8 *)(param_1 + 0x10),local_38);
        if (iVar3 != 0) {
          pcVar11 = &cf__s_failedtosetbundleoverridesfromrestoreoptions;
          goto LAB_000df0ca;
        }
        local_60 = param_3;
        uVar4 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
        lVar5 = _AMSupportCreateURLFromString(uVar6,uVar4);
        local_50 = uVar6;
        uVar6 = _CFDictionaryGetValue(param_2,&cf_AuthInstallVariant);
        iVar3 = _AMAuthInstallBundleCopyBuildIdentityForVariant
                          (*(undefined8 *)(param_1 + 0x10),lVar5,uVar6,&local_78);
        local_40 = lVar5;
        lVar5 = _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity
                          (*(undefined8 *)(param_1 + 0x10),lVar5,local_78,
                           &cf_USBPortController1_USBFirmware,
                           *(undefined8 *)PTR__kCFBooleanFalse_00441108,&local_48);
        uVar6 = local_50;
        if (lVar5 != 0) {
          lVar7 = _AMAuthInstallSupportGetValueForKeyPathInDict(local_50,local_38,&cf_Ace3Firmware);
          if (lVar7 != 0) {
            _AMRLog(7,&
                      cf__s_overridingPortDFUfirmwareforUSBPortController1_USBFirmwarewithAce3Firmware___
                    ,"AMPortDFUModeDeviceCopyAuthInstallPreflightOptions",lVar7);
            lVar5 = _AMAuthInstallSupportCreateURLFromString(uVar6,lVar7);
          }
          lVar7 = local_38;
          lVar8 = _CFDictionaryCreateMutableCopy(uVar6,0,local_38);
          _CFDictionaryAddValue(lVar8,&cf_serialString,*(undefined8 *)(param_1 + 0x20));
          _CFDictionaryAddValue(lVar8,&cf_nonceString,*(undefined8 *)(param_1 + 0x28));
          local_70 = _Ace3ExternalDFURestoreInfoInit
                               (lVar8,__AMAuthInstallLogHandler,lVar7,&local_48);
          iVar3 = _AMSupportCreateDataFromMappedFileURL(uVar6,&local_68,lVar5);
          if (iVar3 == 0) {
            _CFDictionaryAddValue(lVar8,&cf_ExternalDFUFirmware,local_68);
            lVar9 = _Ace3ExternalDFURestoreInfoOfferFirmware(local_70,lVar8,&local_48);
            lVar7 = local_38;
            if (lVar9 == 0) {
              lVar9 = 0;
              _AMRLog(3,&
                        cf__s_PortDFURestoreInfoOfferFirmwarereturnedaNULLrequest_PleasecheckyourUARPbinary
                      ,"AMPortDFUModeDeviceCopyAuthInstallPreflightOptions");
              iVar3 = 0;
              lVar7 = local_38;
            }
            else {
              lVar10 = _CFDictionaryGetValue(local_38,&cf_AppleConnectUser);
              lVar7 = _CFDictionaryGetValue(lVar7,&cf_AppleConnectData);
              if (lVar7 != 0) {
                if (lVar10 == 0) {
                  iVar3 = _AMAuthInstallSsoSetToken(*(undefined8 *)(param_1 + 0x10),lVar7);
                }
                else {
                  iVar3 = _AMAuthInstallSsoSetAppleConnectInfo
                                    (*(undefined8 *)(param_1 + 0x10),lVar10,lVar7);
                }
                if (iVar3 != 0) {
                  iVar3 = _AMAuthInstallToRestoreError(iVar3);
                  lVar7 = local_38;
                  goto LAB_000df0f2;
                }
              }
              iVar3 = _AMRAuthInstallCopySigningServerURL(local_38,0,&local_58);
              if (local_58 == 0) {
                _AMRLog(3,&cf__s_FailedtocopysigningserverURL_result__d_,
                        "AMPortDFUModeDeviceCopyAuthInstallPreflightOptions",iVar3);
                lVar7 = local_38;
              }
              else {
                _AMRLog(6,&cf__s_Usingsigningserver__,
                        "AMPortDFUModeDeviceCopyAuthInstallPreflightOptions");
                iVar3 = _AMAuthInstallSetSigningServerURL(*(undefined8 *)(param_1 + 0x10),local_58);
                if (iVar3 == 0) {
                  iVar3 = _AMAuthInstallUpdaterSetTags
                                    (*(undefined8 *)(param_1 + 0x10),&cf_Ace3,&cf_RequestTags,lVar9,
                                     0);
                  lVar7 = _AMAuthInstallUpdaterPersonalize
                                    (*(undefined8 *)(param_1 + 0x10),&cf_Ace3,local_40,&local_48);
                  if (iVar3 == 0) {
                    if (lVar7 == 0) {
                      uVar6 = _CFErrorGetCode(local_48);
                      _AMRLog(3,&cf__s_failedtopersonalize_TSSResonsewasNULL__ld,
                              "AMPortDFUModeDeviceCopyAuthInstallPreflightOptions",uVar6);
                      iVar3 = 0x898;
                      lVar7 = local_38;
                    }
                    else {
                      uVar6 = _CFDictionaryCreateMutableCopy(local_50,1,local_38);
                      uVar4 = _Ace3ExternalDFURestoreInfoOfferTssResponse(local_70,lVar7,&local_48);
                      _CFDictionarySetValue(uVar6,&cf_Ace3Binary,uVar4);
                      lVar7 = local_38;
                      _CFRelease(uVar4);
                      *local_60 = uVar6;
                      iVar3 = 0;
                    }
                    goto LAB_000df0f2;
                  }
                  pcVar11 = &cf__s_failedtopersonalize;
                }
                else {
                  pcVar11 = &cf__s_FailedtosetsigningserverforPortDFUrestore;
                }
                _AMRLog(3,pcVar11,"AMPortDFUModeDeviceCopyAuthInstallPreflightOptions");
                lVar7 = local_38;
              }
            }
          }
          else {
            lVar9 = 0;
            _AMRLog(3,&cf__s_failedtoloadcontentsofPortDFUfile___,
                    "AMPortDFUModeDeviceCopyAuthInstallPreflightOptions",lVar5);
            lVar7 = local_38;
          }
          goto LAB_000df0f2;
        }
        _AMRLog(3,&cf__s_failedtodeterminelocationofPortDFUfile,
                "AMPortDFUModeDeviceCopyAuthInstallPreflightOptions");
      }
      lVar5 = 0;
      lVar9 = 0;
      lVar8 = 0;
      lVar7 = local_38;
      goto LAB_000df0f2;
    }
    local_40 = 0;
    _AMRLog(3,&cf__s_failedtocopyoptions,"AMPortDFUModeDeviceCopyAuthInstallPreflightOptions");
    iVar3 = 0x12;
  }
  lVar5 = 0;
  lVar9 = 0;
  lVar8 = 0;
  lVar7 = 0;
LAB_000df0f2:
  if (local_68 != 0) {
    _CFRelease();
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (local_78 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (local_58 != 0) {
    _CFRelease();
  }
  return iVar3;
}

