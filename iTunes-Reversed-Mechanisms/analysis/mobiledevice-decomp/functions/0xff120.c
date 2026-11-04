// rea decompile_all
// name: _AMDeviceCopyAuthInstallPreflightOptions
// address: 0xff120
// body: available
// range: 0xff120-0x1000cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMDeviceCopyAuthInstallPreflightOptions(long param_1,long param_2,long *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  long *plVar12;
  bool bVar13;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  int local_34;
  
  local_98 = 0;
  local_d8 = 0;
  if (param_3 == (long *)0x0 || (param_2 == 0 || param_1 == 0)) {
    uVar2 = 1;
    cVar1 = '\0';
  }
  else {
    lVar3 = _AMDeviceCreateCopy();
    if (lVar3 != 0) {
      local_90 = param_2;
      local_34 = _AMDeviceConnect(lVar3);
      if (local_34 == 0) {
        local_c0 = param_1;
        lVar5 = __copyAuthInstallPreflightProperty(lVar3,0,__AMDeviceCopyPreflightKey);
        local_88 = CONCAT71((int7)((ulong)lVar5 >> 8),1);
        uVar2 = 0xffffffff;
        local_98 = lVar5;
        if (lVar5 == 0) {
          local_a0 = 0;
          local_b0 = 0;
          local_c8 = 0;
          lVar7 = 0;
          local_d0 = 0;
          local_50 = 0;
          local_68 = 0;
          local_80 = 0;
          local_58 = 0;
          local_60 = 0;
          local_70 = 0;
          local_a8 = 0;
          lVar5 = 0;
          lVar6 = 0;
        }
        else {
          local_78 = lVar3;
          local_48 = _AMDeviceCopyValueWithError(lVar3,0,&cf_ApParameters,0);
          if (local_48 == 0) {
            local_a8 = 0;
            bVar13 = false;
            local_b0 = 0;
            local_a0 = 0;
            lVar6 = 0;
          }
          else {
            lVar6 = _CFDictionaryGetValue(local_48,&cf_ApNonce);
            if (lVar6 != 0) {
              _CFDictionarySetValue(lVar5,&cf_ApNonce,lVar6);
              _CFRetain(lVar6);
            }
            local_b0 = _CFDictionaryGetValue(local_48,&cf_ApNonceSlotID);
            if (local_b0 != 0) {
              _CFDictionarySetValue(lVar5,&cf_ApNonceSlotID,local_b0);
              _CFRetain(local_b0);
            }
            local_a0 = _CFDictionaryGetValue(local_48,&cf_SepNonce);
            if (local_a0 != 0) {
              _CFDictionarySetValue(lVar5,&cf_SepNonce,local_a0);
              _CFRetain(local_a0);
            }
            local_a8 = _CFDictionaryGetValue(local_48,&cf_SepNonceSlotID);
            if (local_a8 != 0) {
              _CFDictionarySetValue(lVar5,&cf_SepNonceSlotID,local_a8);
              _CFRetain(local_a8);
            }
            lVar3 = local_48;
            bVar13 = local_a0 != 0;
            uVar4 = _CFDictionaryGetCount(local_48);
            _AMRLog(6,&cf_Passingin_luitemstoAMAuthInstallApSetParameters_,uVar4);
            _CFDictionaryApplyFunction(lVar3,__mergeDict,&local_98);
            bVar13 = lVar6 != 0 && bVar13;
          }
          lVar7 = _AMDeviceCopyValueWithError(local_78,0,&cf_PreflightInfo,0);
          lVar5 = local_c0;
          if ((lVar7 == 0) || (lVar3 = _CFDictionaryGetValue(lVar7,&cf_ApParameters), lVar3 == 0)) {
LAB_000ff58f:
            lVar3 = local_78;
            if (bVar13) {
              local_d0 = 0;
              local_40 = lVar6;
              goto LAB_000ff70f;
            }
            lVar5 = _AMDeviceCopyValueWithError(local_78,0,&cf_ApNonce,&local_34);
            local_40 = lVar5;
            if (lVar5 == 0) {
LAB_000ff5fd:
              uVar4 = _AMDErrorString(local_34);
              _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,&cf___,0,&cf_ApNonce,lVar5,
                      uVar4);
            }
            else {
              lVar6 = _CFGetTypeID(lVar5);
              lVar10 = _CFDataGetTypeID();
              if (lVar6 != lVar10) goto LAB_000ff5fd;
              _CFDictionarySetValue(local_98,&cf_ApNonce,lVar5);
            }
            uVar2 = 0xffffffff;
            lVar5 = _AMDeviceCopyValueWithError(lVar3,0,&cf_HasSEP,&local_34);
            local_d0 = lVar5;
            if (lVar5 == 0) {
LAB_000ff6d6:
              uVar4 = _AMDErrorString(local_34);
              _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,&cf___,0,&cf_HasSEP,lVar5,
                      uVar4);
              lVar5 = local_c0;
              goto LAB_000ff70f;
            }
            lVar6 = _CFGetTypeID(lVar5);
            lVar10 = _CFBooleanGetTypeID();
            if ((lVar6 != lVar10) || (cVar1 = _CFBooleanGetValue(lVar5), cVar1 == '\0'))
            goto LAB_000ff6d6;
            lVar5 = _AMDeviceCopyValueWithError(lVar3,0,&cf_SEPNonce,&local_34);
            local_a0 = lVar5;
            if (lVar5 != 0) {
              lVar6 = _CFGetTypeID(lVar5);
              lVar10 = _CFDataGetTypeID();
              if (lVar6 == lVar10) {
                _CFDictionarySetValue(local_98,&cf_SepNonce,lVar5);
                lVar5 = local_c0;
                goto LAB_000ff70f;
              }
            }
            uVar4 = _AMDErrorString(local_34);
            local_c8 = 0;
            _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,
                    &cf_Couldn_tgetSEPnoncefromdevicewithanSEP_disablingpreflight,0,&cf_SEPNonce,
                    lVar5,uVar4);
            local_50 = 0;
LAB_000ffd79:
            local_68 = 0;
            local_80 = 0;
            local_58 = 0;
            local_60 = 0;
            local_70 = 0;
            lVar5 = local_48;
            lVar6 = local_40;
          }
          else {
            local_40 = _CFDictionaryGetValue(lVar3,&cf_ApNonce);
            if (local_40 != 0) {
              _CFDictionarySetValue(local_98,&cf_ApNonce,local_40);
              _CFRetain(local_40);
            }
            lVar3 = _CFDictionaryGetValue(lVar3,&cf_SepNonce);
            if (lVar3 == 0) {
              local_a0 = 0;
              lVar6 = local_40;
              lVar5 = local_c0;
              goto LAB_000ff58f;
            }
            _CFDictionarySetValue(local_98,&cf_SepNonce,lVar3);
            local_a0 = lVar3;
            _CFRetain(lVar3);
            lVar6 = 0;
            local_d0 = 0;
            lVar5 = local_c0;
            if (local_40 == 0) goto LAB_000ff58f;
LAB_000ff70f:
            lVar3 = local_78;
            local_c8 = _AMDeviceCopyValueWithError(local_78,0,&cf_BasebandChipset,0);
            if ((local_c8 == 0) || (cVar1 = _CFStringHasPrefix(local_c8,&cf_int), cVar1 == '\0')) {
              local_68 = _AMDeviceCopyValueWithError(lVar3,0,&cf_FirmwarePreflightInfo,0);
              lVar6 = local_90;
              if (local_68 != 0) {
                lVar6 = _CFDictionaryGetTypeID();
                lVar10 = _CFGetTypeID(local_68);
                if (lVar6 != lVar10) {
                  pcVar11 = &
                            cf_FirmwarePreflightInfoisnotadictionary_cannotpersonalizebasebandfrompreflight
                  ;
LAB_000ff91e:
                  local_70 = 0;
                  _AMRLog(3,pcVar11);
                  _CFRelease(local_68);
                  uVar4 = CONCAT71((int7)((ulong)lVar6 >> 8),1);
                  goto LAB_000ff950;
                }
                lVar10 = _CFDictionaryGetCount(local_68);
                if (lVar10 < 1) {
                  pcVar11 = &cf_FirmwarePreflightInfoisempty_cannotpersonalizebasebandfrompreflight;
                  goto LAB_000ff91e;
                }
                local_70 = 0;
                uVar4 = 0;
                goto LAB_000ff968;
              }
              local_50 = _CFDictionaryCreateMutable
                                   (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                    PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              if (local_50 == 0) {
                local_50 = 0;
                _AMRLog(3,&cf_failedtoallocatebbPreflightInfo);
                uVar2 = 1;
                local_88 = 0;
                goto LAB_000ffd79;
              }
              lVar10 = _AMDeviceCopyValueWithError(lVar3,0,&cf_BasebandSerialNumber,&local_34);
              if (lVar10 == 0) {
                uVar4 = _AMDErrorString(local_34);
                local_70 = 0;
                _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,
                        &cf_devicedoesn_treportabasebandsnum,0,&cf_BasebandSerialNumber,0,uVar4);
                local_60 = 0;
                local_58 = 0;
              }
              else {
                lVar6 = _CFGetTypeID(lVar10);
                lVar8 = _CFDataGetTypeID();
                if (lVar6 == lVar8) {
                  local_70 = lVar10;
                  _CFDictionarySetValue(local_50,&cf_ChipSerialNo,lVar10);
                  local_60 = _AMDeviceCopyValueWithError(lVar3,0,&cf_BasebandGoldCertId,&local_34);
                  if (local_60 == 0) {
LAB_000ffecb:
                    lVar6 = local_60;
                    uVar4 = _AMDErrorString(local_34);
                    _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,
                            &cf_devicereportsanincompatiblebasebandcertid,0,&cf_BasebandGoldCertId,
                            lVar6,uVar4);
                  }
                  else {
                    lVar6 = _CFGetTypeID(local_60);
                    lVar10 = _CFNumberGetTypeID();
                    if (lVar6 != lVar10) goto LAB_000ffecb;
                    _CFDictionarySetValue(local_50,&cf_CertID,local_60);
                  }
                  lVar6 = local_90;
                  local_58 = _AMDeviceCopyValueWithError(lVar3,0,&cf_BasebandNonce,&local_34);
                  if (local_58 != 0) {
                    lVar10 = _CFGetTypeID(local_58);
                    lVar8 = _CFDataGetTypeID();
                    if (lVar10 == lVar8) {
                      _CFDictionarySetValue(local_50,&cf_Nonce,local_58);
                      goto LAB_000fff88;
                    }
                  }
                  lVar10 = local_58;
                  uVar4 = _AMDErrorString(local_34);
                  _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,
                          &cf_devicereportsanincompatiblebasebandnonce,0,&cf_BasebandNonce,lVar10,
                          uVar4);
                }
                else {
                  local_60 = 0;
                  _AMRLog(3,&cf_devicereportsanincompatiblebasebandsnum);
                  _CFRelease(lVar10);
                  local_70 = 0;
                  local_58 = 0;
                  lVar6 = local_90;
                }
              }
LAB_000fff88:
              local_80 = _AMDeviceCopyValueWithError
                                   (lVar3,0,&cf_BasebandKeyHashInformation,&local_34);
              if (local_80 == 0) {
LAB_000fffd4:
                lVar10 = local_80;
                uVar4 = _AMDErrorString(local_34);
                _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,
                        &cf_devicereportsanincompatiblebasebandkeyhashinformation,0,
                        &cf_BasebandKeyHashInformation,lVar10,uVar4);
              }
              else {
                lVar10 = _CFGetTypeID(local_80);
                lVar8 = _CFDictionaryGetTypeID();
                if (lVar10 != lVar8) goto LAB_000fffd4;
                _CFDictionarySetValue(local_50,&cf_ManifestInfo,local_80);
              }
              lVar10 = local_50;
              lVar8 = _CFDictionaryGetCount(local_50);
              if (lVar8 < 1) {
                uVar4 = CONCAT71((int7)((ulong)lVar10 >> 8),1);
                local_68 = 0;
              }
              else {
                local_68 = _CFRetain(lVar10);
                uVar4 = 0;
              }
            }
            else {
              local_70 = 0;
              _AMRLog(6,&cf_Skippingbasebandpreflightprocessing_);
              uVar4 = 0;
LAB_000ff950:
              local_68 = 0;
LAB_000ff968:
              local_50 = 0;
              local_58 = 0;
              local_60 = 0;
              local_80 = 0;
              lVar6 = local_90;
            }
            uVar9 = _CFGetAllocator(lVar5);
            local_d8 = _CFDictionaryCreateMutable
                                 (uVar9,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            if (local_d8 == 0) {
              _AMRLog(3,&cf_failedtoallocategenericInfo);
LAB_00100095:
              uVar2 = 0xffffffff;
              lVar5 = local_48;
              lVar6 = local_40;
            }
            else {
              local_b8 = uVar4;
              if (lVar7 == 0) {
                pcVar11 = &cf_SEID;
                plVar12 = &DAT_004475a0;
                do {
                  lVar3 = plVar12[-1];
                  lVar7 = _AMDeviceCopyValueWithError(local_78,0,pcVar11,&local_34);
                  if (lVar7 == 0) {
                    uVar4 = _AMDErrorString(local_34);
                    _AMRLog(3,&cf____Failedtoretrieve_____fromdevice_____s__,
                            &cf_Personalizable__deviceInforeturnedNULL_,0,pcVar11,0,uVar4);
                  }
                  else {
                    uVar4 = _CFGetAllocator(local_c0);
                    lVar5 = _CFDictionaryCreateMutable
                                      (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                    if (lVar5 == 0) {
                      _AMRLog(3,&cf_failedtoallocatedeviceDictdict);
                      goto LAB_0010004f;
                    }
                    _CFDictionarySetValue(lVar5,&cf_DeviceInfo,lVar7);
                    _CFRelease(lVar7);
                    _CFDictionarySetValue(local_d8,lVar3,lVar5);
                    _CFRelease(lVar5);
                    _AMRLog(3,&cf_Personalizable__deviceInfofound_preflighting_,lVar3);
                  }
                  pcVar11 = (cfstringStruct *)*plVar12;
                  plVar12 = plVar12 + 2;
                } while (pcVar11 != (cfstringStruct *)0x0);
                lVar7 = 0;
                lVar6 = local_90;
              }
              else {
                lVar5 = _CFGetTypeID(lVar7);
                lVar10 = _CFDictionaryGetTypeID();
                if (lVar5 != lVar10) {
                  _AMRLog(3,&cf_deviceInfowrongtype);
                  local_88 = local_b8;
                  goto LAB_00100095;
                }
                lVar3 = _CFDictionaryGetValue(lVar7,&cf_DeviceInfo);
                if (lVar3 != 0) {
                  lVar5 = _CFGetTypeID(lVar3);
                  lVar10 = _CFDictionaryGetTypeID();
                  if (lVar5 == lVar10) {
                    _CFDictionaryApplyFunction(lVar3,__transformDeviceDict,&local_d8);
                    if (local_d8 != 0) {
                      uVar4 = _CFDictionaryGetCount(lVar3);
                      _AMRLog(3,&cf_Updaterpreflightqueryreturned_luentries_,uVar4);
                      goto LAB_000ffb52;
                    }
                    pcVar11 = &cf_Failurewhentransforminginside_transformDeviceDict;
                  }
                  else {
                    pcVar11 = &cf_allDeviceInfowrongtype;
                  }
                  _AMRLog(3,pcVar11);
                  local_88 = local_b8;
LAB_0010004f:
                  uVar2 = 0xffffffff;
                  lVar5 = local_48;
                  lVar6 = local_40;
                  lVar3 = local_78;
                  goto LAB_000ffd99;
                }
                _AMRLog(3,&cf_Updaterpreflightqueryreturnedmalformedresults__MissingDeviceInfokey_);
LAB_000ffb52:
                lVar3 = _CFDictionaryGetValue(lVar7,&cf_ApParameters);
                if (lVar3 != 0) {
                  uVar4 = _CFDictionaryGetCount(lVar3);
                  _AMRLog(6,&cf_Passingin_luitemstoAMAuthInstallApSetParameters_,uVar4);
                  _CFDictionaryApplyFunction(lVar3,__mergeDict,&local_98);
                }
              }
              uVar2 = _AMRAuthInstallCopyAllPreflightOptions
                                (local_98,local_68,local_d8,lVar6,param_3);
              if (local_a8 == 0 && local_b0 == 0) {
                local_b0 = 0;
                local_a8 = 0;
              }
              else if (*param_3 == 0) {
                lVar5 = _CFDictionaryCreateMutable
                                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                   PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                lVar3 = local_78;
                if (local_b0 != 0) {
                  _CFDictionarySetValue(lVar5,&cf_ApNonceSlotID);
                }
                if (local_a8 != 0) {
                  _CFDictionarySetValue(lVar5,&cf_SepNonceSlotID);
                }
                *param_3 = lVar5;
                local_88 = local_b8;
                lVar5 = local_48;
                lVar6 = local_40;
                goto LAB_000ffd99;
              }
              local_88 = local_b8;
              lVar5 = local_48;
              lVar6 = local_40;
              lVar3 = local_78;
            }
          }
        }
      }
      else {
        uVar4 = _AMRLog(3,&cf_can_tconnecttothedevice);
        local_88 = CONCAT71((int7)((ulong)uVar4 >> 8),1);
        uVar2 = 0xffffffff;
        local_a0 = 0;
        local_b0 = 0;
        local_c8 = 0;
        lVar7 = 0;
        local_d0 = 0;
        local_50 = 0;
        local_68 = 0;
        local_80 = 0;
        local_58 = 0;
        local_60 = 0;
        local_70 = 0;
        local_a8 = 0;
        lVar5 = 0;
        lVar6 = 0;
      }
LAB_000ffd99:
      _AMDeviceDisconnect(lVar3);
      _CFRelease(lVar3);
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
      param_2 = local_90;
      cVar1 = (char)local_88;
      if (local_a0 != 0) {
        _CFRelease();
      }
      if (local_a8 != 0) {
        _CFRelease();
      }
      if (local_b0 != 0) {
        _CFRelease();
      }
      if (local_d0 != 0) {
        _CFRelease();
      }
      if (local_70 != 0) {
        _CFRelease();
      }
      if (local_60 != 0) {
        _CFRelease();
      }
      if (local_58 != 0) {
        _CFRelease();
      }
      if (local_80 != 0) {
        _CFRelease();
      }
      if (local_68 != 0) {
        _CFRelease();
      }
      if (local_50 != 0) {
        _CFRelease();
      }
      goto LAB_000ffe59;
    }
    _AMRLog(3,&cf_Couldnotcreatecopyofdevice_p,param_1);
    uVar2 = 0xffffffff;
    cVar1 = '\x01';
  }
  lVar7 = 0;
  lVar5 = 0;
  local_c8 = 0;
LAB_000ffe59:
  if (local_98 != 0) {
    _CFRelease();
  }
  if (local_d8 != 0) {
    _CFRelease();
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_c8 != 0) {
    _CFRelease();
  }
  if (cVar1 != '\0') {
    uVar2 = _AMRAuthInstallAttemptSimpleHttpRequest(param_2);
  }
  return uVar2;
}

