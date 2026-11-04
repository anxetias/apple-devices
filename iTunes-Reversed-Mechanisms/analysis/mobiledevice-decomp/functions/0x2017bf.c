// rea decompile_all
// name: _lzfseEncodeMatches
// address: 0x2017bf
// body: available
// range: 0x2017bf-0x202758 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x202754 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzfseEncodeMatches(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  short *psVar15;
  undefined4 *puVar16;
  ulong *puVar17;
  long lVar18;
  long *plVar19;
  short sVar20;
  ushort uVar21;
  int iVar22;
  ushort uVar23;
  ulong uVar24;
  ushort uVar25;
  uint uVar26;
  ushort uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ushort uVar34;
  ulong uVar35;
  int iVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 local_1454;
  int local_1450;
  uint local_1448;
  uint local_1444;
  uint local_1440;
  int local_1438;
  ushort local_1434;
  ushort local_1432;
  ushort local_1430;
  ushort local_142e;
  ushort local_1422 [361];
  ulong *local_1150;
  undefined8 local_1148;
  ulong local_1140;
  undefined4 *local_1138;
  uint local_112c;
  long local_1128;
  long *local_1120;
  short asStack_1118 [1440];
  int local_5d8 [256];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar26 = *(uint *)(param_1 + 0x6c);
  if (uVar26 == 0) {
    if (*(int *)(param_1 + 0x68) == 0) {
      uVar7 = 0;
      goto LAB_00202365;
    }
    local_112c = uVar26;
    ___bzero(&local_1454,0x304);
    local_1148 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    ___bzero(&local_1454,0x304);
    local_1148 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = uVar26;
    while (local_112c = uVar26, (uVar4 & 3) != 0) {
      *(uint *)(param_1 + 0x6c) = uVar4 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x90) + (ulong)uVar4) = 0;
      uVar4 = *(uint *)(param_1 + 0x6c);
    }
  }
  iVar36 = 0;
  uVar35 = 0;
  if (*(uint *)(param_1 + 0x68) != 0) {
    lVar6 = *(long *)(param_1 + 0x88);
    uVar9 = 0;
    uVar35 = (ulong)*(uint *)(param_1 + 0x68);
    iVar3 = 0;
    do {
      iVar5 = *(int *)(lVar6 + uVar9 * 4);
      if (iVar5 == iVar3) {
        *(undefined4 *)(lVar6 + uVar9 * 4) = 0;
        uVar35 = (ulong)*(uint *)(param_1 + 0x68);
        iVar5 = iVar3;
      }
      uVar9 = uVar9 + 1;
      iVar3 = iVar5;
    } while (uVar9 < uVar35);
  }
  local_48 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_1d8 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_168 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  ___bzero(local_5d8);
  iVar3 = 0;
  uVar26 = (uint)uVar35;
  local_1128 = param_1;
  plVar19 = (long *)(param_1 + 0x28);
  if (uVar26 != 0) {
    lVar6 = *(long *)(param_1 + 0x78);
    uVar9 = 0;
    iVar3 = 0;
    do {
      iVar36 = *(int *)(lVar6 + uVar9 * 4);
      *(int *)(local_88 + (ulong)(byte)(&_getLSymbolFromValue_sym)[iVar36] * 4) =
           *(int *)(local_88 + (ulong)(byte)(&_getLSymbolFromValue_sym)[iVar36] * 4) + 1;
      iVar3 = iVar3 + iVar36;
      uVar9 = uVar9 + 1;
    } while (uVar35 != uVar9);
    local_1120 = (long *)(param_1 + 0x28);
    lVar6 = *(long *)(param_1 + 0x80);
    uVar9 = 0;
    iVar36 = 0;
    do {
      iVar5 = *(int *)(lVar6 + uVar9 * 4);
      *(int *)(local_d8 + (ulong)(byte)(&_getMSymbolFromValue_sym)[iVar5] * 4) =
           *(int *)(local_d8 + (ulong)(byte)(&_getMSymbolFromValue_sym)[iVar5] * 4) + 1;
      iVar36 = iVar36 + iVar5;
      uVar9 = uVar9 + 1;
    } while (uVar35 != uVar9);
    lVar6 = *(long *)(param_1 + 0x88);
    uVar9 = 0;
    do {
      uVar4 = *(uint *)(lVar6 + uVar9 * 4);
      uVar30 = 0;
      if (uVar4 < 0x3c) {
        uVar30 = uVar4;
      }
      uVar13 = (uVar4 - 0x3c >> 4) + 0x40;
      if (0x3bf < uVar4 - 0x3c) {
        uVar13 = 0;
      }
      uVar29 = uVar4 - 0x3fc >> 8 ^ 0x80;
      if (0x3bff < uVar4 - 0x3fc) {
        uVar29 = 0;
      }
      uVar28 = (uVar4 + 0xfc004 >> 0xc) + 0xc0;
      if (0x3bfff < uVar4 - 0x3ffc) {
        uVar28 = 0;
      }
      *(int *)(local_1d8 +
              (ulong)(byte)(&_getDSymbolFromValue_sym)[(uVar28 | uVar29 | uVar13 | uVar30) & 0xff] *
              4) = *(int *)(local_1d8 +
                           (ulong)(byte)(&_getDSymbolFromValue_sym)
                                        [(uVar28 | uVar29 | uVar13 | uVar30) & 0xff] * 4) + 1;
      uVar9 = uVar9 + 1;
      param_1 = local_1128;
      plVar19 = local_1120;
    } while (uVar35 != uVar9);
  }
  uVar4 = *(uint *)(param_1 + 0x6c);
  if ((ulong)uVar4 != 0) {
    lVar6 = *(long *)(param_1 + 0x90);
    uVar35 = 0;
    do {
      local_5d8[*(byte *)(lVar6 + uVar35)] = local_5d8[*(byte *)(lVar6 + uVar35)] + 1;
      uVar35 = uVar35 + 1;
    } while (uVar4 != uVar35);
  }
  local_1138 = *(undefined4 **)(param_1 + 0x28);
  if (*(undefined4 **)(param_1 + 0x28) + 0xbc <= *(undefined4 **)(param_1 + 0x38)) {
    local_1454 = 0x31787662;
    local_1450 = iVar36 + iVar3;
    lVar6 = 0;
    auVar38 = (undefined1  [16])0x0;
    do {
      lVar10 = lVar6 * 4;
      auVar37._0_4_ = auVar38._0_4_ + *(int *)(local_88 + lVar10);
      auVar37._4_4_ = auVar38._4_4_ + *(int *)(local_88 + lVar10 + 4);
      auVar37._8_4_ = auVar38._8_4_ + *(int *)(local_88 + lVar10 + 8);
      auVar37._12_4_ = auVar38._12_4_ + *(int *)(local_88 + lVar10 + 0xc);
      lVar6 = lVar6 + 4;
      auVar38 = auVar37;
    } while (lVar6 != 0x14);
    auVar38 = phaddd(auVar37,auVar37);
    auVar38 = phaddd(auVar38,auVar38);
    uVar35 = 0;
    iVar36 = 0;
    if (auVar38._0_4_ != 0) {
      iVar36 = (int)(0x80000000 / (ulong)auVar38._0_4_);
    }
    iVar3 = 0x40;
    uVar9 = 0;
    uVar30 = 0;
    do {
      uVar29 = *(int *)(local_88 + uVar9 * 4) * iVar36;
      uVar13 = (uint)(*(int *)(local_88 + uVar9 * 4) != 0);
      if (0xffffff < uVar29) {
        uVar13 = (uVar29 >> 0x18) + 1 >> 1;
      }
      local_1422[uVar9] = (ushort)uVar13;
      iVar3 = iVar3 - uVar13;
      if (uVar30 < uVar13) {
        uVar35 = uVar9 & 0xffffffff;
        uVar30 = uVar13;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x14);
    local_1448 = uVar4;
    local_1444 = uVar26;
    if (-iVar3 < (int)(uVar30 >> 2)) {
      local_1422[(int)uVar35] = local_1422[(int)uVar35] + (short)iVar3;
    }
    else {
      _fse_adjust_freqs(local_1422,-iVar3,0x14);
    }
    lVar6 = 0;
    auVar38 = (undefined1  [16])0x0;
    do {
      lVar10 = lVar6 * 4;
      auVar39._0_4_ = auVar38._0_4_ + *(int *)(local_d8 + lVar10);
      auVar39._4_4_ = auVar38._4_4_ + *(int *)(local_d8 + lVar10 + 4);
      auVar39._8_4_ = auVar38._8_4_ + *(int *)(local_d8 + lVar10 + 8);
      auVar39._12_4_ = auVar38._12_4_ + *(int *)(local_d8 + lVar10 + 0xc);
      lVar6 = lVar6 + 4;
      auVar38 = auVar39;
    } while (lVar6 != 0x14);
    auVar38 = phaddd(auVar39,auVar39);
    auVar38 = phaddd(auVar38,auVar38);
    uVar35 = 0;
    iVar36 = 0;
    if (auVar38._0_4_ != 0) {
      iVar36 = (int)(0x80000000 / (ulong)auVar38._0_4_);
    }
    iVar3 = 0x40;
    uVar9 = 0;
    uVar26 = 0;
    do {
      uVar30 = *(int *)(local_d8 + uVar9 * 4) * iVar36;
      uVar4 = (uint)(*(int *)(local_d8 + uVar9 * 4) != 0);
      if (0xffffff < uVar30) {
        uVar4 = (uVar30 >> 0x18) + 1 >> 1;
      }
      local_1422[uVar9 + 0x14] = (ushort)uVar4;
      iVar3 = iVar3 - uVar4;
      if (uVar26 < uVar4) {
        uVar35 = uVar9 & 0xffffffff;
        uVar26 = uVar4;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x14);
    if (-iVar3 < (int)(uVar26 >> 2)) {
      local_1422[(long)(int)uVar35 + 0x14] = local_1422[(long)(int)uVar35 + 0x14] + (short)iVar3;
    }
    else {
      _fse_adjust_freqs(local_1422 + 0x14,-iVar3,0x14);
    }
    lVar6 = 0;
    auVar38 = (undefined1  [16])0x0;
    do {
      lVar10 = lVar6 * 4;
      auVar40._0_4_ = auVar38._0_4_ + *(int *)(local_1d8 + lVar10);
      auVar40._4_4_ = auVar38._4_4_ + *(int *)(local_1d8 + lVar10 + 4);
      auVar40._8_4_ = auVar38._8_4_ + *(int *)(local_1d8 + lVar10 + 8);
      auVar40._12_4_ = auVar38._12_4_ + *(int *)(local_1d8 + lVar10 + 0xc);
      lVar6 = lVar6 + 4;
      auVar38 = auVar40;
    } while (lVar6 != 0x40);
    auVar38 = phaddd(auVar40,auVar40);
    auVar38 = phaddd(auVar38,auVar38);
    uVar35 = 0;
    iVar36 = 0;
    if (auVar38._0_4_ != 0) {
      iVar36 = (int)(0x80000000 / (ulong)auVar38._0_4_);
    }
    iVar3 = 0x100;
    uVar9 = 0;
    uVar26 = 0;
    do {
      uVar30 = *(int *)(local_1d8 + uVar9 * 4) * iVar36;
      uVar4 = (uint)(*(int *)(local_1d8 + uVar9 * 4) != 0);
      if (0x3fffff < uVar30) {
        uVar4 = (uVar30 >> 0x16) + 1 >> 1;
      }
      local_1422[uVar9 + 0x28] = (ushort)uVar4;
      iVar3 = iVar3 - uVar4;
      if (uVar26 < uVar4) {
        uVar35 = uVar9 & 0xffffffff;
        uVar26 = uVar4;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x40);
    if (-iVar3 < (int)(uVar26 >> 2)) {
      local_1422[(long)(int)uVar35 + 0x28] = local_1422[(long)(int)uVar35 + 0x28] + (short)iVar3;
    }
    else {
      _fse_adjust_freqs(local_1422 + 0x28,-iVar3,0x40);
    }
    lVar6 = 0;
    auVar38 = (undefined1  [16])0x0;
    do {
      auVar41._0_4_ = auVar38._0_4_ + local_5d8[lVar6];
      auVar41._4_4_ = auVar38._4_4_ + local_5d8[lVar6 + 1];
      auVar41._8_4_ = auVar38._8_4_ + local_5d8[lVar6 + 2];
      auVar41._12_4_ = auVar38._12_4_ + local_5d8[lVar6 + 3];
      lVar6 = lVar6 + 4;
      auVar38 = auVar41;
    } while (lVar6 != 0x100);
    auVar38 = phaddd(auVar41,auVar41);
    auVar38 = phaddd(auVar38,auVar38);
    uVar35 = 0;
    iVar36 = 0;
    if (auVar38._0_4_ != 0) {
      iVar36 = (int)(0x80000000 / (ulong)auVar38._0_4_);
    }
    iVar3 = 0x400;
    uVar9 = 0;
    uVar26 = 0;
    do {
      uVar30 = local_5d8[uVar9] * iVar36;
      uVar4 = (uint)(local_5d8[uVar9] != 0);
      if (0xfffff < uVar30) {
        uVar4 = (uVar30 >> 0x14) + 1 >> 1;
      }
      local_1422[uVar9 + 0x68] = (ushort)uVar4;
      iVar3 = iVar3 - uVar4;
      if (uVar26 < uVar4) {
        uVar35 = uVar9 & 0xffffffff;
        uVar26 = uVar4;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x100);
    if (-iVar3 < (int)(uVar26 >> 2)) {
      local_1422[(long)(int)uVar35 + 0x68] = local_1422[(long)(int)uVar35 + 0x68] + (short)iVar3;
    }
    else {
      _fse_adjust_freqs(local_1422 + 0x68,-iVar3,0x100);
    }
    puVar16 = local_1138 + 8;
    lVar6 = 0;
    uVar4 = 0;
    uVar26 = 0;
    do {
      uVar23 = local_1422[lVar6];
      if (uVar23 < 8) {
        iVar36 = *(int *)(&DAT_003a3a88 + (ulong)uVar23 * 4);
        iVar3 = *(int *)(&DAT_003a3aa8 + (ulong)uVar23 * 4);
      }
      else if (uVar23 < 0x18) {
        iVar3 = (uint)uVar23 * 0x10 + -0x79;
        iVar36 = 8;
      }
      else {
        iVar3 = (uint)uVar23 * 0x10 + -0x171;
        iVar36 = 0xe;
      }
      uVar4 = uVar4 | iVar3 << ((byte)uVar26 & 0x1f);
      uVar26 = iVar36 + uVar26;
      uVar30 = uVar26;
      if (7 < (int)uVar26) {
        do {
          *(char *)puVar16 = (char)uVar4;
          uVar4 = uVar4 >> 8;
          uVar26 = uVar30 - 8;
          puVar16 = (undefined4 *)((long)puVar16 + 1);
          bVar2 = 0xf < uVar30;
          uVar30 = uVar26;
        } while (bVar2);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x168);
    if (0 < (int)uVar26) {
      *(char *)puVar16 = (char)uVar4;
      puVar16 = (undefined4 *)((long)puVar16 + 1);
    }
    uVar35 = (ulong)(uint)((int)puVar16 - (int)local_1138);
    *(undefined1 (*) [16])(local_1138 + 2) = (undefined1  [16])0x0;
    *(ulong *)(local_1138 + 6) = uVar35;
    puVar17 = (ulong *)(uVar35 + *plVar19);
    *plVar19 = (long)puVar17;
    lVar6 = 0;
    sVar20 = 0;
    do {
      uVar23 = local_1422[lVar6];
      if (uVar23 != 0) {
        uVar26 = 0x1f;
        if (uVar23 != 0) {
          for (; uVar23 >> uVar26 == 0; uVar26 = uVar26 - 1) {
          }
        }
        iVar36 = (uVar26 ^ 0x1f) - 0x19;
        bVar8 = (byte)iVar36;
        asStack_1118[lVar6 * 4 + 0x550] = (uVar23 << (bVar8 & 0x1f)) + -0x40;
        asStack_1118[lVar6 * 4 + 0x551] = (short)iVar36;
        asStack_1118[lVar6 * 4 + 0x552] = (short)(0x40 >> (bVar8 & 0x1f)) + (sVar20 - uVar23);
        asStack_1118[lVar6 * 4 + 0x553] =
             (short)(0x40 >> ((char)(uVar26 ^ 0x1f) - 0x1aU & 0x1f)) + (sVar20 - uVar23);
        sVar20 = sVar20 + uVar23;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x14);
    lVar6 = 0;
    sVar20 = 0;
    do {
      uVar23 = local_1422[lVar6 + 0x14];
      if (uVar23 != 0) {
        uVar26 = 0x1f;
        if (uVar23 != 0) {
          for (; uVar23 >> uVar26 == 0; uVar26 = uVar26 - 1) {
          }
        }
        iVar36 = (uVar26 ^ 0x1f) - 0x19;
        bVar8 = (byte)iVar36;
        asStack_1118[lVar6 * 4 + 0x500] = (uVar23 << (bVar8 & 0x1f)) + -0x40;
        asStack_1118[lVar6 * 4 + 0x501] = (short)iVar36;
        asStack_1118[lVar6 * 4 + 0x502] = (short)(0x40 >> (bVar8 & 0x1f)) + (sVar20 - uVar23);
        asStack_1118[lVar6 * 4 + 0x503] =
             (short)(0x40 >> ((char)(uVar26 ^ 0x1f) - 0x1aU & 0x1f)) + (sVar20 - uVar23);
        sVar20 = sVar20 + uVar23;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x14);
    lVar6 = 0;
    sVar20 = 0;
    do {
      uVar23 = local_1422[lVar6 + 0x28];
      if (uVar23 != 0) {
        uVar26 = 0x1f;
        if (uVar23 != 0) {
          for (; uVar23 >> uVar26 == 0; uVar26 = uVar26 - 1) {
          }
        }
        iVar36 = (uVar26 ^ 0x1f) - 0x17;
        bVar8 = (byte)iVar36;
        asStack_1118[lVar6 * 4 + 0x400] = (uVar23 << (bVar8 & 0x1f)) + -0x100;
        asStack_1118[lVar6 * 4 + 0x401] = (short)iVar36;
        asStack_1118[lVar6 * 4 + 0x402] = (short)(0x100 >> (bVar8 & 0x1f)) + (sVar20 - uVar23);
        asStack_1118[lVar6 * 4 + 0x403] =
             (short)(0x100 >> ((char)(uVar26 ^ 0x1f) - 0x18U & 0x1f)) + (sVar20 - uVar23);
        sVar20 = sVar20 + uVar23;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x40);
    lVar6 = 0;
    sVar20 = 0;
    do {
      uVar23 = local_1422[lVar6 + 0x68];
      if (uVar23 != 0) {
        uVar26 = 0x1f;
        if (uVar23 != 0) {
          for (; uVar23 >> uVar26 == 0; uVar26 = uVar26 - 1) {
          }
        }
        iVar36 = (uVar26 ^ 0x1f) - 0x15;
        bVar8 = (byte)iVar36;
        asStack_1118[lVar6 * 4] = (uVar23 << (bVar8 & 0x1f)) + -0x400;
        asStack_1118[lVar6 * 4 + 1] = (short)iVar36;
        asStack_1118[lVar6 * 4 + 2] = (short)(0x400 >> (bVar8 & 0x1f)) + (sVar20 - uVar23);
        asStack_1118[lVar6 * 4 + 3] =
             (short)(0x400 >> ((char)(uVar26 ^ 0x1f) - 0x16U & 0x1f)) + (sVar20 - uVar23);
        sVar20 = sVar20 + uVar23;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x100);
    param_1 = local_1128;
    if (*(int *)(local_1128 + 0x6c) == 0) {
      uVar35 = 0;
      uVar27 = 0;
      uVar25 = 0;
      uVar21 = 0;
      uVar26 = 0;
      uVar23 = 0;
    }
    else {
      uVar28 = *(int *)(local_1128 + 0x6c) - 2;
      uVar26 = 0;
      uVar30 = 0;
      uVar4 = 0;
      uVar13 = 0;
      uVar29 = 0;
      uVar35 = 0;
      do {
        if (*(ulong **)(local_1128 + 0x38) < puVar17 + 2) goto LAB_0020231c;
        lVar6 = *(long *)(local_1128 + 0x90);
        uVar9 = (ulong)*(byte *)(lVar6 + (ulong)(uVar28 + 1));
        local_1120 = (long *)(ulong)uVar28;
        local_1140 = uVar35;
        psVar15 = asStack_1118 + uVar9 * 4 + 3;
        if ((int)asStack_1118[uVar9 * 4] <= (int)uVar30) {
          psVar15 = asStack_1118 + uVar9 * 4 + 2;
        }
        lVar10 = (long)asStack_1118[uVar9 * 4 + 1] -
                 (ulong)((int)uVar30 < (int)asStack_1118[uVar9 * 4]);
        uVar32 = *(uint *)(&_FSE_mask_lsb64_mtable + lVar10 * 8) & uVar30;
        uVar21 = (short)(uVar30 >> ((byte)lVar10 & 0x1f)) + *psVar15;
        uVar30 = (uint)uVar21;
        iVar36 = uVar26 + (int)lVar10;
        uVar9 = (ulong)*(byte *)(lVar6 + (long)(ulong)uVar28);
        lVar10 = uVar9 * 8 + -0x110a;
        if ((int)asStack_1118[uVar9 * 4] <= (int)uVar4) {
          lVar10 = uVar9 * 8 + -0x110c;
        }
        lVar11 = (long)asStack_1118[uVar9 * 4 + 1] -
                 (ulong)((int)uVar4 < (int)asStack_1118[uVar9 * 4]);
        uVar14 = *(uint *)(&_FSE_mask_lsb64_mtable + lVar11 * 8) & uVar4;
        iVar3 = iVar36 + (int)lVar11;
        uVar23 = (short)(uVar4 >> ((byte)lVar11 & 0x1f)) +
                 *(short *)(&stack0xfffffffffffffff8 + lVar10);
        uVar4 = (uint)uVar23;
        uVar9 = (ulong)*(byte *)(lVar6 + (ulong)(uVar28 - 1));
        psVar15 = asStack_1118 + uVar9 * 4 + 3;
        if ((int)asStack_1118[uVar9 * 4] <= (int)uVar13) {
          psVar15 = asStack_1118 + uVar9 * 4 + 2;
        }
        lVar10 = (long)asStack_1118[uVar9 * 4 + 1] -
                 (ulong)((int)uVar13 < (int)asStack_1118[uVar9 * 4]);
        uVar33 = *(uint *)(&_FSE_mask_lsb64_mtable + lVar10 * 8) & uVar13;
        iVar5 = iVar3 + (int)lVar10;
        uVar25 = (short)(uVar13 >> ((byte)lVar10 & 0x1f)) + *psVar15;
        uVar13 = (uint)uVar25;
        uVar9 = (ulong)*(byte *)(lVar6 + (ulong)(uVar28 - 2));
        psVar15 = asStack_1118 + uVar9 * 4 + 3;
        if ((int)asStack_1118[uVar9 * 4] <= (int)uVar29) {
          psVar15 = asStack_1118 + uVar9 * 4 + 2;
        }
        lVar6 = (long)asStack_1118[uVar9 * 4 + 1] -
                (ulong)((int)uVar29 < (int)asStack_1118[uVar9 * 4]);
        uVar35 = (ulong)uVar33 << ((byte)iVar3 & 0x3f) | (ulong)uVar14 << ((byte)iVar36 & 0x3f) |
                 (ulong)uVar32 << (sbyte)uVar26 | uVar35 |
                 (ulong)(*(uint *)(&_FSE_mask_lsb64_mtable + lVar6 * 8) & uVar29) <<
                 ((byte)iVar5 & 0x3f);
        uVar27 = (short)(uVar29 >> ((byte)lVar6 & 0x1f)) + *psVar15;
        uVar29 = (uint)uVar27;
        uVar26 = iVar5 + (int)lVar6;
        *puVar17 = uVar35;
        puVar17 = (ulong *)((long)puVar17 + (long)((int)uVar26 >> 3));
        uVar35 = uVar35 >> ((byte)uVar26 & 0x38);
        uVar26 = uVar26 & 7;
        uVar28 = uVar28 - 4;
      } while (uVar28 != 0xfffffffe);
    }
    local_1430 = uVar23;
    *puVar17 = uVar35;
    uVar35 = (ulong)(uVar26 + 7 >> 3);
    puVar1 = (undefined8 *)((long)puVar17 + uVar35);
    local_1438 = uVar26 - (uVar26 + 7 & 0xfffffff8);
    local_1440 = (int)puVar1 - *(int *)(local_1128 + 0x28);
    *(undefined8 **)(local_1128 + 0x28) = puVar1;
    puVar17 = (ulong *)((long)puVar17 + uVar35 + 8);
    local_1434 = uVar27;
    local_1432 = uVar25;
    local_142e = uVar21;
    if (puVar17 <= *(ulong **)(local_1128 + 0x38)) {
      plVar19 = (long *)(ulong)*(uint *)(local_1128 + 0x68);
      *puVar1 = 0;
      if (plVar19 == (long *)0x0) {
        uVar26 = 0;
        uVar31 = 0;
        uVar35 = 0;
        uVar9 = 0;
        uVar24 = 0;
      }
      else {
        uVar23 = 0;
        uVar34 = 0;
        uVar4 = 0;
        uVar31 = 0;
        uVar26 = 0;
        do {
          if (*(ulong **)(local_1128 + 0x38) < puVar17 + 2) goto LAB_0020231c;
          local_1140 = uVar31;
          uVar30 = *(uint *)(*(long *)(local_1128 + 0x88) + -4 + (long)plVar19 * 4);
          local_1120 = plVar19;
          uVar13 = 0;
          if (uVar30 < 0x3c) {
            uVar13 = uVar30;
          }
          uVar29 = (uVar30 - 0x3c >> 4) + 0x40;
          if (0x3bf < uVar30 - 0x3c) {
            uVar29 = 0;
          }
          uVar28 = uVar30 - 0x3fc >> 8 ^ 0x80;
          if (0x3bff < uVar30 - 0x3fc) {
            uVar28 = 0;
          }
          uVar32 = (uVar30 + 0xfc004 >> 0xc) + 0xc0;
          if (0x3bfff < uVar30 - 0x3ffc) {
            uVar32 = 0;
          }
          uVar35 = (ulong)(byte)(&_getDSymbolFromValue_sym)
                                [(uVar32 | uVar28 | uVar29 | uVar13) & 0xff];
          uVar13 = (uint)uVar23;
          lVar6 = uVar35 * 8 + -0x90a;
          if ((int)asStack_1118[uVar35 * 4 + 0x400] <= (int)uVar13) {
            lVar6 = uVar35 * 8 + -0x90c;
          }
          lVar10 = (long)asStack_1118[uVar35 * 4 + 0x401] -
                   (ulong)((int)uVar13 < (int)asStack_1118[uVar35 * 4 + 0x400]);
          iVar36 = (byte)(&_kDSymbolVBits)[uVar35] + uVar26 + (int)lVar10;
          uVar23 = (uVar23 >> ((byte)lVar10 & 0x1f)) + *(short *)(&stack0xfffffffffffffff8 + lVar6);
          lVar11 = (long)*(int *)(*(long *)(local_1128 + 0x80) + -4 + (long)plVar19 * 4);
          uVar9 = (ulong)(byte)(&_getMSymbolFromValue_sym)[lVar11];
          iVar3 = (uint)(byte)(&_kMSymbolVBits)[uVar9] + iVar36;
          uVar29 = (uint)uVar34;
          lVar6 = uVar9 * 8 + -0x70a;
          if ((int)asStack_1118[uVar9 * 4 + 0x500] <= (int)uVar29) {
            lVar6 = uVar9 * 8 + -0x70c;
          }
          lVar12 = (long)asStack_1118[uVar9 * 4 + 0x501] -
                   (ulong)((int)uVar29 < (int)asStack_1118[uVar9 * 4 + 0x500]);
          iVar22 = iVar3 + (int)lVar12;
          uVar34 = (uVar34 >> ((byte)lVar12 & 0x1f)) + *(short *)(&stack0xfffffffffffffff8 + lVar6);
          lVar6 = (long)*(int *)(*(long *)(local_1128 + 0x78) + -4 + (long)plVar19 * 4);
          uVar24 = (ulong)(byte)(&_getLSymbolFromValue_sym)[lVar6];
          iVar5 = (uint)(byte)(&_kLSymbolVBits)[uVar24] + iVar22;
          local_1150 = puVar17;
          psVar15 = asStack_1118 + uVar24 * 4 + 0x553;
          if ((int)asStack_1118[uVar24 * 4 + 0x550] <= (int)uVar4) {
            psVar15 = asStack_1118 + uVar24 * 4 + 0x552;
          }
          lVar18 = (long)asStack_1118[uVar24 * 4 + 0x551] -
                   (ulong)((int)uVar4 < (int)asStack_1118[uVar24 * 4 + 0x550]);
          uVar31 = (long)(int)uVar30 - (long)(int)(&_kDSymbolVBase)[uVar35] << (sbyte)uVar26 |
                   uVar31 | lVar11 - (int)(&_kMSymbolVBase)[uVar9] << ((byte)iVar36 & 0x3f) |
                   (ulong)(*(uint *)(&_FSE_mask_lsb64_mtable + lVar12 * 8) & uVar29) <<
                   ((byte)iVar3 & 0x3f) |
                   lVar6 - (int)(&_kLSymbolVBase)[uVar24] << ((byte)iVar22 & 0x3f) |
                   (ulong)(*(uint *)(&_FSE_mask_lsb64_mtable + lVar18 * 8) & uVar4) <<
                   ((byte)iVar5 & 0x3f) |
                   (ulong)(*(uint *)(&_FSE_mask_lsb64_mtable + lVar10 * 8) & uVar13) <<
                   ((byte)((byte)(&_kDSymbolVBits)[uVar35] + uVar26) & 0x3f);
          uVar4 = (uint)(ushort)((short)(uVar4 >> ((byte)lVar18 & 0x1f)) + *psVar15);
          uVar26 = iVar5 + (int)lVar18;
          *puVar17 = uVar31;
          uVar31 = uVar31 >> ((byte)uVar26 & 0x38);
          puVar17 = (ulong *)((long)((int)uVar26 >> 3) + (long)puVar17);
          uVar26 = uVar26 & 7;
          plVar19 = (long *)((long)plVar19 + -1);
        } while (plVar19 != (long *)0x0);
        uVar35 = (ulong)uVar4 << 0x20;
        uVar9 = (ulong)uVar34 << 0x2a;
        uVar24 = (ulong)uVar23 << 0x34;
      }
      uVar7 = 0;
      *puVar17 = uVar31;
      lVar6 = (ulong)(uVar26 + 7 >> 3) + (long)puVar17;
      iVar36 = *(int *)(local_1128 + 0x28);
      *(long *)(local_1128 + 0x28) = lVar6;
      *(undefined8 *)(local_1128 + 0x68) = 0;
      *local_1138 = 0x32787662;
      local_1138[1] = local_1450;
      *(ulong *)(local_1138 + 2) =
           (ulong)(local_1438 + 7) << 0x3c |
           (ulong)local_1444 << 0x28 | (ulong)local_1440 << 0x14 | (ulong)local_1448;
      *(ulong *)(local_1138 + 4) =
           (ulong)((uVar26 - (uVar26 + 7 & 0xfffffff8)) + 7) << 0x3c |
           (ulong)uVar21 << 0x1e | (ulong)local_1430 << 0x14 | (ulong)uVar25 << 10 |
           (ulong)(uint)((int)lVar6 - iVar36) << 0x28 | (ulong)uVar27;
      *(ulong *)(local_1138 + 6) = uVar35 | *(ulong *)(local_1138 + 6) | uVar9 | uVar24;
      goto LAB_00202365;
    }
  }
LAB_0020231c:
  uVar26 = *(uint *)(param_1 + 0x68);
  if (uVar26 != 0) {
    lVar6 = *(long *)(param_1 + 0x88);
    uVar35 = 0;
    iVar36 = 0;
    do {
      iVar3 = *(int *)(lVar6 + uVar35 * 4);
      if (iVar3 == 0) {
        *(int *)(lVar6 + uVar35 * 4) = iVar36;
        uVar26 = *(uint *)(param_1 + 0x68);
        iVar3 = iVar36;
      }
      uVar35 = uVar35 + 1;
      iVar36 = iVar3;
    } while (uVar35 < uVar26);
  }
  *(uint *)(param_1 + 0x6c) = local_112c;
  *(undefined8 *)(param_1 + 0x28) = local_1148;
  uVar7 = 0xfffffffe;
LAB_00202365:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

