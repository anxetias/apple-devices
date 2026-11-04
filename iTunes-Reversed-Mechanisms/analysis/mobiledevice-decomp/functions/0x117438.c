// rea decompile_all
// name: _AMDeviceMountImage
// address: 0x117438
// body: available
// range: 0x117438-0x118114 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceMountImage(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                       undefined8 param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  cfstringStruct *pcVar14;
  ulong in_stack_ffffffffffffff58;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  int local_34;
  
  local_34 = -0x17ffff0f;
  local_48 = 0;
  local_58 = 0;
  local_40 = 0;
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,1,"Preparing to mount image at %@.",param_2);
  if (param_3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input");
    local_34 = -0x17ffffd1;
  }
  else {
    local_50 = param_4;
    lVar3 = _CFDictionaryGetValue(param_3,&cf_ImageType);
    if (lVar3 != 0) {
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFStringGetTypeID();
      if (lVar4 == lVar5) {
        lVar4 = _CFDictionaryGetValue(param_3,&cf_ImageSignature);
        if (lVar4 == 0) {
LAB_00117658:
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar13 = "Invalid data for required option %@.";
          pcVar14 = &cf_ImageSignature;
        }
        else {
          lVar5 = _CFGetTypeID(lVar4);
          lVar6 = _CFDataGetTypeID();
          if (lVar5 != lVar6) goto LAB_00117658;
          lVar5 = _CFDictionaryGetValue(param_3,&cf_ImageTrustCache);
          if (lVar5 == 0) {
LAB_00117557:
            lVar6 = _CFDictionaryGetValue(param_3,&cf_ImageInfoPlist);
            if (lVar6 == 0) {
LAB_00117595:
              cVar1 = _CFEqual(lVar3,&cf_Cryptex);
              if ((lVar5 == 0) && (cVar1 != '\0')) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar13 = "Invalid data for required option %@.";
                goto LAB_00117734;
              }
              cVar1 = _CFEqual(lVar3,&cf_Personalized);
              if (cVar1 == '\0') {
                lVar7 = 0;
LAB_001177ec:
                lVar8 = _AMDeviceCreateCopy(param_1);
                if (lVar8 == 0) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,0x10,"Failed to copy device.");
                  local_34 = -0x17ffff0f;
                  goto LAB_00117697;
                }
                iVar2 = _AMDeviceConnect(lVar8);
                local_34 = iVar2;
                if (iVar2 == 0) {
                  iVar2 = _AMDeviceStartSession(lVar8);
                  local_34 = iVar2;
                  if (iVar2 == 0) {
                    cVar1 = _device_os_is_at_least(lVar8,&cf_17_0,&cf_10_0,&cf_17_0,&cf_1_0);
                    if (((cVar1 != '\0') && (cVar1 = _CFEqual(lVar3,&cf_Cryptex), cVar1 == '\0')) &&
                       (cVar1 = _CFEqual(lVar3,&cf_Personalized), cVar1 == '\0')) {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      lVar4 = 0;
                      __os_log_internal(0,_md_log_log,0x10,"Unsupported disk image type: %@.",lVar3)
                      ;
                      local_34 = -0x17fffff9;
                      goto LAB_0011769a;
                    }
                    cVar1 = _CFEqual(lVar3,&cf_Developer);
                    if (cVar1 != '\0') {
                      cVar1 = _AMDeviceCopyDeveloperModeStatus(lVar8,&local_34);
                      if ((local_34 != -0x17fffff1) && (local_34 != 0)) {
                        local_34 = -0x17fffeeb;
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        iVar2 = local_34;
                        uVar12 = _md_log_log;
                        uVar10 = _AMDErrorString(local_34);
                        pcVar13 = "Failed to copy developer mode status: 0x%08x (%s)";
                        lVar4 = 0;
                        goto LAB_001178d8;
                      }
                      if (cVar1 == '\0' && local_34 == 0) {
                        local_34 = -0x17fffee4;
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        lVar4 = 0;
                        __os_log_internal(0,_md_log_log,0x10,
                                          "Developer mode is not enabled on device.");
                        goto LAB_0011769a;
                      }
                    }
                    local_34 = _AMDeviceSecureStartService
                                         (lVar8,&cf_com_apple_mobile_mobile_image_mounter,0,
                                          &local_48);
                    if (local_34 != 0) {
                      lVar4 = _AMDCopyErrorText(local_34);
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      iVar2 = local_34;
                      uVar12 = _md_log_log;
                      uVar10 = _AMDErrorString(local_34);
                      __os_log_internal(0,uVar12,0x10,
                                        "Failed to start service (%@): 0x%08x (%s: %@)",
                                        &cf_com_apple_mobile_mobile_image_mounter,iVar2,uVar10,lVar4
                                       );
                      goto LAB_0011769a;
                    }
                    _fire_callback(local_50,param_5,&cf_LookingUpImage);
                    cVar1 = _device_os_is_at_least(param_1,&cf_10_0,&cf_3_0,&cf_10_0,&cf_1_0);
                    if (cVar1 == '\0') {
                      local_34 = _copy_image_digest(local_48,lVar3,&local_58);
                      if (local_34 == 0) {
                        if ((local_58 != 0) && (cVar1 = _CFEqual(lVar3,&cf_Factory), cVar1 == '\0'))
                        {
                          cVar1 = _CFEqual(lVar4,local_58);
                          if (cVar1 == '\0') {
                            lVar4 = _AMDCopyErrorText(local_34);
                            if (_md_log_onceToken != -1) {
                              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                            }
                            iVar2 = local_34;
                            uVar12 = _md_log_log;
                            uVar10 = _AMDErrorString(local_34);
                            __os_log_internal(0,uVar12,0x10,
                                              "A differrent image of type \'%@\' is already mounted: 0x%08x (%s: %@)"
                                              ,lVar3,iVar2,uVar10,lVar4);
                            local_34 = -0x17ffff8e;
                            goto LAB_0011769a;
                          }
                          if (_md_log_onceToken != -1) {
                            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                          }
                          __os_log_internal(0,_md_log_log,0x10,"The image is already mounted.");
                          goto LAB_00117ee4;
                        }
                        goto LAB_00117cac;
                      }
                      lVar4 = _AMDCopyErrorText(local_34);
                    }
                    else {
                      local_34 = _copy_image_digests(local_48,0,lVar3,&local_40,0);
                      if (local_34 == 0) {
                        local_34 = 0;
                        if (local_40 != 0) {
                          lVar9 = 0;
                          do {
                            lVar11 = _CFArrayGetCount(local_40);
                            if (lVar11 <= lVar9) goto LAB_00117cac;
                            uVar12 = _CFArrayGetValueAtIndex(local_40,lVar9);
                            if ((lVar7 != 0) && (cVar1 = _CFEqual(lVar7,uVar12), cVar1 != '\0'))
                            break;
                            cVar1 = _CFEqual(lVar4,uVar12);
                            lVar9 = lVar9 + 1;
                          } while (cVar1 == '\0');
                          if (_md_log_onceToken != -1) {
                            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                          }
                          __os_log_internal(0,_md_log_log,0x10,
                                            "The image is already mounted (%@ / %@).",lVar3,lVar4);
LAB_00117ee4:
                          lVar4 = 0;
                          local_34 = 0;
                          goto LAB_0011769a;
                        }
LAB_00117cac:
                        cVar1 = _device_os_is_at_least(param_1,&cf_7_0,&cf_2_0,&cf_9_0,&cf_1_0);
                        uVar12 = local_50;
                        if (cVar1 == '\0') {
                          _fire_callback(local_50,param_5,&cf_CopyingImage);
                          local_34 = _copy_image(lVar8,param_2,uVar12,param_5);
                          if (local_34 == 0) goto LAB_00117dd0;
                          lVar4 = _AMDCopyErrorText(local_34);
                          if (_md_log_onceToken != -1) {
                            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                          }
                          iVar2 = local_34;
                          uVar12 = _md_log_log;
                          uVar10 = _AMDErrorString(local_34);
                          pcVar13 = "Failed to copy image to device via AFC: 0x%08x (%s: %@)";
                        }
                        else {
                          _fire_callback(local_50,param_5,&cf_StreamingImage);
                          in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffff00000000
                          ;
                          local_34 = _stream_image(local_48,0,param_2,local_50,param_5,param_3,
                                                   in_stack_ffffffffffffff58);
                          if (local_34 == 0) {
LAB_00117dd0:
                            _fire_callback(local_50,param_5,&cf_MountingImage);
                            local_34 = _mount_image(local_48,0,lVar3,lVar4,lVar5,lVar6,
                                                    in_stack_ffffffffffffff58 & 0xffffffff00000000);
                            if (local_34 == 0) {
                              local_34 = 0;
                              if (_md_log_onceToken != -1) {
                                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                              }
                              lVar4 = 0;
                              __os_log_internal(0,_md_log_log,1,"The image (%@) has been mounted.",
                                                param_2);
                              goto LAB_0011769a;
                            }
                            lVar4 = _AMDCopyErrorText(local_34);
                            if (_md_log_onceToken != -1) {
                              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                            }
                            iVar2 = local_34;
                            uVar12 = _md_log_log;
                            uVar10 = _AMDErrorString(local_34);
                            pcVar13 = "Failed to mount image on device: 0x%08x (%s: %@)";
                          }
                          else {
                            lVar4 = _AMDCopyErrorText(local_34);
                            if (_md_log_onceToken != -1) {
                              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                            }
                            iVar2 = local_34;
                            uVar12 = _md_log_log;
                            uVar10 = _AMDErrorString(local_34);
                            pcVar13 = "Failed to stream image: 0x%08x (%s: %@)";
                          }
                        }
                        goto LAB_001178d8;
                      }
                      lVar4 = _AMDCopyErrorText(local_34);
                    }
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    iVar2 = local_34;
                    uVar12 = _md_log_log;
                    uVar10 = _AMDErrorString(local_34);
                    pcVar13 = "Failed to copy image digests: 0x%08x (%s: %@)";
                  }
                  else {
                    lVar4 = _AMDCopyErrorText(iVar2);
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    uVar12 = _md_log_log;
                    uVar10 = _AMDErrorString(iVar2);
                    pcVar13 = "Failed to start session: 0x%08x (%s: %@)";
                  }
                }
                else {
                  lVar4 = _AMDCopyErrorText(iVar2);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar12 = _md_log_log;
                  uVar10 = _AMDErrorString(iVar2);
                  pcVar13 = "Failed to connect to device: 0x%08x (%s: %@)";
                }
LAB_001178d8:
                __os_log_internal(0,uVar12,0x10,pcVar13,iVar2,uVar10);
                goto LAB_0011769a;
              }
              lVar7 = _CFDictionaryGetValue(param_3,&cf_ImageDigest);
              if (lVar7 != 0) {
                lVar8 = _CFGetTypeID(lVar7);
                lVar9 = _CFDataGetTypeID();
                if (lVar8 == lVar9) goto LAB_001177ec;
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar13 = "Invalid data for required option %@.";
              pcVar14 = &cf_ImageDigest;
            }
            else {
              lVar7 = _CFGetTypeID(lVar6);
              lVar8 = _CFDataGetTypeID();
              if (lVar7 == lVar8) goto LAB_00117595;
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar13 = "Invalid data for option %@.";
              pcVar14 = &cf_ImageInfoPlist;
            }
          }
          else {
            lVar6 = _CFGetTypeID(lVar5);
            lVar7 = _CFDataGetTypeID();
            if (lVar6 == lVar7) goto LAB_00117557;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar13 = "Invalid data for option %@.";
LAB_00117734:
            pcVar14 = &cf_ImageTrustCache;
          }
        }
        __os_log_internal(0,_md_log_log,0x10,pcVar13,pcVar14);
        local_34 = -0x17fffff9;
        goto LAB_00117697;
      }
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid data for required option %@.",&cf_ImageType);
    local_34 = -0x17ffffd0;
  }
LAB_00117697:
  lVar8 = 0;
  lVar4 = 0;
LAB_0011769a:
  iVar2 = local_34;
  if (local_48 != 0) {
    _hangup_with_image_mounter_service(local_48,0,0);
    _CFRelease(local_48);
  }
  if (local_58 != 0) {
    _CFRelease();
  }
  local_58 = 0;
  if (local_40 != 0) {
    _CFRelease();
  }
  local_40 = 0;
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return iVar2;
}

