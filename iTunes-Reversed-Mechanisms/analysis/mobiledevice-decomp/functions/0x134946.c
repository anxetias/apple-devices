// rea decompile_all
// name: _AMDeviceRemoveValue
// address: 0x134946
// body: available
// range: 0x134946-0x134d0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceRemoveValue(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  pthread_mutex_t *ppVar9;
  long lVar10;
  long local_50;
  ulong local_48;
  ulong local_40;
  pthread_mutex_t *local_38;
  
  if (param_1 == 0) {
    return -0x17fffff9;
  }
  if (*(char *)(param_1 + 0x94) != '\x01') {
    return -0x17ffff7c;
  }
  ppVar9 = (pthread_mutex_t *)(param_1 + 0x48);
  _pthread_mutex_lock(ppVar9);
  if (param_2 == 0) {
    lVar10 = 0;
  }
  else {
    cVar3 = _CFEqual(param_2,&cf_NULL);
    lVar10 = 0;
    if (cVar3 == '\0') {
      lVar10 = param_2;
    }
  }
  local_50 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    iVar4 = -0x17fffff5;
  }
  else {
    if (param_3 == 0) {
      iVar4 = -0x17fffff9;
LAB_00134c9f:
      lVar6 = 0;
    }
    else {
      lVar6 = __CreateMessageDict(&cf_RemoveValue);
      if (lVar6 == 0) {
        iVar4 = -0x17fffffd;
        goto LAB_00134c9f;
      }
      local_38 = ppVar9;
      if (lVar10 != 0) {
        _CFDictionarySetValue(lVar6,&cf_Domain,lVar10);
      }
      _CFDictionarySetValue(lVar6,&cf_Key,param_3);
      lVar2 = *(long *)(param_1 + 0x40);
      iVar4 = _lockconn_send_message(param_1,lVar6);
      ppVar9 = local_38;
      if (iVar4 == 0) {
        iVar4 = _lockconn_receive_message(param_1,&local_50);
        if (iVar4 == 0) {
          uVar8 = _CFDictionaryGetValue(local_50,&cf_Error);
          if (uVar8 == 0) {
            iVar4 = 0;
            ppVar9 = local_38;
          }
          else {
            local_48 = uVar8;
            local_40 = _CFGetTypeID(uVar8);
            uVar8 = _CFStringGetTypeID();
            iVar4 = -0x17ffffed;
            ppVar9 = local_38;
            if (local_40 == uVar8) {
              iVar4 = __ConvertLockdowndError(local_48);
              goto LAB_00134be9;
            }
          }
        }
        else if (iVar4 == -0x17fffff4) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,1,
                            "Timed out receiving message from device %u, resetting connection.",
                            *(undefined4 *)(param_1 + 0x10));
          _AMDeviceDisconnect(param_1);
          iVar4 = _AMDeviceConnect(param_1);
          if (iVar4 == 0) {
            iVar4 = -0x17fffff4;
            ppVar9 = local_38;
            if ((lVar2 != 0) &&
               (iVar5 = _AMDeviceStartSession(param_1), ppVar9 = local_38, iVar5 != 0)) {
              if (_md_log_onceToken != -1) {
                local_40 = CONCAT44(local_40._4_4_,iVar5);
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                iVar5 = (int)local_40;
              }
              local_48 = _md_log_log;
              local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(param_1 + 0x10));
              uVar7 = _AMDErrorString(iVar5);
              __os_log_internal(0,local_48,1,"Failed to restart session with device %u: %s",
                                local_40 & 0xffffffff,uVar7);
            }
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            local_40 = _md_log_log;
            uVar1 = *(undefined4 *)(param_1 + 0x10);
            uVar7 = _AMDErrorString(iVar4);
            __os_log_internal(0,local_40,1,"Failed to re-connect to device %u: %s",uVar1,uVar7);
            iVar4 = -0x17fffff4;
            ppVar9 = local_38;
          }
        }
        else {
LAB_00134be9:
          ppVar9 = local_38;
          if (iVar4 == 0) {
            iVar4 = -0x17ffffff;
          }
        }
      }
    }
    if (local_50 != 0) {
      _CFRelease();
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_00134aae;
    }
  }
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,0x10,"Could not remove value [%@]:[%@] on device %u: 0x%x.",lVar10
                    ,param_3,*(undefined4 *)(param_1 + 0x10),iVar4);
LAB_00134aae:
  _pthread_mutex_unlock(ppVar9);
  return iVar4;
}

