// rea decompile_all
// name: _send_unpair
// address: 0x10fcec
// body: available
// range: 0x10fcec-0x10ffe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10ffe5 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _send_unpair(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_50 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    iVar3 = -0x17fffff5;
    goto LAB_0010fdc5;
  }
  lVar5 = __CreateMessageDict(&cf_Unpair);
  if (lVar5 == 0) {
    iVar3 = -0x17fffffd;
    goto LAB_0010fdc5;
  }
  local_40 = &cf_HostID;
  local_48 = param_2;
  lVar6 = _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_40,&local_48,1
                              ,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar6 == 0) {
    iVar3 = -0x17fffffd;
  }
  else {
    _CFDictionarySetValue(lVar5,&cf_PairRecord,lVar6);
    lVar8 = *(long *)(param_1 + 0x40);
    iVar3 = _lockconn_send_message(param_1,lVar5);
    if (iVar3 == 0) {
      iVar3 = _lockconn_receive_message(param_1,&local_50);
      if (iVar3 == 0) {
        lVar8 = _CFDictionaryGetValue(local_50,&cf_Error);
        if (lVar8 == 0) {
          iVar3 = 0;
        }
        else {
          lVar9 = _CFGetTypeID(lVar8);
          lVar10 = _CFStringGetTypeID();
          iVar3 = -0x17ffffed;
          if (lVar9 == lVar10) {
            iVar3 = __ConvertLockdowndError(lVar8);
            goto LAB_0010fef0;
          }
        }
      }
      else if (iVar3 == -0x17fffff4) {
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
          if (lVar8 != 0) {
            iVar4 = _AMDeviceStartSession(param_1);
            if (iVar4 != 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              uVar2 = _md_log_log;
              uVar1 = *(undefined4 *)(param_1 + 0x10);
              uVar7 = _AMDErrorString(iVar4);
              __os_log_internal(0,uVar2,1,"Failed to restart session with device %u: %s",uVar1,uVar7
                               );
            }
          }
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar2 = _md_log_log;
          uVar1 = *(undefined4 *)(param_1 + 0x10);
          uVar7 = _AMDErrorString(iVar3);
          __os_log_internal(0,uVar2,1,"Failed to re-connect to device %u: %s",uVar1,uVar7);
          iVar3 = -0x17fffff4;
        }
      }
      else {
LAB_0010fef0:
        if (iVar3 == 0) {
          iVar3 = -0x17ffffff;
        }
      }
    }
    _CFRelease(lVar6);
    if (local_50 != 0) {
      _CFRelease();
    }
  }
  _CFRelease(lVar5);
LAB_0010fdc5:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

