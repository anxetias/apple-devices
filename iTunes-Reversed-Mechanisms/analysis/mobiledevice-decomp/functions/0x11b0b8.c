// rea decompile_all
// name: _AMDeviceRemoteRollPersonalizationNonce
// address: 0x11b0b8
// body: available
// range: 0x11b0b8-0x11bd05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMDeviceRemoteRollPersonalizationNonce(long param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  dispatch_object_t object;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  long local_78;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_40;
  long local_38;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    return 0xe8000007;
  }
  object._os_obj =
       (_os_object_s *)
       _dispatch_queue_create("com.apple.storage_proxy.remote",(dispatch_queue_attr_t)0x0);
  if (object._os_obj == (_os_object_s *)0x0) {
    lVar5 = _AMDCopyErrorText(0xe8000003);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    local_50 = 0;
    uVar2 = 0xe8000003;
    __os_log_internal(0,_md_log_log,0x10,"Failed to create queue: 0x%08x (%s: %@)",0xe8000003,
                      "kAMDNoResourcesError",lVar5);
    lVar8 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    lVar4 = 0;
    local_78 = 0;
    goto LAB_0011b5da;
  }
  local_78 = _remote_device_copy_service(param_1,"com.apple.mobile.storage_mounter_proxy.bridge");
  if (local_78 == 0) {
    lVar5 = _AMDCopyErrorText(0xe8000022);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar12 = "kAMDInvalidServiceError";
    pcVar11 = "Failed to start %s: 0x%08x (%s: %@)";
    uVar2 = 0xe8000022;
    uVar7 = 0xe8000022;
  }
  else {
    lVar3 = _xpc_remote_connection_create_with_remote_service(local_78,object._os_obj,0);
    if (lVar3 != 0) {
      _xpc_remote_connection_set_event_handler(lVar3,&___block_literal_global_153);
      lVar4 = _xpc_dictionary_create(0,0,0);
      if (lVar4 == 0) {
        lVar5 = _AMDCopyErrorText(0xe8000003);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar11 = "Failed to create xpc request message: 0x%08x (%s: %@)";
LAB_0011b49d:
        __os_log_internal(0,_md_log_log,0x10,pcVar11,0xe8000003,"kAMDNoResourcesError",lVar5);
        local_68 = 0;
LAB_0011b566:
        uVar2 = 0xe8000003;
        local_60 = 0;
LAB_0011b56e:
        local_38 = 0;
        local_58 = 0;
        lVar8 = 0;
        local_40 = 0;
        pvVar6 = (void *)0x0;
        local_50 = 0;
      }
      else {
        local_68 = _xpc_dictionary_create(0,0,0);
        if (local_68 == 0) {
          lVar5 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Failed to create xpc request dictionary: 0x%08x (%s: %@)";
          goto LAB_0011b49d;
        }
        lVar5 = _CFStringGetCStringPtr(&cf_RollPersonalizationNonce,0x8000100);
        if (lVar5 == 0) {
          lVar5 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Failed to get string: 0x%08x (%s: %@)";
LAB_0011b540:
          __os_log_internal(0,_md_log_log,0x10,pcVar11,0xe8000003,"kAMDNoResourcesError",lVar5);
          goto LAB_0011b566;
        }
        local_60 = _xpc_string_create(lVar5);
        if (local_60 == 0) {
          lVar5 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Failed to create xpc string: 0x%08x (%s: %@)";
          goto LAB_0011b540;
        }
        pvVar6 = (void *)_copyProcessName();
        if (pvVar6 == (void *)0x0) {
          lVar5 = _AMDCopyErrorText(0xe80000f1);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar2 = 0xe80000f1;
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to query current process name: 0x%08x (%s: %@)",0xe80000f1,
                            "kAMDInternalError",lVar5);
          goto LAB_0011b56e;
        }
        local_58 = _xpc_string_create(pvVar6);
        if (local_58 == 0) {
          lVar5 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s: %@)",
                            0xe8000003,"kAMDNoResourcesError",lVar5);
          local_58 = 0;
LAB_0011b7f7:
          uVar2 = 0xe8000003;
LAB_0011b8c2:
          local_38 = 0;
          local_40 = 0;
          lVar8 = 0;
          local_50 = 0;
        }
        else {
          uVar7 = _CFStringGetCStringPtr(&cf_Command,0x8000100);
          _xpc_dictionary_set_value(local_68,uVar7,local_60);
          uVar7 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
          _xpc_dictionary_set_value(local_68,uVar7,local_58);
          if ((param_2 != 0) &&
             (lVar5 = _CFDictionaryGetValue(param_2,&cf_PersonalizedImageType), lVar5 != 0)) {
            lVar8 = _CFGetTypeID(lVar5);
            lVar9 = _CFStringGetTypeID();
            if (lVar8 == lVar9) {
              lVar5 = _CFStringGetCStringPtr(lVar5,0x8000100);
              if (lVar5 == 0) {
                lVar5 = _AMDCopyErrorText(0xe8000003);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar11 = "Failed to get string: 0x%08x (%s: %@)";
              }
              else {
                local_50 = _xpc_string_create(lVar5);
                if (local_50 != 0) {
                  uVar7 = _CFStringGetCStringPtr(&cf_PersonalizedImageType,0x8000100);
                  _xpc_dictionary_set_value(local_68,uVar7,local_50);
                  goto LAB_0011b6c1;
                }
                lVar5 = _AMDCopyErrorText(0xe8000003);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar11 = "Failed to create xpc string: 0x%08x (%s: %@)";
              }
              __os_log_internal(0,_md_log_log,0x10,pcVar11,0xe8000003,"kAMDNoResourcesError",lVar5);
              goto LAB_0011b7f7;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Invalid value for options key: %@",
                              &cf_PersonalizedImageType);
            uVar2 = 0xe80000f1;
            lVar5 = 0;
            goto LAB_0011b8c2;
          }
          local_50 = 0;
LAB_0011b6c1:
          _xpc_dictionary_set_value(lVar4,"XPCRequestDictionary",local_68);
          _xpc_remote_connection_activate(lVar3);
          lVar8 = _xpc_remote_connection_send_message_with_reply_sync(lVar3,lVar4);
          if (lVar8 == 0) {
            lVar5 = _AMDCopyErrorText(0xe8000004);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            local_38 = 0;
            uVar2 = 0xe8000004;
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to roll personalization nonce: 0x%08x (%s: %@)",0xe8000004,
                              "kAMDReadError",lVar5);
            lVar8 = 0;
            local_40 = 0;
          }
          else {
            uVar7 = _CFStringGetCStringPtr(&cf_Error,0x8000100);
            lVar5 = _xpc_dictionary_get_value(lVar8,uVar7);
            if (lVar5 == 0) {
              local_40 = __CFXPCCreateCFObjectFromXPCObject(lVar8);
              if (local_40 == 0) {
LAB_0011b992:
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"Invalid response message.");
LAB_0011b9cc:
                uVar2 = 0xe8000004;
              }
              else {
                lVar5 = _CFGetTypeID(local_40);
                lVar9 = _CFDictionaryGetTypeID();
                if (lVar5 != lVar9) goto LAB_0011b992;
                lVar5 = _CFDictionaryGetValue(local_40,&cf_Error);
                if (lVar5 != 0) {
                  _CFDictionaryGetValue(local_40,&cf_DetailedError);
                  uVar2 = _MobileDevelopmentConvertError(lVar5);
                  lVar5 = _AMDCopyErrorText(uVar2);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar7 = _md_log_log;
                  uVar10 = _AMDErrorString(uVar2);
                  pcVar11 = "An error occurred while sending message: 0x%08x (%s: %@) (%@)";
                  local_38 = 0;
                  goto LAB_0011b778;
                }
                lVar5 = _CFDictionaryGetValue(local_40,&cf_Status);
                if (lVar5 == 0) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,0x10,"Response message missing key: %@",&cf_Status
                                   );
                  goto LAB_0011b9cc;
                }
                cVar1 = _CFEqual(lVar5,&cf_Complete);
                if (cVar1 != '\0') {
                  local_38 = 0;
                  lVar5 = 0;
                  uVar2 = 0;
                  goto LAB_0011b58c;
                }
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"Status is not complete: %@",lVar5);
                uVar2 = 0xe80000f1;
              }
              local_38 = 0;
              lVar5 = 0;
            }
            else {
              local_38 = __CFXPCCreateCFObjectFromXPCObject(lVar5);
              uVar2 = _MobileDevelopmentConvertError(local_38);
              lVar5 = _AMDCopyErrorText(uVar2);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar7 = _md_log_log;
              uVar10 = _AMDErrorString(uVar2);
              pcVar11 = "There was an error rolling personalization nonce: 0x%08x (%s: %@)";
              local_40 = 0;
LAB_0011b778:
              __os_log_internal(0,uVar7,0x10,pcVar11,uVar2,uVar10,lVar5);
            }
          }
        }
      }
LAB_0011b58c:
      _dispatch_release(object);
      _xpc_remote_connection_cancel(lVar3);
      _os_release(lVar3);
      if (pvVar6 != (void *)0x0) {
        _free(pvVar6);
      }
      if (local_38 != 0) {
        _CFRelease();
      }
      if (local_40 != 0) {
        _CFRelease();
      }
      goto LAB_0011b5da;
    }
    lVar5 = _AMDCopyErrorText(0xe8000032);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar12 = "kAMDStartServiceError";
    pcVar11 = "Failed to connect to %s: 0x%08x (%s: %@)";
    uVar2 = 0xe8000032;
    uVar7 = 0xe8000032;
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar11,"com.apple.mobile.storage_mounter_proxy.bridge",uVar7
                    ,pcVar12,lVar5);
  _dispatch_release(object);
  local_50 = 0;
  lVar8 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  lVar4 = 0;
LAB_0011b5da:
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar4 != 0) {
    _xpc_release(lVar4);
  }
  if (local_68 != 0) {
    _xpc_release(local_68);
  }
  if (local_60 != 0) {
    _xpc_release();
  }
  if (local_58 != 0) {
    _xpc_release();
  }
  if (lVar8 != 0) {
    _xpc_release(lVar8);
  }
  if (local_78 != 0) {
    _os_release();
  }
  if (local_50 != 0) {
    _xpc_release(local_50);
  }
  return uVar2;
}

