// rea decompile_all
// name: _CreateBackwardReferencesNH40
// address: 0x1f590a
// body: available
// range: 0x1f590a-0x1f6d4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH40
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
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  char *pcVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ushort uVar25;
  short sVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  int *piVar33;
  ulong uVar34;
  uint uVar35;
  char cVar36;
  uint uVar37;
  ulong uVar38;
  bool bVar39;
  ushort uVar40;
  ushort uVar41;
  ulong uVar42;
  ulong local_e8;
  uint *local_e0;
  ulong local_d0;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  int local_8c;
  ulong local_68;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  
  uVar3 = (param_2 - 3) + param_1;
  uVar14 = param_2;
  if (3 < param_1) {
    uVar14 = uVar3;
  }
  lVar27 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar27 = 0x40;
  }
  local_d0 = *param_8;
  uVar1 = param_2 + param_1;
  if (uVar1 <= param_2 + 4) {
    local_e0 = param_9;
LAB_001f6d1a:
    *param_8 = (local_d0 + uVar1) - param_2;
    *param_10 = *param_10 + ((long)local_e0 - (long)param_9 >> 4);
    return;
  }
  uVar38 = (1L << (*(byte *)(param_5 + 8) & 0x3f)) - 0x10;
  lVar4 = *(long *)(param_5 + 0x10);
  local_e8 = lVar27 + param_2;
  lVar2 = param_2 - 1;
  local_e0 = param_9;
  uVar22 = param_2;
LAB_001f59ff:
  local_b0 = uVar1 - uVar22;
  uVar9 = uVar38;
  if (uVar22 < uVar38) {
    uVar9 = uVar22;
  }
  uVar12 = *(ulong *)(param_5 + 0x50);
  lVar31 = *(long *)(param_6 + 0x40);
  uVar15 = uVar22 & param_4;
  piVar10 = (int *)(param_3 + uVar15);
  uVar37 = (uint)(*(int *)(param_3 + uVar15) * 0x1e35a7bd) >> 0x11;
  uVar11 = (ulong)((uint)local_b0 & 7);
  uVar20 = local_b0 & 0xfffffffffffffff8;
  local_58 = 0x7e4;
  uVar34 = 0;
  lVar8 = 0;
  local_40 = 0;
  local_48 = 0;
  do {
    uVar28 = (ulong)param_7[lVar8];
    uVar16 = uVar22 - uVar28;
    cVar36 = (char)uVar37;
    if ((((lVar8 == 0) || (*(char *)(lVar31 + 0x30000 + (uVar16 & 0xffff)) == cVar36)) &&
        (uVar28 <= uVar9)) && (uVar16 < uVar22)) {
      lVar17 = (uVar16 & param_4) + param_3;
      if (7 < local_b0) {
        lVar32 = 0;
        uVar16 = 0;
LAB_001f5af2:
        uVar30 = *(ulong *)(lVar17 + uVar16 * 8);
        if (*(ulong *)(piVar10 + uVar16 * 2) == uVar30) goto code_r0x001f5b03;
        uVar30 = uVar30 ^ *(ulong *)(piVar10 + uVar16 * 2);
        uVar16 = 0;
        if (uVar30 != 0) {
          for (; (uVar30 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
          }
        }
        uVar16 = (uVar16 >> 3 & 0x1fffffff) - lVar32;
        goto LAB_001f5b40;
      }
      uVar30 = 0;
      piVar33 = piVar10;
LAB_001f5ba2:
      uVar16 = uVar30;
      if (uVar11 != 0) {
        uVar24 = uVar11 | uVar30;
        uVar42 = uVar11;
        do {
          uVar16 = uVar30;
          if (*(char *)(lVar17 + uVar30) != (char)*piVar33) break;
          piVar33 = (int *)((long)piVar33 + 1);
          uVar30 = uVar30 + 1;
          uVar42 = uVar42 - 1;
          uVar16 = uVar24;
        } while (uVar42 != 0);
      }
LAB_001f5b40:
      if ((1 < uVar16) && (uVar30 = uVar16 * 0x87 + 0x78f, local_58 < uVar30)) {
        if (lVar8 != 0) {
          uVar30 = uVar30 - ((0x1ca10U >> ((byte)lVar8 & 2) & 4) + 0x27);
        }
        if (local_58 < uVar30) {
          uVar34 = uVar16;
          local_58 = uVar30;
          local_48 = uVar28;
          local_40 = uVar16;
        }
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  uVar16 = uVar22 + lVar4;
  if (uVar38 <= uVar22 + lVar4) {
    uVar16 = uVar38;
  }
  uVar30 = (ulong)uVar37;
  lVar8 = *(long *)(param_6 + 0x38);
  uVar28 = uVar22 - *(uint *)(lVar31 + uVar30 * 4);
  uVar25 = *(ushort *)(lVar31 + 0x20000 + uVar30 * 2);
  if (lVar8 != 0) {
    uVar24 = 0;
    uVar42 = uVar28;
    uVar40 = uVar25;
    do {
      uVar24 = uVar42 + uVar24;
      if (uVar9 < uVar24) break;
      if (uVar15 + uVar34 <= param_4) {
        uVar29 = uVar22 - uVar24 & param_4;
        uVar42 = uVar29 + uVar34;
        if ((uVar42 <= param_4) &&
           (*(char *)(param_3 + uVar15 + uVar34) == *(char *)(param_3 + uVar42))) {
          lVar17 = uVar29 + param_3;
          if (7 < local_b0) {
            lVar32 = 0;
            uVar42 = 0;
LAB_001f5c80:
            uVar29 = *(ulong *)(lVar17 + uVar42 * 8);
            if (*(ulong *)(piVar10 + uVar42 * 2) == uVar29) goto code_r0x001f5c91;
            uVar29 = uVar29 ^ *(ulong *)(piVar10 + uVar42 * 2);
            uVar42 = 0;
            if (uVar29 != 0) {
              for (; (uVar29 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
              }
            }
            uVar42 = (uVar42 >> 3 & 0x1fffffff) - lVar32;
            goto LAB_001f5ce4;
          }
          piVar33 = piVar10;
          uVar29 = 0;
LAB_001f5d21:
          uVar42 = uVar29;
          if (uVar11 != 0) {
            uVar21 = uVar11 | uVar29;
            uVar18 = uVar11;
            do {
              uVar42 = uVar29;
              if (*(char *)(lVar17 + uVar29) != (char)*piVar33) break;
              piVar33 = (int *)((long)piVar33 + 1);
              uVar29 = uVar29 + 1;
              uVar18 = uVar18 - 1;
              uVar42 = uVar21;
            } while (uVar18 != 0);
          }
LAB_001f5ce4:
          if (3 < uVar42) {
            iVar7 = 0x1f;
            if ((uint)uVar24 != 0) {
              for (; (uint)uVar24 >> iVar7 == 0; iVar7 = iVar7 + -1) {
              }
            }
            uVar29 = (ulong)(iVar7 * -0x1e + 0x780) + uVar42 * 0x87;
            if (local_58 < uVar29) {
              uVar34 = uVar42;
              local_40 = uVar42;
              local_58 = uVar29;
              local_48 = uVar24;
            }
          }
        }
      }
      uVar42 = (ulong)uVar40;
      uVar40 = *(ushort *)(lVar31 + 0x40002 + uVar42 * 4);
      uVar42 = (ulong)*(ushort *)(lVar31 + 0x40000 + uVar42 * 4);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  uVar40 = *(ushort *)(param_6 + 0x30);
  *(ushort *)(param_6 + 0x30) = uVar40 + 1;
  *(char *)(lVar31 + 0x30000 + (uVar22 & 0xffff)) = cVar36;
  if (0xfffe < uVar28) {
    uVar28 = 0xffff;
  }
  *(short *)(lVar31 + 0x40000 + (ulong)uVar40 * 4) = (short)uVar28;
  *(ushort *)(lVar31 + 0x40002 + (ulong)uVar40 * 4) = uVar25;
  *(int *)(lVar31 + uVar30 * 4) = (int)uVar22;
  *(ushort *)(lVar31 + 0x20000 + uVar30 * 2) = uVar40;
  if (local_58 == 0x7e4) {
    lVar31 = *(long *)(param_6 + 0x48);
    uVar34 = *(ulong *)(lVar31 + 8);
    local_58 = *(ulong *)(lVar31 + 0x10);
    if (uVar34 >> 7 <= local_58) {
      uVar15 = (ulong)((uint)(*piVar10 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
      lVar8 = *(long *)(param_5 + 0x78);
      uVar9 = 0x7e4;
      local_8c = 0;
      bVar39 = true;
LAB_001f5e2b:
      uVar34 = uVar34 + 1;
      *(ulong *)(lVar31 + 8) = uVar34;
      bVar13 = *(byte *)(lVar8 + uVar15);
      uVar11 = (ulong)bVar13;
      if ((uVar11 != 0) && (uVar11 <= local_b0)) {
        uVar20 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar15 * 2);
        lVar17 = *(long *)(param_5 + 0x58);
        pcVar19 = (char *)(uVar20 * uVar11 + *(long *)(lVar17 + 0xa8) +
                          (ulong)*(uint *)(lVar17 + 0x20 + uVar11 * 4));
        if (7 < bVar13) {
          uVar28 = (ulong)(bVar13 & 0xfffffff8);
          lVar32 = 0;
          uVar30 = 0;
LAB_001f5ea4:
          if (*(ulong *)(pcVar19 + uVar30 * 8) == *(ulong *)(piVar10 + uVar30 * 2))
          goto code_r0x001f5eb5;
          uVar30 = *(ulong *)(piVar10 + uVar30 * 2) ^ *(ulong *)(pcVar19 + uVar30 * 8);
          uVar28 = 0;
          if (uVar30 != 0) {
            for (; (uVar30 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
            }
          }
          uVar30 = (uVar28 >> 3 & 0x1fffffff) - lVar32;
          goto LAB_001f5ef4;
        }
        uVar28 = 0;
        goto LAB_001f5fd7;
      }
      goto LAB_001f5f55;
    }
  }
  else {
    local_8c = 0;
    uVar9 = local_58;
LAB_001f6028:
    if (0x7e4 < uVar9) {
      uVar34 = (lVar2 + param_1) - uVar22;
      uVar37 = 0;
      uVar12 = local_40;
      local_58 = uVar9;
      uVar25 = *(ushort *)(param_6 + 0x30);
LAB_001f606e:
      local_b0 = local_b0 - 1;
      local_40 = uVar12 - 1;
      if (local_b0 <= uVar12 - 1) {
        local_40 = local_b0;
      }
      if (4 < *(int *)(param_5 + 4)) {
        local_40 = 0;
      }
      local_e8 = uVar22 + 1;
      uVar9 = uVar38;
      if (local_e8 < uVar38) {
        uVar9 = local_e8;
      }
      local_b8 = uVar22 + 1 + lVar4;
      uVar15 = *(ulong *)(param_5 + 0x50);
      lVar31 = *(long *)(param_6 + 0x40);
      uVar20 = local_e8 & param_4;
      piVar10 = (int *)(uVar20 + param_3);
      uVar23 = (uint)(*(int *)(param_3 + uVar20) * 0x1e35a7bd) >> 0x11;
      uVar28 = (ulong)uVar23;
      uVar16 = (ulong)((uint)local_b0 & 7);
      uVar11 = 0x7e4;
      lVar8 = 0;
      local_68 = 0;
      local_50 = 0;
LAB_001f6133:
      uVar42 = (ulong)param_7[lVar8];
      uVar30 = local_e8 - uVar42;
      cVar36 = (char)uVar23;
      if (((lVar8 == 0) || (*(char *)(lVar31 + 0x30000 + (uVar30 & 0xffff)) == cVar36)) &&
         ((uVar42 <= uVar9 && (uVar30 < local_e8)))) {
        lVar17 = (uVar30 & param_4) + param_3;
        uVar30 = uVar16;
        if (7 < local_b0) {
          lVar32 = 0;
          uVar24 = 0;
LAB_001f617e:
          uVar29 = *(ulong *)(lVar17 + uVar24 * 8);
          if (*(ulong *)(piVar10 + uVar24 * 2) == uVar29) goto code_r0x001f618f;
          uVar29 = uVar29 ^ *(ulong *)(piVar10 + uVar24 * 2);
          uVar30 = 0;
          if (uVar29 != 0) {
            for (; (uVar29 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
            }
          }
          uVar24 = (uVar30 >> 3 & 0x1fffffff) - lVar32;
          goto LAB_001f61bf;
        }
        uVar24 = 0;
        piVar33 = piVar10;
        goto joined_r0x001f623c;
      }
      goto LAB_001f621c;
    }
  }
  local_d0 = local_d0 + 1;
  param_2 = uVar22 + 1;
  if (local_e8 < param_2) {
    if (param_2 <= (uint)((int)lVar27 * 4) + local_e8) {
      uVar9 = uVar22 + 9;
      if (uVar3 <= uVar22 + 9) {
        uVar9 = uVar3;
      }
      if (param_2 < uVar9) {
        lVar31 = *(long *)(param_6 + 0x40);
        uVar25 = *(ushort *)(param_6 + 0x30);
        do {
          uVar37 = (uint)(*(int *)(param_3 + (param_2 & param_4)) * 0x1e35a7bd) >> 0x11;
          uVar22 = (ulong)uVar37;
          uVar12 = param_2 - *(uint *)(lVar31 + uVar22 * 4);
          *(char *)(lVar31 + 0x30000 + (param_2 & 0xffff)) = (char)uVar37;
          if (0xfffe < uVar12) {
            uVar12 = 0xffff;
          }
          uVar40 = uVar25 + 1;
          *(short *)(lVar31 + 0x40000 + (ulong)uVar25 * 4) = (short)uVar12;
          *(undefined2 *)(lVar31 + 0x40002 + (ulong)uVar25 * 4) =
               *(undefined2 *)(lVar31 + 0x20000 + uVar22 * 2);
          *(int *)(lVar31 + uVar22 * 4) = (int)param_2;
          *(ushort *)(lVar31 + 0x20000 + uVar22 * 2) = uVar25;
          local_d0 = local_d0 + 2;
          param_2 = param_2 + 2;
          uVar25 = uVar40;
        } while (param_2 < uVar9);
        goto LAB_001f6c91;
      }
      goto LAB_001f6ca8;
    }
    uVar9 = uVar22 + 0x11;
    if (uVar1 - 4 <= uVar22 + 0x11) {
      uVar9 = uVar1 - 4;
    }
    if (uVar9 <= param_2) goto LAB_001f6ca8;
    lVar31 = *(long *)(param_6 + 0x40);
    uVar25 = *(ushort *)(param_6 + 0x30);
    do {
      uVar37 = (uint)(*(int *)(param_3 + (param_2 & param_4)) * 0x1e35a7bd) >> 0x11;
      uVar22 = (ulong)uVar37;
      uVar12 = param_2 - *(uint *)(lVar31 + uVar22 * 4);
      *(char *)(lVar31 + 0x30000 + (param_2 & 0xffff)) = (char)uVar37;
      if (0xfffe < uVar12) {
        uVar12 = 0xffff;
      }
      uVar40 = uVar25 + 1;
      *(short *)(lVar31 + 0x40000 + (ulong)uVar25 * 4) = (short)uVar12;
      *(undefined2 *)(lVar31 + 0x40002 + (ulong)uVar25 * 4) =
           *(undefined2 *)(lVar31 + 0x20000 + uVar22 * 2);
      *(int *)(lVar31 + uVar22 * 4) = (int)param_2;
      *(ushort *)(lVar31 + 0x20000 + uVar22 * 2) = uVar25;
      local_d0 = local_d0 + 4;
      param_2 = param_2 + 4;
      uVar25 = uVar40;
    } while (param_2 < uVar9);
    goto LAB_001f6c91;
  }
  goto LAB_001f6ca8;
code_r0x001f5b03:
  uVar16 = uVar16 + 1;
  lVar32 = lVar32 + -8;
  uVar30 = uVar20;
  piVar33 = (int *)((long)piVar10 + uVar20);
  if (local_b0 >> 3 == uVar16) goto LAB_001f5ba2;
  goto LAB_001f5af2;
code_r0x001f5c91:
  uVar42 = uVar42 + 1;
  lVar32 = lVar32 + -8;
  piVar33 = (int *)((long)piVar10 + uVar20);
  uVar29 = uVar20;
  if (local_b0 >> 3 == uVar42) goto LAB_001f5d21;
  goto LAB_001f5c80;
code_r0x001f5eb5:
  uVar30 = uVar30 + 1;
  lVar32 = lVar32 + -8;
  if (bVar13 >> 3 == uVar30) goto code_r0x001f5ec1;
  goto LAB_001f5ea4;
code_r0x001f5ec1:
  pcVar19 = pcVar19 + -lVar32;
LAB_001f5fd7:
  uVar42 = uVar11 & 7;
  uVar30 = uVar28;
  if ((bVar13 & 7) != 0) {
    uVar24 = uVar28 | uVar42;
    do {
      uVar30 = uVar28;
      if (*(char *)((long)piVar10 + uVar28) != *pcVar19) break;
      pcVar19 = pcVar19 + 1;
      uVar28 = uVar28 + 1;
      uVar42 = uVar42 - 1;
      uVar30 = uVar24;
    } while (uVar42 != 0);
  }
LAB_001f5ef4:
  if (((uVar30 != 0) && (uVar11 < *(uint *)(param_5 + 100) + uVar30)) &&
     (uVar11 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar11 - uVar30) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar11 - uVar30) * 4 << (*(byte *)(lVar17 + uVar11) & 0x3f)) + uVar20 + uVar16 + 1,
     uVar11 <= uVar12)) {
    iVar7 = 0x1f;
    if ((uint)uVar11 != 0) {
      for (; (uint)uVar11 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    uVar20 = (uVar30 * 0x87 - (ulong)(uint)(iVar7 * 0x1e)) + 0x780;
    if (uVar9 <= uVar20) {
      local_8c = (uint)bVar13 - (int)uVar30;
      local_58 = local_58 + 1;
      *(ulong *)(lVar31 + 0x10) = local_58;
      uVar9 = uVar20;
      local_48 = uVar11;
      local_40 = uVar30;
    }
  }
LAB_001f5f55:
  uVar15 = uVar15 + 1;
  bVar6 = !bVar39;
  bVar39 = false;
  if (bVar6) goto LAB_001f6028;
  goto LAB_001f5e2b;
code_r0x001f618f:
  uVar24 = uVar24 + 1;
  lVar32 = lVar32 + -8;
  if (uVar34 >> 3 == uVar24) goto code_r0x001f619f;
  goto LAB_001f617e;
code_r0x001f619f:
  uVar24 = -lVar32;
  piVar33 = (int *)((long)piVar10 - lVar32);
joined_r0x001f623c:
  for (; (uVar30 != 0 && (*(char *)(lVar17 + uVar24) == (char)*piVar33)); uVar24 = uVar24 + 1) {
    uVar30 = uVar30 - 1;
    piVar33 = (int *)((long)piVar33 + 1);
  }
LAB_001f61bf:
  if ((1 < uVar24) && (uVar30 = uVar24 * 0x87 + 0x78f, uVar11 < uVar30)) {
    if (lVar8 != 0) {
      uVar30 = uVar30 - ((0x1ca10U >> ((byte)lVar8 & 2) & 4) + 0x27);
    }
    if (uVar11 < uVar30) {
      uVar11 = uVar30;
      local_68 = uVar24;
      local_50 = uVar42;
      local_40 = uVar24;
    }
  }
LAB_001f621c:
  lVar8 = lVar8 + 1;
  if (lVar8 == 4) goto LAB_001f625b;
  goto LAB_001f6133;
LAB_001f625b:
  if (uVar38 <= local_b8) {
    local_b8 = uVar38;
  }
  lVar8 = *(long *)(param_6 + 0x38);
  uVar30 = local_e8 - *(uint *)(lVar31 + uVar28 * 4);
  uVar40 = *(ushort *)(lVar31 + 0x20000 + uVar28 * 2);
  if (lVar8 != 0) {
    uVar24 = 0;
    uVar42 = uVar30;
    uVar41 = uVar40;
LAB_001f62a9:
    uVar24 = uVar42 + uVar24;
    if (uVar24 <= uVar9) {
      if (uVar20 + local_40 <= param_4) {
        uVar29 = local_e8 - uVar24 & param_4;
        uVar42 = local_40 + uVar29;
        if ((param_4 < uVar42) ||
           (*(char *)(param_3 + uVar20 + local_40) != *(char *)(param_3 + uVar42)))
        goto LAB_001f63a1;
        lVar17 = uVar29 + param_3;
        uVar42 = uVar16;
        if (7 < local_b0) {
          lVar32 = 0;
          uVar29 = 0;
LAB_001f6313:
          uVar18 = *(ulong *)(lVar17 + uVar29 * 8);
          if (*(ulong *)(piVar10 + uVar29 * 2) == uVar18) goto code_r0x001f6324;
          uVar18 = uVar18 ^ *(ulong *)(piVar10 + uVar29 * 2);
          uVar42 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
            }
          }
          uVar29 = (uVar42 >> 3 & 0x1fffffff) - lVar32;
          goto LAB_001f635e;
        }
        uVar29 = 0;
        piVar33 = piVar10;
        goto joined_r0x001f63d2;
      }
      goto LAB_001f63a1;
    }
  }
LAB_001f6401:
  *(ushort *)(param_6 + 0x30) = uVar25 + 1;
  if (0xfffe < uVar30) {
    uVar30 = 0xffff;
  }
  *(char *)(lVar31 + 0x30000 + (local_e8 & 0xffff)) = cVar36;
  *(short *)(lVar31 + 0x40000 + (ulong)uVar25 * 4) = (short)uVar30;
  *(ushort *)(lVar31 + 0x40002 + (ulong)uVar25 * 4) = uVar40;
  *(int *)(lVar31 + uVar28 * 4) = (int)local_e8;
  *(ushort *)(lVar31 + 0x20000 + uVar28 * 2) = uVar25;
  if (uVar11 == 0x7e4) {
    lVar31 = *(long *)(param_6 + 0x48);
    uVar9 = *(ulong *)(lVar31 + 8);
    local_c0 = *(ulong *)(lVar31 + 0x10);
    uVar11 = 0x7e4;
    if (uVar9 >> 7 <= local_c0) {
      uVar20 = (ulong)((uint)(*piVar10 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
      lVar8 = *(long *)(param_5 + 0x78);
      iVar7 = 0;
      uVar11 = 0x7e4;
      bVar39 = true;
LAB_001f6575:
      uVar9 = uVar9 + 1;
      *(ulong *)(lVar31 + 8) = uVar9;
      bVar13 = *(byte *)(lVar8 + uVar20);
      uVar16 = (ulong)bVar13;
      if ((uVar16 != 0) && (uVar16 <= local_b0)) {
        uVar28 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar20 * 2);
        lVar17 = *(long *)(param_5 + 0x58);
        pcVar19 = (char *)(uVar28 * uVar16 + *(long *)(lVar17 + 0xa8) +
                          (ulong)*(uint *)(lVar17 + 0x20 + uVar16 * 4));
        if (7 < bVar13) {
          uVar30 = (ulong)(bVar13 & 0xfffffff8);
          lVar32 = 0;
          uVar42 = 0;
LAB_001f6603:
          if (*(ulong *)(pcVar19 + uVar42 * 8) == *(ulong *)(piVar10 + uVar42 * 2))
          goto code_r0x001f6614;
          uVar42 = *(ulong *)(piVar10 + uVar42 * 2) ^ *(ulong *)(pcVar19 + uVar42 * 8);
          uVar30 = 0;
          if (uVar42 != 0) {
            for (; (uVar42 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
            }
          }
          uVar42 = (uVar30 >> 3 & 0x1fffffff) - lVar32;
          goto LAB_001f6653;
        }
        uVar30 = 0;
        goto LAB_001f6722;
      }
      goto LAB_001f65a4;
    }
  }
  iVar7 = 0;
LAB_001f649e:
  if (uVar11 < local_58 + 0xaf) {
    local_68 = uVar12;
    local_e8 = uVar22;
    local_50 = local_48;
    local_b8 = lVar4 + uVar22;
    iVar7 = local_8c;
    if (uVar38 <= lVar4 + uVar22) {
      local_b8 = uVar38;
    }
    goto LAB_001f6935;
  }
  local_d0 = local_d0 + 1;
  if (2 < uVar37) goto LAB_001f6935;
  uVar9 = uVar22 + 5;
  uVar37 = uVar37 + 1;
  uVar34 = uVar34 - 1;
  uVar22 = local_e8;
  local_48 = local_50;
  uVar12 = local_68;
  local_8c = iVar7;
  local_58 = uVar11;
  uVar25 = uVar25 + 1;
  if (uVar1 <= uVar9) goto LAB_001f6935;
  goto LAB_001f606e;
code_r0x001f6324:
  uVar29 = uVar29 + 1;
  lVar32 = lVar32 + -8;
  if (uVar34 >> 3 == uVar29) goto code_r0x001f6334;
  goto LAB_001f6313;
code_r0x001f6334:
  uVar29 = -lVar32;
  piVar33 = (int *)((long)piVar10 - lVar32);
joined_r0x001f63d2:
  for (; (uVar42 != 0 && (*(char *)(lVar17 + uVar29) == (char)*piVar33)); uVar29 = uVar29 + 1) {
    uVar42 = uVar42 - 1;
    piVar33 = (int *)((long)piVar33 + 1);
  }
LAB_001f635e:
  if (3 < uVar29) {
    iVar7 = 0x1f;
    if ((uint)uVar24 != 0) {
      for (; (uint)uVar24 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    uVar42 = (ulong)(iVar7 * -0x1e + 0x780) + uVar29 * 0x87;
    if (uVar11 < uVar42) {
      uVar11 = uVar42;
      local_68 = uVar29;
      local_50 = uVar24;
      local_40 = uVar29;
    }
  }
LAB_001f63a1:
  uVar42 = (ulong)uVar41;
  uVar41 = *(ushort *)(lVar31 + 0x40002 + uVar42 * 4);
  uVar42 = (ulong)*(ushort *)(lVar31 + 0x40000 + uVar42 * 4);
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) goto LAB_001f6401;
  goto LAB_001f62a9;
code_r0x001f6614:
  uVar42 = uVar42 + 1;
  lVar32 = lVar32 + -8;
  if (bVar13 >> 3 == uVar42) goto code_r0x001f6620;
  goto LAB_001f6603;
code_r0x001f6620:
  pcVar19 = pcVar19 + -lVar32;
LAB_001f6722:
  uVar24 = uVar16 & 7;
  uVar42 = uVar30;
  if ((bVar13 & 7) != 0) {
    uVar29 = uVar30 | uVar24;
    do {
      uVar42 = uVar30;
      if (*(char *)((long)piVar10 + uVar30) != *pcVar19) break;
      pcVar19 = pcVar19 + 1;
      uVar30 = uVar30 + 1;
      uVar24 = uVar24 - 1;
      uVar42 = uVar29;
    } while (uVar24 != 0);
  }
LAB_001f6653:
  if (((uVar42 != 0) && (uVar16 < *(uint *)(param_5 + 100) + uVar42)) &&
     (uVar16 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar16 - uVar42) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar16 - uVar42) * 4 << (*(byte *)(lVar17 + uVar16) & 0x3f)) +
               uVar28 + local_b8 + 1, uVar16 <= uVar15)) {
    iVar5 = 0x1f;
    if ((uint)uVar16 != 0) {
      for (; (uint)uVar16 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    uVar28 = (uVar42 * 0x87 - (ulong)(uint)(iVar5 * 0x1e)) + 0x780;
    if (uVar11 <= uVar28) {
      iVar7 = (uint)bVar13 - (int)uVar42;
      local_c0 = local_c0 + 1;
      *(ulong *)(lVar31 + 0x10) = local_c0;
      uVar11 = uVar28;
      local_68 = uVar42;
      local_50 = uVar16;
    }
  }
LAB_001f65a4:
  uVar20 = uVar20 + 1;
  bVar6 = !bVar39;
  bVar39 = false;
  if (bVar6) goto LAB_001f649e;
  goto LAB_001f6575;
LAB_001f6935:
  if (local_b8 < local_50) {
LAB_001f6948:
    uVar22 = local_50 + 0xf;
  }
  else {
    if (local_50 == (long)*param_7) {
      uVar22 = 0;
      goto LAB_001f6988;
    }
    uVar22 = 1;
    if (local_50 != (long)param_7[1]) {
      uVar22 = (local_50 + 3) - (long)*param_7;
      if (uVar22 < 7) {
        bVar13 = (byte)((int)uVar22 << 2);
        uVar37 = 0x9750468;
      }
      else {
        uVar22 = (local_50 + 3) - (long)param_7[1];
        if (6 < uVar22) {
          uVar22 = 2;
          if ((local_50 != (long)param_7[2]) && (uVar22 = 3, local_50 != (long)param_7[3]))
          goto LAB_001f6948;
          goto LAB_001f694c;
        }
        bVar13 = (byte)((int)uVar22 << 2);
        uVar37 = 0xfdb1ace;
      }
      uVar22 = (ulong)(uVar37 >> (bVar13 & 0x1f) & 0xf);
    }
  }
LAB_001f694c:
  if ((local_50 <= local_b8) && (uVar22 != 0)) {
    param_7[3] = param_7[2];
    *(undefined8 *)(param_7 + 1) = *(undefined8 *)param_7;
    *param_7 = (int)local_50;
  }
LAB_001f6988:
  uVar23 = (uint)local_d0;
  *local_e0 = uVar23;
  local_e0[1] = iVar7 << 0x19 | (uint)local_68;
  uVar9 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
  uVar37 = 0;
  if (uVar9 <= uVar22) {
    bVar13 = (byte)*(uint *)(param_5 + 0x40);
    uVar12 = ((4L << (bVar13 & 0x3f)) + (uVar22 - *(uint *)(param_5 + 0x44))) - 0x10;
    uVar37 = 0x1f;
    uVar35 = (uint)uVar12;
    if (uVar35 != 0) {
      for (; uVar35 >> uVar37 == 0; uVar37 = uVar37 - 1) {
      }
    }
    uVar37 = (uVar37 ^ 0xffffffe0) + 0x1f;
    uVar34 = (ulong)((uVar12 >> ((ulong)uVar37 & 0x3f) & 1) != 0);
    lVar31 = (ulong)uVar37 - (ulong)*(uint *)(param_5 + 0x40);
    uVar22 = (~(-1 << (bVar13 & 0x1f)) & uVar35) + uVar9 +
             (uVar34 + lVar31 * 2 + 0xfffe << (bVar13 & 0x3f)) | lVar31 * 0x400;
    uVar37 = (uint)(uVar12 - (uVar34 + 2 << ((byte)uVar37 & 0x3f)) >> (bVar13 & 0x3f));
  }
  *(short *)((long)local_e0 + 0xe) = (short)uVar22;
  local_e0[2] = uVar37;
  if (5 < local_d0) {
    if (local_d0 < 0x82) {
      uVar37 = 0x1f;
      uVar23 = (uint)(local_d0 - 2);
      if (uVar23 != 0) {
        for (; uVar23 >> uVar37 == 0; uVar37 = uVar37 - 1) {
        }
      }
      uVar23 = (int)(local_d0 - 2 >> ((char)(uVar37 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
               (uVar37 ^ 0xffffffe0) * 2 + 0x40;
    }
    else if (local_d0 < 0x842) {
      uVar37 = 0x1f;
      if (uVar23 - 0x42 != 0) {
        for (; uVar23 - 0x42 >> uVar37 == 0; uVar37 = uVar37 - 1) {
        }
      }
      uVar23 = (uVar37 ^ 0xffe0) + 0x2a;
    }
    else {
      uVar23 = 0x15;
      if (0x1841 < local_d0) {
        uVar23 = (uint)(ushort)(0x17 - (local_d0 < 0x5842));
      }
    }
  }
  uVar37 = iVar7 + (uint)local_68;
  if (uVar37 < 10) {
    uVar35 = uVar37 - 2;
  }
  else if (uVar37 < 0x86) {
    uVar37 = uVar37 - 6;
    uVar35 = 0x1f;
    if (uVar37 != 0) {
      for (; uVar37 >> uVar35 == 0; uVar35 = uVar35 - 1) {
      }
    }
    uVar35 = (uVar37 >> ((char)(uVar35 ^ 0xffffffe0) + 0x1fU & 0x1f)) + (uVar35 ^ 0xffffffe0) * 2 +
             0x42;
  }
  else {
    uVar35 = 0x17;
    if (uVar37 < 0x846) {
      uVar35 = 0x1f;
      if (uVar37 - 0x46 != 0) {
        for (; uVar37 - 0x46 >> uVar35 == 0; uVar35 = uVar35 - 1) {
        }
      }
      uVar35 = (uVar35 ^ 0xffe0) + 0x2c;
    }
  }
  uVar25 = (ushort)uVar35;
  sVar26 = (uVar25 & 7) + ((ushort)uVar23 & 7) * 8;
  if ((((uVar22 & 0x3ff) == 0) && ((ushort)uVar23 < 8)) && (uVar25 < 0x10)) {
    if (7 < uVar25) {
      sVar26 = sVar26 + 0x40;
    }
  }
  else {
    iVar7 = ((uVar23 & 0xffff) >> 3) * 3 + ((uVar35 & 0xffff) >> 3);
    sVar26 = sVar26 + ((ushort)(0x520d40 >> ((char)iVar7 * '\x02' & 0x1fU)) & 0xc0) +
                      (short)iVar7 * 0x40 + 0x40;
  }
  *(short *)(local_e0 + 3) = sVar26;
  *param_11 = *param_11 + local_d0;
  param_2 = local_e8 + local_68;
  uVar22 = uVar14;
  if (param_2 < uVar14) {
    uVar22 = param_2;
  }
  uVar9 = local_e8 + 2;
  if (local_50 < local_68 >> 2) {
    uVar12 = param_2 + local_50 * -4;
    if (uVar12 < uVar9) {
      uVar12 = uVar9;
    }
    uVar9 = uVar12;
    if (uVar22 < uVar12) {
      uVar9 = uVar22;
    }
  }
  local_e8 = lVar27 + local_68 * 2 + local_e8;
  local_e0 = local_e0 + 4;
  if (uVar9 < uVar22) {
    lVar31 = *(long *)(param_6 + 0x40);
    uVar25 = *(ushort *)(param_6 + 0x30);
    do {
      uVar37 = (uint)(*(int *)(param_3 + (uVar9 & param_4)) * 0x1e35a7bd) >> 0x11;
      uVar12 = (ulong)uVar37;
      uVar34 = uVar9 - *(uint *)(lVar31 + uVar12 * 4);
      *(char *)(lVar31 + 0x30000 + (uVar9 & 0xffff)) = (char)uVar37;
      if (0xfffe < uVar34) {
        uVar34 = 0xffff;
      }
      uVar40 = uVar25 + 1;
      *(short *)(lVar31 + 0x40000 + (ulong)uVar25 * 4) = (short)uVar34;
      *(undefined2 *)(lVar31 + 0x40002 + (ulong)uVar25 * 4) =
           *(undefined2 *)(lVar31 + 0x20000 + uVar12 * 2);
      *(int *)(lVar31 + uVar12 * 4) = (int)uVar9;
      *(ushort *)(lVar31 + 0x20000 + uVar12 * 2) = uVar25;
      uVar9 = uVar9 + 1;
      uVar25 = uVar40;
    } while (uVar22 != uVar9);
    local_d0 = 0;
LAB_001f6c91:
    *(ushort *)(param_6 + 0x30) = uVar40;
  }
  else {
    local_d0 = 0;
  }
LAB_001f6ca8:
  uVar22 = param_2;
  if (uVar1 <= param_2 + 4) goto LAB_001f6d1a;
  goto LAB_001f59ff;
}

