// rea decompile_all
// name: _AMDeviceCreateActivationInfoWithOptions
// address: 0x138a8e
// body: available
// range: 0x138a8e-0x1390e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceCreateActivationInfoWithOptions(long param_1,long param_2,long param_3,int *param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_50;
  long local_48;
  long local_40;
  int local_34;
  
  local_48 = 0;
  local_50 = 0;
  if (param_1 == 0) {
    local_34 = -0x17fffff9;
    lVar5 = 0;
    lVar8 = 0;
    lVar6 = 0;
    lVar7 = 0;
    goto LAB_00138b6b;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    local_34 = -0x17ffff7c;
LAB_00138b33:
    local_40 = 0;
    lVar6 = 0;
LAB_00138b3b:
    lVar8 = 0;
  }
  else {
    iVar3 = __MobileActivationWaitForBaseband(param_1);
    local_34 = iVar3;
    if (iVar3 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar12 = _md_log_log;
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = _AMDErrorString(iVar3);
      pcVar9 = "Waiting for baseband failed (%u): %s";
      uVar11 = 1;
LAB_00138b26:
      __os_log_internal(0,uVar12,uVar11,pcVar9,uVar1,uVar4);
      goto LAB_00138b33;
    }
    cVar2 = __MobileActivationLockdownServiceSupported(param_1);
    if (cVar2 != '\0') {
      iVar3 = _AMDeviceSecureStartService(param_1,&cf_com_apple_mobileactivationd,0,&local_50);
      local_34 = iVar3;
      if (iVar3 != 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar12 = _md_log_log;
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        uVar4 = _AMDErrorString(iVar3);
        pcVar9 = "Failed to start activation service (%u): %s";
        uVar11 = 0x10;
        goto LAB_00138b26;
      }
      local_40 = _CFDictionaryCreateMutable(0,0,0,0);
      if (local_40 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
        local_34 = -0x17fffffd;
        goto LAB_00138b33;
      }
      _CFDictionarySetValue(local_40,&cf_Command,&cf_CreateActivationInfoRequest);
      lVar5 = _CFDictionaryCreateMutable(0,0,0,0);
      if (lVar5 != 0) {
        _CFDictionarySetValue(lVar5,&cf_MinIPhoneVersion,&cf_10_0);
        _CFDictionarySetValue(lVar5,&cf_MinAppleTVVersion,&cf_10_0);
        _CFDictionarySetValue(lVar5,&cf_MinWatchVersion,&cf_3_0);
        cVar2 = _AMDeviceIsAtLeastVersionOnPlatform(param_1,lVar5);
        if ((param_2 != 0) && (cVar2 != '\0')) {
          _CFDictionarySetValue(local_40,&cf_Value,param_2);
        }
        lVar6 = local_40;
        if (param_3 != 0) {
          _CFDictionarySetValue(local_40,&cf_Options,param_3);
        }
        iVar3 = _AMDServiceConnectionSendMessage(local_50,lVar6,100);
        local_34 = iVar3;
        if (iVar3 == 0) {
          iVar3 = _AMDServiceConnectionReceiveMessage(local_50,&local_48,0);
          local_34 = iVar3;
          if (iVar3 == 0) {
            lVar6 = _CFGetTypeID(local_48);
            lVar7 = _CFDictionaryGetTypeID();
            if (lVar6 != lVar7) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar9 = "kAMDSuccess";
              goto LAB_00138f2f;
            }
            pcVar9 = (char *)_CFDictionaryGetValue(local_48,&cf_Error);
            if (pcVar9 == (char *)0x0) {
              lVar8 = _CFDictionaryGetValue(local_48,&cf_Value);
              if (lVar8 != 0) {
                lVar6 = _CFGetTypeID(lVar8);
                lVar7 = _CFDictionaryGetTypeID();
                if (lVar6 == lVar7) {
                  _CFRetain(lVar8);
                  lVar6 = 0;
                  lVar7 = local_40;
                  goto LAB_00138b6b;
                }
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"Activation info is invalid (%u)",
                                *(undefined4 *)(param_1 + 0x10));
              local_34 = -0x17ffffda;
              lVar6 = lVar8;
              goto LAB_00138f5e;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar1 = *(undefined4 *)(param_1 + 0x10);
            pcVar10 = "Failed to retrieve activation info (%u): %@";
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            pcVar9 = (char *)_AMDErrorString(iVar3);
LAB_00138f2f:
            uVar1 = *(undefined4 *)(param_1 + 0x10);
            pcVar10 = "Failed to receive activation response (%u): %s";
          }
          __os_log_internal(0,_md_log_log,0x10,pcVar10,uVar1,pcVar9);
          local_34 = -0x17ffffed;
          lVar6 = 0;
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar12 = _md_log_log;
          uVar1 = *(undefined4 *)(param_1 + 0x10);
          uVar4 = _AMDErrorString(iVar3);
          __os_log_internal(0,uVar12,0x10,"Failed to send activation request (%u): %s",uVar1,uVar4);
          lVar6 = 0;
        }
LAB_00138f5e:
        lVar8 = 0;
        lVar7 = local_40;
        goto LAB_00138b6b;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary (%u).",
                        *(undefined4 *)(param_1 + 0x10));
      lVar6 = 0;
      goto LAB_00138b3b;
    }
    lVar8 = _AMDeviceCopyValueWithError(param_1,0,&cf_ActivationInfo,&local_34);
    if (lVar8 == 0) {
LAB_00138c86:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_40 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Activation info is invalid (%u)",
                        *(undefined4 *)(param_1 + 0x10));
      local_34 = -0x17ffffda;
      lVar6 = lVar8;
      goto LAB_00138b3b;
    }
    lVar6 = _CFGetTypeID(lVar8);
    lVar7 = _CFDictionaryGetTypeID();
    if (lVar6 != lVar7) goto LAB_00138c86;
    lVar6 = 0;
    local_40 = 0;
  }
  lVar5 = 0;
  lVar7 = local_40;
LAB_00138b6b:
  if (param_4 != (int *)0x0) {
    *param_4 = local_34;
  }
  if (local_50 != 0) {
    _CFRelease(local_50,local_34);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return lVar8;
}

