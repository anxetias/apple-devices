// rea decompile_all
// name: _hangup_with_image_mounter_service
// address: 0x112c68
// body: available
// range: 0x112c68-0x113027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _hangup_with_image_mounter_service(undefined8 param_1,long param_2,char param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  long local_38;
  
  local_38 = 0;
  lVar2 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
    return;
  }
  _CFDictionarySetValue(lVar2,&cf_Command,&cf_Hangup);
  if (param_2 == 0) {
    iVar1 = _AMDServiceConnectionSendMessage(param_1,lVar2,100);
    if (iVar1 == 0) {
      iVar1 = _AMDServiceConnectionReceiveMessage(param_1,&local_38,0);
      if (iVar1 == 0) {
        lVar3 = 0;
        lVar4 = 0;
        lVar5 = 0;
LAB_00112ee3:
        if (local_38 != 0) {
          lVar6 = _CFGetTypeID(local_38);
          lVar7 = _CFDictionaryGetTypeID();
          if (lVar6 == lVar7) goto LAB_00112f2c;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar9 = "Invalid response message.";
        goto LAB_00112f20;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar10 = _md_log_log;
      pcVar9 = (char *)_AMDErrorString(iVar1);
      pcVar8 = "Failed to receive message: 0x%08x (%s)";
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar10 = _md_log_log;
      pcVar9 = (char *)_AMDErrorString(iVar1);
      pcVar8 = "Failed to send message: 0x%08x (%s)";
    }
LAB_00112e9f:
    lVar3 = 0;
    __os_log_internal(0,uVar10,0x10,pcVar8,iVar1,pcVar9);
  }
  else {
    if (param_3 != '\0') {
      _CFDictionarySetValue(lVar2,&cf_Command,&cf_HangupMacOS);
    }
    lVar3 = _xpc_dictionary_create(0,0,0);
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar8 = "Failed to create xpc dictionary: 0x%08x (%s)";
      pcVar9 = "kAMDNoResourcesError";
      iVar1 = -0x17fffffd;
      uVar10 = _md_log_log;
      goto LAB_00112e9f;
    }
    lVar4 = __CFXPCCreateXPCObjectFromCFObject(lVar2);
    if (lVar4 != 0) {
      _xpc_dictionary_set_value(lVar3,"XPCRequestDictionary",lVar4);
      lVar5 = _xpc_remote_connection_send_message_with_reply_sync(param_2,lVar3);
      if (lVar5 != 0) {
        local_38 = __CFXPCCreateCFObjectFromXPCObject(lVar5);
        goto LAB_00112ee3;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar9 = "Failed to send/receive XPC message.";
      lVar5 = 0;
LAB_00112f20:
      __os_log_internal(0,_md_log_log,0x10,pcVar9);
      goto LAB_00112f2c;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to create xpc dictionary: 0x%08x (%s)",0xe8000003,
                      "kAMDNoResourcesError");
  }
  lVar4 = 0;
  lVar5 = 0;
LAB_00112f2c:
  _CFRelease(lVar2);
  if (local_38 != 0) {
    _CFRelease();
  }
  local_38 = 0;
  if (lVar3 != 0) {
    _xpc_release(lVar3);
  }
  if (lVar4 != 0) {
    _xpc_release(lVar4);
  }
  if (lVar5 != 0) {
    _xpc_release(lVar5);
  }
  return;
}

