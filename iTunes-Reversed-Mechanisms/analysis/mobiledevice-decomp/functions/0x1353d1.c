// rea decompile_all
// name: _AMDeviceCopyMultipleValuesWithError
// address: 0x1353d1
// body: available
// range: 0x1353d1-0x135728 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceCopyMultipleValuesWithError(long param_1,long param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  pthread_mutex_t *ppVar11;
  long local_40;
  pthread_mutex_t *local_38;
  
  lVar8 = 0;
  iVar4 = -0x17fffff9;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_001354f7;
  iVar4 = -0x17ffff7c;
  if ((*(char *)(param_1 + 0x94) == '\x01') &&
     ((*(long *)(param_1 + 0xb0) == 0 || (*(char *)(*(long *)(param_1 + 0xb0) + 0x94) == '\x01'))))
  {
    cVar3 = _device_os_is_at_least(param_1,&cf_13_0,&cf_6_0,&cf_13_0,&cf_1_0);
    if (cVar3 != '\0') {
      local_38 = (pthread_mutex_t *)(param_1 + 0x48);
      _pthread_mutex_lock(local_38);
      local_40 = 0;
      if (*(long *)(param_1 + 0x38) == 0) {
        iVar4 = -0x17fffff5;
        lVar8 = 0;
        ppVar11 = local_38;
      }
      else {
        lVar6 = __CreateMessageDict(&cf_GetMultipleValues);
        if (lVar6 == 0) {
          iVar4 = -0x17fffffd;
          lVar6 = 0;
LAB_001354c1:
          lVar8 = 0;
          ppVar11 = local_38;
        }
        else {
          _CFDictionarySetValue(lVar6,&cf_MultipleKeys,param_2);
          lVar8 = *(long *)(param_1 + 0x40);
          iVar4 = _lockconn_send_message(param_1,lVar6);
          if (iVar4 != 0) goto LAB_001354c1;
          iVar4 = _lockconn_receive_message(param_1,&local_40);
          if (iVar4 != 0) {
            if (iVar4 == -0x17fffff4) {
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
                if ((lVar8 != 0) && (iVar5 = _AMDeviceStartSession(param_1), iVar5 != 0)) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar2 = _md_log_log;
                  uVar1 = *(undefined4 *)(param_1 + 0x10);
                  uVar7 = _AMDErrorString(iVar5);
                  __os_log_internal(0,uVar2,1,"Failed to restart session with device %u: %s",uVar1,
                                    uVar7);
                  iVar4 = -0x17fffff4;
                }
              }
              else {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar2 = _md_log_log;
                uVar1 = *(undefined4 *)(param_1 + 0x10);
                uVar7 = _AMDErrorString(iVar4);
                __os_log_internal(0,uVar2,1,"Failed to re-connect to device %u: %s",uVar1,uVar7);
                iVar4 = -0x17fffff4;
              }
            }
            goto LAB_001354c1;
          }
          lVar8 = _CFDictionaryGetValue(local_40,&cf_Error);
          if (lVar8 == 0) {
            lVar8 = _CFDictionaryGetValue(local_40,&cf_Value);
            ppVar11 = local_38;
            iVar4 = 0;
            iVar5 = 0;
            if (lVar8 == 0) goto LAB_001356b9;
            _CFRetain(lVar8);
          }
          else {
            lVar9 = _CFGetTypeID(lVar8);
            lVar10 = _CFStringGetTypeID();
            ppVar11 = local_38;
            if (lVar9 == lVar10) {
              iVar5 = __ConvertLockdowndError(lVar8);
            }
            else {
              iVar5 = -0x17ffffed;
            }
LAB_001356b9:
            iVar4 = iVar5;
            lVar8 = 0;
          }
        }
        if (local_40 != 0) {
          _CFRelease();
        }
        if (lVar6 != 0) {
          _CFRelease(lVar6);
        }
      }
      _pthread_mutex_unlock(ppVar11);
      goto LAB_001354f7;
    }
    iVar4 = -0x17fffff1;
  }
  lVar8 = 0;
LAB_001354f7:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar4;
  }
  return lVar8;
}

