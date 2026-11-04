// rea decompile_all
// name: _cczp_inv_default_ws
// address: 0x1398d
// body: available
// range: 0x1398d-0x13d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_cczp_inv_default_ws(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  sbyte sVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  ulong local_40;
  long local_38;
  
  local_38 = param_1;
  lVar5 = _ccctr_context_size(param_2);
  uVar6 = _cczp_prime(param_2);
  iVar3 = _ccn_cmp_internal(lVar5,param_4,uVar6);
  lVar11 = local_38;
  uVar6 = 0xfffffff9;
  if (iVar3 < 0) {
    uVar1 = *(undefined8 *)(local_38 + 0x10);
    uVar6 = (**(code **)(local_38 + 0x18))(local_38,lVar5);
    plVar7 = (long *)(**(code **)(lVar11 + 0x18))(lVar11,lVar5);
    local_58 = uVar6;
    _cczp_from_ws(lVar11,param_2,uVar6,param_4);
    uVar6 = _cczp_prime(param_2);
    _ccn_set(lVar5,plVar7,uVar6);
    uVar6 = (**(code **)(lVar11 + 0x18))(lVar11,lVar5);
    uVar8 = (**(code **)(lVar11 + 0x18))(lVar11,lVar5);
    _ccn_seti(lVar5,uVar6,1);
    lVar16 = lVar5 << 3;
    _cc_clear(lVar16,uVar8);
    local_50 = (**(code **)(lVar11 + 0x18))(lVar11,lVar5);
    if (lVar5 << 7 != 0) {
      uVar14 = (lVar5 << 7 | 0x1eU) / 0x1f;
      lVar11 = 0;
      local_48 = lVar5;
      do {
        local_40 = 0;
        local_60 = 0;
        _ccn_gcd_approximate(lVar5,local_58,&local_40,plVar7,&local_60);
        lVar5 = 0x1f;
        uVar22 = 0;
        uVar13 = 0;
        uVar19 = 0x80000000;
        uVar20 = 0x80000000;
        do {
          uVar4 = (uint)local_40 & 1;
          sVar2 = (sbyte)uVar4;
          local_40 = local_40 >> (1U - sVar2 & 0x3f);
          uVar15 = -(ulong)uVar4;
          uVar12 = (long)((local_40 - local_60 ^ local_40 | local_60 ^ local_40) ^ local_40) >> 0x3f
                   & uVar15;
          uVar18 = ~uVar12;
          uVar17 = local_40 & uVar18 | local_60 & uVar12;
          uVar21 = uVar20 & uVar18 | uVar12 & uVar13;
          uVar12 = uVar18 & uVar22 | uVar12 & uVar19;
          local_60 = local_40 ^ local_60 ^ uVar17;
          local_40 = uVar17 - (local_60 & uVar15) >> sVar2;
          uVar13 = uVar13 ^ uVar20 ^ uVar21;
          uVar21 = uVar21 - (uVar13 & uVar15);
          uVar19 = uVar19 ^ uVar22 ^ uVar12;
          uVar12 = uVar12 - (uVar15 & uVar19);
          uVar20 = uVar21 >> 1 | uVar21 & 0x8000000000000000;
          uVar22 = uVar12 >> 1 | uVar12 & 0x8000000000000000;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        lVar9 = _ccn_gcd_update_ws(local_38,local_48,local_50,local_58,uVar20,plVar7,uVar22);
        lVar10 = _ccn_gcd_update_ws(local_38,local_48,plVar7,local_58,uVar13,plVar7,uVar19);
        _ccn_set(local_48,local_58,local_50);
        lVar5 = local_48;
        _cczp_inv_update_redc_ws
                  (local_38,param_2,local_50,uVar6,uVar20 & lVar9 - 1U | -uVar20 & -lVar9,uVar8,
                   -uVar22 & -lVar9 | lVar9 - 1U & uVar22);
        _cczp_inv_update_redc_ws
                  (local_38,param_2,uVar8,uVar6,uVar13 & lVar10 - 1U | -uVar13 & -lVar10,uVar8,
                   -uVar19 & -lVar10 | lVar10 - 1U & uVar19);
        _ccn_set(lVar5,uVar6,local_50);
        lVar11 = lVar11 + 1;
      } while (lVar11 != uVar14 + (uVar14 == 0));
    }
    lVar5 = _ccn_n(lVar5,plVar7);
    if ((lVar5 == 1) && (*plVar7 == 1)) {
      _cczp_to_ws(local_38,param_2,param_3,uVar8);
      uVar6 = 0;
    }
    else {
      _cc_clear(lVar16,param_3);
      uVar6 = 0xfffffff9;
    }
    *(undefined8 *)(local_38 + 0x10) = uVar1;
  }
  return uVar6;
}

