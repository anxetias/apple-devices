// rea decompile_all
// name: _AMDeviceActivateWithOptions
// address: 0x139596
// body: available
// range: 0x139596-0x139cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceActivateWithOptions(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  ulong local_38;
  
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  local_40 = param_1;
  if (param_1 == 0) {
    iVar4 = -0x17fffff9;
    cVar2 = '\0';
    lVar5 = 0;
    lVar6 = 0;
    goto LAB_001396e0;
  }
  if (*(char *)(param_1 + 0x94) != '\x01') {
    iVar4 = -0x17ffff7c;
    goto LAB_001396b3;
  }
  if (param_2 == 0) {
LAB_0013967b:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Input activation record is invalid.");
    iVar4 = -0x17fffff9;
LAB_001396b3:
    lVar6 = 0;
LAB_001396b5:
    lVar5 = 0;
    local_38 = 0;
  }
  else {
    lVar5 = _CFGetTypeID(param_2);
    lVar6 = _CFDataGetTypeID();
    if (lVar5 != lVar6) goto LAB_0013967b;
    uVar3 = __MobileActivationLockdownServiceSupported(param_1);
    local_38 = (ulong)uVar3;
    if ((char)uVar3 != '\0') {
      iVar4 = _AMDeviceSecureStartService(param_1,&cf_com_apple_mobileactivationd,0,&local_50);
      if (iVar4 != 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar9 = _md_log_log;
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        uVar7 = _AMDErrorString(iVar4);
        __os_log_internal(0,uVar9,0x10,"Failed to start service on device (%u): %s",uVar1,uVar7);
        goto LAB_001396b3;
      }
      lVar6 = _CFDictionaryCreateMutable(0,0,0,0);
      if (lVar6 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
        iVar4 = -0x17fffffd;
        goto LAB_001396b3;
      }
      _CFDictionarySetValue(lVar6,&cf_Command,&cf_HandleActivationInfoWithSessionRequest);
      _CFDictionarySetValue(lVar6,&cf_Value,param_2);
      if ((param_3 != 0) &&
         (cVar2 = _CFDictionaryContainsKey(param_3,&cf_ActivationResponseHeaders), cVar2 != '\0')) {
        uVar9 = _CFDictionaryGetValue(param_3,&cf_ActivationResponseHeaders);
        _CFDictionarySetValue(lVar6,&cf_ActivationResponseHeaders,uVar9);
      }
      iVar4 = _AMDServiceConnectionSendMessage(local_50,lVar6,100);
      if (iVar4 != 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar9 = _md_log_log;
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        uVar7 = _AMDErrorString(iVar4);
        lVar5 = 0;
        __os_log_internal(0,uVar9,0x10,"Failed to send activation request (%u): %s",uVar1,uVar7);
        local_38 = 0;
        goto LAB_001396bd;
      }
      iVar4 = _AMDServiceConnectionReceiveMessage(local_50,&local_48,0);
      if (iVar4 == 0) {
        lVar5 = _CFGetTypeID(local_48);
        lVar11 = _CFDictionaryGetTypeID();
        if (lVar5 == lVar11) {
          lVar11 = _CFDictionaryGetValue(local_48,&cf_Error);
          if (lVar11 == 0) {
            lVar5 = 0;
LAB_00139b78:
            local_38 = local_38 ^ 1;
            iVar4 = 0;
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar5 = 0;
            __os_log_internal(0,_md_log_log,0x10,"Failed to activate device (%u): %@",
                              *(undefined4 *)(param_1 + 0x10),lVar11);
            iVar4 = -0x17ffffda;
            local_38 = 0;
          }
          goto LAB_001396bd;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar10 = "kAMDSuccess";
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar10 = (char *)_AMDErrorString(iVar4);
      }
      __os_log_internal(0,_md_log_log,0x10,"Failed to receive activation response (%u): %s",
                        *(undefined4 *)(param_1 + 0x10),pcVar10);
      iVar4 = -0x17ffffed;
      goto LAB_001396b5;
    }
    _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
    lVar5 = _CFPropertyListCreateWithData
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_2,0,0,&local_58);
    if (lVar5 == 0) {
LAB_0013988a:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar9 = __os_log_internal(0,_md_log_log,0x10,"Failed to convert data to dictionary (%u): %@",
                                *(undefined4 *)(local_40 + 0x10),local_58);
    }
    else {
      lVar6 = _CFGetTypeID(lVar5);
      lVar11 = _CFDictionaryGetTypeID();
      if (lVar6 != lVar11) goto LAB_0013988a;
      lVar6 = _CFDictionaryGetValue(lVar5,&cf_device_activation);
      if ((lVar6 == 0) && (lVar6 = _CFDictionaryGetValue(lVar5,&cf_iphone_activation), lVar6 == 0))
      {
LAB_001399c4:
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar10 = "Input data is missing activation ticket.";
      }
      else {
        lVar11 = _CFGetTypeID(lVar6);
        lVar8 = _CFDictionaryGetTypeID();
        if (lVar11 != lVar8) goto LAB_001399c4;
        lVar6 = _CFDictionaryGetValue(lVar6,&cf_activation_record);
        if (lVar6 != 0) {
          lVar11 = _CFGetTypeID(lVar6);
          lVar8 = _CFDictionaryGetTypeID();
          if (lVar11 == lVar8) {
            iVar4 = _send_activation(param_1,lVar6);
            if (iVar4 == 0) {
              lVar6 = 0;
              goto LAB_00139b78;
            }
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar9 = _md_log_log;
            uVar1 = *(undefined4 *)(local_40 + 0x10);
            uVar7 = _AMDErrorString(iVar4);
            lVar6 = 0;
            uVar9 = __os_log_internal(0,uVar9,0x10,"Failed to activate device (%u): %s",uVar1,uVar7)
            ;
            local_38 = CONCAT71((int7)((ulong)uVar9 >> 8),1);
            goto LAB_001396bd;
          }
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar10 = "Input data is missing activation record.";
      }
      uVar9 = __os_log_internal(0,_md_log_log,0x10,pcVar10);
    }
    lVar6 = 0;
    local_38 = CONCAT71((int7)((ulong)uVar9 >> 8),1);
    iVar4 = -0x17ffffff;
  }
LAB_001396bd:
  cVar2 = (char)local_38;
LAB_001396e0:
  if (cVar2 != '\0') {
    _pthread_mutex_unlock((pthread_mutex_t *)(local_40 + 0x48));
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_58 != 0) {
    _CFRelease();
  }
  return iVar4;
}

