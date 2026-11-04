// rea decompile_all
// name: _AMDeviceActivate
// address: 0x1390e3
// body: available
// range: 0x1390e3-0x139595 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceActivate(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_38 = 0;
  if (param_1 == 0) {
    iVar4 = -0x17fffff9;
    bVar3 = 0;
    lVar5 = 0;
    goto LAB_00139211;
  }
  if (*(char *)(param_1 + 0x94) == '\x01') {
    if (param_2 != 0) {
      lVar5 = _CFGetTypeID(param_2);
      lVar6 = _CFDictionaryGetTypeID();
      if (lVar5 == lVar6) {
        bVar3 = __MobileActivationLockdownServiceSupported(param_1);
        if (bVar3 == 0) {
          _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
          iVar4 = _send_activation(param_1,param_2);
          if (iVar4 != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar2 = _md_log_log;
            uVar1 = *(undefined4 *)(param_1 + 0x10);
            uVar7 = _AMDErrorString(iVar4);
            lVar5 = 0;
            __os_log_internal(0,uVar2,0x10,"Failed to activate device (%u): %s",uVar1,uVar7);
            bVar3 = 1;
            goto LAB_00139211;
          }
          lVar5 = 0;
LAB_0013938d:
          bVar3 = bVar3 ^ 1;
          iVar4 = 0;
          goto LAB_00139211;
        }
        iVar4 = _AMDeviceSecureStartService(param_1,&cf_com_apple_mobileactivationd,0,&local_40);
        if (iVar4 == 0) {
          lVar5 = _CFDictionaryCreateMutable(0,0,0,0);
          if (lVar5 != 0) {
            _CFDictionarySetValue(lVar5,&cf_Command,&cf_HandleActivationInfoRequest);
            _CFDictionarySetValue(lVar5,&cf_Value,param_2);
            iVar4 = _AMDServiceConnectionSendMessage(local_40,lVar5,100);
            if (iVar4 != 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar2 = _md_log_log;
              uVar1 = *(undefined4 *)(param_1 + 0x10);
              uVar7 = _AMDErrorString(iVar4);
              bVar3 = 0;
              __os_log_internal(0,uVar2,0x10,"Failed to send activation request (%u): %s",uVar1,
                                uVar7);
              goto LAB_00139211;
            }
            iVar4 = _AMDServiceConnectionReceiveMessage(local_40,&local_38,0);
            if (iVar4 == 0) {
              lVar6 = _CFGetTypeID(local_38);
              lVar9 = _CFDictionaryGetTypeID();
              if (lVar6 == lVar9) {
                lVar6 = _CFDictionaryGetValue(local_38,&cf_Error);
                if (lVar6 != 0) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  bVar3 = 0;
                  __os_log_internal(0,_md_log_log,0x10,"Failed to activate device (%u): %@",
                                    *(undefined4 *)(param_1 + 0x10),lVar6);
                  iVar4 = -0x17ffffda;
                  goto LAB_00139211;
                }
                goto LAB_0013938d;
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar8 = "kAMDSuccess";
            }
            else {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar8 = (char *)_AMDErrorString(iVar4);
            }
            bVar3 = 0;
            __os_log_internal(0,_md_log_log,0x10,"Failed to receive activation response (%u): %s",
                              *(undefined4 *)(param_1 + 0x10),pcVar8);
            iVar4 = -0x17ffffed;
            goto LAB_00139211;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
          iVar4 = -0x17fffffd;
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar2 = _md_log_log;
          uVar1 = *(undefined4 *)(param_1 + 0x10);
          uVar7 = _AMDErrorString(iVar4);
          __os_log_internal(0,uVar2,0x10,"Failed to start service on device (%u): %s",uVar1,uVar7);
        }
        goto LAB_001391f5;
      }
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Input activation record is invalid.");
    iVar4 = -0x17fffff9;
  }
  else {
    iVar4 = -0x17ffff7c;
  }
LAB_001391f5:
  lVar5 = 0;
  bVar3 = 0;
LAB_00139211:
  if (bVar3 != 0) {
    _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  return iVar4;
}

