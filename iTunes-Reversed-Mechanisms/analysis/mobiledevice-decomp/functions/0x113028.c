// rea decompile_all
// name: _AMDeviceCopyMountedDevicesList
// address: 0x113028
// body: available
// range: 0x113028-0x113881 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceCopyMountedDevicesList(long param_1,int *param_2)

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
  undefined8 uVar11;
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
LAB_0011313b:
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
      goto LAB_0011313b;
    }
    iVar3 = _AMDeviceConnect(lVar4);
    if (iVar3 == 0) {
      iVar3 = _AMDeviceStartSession(lVar4);
      if (iVar3 != 0) {
        lVar5 = _AMDCopyErrorText(iVar3);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar11 = _md_log_log;
        uVar6 = _AMDErrorString(iVar3);
        local_38 = 0;
        __os_log_internal(0,uVar11,0x10,"Failed to start session: 0x%08x (%s: %@)",iVar3,uVar6,lVar5
                         );
        bVar1 = true;
        lVar8 = 0;
        goto LAB_0011314c;
      }
      cVar2 = _device_os_is_at_least(lVar4,&cf_14_0,&cf_7_0,&cf_14_0,&cf_1_0);
      if (cVar2 == '\0') {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_38 = 0;
        __os_log_internal(0,_md_log_log,0x10,"SPI not supported on this OS.");
        iVar3 = -0x17fffff1;
LAB_001133b5:
        lVar8 = 0;
      }
      else {
        uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar5 = _CFDictionaryCreateMutable
                          (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar5 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_38 = 0;
          __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
          iVar3 = -0x17fffffd;
          goto LAB_001133b5;
        }
        _CFDictionarySetValue(lVar5,&cf_Command,&cf_CopyDevices);
        iVar3 = _AMDeviceSecureStartSessionedService(lVar4,&local_48);
        local_38 = lVar5;
        if (iVar3 != 0) {
          lVar5 = _AMDCopyErrorText(iVar3);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar11 = _md_log_log;
          uVar6 = _AMDErrorString(iVar3);
          __os_log_internal(0,uVar11,0x10,"Failed to start %@: 0x%08x (%s: %@)",
                            &cf_com_apple_mobile_mobile_image_mounter,iVar3,uVar6,lVar5);
LAB_0011347a:
          lVar8 = 0;
          bVar1 = true;
          goto LAB_0011314c;
        }
        iVar3 = _AMDServiceConnectionSendMessage(local_48,lVar5,100);
        if (iVar3 != 0) {
          lVar5 = _AMDCopyErrorText(iVar3);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar11 = _md_log_log;
          pcVar7 = (char *)_AMDErrorString(iVar3);
          pcVar10 = "Failed to send message: 0x%08x (%s: %@)";
LAB_00113473:
          __os_log_internal(0,uVar11,0x10,pcVar10,iVar3,pcVar7,lVar5);
          goto LAB_0011347a;
        }
        iVar3 = _AMDServiceConnectionReceiveMessage(local_48,&local_40,0);
        if (iVar3 != 0) {
          lVar5 = _AMDCopyErrorText(iVar3);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar11 = _md_log_log;
          pcVar7 = (char *)_AMDErrorString(iVar3);
          pcVar10 = "Failed to receive message: 0x%08x (%s: %@)";
          goto LAB_00113473;
        }
        if (local_40 == 0) {
LAB_0011351e:
          lVar5 = _AMDCopyErrorText(0xe800002e);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar10 = "Invalid response: 0x%08x (%s: %@)";
          pcVar7 = "kAMDReceiveMessageError";
          iVar3 = -0x17ffffd2;
          uVar11 = _md_log_log;
          goto LAB_00113473;
        }
        lVar5 = _CFGetTypeID();
        lVar8 = _CFDictionaryGetTypeID();
        if (lVar5 != lVar8) goto LAB_0011351e;
        lVar5 = _CFDictionaryGetValue(local_40,&cf_Error);
        if (lVar5 != 0) {
          _CFDictionaryGetValue(local_40,&cf_DetailedError);
          iVar3 = _MobileDevelopmentConvertError(lVar5);
          lVar5 = _AMDCopyErrorText(iVar3);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar11 = _md_log_log;
          pcVar7 = (char *)_AMDErrorString(iVar3);
          pcVar10 = "An error occurred while sending message: 0x%08x (%s: %@) (%@)";
          goto LAB_00113473;
        }
        lVar5 = _CFDictionaryGetValue(local_40,&cf_Status);
        if (lVar5 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar8 = 0;
          __os_log_internal(0,_md_log_log,0x10,"Response message missing key: %@",&cf_Status);
          iVar3 = -0x17fffffc;
        }
        else {
          cVar2 = _CFEqual(lVar5,&cf_Complete);
          if (cVar2 == '\0') {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar8 = 0;
            __os_log_internal(0,_md_log_log,0x10,"Status is not complete: %@",lVar5);
            iVar3 = -0x17ffff0f;
          }
          else {
            lVar5 = _CFDictionaryGetValue(local_40,&cf_EntryList);
            if (lVar5 == 0) {
              iVar3 = 0;
              lVar8 = _CFArrayCreateMutable(uVar11,0,PTR__kCFTypeArrayCallBacks_004411a8);
              if (lVar8 == 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                lVar8 = 0;
                __os_log_internal(0,_md_log_log,0x10,"Failed to create array.");
                iVar3 = -0x17fffffd;
              }
            }
            else {
              lVar8 = _CFGetTypeID(lVar5);
              lVar9 = _CFArrayGetTypeID();
              if (lVar8 == lVar9) {
                lVar8 = _CFRetain(lVar5);
                iVar3 = 0;
              }
              else {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                lVar8 = 0;
                __os_log_internal(0,_md_log_log,0x10,"Invalid value for %@.",&cf_EntryList);
                iVar3 = -0x17ffffed;
              }
            }
          }
        }
      }
      bVar1 = true;
      lVar5 = 0;
      goto LAB_0011314c;
    }
    lVar5 = _AMDCopyErrorText(iVar3);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar11 = _md_log_log;
    uVar6 = _AMDErrorString(iVar3);
    local_38 = 0;
    __os_log_internal(0,uVar11,0x10,"Failed to connect to device: 0x%08x (%s: %@)",iVar3,uVar6,lVar5
                     );
  }
  lVar8 = 0;
  bVar1 = false;
LAB_0011314c:
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
  if (lVar4 != 0) {
    if (bVar1) {
      _AMDeviceDisconnect(lVar4);
    }
    _CFRelease(lVar4);
  }
  return lVar8;
}

