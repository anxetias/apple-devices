// rea decompile_all
// name: _AMDeviceRemoteCopyPersonalizationNonceWithOptions
// address: 0x11d477
// body: available
// range: 0x11d477-0x11e064 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceRemoteCopyPersonalizationNonceWithOptions
               (long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  char *pcVar11;
  dispatch_object_t local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  void *local_50;
  long local_48;
  long local_38;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10);
    uVar1 = 0xe8000007;
    lVar3 = 0;
LAB_0011d6bc:
    local_70 = 0;
    local_78._os_obj = (_os_object_s *)0x0;
  }
  else {
    local_78._os_obj =
         (_os_object_s *)
         _dispatch_queue_create("com.apple.storage_proxy.remote",(dispatch_queue_attr_t)0x0);
    if (local_78._os_obj == (_os_object_s *)0x0) {
      lVar3 = _AMDCopyErrorText(0xe8000003);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = 0xe8000003;
      __os_log_internal(0,_md_log_log,0x10,"Failed to create queue: 0x%08x (%s: %@)",0xe8000003,
                        "kAMDNoResourcesError",lVar3);
      goto LAB_0011d6bc;
    }
    local_70 = _remote_device_copy_service(param_1,"com.apple.mobile.storage_mounter_proxy.bridge");
    if (local_70 == 0) {
      lVar3 = _AMDCopyErrorText(0xe8000022);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = 0xe8000022;
      __os_log_internal(0,_md_log_log,0x10,"Failed to start %s: 0x%08x (%s: %@)",
                        "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000022,
                        "kAMDInvalidServiceError",lVar3);
      local_70 = 0;
    }
    else {
      lVar2 = _xpc_remote_connection_create_with_remote_service(local_70,local_78._os_obj,0);
      if (lVar2 != 0) {
        _xpc_remote_connection_set_event_handler(lVar2,&___block_literal_global_167);
        local_68 = _xpc_dictionary_create(0,0,0);
        if (local_68 == 0) {
          lVar3 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to create xpc request message: 0x%08x (%s: %@)",0xe8000003,
                            "kAMDNoResourcesError",lVar3);
          local_68 = 0;
LAB_0011d9b5:
          local_60 = 0;
LAB_0011da5d:
          local_50 = (void *)0x0;
          uVar1 = 0xe8000003;
          local_58 = 0;
LAB_0011da65:
          local_48 = 0;
        }
        else {
          local_60 = _xpc_dictionary_create(0,0,0);
          if (local_60 == 0) {
            lVar3 = _AMDCopyErrorText(0xe8000003);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to create xpc request dictionary: 0x%08x (%s: %@)",0xe8000003,
                              "kAMDNoResourcesError",lVar3);
            goto LAB_0011d9b5;
          }
          lVar3 = _CFStringGetCStringPtr(&cf_QueryNonce,0x8000100);
          if (lVar3 == 0) {
            lVar3 = _AMDCopyErrorText(0xe8000003);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar11 = "Failed to get string: 0x%08x (%s: %@)";
LAB_0011da2c:
            __os_log_internal(0,_md_log_log,0x10,pcVar11,0xe8000003,"kAMDNoResourcesError",lVar3);
            goto LAB_0011da5d;
          }
          local_58 = _xpc_string_create(lVar3);
          if (local_58 == 0) {
            lVar3 = _AMDCopyErrorText(0xe8000003);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar11 = "Failed to create xpc string: 0x%08x (%s: %@)";
            goto LAB_0011da2c;
          }
          local_50 = (void *)_copyProcessName();
          if (local_50 == (void *)0x0) {
            lVar3 = _AMDCopyErrorText(0xe80000f1);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar1 = 0xe80000f1;
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to query current process name: 0x%08x (%s: %@)",0xe80000f1,
                              "kAMDInternalError",lVar3);
            local_50 = (void *)0x0;
            goto LAB_0011da65;
          }
          local_48 = _xpc_string_create(local_50);
          if (local_48 == 0) {
            lVar3 = _AMDCopyErrorText(0xe8000003);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar1 = 0xe8000003;
            __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s: %@)",
                              0xe8000003,"kAMDNoResourcesError",lVar3);
            goto LAB_0011da65;
          }
          if ((param_2 == 0) ||
             (lVar3 = _CFDictionaryGetValue(param_2,&cf_PersonalizedImageType), lVar3 == 0)) {
            lVar4 = 0;
LAB_0011dae6:
            uVar6 = _CFStringGetCStringPtr(&cf_Command,0x8000100);
            _xpc_dictionary_set_value(local_60,uVar6,local_58);
            uVar6 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
            _xpc_dictionary_set_value(local_60,uVar6,local_48);
            _xpc_dictionary_set_value(local_68,"XPCRequestDictionary",local_60);
            _xpc_remote_connection_activate(lVar2);
            lVar5 = _xpc_remote_connection_send_message_with_reply_sync(lVar2,local_68);
            if (lVar5 == 0) {
              lVar3 = _AMDCopyErrorText(0xe8000004);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              local_38 = 0;
              uVar1 = 0xe8000004;
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to copy personalization nonce: 0x%08x (%s: %@)",0xe8000004,
                                "kAMDReadError",lVar3);
              lVar7 = 0;
              lVar5 = 0;
              goto LAB_0011d812;
            }
            uVar6 = _CFStringGetCStringPtr(&cf_Error,0x8000100);
            lVar3 = _xpc_dictionary_get_value(lVar5,uVar6);
            if (lVar3 != 0) {
              lVar7 = __CFXPCCreateCFObjectFromXPCObject(lVar3);
              uVar1 = _MobileDevelopmentConvertError(lVar7);
              lVar3 = _AMDCopyErrorText(uVar1);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar6 = _md_log_log;
              uVar8 = _AMDErrorString(uVar1);
              local_38 = 0;
              __os_log_internal(0,uVar6,0x10,
                                "There was an error copying personalization nonce: 0x%08x (%s: %@)",
                                uVar1,uVar8,lVar3);
              goto LAB_0011d812;
            }
            uVar6 = _CFStringGetCStringPtr(&cf_PersonalizationNonce,0x8000100);
            lVar7 = _xpc_dictionary_get_value(lVar5,uVar6);
            if ((lVar7 == 0) ||
               (puVar9 = (undefined *)_xpc_get_type(lVar7), puVar9 != PTR___xpc_type_data_00441310))
            {
              lVar3 = _AMDCopyErrorText(0xe80000f1);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              local_38 = 0;
              uVar1 = 0xe80000f1;
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to get personalization nonce from XPC reply: 0x%08x (%s: %@)"
                                ,0xe80000f1,"kAMDInternalError",lVar3);
              lVar7 = 0;
              goto LAB_0011d812;
            }
            local_38 = __CFXPCCreateCFObjectFromXPCObject(lVar7);
            if (local_38 == 0) {
LAB_0011de6e:
              lVar3 = _AMDCopyErrorText(0xe80000f1);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to get result from XPC object %@: 0x%08x (%s: %@)",lVar7,
                                0xe80000f1,"kAMDInternalError",lVar3);
            }
            else {
              lVar3 = _CFGetTypeID(local_38);
              lVar10 = _CFDataGetTypeID();
              if (lVar3 != lVar10) goto LAB_0011de6e;
              lVar3 = 0;
            }
            lVar7 = 0;
            uVar1 = 0;
            goto LAB_0011d812;
          }
          lVar4 = _CFGetTypeID(lVar3);
          lVar5 = _CFStringGetTypeID();
          if (lVar4 == lVar5) {
            lVar3 = _CFStringGetCStringPtr(lVar3,0x8000100);
            if (lVar3 == 0) {
              lVar3 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar11 = "Failed to get string: 0x%08x (%s: %@)";
            }
            else {
              lVar4 = _xpc_string_create(lVar3);
              if (lVar4 != 0) {
                uVar6 = _CFStringGetCStringPtr(&cf_PersonalizedImageType,0x8000100);
                _xpc_dictionary_set_value(local_60,uVar6,lVar4);
                goto LAB_0011dae6;
              }
              lVar3 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar11 = "Failed to create xpc string: 0x%08x (%s: %@)";
            }
            uVar1 = 0xe8000003;
            __os_log_internal(0,_md_log_log,0x10,pcVar11,0xe8000003,"kAMDNoResourcesError",lVar3);
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Invalid value for options key: %@",
                              &cf_PersonalizedImageType);
            uVar1 = 0xe8000007;
            lVar3 = 0;
          }
        }
        local_38 = 0;
        lVar7 = 0;
        lVar5 = 0;
        lVar4 = 0;
        goto LAB_0011d812;
      }
      lVar3 = _AMDCopyErrorText(0xe8000032);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = 0xe8000032;
      __os_log_internal(0,_md_log_log,0x10,"Failed to connect to %s: 0x%08x (%s: %@)",
                        "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000032,
                        "kAMDStartServiceError",lVar3);
    }
  }
  local_38 = 0;
  local_48 = 0;
  local_50 = (void *)0x0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  lVar5 = 0;
  lVar7 = 0;
  lVar2 = 0;
  lVar4 = 0;
LAB_0011d812:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar1;
  }
  if (lVar2 != 0) {
    _xpc_remote_connection_cancel(lVar2);
    _os_release(lVar2);
  }
  if (local_78._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(local_78);
  }
  if (local_50 != (void *)0x0) {
    _free(local_50);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
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
  if (local_48 != 0) {
    _xpc_release();
  }
  if (local_70 != 0) {
    _os_release(local_70);
  }
  if (lVar4 != 0) {
    _xpc_release(lVar4);
  }
  return local_38;
}

