// rea decompile_all
// name: _isRemoteImageMounted
// address: 0x12165f
// body: available
// range: 0x12165f-0x121dc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _isRemoteImageMounted
                (uint param_1,long param_2,long param_3,long param_4,long param_5,int *param_6)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  cfstringStruct *pcVar12;
  ulong uVar13;
  dispatch_object_t local_58;
  long local_50;
  int local_38;
  uint local_34;
  
  local_38 = -0x17ffff0f;
  if ((param_4 == 0 || param_2 == 0) ||
     ((param_5 == 0 && (cVar2 = _CFEqual(param_4), cVar2 != '\0')))) {
    local_38 = -0x17fffff9;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input(s).");
LAB_001217eb:
    local_50 = 0;
    local_58._os_obj = (_os_object_s *)0x0;
  }
  else {
    local_58._os_obj =
         (_os_object_s *)
         _dispatch_queue_create("com.apple.storage_proxy.remote",(dispatch_queue_attr_t)0x0);
    if (local_58._os_obj == (_os_object_s *)0x0) {
      local_38 = -0x17fffffd;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to create queue: 0x%08x (%s)",0xe8000003,
                        "kAMDNoResourcesError");
      goto LAB_001217eb;
    }
    local_50 = _remote_device_copy_service(param_2,"com.apple.mobile.storage_mounter_proxy.bridge");
    if (local_50 == 0) {
      local_38 = -0x17ffffde;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_50 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to start %s: 0x%08x (%s)",
                        "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000022,
                        "kAMDInvalidServiceError");
    }
    else {
      lVar3 = _xpc_remote_connection_create_with_remote_service(local_50,local_58._os_obj,0);
      if (lVar3 != 0) {
        local_34 = param_1;
        _xpc_remote_connection_set_event_handler(lVar3,&___block_literal_global_322);
        _xpc_remote_connection_activate(lVar3);
        lVar4 = _AMDeviceRemoteCopyMountedDevicesList(param_2,&local_38);
        if (local_38 == 0) {
          if ((lVar4 == 0) || (lVar6 = _CFArrayGetCount(lVar4), lVar6 < 1)) {
            uVar13 = 0;
            param_1 = local_34;
          }
          else {
            for (lVar6 = 0; lVar7 = _CFArrayGetCount(lVar4), lVar6 < lVar7; lVar6 = lVar6 + 1) {
              lVar7 = _CFArrayGetValueAtIndex(lVar4,lVar6);
              if (lVar7 == 0) {
LAB_00121a5e:
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"Invalid type for disk image list.");
              }
              else {
                lVar8 = _CFGetTypeID(lVar7);
                lVar9 = _CFDictionaryGetTypeID();
                if (lVar8 != lVar9) goto LAB_00121a5e;
                lVar8 = _CFDictionaryGetValue(lVar7,&cf_ImageSignature);
                if (lVar8 == 0) {
LAB_00121a8f:
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar12 = &cf_ImageSignature;
LAB_00121aef:
                  __os_log_internal(0,_md_log_log,0x10,"Invalid type for %@.",pcVar12);
                }
                else {
                  lVar9 = _CFGetTypeID(lVar8);
                  lVar10 = _CFDataGetTypeID();
                  if (lVar9 != lVar10) goto LAB_00121a8f;
                  lVar9 = _CFDictionaryGetValue(lVar7,&cf_DiskImageType);
                  if (lVar9 == 0) {
LAB_00121ac0:
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    pcVar12 = &cf_DiskImageType;
                    goto LAB_00121aef;
                  }
                  lVar10 = _CFGetTypeID(lVar9);
                  lVar11 = _CFStringGetTypeID();
                  if (lVar10 != lVar11) goto LAB_00121ac0;
                  if (param_3 == 0) {
                    cVar2 = _CFEqual(param_4,&cf_Personalized);
                    if ((cVar2 != '\0') && (cVar2 = _CFEqual(lVar9,param_4), cVar2 != '\0')) {
                      lVar8 = _CFDictionaryGetValue(lVar7,&cf_PersonalizedImageType);
                      if (lVar8 != 0) {
                        lVar7 = _CFGetTypeID(lVar8);
                        lVar10 = _CFStringGetTypeID();
                        if (lVar7 == lVar10) {
                          cVar2 = _CFEqual(param_5,lVar8);
                          if (cVar2 != '\0') {
                            if (_md_log_onceToken != -1) {
                              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                            }
                            goto LAB_00121d75;
                          }
                          goto LAB_00121af6;
                        }
                      }
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      pcVar12 = &cf_PersonalizedImageType;
                      goto LAB_00121aef;
                    }
                    cVar2 = _CFEqual(param_4,&cf_Developer);
                    if ((cVar2 == '\0') || (cVar2 = _CFEqual(param_4,lVar9), cVar2 == '\0'))
                    goto LAB_00121af6;
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    lVar8 = 0;
                    lVar7 = param_4;
LAB_00121d75:
                    __os_log_internal(0,_md_log_log,0x10,
                                      "The image is already mounted (%@/%@ / %@).",lVar9,lVar8,0);
                    uVar13 = CONCAT71((int7)((ulong)lVar7 >> 8),1);
                    param_1 = local_34;
                    goto LAB_00121c3b;
                  }
                  cVar2 = _CFEqual(param_3,lVar8);
                  if (cVar2 != '\0') {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    param_1 = local_34;
                    __os_log_internal(0,_md_log_log,0x10,
                                      "The image is already mounted (%@/%@ / %@).",lVar9,0,param_3);
                    uVar13 = CONCAT71((int7)((ulong)lVar9 >> 8),1);
                    goto LAB_00121c3b;
                  }
                }
              }
LAB_00121af6:
            }
            uVar13 = 0;
            param_1 = local_34;
          }
LAB_00121c3b:
          local_38 = 0;
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar1 = _md_log_log;
          uVar5 = _AMDErrorString(local_38);
          uVar13 = 0;
          __os_log_internal(0,uVar1,0x10,"Failed to copy mounted disk images list: %s",uVar5);
          param_1 = local_34;
        }
        goto LAB_001217fb;
      }
      local_38 = -0x17ffffce;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to connect to %s: 0x%08x (%s)",
                        "com.apple.mobile.storage_mounter_proxy.bridge",0xe8000032,
                        "kAMDStartServiceError");
    }
  }
  lVar3 = 0;
  lVar4 = 0;
  uVar13 = 0;
LAB_001217fb:
  if (param_6 != (int *)0x0) {
    *param_6 = local_38;
  }
  if (lVar3 != 0) {
    _hangup_with_image_mounter_service(0,lVar3,param_1 & 0xff);
    _xpc_remote_connection_cancel(lVar3);
    _os_release(lVar3);
  }
  if (local_58._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(local_58);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (local_50 != 0) {
    _os_release();
  }
  return uVar13 & 0xffffffff;
}

