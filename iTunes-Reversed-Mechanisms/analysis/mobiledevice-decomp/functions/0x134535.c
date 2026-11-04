// rea decompile_all
// name: _AMDeviceSetValue
// address: 0x134535
// body: available
// range: 0x134535-0x134945 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceSetValue(long param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  ulong local_38;
  
  if (param_1 == 0) {
    return -0x17fffff9;
  }
  if (*(char *)(param_1 + 0x94) != '\x01') {
    return -0x17ffff7c;
  }
  local_48 = param_3;
  local_40 = param_4;
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
  if (param_2 == 0) {
    lVar9 = 0;
  }
  else {
    cVar1 = _CFEqual(param_2,&cf_NULL);
    lVar9 = 0;
    if (cVar1 == '\0') {
      lVar9 = param_2;
    }
  }
  local_58 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    iVar10 = -0x17ffffff;
    iVar2 = -0x17fffff5;
    goto LAB_0013467e;
  }
  lVar4 = 0;
  iVar10 = -0x17ffffff;
  iVar2 = -0x17fffff9;
  if ((local_48 != 0) && (local_40 != 0)) {
    lVar4 = __CreateMessageDict(&cf_SetValue);
    if (lVar4 == 0) {
      iVar2 = -0x17fffffd;
      lVar4 = 0;
    }
    else {
      if (lVar9 != 0) {
        _CFDictionarySetValue(lVar4,&cf_Domain,lVar9);
      }
      _CFDictionarySetValue(lVar4,&cf_Key,local_48);
      _CFDictionarySetValue(lVar4,&cf_Value,local_40);
      uVar6 = *(ulong *)(param_1 + 0x40);
      iVar2 = _lockconn_send_message(param_1,lVar4);
      if (iVar2 == 0) {
        local_38 = uVar6;
        iVar2 = _lockconn_receive_message(param_1,&local_58);
        if (iVar2 == 0) {
          lVar5 = _CFDictionaryGetValue(local_58,&cf_Error);
          if (lVar5 != 0) {
            local_38 = _CFGetTypeID(lVar5);
            uVar6 = _CFStringGetTypeID();
            iVar2 = -0x17ffffed;
            if (local_38 == uVar6) {
              iVar2 = __ConvertLockdowndError(lVar5);
            }
            goto LAB_0013465d;
          }
          iVar2 = 0;
          iVar10 = 0;
        }
        else {
          if (iVar2 != -0x17fffff4) goto LAB_0013465d;
          iVar10 = -0x17ffffff;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,1,
                            "Timed out receiving message from device %u, resetting connection.",
                            *(undefined4 *)(param_1 + 0x10));
          _AMDeviceDisconnect(param_1);
          iVar2 = _AMDeviceConnect(param_1);
          if (iVar2 == 0) {
            iVar2 = -0x17fffff4;
            if ((local_38 != 0) && (iVar3 = _AMDeviceStartSession(param_1), iVar3 != 0)) {
              if (_md_log_onceToken != -1) {
                local_38 = CONCAT44(local_38._4_4_,iVar3);
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                iVar3 = (int)local_38;
              }
              local_50 = _md_log_log;
              local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x10));
              uVar8 = _AMDErrorString(iVar3);
              __os_log_internal(0,local_50,1,"Failed to restart session with device %u: %s",
                                local_38 & 0xffffffff,uVar8);
            }
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            local_50 = _md_log_log;
            local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x10));
            uVar8 = _AMDErrorString(iVar2);
            __os_log_internal(0,local_50,1,"Failed to re-connect to device %u: %s",
                              local_38 & 0xffffffff,uVar8);
            iVar2 = -0x17fffff4;
          }
        }
      }
      else {
LAB_0013465d:
        iVar10 = -0x17ffffff;
      }
    }
  }
  if (local_58 != 0) {
    _CFRelease();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
LAB_0013467e:
  if (iVar2 != 0) {
    iVar10 = iVar2;
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  if (iVar10 == 0) {
    pcVar7 = "Set [%@, %@] to value \'%@\'.";
    uVar8 = 2;
  }
  else {
    pcVar7 = "Could not set [%@, %@] to value \'%@\': 0x%x.";
    uVar8 = 0x10;
  }
  __os_log_internal(0,_md_log_log,uVar8,pcVar7,lVar9,local_48,local_40);
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
  return iVar10;
}

