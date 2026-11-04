// rea decompile_all
// name: _ccdrbg_df_bc_derive_keys
// address: 0x263ff4
// body: available
// range: 0x263ff4-0x2643b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2643b3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ccdrbg_df_bc_derive_keys
                (long param_1,long param_2,undefined8 *param_3,ulong param_4,long *param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long alStack_130 [3];
  undefined1 auStack_118 [8];
  ulong local_110;
  long local_108;
  ulong local_100;
  ulong local_f8;
  long local_f0;
  long *local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined1 *local_d0;
  long local_c8;
  long local_c0;
  long *local_b8;
  undefined8 *local_b0;
  long local_a8;
  undefined8 uStack_a0;
  long local_98 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  plVar14 = *(long **)(param_1 + 8);
  lVar8 = -(*plVar14 + 0xfU & 0xfffffffffffffff0);
  local_d0 = auStack_118 + lVar8;
  local_b0 = param_3;
  *(undefined8 *)((long)alStack_130 + lVar8 + 0x10) = 0x26404e;
  ___bzero();
  puVar4 = local_b0;
  lVar8 = (long)(auStack_118 + lVar8) - (plVar14[1] + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    uVar13 = 0;
  }
  else {
    plVar9 = local_b0 + 1;
    lVar12 = 0;
    lVar10 = param_2;
    do {
      lVar12 = lVar12 + *plVar9;
      uVar13 = (uint)lVar12;
      plVar9 = plVar9 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  local_108 = param_2;
  local_c8 = lVar8;
  local_b8 = plVar14;
  *(undefined8 *)(lVar8 + -8) = 0x2640b0;
  ___bzero(lVar8);
  lVar10 = local_c8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
  uVar6 = (uint)param_4;
  local_44 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  local_98[6] = 0x80;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_100 = *(long *)(param_1 + 0x10) + 0x10;
  local_c0 = param_1;
  if (local_100 == 0) {
    *(undefined8 *)(lVar8 + -8) = 0xfffffffffffffff0;
    uVar11 = *(undefined8 *)(lVar8 + -8);
    plVar14 = local_b8;
  }
  else {
    local_f0 = ((ulong)(uVar13 & 0xf) ^ 0xfffffffffffffff7) + 0x11;
    local_b8 = (long *)(param_1 + 0x20);
    local_b0 = puVar4 + 1;
    uVar16 = 0;
    uVar13 = 0;
    local_f8 = param_4;
    local_e8 = param_5;
    do {
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 *)(lVar8 + -8) = 0x264156;
      _cc_clear(uVar11,lVar10);
      plVar14 = local_b8;
      local_dc = uVar13;
      local_58 = CONCAT44(local_58._4_4_,
                          uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                          uVar13 << 0x18);
      local_110 = uVar16;
      lVar15 = (long)local_98 + uVar16;
      local_d8 = 0;
      uVar11 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(lVar8 + -0x10) = 0x18;
      uVar1 = *(undefined8 *)(lVar8 + -0x10);
      *(undefined8 **)(lVar8 + -0x10) = &local_58;
      *(undefined8 *)(lVar8 + -0x18) = 0x2641a7;
      iVar7 = _update(uVar11,plVar14,lVar10,lVar15,&local_d8,uVar1);
      lVar12 = local_108;
      lVar2 = local_f0;
      lVar3 = local_c8;
      plVar14 = local_b8;
      puVar4 = local_b0;
      if (iVar7 != 0) {
LAB_002643a3:
        local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,iVar7);
        goto LAB_00264357;
      }
      for (; local_f0 = lVar2, local_c8 = lVar3, local_b8 = plVar14, lVar12 != 0;
          lVar12 = lVar12 + -1) {
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar1 = *puVar4;
        *(undefined8 *)(lVar8 + -0x10) = puVar4[-1];
        *(undefined8 *)(lVar8 + -0x18) = 0x2641f7;
        iVar7 = _update(uVar11,plVar14,lVar3,lVar15,&local_d8,uVar1);
        if (iVar7 != 0) goto LAB_002643a3;
        lVar2 = local_f0;
        lVar3 = local_c8;
        plVar14 = local_b8;
        puVar4 = puVar4 + 2;
      }
      uVar11 = *(undefined8 *)(param_1 + 8);
      *(long **)(lVar8 + -0x10) = local_98 + 6;
      *(undefined8 *)(lVar8 + -0x18) = 0x26423d;
      iVar7 = _update(uVar11,plVar14,lVar3,lVar15,&local_d8,lVar2);
      if (iVar7 != 0) goto LAB_002643a3;
      uVar13 = local_dc + 1;
      uVar16 = local_110 + 0x10;
    } while (uVar16 < local_100);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    plVar14 = *(long **)(param_1 + 8);
    param_4 = local_f8;
    param_5 = local_e8;
  }
  puVar5 = local_d0;
  *(undefined8 *)(lVar8 + -8) = 0x2642a3;
  iVar7 = _cccbc_init_internal(plVar14,puVar5,uVar11,local_98);
  lVar12 = local_c0;
  lVar10 = local_c8;
  if (iVar7 == 0) {
    local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffff00000000);
    param_1 = local_c0;
    if (param_4 != 0) {
      plVar14 = (long *)((long)local_98 + *(long *)(local_c0 + 0x10));
      do {
        uVar11 = *(undefined8 *)(*(long *)(lVar12 + 8) + 8);
        local_b8 = plVar14;
        *(undefined8 *)(lVar8 + -8) = 0x2642ee;
        _cc_clear(uVar11,lVar10);
        puVar5 = local_d0;
        plVar14 = &local_a8;
        if (0xf < param_4) {
          plVar14 = param_5;
        }
        uVar11 = *(undefined8 *)(lVar12 + 8);
        *(undefined8 *)(lVar8 + -8) = 1;
        plVar9 = local_b8;
        uVar1 = *(undefined8 *)(lVar8 + -8);
        *(undefined8 *)(lVar8 + -8) = 0x26431d;
        iVar7 = _ccdrbg_generate(uVar11,puVar5,lVar10,uVar1,plVar9,plVar14);
        if (iVar7 != 0) goto LAB_002643ab;
        if (param_4 < 0x10) {
          *(undefined8 *)(lVar8 + -8) = 0x26433d;
          _memcpy(param_5,&local_a8,param_4);
        }
        *(undefined8 *)(lVar8 + -8) = 0x10;
        uVar16 = *(ulong *)(lVar8 + -8);
        if (param_4 < 0x10) {
          uVar16 = param_4;
        }
        param_5 = (long *)((long)param_5 + uVar16);
        param_4 = param_4 - uVar16;
        param_1 = local_c0;
      } while (param_4 != 0);
    }
  }
  else {
LAB_002643ab:
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,iVar7);
    param_1 = local_c0;
  }
LAB_00264357:
  puVar5 = local_d0;
  uVar11 = **(undefined8 **)(param_1 + 8);
  *(undefined8 *)(lVar8 + -8) = 0x26436a;
  _cc_clear(uVar11,puVar5);
  lVar10 = local_c8;
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  *(undefined8 *)(lVar8 + -8) = 0x26437e;
  _cc_clear(uVar11,lVar10);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return (ulong)local_b0 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(lVar8 + -8) = _ccdrbg_df_bc_init_internal;
  ___stack_chk_fail();
}

