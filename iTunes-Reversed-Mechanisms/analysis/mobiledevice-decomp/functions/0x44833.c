// rea decompile_all
// name: _CPXCopyValueFromPairedDevice
// address: 0x44833
// body: available
// range: 0x44833-0x44bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bd7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _CPXCopyValueFromPairedDevice(long param_1,long param_2,long param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long local_88;
  long local_80;
  cfstringStruct *local_78;
  long local_70;
  long local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_88 = 0;
  local_80 = 0;
  if ((param_2 == 0 || param_1 == 0) || param_3 == 0) {
    lVar3 = 0;
    __os_log_internal(0,PTR___os_log_default_004412f0,0,
                      "Invalid Input to CPXCopyValueFromPairedDevice, device: %@, pairedUDID: %@, key: %@"
                      ,param_1,param_2,param_3);
    iVar2 = -0x17fffff9;
  }
  else {
    iVar2 = __CopyCompanionProxyServiceConnectionForDevice(param_1,&local_88);
    if (iVar2 == 0) {
      local_48 = &cf_GetValueKeyKey;
      local_58 = 0x4525f0;
      uStack_54 = 0;
      uStack_50 = 0x452650;
      uStack_4c = 0;
      local_78 = &cf_GetValueFromRegistry;
      local_70 = param_2;
      local_68 = param_3;
      lVar3 = _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_58,
                                  &local_78,3,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      lVar4 = local_88;
      if (lVar3 != 0) {
        iVar2 = _AMDServiceConnectionSendMessage(local_88,lVar3,200,0);
        if (iVar2 != 0) {
          lVar5 = 0;
          __os_log_internal(0,PTR___os_log_default_004412f0,0,
                            "Failed to send initial message: 0x%08x",iVar2);
          goto LAB_000448d8;
        }
        iVar2 = _AMDServiceConnectionReceiveMessage(lVar4,&local_80,0,0);
        if (iVar2 != 0) {
          lVar5 = 0;
          __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to receive response: 0x%08x",
                            iVar2);
          lVar4 = local_88;
          goto LAB_000448d8;
        }
        if (local_80 == 0) {
          lVar5 = 0;
          __os_log_internal(0,PTR___os_log_default_004412f0,0,"Got an empty response");
          iVar2 = -0x17fffffa;
          lVar4 = local_88;
          goto LAB_000448d8;
        }
        lVar4 = _CFGetTypeID();
        lVar5 = _CFDictionaryGetTypeID();
        if (lVar4 == lVar5) {
          lVar4 = _CFDictionaryGetValue(local_80,&cf_Error);
          if (lVar4 != 0) {
            cVar1 = _CFEqual(lVar4,&cf_UnsupportedWatchKey);
            if (cVar1 == '\0') {
              uVar6 = _CFStringGetCStringPtr(lVar4,0x8000100);
              __os_log_internal(0,PTR___os_log_default_004412f0,0,
                                "Error from service: %s, retrieving %@ from %@",uVar6,param_3,
                                param_1);
            }
            iVar2 = __OurErrorStringToAMDError(lVar4);
            goto LAB_000448d1;
          }
          lVar4 = _CFDictionaryGetValue(local_80,&cf_RetrievedValueDictionary);
          if (lVar4 != 0) {
            lVar5 = _CFDictionaryGetTypeID();
            lVar7 = _CFGetTypeID(lVar4);
            if (lVar5 == lVar7) {
              lVar5 = _CFDictionaryGetValue(lVar4,param_3);
              if (lVar5 != 0) {
                _CFRetain(lVar5);
                iVar2 = 0;
                lVar4 = local_88;
                goto LAB_000448d8;
              }
              __os_log_internal(0,PTR___os_log_default_004412f0,0,
                                "Failed to get value from dict: %@",lVar4);
              goto LAB_00044ba6;
            }
          }
          __os_log_internal(0,PTR___os_log_default_004412f0,0,
                            "Failed to get retrieved values from response: %@: %@",local_80,lVar4);
        }
        else {
          __os_log_internal(0,PTR___os_log_default_004412f0,0,
                            "Got non-dictionary response from service");
        }
LAB_00044ba6:
        lVar5 = 0;
        iVar2 = -0x17fffffc;
        lVar4 = local_88;
        goto LAB_000448d8;
      }
      lVar3 = 0;
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to create message dictionary");
      iVar2 = -0x17fffffd;
    }
    else {
      lVar3 = 0;
    }
  }
LAB_000448d1:
  lVar5 = 0;
  lVar4 = local_88;
LAB_000448d8:
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  local_88 = 0;
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (local_80 != 0) {
    _CFRelease();
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}

