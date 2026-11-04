// rea decompile_all
// name: _AMDeviceCopyPersonalizationNonceWithOptions
// address: 0x114e3b
// body: available
// range: 0x114e3b-0x11564a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceCopyPersonalizationNonceWithOptions(long param_1,long param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  long local_50;
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
LAB_00114f6a:
    local_50 = 0;
    local_38 = 0;
    lVar4 = 0;
  }
  else {
    local_50 = _AMDeviceCreateCopy();
    if (local_50 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to copy device.");
      iVar3 = -0x17fffffd;
      goto LAB_00114f6a;
    }
    iVar3 = _AMDeviceConnect(local_50);
    if (iVar3 == 0) {
      iVar3 = _AMDeviceStartSession(local_50);
      if (iVar3 != 0) {
        lVar4 = _AMDCopyErrorText(iVar3);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar11 = _md_log_log;
        uVar5 = _AMDErrorString(iVar3);
        local_38 = 0;
        __os_log_internal(0,uVar11,0x10,"Failed to start session: 0x%08x (%s: %@)",iVar3,uVar5,lVar4
                         );
        lVar6 = 0;
LAB_00115089:
        bVar1 = true;
        lVar7 = 0;
        goto LAB_00114f7d;
      }
      cVar2 = _device_os_is_at_least(local_50,&cf_13_0,&cf_6_0,&cf_13_0,&cf_1_0);
      if (cVar2 == '\0') {
        lVar6 = _AMDeviceCopyValueWithError(local_50,0,&cf_ApNonce,0);
        if (lVar6 == 0) {
LAB_001151ff:
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_38 = 0;
          __os_log_internal(0,_md_log_log,0x10,"Failed to query APNonce.");
          iVar3 = -0x17ffffed;
          goto LAB_00115325;
        }
        lVar4 = _CFGetTypeID(lVar6);
        lVar7 = _CFDataGetTypeID();
        if (lVar4 != lVar7) goto LAB_001151ff;
        local_38 = 0;
        lVar7 = lVar6;
LAB_001151f8:
        iVar3 = 0;
        lVar6 = 0;
      }
      else {
        lVar4 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                           PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar4 != 0) {
          _CFDictionarySetValue(lVar4,&cf_Command,&cf_QueryNonce);
          local_38 = lVar4;
          if ((param_2 != 0) &&
             (lVar6 = _CFDictionaryGetValue(param_2,&cf_PersonalizedImageType), lVar6 != 0)) {
            lVar7 = _CFGetTypeID(lVar6);
            lVar8 = _CFStringGetTypeID();
            if (lVar7 != lVar8) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              iVar3 = 0;
              __os_log_internal(0,_md_log_log,0x10,"Invalid value for options key: %@",
                                &cf_PersonalizedImageType);
              goto LAB_00115323;
            }
            _CFDictionarySetValue(lVar4,&cf_PersonalizedImageType,lVar6);
          }
          iVar3 = _AMDeviceSecureStartSessionedService(local_50,&local_48);
          if (iVar3 == 0) {
            iVar3 = _AMDServiceConnectionSendMessage(local_48,local_38,100);
            if (iVar3 == 0) {
              iVar3 = _AMDServiceConnectionReceiveMessage(local_48,&local_40,0);
              if (iVar3 == 0) {
                if (local_40 != 0) {
                  lVar4 = _CFGetTypeID();
                  lVar6 = _CFDictionaryGetTypeID();
                  if (lVar4 == lVar6) {
                    lVar4 = _CFDictionaryGetValue(local_40,&cf_Error);
                    if (lVar4 == 0) {
                      lVar6 = _CFDictionaryGetValue(local_40,&cf_PersonalizationNonce);
                      if (lVar6 != 0) {
                        _CFRetain(lVar6);
                        lVar4 = _CFGetTypeID(lVar6);
                        lVar8 = _CFDataGetTypeID();
                        lVar7 = lVar6;
                        if (lVar4 == lVar8) goto LAB_001151f8;
                      }
                      if (_md_log_onceToken != -1) {
                        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                      }
                      lVar4 = 0;
                      __os_log_internal(0,_md_log_log,0x10,"Response missing key: %@",
                                        &cf_PersonalizationNonce);
                      iVar3 = -0x17ffffed;
                      goto LAB_00115089;
                    }
                    _CFDictionaryGetValue(local_40,&cf_DetailedError);
                    iVar3 = _MobileDevelopmentConvertError(lVar4);
                    lVar4 = _AMDCopyErrorText(iVar3);
                    if (_md_log_onceToken != -1) {
                      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                    }
                    uVar11 = _md_log_log;
                    pcVar9 = (char *)_AMDErrorString(iVar3);
                    pcVar10 = "An error occurred while sending message: 0x%08x (%s: %@) (%@)";
                    goto LAB_0011538f;
                  }
                }
                lVar4 = _AMDCopyErrorText(0xe800002e);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                pcVar10 = "Invalid response: 0x%08x (%s: %@)";
                pcVar9 = "kAMDReceiveMessageError";
                iVar3 = -0x17ffffd2;
                uVar11 = _md_log_log;
              }
              else {
                lVar4 = _AMDCopyErrorText(iVar3);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar11 = _md_log_log;
                pcVar9 = (char *)_AMDErrorString(iVar3);
                pcVar10 = "Failed to receive message: 0x%08x (%s: %@)";
              }
            }
            else {
              lVar4 = _AMDCopyErrorText(iVar3);
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar11 = _md_log_log;
              pcVar9 = (char *)_AMDErrorString(iVar3);
              pcVar10 = "Failed to send message: 0x%08x (%s: %@)";
            }
LAB_0011538f:
            __os_log_internal(0,uVar11,0x10,pcVar10,iVar3,pcVar9,lVar4);
          }
          else {
            lVar4 = _AMDCopyErrorText(iVar3);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar11 = _md_log_log;
            uVar5 = _AMDErrorString(iVar3);
            __os_log_internal(0,uVar11,0x10,"Failed to start %@: 0x%08x (%s: %@)",
                              &cf_com_apple_mobile_mobile_image_mounter,iVar3,uVar5,lVar4);
          }
          lVar6 = 0;
          goto LAB_00115089;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_38 = 0;
        __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
        iVar3 = -0x17fffffd;
LAB_00115323:
        lVar6 = 0;
LAB_00115325:
        lVar7 = 0;
      }
      bVar1 = true;
      lVar4 = 0;
      goto LAB_00114f7d;
    }
    lVar4 = _AMDCopyErrorText(iVar3);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar11 = _md_log_log;
    uVar5 = _AMDErrorString(iVar3);
    local_38 = 0;
    __os_log_internal(0,uVar11,0x10,"Failed to connect to device: 0x%08x (%s: %@)",iVar3,uVar5,lVar4
                     );
  }
  lVar7 = 0;
  lVar6 = 0;
  bVar1 = false;
LAB_00114f7d:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  if (local_48 != 0) {
    _hangup_with_image_mounter_service(local_48,0,0);
    if (local_48 != 0) {
      _CFRelease();
    }
    local_48 = 0;
  }
  if (local_50 != 0) {
    if (bVar1) {
      _AMDeviceDisconnect(local_50);
    }
    _CFRelease(local_50);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  local_40 = 0;
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return lVar7;
}

