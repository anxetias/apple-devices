// rea decompile_all
// name: __AMDeviceInsecureNotificationCallback
// address: 0x103adc
// body: available
// range: 0x103adc-0x103eb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x103ba4 to 0x103a08 __SendBUIDToDevice (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDeviceInsecureNotificationCallback(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  cfstringStruct *local_38;
  long local_30;
  
  local_30 = 0;
  if (param_2 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar7 = "Invalid input.";
  }
  else {
    lVar3 = _CFGetTypeID(param_2);
    lVar4 = _CFArrayGetTypeID();
    if (lVar3 == lVar4) {
      lVar3 = _CFArrayGetCount(param_2);
      if (lVar3 < 2) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar7 = "context must have at least 2 entries.";
      }
      else {
        uVar5 = _CFArrayGetValueAtIndex(param_2,0);
        uVar6 = _CFArrayGetValueAtIndex(param_2,1);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0,"Received insecure notification %@",param_1);
        if (param_1 == 0) {
          return;
        }
        cVar1 = _CFEqual(param_1,&cf_com_apple_mobile_lockdown_request_host_buid);
        if (cVar1 != '\0') {
          __SendBUIDToDevice(uVar5);
          return;
        }
        cVar1 = _CFEqual(param_1,&cf_com_apple_mobile_lockdown_request_pair);
        if (cVar1 == '\0') {
          return;
        }
        local_38 = &cf_ExtendedPairingErrors;
        lVar3 = _AMDeviceCreateCopy(uVar5);
        if (lVar3 != 0) {
          iVar2 = _AMDeviceConnect(lVar3);
          if (iVar2 == 0) {
            lVar4 = _CFDictionaryCreate(0,&local_38,PTR__kCFBooleanTrue_00441110,1,
                                        PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            iVar2 = _AMDevicePairWithCallback(lVar3,0,lVar4,&local_30);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            if (iVar2 == 0) {
              __os_log_internal(0,_md_log_log,0,"Successfully paired");
              iVar2 = _AMDeviceStartSession(lVar3);
              if (iVar2 != 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"AMDeviceStartSession() failed: 0x%x",iVar2);
              }
              _CFRetain(uVar6);
              _AMDSecureShutdownNotificationProxy(uVar6);
              _CFRelease(uVar6);
            }
            else {
              __os_log_internal(0,_md_log_log,0x10,"AMDevicePairWithCallback failed: 0x%x, %@",iVar2
                                ,local_30);
            }
            _AMDeviceDisconnect(lVar3);
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar4 = 0;
            __os_log_internal(0,_md_log_log,0x10,"AMDeviceConnect failed: 0x%x",iVar2);
          }
          _CFRelease(lVar3);
          if (local_30 != 0) {
            _CFRelease();
          }
          if (lVar4 == 0) {
            return;
          }
          _CFRelease(lVar4);
          return;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar7 = "AMDeviceCreateCopy failed";
      }
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar7 = "context is not a CFArray.";
    }
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar7);
  return;
}

