// rea decompile_all
// name: _AMDeviceCopyPersonalizationIdentifiersWithError
// address: 0x11e06b
// body: available
// range: 0x11e06b-0x11e7b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDeviceCopyPersonalizationIdentifiersWithError(long param_1,long param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long local_48;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_38 = 0;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input(s).");
    iVar2 = -0x17ffff0f;
  }
  else {
    lVar3 = _AMDeviceCreateCopy();
    if (lVar3 != 0) {
      local_48 = _CFDictionaryCreateMutable
                           (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                            PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                            PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (local_48 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar9 = 0;
        __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
        iVar2 = -0x17fffffd;
        local_48 = 0;
LAB_0011e3cc:
        lVar5 = 0;
LAB_0011e3cf:
        lVar4 = 0;
        goto LAB_0011e3d2;
      }
      if ((param_2 != 0) &&
         (lVar4 = _CFDictionaryGetValue(param_2,&cf_PersonalizedImageType), lVar4 != 0)) {
        lVar5 = _CFGetTypeID(lVar4);
        lVar6 = _CFStringGetTypeID();
        if (lVar5 != lVar6) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar9 = 0;
          __os_log_internal(0,_md_log_log,0x10,"Invalid value for options key: %@",
                            &cf_PersonalizedImageType);
          iVar2 = -0x17ffff0f;
          goto LAB_0011e3cc;
        }
        _CFDictionarySetValue(local_48,&cf_PersonalizedImageType,lVar4);
      }
      _CFDictionarySetValue(local_48,&cf_Command,&cf_QueryPersonalizationIdentifiers);
      iVar2 = _AMDeviceConnect(lVar3);
      if (iVar2 == 0) {
        iVar2 = _AMDeviceStartSession(lVar3);
        if (iVar2 != 0) {
          lVar4 = _AMDCopyErrorText(iVar2);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar9 = _md_log_log;
          pcVar7 = (char *)_AMDErrorString(iVar2);
          pcVar10 = "Failed to start session: 0x%08x (%s: %@)";
          goto LAB_0011e2aa;
        }
        cVar1 = _device_os_is_at_least(lVar3,&cf_15_0,&cf_8_0,&cf_15_0,&cf_1_0);
        if (cVar1 == '\0') {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar9 = 0;
          __os_log_internal(0,_md_log_log,0x10,"SPI not supported on this OS.");
          iVar2 = -0x17fffff1;
          goto LAB_0011e3cc;
        }
        iVar2 = _AMDeviceSecureStartSessionedService(lVar3,&local_38);
        if (iVar2 == 0) {
          iVar2 = _AMDServiceConnectionSendMessage(local_38,local_48,100);
          if (iVar2 == 0) {
            iVar2 = _AMDServiceConnectionReceiveMessage(local_38,&local_40,0);
            if (iVar2 == 0) {
              if (local_40 != 0) {
                lVar4 = _CFGetTypeID();
                lVar5 = _CFDictionaryGetTypeID();
                if (lVar4 == lVar5) {
                  lVar4 = _CFDictionaryGetValue(local_40,&cf_Error);
                  if (lVar4 != 0) {
                    _CFDictionaryGetValue(local_40,&cf_DetailedError);
                    iVar2 = _MobileDevelopmentConvertError(lVar4);
                    lVar4 = _AMDCopyErrorText(iVar2);
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    uVar9 = _md_log_log;
                    pcVar7 = (char *)_AMDErrorString(iVar2);
                    pcVar10 = "An error occurred while sending message: 0x%08x (%s: %@) (%@)";
                    goto LAB_0011e2aa;
                  }
                  lVar5 = _CFDictionaryGetValue(local_40,&cf_PersonalizationIdentifiers);
                  if (lVar5 != 0) {
                    lVar4 = _CFGetTypeID(lVar5);
                    lVar6 = _CFDictionaryGetTypeID();
                    if (lVar4 == lVar6) {
                      uVar9 = _CFRetain(lVar5);
                      iVar2 = 0;
                      goto LAB_0011e3cc;
                    }
                  }
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar9 = 0;
                  __os_log_internal(0,_md_log_log,0x10,
                                    "Failed to read identifiers from response message.");
                  iVar2 = -0x17ffffed;
                  goto LAB_0011e3cf;
                }
              }
              lVar4 = _AMDCopyErrorText(0xe800002e);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar10 = "Invalid response: 0x%08x (%s: %@)";
              pcVar7 = "kAMDReceiveMessageError";
              iVar2 = -0x17ffffd2;
              uVar9 = _md_log_log;
            }
            else {
              lVar4 = _AMDCopyErrorText(iVar2);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar9 = _md_log_log;
              pcVar7 = (char *)_AMDErrorString(iVar2);
              pcVar10 = "Failed to receive message: 0x%08x (%s: %@)";
            }
          }
          else {
            lVar4 = _AMDCopyErrorText(iVar2);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar9 = _md_log_log;
            pcVar7 = (char *)_AMDErrorString(iVar2);
            pcVar10 = "Failed to send message: 0x%08x (%s: %@)";
          }
          goto LAB_0011e2aa;
        }
        lVar4 = _AMDCopyErrorText(iVar2);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar9 = _md_log_log;
        uVar8 = _AMDErrorString(iVar2);
        __os_log_internal(0,uVar9,0x10,"Failed to start %@: 0x%08x (%s: %@)",
                          &cf_com_apple_mobile_mobile_image_mounter,iVar2,uVar8,lVar4);
      }
      else {
        lVar4 = _AMDCopyErrorText(iVar2);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar9 = _md_log_log;
        pcVar7 = (char *)_AMDErrorString(iVar2);
        pcVar10 = "Failed to connect to device: 0x%08x (%s: %@)";
LAB_0011e2aa:
        __os_log_internal(0,uVar9,0x10,pcVar10,iVar2,pcVar7,lVar4);
      }
      uVar9 = 0;
      lVar5 = 0;
      goto LAB_0011e3d2;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to copy device.");
    iVar2 = -0x17fffffd;
  }
  uVar9 = 0;
  local_48 = 0;
  lVar5 = 0;
  lVar4 = 0;
  lVar3 = 0;
LAB_0011e3d2:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_38 != 0) {
    _hangup_with_image_mounter_service(local_38,0,0);
    if (local_38 != 0) {
      _CFRelease();
    }
    local_38 = 0;
  }
  if (local_48 != 0) {
    _CFRelease(local_48);
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  local_40 = 0;
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar3 != 0) {
    _AMDeviceDisconnect(lVar3);
    _CFRelease(lVar3);
  }
  return uVar9;
}

