// rea decompile_all
// name: _mount_image
// address: 0x119d67
// body: available
// range: 0x119d67-0x11a4aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _mount_image(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                long param_6,char param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  void *local_48;
  long local_40;
  long local_38;
  
  local_40 = 0;
  if ((param_1 != 0) == (param_2 != 0)) {
    iVar2 = -0x17fffff9;
    pcVar11 = "Invalid input(s).";
LAB_00119f32:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,pcVar11);
    return iVar2;
  }
  local_38 = param_6;
  lVar3 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar3 == 0) {
    iVar2 = -0x17fffffd;
    pcVar11 = "Failed to create dictionary.";
    goto LAB_00119f32;
  }
  _CFDictionarySetValue(lVar3,&cf_Command,&cf_MountImage);
  _CFDictionarySetValue(lVar3,&cf_ImageType,param_3);
  _CFDictionarySetValue(lVar3,&cf_ImageSignature,param_4);
  if (param_5 != 0) {
    _CFDictionarySetValue(lVar3,&cf_ImageTrustCache,param_5);
  }
  if (local_38 != 0) {
    _CFDictionarySetValue(lVar3,&cf_ImageInfoPlist);
  }
  if (param_2 == 0) {
    iVar2 = _AMDServiceConnectionSendMessage(param_1,lVar3,100);
    if (iVar2 == 0) {
      iVar2 = _AMDServiceConnectionReceiveMessage(param_1,&local_40,0);
      if (iVar2 == 0) {
        local_48 = (void *)0x0;
        lVar4 = 0;
        local_38 = 0;
        lVar7 = 0;
        lVar5 = 0;
LAB_0011a163:
        if (local_40 == 0) {
LAB_0011a1f5:
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Invalid response message.");
LAB_0011a224:
          iVar2 = -0x17fffffc;
        }
        else {
          lVar9 = _CFGetTypeID();
          lVar10 = _CFDictionaryGetTypeID();
          if (lVar9 != lVar10) goto LAB_0011a1f5;
          lVar9 = _CFDictionaryGetValue(local_40,&cf_Error);
          if (lVar9 == 0) {
            lVar9 = _CFDictionaryGetValue(local_40,&cf_Status);
            if (lVar9 != 0) {
              cVar1 = _CFEqual(lVar9,&cf_Complete);
              iVar2 = 0;
              if (cVar1 == '\0') {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"Mount status is not complete: %@",lVar9);
                iVar2 = -0x17ffff0f;
              }
              goto LAB_0011a22a;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Response message missing key: %@",&cf_Status);
            goto LAB_0011a224;
          }
          uVar6 = _CFDictionaryGetValue(local_40,&cf_DetailedError);
          iVar2 = _MobileDevelopmentConvertError(lVar9);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"An error occurred while sending message: %@ (%@)",
                            lVar9,uVar6);
        }
LAB_0011a22a:
        if (local_48 == (void *)0x0) goto LAB_0011a27a;
LAB_0011a275:
        _free(local_48);
        goto LAB_0011a27a;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar6 = _md_log_log;
      uVar8 = _AMDErrorString(iVar2);
      pcVar11 = "Failed to receive message: 0x%08x (%s)";
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar6 = _md_log_log;
      uVar8 = _AMDErrorString(iVar2);
      pcVar11 = "Failed to send message: 0x%08x (%s)";
    }
    __os_log_internal(0,uVar6,0x10,pcVar11,iVar2,uVar8);
    local_38 = 0;
    lVar7 = 0;
    lVar5 = 0;
    lVar4 = 0;
    goto LAB_0011a27a;
  }
  if (param_7 != '\0') {
    _CFDictionarySetValue(lVar3,&cf_Command,&cf_MountImageMacOS);
  }
  lVar4 = _xpc_dictionary_create(0,0,0);
  if (lVar4 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar4 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc dictionary.");
    local_38 = 0;
LAB_0011a02f:
    iVar2 = -0x17fffffd;
  }
  else {
    lVar5 = __CFXPCCreateXPCObjectFromCFObject(lVar3);
    if (lVar5 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_38 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc dictionary from CF object.");
      goto LAB_0011a02f;
    }
    local_38 = lVar5;
    local_48 = (void *)_copyProcessName();
    if (local_48 != (void *)0x0) {
      lVar5 = _xpc_string_create(local_48);
      if (lVar5 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        lVar5 = 0;
        iVar2 = -0x17fffffd;
        __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s)",0xe8000003,
                          "kAMDNoResourcesError");
      }
      else {
        uVar6 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
        lVar7 = local_38;
        _xpc_dictionary_set_value(local_38,uVar6,lVar5);
        _xpc_dictionary_set_value(lVar4,"XPCRequestDictionary",lVar7);
        lVar7 = _xpc_remote_connection_send_message_with_reply_sync(param_2,lVar4);
        if (lVar7 != 0) {
          local_40 = __CFXPCCreateCFObjectFromXPCObject(lVar7);
          goto LAB_0011a163;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to send/receive XPC message.");
        iVar2 = -0x17ffff0b;
      }
      lVar7 = 0;
      goto LAB_0011a275;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    iVar2 = -0x17ffff0f;
    __os_log_internal(0,_md_log_log,0x10,"Failed to query current process name: 0x%08x (%s)",
                      0xe80000f1,"kAMDInternalError");
  }
  lVar7 = 0;
  lVar5 = 0;
LAB_0011a27a:
  _CFRelease(lVar3);
  if (local_40 != 0) {
    _CFRelease();
  }
  local_40 = 0;
  if (lVar4 != 0) {
    _xpc_release(lVar4);
  }
  if (local_38 != 0) {
    _xpc_release();
  }
  if (lVar7 != 0) {
    _xpc_release(lVar7);
  }
  if (lVar5 == 0) {
    return iVar2;
  }
  _xpc_release(lVar5);
  return iVar2;
}

