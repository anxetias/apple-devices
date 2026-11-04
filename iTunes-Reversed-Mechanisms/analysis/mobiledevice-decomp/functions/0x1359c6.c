// rea decompile_all
// name: _AMDeviceExtendedPairWithOptions
// address: 0x1359c6
// body: available
// range: 0x1359c6-0x136c10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceExtendedPairWithOptions(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  bool bVar14;
  undefined8 in_stack_ffffffffffffff48;
  long *plVar15;
  undefined4 uVar16;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 *local_48;
  long local_40;
  int local_34;
  
  uVar16 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 0x20);
  local_80 = 0;
  local_90 = 0;
  uVar12 = 0;
  if (param_2 != 0) {
    uVar12 = _CFDictionaryGetValue(param_2,&cf_ForceLegacy);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  iVar2 = -0x17fffff9;
  local_48 = param_3;
  if (param_1 == 0) {
LAB_00135ce0:
    bVar14 = false;
  }
  else {
    if (*(char *)(param_1 + 0x94) != '\x01') {
      iVar2 = -0x17ffff7c;
      goto LAB_00135ce0;
    }
    lVar5 = _isCFBoolean(uVar12);
    if ((lVar5 == 0) || (cVar1 = _CFBooleanGetValue(uVar12), cVar1 == '\0')) {
      if (*(long *)(param_1 + 0xf8) != 0) {
        if (*(long *)(param_1 + 0xe0) == 0) {
          iVar2 = __AMDRemotePairingExtendedPairWithOptions(param_1,param_2,local_48);
        }
        else {
          iVar2 = __AMDRemotePairingPairWithCallback
                            (param_1,*(long *)(param_1 + 0xe0),param_2,local_48);
        }
        goto LAB_00135ce0;
      }
      cVar1 = __AMDeviceIsBackedByRSD(param_1);
      if (cVar1 == '\0') goto LAB_00135adc;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      bVar14 = false;
      __os_log_internal(0,_md_log_log,1,
                        "Pairing over RemoteXPC is only supported for devices discovered via MobileDevice."
                       );
      iVar2 = -0x17fffff1;
    }
    else {
LAB_00135adc:
      _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
      if (param_2 == 0) {
        local_40 = 0;
        local_68 = 0;
        local_58 = 0;
        local_60 = 0;
        local_70 = 0;
        lVar5 = 0;
LAB_00135c44:
        bVar14 = false;
        lVar6 = _AMDeviceCopyValueWithError(param_1,0,&cf_ProductName,0);
        if (lVar6 != 0) {
          lVar7 = _CFGetTypeID(lVar6);
          lVar8 = _CFStringGetTypeID();
          if ((lVar7 == lVar8) &&
             ((cVar1 = _CFEqual(lVar6,&cf_iPhoneOS), cVar1 != '\0' ||
              (cVar1 = _CFEqual(lVar6,&cf_AppleTVOS), cVar1 != '\0')))) {
            bVar14 = false;
            cVar1 = _device_os_is_at_least(param_1,&cf_11_0,0,&cf_11_0,0);
            if (cVar1 != '\0') {
              bVar14 = *(long *)(param_1 + 0xd0) != 0;
            }
          }
          else {
            bVar14 = false;
          }
        }
        if (*(int *)(param_1 + 0x30) == 0) {
          if (bVar14) {
            lVar7 = _copy_lockdown_valuecu(param_1,&cf_DevicePublicKey,&local_34);
            goto joined_r0x00135d68;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar5 = local_40;
          iVar2 = -0x17ffff13;
          __os_log_internal(0,_md_log_log,0x10,"CUPairing required with device %u: 0x%x",
                            *(undefined4 *)(param_1 + 0x10),0xe80000ed);
        }
        else {
          lVar7 = _copy_lockdown_value(param_1,0,&cf_DevicePublicKey,&local_34);
joined_r0x00135d68:
          if (lVar7 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar5 = local_40;
            __os_log_internal(0,_md_log_log,0x10,"Failed to query public key: 0x%x",local_34);
            bVar14 = true;
            iVar2 = local_34;
            goto LAB_0013600e;
          }
          local_88 = lVar5;
          lVar5 = _CFGetTypeID(lVar7);
          lVar8 = _CFDataGetTypeID();
          local_50 = lVar7;
          if (lVar5 == lVar8) {
            lVar7 = __CreatePairingMaterial(lVar7,local_58,local_88,local_60,local_70);
            if (lVar7 != 0) {
              local_88 = _USBMuxCopyBUID();
              lVar5 = local_40;
              lVar8 = local_50;
              local_70 = lVar7;
              if (local_88 == 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                local_60 = 0;
                __os_log_internal(0,_md_log_log,0x10,"Could not create system BUID");
                iVar2 = -0x17fffffd;
                lVar5 = local_40;
LAB_001368a8:
                _CFRelease(lVar8);
                _CFRelease(local_70);
                if (local_88 != 0) goto LAB_001368c2;
              }
              else {
                _CFDictionarySetValue(lVar7,&cf_SystemBUID,local_88);
                lVar8 = _CFDictionaryCreateMutableCopy
                                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,lVar7);
                if (lVar8 == 0) {
                  iVar2 = -0x17fffffd;
                  local_60 = 0;
                  lVar8 = local_50;
                  goto LAB_001368a8;
                }
                _CFDictionaryRemoveValue(lVar8,&cf_RootPrivateKey);
                local_60 = lVar8;
                _CFDictionaryRemoveValue(lVar8,&cf_HostPrivateKey);
                puVar11 = local_48;
                if (*(int *)(param_1 + 0x30) == 0) {
                  lVar8 = local_50;
                  if (bVar14) {
                    plVar15 = &local_90;
                    local_34 = _send_paircu(param_1,local_60,local_68,lVar5,&local_80,local_48,
                                            plVar15);
                    uVar16 = (undefined4)((ulong)plVar15 >> 0x20);
                    lVar8 = local_50;
                    if (local_34 != 0) goto joined_r0x0013610a;
                    uVar12 = _CFRetain(local_90);
                    *(undefined8 *)(param_1 + 0xd8) = uVar12;
                    goto LAB_00136605;
                  }
joined_r0x001361fd:
                  local_50 = lVar8;
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  iVar2 = -0x17ffff13;
                  __os_log_internal(0,_md_log_log,0x10,"CUPairing required with device %u: 0x%x",
                                    *(undefined4 *)(param_1 + 0x10),0xe80000ed);
                  goto LAB_001368a8;
                }
                local_98 = 0;
                if (*(long *)(param_1 + 0x38) == 0) {
                  iVar2 = -0x17fffff5;
LAB_00136adb:
                  local_a0 = 0;
                  local_68 = 0;
                  local_58 = 0;
                }
                else {
                  lVar7 = __CreateMessageDict(&cf_Pair);
                  if (lVar7 == 0) {
                    iVar2 = -0x17fffffd;
                    goto LAB_00136adb;
                  }
                  _CFDictionarySetValue(lVar7,&cf_PairRecord,local_60);
                  if (local_68 != 0) {
                    _CFDictionarySetValue(lVar7,&cf_PermissionSlip);
                  }
                  if (lVar5 != 0) {
                    _CFDictionarySetValue(lVar7,&cf_PairingOptions,lVar5);
                  }
                  lVar5 = _SCDynamicStoreCopyComputerName(0,0);
                  if (lVar5 != 0) {
                    _CFDictionarySetValue(lVar7,&cf_HostName,lVar5);
                  }
                  local_68 = lVar5;
                  local_58 = lVar7;
                  lVar5 = _libMobileGestaltLibraryCore(0);
                  if ((lVar5 == 0) || (lVar5 = _getMGGetStringAnswerSymbolLoc(), lVar5 == 0)) {
                    uVar12 = 0;
                    iVar2 = ___isPlatformVersionAtLeast(1,0xc,0,0);
                    puVar9 = (undefined4 *)PTR__kIOMainPortDefault_004411d0;
                    if (iVar2 == 0) {
                      puVar9 = (undefined4 *)PTR__kIOMasterPortDefault_004411d8;
                    }
                    uVar3 = _IORegistryEntryFromPath(*puVar9,"IODeviceTree:/product");
                    lVar5 = _IORegistryEntryCreateCFProperty(uVar3,&cf_product_name,0,0);
                    if (lVar5 != 0) {
                      lVar7 = _CFGetTypeID(lVar5);
                      lVar8 = _CFDataGetTypeID();
                      if ((lVar7 == lVar8) && (lVar7 = _CFDataGetLength(lVar5), 0 < lVar7)) {
                        uVar12 = _CFDataGetBytePtr(lVar5);
                        uVar12 = _CFStringCreateWithCString(0,uVar12,0x8000100);
                      }
                      else {
                        uVar12 = 0;
                      }
                      _CFRelease(lVar5);
                    }
                  }
                  else {
                    uVar12 = _soft_MGGetStringAnswer(&cf_marketing_name);
                  }
                  lVar5 = _isCFString(uVar12);
                  if (lVar5 != 0) {
                    _CFDictionarySetValue(local_58,&cf_MarketingName,uVar12);
                  }
                  lVar5 = _libMobileGestaltLibraryCore(0);
                  if ((lVar5 == 0) || (lVar5 = _getMGGetStringAnswerSymbolLoc(), lVar5 == 0)) {
                    uVar12 = _IOServiceMatching("IOPlatformExpertDevice");
                    iVar2 = ___isPlatformVersionAtLeast(1,0xc,0,0);
                    puVar9 = (undefined4 *)PTR__kIOMainPortDefault_004411d0;
                    if (iVar2 == 0) {
                      puVar9 = (undefined4 *)PTR__kIOMasterPortDefault_004411d8;
                    }
                    local_78 = lVar6;
                    iVar2 = _IOServiceGetMatchingService(*puVar9,uVar12);
                    lVar5 = _IORegistryEntryCreateCFProperty(iVar2,&cf_IOPlatformSerialNumber,0,0);
                    lVar6 = _CFGetTypeID(lVar5);
                    lVar7 = _CFStringGetTypeID();
                    if (lVar6 == lVar7) {
                      local_a0 = lVar5;
                      lVar7 = 0;
                      lVar5 = 0;
                    }
                    else {
                      lVar6 = _CFGetTypeID(lVar5);
                      lVar7 = _CFDataGetTypeID();
                      if (lVar6 == lVar7) {
                        lVar6 = _CFDataGetBytePtr(lVar5);
                        lVar7 = _CFDataGetLength(lVar5);
                        if (*(char *)(lVar6 + -1 + lVar7) == '\0') {
                          local_a0 = _CFStringCreateWithCString(0,lVar6,0x8000100);
                        }
                        else {
                          local_a0 = _CFStringCreateWithBytes(0,lVar6,lVar7,0x8000100,0);
                        }
                        lVar7 = lVar5;
                        lVar5 = 0;
                      }
                      else {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar12 = _md_log_log;
                        uVar10 = _CFGetTypeID(lVar5);
                        lVar7 = 0;
                        __os_log_internal(0,uVar12,0x10,"Unexpected serial number type ID: %lu",
                                          uVar10);
                        local_a0 = 0;
                      }
                    }
                    if (iVar2 != 0) {
                      _IOObjectRelease(iVar2);
                    }
                    if (lVar5 != 0) {
                      _CFRelease(lVar5);
                    }
                    lVar5 = local_58;
                    puVar11 = local_48;
                    lVar6 = local_78;
                    if (lVar7 != 0) {
                      _CFRelease(lVar7);
                      puVar11 = local_48;
                      lVar6 = local_78;
                    }
                  }
                  else {
                    local_a0 = _soft_MGGetStringAnswer(&cf_SerialNumber);
                    lVar5 = local_58;
                  }
                  lVar7 = _isCFString(local_a0);
                  if (lVar7 != 0) {
                    _CFDictionarySetValue(lVar5,&cf_SerialNumber,local_a0);
                  }
                  lVar7 = *(long *)(param_1 + 0x40);
                  iVar2 = _lockconn_send_message(param_1,lVar5);
                  if (iVar2 == 0) {
                    iVar2 = _lockconn_receive_message(param_1,&local_98);
                    if (iVar2 == 0) {
                      local_78 = lVar6;
                      lVar7 = _CFDictionaryGetValue(local_98,&cf_Error);
                      lVar5 = local_98;
                      if (lVar7 == 0) {
                        lVar6 = _CFDataGetTypeID();
                        lVar5 = _CFDictionaryGetValue(lVar5,&cf_EscrowBag);
                        iVar2 = 0;
                        if ((lVar5 == 0) || (lVar7 = _CFGetTypeID(lVar5), lVar7 != lVar6)) {
                          local_80 = 0;
                          lVar6 = local_78;
                        }
                        else {
                          local_80 = _CFRetain(lVar5);
                          lVar6 = local_78;
                        }
                      }
                      else {
                        lVar5 = _CFGetTypeID(lVar7);
                        lVar8 = _CFStringGetTypeID();
                        iVar2 = -0x17ffffed;
                        lVar6 = local_78;
                        if (lVar5 == lVar8) {
                          iVar2 = __ConvertLockdowndError(lVar7);
                          lVar6 = local_78;
                          goto LAB_00136748;
                        }
                      }
                    }
                    else if (iVar2 == -0x17fffff4) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      __os_log_internal(0,_md_log_log,1,
                                        "Timed out receiving message from device %u, resetting connection."
                                        ,*(undefined4 *)(param_1 + 0x10));
                      _AMDeviceDisconnect(param_1);
                      iVar2 = _AMDeviceConnect(param_1);
                      if (iVar2 == 0) {
                        iVar2 = -0x17fffff4;
                        if ((lVar7 == 0) || (iVar4 = _AMDeviceStartSession(param_1), iVar4 == 0))
                        goto LAB_00136421;
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar12 = _md_log_log;
                        uVar3 = *(undefined4 *)(param_1 + 0x10);
                        uVar10 = _AMDErrorString(iVar4);
                        __os_log_internal(0,uVar12,1,"Failed to restart session with device %u: %s",
                                          uVar3,uVar10);
                      }
                      else {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar12 = _md_log_log;
                        uVar3 = *(undefined4 *)(param_1 + 0x10);
                        uVar10 = _AMDErrorString(iVar2);
                        __os_log_internal(0,uVar12,1,"Failed to re-connect to device %u: %s",uVar3,
                                          uVar10);
                      }
                      iVar2 = -0x17fffff4;
                      puVar11 = local_48;
                    }
                    else {
LAB_00136748:
                      if (iVar2 == 0) {
                        iVar2 = -0x17ffffff;
                      }
                    }
                  }
                }
LAB_00136421:
                lVar5 = local_98;
                if (puVar11 != (undefined8 *)0x0 && local_98 != 0) {
                  lVar7 = _CFDictionaryGetTypeID();
                  lVar5 = _CFDictionaryGetValue(lVar5,&cf_ExtendedResponse);
                  if ((lVar5 == 0) || (lVar8 = _CFGetTypeID(lVar5), lVar8 != lVar7)) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = _CFRetain(lVar5);
                  }
                  *local_48 = uVar12;
                }
                if (local_98 != 0) {
                  _CFRelease(local_98);
                }
                if (local_58 != 0) {
                  _CFRelease();
                }
                lVar5 = local_40;
                if (local_68 != 0) {
                  _CFRelease();
                }
                if (local_a0 != 0) {
                  _CFRelease();
                }
                local_34 = iVar2;
                lVar8 = local_50;
                if (iVar2 != 0) {
joined_r0x0013610a:
                  local_50 = lVar8;
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,0x10,"Could not pair with the device %u: 0x%x",
                                    *(undefined4 *)(param_1 + 0x10),local_34);
                  iVar2 = local_34;
                  goto LAB_001368a8;
                }
                local_90 = _CFRetain(*(undefined8 *)(param_1 + 0x20));
                lVar7 = local_70;
LAB_00136605:
                if (local_80 != 0) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,1,"EscrowBag: %@",local_80);
                  _CFDictionarySetValue(lVar7,&cf_EscrowBag,local_80);
                }
                if (*(int *)(param_1 + 0x30) == 0) {
                  lVar8 = local_50;
                  if (!bVar14) goto joined_r0x001361fd;
                  local_48 = (undefined8 *)_copy_lockdown_valuecu(param_1,&cf_WiFiAddress,&local_34)
                  ;
                  if (local_48 != (undefined8 *)0x0) {
                    lVar7 = _CFGetTypeID(local_48);
                    lVar8 = _CFStringGetTypeID();
                    lVar5 = local_40;
                    if (lVar7 == lVar8) goto LAB_00136793;
                  }
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,0x10,"Failed to retrieve WiFi address: 0x%x",
                                    local_34);
                  iVar2 = -0x17ffffff;
                }
                else {
                  if (*(long *)(param_1 + 0xa8) == 0) {
                    local_48 = (undefined8 *)
                               _copy_lockdown_value(param_1,0,&cf_WiFiAddress,&local_34);
                  }
                  else {
                    local_48 = (undefined8 *)_CFRetain();
                  }
                  if (local_48 == (undefined8 *)0x0) {
                    local_48 = (undefined8 *)0x0;
                  }
                  else {
                    lVar7 = _CFGetTypeID(local_48);
                    lVar8 = _CFStringGetTypeID();
                    lVar5 = local_40;
                    if (lVar7 == lVar8) {
LAB_00136793:
                      lVar5 = local_40;
                      _CFDictionarySetValue(local_70,&cf_WiFiMACAddress,local_48);
                    }
                  }
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  lVar7 = local_70;
                  iVar2 = 0;
                  __os_log_internal(0,_md_log_log,1,
                                    "SerialNumber: %@\nParingMaterial: %@\nDeviceID: %u",
                                    *(undefined8 *)(param_1 + 0x20),local_70,
                                    CONCAT44(uVar16,*(undefined4 *)(param_1 + 0x10)));
                  cVar1 = __SavePairingRecordWithDeviceID
                                    (local_90,lVar7,*(undefined4 *)(param_1 + 0x10));
                  if (cVar1 == '\0') {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    __os_log_internal(0,_md_log_log,0x10,"Could not store pairing record for %@.",
                                      *(undefined8 *)(param_1 + 0x20));
                    iVar2 = -0x17fffff6;
                  }
                }
                _CFRelease(local_50);
                if (local_48 != (undefined8 *)0x0) {
                  _CFRelease();
                }
                _CFRelease(local_70);
LAB_001368c2:
                _CFRelease(local_88);
              }
              bVar14 = true;
              if (local_60 != 0) {
                _CFRelease();
              }
              goto LAB_0013600e;
            }
            iVar2 = -0x17ffffee;
            pcVar13 = "Could not create pairing material.";
          }
          else {
            iVar2 = -0x17ffffed;
            pcVar13 = "Invalid public key.";
          }
          lVar5 = local_40;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,pcVar13);
          _CFRelease(local_50);
        }
        bVar14 = true;
        goto LAB_0013600e;
      }
      local_60 = _CFDictionaryGetValue(param_2,&cf_HostCert);
      if (local_60 == 0) {
LAB_00135b20:
        lVar5 = _CFDictionaryGetValue(param_2,&cf_LeafPrivateKey);
        if (lVar5 == 0) {
LAB_00135b50:
          local_70 = lVar5;
          lVar5 = _CFDictionaryGetValue(param_2,&cf_RootCert);
          if (lVar5 != 0) {
            lVar6 = _CFGetTypeID(lVar5);
            lVar7 = _CFDataGetTypeID();
            if (lVar6 != lVar7) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar13 = "Invalid root certificate type.";
              goto LAB_00135ff9;
            }
          }
          local_58 = lVar5;
          lVar5 = _CFDictionaryGetValue(param_2,&cf_RootPrivateKey);
          if (lVar5 != 0) {
            lVar6 = _CFGetTypeID(lVar5);
            lVar7 = _CFDataGetTypeID();
            if (lVar6 != lVar7) goto joined_r0x00135fde;
          }
          lVar6 = _CFDictionaryGetValue(param_2,&cf_ChaperoneCertificate);
          if (lVar6 == 0) {
            local_40 = _CFRetain(param_2);
            local_68 = 0;
          }
          else {
            cVar1 = _CFPropertyListIsValid(lVar6,100);
            if ((cVar1 == '\0') && (cVar1 = _CFPropertyListIsValid(lVar6,200), cVar1 == '\0')) {
              bVar14 = true;
              goto LAB_0013600b;
            }
            local_68 = lVar6;
            lVar6 = _CFDictionaryGetCount(param_2);
            if (lVar6 == 1) {
              local_40 = 0;
            }
            else {
              local_40 = _CFDictionaryCreateMutableCopy
                                   (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,param_2);
              _CFDictionaryRemoveValue(local_40,&cf_ChaperoneCertificate);
            }
          }
          goto LAB_00135c44;
        }
        lVar6 = _CFGetTypeID(lVar5);
        lVar7 = _CFDataGetTypeID();
        if (lVar6 == lVar7) goto LAB_00135b50;
joined_r0x00135fde:
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar13 = "Invalid host private key type.";
      }
      else {
        lVar5 = _CFGetTypeID(local_60);
        lVar6 = _CFDataGetTypeID();
        if (lVar5 == lVar6) goto LAB_00135b20;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar13 = "Invalid host certificate type.";
      }
LAB_00135ff9:
      __os_log_internal(0,_md_log_log,1,pcVar13);
      bVar14 = true;
    }
  }
LAB_0013600b:
  lVar6 = 0;
  lVar5 = 0;
LAB_0013600e:
  if (local_80 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_90 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (bVar14) {
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
  }
  return iVar2;
}

