// rea decompile_all
// name: _CreateBackwardReferencesNH41
// address: 0x1f6d4f
// body: available
// range: 0x1f6d4f-0x1f8247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH41
               (ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
               int *param_7,ulong *param_8,uint *param_9,long *param_10,long *param_11)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ushort uVar22;
  short sVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  bool bVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  int *piVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  ushort uVar36;
  ushort uVar37;
  ulong uVar38;
  char cVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong local_f8;
  int *local_e8;
  ulong local_e0;
  uint *local_c8;
  ulong local_b0;
  ulong local_a8;
  ulong local_88;
  ulong local_80;
  ulong local_70;
  ulong local_68;
  ulong local_50;
  ulong local_38;
  
  bVar11 = *(byte *)(param_5 + 8);
  uVar3 = (param_2 - 3) + param_1;
  uVar13 = param_2;
  if (3 < param_1) {
    uVar13 = uVar3;
  }
  lVar33 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar33 = 0x40;
  }
  iVar7 = *param_7;
  lVar4 = *(long *)(param_5 + 0x10);
  local_80 = *param_8;
  param_7[4] = iVar7 + -1;
  param_7[5] = iVar7 + 1;
  param_7[6] = iVar7 + -2;
  param_7[7] = iVar7 + 2;
  *(ulong *)(param_7 + 8) = CONCAT44(iVar7 + 3,iVar7 + -3);
  uVar1 = param_2 + param_1;
  if (uVar1 <= param_2 + 4) {
    local_c8 = param_9;
LAB_001f8213:
    *param_8 = (local_80 + uVar1) - param_2;
    *param_10 = *param_10 + ((long)local_c8 - (long)param_9 >> 4);
    return;
  }
  uVar43 = (1L << (bVar11 & 0x3f)) - 0x10;
  local_f8 = lVar33 + param_2;
  lVar2 = param_2 - 1;
  local_c8 = param_9;
  uVar20 = param_2;
LAB_001f6e76:
  local_b0 = uVar1 - uVar20;
  uVar25 = uVar43;
  if (uVar20 < uVar43) {
    uVar25 = uVar20;
  }
  uVar29 = *(ulong *)(param_5 + 0x50);
  lVar30 = *(long *)(param_6 + 0x40);
  uVar18 = uVar20 & param_4;
  piVar9 = (int *)(uVar18 + param_3);
  uVar40 = (uint)(*(int *)(param_3 + uVar18) * 0x1e35a7bd) >> 0x11;
  uVar10 = (ulong)((uint)local_b0 & 7);
  uVar14 = local_b0 & 0xfffffffffffffff8;
  local_88 = 0x7e4;
  uVar41 = 0;
  lVar8 = 0;
  local_50 = 0;
  local_38 = 0;
  do {
    uVar28 = (ulong)param_7[lVar8];
    uVar15 = uVar20 - uVar28;
    cVar39 = (char)uVar40;
    if ((((lVar8 == 0) || (*(char *)(lVar30 + 0x30000 + (uVar15 & 0xffff)) == cVar39)) &&
        (uVar28 <= uVar25)) && (uVar15 < uVar20)) {
      lVar16 = (uVar15 & param_4) + param_3;
      if (7 < local_b0) {
        lVar31 = 0;
        uVar15 = 0;
LAB_001f6f6a:
        uVar35 = *(ulong *)(lVar16 + uVar15 * 8);
        if (*(ulong *)(piVar9 + uVar15 * 2) == uVar35) goto code_r0x001f6f7b;
        uVar35 = uVar35 ^ *(ulong *)(piVar9 + uVar15 * 2);
        uVar15 = 0;
        if (uVar35 != 0) {
          for (; (uVar35 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
          }
        }
        uVar15 = (uVar15 >> 3 & 0x1fffffff) - lVar31;
        goto LAB_001f6fc1;
      }
      piVar32 = piVar9;
      uVar35 = 0;
LAB_001f7020:
      uVar15 = uVar35;
      if (uVar10 != 0) {
        uVar34 = uVar10 | uVar35;
        uVar38 = uVar10;
        do {
          uVar15 = uVar35;
          if (*(char *)(lVar16 + uVar35) != (char)*piVar32) break;
          piVar32 = (int *)((long)piVar32 + 1);
          uVar35 = uVar35 + 1;
          uVar38 = uVar38 - 1;
          uVar15 = uVar34;
        } while (uVar38 != 0);
      }
LAB_001f6fc1:
      if ((1 < uVar15) && (uVar35 = uVar15 * 0x87 + 0x78f, local_88 < uVar35)) {
        if (lVar8 != 0) {
          uVar35 = uVar35 - ((0x1ca10U >> ((byte)lVar8 & 0xe) & 0xe) + 0x27);
        }
        if (local_88 < uVar35) {
          uVar41 = uVar15;
          local_88 = uVar35;
          local_50 = uVar15;
          local_38 = uVar28;
        }
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 10);
  uVar15 = lVar4 + uVar20;
  if (uVar43 <= lVar4 + uVar20) {
    uVar15 = uVar43;
  }
  uVar35 = (ulong)uVar40;
  lVar8 = *(long *)(param_6 + 0x38);
  uVar28 = uVar20 - *(uint *)(lVar30 + uVar35 * 4);
  uVar22 = *(ushort *)(lVar30 + 0x20000 + uVar35 * 2);
  if (lVar8 != 0) {
    uVar34 = 0;
    uVar38 = uVar28;
    uVar36 = uVar22;
    do {
      uVar34 = uVar38 + uVar34;
      if (uVar25 < uVar34) break;
      if (uVar41 + uVar18 <= param_4) {
        uVar38 = uVar20 - uVar34 & param_4;
        uVar19 = uVar41 + uVar38;
        if ((uVar19 <= param_4) &&
           (*(char *)(param_3 + uVar41 + uVar18) == *(char *)(param_3 + uVar19))) {
          lVar16 = uVar38 + param_3;
          if (7 < local_b0) {
            lVar31 = 0;
            uVar38 = 0;
LAB_001f711a:
            uVar19 = *(ulong *)(lVar16 + uVar38 * 8);
            if (*(ulong *)(piVar9 + uVar38 * 2) == uVar19) goto code_r0x001f712b;
            uVar19 = uVar19 ^ *(ulong *)(piVar9 + uVar38 * 2);
            uVar38 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
              }
            }
            uVar38 = (uVar38 >> 3 & 0x1fffffff) - lVar31;
            goto LAB_001f71a1;
          }
          uVar19 = 0;
          local_e8 = piVar9;
LAB_001f71e3:
          uVar38 = uVar19;
          if (uVar10 != 0) {
            uVar42 = uVar10 | uVar19;
            uVar26 = uVar10;
            do {
              uVar38 = uVar19;
              if (*(char *)(lVar16 + uVar19) != (char)*local_e8) break;
              local_e8 = (int *)((long)local_e8 + 1);
              uVar19 = uVar19 + 1;
              uVar26 = uVar26 - 1;
              uVar38 = uVar42;
            } while (uVar26 != 0);
          }
LAB_001f71a1:
          if (3 < uVar38) {
            iVar7 = 0x1f;
            if ((uint)uVar34 != 0) {
              for (; (uint)uVar34 >> iVar7 == 0; iVar7 = iVar7 + -1) {
              }
            }
            uVar19 = (ulong)(iVar7 * -0x1e + 0x780) + uVar38 * 0x87;
            if (local_88 < uVar19) {
              uVar41 = uVar38;
              local_88 = uVar19;
              local_50 = uVar38;
              local_38 = uVar34;
            }
          }
        }
      }
      uVar38 = (ulong)uVar36;
      uVar36 = *(ushort *)(lVar30 + 0x40002 + uVar38 * 4);
      uVar38 = (ulong)*(ushort *)(lVar30 + 0x40000 + uVar38 * 4);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  uVar36 = *(ushort *)(param_6 + 0x30);
  *(ushort *)(param_6 + 0x30) = uVar36 + 1;
  *(char *)(lVar30 + 0x30000 + (uVar20 & 0xffff)) = cVar39;
  if (0xfffe < uVar28) {
    uVar28 = 0xffff;
  }
  *(short *)(lVar30 + 0x40000 + (ulong)uVar36 * 4) = (short)uVar28;
  *(ushort *)(lVar30 + 0x40002 + (ulong)uVar36 * 4) = uVar22;
  *(int *)(lVar30 + uVar35 * 4) = (int)uVar20;
  *(ushort *)(lVar30 + 0x20000 + uVar35 * 2) = uVar36;
  if (local_88 == 0x7e4) {
    lVar30 = *(long *)(param_6 + 0x48);
    uVar25 = *(ulong *)(lVar30 + 8);
    local_70 = *(ulong *)(lVar30 + 0x10);
    if (uVar25 >> 7 <= local_70) {
      uVar41 = (ulong)((uint)(*piVar9 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
      lVar8 = *(long *)(param_5 + 0x78);
      local_88 = 0x7e4;
      iVar7 = 0;
      bVar27 = true;
LAB_001f72fb:
      uVar25 = uVar25 + 1;
      *(ulong *)(lVar30 + 8) = uVar25;
      bVar11 = *(byte *)(lVar8 + uVar41);
      uVar14 = (ulong)bVar11;
      if ((uVar14 != 0) && (uVar14 <= local_b0)) {
        uVar18 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar41 * 2);
        lVar16 = *(long *)(param_5 + 0x58);
        pcVar17 = (char *)(uVar18 * uVar14 + *(long *)(lVar16 + 0xa8) +
                          (ulong)*(uint *)(lVar16 + 0x20 + uVar14 * 4));
        if (7 < bVar11) {
          uVar10 = (ulong)(bVar11 & 0xfffffff8);
          lVar31 = 0;
          uVar28 = 0;
LAB_001f7387:
          if (*(ulong *)(pcVar17 + uVar28 * 8) == *(ulong *)(piVar9 + uVar28 * 2))
          goto code_r0x001f7398;
          uVar28 = *(ulong *)(piVar9 + uVar28 * 2) ^ *(ulong *)(pcVar17 + uVar28 * 8);
          uVar10 = 0;
          if (uVar28 != 0) {
            for (; (uVar28 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          uVar28 = (uVar10 >> 3 & 0x1fffffff) - lVar31;
          goto LAB_001f73c8;
        }
        uVar10 = 0;
        goto LAB_001f74b0;
      }
      goto LAB_001f7323;
    }
  }
  else {
    iVar7 = 0;
LAB_001f7500:
    if (0x7e4 < local_88) {
      uVar29 = (lVar2 + param_1) - uVar20;
      uVar40 = 0;
      uVar25 = local_50;
      local_e8 = (int *)local_38;
      uVar22 = *(ushort *)(param_6 + 0x30);
LAB_001f754d:
      local_b0 = local_b0 - 1;
      uVar41 = uVar25 - 1;
      if (local_b0 <= uVar25 - 1) {
        uVar41 = local_b0;
      }
      if (4 < *(int *)(param_5 + 4)) {
        uVar41 = 0;
      }
      local_f8 = uVar20 + 1;
      uVar14 = uVar43;
      if (local_f8 < uVar43) {
        uVar14 = local_f8;
      }
      local_a8 = uVar20 + 1 + lVar4;
      uVar18 = *(ulong *)(param_5 + 0x50);
      lVar30 = *(long *)(param_6 + 0x40);
      uVar15 = local_f8 & param_4;
      piVar9 = (int *)(uVar15 + param_3);
      uVar21 = (uint)(*(int *)(param_3 + uVar15) * 0x1e35a7bd) >> 0x11;
      uVar35 = (ulong)uVar21;
      uVar28 = (ulong)((uint)local_b0 & 7);
      uVar10 = 0x7e4;
      lVar8 = 0;
      local_68 = 0;
      local_50 = 0;
LAB_001f7616:
      uVar34 = (ulong)param_7[lVar8];
      uVar38 = local_f8 - uVar34;
      cVar39 = (char)uVar21;
      if (((lVar8 == 0) || (*(char *)(lVar30 + 0x30000 + (uVar38 & 0xffff)) == cVar39)) &&
         ((uVar34 <= uVar14 && (uVar38 < local_f8)))) {
        lVar16 = (uVar38 & param_4) + param_3;
        uVar38 = uVar28;
        if (7 < local_b0) {
          lVar31 = 0;
          uVar19 = 0;
LAB_001f7660:
          uVar26 = *(ulong *)(lVar16 + uVar19 * 8);
          if (*(ulong *)(piVar9 + uVar19 * 2) == uVar26) goto code_r0x001f7671;
          uVar26 = uVar26 ^ *(ulong *)(piVar9 + uVar19 * 2);
          uVar38 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
            }
          }
          uVar19 = (uVar38 >> 3 & 0x1fffffff) - lVar31;
          goto LAB_001f76af;
        }
        uVar19 = 0;
        piVar32 = piVar9;
        goto joined_r0x001f772b;
      }
      goto LAB_001f770b;
    }
  }
  local_80 = local_80 + 1;
  param_2 = uVar20 + 1;
  if (local_f8 < param_2) {
    if (param_2 <= (uint)((int)lVar33 * 4) + local_f8) {
      uVar25 = uVar20 + 9;
      if (uVar3 <= uVar20 + 9) {
        uVar25 = uVar3;
      }
      if (param_2 < uVar25) {
        lVar30 = *(long *)(param_6 + 0x40);
        uVar22 = *(ushort *)(param_6 + 0x30);
        do {
          uVar40 = (uint)(*(int *)(param_3 + (param_2 & param_4)) * 0x1e35a7bd) >> 0x11;
          uVar20 = (ulong)uVar40;
          uVar29 = param_2 - *(uint *)(lVar30 + uVar20 * 4);
          *(char *)(lVar30 + 0x30000 + (param_2 & 0xffff)) = (char)uVar40;
          if (0xfffe < uVar29) {
            uVar29 = 0xffff;
          }
          uVar36 = uVar22 + 1;
          *(short *)(lVar30 + 0x40000 + (ulong)uVar22 * 4) = (short)uVar29;
          *(undefined2 *)(lVar30 + 0x40002 + (ulong)uVar22 * 4) =
               *(undefined2 *)(lVar30 + 0x20000 + uVar20 * 2);
          *(int *)(lVar30 + uVar20 * 4) = (int)param_2;
          *(ushort *)(lVar30 + 0x20000 + uVar20 * 2) = uVar22;
          local_80 = local_80 + 2;
          param_2 = param_2 + 2;
          uVar22 = uVar36;
        } while (param_2 < uVar25);
        goto LAB_001f818c;
      }
      goto LAB_001f81a1;
    }
    uVar25 = uVar20 + 0x11;
    if (uVar1 - 4 <= uVar20 + 0x11) {
      uVar25 = uVar1 - 4;
    }
    if (uVar25 <= param_2) goto LAB_001f81a1;
    lVar30 = *(long *)(param_6 + 0x40);
    uVar22 = *(ushort *)(param_6 + 0x30);
    do {
      uVar40 = (uint)(*(int *)(param_3 + (param_2 & param_4)) * 0x1e35a7bd) >> 0x11;
      uVar20 = (ulong)uVar40;
      uVar29 = param_2 - *(uint *)(lVar30 + uVar20 * 4);
      *(char *)(lVar30 + 0x30000 + (param_2 & 0xffff)) = (char)uVar40;
      if (0xfffe < uVar29) {
        uVar29 = 0xffff;
      }
      uVar36 = uVar22 + 1;
      *(short *)(lVar30 + 0x40000 + (ulong)uVar22 * 4) = (short)uVar29;
      *(undefined2 *)(lVar30 + 0x40002 + (ulong)uVar22 * 4) =
           *(undefined2 *)(lVar30 + 0x20000 + uVar20 * 2);
      *(int *)(lVar30 + uVar20 * 4) = (int)param_2;
      *(ushort *)(lVar30 + 0x20000 + uVar20 * 2) = uVar22;
      local_80 = local_80 + 4;
      param_2 = param_2 + 4;
      uVar22 = uVar36;
    } while (param_2 < uVar25);
    goto LAB_001f818c;
  }
  goto LAB_001f81a1;
code_r0x001f6f7b:
  uVar15 = uVar15 + 1;
  lVar31 = lVar31 + -8;
  piVar32 = (int *)((long)piVar9 + uVar14);
  uVar35 = uVar14;
  if (local_b0 >> 3 == uVar15) goto LAB_001f7020;
  goto LAB_001f6f6a;
code_r0x001f712b:
  uVar38 = uVar38 + 1;
  lVar31 = lVar31 + -8;
  uVar19 = uVar14;
  local_e8 = (int *)((long)piVar9 + uVar14);
  if (local_b0 >> 3 == uVar38) goto LAB_001f71e3;
  goto LAB_001f711a;
code_r0x001f7398:
  uVar28 = uVar28 + 1;
  lVar31 = lVar31 + -8;
  if (bVar11 >> 3 == uVar28) goto code_r0x001f73a4;
  goto LAB_001f7387;
code_r0x001f73a4:
  pcVar17 = pcVar17 + -lVar31;
LAB_001f74b0:
  uVar35 = uVar14 & 7;
  uVar28 = uVar10;
  if ((bVar11 & 7) != 0) {
    uVar38 = uVar10 | uVar35;
    do {
      uVar28 = uVar10;
      if (*(char *)((long)piVar9 + uVar10) != *pcVar17) break;
      pcVar17 = pcVar17 + 1;
      uVar10 = uVar10 + 1;
      uVar35 = uVar35 - 1;
      uVar28 = uVar38;
    } while (uVar35 != 0);
  }
LAB_001f73c8:
  if (((uVar28 != 0) && (uVar14 < *(uint *)(param_5 + 100) + uVar28)) &&
     (uVar14 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar14 - uVar28) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar14 - uVar28) * 4 << (*(byte *)(lVar16 + uVar14) & 0x3f)) + uVar18 + uVar15 + 1,
     uVar14 <= uVar29)) {
    iVar24 = 0x1f;
    if ((uint)uVar14 != 0) {
      for (; (uint)uVar14 >> iVar24 == 0; iVar24 = iVar24 + -1) {
      }
    }
    uVar18 = (uVar28 * 0x87 - (ulong)(uint)(iVar24 * 0x1e)) + 0x780;
    if (local_88 <= uVar18) {
      iVar7 = (uint)bVar11 - (int)uVar28;
      local_70 = local_70 + 1;
      *(ulong *)(lVar30 + 0x10) = local_70;
      local_50 = uVar28;
      local_38 = uVar14;
      local_88 = uVar18;
    }
  }
LAB_001f7323:
  uVar41 = uVar41 + 1;
  bVar6 = !bVar27;
  bVar27 = false;
  if (bVar6) goto LAB_001f7500;
  goto LAB_001f72fb;
code_r0x001f7671:
  uVar19 = uVar19 + 1;
  lVar31 = lVar31 + -8;
  if (uVar29 >> 3 == uVar19) goto code_r0x001f7681;
  goto LAB_001f7660;
code_r0x001f7681:
  uVar19 = -lVar31;
  piVar32 = (int *)((long)piVar9 - lVar31);
joined_r0x001f772b:
  for (; (uVar38 != 0 && (*(char *)(lVar16 + uVar19) == (char)*piVar32)); uVar19 = uVar19 + 1) {
    uVar38 = uVar38 - 1;
    piVar32 = (int *)((long)piVar32 + 1);
  }
LAB_001f76af:
  if ((1 < uVar19) && (uVar38 = uVar19 * 0x87 + 0x78f, uVar10 < uVar38)) {
    if (lVar8 != 0) {
      uVar38 = uVar38 - ((0x1ca10U >> ((byte)lVar8 & 0xe) & 0xe) + 0x27);
    }
    if (uVar10 < uVar38) {
      uVar10 = uVar38;
      uVar41 = uVar19;
      local_68 = uVar19;
      local_50 = uVar34;
    }
  }
LAB_001f770b:
  lVar8 = lVar8 + 1;
  if (lVar8 == 10) goto LAB_001f774a;
  goto LAB_001f7616;
LAB_001f774a:
  if (uVar43 <= local_a8) {
    local_a8 = uVar43;
  }
  lVar8 = *(long *)(param_6 + 0x38);
  uVar38 = local_f8 - *(uint *)(lVar30 + uVar35 * 4);
  uVar36 = *(ushort *)(lVar30 + 0x20000 + uVar35 * 2);
  if (lVar8 != 0) {
    uVar19 = 0;
    uVar34 = uVar38;
    uVar37 = uVar36;
LAB_001f77a1:
    uVar19 = uVar34 + uVar19;
    if (uVar19 <= uVar14) {
      if (uVar15 + uVar41 <= param_4) {
        uVar26 = local_f8 - uVar19 & param_4;
        uVar34 = uVar26 + uVar41;
        if ((param_4 < uVar34) ||
           (*(char *)(param_3 + uVar15 + uVar41) != *(char *)(param_3 + uVar34))) goto LAB_001f7885;
        lVar16 = uVar26 + param_3;
        uVar34 = uVar28;
        if (7 < local_b0) {
          lVar31 = 0;
          uVar26 = 0;
LAB_001f7800:
          uVar42 = *(ulong *)(lVar16 + uVar26 * 8);
          if (*(ulong *)(piVar9 + uVar26 * 2) == uVar42) goto code_r0x001f7811;
          uVar42 = uVar42 ^ *(ulong *)(piVar9 + uVar26 * 2);
          uVar34 = 0;
          if (uVar42 != 0) {
            for (; (uVar42 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
            }
          }
          uVar26 = (uVar34 >> 3 & 0x1fffffff) - lVar31;
          goto LAB_001f784b;
        }
        uVar26 = 0;
        piVar32 = piVar9;
        goto joined_r0x001f78b6;
      }
      goto LAB_001f7885;
    }
  }
LAB_001f78f8:
  *(ushort *)(param_6 + 0x30) = uVar22 + 1;
  if (0xfffe < uVar38) {
    uVar38 = 0xffff;
  }
  *(char *)(lVar30 + 0x30000 + (local_f8 & 0xffff)) = cVar39;
  *(short *)(lVar30 + 0x40000 + (ulong)uVar22 * 4) = (short)uVar38;
  *(ushort *)(lVar30 + 0x40002 + (ulong)uVar22 * 4) = uVar36;
  *(int *)(lVar30 + uVar35 * 4) = (int)local_f8;
  *(ushort *)(lVar30 + 0x20000 + uVar35 * 2) = uVar22;
  iVar24 = 0;
  if (uVar10 == 0x7e4) {
    lVar30 = *(long *)(param_6 + 0x48);
    uVar41 = *(ulong *)(lVar30 + 8);
    local_e0 = *(ulong *)(lVar30 + 0x10);
    uVar10 = 0x7e4;
    if (uVar41 >> 7 <= local_e0) {
      uVar14 = (ulong)((uint)(*piVar9 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
      lVar8 = *(long *)(param_5 + 0x78);
      iVar24 = 0;
      uVar10 = 0x7e4;
      bVar27 = true;
LAB_001f7a89:
      uVar41 = uVar41 + 1;
      *(ulong *)(lVar30 + 8) = uVar41;
      bVar11 = *(byte *)(lVar8 + uVar14);
      uVar15 = (ulong)bVar11;
      if ((uVar15 != 0) && (uVar15 <= local_b0)) {
        uVar28 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar14 * 2);
        lVar16 = *(long *)(param_5 + 0x58);
        pcVar17 = (char *)(uVar28 * uVar15 + *(long *)(lVar16 + 0xa8) +
                          (ulong)*(uint *)(lVar16 + 0x20 + uVar15 * 4));
        if (7 < bVar11) {
          uVar38 = (ulong)(bVar11 & 0xfffffff8);
          lVar31 = 0;
          uVar35 = 0;
LAB_001f7b19:
          if (*(ulong *)(pcVar17 + uVar35 * 8) == *(ulong *)(piVar9 + uVar35 * 2))
          goto code_r0x001f7b2a;
          uVar38 = *(ulong *)(piVar9 + uVar35 * 2) ^ *(ulong *)(pcVar17 + uVar35 * 8);
          uVar35 = 0;
          if (uVar38 != 0) {
            for (; (uVar38 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = (uVar35 >> 3 & 0x1fffffff) - lVar31;
          goto LAB_001f7b62;
        }
        uVar38 = 0;
        goto LAB_001f7c3f;
      }
      goto LAB_001f7ab6;
    }
  }
LAB_001f79be:
  if (uVar10 < local_88 + 0xaf) {
    local_f8 = uVar20;
    local_68 = uVar25;
    local_a8 = lVar4 + uVar20;
    iVar24 = iVar7;
    if (uVar43 <= lVar4 + uVar20) {
      local_a8 = uVar43;
    }
    goto LAB_001f7e36;
  }
  local_80 = local_80 + 1;
  local_e8 = (int *)local_50;
  if (2 < uVar40) goto LAB_001f7e36;
  uVar41 = uVar20 + 5;
  uVar40 = uVar40 + 1;
  uVar29 = uVar29 - 1;
  uVar25 = local_68;
  uVar20 = local_f8;
  local_88 = uVar10;
  iVar7 = iVar24;
  uVar22 = uVar22 + 1;
  if (uVar1 <= uVar41) goto LAB_001f7e36;
  goto LAB_001f754d;
code_r0x001f7811:
  uVar26 = uVar26 + 1;
  lVar31 = lVar31 + -8;
  if (uVar29 >> 3 == uVar26) goto code_r0x001f7821;
  goto LAB_001f7800;
code_r0x001f7821:
  uVar26 = -lVar31;
  piVar32 = (int *)((long)piVar9 - lVar31);
joined_r0x001f78b6:
  for (; (uVar34 != 0 && (*(char *)(lVar16 + uVar26) == (char)*piVar32)); uVar26 = uVar26 + 1) {
    uVar34 = uVar34 - 1;
    piVar32 = (int *)((long)piVar32 + 1);
  }
LAB_001f784b:
  if (3 < uVar26) {
    iVar24 = 0x1f;
    if ((uint)uVar19 != 0) {
      for (; (uint)uVar19 >> iVar24 == 0; iVar24 = iVar24 + -1) {
      }
    }
    uVar34 = (ulong)(iVar24 * -0x1e + 0x780) + uVar26 * 0x87;
    if (uVar10 < uVar34) {
      uVar10 = uVar34;
      uVar41 = uVar26;
      local_68 = uVar26;
      local_50 = uVar19;
    }
  }
LAB_001f7885:
  uVar34 = (ulong)uVar37;
  uVar37 = *(ushort *)(lVar30 + 0x40002 + uVar34 * 4);
  uVar34 = (ulong)*(ushort *)(lVar30 + 0x40000 + uVar34 * 4);
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) goto LAB_001f78f8;
  goto LAB_001f77a1;
code_r0x001f7b2a:
  uVar35 = uVar35 + 1;
  lVar31 = lVar31 + -8;
  if (bVar11 >> 3 == uVar35) goto code_r0x001f7b36;
  goto LAB_001f7b19;
code_r0x001f7b36:
  pcVar17 = pcVar17 + -lVar31;
LAB_001f7c3f:
  uVar34 = uVar15 & 7;
  uVar35 = uVar38;
  if ((bVar11 & 7) != 0) {
    uVar19 = uVar38 | uVar34;
    do {
      uVar35 = uVar38;
      if (*(char *)((long)piVar9 + uVar38) != *pcVar17) break;
      pcVar17 = pcVar17 + 1;
      uVar38 = uVar38 + 1;
      uVar34 = uVar34 - 1;
      uVar35 = uVar19;
    } while (uVar34 != 0);
  }
LAB_001f7b62:
  if (((uVar35 != 0) && (uVar15 < *(uint *)(param_5 + 100) + uVar35)) &&
     (uVar15 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar15 - uVar35) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar15 - uVar35) * 4 << (*(byte *)(lVar16 + uVar15) & 0x3f)) +
               uVar28 + local_a8 + 1, uVar15 <= uVar18)) {
    iVar5 = 0x1f;
    if ((uint)uVar15 != 0) {
      for (; (uint)uVar15 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    uVar28 = (uVar35 * 0x87 - (ulong)(uint)(iVar5 * 0x1e)) + 0x780;
    if (uVar10 <= uVar28) {
      iVar24 = (uint)bVar11 - (int)uVar35;
      local_e0 = local_e0 + 1;
      *(ulong *)(lVar30 + 0x10) = local_e0;
      uVar10 = uVar28;
      local_50 = uVar15;
      local_68 = uVar35;
    }
  }
LAB_001f7ab6:
  uVar14 = uVar14 + 1;
  bVar6 = !bVar27;
  bVar27 = false;
  if (bVar6) goto LAB_001f79be;
  goto LAB_001f7a89;
LAB_001f7e36:
  if (local_a8 < local_e8) {
LAB_001f7e4e:
    uVar20 = (long)local_e8 + 0xf;
  }
  else {
    if (local_e8 == (int *)(long)*param_7) {
      uVar20 = 0;
      goto LAB_001f7ea5;
    }
    uVar20 = 1;
    if (local_e8 != (int *)(long)param_7[1]) {
      uVar20 = ((long)local_e8 + 3U) - (long)*param_7;
      if (uVar20 < 7) {
        bVar11 = (byte)((int)uVar20 << 2);
        uVar40 = 0x9750468;
      }
      else {
        uVar20 = ((long)local_e8 + 3U) - (long)param_7[1];
        if (6 < uVar20) {
          uVar20 = 2;
          if ((local_e8 != (int *)(long)param_7[2]) &&
             (uVar20 = 3, local_e8 != (int *)(long)param_7[3])) goto LAB_001f7e4e;
          goto LAB_001f7e52;
        }
        bVar11 = (byte)((int)uVar20 << 2);
        uVar40 = 0xfdb1ace;
      }
      uVar20 = (ulong)(uVar40 >> (bVar11 & 0x1f) & 0xf);
    }
  }
LAB_001f7e52:
  if ((local_e8 <= local_a8) && (uVar20 != 0)) {
    param_7[3] = param_7[2];
    *(undefined8 *)(param_7 + 1) = *(undefined8 *)param_7;
    iVar7 = (int)local_e8;
    *param_7 = iVar7;
    param_7[4] = iVar7 + -1;
    param_7[5] = iVar7 + 1;
    param_7[6] = iVar7 + -2;
    param_7[7] = iVar7 + 2;
    param_7[8] = iVar7 + -3;
    param_7[9] = iVar7 + 3;
  }
LAB_001f7ea5:
  uVar21 = (uint)local_80;
  *local_c8 = uVar21;
  local_c8[1] = iVar24 << 0x19 | (uint)local_68;
  uVar25 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
  uVar40 = 0;
  if (uVar25 <= uVar20) {
    bVar11 = (byte)*(uint *)(param_5 + 0x40);
    uVar29 = ((4L << (bVar11 & 0x3f)) + (uVar20 - *(uint *)(param_5 + 0x44))) - 0x10;
    uVar40 = 0x1f;
    uVar12 = (uint)uVar29;
    if (uVar12 != 0) {
      for (; uVar12 >> uVar40 == 0; uVar40 = uVar40 - 1) {
      }
    }
    uVar40 = (uVar40 ^ 0xffffffe0) + 0x1f;
    uVar41 = (ulong)((uVar29 >> ((ulong)uVar40 & 0x3f) & 1) != 0);
    lVar30 = (ulong)uVar40 - (ulong)*(uint *)(param_5 + 0x40);
    uVar20 = (~(-1 << (bVar11 & 0x1f)) & uVar12) + uVar25 +
             (uVar41 + lVar30 * 2 + 0xfffe << (bVar11 & 0x3f)) | lVar30 * 0x400;
    uVar40 = (uint)(uVar29 - (uVar41 + 2 << ((byte)uVar40 & 0x3f)) >> (bVar11 & 0x3f));
  }
  *(short *)((long)local_c8 + 0xe) = (short)uVar20;
  local_c8[2] = uVar40;
  if (5 < local_80) {
    if (local_80 < 0x82) {
      uVar40 = 0x1f;
      uVar21 = (uint)(local_80 - 2);
      if (uVar21 != 0) {
        for (; uVar21 >> uVar40 == 0; uVar40 = uVar40 - 1) {
        }
      }
      uVar21 = (int)(local_80 - 2 >> ((char)(uVar40 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
               (uVar40 ^ 0xffffffe0) * 2 + 0x40;
    }
    else if (local_80 < 0x842) {
      uVar40 = 0x1f;
      if (uVar21 - 0x42 != 0) {
        for (; uVar21 - 0x42 >> uVar40 == 0; uVar40 = uVar40 - 1) {
        }
      }
      uVar21 = (uVar40 ^ 0xffe0) + 0x2a;
    }
    else {
      uVar21 = 0x15;
      if (0x1841 < local_80) {
        uVar21 = (uint)(ushort)(0x17 - (local_80 < 0x5842));
      }
    }
  }
  uVar40 = iVar24 + (uint)local_68;
  if (uVar40 < 10) {
    uVar12 = uVar40 - 2;
  }
  else if (uVar40 < 0x86) {
    uVar40 = uVar40 - 6;
    uVar12 = 0x1f;
    if (uVar40 != 0) {
      for (; uVar40 >> uVar12 == 0; uVar12 = uVar12 - 1) {
      }
    }
    uVar12 = (uVar40 >> ((char)(uVar12 ^ 0xffffffe0) + 0x1fU & 0x1f)) + (uVar12 ^ 0xffffffe0) * 2 +
             0x42;
  }
  else {
    uVar12 = 0x17;
    if (uVar40 < 0x846) {
      uVar12 = 0x1f;
      if (uVar40 - 0x46 != 0) {
        for (; uVar40 - 0x46 >> uVar12 == 0; uVar12 = uVar12 - 1) {
        }
      }
      uVar12 = (uVar12 ^ 0xffe0) + 0x2c;
    }
  }
  uVar22 = (ushort)uVar12;
  sVar23 = (uVar22 & 7) + ((ushort)uVar21 & 7) * 8;
  if ((((uVar20 & 0x3ff) == 0) && ((ushort)uVar21 < 8)) && (uVar22 < 0x10)) {
    if (7 < uVar22) {
      sVar23 = sVar23 + 0x40;
    }
  }
  else {
    iVar7 = ((uVar21 & 0xffff) >> 3) * 3 + ((uVar12 & 0xffff) >> 3);
    sVar23 = sVar23 + ((ushort)(0x520d40 >> ((char)iVar7 * '\x02' & 0x1fU)) & 0xc0) +
                      (short)iVar7 * 0x40 + 0x40;
  }
  *(short *)(local_c8 + 3) = sVar23;
  *param_11 = *param_11 + local_80;
  param_2 = local_f8 + local_68;
  uVar20 = uVar13;
  if (param_2 < uVar13) {
    uVar20 = param_2;
  }
  uVar25 = local_f8 + 2;
  if (local_e8 < local_68 >> 2) {
    uVar29 = param_2 + (long)local_e8 * -4;
    if (uVar29 < uVar25) {
      uVar29 = uVar25;
    }
    uVar25 = uVar29;
    if (uVar20 < uVar29) {
      uVar25 = uVar20;
    }
  }
  local_f8 = lVar33 + local_68 * 2 + local_f8;
  local_c8 = local_c8 + 4;
  if (uVar25 < uVar20) {
    lVar30 = *(long *)(param_6 + 0x40);
    uVar22 = *(ushort *)(param_6 + 0x30);
    do {
      uVar40 = (uint)(*(int *)(param_3 + (uVar25 & param_4)) * 0x1e35a7bd) >> 0x11;
      uVar29 = (ulong)uVar40;
      uVar41 = uVar25 - *(uint *)(lVar30 + uVar29 * 4);
      *(char *)(lVar30 + 0x30000 + (uVar25 & 0xffff)) = (char)uVar40;
      if (0xfffe < uVar41) {
        uVar41 = 0xffff;
      }
      uVar36 = uVar22 + 1;
      *(short *)(lVar30 + 0x40000 + (ulong)uVar22 * 4) = (short)uVar41;
      *(undefined2 *)(lVar30 + 0x40002 + (ulong)uVar22 * 4) =
           *(undefined2 *)(lVar30 + 0x20000 + uVar29 * 2);
      *(int *)(lVar30 + uVar29 * 4) = (int)uVar25;
      *(ushort *)(lVar30 + 0x20000 + uVar29 * 2) = uVar22;
      uVar25 = uVar25 + 1;
      uVar22 = uVar36;
    } while (uVar20 != uVar25);
    local_80 = 0;
LAB_001f818c:
    *(ushort *)(param_6 + 0x30) = uVar36;
  }
  else {
    local_80 = 0;
  }
LAB_001f81a1:
  uVar20 = param_2;
  if (uVar1 <= param_2 + 4) goto LAB_001f8213;
  goto LAB_001f6e76;
}

