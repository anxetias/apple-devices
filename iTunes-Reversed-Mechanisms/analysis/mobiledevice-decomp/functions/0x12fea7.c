// rea decompile_all
// name: _AMDeviceStopSession
// address: 0x12fea7
// body: available
// range: 0x12fea7-0x13053d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceStopSession(long param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  undefined4 uVar12;
  long local_40;
  ulong local_38;
  
  if (param_1 == 0) {
    uVar12 = 0;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    iVar5 = -0x17fffff9;
    goto LAB_001302cd;
  }
  iVar5 = -0x17ffff7c;
  if (*(char *)(param_1 + 0x94) == '\x01') {
    if (*(long *)(param_1 + 0xf8) == 0) {
      cVar3 = __AMDeviceIsBackedByRSD(param_1);
      iVar5 = 0;
      if (cVar3 == '\0') {
        cVar3 = _AMDeviceIsWiFiPairableRef(param_1);
        iVar5 = -0x17fffff1;
        if ((cVar3 == '\0') &&
           ((*(long *)(param_1 + 0xb0) == 0 || (iVar5 = 0, 0 < *(int *)(param_1 + 200))))) {
          _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
          lVar1 = *(long *)(param_1 + 0x40);
          if (lVar1 == 0) {
            iVar5 = -0x17ffffe2;
          }
          else {
            *(undefined8 *)(param_1 + 0x40) = 0;
            local_40 = 0;
            if (*(long *)(param_1 + 0x38) == 0) {
              iVar5 = -0x17fffff5;
LAB_001300b5:
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar6 = _md_log_log;
              uVar12 = *(undefined4 *)(param_1 + 0x10);
              uVar8 = _AMDErrorString(iVar5);
              __os_log_internal(0,uVar6,0x10,"Could not stop session with device %u: %s",uVar12,
                                uVar8);
            }
            else {
              lVar7 = __CreateMessageDict(&cf_StopSession);
              if (lVar7 == 0) {
                iVar5 = -0x17fffffd;
                lVar7 = 0;
              }
              else {
                _CFDictionarySetValue(lVar7,&cf_SessionID,lVar1);
                lVar9 = *(long *)(param_1 + 0x40);
                iVar5 = _lockconn_send_message(param_1,lVar7);
                if (iVar5 == 0) {
                  iVar5 = _lockconn_receive_message(param_1,&local_40);
                  if (iVar5 == 0) {
                    lVar9 = _CFDictionaryGetValue(local_40,&cf_Error);
                    if (lVar9 == 0) {
                      lVar9 = *(long *)(*(ulong *)(param_1 + 0x38) + 8);
                      iVar5 = 0;
                      if (lVar9 != 0) {
                        local_38 = *(ulong *)(param_1 + 0x38);
                        _SSL_shutdown(lVar9);
                        _SSL_shutdown(lVar9);
                        _SSL_free(lVar9);
                        *(undefined8 *)(local_38 + 8) = 0;
                      }
                    }
                    else {
                      local_38 = _CFGetTypeID(lVar9);
                      uVar10 = _CFStringGetTypeID();
                      iVar5 = -0x17ffffed;
                      if (local_38 == uVar10) {
                        iVar5 = __ConvertLockdowndError(lVar9);
                        goto LAB_00130365;
                      }
                    }
                  }
                  else if (iVar5 == -0x17fffff4) {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    __os_log_internal(0,_md_log_log,1,
                                      "Timed out receiving message from device %u, resetting connection."
                                      ,*(undefined4 *)(param_1 + 0x10));
                    _AMDeviceDisconnect(param_1);
                    iVar5 = _AMDeviceConnect(param_1);
                    if (iVar5 == 0) {
                      iVar5 = -0x17fffff4;
                      if ((lVar9 != 0) && (iVar4 = _AMDeviceStartSession(param_1), iVar4 != 0)) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        uVar6 = _md_log_log;
                        local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x10));
                        uVar8 = _AMDErrorString(iVar4);
                        __os_log_internal(0,uVar6,1,"Failed to restart session with device %u: %s",
                                          local_38 & 0xffffffff,uVar8);
                      }
                    }
                    else {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar6 = _md_log_log;
                      local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x10));
                      uVar8 = _AMDErrorString(iVar5);
                      __os_log_internal(0,uVar6,1,"Failed to re-connect to device %u: %s",
                                        local_38 & 0xffffffff,uVar8);
                      iVar5 = -0x17fffff4;
                    }
                  }
                  else {
LAB_00130365:
                    if (iVar5 == 0) {
                      iVar5 = -0x17ffffff;
                    }
                  }
                }
              }
              if (local_40 != 0) {
                _CFRelease();
              }
              if (lVar7 != 0) {
                _CFRelease(lVar7);
              }
              if (iVar5 != 0) goto LAB_001300b5;
              iVar5 = 0;
            }
            _CFRelease(lVar1);
          }
          _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
        }
      }
    }
    else {
      iVar4 = _AMDeviceIsValid(param_1);
      puVar2 = PTR__objc_msgSend_00441098;
      if (iVar4 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,
                          "Device \'%@\' is no longer valid; cannot stop session.",
                          *(undefined8 *)(param_1 + 0x20));
      }
      else {
        lVar1 = *(long *)(param_1 + 0xf0);
        if (lVar1 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Invalid remote service device provider.";
        }
        else {
          uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                            (&objc::class_t::MDRemoteServiceDeviceProviderRemotePairing,"class");
          cVar3 = (*(code *)puVar2)(lVar1,"isKindOfClass:",uVar6);
          if (cVar3 != '\0') {
            lVar7 = (*(code *)PTR__objc_msgSend_00441098)(lVar1,"copyMDRemoteServiceDevice");
            if (lVar7 == 0) {
              iVar5 = -0x17ffffe2;
            }
            else {
              iVar5 = -0x17ffffe2;
              if (*(int *)(lVar7 + 0x20) == 10) {
                if (*(long *)(param_1 + 0xf8) == 0) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,0x10,
                                    "Starting a session over RemoteXPC is not supported for this device."
                                   );
                  iVar5 = -0x17fffff1;
                }
                else {
                  iVar5 = 0;
                  (*(code *)puVar2)(lVar1,"setTrustRequired:",0);
                  (*(code *)puVar2)(lVar1,"refreshMDRemoteServiceDevice");
                  (*(code *)PTR__objc_release_004410a0)(*(undefined8 *)(param_1 + 0x100));
                  *(undefined8 *)(param_1 + 0x100) = 0;
                }
              }
              _CFRelease(lVar7);
            }
            goto LAB_001302bb;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Unexpected remote service device provider type.";
        }
        __os_log_internal(0,_md_log_log,0x10,pcVar11);
        iVar5 = -0x17ffff0f;
      }
    }
  }
LAB_001302bb:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  uVar12 = *(undefined4 *)(param_1 + 0x10);
LAB_001302cd:
  __os_log_internal(0,_md_log_log,2,"returned 0x%x for device %u",iVar5,uVar12);
  return iVar5;
}

