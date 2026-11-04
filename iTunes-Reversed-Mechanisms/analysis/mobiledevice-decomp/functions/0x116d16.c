// rea decompile_all
// name: _copy_image_digests
// address: 0x116d16
// body: available
// range: 0x116d16-0x117437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _copy_image_digests(long param_1,long param_2,undefined8 param_3,long *param_4,char param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  long local_48;
  long local_40;
  void *local_38;
  
  local_48 = 0;
  if ((param_4 == (long *)0x0) || ((param_2 != 0) == (param_1 != 0))) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input(s).");
    return -0x17fffff9;
  }
  *param_4 = 0;
  uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar2 = _CFDictionaryCreateMutable
                    (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    return -0x17fffffd;
  }
  _CFDictionarySetValue(lVar2,&cf_Command,&cf_LookupImage);
  _CFDictionarySetValue(lVar2,&cf_ImageType,param_3);
  if (param_2 == 0) {
    iVar1 = _AMDServiceConnectionSendMessage(param_1,lVar2,100);
    if (iVar1 == 0) {
      iVar1 = _AMDServiceConnectionReceiveMessage(param_1,&local_48,0);
      if (iVar1 == 0) {
        local_38 = (void *)0x0;
        lVar3 = 0;
        lVar4 = 0;
        lVar8 = 0;
        lVar6 = 0;
LAB_0011710f:
        if (local_48 == 0) {
LAB_001171ae:
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Invalid response message.");
          iVar1 = -0x17fffffc;
        }
        else {
          lVar9 = _CFGetTypeID();
          local_40 = lVar4;
          lVar10 = _CFDictionaryGetTypeID();
          lVar4 = local_40;
          if (lVar9 != lVar10) goto LAB_001171ae;
          lVar4 = _CFDictionaryGetValue(local_48,&cf_Error);
          if (lVar4 == 0) {
            lVar4 = _CFDictionaryGetValue(local_48,&cf_ImageSignature);
            if (lVar4 == 0) {
              lVar4 = _CFArrayCreateMutable(uVar11,0,PTR__kCFTypeArrayCallBacks_004411a8);
              if (lVar4 != 0) goto LAB_00117273;
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              lVar4 = local_40;
              __os_log_internal(0,_md_log_log,0x10,"Failed to create array.");
              iVar1 = -0x17fffffd;
            }
            else {
              lVar9 = _CFGetTypeID(lVar4);
              lVar10 = _CFArrayGetTypeID();
              if (lVar9 == lVar10) {
                _CFRetain(lVar4);
LAB_00117273:
                *param_4 = lVar4;
                iVar1 = 0;
                lVar4 = local_40;
              }
              else {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                lVar4 = local_40;
                __os_log_internal(0,_md_log_log,0x10,"Invalid value for %@.",&cf_ImageSignature);
                iVar1 = -0x17ffffcc;
              }
            }
          }
          else {
            uVar11 = _CFDictionaryGetValue(local_48,&cf_DetailedError);
            iVar1 = _MobileDevelopmentConvertError(lVar4);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"An error occurred while sending message: %@ (%@)",
                              lVar4,uVar11);
            lVar4 = local_40;
          }
        }
        if (local_38 == (void *)0x0) goto LAB_00117005;
LAB_0011728e:
        _free(local_38);
        goto LAB_00117005;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar11 = _md_log_log;
      uVar7 = _AMDErrorString(iVar1);
      pcVar12 = "Failed to receive message: 0x%08x (%s)";
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar11 = _md_log_log;
      uVar7 = _AMDErrorString(iVar1);
      pcVar12 = "Failed to send message: 0x%08x (%s)";
    }
    __os_log_internal(0,uVar11,0x10,pcVar12,iVar1,uVar7);
LAB_00116ffd:
    lVar3 = 0;
LAB_00116fff:
    lVar4 = 0;
  }
  else {
    if (param_5 != '\0') {
      _CFDictionarySetValue(lVar2,&cf_Command,&cf_LookupImageMacOS);
    }
    lVar3 = _xpc_dictionary_create(0,0,0);
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc dictionary.");
      iVar1 = -0x17fffffd;
      goto LAB_00116ffd;
    }
    lVar4 = __CFXPCCreateXPCObjectFromCFObject(lVar2);
    if (lVar4 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc dictionary.");
      iVar1 = -0x17fffffd;
      goto LAB_00116fff;
    }
    pvVar5 = (void *)_copyProcessName();
    if (pvVar5 != (void *)0x0) {
      local_38 = pvVar5;
      lVar6 = _xpc_string_create(pvVar5);
      if (lVar6 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        lVar6 = 0;
        iVar1 = -0x17fffffd;
        __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc string: 0x%08x (%s)",0xe8000003,
                          "kAMDNoResourcesError");
      }
      else {
        uVar7 = _CFStringGetCStringPtr(&cf_HostProcessName,0x8000100);
        _xpc_dictionary_set_value(lVar4,uVar7,lVar6);
        _xpc_dictionary_set_value(lVar3,"XPCRequestDictionary",lVar4);
        lVar8 = _xpc_remote_connection_send_message_with_reply_sync(param_2,lVar3);
        if (lVar8 != 0) {
          local_48 = __CFXPCCreateCFObjectFromXPCObject(lVar8);
          goto LAB_0011710f;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to send/receive XPC message.");
        iVar1 = -0x17ffff0b;
      }
      lVar8 = 0;
      goto LAB_0011728e;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    iVar1 = -0x17ffff0f;
    __os_log_internal(0,_md_log_log,0x10,"Failed to query current process name: 0x%08x (%s)",
                      0xe80000f1,"kAMDInternalError");
  }
  lVar8 = 0;
  lVar6 = 0;
LAB_00117005:
  _CFRelease(lVar2);
  if (local_48 != 0) {
    _CFRelease();
  }
  local_48 = 0;
  if (lVar3 != 0) {
    _xpc_release(lVar3);
  }
  if (lVar4 != 0) {
    _xpc_release(lVar4);
  }
  if (lVar8 != 0) {
    _xpc_release(lVar8);
  }
  if (lVar6 != 0) {
    _xpc_release(lVar6);
  }
  return iVar1;
}

