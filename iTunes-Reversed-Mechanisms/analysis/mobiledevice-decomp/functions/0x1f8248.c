// rea decompile_all
// name: _CreateBackwardReferencesNH42
// address: 0x1f8248
// body: available
// range: 0x1f8248-0x1f983c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH42
               (ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
               int *param_7,ulong *param_8,uint *param_9,long *param_10,long *param_11)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  char *pcVar25;
  ulong uVar26;
  ulong uVar27;
  short sVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  int *piVar33;
  ulong uVar34;
  ulong uVar35;
  bool bVar36;
  ushort uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  uint uVar41;
  int iVar42;
  ulong uVar43;
  ulong local_100;
  ulong local_d8;
  ulong local_c8;
  uint *local_c0;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_80;
  ulong local_60;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  bVar17 = *(byte *)(param_5 + 8);
  uVar3 = (param_2 - 3) + param_1;
  uVar18 = param_2;
  if (3 < param_1) {
    uVar18 = uVar3;
  }
  lVar19 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar19 = 0x40;
  }
  lVar5 = *(long *)(param_5 + 0x10);
  iVar11 = (int)*(undefined8 *)param_7;
  iVar42 = (int)((ulong)*(undefined8 *)param_7 >> 0x20);
  local_80 = *param_8;
  param_7[4] = iVar11 + -1;
  param_7[5] = iVar11 + 1;
  param_7[6] = iVar11 + -2;
  param_7[7] = iVar11 + 2;
  param_7[8] = iVar11 + -3;
  param_7[9] = iVar11 + 3;
  param_7[10] = iVar42 + -1;
  param_7[0xb] = iVar42 + 1;
  param_7[0xc] = iVar42 + -2;
  param_7[0xd] = iVar42 + 2;
  param_7[0xe] = iVar42 + -3;
  param_7[0xf] = iVar42 + 3;
  uVar1 = param_2 + param_1;
  if (uVar1 <= param_2 + 4) {
    local_c0 = param_9;
LAB_001f9808:
    *param_8 = (local_80 + uVar1) - param_2;
    *param_10 = *param_10 + ((long)local_c0 - (long)param_9 >> 4);
    return;
  }
  uVar43 = (1L << (bVar17 & 0x3f)) - 0x10;
  local_100 = lVar19 + param_2;
  lVar2 = param_2 - 1;
  local_c0 = param_9;
  uVar26 = param_2;
LAB_001f8385:
  local_b0 = uVar1 - uVar26;
  uVar34 = uVar43;
  if (uVar26 < uVar43) {
    uVar34 = uVar26;
  }
  uVar16 = *(ulong *)(param_5 + 0x50);
  lVar31 = *(long *)(param_6 + 0x438);
  uVar12 = uVar26 & param_4;
  piVar15 = (int *)(param_3 + uVar12);
  uVar41 = (uint)(*(int *)(param_3 + uVar12) * 0x1e35a7bd) >> 0x11;
  uVar40 = (ulong)((uint)local_b0 & 7);
  uVar20 = local_b0 & 0xfffffffffffffff8;
  local_a8 = 0x7e4;
  local_40 = 0;
  lVar13 = 0;
  local_48 = 0;
  local_38 = 0;
  do {
    uVar30 = (ulong)param_7[lVar13];
    uVar21 = uVar26 - uVar30;
    if ((((lVar13 == 0) || (*(char *)(lVar31 + 0x30000 + (uVar21 & 0xffff)) == (char)uVar41)) &&
        (uVar30 <= uVar34)) && (uVar21 < uVar26)) {
      lVar22 = (uVar21 & param_4) + param_3;
      if (7 < local_b0) {
        lVar32 = 0;
        uVar21 = 0;
LAB_001f847e:
        uVar35 = *(ulong *)(lVar22 + uVar21 * 8);
        if (*(ulong *)(piVar15 + uVar21 * 2) == uVar35) goto code_r0x001f848b;
        uVar35 = uVar35 ^ *(ulong *)(piVar15 + uVar21 * 2);
        uVar21 = 0;
        if (uVar35 != 0) {
          for (; (uVar35 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
          }
        }
        uVar21 = (uVar21 >> 3 & 0x1fffffff) - lVar32;
        goto LAB_001f84ca;
      }
      piVar33 = piVar15;
      uVar35 = 0;
LAB_001f8536:
      uVar21 = uVar35;
      if (uVar40 != 0) {
        uVar38 = uVar40 | uVar35;
        uVar39 = uVar40;
        do {
          uVar21 = uVar35;
          if (*(char *)(lVar22 + uVar35) != (char)*piVar33) break;
          piVar33 = (int *)((long)piVar33 + 1);
          uVar35 = uVar35 + 1;
          uVar39 = uVar39 - 1;
          uVar21 = uVar38;
        } while (uVar39 != 0);
      }
LAB_001f84ca:
      if ((1 < uVar21) && (uVar35 = uVar21 * 0x87 + 0x78f, local_a8 < uVar35)) {
        if (lVar13 != 0) {
          uVar35 = uVar35 - ((0x1ca10U >> ((byte)lVar13 & 0xe) & 0xe) + 0x27);
        }
        if (local_a8 < uVar35) {
          local_a8 = uVar35;
          local_48 = uVar21;
          local_40 = uVar21;
          local_38 = uVar30;
        }
      }
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x10);
  uVar21 = uVar26 + lVar5;
  if (uVar43 <= uVar26 + lVar5) {
    uVar21 = uVar43;
  }
  uVar30 = (ulong)uVar41;
  uVar29 = uVar41 & 0x1ff;
  lVar13 = *(long *)(param_6 + 0x430);
  uVar35 = uVar26 - *(uint *)(lVar31 + uVar30 * 4);
  uVar4 = *(ushort *)(lVar31 + 0x20000 + uVar30 * 2);
  if (lVar13 != 0) {
    lVar22 = (ulong)(uVar29 << 0xb) + lVar31 + 0x40000;
    uVar38 = 0;
    uVar39 = uVar35;
    uVar37 = uVar4;
    do {
      uVar38 = uVar39 + uVar38;
      if (uVar34 < uVar38) break;
      if (local_40 + uVar12 <= param_4) {
        uVar14 = uVar26 - uVar38 & param_4;
        uVar39 = uVar14 + local_40;
        if ((uVar39 <= param_4) &&
           (*(char *)(param_3 + local_40 + uVar12) == *(char *)(param_3 + uVar39))) {
          lVar32 = uVar14 + param_3;
          if (7 < local_b0) {
            lVar23 = 0;
            uVar39 = 0;
LAB_001f8675:
            uVar14 = *(ulong *)(lVar32 + uVar39 * 8);
            if (*(ulong *)(piVar15 + uVar39 * 2) == uVar14) goto code_r0x001f8682;
            uVar14 = uVar14 ^ *(ulong *)(piVar15 + uVar39 * 2);
            uVar39 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
              }
            }
            uVar39 = (uVar39 >> 3 & 0x1fffffff) - lVar23;
            goto LAB_001f86d3;
          }
          piVar33 = piVar15;
          uVar14 = 0;
LAB_001f8731:
          uVar39 = uVar14;
          if (uVar40 != 0) {
            uVar27 = uVar40 | uVar14;
            uVar24 = uVar40;
            do {
              uVar39 = uVar14;
              if (*(char *)(lVar32 + uVar14) != (char)*piVar33) break;
              piVar33 = (int *)((long)piVar33 + 1);
              uVar14 = uVar14 + 1;
              uVar24 = uVar24 - 1;
              uVar39 = uVar27;
            } while (uVar24 != 0);
          }
LAB_001f86d3:
          if (3 < uVar39) {
            iVar11 = 0x1f;
            if ((uint)uVar38 != 0) {
              for (; (uint)uVar38 >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            uVar14 = (ulong)(iVar11 * -0x1e + 0x780) + uVar39 * 0x87;
            if (local_a8 < uVar14) {
              local_40 = uVar39;
              local_a8 = uVar14;
              local_48 = uVar39;
              local_38 = uVar38;
            }
          }
        }
      }
      uVar39 = (ulong)uVar37;
      uVar37 = *(ushort *)(lVar22 + 2 + uVar39 * 4);
      uVar39 = (ulong)*(ushort *)(lVar22 + uVar39 * 4);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  uVar37 = *(ushort *)(param_6 + 0x30 + (ulong)uVar29 * 2);
  *(ushort *)(param_6 + 0x30 + (ulong)uVar29 * 2) = uVar37 + 1;
  uVar9 = uVar37 & 0x1ff;
  *(char *)(lVar31 + 0x30000 + (uVar26 & 0xffff)) = (char)uVar41;
  if (0xfffe < uVar35) {
    uVar35 = 0xffff;
  }
  lVar13 = lVar31 + 0x40000 + (ulong)(uVar29 << 0xb);
  *(short *)(lVar13 + (ulong)uVar9 * 4) = (short)uVar35;
  *(ushort *)(lVar13 + 2 + (ulong)uVar9 * 4) = uVar4;
  *(int *)(lVar31 + uVar30 * 4) = (int)uVar26;
  *(short *)(lVar31 + 0x20000 + uVar30 * 2) = (short)uVar9;
  if (local_a8 == 0x7e4) {
    lVar31 = *(long *)(param_6 + 0x440);
    uVar34 = *(ulong *)(lVar31 + 8);
    local_50 = *(ulong *)(lVar31 + 0x10);
    if (uVar34 >> 7 <= local_50) {
      uVar12 = (ulong)((uint)(*piVar15 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
      lVar13 = *(long *)(param_5 + 0x78);
      local_a8 = 0x7e4;
      iVar11 = 0;
      bVar36 = true;
LAB_001f8885:
      uVar34 = uVar34 + 1;
      *(ulong *)(lVar31 + 8) = uVar34;
      bVar17 = *(byte *)(lVar13 + uVar12);
      uVar40 = (ulong)bVar17;
      if ((uVar40 != 0) && (uVar40 <= local_b0)) {
        uVar20 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar12 * 2);
        lVar22 = *(long *)(param_5 + 0x58);
        pcVar25 = (char *)(uVar20 * uVar40 + *(long *)(lVar22 + 0xa8) +
                          (ulong)*(uint *)(lVar22 + 0x20 + uVar40 * 4));
        if (7 < bVar17) {
          uVar30 = (ulong)(bVar17 & 0xfffffff8);
          lVar32 = 0;
          uVar35 = 0;
LAB_001f890a:
          if (*(ulong *)(pcVar25 + uVar35 * 8) == *(ulong *)(piVar15 + uVar35 * 2))
          goto code_r0x001f891b;
          uVar35 = *(ulong *)(piVar15 + uVar35 * 2) ^ *(ulong *)(pcVar25 + uVar35 * 8);
          uVar30 = 0;
          if (uVar35 != 0) {
            for (; (uVar35 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
            }
          }
          uVar35 = (uVar30 >> 3 & 0x1fffffff) - lVar32;
          goto LAB_001f8950;
        }
        uVar30 = 0;
        goto LAB_001f8a40;
      }
      goto LAB_001f88ae;
    }
  }
  else {
    iVar11 = 0;
LAB_001f8a90:
    if (0x7e4 < local_a8) {
      uVar34 = (lVar2 + param_1) - uVar26;
      uVar41 = 0;
      local_d8 = local_38;
LAB_001f8abf:
      local_b0 = local_b0 - 1;
      local_60 = local_48 - 1;
      if (local_b0 <= local_48 - 1) {
        local_60 = local_b0;
      }
      if (4 < *(int *)(param_5 + 4)) {
        local_60 = 0;
      }
      local_100 = uVar26 + 1;
      uVar16 = uVar43;
      if (local_100 < uVar43) {
        uVar16 = local_100;
      }
      local_a0 = uVar26 + 1 + lVar5;
      uVar12 = *(ulong *)(param_5 + 0x50);
      lVar31 = *(long *)(param_6 + 0x438);
      uVar20 = local_100 & param_4;
      piVar15 = (int *)(uVar20 + param_3);
      uVar29 = (uint)(*(int *)(param_3 + uVar20) * 0x1e35a7bd) >> 0x11;
      uVar21 = (ulong)((uint)local_b0 & 7);
      uVar40 = 0x7e4;
      lVar13 = 0;
      local_40 = 0;
      local_38 = 0;
LAB_001f8ba1:
      uVar35 = (ulong)param_7[lVar13];
      uVar30 = local_100 - uVar35;
      if (((lVar13 == 0) || (*(char *)(lVar31 + 0x30000 + (uVar30 & 0xffff)) == (char)uVar29)) &&
         ((uVar35 <= uVar16 && (uVar30 < local_100)))) {
        lVar22 = (uVar30 & param_4) + param_3;
        uVar30 = uVar21;
        if (7 < local_b0) {
          lVar32 = 0;
          uVar39 = 0;
LAB_001f8bec:
          uVar38 = *(ulong *)(lVar22 + uVar39 * 8);
          if (*(ulong *)(piVar15 + uVar39 * 2) == uVar38) goto code_r0x001f8bfd;
          uVar38 = uVar38 ^ *(ulong *)(piVar15 + uVar39 * 2);
          uVar30 = 0;
          if (uVar38 != 0) {
            for (; (uVar38 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
            }
          }
          uVar39 = (uVar30 >> 3 & 0x1fffffff) - lVar32;
          goto LAB_001f8c2a;
        }
        uVar39 = 0;
        piVar33 = piVar15;
        goto joined_r0x001f8c9f;
      }
      goto LAB_001f8c7b;
    }
  }
  local_80 = local_80 + 1;
  param_2 = uVar26 + 1;
  if (local_100 < param_2) {
    if ((uint)((int)lVar19 * 4) + local_100 < param_2) {
      uVar34 = uVar26 + 0x11;
      if (uVar1 - 4 <= uVar26 + 0x11) {
        uVar34 = uVar1 - 4;
      }
      if (param_2 < uVar34) {
        lVar31 = *(long *)(param_6 + 0x438);
        do {
          uVar41 = (uint)(*(int *)(param_3 + (param_2 & param_4)) * 0x1e35a7bd) >> 0x11;
          uVar26 = (ulong)uVar41;
          uVar9 = uVar41 & 0x1ff;
          uVar4 = *(ushort *)(param_6 + 0x30 + (ulong)uVar9 * 2);
          *(ushort *)(param_6 + 0x30 + (ulong)uVar9 * 2) = uVar4 + 1;
          uVar29 = uVar4 & 0x1ff;
          uVar16 = param_2 - *(uint *)(lVar31 + uVar26 * 4);
          if (0xfffe < uVar16) {
            uVar16 = 0xffff;
          }
          *(char *)(lVar31 + 0x30000 + (param_2 & 0xffff)) = (char)uVar41;
          lVar13 = (ulong)(uVar9 << 0xb) + lVar31 + 0x40000;
          *(short *)(lVar13 + (ulong)uVar29 * 4) = (short)uVar16;
          *(undefined2 *)(lVar13 + 2 + (ulong)uVar29 * 4) =
               *(undefined2 *)(lVar31 + 0x20000 + uVar26 * 2);
          *(int *)(lVar31 + uVar26 * 4) = (int)param_2;
          *(short *)(lVar31 + 0x20000 + uVar26 * 2) = (short)uVar29;
          local_80 = local_80 + 4;
          param_2 = param_2 + 4;
        } while (param_2 < uVar34);
      }
    }
    else {
      uVar34 = uVar26 + 9;
      if (uVar3 <= uVar26 + 9) {
        uVar34 = uVar3;
      }
      if (param_2 < uVar34) {
        lVar31 = *(long *)(param_6 + 0x438);
        do {
          uVar41 = (uint)(*(int *)(param_3 + (param_2 & param_4)) * 0x1e35a7bd) >> 0x11;
          uVar26 = (ulong)uVar41;
          uVar9 = uVar41 & 0x1ff;
          uVar4 = *(ushort *)(param_6 + 0x30 + (ulong)uVar9 * 2);
          *(ushort *)(param_6 + 0x30 + (ulong)uVar9 * 2) = uVar4 + 1;
          uVar29 = uVar4 & 0x1ff;
          uVar16 = param_2 - *(uint *)(lVar31 + uVar26 * 4);
          if (0xfffe < uVar16) {
            uVar16 = 0xffff;
          }
          *(char *)(lVar31 + 0x30000 + (param_2 & 0xffff)) = (char)uVar41;
          lVar13 = (ulong)(uVar9 << 0xb) + lVar31 + 0x40000;
          *(short *)(lVar13 + (ulong)uVar29 * 4) = (short)uVar16;
          *(undefined2 *)(lVar13 + 2 + (ulong)uVar29 * 4) =
               *(undefined2 *)(lVar31 + 0x20000 + uVar26 * 2);
          *(int *)(lVar31 + uVar26 * 4) = (int)param_2;
          *(short *)(lVar31 + 0x20000 + uVar26 * 2) = (short)uVar29;
          local_80 = local_80 + 2;
          param_2 = param_2 + 2;
        } while (param_2 < uVar34);
      }
    }
  }
  goto LAB_001f9791;
code_r0x001f848b:
  uVar21 = uVar21 + 1;
  lVar32 = lVar32 + -8;
  piVar33 = (int *)((long)piVar15 + uVar20);
  uVar35 = uVar20;
  if (local_b0 >> 3 == uVar21) goto LAB_001f8536;
  goto LAB_001f847e;
code_r0x001f8682:
  uVar39 = uVar39 + 1;
  lVar23 = lVar23 + -8;
  piVar33 = (int *)((long)piVar15 + uVar20);
  uVar14 = uVar20;
  if (local_b0 >> 3 == uVar39) goto LAB_001f8731;
  goto LAB_001f8675;
code_r0x001f891b:
  uVar35 = uVar35 + 1;
  lVar32 = lVar32 + -8;
  if (bVar17 >> 3 == uVar35) goto code_r0x001f8927;
  goto LAB_001f890a;
code_r0x001f8927:
  pcVar25 = pcVar25 + -lVar32;
LAB_001f8a40:
  uVar39 = uVar40 & 7;
  uVar35 = uVar30;
  if ((bVar17 & 7) != 0) {
    uVar38 = uVar30 | uVar39;
    do {
      uVar35 = uVar30;
      if (*(char *)((long)piVar15 + uVar30) != *pcVar25) break;
      pcVar25 = pcVar25 + 1;
      uVar30 = uVar30 + 1;
      uVar39 = uVar39 - 1;
      uVar35 = uVar38;
    } while (uVar39 != 0);
  }
LAB_001f8950:
  if (((uVar35 != 0) && (uVar40 < *(uint *)(param_5 + 100) + uVar35)) &&
     (uVar40 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar40 - uVar35) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar40 - uVar35) * 4 << (*(byte *)(lVar22 + uVar40) & 0x3f)) + uVar20 + uVar21 + 1,
     uVar40 <= uVar16)) {
    iVar42 = 0x1f;
    if ((uint)uVar40 != 0) {
      for (; (uint)uVar40 >> iVar42 == 0; iVar42 = iVar42 + -1) {
      }
    }
    uVar20 = (uVar35 * 0x87 - (ulong)(uint)(iVar42 * 0x1e)) + 0x780;
    if (local_a8 <= uVar20) {
      iVar11 = (uint)bVar17 - (int)uVar35;
      local_50 = local_50 + 1;
      *(ulong *)(lVar31 + 0x10) = local_50;
      local_a8 = uVar20;
      local_48 = uVar35;
      local_38 = uVar40;
    }
  }
LAB_001f88ae:
  uVar12 = uVar12 + 1;
  bVar8 = !bVar36;
  bVar36 = false;
  if (bVar8) goto LAB_001f8a90;
  goto LAB_001f8885;
code_r0x001f8bfd:
  uVar39 = uVar39 + 1;
  lVar32 = lVar32 + -8;
  if (uVar34 >> 3 == uVar39) goto code_r0x001f8c0d;
  goto LAB_001f8bec;
code_r0x001f8c0d:
  uVar39 = -lVar32;
  piVar33 = (int *)((long)piVar15 - lVar32);
joined_r0x001f8c9f:
  for (; (uVar30 != 0 && (*(char *)(lVar22 + uVar39) == (char)*piVar33)); uVar39 = uVar39 + 1) {
    uVar30 = uVar30 - 1;
    piVar33 = (int *)((long)piVar33 + 1);
  }
LAB_001f8c2a:
  if ((1 < uVar39) && (uVar30 = uVar39 * 0x87 + 0x78f, uVar40 < uVar30)) {
    if (lVar13 != 0) {
      uVar30 = uVar30 - ((0x1ca10U >> ((byte)lVar13 & 0xe) & 0xe) + 0x27);
    }
    if (uVar40 < uVar30) {
      uVar40 = uVar30;
      local_60 = uVar39;
      local_40 = uVar39;
      local_38 = uVar35;
    }
  }
LAB_001f8c7b:
  lVar13 = lVar13 + 1;
  if (lVar13 == 0x10) goto LAB_001f8cb9;
  goto LAB_001f8ba1;
LAB_001f8cb9:
  if (uVar43 <= local_a0) {
    local_a0 = uVar43;
  }
  uVar30 = (ulong)uVar29;
  uVar9 = uVar29 & 0x1ff;
  lVar13 = *(long *)(param_6 + 0x430);
  uVar35 = local_100 - *(uint *)(lVar31 + uVar30 * 4);
  uVar4 = *(ushort *)(lVar31 + 0x20000 + uVar30 * 2);
  if (lVar13 != 0) {
    lVar22 = (ulong)(uVar9 << 0xb) + lVar31 + 0x40000;
    uVar38 = 0;
    uVar39 = uVar35;
    uVar37 = uVar4;
LAB_001f8d34:
    uVar38 = uVar39 + uVar38;
    if (uVar38 <= uVar16) {
      if (local_60 + uVar20 <= param_4) {
        uVar14 = local_100 - uVar38 & param_4;
        uVar39 = local_60 + uVar14;
        if ((param_4 < uVar39) ||
           (*(char *)(param_3 + local_60 + uVar20) != *(char *)(param_3 + uVar39)))
        goto LAB_001f8e0a;
        lVar32 = uVar14 + param_3;
        uVar39 = uVar21;
        if (7 < local_b0) {
          lVar23 = 0;
          uVar14 = 0;
LAB_001f8d92:
          uVar24 = *(ulong *)(lVar32 + uVar14 * 8);
          if (*(ulong *)(piVar15 + uVar14 * 2) == uVar24) goto code_r0x001f8da3;
          uVar24 = uVar24 ^ *(ulong *)(piVar15 + uVar14 * 2);
          uVar39 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> uVar39 & 1) == 0; uVar39 = uVar39 + 1) {
            }
          }
          uVar14 = (uVar39 >> 3 & 0x1fffffff) - lVar23;
          goto LAB_001f8dda;
        }
        uVar14 = 0;
        piVar33 = piVar15;
        goto joined_r0x001f8e38;
      }
      goto LAB_001f8e0a;
    }
  }
LAB_001f8e79:
  uVar37 = *(ushort *)(param_6 + 0x30 + (ulong)uVar9 * 2);
  *(ushort *)(param_6 + 0x30 + (ulong)uVar9 * 2) = uVar37 + 1;
  uVar10 = uVar37 & 0x1ff;
  *(char *)(lVar31 + 0x30000 + (local_100 & 0xffff)) = (char)uVar29;
  if (0xfffe < uVar35) {
    uVar35 = 0xffff;
  }
  lVar13 = lVar31 + 0x40000 + (ulong)(uVar9 << 0xb);
  *(short *)(lVar13 + (ulong)uVar10 * 4) = (short)uVar35;
  *(ushort *)(lVar13 + 2 + (ulong)uVar10 * 4) = uVar4;
  *(int *)(lVar31 + uVar30 * 4) = (int)local_100;
  *(short *)(lVar31 + 0x20000 + uVar30 * 2) = (short)uVar10;
  if (uVar40 == 0x7e4) {
    lVar31 = *(long *)(param_6 + 0x440);
    uVar16 = *(ulong *)(lVar31 + 8);
    local_c8 = *(ulong *)(lVar31 + 0x10);
    uVar40 = 0x7e4;
    if (uVar16 >> 7 <= local_c8) {
      uVar20 = (ulong)((uint)(*piVar15 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
      lVar13 = *(long *)(param_5 + 0x78);
      iVar42 = 0;
      uVar40 = 0x7e4;
      bVar36 = true;
LAB_001f9005:
      uVar16 = uVar16 + 1;
      *(ulong *)(lVar31 + 8) = uVar16;
      bVar17 = *(byte *)(lVar13 + uVar20);
      uVar21 = (ulong)bVar17;
      if ((uVar21 != 0) && (uVar21 <= local_b0)) {
        uVar30 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar20 * 2);
        lVar22 = *(long *)(param_5 + 0x58);
        pcVar25 = (char *)(uVar30 * uVar21 + *(long *)(lVar22 + 0xa8) +
                          (ulong)*(uint *)(lVar22 + 0x20 + uVar21 * 4));
        if (7 < bVar17) {
          uVar39 = (ulong)(bVar17 & 0xfffffff8);
          lVar32 = 0;
          uVar35 = 0;
LAB_001f9076:
          if (*(ulong *)(pcVar25 + uVar35 * 8) == *(ulong *)(piVar15 + uVar35 * 2))
          goto code_r0x001f9087;
          uVar39 = *(ulong *)(piVar15 + uVar35 * 2) ^ *(ulong *)(pcVar25 + uVar35 * 8);
          uVar35 = 0;
          if (uVar39 != 0) {
            for (; (uVar39 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar35 = (uVar35 >> 3 & 0x1fffffff) - lVar32;
          goto LAB_001f90b9;
        }
        uVar39 = 0;
        goto LAB_001f9191;
      }
      goto LAB_001f9115;
    }
    iVar42 = 0;
  }
  else {
    iVar42 = 0;
  }
LAB_001f8f3f:
  if (uVar40 < local_a8 + 0xaf) {
    local_100 = uVar26;
    local_40 = local_48;
    local_a0 = uVar26 + lVar5;
    iVar42 = iVar11;
    if (uVar43 <= uVar26 + lVar5) {
      local_a0 = uVar43;
    }
    goto LAB_001f93d3;
  }
  local_80 = local_80 + 1;
  local_d8 = local_38;
  if (2 < uVar41) goto LAB_001f93d3;
  uVar16 = uVar26 + 5;
  uVar41 = uVar41 + 1;
  uVar34 = uVar34 - 1;
  local_a8 = uVar40;
  local_48 = local_40;
  uVar26 = local_100;
  iVar11 = iVar42;
  if (uVar1 <= uVar16) goto LAB_001f93d3;
  goto LAB_001f8abf;
code_r0x001f8da3:
  uVar14 = uVar14 + 1;
  lVar23 = lVar23 + -8;
  if (uVar34 >> 3 == uVar14) goto code_r0x001f8db3;
  goto LAB_001f8d92;
code_r0x001f8db3:
  uVar14 = -lVar23;
  piVar33 = (int *)((long)piVar15 - lVar23);
joined_r0x001f8e38:
  for (; (uVar39 != 0 && (*(char *)(lVar32 + uVar14) == (char)*piVar33)); uVar14 = uVar14 + 1) {
    piVar33 = (int *)((long)piVar33 + 1);
    uVar39 = uVar39 - 1;
  }
LAB_001f8dda:
  if (3 < uVar14) {
    iVar42 = 0x1f;
    if ((uint)uVar38 != 0) {
      for (; (uint)uVar38 >> iVar42 == 0; iVar42 = iVar42 + -1) {
      }
    }
    uVar39 = (ulong)(iVar42 * -0x1e + 0x780) + uVar14 * 0x87;
    if (uVar40 < uVar39) {
      uVar40 = uVar39;
      local_60 = uVar14;
      local_40 = uVar14;
      local_38 = uVar38;
    }
  }
LAB_001f8e0a:
  uVar39 = (ulong)uVar37;
  uVar37 = *(ushort *)(lVar22 + 2 + uVar39 * 4);
  uVar39 = (ulong)*(ushort *)(lVar22 + uVar39 * 4);
  lVar13 = lVar13 + -1;
  if (lVar13 == 0) goto LAB_001f8e79;
  goto LAB_001f8d34;
code_r0x001f9087:
  uVar35 = uVar35 + 1;
  lVar32 = lVar32 + -8;
  if (bVar17 >> 3 == uVar35) goto code_r0x001f9093;
  goto LAB_001f9076;
code_r0x001f9093:
  pcVar25 = pcVar25 + -lVar32;
LAB_001f9191:
  uVar38 = uVar21 & 7;
  uVar35 = uVar39;
  if ((bVar17 & 7) != 0) {
    uVar14 = uVar39 | uVar38;
    do {
      uVar35 = uVar39;
      if (*(char *)((long)piVar15 + uVar39) != *pcVar25) break;
      pcVar25 = pcVar25 + 1;
      uVar39 = uVar39 + 1;
      uVar38 = uVar38 - 1;
      uVar35 = uVar14;
    } while (uVar38 != 0);
  }
LAB_001f90b9:
  if (((uVar35 != 0) && (uVar21 < *(uint *)(param_5 + 100) + uVar35)) &&
     (uVar21 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar21 - uVar35) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar21 - uVar35) * 4 << (*(byte *)(lVar22 + uVar21) & 0x3f)) +
               uVar30 + local_a0 + 1, uVar21 <= uVar12)) {
    iVar7 = 0x1f;
    if ((uint)uVar21 != 0) {
      for (; (uint)uVar21 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    uVar30 = (uVar35 * 0x87 - (ulong)(uint)(iVar7 * 0x1e)) + 0x780;
    if (uVar40 <= uVar30) {
      iVar42 = (uint)bVar17 - (int)uVar35;
      local_c8 = local_c8 + 1;
      *(ulong *)(lVar31 + 0x10) = local_c8;
      local_38 = uVar21;
      local_40 = uVar35;
      uVar40 = uVar30;
    }
  }
LAB_001f9115:
  uVar20 = uVar20 + 1;
  bVar8 = !bVar36;
  bVar36 = false;
  if (bVar8) goto LAB_001f8f3f;
  goto LAB_001f9005;
LAB_001f93d3:
  if (local_a0 < local_d8) {
LAB_001f93ec:
    uVar26 = local_d8 + 0xf;
  }
  else {
    if (local_d8 == (long)*param_7) {
      uVar26 = 0;
      goto LAB_001f9478;
    }
    uVar26 = 1;
    if (local_d8 != (long)param_7[1]) {
      uVar26 = (local_d8 + 3) - (long)*param_7;
      if (uVar26 < 7) {
        bVar17 = (byte)((int)uVar26 << 2);
        uVar41 = 0x9750468;
      }
      else {
        uVar26 = (local_d8 + 3) - (long)param_7[1];
        if (6 < uVar26) {
          uVar26 = 2;
          if ((local_d8 != (long)param_7[2]) && (uVar26 = 3, local_d8 != (long)param_7[3]))
          goto LAB_001f93ec;
          goto LAB_001f93f0;
        }
        bVar17 = (byte)((int)uVar26 << 2);
        uVar41 = 0xfdb1ace;
      }
      uVar26 = (ulong)(uVar41 >> (bVar17 & 0x1f) & 0xf);
    }
  }
LAB_001f93f0:
  if ((local_d8 <= local_a0) && (uVar26 != 0)) {
    param_7[3] = param_7[2];
    uVar6 = *(undefined8 *)param_7;
    *(undefined8 *)(param_7 + 1) = uVar6;
    iVar11 = (int)local_d8;
    *param_7 = iVar11;
    param_7[4] = iVar11 + -1;
    param_7[5] = iVar11 + 1;
    param_7[6] = iVar11 + -2;
    param_7[7] = iVar11 + 2;
    param_7[8] = iVar11 + -3;
    param_7[9] = iVar11 + 3;
    iVar11 = (int)uVar6;
    param_7[10] = iVar11 + -1;
    param_7[0xb] = iVar11 + 1;
    param_7[0xc] = iVar11 + -2;
    param_7[0xd] = iVar11 + 2;
    *(ulong *)(param_7 + 0xe) = CONCAT44(iVar11 + 3,iVar11 + -3);
  }
LAB_001f9478:
  uVar29 = (uint)local_80;
  *local_c0 = uVar29;
  local_c0[1] = iVar42 << 0x19 | (uint)local_40;
  uVar34 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
  uVar41 = 0;
  if (uVar34 <= uVar26) {
    bVar17 = (byte)*(uint *)(param_5 + 0x40);
    uVar16 = ((4L << (bVar17 & 0x3f)) + (uVar26 - *(uint *)(param_5 + 0x44))) - 0x10;
    uVar41 = 0x1f;
    uVar9 = (uint)uVar16;
    if (uVar9 != 0) {
      for (; uVar9 >> uVar41 == 0; uVar41 = uVar41 - 1) {
      }
    }
    uVar41 = (uVar41 ^ 0xffffffe0) + 0x1f;
    uVar12 = (ulong)((uVar16 >> ((ulong)uVar41 & 0x3f) & 1) != 0);
    lVar31 = (ulong)uVar41 - (ulong)*(uint *)(param_5 + 0x40);
    uVar26 = (~(-1 << (bVar17 & 0x1f)) & uVar9) + uVar34 +
             (uVar12 + lVar31 * 2 + 0xfffe << (bVar17 & 0x3f)) | lVar31 * 0x400;
    uVar41 = (uint)(uVar16 - (uVar12 + 2 << ((byte)uVar41 & 0x3f)) >> (bVar17 & 0x3f));
  }
  *(short *)((long)local_c0 + 0xe) = (short)uVar26;
  local_c0[2] = uVar41;
  if (5 < local_80) {
    if (local_80 < 0x82) {
      uVar41 = 0x1f;
      uVar29 = (uint)(local_80 - 2);
      if (uVar29 != 0) {
        for (; uVar29 >> uVar41 == 0; uVar41 = uVar41 - 1) {
        }
      }
      uVar29 = (int)(local_80 - 2 >> ((char)(uVar41 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
               (uVar41 ^ 0xffffffe0) * 2 + 0x40;
    }
    else if (local_80 < 0x842) {
      uVar41 = 0x1f;
      if (uVar29 - 0x42 != 0) {
        for (; uVar29 - 0x42 >> uVar41 == 0; uVar41 = uVar41 - 1) {
        }
      }
      uVar29 = (uVar41 ^ 0xffe0) + 0x2a;
    }
    else {
      uVar29 = 0x15;
      if (0x1841 < local_80) {
        uVar29 = (uint)(ushort)(0x17 - (local_80 < 0x5842));
      }
    }
  }
  uVar41 = iVar42 + (uint)local_40;
  if (uVar41 < 10) {
    uVar9 = uVar41 - 2;
  }
  else if (uVar41 < 0x86) {
    uVar41 = uVar41 - 6;
    uVar9 = 0x1f;
    if (uVar41 != 0) {
      for (; uVar41 >> uVar9 == 0; uVar9 = uVar9 - 1) {
      }
    }
    uVar9 = (uVar41 >> ((char)(uVar9 ^ 0xffffffe0) + 0x1fU & 0x1f)) + (uVar9 ^ 0xffffffe0) * 2 +
            0x42;
  }
  else {
    uVar9 = 0x17;
    if (uVar41 < 0x846) {
      uVar9 = 0x1f;
      if (uVar41 - 0x46 != 0) {
        for (; uVar41 - 0x46 >> uVar9 == 0; uVar9 = uVar9 - 1) {
        }
      }
      uVar9 = (uVar9 ^ 0xffe0) + 0x2c;
    }
  }
  uVar4 = (ushort)uVar9;
  sVar28 = (uVar4 & 7) + ((ushort)uVar29 & 7) * 8;
  if ((((uVar26 & 0x3ff) == 0) && ((ushort)uVar29 < 8)) && (uVar4 < 0x10)) {
    if (7 < uVar4) {
      sVar28 = sVar28 + 0x40;
    }
  }
  else {
    iVar11 = ((uVar29 & 0xffff) >> 3) * 3 + ((uVar9 & 0xffff) >> 3);
    sVar28 = sVar28 + ((ushort)(0x520d40 >> ((char)iVar11 * '\x02' & 0x1fU)) & 0xc0) +
                      (short)iVar11 * 0x40 + 0x40;
  }
  *(short *)(local_c0 + 3) = sVar28;
  *param_11 = *param_11 + local_80;
  param_2 = local_40 + local_100;
  uVar26 = uVar18;
  if (param_2 < uVar18) {
    uVar26 = param_2;
  }
  uVar34 = local_100 + 2;
  if (local_d8 < local_40 >> 2) {
    uVar16 = param_2 + local_d8 * -4;
    if (uVar16 < uVar34) {
      uVar16 = uVar34;
    }
    uVar34 = uVar16;
    if (uVar26 < uVar16) {
      uVar34 = uVar26;
    }
  }
  local_100 = lVar19 + local_40 * 2 + local_100;
  local_c0 = local_c0 + 4;
  if (uVar34 < uVar26) {
    lVar31 = *(long *)(param_6 + 0x438);
    do {
      uVar41 = (uint)(*(int *)(param_3 + (uVar34 & param_4)) * 0x1e35a7bd) >> 0x11;
      uVar12 = (ulong)uVar41;
      uVar9 = uVar41 & 0x1ff;
      uVar4 = *(ushort *)(param_6 + 0x30 + (ulong)uVar9 * 2);
      *(ushort *)(param_6 + 0x30 + (ulong)uVar9 * 2) = uVar4 + 1;
      uVar29 = uVar4 & 0x1ff;
      uVar16 = uVar34 - *(uint *)(lVar31 + uVar12 * 4);
      *(char *)(lVar31 + 0x30000 + (uVar34 & 0xffff)) = (char)uVar41;
      if (0xfffe < uVar16) {
        uVar16 = 0xffff;
      }
      lVar13 = (ulong)(uVar9 << 0xb) + lVar31 + 0x40000;
      *(short *)(lVar13 + (ulong)uVar29 * 4) = (short)uVar16;
      *(undefined2 *)(lVar13 + 2 + (ulong)uVar29 * 4) =
           *(undefined2 *)(lVar31 + 0x20000 + uVar12 * 2);
      *(int *)(lVar31 + uVar12 * 4) = (int)uVar34;
      *(short *)(lVar31 + 0x20000 + uVar12 * 2) = (short)uVar29;
      uVar34 = uVar34 + 1;
    } while (uVar26 != uVar34);
    local_80 = 0;
  }
  else {
    local_80 = 0;
  }
LAB_001f9791:
  uVar26 = param_2;
  if (uVar1 <= param_2 + 4) goto LAB_001f9808;
  goto LAB_001f8385;
}

