// rea decompile_all
// name: _CreateBackwardReferencesNH4
// address: 0x1f1d67
// body: available
// range: 0x1f1d67-0x1f2e04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f2e00 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH4
               (ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
               int *param_7,ulong *param_8,uint *param_9,long *param_10,long *param_11)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ushort uVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  int *piVar22;
  short sVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  int iVar36;
  int iVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong local_b0;
  uint *local_a0;
  ulong local_98;
  ulong local_90;
  long local_78;
  ulong local_70;
  ulong local_60;
  ulong auStack_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = (param_2 - 7) + param_1;
  uVar16 = param_2;
  if (7 < param_1) {
    uVar16 = uVar4;
  }
  lVar17 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar17 = 0x40;
  }
  uVar35 = *param_8;
  uVar1 = param_2 + param_1;
  if (uVar1 <= param_2 + 8) {
    local_a0 = param_9;
LAB_001f2dbb:
    *param_8 = (uVar35 + uVar1) - param_2;
    *param_10 = *param_10 + ((long)local_a0 - (long)param_9 >> 4);
    if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
  uVar19 = (1L << (*(byte *)(param_5 + 8) & 0x3f)) - 0x10;
  lVar6 = *(long *)(param_5 + 0x10);
  uVar40 = lVar17 + param_2;
  lVar7 = *(long *)(param_6 + 0x38);
  uVar8 = (uint)param_4;
  lVar3 = param_2 - 1;
  local_a0 = param_9;
  uVar13 = param_2;
LAB_001f1e7e:
  local_70 = uVar1 - uVar13;
  uVar12 = uVar19;
  if (uVar13 < uVar19) {
    uVar12 = uVar13;
  }
  uVar39 = lVar6 + uVar13;
  if (uVar19 <= lVar6 + uVar13) {
    uVar39 = uVar19;
  }
  uVar28 = uVar13 & param_4;
  piVar2 = (int *)(param_3 + uVar28);
  cVar10 = *(char *)(param_3 + uVar28);
  local_90 = (ulong)*param_7;
  local_98 = 0x7e4;
  if ((uVar13 - local_90 < uVar13) &&
     (uVar30 = (ulong)((uint)(uVar13 - local_90) & uVar8), cVar10 == *(char *)(param_3 + uVar30))) {
    lVar34 = uVar30 + param_3;
    if (7 < local_70) {
      uVar30 = local_70 & 0xfffffffffffffff8;
      piVar22 = (int *)((long)piVar2 + uVar30);
      lVar24 = 0;
      uVar31 = 0;
LAB_001f1f29:
      uVar26 = *(ulong *)(lVar34 + uVar31 * 8);
      if (*(ulong *)(piVar2 + uVar31 * 2) == uVar26) goto code_r0x001f1f36;
      uVar26 = uVar26 ^ *(ulong *)(piVar2 + uVar31 * 2);
      uVar30 = 0;
      if (uVar26 != 0) {
        for (; (uVar26 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
        }
      }
      uVar31 = (uVar30 >> 3 & 0x1fffffff) - lVar24;
      goto LAB_001f1f68;
    }
    uVar30 = 0;
    piVar22 = piVar2;
LAB_001f2d48:
    uVar26 = local_70 & 7;
    uVar31 = uVar30;
    if (uVar26 != 0) {
      uVar27 = uVar30 | uVar26;
      do {
        uVar31 = uVar30;
        if (*(char *)(lVar34 + uVar30) != (char)*piVar22) break;
        piVar22 = (int *)((long)piVar22 + 1);
        uVar30 = uVar30 + 1;
        uVar26 = uVar26 - 1;
        uVar31 = uVar27;
      } while (uVar26 != 0);
    }
LAB_001f1f68:
    if ((uVar31 < 4) || (uVar30 = uVar31 * 0x87 + 0x78f, uVar30 < 0x7e5)) goto LAB_001f1f9c;
    cVar10 = *(char *)((long)piVar2 + uVar31);
    local_98 = uVar30;
  }
  else {
LAB_001f1f9c:
    local_90 = 0;
    uVar31 = 0;
  }
  uVar30 = *(ulong *)(param_5 + 0x50);
  uVar15 = (uint)((ulong)(*(long *)(param_3 + uVar28) * -0x42e1ca5843000000) >> 0x2f);
  lVar20 = 0;
  lVar34 = 0;
  lVar24 = 1;
  do {
    auStack_58[lVar20] = lVar34 * 8 + (ulong)uVar15 & 0x1ffff;
    auStack_58[lVar20 + 1] = lVar24 * 8 + (ulong)uVar15 & 0x1ffff;
    lVar20 = lVar20 + 2;
    lVar34 = lVar34 + 2;
    lVar24 = lVar24 + 2;
  } while (lVar20 != 4);
  uVar15 = (uint)uVar13;
  lVar34 = *(long *)((long)auStack_58 + (ulong)(uVar15 & 0x18));
  uVar28 = (ulong)((uint)local_70 & 7);
  lVar24 = 0;
  do {
    uVar18 = *(uint *)(lVar7 + auStack_58[lVar24] * 4);
    lVar20 = (ulong)(uVar8 & uVar18) + param_3;
    if (((cVar10 == *(char *)(uVar31 + lVar20)) && (uVar13 != uVar18)) &&
       (uVar26 = uVar13 - uVar18, uVar26 <= uVar12)) {
      if (7 < local_70) {
        lVar25 = 0;
        uVar27 = 0;
LAB_001f2087:
        uVar11 = *(ulong *)(lVar20 + uVar27 * 8);
        if (*(ulong *)(piVar2 + uVar27 * 2) == uVar11) goto code_r0x001f2094;
        uVar11 = uVar11 ^ *(ulong *)(piVar2 + uVar27 * 2);
        uVar27 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
          }
        }
        uVar27 = (uVar27 >> 3 & 0x1fffffff) - lVar25;
        goto LAB_001f20d2;
      }
      uVar11 = 0;
      piVar22 = piVar2;
LAB_001f2122:
      uVar27 = uVar11;
      if (uVar28 != 0) {
        uVar32 = uVar28 | uVar11;
        uVar38 = uVar28;
        do {
          uVar27 = uVar11;
          if (*(char *)(lVar20 + uVar11) != (char)*piVar22) break;
          piVar22 = (int *)((long)piVar22 + 1);
          uVar11 = uVar11 + 1;
          uVar38 = uVar38 - 1;
          uVar27 = uVar32;
        } while (uVar38 != 0);
      }
LAB_001f20d2:
      if (3 < uVar27) {
        iVar36 = 0x1f;
        if ((uint)uVar26 != 0) {
          for (; (uint)uVar26 >> iVar36 == 0; iVar36 = iVar36 + -1) {
          }
        }
        uVar11 = (ulong)(iVar36 * -0x1e + 0x780) + uVar27 * 0x87;
        if (local_98 < uVar11) {
          cVar10 = *(char *)((long)piVar2 + uVar27);
          uVar31 = uVar27;
          local_98 = uVar11;
          local_90 = uVar26;
        }
      }
    }
    lVar24 = lVar24 + 1;
  } while (lVar24 != 4);
  iVar36 = 0;
  if (local_98 == 0x7e4) {
    lVar24 = *(long *)(param_6 + 0x30);
    if (*(ulong *)(lVar24 + 8) >> 7 <= *(ulong *)(lVar24 + 0x10)) {
      uVar12 = (ulong)((uint)(*piVar2 * 0x1e35a7bd) >> 0x12);
      lVar20 = *(long *)(param_5 + 0x78);
      *(ulong *)(lVar24 + 8) = *(ulong *)(lVar24 + 8) + 1;
      bVar14 = *(byte *)(lVar20 + uVar12 * 2);
      uVar28 = (ulong)bVar14;
      if ((uVar28 == 0) || (local_70 < uVar28)) goto LAB_001f21c0;
      uVar12 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar12 * 4);
      lVar20 = *(long *)(param_5 + 0x58);
      pcVar21 = (char *)(uVar12 * uVar28 + *(long *)(lVar20 + 0xa8) +
                        (ulong)*(uint *)(lVar20 + 0x20 + uVar28 * 4));
      if (7 < bVar14) {
        uVar26 = (ulong)(bVar14 & 0xfffffff8);
        lVar25 = 0;
        uVar31 = 0;
LAB_001f2217:
        if (*(ulong *)(pcVar21 + uVar31 * 8) == *(ulong *)(piVar2 + uVar31 * 2))
        goto code_r0x001f2224;
        uVar26 = *(ulong *)(piVar2 + uVar31 * 2) ^ *(ulong *)(pcVar21 + uVar31 * 8);
        uVar31 = 0;
        if (uVar26 != 0) {
          for (; (uVar26 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
          }
        }
        uVar31 = (uVar31 >> 3 & 0x1fffffff) - lVar25;
        goto LAB_001f225f;
      }
      uVar26 = 0;
      goto LAB_001f2d7e;
    }
    goto LAB_001f21c0;
  }
  goto LAB_001f22fb;
code_r0x001f1f36:
  uVar31 = uVar31 + 1;
  lVar24 = lVar24 + -8;
  if (local_70 >> 3 == uVar31) goto LAB_001f2d48;
  goto LAB_001f1f29;
code_r0x001f2094:
  uVar27 = uVar27 + 1;
  lVar25 = lVar25 + -8;
  uVar11 = local_70 & 0xfffffffffffffff8;
  piVar22 = (int *)((long)piVar2 + (local_70 & 0xfffffffffffffff8));
  if (local_70 >> 3 == uVar27) goto LAB_001f2122;
  goto LAB_001f2087;
code_r0x001f2224:
  uVar31 = uVar31 + 1;
  lVar25 = lVar25 + -8;
  if (bVar14 >> 3 == uVar31) goto code_r0x001f2230;
  goto LAB_001f2217;
code_r0x001f2230:
  pcVar21 = pcVar21 + -lVar25;
LAB_001f2d7e:
  uVar27 = uVar28 & 7;
  uVar31 = uVar26;
  if ((bVar14 & 7) != 0) {
    uVar11 = uVar26 | uVar27;
    do {
      uVar31 = uVar26;
      if (*(char *)((long)piVar2 + uVar26) != *pcVar21) break;
      pcVar21 = pcVar21 + 1;
      uVar26 = uVar26 + 1;
      uVar27 = uVar27 - 1;
      uVar31 = uVar11;
    } while (uVar27 != 0);
  }
LAB_001f225f:
  if (((uVar31 == 0) || (*(uint *)(param_5 + 100) + uVar31 <= uVar28)) ||
     (local_90 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                                ((char)(uVar28 - uVar31) * '\x06' & 0x3fU)) & 0x3f) +
                  (uVar28 - uVar31) * 4 << (*(byte *)(lVar20 + uVar28) & 0x3f)) +
                 uVar39 + 1 + uVar12, uVar30 < local_90)) {
LAB_001f21c0:
    *(uint *)(lVar7 + lVar34 * 4) = uVar15;
  }
  else {
    iVar36 = 0x1f;
    if ((uint)local_90 != 0) {
      for (; (uint)local_90 >> iVar36 == 0; iVar36 = iVar36 + -1) {
      }
    }
    local_98 = (uVar31 * 0x87 - (ulong)(uint)(iVar36 * 0x1e)) + 0x780;
    if (local_98 < 0x7e4) goto LAB_001f21c0;
    iVar36 = (uint)bVar14 - (int)uVar31;
    *(ulong *)(lVar24 + 0x10) = *(ulong *)(lVar24 + 0x10) + 1;
LAB_001f22fb:
    *(uint *)(lVar7 + lVar34 * 4) = uVar15;
    if (0x7e4 < local_98) {
      iVar5 = *param_7;
      uVar12 = (lVar3 + param_1) - uVar13;
      uVar15 = 0;
LAB_001f2343:
      local_70 = local_70 - 1;
      uVar39 = uVar31 - 1;
      if (local_70 <= uVar31 - 1) {
        uVar39 = local_70;
      }
      if (4 < *(int *)(param_5 + 4)) {
        uVar39 = 0;
      }
      uVar40 = uVar13 + 1;
      uVar28 = uVar19;
      if (uVar40 < uVar19) {
        uVar28 = uVar40;
      }
      local_b0 = lVar6 + uVar13 + 1;
      if (uVar19 <= local_b0) {
        local_b0 = uVar19;
      }
      piVar2 = (int *)(param_3 + (uVar40 & param_4));
      cVar10 = *(char *)(uVar39 + (long)piVar2);
      uVar27 = uVar40 - (long)iVar5;
      uVar26 = 0x7e4;
      if ((uVar27 < uVar40) &&
         (lVar34 = (ulong)((uint)uVar27 & uVar8) + param_3, cVar10 == *(char *)(uVar39 + lVar34))) {
        if (7 < local_70) {
          lVar24 = 0;
          uVar27 = 0;
LAB_001f2412:
          uVar11 = *(ulong *)(lVar34 + uVar27 * 8);
          if (*(ulong *)(piVar2 + uVar27 * 2) == uVar11) goto code_r0x001f241f;
          uVar11 = uVar11 ^ *(ulong *)(piVar2 + uVar27 * 2);
          uVar27 = 0;
          if (uVar11 != 0) {
            for (; (uVar11 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
            }
          }
          uVar27 = (uVar27 >> 3 & 0x1fffffff) - lVar24;
          goto LAB_001f2452;
        }
        uVar27 = 0;
        piVar22 = piVar2;
        goto LAB_001f285c;
      }
      goto LAB_001f248e;
    }
  }
  uVar35 = uVar35 + 1;
  param_2 = uVar13 + 1;
  if (uVar40 < param_2) {
    if ((uint)((int)lVar17 * 4) + uVar40 < param_2) {
      uVar12 = uVar13 + 0x11;
      if (uVar4 <= uVar13 + 0x11) {
        uVar12 = uVar4;
      }
      for (; param_2 < uVar12; param_2 = param_2 + 4) {
        *(uint *)(lVar7 + (ulong)((uint)((ulong)(*(long *)(param_3 + (param_2 & param_4)) *
                                                -0x42e1ca5843000000) >> 0x2f) +
                                  ((uint)param_2 & 0x18) & 0x1ffff) * 4) = (uint)param_2;
        uVar35 = uVar35 + 4;
      }
    }
    else {
      uVar12 = uVar13 + 9;
      if (uVar4 <= uVar13 + 9) {
        uVar12 = uVar4;
      }
      for (; param_2 < uVar12; param_2 = param_2 + 2) {
        *(uint *)(lVar7 + (ulong)((uint)((ulong)(*(long *)(param_3 + (param_2 & param_4)) *
                                                -0x42e1ca5843000000) >> 0x2f) +
                                  ((uint)param_2 & 0x18) & 0x1ffff) * 4) = (uint)param_2;
        uVar35 = uVar35 + 2;
      }
    }
  }
  goto LAB_001f2cc8;
code_r0x001f241f:
  uVar27 = uVar27 + 1;
  lVar24 = lVar24 + -8;
  if (uVar12 >> 3 == uVar27) goto code_r0x001f242f;
  goto LAB_001f2412;
code_r0x001f242f:
  uVar27 = -lVar24;
  piVar22 = (int *)((long)piVar2 - lVar24);
LAB_001f285c:
  uVar11 = local_70 & 7;
  for (; (uVar11 != 0 && (*(char *)(lVar34 + uVar27) == (char)*piVar22)); uVar27 = uVar27 + 1) {
    piVar22 = (int *)((long)piVar22 + 1);
    uVar11 = uVar11 - 1;
  }
LAB_001f2452:
  if (uVar27 < 4) {
    local_60 = 0;
  }
  else {
    uVar11 = uVar27 * 0x87 + 0x78f;
    if (uVar11 < 0x7e5) {
LAB_001f248e:
      local_60 = 0;
    }
    else {
      cVar10 = *(char *)((long)piVar2 + uVar27);
      uVar26 = uVar11;
      uVar39 = uVar27;
      local_60 = (long)iVar5;
    }
  }
  uVar18 = (uint)((ulong)(*(long *)(param_3 + (uVar40 & param_4)) * -0x42e1ca5843000000) >> 0x2f);
  lVar20 = 0;
  lVar34 = 0;
  lVar24 = 1;
  do {
    auStack_58[lVar20] = lVar34 * 8 + (ulong)uVar18 & 0x1ffff;
    auStack_58[lVar20 + 1] = lVar24 * 8 + (ulong)uVar18 & 0x1ffff;
    lVar20 = lVar20 + 2;
    lVar34 = lVar34 + 2;
    lVar24 = lVar24 + 2;
  } while (lVar20 != 4);
  lVar34 = *(long *)((long)auStack_58 + (ulong)((uint)uVar40 & 0x18));
  uVar27 = (ulong)((uint)local_70 & 7);
  lVar24 = 0;
LAB_001f2503:
  uVar18 = *(uint *)(lVar7 + auStack_58[lVar24] * 4);
  lVar20 = (ulong)(uVar8 & uVar18) + param_3;
  if (((cVar10 == *(char *)(uVar39 + lVar20)) && (uVar40 != uVar18)) &&
     (uVar11 = uVar40 - uVar18, uVar11 <= uVar28)) {
    uVar38 = uVar27;
    if (7 < local_70) {
      lVar25 = 0;
      uVar32 = 0;
LAB_001f254a:
      uVar33 = *(ulong *)(lVar20 + uVar32 * 8);
      if (*(ulong *)(piVar2 + uVar32 * 2) == uVar33) goto code_r0x001f2557;
      uVar33 = uVar33 ^ *(ulong *)(piVar2 + uVar32 * 2);
      uVar38 = 0;
      if (uVar33 != 0) {
        for (; (uVar33 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
        }
      }
      uVar32 = (uVar38 >> 3 & 0x1fffffff) - lVar25;
      goto LAB_001f2583;
    }
    uVar32 = 0;
    piVar22 = piVar2;
    goto joined_r0x001f25e6;
  }
  goto LAB_001f25ca;
code_r0x001f2557:
  uVar32 = uVar32 + 1;
  lVar25 = lVar25 + -8;
  if (uVar12 >> 3 == uVar32) goto code_r0x001f2567;
  goto LAB_001f254a;
code_r0x001f2567:
  uVar32 = -lVar25;
  piVar22 = (int *)((long)piVar2 - lVar25);
joined_r0x001f25e6:
  for (; (uVar38 != 0 && (*(char *)(lVar20 + uVar32) == (char)*piVar22)); uVar32 = uVar32 + 1) {
    uVar38 = uVar38 - 1;
    piVar22 = (int *)((long)piVar22 + 1);
  }
LAB_001f2583:
  if (3 < uVar32) {
    iVar37 = 0x1f;
    if ((uint)uVar11 != 0) {
      for (; (uint)uVar11 >> iVar37 == 0; iVar37 = iVar37 + -1) {
      }
    }
    uVar38 = (ulong)(iVar37 * -0x1e + 0x780) + uVar32 * 0x87;
    if (uVar26 < uVar38) {
      cVar10 = *(char *)((long)piVar2 + uVar32);
      uVar26 = uVar38;
      uVar39 = uVar32;
      local_60 = uVar11;
    }
  }
LAB_001f25ca:
  lVar24 = lVar24 + 1;
  if (lVar24 == 4) goto LAB_001f25fe;
  goto LAB_001f2503;
LAB_001f25fe:
  iVar37 = 0;
  if (uVar26 != 0x7e4) goto LAB_001f265e;
  lVar24 = *(long *)(param_6 + 0x30);
  uVar26 = 0x7e4;
  if (*(ulong *)(lVar24 + 0x10) < *(ulong *)(lVar24 + 8) >> 7) goto LAB_001f265e;
  uVar28 = (ulong)((uint)(*piVar2 * 0x1e35a7bd) >> 0x12);
  lVar20 = *(long *)(param_5 + 0x78);
  *(ulong *)(lVar24 + 8) = *(ulong *)(lVar24 + 8) + 1;
  bVar14 = *(byte *)(lVar20 + uVar28 * 2);
  uVar27 = (ulong)bVar14;
  if ((uVar27 == 0) || (local_70 < uVar27)) goto LAB_001f265e;
  uVar28 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar28 * 4);
  lVar20 = *(long *)(param_5 + 0x58);
  pcVar21 = (char *)(uVar28 * uVar27 + *(long *)(lVar20 + 0xa8) +
                    (ulong)*(uint *)(lVar20 + 0x20 + uVar27 * 4));
  if (7 < bVar14) {
    uVar11 = (ulong)(bVar14 & 0xfffffff8);
    local_78 = 0;
    uVar38 = 0;
LAB_001f274b:
    if (*(ulong *)(pcVar21 + uVar38 * 8) == *(ulong *)(piVar2 + uVar38 * 2)) goto code_r0x001f2758;
    uVar38 = *(ulong *)(piVar2 + uVar38 * 2) ^ *(ulong *)(pcVar21 + uVar38 * 8);
    uVar11 = 0;
    if (uVar38 != 0) {
      for (; (uVar38 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    uVar38 = (uVar11 >> 3 & 0x1fffffff) - local_78;
    goto LAB_001f2797;
  }
  uVar11 = 0;
  goto LAB_001f2886;
code_r0x001f2758:
  uVar38 = uVar38 + 1;
  local_78 = local_78 + -8;
  if (bVar14 >> 3 == uVar38) goto code_r0x001f2769;
  goto LAB_001f274b;
code_r0x001f2769:
  pcVar21 = pcVar21 + -local_78;
LAB_001f2886:
  uVar32 = uVar27 & 7;
  uVar38 = uVar11;
  if ((bVar14 & 7) != 0) {
    uVar33 = uVar11 | uVar32;
    do {
      uVar38 = uVar11;
      if (*(char *)((long)piVar2 + uVar11) != *pcVar21) break;
      pcVar21 = pcVar21 + 1;
      uVar11 = uVar11 + 1;
      uVar32 = uVar32 - 1;
      uVar38 = uVar33;
    } while (uVar32 != 0);
  }
LAB_001f2797:
  if (((uVar38 != 0) && (uVar27 < *(uint *)(param_5 + 100) + uVar38)) &&
     (uVar28 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar27 - uVar38) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar27 - uVar38) * 4 << (*(byte *)(lVar20 + uVar27) & 0x3f)) +
               local_b0 + 1 + uVar28, uVar28 <= uVar30)) {
    iVar37 = 0x1f;
    if ((uint)uVar28 != 0) {
      for (; (uint)uVar28 >> iVar37 == 0; iVar37 = iVar37 + -1) {
      }
    }
    uVar27 = (uVar38 * 0x87 - (ulong)(uint)(iVar37 * 0x1e)) + 0x780;
    iVar37 = 0;
    if (0x7e3 < uVar27) {
      iVar37 = (uint)bVar14 - (int)uVar38;
      *(ulong *)(lVar24 + 0x10) = *(ulong *)(lVar24 + 0x10) + 1;
      local_60 = uVar28;
      uVar26 = uVar27;
      uVar39 = uVar38;
    }
  }
LAB_001f265e:
  *(uint *)(lVar7 + lVar34 * 4) = (uint)uVar40;
  if (uVar26 < local_98 + 0xaf) {
    local_60 = local_90;
    uVar40 = uVar13;
    uVar39 = uVar31;
    iVar37 = iVar36;
    local_b0 = uVar13 + lVar6;
    if (uVar19 <= uVar13 + lVar6) {
      local_b0 = uVar19;
    }
    goto LAB_001f29c5;
  }
  uVar35 = uVar35 + 1;
  if (2 < uVar15) goto LAB_001f29c5;
  uVar28 = uVar13 + 9;
  uVar15 = uVar15 + 1;
  uVar12 = uVar12 - 1;
  uVar31 = uVar39;
  local_98 = uVar26;
  uVar13 = uVar40;
  local_90 = local_60;
  iVar36 = iVar37;
  if (uVar1 <= uVar28) goto LAB_001f29c5;
  goto LAB_001f2343;
LAB_001f29c5:
  if (local_b0 < local_60) {
LAB_001f29d9:
    uVar13 = local_60 + 0xf;
LAB_001f29dd:
    if ((local_60 <= local_b0) && (uVar13 != 0)) {
      param_7[3] = param_7[2];
      *(undefined8 *)(param_7 + 1) = *(undefined8 *)param_7;
      *param_7 = (int)local_60;
    }
  }
  else {
    if (local_60 != (long)*param_7) {
      uVar13 = 1;
      if (local_60 != (long)param_7[1]) {
        uVar13 = (local_60 + 3) - (long)*param_7;
        if (uVar13 < 7) {
          bVar14 = (byte)((int)uVar13 << 2);
          uVar15 = 0x9750468;
        }
        else {
          uVar13 = (local_60 + 3) - (long)param_7[1];
          if (6 < uVar13) {
            uVar13 = 2;
            if ((local_60 != (long)param_7[2]) && (uVar13 = 3, local_60 != (long)param_7[3]))
            goto LAB_001f29d9;
            goto LAB_001f29dd;
          }
          bVar14 = (byte)((int)uVar13 << 2);
          uVar15 = 0xfdb1ace;
        }
        uVar13 = (ulong)(uVar15 >> (bVar14 & 0x1f) & 0xf);
      }
      goto LAB_001f29dd;
    }
    uVar13 = 0;
  }
  uVar18 = (uint)uVar35;
  *local_a0 = uVar18;
  local_a0[1] = iVar37 << 0x19 | (uint)uVar39;
  uVar12 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
  uVar15 = 0;
  if (uVar12 <= uVar13) {
    bVar14 = (byte)*(uint *)(param_5 + 0x40);
    uVar28 = ((4L << (bVar14 & 0x3f)) + (uVar13 - *(uint *)(param_5 + 0x44))) - 0x10;
    uVar15 = 0x1f;
    uVar29 = (uint)uVar28;
    if (uVar29 != 0) {
      for (; uVar29 >> uVar15 == 0; uVar15 = uVar15 - 1) {
      }
    }
    uVar15 = (uVar15 ^ 0xffffffe0) + 0x1f;
    uVar30 = (ulong)((uVar28 >> ((ulong)uVar15 & 0x3f) & 1) != 0);
    lVar34 = (ulong)uVar15 - (ulong)*(uint *)(param_5 + 0x40);
    uVar13 = (~(-1 << (bVar14 & 0x1f)) & uVar29) + uVar12 +
             (uVar30 + lVar34 * 2 + 0xfffe << (bVar14 & 0x3f)) | lVar34 * 0x400;
    uVar15 = (uint)(uVar28 - (uVar30 + 2 << ((byte)uVar15 & 0x3f)) >> (bVar14 & 0x3f));
  }
  *(short *)((long)local_a0 + 0xe) = (short)uVar13;
  local_a0[2] = uVar15;
  if (5 < uVar35) {
    if (uVar35 < 0x82) {
      uVar15 = 0x1f;
      uVar18 = (uint)(uVar35 - 2);
      if (uVar18 != 0) {
        for (; uVar18 >> uVar15 == 0; uVar15 = uVar15 - 1) {
        }
      }
      uVar18 = (int)(uVar35 - 2 >> ((char)(uVar15 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
               (uVar15 ^ 0xffffffe0) * 2 + 0x40;
    }
    else if (uVar35 < 0x842) {
      uVar15 = 0x1f;
      if (uVar18 - 0x42 != 0) {
        for (; uVar18 - 0x42 >> uVar15 == 0; uVar15 = uVar15 - 1) {
        }
      }
      uVar18 = (uVar15 ^ 0xffe0) + 0x2a;
    }
    else {
      uVar18 = 0x15;
      if (0x1841 < uVar35) {
        uVar18 = (uint)(ushort)(0x17 - (uVar35 < 0x5842));
      }
    }
  }
  uVar15 = iVar37 + (uint)uVar39;
  if (uVar15 < 10) {
    uVar29 = uVar15 - 2;
  }
  else if (uVar15 < 0x86) {
    uVar15 = uVar15 - 6;
    uVar29 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> uVar29 == 0; uVar29 = uVar29 - 1) {
      }
    }
    uVar29 = (uVar15 >> ((char)(uVar29 ^ 0xffffffe0) + 0x1fU & 0x1f)) + (uVar29 ^ 0xffffffe0) * 2 +
             0x42;
  }
  else {
    uVar29 = 0x17;
    if (uVar15 < 0x846) {
      uVar29 = 0x1f;
      if (uVar15 - 0x46 != 0) {
        for (; uVar15 - 0x46 >> uVar29 == 0; uVar29 = uVar29 - 1) {
        }
      }
      uVar29 = (uVar29 ^ 0xffe0) + 0x2c;
    }
  }
  uVar9 = (ushort)uVar29;
  sVar23 = (uVar9 & 7) + ((ushort)uVar18 & 7) * 8;
  if ((((uVar13 & 0x3ff) == 0) && ((ushort)uVar18 < 8)) && (uVar9 < 0x10)) {
    if (7 < uVar9) {
      sVar23 = sVar23 + 0x40;
    }
  }
  else {
    iVar36 = ((uVar18 & 0xffff) >> 3) * 3 + ((uVar29 & 0xffff) >> 3);
    sVar23 = sVar23 + ((ushort)(0x520d40 >> ((char)iVar36 * '\x02' & 0x1fU)) & 0xc0) +
                      (short)iVar36 * 0x40 + 0x40;
  }
  *(short *)(local_a0 + 3) = sVar23;
  *param_11 = *param_11 + uVar35;
  param_2 = uVar40 + uVar39;
  uVar35 = uVar16;
  if (param_2 < uVar16) {
    uVar35 = param_2;
  }
  uVar13 = uVar40 + 2;
  if (local_60 < uVar39 >> 2) {
    uVar12 = param_2 + local_60 * -4;
    if (uVar12 < uVar13) {
      uVar12 = uVar13;
    }
    uVar13 = uVar12;
    if (uVar35 < uVar12) {
      uVar13 = uVar35;
    }
  }
  uVar40 = lVar17 + uVar39 * 2 + uVar40;
  local_a0 = local_a0 + 4;
  if (uVar13 < uVar35) {
    do {
      *(uint *)(lVar7 + (ulong)((uint)((ulong)(*(long *)(param_3 + (uVar13 & param_4)) *
                                              -0x42e1ca5843000000) >> 0x2f) + ((uint)uVar13 & 0x18)
                               & 0x1ffff) * 4) = (uint)uVar13;
      uVar13 = uVar13 + 1;
    } while (uVar35 != uVar13);
    uVar35 = 0;
  }
  else {
    uVar35 = 0;
  }
LAB_001f2cc8:
  uVar13 = param_2;
  if (uVar1 <= param_2 + 8) goto LAB_001f2dbb;
  goto LAB_001f1e7e;
}

