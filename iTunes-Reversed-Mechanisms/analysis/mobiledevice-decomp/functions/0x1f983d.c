// rea decompile_all
// name: _CreateBackwardReferencesNH54
// address: 0x1f983d
// body: available
// range: 0x1f983d-0x1fa52a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fa526 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CreateBackwardReferencesNH54
               (ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5,long param_6,
               int *param_7,ulong *param_8,int *param_9,long *param_10,long *param_11)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  char *pcVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  char cVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  ulong uVar38;
  ulong local_98;
  ulong local_90;
  int *local_80;
  ulong local_78;
  ulong local_60;
  ulong auStack_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = (param_2 - 7) + param_1;
  uVar18 = param_2;
  if (7 < param_1) {
    uVar18 = uVar4;
  }
  lVar21 = 0x200;
  if (*(int *)(param_5 + 4) < 9) {
    lVar21 = 0x40;
  }
  uVar38 = *param_8;
  uVar1 = param_2 + param_1;
  if (uVar1 <= param_2 + 8) {
    local_80 = param_9;
LAB_001fa4e4:
    *param_8 = (uVar38 + uVar1) - param_2;
    *param_10 = *param_10 + ((long)local_80 - (long)param_9 >> 4);
    if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
  uVar23 = (1L << (*(byte *)(param_5 + 8) & 0x3f)) - 0x10;
  lVar5 = *(long *)(param_5 + 0x10);
  uVar27 = lVar21 + param_2;
  lVar6 = *(long *)(param_6 + 0x38);
  uVar7 = (uint)param_4;
  lVar3 = param_2 - 1;
  local_80 = param_9;
  uVar13 = param_2;
LAB_001f9940:
  uVar22 = uVar1 - uVar13;
  uVar26 = uVar23;
  if (uVar13 < uVar23) {
    uVar26 = uVar13;
  }
  uVar25 = uVar13 & param_4;
  pcVar2 = (char *)(uVar25 + param_3);
  cVar33 = *(char *)(param_3 + uVar25);
  local_78 = (ulong)*param_7;
  local_90 = 0x7e4;
  if ((uVar13 - local_78 < uVar13) &&
     (uVar34 = (ulong)((uint)(uVar13 - local_78) & uVar7), cVar33 == *(char *)(param_3 + uVar34))) {
    lVar30 = uVar34 + param_3;
    if (7 < uVar22) {
      local_98 = uVar22 & 0xfffffffffffffff8;
      pcVar24 = pcVar2 + local_98;
      lVar28 = 0;
      uVar34 = 0;
LAB_001f99d9:
      uVar29 = *(ulong *)(lVar30 + uVar34 * 8);
      if (*(ulong *)(pcVar2 + uVar34 * 8) == uVar29) goto code_r0x001f99ea;
      uVar29 = uVar29 ^ *(ulong *)(pcVar2 + uVar34 * 8);
      uVar34 = 0;
      if (uVar29 != 0) {
        for (; (uVar29 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
        }
      }
      uVar34 = (uVar34 >> 3 & 0x1fffffff) - lVar28;
      goto LAB_001fa080;
    }
    local_98 = 0;
    pcVar24 = pcVar2;
LAB_001fa49c:
    uVar29 = uVar22 & 7;
    uVar34 = local_98;
    if (uVar29 != 0) {
      uVar14 = local_98 | uVar29;
      do {
        uVar34 = local_98;
        if (*(char *)(lVar30 + local_98) != *pcVar24) break;
        pcVar24 = pcVar24 + 1;
        local_98 = local_98 + 1;
        uVar29 = uVar29 - 1;
        uVar34 = uVar14;
      } while (uVar29 != 0);
    }
LAB_001fa080:
    if ((uVar34 < 4) || (uVar29 = uVar34 * 0x87 + 0x78f, uVar29 < 0x7e5)) {
      local_78 = 0;
      uVar34 = 0;
    }
    else {
      cVar33 = pcVar2[uVar34];
      local_90 = uVar29;
    }
  }
  else {
    uVar34 = 0;
    local_78 = 0;
  }
  uVar16 = (uint)((ulong)(*(long *)(param_3 + uVar25) * 0x35a7bd1e35a7bd00) >> 0x2c);
  lVar12 = 0;
  lVar30 = 0;
  lVar28 = 1;
  do {
    auStack_58[lVar12] = lVar30 * 8 + (ulong)uVar16 & 0xfffff;
    auStack_58[lVar12 + 1] = lVar28 * 8 + (ulong)uVar16 & 0xfffff;
    lVar12 = lVar12 + 2;
    lVar30 = lVar30 + 2;
    lVar28 = lVar28 + 2;
  } while (lVar12 != 4);
  uVar25 = (ulong)((uint)uVar22 & 7);
  lVar30 = 0;
  do {
    uVar16 = *(uint *)(lVar6 + auStack_58[lVar30] * 4);
    lVar28 = (ulong)(uVar7 & uVar16) + param_3;
    if (((cVar33 == *(char *)(uVar34 + lVar28)) && (uVar13 != uVar16)) &&
       (uVar29 = uVar13 - uVar16, uVar29 <= uVar26)) {
      if (7 < uVar22) {
        lVar12 = 0;
        uVar14 = 0;
LAB_001f9af6:
        uVar31 = *(ulong *)(lVar28 + uVar14 * 8);
        if (*(ulong *)(pcVar2 + uVar14 * 8) == uVar31) goto code_r0x001f9b03;
        uVar31 = uVar31 ^ *(ulong *)(pcVar2 + uVar14 * 8);
        uVar14 = 0;
        if (uVar31 != 0) {
          for (; (uVar31 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
        uVar14 = (uVar14 >> 3 & 0x1fffffff) - lVar12;
        goto LAB_001f9b4b;
      }
      pcVar24 = pcVar2;
      uVar31 = 0;
LAB_001f9b9c:
      uVar14 = uVar31;
      if (uVar25 != 0) {
        uVar35 = uVar25 | uVar31;
        uVar36 = uVar25;
        do {
          uVar14 = uVar31;
          if (*(char *)(lVar28 + uVar31) != *pcVar24) break;
          pcVar24 = pcVar24 + 1;
          uVar31 = uVar31 + 1;
          uVar36 = uVar36 - 1;
          uVar14 = uVar35;
        } while (uVar36 != 0);
      }
LAB_001f9b4b:
      if (3 < uVar14) {
        iVar20 = 0x1f;
        if ((uint)uVar29 != 0) {
          for (; (uint)uVar29 >> iVar20 == 0; iVar20 = iVar20 + -1) {
          }
        }
        uVar31 = (ulong)(iVar20 * -0x1e + 0x780) + uVar14 * 0x87;
        if (local_90 < uVar31) {
          cVar33 = pcVar2[uVar14];
          uVar34 = uVar14;
          local_90 = uVar31;
          local_78 = uVar29;
        }
      }
    }
    lVar30 = lVar30 + 1;
  } while (lVar30 != 4);
  *(uint *)(lVar6 + *(long *)((long)auStack_58 + (ulong)((uint)uVar13 & 0x18)) * 4) = (uint)uVar13;
  if (0x7e4 < local_90) {
    iVar20 = *param_7;
    uVar26 = (lVar3 + param_1) - uVar13;
    uVar16 = 0;
LAB_001f9c29:
    uVar22 = uVar22 - 1;
    uVar25 = uVar34 - 1;
    if (uVar22 <= uVar34 - 1) {
      uVar25 = uVar22;
    }
    if (4 < *(int *)(param_5 + 4)) {
      uVar25 = 0;
    }
    uVar29 = uVar13 + 1;
    uVar27 = uVar23;
    if (uVar29 < uVar23) {
      uVar27 = uVar29;
    }
    pcVar2 = (char *)((uVar29 & param_4) + param_3);
    cVar33 = pcVar2[uVar25];
    uVar31 = uVar29 - (long)iVar20;
    uVar14 = 0x7e4;
    if ((uVar31 < uVar29) &&
       (lVar30 = (ulong)((uint)uVar31 & uVar7) + param_3, cVar33 == *(char *)(uVar25 + lVar30))) {
      if (7 < uVar22) {
        lVar28 = 0;
        uVar31 = 0;
LAB_001f9cc1:
        uVar36 = *(ulong *)(lVar30 + uVar31 * 8);
        if (*(ulong *)(pcVar2 + uVar31 * 8) == uVar36) goto code_r0x001f9cce;
        uVar36 = uVar36 ^ *(ulong *)(pcVar2 + uVar31 * 8);
        uVar31 = 0;
        if (uVar36 != 0) {
          for (; (uVar36 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
          }
        }
        uVar31 = (uVar31 >> 3 & 0x1fffffff) - lVar28;
        goto LAB_001f9d04;
      }
      uVar31 = 0;
      pcVar24 = pcVar2;
      goto LAB_001f9f65;
    }
    goto LAB_001f9d47;
  }
  uVar38 = uVar38 + 1;
  param_2 = uVar13 + 1;
  if (uVar27 < param_2) {
    if ((uint)((int)lVar21 * 4) + uVar27 < param_2) {
      uVar26 = uVar13 + 0x11;
      if (uVar4 <= uVar13 + 0x11) {
        uVar26 = uVar4;
      }
      for (; param_2 < uVar26; param_2 = param_2 + 4) {
        *(uint *)(lVar6 + (ulong)((uint)((ulong)(*(long *)(param_3 + (param_2 & param_4)) *
                                                0x35a7bd1e35a7bd00) >> 0x2c) +
                                  ((uint)param_2 & 0x18) & 0xfffff) * 4) = (uint)param_2;
        uVar38 = uVar38 + 4;
      }
    }
    else {
      uVar26 = uVar13 + 9;
      if (uVar4 <= uVar13 + 9) {
        uVar26 = uVar4;
      }
      for (; param_2 < uVar26; param_2 = param_2 + 2) {
        *(uint *)(lVar6 + (ulong)((uint)((ulong)(*(long *)(param_3 + (param_2 & param_4)) *
                                                0x35a7bd1e35a7bd00) >> 0x2c) +
                                  ((uint)param_2 & 0x18) & 0xfffff) * 4) = (uint)param_2;
        uVar38 = uVar38 + 2;
      }
    }
  }
  goto LAB_001fa420;
code_r0x001f99ea:
  uVar34 = uVar34 + 1;
  lVar28 = lVar28 + -8;
  if (uVar22 >> 3 == uVar34) goto LAB_001fa49c;
  goto LAB_001f99d9;
code_r0x001f9b03:
  uVar14 = uVar14 + 1;
  lVar12 = lVar12 + -8;
  pcVar24 = pcVar2 + (uVar22 & 0xfffffffffffffff8);
  uVar31 = uVar22 & 0xfffffffffffffff8;
  if (uVar22 >> 3 == uVar14) goto LAB_001f9b9c;
  goto LAB_001f9af6;
code_r0x001f9cce:
  uVar31 = uVar31 + 1;
  lVar28 = lVar28 + -8;
  if (uVar26 >> 3 == uVar31) goto code_r0x001f9cde;
  goto LAB_001f9cc1;
code_r0x001f9cde:
  uVar31 = -lVar28;
  pcVar24 = pcVar2 + -lVar28;
LAB_001f9f65:
  uVar36 = uVar22 & 7;
  for (; (uVar36 != 0 && (*(char *)(lVar30 + uVar31) == *pcVar24)); uVar31 = uVar31 + 1) {
    pcVar24 = pcVar24 + 1;
    uVar36 = uVar36 - 1;
  }
LAB_001f9d04:
  if (uVar31 < 4) {
    local_60 = 0;
  }
  else {
    uVar36 = uVar31 * 0x87 + 0x78f;
    if (uVar36 < 0x7e5) {
LAB_001f9d47:
      local_60 = 0;
    }
    else {
      cVar33 = pcVar2[uVar31];
      uVar14 = uVar36;
      uVar25 = uVar31;
      local_60 = (long)iVar20;
    }
  }
  uVar17 = (uint)((ulong)(*(long *)(param_3 + (uVar29 & param_4)) * 0x35a7bd1e35a7bd00) >> 0x2c);
  lVar12 = 0;
  lVar30 = 0;
  lVar28 = 1;
  do {
    auStack_58[lVar12] = lVar30 * 8 + (ulong)uVar17 & 0xfffff;
    auStack_58[lVar12 + 1] = lVar28 * 8 + (ulong)uVar17 & 0xfffff;
    lVar12 = lVar12 + 2;
    lVar30 = lVar30 + 2;
    lVar28 = lVar28 + 2;
  } while (lVar12 != 4);
  uVar31 = (ulong)((uint)uVar22 & 7);
  lVar30 = 0;
LAB_001f9dbf:
  uVar17 = *(uint *)(lVar6 + auStack_58[lVar30] * 4);
  lVar28 = (ulong)(uVar7 & uVar17) + param_3;
  if (((cVar33 == *(char *)(uVar25 + lVar28)) && (uVar29 != uVar17)) &&
     (uVar36 = uVar29 - uVar17, uVar36 <= uVar27)) {
    uVar35 = uVar31;
    if (7 < uVar22) {
      lVar12 = 0;
      uVar32 = 0;
LAB_001f9e07:
      uVar19 = *(ulong *)(lVar28 + uVar32 * 8);
      if (*(ulong *)(pcVar2 + uVar32 * 8) == uVar19) goto code_r0x001f9e14;
      uVar19 = uVar19 ^ *(ulong *)(pcVar2 + uVar32 * 8);
      uVar35 = 0;
      if (uVar19 != 0) {
        for (; (uVar19 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
        }
      }
      uVar32 = (uVar35 >> 3 & 0x1fffffff) - lVar12;
      goto LAB_001f9e40;
    }
    uVar32 = 0;
    pcVar24 = pcVar2;
    goto joined_r0x001f9ea7;
  }
  goto LAB_001f9e81;
code_r0x001f9e14:
  uVar32 = uVar32 + 1;
  lVar12 = lVar12 + -8;
  if (uVar26 >> 3 == uVar32) goto code_r0x001f9e24;
  goto LAB_001f9e07;
code_r0x001f9e24:
  uVar32 = -lVar12;
  pcVar24 = pcVar2 + -lVar12;
joined_r0x001f9ea7:
  for (; (uVar35 != 0 && (*(char *)(lVar28 + uVar32) == *pcVar24)); uVar32 = uVar32 + 1) {
    uVar35 = uVar35 - 1;
    pcVar24 = pcVar24 + 1;
  }
LAB_001f9e40:
  if (3 < uVar32) {
    iVar37 = 0x1f;
    if ((uint)uVar36 != 0) {
      for (; (uint)uVar36 >> iVar37 == 0; iVar37 = iVar37 + -1) {
      }
    }
    uVar35 = (ulong)(iVar37 * -0x1e + 0x780) + uVar32 * 0x87;
    if (uVar14 < uVar35) {
      cVar33 = pcVar2[uVar32];
      uVar14 = uVar35;
      uVar25 = uVar32;
      local_60 = uVar36;
    }
  }
LAB_001f9e81:
  lVar30 = lVar30 + 1;
  if (lVar30 == 4) goto LAB_001f9ebf;
  goto LAB_001f9dbf;
LAB_001f9ebf:
  *(uint *)(lVar6 + *(long *)((long)auStack_58 + (ulong)((uint)uVar29 & 0x18)) * 4) = (uint)uVar29;
  uVar27 = uVar13;
  if ((uVar14 < local_90 + 0xaf) ||
     (uVar38 = uVar38 + 1, local_78 = local_60, uVar27 = uVar29, uVar34 = uVar25, 2 < uVar16))
  goto LAB_001fa11e;
  uVar25 = uVar13 + 9;
  uVar16 = uVar16 + 1;
  uVar26 = uVar26 - 1;
  uVar13 = uVar29;
  local_90 = uVar14;
  if (uVar1 <= uVar25) goto LAB_001fa11e;
  goto LAB_001f9c29;
LAB_001fa11e:
  uVar13 = lVar5 + uVar27;
  if (uVar23 <= uVar13) {
    uVar13 = uVar23;
  }
  iVar37 = (int)uVar38;
  iVar20 = (int)uVar34;
  if (uVar13 < local_78) {
LAB_001fa13f:
    uVar26 = local_78 + 0xf;
  }
  else {
    if (local_78 == (long)*param_7) {
      *local_80 = iVar37;
      local_80[1] = iVar20;
      uVar16 = 0;
      iVar10 = 0;
      goto LAB_001fa21d;
    }
    uVar26 = 1;
    if (local_78 != (long)param_7[1]) {
      uVar26 = (local_78 + 3) - (long)*param_7;
      if (uVar26 < 7) {
        bVar15 = (byte)((int)uVar26 << 2);
        uVar16 = 0x9750468;
      }
      else {
        uVar26 = (local_78 + 3) - (long)param_7[1];
        if (6 < uVar26) {
          uVar26 = 2;
          if ((local_78 != (long)param_7[2]) && (uVar26 = 3, local_78 != (long)param_7[3]))
          goto LAB_001fa13f;
          goto LAB_001fa143;
        }
        bVar15 = (byte)((int)uVar26 << 2);
        uVar16 = 0xfdb1ace;
      }
      uVar26 = (ulong)(uVar16 >> (bVar15 & 0x1f) & 0xf);
    }
  }
LAB_001fa143:
  if ((local_78 <= uVar13) && (uVar26 != 0)) {
    param_7[3] = param_7[2];
    *(undefined8 *)(param_7 + 1) = *(undefined8 *)param_7;
    *param_7 = (int)local_78;
  }
  *local_80 = iVar37;
  local_80[1] = iVar20;
  uVar13 = (ulong)*(uint *)(param_5 + 0x44) + 0x10;
  iVar10 = 0;
  if (uVar13 <= uVar26) {
    bVar15 = (byte)*(uint *)(param_5 + 0x40);
    uVar22 = ((4L << (bVar15 & 0x3f)) + (uVar26 - *(uint *)(param_5 + 0x44))) - 0x10;
    uVar16 = 0x1f;
    uVar17 = (uint)uVar22;
    if (uVar17 != 0) {
      for (; uVar17 >> uVar16 == 0; uVar16 = uVar16 - 1) {
      }
    }
    uVar16 = (uVar16 ^ 0xffffffe0) + 0x1f;
    uVar25 = (ulong)((uVar22 >> ((ulong)uVar16 & 0x3f) & 1) != 0);
    lVar30 = (ulong)uVar16 - (ulong)*(uint *)(param_5 + 0x40);
    uVar26 = (~(-1 << (bVar15 & 0x1f)) & uVar17) + uVar13 +
             (uVar25 + lVar30 * 2 + 0xfffe << (bVar15 & 0x3f)) | lVar30 * 0x400;
    iVar10 = (int)(uVar22 - (uVar25 + 2 << ((byte)uVar16 & 0x3f)) >> (bVar15 & 0x3f));
  }
  uVar16 = (uint)uVar26;
LAB_001fa21d:
  *(short *)((long)local_80 + 0xe) = (short)uVar16;
  local_80[2] = iVar10;
  if (uVar38 < 6) {
    uVar13 = uVar38 & 0xffffffff;
  }
  else if (uVar38 < 0x82) {
    uVar17 = 0x1f;
    uVar11 = (uint)(uVar38 - 2);
    if (uVar11 != 0) {
      for (; uVar11 >> uVar17 == 0; uVar17 = uVar17 - 1) {
      }
    }
    uVar13 = (ulong)((int)(uVar38 - 2 >> ((char)(uVar17 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                     (uVar17 ^ 0xffffffe0) * 2 + 0x40);
  }
  else if (uVar38 < 0x842) {
    uVar17 = 0x1f;
    if (iVar37 - 0x42U != 0) {
      for (; iVar37 - 0x42U >> uVar17 == 0; uVar17 = uVar17 - 1) {
      }
    }
    uVar13 = (ulong)((uVar17 ^ 0xffe0) + 0x2a);
  }
  else {
    uVar13 = 0x15;
    if (0x1841 < uVar38) {
      uVar13 = (ulong)(ushort)(0x17 - (uVar38 < 0x5842));
    }
  }
  uVar26 = (ulong)iVar20;
  if (uVar26 < 10) {
    uVar17 = iVar20 - 2;
  }
  else if (uVar26 < 0x86) {
    uVar17 = 0x1f;
    uVar11 = (uint)(uVar26 - 6);
    if (uVar11 != 0) {
      for (; uVar11 >> uVar17 == 0; uVar17 = uVar17 - 1) {
      }
    }
    uVar17 = (int)(uVar26 - 6 >> ((char)(uVar17 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
             (uVar17 ^ 0xffffffe0) * 2 + 0x42;
  }
  else {
    uVar17 = 0x17;
    if (uVar26 < 0x846) {
      uVar17 = 0x1f;
      if (iVar20 - 0x46U != 0) {
        for (; iVar20 - 0x46U >> uVar17 == 0; uVar17 = uVar17 - 1) {
        }
      }
      uVar17 = (uVar17 ^ 0xffe0) + 0x2c;
    }
  }
  uVar8 = (ushort)uVar17;
  sVar9 = (uVar8 & 7) + ((ushort)uVar13 & 7) * 8;
  if ((((uVar16 & 0x3ff) == 0) && ((ushort)uVar13 < 8)) && (uVar8 < 0x10)) {
    if (7 < uVar8) {
      sVar9 = sVar9 + 0x40;
    }
  }
  else {
    iVar20 = (int)((uVar13 & 0xffff) >> 3) * 3 + ((uVar17 & 0xffff) >> 3);
    sVar9 = sVar9 + ((ushort)(0x520d40 >> ((char)iVar20 * '\x02' & 0x1fU)) & 0xc0) +
                    (short)iVar20 * 0x40 + 0x40;
  }
  *(short *)(local_80 + 3) = sVar9;
  *param_11 = *param_11 + uVar38;
  param_2 = uVar27 + uVar34;
  uVar38 = uVar18;
  if (param_2 < uVar18) {
    uVar38 = param_2;
  }
  uVar13 = uVar27 + 2;
  if (local_78 < uVar34 >> 2) {
    uVar26 = param_2 + local_78 * -4;
    if (uVar26 < uVar13) {
      uVar26 = uVar13;
    }
    uVar13 = uVar26;
    if (uVar38 < uVar26) {
      uVar13 = uVar38;
    }
  }
  uVar27 = lVar21 + uVar34 * 2 + uVar27;
  local_80 = local_80 + 4;
  if (uVar13 < uVar38) {
    do {
      *(uint *)(lVar6 + (ulong)((uint)((ulong)(*(long *)(param_3 + (uVar13 & param_4)) *
                                              0x35a7bd1e35a7bd00) >> 0x2c) + ((uint)uVar13 & 0x18) &
                               0xfffff) * 4) = (uint)uVar13;
      uVar13 = uVar13 + 1;
    } while (uVar38 != uVar13);
    uVar38 = 0;
  }
  else {
    uVar38 = 0;
  }
LAB_001fa420:
  uVar13 = param_2;
  if (uVar1 <= param_2 + 8) goto LAB_001fa4e4;
  goto LAB_001f9940;
}

