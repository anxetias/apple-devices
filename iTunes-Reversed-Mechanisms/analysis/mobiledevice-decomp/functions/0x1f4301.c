// rea decompile_all
// name: _CreateBackwardReferencesNH6
// address: 0x1f4301
// body: available
// range: 0x1f4301-0x1f5909 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH6
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
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  byte bVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  char *pcVar28;
  ulong uVar29;
  ulong uVar30;
  short sVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  int *piVar38;
  bool bVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  char *pcVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong local_140;
  ulong local_138;
  ulong local_100;
  uint *local_d0;
  int local_b4;
  ulong local_98;
  ulong local_88;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_38;
  
  bVar22 = *(byte *)(param_5 + 8);
  uVar4 = (param_2 - 7) + param_1;
  uVar24 = param_2;
  if (7 < param_1) {
    uVar24 = uVar4;
  }
  lVar25 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar25 = 0x40;
  }
  lVar9 = *(long *)(param_5 + 0x10);
  uVar40 = *param_8;
  uVar1 = param_2 + param_1;
  uVar17 = *(uint *)(param_6 + 0x58);
  if (4 < (int)uVar17) {
    iVar18 = *param_7;
    param_7[4] = iVar18 + -1;
    param_7[5] = iVar18 + 1;
    param_7[6] = iVar18 + -2;
    param_7[7] = iVar18 + 2;
    *(ulong *)(param_7 + 8) = CONCAT44(iVar18 + 3,iVar18 + -3);
    if (10 < uVar17) {
      iVar18 = param_7[1];
      param_7[10] = iVar18 + -1;
      param_7[0xb] = iVar18 + 1;
      param_7[0xc] = iVar18 + -2;
      param_7[0xd] = iVar18 + 2;
      *(ulong *)(param_7 + 0xe) = CONCAT44(iVar18 + 3,iVar18 + -3);
    }
  }
  if (param_2 + 8 < uVar1) {
    uVar5 = (1L << (bVar22 & 0x3f)) - 0x10;
    local_98 = lVar25 + param_2;
    uVar10 = *(ulong *)(param_6 + 0x48);
    lVar11 = *(long *)(param_6 + 0x68);
    lVar12 = *(long *)(param_6 + 0x70);
    lVar3 = param_2 - 1;
    local_d0 = param_9;
    uVar49 = param_2;
    do {
      uVar32 = uVar1 - uVar49;
      uVar41 = uVar5;
      if (uVar49 < uVar5) {
        uVar41 = uVar49;
      }
      uVar20 = lVar9 + uVar49;
      if (uVar5 <= lVar9 + uVar49) {
        uVar20 = uVar5;
      }
      uVar13 = *(ulong *)(param_5 + 0x50);
      uVar34 = uVar49 & param_4;
      if ((long)*(int *)(param_6 + 0x58) == 0) {
        local_88 = 0x7e4;
        local_58 = 0;
        local_38 = 0;
        uVar36 = 0;
      }
      else {
        pcVar28 = (char *)(param_3 + uVar34);
        uVar51 = (ulong)((uint)uVar32 & 7);
        local_88 = 0x7e4;
        uVar36 = 0;
        uVar44 = 0;
        local_38 = 0;
        local_58 = 0;
        do {
          uVar19 = (ulong)param_7[uVar44];
          if (((uVar19 <= uVar41) && (uVar49 - uVar19 < uVar49)) && (uVar36 + uVar34 <= param_4)) {
            uVar26 = uVar49 - uVar19 & param_4;
            uVar33 = uVar26 + uVar36;
            if ((uVar33 <= param_4) &&
               (*(char *)(param_3 + uVar36 + uVar34) == *(char *)(param_3 + uVar33))) {
              lVar27 = uVar26 + param_3;
              if (7 < uVar32) {
                lVar47 = 0;
                uVar33 = 0;
LAB_001f45aa:
                uVar26 = *(ulong *)(lVar27 + uVar33 * 8);
                if (*(ulong *)(pcVar28 + uVar33 * 8) == uVar26) goto code_r0x001f45bb;
                uVar26 = uVar26 ^ *(ulong *)(pcVar28 + uVar33 * 8);
                uVar33 = 0;
                if (uVar26 != 0) {
                  for (; (uVar26 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                  }
                }
                uVar33 = (uVar33 >> 3 & 0x1fffffff) - lVar47;
                goto LAB_001f45e6;
              }
              uVar26 = 0;
              pcVar48 = pcVar28;
LAB_001f4654:
              uVar33 = uVar26;
              if (uVar51 != 0) {
                uVar29 = uVar51 | uVar26;
                uVar50 = uVar51;
                do {
                  uVar33 = uVar26;
                  if (*(char *)(lVar27 + uVar26) != *pcVar48) break;
                  pcVar48 = pcVar48 + 1;
                  uVar26 = uVar26 + 1;
                  uVar50 = uVar50 - 1;
                  uVar33 = uVar29;
                } while (uVar50 != 0);
              }
LAB_001f45e6:
              if (((2 < uVar33) || ((uVar44 < 2 && (uVar33 == 2)))) &&
                 (uVar26 = uVar33 * 0x87 + 0x78f, local_88 < uVar26)) {
                if (uVar44 != 0) {
                  uVar26 = uVar26 - ((0x1ca10U >> ((byte)uVar44 & 0xe) & 0xe) + 0x27);
                }
                if (local_88 < uVar26) {
                  uVar36 = uVar33;
                  local_88 = uVar26;
                  local_58 = uVar19;
                  local_38 = uVar33;
                }
              }
            }
          }
          uVar44 = uVar44 + 1;
        } while (uVar44 != (long)*(int *)(param_6 + 0x58));
      }
      uVar44 = (*(ulong *)(param_3 + uVar34) & uVar10) * 0x1fe35a7bd3579bd3 >>
               (*(byte *)(param_6 + 0x40) & 0x3f);
      uVar33 = uVar44 & 0xffffffff;
      piVar2 = (int *)(param_3 + uVar34);
      lVar27 = lVar12 + (ulong)(uint)((int)uVar44 << (*(byte *)(param_6 + 0x54) & 0x1f)) * 4;
      uVar6 = *(ushort *)(lVar11 + uVar33 * 2);
      uVar19 = (ulong)uVar6;
      uVar44 = *(ulong *)(param_6 + 0x38);
      uVar51 = 0;
      if (uVar44 <= uVar19) {
        uVar51 = uVar19 - uVar44;
      }
      if (uVar51 < uVar19) {
        uVar26 = (ulong)((uint)uVar32 & 7);
        do {
          uVar19 = uVar19 - 1;
          uVar17 = *(uint *)(lVar27 + (ulong)((uint)uVar19 & *(uint *)(param_6 + 0x50)) * 4);
          uVar50 = uVar49 - uVar17;
          if (uVar41 < uVar50) break;
          if (uVar36 + uVar34 <= param_4) {
            uVar35 = (ulong)(uVar17 & (uint)param_4);
            uVar29 = uVar35 + uVar36;
            if ((uVar29 <= param_4) &&
               (*(char *)(param_3 + uVar36 + uVar34) == *(char *)(param_3 + uVar29))) {
              lVar47 = uVar35 + param_3;
              if (7 < uVar32) {
                lVar37 = 0;
                uVar29 = 0;
LAB_001f47c7:
                uVar35 = *(ulong *)(lVar47 + uVar29 * 8);
                if (*(ulong *)(piVar2 + uVar29 * 2) == uVar35) goto code_r0x001f47d4;
                uVar35 = uVar35 ^ *(ulong *)(piVar2 + uVar29 * 2);
                uVar29 = 0;
                if (uVar35 != 0) {
                  for (; (uVar35 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                  }
                }
                uVar29 = (uVar29 >> 3 & 0x1fffffff) - lVar37;
                goto LAB_001f4812;
              }
              uVar35 = 0;
              piVar38 = piVar2;
LAB_001f4867:
              uVar29 = uVar35;
              if (uVar26 != 0) {
                uVar30 = uVar26 | uVar35;
                uVar45 = uVar26;
                do {
                  uVar29 = uVar35;
                  if (*(char *)(lVar47 + uVar35) != (char)*piVar38) break;
                  piVar38 = (int *)((long)piVar38 + 1);
                  uVar35 = uVar35 + 1;
                  uVar45 = uVar45 - 1;
                  uVar29 = uVar30;
                } while (uVar45 != 0);
              }
LAB_001f4812:
              if (3 < uVar29) {
                iVar18 = 0x1f;
                if ((uint)uVar50 != 0) {
                  for (; (uint)uVar50 >> iVar18 == 0; iVar18 = iVar18 + -1) {
                  }
                }
                uVar35 = (ulong)(iVar18 * -0x1e + 0x780) + uVar29 * 0x87;
                if (local_88 < uVar35) {
                  uVar36 = uVar29;
                  local_88 = uVar35;
                  local_58 = uVar50;
                  local_38 = uVar29;
                }
              }
            }
          }
        } while (uVar51 < uVar19);
      }
      *(int *)(lVar27 + (ulong)(*(uint *)(param_6 + 0x50) & (uint)uVar6) * 4) = (int)uVar49;
      *(ushort *)(lVar11 + uVar33 * 2) = uVar6 + 1;
      if (local_88 == 0x7e4) {
        lVar27 = *(long *)(param_6 + 0x60);
        uVar34 = *(ulong *)(lVar27 + 8);
        local_88 = *(ulong *)(lVar27 + 0x10);
        if (uVar34 >> 7 <= local_88) {
          uVar36 = (ulong)((uint)(*piVar2 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
          lVar47 = *(long *)(param_5 + 0x78);
          uVar41 = 0x7e4;
          local_b4 = 0;
          bVar39 = true;
LAB_001f493c:
          uVar34 = uVar34 + 1;
          *(ulong *)(lVar27 + 8) = uVar34;
          bVar22 = *(byte *)(lVar47 + uVar36);
          uVar51 = (ulong)bVar22;
          if ((uVar51 != 0) && (uVar51 <= uVar32)) {
            uVar19 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar36 * 2);
            lVar37 = *(long *)(param_5 + 0x58);
            pcVar28 = (char *)(uVar19 * uVar51 + *(long *)(lVar37 + 0xa8) +
                              (ulong)*(uint *)(lVar37 + 0x20 + uVar51 * 4));
            if (7 < bVar22) {
              uVar33 = (ulong)(bVar22 & 0xfffffff8);
              lVar21 = 0;
              uVar26 = 0;
LAB_001f49b4:
              if (*(ulong *)(pcVar28 + uVar26 * 8) == *(ulong *)(piVar2 + uVar26 * 2))
              goto code_r0x001f49c1;
              uVar26 = *(ulong *)(piVar2 + uVar26 * 2) ^ *(ulong *)(pcVar28 + uVar26 * 8);
              uVar33 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                }
              }
              uVar26 = (uVar33 >> 3 & 0x1fffffff) - lVar21;
              goto LAB_001f49ee;
            }
            uVar33 = 0;
            goto LAB_001f4af9;
          }
          goto LAB_001f4a71;
        }
LAB_001f52d3:
        uVar40 = uVar40 + 1;
        param_2 = uVar49 + 1;
        if (local_98 < param_2) {
          if ((uint)((int)lVar25 * 4) + local_98 < param_2) {
            uVar41 = uVar49 + 0x11;
            if (uVar4 <= uVar49 + 0x11) {
              uVar41 = uVar4;
            }
            if (param_2 < uVar41) {
              uVar7 = *(undefined4 *)(param_6 + 0x40);
              uVar17 = *(uint *)(param_6 + 0x50);
              uVar8 = *(undefined4 *)(param_6 + 0x54);
              do {
                uVar32 = (*(ulong *)(param_3 + (param_2 & param_4)) & uVar10) * 0x1fe35a7bd3579bd3
                         >> ((byte)uVar7 & 0x3f);
                uVar49 = uVar32 & 0xffffffff;
                uVar6 = *(ushort *)(lVar11 + uVar49 * 2);
                *(ushort *)(lVar11 + uVar49 * 2) = uVar6 + 1;
                *(int *)(lVar12 + (ulong)(uVar17 & uVar6) * 4 +
                        (ulong)(uint)((int)uVar32 << ((byte)uVar8 & 0x1f)) * 4) = (int)param_2;
                uVar40 = uVar40 + 4;
                param_2 = param_2 + 4;
              } while (param_2 < uVar41);
            }
          }
          else {
            uVar41 = uVar49 + 9;
            if (uVar4 <= uVar49 + 9) {
              uVar41 = uVar4;
            }
            if (param_2 < uVar41) {
              uVar7 = *(undefined4 *)(param_6 + 0x40);
              uVar17 = *(uint *)(param_6 + 0x50);
              uVar8 = *(undefined4 *)(param_6 + 0x54);
              do {
                uVar32 = (*(ulong *)(param_3 + (param_2 & param_4)) & uVar10) * 0x1fe35a7bd3579bd3
                         >> ((byte)uVar7 & 0x3f);
                uVar49 = uVar32 & 0xffffffff;
                uVar6 = *(ushort *)(lVar11 + uVar49 * 2);
                *(ushort *)(lVar11 + uVar49 * 2) = uVar6 + 1;
                *(int *)(lVar12 + (ulong)(uVar17 & uVar6) * 4 +
                        (ulong)(uint)((int)uVar32 << ((byte)uVar8 & 0x1f)) * 4) = (int)param_2;
                uVar40 = uVar40 + 2;
                param_2 = param_2 + 2;
              } while (param_2 < uVar41);
            }
          }
        }
      }
      else {
        local_b4 = 0;
        uVar41 = local_88;
LAB_001f4b46:
        if (uVar41 < 0x7e5) goto LAB_001f52d3;
        iVar18 = *(int *)(param_6 + 0x58);
        uVar7 = *(undefined4 *)(param_6 + 0x40);
        uVar17 = *(uint *)(param_6 + 0x50);
        uVar8 = *(undefined4 *)(param_6 + 0x54);
        uVar20 = (lVar3 + param_1) - uVar49;
        uVar23 = 0;
        local_140 = local_58;
        do {
          uVar32 = uVar32 - 1;
          uVar34 = local_38 - 1;
          if (uVar32 <= local_38 - 1) {
            uVar34 = uVar32;
          }
          if (4 < *(int *)(param_5 + 4)) {
            uVar34 = 0;
          }
          uVar36 = uVar49 + 1;
          uVar51 = uVar5;
          if (uVar36 < uVar5) {
            uVar51 = uVar36;
          }
          local_100 = lVar9 + uVar49 + 1;
          if (uVar5 <= local_100) {
            local_100 = uVar5;
          }
          uVar19 = uVar36 & param_4;
          if (iVar18 != 0) {
            pcVar28 = (char *)(param_3 + uVar19);
            uVar33 = (ulong)((uint)uVar32 & 7);
            local_50 = 0x7e4;
            uVar26 = 0;
            local_48 = 0;
            local_98 = 0;
LAB_001f4c5a:
            uVar50 = (ulong)param_7[uVar26];
            if (((uVar50 <= uVar51) && (uVar36 - uVar50 < uVar36)) && (uVar34 + uVar19 <= param_4))
            {
              uVar35 = uVar36 - uVar50 & param_4;
              uVar29 = uVar35 + uVar34;
              if ((param_4 < uVar29) ||
                 (*(char *)(param_3 + uVar34 + uVar19) != *(char *)(param_3 + uVar29)))
              goto LAB_001f4ce2;
              lVar27 = uVar35 + param_3;
              uVar29 = uVar33;
              if (7 < uVar32) {
                lVar47 = 0;
                uVar35 = 0;
LAB_001f4ca4:
                uVar45 = *(ulong *)(lVar27 + uVar35 * 8);
                if (*(ulong *)(pcVar28 + uVar35 * 8) == uVar45) goto code_r0x001f4cb5;
                uVar45 = uVar45 ^ *(ulong *)(pcVar28 + uVar35 * 8);
                uVar29 = 0;
                if (uVar45 != 0) {
                  for (; (uVar45 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                  }
                }
                uVar35 = (uVar29 >> 3 & 0x1fffffff) - lVar47;
                goto LAB_001f4d09;
              }
              uVar35 = 0;
              pcVar48 = pcVar28;
              goto joined_r0x001f4d7d;
            }
            goto LAB_001f4ce2;
          }
          local_50 = 0x7e4;
          local_98 = 0;
          local_48 = 0;
LAB_001f4dc1:
          uVar26 = (*(ulong *)(param_3 + uVar19) & uVar10) * 0x1fe35a7bd3579bd3 >>
                   ((byte)uVar7 & 0x3f);
          uVar29 = uVar26 & 0xffffffff;
          uVar6 = *(ushort *)(lVar11 + uVar29 * 2);
          uVar50 = (ulong)uVar6;
          uVar33 = 0;
          if (uVar44 <= uVar50) {
            uVar33 = uVar50 - uVar44;
          }
          piVar2 = (int *)(param_3 + uVar19);
          lVar27 = lVar12 + (ulong)(uint)((int)uVar26 << ((byte)uVar8 & 0x1f)) * 4;
          if (uVar33 < uVar50) {
            uVar26 = (ulong)((uint)uVar32 & 7);
LAB_001f4e4d:
            uVar50 = uVar50 - 1;
            uVar43 = *(uint *)(lVar27 + (ulong)((uint)uVar50 & uVar17) * 4);
            uVar35 = uVar36 - uVar43;
            if (uVar35 <= uVar51) {
              if (uVar34 + uVar19 <= param_4) {
                uVar30 = (ulong)(uVar43 & (uint)param_4);
                uVar45 = uVar30 + uVar34;
                if ((param_4 < uVar45) ||
                   (*(char *)(param_3 + uVar34 + uVar19) != *(char *)(param_3 + uVar45)))
                goto LAB_001f4f30;
                lVar47 = uVar30 + param_3;
                uVar45 = uVar26;
                if (7 < uVar32) {
                  lVar37 = 0;
                  uVar30 = 0;
LAB_001f4ea7:
                  uVar42 = *(ulong *)(lVar47 + uVar30 * 8);
                  if (*(ulong *)(piVar2 + uVar30 * 2) == uVar42) goto code_r0x001f4eb8;
                  uVar42 = uVar42 ^ *(ulong *)(piVar2 + uVar30 * 2);
                  uVar45 = 0;
                  if (uVar42 != 0) {
                    for (; (uVar42 >> uVar45 & 1) == 0; uVar45 = uVar45 + 1) {
                    }
                  }
                  uVar30 = (uVar45 >> 3 & 0x1fffffff) - lVar37;
                  goto LAB_001f4ef2;
                }
                uVar30 = 0;
                piVar38 = piVar2;
                goto joined_r0x001f4f44;
              }
              goto LAB_001f4f30;
            }
          }
LAB_001f4f6d:
          *(int *)(lVar27 + (ulong)(uVar17 & uVar6) * 4) = (int)uVar36;
          *(ushort *)(lVar11 + uVar29 * 2) = uVar6 + 1;
          if (local_50 == 0x7e4) {
            lVar27 = *(long *)(param_6 + 0x60);
            uVar34 = *(ulong *)(lVar27 + 8);
            local_138 = *(ulong *)(lVar27 + 0x10);
            local_50 = 0x7e4;
            if (uVar34 >> 7 <= local_138) {
              uVar51 = (ulong)((uint)(*piVar2 * 0x1e35a7bd) >> 0x11 & 0xfffffffe);
              lVar47 = *(long *)(param_5 + 0x78);
              iVar46 = 0;
              local_50 = 0x7e4;
              bVar39 = true;
LAB_001f50db:
              uVar34 = uVar34 + 1;
              *(ulong *)(lVar27 + 8) = uVar34;
              bVar22 = *(byte *)(lVar47 + uVar51);
              uVar19 = (ulong)bVar22;
              if ((uVar19 != 0) && (uVar19 <= uVar32)) {
                uVar33 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar51 * 2);
                lVar37 = *(long *)(param_5 + 0x58);
                pcVar28 = (char *)(uVar33 * uVar19 + *(long *)(lVar37 + 0xa8) +
                                  (ulong)*(uint *)(lVar37 + 0x20 + uVar19 * 4));
                if (7 < bVar22) {
                  uVar26 = (ulong)(bVar22 & 0xfffffff8);
                  lVar21 = 0;
                  uVar50 = 0;
LAB_001f5164:
                  if (*(ulong *)(pcVar28 + uVar50 * 8) == *(ulong *)(piVar2 + uVar50 * 2))
                  goto code_r0x001f5175;
                  uVar50 = *(ulong *)(piVar2 + uVar50 * 2) ^ *(ulong *)(pcVar28 + uVar50 * 8);
                  uVar26 = 0;
                  if (uVar50 != 0) {
                    for (; (uVar50 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                    }
                  }
                  uVar50 = (uVar26 >> 3 & 0x1fffffff) - lVar21;
                  goto LAB_001f51b2;
                }
                uVar26 = 0;
                goto LAB_001f529c;
              }
              goto LAB_001f50fe;
            }
            iVar46 = 0;
          }
          else {
            iVar46 = 0;
          }
LAB_001f5007:
          if (local_50 < uVar41 + 0xaf) {
            uVar36 = uVar49;
            local_48 = local_38;
            iVar46 = local_b4;
            local_100 = uVar49 + lVar9;
            if (uVar5 <= uVar49 + lVar9) {
              local_100 = uVar5;
            }
            break;
          }
          uVar40 = uVar40 + 1;
          local_140 = local_98;
          if (2 < uVar23) break;
          uVar34 = uVar49 + 9;
          uVar23 = uVar23 + 1;
          uVar20 = uVar20 - 1;
          uVar41 = local_50;
          local_38 = local_48;
          uVar49 = uVar36;
          local_b4 = iVar46;
        } while (uVar34 < uVar1);
        if (local_100 < local_140) {
LAB_001f54d5:
          uVar49 = local_140 + 0xf;
LAB_001f54d9:
          if ((local_140 <= local_100) && (uVar49 != 0)) {
            param_7[3] = param_7[2];
            uVar14 = *(undefined8 *)param_7;
            *(undefined8 *)(param_7 + 1) = uVar14;
            iVar18 = (int)local_140;
            *param_7 = iVar18;
            uVar17 = *(uint *)(param_6 + 0x58);
            if (4 < (int)uVar17) {
              param_7[4] = iVar18 + -1;
              param_7[5] = iVar18 + 1;
              param_7[6] = iVar18 + -2;
              param_7[7] = iVar18 + 2;
              param_7[8] = iVar18 + -3;
              param_7[9] = iVar18 + 3;
              if (10 < uVar17) {
                iVar18 = (int)uVar14;
                param_7[10] = iVar18 + -1;
                param_7[0xb] = iVar18 + 1;
                param_7[0xc] = iVar18 + -2;
                param_7[0xd] = iVar18 + 2;
                *(ulong *)(param_7 + 0xe) = CONCAT44(iVar18 + 3,iVar18 + -3);
              }
            }
          }
        }
        else {
          if (local_140 != (long)*param_7) {
            uVar49 = 1;
            if (local_140 != (long)param_7[1]) {
              uVar49 = (local_140 + 3) - (long)*param_7;
              if (uVar49 < 7) {
                bVar22 = (byte)((int)uVar49 << 2);
                uVar17 = 0x9750468;
              }
              else {
                uVar49 = (local_140 + 3) - (long)param_7[1];
                if (6 < uVar49) {
                  uVar49 = 2;
                  if ((local_140 != (long)param_7[2]) && (uVar49 = 3, local_140 != (long)param_7[3])
                     ) goto LAB_001f54d5;
                  goto LAB_001f54d9;
                }
                bVar22 = (byte)((int)uVar49 << 2);
                uVar17 = 0xfdb1ace;
              }
              uVar49 = (ulong)(uVar17 >> (bVar22 & 0x1f) & 0xf);
            }
            goto LAB_001f54d9;
          }
          uVar49 = 0;
        }
        uVar23 = (uint)uVar40;
        *local_d0 = uVar23;
        local_d0[1] = iVar46 << 0x19 | (uint)local_48;
        uVar41 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
        uVar17 = 0;
        if (uVar41 <= uVar49) {
          bVar22 = (byte)*(uint *)(param_5 + 0x40);
          uVar32 = ((4L << (bVar22 & 0x3f)) + (uVar49 - *(uint *)(param_5 + 0x44))) - 0x10;
          uVar17 = 0x1f;
          uVar43 = (uint)uVar32;
          if (uVar43 != 0) {
            for (; uVar43 >> uVar17 == 0; uVar17 = uVar17 - 1) {
            }
          }
          uVar17 = (uVar17 ^ 0xffffffe0) + 0x1f;
          uVar20 = (ulong)((uVar32 >> ((ulong)uVar17 & 0x3f) & 1) != 0);
          lVar27 = (ulong)uVar17 - (ulong)*(uint *)(param_5 + 0x40);
          uVar49 = (~(-1 << (bVar22 & 0x1f)) & uVar43) + uVar41 +
                   (uVar20 + lVar27 * 2 + 0xfffe << (bVar22 & 0x3f)) | lVar27 * 0x400;
          uVar17 = (uint)(uVar32 - (uVar20 + 2 << ((byte)uVar17 & 0x3f)) >> (bVar22 & 0x3f));
        }
        *(short *)((long)local_d0 + 0xe) = (short)uVar49;
        local_d0[2] = uVar17;
        if (5 < uVar40) {
          if (uVar40 < 0x82) {
            uVar17 = 0x1f;
            uVar23 = (uint)(uVar40 - 2);
            if (uVar23 != 0) {
              for (; uVar23 >> uVar17 == 0; uVar17 = uVar17 - 1) {
              }
            }
            uVar23 = (int)(uVar40 - 2 >> ((char)(uVar17 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                     (uVar17 ^ 0xffffffe0) * 2 + 0x40;
          }
          else if (uVar40 < 0x842) {
            uVar17 = 0x1f;
            if (uVar23 - 0x42 != 0) {
              for (; uVar23 - 0x42 >> uVar17 == 0; uVar17 = uVar17 - 1) {
              }
            }
            uVar23 = (uVar17 ^ 0xffe0) + 0x2a;
          }
          else {
            uVar23 = 0x15;
            if (0x1841 < uVar40) {
              uVar23 = (uint)(ushort)(0x17 - (uVar40 < 0x5842));
            }
          }
        }
        uVar17 = iVar46 + (uint)local_48;
        if (uVar17 < 10) {
          uVar43 = uVar17 - 2;
        }
        else if (uVar17 < 0x86) {
          uVar17 = uVar17 - 6;
          uVar43 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> uVar43 == 0; uVar43 = uVar43 - 1) {
            }
          }
          uVar43 = (uVar17 >> ((char)(uVar43 ^ 0xffffffe0) + 0x1fU & 0x1f)) + 0x42 +
                   (uVar43 ^ 0xffffffe0) * 2;
        }
        else {
          uVar43 = 0x17;
          if (uVar17 < 0x846) {
            uVar43 = 0x1f;
            if (uVar17 - 0x46 != 0) {
              for (; uVar17 - 0x46 >> uVar43 == 0; uVar43 = uVar43 - 1) {
              }
            }
            uVar43 = (uVar43 ^ 0xffe0) + 0x2c;
          }
        }
        uVar6 = (ushort)uVar43;
        sVar31 = (uVar6 & 7) + ((ushort)uVar23 & 7) * 8;
        if ((((uVar49 & 0x3ff) == 0) && ((ushort)uVar23 < 8)) && (uVar6 < 0x10)) {
          if (7 < uVar6) {
            sVar31 = sVar31 + 0x40;
          }
        }
        else {
          iVar18 = ((uVar23 & 0xffff) >> 3) * 3 + ((uVar43 & 0xffff) >> 3);
          sVar31 = sVar31 + ((ushort)(0x520d40 >> ((char)iVar18 * '\x02' & 0x1fU)) & 0xc0) +
                            (short)iVar18 * 0x40 + 0x40;
        }
        *(short *)(local_d0 + 3) = sVar31;
        *param_11 = *param_11 + uVar40;
        param_2 = uVar36 + local_48;
        uVar40 = uVar24;
        if (param_2 < uVar24) {
          uVar40 = param_2;
        }
        uVar49 = uVar36 + 2;
        if (local_140 < local_48 >> 2) {
          uVar41 = param_2 + local_140 * -4;
          if (uVar41 < uVar49) {
            uVar41 = uVar49;
          }
          uVar49 = uVar41;
          if (uVar40 < uVar41) {
            uVar49 = uVar40;
          }
        }
        local_98 = lVar25 + local_48 * 2 + uVar36;
        local_d0 = local_d0 + 4;
        if (uVar49 < uVar40) {
          uVar7 = *(undefined4 *)(param_6 + 0x40);
          uVar17 = *(uint *)(param_6 + 0x50);
          uVar8 = *(undefined4 *)(param_6 + 0x54);
          do {
            uVar32 = (*(ulong *)(param_3 + (uVar49 & param_4)) & uVar10) * 0x1fe35a7bd3579bd3 >>
                     ((byte)uVar7 & 0x3f);
            uVar41 = uVar32 & 0xffffffff;
            uVar6 = *(ushort *)(lVar11 + uVar41 * 2);
            *(ushort *)(lVar11 + uVar41 * 2) = uVar6 + 1;
            *(int *)(lVar12 + (ulong)(uVar17 & uVar6) * 4 +
                    (ulong)(uint)((int)uVar32 << ((byte)uVar8 & 0x1f)) * 4) = (int)uVar49;
            uVar49 = uVar49 + 1;
          } while (uVar40 != uVar49);
        }
        uVar40 = 0;
      }
      uVar49 = param_2;
    } while (param_2 + 8 < uVar1);
  }
  else {
    local_d0 = param_9;
  }
  *param_8 = (uVar40 + uVar1) - param_2;
  *param_10 = *param_10 + ((long)local_d0 - (long)param_9 >> 4);
  return;
code_r0x001f45bb:
  uVar33 = uVar33 + 1;
  lVar47 = lVar47 + -8;
  uVar26 = uVar32 & 0xfffffffffffffff8;
  pcVar48 = pcVar28 + (uVar32 & 0xfffffffffffffff8);
  if (uVar32 >> 3 == uVar33) goto LAB_001f4654;
  goto LAB_001f45aa;
code_r0x001f47d4:
  uVar29 = uVar29 + 1;
  lVar37 = lVar37 + -8;
  uVar35 = uVar32 & 0xfffffffffffffff8;
  piVar38 = (int *)((uVar32 & 0xfffffffffffffff8) + (long)piVar2);
  if (uVar32 >> 3 == uVar29) goto LAB_001f4867;
  goto LAB_001f47c7;
code_r0x001f49c1:
  uVar26 = uVar26 + 1;
  lVar21 = lVar21 + -8;
  if (bVar22 >> 3 == uVar26) goto code_r0x001f49cd;
  goto LAB_001f49b4;
code_r0x001f49cd:
  pcVar28 = pcVar28 + -lVar21;
LAB_001f4af9:
  uVar50 = uVar51 & 7;
  uVar26 = uVar33;
  if ((bVar22 & 7) != 0) {
    uVar29 = uVar33 | uVar50;
    do {
      uVar26 = uVar33;
      if (*(char *)((long)piVar2 + uVar33) != *pcVar28) break;
      pcVar28 = pcVar28 + 1;
      uVar33 = uVar33 + 1;
      uVar50 = uVar50 - 1;
      uVar26 = uVar29;
    } while (uVar50 != 0);
  }
LAB_001f49ee:
  if (((uVar26 != 0) && (uVar51 < *(uint *)(param_5 + 100) + uVar26)) &&
     (uVar51 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar51 - uVar26) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar51 - uVar26) * 4 << (*(byte *)(lVar37 + uVar51) & 0x3f)) + uVar19 + uVar20 + 1,
     uVar51 <= uVar13)) {
    iVar18 = 0x1f;
    if ((uint)uVar51 != 0) {
      for (; (uint)uVar51 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    uVar19 = (uVar26 * 0x87 - (ulong)(uint)(iVar18 * 0x1e)) + 0x780;
    if (uVar41 <= uVar19) {
      local_b4 = (uint)bVar22 - (int)uVar26;
      local_88 = local_88 + 1;
      *(ulong *)(lVar27 + 0x10) = local_88;
      local_58 = uVar51;
      uVar41 = uVar19;
      local_38 = uVar26;
    }
  }
LAB_001f4a71:
  uVar36 = uVar36 + 1;
  bVar16 = !bVar39;
  bVar39 = false;
  if (bVar16) goto LAB_001f4b46;
  goto LAB_001f493c;
code_r0x001f4cb5:
  uVar35 = uVar35 + 1;
  lVar47 = lVar47 + -8;
  if (uVar20 >> 3 == uVar35) goto code_r0x001f4cc5;
  goto LAB_001f4ca4;
code_r0x001f4cc5:
  uVar35 = -lVar47;
  pcVar48 = pcVar28 + -lVar47;
joined_r0x001f4d7d:
  for (; (uVar29 != 0 && (*(char *)(lVar27 + uVar35) == *pcVar48)); uVar35 = uVar35 + 1) {
    pcVar48 = pcVar48 + 1;
    uVar29 = uVar29 - 1;
  }
LAB_001f4d09:
  if (((2 < uVar35) || ((uVar26 < 2 && (uVar35 == 2)))) &&
     (uVar29 = uVar35 * 0x87 + 0x78f, local_50 < uVar29)) {
    if (uVar26 != 0) {
      uVar29 = uVar29 - ((0x1ca10U >> ((byte)uVar26 & 0xe) & 0xe) + 0x27);
    }
    if (local_50 < uVar29) {
      local_50 = uVar29;
      uVar34 = uVar35;
      local_98 = uVar50;
      local_48 = uVar35;
    }
  }
LAB_001f4ce2:
  uVar26 = uVar26 + 1;
  if (uVar26 == (long)iVar18) goto LAB_001f4dc1;
  goto LAB_001f4c5a;
code_r0x001f4eb8:
  uVar30 = uVar30 + 1;
  lVar37 = lVar37 + -8;
  if (uVar20 >> 3 == uVar30) goto code_r0x001f4ec8;
  goto LAB_001f4ea7;
code_r0x001f4ec8:
  uVar30 = -lVar37;
  piVar38 = (int *)((long)piVar2 - lVar37);
joined_r0x001f4f44:
  for (; (uVar45 != 0 && (*(char *)(lVar47 + uVar30) == (char)*piVar38)); uVar30 = uVar30 + 1) {
    piVar38 = (int *)((long)piVar38 + 1);
    uVar45 = uVar45 - 1;
  }
LAB_001f4ef2:
  if (3 < uVar30) {
    iVar46 = 0x1f;
    if ((uint)uVar35 != 0) {
      for (; (uint)uVar35 >> iVar46 == 0; iVar46 = iVar46 + -1) {
      }
    }
    uVar45 = (ulong)(iVar46 * -0x1e + 0x780) + uVar30 * 0x87;
    if (local_50 < uVar45) {
      uVar34 = uVar30;
      local_98 = uVar35;
      local_50 = uVar45;
      local_48 = uVar30;
    }
  }
LAB_001f4f30:
  if (uVar50 <= uVar33) goto LAB_001f4f6d;
  goto LAB_001f4e4d;
code_r0x001f5175:
  uVar50 = uVar50 + 1;
  lVar21 = lVar21 + -8;
  if (bVar22 >> 3 == uVar50) goto code_r0x001f5181;
  goto LAB_001f5164;
code_r0x001f5181:
  pcVar28 = pcVar28 + -lVar21;
LAB_001f529c:
  uVar29 = uVar19 & 7;
  uVar50 = uVar26;
  if ((bVar22 & 7) != 0) {
    uVar35 = uVar26 | uVar29;
    do {
      uVar50 = uVar26;
      if (*(char *)((long)piVar2 + uVar26) != *pcVar28) break;
      pcVar28 = pcVar28 + 1;
      uVar26 = uVar26 + 1;
      uVar29 = uVar29 - 1;
      uVar50 = uVar35;
    } while (uVar29 != 0);
  }
LAB_001f51b2:
  if (((uVar50 != 0) && (uVar19 < *(uint *)(param_5 + 100) + uVar50)) &&
     (uVar19 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                              ((char)(uVar19 - uVar50) * '\x06' & 0x3fU)) & 0x3f) +
                (uVar19 - uVar50) * 4 << (*(byte *)(lVar37 + uVar19) & 0x3f)) +
               uVar33 + local_100 + 1, uVar19 <= uVar13)) {
    iVar15 = 0x1f;
    if ((uint)uVar19 != 0) {
      for (; (uint)uVar19 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    uVar33 = (uVar50 * 0x87 - (ulong)(uint)(iVar15 * 0x1e)) + 0x780;
    if (local_50 <= uVar33) {
      iVar46 = (uint)bVar22 - (int)uVar50;
      local_138 = local_138 + 1;
      *(ulong *)(lVar27 + 0x10) = local_138;
      local_48 = uVar50;
      local_98 = uVar19;
      local_50 = uVar33;
    }
  }
LAB_001f50fe:
  uVar51 = uVar51 + 1;
  bVar16 = !bVar39;
  bVar39 = false;
  if (bVar16) goto LAB_001f5007;
  goto LAB_001f50db;
}

