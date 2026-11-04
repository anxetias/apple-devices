// rea decompile_all
// name: _CreateBackwardReferencesNH2
// address: 0x1f0270
// body: available
// range: 0x1f0270-0x1f1167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH2
               (ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
               int *param_7,ulong *param_8,uint *param_9,long *param_10,long *param_11)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ushort uVar25;
  long lVar26;
  long lVar27;
  char *pcVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  ulong local_e0;
  uint local_d0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  uint *local_78;
  ulong local_40;
  
  uVar4 = (param_2 - 7) + param_1;
  uVar16 = param_2;
  if (7 < param_1) {
    uVar16 = uVar4;
  }
  lVar26 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar26 = 0x40;
  }
  uVar38 = *param_8;
  uVar1 = param_2 + param_1;
  if (uVar1 <= param_2 + 8) {
    local_78 = param_9;
LAB_001f1139:
    *param_8 = (uVar38 + uVar1) - param_2;
    *param_10 = *param_10 + ((long)local_78 - (long)param_9 >> 4);
    return;
  }
  uVar30 = (1L << (*(byte *)(param_5 + 8) & 0x3f)) - 0x10;
  lVar7 = *(long *)(param_5 + 0x10);
  uVar34 = lVar26 + param_2;
  lVar8 = *(long *)(param_6 + 0x38);
  lVar3 = param_2 - 1;
  local_78 = param_9;
  uVar23 = param_2;
LAB_001f0363:
  local_40 = uVar1 - uVar23;
  uVar33 = uVar30;
  if (uVar23 < uVar30) {
    uVar33 = uVar23;
  }
  uVar22 = lVar7 + uVar23;
  if (uVar30 <= lVar7 + uVar23) {
    uVar22 = uVar30;
  }
  uVar29 = *(ulong *)(param_5 + 0x50);
  uVar24 = uVar23 & param_4;
  piVar2 = (int *)(param_3 + uVar24);
  cVar5 = *(char *)(param_3 + uVar24);
  uVar24 = (ulong)(*(long *)(param_3 + uVar24) * -0x42e1ca5843000000) >> 0x30;
  local_e0 = (ulong)*param_7;
  local_d0 = (uint)param_4;
  if ((uVar23 - local_e0 < uVar23) &&
     (uVar31 = (ulong)((uint)(uVar23 - local_e0) & local_d0), cVar5 == *(char *)(param_3 + uVar31)))
  {
    lVar27 = uVar31 + param_3;
    if (7 < local_40) {
      local_90 = local_40 & 0xfffffffffffffff8;
      piVar21 = (int *)((long)piVar2 + local_90);
      lVar36 = 0;
      uVar31 = 0;
LAB_001f0408:
      uVar37 = *(ulong *)(lVar27 + uVar31 * 8);
      if (*(ulong *)(piVar2 + uVar31 * 2) == uVar37) goto code_r0x001f0415;
      uVar37 = uVar37 ^ *(ulong *)(piVar2 + uVar31 * 2);
      uVar31 = 0;
      if (uVar37 != 0) {
        for (; (uVar37 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
        }
      }
      uVar31 = (uVar31 >> 3 & 0x1fffffff) - lVar36;
      goto LAB_001f044d;
    }
    local_90 = 0;
    piVar21 = piVar2;
LAB_001f10ae:
    uVar37 = local_40 & 7;
    uVar31 = local_90;
    if (uVar37 != 0) {
      uVar35 = local_90 | uVar37;
      do {
        uVar31 = local_90;
        if (*(char *)(lVar27 + local_90) != (char)*piVar21) break;
        piVar21 = (int *)((long)piVar21 + 1);
        local_90 = local_90 + 1;
        uVar37 = uVar37 - 1;
        uVar31 = uVar35;
      } while (uVar37 != 0);
    }
LAB_001f044d:
    if ((3 < uVar31) && (local_88 = uVar31 * 0x87 + 0x78f, 0x7e4 < local_88)) {
      *(int *)(lVar8 + uVar24 * 4) = (int)uVar23;
      iVar12 = 0;
      goto LAB_001f054f;
    }
  }
  uVar14 = *(uint *)(lVar8 + uVar24 * 4);
  *(int *)(lVar8 + uVar24 * 4) = (int)uVar23;
  if (((cVar5 == *(char *)(param_3 + (ulong)(local_d0 & uVar14))) && (uVar23 != uVar14)) &&
     (local_e0 = uVar23 - uVar14, local_e0 <= uVar33)) {
    lVar27 = (ulong)(local_d0 & uVar14) + param_3;
    if (7 < local_40) {
      uVar24 = local_40 & 0xfffffffffffffff8;
      piVar21 = (int *)((long)piVar2 + uVar24);
      lVar36 = 0;
      uVar33 = 0;
LAB_001f04e0:
      uVar31 = *(ulong *)(lVar27 + uVar33 * 8);
      if (*(ulong *)(piVar2 + uVar33 * 2) == uVar31) goto code_r0x001f04ed;
      uVar31 = uVar31 ^ *(ulong *)(piVar2 + uVar33 * 2);
      uVar33 = 0;
      if (uVar31 != 0) {
        for (; (uVar31 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
        }
      }
      uVar31 = (uVar33 >> 3 & 0x1fffffff) - lVar36;
      goto LAB_001f051a;
    }
    uVar24 = 0;
    piVar21 = piVar2;
LAB_001f1070:
    uVar33 = local_40 & 7;
    uVar31 = uVar24;
    if (uVar33 != 0) {
      uVar37 = uVar24 | uVar33;
      do {
        uVar31 = uVar24;
        if (*(char *)(lVar27 + uVar24) != (char)*piVar21) break;
        piVar21 = (int *)((long)piVar21 + 1);
        uVar24 = uVar24 + 1;
        uVar33 = uVar33 - 1;
        uVar31 = uVar37;
      } while (uVar33 != 0);
    }
LAB_001f051a:
    if (3 < uVar31) {
      iVar12 = 0x1f;
      if ((uint)local_e0 != 0) {
        for (; (uint)local_e0 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      local_88 = (ulong)(iVar12 * -0x1e + 0x780) + uVar31 * 0x87;
      iVar12 = 0;
      if (0x7e4 < local_88) goto LAB_001f054f;
    }
    lVar27 = *(long *)(param_6 + 0x30);
    if (*(ulong *)(lVar27 + 0x10) < *(ulong *)(lVar27 + 8) >> 7) goto LAB_001f0ab1;
    uVar33 = (ulong)((uint)(*piVar2 * 0x1e35a7bd) >> 0x12);
    lVar36 = *(long *)(param_5 + 0x78);
    *(ulong *)(lVar27 + 8) = *(ulong *)(lVar27 + 8) + 1;
    bVar13 = *(byte *)(lVar36 + uVar33 * 2);
    uVar24 = (ulong)bVar13;
    if ((uVar24 == 0) || (local_40 < uVar24)) goto LAB_001f0ab1;
    uVar33 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar33 * 4);
    lVar36 = *(long *)(param_5 + 0x58);
    pcVar28 = (char *)(uVar33 * uVar24 + *(long *)(lVar36 + 0xa8) +
                      (ulong)*(uint *)(lVar36 + 0x20 + uVar24 * 4));
    if (7 < bVar13) {
      uVar37 = (ulong)(bVar13 & 0xfffffff8);
      lVar17 = 0;
      uVar31 = 0;
LAB_001f0c26:
      if (*(ulong *)(pcVar28 + uVar31 * 8) == *(ulong *)(piVar2 + uVar31 * 2))
      goto code_r0x001f0c33;
      uVar37 = *(ulong *)(piVar2 + uVar31 * 2) ^ *(ulong *)(pcVar28 + uVar31 * 8);
      uVar31 = 0;
      if (uVar37 != 0) {
        for (; (uVar37 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
        }
      }
      uVar31 = (uVar31 >> 3 & 0x1fffffff) - lVar17;
      goto LAB_001f0c6a;
    }
    uVar37 = 0;
    goto LAB_001f10ff;
  }
  goto LAB_001f0ab1;
code_r0x001f0415:
  uVar31 = uVar31 + 1;
  lVar36 = lVar36 + -8;
  if (local_40 >> 3 == uVar31) goto LAB_001f10ae;
  goto LAB_001f0408;
code_r0x001f04ed:
  uVar33 = uVar33 + 1;
  lVar36 = lVar36 + -8;
  if (local_40 >> 3 == uVar33) goto LAB_001f1070;
  goto LAB_001f04e0;
code_r0x001f0c33:
  uVar31 = uVar31 + 1;
  lVar17 = lVar17 + -8;
  if (bVar13 >> 3 == uVar31) goto code_r0x001f0c3f;
  goto LAB_001f0c26;
code_r0x001f0c3f:
  pcVar28 = pcVar28 + -lVar17;
LAB_001f10ff:
  uVar35 = uVar24 & 7;
  uVar31 = uVar37;
  if ((bVar13 & 7) != 0) {
    uVar18 = uVar37 | uVar35;
    do {
      uVar31 = uVar37;
      if (*(char *)((long)piVar2 + uVar37) != *pcVar28) break;
      pcVar28 = pcVar28 + 1;
      uVar37 = uVar37 + 1;
      uVar35 = uVar35 - 1;
      uVar31 = uVar18;
    } while (uVar35 != 0);
  }
LAB_001f0c6a:
  if (((uVar31 != 0) && (uVar24 < *(uint *)(param_5 + 100) + uVar31)) &&
     (local_e0 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >>
                                ((char)(uVar24 - uVar31) * '\x06' & 0x3fU)) & 0x3f) +
                  (uVar24 - uVar31) * 4 << (*(byte *)(lVar36 + uVar24) & 0x3f)) +
                 uVar22 + 1 + uVar33, local_e0 <= uVar29)) {
    iVar12 = 0x1f;
    if ((uint)local_e0 != 0) {
      for (; (uint)local_e0 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    local_88 = (uVar31 * 0x87 - (ulong)(uint)(iVar12 * 0x1e)) + 0x780;
    if ((0x7e3 < local_88) &&
       (*(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) + 1, local_88 != 0x7e4)) {
      iVar12 = (uint)bVar13 - (int)uVar31;
LAB_001f054f:
      iVar6 = *param_7;
      uVar33 = (lVar3 + param_1) - uVar23;
      uVar14 = 0;
LAB_001f057b:
      local_40 = local_40 - 1;
      uVar22 = uVar31 - 1;
      if (local_40 <= uVar31 - 1) {
        uVar22 = local_40;
      }
      if (4 < *(int *)(param_5 + 4)) {
        uVar22 = 0;
      }
      uVar34 = uVar23 + 1;
      uVar24 = uVar30;
      if (uVar34 < uVar30) {
        uVar24 = uVar34;
      }
      local_98 = uVar23 + lVar7 + 1;
      if (uVar30 <= local_98) {
        local_98 = uVar30;
      }
      piVar2 = (int *)(param_3 + (uVar34 & param_4));
      cVar5 = *(char *)(uVar22 + (long)piVar2);
      uVar35 = (ulong)(*(long *)(param_3 + (uVar34 & param_4)) * -0x42e1ca5843000000) >> 0x30;
      uVar37 = uVar34 - (long)iVar6;
      if ((uVar37 < uVar34) &&
         (lVar27 = (ulong)((uint)uVar37 & local_d0) + param_3, cVar5 == *(char *)(uVar22 + lVar27)))
      {
        if (7 < local_40) {
          lVar36 = 0;
          uVar37 = 0;
LAB_001f0655:
          uVar18 = *(ulong *)(lVar27 + uVar37 * 8);
          if (*(ulong *)(piVar2 + uVar37 * 2) == uVar18) goto code_r0x001f0662;
          uVar18 = uVar18 ^ *(ulong *)(piVar2 + uVar37 * 2);
          uVar37 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
            }
          }
          uVar37 = (uVar37 >> 3 & 0x1fffffff) - lVar36;
          goto LAB_001f068e;
        }
        uVar37 = 0;
        piVar21 = piVar2;
        goto LAB_001f09f6;
      }
      goto LAB_001f06d1;
    }
  }
LAB_001f0ab1:
  uVar38 = uVar38 + 1;
  param_2 = uVar23 + 1;
  if (uVar34 < param_2) {
    if ((uint)((int)lVar26 * 4) + uVar34 < param_2) {
      uVar33 = uVar23 + 0x11;
      if (uVar4 <= uVar23 + 0x11) {
        uVar33 = uVar4;
      }
      for (; param_2 < uVar33; param_2 = param_2 + 4) {
        *(int *)(lVar8 + ((ulong)(*(long *)(param_3 + (param_2 & param_4)) * -0x42e1ca5843000000) >>
                         0x30) * 4) = (int)param_2;
        uVar38 = uVar38 + 4;
      }
    }
    else {
      uVar33 = uVar23 + 9;
      if (uVar4 <= uVar23 + 9) {
        uVar33 = uVar4;
      }
      for (; param_2 < uVar33; param_2 = param_2 + 2) {
        *(int *)(lVar8 + ((ulong)(*(long *)(param_3 + (param_2 & param_4)) * -0x42e1ca5843000000) >>
                         0x30) * 4) = (int)param_2;
        uVar38 = uVar38 + 2;
      }
    }
  }
  goto LAB_001f0b3f;
code_r0x001f0662:
  uVar37 = uVar37 + 1;
  lVar36 = lVar36 + -8;
  if (uVar33 >> 3 == uVar37) goto code_r0x001f066e;
  goto LAB_001f0655;
code_r0x001f066e:
  uVar37 = -lVar36;
  piVar21 = (int *)((long)piVar2 - lVar36);
LAB_001f09f6:
  uVar18 = local_40 & 7;
  for (; (uVar18 != 0 && (*(char *)(lVar27 + uVar37) == (char)*piVar21)); uVar37 = uVar37 + 1) {
    piVar21 = (int *)((long)piVar21 + 1);
    uVar18 = uVar18 - 1;
  }
LAB_001f068e:
  if ((uVar37 < 4) || (uVar18 = uVar37 * 0x87 + 0x78f, uVar18 < 0x7e5)) {
LAB_001f06d1:
    uVar11 = *(uint *)(lVar8 + uVar35 * 4);
    *(int *)(lVar8 + uVar35 * 4) = (int)uVar34;
    lVar27 = (ulong)(local_d0 & uVar11) + param_3;
    if (cVar5 == *(char *)(uVar22 + lVar27)) {
      if ((uVar34 != uVar11) && (uVar37 = uVar34 - uVar11, uVar37 <= uVar24)) {
        if (7 < local_40) {
          lVar36 = 0;
          uVar24 = 0;
LAB_001f0724:
          uVar35 = *(ulong *)(lVar27 + uVar24 * 8);
          if (*(ulong *)(piVar2 + uVar24 * 2) == uVar35) goto code_r0x001f0731;
          uVar35 = uVar35 ^ *(ulong *)(piVar2 + uVar24 * 2);
          uVar24 = 0;
          if (uVar35 != 0) {
            for (; (uVar35 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
            }
          }
          uVar24 = (uVar24 >> 3 & 0x1fffffff) - lVar36;
          goto LAB_001f0784;
        }
        uVar24 = 0;
        piVar21 = piVar2;
        goto LAB_001f09c5;
      }
      goto LAB_001f09b4;
    }
    uVar18 = 0x7e4;
    uVar37 = 0;
  }
  else {
    *(int *)(lVar8 + uVar35 * 4) = (int)uVar34;
    uVar22 = uVar37;
    uVar37 = (long)iVar6;
  }
  iVar15 = 0;
  uVar24 = uVar22;
  goto LAB_001f0800;
code_r0x001f0731:
  uVar24 = uVar24 + 1;
  lVar36 = lVar36 + -8;
  if (uVar33 >> 3 == uVar24) goto code_r0x001f073d;
  goto LAB_001f0724;
code_r0x001f073d:
  uVar24 = -lVar36;
  piVar21 = (int *)((long)piVar2 - lVar36);
LAB_001f09c5:
  uVar35 = local_40 & 7;
  for (; (uVar35 != 0 && (*(char *)(lVar27 + uVar24) == (char)*piVar21)); uVar24 = uVar24 + 1) {
    piVar21 = (int *)((long)piVar21 + 1);
    uVar35 = uVar35 - 1;
  }
LAB_001f0784:
  iVar15 = 0;
  if (3 < uVar24) {
    iVar9 = 0x1f;
    if ((uint)uVar37 != 0) {
      for (; (uint)uVar37 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    uVar18 = (ulong)(iVar9 * -0x1e + 0x780) + uVar24 * 0x87;
    if (0x7e4 < uVar18) goto LAB_001f0800;
  }
  lVar27 = *(long *)(param_6 + 0x30);
  if (*(ulong *)(lVar27 + 8) >> 7 <= *(ulong *)(lVar27 + 0x10)) {
    uVar24 = (ulong)((uint)(*piVar2 * 0x1e35a7bd) >> 0x12);
    lVar36 = *(long *)(param_5 + 0x78);
    *(ulong *)(lVar27 + 8) = *(ulong *)(lVar27 + 8) + 1;
    bVar13 = *(byte *)(lVar36 + uVar24 * 2);
    uVar37 = (ulong)bVar13;
    if ((uVar37 != 0) && (uVar37 <= local_40)) {
      uVar35 = (ulong)*(ushort *)(*(long *)(param_5 + 0x70) + uVar24 * 4);
      lVar36 = *(long *)(param_5 + 0x58);
      pcVar28 = (char *)(uVar35 * uVar37 + *(long *)(lVar36 + 0xa8) +
                        (ulong)*(uint *)(lVar36 + 0x20 + uVar37 * 4));
      if (7 < bVar13) {
        uVar18 = (ulong)(bVar13 & 0xfffffff8);
        lVar17 = 0;
        uVar24 = 0;
LAB_001f08b5:
        if (*(ulong *)(pcVar28 + uVar24 * 8) == *(ulong *)(piVar2 + uVar24 * 2))
        goto code_r0x001f08c2;
        uVar18 = *(ulong *)(piVar2 + uVar24 * 2) ^ *(ulong *)(pcVar28 + uVar24 * 8);
        uVar24 = 0;
        if (uVar18 != 0) {
          for (; (uVar18 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
          }
        }
        uVar24 = (uVar24 >> 3 & 0x1fffffff) - lVar17;
        goto LAB_001f08fc;
      }
      uVar18 = 0;
      goto LAB_001f0a20;
    }
  }
  goto LAB_001f07f3;
code_r0x001f08c2:
  uVar24 = uVar24 + 1;
  lVar17 = lVar17 + -8;
  if (bVar13 >> 3 == uVar24) goto code_r0x001f08ce;
  goto LAB_001f08b5;
code_r0x001f08ce:
  pcVar28 = pcVar28 + -lVar17;
LAB_001f0a20:
  uVar19 = uVar37 & 7;
  uVar24 = uVar18;
  if ((bVar13 & 7) != 0) {
    uVar20 = uVar18 | uVar19;
    do {
      uVar24 = uVar18;
      if (*(char *)((long)piVar2 + uVar18) != *pcVar28) break;
      pcVar28 = pcVar28 + 1;
      uVar18 = uVar18 + 1;
      uVar19 = uVar19 - 1;
      uVar24 = uVar20;
    } while (uVar19 != 0);
  }
LAB_001f08fc:
  if ((uVar24 == 0) || (*(uint *)(param_5 + 100) + uVar24 <= uVar37)) {
LAB_001f09b4:
    uVar37 = 0;
    uVar18 = 0x7e4;
    iVar15 = 0;
    uVar24 = uVar22;
    goto LAB_001f0800;
  }
  uVar37 = ((ulong)((uint)(*(ulong *)(param_5 + 0x68) >> ((char)(uVar37 - uVar24) * '\x06' & 0x3fU))
                   & 0x3f) + (uVar37 - uVar24) * 4 << (*(byte *)(lVar36 + uVar37) & 0x3f)) +
           local_98 + 1 + uVar35;
  if (uVar37 <= uVar29) {
    iVar15 = 0x1f;
    if ((uint)uVar37 != 0) {
      for (; (uint)uVar37 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    uVar18 = (uVar24 * 0x87 - (ulong)(uint)(iVar15 * 0x1e)) + 0x780;
    if (0x7e3 < uVar18) {
      iVar15 = (uint)bVar13 - (int)uVar24;
      *(ulong *)(lVar27 + 0x10) = *(ulong *)(lVar27 + 0x10) + 1;
      goto LAB_001f0800;
    }
  }
LAB_001f07f3:
  iVar15 = 0;
  uVar18 = 0x7e4;
  uVar37 = 0;
  uVar24 = uVar22;
LAB_001f0800:
  if (uVar18 < local_88 + 0xaf) {
    uVar34 = uVar23;
    uVar24 = uVar31;
    uVar37 = local_e0;
    iVar15 = iVar12;
    local_98 = uVar23 + lVar7;
    if (uVar30 <= uVar23 + lVar7) {
      local_98 = uVar30;
    }
    goto LAB_001f0d21;
  }
  uVar38 = uVar38 + 1;
  if (2 < uVar14) goto LAB_001f0d21;
  uVar22 = uVar23 + 9;
  uVar14 = uVar14 + 1;
  uVar33 = uVar33 - 1;
  uVar31 = uVar24;
  uVar23 = uVar34;
  local_e0 = uVar37;
  local_88 = uVar18;
  iVar12 = iVar15;
  if (uVar1 <= uVar22) goto LAB_001f0d21;
  goto LAB_001f057b;
LAB_001f0d21:
  if (local_98 < uVar37) {
LAB_001f0d3b:
    uVar23 = uVar37 + 0xf;
LAB_001f0d3f:
    if ((uVar37 <= local_98) && (uVar23 != 0)) {
      param_7[3] = param_7[2];
      *(undefined8 *)(param_7 + 1) = *(undefined8 *)param_7;
      *param_7 = (int)uVar37;
    }
  }
  else {
    if (uVar37 != (long)*param_7) {
      uVar23 = 1;
      if (uVar37 != (long)param_7[1]) {
        uVar23 = (uVar37 + 3) - (long)*param_7;
        if (uVar23 < 7) {
          bVar13 = (byte)((int)uVar23 << 2);
          uVar14 = 0x9750468;
        }
        else {
          uVar23 = (uVar37 + 3) - (long)param_7[1];
          if (6 < uVar23) {
            uVar23 = 2;
            if ((uVar37 != (long)param_7[2]) && (uVar23 = 3, uVar37 != (long)param_7[3]))
            goto LAB_001f0d3b;
            goto LAB_001f0d3f;
          }
          bVar13 = (byte)((int)uVar23 << 2);
          uVar14 = 0xfdb1ace;
        }
        uVar23 = (ulong)(uVar14 >> (bVar13 & 0x1f) & 0xf);
      }
      goto LAB_001f0d3f;
    }
    uVar23 = 0;
  }
  uVar14 = (uint)uVar38;
  *local_78 = uVar14;
  local_78[1] = iVar15 << 0x19 | (uint)uVar24;
  uVar33 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
  uVar11 = 0;
  if (uVar33 <= uVar23) {
    bVar13 = (byte)*(uint *)(param_5 + 0x40);
    uVar22 = ((uVar23 - *(uint *)(param_5 + 0x44)) + (4L << (bVar13 & 0x3f))) - 0x10;
    uVar11 = 0x1f;
    uVar32 = (uint)uVar22;
    if (uVar32 != 0) {
      for (; uVar32 >> uVar11 == 0; uVar11 = uVar11 - 1) {
      }
    }
    uVar11 = (uVar11 ^ 0xffffffe0) + 0x1f;
    uVar29 = (ulong)((uVar22 >> ((ulong)uVar11 & 0x3f) & 1) != 0);
    lVar27 = (ulong)uVar11 - (ulong)*(uint *)(param_5 + 0x40);
    uVar23 = (~(-1 << (bVar13 & 0x1f)) & uVar32) + uVar33 +
             (uVar29 + lVar27 * 2 + 0xfffe << (bVar13 & 0x3f)) | lVar27 * 0x400;
    uVar11 = (uint)(uVar22 - (uVar29 + 2 << ((byte)uVar11 & 0x3f)) >> (bVar13 & 0x3f));
  }
  *(short *)((long)local_78 + 0xe) = (short)uVar23;
  local_78[2] = uVar11;
  if (5 < uVar38) {
    if (uVar38 < 0x82) {
      uVar14 = 0x1f;
      uVar11 = (uint)(uVar38 - 2);
      if (uVar11 != 0) {
        for (; uVar11 >> uVar14 == 0; uVar14 = uVar14 - 1) {
        }
      }
      uVar14 = (int)(uVar38 - 2 >> ((char)(uVar14 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
               (uVar14 ^ 0xffffffe0) * 2 + 0x40;
    }
    else if (uVar38 < 0x842) {
      uVar11 = 0x1f;
      if (uVar14 - 0x42 != 0) {
        for (; uVar14 - 0x42 >> uVar11 == 0; uVar11 = uVar11 - 1) {
        }
      }
      uVar14 = (uVar11 ^ 0xffe0) + 0x2a;
    }
    else {
      uVar14 = 0x15;
      if (0x1841 < uVar38) {
        uVar14 = (uint)(ushort)(0x17 - (uVar38 < 0x5842));
      }
    }
  }
  uVar11 = iVar15 + (uint)uVar24;
  if (uVar11 < 10) {
    uVar32 = uVar11 - 2;
  }
  else if (uVar11 < 0x86) {
    uVar11 = uVar11 - 6;
    uVar32 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> uVar32 == 0; uVar32 = uVar32 - 1) {
      }
    }
    uVar32 = (uVar11 >> ((char)(uVar32 ^ 0xffffffe0) + 0x1fU & 0x1f)) + 0x42 +
             (uVar32 ^ 0xffffffe0) * 2;
  }
  else {
    uVar32 = 0x17;
    if (uVar11 < 0x846) {
      uVar32 = 0x1f;
      if (uVar11 - 0x46 != 0) {
        for (; uVar11 - 0x46 >> uVar32 == 0; uVar32 = uVar32 - 1) {
        }
      }
      uVar32 = (uVar32 ^ 0xffe0) + 0x2c;
    }
  }
  uVar10 = (ushort)uVar32;
  uVar25 = (uVar10 & 7) + ((ushort)uVar14 & 7) * 8;
  if ((((uVar23 & 0x3ff) == 0) && ((ushort)uVar14 < 8)) && (uVar10 < 0x10)) {
    if (7 < uVar10) {
      uVar25 = uVar25 | 0x40;
    }
  }
  else {
    iVar12 = ((uVar14 & 0xffff) >> 3) * 3 + ((uVar32 & 0xffff) >> 3);
    uVar25 = uVar25 + ((ushort)(0x520d40 >> ((char)iVar12 * '\x02' & 0x1fU)) & 0xc0) +
                      (short)iVar12 * 0x40 + 0x40;
  }
  *(ushort *)(local_78 + 3) = uVar25;
  *param_11 = *param_11 + uVar38;
  param_2 = uVar34 + uVar24;
  uVar38 = uVar16;
  if (param_2 < uVar16) {
    uVar38 = param_2;
  }
  uVar23 = uVar34 + 2;
  if (uVar37 < uVar24 >> 2) {
    uVar33 = param_2 + uVar37 * -4;
    if (uVar33 < uVar23) {
      uVar33 = uVar23;
    }
    uVar23 = uVar33;
    if (uVar38 < uVar33) {
      uVar23 = uVar38;
    }
  }
  uVar34 = lVar26 + uVar24 * 2 + uVar34;
  local_78 = local_78 + 4;
  if (uVar23 < uVar38) {
    do {
      *(int *)(lVar8 + ((ulong)(*(long *)(param_3 + (uVar23 & param_4)) * -0x42e1ca5843000000) >>
                       0x30) * 4) = (int)uVar23;
      uVar23 = uVar23 + 1;
    } while (uVar38 != uVar23);
    uVar38 = 0;
  }
  else {
    uVar38 = 0;
  }
LAB_001f0b3f:
  uVar23 = param_2;
  if (uVar1 <= param_2 + 8) goto LAB_001f1139;
  goto LAB_001f0363;
}

