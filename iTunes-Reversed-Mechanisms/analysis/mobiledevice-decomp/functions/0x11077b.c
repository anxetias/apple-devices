// rea decompile_all
// name: _lockdown_rsd_checkin
// address: 0x11077b
// body: available
// range: 0x11077b-0x110ab5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _lockdown_rsd_checkin(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  long local_30;
  
  local_30 = 0;
  lVar3 = __CreateMessageDict(&cf_RSDCheckin);
  if (lVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar7 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Failed to allocate request.");
    goto LAB_001108a6;
  }
  if (param_2 != 0) {
    _CFDictionarySetValue(lVar3,&cf_EscrowBag,param_2);
  }
  iVar2 = _AMDServiceConnectionSendMessage(param_1,lVar3,100);
  if (iVar2 == 0) {
    iVar2 = _AMDServiceConnectionReceiveMessage(param_1,&local_30,0);
    if (iVar2 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar5 = _md_log_log;
      lVar4 = _AMDErrorString(iVar2);
      pcVar6 = "Failed to receive message: \x10%s";
      goto LAB_00110889;
    }
    if (local_30 == 0) {
joined_r0x00110a17:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar7 = 0;
      __os_log_internal(0,_md_log_log,0x10,"RSD checkin response invalid.");
    }
    else {
      uVar5 = _CFDictionaryGetValue(local_30,&cf_Request);
      cVar1 = _CFEqual(uVar5,&cf_RSDCheckin);
      if (cVar1 == '\0') goto joined_r0x00110a17;
      lVar4 = _CFDictionaryGetValue(local_30,&cf_Error);
      if (lVar4 != 0) {
joined_r0x00110a08:
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar6 = "Error from lockdown: %@";
        uVar5 = _md_log_log;
        goto LAB_00110889;
      }
      if (local_30 != 0) {
        _CFRelease();
      }
      local_30 = 0;
      iVar2 = _AMDServiceConnectionReceiveMessage(param_1,&local_30,0);
      if (iVar2 != 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar5 = _md_log_log;
        lVar4 = _AMDErrorString(iVar2);
        pcVar6 = "Failed to receive message: \x10%s";
        goto LAB_00110889;
      }
      if (local_30 == 0) goto joined_r0x00110a17;
      uVar5 = _CFDictionaryGetValue(local_30,&cf_Request);
      cVar1 = _CFEqual(uVar5,&cf_StartService);
      if (cVar1 == '\0') goto joined_r0x00110a17;
      lVar4 = _CFDictionaryGetValue(local_30,&cf_Error);
      if (lVar4 != 0) goto joined_r0x00110a08;
      uVar7 = CONCAT71((int7)((ulong)param_1 >> 8),1);
    }
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar5 = _md_log_log;
    lVar4 = _AMDErrorString(iVar2);
    pcVar6 = "Failed to send message: %s";
LAB_00110889:
    uVar7 = 0;
    __os_log_internal(0,uVar5,0x10,pcVar6,lVar4);
  }
  _CFRelease(lVar3);
  if (local_30 != 0) {
    _CFRelease();
  }
LAB_001108a6:
  return uVar7 & 0xffffffff;
}

