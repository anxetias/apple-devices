// rea decompile_all
// name: _AMDeviceRemoteRollCryptexNonce
// address: 0x11bd0c
// body: available
// range: 0x11bd0c-0x11c809 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMDeviceRemoteRollCryptexNonce(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  dispatch_object_t object;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  long local_80;
  long local_68;
  long local_58;
  long local_48;
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
    local_38 = _AMDCopyErrorText(0xe8000003);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    local_58 = 0;
    uVar2 = 0xe8000003;
    __os_log_internal(0,_md_log_log,0x10,"Failed to create queue: 0x%08x (%s: %@)",0xe8000003,
                      "kAMDNoResourcesError",local_38);
    lVar7 = 0;
    lVar5 = 0;
    local_68 = 0;
    lVar4 = 0;
    local_80 = 0;
    goto LAB_0011c274;
  }
  local_80 = _remote_device_copy_service(param_1,"com.apple.mobile.storage_mounter_proxy.bridge");
  if (local_80 == 0) {
    local_38 = _AMDCopyErrorText(0xe8000022);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar13 = "kAMDInvalidServiceError";
    pcVar12 = "Failed to start %s: 0x%08x (%s: %@)";
    uVar2 = 0xe8000022;
    uVar8 = 0xe8000022;
  }
  else {
    lVar3 = _xpc_remote_connection_create_with_remote_service(local_80,object._os_obj,0);
    if (lVar3 != 0) {
      _xpc_remote_connection_set_event_handler(lVar3,&___block_literal_global_157);
      lVar4 = _xpc_dictionary_create(0,0,0);
      if (lVar4 == 0) {
        local_38 = _AMDCopyErrorText(0xe8000003);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar12 = "Failed to create xpc request message: 0x%08x (%s: %@)";
LAB_0011c139:
        __os_log_internal(0,_md_log_log,0x10,pcVar12,0xe8000003,"kAMDNoResourcesError",local_38);
        local_68 = 0;
LAB_0011c20e:
        local_40 = 0;
        uVar2 = 0xe8000003;
        lVar5 = 0;
        lVar7 = 0;
        local_58 = 0;
        local_48 = 0;
        pvVar6 = (void *)0x0;
      }
      else {
        local_68 = _xpc_dictionary_create(0,0,0);
        if (local_68 == 0) {
          local_38 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar12 = "Failed to create xpc request dictionary: 0x%08x (%s: %@)";
          goto LAB_0011c139;
        }
        lVar5 = _CFStringGetCStringPtr(&cf_RollCryptexNonce,0x8000100);
        if (lVar5 == 0) {
          local_38 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar12 = "Failed to get string: 0x%08x (%s: %@)";
LAB_0011c1e7:
          __os_log_internal(0,_md_log_log,0x10,pcVar12,0xe8000003,"kAMDNoResourcesError",local_38);
          goto LAB_0011c20e;
        }
        lVar5 = _xpc_string_create(lVar5);
        if (lVar5 == 0) {
          local_38 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar12 = "Failed to create xpc string: 0x%08x (%s: %@)";
          goto LAB_0011c1e7;
        }
        pvVar6 = (void *)_copyProcessName();
        if (pvVar6 == (void *)0x0) {
          local_38 = _AMDCopyErrorText(0xe80000f1);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_40 = 0;
          uVar2 = 0xe80000f1;
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to query current process name: 0x%08x (%s: %@)",0xe80000f1,
                            "kAMDInternalError",local_38);
          lVar7 = 0;
          local_58 = 0;
          local_48 = 0;
          pvVar6 = (void *)0x0;
        }
        else {
          lVar7 = _xpc_string_create(pvVar6);
          if (lVar7 == 0) {
            local_38 = _AMDCopyErrorText(0xe8000003);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar2 = 0xe8000003;
            __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s: %@)",
                              0xe8000003,"kAMDNoResourcesError",local_38);
            lVar7 = 0;
          }
          else {
            uVar8 = _CFStringGetCStringPtr(&cf_Command,0x8000100);
            _xpc_dictionary_set_value(local_68,uVar8,lVar5);
            uVar8 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
            _xpc_dictionary_set_value(local_68,uVar8,lVar7);
            _xpc_dictionary_set_value(lVar4,"XPCRequestDictionary",local_68);
            _xpc_remote_connection_activate(lVar3);
            local_58 = _xpc_remote_connection_send_message_with_reply_sync(lVar3,lVar4);
            if (local_58 != 0) {
              uVar8 = _CFStringGetCStringPtr(&cf_Error,0x8000100);
              lVar9 = _xpc_dictionary_get_value(local_58,uVar8);
              if (lVar9 == 0) {
                local_48 = __CFXPCCreateCFObjectFromXPCObject(local_58);
                if (local_48 != 0) {
                  lVar9 = _CFGetTypeID(local_48);
                  lVar11 = _CFDictionaryGetTypeID();
                  if (lVar9 == lVar11) {
                    lVar9 = _CFDictionaryGetValue(local_48,&cf_Error);
                    if (lVar9 == 0) {
                      lVar9 = _CFDictionaryGetValue(local_48,&cf_Status);
                      if (lVar9 == 0) {
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        __os_log_internal(0,_md_log_log,0x10,"Response message missing key: %@",
                                          &cf_Status);
                        uVar2 = 0xe8000004;
                      }
                      else {
                        cVar1 = _CFEqual(lVar9,&cf_Complete);
                        if (cVar1 != '\0') {
                          local_40 = 0;
                          local_38 = 0;
                          uVar2 = 0;
                          goto LAB_0011c226;
                        }
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        __os_log_internal(0,_md_log_log,0x10,"Status is not complete: %@",lVar9);
                        uVar2 = 0xe80000f1;
                      }
                      local_40 = 0;
                      local_38 = 0;
                      goto LAB_0011c226;
                    }
                    _CFDictionaryGetValue(local_48,&cf_DetailedError);
                    uVar2 = _MobileDevelopmentConvertError(lVar9);
                    local_38 = _AMDCopyErrorText(uVar2);
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    uVar8 = _md_log_log;
                    uVar10 = _AMDErrorString(uVar2);
                    pcVar12 = "An error occurred while sending message: 0x%08x (%s: %@) (%@)";
                    local_40 = 0;
                    goto LAB_0011bf1c;
                  }
                }
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                local_40 = 0;
                __os_log_internal(0,_md_log_log,0x10,"Invalid response message.");
                uVar2 = 0xe8000004;
                local_38 = 0;
              }
              else {
                local_40 = __CFXPCCreateCFObjectFromXPCObject(lVar9);
                uVar2 = _MobileDevelopmentConvertError(local_40);
                local_38 = _AMDCopyErrorText(uVar2);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar8 = _md_log_log;
                uVar10 = _AMDErrorString(uVar2);
                pcVar12 = "There was an error rolling cryptex nonce: 0x%08x (%s: %@)";
                local_48 = 0;
LAB_0011bf1c:
                __os_log_internal(0,uVar8,0x10,pcVar12,uVar2,uVar10,local_38);
              }
              goto LAB_0011c226;
            }
            local_38 = _AMDCopyErrorText(0xe8000004);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar2 = 0xe8000004;
            __os_log_internal(0,_md_log_log,0x10,"Failed to roll cryptex nonce: 0x%08x (%s: %@)",
                              0xe8000004,"kAMDReadError",local_38);
          }
          local_40 = 0;
          local_58 = 0;
          local_48 = 0;
        }
      }
LAB_0011c226:
      _dispatch_release(object);
      _xpc_remote_connection_cancel(lVar3);
      _os_release(lVar3);
      if (pvVar6 != (void *)0x0) {
        _free(pvVar6);
      }
      if (local_40 != 0) {
        _CFRelease();
      }
      if (local_48 != 0) {
        _CFRelease();
      }
      goto LAB_0011c274;
    }
    local_38 = _AMDCopyErrorText(0xe8000032);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar13 = "kAMDStartServiceError";
    pcVar12 = "Failed to connect to %s: 0x%08x (%s: %@)";
    uVar2 = 0xe8000032;
    uVar8 = 0xe8000032;
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar12,"com.apple.mobile.storage_mounter_proxy.bridge",uVar8
                    ,pcVar13,local_38);
  _dispatch_release(object);
  local_58 = 0;
  lVar7 = 0;
  lVar5 = 0;
  local_68 = 0;
  lVar4 = 0;
LAB_0011c274:
  if (local_38 != 0) {
    _CFRelease(local_38);
  }
  if (lVar4 != 0) {
    _xpc_release();
  }
  if (local_68 != 0) {
    _xpc_release(local_68);
  }
  if (lVar5 != 0) {
    _xpc_release(lVar5);
  }
  if (local_58 != 0) {
    _xpc_release(local_58);
  }
  if (lVar7 != 0) {
    _xpc_release(lVar7);
  }
  if (local_80 != 0) {
    _os_release();
  }
  return uVar2;
}

