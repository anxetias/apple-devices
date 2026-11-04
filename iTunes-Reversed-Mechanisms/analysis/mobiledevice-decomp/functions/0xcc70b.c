// rea decompile_all
// name: _AMRestoreModeDeviceProbe
// address: 0xcc70b
// body: available
// range: 0xcc70b-0xcccb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcccb2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMRestoreModeDeviceProbe(__AMRestoreModeDevice*) */

void _AMRestoreModeDeviceProbe(__AMRestoreModeDevice *param_1)

{
  __CFDictionary *p_Var1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  __AMRestoreModeDevice _Var13;
  __CFDictionary *local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  ulong local_80;
  undefined4 local_74;
  ulong local_70;
  ulong local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulong local_50;
  undefined8 local_48;
  undefined2 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  _initConnectionTypes(param_1,(__CFDictionary *)0x0);
  local_60 = _AMRestoreModeDeviceConnectToPortInternal(param_1,0xf27e,0.0,0x204);
  if (local_60 == -1) {
    *(undefined4 *)(param_1 + 0x88) = 4;
    goto LAB_000ccc93;
  }
  local_a0 = (__CFDictionary *)0x0;
  iVar2 = _queryDeviceCapabilities(param_1,local_60,&local_a0);
  if (iVar2 != 0) {
    _AMRLog(3,&cf_unabletoquerydevicecapabilities);
  }
  p_Var1 = local_a0;
  local_40 = 0;
  local_48 = 0;
  uVar4 = _copyValueQueryResultUsingSocket(param_1,(__CFString *)&cf_HardwareInfo,local_60);
  if (uVar4 == 0) {
    local_98 = 0;
    local_58 = 0;
    local_74 = 0;
    local_68 = 0;
    _Var13 = (__AMRestoreModeDevice)0x0;
    uVar11 = 0;
    local_50 = 0;
    local_80 = 0;
    local_88 = 0;
    uVar12 = 0;
  }
  else {
    lVar5 = _CFDictionaryGetValue(uVar4,&cf_ChipID);
    local_54 = 0;
    local_5c = 0;
    local_50 = uVar4;
    if (lVar5 != 0) {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFNumberGetTypeID();
      local_5c = 0;
      if (lVar6 == lVar7) {
        local_90 = local_90 & 0xffffffff00000000;
        _CFNumberGetValue(lVar5,9,&local_90);
        local_5c = (undefined4)local_90;
      }
    }
    uVar4 = local_50;
    lVar5 = _CFDictionaryGetValue(local_50,&cf_BoardID);
    if (lVar5 != 0) {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFNumberGetTypeID();
      uVar4 = local_50;
      if (lVar6 == lVar7) {
        local_90 = local_90 & 0xffffffff00000000;
        _CFNumberGetValue(lVar5,9,&local_90);
        local_54 = (undefined4)local_90;
        uVar4 = local_50;
      }
    }
    lVar5 = _CFDictionaryGetValue(uVar4,&cf_SecurityDomain);
    uVar11 = 1;
    if (lVar5 != 0) {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFNumberGetTypeID();
      uVar4 = local_50;
      if (lVar6 == lVar7) {
        local_90 = local_90 & 0xffffffff00000000;
        _CFNumberGetValue(lVar5,9,&local_90);
        uVar4 = local_50;
        uVar11 = (undefined4)local_90;
      }
    }
    lVar5 = _CFDictionaryGetValue(uVar4,&cf_UniqueChipID);
    if (lVar5 == 0) {
      uVar10 = 0;
    }
    else {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFNumberGetTypeID();
      if (lVar6 == lVar7) {
        local_90 = 0;
        _CFNumberGetValue(lVar5,4,&local_90);
        uVar10 = local_90;
        uVar4 = local_50;
      }
      else {
        uVar10 = 0;
        uVar4 = local_50;
      }
    }
    lVar5 = _CFDictionaryGetValue(uVar4,&cf_ProductionMode);
    if (lVar5 == 0) {
      local_68 = 0;
    }
    else {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFBooleanGetTypeID();
      if (lVar6 == lVar7) {
        local_68 = _CFBooleanGetValue(lVar5);
        uVar4 = local_50;
      }
      else {
        local_68 = 0;
        uVar4 = local_50;
      }
    }
    lVar5 = _CFDictionaryGetValue(uVar4,&cf_SecurityMode);
    if (lVar5 == 0) {
      local_70 = 0;
    }
    else {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFBooleanGetTypeID();
      if (lVar6 == lVar7) {
        local_70 = _CFBooleanGetValue(lVar5);
        uVar4 = local_50;
      }
      else {
        local_70 = 0;
        uVar4 = local_50;
      }
    }
    lVar5 = _CFDictionaryGetValue(uVar4,&cf_SupportsImage4);
    local_74 = uVar11;
    if (lVar5 == 0) {
      local_88 = 0;
    }
    else {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFBooleanGetTypeID();
      if (lVar6 == lVar7) {
        local_88 = _CFBooleanGetValue(lVar5);
        uVar4 = local_50;
      }
      else {
        local_88 = 0;
        uVar4 = local_50;
      }
    }
    lVar5 = _CFDictionaryGetValue(uVar4,&cf_EffectiveProductionMode);
    uVar9 = local_68 & 0xffffffff;
    if (lVar5 != 0) {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFBooleanGetTypeID();
      uVar4 = local_50;
      uVar9 = local_68;
      if (lVar6 == lVar7) {
        uVar3 = _CFBooleanGetValue(lVar5);
        uVar9 = (ulong)uVar3;
      }
    }
    local_50 = uVar9;
    lVar5 = _CFDictionaryGetValue(uVar4,&cf_EffectiveSecurityMode);
    local_98 = uVar10;
    if (lVar5 == 0) {
LAB_000ccb3b:
      local_80 = local_70 & 0xffffffff;
    }
    else {
      lVar6 = _CFGetTypeID(lVar5);
      lVar7 = _CFBooleanGetTypeID();
      if (lVar6 != lVar7) goto LAB_000ccb3b;
      local_80 = _CFBooleanGetValue(lVar5);
    }
    _Var13 = SUB81(local_70,0);
    local_58 = 0x1c0;
    uVar11 = local_54;
    uVar12 = local_5c;
  }
  _AMSupportSafeRelease(*(undefined8 *)(param_1 + 0xf8));
  *(ulong *)(param_1 + 0xf8) = uVar4;
  *(undefined4 *)(param_1 + 0x90) = uVar12;
  *(undefined4 *)(param_1 + 0x94) = uVar11;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(ulong *)(param_1 + 0xd8) = local_98;
  *(undefined4 *)(param_1 + 0xe0) = local_58;
  *(undefined4 *)(param_1 + 0xe4) = local_74;
  param_1[0xe8] = SUB81(local_68,0);
  param_1[0xe9] = _Var13;
  param_1[0xea] = (__AMRestoreModeDevice)0x0;
  param_1[0xeb] = SUB81(local_50,0);
  param_1[0xec] = SUB81(local_80,0);
  param_1[0xed] = SUB81(local_88,0);
  *(undefined8 *)(param_1 + 0xee) = local_48;
  *(undefined2 *)(param_1 + 0xf6) = local_40;
  _AMSupportSafeRelease(*(undefined8 *)(param_1 + 0x100));
  iVar2 = local_60;
  uVar8 = _copyDeviceProperty(param_1,local_60,p_Var1,(__CFString *)&cf_HardwareModel);
  *(undefined8 *)(param_1 + 0x100) = uVar8;
  _AMSupportSafeRelease(*(undefined8 *)(param_1 + 0x110));
  uVar8 = _copyDeviceProperty(param_1,iVar2,p_Var1,(__CFString *)&cf_SerialNumber);
  *(undefined8 *)(param_1 + 0x110) = uVar8;
  _AMSupportSafeRelease(local_a0);
  _AMRLog(6,&cf_sock_3d__s,iVar2,"closed");
  _close(iVar2);
LAB_000ccc93:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

