// rea decompile_all
// name: _CreateBackwardReferencesNH65
// address: 0x7cb4d
// body: available
// range: 0x7cb4d-0x7e4cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH65
               (ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
               int *param_7,ulong *param_8,uint *param_9,long *param_10,long *param_11)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  byte bVar25;
  ulong uVar26;
  ulong uVar27;
  char *pcVar28;
  short sVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  char *pcVar38;
  int *piVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  int iVar43;
  ulong uVar44;
  long lVar45;
  int *piVar46;
  bool bVar47;
  ulong uVar48;
  long lVar49;
  ulong uVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  ulong local_140;
  ulong local_108;
  ulong local_e8;
  ulong local_e0;
  uint *local_d0;
  ulong local_b0;
  int local_9c;
  ulong local_88;
  ulong local_78;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  uint local_40;
  ulong local_38;
  
  bVar25 = *(byte *)(param_5 + 8);
  uVar3 = (param_2 - 7) + param_1;
  uVar26 = param_2;
  if (7 < param_1) {
    uVar26 = uVar3;
  }
  lVar41 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar41 = 0x40;
  }
  lVar11 = *(long *)(param_5 + 0x10);
  local_78 = *param_8;
  uVar1 = param_2 + param_1;
  uVar19 = *(uint *)(param_6 + 0x58);
  if (4 < (int)uVar19) {
    iVar21 = *param_7;
    param_7[4] = iVar21 + -1;
    param_7[5] = iVar21 + 1;
    param_7[6] = iVar21 + -2;
    param_7[7] = iVar21 + 2;
    *(ulong *)(param_7 + 8) = CONCAT44(iVar21 + 3,iVar21 + -3);
    if (10 < uVar19) {
      iVar21 = param_7[1];
      param_7[10] = iVar21 + -1;
      param_7[0xb] = iVar21 + 1;
      param_7[0xc] = iVar21 + -2;
      param_7[0xd] = iVar21 + 2;
      *(ulong *)(param_7 + 0xe) = CONCAT44(iVar21 + 3,iVar21 + -3);
    }
  }
  if (uVar1 <= param_2 + 8) {
    local_d0 = param_9;
LAB_0007e495:
    *param_8 = (local_78 + uVar1) - param_2;
    *param_10 = *param_10 + ((long)local_d0 - (long)param_9 >> 4);
    return;
  }
  uVar4 = (1L << (bVar25 & 0x3f)) - 0x10;
  local_108 = lVar41 + param_2;
  uVar12 = *(ulong *)(param_6 + 0x48);
  lVar13 = *(long *)(param_6 + 0x68);
  lVar14 = *(long *)(param_6 + 0x70);
  lVar2 = param_2 - 1;
  local_d0 = param_9;
  uVar51 = param_2;
LAB_0007ccc8:
  uVar42 = uVar1 - uVar51;
  uVar53 = uVar4;
  if (uVar51 < uVar4) {
    uVar53 = uVar51;
  }
  uVar31 = lVar11 + uVar51;
  if (uVar4 <= lVar11 + uVar51) {
    uVar31 = uVar4;
  }
  uVar15 = *(ulong *)(param_5 + 0x50);
  uVar36 = uVar51 & param_4;
  uVar19 = (uint)uVar42;
  if ((long)*(int *)(param_6 + 0x58) == 0) {
    local_b0 = 0x7e4;
    local_38 = 0;
    local_48 = 0;
    uVar32 = 0;
  }
  else {
    pcVar28 = (char *)(uVar36 + param_3);
    uVar22 = (ulong)(uVar19 & 7);
    local_b0 = 0x7e4;
    uVar32 = 0;
    uVar48 = 0;
    local_48 = 0;
    local_38 = 0;
    do {
      uVar30 = (ulong)param_7[uVar48];
      if (((uVar30 <= uVar53) && (uVar51 - uVar30 < uVar51)) && (uVar32 + uVar36 <= param_4)) {
        uVar27 = uVar51 - uVar30 & param_4;
        uVar34 = uVar27 + uVar32;
        if ((uVar34 <= param_4) &&
           (*(char *)(param_3 + uVar32 + uVar36) == *(char *)(param_3 + uVar34))) {
          lVar37 = uVar27 + param_3;
          if (7 < uVar42) {
            lVar49 = 0;
            uVar34 = 0;
LAB_0007cdee:
            uVar27 = *(ulong *)(lVar37 + uVar34 * 8);
            if (*(ulong *)(pcVar28 + uVar34 * 8) == uVar27) goto code_r0x0007cdff;
            uVar27 = uVar27 ^ *(ulong *)(pcVar28 + uVar34 * 8);
            uVar34 = 0;
            if (uVar27 != 0) {
              for (; (uVar27 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
              }
            }
            uVar34 = (uVar34 >> 3 & 0x1fffffff) - lVar49;
            goto LAB_0007ce50;
          }
          pcVar38 = pcVar28;
          uVar27 = 0;
LAB_0007cec4:
          uVar34 = uVar27;
          if (uVar22 != 0) {
            uVar23 = uVar22 | uVar27;
            uVar44 = uVar22;
            do {
              uVar34 = uVar27;
              if (*(char *)(lVar37 + uVar27) != *pcVar38) break;
              pcVar38 = pcVar38 + 1;
              uVar27 = uVar27 + 1;
              uVar44 = uVar44 - 1;
              uVar34 = uVar23;
            } while (uVar44 != 0);
          }
LAB_0007ce50:
          if (((2 < uVar34) || ((uVar48 < 2 && (uVar34 == 2)))) &&
             (uVar27 = uVar34 * 0x87 + 0x78f, local_b0 < uVar27)) {
            if (uVar48 != 0) {
              uVar27 = uVar27 - ((0x1ca10U >> ((byte)uVar48 & 0xe) & 0xe) + 0x27);
            }
            if (local_b0 < uVar27) {
              local_b0 = uVar27;
              uVar32 = uVar34;
              local_48 = uVar34;
              local_38 = uVar30;
            }
          }
        }
      }
      uVar48 = uVar48 + 1;
    } while (uVar48 != (long)*(int *)(param_6 + 0x58));
  }
  uVar22 = (*(ulong *)(param_3 + uVar36) & uVar12) * 0x1fe35a7bd3579bd3 >>
           (*(byte *)(param_6 + 0x40) & 0x3f);
  uVar34 = uVar22 & 0xffffffff;
  piVar39 = (int *)(uVar36 + param_3);
  lVar37 = lVar14 + (ulong)(uint)((int)uVar22 << (*(byte *)(param_6 + 0x54) & 0x1f)) * 4;
  uVar6 = *(ushort *)(lVar13 + uVar34 * 2);
  uVar30 = (ulong)uVar6;
  uVar22 = *(ulong *)(param_6 + 0x38);
  uVar48 = 0;
  if (uVar22 <= uVar30) {
    uVar48 = uVar30 - uVar22;
  }
  local_40 = (uint)param_4;
  if (uVar48 < uVar30) {
    uVar27 = (ulong)(uVar19 & 7);
    do {
      uVar30 = uVar30 - 1;
      uVar20 = *(uint *)(lVar37 + (ulong)((uint)uVar30 & *(uint *)(param_6 + 0x50)) * 4);
      uVar44 = uVar51 - uVar20;
      if (uVar53 < uVar44) break;
      if (uVar36 + uVar32 <= param_4) {
        uVar40 = (ulong)(uVar20 & local_40);
        uVar23 = uVar32 + uVar40;
        if ((uVar23 <= param_4) &&
           (*(char *)(param_3 + uVar36 + uVar32) == *(char *)(param_3 + uVar23))) {
          lVar49 = uVar40 + param_3;
          if (7 < uVar42) {
            lVar45 = 0;
            uVar23 = 0;
LAB_0007d053:
            uVar40 = *(ulong *)(lVar49 + uVar23 * 8);
            if (*(ulong *)(piVar39 + uVar23 * 2) == uVar40) goto code_r0x0007d061;
            uVar40 = uVar40 ^ *(ulong *)(piVar39 + uVar23 * 2);
            uVar23 = 0;
            if (uVar40 != 0) {
              for (; (uVar40 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
              }
            }
            uVar23 = (uVar23 >> 3 & 0x1fffffff) - lVar45;
            goto LAB_0007d08f;
          }
          uVar40 = 0;
          piVar46 = piVar39;
LAB_0007d0e4:
          uVar23 = uVar40;
          if (uVar27 != 0) {
            uVar50 = uVar27 | uVar40;
            uVar24 = uVar27;
            do {
              uVar23 = uVar40;
              if (*(char *)(lVar49 + uVar40) != (char)*piVar46) break;
              piVar46 = (int *)((long)piVar46 + 1);
              uVar40 = uVar40 + 1;
              uVar24 = uVar24 - 1;
              uVar23 = uVar50;
            } while (uVar24 != 0);
          }
LAB_0007d08f:
          if (3 < uVar23) {
            iVar21 = 0x1f;
            if ((uint)uVar44 != 0) {
              for (; (uint)uVar44 >> iVar21 == 0; iVar21 = iVar21 + -1) {
              }
            }
            uVar40 = (ulong)(iVar21 * -0x1e + 0x780) + uVar23 * 0x87;
            if (local_b0 < uVar40) {
              local_48 = uVar23;
              uVar32 = uVar23;
              local_b0 = uVar40;
              local_38 = uVar44;
            }
          }
        }
      }
    } while (uVar48 < uVar30);
  }
  *(int *)(lVar37 + (ulong)(*(uint *)(param_6 + 0x50) & (uint)uVar6) * 4) = (int)uVar51;
  *(ushort *)(lVar13 + uVar34 * 2) = uVar6 + 1;
  local_e8 = local_38;
  if (local_b0 == 0x7e4) {
    lVar37 = *(long *)(param_6 + 0x60);
    uVar36 = *(ulong *)(lVar37 + 8);
    local_88 = *(ulong *)(lVar37 + 0x10);
    local_b0 = 0x7e4;
    if (uVar36 >> 7 <= local_88) {
      uVar32 = (ulong)((uint)(*piVar39 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
      lVar49 = *(long *)(param_5 + 0x78);
      local_b0 = 0x7e4;
      local_9c = 0;
      bVar47 = true;
LAB_0007d37c:
      uVar36 = uVar36 + 1;
      *(ulong *)(lVar37 + 8) = uVar36;
      bVar25 = *(byte *)(lVar49 + uVar32);
      uVar48 = (ulong)bVar25;
      if ((uVar48 != 0) && (uVar48 <= uVar42)) {
        uVar30 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar32 * 2);
        lVar45 = *(long *)(param_5 + 0x58);
        pcVar28 = (char *)(uVar30 * uVar48 + *(long *)(lVar45 + 0xa8) +
                          (ulong)*(uint *)(lVar45 + 0x20 + uVar48 * 4));
        if (7 < bVar25) {
          uVar27 = (ulong)(bVar25 & 0xfffffff8);
          lVar33 = 0;
          uVar34 = 0;
LAB_0007d3ed:
          if (*(ulong *)(pcVar28 + uVar34 * 8) == *(ulong *)(piVar39 + uVar34 * 2))
          goto code_r0x0007d3fe;
          uVar27 = *(ulong *)(piVar39 + uVar34 * 2) ^ *(ulong *)(pcVar28 + uVar34 * 8);
          uVar34 = 0;
          if (uVar27 != 0) {
            for (; (uVar27 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
            }
          }
          uVar34 = (uVar34 >> 3 & 0x1fffffff) - lVar33;
          goto LAB_0007d434;
        }
        uVar27 = 0;
        goto LAB_0007d532;
      }
      goto LAB_0007d4a9;
    }
    local_9c = 0;
  }
  else {
    local_9c = 0;
  }
LAB_0007d19e:
  if (0x1f < uVar42) {
    uVar31 = *(ulong *)(param_6 + 0x88);
    if (uVar31 <= uVar51) {
      uVar20 = *(uint *)(param_6 + 0x78);
      iVar21 = *(int *)(param_6 + 0x94);
      iVar43 = *(int *)(param_6 + 0x98);
LAB_0007d1ff:
      uVar52 = uVar20 & 0x3fffffff;
      bVar25 = *(byte *)(param_3 + (uVar31 & param_4));
      bVar5 = *(byte *)(param_3 + (uVar31 + 0x20 & param_4));
      if (uVar52 < 0x1000000) {
        uVar35 = *(uint *)(*(long *)(param_6 + 0x80) + (ulong)uVar52 * 4);
        *(int *)(*(long *)(param_6 + 0x80) + (ulong)uVar52 * 4) = (int)uVar31;
        if ((uVar31 == uVar51) && (uVar35 != 0xffffffff)) {
          uVar52 = (int)uVar51 - uVar35;
          if (uVar52 <= uVar53) {
            lVar37 = (ulong)(uVar35 & local_40) + param_3;
            lVar49 = 0;
            uVar36 = 0;
LAB_0007d290:
            uVar32 = *(ulong *)(lVar37 + uVar36 * 8);
            if (*(ulong *)(piVar39 + uVar36 * 2) == uVar32) goto code_r0x0007d2a1;
            uVar32 = uVar32 ^ *(ulong *)(piVar39 + uVar36 * 2);
            uVar36 = 0;
            if (uVar32 != 0) {
              for (; (uVar32 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
              }
            }
            uVar32 = (uVar36 >> 3 & 0x1fffffff) - lVar49;
            goto LAB_0007d2ec;
          }
        }
      }
      goto LAB_0007d25d;
    }
    goto LAB_0007d58a;
  }
  goto LAB_0007d595;
code_r0x0007cdff:
  uVar34 = uVar34 + 1;
  lVar49 = lVar49 + -8;
  pcVar38 = pcVar28 + (uVar42 & 0xfffffffffffffff8);
  uVar27 = uVar42 & 0xfffffffffffffff8;
  if (uVar42 >> 3 == uVar34) goto LAB_0007cec4;
  goto LAB_0007cdee;
code_r0x0007d061:
  uVar23 = uVar23 + 1;
  lVar45 = lVar45 + -8;
  uVar40 = uVar42 & 0xfffffffffffffff8;
  piVar46 = (int *)((uVar42 & 0xfffffffffffffff8) + (long)piVar39);
  if (uVar42 >> 3 == uVar23) goto LAB_0007d0e4;
  goto LAB_0007d053;
code_r0x0007d3fe:
  uVar34 = uVar34 + 1;
  lVar33 = lVar33 + -8;
  if (bVar25 >> 3 == uVar34) goto code_r0x0007d40a;
  goto LAB_0007d3ed;
code_r0x0007d40a:
  pcVar28 = pcVar28 + -lVar33;
LAB_0007d532:
  uVar44 = uVar48 & 7;
  uVar34 = uVar27;
  if ((bVar25 & 7) != 0) {
    uVar23 = uVar27 | uVar44;
    do {
      uVar34 = uVar27;
      if (*(char *)((long)piVar39 + uVar27) != *pcVar28) break;
      pcVar28 = pcVar28 + 1;
      uVar27 = uVar27 + 1;
      uVar44 = uVar44 - 1;
      uVar34 = uVar23;
    } while (uVar44 != 0);
  }
LAB_0007d434:
  if (((uVar34 != 0) && (uVar48 < *(uint *)(param_5 + 100) + uVar34)) &&
     (uVar48 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar48 - uVar34) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar48 - uVar34) * 4 << (*(byte *)(lVar45 + uVar48) & 0x3f)) + uVar30 + uVar31 + 1,
     uVar48 <= uVar15)) {
    iVar21 = 0x1f;
    if ((uint)uVar48 != 0) {
      for (; (uint)uVar48 >> iVar21 == 0; iVar21 = iVar21 + -1) {
      }
    }
    uVar30 = (uVar34 * 0x87 - (ulong)(uint)(iVar21 * 0x1e)) + 0x780;
    if (local_b0 <= uVar30) {
      local_9c = (uint)bVar25 - (int)uVar34;
      local_88 = local_88 + 1;
      *(ulong *)(lVar37 + 0x10) = local_88;
      local_48 = uVar34;
      local_b0 = uVar30;
      local_38 = uVar48;
    }
  }
LAB_0007d4a9:
  uVar32 = uVar32 + 1;
  bVar18 = !bVar47;
  local_e8 = local_38;
  bVar47 = false;
  if (bVar18) goto LAB_0007d19e;
  goto LAB_0007d37c;
code_r0x0007d2a1:
  uVar36 = uVar36 + 1;
  lVar49 = lVar49 + -8;
  uVar32 = uVar42 & 0xfffffffffffffff8;
  uVar48 = uVar42 & 0xfffffffffffffff8;
  uVar30 = (ulong)(uVar19 & 7);
  if (uVar42 >> 3 == uVar36) goto joined_r0x0007d2b7;
  goto LAB_0007d290;
joined_r0x0007d2b7:
  for (; (uVar30 != 0 &&
         (uVar32 = uVar48, *(char *)(lVar37 + uVar48) == *(char *)((long)piVar39 + uVar48)));
      uVar48 = uVar48 + 1) {
    uVar32 = uVar42;
    uVar30 = uVar30 - 1;
  }
LAB_0007d2ec:
  if ((3 < uVar32) && (local_48 < uVar32)) {
    iVar7 = 0x1f;
    if (uVar52 != 0) {
      for (; uVar52 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    uVar36 = (ulong)(iVar7 * -0x1e + 0x780) + uVar32 * 0x87;
    if (local_b0 < uVar36) {
      local_9c = 0;
      local_b0 = uVar36;
      local_48 = uVar32;
      local_e8 = (ulong)uVar52;
    }
  }
LAB_0007d25d:
  uVar20 = ~(uint)bVar25 * iVar43 + (uint)bVar5 + uVar20 * iVar21 + 1;
  uVar31 = uVar31 + 1;
  if (uVar51 < uVar31) goto LAB_0007d569;
  goto LAB_0007d1ff;
LAB_0007d569:
  *(uint *)(param_6 + 0x78) = uVar20;
LAB_0007d58a:
  *(ulong *)(param_6 + 0x88) = uVar51 + 1;
LAB_0007d595:
  if (0x7e4 < local_b0) {
    uVar31 = (lVar2 + param_1) - uVar51;
    uVar19 = 0;
    uVar53 = local_48;
LAB_0007d5bd:
    uVar32 = uVar31 >> 3;
    uVar42 = uVar42 - 1;
    uVar36 = uVar53 - 1;
    if (uVar42 <= uVar53 - 1) {
      uVar36 = uVar42;
    }
    if (4 < *(int *)(param_5 + 4)) {
      uVar36 = 0;
    }
    local_108 = uVar51 + 1;
    uVar48 = uVar4;
    if (local_108 < uVar4) {
      uVar48 = local_108;
    }
    local_e0 = lVar11 + uVar51 + 1;
    if (uVar4 <= local_e0) {
      local_e0 = uVar4;
    }
    uVar30 = local_108 & param_4;
    uVar20 = (uint)uVar42;
    if ((long)*(int *)(param_6 + 0x58) != 0) {
      pcVar28 = (char *)(uVar30 + param_3);
      local_58 = 0x7e4;
      uVar34 = 0;
      local_50 = 0;
      local_48 = 0;
LAB_0007d683:
      uVar27 = (ulong)param_7[uVar34];
      if (((uVar27 <= uVar48) && (local_108 - uVar27 < local_108)) && (uVar36 + uVar30 <= param_4))
      {
        uVar23 = local_108 - uVar27 & param_4;
        uVar44 = uVar23 + uVar36;
        if ((param_4 < uVar44) ||
           (*(char *)(param_3 + uVar36 + uVar30) != *(char *)(param_3 + uVar44))) goto LAB_0007d71b;
        lVar37 = uVar23 + param_3;
        uVar44 = (ulong)(uVar20 & 7);
        if (7 < uVar42) {
          lVar49 = 0;
          uVar23 = 0;
LAB_0007d6e1:
          uVar40 = *(ulong *)(lVar37 + uVar23 * 8);
          if (*(ulong *)(pcVar28 + uVar23 * 8) == uVar40) goto code_r0x0007d6ee;
          uVar40 = uVar40 ^ *(ulong *)(pcVar28 + uVar23 * 8);
          uVar44 = 0;
          if (uVar40 != 0) {
            for (; (uVar40 >> uVar44 & 1) == 0; uVar44 = uVar44 + 1) {
            }
          }
          uVar23 = (uVar44 >> 3 & 0x1fffffff) - lVar49;
          goto LAB_0007d73e;
        }
        uVar23 = 0;
        pcVar38 = pcVar28;
        goto joined_r0x0007d7b5;
      }
      goto LAB_0007d71b;
    }
    local_58 = 0x7e4;
    local_48 = 0;
    local_50 = 0;
LAB_0007d7f0:
    uVar34 = (*(ulong *)(param_3 + uVar30) & uVar12) * 0x1fe35a7bd3579bd3 >>
             (*(byte *)(param_6 + 0x40) & 0x3f);
    piVar39 = (int *)(uVar30 + param_3);
    uVar44 = uVar34 & 0xffffffff;
    lVar37 = lVar14 + (ulong)(uint)((int)uVar34 << (*(byte *)(param_6 + 0x54) & 0x1f)) * 4;
    uVar6 = *(ushort *)(lVar13 + uVar44 * 2);
    uVar27 = (ulong)uVar6;
    uVar34 = 0;
    if (uVar22 <= uVar27) {
      uVar34 = uVar27 - uVar22;
    }
    if (uVar34 < uVar27) {
LAB_0007d881:
      uVar27 = uVar27 - 1;
      uVar52 = *(uint *)(lVar37 + (ulong)((uint)uVar27 & *(uint *)(param_6 + 0x50)) * 4);
      uVar23 = local_108 - uVar52;
      if (uVar23 <= uVar48) {
        if (uVar36 + uVar30 <= param_4) {
          uVar24 = (ulong)(uVar52 & local_40);
          uVar40 = uVar24 + uVar36;
          if ((param_4 < uVar40) ||
             (*(char *)(param_3 + uVar36 + uVar30) != *(char *)(param_3 + uVar40)))
          goto LAB_0007d95f;
          lVar49 = uVar24 + param_3;
          uVar40 = (ulong)(uVar20 & 7);
          if (7 < uVar42) {
            lVar45 = 0;
            uVar24 = 0;
LAB_0007d8df:
            uVar50 = *(ulong *)(lVar49 + uVar24 * 8);
            if (*(ulong *)(piVar39 + uVar24 * 2) == uVar50) goto code_r0x0007d8f0;
            uVar50 = uVar50 ^ *(ulong *)(piVar39 + uVar24 * 2);
            uVar40 = 0;
            if (uVar50 != 0) {
              for (; (uVar50 >> uVar40 & 1) == 0; uVar40 = uVar40 + 1) {
              }
            }
            uVar24 = (uVar40 >> 3 & 0x1fffffff) - lVar45;
            goto LAB_0007d91c;
          }
          uVar24 = 0;
          piVar46 = piVar39;
          goto joined_r0x0007d97a;
        }
        goto LAB_0007d95f;
      }
    }
LAB_0007d99d:
    *(int *)(lVar37 + (ulong)(*(uint *)(param_6 + 0x50) & (uint)uVar6) * 4) = (int)local_108;
    *(ushort *)(lVar13 + uVar44 * 2) = uVar6 + 1;
    iVar21 = 0;
    if (local_58 == 0x7e4) {
      lVar37 = *(long *)(param_6 + 0x60);
      uVar36 = *(ulong *)(lVar37 + 8);
      local_140 = *(ulong *)(lVar37 + 0x10);
      if (uVar36 >> 7 <= local_140) {
        uVar30 = (ulong)((uint)(*piVar39 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
        lVar49 = *(long *)(param_5 + 0x78);
        iVar21 = 0;
        local_58 = 0x7e4;
        bVar47 = true;
LAB_0007da9f:
        uVar36 = uVar36 + 1;
        *(ulong *)(lVar37 + 8) = uVar36;
        bVar25 = *(byte *)(lVar49 + uVar30);
        uVar34 = (ulong)bVar25;
        if ((uVar34 != 0) && (uVar34 <= uVar42)) {
          uVar27 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar30 * 2);
          lVar45 = *(long *)(param_5 + 0x58);
          pcVar28 = (char *)(uVar27 * uVar34 + *(long *)(lVar45 + 0xa8) +
                            (ulong)*(uint *)(lVar45 + 0x20 + uVar34 * 4));
          if (7 < bVar25) {
            uVar23 = (ulong)(bVar25 & 0xfffffff8);
            lVar33 = 0;
            uVar44 = 0;
LAB_0007db1d:
            if (*(ulong *)(pcVar28 + uVar44 * 8) == *(ulong *)(piVar39 + uVar44 * 2))
            goto code_r0x0007db2e;
            uVar23 = *(ulong *)(piVar39 + uVar44 * 2) ^ *(ulong *)(pcVar28 + uVar44 * 8);
            uVar44 = 0;
            if (uVar23 != 0) {
              for (; (uVar23 >> uVar44 & 1) == 0; uVar44 = uVar44 + 1) {
              }
            }
            uVar44 = (uVar44 >> 3 & 0x1fffffff) - lVar33;
            goto LAB_0007db6e;
          }
          uVar23 = 0;
          goto LAB_0007dc61;
        }
        goto LAB_0007dac2;
      }
      local_58 = 0x7e4;
    }
LAB_0007da10:
    if (0x1f < uVar42) {
      uVar36 = *(ulong *)(param_6 + 0x88);
      if (uVar36 <= local_108) {
        uVar52 = *(uint *)(param_6 + 0x78);
        iVar43 = *(int *)(param_6 + 0x94);
        iVar7 = *(int *)(param_6 + 0x98);
LAB_0007dcb4:
        uVar35 = uVar52 & 0x3fffffff;
        bVar25 = *(byte *)(param_3 + (uVar36 & param_4));
        bVar5 = *(byte *)(param_3 + (uVar36 + 0x20 & param_4));
        if (uVar35 < 0x1000000) {
          uVar8 = *(uint *)(*(long *)(param_6 + 0x80) + (ulong)uVar35 * 4);
          *(int *)(*(long *)(param_6 + 0x80) + (ulong)uVar35 * 4) = (int)uVar36;
          if ((uVar36 == local_108) && (uVar8 != 0xffffffff)) {
            uVar35 = (int)local_108 - uVar8;
            if (uVar35 <= uVar48) {
              lVar37 = (ulong)(uVar8 & local_40) + param_3;
              lVar49 = 0;
              uVar30 = 0;
LAB_0007dd3b:
              uVar34 = *(ulong *)(lVar37 + uVar30 * 8);
              if (*(ulong *)(piVar39 + uVar30 * 2) == uVar34) goto code_r0x0007dd4c;
              uVar34 = uVar34 ^ *(ulong *)(piVar39 + uVar30 * 2);
              uVar30 = 0;
              if (uVar34 != 0) {
                for (; (uVar34 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
                }
              }
              uVar34 = (uVar30 >> 3 & 0x1fffffff) - lVar49;
              goto LAB_0007dd9f;
            }
          }
        }
        goto LAB_0007dd0e;
      }
      goto LAB_0007de0d;
    }
    goto LAB_0007de2a;
  }
  local_78 = local_78 + 1;
  param_2 = uVar51 + 1;
  if (local_108 < param_2) {
    if ((uint)((int)lVar41 * 4) + local_108 < param_2) {
      uVar53 = uVar51 + 0x11;
      if (uVar3 <= uVar51 + 0x11) {
        uVar53 = uVar3;
      }
      if (param_2 < uVar53) {
        uVar9 = *(undefined4 *)(param_6 + 0x40);
        uVar19 = *(uint *)(param_6 + 0x50);
        uVar10 = *(undefined4 *)(param_6 + 0x54);
        do {
          uVar42 = (*(ulong *)(param_3 + (param_2 & param_4)) & uVar12) * 0x1fe35a7bd3579bd3 >>
                   ((byte)uVar9 & 0x3f);
          uVar51 = uVar42 & 0xffffffff;
          uVar6 = *(ushort *)(lVar13 + uVar51 * 2);
          *(ushort *)(lVar13 + uVar51 * 2) = uVar6 + 1;
          *(int *)(lVar14 + (ulong)(uVar19 & uVar6) * 4 +
                  (ulong)(uint)((int)uVar42 << ((byte)uVar10 & 0x1f)) * 4) = (int)param_2;
          local_78 = local_78 + 4;
          param_2 = param_2 + 4;
        } while (param_2 < uVar53);
      }
    }
    else {
      uVar53 = uVar51 + 9;
      if (uVar3 <= uVar51 + 9) {
        uVar53 = uVar3;
      }
      if (param_2 < uVar53) {
        uVar9 = *(undefined4 *)(param_6 + 0x40);
        uVar19 = *(uint *)(param_6 + 0x50);
        uVar10 = *(undefined4 *)(param_6 + 0x54);
        do {
          uVar42 = (*(ulong *)(param_3 + (param_2 & param_4)) & uVar12) * 0x1fe35a7bd3579bd3 >>
                   ((byte)uVar9 & 0x3f);
          uVar51 = uVar42 & 0xffffffff;
          uVar6 = *(ushort *)(lVar13 + uVar51 * 2);
          *(ushort *)(lVar13 + uVar51 * 2) = uVar6 + 1;
          *(int *)(lVar14 + (ulong)(uVar19 & uVar6) * 4 +
                  (ulong)(uint)((int)uVar42 << ((byte)uVar10 & 0x1f)) * 4) = (int)param_2;
          local_78 = local_78 + 2;
          param_2 = param_2 + 2;
        } while (param_2 < uVar53);
      }
    }
  }
  goto LAB_0007e428;
code_r0x0007d6ee:
  uVar23 = uVar23 + 1;
  lVar49 = lVar49 + -8;
  if (uVar32 == uVar23) goto code_r0x0007d6fe;
  goto LAB_0007d6e1;
code_r0x0007d6fe:
  uVar23 = -lVar49;
  pcVar38 = pcVar28 + -lVar49;
joined_r0x0007d7b5:
  for (; (uVar44 != 0 && (*(char *)(lVar37 + uVar23) == *pcVar38)); uVar23 = uVar23 + 1) {
    pcVar38 = pcVar38 + 1;
    uVar44 = uVar44 - 1;
  }
LAB_0007d73e:
  if (((2 < uVar23) || ((uVar34 < 2 && (uVar23 == 2)))) &&
     (uVar44 = uVar23 * 0x87 + 0x78f, local_58 < uVar44)) {
    if (uVar34 != 0) {
      uVar44 = uVar44 - ((0x1ca10U >> ((byte)uVar34 & 0xe) & 0xe) + 0x27);
    }
    if (local_58 < uVar44) {
      uVar36 = uVar23;
      local_58 = uVar44;
      local_50 = uVar23;
      local_48 = uVar27;
    }
  }
LAB_0007d71b:
  uVar34 = uVar34 + 1;
  if (uVar34 == (long)*(int *)(param_6 + 0x58)) goto LAB_0007d7f0;
  goto LAB_0007d683;
code_r0x0007d8f0:
  uVar24 = uVar24 + 1;
  lVar45 = lVar45 + -8;
  if (uVar32 == uVar24) goto code_r0x0007d900;
  goto LAB_0007d8df;
code_r0x0007d900:
  uVar24 = -lVar45;
  piVar46 = (int *)((long)piVar39 - lVar45);
joined_r0x0007d97a:
  for (; (uVar40 != 0 && (*(char *)(lVar49 + uVar24) == (char)*piVar46)); uVar24 = uVar24 + 1) {
    uVar40 = uVar40 - 1;
    piVar46 = (int *)((long)piVar46 + 1);
  }
LAB_0007d91c:
  if (3 < uVar24) {
    iVar21 = 0x1f;
    if ((uint)uVar23 != 0) {
      for (; (uint)uVar23 >> iVar21 == 0; iVar21 = iVar21 + -1) {
      }
    }
    uVar40 = (ulong)(iVar21 * -0x1e + 0x780) + uVar24 * 0x87;
    if (local_58 < uVar40) {
      uVar36 = uVar24;
      local_58 = uVar40;
      local_50 = uVar24;
      local_48 = uVar23;
    }
  }
LAB_0007d95f:
  if (uVar27 <= uVar34) goto LAB_0007d99d;
  goto LAB_0007d881;
code_r0x0007db2e:
  uVar44 = uVar44 + 1;
  lVar33 = lVar33 + -8;
  if (bVar25 >> 3 == uVar44) goto code_r0x0007db3a;
  goto LAB_0007db1d;
code_r0x0007db3a:
  pcVar28 = pcVar28 + -lVar33;
LAB_0007dc61:
  uVar40 = uVar34 & 7;
  uVar44 = uVar23;
  if ((bVar25 & 7) != 0) {
    uVar24 = uVar23 | uVar40;
    do {
      uVar44 = uVar23;
      if (*(char *)((long)piVar39 + uVar23) != *pcVar28) break;
      pcVar28 = pcVar28 + 1;
      uVar23 = uVar23 + 1;
      uVar40 = uVar40 - 1;
      uVar44 = uVar24;
    } while (uVar40 != 0);
  }
LAB_0007db6e:
  if (((uVar44 != 0) && (uVar34 < *(uint *)(param_5 + 100) + uVar44)) &&
     (uVar34 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar34 - uVar44) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar34 - uVar44) * 4 << (*(byte *)(lVar45 + uVar34) & 0x3f)) +
               uVar27 + local_e0 + 1, uVar34 <= uVar15)) {
    iVar43 = 0x1f;
    if ((uint)uVar34 != 0) {
      for (; (uint)uVar34 >> iVar43 == 0; iVar43 = iVar43 + -1) {
      }
    }
    uVar27 = (uVar44 * 0x87 - (ulong)(uint)(iVar43 * 0x1e)) + 0x780;
    if (local_58 <= uVar27) {
      iVar21 = (uint)bVar25 - (int)uVar44;
      local_140 = local_140 + 1;
      *(ulong *)(lVar37 + 0x10) = local_140;
      local_58 = uVar27;
      local_48 = uVar34;
      local_50 = uVar44;
    }
  }
LAB_0007dac2:
  uVar30 = uVar30 + 1;
  bVar18 = !bVar47;
  bVar47 = false;
  if (bVar18) goto LAB_0007da10;
  goto LAB_0007da9f;
code_r0x0007dd4c:
  uVar30 = uVar30 + 1;
  lVar49 = lVar49 + -8;
  if (uVar32 == uVar30) goto code_r0x0007dd5c;
  goto LAB_0007dd3b;
code_r0x0007dd5c:
  uVar30 = (ulong)(uVar20 & 7);
  for (uVar34 = -lVar49;
      (uVar30 != 0 && (*(char *)(lVar37 + uVar34) == *(char *)((long)piVar39 + uVar34)));
      uVar34 = uVar34 + 1) {
    uVar30 = uVar30 - 1;
  }
LAB_0007dd9f:
  if ((3 < uVar34) && (local_50 < uVar34)) {
    iVar17 = 0x1f;
    if (uVar35 != 0) {
      for (; uVar35 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    uVar30 = (ulong)(iVar17 * -0x1e + 0x780) + uVar34 * 0x87;
    if (local_58 < uVar30) {
      iVar21 = 0;
      local_48 = (ulong)uVar35;
      local_50 = uVar34;
      local_58 = uVar30;
    }
  }
LAB_0007dd0e:
  uVar52 = ~(uint)bVar25 * iVar7 + (uint)bVar5 + uVar52 * iVar43 + 1;
  uVar36 = uVar36 + 1;
  if (local_108 < uVar36) goto LAB_0007ddf3;
  goto LAB_0007dcb4;
LAB_0007ddf3:
  *(uint *)(param_6 + 0x78) = uVar52;
LAB_0007de0d:
  *(ulong *)(param_6 + 0x88) = uVar51 + 2;
LAB_0007de2a:
  if (local_58 < local_b0 + 0xaf) {
    local_108 = uVar51;
    local_48 = local_e8;
    local_50 = uVar53;
    iVar21 = local_9c;
    local_e0 = uVar51 + lVar11;
    if (uVar4 <= uVar51 + lVar11) {
      local_e0 = uVar4;
    }
    goto LAB_0007e05c;
  }
  local_78 = local_78 + 1;
  if (2 < uVar19) goto LAB_0007e05c;
  uVar36 = uVar51 + 9;
  uVar19 = uVar19 + 1;
  uVar31 = uVar31 - 1;
  uVar53 = local_50;
  uVar51 = local_108;
  local_b0 = local_58;
  local_e8 = local_48;
  local_9c = iVar21;
  if (uVar1 <= uVar36) goto LAB_0007e05c;
  goto LAB_0007d5bd;
LAB_0007e05c:
  if (local_e0 < local_48) {
LAB_0007e075:
    uVar51 = local_48 + 0xf;
LAB_0007e079:
    if ((local_48 <= local_e0) && (uVar51 != 0)) {
      param_7[3] = param_7[2];
      uVar16 = *(undefined8 *)param_7;
      *(undefined8 *)(param_7 + 1) = uVar16;
      iVar43 = (int)local_48;
      *param_7 = iVar43;
      uVar19 = *(uint *)(param_6 + 0x58);
      if (4 < (int)uVar19) {
        param_7[4] = iVar43 + -1;
        param_7[5] = iVar43 + 1;
        param_7[6] = iVar43 + -2;
        param_7[7] = iVar43 + 2;
        param_7[8] = iVar43 + -3;
        param_7[9] = iVar43 + 3;
        if (10 < uVar19) {
          iVar43 = (int)uVar16;
          param_7[10] = iVar43 + -1;
          param_7[0xb] = iVar43 + 1;
          param_7[0xc] = iVar43 + -2;
          param_7[0xd] = iVar43 + 2;
          *(ulong *)(param_7 + 0xe) = CONCAT44(iVar43 + 3,iVar43 + -3);
        }
      }
    }
  }
  else {
    if (local_48 != (long)*param_7) {
      uVar51 = 1;
      if (local_48 != (long)param_7[1]) {
        uVar51 = (local_48 + 3) - (long)*param_7;
        if (uVar51 < 7) {
          bVar25 = (byte)((int)uVar51 << 2);
          uVar19 = 0x9750468;
        }
        else {
          uVar51 = (local_48 + 3) - (long)param_7[1];
          if (6 < uVar51) {
            uVar51 = 2;
            if ((local_48 != (long)param_7[2]) && (uVar51 = 3, local_48 != (long)param_7[3]))
            goto LAB_0007e075;
            goto LAB_0007e079;
          }
          bVar25 = (byte)((int)uVar51 << 2);
          uVar19 = 0xfdb1ace;
        }
        uVar51 = (ulong)(uVar19 >> (bVar25 & 0x1f) & 0xf);
      }
      goto LAB_0007e079;
    }
    uVar51 = 0;
  }
  uVar20 = (uint)local_78;
  *local_d0 = uVar20;
  local_d0[1] = iVar21 << 0x19 | (uint)local_50;
  uVar53 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
  uVar19 = 0;
  if (uVar53 <= uVar51) {
    bVar25 = (byte)*(uint *)(param_5 + 0x40);
    uVar42 = ((4L << (bVar25 & 0x3f)) + (uVar51 - *(uint *)(param_5 + 0x44))) - 0x10;
    uVar19 = 0x1f;
    uVar52 = (uint)uVar42;
    if (uVar52 != 0) {
      for (; uVar52 >> uVar19 == 0; uVar19 = uVar19 - 1) {
      }
    }
    uVar19 = (uVar19 ^ 0xffffffe0) + 0x1f;
    uVar31 = (ulong)((uVar42 >> ((ulong)uVar19 & 0x3f) & 1) != 0);
    lVar37 = (ulong)uVar19 - (ulong)*(uint *)(param_5 + 0x40);
    uVar51 = (~(-1 << (bVar25 & 0x1f)) & uVar52) + uVar53 +
             (uVar31 + lVar37 * 2 + 0xfffe << (bVar25 & 0x3f)) | lVar37 * 0x400;
    uVar19 = (uint)(uVar42 - (uVar31 + 2 << ((byte)uVar19 & 0x3f)) >> (bVar25 & 0x3f));
  }
  *(short *)((long)local_d0 + 0xe) = (short)uVar51;
  local_d0[2] = uVar19;
  if (5 < local_78) {
    if (local_78 < 0x82) {
      uVar19 = 0x1f;
      uVar20 = (uint)(local_78 - 2);
      if (uVar20 != 0) {
        for (; uVar20 >> uVar19 == 0; uVar19 = uVar19 - 1) {
        }
      }
      uVar20 = (int)(local_78 - 2 >> ((char)(uVar19 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
               (uVar19 ^ 0xffffffe0) * 2 + 0x40;
    }
    else if (local_78 < 0x842) {
      uVar19 = 0x1f;
      if (uVar20 - 0x42 != 0) {
        for (; uVar20 - 0x42 >> uVar19 == 0; uVar19 = uVar19 - 1) {
        }
      }
      uVar20 = (uVar19 ^ 0xffe0) + 0x2a;
    }
    else {
      uVar20 = 0x15;
      if (0x1841 < local_78) {
        uVar20 = (uint)(ushort)(0x17 - (local_78 < 0x5842));
      }
    }
  }
  uVar19 = iVar21 + (uint)local_50;
  if (uVar19 < 10) {
    uVar52 = uVar19 - 2;
  }
  else if (uVar19 < 0x86) {
    uVar19 = uVar19 - 6;
    uVar52 = 0x1f;
    if (uVar19 != 0) {
      for (; uVar19 >> uVar52 == 0; uVar52 = uVar52 - 1) {
      }
    }
    uVar52 = (uVar19 >> ((char)(uVar52 ^ 0xffffffe0) + 0x1fU & 0x1f)) + (uVar52 ^ 0xffffffe0) * 2 +
             0x42;
  }
  else {
    uVar52 = 0x17;
    if (uVar19 < 0x846) {
      uVar52 = 0x1f;
      if (uVar19 - 0x46 != 0) {
        for (; uVar19 - 0x46 >> uVar52 == 0; uVar52 = uVar52 - 1) {
        }
      }
      uVar52 = (uVar52 ^ 0xffe0) + 0x2c;
    }
  }
  uVar6 = (ushort)uVar52;
  sVar29 = (uVar6 & 7) + ((ushort)uVar20 & 7) * 8;
  if ((((uVar51 & 0x3ff) == 0) && ((ushort)uVar20 < 8)) && (uVar6 < 0x10)) {
    if (7 < uVar6) {
      sVar29 = sVar29 + 0x40;
    }
  }
  else {
    iVar21 = ((uVar20 & 0xffff) >> 3) * 3 + ((uVar52 & 0xffff) >> 3);
    sVar29 = sVar29 + ((ushort)(0x520d40 >> ((char)iVar21 * '\x02' & 0x1fU)) & 0xc0) +
                      (short)iVar21 * 0x40 + 0x40;
  }
  *(short *)(local_d0 + 3) = sVar29;
  *param_11 = *param_11 + local_78;
  param_2 = local_108 + local_50;
  uVar51 = uVar26;
  if (param_2 < uVar26) {
    uVar51 = param_2;
  }
  uVar53 = local_108 + 2;
  if (local_48 < local_50 >> 2) {
    uVar42 = param_2 + local_48 * -4;
    if (uVar42 < uVar53) {
      uVar42 = uVar53;
    }
    uVar53 = uVar42;
    if (uVar51 < uVar42) {
      uVar53 = uVar51;
    }
  }
  local_108 = lVar41 + local_50 * 2 + local_108;
  local_d0 = local_d0 + 4;
  if (uVar53 < uVar51) {
    uVar9 = *(undefined4 *)(param_6 + 0x40);
    uVar19 = *(uint *)(param_6 + 0x50);
    uVar10 = *(undefined4 *)(param_6 + 0x54);
    do {
      uVar31 = (*(ulong *)(param_3 + (uVar53 & param_4)) & uVar12) * 0x1fe35a7bd3579bd3 >>
               ((byte)uVar9 & 0x3f);
      uVar42 = uVar31 & 0xffffffff;
      uVar6 = *(ushort *)(lVar13 + uVar42 * 2);
      *(ushort *)(lVar13 + uVar42 * 2) = uVar6 + 1;
      *(int *)(lVar14 + (ulong)(uVar19 & uVar6) * 4 +
              (ulong)(uint)((int)uVar31 << ((byte)uVar10 & 0x1f)) * 4) = (int)uVar53;
      uVar53 = uVar53 + 1;
    } while (uVar51 != uVar53);
    local_78 = 0;
  }
  else {
    local_78 = 0;
  }
LAB_0007e428:
  uVar51 = param_2;
  if (uVar1 <= param_2 + 8) goto LAB_0007e495;
  goto LAB_0007ccc8;
}

