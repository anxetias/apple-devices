// rea decompile_all
// name: _AMDeviceRemoteCopyPersonalizationManifest
// address: 0x11c810
// body: available
// range: 0x11c810-0x11d461 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceRemoteCopyPersonalizationManifest
               (long param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  dispatch_object_t object;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  char *pcVar14;
  long local_88;
  long local_78;
  long local_68;
  long local_58;
  long local_40;
  long local_38;
  
  if ((param_2 == 0 || param_1 == 0) || param_3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10);
    uVar1 = 0xe8000007;
    lVar5 = 0;
  }
  else {
    object._os_obj =
         (_os_object_s *)
         _dispatch_queue_create("com.apple.storage_proxy.remote",(dispatch_queue_attr_t)0x0);
    if (object._os_obj != (_os_object_s *)0x0) {
      local_88 = _remote_device_copy_service
                           (param_1,"com.apple.mobile.storage_mounter_proxy.bridge");
      if (local_88 == 0) {
        lVar5 = _AMDCopyErrorText(0xe8000022);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to start %s: 0x%08x (%s: %@)",
                          "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000022,
                          "kAMDInvalidServiceError",lVar5);
        uVar1 = 0xe8000022;
        local_88 = 0;
      }
      else {
        lVar2 = _xpc_remote_connection_create_with_remote_service(local_88,object._os_obj,0);
        if (lVar2 != 0) {
          _xpc_remote_connection_set_event_handler(lVar2,&___block_literal_global_161);
          lVar3 = _xpc_dictionary_create(0,0,0);
          if (lVar3 == 0) {
            lVar5 = _AMDCopyErrorText(0xe8000003);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to create xpc request message: 0x%08x (%s: %@)",0xe8000003,
                              "kAMDNoResourcesError",lVar5);
            lVar3 = 0;
LAB_0011cdaa:
            lVar4 = 0;
LAB_0011ce53:
            pvVar7 = (void *)0x0;
            uVar1 = 0xe8000003;
            lVar6 = 0;
            local_68 = 0;
            local_78 = 0;
LAB_0011ce66:
            local_40 = 0;
            local_58 = 0;
          }
          else {
            lVar4 = _xpc_dictionary_create(0,0,0);
            if (lVar4 == 0) {
              lVar5 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to create xpc request dictionary: 0x%08x (%s: %@)",
                                0xe8000003,"kAMDNoResourcesError",lVar5);
              goto LAB_0011cdaa;
            }
            lVar5 = _CFStringGetCStringPtr(&cf_QueryPersonalizationManifest,0x8000100);
            if (lVar5 == 0) {
              lVar5 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar14 = "Failed to get string: 0x%08x (%s: %@)";
LAB_0011ce22:
              __os_log_internal(0,_md_log_log,0x10,pcVar14,0xe8000003,"kAMDNoResourcesError",lVar5);
              goto LAB_0011ce53;
            }
            lVar6 = _xpc_string_create(lVar5);
            if (lVar6 == 0) {
              lVar5 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar14 = "Failed to create xpc string: 0x%08x (%s: %@)";
              goto LAB_0011ce22;
            }
            lVar5 = _CFStringGetCStringPtr(param_2,0x8000100);
            if (lVar5 == 0) {
              lVar5 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar14 = "Failed to get string: 0x%08x (%s: %@)";
LAB_0011cfde:
              __os_log_internal(0,_md_log_log,0x10,pcVar14,0xe8000003,"kAMDNoResourcesError",lVar5);
              uVar1 = 0xe8000003;
              pvVar7 = (void *)0x0;
              local_78 = 0;
LAB_0011d0f9:
              local_38 = 0;
              local_40 = 0;
              local_68 = 0;
              local_58 = 0;
              goto LAB_0011ce76;
            }
            local_78 = _xpc_string_create(lVar5);
            if (local_78 == 0) {
              lVar5 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar14 = "Failed to create xpc string: 0x%08x (%s: %@)";
              goto LAB_0011cfde;
            }
            pvVar7 = (void *)_copyProcessName();
            if (pvVar7 == (void *)0x0) {
              lVar5 = _AMDCopyErrorText(0xe80000f1);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to query current process name: 0x%08x (%s: %@)",0xe80000f1,
                                "kAMDInternalError",lVar5);
              uVar1 = 0xe80000f1;
              pvVar7 = (void *)0x0;
              goto LAB_0011d0f9;
            }
            local_68 = _xpc_string_create(pvVar7);
            if (local_68 == 0) {
              lVar5 = _AMDCopyErrorText(0xe8000003);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s: %@)",
                                0xe8000003,"kAMDNoResourcesError",lVar5);
              uVar1 = 0xe8000003;
              goto LAB_0011d0f9;
            }
            uVar8 = _CFStringGetCStringPtr(&cf_Command,0x8000100);
            _xpc_dictionary_set_value(lVar4,uVar8,lVar6);
            uVar8 = _CFStringGetCStringPtr(&cf_PersonalizedImageType,0x8000100);
            _xpc_dictionary_set_value(lVar4,uVar8,local_78);
            uVar8 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
            _xpc_dictionary_set_value(lVar4,uVar8,local_68);
            uVar8 = _CFStringGetCStringPtr(&cf_ImageSignature,0x8000100);
            uVar9 = _CFDataGetBytePtr(param_3);
            uVar10 = _CFDataGetLength(param_3);
            _xpc_dictionary_set_data(lVar4,uVar8,uVar9,uVar10);
            _xpc_dictionary_set_value(lVar3,"XPCRequestDictionary",lVar4);
            _xpc_remote_connection_activate(lVar2);
            local_58 = _xpc_remote_connection_send_message_with_reply_sync(lVar2,lVar3);
            if (local_58 == 0) {
              lVar5 = _AMDCopyErrorText(0xe8000004);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to copy personalization manifest: 0x%08x (%s: %@)",
                                0xe8000004,"kAMDReadError",lVar5);
              uVar1 = 0xe8000004;
              goto LAB_0011ce66;
            }
            uVar8 = _CFStringGetCStringPtr(&cf_Error,0x8000100);
            lVar5 = _xpc_dictionary_get_value(local_58,uVar8);
            if (lVar5 == 0) {
              uVar8 = _CFStringGetCStringPtr(&cf_ImageSignature,0x8000100);
              lVar11 = _xpc_dictionary_get_value(local_58,uVar8);
              if ((lVar11 != 0) &&
                 (puVar12 = (undefined *)_xpc_get_type(lVar11),
                 puVar12 == PTR___xpc_type_data_00441310)) {
                local_38 = __CFXPCCreateCFObjectFromXPCObject(lVar11);
                if (local_38 == 0) {
LAB_0011d282:
                  lVar5 = _AMDCopyErrorText(0xe80000f1);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,0x10,
                                    "Failed to get result from XPC object %@: 0x%08x (%s: %@)",
                                    lVar11,0xe80000f1,"kAMDInternalError",lVar5);
                }
                else {
                  lVar5 = _CFGetTypeID(local_38);
                  lVar13 = _CFDataGetTypeID();
                  if (lVar5 != lVar13) goto LAB_0011d282;
                  lVar5 = 0;
                }
                local_40 = 0;
                uVar1 = 0;
                goto LAB_0011ce76;
              }
              lVar5 = _AMDCopyErrorText(0xe80000f1);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,
                                "Failed to get personalization manifest from XPC reply: 0x%08x (%s: %@)"
                                ,0xe80000f1,"kAMDInternalError",lVar5);
              uVar1 = 0xe80000f1;
              local_40 = 0;
            }
            else {
              local_40 = __CFXPCCreateCFObjectFromXPCObject(lVar5);
              uVar1 = _MobileDevelopmentConvertError(local_40);
              lVar5 = _AMDCopyErrorText(uVar1);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar8 = _md_log_log;
              uVar9 = _AMDErrorString(uVar1);
              __os_log_internal(0,uVar8,0x10,
                                "There was an error copying personalization manifest: 0x%08x (%s: %@)"
                                ,uVar1,uVar9,lVar5);
            }
          }
          local_38 = 0;
          goto LAB_0011ce76;
        }
        lVar5 = _AMDCopyErrorText(0xe8000032);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to connect to %s: 0x%08x (%s: %@)",
                          "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000032,
                          "kAMDStartServiceError",lVar5);
        uVar1 = 0xe8000032;
      }
      local_38 = 0;
      local_40 = 0;
      pvVar7 = (void *)0x0;
      lVar2 = 0;
      lVar3 = 0;
      lVar4 = 0;
      lVar6 = 0;
      local_68 = 0;
      local_78 = 0;
      local_58 = 0;
      goto LAB_0011ce76;
    }
    lVar5 = _AMDCopyErrorText(0xe8000003);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to create queue: 0x%08x (%s: %@)",0xe8000003,
                      "kAMDNoResourcesError",lVar5);
    uVar1 = 0xe8000003;
  }
  local_38 = 0;
  local_40 = 0;
  pvVar7 = (void *)0x0;
  local_88 = 0;
  lVar2 = 0;
  lVar3 = 0;
  lVar4 = 0;
  lVar6 = 0;
  local_68 = 0;
  local_78 = 0;
  local_58 = 0;
  object._os_obj = (_os_object_s *)0x0;
LAB_0011ce76:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar1;
  }
  if (lVar2 != 0) {
    _xpc_remote_connection_cancel(lVar2);
    _os_release(lVar2);
  }
  if (object._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(object);
  }
  if (pvVar7 != (void *)0x0) {
    _free(pvVar7);
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar3 != 0) {
    _xpc_release(lVar3);
  }
  if (lVar4 != 0) {
    _xpc_release(lVar4);
  }
  if (lVar6 != 0) {
    _xpc_release(lVar6);
  }
  if (local_78 != 0) {
    _xpc_release();
  }
  if (local_58 != 0) {
    _xpc_release(local_58);
  }
  if (local_68 != 0) {
    _xpc_release();
  }
  if (local_88 != 0) {
    _os_release(local_88);
  }
  return local_38;
}

