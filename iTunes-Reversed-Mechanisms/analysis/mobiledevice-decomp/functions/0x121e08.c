// rea decompile_all
// name: _mountRemoteImage
// address: 0x121e08
// body: available
// range: 0x121e08-0x12287f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _mountRemoteImage(undefined4 param_1,long param_2,long param_3,long param_4,long param_5,
                     undefined8 param_6)

{
  char cVar1;
  int iVar2;
  dispatch_object_t dVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 uVar14;
  cfstringStruct *local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  uint local_5c;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  dispatch_object_t local_40;
  int local_34;
  
  local_34 = -0x17ffff0f;
  local_50 = 0;
  local_88 = (cfstringStruct *)0x0;
  if ((param_3 == 0 || param_2 == 0) || param_5 == 0) {
    local_34 = -0x17fffff9;
joined_r0x00121f3c:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Invalid input(s).";
  }
  else {
    if (param_4 == 0) {
      local_34 = -0x17ffffd1;
      goto joined_r0x00121f3c;
    }
    local_68 = CONCAT44(local_68._4_4_,param_1);
    dVar3._os_obj =
         (_os_object_s *)
         _dispatch_queue_create("com.apple.storage_proxy.remote",(dispatch_queue_attr_t)0x0);
    if (dVar3._os_obj != (_os_object_s *)0x0) {
      local_80 = param_6;
      local_40._os_obj = dVar3._os_obj;
      pcVar4 = (cfstringStruct *)_CFDictionaryGetValue(param_4,&cf_ImageType);
      if (pcVar4 == (cfstringStruct *)0x0) {
LAB_00121fce:
        local_34 = -0x17ffffd0;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar11 = "Invalid data for required option %@.";
        pcVar4 = &cf_ImageType;
      }
      else {
        local_48 = pcVar4;
        lVar5 = _CFGetTypeID(pcVar4);
        lVar6 = _CFStringGetTypeID();
        if (lVar5 != lVar6) goto LAB_00121fce;
        uVar12 = 0;
        cVar1 = _remote_device_os_is_at_least
                          (param_2,&cf_17_0,&cf_10_0,&cf_17_0,&cf_1_0,&cf_12_0,&cf_6_0,&local_88);
        if (local_88 == (cfstringStruct *)0x0) {
          if (((cVar1 == '\0') || (cVar1 = _CFEqual(local_48,&cf_Cryptex), cVar1 != '\0')) ||
             (cVar1 = _CFEqual(local_48,&cf_Personalized), cVar1 != '\0')) {
            lVar5 = _CFDictionaryGetValue(param_4,&cf_ImageSignature);
            if (lVar5 != 0) {
              lVar6 = _CFGetTypeID(lVar5);
              lVar7 = _CFDataGetTypeID();
              if (lVar6 == lVar7) {
                local_78 = _CFDictionaryGetValue(param_4,&cf_ImageTrustCache);
                if (local_78 == 0) {
LAB_001220e6:
                  lVar6 = local_78;
                  lVar7 = _CFDictionaryGetValue(param_4,&cf_ImageInfoPlist);
                  if (lVar7 == 0) {
LAB_0012211e:
                    cVar1 = _CFEqual(local_48,&cf_Cryptex);
                    if ((lVar6 == 0) && (cVar1 != '\0')) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      pcVar11 = "Invalid data for required option %@.";
                      goto LAB_001221bd;
                    }
                    cVar1 = _CFEqual(local_48,&cf_Personalized);
                    if (cVar1 != '\0') {
                      lVar6 = _CFDictionaryGetValue(param_4,&cf_ImageDigest);
                      if (lVar6 != 0) {
                        local_58 = lVar6;
                        lVar6 = _CFGetTypeID(lVar6);
                        lVar8 = _CFDataGetTypeID();
                        if (lVar6 == lVar8) goto LAB_001222c2;
                      }
                      local_34 = -0x17ffffd0;
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      pcVar11 = "Invalid data for required option %@.";
                      pcVar4 = &cf_ImageDigest;
                      goto LAB_00121fff;
                    }
                    local_58 = 0;
LAB_001222c2:
                    cVar1 = _CFEqual(local_48,&cf_Developer);
                    if (cVar1 != '\0') {
                      cVar1 = _AMDeviceRemoteCopyDeveloperModeStatus(param_2,&local_34);
                      if ((local_34 != -0x17fffff1) && (local_34 != 0)) {
                        local_34 = -0x17fffeeb;
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        iVar2 = local_34;
                        uVar12 = _md_log_log;
                        uVar10 = _AMDErrorString(local_34);
                        lVar6 = 0;
                        __os_log_internal(0,uVar12,0x10,
                                          "Failed to copy developer mode status: 0x%08x (%s)",iVar2,
                                          uVar10);
                        dVar3 = local_40;
                        iVar2 = local_34;
                        goto LAB_00121f82;
                      }
                      if (cVar1 == '\0' && local_34 == 0) {
                        local_34 = -0x17fffee4;
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        lVar6 = 0;
                        __os_log_internal(0,_md_log_log,0x10,
                                          "Developer mode is not enabled on device.");
                        dVar3 = local_40;
                        iVar2 = local_34;
                        goto LAB_00121f82;
                      }
                    }
                    lVar6 = _remote_device_copy_service
                                      (param_2,"com.apple.mobile.storage_mounter_proxy.bridge");
                    if (lVar6 == 0) {
                      local_34 = -0x17ffffde;
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      iVar2 = local_34;
                      uVar12 = _md_log_log;
                      uVar10 = _AMDErrorString(local_34);
                      pcVar11 = "Failed to start %s: 0x%08x (%s)";
                      lVar6 = 0;
                    }
                    else {
                      lVar8 = _xpc_remote_connection_create_with_remote_service
                                        (lVar6,local_40._os_obj,0);
                      if (lVar8 != 0) {
                        _xpc_remote_connection_set_event_handler(lVar8,&___block_literal_global_326)
                        ;
                        _xpc_remote_connection_activate(lVar8);
                        _fire_callback(param_5,local_80,&cf_LookingUpImage);
                        local_5c = (uint)(byte)local_68;
                        local_34 = _copy_image_digests(0,lVar8,local_48,&local_50);
                        uVar14 = (undefined4)((ulong)uVar12 >> 0x20);
                        local_70 = lVar8;
                        if (local_34 == 0) {
                          local_34 = 0;
                          if (local_50 == 0) {
LAB_00122613:
                            _fire_callback(param_5,local_80,&cf_StreamingImage);
                            uVar12 = CONCAT44(uVar14,local_5c);
                            local_34 = _stream_image(0,local_70,param_3,0,0,param_4,uVar12);
                            uVar14 = (undefined4)((ulong)uVar12 >> 0x20);
                            if (local_34 == 0) {
                              _fire_callback(param_5,local_80,&cf_MountingImage);
                              iVar2 = _mount_image(0,local_70,local_48,lVar5,local_78,lVar7,
                                                   CONCAT44(uVar14,local_5c));
                              local_34 = iVar2;
                              if (_md_log_onceToken != -1) {
                                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                              }
                              iVar13 = local_34;
                              uVar12 = _md_log_log;
                              if (iVar2 == 0) {
                                __os_log_internal(0,_md_log_log,1,"The image has been mounted.");
                                goto LAB_001225d7;
                              }
                              uVar10 = _AMDErrorString(local_34);
                              pcVar11 = "Failed to mount image: 0x%08x (%s)";
                            }
                            else {
                              if (_md_log_onceToken != -1) {
                                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                              }
                              iVar13 = local_34;
                              uVar12 = _md_log_log;
                              uVar10 = _AMDErrorString(local_34);
                              pcVar11 = "Failed to stream image: 0x%08x (%s)";
                            }
                            goto LAB_001223c0;
                          }
                          lVar8 = 0;
                          do {
                            lVar9 = _CFArrayGetCount(local_50);
                            uVar14 = (undefined4)((ulong)uVar12 >> 0x20);
                            if (lVar9 <= lVar8) goto LAB_00122613;
                            uVar10 = _CFArrayGetValueAtIndex(local_50,lVar8);
                            if ((local_58 != 0) &&
                               (local_68 = uVar10, cVar1 = _CFEqual(local_58,uVar10),
                               uVar10 = local_68, cVar1 != '\0')) break;
                            cVar1 = _CFEqual(lVar5,uVar10);
                            lVar8 = lVar8 + 1;
                          } while (cVar1 == '\0');
                          if (_md_log_onceToken != -1) {
                            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                          }
                          __os_log_internal(0,_md_log_log,0x10,
                                            "The image is already mounted (%@ / %@).",local_48,
                                            local_58);
LAB_001225d7:
                          local_34 = 0;
                        }
                        else {
                          if (_md_log_onceToken != -1) {
                            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                          }
                          iVar13 = local_34;
                          uVar12 = _md_log_log;
                          uVar10 = _AMDErrorString(local_34);
                          pcVar11 = "Failed to lookup image digests: 0x%08x (%s)";
LAB_001223c0:
                          __os_log_internal(0,uVar12,0x10,pcVar11,iVar13,uVar10);
                        }
                        iVar2 = local_34;
                        lVar5 = local_70;
                        _xpc_remote_connection_cancel(local_70);
                        _os_release(lVar5);
                        dVar3 = local_40;
                        goto LAB_00121f82;
                      }
                      local_34 = -0x17ffffce;
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      iVar2 = local_34;
                      uVar12 = _md_log_log;
                      uVar10 = _AMDErrorString(local_34);
                      pcVar11 = "Failed to connect to %s: 0x%08x (%s)";
                    }
                    __os_log_internal(0,uVar12,0x10,pcVar11,
                                      "com.apple.mobile.storage_mounter_proxy.bridge",iVar2,uVar10);
                    dVar3 = local_40;
                    iVar2 = local_34;
                    goto LAB_00121f82;
                  }
                  lVar8 = _CFGetTypeID(lVar7);
                  lVar9 = _CFDataGetTypeID();
                  lVar6 = local_78;
                  if (lVar8 == lVar9) goto LAB_0012211e;
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar11 = "Invalid data for option %@.";
                  pcVar4 = &cf_ImageInfoPlist;
                }
                else {
                  lVar6 = _CFGetTypeID(local_78);
                  lVar7 = _CFDataGetTypeID();
                  if (lVar6 == lVar7) goto LAB_001220e6;
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar11 = "Invalid data for option %@.";
LAB_001221bd:
                  pcVar4 = &cf_ImageTrustCache;
                }
                lVar6 = 0;
                __os_log_internal(0,_md_log_log,0x10,pcVar11,pcVar4);
                local_34 = -0x17fffff9;
                dVar3 = local_40;
                iVar2 = local_34;
                goto LAB_00121f82;
              }
            }
            local_34 = -0x17ffffd0;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar11 = "Invalid data for required option %@.";
            pcVar4 = &cf_ImageSignature;
          }
          else {
            local_34 = -0x17fffff9;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar11 = "Unsupported disk image type: %@.";
            pcVar4 = local_48;
          }
        }
        else {
          local_34 = -0x17ffff0f;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Failed to check remote device OS version: %@";
          pcVar4 = local_88;
        }
      }
LAB_00121fff:
      lVar6 = 0;
      __os_log_internal(0,_md_log_log,0x10,pcVar11,pcVar4);
      dVar3 = local_40;
      iVar2 = local_34;
      goto LAB_00121f82;
    }
    local_34 = -0x17fffffd;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Failed to create queue.";
  }
  lVar6 = 0;
  __os_log_internal(0,_md_log_log,0x10,pcVar11);
  dVar3._os_obj = (_os_object_s *)0x0;
  iVar2 = local_34;
LAB_00121f82:
  if (dVar3._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(dVar3);
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  local_50 = 0;
  if (lVar6 != 0) {
    _os_release(lVar6);
  }
  if (local_88 != (cfstringStruct *)0x0) {
    _CFRelease();
  }
  return iVar2;
}

