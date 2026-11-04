// rea decompile_all
// name: _AMDeviceRemoteUnmountImage
// address: 0x11a645
// body: available
// range: 0x11a645-0x11b0b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMDeviceRemoteUnmountImage(long param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  dispatch_object_t object;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  long local_68;
  long local_60;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (param_1 == 0 || param_2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input(s).");
    return 0xe8000007;
  }
  object._os_obj =
       (_os_object_s *)
       _dispatch_queue_create("com.apple.storage_proxy.remote",(dispatch_queue_attr_t)0x0);
  if (object._os_obj == (_os_object_s *)0x0) {
    lVar7 = _AMDCopyErrorText(0xe8000003);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar4 = 0;
    uVar3 = 0xe8000003;
    __os_log_internal(0,_md_log_log,0x10,"Failed to create queue: 0x%08x (%s: %@)",0xe8000003,
                      "kAMDNoResourcesError",lVar7);
    goto LAB_0011ac2c;
  }
  lVar4 = _remote_device_copy_service(param_1,"com.apple.mobile.storage_mounter_proxy.bridge");
  if (lVar4 == 0) {
    lVar7 = _AMDCopyErrorText(0xe8000022);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar13 = "kAMDInvalidServiceError";
    pcVar12 = "Failed to start %s: 0x%08x (%s: %@)";
    uVar3 = 0xe8000022;
    uVar9 = 0xe8000022;
  }
  else {
    lVar5 = _xpc_remote_connection_create_with_remote_service(lVar4,object._os_obj,0);
    if (lVar5 != 0) {
      _xpc_remote_connection_set_event_handler(lVar5,&___block_literal_global_765);
      lVar6 = _xpc_dictionary_create(0,0,0);
      if (lVar6 == 0) {
        lVar7 = _AMDCopyErrorText(0xe8000003);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar12 = "Failed to create xpc request message: 0x%08x (%s: %@)";
LAB_0011aab0:
        __os_log_internal(0,_md_log_log,0x10,pcVar12,0xe8000003,"kAMDNoResourcesError",lVar7);
        local_68 = 0;
LAB_0011ab7b:
        local_60 = 0;
LAB_0011ab83:
        uVar3 = 0xe8000003;
        local_50 = 0;
LAB_0011ab93:
        local_38 = 0;
        local_48 = 0;
        pvVar8 = (void *)0x0;
        local_40 = 0;
      }
      else {
        local_68 = _xpc_dictionary_create(0,0,0);
        if (local_68 == 0) {
          lVar7 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar12 = "Failed to create xpc request dictionary: 0x%08x (%s: %@)";
          goto LAB_0011aab0;
        }
        lVar7 = _CFStringGetCStringPtr(&cf_UnmountImage,0x8000100);
        if (lVar7 == 0) {
          lVar7 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar12 = "Failed to get string: 0x%08x (%s: %@)";
LAB_0011ab51:
          __os_log_internal(0,_md_log_log,0x10,pcVar12,0xe8000003,"kAMDNoResourcesError",lVar7);
          goto LAB_0011ab7b;
        }
        local_60 = _xpc_string_create(lVar7);
        if (local_60 == 0) {
          lVar7 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar12 = "Failed to create xpc string: 0x%08x (%s: %@)";
          goto LAB_0011ab51;
        }
        lVar7 = _CFStringGetCStringPtr(param_2,0x8000100);
        if (lVar7 == 0) {
          lVar7 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar12 = "Failed to get string: 0x%08x (%s: %@)";
LAB_0011acc2:
          __os_log_internal(0,_md_log_log,0x10,pcVar12,0xe8000003,"kAMDNoResourcesError",lVar7);
          goto LAB_0011ab83;
        }
        local_50 = _xpc_string_create(lVar7);
        if (local_50 == 0) {
          lVar7 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar12 = "Failed to create xpc string: 0x%08x (%s: %@)";
          goto LAB_0011acc2;
        }
        pvVar8 = (void *)_copyProcessName();
        if (pvVar8 == (void *)0x0) {
          lVar7 = _AMDCopyErrorText(0xe80000f1);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar3 = 0xe80000f1;
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to query current process name: 0x%08x (%s: %@)",0xe80000f1,
                            "kAMDInternalError",lVar7);
          goto LAB_0011ab93;
        }
        local_48 = _xpc_string_create(pvVar8);
        if (local_48 == 0) {
          lVar7 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar3 = 0xe8000003;
          __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s: %@)",
                            0xe8000003,"kAMDNoResourcesError",lVar7);
          local_48 = 0;
LAB_0011ae59:
          local_38 = 0;
          local_40 = 0;
        }
        else {
          uVar9 = _CFStringGetCStringPtr(&cf_Command,0x8000100);
          _xpc_dictionary_set_value(local_68,uVar9,local_60);
          uVar9 = _CFStringGetCStringPtr(&cf_MountPath,0x8000100);
          _xpc_dictionary_set_value(local_68,uVar9,local_50);
          uVar9 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
          _xpc_dictionary_set_value(local_68,uVar9,local_48);
          _xpc_dictionary_set_value(lVar6,"XPCRequestDictionary",local_68);
          _xpc_remote_connection_activate(lVar5);
          local_40 = _xpc_remote_connection_send_message_with_reply_sync(lVar5,lVar6);
          if (local_40 == 0) {
            lVar7 = _AMDCopyErrorText(0xe8000004);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar3 = 0xe8000004;
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to copy personalization nonce: 0x%08x (%s: %@)",0xe8000004,
                              "kAMDReadError",lVar7);
            goto LAB_0011ae59;
          }
          local_38 = __CFXPCCreateCFObjectFromXPCObject(local_40);
          if (local_38 == 0) {
LAB_0011adc4:
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Invalid response message.");
LAB_0011adf6:
            lVar7 = 0;
            uVar3 = 0xe8000004;
          }
          else {
            lVar7 = _CFGetTypeID(local_38);
            lVar10 = _CFDictionaryGetTypeID();
            if (lVar7 != lVar10) goto LAB_0011adc4;
            lVar7 = _CFDictionaryGetValue(local_38,&cf_Error);
            if (lVar7 == 0) {
              lVar10 = _CFDictionaryGetValue(local_38,&cf_Status);
              if (lVar10 != 0) {
                cVar2 = _CFEqual(lVar10,&cf_Complete);
                if (cVar2 == '\0') {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  lVar7 = 0;
                  __os_log_internal(0,_md_log_log,0x10,"Status is not complete: %@",lVar10);
                  uVar3 = 0xe80000f1;
                }
                else {
                  lVar7 = 0;
                  uVar3 = 0;
                }
                goto LAB_0011ab9b;
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"Response message missing key: %@",&cf_Status);
              goto LAB_0011adf6;
            }
            uVar9 = _CFDictionaryGetValue(local_38,&cf_DetailedError);
            uVar3 = _MobileDevelopmentConvertError(lVar7);
            lVar7 = _AMDCopyErrorText(uVar3);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar1 = _md_log_log;
            uVar11 = _AMDErrorString(uVar3);
            __os_log_internal(0,uVar1,0x10,
                              "An error occurred while sending message: 0x%08x (%s: %@) (%@)",uVar3,
                              uVar11,lVar7,uVar9);
          }
        }
      }
LAB_0011ab9b:
      _dispatch_release(object);
      _xpc_remote_connection_cancel(lVar5);
      _os_release(lVar5);
      if (pvVar8 != (void *)0x0) {
        _free(pvVar8);
      }
      if (lVar6 != 0) {
        _xpc_release();
      }
      if (local_68 != 0) {
        _xpc_release();
      }
      if (local_60 != 0) {
        _xpc_release();
      }
      if (local_50 != 0) {
        _xpc_release();
      }
      if (local_40 != 0) {
        _xpc_release(local_40);
      }
      if (local_48 != 0) {
        _xpc_release(local_48);
      }
      if (local_38 != 0) {
        _CFRelease();
      }
      goto LAB_0011ac2c;
    }
    lVar7 = _AMDCopyErrorText(0xe8000032);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar13 = "kAMDStartServiceError";
    pcVar12 = "Failed to connect to %s: 0x%08x (%s: %@)";
    uVar3 = 0xe8000032;
    uVar9 = 0xe8000032;
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar12,"com.apple.mobile.storage_mounter_proxy.bridge",uVar9
                    ,pcVar13,lVar7);
  _dispatch_release(object);
LAB_0011ac2c:
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar4 != 0) {
    _os_release(lVar4);
  }
  return uVar3;
}

