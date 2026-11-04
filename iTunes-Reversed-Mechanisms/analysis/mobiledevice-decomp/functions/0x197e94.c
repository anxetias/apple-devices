// rea decompile_all
// name: _createCommandDictionaryWithArgs
// address: 0x197e94
// body: available
// range: 0x197e94-0x198032 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19802e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_createCommandDictionaryWithArgs
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  char in_AL;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  char *pcVar7;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  ulong local_48;
  long *local_40;
  undefined1 *local_38;
  long local_30;
  
  if (in_AL != '\0') {
    local_c8 = param_1;
    local_b8 = param_2;
    local_a8 = param_3;
    local_98 = param_4;
    local_88 = param_5;
    local_78 = param_6;
    local_68 = param_7;
    local_58 = param_8;
  }
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_f0 = param_10;
  local_e8 = param_11;
  local_e0 = param_12;
  local_d8 = param_13;
  local_d0 = param_14;
  uVar2 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  _CFDictionarySetValue(uVar2,&cf_Command,param_9);
  local_40 = (long *)&stack0x00000008;
  local_48 = 0x3000000008;
  local_38 = local_f8;
  while( true ) {
    uVar3 = local_48 & 0xffffffff;
    if (uVar3 < 0x29) {
      plVar6 = (long *)(local_38 + uVar3);
      uVar3 = (ulong)((int)local_48 + 8U);
      local_48 = CONCAT44(local_48._4_4_,(int)local_48 + 8U);
    }
    else {
      plVar6 = local_40;
      local_40 = local_40 + 1;
    }
    lVar1 = *plVar6;
    if (lVar1 == 0) goto LAB_0019800b;
    if ((uint)uVar3 < 0x29) {
      local_48 = CONCAT44(local_48._4_4_,(uint)uVar3 + 8);
      plVar6 = (long *)(local_38 + uVar3);
    }
    else {
      plVar6 = local_40;
      local_40 = local_40 + 1;
    }
    if (*plVar6 == 0) break;
    _CFDictionarySetValue(uVar2,lVar1);
  }
  lVar4 = _getDefaultLogCtx();
  if ((lVar4 != 0) && (2 < *(int *)(lVar4 + 0x10))) {
    pcVar5 = _strrchr("/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
                      ,0x2f);
    pcVar7 = pcVar5 + 1;
    if (pcVar5 == (char *)0x0) {
      pcVar7 = 
      "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/Utilities.c"
      ;
    }
    _LogMsg(3,lVar4,pcVar7,0x77,"createCommandDictionaryWithArgs",0,&cf_novalueforkey__,lVar1);
  }
LAB_0019800b:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

