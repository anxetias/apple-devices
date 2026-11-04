// rea decompile_all
// name: _stream_image
// address: 0x1185e9
// body: available
// range: 0x1185e9-0x119865 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1196b1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_stream_image(long param_1,long param_2,long param_3,void *param_4,long param_5,undefined8 param_6,
             char param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  cfstringStruct *pcVar14;
  undefined8 local_560;
  undefined8 *local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  long local_498;
  void *local_490;
  long local_488;
  long local_480;
  undefined8 local_478;
  undefined8 *local_470;
  undefined8 local_468;
  undefined4 local_460;
  long local_458;
  long local_450;
  undefined1 local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_470 = &local_478;
  local_478 = 0;
  local_468 = 0x2000000000;
  local_460 = 0xe80000f1;
  local_458 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_558 = &local_560;
  local_560 = 0;
  local_550 = 0x3800000000;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  uStack_530 = 0;
  if ((param_1 == 0 || param_2 == 0) && ((param_1 != 0 || param_2 != 0) && param_3 != 0)) {
    local_490 = param_4;
    local_488 = param_1;
    local_450 = param_5;
    cVar1 = _CFStringGetFileSystemRepresentation(param_3,local_448,0x400);
    if (cVar1 == '\0') {
      *(undefined4 *)(local_470 + 3) = 0xe8000003;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to get C string for %@.",param_3);
    }
    else {
      iVar2 = _stat_INODE64(local_448,&local_528);
      if (iVar2 != -1) {
        lVar4 = _CFNumberCreate(0,0xb,&local_4c8);
        if (lVar4 == 0) {
          *(undefined4 *)(local_470 + 3) = 0xe8000003;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar13 = "Failed to create number.";
          goto LAB_001187dd;
        }
        local_498 = lVar4;
        lVar4 = _CFDictionaryGetValue(param_6,&cf_ImageType);
        if (lVar4 == 0) {
          *(undefined4 *)(local_470 + 3) = 0xe8000007;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_480 = 0;
          __os_log_internal(0,_md_log_log,0x10,"Options missing key: %@",&cf_ImageType);
LAB_00118a3c:
          local_450 = 0;
LAB_00118e69:
          lVar4 = 0;
          lVar5 = 0;
LAB_00118e6c:
          uVar3 = *(undefined4 *)(local_470 + 3);
          _CFRelease(local_498);
          local_488 = 0;
          lVar8 = 0;
          lVar11 = 0;
          lVar10 = local_450;
          if (local_480 == 0) goto LAB_00118809;
        }
        else {
          local_480 = _CFDictionaryCreateMutable
                                (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                 PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                 PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (local_480 == 0) {
            *(undefined4 *)(local_470 + 3) = 0xe8000003;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            local_480 = 0;
            __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
            goto LAB_00118a3c;
          }
          lVar5 = _CFDictionaryGetValue(param_6,&cf_ImageSignature);
          if (lVar5 == 0) {
            lVar5 = _CFDictionaryGetValue(param_6,&cf_ImageDigest);
            if (lVar5 != 0) {
              pcVar14 = &cf_ImageDigest;
              goto LAB_00118a6b;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            local_450 = 0;
            __os_log_internal(0,_md_log_log,0x10,"Options missing %@ or %@ keys.",&cf_ImageSignature
                              ,&cf_ImageDigest);
            *(undefined4 *)(local_470 + 3) = 0xe8000007;
            goto LAB_00118e69;
          }
          pcVar14 = &cf_ImageSignature;
LAB_00118a6b:
          lVar8 = local_480;
          _CFDictionarySetValue(local_480,pcVar14,lVar5);
          _CFDictionarySetValue(lVar8,&cf_Command,&cf_ReceiveBytes);
          _CFDictionarySetValue(lVar8,&cf_ImageType,lVar4);
          _CFDictionarySetValue(lVar8,&cf_ImageSize,local_498);
          lVar4 = local_488;
          if (param_2 == 0) {
            iVar2 = _AMDServiceConnectionSendMessage(local_488,lVar8,100);
            *(int *)(local_470 + 3) = iVar2;
            if (iVar2 == 0) {
              iVar2 = _AMDServiceConnectionReceiveMessage(lVar4,&local_458,0);
              *(int *)(local_470 + 3) = iVar2;
              if (iVar2 == 0) {
                if (local_458 == 0) {
LAB_001190de:
                  *(undefined4 *)(local_470 + 3) = 0xe8000004;
joined_r0x001190ed:
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar13 = "Invalid response message.";
                }
                else {
                  lVar4 = _CFGetTypeID();
                  lVar5 = _CFDictionaryGetTypeID();
                  if (lVar4 != lVar5) goto LAB_001190de;
                  lVar4 = _CFDictionaryGetValue(local_458,&cf_Error);
                  if (lVar4 != 0) {
                    uVar9 = _CFDictionaryGetValue(local_458,&cf_DetailedError);
                    uVar3 = _MobileDevelopmentConvertError(lVar4);
                    *(undefined4 *)(local_470 + 3) = uVar3;
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    local_450 = 0;
                    __os_log_internal(0,_md_log_log,0x10,
                                      "An error occurred while sending message: %@ (%@)",lVar4,uVar9
                                     );
                    goto LAB_00118e69;
                  }
                  pcVar14 = (cfstringStruct *)_CFDictionaryGetValue(local_458,&cf_Status);
                  if (pcVar14 == (cfstringStruct *)0x0) {
                    *(undefined4 *)(local_470 + 3) = 0xe8000004;
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    pcVar13 = "Response message missing key: %@";
                    pcVar14 = &cf_Status;
LAB_0011935b:
                    local_450 = 0;
                    __os_log_internal(0,_md_log_log,0x10,pcVar13,pcVar14);
                    goto LAB_00118e69;
                  }
                  lVar4 = _CFGetTypeID(pcVar14);
                  lVar5 = _CFStringGetTypeID();
                  if (lVar4 != lVar5) {
                    *(undefined4 *)(local_470 + 3) = 0xe8000004;
                    goto joined_r0x001190ed;
                  }
                  lVar4 = _CFStringCompare(pcVar14,&cf_ReceiveBytesAck,0);
                  if (lVar4 != 0) {
                    *(undefined4 *)(local_470 + 3) = 0xe80000f1;
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    pcVar13 = "status is not ACK: %@";
                    goto LAB_0011935b;
                  }
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,1,"ACK\'d (%@), proceeding with transfer...",
                                    pcVar14);
                  local_558[4] = local_4c8;
                  local_558[3] = 1;
                  cVar1 = _read_file();
                  if (cVar1 != '\0') {
                    if (local_458 != 0) {
                      _CFRelease();
                    }
                    local_458 = 0;
                    iVar2 = _AMDServiceConnectionReceiveMessage(local_488,&local_458,0);
                    *(int *)(local_470 + 3) = iVar2;
                    if (iVar2 == 0) {
                      local_490 = (void *)0x0;
                      local_450 = 0;
                      lVar4 = 0;
                      lVar8 = 0;
                      lVar5 = 0;
                      local_488 = 0;
                      goto LAB_00118be4;
                    }
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    uVar9 = _md_log_log;
                    uVar3 = *(undefined4 *)(local_470 + 3);
                    uVar12 = _AMDErrorString(uVar3);
                    pcVar13 = "AMDServiceConnectionReceiveMessage failed: 0x%08x, %s";
                    goto LAB_00118e46;
                  }
                  *(undefined4 *)(local_470 + 3) = 0xe80000f1;
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar13 = "Failed to read/send image.";
                }
                local_450 = 0;
                __os_log_internal(0,_md_log_log,0x10,pcVar13);
                goto LAB_00118e69;
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar9 = _md_log_log;
              uVar3 = *(undefined4 *)(local_470 + 3);
              uVar12 = _AMDErrorString(uVar3);
              pcVar13 = "Failed to receive message: 0x%08x (%s)";
            }
            else {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar9 = _md_log_log;
              uVar3 = *(undefined4 *)(local_470 + 3);
              uVar12 = _AMDErrorString(uVar3);
              pcVar13 = "Failed to send message: 0x%08x (%s)";
            }
LAB_00118e46:
            local_450 = 0;
            __os_log_internal(0,uVar9,0x10,pcVar13,uVar3,uVar12);
            goto LAB_00118e69;
          }
          if (param_7 != '\0') {
            _CFDictionarySetValue(local_480,&cf_Command,&cf_ReceiveBytesMacOS);
          }
          lVar4 = _xpc_dictionary_create(0,0,0);
          if (lVar4 == 0) {
            *(undefined4 *)(local_470 + 3) = 0xe8000003;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar9 = _md_log_log;
            uVar3 = *(undefined4 *)(local_470 + 3);
            uVar12 = _AMDErrorString(uVar3);
            pcVar13 = "Failed to create xpc dictionary: 0x%08x (%s)";
            goto LAB_00118e46;
          }
          local_450 = lVar4;
          lVar4 = __CFXPCCreateXPCObjectFromCFObject(local_480);
          if (lVar4 == 0) {
            *(undefined4 *)(local_470 + 3) = 0xe8000003;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar9 = _md_log_log;
            uVar3 = *(undefined4 *)(local_470 + 3);
            uVar12 = _AMDErrorString(uVar3);
            __os_log_internal(0,uVar9,0x10,"Failed to create xpc dictionary: 0x%08x (%s)",uVar3,
                              uVar12);
            goto LAB_00118e69;
          }
          if (PTR__xpc_file_transfer_create_with_path_00441348 == (undefined *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar5 = 0;
            __os_log_internal(0,_md_log_log,0x10,
                              "Failed to load XPC file transfer library on this OS.");
            *(undefined4 *)(local_470 + 3) = 0xe80000f1;
            goto LAB_00118e6c;
          }
          lVar5 = _xpc_file_transfer_create_with_path(local_448,&___block_literal_global_285);
          if (lVar5 == 0) {
            *(undefined4 *)(local_470 + 3) = 0xe8000003;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar5 = 0;
            __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc file transfer.");
            goto LAB_00118e6c;
          }
          pvVar7 = (void *)_copyProcessName();
          if (pvVar7 == (void *)0x0) {
            *(undefined4 *)(local_470 + 3) = 0xe80000f1;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar9 = _md_log_log;
            uVar3 = *(undefined4 *)(local_470 + 3);
            uVar12 = _AMDErrorString(uVar3);
            __os_log_internal(0,uVar9,0x10,"Failed to query current process name: 0x%08x (%s)",uVar3
                              ,uVar12);
            goto LAB_00118e6c;
          }
          local_490 = pvVar7;
          lVar8 = _xpc_string_create(pvVar7);
          local_488 = lVar8;
          if (lVar8 == 0) {
            *(undefined4 *)(local_470 + 3) = 0xe8000003;
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar9 = _md_log_log;
            uVar3 = *(undefined4 *)(local_470 + 3);
            uVar12 = _AMDErrorString(uVar3);
            __os_log_internal(0,uVar9,0x10,"Failed to create xpc string: 0x%08x (%s)",uVar3,uVar12);
LAB_001191b7:
            uVar3 = *(undefined4 *)(local_470 + 3);
            lVar8 = 0;
LAB_001191cc:
            _free(local_490);
          }
          else {
            uVar9 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
            _xpc_dictionary_set_value(lVar4,uVar9,lVar8);
            lVar8 = local_450;
            _xpc_dictionary_set_value(local_450,"XPCRequestRecvTx",lVar5);
            _xpc_dictionary_set_value(lVar8,"XPCRequestDictionary",lVar4);
            lVar8 = _xpc_remote_connection_send_message_with_reply_sync(param_2,lVar8);
            if (lVar8 == 0) {
              *(undefined4 *)(local_470 + 3) = 0xe80000f5;
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"Failed to send/receive XPC message.");
              goto LAB_001191b7;
            }
            local_458 = __CFXPCCreateCFObjectFromXPCObject(lVar8);
LAB_00118be4:
            if (local_458 == 0) {
LAB_00119124:
              *(undefined4 *)(local_470 + 3) = 0xe8000004;
joined_r0x0011913a:
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"Invalid response message.");
            }
            else {
              lVar10 = _CFGetTypeID(local_458);
              lVar11 = _CFDictionaryGetTypeID();
              if (lVar10 != lVar11) goto LAB_00119124;
              lVar10 = _CFDictionaryGetValue(local_458,&cf_Error);
              if (lVar10 == 0) {
                pcVar14 = (cfstringStruct *)_CFDictionaryGetValue(local_458,&cf_Status);
                if (pcVar14 == (cfstringStruct *)0x0) {
                  *(undefined4 *)(local_470 + 3) = 0xe8000004;
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar13 = "Response message missing key: %@";
                  pcVar14 = &cf_Status;
LAB_001193f5:
                  __os_log_internal(0,_md_log_log,0x10,pcVar13,pcVar14);
                  goto LAB_00119161;
                }
                lVar10 = _CFGetTypeID(pcVar14);
                lVar11 = _CFStringGetTypeID();
                if (lVar10 == lVar11) {
                  lVar10 = _CFStringCompare(pcVar14,&cf_Complete,0);
                  if (lVar10 == 0) {
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    __os_log_internal(0,_md_log_log,1,"transfer complete (%@).",pcVar14);
                    *(undefined4 *)(local_470 + 3) = 0;
                    goto LAB_00119161;
                  }
                  *(undefined4 *)(local_470 + 3) = 0xe80000f1;
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar13 = "status is not complete: %@";
                  goto LAB_001193f5;
                }
                *(undefined4 *)(local_470 + 3) = 0xe8000004;
                goto joined_r0x0011913a;
              }
              uVar9 = _CFDictionaryGetValue(local_458,&cf_DetailedError);
              uVar3 = _MobileDevelopmentConvertError(lVar10);
              *(undefined4 *)(local_470 + 3) = uVar3;
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,
                                "An error occurred while sending message: %@ (%@)",lVar10,uVar9);
            }
LAB_00119161:
            uVar3 = *(undefined4 *)(local_470 + 3);
            if (local_490 != (void *)0x0) goto LAB_001191cc;
          }
          _CFRelease(local_498);
        }
        lVar10 = local_450;
        _CFRelease(local_480);
        lVar11 = lVar8;
        goto LAB_00118809;
      }
      *(undefined4 *)(local_470 + 3) = 0xe8000003;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar9 = _md_log_log;
      piVar6 = ___error();
      iVar2 = *piVar6;
      piVar6 = ___error();
      pcVar13 = _strerror(*piVar6);
      __os_log_internal(0,uVar9,0x10,"Failed to stat %s: %d (%s)",local_448,iVar2,pcVar13);
    }
  }
  else {
    local_460 = 0xe8000007;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar13 = "Invalid input(s).";
LAB_001187dd:
    __os_log_internal(0,_md_log_log,0x10,pcVar13);
  }
  uVar3 = *(undefined4 *)(local_470 + 3);
  local_488 = 0;
  lVar5 = 0;
  lVar11 = 0;
  lVar4 = 0;
  lVar10 = 0;
LAB_00118809:
  if (local_458 != 0) {
    _CFRelease();
  }
  local_458 = 0;
  if (lVar10 != 0) {
    _xpc_release(lVar10);
  }
  if (lVar4 != 0) {
    _xpc_release(lVar4);
  }
  if (lVar11 != 0) {
    _xpc_release(lVar11);
  }
  if (lVar5 != 0) {
    _xpc_release(lVar5);
  }
  if (local_488 != 0) {
    _xpc_release();
  }
  __Block_object_dispose(&local_560,8);
  __Block_object_dispose(&local_478,8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

