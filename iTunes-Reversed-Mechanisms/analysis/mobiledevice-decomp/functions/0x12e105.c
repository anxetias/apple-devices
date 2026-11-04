// rea decompile_all
// name: _AMDeviceConnect
// address: 0x12e105
// body: available
// range: 0x12e105-0x12ee98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceConnect(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  dispatch_object_t object;
  dispatch_queue_t pdVar8;
  dispatch_time_t timeout;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  int *piVar12;
  pthread_mutex_t *ppVar13;
  undefined *puVar14;
  cfstringStruct *pcVar15;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar17;
  undefined *local_c0;
  undefined **local_b8;
  code *local_b0;
  undefined *local_a8;
  undefined **local_a0;
  undefined *local_98;
  undefined **local_90;
  code *local_88;
  code *local_80;
  dispatch_object_t local_78;
  undefined **local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  pthread_mutex_t *local_50;
  int local_44;
  undefined *local_40;
  cfstringStruct *local_38;
  
  uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  uVar16 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  local_44 = -1;
  local_58 = 0;
  if (param_1 == 0) {
    iVar2 = -0x17fffff9;
LAB_0012e1dc:
    _AMDeviceDisconnect(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x94) != '\x01') {
      iVar2 = -0x17ffff7c;
      goto LAB_0012e1dc;
    }
    lVar10 = param_1;
    if (*(long *)(param_1 + 0xb0) != 0) {
      if (0 < *(int *)(param_1 + 200)) {
        iVar2 = _AMDeviceConnect();
        if (iVar2 != 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar9 = _md_log_log;
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          uVar17 = *(undefined4 *)(param_1 + 200);
          uVar4 = _AMDErrorString(iVar2);
          __os_log_internal(0,uVar9,0x10,
                            "Failed to connect to companion for watch (%@) on port %d: 0x%08x (%s)",
                            uVar7,uVar17,CONCAT44(uVar16,iVar2),uVar4);
          goto LAB_0012e1dc;
        }
        lVar10 = *(long *)(param_1 + 0xb0);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,2,"Connecting to Watch via companion %@\'s port: %d",
                          *(undefined8 *)(lVar10 + 0x20),*(undefined4 *)(param_1 + 200));
        goto LAB_0012e29a;
      }
LAB_0012ebf5:
      lVar5 = 0;
      lVar6 = 0;
      iVar2 = 0;
      goto LAB_0012e1ea;
    }
LAB_0012e29a:
    ppVar13 = (pthread_mutex_t *)(param_1 + 0x48);
    _pthread_mutex_lock(ppVar13);
    if (*(long *)(param_1 + 0x38) == 0) {
      cVar1 = __AMDeviceIsBackedByRSD(param_1);
      if (cVar1 == '\0') {
        if (*(long *)(param_1 + 0xf8) != 0) {
          local_60 = lVar10;
          local_50 = ppVar13;
          iVar2 = _AMDeviceIsValid(param_1);
          if (iVar2 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            local_38 = (cfstringStruct *)0x0;
            __os_log_internal(0,_md_log_log,0x10,"Device \'%@\' is no longer valid; cannot connect."
                              ,*(undefined8 *)(param_1 + 0x20));
            iVar3 = -0x17ffff7c;
          }
          else {
            if (*(long *)(param_1 + 0xf8) != 0) {
              lVar10 = (*(code *)PTR__objc_msgSend_00441098)();
              if (lVar10 != 0) {
                cVar1 = __AMDRemotePairingIsWifiPairableRef();
                if (cVar1 != '\0') {
                  local_c0 = (undefined *)0x0;
                  local_b0 = (code *)0x2020000000;
                  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0xe8000001);
                  local_b8 = &local_c0;
                  object._os_obj = (_os_object_s *)_dispatch_group_create();
                  lVar10 = *(long *)(param_1 + 0xf8);
                  if (lVar10 == 0) {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    __os_log_internal(0,_md_log_log,0x10,
                                      "Connecting over RemoteXPC is not supported for this connection type."
                                     );
                    iVar3 = -0x17fffff1;
                  }
                  else {
                    pdVar8 = _dispatch_get_global_queue(0,0);
                    _dispatch_group_enter((dispatch_group_t)object._os_obj);
                    local_98 = PTR___NSConcreteStackBlock_004412a8;
                    local_90 = (undefined **)0xc2000000;
                    local_88 = ____AMDRemotePairingPopulateMetadata_block_invoke;
                    local_80 = (code *)&___block_descriptor_48_e8_32o40r_e17_v16__0__NSError_8l;
                    local_78._os_obj = object._os_obj;
                    local_70 = &local_c0;
                    (*(code *)PTR__objc_msgSend_00441098)
                              (lVar10,"populateDeviceMetadataInvokingHandlerOn:completionHandler:",
                               pdVar8);
                    timeout = _dispatch_time(0,0x540be400);
                    lVar10 = _dispatch_group_wait((dispatch_group_t)object._os_obj,timeout);
                    ppVar13 = local_50;
                    if (lVar10 == 0) {
                      iVar3 = *(int *)(local_b8 + 3);
                    }
                    else {
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      __os_log_internal(0,_md_log_log,0x10,"Timed out waiting to populate metadata."
                                       );
                      iVar3 = -0x17fffff4;
                    }
                  }
                  if (object._os_obj != (_os_object_s *)0x0) {
                    _dispatch_release(object);
                  }
                  __Block_object_dispose(&local_c0,8);
                  if (iVar3 != 0) {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    uVar7 = _md_log_log;
                    pcVar15 = (cfstringStruct *)_AMDErrorString(iVar3);
                    pcVar11 = "Error populating metadata on wireless pairable device: 0x%08x (%s)";
                    iVar2 = iVar3;
                    goto LAB_0012eb9b;
                  }
                }
                _pthread_mutex_unlock(ppVar13);
                goto LAB_0012ebf5;
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar11 = "RemotePairing device is unavailable.";
              goto LAB_0012e55a;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            local_38 = (cfstringStruct *)0x0;
            __os_log_internal(0,_md_log_log,0x10,
                              "Connecting over RemoteXPC is not supported for this connection type."
                             );
            iVar3 = -0x17fffff1;
          }
LAB_0012eba2:
          lVar6 = 0;
          local_40 = (undefined *)0x0;
          lVar5 = 0;
          goto LAB_0012ebb0;
        }
        local_60 = lVar10;
        local_50 = ppVar13;
        iVar3 = __connect_to_port(lVar10,*(ushort *)(param_1 + 200) << 8 |
                                         *(ushort *)(param_1 + 200) >> 8,&local_44);
        local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar3);
        if (iVar3 != 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar7 = _md_log_log;
          local_40 = (undefined *)CONCAT44(local_40._4_4_,*(undefined4 *)(param_1 + 200));
          uVar16 = *(undefined4 *)(local_60 + 0x10);
          pcVar15 = &cf_devicewithnoname;
          if (*(cfstringStruct **)(local_60 + 0x20) != (cfstringStruct *)0x0) {
            pcVar15 = *(cfstringStruct **)(local_60 + 0x20);
          }
          uVar9 = _AMDErrorString(iVar3);
          local_38 = (cfstringStruct *)0x0;
          __os_log_internal(0,uVar7,0x10,
                            "Could not connect to lockdown port (%d) on device %d - %@: 0x%08x (%s)"
                            ,(ulong)local_40 & 0xffffffff,uVar16,pcVar15,CONCAT44(uVar17,iVar3),
                            uVar9);
          goto LAB_0012eba2;
        }
        iVar3 = __apply_socket_timeouts(local_44);
        local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar3);
        if (iVar3 != 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar7 = _md_log_log;
          iVar2 = *(int *)(local_60 + 0x10);
          pcVar15 = &cf_devicewithnoname;
          if (*(cfstringStruct **)(local_60 + 0x20) != (cfstringStruct *)0x0) {
            pcVar15 = *(cfstringStruct **)(local_60 + 0x20);
          }
          _AMDErrorString(iVar3);
          pcVar11 = "Failed to apply socket timeouts to device %d - %@: 0x%08x (%s)";
LAB_0012eb9b:
          local_38 = (cfstringStruct *)0x0;
          __os_log_internal(0,uVar7,0x10,pcVar11,iVar2,pcVar15);
          goto LAB_0012eba2;
        }
        if (local_44 == -1) {
          local_38 = (cfstringStruct *)0x0;
          iVar3 = -0x17fffff5;
          goto LAB_0012eba2;
        }
        lVar6 = 0;
        lVar5 = 0;
        puVar14 = (undefined *)0x0;
LAB_0012e9c6:
        lVar10 = _lockdown_connection_create(local_44);
        *(long *)(param_1 + 0x38) = lVar10;
        if (lVar10 == 0) {
          iVar3 = -0x17fffffd;
          local_40 = puVar14;
LAB_0012eaa4:
          local_38 = (cfstringStruct *)0x0;
          goto LAB_0012ebb0;
        }
        local_44 = -1;
        iVar2 = 0;
        if (*(long *)(param_1 + 0xb0) == 0) {
          local_40 = puVar14;
          local_38 = (cfstringStruct *)_copy_daemon_name(param_1,&local_98);
          iVar3 = (int)local_98;
          if ((int)local_98 == 0) {
            if (local_38 == (cfstringStruct *)0x0) {
              iVar3 = -0x17ffffed;
              goto LAB_0012eaa4;
            }
            lVar10 = _CFStringCompare(local_38,&cf_com_apple_mobile_lockdown,0);
            puVar14 = local_40;
            if (lVar10 == 0) goto LAB_0012e9fa;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,1,
                              "Device @%#lx is not a device this instance is tracking (is actually %@). Move along, move along."
                              ,*(undefined4 *)(param_1 + 0x14),local_38);
            iVar3 = -0x17ffffd8;
          }
          goto LAB_0012ebb0;
        }
        local_38 = (cfstringStruct *)0x0;
LAB_0012e9fa:
        if (local_58 != 0) {
          if (*(long *)(param_1 + 0xe8) != 0) {
            _CFRelease(*(long *)(param_1 + 0xe8));
            *(undefined8 *)(param_1 + 0xe8) = 0;
          }
          uVar7 = _CFRetain(local_58);
          *(undefined8 *)(param_1 + 0xe8) = uVar7;
        }
LAB_0012ebc0:
        _pthread_mutex_unlock(local_50);
        if (puVar14 != (undefined *)0x0) goto LAB_0012ebce;
      }
      else {
        local_60 = lVar10;
        local_50 = ppVar13;
        lVar5 = _MDRemoteServiceDeviceProviderCopyRemoteDevice(*(undefined8 *)(lVar10 + 0xf0));
        if (lVar5 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Failed to get remote service device.";
LAB_0012e55a:
          local_38 = (cfstringStruct *)0x0;
          __os_log_internal(0,_md_log_log,0x10,pcVar11);
          iVar3 = -0x17fffeee;
          goto LAB_0012eba2;
        }
        local_98 = (undefined *)0x0;
        local_88 = (code *)0x3052000000;
        local_80 = ___Block_byref_object_copy__1534;
        local_78._os_obj = (_os_object_s *)___Block_byref_object_dispose__1535;
        local_70 = (undefined **)0x0;
        local_90 = &local_98;
        if (*(long *)(lVar5 + 0x18) == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar11 = "Invalid argument(s).";
LAB_0012e6da:
          lVar6 = 0;
          __os_log_internal(0,_md_log_log,0x10,pcVar11);
        }
        else {
          lVar6 = _CFUUIDCreateString(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
          if (lVar6 == 0) {
            pcVar11 = "Failed to create UUID.";
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            goto LAB_0012e6da;
          }
          uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                            (_gConnection,"synchronousRemoteObjectProxyWithErrorHandler:",
                             &___block_literal_global_91);
          local_c0 = PTR___NSConcreteStackBlock_004412a8;
          local_b8 = (undefined **)0xc2000000;
          local_b0 = ___MDRemoteServiceDeviceGetServices_block_invoke_2;
          local_a8 = &___block_descriptor_40_e8_32r_e17_v16__0__NSArray_8l;
          local_a0 = &local_98;
          (*(code *)PTR__objc_msgSend_00441098)
                    (uVar7,"listServicesForUUID:type:withReply:",lVar6,*(undefined4 *)(lVar5 + 0x20)
                    );
        }
        (*(code *)PTR__objc_release_004410a0)(lVar6);
        puVar14 = local_90[5];
        __Block_object_dispose(&local_98,8);
        if (puVar14 == (undefined *)0x0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_38 = (cfstringStruct *)0x0;
          __os_log_internal(0,_md_log_log,0x10,"Failed to look up available remote services.");
          lVar6 = 0;
          local_40 = (undefined *)0x0;
          iVar3 = -0x17fffeee;
LAB_0012ebb0:
          _AMDeviceDisconnect(local_60);
          puVar14 = local_40;
          iVar2 = iVar3;
          goto LAB_0012ebc0;
        }
        uVar7 = _CFArrayGetCount(puVar14);
        pcVar15 = &cf_com_apple_mobile_lockdown_remote_untrusted;
        cVar1 = _CFArrayContainsValue
                          (puVar14,0,uVar7,&cf_com_apple_mobile_lockdown_remote_untrusted);
        local_40 = puVar14;
        if (cVar1 == '\0') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_38 = (cfstringStruct *)0x0;
          __os_log_internal(0,_md_log_log,0x10,"Connecting to lockdown-less device is unsupported.")
          ;
          lVar6 = 0;
          iVar3 = -0x17fffff1;
          goto LAB_0012ebb0;
        }
        uVar7 = _CFArrayGetCount(puVar14);
        cVar1 = _CFArrayContainsValue(puVar14,0,uVar7,&cf_com_apple_mobile_lockdown_remote_trusted);
        if (cVar1 != '\0') {
          pcVar15 = &cf_com_apple_mobile_lockdown_remote_trusted;
        }
        local_38 = pcVar15;
        lVar6 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                           PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        _CFDictionarySetValue
                  (lVar6,&cf_SkipAppendServiceName,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
        iVar3 = _AMDeviceSecureStartService(lVar10,local_38,lVar6,&local_58);
        local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar3);
        if (iVar3 == 0 && local_58 != 0) {
          local_44 = _dup(*(int *)(local_58 + 0x10));
          puVar14 = local_40;
          if (local_44 != -1) goto LAB_0012e9c6;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar7 = _md_log_log;
          piVar12 = ___error();
          iVar2 = *piVar12;
          piVar12 = ___error();
          pcVar11 = _strerror(*piVar12);
          local_38 = (cfstringStruct *)0x0;
          __os_log_internal(0,uVar7,0x10,"Failed to dup socket: %d (%s)",iVar2,pcVar11);
          iVar3 = -0x17ffffce;
          goto LAB_0012ebb0;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_68 = _md_log_log;
        uVar7 = _AMDErrorString(iVar3);
        iVar2 = 0;
        __os_log_internal(0,local_68,0x10,"Failed to start remote service (%@): %s",local_38,uVar7);
        if (iVar3 != 0) goto LAB_0012eaa4;
        _pthread_mutex_unlock(local_50);
        local_38 = (cfstringStruct *)0x0;
        puVar14 = local_40;
LAB_0012ebce:
        _CFRelease(puVar14);
      }
      if (local_38 != (cfstringStruct *)0x0) {
        _CFRelease();
      }
      goto LAB_0012e1ea;
    }
    iVar3 = _AMDeviceIsValid(param_1);
    iVar2 = 0;
    if (iVar3 == 0) {
      iVar3 = -0x17ffff7c;
      local_38 = (cfstringStruct *)0x0;
      local_60 = lVar10;
      local_50 = ppVar13;
      goto LAB_0012eba2;
    }
    _pthread_mutex_unlock(ppVar13);
  }
  lVar5 = 0;
  lVar6 = 0;
LAB_0012e1ea:
  if (local_58 != 0) {
    _CFRelease();
  }
  local_58 = 0;
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if ((local_44 != -1) && (iVar3 = _close(local_44), iVar3 == -1)) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    iVar3 = local_44;
    uVar7 = _md_log_log;
    piVar12 = ___error();
    __os_log_internal(0,uVar7,0x10,"close(2) on socket %d failed: %d",iVar3,*piVar12);
  }
  return iVar2;
}

