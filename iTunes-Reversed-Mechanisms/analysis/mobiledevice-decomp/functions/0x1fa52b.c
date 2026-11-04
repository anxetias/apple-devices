// rea decompile_all
// name: _CreateBackwardReferencesNH35
// address: 0x1fa52b
// body: available
// range: 0x1fa52b-0x1fb4bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fb4b9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH35
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
  ushort uVar9;
  short sVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  int iVar27;
  char cVar28;
  bool bVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  bool bVar38;
  ulong uVar39;
  uint local_100;
  uint local_dc;
  ulong local_c8;
  int *local_a8;
  ulong local_a0;
  ulong local_90;
  ulong local_80;
  ulong local_70;
  ulong local_60;
  ulong local_50;
  ulong local_48 [3];
  
  local_48[2] = *(ulong *)PTR____stack_chk_guard_004412b8;
  uVar4 = (param_2 - 7) + param_1;
  uVar19 = param_2;
  if (7 < param_1) {
    uVar19 = uVar4;
  }
  lVar36 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar36 = 0x40;
  }
  local_80 = *param_8;
  uVar1 = param_2 + param_1;
  if (uVar1 <= param_2 + 8) {
    local_a8 = param_9;
LAB_001fb470:
    *param_8 = (local_80 + uVar1) - param_2;
    *param_10 = *param_10 + ((long)local_a8 - (long)param_9 >> 4);
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_48[2]) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  uVar39 = (1L << (*(byte *)(param_5 + 8) & 0x3f)) - 0x10;
  lVar7 = *(long *)(param_5 + 0x10);
  local_c8 = lVar36 + param_2;
  lVar8 = *(long *)(param_6 + 0x38);
  lVar3 = param_2 - 1;
  local_a8 = param_9;
  uVar17 = param_2;
LAB_001fa641:
  local_60 = uVar1 - uVar17;
  uVar14 = uVar39;
  if (uVar17 < uVar39) {
    uVar14 = uVar17;
  }
  uVar20 = uVar17 & param_4;
  pcVar2 = (char *)(param_3 + uVar20);
  cVar28 = *(char *)(param_3 + uVar20);
  local_90 = (ulong)*param_7;
  local_a0 = 0x7e4;
  local_100 = (uint)param_4;
  if ((uVar17 - local_90 < uVar17) &&
     (uVar22 = (ulong)((uint)(uVar17 - local_90) & local_100), cVar28 == *(char *)(param_3 + uVar22)
     )) {
    lVar31 = uVar22 + param_3;
    if (7 < local_60) {
      uVar12 = local_60 & 0xfffffffffffffff8;
      pcVar13 = pcVar2 + uVar12;
      lVar32 = 0;
      uVar22 = 0;
LAB_001fa6bc:
      uVar33 = *(ulong *)(lVar31 + uVar22 * 8);
      if (*(ulong *)(pcVar2 + uVar22 * 8) == uVar33) goto code_r0x001fa6cd;
      uVar33 = uVar33 ^ *(ulong *)(pcVar2 + uVar22 * 8);
      uVar22 = 0;
      if (uVar33 != 0) {
        for (; (uVar33 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
        }
      }
      uVar22 = (uVar22 >> 3 & 0x1fffffff) - lVar32;
      goto LAB_001fb14c;
    }
    uVar12 = 0;
    pcVar13 = pcVar2;
LAB_001fb42d:
    uVar33 = local_60 & 7;
    uVar22 = uVar12;
    if (uVar33 != 0) {
      uVar35 = uVar12 | uVar33;
      do {
        uVar22 = uVar12;
        if (*(char *)(lVar31 + uVar12) != *pcVar13) break;
        pcVar13 = pcVar13 + 1;
        uVar12 = uVar12 + 1;
        uVar33 = uVar33 - 1;
        uVar22 = uVar35;
      } while (uVar33 != 0);
    }
LAB_001fb14c:
    if ((uVar22 < 4) || (uVar12 = uVar22 * 0x87 + 0x78f, uVar12 < 0x7e5)) {
      local_90 = 0;
      uVar22 = 0;
    }
    else {
      cVar28 = pcVar2[uVar22];
      local_a0 = uVar12;
    }
  }
  else {
    local_90 = 0;
    uVar22 = 0;
  }
  uVar20 = *(long *)(param_3 + uVar20) * -0x42e1ca5843000000;
  local_48[0] = uVar20 >> 0x30;
  local_48[1] = (ulong)((ushort)(uVar20 >> 0x30) + 8 & 0xffff);
  uVar26 = (uint)uVar17;
  uVar20 = (ulong)((uint)local_60 & 7);
  uVar12 = local_60 & 0xfffffffffffffff8;
  puVar15 = local_48;
  bVar38 = true;
  do {
    bVar29 = bVar38;
    uVar24 = *(uint *)(lVar8 + *puVar15 * 4);
    lVar31 = (ulong)(local_100 & uVar24) + param_3;
    if (((cVar28 == *(char *)(uVar22 + lVar31)) && (uVar17 != uVar24)) &&
       (uVar33 = uVar17 - uVar24, uVar33 <= uVar14)) {
      if (7 < local_60) {
        lVar32 = 0;
        uVar35 = 0;
LAB_001fa79e:
        uVar37 = *(ulong *)(lVar31 + uVar35 * 8);
        if (*(ulong *)(pcVar2 + uVar35 * 8) == uVar37) goto code_r0x001fa7ab;
        uVar37 = uVar37 ^ *(ulong *)(pcVar2 + uVar35 * 8);
        uVar35 = 0;
        if (uVar37 != 0) {
          for (; (uVar37 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
          }
        }
        uVar35 = (uVar35 >> 3 & 0x1fffffff) - lVar32;
        goto LAB_001fa7ec;
      }
      pcVar13 = pcVar2;
      uVar37 = 0;
LAB_001fa84e:
      uVar35 = uVar37;
      if (uVar20 != 0) {
        uVar34 = uVar20 | uVar37;
        uVar25 = uVar20;
        do {
          uVar35 = uVar37;
          if (*(char *)(lVar31 + uVar37) != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          uVar37 = uVar37 + 1;
          uVar25 = uVar25 - 1;
          uVar35 = uVar34;
        } while (uVar25 != 0);
      }
LAB_001fa7ec:
      if (3 < uVar35) {
        iVar21 = 0x1f;
        if ((uint)uVar33 != 0) {
          for (; (uint)uVar33 >> iVar21 == 0; iVar21 = iVar21 + -1) {
          }
        }
        uVar37 = (ulong)(iVar21 * -0x1e + 0x780) + uVar35 * 0x87;
        if (local_a0 < uVar37) {
          cVar28 = pcVar2[uVar35];
          uVar22 = uVar35;
          local_a0 = uVar37;
          local_90 = uVar33;
        }
      }
    }
    puVar15 = local_48 + 1;
    bVar38 = false;
  } while (bVar29);
  *(uint *)(lVar8 + *(long *)((long)local_48 + (ulong)(uVar26 & 8)) * 4) = uVar26;
  if (0x1f < local_60 && (uVar17 & 3) == 0) {
    uVar33 = *(ulong *)(param_6 + 0x50);
    if (uVar33 <= uVar17) {
      uVar24 = *(uint *)(param_6 + 0x40);
      iVar21 = *(int *)(param_6 + 0x5c);
      iVar27 = *(int *)(param_6 + 0x60);
LAB_001fa8d5:
      uVar11 = uVar24 & 0x3fffffff;
      bVar18 = *(byte *)(param_3 + (uVar33 & param_4));
      bVar5 = *(byte *)(param_3 + (uVar33 + 0x20 & param_4));
      if (uVar11 < 0x1000000) {
        uVar6 = *(uint *)(*(long *)(param_6 + 0x48) + (ulong)uVar11 * 4);
        *(int *)(*(long *)(param_6 + 0x48) + (ulong)uVar11 * 4) = (int)uVar33;
        if ((uVar33 == uVar17) && (uVar6 != 0xffffffff)) {
          uVar11 = uVar26 - uVar6;
          if (uVar11 <= uVar14) {
            lVar31 = (ulong)(uVar6 & local_100) + param_3;
            lVar32 = 0;
            uVar35 = 0;
LAB_001fa93a:
            uVar37 = *(ulong *)(lVar31 + uVar35 * 8);
            if (*(ulong *)(pcVar2 + uVar35 * 8) == uVar37) goto code_r0x001fa947;
            uVar37 = uVar37 ^ *(ulong *)(pcVar2 + uVar35 * 8);
            uVar35 = 0;
            if (uVar37 != 0) {
              for (; (uVar37 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
              }
            }
            uVar37 = (uVar35 >> 3 & 0x1fffffff) - lVar32;
            goto LAB_001fa9c3;
          }
        }
      }
      goto LAB_001fa989;
    }
    goto LAB_001faa27;
  }
  goto LAB_001faa2f;
code_r0x001fa6cd:
  uVar22 = uVar22 + 1;
  lVar32 = lVar32 + -8;
  if (local_60 >> 3 == uVar22) goto LAB_001fb42d;
  goto LAB_001fa6bc;
code_r0x001fa7ab:
  uVar35 = uVar35 + 1;
  lVar32 = lVar32 + -8;
  pcVar13 = pcVar2 + uVar12;
  uVar37 = uVar12;
  if (local_60 >> 3 == uVar35) goto LAB_001fa84e;
  goto LAB_001fa79e;
code_r0x001fa947:
  uVar35 = uVar35 + 1;
  lVar32 = lVar32 + -8;
  uVar37 = uVar12;
  uVar25 = uVar12;
  uVar34 = uVar20;
  if (local_60 >> 3 == uVar35) goto joined_r0x001fa95e;
  goto LAB_001fa93a;
joined_r0x001fa95e:
  for (; (uVar34 != 0 && (uVar37 = uVar25, *(char *)(lVar31 + uVar25) == pcVar2[uVar25]));
      uVar25 = uVar25 + 1) {
    uVar37 = local_60;
    uVar34 = uVar34 - 1;
  }
LAB_001fa9c3:
  if ((3 < uVar37) && (uVar22 < uVar37)) {
    iVar30 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar30 == 0; iVar30 = iVar30 + -1) {
      }
    }
    uVar35 = (ulong)(iVar30 * -0x1e + 0x780) + uVar37 * 0x87;
    if (local_a0 < uVar35) {
      uVar22 = uVar37;
      local_a0 = uVar35;
      local_90 = (ulong)uVar11;
    }
  }
LAB_001fa989:
  uVar24 = ~(uint)bVar18 * iVar27 + (uint)bVar5 + uVar24 * iVar21 + 1;
  uVar33 = uVar33 + 4;
  if (uVar17 < uVar33) goto LAB_001faa0e;
  goto LAB_001fa8d5;
LAB_001faa0e:
  *(uint *)(param_6 + 0x40) = uVar24;
LAB_001faa27:
  *(ulong *)(param_6 + 0x50) = uVar17 + 4;
LAB_001faa2f:
  if (0x7e4 < local_a0) {
    uVar14 = (lVar3 + param_1) - uVar17;
    local_dc = 0;
LAB_001faa5f:
    uVar12 = uVar14 >> 3;
    local_60 = local_60 - 1;
    uVar20 = uVar22 - 1;
    if (local_60 <= uVar22 - 1) {
      uVar20 = local_60;
    }
    if (4 < *(int *)(param_5 + 4)) {
      uVar20 = 0;
    }
    uVar33 = uVar17 + 1;
    uVar35 = uVar39;
    if (uVar33 < uVar39) {
      uVar35 = uVar33;
    }
    pcVar2 = (char *)(param_3 + (uVar33 & param_4));
    cVar28 = pcVar2[uVar20];
    local_50 = (ulong)*param_7;
    local_70 = 0x7e4;
    if ((uVar33 <= uVar33 - local_50) ||
       (lVar31 = (ulong)((uint)(uVar33 - local_50) & local_100) + param_3,
       cVar28 != *(char *)(uVar20 + lVar31))) {
      local_50 = 0;
      goto LAB_001fab3d;
    }
    if (7 < local_60) {
      lVar32 = 0;
      uVar37 = 0;
LAB_001faaff:
      uVar25 = *(ulong *)(lVar31 + uVar37 * 8);
      if (*(ulong *)(pcVar2 + uVar37 * 8) == uVar25) goto code_r0x001fab10;
      uVar25 = uVar25 ^ *(ulong *)(pcVar2 + uVar37 * 8);
      uVar37 = 0;
      if (uVar25 != 0) {
        for (; (uVar25 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
        }
      }
      uVar37 = (uVar37 >> 3 & 0x1fffffff) - lVar32;
      goto LAB_001faed7;
    }
    uVar37 = 0;
    pcVar13 = pcVar2;
    goto LAB_001faf2b;
  }
  local_80 = local_80 + 1;
  param_2 = uVar17 + 1;
  if (local_c8 < param_2) {
    if ((uint)((int)lVar36 * 4) + local_c8 < param_2) {
      uVar14 = uVar17 + 0x11;
      if (uVar4 <= uVar17 + 0x11) {
        uVar14 = uVar4;
      }
      for (; param_2 < uVar14; param_2 = param_2 + 4) {
        *(uint *)(lVar8 + (ulong)((uint)(ushort)((ulong)(*(long *)(param_3 + (param_2 & param_4)) *
                                                        -0x42e1ca5843000000) >> 0x30) +
                                  ((uint)param_2 & 8) & 0xffff) * 4) = (uint)param_2;
        local_80 = local_80 + 4;
      }
    }
    else {
      uVar14 = uVar17 + 9;
      if (uVar4 <= uVar17 + 9) {
        uVar14 = uVar4;
      }
      for (; param_2 < uVar14; param_2 = param_2 + 2) {
        *(uint *)(lVar8 + (ulong)((uint)(ushort)((ulong)(*(long *)(param_3 + (param_2 & param_4)) *
                                                        -0x42e1ca5843000000) >> 0x30) +
                                  ((uint)param_2 & 8) & 0xffff) * 4) = (uint)param_2;
        local_80 = local_80 + 2;
      }
    }
  }
  goto LAB_001fb3af;
code_r0x001fab10:
  uVar37 = uVar37 + 1;
  lVar32 = lVar32 + -8;
  if (uVar12 == uVar37) goto code_r0x001fab20;
  goto LAB_001faaff;
code_r0x001fab20:
  uVar37 = -lVar32;
  pcVar13 = pcVar2 + -lVar32;
LAB_001faf2b:
  uVar25 = local_60 & 7;
  for (; (uVar25 != 0 && (*(char *)(lVar31 + uVar37) == *pcVar13)); uVar37 = uVar37 + 1) {
    pcVar13 = pcVar13 + 1;
    uVar25 = uVar25 - 1;
  }
LAB_001faed7:
  if (uVar37 < 4) {
    local_50 = 0;
  }
  else {
    uVar25 = uVar37 * 0x87 + 0x78f;
    if (uVar25 < 0x7e5) {
      local_50 = 0;
    }
    else {
      cVar28 = pcVar2[uVar37];
      uVar20 = uVar37;
      local_70 = uVar25;
    }
  }
LAB_001fab3d:
  uVar37 = *(long *)(param_3 + (uVar33 & param_4)) * -0x42e1ca5843000000;
  local_48[0] = uVar37 >> 0x30;
  local_48[1] = (ulong)((ushort)(uVar37 >> 0x30) + 8 & 0xffff);
  uVar26 = (uint)uVar33;
  uVar37 = (ulong)((uint)local_60 & 7);
  puVar15 = local_48;
  bVar38 = true;
LAB_001fab83:
  uVar24 = *(uint *)(lVar8 + *puVar15 * 4);
  lVar31 = (ulong)(local_100 & uVar24) + param_3;
  if (((cVar28 == *(char *)(uVar20 + lVar31)) && (uVar33 != uVar24)) &&
     (uVar25 = uVar33 - uVar24, uVar25 <= uVar35)) {
    uVar34 = uVar37;
    if (7 < local_60) {
      lVar32 = 0;
      uVar16 = 0;
LAB_001fabcb:
      uVar23 = *(ulong *)(lVar31 + uVar16 * 8);
      if (*(ulong *)(pcVar2 + uVar16 * 8) == uVar23) goto code_r0x001fabd8;
      uVar23 = uVar23 ^ *(ulong *)(pcVar2 + uVar16 * 8);
      uVar34 = 0;
      if (uVar23 != 0) {
        for (; (uVar23 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
        }
      }
      uVar16 = (uVar34 >> 3 & 0x1fffffff) - lVar32;
      goto LAB_001fac04;
    }
    uVar16 = 0;
    pcVar13 = pcVar2;
    goto joined_r0x001fac65;
  }
  goto LAB_001fac3f;
code_r0x001fabd8:
  uVar16 = uVar16 + 1;
  lVar32 = lVar32 + -8;
  if (uVar12 == uVar16) goto code_r0x001fabe8;
  goto LAB_001fabcb;
code_r0x001fabe8:
  uVar16 = -lVar32;
  pcVar13 = pcVar2 + -lVar32;
joined_r0x001fac65:
  for (; (uVar34 != 0 && (*(char *)(lVar31 + uVar16) == *pcVar13)); uVar16 = uVar16 + 1) {
    pcVar13 = pcVar13 + 1;
    uVar34 = uVar34 - 1;
  }
LAB_001fac04:
  if (3 < uVar16) {
    iVar21 = 0x1f;
    if ((uint)uVar25 != 0) {
      for (; (uint)uVar25 >> iVar21 == 0; iVar21 = iVar21 + -1) {
      }
    }
    uVar34 = (ulong)(iVar21 * -0x1e + 0x780) + uVar16 * 0x87;
    if (local_70 < uVar34) {
      cVar28 = pcVar2[uVar16];
      uVar20 = uVar16;
      local_70 = uVar34;
      local_50 = uVar25;
    }
  }
LAB_001fac3f:
  puVar15 = local_48 + 1;
  bVar29 = !bVar38;
  bVar38 = false;
  if (bVar29) goto LAB_001fac7c;
  goto LAB_001fab83;
LAB_001fac7c:
  *(uint *)(lVar8 + *(long *)((long)local_48 + (ulong)(uVar26 & 8)) * 4) = uVar26;
  if (local_60 < 0x20 || (uVar33 & 3) != 0) goto LAB_001fae4e;
  uVar25 = *(ulong *)(param_6 + 0x50);
  if (uVar25 <= uVar33) {
    uVar24 = *(uint *)(param_6 + 0x40);
    iVar21 = *(int *)(param_6 + 0x5c);
    iVar27 = *(int *)(param_6 + 0x60);
LAB_001face8:
    uVar11 = uVar24 & 0x3fffffff;
    bVar18 = *(byte *)(param_3 + (uVar25 & param_4));
    bVar5 = *(byte *)(param_3 + (uVar25 + 0x20 & param_4));
    if (uVar11 < 0x1000000) {
      uVar6 = *(uint *)(*(long *)(param_6 + 0x48) + (ulong)uVar11 * 4);
      *(int *)(*(long *)(param_6 + 0x48) + (ulong)uVar11 * 4) = (int)uVar25;
      if ((uVar25 == uVar33) && (uVar6 != 0xffffffff)) {
        uVar11 = uVar26 - uVar6;
        if (uVar11 <= uVar35) {
          lVar31 = (ulong)(uVar6 & local_100) + param_3;
          lVar32 = 0;
          uVar34 = 0;
LAB_001fad6a:
          uVar16 = *(ulong *)(lVar31 + uVar34 * 8);
          if (*(ulong *)(pcVar2 + uVar34 * 8) == uVar16) goto code_r0x001fad77;
          uVar16 = uVar16 ^ *(ulong *)(pcVar2 + uVar34 * 8);
          uVar34 = 0;
          if (uVar16 != 0) {
            for (; (uVar16 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
            }
          }
          uVar34 = (uVar34 >> 3 & 0x1fffffff) - lVar32;
          goto LAB_001fadd3;
        }
      }
    }
    goto LAB_001fad39;
  }
  goto LAB_001fae3b;
code_r0x001fad77:
  uVar34 = uVar34 + 1;
  lVar32 = lVar32 + -8;
  if (uVar12 == uVar34) goto code_r0x001fad87;
  goto LAB_001fad6a;
code_r0x001fad87:
  uVar16 = uVar37;
  for (uVar34 = -lVar32; (uVar16 != 0 && (*(char *)(lVar31 + uVar34) == pcVar2[uVar34]));
      uVar34 = uVar34 + 1) {
    uVar16 = uVar16 - 1;
  }
LAB_001fadd3:
  if ((3 < uVar34) && (uVar20 < uVar34)) {
    iVar30 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar30 == 0; iVar30 = iVar30 + -1) {
      }
    }
    uVar16 = (ulong)(iVar30 * -0x1e + 0x780) + uVar34 * 0x87;
    if (local_70 < uVar16) {
      uVar20 = uVar34;
      local_70 = uVar16;
      local_50 = (ulong)uVar11;
    }
  }
LAB_001fad39:
  uVar24 = ~(uint)bVar18 * iVar27 + (uint)bVar5 + uVar24 * iVar21 + 1;
  uVar25 = uVar25 + 4;
  if (uVar33 < uVar25) goto LAB_001fae24;
  goto LAB_001face8;
LAB_001fae24:
  *(uint *)(param_6 + 0x40) = uVar24;
LAB_001fae3b:
  *(ulong *)(param_6 + 0x50) = uVar17 + 5;
LAB_001fae4e:
  local_c8 = uVar17;
  uVar12 = local_90;
  if ((local_70 < local_a0 + 0xaf) ||
     (local_80 = local_80 + 1, uVar22 = uVar20, local_c8 = uVar33, uVar12 = local_50, 2 < local_dc))
  goto LAB_001fafe0;
  uVar20 = uVar17 + 9;
  local_dc = local_dc + 1;
  uVar14 = uVar14 - 1;
  local_a0 = local_70;
  uVar17 = uVar33;
  local_90 = local_50;
  if (uVar1 <= uVar20) goto LAB_001fafe0;
  goto LAB_001faa5f;
LAB_001fafe0:
  uVar17 = lVar7 + local_c8;
  if (uVar39 <= uVar17) {
    uVar17 = uVar39;
  }
  iVar27 = (int)uVar22;
  iVar21 = (int)local_80;
  if (uVar17 < uVar12) {
LAB_001fb006:
    uVar14 = uVar12 + 0xf;
LAB_001fb00a:
    if ((uVar12 <= uVar17) && (uVar14 != 0)) {
      param_7[3] = param_7[2];
      *(undefined8 *)(param_7 + 1) = *(undefined8 *)param_7;
      *param_7 = (int)uVar12;
    }
    *local_a8 = iVar21;
    local_a8[1] = iVar27;
    uVar17 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
    iVar30 = 0;
    if (uVar17 <= uVar14) {
      bVar18 = (byte)*(uint *)(param_5 + 0x40);
      uVar20 = ((uVar14 - *(uint *)(param_5 + 0x44)) + (4L << (bVar18 & 0x3f))) - 0x10;
      uVar26 = 0x1f;
      uVar24 = (uint)uVar20;
      if (uVar24 != 0) {
        for (; uVar24 >> uVar26 == 0; uVar26 = uVar26 - 1) {
        }
      }
      uVar26 = (uVar26 ^ 0xffffffe0) + 0x1f;
      uVar33 = (ulong)((uVar20 >> ((ulong)uVar26 & 0x3f) & 1) != 0);
      lVar31 = (ulong)uVar26 - (ulong)*(uint *)(param_5 + 0x40);
      uVar14 = (~(-1 << (bVar18 & 0x1f)) & uVar24) + uVar17 +
               (uVar33 + lVar31 * 2 + 0xfffe << (bVar18 & 0x3f)) | lVar31 * 0x400;
      iVar30 = (int)(uVar20 - (uVar33 + 2 << ((byte)uVar26 & 0x3f)) >> (bVar18 & 0x3f));
    }
  }
  else {
    if (uVar12 != (long)*param_7) {
      uVar14 = 1;
      if (uVar12 != (long)param_7[1]) {
        uVar14 = (uVar12 + 3) - (long)*param_7;
        if (uVar14 < 7) {
          bVar18 = (byte)((int)uVar14 << 2);
          uVar26 = 0x9750468;
        }
        else {
          uVar14 = (uVar12 + 3) - (long)param_7[1];
          if (6 < uVar14) {
            uVar14 = 2;
            if ((uVar12 != (long)param_7[2]) && (uVar14 = 3, uVar12 != (long)param_7[3]))
            goto LAB_001fb006;
            goto LAB_001fb00a;
          }
          bVar18 = (byte)((int)uVar14 << 2);
          uVar26 = 0xfdb1ace;
        }
        uVar14 = (ulong)(uVar26 >> (bVar18 & 0x1f) & 0xf);
      }
      goto LAB_001fb00a;
    }
    *local_a8 = iVar21;
    local_a8[1] = iVar27;
    uVar14 = 0;
    iVar30 = 0;
  }
  *(short *)((long)local_a8 + 0xe) = (short)uVar14;
  local_a8[2] = iVar30;
  if (local_80 < 6) {
    uVar17 = local_80 & 0xffffffff;
  }
  else if (local_80 < 0x82) {
    uVar26 = 0x1f;
    uVar24 = (uint)(local_80 - 2);
    if (uVar24 != 0) {
      for (; uVar24 >> uVar26 == 0; uVar26 = uVar26 - 1) {
      }
    }
    uVar17 = (ulong)((int)(local_80 - 2 >> ((char)(uVar26 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                     (uVar26 ^ 0xffffffe0) * 2 + 0x40);
  }
  else if (local_80 < 0x842) {
    uVar26 = 0x1f;
    if (iVar21 - 0x42U != 0) {
      for (; iVar21 - 0x42U >> uVar26 == 0; uVar26 = uVar26 - 1) {
      }
    }
    uVar17 = (ulong)((uVar26 ^ 0xffe0) + 0x2a);
  }
  else {
    uVar17 = 0x15;
    if (0x1841 < local_80) {
      uVar17 = (ulong)(ushort)(0x17 - (local_80 < 0x5842));
    }
  }
  uVar20 = (ulong)iVar27;
  if (uVar20 < 10) {
    uVar26 = iVar27 - 2;
  }
  else if (uVar20 < 0x86) {
    uVar26 = 0x1f;
    uVar24 = (uint)(uVar20 - 6);
    if (uVar24 != 0) {
      for (; uVar24 >> uVar26 == 0; uVar26 = uVar26 - 1) {
      }
    }
    uVar26 = (int)(uVar20 - 6 >> ((char)(uVar26 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
             (uVar26 ^ 0xffffffe0) * 2 + 0x42;
  }
  else {
    uVar26 = 0x17;
    if (uVar20 < 0x846) {
      uVar26 = 0x1f;
      if (iVar27 - 0x46U != 0) {
        for (; iVar27 - 0x46U >> uVar26 == 0; uVar26 = uVar26 - 1) {
        }
      }
      uVar26 = (uVar26 ^ 0xffe0) + 0x2c;
    }
  }
  uVar9 = (ushort)uVar26;
  sVar10 = (uVar9 & 7) + ((ushort)uVar17 & 7) * 8;
  if ((((uVar14 & 0x3ff) == 0) && ((ushort)uVar17 < 8)) && (uVar9 < 0x10)) {
    if (7 < uVar9) {
      sVar10 = sVar10 + 0x40;
    }
  }
  else {
    iVar21 = (int)((uVar17 & 0xffff) >> 3) * 3 + ((uVar26 & 0xffff) >> 3);
    sVar10 = sVar10 + ((ushort)(0x520d40 >> ((char)iVar21 * '\x02' & 0x1fU)) & 0xc0) +
                      (short)iVar21 * 0x40 + 0x40;
  }
  *(short *)(local_a8 + 3) = sVar10;
  *param_11 = *param_11 + local_80;
  param_2 = uVar22 + local_c8;
  uVar17 = uVar19;
  if (param_2 < uVar19) {
    uVar17 = param_2;
  }
  uVar14 = local_c8 + 2;
  if (uVar12 < uVar22 >> 2) {
    uVar20 = param_2 + uVar12 * -4;
    if (uVar20 < uVar14) {
      uVar20 = uVar14;
    }
    uVar14 = uVar20;
    if (uVar17 < uVar20) {
      uVar14 = uVar17;
    }
  }
  local_c8 = lVar36 + uVar22 * 2 + local_c8;
  local_a8 = local_a8 + 4;
  if (uVar14 < uVar17) {
    do {
      *(uint *)(lVar8 + (ulong)((uint)(ushort)((ulong)(*(long *)(param_3 + (uVar14 & param_4)) *
                                                      -0x42e1ca5843000000) >> 0x30) +
                                ((uint)uVar14 & 8) & 0xffff) * 4) = (uint)uVar14;
      uVar14 = uVar14 + 1;
    } while (uVar17 != uVar14);
  }
  local_80 = 0;
LAB_001fb3af:
  uVar17 = param_2;
  if (uVar1 <= param_2 + 8) goto LAB_001fb470;
  goto LAB_001fa641;
}

