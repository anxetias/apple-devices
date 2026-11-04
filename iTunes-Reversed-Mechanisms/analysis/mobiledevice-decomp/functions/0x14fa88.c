// rea decompile_all
// name: _perform_command
// address: 0x14fa88
// body: available
// range: 0x14fa88-0x14fe09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14fe05 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _perform_command(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,long param_10,long *param_11,code *param_12,
                    undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  undefined1 local_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_80;
  code *local_78;
  long *local_70;
  long local_68;
  long local_60;
  ulong local_58;
  long *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_108 = param_1;
    local_f8 = param_2;
    local_e8 = param_3;
    local_d8 = param_4;
    local_c8 = param_5;
    local_b8 = param_6;
    local_a8 = param_7;
    local_98 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_110 = param_14;
  local_80 = param_13;
  local_78 = param_12;
  local_70 = param_11;
  local_68 = _CFDictionaryCreateMutable
                       (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                        PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (local_68 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,"Could not create empty dictionary");
    iVar3 = -0x17ffffff;
    goto LAB_0014fd9b;
  }
  if (param_10 != 0) {
    _CFDictionarySetValue(local_68,&cf_Command,param_10);
  }
  lVar6 = local_68;
  local_48 = local_138;
  local_50 = (long *)&stack0x00000008;
  local_58 = 0x3000000028;
  while( true ) {
    uVar5 = local_58 & 0xffffffff;
    if (uVar5 < 0x29) {
      plVar8 = (long *)(local_48 + uVar5);
      uVar5 = (ulong)((int)local_58 + 8U);
      local_58 = CONCAT44(local_58._4_4_,(int)local_58 + 8U);
    }
    else {
      plVar8 = local_50;
      local_50 = local_50 + 1;
    }
    if (*plVar8 == 0) break;
    if ((uint)uVar5 < 0x29) {
      local_58 = CONCAT44(local_58._4_4_,(uint)uVar5 + 8);
      plVar8 = (long *)(local_48 + uVar5);
    }
    else {
      plVar8 = local_50;
      local_50 = local_50 + 1;
    }
    if (*plVar8 != 0) {
      _CFDictionarySetValue(lVar6);
    }
  }
  iVar3 = _AMDServiceConnectionSendMessage(param_9,lVar6,100);
  if (iVar3 == 0) {
    do {
      iVar4 = _AMDServiceConnectionReceiveMessage(param_9,&local_60,0);
      iVar3 = -0x17ffffd2;
      if ((iVar4 != 0) || (local_60 == 0)) {
        pcVar9 = "Could not receive response from proxy";
        goto LAB_0014fd39;
      }
      lVar6 = _CFDictionaryGetValue(local_60,&cf_Error);
      if (lVar6 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = _AMDErrorForMobileInstallationCallbackDict(local_60);
      }
      bVar2 = lVar6 != 0;
      lVar7 = _CFDictionaryGetValue(local_60,&cf_Status);
      if (lVar7 != 0) {
        cVar1 = _CFEqual(lVar7,&cf_Complete);
        if ((local_70 != (long *)0x0) &&
           (lVar7 = _CFDictionaryGetValue(local_60,&cf_LookupResult), lVar7 != 0)) {
          _CFRetain(lVar7);
          *local_70 = lVar7;
        }
        lVar7 = local_60;
        bVar2 = lVar6 != 0 || cVar1 != '\0';
        if ((local_78 != (code *)0x0) && (lVar6 == 0 && cVar1 == '\0')) {
          _CFRetain(local_60);
          (*local_78)(lVar7,local_80);
          bVar2 = false;
        }
      }
      _CFRelease(local_60);
    } while (!bVar2);
    if (iVar3 != 0) goto LAB_0014fd64;
    iVar3 = 0;
  }
  else {
    iVar3 = -0x17ffffd3;
    pcVar9 = "Could not send request to proxy";
LAB_0014fd39:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,pcVar9);
LAB_0014fd64:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,
                      "There was an error communicating with the service agent: 0x%x",iVar3);
  }
  _CFRelease(local_68);
LAB_0014fd9b:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

