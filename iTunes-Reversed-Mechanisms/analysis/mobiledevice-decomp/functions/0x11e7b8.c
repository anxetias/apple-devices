// rea decompile_all
// name: _AMDeviceRemoteCopyPersonalizationIdentifiersWithError
// address: 0x11e7b8
// body: available
// range: 0x11e7b8-0x11f588 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceRemoteCopyPersonalizationIdentifiersWithError
               (long param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  dispatch_object_t dVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  void *local_58;
  long local_50;
  dispatch_object_t local_48;
  long local_40;
  long local_38;
  
  local_88 = 0;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    local_40 = 0;
    __os_log_internal(0,_md_log_log,0x10);
LAB_0011e89d:
    uVar2 = 0xe80000f1;
LAB_0011e8a2:
    local_38 = 0;
  }
  else {
    cVar1 = _remote_device_os_is_at_least
                      (param_1,&cf_15_0,&cf_8_0,&cf_15_0,&cf_1_0,&cf_12_0,&cf_6_0,&local_88);
    if (local_88 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_40 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to check remote device OS version: %@",local_88);
      goto LAB_0011e89d;
    }
    if (cVar1 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_40 = 0;
      __os_log_internal(0,_md_log_log,0x10);
      uVar2 = 0xe800000f;
      goto LAB_0011e8a2;
    }
    dVar3._os_obj =
         (_os_object_s *)
         _dispatch_queue_create("com.apple.storage_proxy.remote",(dispatch_queue_attr_t)0x0);
    if (dVar3._os_obj != (_os_object_s *)0x0) {
      local_48._os_obj = dVar3._os_obj;
      lVar4 = _remote_device_copy_service(param_1,"com.apple.mobile.storage_mounter_proxy.bridge");
      if (lVar4 == 0) {
        local_38 = _AMDCopyErrorText(0xe8000022);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_40 = 0;
        uVar2 = 0xe8000022;
        __os_log_internal(0,_md_log_log,0x10,"Failed to start %s: 0x%08x (%s: %@)",
                          "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000022,
                          "kAMDInvalidServiceError",local_38);
        local_80 = 0;
      }
      else {
        lVar5 = _xpc_remote_connection_create_with_remote_service(lVar4,local_48._os_obj,0);
        local_80 = lVar4;
        if (lVar5 != 0) {
          local_50 = lVar5;
          _xpc_remote_connection_set_event_handler(lVar5,&___block_literal_global_179);
          local_78 = _xpc_dictionary_create(0,0,0);
          if (local_78 == 0) {
            local_38 = _AMDCopyErrorText(0xe8000003);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            local_40 = 0;
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to create xpc request message: 0x%08x (%s: %@)",0xe8000003,
                              "kAMDNoResourcesError",local_38);
            local_78 = 0;
LAB_0011ef24:
            uVar2 = 0xe8000003;
            local_70 = 0;
LAB_0011ef2c:
            local_58 = (void *)0x0;
            local_60 = 0;
            local_68 = 0;
LAB_0011ef3c:
            lVar4 = 0;
LAB_0011ef3f:
            lVar6 = 0;
            lVar5 = 0;
          }
          else {
            local_70 = _xpc_dictionary_create(0,0,0);
            if (local_70 == 0) {
              local_38 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              local_40 = 0;
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to create xpc request dictionary: 0x%08x (%s: %@)",
                                0xe8000003,"kAMDNoResourcesError",local_38);
              goto LAB_0011ef24;
            }
            if ((param_2 != 0) &&
               (lVar4 = _CFDictionaryGetValue(param_2,&cf_PersonalizedImageType), lVar4 != 0)) {
              lVar5 = _CFGetTypeID(lVar4);
              lVar6 = _CFStringGetTypeID();
              if (lVar5 == lVar6) {
                lVar4 = _CFStringGetCStringPtr(lVar4,0x8000100);
                if (lVar4 == 0) {
                  local_38 = _AMDCopyErrorText(0xe8000003);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar13 = "Failed to get string: 0x%08x (%s: %@)";
                }
                else {
                  lVar4 = _xpc_string_create(lVar4);
                  if (lVar4 != 0) {
                    uVar7 = _CFStringGetCStringPtr(&cf_PersonalizedImageType,0x8000100);
                    local_68 = lVar4;
                    _xpc_dictionary_set_value(local_70,uVar7,lVar4);
                    goto LAB_0011ed51;
                  }
                  local_38 = _AMDCopyErrorText(0xe8000003);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar13 = "Failed to create xpc string: 0x%08x (%s: %@)";
                }
                local_40 = 0;
                uVar2 = 0xe8000003;
                __os_log_internal(0,_md_log_log,0x10,pcVar13,0xe8000003,"kAMDNoResourcesError",
                                  local_38);
              }
              else {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                local_40 = 0;
                __os_log_internal(0,_md_log_log,0x10,"Invalid value for options key: %@",
                                  &cf_PersonalizedImageType);
                uVar2 = 0xe80000f1;
                local_38 = 0;
              }
              goto LAB_0011ef2c;
            }
            local_68 = 0;
LAB_0011ed51:
            lVar4 = _CFStringGetCStringPtr(&cf_QueryPersonalizationIdentifiers,0x8000100);
            if (lVar4 == 0) {
              local_38 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar13 = "Failed to get string: 0x%08x (%s: %@)";
LAB_0011f01c:
              local_40 = 0;
              uVar2 = 0xe8000003;
              __os_log_internal(0,_md_log_log,0x10,pcVar13,0xe8000003,"kAMDNoResourcesError",
                                local_38);
              local_58 = (void *)0x0;
              local_60 = 0;
              goto LAB_0011ef3c;
            }
            lVar4 = _xpc_string_create(lVar4);
            if (lVar4 == 0) {
              local_38 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar13 = "Failed to create xpc string: 0x%08x (%s: %@)";
              goto LAB_0011f01c;
            }
            uVar7 = _CFStringGetCStringPtr(&cf_Command,0x8000100);
            local_60 = lVar4;
            _xpc_dictionary_set_value(local_70,uVar7,lVar4);
            local_58 = (void *)_copyProcessName();
            if (local_58 == (void *)0x0) {
              local_38 = _AMDCopyErrorText(0xe80000f1);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              local_40 = 0;
              uVar2 = 0xe80000f1;
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to query current process name: 0x%08x (%s: %@)",0xe80000f1,
                                "kAMDInternalError",local_38);
              local_58 = (void *)0x0;
              goto LAB_0011ef3c;
            }
            lVar4 = _xpc_string_create(local_58);
            if (lVar4 == 0) {
              local_38 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              local_40 = 0;
              uVar2 = 0xe8000003;
              __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s: %@)",
                                0xe8000003,"kAMDNoResourcesError",local_38);
              goto LAB_0011ef3c;
            }
            uVar7 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
            lVar6 = local_70;
            _xpc_dictionary_set_value(local_70,uVar7,lVar4);
            lVar5 = local_78;
            _xpc_dictionary_set_value(local_78,"XPCRequestDictionary",lVar6);
            lVar6 = local_50;
            _xpc_remote_connection_activate(local_50);
            lVar5 = _xpc_remote_connection_send_message_with_reply_sync(lVar6,lVar5);
            if (lVar5 == 0) {
              local_38 = _AMDCopyErrorText(0xe8000004);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              local_40 = 0;
              uVar2 = 0xe8000004;
              __os_log_internal(0,_md_log_log,0x10,"Failed to get xpc response: 0x%08x (%s: %@)",
                                0xe8000004,"kAMDReadError",local_38);
              goto LAB_0011ef3f;
            }
            uVar7 = _CFStringGetCStringPtr(&cf_Error,0x8000100);
            lVar6 = _xpc_dictionary_get_value(lVar5,uVar7);
            if (lVar6 == 0) {
              uVar7 = _CFStringGetCStringPtr(&cf_PersonalizationIdentifiers,0x8000100);
              lVar9 = _xpc_dictionary_get_value(lVar5,uVar7);
              if ((lVar9 == 0) ||
                 (puVar10 = (undefined *)_xpc_get_type(lVar9),
                 puVar10 != PTR___xpc_type_dictionary_00441318)) {
                local_38 = _AMDCopyErrorText(0xe80000f1);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                local_40 = 0;
                uVar2 = 0xe80000f1;
                __os_log_internal(0,_md_log_log,0x10,
                                  "Failed to get personalization identifiers from XPC reply: 0x%08x (%s: %@)"
                                  ,0xe80000f1,"kAMDInternalError",local_38);
                lVar6 = 0;
              }
              else {
                lVar11 = __CFXPCCreateCFObjectFromXPCObject(lVar9);
                if (lVar11 != 0) {
                  lVar6 = _CFGetTypeID(lVar11);
                  lVar12 = _CFDictionaryGetTypeID();
                  if (lVar6 == lVar12) {
                    local_40 = 0;
                    uVar2 = 0;
                    lVar6 = 0;
                    local_38 = 0;
                    lVar9 = local_50;
                    dVar3 = local_48;
                    goto LAB_0011e8ea;
                  }
                }
                local_38 = _AMDCopyErrorText(0xe80000f1);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                lVar6 = 0;
                uVar2 = 0xe80000f1;
                __os_log_internal(0,_md_log_log,0x10,
                                  "Failed to convert XPC object %@ to CF: 0x%08x (%s: %@)",lVar9,
                                  0xe80000f1,"kAMDInternalError",local_38);
                local_40 = lVar11;
              }
            }
            else {
              lVar6 = __CFXPCCreateCFObjectFromXPCObject(lVar6);
              uVar2 = _MobileDevelopmentConvertError(lVar6);
              local_38 = _AMDCopyErrorText(uVar2);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar7 = _md_log_log;
              uVar8 = _AMDErrorString(uVar2);
              local_40 = 0;
              __os_log_internal(0,uVar7,0x10,
                                "There was an error copying personalization identifiers: 0x%08x (%s: %@)"
                                ,uVar2,uVar8,local_38);
            }
          }
          lVar11 = 0;
          lVar9 = local_50;
          dVar3 = local_48;
          goto LAB_0011e8ea;
        }
        local_38 = _AMDCopyErrorText(0xe8000032);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_40 = 0;
        uVar2 = 0xe8000032;
        __os_log_internal(0,_md_log_log,0x10,"Failed to connect to %s: 0x%08x (%s: %@)",
                          "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000032,
                          "kAMDStartServiceError",local_38);
      }
      local_58 = (void *)0x0;
      lVar6 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      local_68 = 0;
      lVar4 = 0;
      lVar5 = 0;
      lVar11 = 0;
      lVar9 = 0;
      dVar3 = local_48;
      goto LAB_0011e8ea;
    }
    local_38 = _AMDCopyErrorText(0xe8000003);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    local_40 = 0;
    uVar2 = 0xe8000003;
    __os_log_internal(0,_md_log_log,0x10,"Failed to create queue: 0x%08x (%s: %@)",0xe8000003,
                      "kAMDNoResourcesError",local_38);
  }
  local_58 = (void *)0x0;
  lVar6 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  lVar4 = 0;
  lVar5 = 0;
  lVar11 = 0;
  lVar9 = 0;
  dVar3._os_obj = (_os_object_s *)0x0;
LAB_0011e8ea:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  if (dVar3._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(dVar3);
  }
  if (lVar9 != 0) {
    _xpc_remote_connection_cancel(lVar9);
    _os_release(lVar9);
  }
  if (local_58 != (void *)0x0) {
    _free(local_58);
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  lVar6 = local_80;
  if (local_78 != 0) {
    _xpc_release();
  }
  if (local_70 != 0) {
    _xpc_release();
  }
  if (local_60 != 0) {
    _xpc_release();
  }
  if (local_68 != 0) {
    _xpc_release();
  }
  if (lVar4 != 0) {
    _xpc_release(lVar4);
  }
  if (lVar5 != 0) {
    _xpc_release(lVar5);
  }
  if (lVar6 != 0) {
    _os_release(lVar6);
  }
  if (local_88 != 0) {
    _CFRelease();
  }
  return lVar11;
}

