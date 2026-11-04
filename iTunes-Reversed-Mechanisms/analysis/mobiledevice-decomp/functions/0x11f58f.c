// rea decompile_all
// name: _AMDeviceRemoteCopyCryptexNonce
// address: 0x11f58f
// body: available
// range: 0x11f58f-0x11ffc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceRemoteCopyCryptexNonce(long param_1,undefined4 *param_2)

{
  dispatch_object_t object;
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_40;
  undefined4 local_34;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    local_34 = 0xe8000007;
    local_40 = 0;
  }
  else {
    object._os_obj =
         (_os_object_s *)
         _dispatch_queue_create("com.apple.storage_proxy.remote",(dispatch_queue_attr_t)0x0);
    if (object._os_obj != (_os_object_s *)0x0) {
      local_70 = _remote_device_copy_service
                           (param_1,"com.apple.mobile.storage_mounter_proxy.bridge");
      if (local_70 == 0) {
        local_40 = _AMDCopyErrorText(0xe8000022);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_34 = 0xe8000022;
        __os_log_internal(0,_md_log_log,0x10,"Failed to start %s: 0x%08x (%s: %@)",
                          "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000022,
                          "kAMDInvalidServiceError",local_40);
        local_70 = 0;
LAB_0011f974:
        lVar1 = 0;
LAB_0011f977:
        local_68 = 0;
LAB_0011f97f:
        local_60 = 0;
LAB_0011f987:
        pvVar3 = (void *)0x0;
        local_58 = 0;
LAB_0011f98f:
        lVar2 = 0;
      }
      else {
        lVar1 = _xpc_remote_connection_create_with_remote_service(local_70,object._os_obj,0);
        if (lVar1 == 0) {
          local_40 = _AMDCopyErrorText(0xe8000032);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_34 = 0xe8000032;
          __os_log_internal(0,_md_log_log,0x10,"Failed to connect to %s: 0x%08x (%s: %@)",
                            "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000032,
                            "kAMDStartServiceError",local_40);
          goto LAB_0011f974;
        }
        _xpc_remote_connection_set_event_handler(lVar1,&___block_literal_global_185);
        local_68 = _xpc_dictionary_create(0,0,0);
        if (local_68 == 0) {
          local_40 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_34 = 0xe8000003;
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to create xpc request message: 0x%08x (%s: %@)",0xe8000003,
                            "kAMDNoResourcesError",local_40);
          goto LAB_0011f977;
        }
        local_60 = _xpc_dictionary_create(0,0,0);
        if (local_60 == 0) {
          local_40 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_34 = 0xe8000003;
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to create xpc request dictionary: 0x%08x (%s: %@)",0xe8000003,
                            "kAMDNoResourcesError",local_40);
          goto LAB_0011f97f;
        }
        lVar2 = _CFStringGetCStringPtr(&cf_QueryCryptexNonce,0x8000100);
        if (lVar2 == 0) {
          local_40 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Failed to get string: 0x%08x (%s: %@)";
LAB_0011fb93:
          local_34 = 0xe8000003;
          __os_log_internal(0,_md_log_log,0x10,pcVar11,0xe8000003,"kAMDNoResourcesError",local_40);
          goto LAB_0011f987;
        }
        local_58 = _xpc_string_create(lVar2);
        if (local_58 == 0) {
          local_40 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Failed to create xpc string: 0x%08x (%s: %@)";
          goto LAB_0011fb93;
        }
        pvVar3 = (void *)_copyProcessName();
        if (pvVar3 == (void *)0x0) {
          local_40 = _AMDCopyErrorText(0xe80000f1);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_34 = 0xe80000f1;
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to query current process name: 0x%08x (%s: %@)",0xe80000f1,
                            "kAMDInternalError",local_40);
          pvVar3 = (void *)0x0;
          goto LAB_0011f98f;
        }
        lVar2 = _xpc_string_create(pvVar3);
        if (lVar2 == 0) {
          local_40 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_34 = 0xe8000003;
          __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s: %@)",
                            0xe8000003,"kAMDNoResourcesError",local_40);
          goto LAB_0011f98f;
        }
        uVar4 = _CFStringGetCStringPtr(&cf_Command,0x8000100);
        _xpc_dictionary_set_value(local_60,uVar4,local_58);
        uVar4 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
        _xpc_dictionary_set_value(local_60,uVar4,lVar2);
        _xpc_dictionary_set_value(local_68,"XPCRequestDictionary",local_60);
        _xpc_remote_connection_activate(lVar1);
        lVar5 = _xpc_remote_connection_send_message_with_reply_sync(lVar1,local_68);
        if (lVar5 != 0) {
          uVar4 = _CFStringGetCStringPtr(&cf_Error,0x8000100);
          lVar6 = _xpc_dictionary_get_value(lVar5,uVar4);
          if (lVar6 != 0) {
            lVar6 = __CFXPCCreateCFObjectFromXPCObject(lVar6);
            local_34 = _MobileDevelopmentConvertError(lVar6);
            local_40 = _AMDCopyErrorText(local_34);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar4 = _md_log_log;
            uVar7 = _AMDErrorString(local_34);
            local_50 = 0;
            __os_log_internal(0,uVar4,0x10,
                              "There was an error copying personalization nonce: 0x%08x (%s: %@)",
                              local_34,uVar7,local_40);
            goto LAB_0011f999;
          }
          uVar4 = _CFStringGetCStringPtr(&cf_CryptexNonce,0x8000100);
          lVar6 = _xpc_dictionary_get_value(lVar5,uVar4);
          if ((lVar6 == 0) ||
             (puVar8 = (undefined *)_xpc_get_type(lVar6), puVar8 != PTR___xpc_type_data_00441310)) {
            local_40 = _AMDCopyErrorText(0xe80000f1);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            local_50 = 0;
            local_34 = 0xe80000f1;
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to get cryptex nonce from XPC reply: 0x%08x (%s: %@)",
                              0xe80000f1,"kAMDInternalError",local_40);
            lVar6 = 0;
            goto LAB_0011f999;
          }
          local_50 = __CFXPCCreateCFObjectFromXPCObject(lVar6);
          if (local_50 == 0) {
LAB_0011fdc5:
            local_40 = _AMDCopyErrorText(0xe80000f1);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to get result from XPC object %@: 0x%08x (%s: %@)",lVar6,
                              0xe80000f1,"kAMDInternalError",local_40);
          }
          else {
            lVar9 = _CFGetTypeID(local_50);
            lVar10 = _CFDataGetTypeID();
            if (lVar9 != lVar10) goto LAB_0011fdc5;
            local_40 = 0;
          }
          lVar6 = 0;
          local_34 = 0;
          goto LAB_0011f999;
        }
        local_40 = _AMDCopyErrorText(0xe8000004);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_34 = 0xe8000004;
        __os_log_internal(0,_md_log_log,0x10,"Failed to copy cryptex nonce: 0x%08x (%s: %@)",
                          0xe8000004,"kAMDReadError",local_40);
      }
      local_50 = 0;
      lVar6 = 0;
      lVar5 = 0;
      goto LAB_0011f999;
    }
    local_40 = _AMDCopyErrorText(0xe8000003);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    local_34 = 0xe8000003;
    __os_log_internal(0,_md_log_log,0x10,"Failed to create queue: 0x%08x (%s: %@)",0xe8000003,
                      "kAMDNoResourcesError",local_40);
  }
  local_50 = 0;
  lVar6 = 0;
  pvVar3 = (void *)0x0;
  local_70 = 0;
  lVar1 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  lVar2 = 0;
  lVar5 = 0;
  object._os_obj = (_os_object_s *)0x0;
LAB_0011f999:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_34;
  }
  if (object._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(object);
  }
  if (lVar1 != 0) {
    _xpc_remote_connection_cancel(lVar1);
    _os_release(lVar1);
  }
  if (pvVar3 != (void *)0x0) {
    _free(pvVar3);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (local_68 != 0) {
    _xpc_release();
  }
  if (local_60 != 0) {
    _xpc_release();
  }
  if (local_58 != 0) {
    _xpc_release();
  }
  if (lVar5 != 0) {
    _xpc_release(lVar5);
  }
  if (lVar2 != 0) {
    _xpc_release(lVar2);
  }
  if (local_70 != 0) {
    _os_release(local_70);
  }
  return local_50;
}

