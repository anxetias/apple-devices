// rea decompile_all
// name: _ccn_divmod_ws
// address: 0x1cd10
// body: available
// range: 0x1cd10-0x1d1b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d1ac to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ccn_divmod_ws(long param_1,long param_2,long param_3,ulong param_4,long param_5,long param_6,
                   long param_7,long param_8)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  ulong local_b8;
  long local_b0;
  long local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  long local_78;
  ulong local_70;
  ulong *local_68;
  char local_59;
  ulong local_58;
  ulong local_50;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_88 = param_4;
  local_78 = param_5;
  lVar5 = _ccn_n(param_6,param_8);
  local_70 = param_2 - lVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = lVar5 + 1;
  lVar6 = (**(code **)(param_1 + 0x18))(param_1,lVar7);
  local_68 = (ulong *)(**(code **)(param_1 + 0x18))(param_1,lVar7);
  local_b0 = param_1;
  local_a8 = lVar7;
  lVar7 = (**(code **)(param_1 + 0x18))(param_1,lVar7);
  *(undefined8 *)(lVar6 + lVar5 * 8) = 0;
  puVar1 = (ulong *)(param_8 + (lVar5 + -1) * 8);
  uVar20 = 0x3f;
  if (*puVar1 != 0) {
    for (; *puVar1 >> uVar20 == 0; uVar20 = uVar20 - 1) {
    }
  }
  uVar20 = uVar20 ^ 0x3f;
  local_80 = lVar6;
  _ccn_shift_left(lVar5,lVar6,param_8,uVar20);
  local_a0 = (ulong)(uVar20 != 0);
  local_90 = uVar20;
  if (lVar5 != 0) {
    _ccn_set(lVar5,local_68,param_3 + local_70 * 8);
  }
  puVar1 = local_68;
  local_a0 = -local_a0;
  _ccn_zero(1,local_68 + lVar5);
  _ccn_shift_left(local_a8,puVar1,puVar1,local_90);
  puVar1 = local_68;
  uVar8 = *(ulong *)(local_80 + -8 + lVar5 * 8);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *(ulong *)(local_80 + -8 + lVar5 * 8);
  bVar22 = auVar23 != _DAT_002b19d0;
  uVar13 = 0;
  uVar14 = -uVar8;
  uVar15 = -(ulong)(uVar8 != 0);
  lVar6 = 0x41;
  uVar17 = 0;
  do {
    lVar18 = -((long)(((uVar15 - uVar8) - (ulong)(uVar14 < uVar13) ^ uVar15 | uVar8 ^ uVar15) ^
                     uVar15) >> 0x3f);
    uVar19 = lVar18 - 1;
    uVar16 = uVar19 & uVar13;
    bVar21 = uVar14 < uVar16;
    uVar14 = uVar14 - uVar16;
    uVar15 = (uVar15 - ((ulong)(lVar18 != 0) - 1 & uVar8)) - (ulong)bVar21;
    uVar17 = (ulong)((uint)uVar19 & 1) | uVar17 * 2;
    uVar13 = uVar13 >> 1 | uVar8 << 0x3f;
    uVar8 = uVar8 >> 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar9 = local_68 + 1;
  uVar8 = local_70;
  do {
    uVar15 = *(long *)(param_3 + uVar8 * 8) << ((byte)local_90 & 0x3f);
    *local_68 = uVar15;
    if (uVar8 != 0) {
      *local_68 = (*(ulong *)(param_3 + -8 + uVar8 * 8) & local_a0) >> (-(char)uVar20 & 0x3fU) |
                  uVar15;
    }
    local_59 = local_78 == 0;
    uVar15 = puVar1[lVar5 + -1];
    uVar13 = puVar1[lVar5];
    local_b8 = *(ulong *)(local_80 + -8 + lVar5 * 8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar13;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)bVar22 - 1 | uVar17 + 2;
    local_98 = SUB168(auVar3 * auVar4,8) + uVar13 +
               ((long)((uVar15 - local_b8 ^ uVar15 | local_b8 ^ uVar15) ^ uVar15) >> 0x3f) + 2;
    local_98 = (long)((local_98 - uVar13 ^ local_98 | local_98 ^ uVar13) ^ local_98) >> 0x3f |
               local_98;
    local_48 = (undefined1  [16])0x0;
    _ccn_mul(1,local_48,&local_98,&local_b8);
    local_58 = uVar15;
    local_50 = uVar13;
    lVar6 = _ccn_sub_ws(0,2,local_48,&local_58,local_48);
    local_98 = local_98 + lVar6 * -2;
    lVar10 = _ccn_add1_ws(0,2,local_48,local_48,local_b8);
    lVar18 = local_80;
    lVar10 = lVar10 + local_98;
    uVar11 = _ccn_mul1(lVar5,lVar7,local_80,lVar10);
    lVar6 = local_a8;
    *(undefined8 *)(lVar7 + lVar5 * 8) = uVar11;
    lVar12 = _ccn_sub_ws(local_b0,local_a8,puVar1,puVar1,lVar7);
    lVar18 = _ccn_cond_add(lVar6,lVar12,puVar1,puVar1,lVar18);
    _ccn_cond_add(lVar6,lVar12 - lVar18,puVar1,puVar1,local_80);
    if (uVar8 < local_88 && local_59 == '\0') {
      *(long *)(local_78 + uVar8 * 8) = lVar10 - (lVar12 + (lVar12 - lVar18));
    }
    bVar21 = uVar8 != 0;
    uVar8 = uVar8 - 1;
    if (bVar21) {
      _memmove(puVar9,local_68,lVar5 * 8);
    }
  } while (uVar8 <= local_70);
  if (local_78 != 0) {
    uVar20 = local_70 + 1;
    bVar22 = uVar20 <= local_88;
    local_88 = local_88 - uVar20;
    if (bVar22 && local_88 != 0) {
      _cc_clear(local_88 * 8,local_78 + uVar20 * 8);
    }
  }
  if (param_7 != 0) {
    _ccn_shift_right(lVar5,local_68,local_68,local_90);
    if (lVar5 != 0) {
      _ccn_set(lVar5,param_7,local_68);
    }
    _ccn_zero(param_6 - lVar5,param_7 + lVar5 * 8);
  }
  *(undefined8 *)(local_b0 + 0x10) = uVar2;
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

