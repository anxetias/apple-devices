// rea decompile_all
// name: _DLConnectToDeviceWithPort
// address: 0xe938
// body: available
// range: 0xe938-0xead3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xeacf to 0xee55 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_DLConnectToDeviceWithPort
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          long param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14)

{
  int iVar1;
  char in_AL;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 local_108 [40];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_4c;
  ulong local_48;
  int *local_40;
  undefined1 *local_38;
  long local_30;
  
  if (in_AL != '\0') {
    local_d8 = param_1;
    local_c8 = param_2;
    local_b8 = param_3;
    local_a8 = param_4;
    local_98 = param_5;
    local_88 = param_6;
    local_78 = param_7;
    local_68 = param_8;
  }
  local_30 = *(long *)PTR____stack_chk_guard_00015070;
  uVar3 = 0xffffffff;
  local_e0 = param_14;
  local_4c = param_11;
  if (param_10 != 0 && param_9 != 0) {
    local_38 = local_108;
    local_40 = (int *)&stack0x00000008;
    local_48 = 0x3000000028;
    lVar5 = 0;
    do {
      if (lVar5 != 0) goto LAB_0000ea1c;
      uVar7 = local_48 & 0xffffffff;
      if (uVar7 < 0x29) {
        local_48 = CONCAT44(local_48._4_4_,(int)local_48 + 8);
        piVar4 = (int *)(local_38 + uVar7);
      }
      else {
        piVar4 = local_40;
        local_40 = local_40 + 2;
      }
      iVar1 = *piVar4;
      lVar5 = _DLDeviceGetEndpointForType(param_10,iVar1);
    } while (iVar1 != 0);
    if (lVar5 == 0) {
      lVar5 = __DLDeviceCreateDescription(param_10);
      cVar2 = _DLShouldLog(3);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
                ,"DLConnectToDeviceWithPort",3,&cf_Noendpointsfoundfor__,lVar5);
      }
      uVar3 = 0xffffffff;
    }
    else {
LAB_0000ea1c:
      lVar5 = _DLConnectionInfoCreateForEndpoint(lVar5);
      uVar6 = _CFNumberCreate(0,9,&local_4c);
      _CFDictionaryAddValue(lVar5,&cf_DLInfoPortKey,uVar6);
      uVar3 = _DLConnect(param_9,lVar5,param_12);
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00015070 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

