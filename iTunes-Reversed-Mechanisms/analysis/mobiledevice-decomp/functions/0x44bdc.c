// rea decompile_all
// name: _CPXStartForwardingToPairedDevicePort
// address: 0x44bdc
// body: available
// range: 0x44bdc-0x45019 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45015 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00044c69) */

undefined4
_CPXStartForwardingToPairedDevicePort
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 local_b0;
  undefined4 local_ac;
  long local_a8;
  long local_a0;
  cfstringStruct *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  cfstringStruct *local_58;
  cfstringStruct *pcStack_50;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar6 = 0;
  local_a0 = 0;
  local_ac = 0;
  local_b0 = param_2;
  iVar4 = __CopyCompanionProxyServiceConnectionForDevice();
  local_a8 = 0;
  lVar5 = local_a8;
  if (iVar4 == 0) {
    uVar8 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_a8 = _CFNumberCreate(uVar1,9,&local_b0);
    cVar3 = _CFEqual(param_3,&cf_com_apple_mobile_notification_proxy);
    uVar2 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
    uVar10 = uVar2;
    if (cVar3 == '\0') {
      uVar10 = uVar8;
    }
    local_78 = uVar8;
    if (((param_4 != 0) && (lVar5 = _CFDictionaryGetValue(param_4,&cf_PreferWifi), lVar5 != 0)) &&
       (cVar3 = _CFEqual(lVar5,uVar2), cVar3 != '\0')) {
      local_78 = uVar2;
    }
    lVar5 = local_a8;
    local_48 = &cf_PreferWifi;
    local_58 = &cf_ForwardedServiceName;
    pcStack_50 = &cf_IsServiceLowPriority;
    local_68 = 0x4525f0;
    uStack_64 = 0;
    uStack_60 = 0x452730;
    uStack_5c = 0;
    local_98 = &cf_StartForwardingServicePort;
    local_90 = local_a8;
    local_88 = param_3;
    local_80 = uVar10;
    lVar6 = _CFDictionaryCreate(uVar1,&local_68,&local_98,5,
                                PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar6 == 0) {
      lVar6 = 0;
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to create message dictionary");
      iVar4 = -0x17fffffd;
      lVar5 = local_a8;
    }
    else {
      iVar4 = _AMDServiceConnectionSendMessage(0,lVar6,200,0);
      if (iVar4 == 0) {
        iVar4 = _AMDServiceConnectionReceiveMessage(0,&local_a0,0,0);
        if (iVar4 == 0) {
          if (local_a0 == 0) {
            __os_log_internal(0,PTR___os_log_default_004412f0,0,"Got an empty response");
            iVar4 = -0x17fffffa;
            lVar5 = local_a8;
          }
          else {
            lVar5 = _CFGetTypeID();
            lVar7 = _CFDictionaryGetTypeID();
            if (lVar5 == lVar7) {
              lVar5 = _CFDictionaryGetValue(local_a0,&cf_Error);
              if (lVar5 != 0) {
                uVar8 = _CFStringGetCStringPtr(lVar5,0x8000100);
                __os_log_internal(0,PTR___os_log_default_004412f0,0,"Got error from service: %s",
                                  uVar8);
                iVar4 = __OurErrorStringToAMDError(lVar5);
                lVar5 = local_a8;
                goto LAB_00044c5d;
              }
              lVar5 = _CFDictionaryGetValue(local_a0,&cf_CompanionProxyServicePort);
              if (lVar5 != 0) {
                lVar7 = _CFNumberGetTypeID();
                lVar9 = _CFGetTypeID(lVar5);
                if (lVar7 == lVar9) {
                  _CFNumberGetValue(lVar5,9,&local_ac);
                  iVar4 = 0;
                  __os_log_internal(0,PTR___os_log_default_004412f0,2,
                                    "Now forwarding companion port: %d to Gizmo port %d on companion: %@"
                                    ,local_ac,local_b0,param_1);
                  lVar5 = local_a8;
                  goto LAB_00044c5d;
                }
              }
              __os_log_internal(0,PTR___os_log_default_004412f0,0,
                                "Failed to get return companion port from response: %@: %@",local_a0
                                ,lVar5);
            }
            else {
              __os_log_internal(0,PTR___os_log_default_004412f0,0,
                                "Got non-dictionary response from service");
            }
            iVar4 = -0x17fffffc;
            lVar5 = local_a8;
          }
        }
        else {
          __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to receive response: 0x%08x",
                            iVar4);
          lVar5 = local_a8;
        }
      }
      else {
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to send initial message: 0x%08x"
                          ,iVar4);
      }
    }
  }
LAB_00044c5d:
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_a0 != 0) {
    _CFRelease();
  }
  local_a0 = 0;
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar4;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return local_ac;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

