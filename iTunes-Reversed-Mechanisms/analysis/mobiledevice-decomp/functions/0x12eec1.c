// rea decompile_all
// name: _AMDeviceStartSession
// address: 0x12eec1
// body: available
// range: 0x12eec1-0x12fa05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceStartSession(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  dispatch_object_t dVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  char *pcVar19;
  long local_58;
  dispatch_object_t local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_48 = 0;
  local_58 = 0;
  if (param_1 == 0) {
    lVar10 = 0;
    iVar5 = -0x17fffff9;
    goto LAB_0012f51a;
  }
  if (*(char *)(param_1 + 0x94) != '\x01') {
LAB_0012f778:
    lVar10 = 0;
    iVar5 = -0x17ffff7c;
    goto LAB_0012f51a;
  }
  cVar4 = _AMDeviceIsWiFiPairableRef(param_1);
  iVar5 = -0x17fffff1;
  if (cVar4 == '\0') {
    if (*(long *)(param_1 + 0xf8) != 0) {
      local_40 = 0;
      iVar5 = _AMDeviceIsValid(param_1);
      puVar3 = PTR__objc_msgSend_00441098;
      if (iVar5 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,
                          "Device \'%@\' is no longer valid; cannot start session.",
                          *(undefined8 *)(param_1 + 0x20));
        iVar5 = -0x17ffff7c;
      }
      else {
        lVar10 = *(long *)(param_1 + 0xf0);
        if (lVar10 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar19 = "Invalid remote service device provider.";
        }
        else {
          uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                            (&objc::class_t::MDRemoteServiceDeviceProviderRemotePairing,"class");
          cVar4 = (*(code *)puVar3)(lVar10,"isKindOfClass:",uVar7);
          if (cVar4 != '\0') {
            lVar8 = (*(code *)PTR__objc_msgSend_00441098)(lVar10,"copyMDRemoteServiceDevice");
            if ((lVar8 == 0) || (iVar5 = 0, *(int *)(lVar8 + 0x20) != 10)) {
              lVar11 = *(long *)(param_1 + 0xf8);
              local_38 = lVar8;
              if (lVar11 == 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                lVar8 = local_38;
                __os_log_internal(0,_md_log_log,0x10,
                                  "Starting a session over RemoteXPC is not supported for this device."
                                 );
                iVar5 = -0x17fffff1;
              }
              else {
                uVar9 = (*(code *)PTR__objc_msgSend_00441098)(lVar11,"authFlags");
                if ((uVar9 & 1) == 0) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  lVar8 = local_38;
                  __os_log_internal(0,_md_log_log,0x10,"The device is not paired.");
                  iVar5 = -0x17ffffdb;
                }
                else {
                  dVar14._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
                  if (dVar14._os_obj == (_os_object_s *)0x0) {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    lVar8 = local_38;
                    __os_log_internal(0,_md_log_log,0x10,"Failed to create semaphore.");
                    iVar5 = -0x17fffffd;
                  }
                  else {
                    local_50._os_obj = dVar14._os_obj;
                    _objc_sync_enter(lVar11);
                    if (*(long *)(param_1 + 0x100) == 0) {
                      iVar5 = __AMDRemotePairingTakeTunnelUsageAssertion
                                        (*(undefined8 *)(param_1 + 0xf8),&local_40);
                      if (iVar5 == 0) {
                        *(long *)(param_1 + 0x100) = local_40;
                        local_40 = 0;
                        goto LAB_0012f278;
                      }
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      __os_log_internal(0,_md_log_log,0x10,"Failed to take tunnel usage assertion.")
                      ;
                      _objc_sync_exit(lVar11);
                      lVar8 = local_38;
                    }
                    else {
LAB_0012f278:
                      _objc_sync_exit(lVar11);
                      (*(code *)puVar3)(lVar10,"setTrustRequired:",1);
                      (*(code *)puVar3)(lVar10,"refreshMDRemoteServiceDevice");
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      lVar8 = local_38;
                      iVar5 = 0;
                      __os_log_internal(0,_md_log_log,2,
                                        "Started session with RemotePairing-backed device.");
                    }
                    _dispatch_release(local_50);
                  }
                }
              }
              if (lVar8 == 0) goto LAB_0012f504;
            }
            _CFRelease(lVar8);
            goto LAB_0012f504;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar19 = "Unexpected remote service device provider type.";
        }
        __os_log_internal(0,_md_log_log,0x10,pcVar19);
        iVar5 = -0x17ffff0f;
      }
LAB_0012f504:
      puVar3 = PTR__objc_release_004410a0;
      lVar10 = 0;
      (*(code *)PTR__objc_release_004410a0)(0);
      (*(code *)puVar3)(local_40);
      goto LAB_0012f51a;
    }
    cVar4 = __AMDeviceIsBackedByRSD(param_1);
    if (cVar4 != '\0') {
      lVar10 = _MDRemoteServiceDeviceProviderCopyRemoteDevice(*(undefined8 *)(param_1 + 0xf0));
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x20) != 10)) goto LAB_0012f51a;
LAB_0012f1ce:
      iVar5 = 0;
      goto LAB_0012f51a;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      lVar10 = 0;
      if (*(char *)(*(long *)(param_1 + 0xb0) + 0x94) != '\x01') goto LAB_0012f778;
      if (*(int *)(param_1 + 200) < 1) goto LAB_0012f1ce;
    }
    local_50._os_obj = (_os_object_s *)(param_1 + 0x48);
    _pthread_mutex_lock((pthread_mutex_t *)local_50._os_obj);
    iVar5 = __CreatePairingRecordFromRecordOnDiskForIdentifier
                      (*(undefined8 *)(param_1 + 0x20),&local_48);
    lVar10 = local_48;
    if (iVar5 != 0) goto LAB_0012f8b8;
    local_40 = 0;
    if (*(long *)(param_1 + 0x38) == 0) {
      iVar5 = -0x17fffff5;
LAB_0012f856:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar7 = _md_log_log;
      pcVar19 = "PROXIED ";
      if (*(long *)(param_1 + 0xb0) == 0) {
        pcVar19 = "";
      }
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      uVar18 = _AMDErrorString(iVar5);
      __os_log_internal(0,uVar7,0x10,"Could not start session with %sdevice %@: %s",pcVar19,uVar15,
                        uVar18);
    }
    else {
      if (local_48 == 0) {
        iVar5 = -0x17fffff9;
LAB_0012f8de:
        lVar8 = 0;
      }
      else {
        local_38 = __CreateMessageDict(&cf_StartSession);
        if (local_38 == 0) {
          iVar5 = -0x17fffffd;
          goto LAB_0012f8de;
        }
        lVar11 = _CFStringGetTypeID();
        lVar12 = _CFDictionaryGetValue(lVar10,&cf_HostID);
        iVar5 = -0x17ffffe5;
        lVar8 = local_38;
        if ((lVar12 != 0) && (lVar13 = _CFGetTypeID(lVar12), lVar8 = local_38, lVar13 == lVar11)) {
          _CFDictionarySetValue(local_38,&cf_HostID,lVar12);
          lVar11 = _CFDictionaryGetValue(lVar10,&cf_SystemBUID);
          if (lVar11 != 0) {
            _CFDictionarySetValue(lVar8,&cf_SystemBUID,lVar11);
          }
          lVar11 = *(long *)(param_1 + 0x40);
          iVar5 = _lockconn_send_message(param_1,lVar8);
          if (iVar5 == 0) {
            iVar5 = _lockconn_receive_message(param_1,&local_40);
            if (iVar5 == 0) {
              lVar12 = _CFDictionaryGetValue(local_40,&cf_Error);
              lVar11 = local_40;
              if (lVar12 == 0) {
                lVar12 = _CFStringGetTypeID();
                lVar11 = _CFDictionaryGetValue(lVar11,&cf_SessionID);
                iVar5 = -0x17ffffe1;
                lVar8 = local_38;
                if ((lVar11 != 0) &&
                   (lVar13 = _CFGetTypeID(lVar11), lVar8 = local_38, lVar13 == lVar12)) {
                  _CFRetain(lVar11);
                  lVar12 = _CFGetTypeID(lVar11);
                  lVar13 = _CFStringGetTypeID();
                  if (lVar12 == lVar13) {
                    lVar12 = _CFDataGetTypeID();
                    lVar13 = _CFDictionaryGetValue(lVar10,&cf_HostCertificate);
                    if ((lVar13 == 0) || (lVar16 = _CFGetTypeID(lVar13), lVar16 != lVar12)) {
                      lVar13 = 0;
                    }
                    lVar12 = _CFDataGetTypeID();
                    lVar16 = _CFDictionaryGetValue(lVar10,&cf_HostPrivateKey);
                    if ((lVar16 == 0) || (lVar17 = _CFGetTypeID(lVar16), lVar17 != lVar12)) {
                      lVar16 = 0;
                    }
                    lVar12 = _CFDataGetTypeID();
                    lVar10 = _CFDictionaryGetValue(lVar10,&cf_DeviceCertificate);
                    if ((lVar10 == 0) || (lVar17 = _CFGetTypeID(lVar10), lVar17 != lVar12)) {
                      lVar10 = 0;
                    }
                    puVar2 = *(undefined4 **)(param_1 + 0x38);
                    lVar10 = _lockssl_handshake(param_1,*puVar2,lVar13,lVar10,lVar16);
                    *(long *)(puVar2 + 2) = lVar10;
                    if (lVar10 != 0) {
                      *(long *)(param_1 + 0x40) = lVar11;
                      iVar5 = 0;
                      goto LAB_0012f398;
                    }
                    iVar5 = _AMDeviceIsValid(param_1);
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    if (iVar5 == 0) {
                      __os_log_internal(0,_md_log_log,1,
                                        "lockconn_enable_ssl failed and device is invalid");
                      iVar5 = -0x17ffff7c;
                    }
                    else {
                      __os_log_internal(0,_md_log_log,1,
                                        "lockconn_enable_ssl failed and device %u (%@) is valid...disconnect and reconnect"
                                        ,*(undefined4 *)(param_1 + 0x10),
                                        *(undefined8 *)(param_1 + 0x20));
                      _AMDeviceDisconnect(param_1);
                      _AMDeviceConnect(param_1);
                      iVar5 = -0x17ffffed;
                    }
                  }
                  _CFRelease(lVar11);
                  lVar8 = local_38;
                }
              }
              else {
                lVar10 = _CFGetTypeID(lVar12);
                lVar11 = _CFStringGetTypeID();
                iVar5 = -0x17ffffed;
                if (lVar10 == lVar11) {
                  iVar5 = __ConvertLockdowndError(lVar12);
                  goto LAB_0012f5b1;
                }
              }
            }
            else if (iVar5 == -0x17fffff4) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,1,
                                "Timed out receiving message from device %u, resetting connection.",
                                *(undefined4 *)(param_1 + 0x10));
              _AMDeviceDisconnect(param_1);
              iVar5 = _AMDeviceConnect(param_1);
              if (iVar5 == 0) {
                iVar5 = -0x17fffff4;
                if ((lVar11 != 0) && (iVar6 = _AMDeviceStartSession(param_1), iVar6 != 0)) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar7 = _md_log_log;
                  uVar1 = *(undefined4 *)(param_1 + 0x10);
                  uVar15 = _AMDErrorString(iVar6);
                  __os_log_internal(0,uVar7,1,"Failed to restart session with device %u: %s",uVar1,
                                    uVar15);
                  lVar8 = local_38;
                }
              }
              else {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar7 = _md_log_log;
                uVar1 = *(undefined4 *)(param_1 + 0x10);
                uVar15 = _AMDErrorString(iVar5);
                __os_log_internal(0,uVar7,1,"Failed to re-connect to device %u: %s",uVar1,uVar15);
                iVar5 = -0x17fffff4;
                lVar8 = local_38;
              }
            }
            else {
LAB_0012f5b1:
              if (iVar5 == 0) {
                iVar5 = -0x17ffffff;
              }
            }
          }
        }
      }
LAB_0012f398:
      if (local_40 != 0) {
        _CFRelease();
      }
      if (lVar8 != 0) {
        _CFRelease(lVar8);
      }
      if ((iVar5 != -0x17ffffe3) && (iVar5 != 0)) goto LAB_0012f856;
      if (*(long *)(param_1 + 0x40) == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Invalid session ID for device %@.",
                          *(undefined8 *)(param_1 + 0x20));
        iVar5 = -0x17ffff0f;
      }
      else {
        cVar4 = _CFDictionaryContainsKey(local_48,&cf_EscrowBag);
        if (cVar4 != '\0') {
          cVar4 = _CFDictionaryContainsKey(local_48,&cf_WiFiMACAddress);
          iVar5 = 0;
          if (cVar4 != '\0') goto LAB_0012f8b8;
        }
        cVar4 = _device_class_is_watch(param_1);
        iVar5 = 0;
        if (cVar4 == '\0') {
          __CopyEscrowBag(param_1,&local_58);
        }
      }
    }
LAB_0012f8b8:
    _pthread_mutex_unlock((pthread_mutex_t *)local_50._os_obj);
    if (local_48 != 0) {
      _CFRelease();
    }
  }
  lVar10 = 0;
LAB_0012f51a:
  local_48 = 0;
  if (local_58 != 0) {
    _CFRelease();
  }
  local_58 = 0;
  if (lVar10 != 0) {
    _CFRelease(lVar10);
  }
  return iVar5;
}

