// rea decompile_all
// name: _AMDeviceCopyDeveloperModeStatus
// address: 0x115d32
// body: available
// range: 0x115d32-0x116419 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMDeviceCopyDeveloperModeStatus(long param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  long local_48;
  long local_40;
  long local_38;
  
  local_48 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    iVar3 = -0x17fffff9;
LAB_00115e44:
    lVar4 = 0;
    local_38 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = _AMDeviceCreateCopy();
    if (lVar4 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to copy device.");
      iVar3 = -0x17fffffd;
      goto LAB_00115e44;
    }
    iVar3 = _AMDeviceConnect(lVar4);
    if (iVar3 == 0) {
      iVar3 = _AMDeviceStartSession(lVar4);
      if (iVar3 == 0) {
        cVar2 = _device_os_is_at_least(lVar4,&cf_16_0,&cf_9_0,&cf_16_0,&cf_1_0);
        if (cVar2 == '\0') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_38 = 0;
          __os_log_internal(0,_md_log_log,0x10,"SPI not supported on this OS.");
          iVar3 = -0x17fffff1;
        }
        else {
          local_38 = _CFDictionaryCreateMutable
                               (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (local_38 != 0) {
            _CFDictionarySetValue(local_38,&cf_Command,&cf_QueryDeveloperModeStatus);
            iVar3 = _AMDeviceSecureStartSessionedService(lVar4,&local_48);
            if (iVar3 == 0) {
              iVar3 = _AMDServiceConnectionSendMessage(local_48,local_38,100);
              if (iVar3 == 0) {
                iVar3 = _AMDServiceConnectionReceiveMessage(local_48,&local_40,0);
                if (iVar3 == 0) {
                  if (local_40 != 0) {
                    lVar5 = _CFGetTypeID();
                    lVar8 = _CFDictionaryGetTypeID();
                    if (lVar5 == lVar8) {
                      lVar5 = _CFDictionaryGetValue(local_40,&cf_Error);
                      if (lVar5 == 0) {
                        lVar5 = _CFDictionaryGetValue(local_40,&cf_DeveloperModeStatus);
                        if (lVar5 != 0) {
                          lVar8 = _CFGetTypeID(lVar5);
                          lVar9 = _CFBooleanGetTypeID();
                          if (lVar8 == lVar9) {
                            cVar2 = _CFBooleanGetValue(lVar5);
                            uVar11 = CONCAT71((int7)((ulong)lVar5 >> 8),cVar2 != '\0');
                            bVar1 = true;
                            iVar3 = 0;
                            lVar5 = 0;
                            goto LAB_00115e54;
                          }
                        }
                        if (_md_log_onceToken != -1) {
                          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                        }
                        lVar5 = 0;
                        __os_log_internal(0,_md_log_log,0x10,"Response missing key: %@",
                                          &cf_DeveloperModeStatus);
                        iVar3 = -0x17ffffed;
                        goto LAB_001160b8;
                      }
                      _CFDictionaryGetValue(local_40,&cf_DetailedError);
                      iVar3 = _MobileDevelopmentConvertError(lVar5);
                      lVar5 = _AMDCopyErrorText(iVar3);
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      uVar12 = _md_log_log;
                      pcVar7 = (char *)_AMDErrorString(iVar3);
                      pcVar10 = "An error occurred while sending message: 0x%08x (%s: %@) (%@)";
                      goto LAB_00116171;
                    }
                  }
                  lVar5 = _AMDCopyErrorText(0xe800002e);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  pcVar10 = "Invalid response: 0x%08x (%s: %@)";
                  pcVar7 = "kAMDReceiveMessageError";
                  iVar3 = -0x17ffffd2;
                  uVar12 = _md_log_log;
                }
                else {
                  lVar5 = _AMDCopyErrorText(iVar3);
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar12 = _md_log_log;
                  pcVar7 = (char *)_AMDErrorString(iVar3);
                  pcVar10 = "Failed to receive message: 0x%08x (%s: %@)";
                }
              }
              else {
                lVar5 = _AMDCopyErrorText(iVar3);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar12 = _md_log_log;
                pcVar7 = (char *)_AMDErrorString(iVar3);
                pcVar10 = "Failed to send message: 0x%08x (%s: %@)";
              }
LAB_00116171:
              __os_log_internal(0,uVar12,0x10,pcVar10,iVar3,pcVar7,lVar5);
            }
            else {
              lVar5 = _AMDCopyErrorText(iVar3);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar12 = _md_log_log;
              uVar6 = _AMDErrorString(iVar3);
              __os_log_internal(0,uVar12,0x10,"Failed to start %@: 0x%08x (%s: %@)",
                                &cf_com_apple_mobile_mobile_image_mounter,iVar3,uVar6,lVar5);
            }
            uVar11 = 0;
            bVar1 = true;
            goto LAB_00115e54;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_38 = 0;
          __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
          iVar3 = -0x17fffffd;
        }
        lVar5 = 0;
      }
      else {
        lVar5 = _AMDCopyErrorText(iVar3);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar12 = _md_log_log;
        uVar6 = _AMDErrorString(iVar3);
        local_38 = 0;
        __os_log_internal(0,uVar12,0x10,"Failed to start session: 0x%08x (%s: %@)",iVar3,uVar6,lVar5
                         );
      }
LAB_001160b8:
      bVar1 = true;
      uVar11 = 0;
      goto LAB_00115e54;
    }
    lVar5 = _AMDCopyErrorText(iVar3);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar12 = _md_log_log;
    uVar6 = _AMDErrorString(iVar3);
    local_38 = 0;
    __os_log_internal(0,uVar12,0x10,"Failed to connect to device: 0x%08x (%s: %@)",iVar3,uVar6,lVar5
                     );
  }
  uVar11 = 0;
  bVar1 = false;
LAB_00115e54:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
  }
  if (local_48 != 0) {
    _hangup_with_image_mounter_service(local_48,0,0);
    if (local_48 != 0) {
      _CFRelease();
    }
    local_48 = 0;
  }
  if (lVar4 != 0) {
    if (bVar1) {
      _AMDeviceDisconnect(lVar4);
    }
    _CFRelease(lVar4);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  local_40 = 0;
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return uVar11 & 0xffffffff;
}

