// rea decompile_all
// name: _AMDeviceCreateActivationSessionInfo
// address: 0x1380bc
// body: available
// range: 0x1380bc-0x13859e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceCreateActivationSessionInfo(long param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long local_48;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_48 = 0;
  if (param_1 == 0) {
    iVar2 = -0x17fffff9;
    lVar6 = 0;
    lVar4 = 0;
    lVar5 = 0;
    goto LAB_00138228;
  }
  if (*(char *)(param_1 + 0x94) == '\x01') {
    iVar2 = __MobileActivationWaitForBaseband(param_1);
    if (iVar2 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar10 = _md_log_log;
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = _AMDErrorString(iVar2);
      pcVar7 = "Waiting for baseband failed (%u): %s";
      uVar9 = 1;
LAB_00138143:
      __os_log_internal(0,uVar10,uVar9,pcVar7,uVar11,uVar3);
      goto LAB_00138216;
    }
    cVar1 = __MobileActivationLockdownServiceSupported(param_1);
    if (cVar1 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"This API is not supported for this device/version (%u)",
                        *(undefined4 *)(param_1 + 0x10));
      iVar2 = -0x17fffff1;
      goto LAB_00138216;
    }
    iVar2 = _AMDeviceSecureStartService(param_1,&cf_com_apple_mobileactivationd,0,&local_48);
    if (iVar2 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar10 = _md_log_log;
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = _AMDErrorString(iVar2);
      pcVar7 = "Failed to start activation service (%u): %s";
      uVar9 = 0x10;
      goto LAB_00138143;
    }
    lVar4 = _CFDictionaryCreateMutable(0,0,0,0);
    if (lVar4 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
      iVar2 = -0x17fffffd;
      goto LAB_00138216;
    }
    _CFDictionarySetValue(lVar4,&cf_Command,&cf_CreateTunnel1SessionInfoRequest);
    local_38 = lVar4;
    iVar2 = _AMDServiceConnectionSendMessage(local_48,lVar4,100);
    if (iVar2 == 0) {
      iVar2 = _AMDServiceConnectionReceiveMessage(local_48,&local_40,0);
      if (iVar2 == 0) {
        lVar4 = _CFGetTypeID(local_40);
        lVar5 = _CFDictionaryGetTypeID();
        if (lVar4 != lVar5) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pcVar7 = "kAMDSuccess";
          goto LAB_00138405;
        }
        pcVar7 = (char *)_CFDictionaryGetValue(local_40,&cf_Error);
        if (pcVar7 == (char *)0x0) {
          lVar6 = _CFDictionaryGetValue(local_40,&cf_Value);
          if (lVar6 != 0) {
            lVar4 = _CFGetTypeID(lVar6);
            lVar5 = _CFDictionaryGetTypeID();
            if (lVar4 == lVar5) {
              _CFRetain(lVar6);
              lVar4 = 0;
              iVar2 = 0;
              lVar5 = local_38;
              goto LAB_00138228;
            }
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"Activation info is invalid (%u)",
                            *(undefined4 *)(param_1 + 0x10));
          iVar2 = -0x17ffffda;
          lVar4 = lVar6;
          goto LAB_0013821e;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar11 = *(undefined4 *)(param_1 + 0x10);
        pcVar8 = "Failed to retrieve activation info (%u): %@";
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar7 = (char *)_AMDErrorString(iVar2);
LAB_00138405:
        uVar11 = *(undefined4 *)(param_1 + 0x10);
        pcVar8 = "Failed to receive activation response (%u): %s";
      }
      __os_log_internal(0,_md_log_log,0x10,pcVar8,uVar11,pcVar7);
      iVar2 = -0x17ffffed;
      lVar4 = 0;
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar10 = _md_log_log;
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = _AMDErrorString(iVar2);
      __os_log_internal(0,uVar10,0x10,"Failed to send activation request (%u): %s",uVar11,uVar3);
      lVar4 = 0;
    }
  }
  else {
    iVar2 = -0x17ffff7c;
LAB_00138216:
    local_38 = 0;
    lVar4 = 0;
  }
LAB_0013821e:
  lVar6 = 0;
  lVar5 = local_38;
LAB_00138228:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  if (local_48 != 0) {
    _CFRelease(local_48,iVar2);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return lVar6;
}

