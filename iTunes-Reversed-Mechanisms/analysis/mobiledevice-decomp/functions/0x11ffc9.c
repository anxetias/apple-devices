// rea decompile_all
// name: _AMDeviceRemoteCopyDeveloperModeStatus
// address: 0x11ffc9
// body: available
// range: 0x11ffc9-0x120b56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMDeviceRemoteCopyDeveloperModeStatus(long param_1,undefined4 *param_2)

{
  char cVar1;
  dispatch_object_t dVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  undefined4 uVar14;
  long local_80;
  undefined4 local_74;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  void *local_50;
  long local_48;
  dispatch_object_t local_40;
  long local_38;
  
  local_80 = 0;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10);
    uVar14 = 0xe8000007;
LAB_001202fb:
    local_38 = 0;
  }
  else {
    cVar1 = _remote_device_os_is_at_least
                      (param_1,&cf_16_0,&cf_9_0,&cf_16_0,&cf_1_0,&cf_13_0,&cf_6_0,&local_80);
    if (local_80 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to check remote device OS version: %@",local_80);
      uVar14 = 0xe80000f1;
      goto LAB_001202fb;
    }
    if (cVar1 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10);
      uVar14 = 0xe800000f;
      goto LAB_001202fb;
    }
    dVar2._os_obj =
         (_os_object_s *)
         _dispatch_queue_create("com.apple.storage_proxy.remote",(dispatch_queue_attr_t)0x0);
    if (dVar2._os_obj != (_os_object_s *)0x0) {
      local_40._os_obj = dVar2._os_obj;
      lVar3 = _remote_device_copy_service(param_1,"com.apple.mobile.storage_mounter_proxy.bridge");
      if (lVar3 == 0) {
        local_38 = _AMDCopyErrorText(0xe8000022);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar14 = 0xe8000022;
        __os_log_internal(0,_md_log_log,0x10,"Failed to start %s: 0x%08x (%s: %@)",
                          "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000022,
                          "kAMDInvalidServiceError",local_38);
        local_70 = 0;
      }
      else {
        lVar4 = _xpc_remote_connection_create_with_remote_service(lVar3,local_40._os_obj,0);
        local_70 = lVar3;
        if (lVar4 != 0) {
          _xpc_remote_connection_set_event_handler(lVar4,&___block_literal_global_189);
          lVar3 = _xpc_dictionary_create(0,0,0);
          if (lVar3 == 0) {
            local_38 = _AMDCopyErrorText(0xe8000003);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to create xpc request message: 0x%08x (%s: %@)",0xe8000003,
                              "kAMDNoResourcesError",local_38);
            local_68 = 0;
LAB_00120656:
            local_60 = 0;
LAB_001206f5:
            local_50 = (void *)0x0;
            local_58 = 0;
          }
          else {
            local_60 = _xpc_dictionary_create(0,0,0);
            local_68 = lVar3;
            if (local_60 == 0) {
              local_38 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to create xpc request dictionary: 0x%08x (%s: %@)",
                                0xe8000003,"kAMDNoResourcesError",local_38);
              goto LAB_00120656;
            }
            lVar5 = _CFStringGetCStringPtr(&cf_QueryDeveloperModeStatus,0x8000100);
            if (lVar5 == 0) {
              local_38 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar12 = "Failed to get string: 0x%08x (%s: %@)";
LAB_001206cf:
              __os_log_internal(0,_md_log_log,0x10,pcVar12,0xe8000003,"kAMDNoResourcesError",
                                local_38);
              goto LAB_001206f5;
            }
            local_58 = _xpc_string_create(lVar5);
            if (local_58 == 0) {
              local_38 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar12 = "Failed to create xpc string: 0x%08x (%s: %@)";
              goto LAB_001206cf;
            }
            local_50 = (void *)_copyProcessName();
            if (local_50 == (void *)0x0) {
              local_38 = _AMDCopyErrorText(0xe80000f1);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to query current process name: 0x%08x (%s: %@)",0xe80000f1,
                                "kAMDInternalError",local_38);
              local_50 = (void *)0x0;
              local_48 = 0;
              lVar3 = 0;
LAB_00120783:
              lVar5 = 0;
              lVar7 = 0;
              uVar13 = 0;
              uVar14 = 0xe80000f1;
              dVar2 = local_40;
              goto LAB_00120340;
            }
            lVar5 = _xpc_string_create(local_50);
            if (lVar5 != 0) {
              uVar6 = _CFStringGetCStringPtr(&cf_Command,0x8000100);
              lVar7 = local_60;
              _xpc_dictionary_set_value(local_60,uVar6,local_58);
              uVar6 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
              local_48 = lVar5;
              _xpc_dictionary_set_value(lVar7,uVar6,lVar5);
              _xpc_dictionary_set_value(lVar3,"XPCRequestDictionary",lVar7);
              _xpc_remote_connection_activate(lVar4);
              lVar3 = _xpc_remote_connection_send_message_with_reply_sync(lVar4,local_68);
              if (lVar3 == 0) {
                local_38 = _AMDCopyErrorText(0xe8000004);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                lVar7 = 0;
                __os_log_internal(0,_md_log_log,0x10,
                                  "Failed to copy developer mode status: 0x%08x (%s: %@)",0xe8000004
                                  ,"kAMDReadError",local_38);
                lVar5 = 0;
                lVar3 = 0;
                uVar13 = 0;
                uVar14 = 0xe8000004;
                dVar2 = local_40;
                goto LAB_00120340;
              }
              uVar6 = _CFStringGetCStringPtr(&cf_Error,0x8000100);
              lVar7 = _xpc_dictionary_get_value(lVar3,uVar6);
              if (lVar7 != 0) {
                lVar5 = __CFXPCCreateCFObjectFromXPCObject(lVar7);
                local_74 = _MobileDevelopmentConvertError(lVar5);
                local_38 = _AMDCopyErrorText(local_74);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar14 = local_74;
                uVar6 = _md_log_log;
                uVar8 = _AMDErrorString(local_74);
                lVar7 = 0;
                __os_log_internal(0,uVar6,0x10,
                                  "There was an error copying personalization nonce: 0x%08x (%s: %@)"
                                  ,uVar14,uVar8,local_38);
                uVar13 = 0;
                dVar2 = local_40;
                uVar14 = local_74;
                goto LAB_00120340;
              }
              uVar6 = _CFStringGetCStringPtr(&cf_DeveloperModeStatus,0x8000100);
              lVar9 = _xpc_dictionary_get_value(lVar3,uVar6);
              if (lVar9 != 0) {
                puVar10 = (undefined *)_xpc_get_type(lVar9);
                if (puVar10 == PTR___xpc_type_bool_00441308) {
                  lVar7 = __CFXPCCreateCFObjectFromXPCObject(lVar9);
                  if (lVar7 == 0) {
LAB_0012094b:
                    local_38 = _AMDCopyErrorText(0xe80000f1);
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    __os_log_internal(0,_md_log_log,0x10,
                                      "Failed to get result from XPC object %@: 0x%08x (%s: %@)",
                                      lVar9,0xe80000f1,"kAMDInternalError",local_38);
                  }
                  else {
                    lVar5 = _CFGetTypeID(lVar7);
                    lVar11 = _CFBooleanGetTypeID();
                    if (lVar5 != lVar11) goto LAB_0012094b;
                    local_38 = 0;
                  }
                  cVar1 = _CFBooleanGetValue(lVar7);
                  uVar13 = CONCAT71((int7)((ulong)lVar5 >> 8),cVar1 != '\0');
                  lVar5 = 0;
                  uVar14 = 0;
                  dVar2 = local_40;
                  goto LAB_00120340;
                }
              }
              local_38 = _AMDCopyErrorText(0xe80000f1);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to get developer mode status from XPC reply: 0x%08x (%s: %@)"
                                ,0xe80000f1,"kAMDInternalError",local_38);
              goto LAB_00120783;
            }
            local_38 = _AMDCopyErrorText(0xe8000003);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s: %@)",
                              0xe8000003,"kAMDNoResourcesError",local_38);
          }
          lVar5 = 0;
          lVar7 = 0;
          local_48 = 0;
          lVar3 = 0;
          uVar13 = 0;
          uVar14 = 0xe8000003;
          dVar2 = local_40;
          goto LAB_00120340;
        }
        local_38 = _AMDCopyErrorText(0xe8000032);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar14 = 0xe8000032;
        __os_log_internal(0,_md_log_log,0x10,"Failed to connect to %s: 0x%08x (%s: %@)",
                          "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000032,
                          "kAMDStartServiceError",local_38);
      }
      local_50 = (void *)0x0;
      lVar5 = 0;
      lVar7 = 0;
      lVar4 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_48 = 0;
      lVar3 = 0;
      uVar13 = 0;
      dVar2 = local_40;
      goto LAB_00120340;
    }
    local_38 = _AMDCopyErrorText(0xe8000003);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar14 = 0xe8000003;
    __os_log_internal(0,_md_log_log,0x10,"Failed to create queue: 0x%08x (%s: %@)",0xe8000003,
                      "kAMDNoResourcesError",local_38);
  }
  lVar5 = 0;
  lVar7 = 0;
  local_50 = (void *)0x0;
  local_70 = 0;
  lVar4 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  lVar3 = 0;
  uVar13 = 0;
  dVar2._os_obj = (_os_object_s *)0x0;
LAB_00120340:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar14;
  }
  if (dVar2._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(dVar2);
  }
  if (lVar4 != 0) {
    _xpc_remote_connection_cancel(lVar4);
    _os_release(lVar4);
  }
  if (local_50 != (void *)0x0) {
    _free(local_50);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  lVar4 = local_70;
  if (local_38 != 0) {
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
  if (lVar3 != 0) {
    _xpc_release(lVar3);
  }
  if (local_48 != 0) {
    _xpc_release();
  }
  if (lVar4 != 0) {
    _os_release(lVar4);
  }
  if (local_80 != 0) {
    _CFRelease();
  }
  return uVar13 & 0xffffffff;
}

