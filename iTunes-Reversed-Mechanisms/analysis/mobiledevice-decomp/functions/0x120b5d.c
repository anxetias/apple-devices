// rea decompile_all
// name: _AMDeviceRemoteCopyMountedDevicesList
// address: 0x120b5d
// body: available
// range: 0x120b5d-0x12163d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDeviceRemoteCopyMountedDevicesList(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  dispatch_object_t object;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  void *local_50;
  long local_48;
  undefined8 local_38;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    uVar3 = 0xe8000007;
    lVar5 = 0;
  }
  else {
    object._os_obj =
         (_os_object_s *)
         _dispatch_queue_create("com.apple.storage_proxy.remote",(dispatch_queue_attr_t)0x0);
    if (object._os_obj != (_os_object_s *)0x0) {
      local_70 = _remote_device_copy_service
                           (param_1,"com.apple.mobile.storage_mounter_proxy.bridge");
      if (local_70 == 0) {
        lVar5 = _AMDCopyErrorText(0xe8000022);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar3 = 0xe8000022;
        __os_log_internal(0,_md_log_log,0x10,"Failed to start %s: 0x%08x (%s: %@)",
                          "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000022,
                          "kAMDInvalidServiceError",lVar5);
        local_70 = 0;
LAB_00120f7e:
        lVar4 = 0;
LAB_00120f81:
        local_68 = 0;
LAB_00120f89:
        local_60 = 0;
LAB_00120f91:
        local_50 = (void *)0x0;
        local_58 = 0;
LAB_00120f99:
        local_48 = 0;
      }
      else {
        lVar4 = _xpc_remote_connection_create_with_remote_service(local_70,object._os_obj,0);
        if (lVar4 == 0) {
          lVar5 = _AMDCopyErrorText(0xe8000032);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar3 = 0xe8000032;
          __os_log_internal(0,_md_log_log,0x10,"Failed to connect to %s: 0x%08x (%s: %@)",
                            "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000032,
                            "kAMDStartServiceError",lVar5);
          goto LAB_00120f7e;
        }
        _xpc_remote_connection_set_event_handler(lVar4,&___block_literal_global_193);
        local_68 = _xpc_dictionary_create(0,0,0);
        if (local_68 == 0) {
          lVar5 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar3 = 0xe8000003;
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to create xpc request message: 0x%08x (%s: %@)",0xe8000003,
                            "kAMDNoResourcesError",lVar5);
          goto LAB_00120f81;
        }
        local_60 = _xpc_dictionary_create(0,0,0);
        if (local_60 == 0) {
          lVar5 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar3 = 0xe8000003;
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to create xpc request dictionary: 0x%08x (%s: %@)",0xe8000003,
                            "kAMDNoResourcesError",lVar5);
          goto LAB_00120f89;
        }
        lVar5 = _CFStringGetCStringPtr(&cf_CopyDevices,0x8000100);
        if (lVar5 == 0) {
          lVar5 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar12 = "Failed to get string: 0x%08x (%s: %@)";
LAB_001211a3:
          uVar3 = 0xe8000003;
          __os_log_internal(0,_md_log_log,0x10,pcVar12,0xe8000003,"kAMDNoResourcesError",lVar5);
          goto LAB_00120f91;
        }
        local_58 = _xpc_string_create(lVar5);
        if (local_58 == 0) {
          lVar5 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar12 = "Failed to create xpc string: 0x%08x (%s: %@)";
          goto LAB_001211a3;
        }
        local_50 = (void *)_copyProcessName();
        if (local_50 == (void *)0x0) {
          lVar5 = _AMDCopyErrorText(0xe80000f1);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar3 = 0xe80000f1;
          __os_log_internal(0,_md_log_log,0x10,
                            "Failed to query current process name: 0x%08x (%s: %@)",0xe80000f1,
                            "kAMDInternalError",lVar5);
          local_50 = (void *)0x0;
          goto LAB_00120f99;
        }
        local_48 = _xpc_string_create(local_50);
        if (local_48 == 0) {
          lVar5 = _AMDCopyErrorText(0xe8000003);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar3 = 0xe8000003;
          __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s: %@)",
                            0xe8000003,"kAMDNoResourcesError",lVar5);
          goto LAB_00120f99;
        }
        uVar6 = _CFStringGetCStringPtr(&cf_Command,0x8000100);
        _xpc_dictionary_set_value(local_60,uVar6,local_58);
        uVar6 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
        _xpc_dictionary_set_value(local_60,uVar6,local_48);
        _xpc_dictionary_set_value(local_68,"XPCRequestDictionary",local_60);
        _xpc_remote_connection_activate(lVar4);
        lVar7 = _xpc_remote_connection_send_message_with_reply_sync(lVar4,local_68);
        if (lVar7 != 0) {
          lVar8 = __CFXPCCreateCFObjectFromXPCObject(lVar7);
          if (lVar8 == 0) {
LAB_001212a8:
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Invalid response message.");
LAB_001212df:
            uVar3 = 0xe8000004;
          }
          else {
            lVar5 = _CFGetTypeID(lVar8);
            lVar9 = _CFDictionaryGetTypeID();
            if (lVar5 != lVar9) goto LAB_001212a8;
            lVar5 = _CFDictionaryGetValue(lVar8,&cf_Error);
            if (lVar5 != 0) {
              uVar6 = _CFDictionaryGetValue(lVar8,&cf_DetailedError);
              uVar3 = _MobileDevelopmentConvertError(lVar5);
              lVar5 = _AMDCopyErrorText(uVar3);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar1 = _md_log_log;
              uVar10 = _AMDErrorString(uVar3);
              local_38 = 0;
              __os_log_internal(0,uVar1,0x10,
                                "An error occurred while sending message: 0x%08x (%s: %@) (%@)",
                                uVar3,uVar10,lVar5,uVar6);
              goto LAB_00120fa7;
            }
            lVar5 = _CFDictionaryGetValue(lVar8,&cf_Status);
            if (lVar5 == 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"Response message missing key: %@",&cf_Status);
              goto LAB_001212df;
            }
            cVar2 = _CFEqual(lVar5,&cf_Complete);
            if (cVar2 != '\0') {
              lVar5 = _CFDictionaryGetValue(lVar8,&cf_EntryList);
              if (lVar5 == 0) {
                local_38 = _CFArrayCreateMutable
                                     (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                      PTR__kCFTypeArrayCallBacks_004411a8);
              }
              else {
                lVar9 = _CFGetTypeID(lVar5);
                lVar11 = _CFArrayGetTypeID();
                if (lVar9 != lVar11) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,0x10,"Invalid value for %@.",&cf_EntryList);
                  uVar3 = 0xe8000013;
                  goto LAB_001212e5;
                }
                local_38 = _CFRetain(lVar5);
              }
              lVar5 = 0;
              uVar3 = 0;
              goto LAB_00120fa7;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Status is not complete: %@",lVar5);
            uVar3 = 0xe80000f1;
          }
LAB_001212e5:
          local_38 = 0;
          lVar5 = 0;
          goto LAB_00120fa7;
        }
        lVar5 = _AMDCopyErrorText(0xe8000004);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar3 = 0xe8000004;
        __os_log_internal(0,_md_log_log,0x10,"Failed to copy mounted images: 0x%08x (%s: %@)",
                          0xe8000004,"kAMDReadError",lVar5);
      }
      local_38 = 0;
      lVar8 = 0;
      lVar7 = 0;
      goto LAB_00120fa7;
    }
    lVar5 = _AMDCopyErrorText(0xe8000003);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar3 = 0xe8000003;
    __os_log_internal(0,_md_log_log,0x10,"Failed to create queue: 0x%08x (%s: %@)",0xe8000003,
                      "kAMDNoResourcesError",lVar5);
  }
  local_38 = 0;
  lVar8 = 0;
  local_50 = (void *)0x0;
  local_70 = 0;
  lVar4 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  lVar7 = 0;
  object._os_obj = (_os_object_s *)0x0;
LAB_00120fa7:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar3;
  }
  if (object._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(object);
  }
  if (lVar4 != 0) {
    _xpc_remote_connection_cancel(lVar4);
    _os_release(lVar4);
  }
  if (local_50 != (void *)0x0) {
    _free(local_50);
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
  if (lVar7 != 0) {
    _xpc_release(lVar7);
  }
  if (local_48 != 0) {
    _xpc_release();
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_70 != 0) {
    _os_release(local_70);
  }
  return local_38;
}

