// rea decompile_all
// name: _CreateBackwardReferencesNH55
// address: 0x7bade
// body: available
// range: 0x7bade-0x7cb4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7cb48 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH55
               (ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
               int *param_7,ulong *param_8,int *param_9,long *param_10,long *param_11)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  short sVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  char *pcVar26;
  int iVar27;
  char cVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  int *piVar40;
  uint local_e4;
  ulong local_b0;
  ulong local_a0;
  ulong local_90;
  ulong local_80;
  ulong local_70;
  ulong local_68;
  ulong auStack_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = (param_2 - 7) + param_1;
  uVar18 = param_2;
  if (7 < param_1) {
    uVar18 = uVar4;
  }
  lVar35 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar35 = 0x40;
  }
  local_80 = *param_8;
  uVar1 = param_2 + param_1;
  piVar40 = param_9;
  if (uVar1 <= param_2 + 8) {
LAB_0007cb06:
    *param_8 = (local_80 + uVar1) - param_2;
    *param_10 = *param_10 + ((long)piVar40 - (long)param_9 >> 4);
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  uVar39 = (1L << (*(byte *)(param_5 + 8) & 0x3f)) - 0x10;
  lVar7 = *(long *)(param_5 + 0x10);
  local_90 = lVar35 + param_2;
  lVar8 = *(long *)(param_6 + 0x38);
  uVar10 = (uint)param_4;
  lVar3 = param_2 - 1;
  uVar16 = param_2;
LAB_0007bc10:
  uVar32 = uVar1 - uVar16;
  uVar25 = uVar39;
  if (uVar16 < uVar39) {
    uVar25 = uVar16;
  }
  uVar19 = uVar16 & param_4;
  pcVar2 = (char *)(param_3 + uVar19);
  cVar28 = *(char *)(param_3 + uVar19);
  local_b0 = (ulong)*param_7;
  local_a0 = 0x7e4;
  if ((uVar16 - local_b0 < uVar16) &&
     (uVar33 = (ulong)((uint)(uVar16 - local_b0) & uVar10), cVar28 == *(char *)(param_3 + uVar33)))
  {
    lVar30 = uVar33 + param_3;
    if (7 < uVar32) {
      uVar33 = uVar32 & 0xfffffffffffffff8;
      pcVar26 = pcVar2 + uVar33;
      lVar34 = 0;
      uVar21 = 0;
LAB_0007bc9d:
      uVar37 = *(ulong *)(lVar30 + uVar21 * 8);
      if (*(ulong *)(pcVar2 + uVar21 * 8) == uVar37) goto code_r0x0007bcae;
      uVar37 = uVar37 ^ *(ulong *)(pcVar2 + uVar21 * 8);
      uVar33 = 0;
      if (uVar37 != 0) {
        for (; (uVar37 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
        }
      }
      local_70 = (uVar33 >> 3 & 0x1fffffff) - lVar34;
      goto LAB_0007c69f;
    }
    uVar33 = 0;
    pcVar26 = pcVar2;
LAB_0007cac1:
    uVar21 = uVar32 & 7;
    local_70 = uVar33;
    if (uVar21 != 0) {
      uVar37 = uVar33 | uVar21;
      do {
        local_70 = uVar33;
        if (*(char *)(lVar30 + uVar33) != *pcVar26) break;
        pcVar26 = pcVar26 + 1;
        uVar33 = uVar33 + 1;
        uVar21 = uVar21 - 1;
        local_70 = uVar37;
      } while (uVar21 != 0);
    }
LAB_0007c69f:
    if ((local_70 < 4) || (uVar33 = local_70 * 0x87 + 0x78f, uVar33 < 0x7e5)) {
      local_b0 = 0;
      local_70 = 0;
    }
    else {
      cVar28 = pcVar2[local_70];
      local_a0 = uVar33;
    }
  }
  else {
    local_b0 = 0;
    local_70 = 0;
  }
  uVar24 = (uint)((ulong)(*(long *)(param_3 + uVar19) * 0x35a7bd1e35a7bd00) >> 0x2c);
  lVar14 = 0;
  lVar30 = 0;
  lVar34 = 1;
  do {
    auStack_58[lVar14] = lVar30 * 8 + (ulong)uVar24 & 0xfffff;
    auStack_58[lVar14 + 1] = lVar34 * 8 + (ulong)uVar24 & 0xfffff;
    lVar14 = lVar14 + 2;
    lVar30 = lVar30 + 2;
    lVar34 = lVar34 + 2;
  } while (lVar14 != 4);
  uVar24 = (uint)uVar16;
  uVar33 = (ulong)((uint)uVar32 & 7);
  uVar19 = uVar32 & 0xfffffffffffffff8;
  lVar30 = 0;
  do {
    uVar23 = *(uint *)(lVar8 + auStack_58[lVar30] * 4);
    lVar34 = (ulong)(uVar10 & uVar23) + param_3;
    if (((cVar28 == *(char *)(local_70 + lVar34)) && (uVar16 != uVar23)) &&
       (uVar21 = uVar16 - uVar23, uVar21 <= uVar25)) {
      if (7 < uVar32) {
        lVar14 = 0;
        uVar37 = 0;
LAB_0007bdc2:
        uVar38 = *(ulong *)(lVar34 + uVar37 * 8);
        if (*(ulong *)(pcVar2 + uVar37 * 8) == uVar38) goto code_r0x0007bdcf;
        uVar38 = uVar38 ^ *(ulong *)(pcVar2 + uVar37 * 8);
        uVar37 = 0;
        if (uVar38 != 0) {
          for (; (uVar38 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
          }
        }
        uVar37 = (uVar37 >> 3 & 0x1fffffff) - lVar14;
        goto LAB_0007be13;
      }
      pcVar26 = pcVar2;
      uVar38 = 0;
LAB_0007be6d:
      uVar37 = uVar38;
      if (uVar33 != 0) {
        uVar29 = uVar33 | uVar38;
        uVar36 = uVar33;
        do {
          uVar37 = uVar38;
          if (*(char *)(lVar34 + uVar38) != *pcVar26) break;
          pcVar26 = pcVar26 + 1;
          uVar38 = uVar38 + 1;
          uVar36 = uVar36 - 1;
          uVar37 = uVar29;
        } while (uVar36 != 0);
      }
LAB_0007be13:
      if (3 < uVar37) {
        iVar20 = 0x1f;
        if ((uint)uVar21 != 0) {
          for (; (uint)uVar21 >> iVar20 == 0; iVar20 = iVar20 + -1) {
          }
        }
        uVar38 = (ulong)(iVar20 * -0x1e + 0x780) + uVar37 * 0x87;
        if (local_a0 < uVar38) {
          cVar28 = pcVar2[uVar37];
          local_70 = uVar37;
          local_b0 = uVar21;
          local_a0 = uVar38;
        }
      }
    }
    lVar30 = lVar30 + 1;
  } while (lVar30 != 4);
  *(uint *)(lVar8 + *(long *)((long)auStack_58 + (ulong)(uVar24 & 0x18)) * 4) = uVar24;
  if (0x1f < uVar32 && (uVar16 & 3) == 0) {
    uVar21 = *(ulong *)(param_6 + 0x50);
    if (uVar21 <= uVar16) {
      uVar23 = *(uint *)(param_6 + 0x40);
      iVar20 = *(int *)(param_6 + 0x5c);
      iVar27 = *(int *)(param_6 + 0x60);
LAB_0007bef9:
      uVar13 = uVar23 & 0x3fffffff;
      bVar17 = *(byte *)(param_3 + (uVar21 & param_4));
      bVar5 = *(byte *)(param_3 + (uVar21 + 0x20 & param_4));
      if (uVar13 < 0x1000000) {
        uVar6 = *(uint *)(*(long *)(param_6 + 0x48) + (ulong)uVar13 * 4);
        *(int *)(*(long *)(param_6 + 0x48) + (ulong)uVar13 * 4) = (int)uVar21;
        if ((uVar21 == uVar16) && (uVar6 != 0xffffffff)) {
          uVar13 = uVar24 - uVar6;
          if (uVar13 <= uVar25) {
            lVar30 = (ulong)(uVar6 & uVar10) + param_3;
            lVar34 = 0;
            uVar37 = 0;
LAB_0007bf8e:
            uVar38 = *(ulong *)(lVar30 + uVar37 * 8);
            if (*(ulong *)(pcVar2 + uVar37 * 8) == uVar38) goto code_r0x0007bf9b;
            uVar38 = uVar38 ^ *(ulong *)(pcVar2 + uVar37 * 8);
            uVar37 = 0;
            if (uVar38 != 0) {
              for (; (uVar38 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
              }
            }
            uVar38 = (uVar37 >> 3 & 0x1fffffff) - lVar34;
            goto LAB_0007bfe4;
          }
        }
      }
      goto LAB_0007bf54;
    }
    goto LAB_0007c054;
  }
  goto LAB_0007c067;
code_r0x0007bcae:
  uVar21 = uVar21 + 1;
  lVar34 = lVar34 + -8;
  if (uVar32 >> 3 == uVar21) goto LAB_0007cac1;
  goto LAB_0007bc9d;
code_r0x0007bdcf:
  uVar37 = uVar37 + 1;
  lVar14 = lVar14 + -8;
  pcVar26 = pcVar2 + uVar19;
  uVar38 = uVar19;
  if (uVar32 >> 3 == uVar37) goto LAB_0007be6d;
  goto LAB_0007bdc2;
code_r0x0007bf9b:
  uVar37 = uVar37 + 1;
  lVar34 = lVar34 + -8;
  uVar38 = uVar19;
  uVar36 = uVar19;
  uVar29 = uVar33;
  if (uVar32 >> 3 == uVar37) goto joined_r0x0007bfb2;
  goto LAB_0007bf8e;
joined_r0x0007bfb2:
  for (; (uVar29 != 0 && (uVar38 = uVar36, *(char *)(lVar30 + uVar36) == pcVar2[uVar36]));
      uVar36 = uVar36 + 1) {
    uVar38 = uVar32;
    uVar29 = uVar29 - 1;
  }
LAB_0007bfe4:
  if ((3 < uVar38) && (local_70 < uVar38)) {
    iVar31 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar31 == 0; iVar31 = iVar31 + -1) {
      }
    }
    uVar37 = (ulong)(iVar31 * -0x1e + 0x780) + uVar38 * 0x87;
    if (local_a0 < uVar37) {
      local_b0 = (ulong)uVar13;
      local_a0 = uVar37;
      local_70 = uVar38;
    }
  }
LAB_0007bf54:
  uVar23 = ~(uint)bVar17 * iVar27 + (uint)bVar5 + uVar23 * iVar20 + 1;
  uVar21 = uVar21 + 4;
  if (uVar16 < uVar21) goto LAB_0007c03a;
  goto LAB_0007bef9;
LAB_0007c03a:
  *(uint *)(param_6 + 0x40) = uVar23;
LAB_0007c054:
  *(ulong *)(param_6 + 0x50) = uVar16 + 4;
LAB_0007c067:
  if (0x7e4 < local_a0) {
    iVar20 = *param_7;
    uVar25 = (lVar3 + param_1) - uVar16;
    local_e4 = 0;
LAB_0007c0a1:
    uVar33 = uVar25 >> 3;
    uVar32 = uVar32 - 1;
    uVar19 = local_70 - 1;
    if (uVar32 <= local_70 - 1) {
      uVar19 = uVar32;
    }
    if (4 < *(int *)(param_5 + 4)) {
      uVar19 = 0;
    }
    uVar21 = uVar16 + 1;
    uVar37 = uVar39;
    if (uVar21 < uVar39) {
      uVar37 = uVar21;
    }
    pcVar2 = (char *)(param_3 + (uVar21 & param_4));
    cVar28 = pcVar2[uVar19];
    uVar38 = uVar21 - (long)iVar20;
    local_90 = 0x7e4;
    if ((uVar38 < uVar21) &&
       (lVar30 = (ulong)((uint)uVar38 & uVar10) + param_3, cVar28 == *(char *)(uVar19 + lVar30))) {
      if (7 < uVar32) {
        lVar34 = 0;
        uVar38 = 0;
LAB_0007c137:
        uVar36 = *(ulong *)(lVar30 + uVar38 * 8);
        if (*(ulong *)(pcVar2 + uVar38 * 8) == uVar36) goto code_r0x0007c145;
        uVar36 = uVar36 ^ *(ulong *)(pcVar2 + uVar38 * 8);
        uVar38 = 0;
        if (uVar36 != 0) {
          for (; (uVar36 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
          }
        }
        uVar38 = (uVar38 >> 3 & 0x1fffffff) - lVar34;
        goto LAB_0007c17b;
      }
      uVar38 = 0;
      pcVar26 = pcVar2;
      goto LAB_0007c5ab;
    }
    goto LAB_0007c1bc;
  }
  local_80 = local_80 + 1;
  param_2 = uVar16 + 1;
  if (local_90 < param_2) {
    if ((uint)((int)lVar35 * 4) + local_90 < param_2) {
      uVar25 = uVar16 + 0x11;
      if (uVar4 <= uVar16 + 0x11) {
        uVar25 = uVar4;
      }
      for (; param_2 < uVar25; param_2 = param_2 + 4) {
        *(uint *)(lVar8 + (ulong)((uint)((ulong)(*(long *)(param_3 + (param_2 & param_4)) *
                                                0x35a7bd1e35a7bd00) >> 0x2c) +
                                  ((uint)param_2 & 0x18) & 0xfffff) * 4) = (uint)param_2;
        local_80 = local_80 + 4;
      }
    }
    else {
      uVar25 = uVar16 + 9;
      if (uVar4 <= uVar16 + 9) {
        uVar25 = uVar4;
      }
      for (; param_2 < uVar25; param_2 = param_2 + 2) {
        *(uint *)(lVar8 + (ulong)((uint)((ulong)(*(long *)(param_3 + (param_2 & param_4)) *
                                                0x35a7bd1e35a7bd00) >> 0x2c) +
                                  ((uint)param_2 & 0x18) & 0xfffff) * 4) = (uint)param_2;
        local_80 = local_80 + 2;
      }
    }
  }
  goto LAB_0007ca43;
code_r0x0007c145:
  uVar38 = uVar38 + 1;
  lVar34 = lVar34 + -8;
  if (uVar33 == uVar38) goto code_r0x0007c155;
  goto LAB_0007c137;
code_r0x0007c155:
  uVar38 = -lVar34;
  pcVar26 = pcVar2 + -lVar34;
LAB_0007c5ab:
  uVar36 = uVar32 & 7;
  for (; (uVar36 != 0 && (*(char *)(lVar30 + uVar38) == *pcVar26)); uVar38 = uVar38 + 1) {
    pcVar26 = pcVar26 + 1;
    uVar36 = uVar36 - 1;
  }
LAB_0007c17b:
  if (uVar38 < 4) {
    local_68 = 0;
  }
  else {
    uVar36 = uVar38 * 0x87 + 0x78f;
    if (uVar36 < 0x7e5) {
LAB_0007c1bc:
      local_68 = 0;
    }
    else {
      cVar28 = pcVar2[uVar38];
      uVar19 = uVar38;
      local_90 = uVar36;
      local_68 = (long)iVar20;
    }
  }
  uVar24 = (uint)((ulong)(*(long *)(param_3 + (uVar21 & param_4)) * 0x35a7bd1e35a7bd00) >> 0x2c);
  lVar14 = 0;
  lVar30 = 0;
  lVar34 = 1;
  do {
    auStack_58[lVar14] = lVar30 * 8 + (ulong)uVar24 & 0xfffff;
    auStack_58[lVar14 + 1] = lVar34 * 8 + (ulong)uVar24 & 0xfffff;
    lVar14 = lVar14 + 2;
    lVar30 = lVar30 + 2;
    lVar34 = lVar34 + 2;
  } while (lVar14 != 4);
  uVar24 = (uint)uVar21;
  uVar38 = (ulong)((uint)uVar32 & 7);
  lVar30 = 0;
LAB_0007c233:
  uVar23 = *(uint *)(lVar8 + auStack_58[lVar30] * 4);
  lVar34 = (ulong)(uVar10 & uVar23) + param_3;
  if (((cVar28 == *(char *)(uVar19 + lVar34)) && (uVar21 != uVar23)) &&
     (uVar36 = uVar21 - uVar23, uVar36 <= uVar37)) {
    uVar29 = uVar38;
    if (7 < uVar32) {
      lVar14 = 0;
      uVar15 = 0;
LAB_0007c27d:
      uVar22 = *(ulong *)(lVar34 + uVar15 * 8);
      if (*(ulong *)(pcVar2 + uVar15 * 8) == uVar22) goto code_r0x0007c28b;
      uVar22 = uVar22 ^ *(ulong *)(pcVar2 + uVar15 * 8);
      uVar29 = 0;
      if (uVar22 != 0) {
        for (; (uVar22 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
        }
      }
      uVar15 = (uVar29 >> 3 & 0x1fffffff) - lVar14;
      goto LAB_0007c2c2;
    }
    uVar15 = 0;
    pcVar26 = pcVar2;
    goto joined_r0x0007c329;
  }
  goto LAB_0007c307;
code_r0x0007c28b:
  uVar15 = uVar15 + 1;
  lVar14 = lVar14 + -8;
  if (uVar33 == uVar15) goto code_r0x0007c29b;
  goto LAB_0007c27d;
code_r0x0007c29b:
  uVar15 = -lVar14;
  pcVar26 = pcVar2 + -lVar14;
joined_r0x0007c329:
  for (; (uVar29 != 0 && (*(char *)(lVar34 + uVar15) == *pcVar26)); uVar15 = uVar15 + 1) {
    uVar29 = uVar29 - 1;
    pcVar26 = pcVar26 + 1;
  }
LAB_0007c2c2:
  if (3 < uVar15) {
    iVar27 = 0x1f;
    if ((uint)uVar36 != 0) {
      for (; (uint)uVar36 >> iVar27 == 0; iVar27 = iVar27 + -1) {
      }
    }
    uVar29 = (ulong)(iVar27 * -0x1e + 0x780) + uVar15 * 0x87;
    if (local_90 < uVar29) {
      cVar28 = pcVar2[uVar15];
      uVar19 = uVar15;
      local_90 = uVar29;
      local_68 = uVar36;
    }
  }
LAB_0007c307:
  lVar30 = lVar30 + 1;
  if (lVar30 == 4) goto LAB_0007c340;
  goto LAB_0007c233;
LAB_0007c340:
  *(uint *)(lVar8 + *(long *)((long)auStack_58 + (ulong)(uVar24 & 0x18)) * 4) = uVar24;
  if (uVar32 < 0x20 || (uVar21 & 3) != 0) goto LAB_0007c51e;
  uVar36 = *(ulong *)(param_6 + 0x50);
  if (uVar36 <= uVar21) {
    uVar23 = *(uint *)(param_6 + 0x40);
    iVar27 = *(int *)(param_6 + 0x5c);
    iVar31 = *(int *)(param_6 + 0x60);
LAB_0007c3b0:
    uVar13 = uVar23 & 0x3fffffff;
    bVar17 = *(byte *)(param_3 + (uVar36 & param_4));
    bVar5 = *(byte *)(param_3 + (uVar36 + 0x20 & param_4));
    if (uVar13 < 0x1000000) {
      uVar6 = *(uint *)(*(long *)(param_6 + 0x48) + (ulong)uVar13 * 4);
      *(int *)(*(long *)(param_6 + 0x48) + (ulong)uVar13 * 4) = (int)uVar36;
      if ((uVar36 == uVar21) && (uVar6 != 0xffffffff)) {
        uVar13 = uVar24 - uVar6;
        if (uVar13 <= uVar37) {
          lVar30 = (ulong)(uVar6 & uVar10) + param_3;
          lVar34 = 0;
          uVar29 = 0;
LAB_0007c43e:
          uVar15 = *(ulong *)(lVar30 + uVar29 * 8);
          if (*(ulong *)(pcVar2 + uVar29 * 8) == uVar15) goto code_r0x0007c44c;
          uVar15 = uVar15 ^ *(ulong *)(pcVar2 + uVar29 * 8);
          uVar29 = 0;
          if (uVar15 != 0) {
            for (; (uVar15 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
            }
          }
          uVar29 = (uVar29 >> 3 & 0x1fffffff) - lVar34;
          goto LAB_0007c49d;
        }
      }
    }
    goto LAB_0007c403;
  }
  goto LAB_0007c50b;
code_r0x0007c44c:
  uVar29 = uVar29 + 1;
  lVar34 = lVar34 + -8;
  if (uVar33 == uVar29) goto code_r0x0007c45c;
  goto LAB_0007c43e;
code_r0x0007c45c:
  uVar15 = uVar38;
  for (uVar29 = -lVar34; (uVar15 != 0 && (*(char *)(lVar30 + uVar29) == pcVar2[uVar29]));
      uVar29 = uVar29 + 1) {
    uVar15 = uVar15 - 1;
  }
LAB_0007c49d:
  if ((3 < uVar29) && (uVar19 < uVar29)) {
    iVar9 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    uVar15 = (ulong)(iVar9 * -0x1e + 0x780) + uVar29 * 0x87;
    if (local_90 < uVar15) {
      uVar19 = uVar29;
      local_90 = uVar15;
      local_68 = (ulong)uVar13;
    }
  }
LAB_0007c403:
  uVar23 = ~(uint)bVar17 * iVar31 + (uint)bVar5 + uVar23 * iVar27 + 1;
  uVar36 = uVar36 + 4;
  if (uVar21 < uVar36) goto LAB_0007c4ee;
  goto LAB_0007c3b0;
LAB_0007c4ee:
  *(uint *)(param_6 + 0x40) = uVar23;
LAB_0007c50b:
  *(ulong *)(param_6 + 0x50) = uVar16 + 5;
LAB_0007c51e:
  uVar33 = uVar16;
  if ((local_90 < local_a0 + 0xaf) ||
     (local_80 = local_80 + 1, local_b0 = local_68, local_70 = uVar19, uVar33 = uVar21, 2 < local_e4
     )) goto LAB_0007c732;
  uVar19 = uVar16 + 9;
  local_e4 = local_e4 + 1;
  uVar25 = uVar25 - 1;
  local_a0 = local_90;
  uVar16 = uVar21;
  if (uVar1 <= uVar19) goto LAB_0007c732;
  goto LAB_0007c0a1;
LAB_0007c732:
  uVar16 = uVar33 + lVar7;
  if (uVar39 <= uVar16) {
    uVar16 = uVar39;
  }
  iVar27 = (int)local_70;
  iVar20 = (int)local_80;
  if (uVar16 < local_b0) {
LAB_0007c75f:
    uVar25 = local_b0 + 0xf;
LAB_0007c763:
    if ((local_b0 <= uVar16) && (uVar25 != 0)) {
      param_7[3] = param_7[2];
      *(undefined8 *)(param_7 + 1) = *(undefined8 *)param_7;
      *param_7 = (int)local_b0;
    }
    *piVar40 = iVar20;
    piVar40[1] = iVar27;
    uVar16 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
    iVar31 = 0;
    if (uVar16 <= uVar25) {
      bVar17 = (byte)*(uint *)(param_5 + 0x40);
      uVar32 = ((uVar25 - *(uint *)(param_5 + 0x44)) + (4L << (bVar17 & 0x3f))) - 0x10;
      uVar24 = 0x1f;
      uVar23 = (uint)uVar32;
      if (uVar23 != 0) {
        for (; uVar23 >> uVar24 == 0; uVar24 = uVar24 - 1) {
        }
      }
      uVar24 = (uVar24 ^ 0xffffffe0) + 0x1f;
      uVar19 = (ulong)((uVar32 >> ((ulong)uVar24 & 0x3f) & 1) != 0);
      lVar30 = (ulong)uVar24 - (ulong)*(uint *)(param_5 + 0x40);
      uVar25 = (~(-1 << (bVar17 & 0x1f)) & uVar23) + uVar16 +
               (uVar19 + lVar30 * 2 + 0xfffe << (bVar17 & 0x3f)) | lVar30 * 0x400;
      iVar31 = (int)(uVar32 - (uVar19 + 2 << ((byte)uVar24 & 0x3f)) >> (bVar17 & 0x3f));
    }
  }
  else {
    if (local_b0 != (long)*param_7) {
      uVar25 = 1;
      if (local_b0 != (long)param_7[1]) {
        uVar25 = (local_b0 + 3) - (long)*param_7;
        if (uVar25 < 7) {
          bVar17 = (byte)((int)uVar25 << 2);
          uVar24 = 0x9750468;
        }
        else {
          uVar25 = (local_b0 + 3) - (long)param_7[1];
          if (6 < uVar25) {
            uVar25 = 2;
            if ((local_b0 != (long)param_7[2]) && (uVar25 = 3, local_b0 != (long)param_7[3]))
            goto LAB_0007c75f;
            goto LAB_0007c763;
          }
          bVar17 = (byte)((int)uVar25 << 2);
          uVar24 = 0xfdb1ace;
        }
        uVar25 = (ulong)(uVar24 >> (bVar17 & 0x1f) & 0xf);
      }
      goto LAB_0007c763;
    }
    *piVar40 = iVar20;
    piVar40[1] = iVar27;
    uVar25 = 0;
    iVar31 = 0;
  }
  *(short *)((long)piVar40 + 0xe) = (short)uVar25;
  piVar40[2] = iVar31;
  if (local_80 < 6) {
    uVar16 = local_80 & 0xffffffff;
  }
  else if (local_80 < 0x82) {
    uVar24 = 0x1f;
    uVar23 = (uint)(local_80 - 2);
    if (uVar23 != 0) {
      for (; uVar23 >> uVar24 == 0; uVar24 = uVar24 - 1) {
      }
    }
    uVar16 = (ulong)((int)(local_80 - 2 >> ((char)(uVar24 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                     (uVar24 ^ 0xffffffe0) * 2 + 0x40);
  }
  else if (local_80 < 0x842) {
    uVar24 = 0x1f;
    if (iVar20 - 0x42U != 0) {
      for (; iVar20 - 0x42U >> uVar24 == 0; uVar24 = uVar24 - 1) {
      }
    }
    uVar16 = (ulong)((uVar24 ^ 0xffe0) + 0x2a);
  }
  else {
    uVar16 = 0x15;
    if (0x1841 < local_80) {
      uVar16 = (ulong)(ushort)(0x17 - (local_80 < 0x5842));
    }
  }
  uVar32 = (ulong)iVar27;
  if (uVar32 < 10) {
    uVar24 = iVar27 - 2;
  }
  else if (uVar32 < 0x86) {
    uVar24 = 0x1f;
    uVar23 = (uint)(uVar32 - 6);
    if (uVar23 != 0) {
      for (; uVar23 >> uVar24 == 0; uVar24 = uVar24 - 1) {
      }
    }
    uVar24 = (int)(uVar32 - 6 >> ((char)(uVar24 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
             (uVar24 ^ 0xffffffe0) * 2 + 0x42;
  }
  else {
    uVar24 = 0x17;
    if (uVar32 < 0x846) {
      uVar24 = 0x1f;
      if (iVar27 - 0x46U != 0) {
        for (; iVar27 - 0x46U >> uVar24 == 0; uVar24 = uVar24 - 1) {
        }
      }
      uVar24 = (uVar24 ^ 0xffe0) + 0x2c;
    }
  }
  uVar11 = (ushort)uVar24;
  sVar12 = (uVar11 & 7) + ((ushort)uVar16 & 7) * 8;
  if ((((uVar25 & 0x3ff) == 0) && ((ushort)uVar16 < 8)) && (uVar11 < 0x10)) {
    if (7 < uVar11) {
      sVar12 = sVar12 + 0x40;
    }
  }
  else {
    iVar20 = (int)((uVar16 & 0xffff) >> 3) * 3 + ((uVar24 & 0xffff) >> 3);
    sVar12 = sVar12 + ((ushort)(0x520d40 >> ((char)iVar20 * '\x02' & 0x1fU)) & 0xc0) +
                      (short)iVar20 * 0x40 + 0x40;
  }
  *(short *)(piVar40 + 3) = sVar12;
  *param_11 = *param_11 + local_80;
  param_2 = uVar33 + local_70;
  uVar16 = uVar18;
  if (param_2 < uVar18) {
    uVar16 = param_2;
  }
  uVar25 = uVar33 + 2;
  if (local_b0 < local_70 >> 2) {
    uVar32 = param_2 + local_b0 * -4;
    if (uVar32 < uVar25) {
      uVar32 = uVar25;
    }
    uVar25 = uVar32;
    if (uVar16 < uVar32) {
      uVar25 = uVar16;
    }
  }
  local_90 = lVar35 + local_70 * 2 + uVar33;
  piVar40 = piVar40 + 4;
  if (uVar25 < uVar16) {
    do {
      *(uint *)(lVar8 + (ulong)((uint)((ulong)(*(long *)(param_3 + (uVar25 & param_4)) *
                                              0x35a7bd1e35a7bd00) >> 0x2c) + ((uint)uVar25 & 0x18) &
                               0xfffff) * 4) = (uint)uVar25;
      uVar25 = uVar25 + 1;
    } while (uVar16 != uVar25);
    local_80 = 0;
  }
  else {
    local_80 = 0;
  }
LAB_0007ca43:
  uVar16 = param_2;
  if (uVar1 <= param_2 + 8) goto LAB_0007cb06;
  goto LAB_0007bc10;
}

