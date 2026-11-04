// rea decompile_all
// name: _AMDeviceDeactivate
// address: 0x139cac
// body: available
// range: 0x139cac-0x13a2c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceDeactivate(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long local_50;
  long local_48;
  long local_40;
  ulong local_38;
  
  local_48 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    iVar4 = -0x17fffff9;
    bVar3 = 0;
    lVar7 = 0;
    goto LAB_00139ee9;
  }
  if (*(char *)(param_1 + 0x94) != '\x01') {
    iVar4 = -0x17ffff7c;
    goto LAB_00139d63;
  }
  bVar3 = __MobileActivationLockdownServiceSupported(param_1);
  if (bVar3 == 0) {
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
    local_50 = 0;
    if (*(long *)(param_1 + 0x38) == 0) {
      iVar4 = -0x17fffff5;
    }
    else {
      lVar7 = __CreateMessageDict(&cf_Deactivate);
      if (lVar7 == 0) {
        iVar4 = -0x17fffffd;
        lVar7 = 0;
      }
      else {
        lVar10 = *(long *)(param_1 + 0x40);
        iVar4 = _lockconn_send_message(param_1,lVar7);
        if (iVar4 == 0) {
          iVar4 = _lockconn_receive_message(param_1,&local_50);
          if (iVar4 == 0) {
            lVar10 = _CFDictionaryGetValue(local_50,&cf_Error);
            if (lVar10 == 0) {
              iVar4 = 0;
            }
            else {
              local_38 = _CFGetTypeID(lVar10);
              uVar8 = _CFStringGetTypeID();
              iVar4 = -0x17ffffed;
              if (local_38 == uVar8) {
                iVar4 = __ConvertLockdowndError(lVar10);
                goto LAB_0013a058;
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
              if ((lVar10 != 0) && (iVar5 = _AMDeviceStartSession(param_1), iVar5 != 0)) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                uVar2 = _md_log_log;
                local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x10));
                uVar6 = _AMDErrorString(iVar5);
                __os_log_internal(0,uVar2,1,"Failed to restart session with device %u: %s",
                                  local_38 & 0xffffffff,uVar6);
              }
            }
            else {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar2 = _md_log_log;
              local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x10));
              uVar6 = _AMDErrorString(iVar4);
              __os_log_internal(0,uVar2,1,"Failed to re-connect to device %u: %s",
                                local_38 & 0xffffffff,uVar6);
              iVar4 = -0x17fffff4;
            }
          }
          else {
LAB_0013a058:
            if (iVar4 == 0) {
              iVar4 = -0x17ffffff;
            }
          }
        }
      }
      if (local_50 != 0) {
        _CFRelease();
      }
      if (lVar7 != 0) {
        _CFRelease(lVar7);
      }
      if (iVar4 == 0) {
        lVar7 = 0;
LAB_00139ede:
        bVar3 = bVar3 ^ 1;
        iVar4 = 0;
        goto LAB_00139ee9;
      }
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar2 = _md_log_log;
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = _AMDErrorString(iVar4);
    lVar7 = 0;
    __os_log_internal(0,uVar2,0x10,"Could not deactivate device %u: %s",uVar1,uVar6);
    bVar3 = 1;
    goto LAB_00139ee9;
  }
  iVar4 = _AMDeviceSecureStartService(param_1,&cf_com_apple_mobileactivationd,0,&local_48);
  if (iVar4 == 0) {
    lVar7 = _CFDictionaryCreateMutable(0,0,0,0);
    if (lVar7 != 0) {
      _CFDictionarySetValue(lVar7,&cf_Command,&cf_DeactivateRequest);
      iVar4 = _AMDServiceConnectionSendMessage(local_48,lVar7,100);
      if (iVar4 != 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar2 = _md_log_log;
        local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x10));
        uVar6 = _AMDErrorString(iVar4);
        bVar3 = 0;
        __os_log_internal(0,uVar2,0x10,"Failed to send deactivate request (%u): %s",
                          local_38 & 0xffffffff,uVar6);
        goto LAB_00139ee9;
      }
      iVar4 = _AMDServiceConnectionReceiveMessage(local_48,&local_40,0);
      if (iVar4 == 0) {
        lVar10 = _CFGetTypeID(local_40);
        lVar11 = _CFDictionaryGetTypeID();
        if (lVar10 != lVar11) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar9 = "kAMDSuccess";
          goto LAB_0013a19a;
        }
        pcVar9 = (char *)_CFDictionaryGetValue(local_40,&cf_Error);
        if (pcVar9 == (char *)0x0) goto LAB_00139ede;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        pcVar12 = "Failed to deactivate device (%u): %@";
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar9 = (char *)_AMDErrorString(iVar4);
LAB_0013a19a:
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        pcVar12 = "Failed to receive deactivate response (%u): %s";
      }
      bVar3 = 0;
      __os_log_internal(0,_md_log_log,0x10,pcVar12,uVar1,pcVar9);
      iVar4 = -0x17ffffed;
      goto LAB_00139ee9;
    }
    iVar4 = -0x17fffffd;
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar2 = _md_log_log;
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = _AMDErrorString(iVar4);
    __os_log_internal(0,uVar2,0x10,"Failed to start service on device (%u): %s",uVar1,uVar6);
  }
LAB_00139d63:
  lVar7 = 0;
  bVar3 = 0;
LAB_00139ee9:
  if (bVar3 != 0) {
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  return iVar4;
}

