// rea decompile_all
// name: _CreateBackwardReferencesNH5
// address: 0x73425
// body: available
// range: 0x73425-0x74920 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH5
               (ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
               int *param_7,ulong *param_8,uint *param_9,long *param_10,long *param_11)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  char *pcVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  short sVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  int *piVar39;
  bool bVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  char *pcVar48;
  ulong uVar49;
  ulong uVar50;
  ulong local_130;
  ulong local_128;
  ulong local_f0;
  uint *local_d0;
  int local_ac;
  ulong local_a8;
  ulong local_78;
  ulong local_70;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  
  bVar21 = *(byte *)(param_5 + 8);
  uVar4 = (param_2 - 3) + param_1;
  uVar23 = param_2;
  if (3 < param_1) {
    uVar23 = uVar4;
  }
  lVar24 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar24 = 0x40;
  }
  lVar10 = *(long *)(param_5 + 0x10);
  uVar32 = *param_8;
  uVar1 = param_2 + param_1;
  uVar33 = *(uint *)(param_6 + 0x4c);
  if (4 < (int)uVar33) {
    iVar17 = *param_7;
    param_7[4] = iVar17 + -1;
    param_7[5] = iVar17 + 1;
    param_7[6] = iVar17 + -2;
    param_7[7] = iVar17 + 2;
    *(ulong *)(param_7 + 8) = CONCAT44(iVar17 + 3,iVar17 + -3);
    if (10 < uVar33) {
      iVar17 = param_7[1];
      param_7[10] = iVar17 + -1;
      param_7[0xb] = iVar17 + 1;
      param_7[0xc] = iVar17 + -2;
      param_7[0xd] = iVar17 + 2;
      *(ulong *)(param_7 + 0xe) = CONCAT44(iVar17 + 3,iVar17 + -3);
    }
  }
  if (param_2 + 4 < uVar1) {
    uVar5 = (1L << (bVar21 & 0x3f)) - 0x10;
    local_a8 = lVar24 + param_2;
    lVar11 = *(long *)(param_6 + 0x58);
    lVar12 = *(long *)(param_6 + 0x60);
    lVar3 = param_2 - 1;
    local_d0 = param_9;
    uVar49 = param_2;
    do {
      uVar35 = uVar1 - uVar49;
      uVar42 = uVar5;
      if (uVar49 < uVar5) {
        uVar42 = uVar49;
      }
      uVar19 = lVar10 + uVar49;
      if (uVar5 <= lVar10 + uVar49) {
        uVar19 = uVar5;
      }
      uVar13 = *(ulong *)(param_5 + 0x50);
      uVar41 = uVar49 & param_4;
      if ((long)*(int *)(param_6 + 0x4c) == 0) {
        local_78 = 0x7e4;
        local_40 = 0;
        local_70 = 0;
        uVar37 = 0;
      }
      else {
        pcVar28 = (char *)(param_3 + uVar41);
        uVar25 = (ulong)((uint)uVar35 & 7);
        local_78 = 0x7e4;
        uVar37 = 0;
        uVar44 = 0;
        local_70 = 0;
        local_40 = 0;
        do {
          uVar18 = (ulong)param_7[uVar44];
          if (((uVar18 <= uVar42) && (uVar49 - uVar18 < uVar49)) && (uVar37 + uVar41 <= param_4)) {
            uVar26 = uVar49 - uVar18 & param_4;
            uVar36 = uVar26 + uVar37;
            if ((uVar36 <= param_4) &&
               (*(char *)(param_3 + uVar37 + uVar41) == *(char *)(param_3 + uVar36))) {
              lVar27 = uVar26 + param_3;
              if (7 < uVar35) {
                lVar47 = 0;
                uVar36 = 0;
LAB_000736a8:
                uVar26 = *(ulong *)(lVar27 + uVar36 * 8);
                if (*(ulong *)(pcVar28 + uVar36 * 8) == uVar26) goto code_r0x000736b9;
                uVar26 = uVar26 ^ *(ulong *)(pcVar28 + uVar36 * 8);
                uVar36 = 0;
                if (uVar26 != 0) {
                  for (; (uVar26 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                  }
                }
                uVar36 = (uVar36 >> 3 & 0x1fffffff) - lVar47;
                goto LAB_000736f7;
              }
              uVar26 = 0;
              pcVar48 = pcVar28;
LAB_0007375d:
              uVar36 = uVar26;
              if (uVar25 != 0) {
                uVar30 = uVar25 | uVar26;
                uVar50 = uVar25;
                do {
                  uVar36 = uVar26;
                  if (*(char *)(lVar27 + uVar26) != *pcVar48) break;
                  pcVar48 = pcVar48 + 1;
                  uVar26 = uVar26 + 1;
                  uVar50 = uVar50 - 1;
                  uVar36 = uVar30;
                } while (uVar50 != 0);
              }
LAB_000736f7:
              if (((2 < uVar36) || ((uVar44 < 2 && (uVar36 == 2)))) &&
                 (uVar26 = uVar36 * 0x87 + 0x78f, local_78 < uVar26)) {
                if (uVar44 != 0) {
                  uVar26 = uVar26 - ((0x1ca10U >> ((byte)uVar44 & 0xe) & 0xe) + 0x27);
                }
                if (local_78 < uVar26) {
                  uVar37 = uVar36;
                  local_78 = uVar26;
                  local_70 = uVar36;
                  local_40 = uVar18;
                }
              }
            }
          }
          uVar44 = uVar44 + 1;
        } while (uVar44 != (long)*(int *)(param_6 + 0x4c));
      }
      uVar33 = (uint)(*(int *)(param_3 + uVar41) * 0x1e35a7bd) >> (*(byte *)(param_6 + 0x40) & 0x1f)
      ;
      piVar2 = (int *)(param_3 + uVar41);
      lVar27 = lVar12 + (ulong)(uVar33 << (*(byte *)(param_6 + 0x48) & 0x1f)) * 4;
      uVar6 = *(ushort *)(lVar11 + (ulong)uVar33 * 2);
      uVar18 = (ulong)uVar6;
      uVar25 = *(ulong *)(param_6 + 0x38);
      uVar44 = 0;
      if (uVar25 <= uVar18) {
        uVar44 = uVar18 - uVar25;
      }
      if (uVar44 < uVar18) {
        uVar36 = (ulong)((uint)uVar35 & 7);
        do {
          uVar18 = uVar18 - 1;
          uVar22 = *(uint *)(lVar27 + (ulong)((uint)uVar18 & *(uint *)(param_6 + 0x44)) * 4);
          uVar26 = uVar49 - uVar22;
          if (uVar42 < uVar26) break;
          if (uVar37 + uVar41 <= param_4) {
            uVar30 = (ulong)(uVar22 & (uint)param_4);
            uVar50 = uVar30 + uVar37;
            if ((uVar50 <= param_4) &&
               (*(char *)(param_3 + uVar37 + uVar41) == *(char *)(param_3 + uVar50))) {
              lVar47 = uVar30 + param_3;
              if (7 < uVar35) {
                lVar38 = 0;
                uVar50 = 0;
LAB_000738b1:
                uVar30 = *(ulong *)(lVar47 + uVar50 * 8);
                if (*(ulong *)(piVar2 + uVar50 * 2) == uVar30) goto code_r0x000738c2;
                uVar30 = uVar30 ^ *(ulong *)(piVar2 + uVar50 * 2);
                uVar50 = 0;
                if (uVar30 != 0) {
                  for (; (uVar30 >> uVar50 & 1) == 0; uVar50 = uVar50 + 1) {
                  }
                }
                uVar50 = (uVar50 >> 3 & 0x1fffffff) - lVar38;
                goto LAB_000738ff;
              }
              uVar30 = 0;
              piVar39 = piVar2;
LAB_00073945:
              uVar50 = uVar30;
              if (uVar36 != 0) {
                uVar31 = uVar36 | uVar30;
                uVar45 = uVar36;
                do {
                  uVar50 = uVar30;
                  if (*(char *)(lVar47 + uVar30) != (char)*piVar39) break;
                  piVar39 = (int *)((long)piVar39 + 1);
                  uVar30 = uVar30 + 1;
                  uVar45 = uVar45 - 1;
                  uVar50 = uVar31;
                } while (uVar45 != 0);
              }
LAB_000738ff:
              if (3 < uVar50) {
                iVar17 = 0x1f;
                if ((uint)uVar26 != 0) {
                  for (; (uint)uVar26 >> iVar17 == 0; iVar17 = iVar17 + -1) {
                  }
                }
                uVar30 = (ulong)(iVar17 * -0x1e + 0x780) + uVar50 * 0x87;
                if (local_78 < uVar30) {
                  uVar37 = uVar50;
                  local_78 = uVar30;
                  local_70 = uVar50;
                  local_40 = uVar26;
                }
              }
            }
          }
        } while (uVar44 < uVar18);
      }
      *(int *)(lVar27 + (ulong)(*(uint *)(param_6 + 0x44) & (uint)uVar6) * 4) = (int)uVar49;
      *(ushort *)(lVar11 + (ulong)uVar33 * 2) = uVar6 + 1;
      if (local_78 == 0x7e4) {
        lVar27 = *(long *)(param_6 + 0x50);
        uVar41 = *(ulong *)(lVar27 + 8);
        local_78 = *(ulong *)(lVar27 + 0x10);
        if (uVar41 >> 7 <= local_78) {
          uVar37 = (ulong)((uint)(*piVar2 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
          lVar47 = *(long *)(param_5 + 0x78);
          uVar42 = 0x7e4;
          local_ac = 0;
          bVar40 = true;
LAB_00073a04:
          uVar41 = uVar41 + 1;
          *(ulong *)(lVar27 + 8) = uVar41;
          bVar21 = *(byte *)(lVar47 + uVar37);
          uVar44 = (ulong)bVar21;
          if ((uVar44 != 0) && (uVar44 <= uVar35)) {
            uVar18 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar37 * 2);
            lVar38 = *(long *)(param_5 + 0x58);
            pcVar28 = (char *)(uVar18 * uVar44 + *(long *)(lVar38 + 0xa8) +
                              (ulong)*(uint *)(lVar38 + 0x20 + uVar44 * 4));
            if (7 < bVar21) {
              uVar36 = (ulong)(bVar21 & 0xfffffff8);
              lVar20 = 0;
              uVar26 = 0;
LAB_00073a79:
              if (*(ulong *)(pcVar28 + uVar26 * 8) == *(ulong *)(piVar2 + uVar26 * 2))
              goto code_r0x00073a8a;
              uVar26 = *(ulong *)(piVar2 + uVar26 * 2) ^ *(ulong *)(pcVar28 + uVar26 * 8);
              uVar36 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar36 & 1) == 0; uVar36 = uVar36 + 1) {
                }
              }
              uVar26 = (uVar36 >> 3 & 0x1fffffff) - lVar20;
              goto LAB_00073ab5;
            }
            uVar36 = 0;
            goto LAB_00073bb2;
          }
          goto LAB_00073b38;
        }
LAB_0007435a:
        uVar32 = uVar32 + 1;
        param_2 = uVar49 + 1;
        if (local_a8 < param_2) {
          if ((uint)((int)lVar24 * 4) + local_a8 < param_2) {
            uVar42 = uVar49 + 0x11;
            if (uVar1 - 4 <= uVar49 + 0x11) {
              uVar42 = uVar1 - 4;
            }
            if (param_2 < uVar42) {
              uVar7 = *(undefined4 *)(param_6 + 0x40);
              uVar33 = *(uint *)(param_6 + 0x44);
              uVar8 = *(undefined4 *)(param_6 + 0x48);
              do {
                uVar22 = (uint)(*(int *)(param_3 + (param_2 & param_4)) * 0x1e35a7bd) >>
                         ((byte)uVar7 & 0x1f);
                uVar6 = *(ushort *)(lVar11 + (ulong)uVar22 * 2);
                *(int *)(lVar12 + (ulong)(uVar33 & uVar6) * 4 +
                        (ulong)(uVar22 << ((byte)uVar8 & 0x1f)) * 4) = (int)param_2;
                *(ushort *)(lVar11 + (ulong)uVar22 * 2) = uVar6 + 1;
                uVar32 = uVar32 + 4;
                param_2 = param_2 + 4;
              } while (param_2 < uVar42);
            }
          }
          else {
            uVar42 = uVar49 + 9;
            if (uVar4 <= uVar49 + 9) {
              uVar42 = uVar4;
            }
            if (param_2 < uVar42) {
              uVar7 = *(undefined4 *)(param_6 + 0x40);
              uVar33 = *(uint *)(param_6 + 0x44);
              uVar8 = *(undefined4 *)(param_6 + 0x48);
              do {
                uVar22 = (uint)(*(int *)(param_3 + (param_2 & param_4)) * 0x1e35a7bd) >>
                         ((byte)uVar7 & 0x1f);
                uVar6 = *(ushort *)(lVar11 + (ulong)uVar22 * 2);
                *(int *)(lVar12 + (ulong)(uVar33 & uVar6) * 4 +
                        (ulong)(uVar22 << ((byte)uVar8 & 0x1f)) * 4) = (int)param_2;
                *(ushort *)(lVar11 + (ulong)uVar22 * 2) = uVar6 + 1;
                uVar32 = uVar32 + 2;
                param_2 = param_2 + 2;
              } while (param_2 < uVar42);
            }
          }
        }
      }
      else {
        local_ac = 0;
        uVar42 = local_78;
LAB_00073bfb:
        if (uVar42 < 0x7e5) goto LAB_0007435a;
        iVar17 = *(int *)(param_6 + 0x4c);
        uVar7 = *(undefined4 *)(param_6 + 0x40);
        uVar33 = *(uint *)(param_6 + 0x44);
        uVar8 = *(undefined4 *)(param_6 + 0x48);
        uVar19 = (lVar3 + param_1) - uVar49;
        uVar22 = 0;
        local_130 = local_40;
        do {
          uVar35 = uVar35 - 1;
          uVar41 = local_70 - 1;
          if (uVar35 <= local_70 - 1) {
            uVar41 = uVar35;
          }
          if (4 < *(int *)(param_5 + 4)) {
            uVar41 = 0;
          }
          local_a8 = uVar49 + 1;
          uVar37 = uVar5;
          if (local_a8 < uVar5) {
            uVar37 = local_a8;
          }
          local_f0 = lVar10 + uVar49 + 1;
          if (uVar5 <= local_f0) {
            local_f0 = uVar5;
          }
          uVar44 = local_a8 & param_4;
          if (iVar17 != 0) {
            pcVar28 = (char *)(param_3 + uVar44);
            uVar36 = (ulong)((uint)uVar35 & 7);
            uVar18 = 0x7e4;
            uVar26 = 0;
            local_48 = 0;
            local_50 = 0;
LAB_00073d16:
            uVar50 = (ulong)param_7[uVar26];
            if (((uVar50 <= uVar37) && (local_a8 - uVar50 < local_a8)) &&
               (uVar41 + uVar44 <= param_4)) {
              uVar45 = local_a8 - uVar50 & param_4;
              uVar30 = uVar45 + uVar41;
              if ((param_4 < uVar30) ||
                 (*(char *)(param_3 + uVar41 + uVar44) != *(char *)(param_3 + uVar30)))
              goto LAB_00073da5;
              lVar27 = uVar45 + param_3;
              uVar30 = uVar36;
              if (7 < uVar35) {
                lVar47 = 0;
                uVar45 = 0;
LAB_00073d67:
                uVar31 = *(ulong *)(lVar27 + uVar45 * 8);
                if (*(ulong *)(pcVar28 + uVar45 * 8) == uVar31) goto code_r0x00073d78;
                uVar31 = uVar31 ^ *(ulong *)(pcVar28 + uVar45 * 8);
                uVar30 = 0;
                if (uVar31 != 0) {
                  for (; (uVar31 >> uVar30 & 1) == 0; uVar30 = uVar30 + 1) {
                  }
                }
                uVar45 = (uVar30 >> 3 & 0x1fffffff) - lVar47;
                goto LAB_00073dcc;
              }
              uVar45 = 0;
              pcVar48 = pcVar28;
              goto joined_r0x00073e3d;
            }
            goto LAB_00073da5;
          }
          uVar18 = 0x7e4;
          local_50 = 0;
          local_48 = 0;
LAB_00073e81:
          piVar2 = (int *)(param_3 + uVar44);
          uVar29 = (uint)(*(int *)(param_3 + uVar44) * 0x1e35a7bd) >> ((byte)uVar7 & 0x1f);
          lVar27 = lVar12 + (ulong)(uVar29 << ((byte)uVar8 & 0x1f)) * 4;
          uVar6 = *(ushort *)(lVar11 + (ulong)uVar29 * 2);
          uVar26 = (ulong)uVar6;
          uVar36 = 0;
          if (uVar25 <= uVar26) {
            uVar36 = uVar26 - uVar25;
          }
          if (uVar36 < uVar26) {
            uVar50 = (ulong)((uint)uVar35 & 7);
LAB_00073ef7:
            uVar26 = uVar26 - 1;
            uVar9 = *(uint *)(lVar27 + (ulong)((uint)uVar26 & uVar33) * 4);
            uVar30 = local_a8 - uVar9;
            if (uVar30 <= uVar37) {
              if (uVar41 + uVar44 <= param_4) {
                uVar31 = (ulong)(uVar9 & (uint)param_4);
                uVar45 = uVar31 + uVar41;
                if ((param_4 < uVar45) ||
                   (*(char *)(param_3 + uVar41 + uVar44) != *(char *)(param_3 + uVar45)))
                goto LAB_00073fd8;
                lVar47 = uVar31 + param_3;
                uVar45 = uVar50;
                if (7 < uVar35) {
                  lVar38 = 0;
                  uVar31 = 0;
LAB_00073f54:
                  uVar43 = *(ulong *)(lVar47 + uVar31 * 8);
                  if (*(ulong *)(piVar2 + uVar31 * 2) == uVar43) goto code_r0x00073f65;
                  uVar43 = uVar43 ^ *(ulong *)(piVar2 + uVar31 * 2);
                  uVar45 = 0;
                  if (uVar43 != 0) {
                    for (; (uVar43 >> uVar45 & 1) == 0; uVar45 = uVar45 + 1) {
                    }
                  }
                  uVar31 = (uVar45 >> 3 & 0x1fffffff) - lVar38;
                  goto LAB_00073f9f;
                }
                uVar31 = 0;
                piVar39 = piVar2;
                goto joined_r0x00073ff3;
              }
              goto LAB_00073fd8;
            }
          }
LAB_00074019:
          *(int *)(lVar27 + (ulong)(uVar33 & uVar6) * 4) = (int)local_a8;
          *(ushort *)(lVar11 + (ulong)uVar29 * 2) = uVar6 + 1;
          if (uVar18 == 0x7e4) {
            lVar27 = *(long *)(param_6 + 0x50);
            uVar41 = *(ulong *)(lVar27 + 8);
            local_128 = *(ulong *)(lVar27 + 0x10);
            uVar18 = 0x7e4;
            if (uVar41 >> 7 <= local_128) {
              uVar37 = (ulong)((uint)(*piVar2 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
              lVar47 = *(long *)(param_5 + 0x78);
              iVar46 = 0;
              uVar18 = 0x7e4;
              bVar40 = true;
LAB_00074178:
              uVar41 = uVar41 + 1;
              *(ulong *)(lVar27 + 8) = uVar41;
              bVar21 = *(byte *)(lVar47 + uVar37);
              uVar44 = (ulong)bVar21;
              if ((uVar44 != 0) && (uVar44 <= uVar35)) {
                uVar36 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar37 * 2);
                lVar38 = *(long *)(param_5 + 0x58);
                pcVar28 = (char *)(uVar36 * uVar44 + *(long *)(lVar38 + 0xa8) +
                                  (ulong)*(uint *)(lVar38 + 0x20 + uVar44 * 4));
                if (7 < bVar21) {
                  uVar26 = (ulong)(bVar21 & 0xfffffff8);
                  lVar20 = 0;
                  uVar50 = 0;
LAB_000741df:
                  if (*(ulong *)(pcVar28 + uVar50 * 8) == *(ulong *)(piVar2 + uVar50 * 2))
                  goto code_r0x000741f0;
                  uVar50 = *(ulong *)(piVar2 + uVar50 * 2) ^ *(ulong *)(pcVar28 + uVar50 * 8);
                  uVar26 = 0;
                  if (uVar50 != 0) {
                    for (; (uVar50 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                    }
                  }
                  uVar50 = (uVar26 >> 3 & 0x1fffffff) - lVar20;
                  goto LAB_0007422f;
                }
                uVar26 = 0;
                goto LAB_00074323;
              }
              goto LAB_000742ff;
            }
            iVar46 = 0;
          }
          else {
            iVar46 = 0;
          }
LAB_0007409f:
          if (uVar18 < uVar42 + 0xaf) {
            local_a8 = uVar49;
            local_48 = local_70;
            iVar46 = local_ac;
            local_f0 = uVar49 + lVar10;
            if (uVar5 <= uVar49 + lVar10) {
              local_f0 = uVar5;
            }
            break;
          }
          uVar32 = uVar32 + 1;
          local_130 = local_50;
          if (2 < uVar22) break;
          uVar41 = uVar49 + 5;
          uVar22 = uVar22 + 1;
          uVar19 = uVar19 - 1;
          uVar49 = local_a8;
          uVar42 = uVar18;
          local_70 = local_48;
          local_ac = iVar46;
        } while (uVar41 < uVar1);
        if (local_f0 < local_130) {
LAB_0007450a:
          uVar49 = local_130 + 0xf;
LAB_0007450e:
          if ((local_130 <= local_f0) && (uVar49 != 0)) {
            param_7[3] = param_7[2];
            uVar14 = *(undefined8 *)param_7;
            *(undefined8 *)(param_7 + 1) = uVar14;
            iVar17 = (int)local_130;
            *param_7 = iVar17;
            uVar33 = *(uint *)(param_6 + 0x4c);
            if (4 < (int)uVar33) {
              param_7[4] = iVar17 + -1;
              param_7[5] = iVar17 + 1;
              param_7[6] = iVar17 + -2;
              param_7[7] = iVar17 + 2;
              param_7[8] = iVar17 + -3;
              param_7[9] = iVar17 + 3;
              if (10 < uVar33) {
                iVar17 = (int)uVar14;
                param_7[10] = iVar17 + -1;
                param_7[0xb] = iVar17 + 1;
                param_7[0xc] = iVar17 + -2;
                param_7[0xd] = iVar17 + 2;
                *(ulong *)(param_7 + 0xe) = CONCAT44(iVar17 + 3,iVar17 + -3);
              }
            }
          }
        }
        else {
          if (local_130 != (long)*param_7) {
            uVar49 = 1;
            if (local_130 != (long)param_7[1]) {
              uVar49 = (local_130 + 3) - (long)*param_7;
              if (uVar49 < 7) {
                bVar21 = (byte)((int)uVar49 << 2);
                uVar33 = 0x9750468;
              }
              else {
                uVar49 = (local_130 + 3) - (long)param_7[1];
                if (6 < uVar49) {
                  uVar49 = 2;
                  if ((local_130 != (long)param_7[2]) && (uVar49 = 3, local_130 != (long)param_7[3])
                     ) goto LAB_0007450a;
                  goto LAB_0007450e;
                }
                bVar21 = (byte)((int)uVar49 << 2);
                uVar33 = 0xfdb1ace;
              }
              uVar49 = (ulong)(uVar33 >> (bVar21 & 0x1f) & 0xf);
            }
            goto LAB_0007450e;
          }
          uVar49 = 0;
        }
        uVar22 = (uint)uVar32;
        *local_d0 = uVar22;
        local_d0[1] = iVar46 << 0x19 | (uint)local_48;
        uVar42 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
        uVar33 = 0;
        if (uVar42 <= uVar49) {
          bVar21 = (byte)*(uint *)(param_5 + 0x40);
          uVar35 = ((4L << (bVar21 & 0x3f)) + (uVar49 - *(uint *)(param_5 + 0x44))) - 0x10;
          uVar33 = 0x1f;
          uVar29 = (uint)uVar35;
          if (uVar29 != 0) {
            for (; uVar29 >> uVar33 == 0; uVar33 = uVar33 - 1) {
            }
          }
          uVar33 = (uVar33 ^ 0xffffffe0) + 0x1f;
          uVar19 = (ulong)((uVar35 >> ((ulong)uVar33 & 0x3f) & 1) != 0);
          lVar27 = (ulong)uVar33 - (ulong)*(uint *)(param_5 + 0x40);
          uVar49 = (~(-1 << (bVar21 & 0x1f)) & uVar29) + uVar42 +
                   (uVar19 + lVar27 * 2 + 0xfffe << (bVar21 & 0x3f)) | lVar27 * 0x400;
          uVar33 = (uint)(uVar35 - (uVar19 + 2 << ((byte)uVar33 & 0x3f)) >> (bVar21 & 0x3f));
        }
        *(short *)((long)local_d0 + 0xe) = (short)uVar49;
        local_d0[2] = uVar33;
        if (5 < uVar32) {
          if (uVar32 < 0x82) {
            uVar33 = 0x1f;
            uVar22 = (uint)(uVar32 - 2);
            if (uVar22 != 0) {
              for (; uVar22 >> uVar33 == 0; uVar33 = uVar33 - 1) {
              }
            }
            uVar22 = (int)(uVar32 - 2 >> ((char)(uVar33 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                     (uVar33 ^ 0xffffffe0) * 2 + 0x40;
          }
          else if (uVar32 < 0x842) {
            uVar33 = 0x1f;
            if (uVar22 - 0x42 != 0) {
              for (; uVar22 - 0x42 >> uVar33 == 0; uVar33 = uVar33 - 1) {
              }
            }
            uVar22 = (uVar33 ^ 0xffe0) + 0x2a;
          }
          else {
            uVar22 = 0x15;
            if (0x1841 < uVar32) {
              uVar22 = (uint)(ushort)(0x17 - (uVar32 < 0x5842));
            }
          }
        }
        uVar33 = iVar46 + (uint)local_48;
        if (uVar33 < 10) {
          uVar29 = uVar33 - 2;
        }
        else if (uVar33 < 0x86) {
          uVar33 = uVar33 - 6;
          uVar29 = 0x1f;
          if (uVar33 != 0) {
            for (; uVar33 >> uVar29 == 0; uVar29 = uVar29 - 1) {
            }
          }
          uVar29 = (uVar33 >> ((char)(uVar29 ^ 0xffffffe0) + 0x1fU & 0x1f)) + 0x42 +
                   (uVar29 ^ 0xffffffe0) * 2;
        }
        else {
          uVar29 = 0x17;
          if (uVar33 < 0x846) {
            uVar29 = 0x1f;
            if (uVar33 - 0x46 != 0) {
              for (; uVar33 - 0x46 >> uVar29 == 0; uVar29 = uVar29 - 1) {
              }
            }
            uVar29 = (uVar29 ^ 0xffe0) + 0x2c;
          }
        }
        uVar6 = (ushort)uVar29;
        sVar34 = (uVar6 & 7) + ((ushort)uVar22 & 7) * 8;
        if ((((uVar49 & 0x3ff) == 0) && ((ushort)uVar22 < 8)) && (uVar6 < 0x10)) {
          if (7 < uVar6) {
            sVar34 = sVar34 + 0x40;
          }
        }
        else {
          iVar17 = ((uVar22 & 0xffff) >> 3) * 3 + ((uVar29 & 0xffff) >> 3);
          sVar34 = sVar34 + ((ushort)(0x520d40 >> ((char)iVar17 * '\x02' & 0x1fU)) & 0xc0) +
                            (short)iVar17 * 0x40 + 0x40;
        }
        *(short *)(local_d0 + 3) = sVar34;
        *param_11 = *param_11 + uVar32;
        param_2 = local_a8 + local_48;
        uVar32 = uVar23;
        if (param_2 < uVar23) {
          uVar32 = param_2;
        }
        uVar49 = local_a8 + 2;
        if (local_130 < local_48 >> 2) {
          uVar42 = param_2 + local_130 * -4;
          if (uVar42 < uVar49) {
            uVar42 = uVar49;
          }
          uVar49 = uVar42;
          if (uVar32 < uVar42) {
            uVar49 = uVar32;
          }
        }
        local_a8 = lVar24 + local_48 * 2 + local_a8;
        local_d0 = local_d0 + 4;
        if (uVar49 < uVar32) {
          uVar7 = *(undefined4 *)(param_6 + 0x40);
          uVar33 = *(uint *)(param_6 + 0x44);
          uVar8 = *(undefined4 *)(param_6 + 0x48);
          do {
            uVar22 = (uint)(*(int *)(param_3 + (uVar49 & param_4)) * 0x1e35a7bd) >>
                     ((byte)uVar7 & 0x1f);
            uVar6 = *(ushort *)(lVar11 + (ulong)uVar22 * 2);
            *(int *)((ulong)(uVar33 & uVar6) * 4 + lVar12 +
                    (ulong)(uVar22 << ((byte)uVar8 & 0x1f)) * 4) = (int)uVar49;
            *(ushort *)(lVar11 + (ulong)uVar22 * 2) = uVar6 + 1;
            uVar49 = uVar49 + 1;
          } while (uVar32 != uVar49);
        }
        uVar32 = 0;
      }
      uVar49 = param_2;
    } while (param_2 + 4 < uVar1);
  }
  else {
    local_d0 = param_9;
  }
  *param_8 = (uVar32 + uVar1) - param_2;
  *param_10 = *param_10 + ((long)local_d0 - (long)param_9 >> 4);
  return;
code_r0x000736b9:
  uVar36 = uVar36 + 1;
  lVar47 = lVar47 + -8;
  uVar26 = uVar35 & 0xfffffffffffffff8;
  pcVar48 = pcVar28 + (uVar35 & 0xfffffffffffffff8);
  if (uVar35 >> 3 == uVar36) goto LAB_0007375d;
  goto LAB_000736a8;
code_r0x000738c2:
  uVar50 = uVar50 + 1;
  lVar38 = lVar38 + -8;
  uVar30 = uVar35 & 0xfffffffffffffff8;
  piVar39 = (int *)((uVar35 & 0xfffffffffffffff8) + (long)piVar2);
  if (uVar35 >> 3 == uVar50) goto LAB_00073945;
  goto LAB_000738b1;
code_r0x00073a8a:
  uVar26 = uVar26 + 1;
  lVar20 = lVar20 + -8;
  if (bVar21 >> 3 == uVar26) goto code_r0x00073a96;
  goto LAB_00073a79;
code_r0x00073a96:
  pcVar28 = pcVar28 + -lVar20;
LAB_00073bb2:
  uVar50 = uVar44 & 7;
  uVar26 = uVar36;
  if ((bVar21 & 7) != 0) {
    uVar30 = uVar36 | uVar50;
    do {
      uVar26 = uVar36;
      if (*(char *)((long)piVar2 + uVar36) != *pcVar28) break;
      pcVar28 = pcVar28 + 1;
      uVar36 = uVar36 + 1;
      uVar50 = uVar50 - 1;
      uVar26 = uVar30;
    } while (uVar50 != 0);
  }
LAB_00073ab5:
  if (((uVar26 != 0) && (uVar44 < *(uint *)(param_5 + 100) + uVar26)) &&
     (uVar44 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar44 - uVar26) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar44 - uVar26) * 4 << (*(byte *)(lVar38 + uVar44) & 0x3f)) + uVar18 + uVar19 + 1,
     uVar44 <= uVar13)) {
    iVar17 = 0x1f;
    if ((uint)uVar44 != 0) {
      for (; (uint)uVar44 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    uVar18 = (uVar26 * 0x87 - (ulong)(uint)(iVar17 * 0x1e)) + 0x780;
    if (uVar42 <= uVar18) {
      local_ac = (uint)bVar21 - (int)uVar26;
      local_78 = local_78 + 1;
      *(ulong *)(lVar27 + 0x10) = local_78;
      local_40 = uVar44;
      uVar42 = uVar18;
      local_70 = uVar26;
    }
  }
LAB_00073b38:
  uVar37 = uVar37 + 1;
  bVar16 = !bVar40;
  bVar40 = false;
  if (bVar16) goto LAB_00073bfb;
  goto LAB_00073a04;
code_r0x00073d78:
  uVar45 = uVar45 + 1;
  lVar47 = lVar47 + -8;
  if (uVar19 >> 3 == uVar45) goto code_r0x00073d88;
  goto LAB_00073d67;
code_r0x00073d88:
  uVar45 = -lVar47;
  pcVar48 = pcVar28 + -lVar47;
joined_r0x00073e3d:
  for (; (uVar30 != 0 && (*(char *)(lVar27 + uVar45) == *pcVar48)); uVar45 = uVar45 + 1) {
    pcVar48 = pcVar48 + 1;
    uVar30 = uVar30 - 1;
  }
LAB_00073dcc:
  if (((2 < uVar45) || ((uVar26 < 2 && (uVar45 == 2)))) &&
     (uVar30 = uVar45 * 0x87 + 0x78f, uVar18 < uVar30)) {
    if (uVar26 != 0) {
      uVar30 = uVar30 - ((0x1ca10U >> ((byte)uVar26 & 0xe) & 0xe) + 0x27);
    }
    if (uVar18 < uVar30) {
      uVar18 = uVar30;
      uVar41 = uVar45;
      local_50 = uVar50;
      local_48 = uVar45;
    }
  }
LAB_00073da5:
  uVar26 = uVar26 + 1;
  if (uVar26 == (long)iVar17) goto LAB_00073e81;
  goto LAB_00073d16;
code_r0x00073f65:
  uVar31 = uVar31 + 1;
  lVar38 = lVar38 + -8;
  if (uVar19 >> 3 == uVar31) goto code_r0x00073f75;
  goto LAB_00073f54;
code_r0x00073f75:
  uVar31 = -lVar38;
  piVar39 = (int *)((long)piVar2 - lVar38);
joined_r0x00073ff3:
  for (; (uVar45 != 0 && (*(char *)(lVar47 + uVar31) == (char)*piVar39)); uVar31 = uVar31 + 1) {
    uVar45 = uVar45 - 1;
    piVar39 = (int *)((long)piVar39 + 1);
  }
LAB_00073f9f:
  if (3 < uVar31) {
    iVar46 = 0x1f;
    if ((uint)uVar30 != 0) {
      for (; (uint)uVar30 >> iVar46 == 0; iVar46 = iVar46 + -1) {
      }
    }
    uVar45 = (ulong)(iVar46 * -0x1e + 0x780) + uVar31 * 0x87;
    if (uVar18 < uVar45) {
      uVar18 = uVar45;
      uVar41 = uVar31;
      local_50 = uVar30;
      local_48 = uVar31;
    }
  }
LAB_00073fd8:
  if (uVar26 <= uVar36) goto LAB_00074019;
  goto LAB_00073ef7;
code_r0x000741f0:
  uVar50 = uVar50 + 1;
  lVar20 = lVar20 + -8;
  if (bVar21 >> 3 == uVar50) goto code_r0x000741fc;
  goto LAB_000741df;
code_r0x000741fc:
  pcVar28 = pcVar28 + -lVar20;
LAB_00074323:
  uVar30 = uVar44 & 7;
  uVar50 = uVar26;
  if ((bVar21 & 7) != 0) {
    uVar45 = uVar26 | uVar30;
    do {
      uVar50 = uVar26;
      if (*(char *)((long)piVar2 + uVar26) != *pcVar28) break;
      pcVar28 = pcVar28 + 1;
      uVar26 = uVar26 + 1;
      uVar30 = uVar30 - 1;
      uVar50 = uVar45;
    } while (uVar30 != 0);
  }
LAB_0007422f:
  if (((uVar50 != 0) && (uVar44 < *(uint *)(param_5 + 100) + uVar50)) &&
     (uVar44 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar44 - uVar50) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar44 - uVar50) * 4 << (*(byte *)(lVar38 + uVar44) & 0x3f)) +
               uVar36 + local_f0 + 1, uVar44 <= uVar13)) {
    iVar15 = 0x1f;
    if ((uint)uVar44 != 0) {
      for (; (uint)uVar44 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    uVar36 = (uVar50 * 0x87 - (ulong)(uint)(iVar15 * 0x1e)) + 0x780;
    if (uVar18 <= uVar36) {
      iVar46 = (uint)bVar21 - (int)uVar50;
      local_128 = local_128 + 1;
      *(ulong *)(lVar27 + 0x10) = local_128;
      local_48 = uVar50;
      uVar18 = uVar36;
      local_50 = uVar44;
    }
  }
LAB_000742ff:
  uVar37 = uVar37 + 1;
  bVar16 = !bVar40;
  bVar40 = false;
  if (bVar16) goto LAB_0007409f;
  goto LAB_00074178;
}

