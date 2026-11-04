// rea decompile_all
// name: _copy_lockdown_value
// address: 0x10fa0e
// body: available
// range: 0x10fa0e-0x10fceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_lockdown_value(long param_1,long param_2,long param_3,int *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_40;
  undefined4 local_34;
  
  local_40 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    iVar3 = -0x17fffff5;
    lVar7 = 0;
    goto LAB_0010fab9;
  }
  lVar5 = __CreateMessageDict(&cf_GetValue);
  if (lVar5 == 0) {
    lVar5 = 0;
    iVar2 = -0x17fffffd;
LAB_0010fa9b:
    iVar3 = iVar2;
    lVar7 = 0;
  }
  else {
    if (param_2 != 0) {
      _CFDictionarySetValue(lVar5,&cf_Domain,param_2);
    }
    if (param_3 != 0) {
      _CFDictionarySetValue(lVar5,&cf_Key,param_3);
    }
    lVar7 = *(long *)(param_1 + 0x40);
    iVar2 = _lockconn_send_message(param_1,lVar5);
    if (iVar2 != 0) goto LAB_0010fa9b;
    iVar2 = _lockconn_receive_message(param_1,&local_40);
    if (iVar2 == 0) {
      lVar7 = _CFDictionaryGetValue(local_40,&cf_Error);
      if (lVar7 == 0) {
        lVar7 = _CFDictionaryGetValue(local_40,&cf_Value);
        iVar3 = 0;
        iVar2 = 0;
        if (lVar7 != 0) {
          _CFRetain(lVar7);
          goto LAB_0010fa9e;
        }
      }
      else {
        lVar8 = _CFGetTypeID(lVar7);
        lVar9 = _CFStringGetTypeID();
        if (lVar8 == lVar9) {
          iVar2 = __ConvertLockdowndError(lVar7);
        }
        else {
          iVar2 = -0x17ffffed;
        }
      }
      goto LAB_0010fa9b;
    }
    if (iVar2 != -0x17fffff4) goto LAB_0010fa9b;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,
                      "Timed out receiving message from device %u, resetting connection.",
                      *(undefined4 *)(param_1 + 0x10));
    _AMDeviceDisconnect(param_1);
    iVar3 = _AMDeviceConnect(param_1);
    if (iVar3 == 0) {
      iVar3 = -0x17fffff4;
      iVar2 = -0x17fffff4;
      if ((lVar7 == 0) || (iVar4 = _AMDeviceStartSession(param_1), iVar4 == 0)) goto LAB_0010fa9b;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = _md_log_log;
      local_34 = *(undefined4 *)(param_1 + 0x10);
      uVar6 = _AMDErrorString(iVar4);
      lVar7 = 0;
      __os_log_internal(0,uVar1,1,"Failed to restart session with device %u: %s",local_34,uVar6);
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = _md_log_log;
      local_34 = *(undefined4 *)(param_1 + 0x10);
      uVar6 = _AMDErrorString(iVar3);
      lVar7 = 0;
      __os_log_internal(0,uVar1,1,"Failed to re-connect to device %u: %s",local_34,uVar6);
      iVar3 = -0x17fffff4;
    }
  }
LAB_0010fa9e:
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
LAB_0010fab9:
  if (param_4 != (int *)0x0) {
    *param_4 = iVar3;
  }
  return lVar7;
}

