// rea decompile_all
// name: _DecideOverLiteralContextModeling
// address: 0x1cface
// body: available
// range: 0x1cface-0x1d073c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d0738 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void _DecideOverLiteralContextModeling
               (long param_1,ulong param_2,ulong param_3,ulong param_4,int param_5,ulong param_6,
               undefined8 *param_7,undefined8 *param_8)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  undefined *puVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double local_7e0;
  double local_7b8;
  undefined1 local_778 [16];
  double local_760;
  uint local_748;
  undefined1 auStack_744 [4];
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined4 local_728;
  int aiStack_e0 [42];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_3 < 0x40 || param_5 < 5) goto LAB_001d0716;
  param_3 = param_3 + param_2;
  if (param_6 < 0x100000) {
LAB_001cffbe:
    uVar17 = param_2 + 0x40;
    local_738 = 0;
    uStack_730 = 0;
    _local_748 = 0;
    uStack_740 = 0;
    local_728 = 0;
    if (uVar17 <= param_3) {
      lVar7 = uVar17 - param_2;
      do {
        if (param_2 + 1 < uVar17) {
          iVar14 = *(int *)(&_DecideOverLiteralContextModeling_lut +
                           (ulong)(*(byte *)(param_1 + (param_2 & param_4)) >> 6) * 4);
          lVar13 = 1;
          do {
            iVar5 = iVar14 * 3;
            iVar14 = *(int *)(&_DecideOverLiteralContextModeling_lut +
                             (ulong)(*(byte *)(param_1 + (param_2 + lVar13 & param_4)) >> 6) * 4);
            (&local_748)[iVar5 + iVar14] = (&local_748)[iVar5 + iVar14] + 1;
            lVar13 = lVar13 + 1;
          } while (lVar7 != lVar13);
        }
        param_2 = param_2 + 0x1000;
        uVar17 = uVar17 + 0x1000;
      } while (uVar17 <= param_3);
    }
    puVar9 = (uint *)(aiStack_e0 + 0x27);
    uVar17 = 0;
    aiStack_e0[0x26] = 0;
    aiStack_e0[0x27] = 0;
    aiStack_e0[0x28] = 0;
    aiStack_e0[10] = 0;
    aiStack_e0[0xb] = 0;
    aiStack_e0[6] = 0;
    aiStack_e0[7] = 0;
    aiStack_e0[8] = 0;
    aiStack_e0[9] = 0;
    do {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar17;
      uVar6 = (&local_748)[uVar17];
      piVar1 = (int *)((long)aiStack_e0 +
                      uVar17 * 4 +
                      (SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) * 2 & 0xfffffffffffffffcU) *
                      -3 + 0x98);
      *piVar1 = *piVar1 + uVar6;
      uVar18 = uVar17;
      if (5 < uVar17) {
        uVar18 = uVar17 - 6;
      }
      aiStack_e0[uVar18 + 6] = aiStack_e0[uVar18 + 6] + uVar6;
      uVar17 = uVar17 + 1;
    } while (uVar17 != 9);
    bVar11 = true;
    puVar8 = (uint *)(aiStack_e0 + 0x26);
    dVar26 = 0.0;
    lVar7 = 0;
    while( true ) {
      uVar17 = (ulong)*puVar8;
      if (uVar17 < 0x100) {
        dVar20 = (double)(&_kBrotliLog2Table)[uVar17];
      }
      else {
        dVar20 = (double)_log2(SUB84((double)uVar17,0));
      }
      uVar18 = lVar7 + uVar17;
      dVar26 = dVar26 - (double)uVar17 * dVar20;
      if (!bVar11) break;
      uVar17 = (ulong)*puVar9;
      if (uVar17 < 0x100) {
        dVar20 = (double)(&_kBrotliLog2Table)[uVar17];
      }
      else {
        dVar20 = (double)_log2(SUB84((double)uVar17,0));
      }
      lVar7 = uVar18 + uVar17;
      dVar26 = dVar26 - (double)uVar17 * dVar20;
      bVar11 = false;
      puVar8 = (uint *)(aiStack_e0 + 0x28);
      puVar9 = (uint *)(aiStack_e0 + 0x29);
    }
    if (uVar18 != 0) {
      auVar29._8_4_ = (int)(uVar18 >> 0x20);
      auVar29._0_8_ = uVar18;
      auVar29._12_4_ = 0x45300000;
      dVar20 = ((double)CONCAT44(0x43300000,(int)uVar18) - 4503599627370496.0) +
               (auVar29._8_8_ - 1.9342813113834067e+25);
      if (uVar18 < 0x100) {
        dVar21 = (double)(&_kBrotliLog2Table)[uVar18];
      }
      else {
        dVar21 = (double)_log2(SUB84(dVar20,0));
      }
      dVar26 = dVar26 + dVar20 * dVar21;
    }
    bVar11 = true;
    puVar9 = (uint *)(aiStack_e0 + 6);
    local_778 = ZEXT816(0);
    lVar7 = 0;
    puVar8 = (uint *)(aiStack_e0 + 7);
    while( true ) {
      uVar17 = (ulong)*puVar9;
      if (uVar17 < 0x100) {
        dVar20 = (double)(&_kBrotliLog2Table)[uVar17];
      }
      else {
        dVar20 = (double)_log2(SUB84((double)uVar17,0));
      }
      uVar18 = lVar7 + uVar17;
      uVar25 = local_778._12_4_;
      dVar20 = local_778._0_8_ - (double)uVar17 * dVar20;
      if (!bVar11) break;
      uVar17 = (ulong)*puVar8;
      if (uVar17 < 0x100) {
        dVar21 = (double)(&_kBrotliLog2Table)[uVar17];
      }
      else {
        dVar21 = (double)_log2(SUB84((double)uVar17,0));
      }
      lVar7 = uVar18 + uVar17;
      local_778._8_4_ = local_778._8_4_;
      local_778._0_8_ = dVar20 - (double)uVar17 * dVar21;
      local_778._12_4_ = uVar25;
      bVar11 = false;
      puVar9 = (uint *)(aiStack_e0 + 8);
      puVar8 = (uint *)(aiStack_e0 + 9);
    }
    if (uVar18 != 0) {
      auVar28._8_4_ = (int)(uVar18 >> 0x20);
      auVar28._0_8_ = uVar18;
      auVar28._12_4_ = 0x45300000;
      dVar21 = ((double)CONCAT44(0x43300000,(int)uVar18) - 4503599627370496.0) +
               (auVar28._8_8_ - 1.9342813113834067e+25);
      if (uVar18 < 0x100) {
        dVar22 = (double)(&_kBrotliLog2Table)[uVar18];
      }
      else {
        dVar22 = (double)_log2(SUB84(dVar21,0));
      }
      dVar20 = dVar20 + dVar21 * dVar22;
    }
    uVar17 = 0xc;
    dVar21 = 0.0;
    lVar7 = 0;
    while( true ) {
      uVar18 = (ulong)*(uint *)((long)aiStack_e0 + uVar17 + 0x18);
      if (uVar18 < 0x100) {
        dVar22 = (double)(&_kBrotliLog2Table)[uVar18];
      }
      else {
        dVar22 = (double)_log2(SUB84((double)uVar18,0));
      }
      uVar12 = lVar7 + uVar18;
      dVar21 = dVar21 - (double)uVar18 * dVar22;
      if (0x13 < uVar17) break;
      uVar18 = (ulong)*(uint *)((long)aiStack_e0 + uVar17 + 0x1c);
      if (uVar18 < 0x100) {
        dVar22 = (double)(&_kBrotliLog2Table)[uVar18];
      }
      else {
        dVar22 = (double)_log2(SUB84((double)uVar18,0));
      }
      lVar7 = uVar12 + uVar18;
      dVar21 = dVar21 - (double)uVar18 * dVar22;
      uVar17 = uVar17 + 8;
    }
    if (uVar12 != 0) {
      auVar30._8_4_ = (int)(uVar12 >> 0x20);
      auVar30._0_8_ = uVar12;
      auVar30._12_4_ = 0x45300000;
      dVar22 = ((double)CONCAT44(0x43300000,(int)uVar12) - 4503599627370496.0) +
               (auVar30._8_8_ - 1.9342813113834067e+25);
      if (uVar12 < 0x100) {
        dVar23 = (double)(&_kBrotliLog2Table)[uVar12];
      }
      else {
        dVar23 = (double)_log2(SUB84(dVar22,0));
      }
      dVar21 = dVar21 + dVar22 * dVar23;
    }
    local_760 = 0.0;
    lVar7 = 0;
    do {
      lVar13 = lVar7 * 0xc + -0x748;
      bVar11 = true;
      lVar19 = 0;
      dVar22 = 0.0;
      uVar17 = 0;
      while( true ) {
        uVar18 = (ulong)*(uint *)((long)&local_748 + uVar17 + lVar13 + 0x748);
        if (uVar18 < 0x100) {
          dVar23 = (double)(&_kBrotliLog2Table)[uVar18];
        }
        else {
          dVar23 = (double)_log2(SUB84((double)uVar18,0));
        }
        uVar12 = lVar19 + uVar18;
        dVar22 = dVar22 - (double)uVar18 * dVar23;
        if (!bVar11) break;
        uVar17 = (ulong)*(uint *)((long)&local_748 + (uVar17 | 4) + lVar13 + 0x748);
        if (uVar17 < 0x100) {
          dVar23 = (double)(&_kBrotliLog2Table)[uVar17];
        }
        else {
          dVar23 = (double)_log2(SUB84((double)uVar17,0));
        }
        lVar19 = uVar12 + uVar17;
        dVar22 = dVar22 - (double)uVar17 * dVar23;
        uVar17 = 8;
        bVar11 = false;
      }
      if (uVar12 != 0) {
        auVar31._8_4_ = (int)(uVar12 >> 0x20);
        auVar31._0_8_ = uVar12;
        auVar31._12_4_ = 0x45300000;
        dVar23 = ((double)CONCAT44(0x43300000,(int)uVar12) - 4503599627370496.0) +
                 (auVar31._8_8_ - 1.9342813113834067e+25);
        if (uVar12 < 0x100) {
          dVar24 = (double)(&_kBrotliLog2Table)[uVar12];
        }
        else {
          dVar24 = (double)_log2(SUB84(dVar23,0));
        }
        dVar22 = dVar22 + dVar23 * dVar24;
      }
      local_760 = local_760 + dVar22;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    dVar22 = 1.0 / (double)(uint)(aiStack_e0[0x27] + aiStack_e0[0x26] + aiStack_e0[0x28]);
    dVar26 = dVar26 * dVar22;
    dVar20 = (dVar20 + dVar21) * dVar22;
    if (param_5 < 7) {
      local_760 = dVar26 * 10.0;
    }
    else {
      local_760 = local_760 * dVar22;
    }
    if ((dVar26 - dVar20 < 0.2) && (dVar26 - local_760 < 0.2)) {
      *param_7 = 1;
      goto LAB_001d0716;
    }
    if (0.02 <= dVar20 - local_760) {
      *param_7 = 3;
      puVar10 = &_ChooseContextMap_kStaticContextMapContinuation;
    }
    else {
      *param_7 = 2;
      puVar10 = &_ChooseContextMap_kStaticContextMapSimpleUTF8;
    }
  }
  else {
    aiStack_e0[0x22] = 0;
    aiStack_e0[0x23] = 0;
    aiStack_e0[0x24] = 0;
    aiStack_e0[0x25] = 0;
    aiStack_e0[0x1e] = 0;
    aiStack_e0[0x1f] = 0;
    aiStack_e0[0x20] = 0;
    aiStack_e0[0x21] = 0;
    aiStack_e0[0x1a] = 0;
    aiStack_e0[0x1b] = 0;
    aiStack_e0[0x1c] = 0;
    aiStack_e0[0x1d] = 0;
    aiStack_e0[0x16] = 0;
    aiStack_e0[0x17] = 0;
    aiStack_e0[0x18] = 0;
    aiStack_e0[0x19] = 0;
    aiStack_e0[0x12] = 0;
    aiStack_e0[0x13] = 0;
    aiStack_e0[0x14] = 0;
    aiStack_e0[0x15] = 0;
    aiStack_e0[0xe] = 0;
    aiStack_e0[0xf] = 0;
    aiStack_e0[0x10] = 0;
    aiStack_e0[0x11] = 0;
    aiStack_e0[10] = 0;
    aiStack_e0[0xb] = 0;
    aiStack_e0[0xc] = 0;
    aiStack_e0[0xd] = 0;
    aiStack_e0[6] = 0;
    aiStack_e0[7] = 0;
    aiStack_e0[8] = 0;
    aiStack_e0[9] = 0;
    ___bzero(&local_748,0x680);
    uVar17 = param_2 + 0x40;
    local_7b8 = 0.0;
    local_7e0 = 0.0;
    if (uVar17 <= param_3) {
      uVar6 = 0;
      uVar18 = param_2;
      do {
        if (uVar18 + 2 < uVar17) {
          bVar2 = *(byte *)(param_1 + (uVar18 + 1 & param_4));
          uVar12 = (ulong)*(byte *)(param_1 + (uVar18 & param_4));
          lVar7 = 2;
          do {
            uVar15 = (uint)bVar2;
            bVar2 = *(byte *)(param_1 + (uVar18 + lVar7 & param_4));
            bVar3 = (&_ShouldUseComplexStaticContextMap_kStaticContextMapComplexUTF8)
                    [(ulong)(byte)((&DAT_003a2a00)[uVar12] | (&DAT_003a2900)[uVar15]) * 4];
            aiStack_e0[(ulong)(bVar2 >> 3) + 6] = aiStack_e0[(ulong)(bVar2 >> 3) + 6] + 1;
            (&local_748)[(ulong)bVar3 * 0x20 + (ulong)(bVar2 >> 3)] =
                 (&local_748)[(ulong)bVar3 * 0x20 + (ulong)(bVar2 >> 3)] + 1;
            uVar12 = (ulong)uVar15;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x40);
          uVar6 = uVar6 + 0x3e;
        }
        uVar18 = uVar18 + 0x1000;
        uVar17 = uVar17 + 0x1000;
      } while (uVar17 <= param_3);
      local_7e0 = (double)uVar6;
    }
    uVar18 = 0xfffffffffffffff8;
    uVar17 = 0;
    do {
      uVar12 = (ulong)*(uint *)((long)aiStack_e0 + uVar18 + 0x20);
      if (uVar12 < 0x100) {
        dVar26 = (double)(&_kBrotliLog2Table)[uVar12];
      }
      else {
        dVar26 = (double)_log2();
      }
      uVar16 = (ulong)*(uint *)((long)aiStack_e0 + uVar18 + 0x24);
      if (uVar16 < 0x100) {
        dVar20 = (double)(&_kBrotliLog2Table)[uVar16];
      }
      else {
        dVar20 = (double)_log2(SUB84((double)uVar16,0));
      }
      uVar17 = uVar17 + uVar12 + uVar16;
      local_7b8 = (local_7b8 - (double)uVar12 * dVar26) - (double)uVar16 * dVar20;
      uVar18 = uVar18 + 8;
    } while (uVar18 < 0x78);
    if (uVar17 != 0) {
      auVar27._8_4_ = (int)(uVar17 >> 0x20);
      auVar27._0_8_ = uVar17;
      auVar27._12_4_ = 0x45300000;
      dVar26 = ((double)CONCAT44(0x43300000,(int)uVar17) - 4503599627370496.0) +
               (auVar27._8_8_ - 1.9342813113834067e+25);
      if (uVar17 < 0x100) {
        dVar20 = (double)(&_kBrotliLog2Table)[uVar17];
      }
      else {
        dVar20 = (double)_log2(SUB84(dVar26,0));
      }
      local_7b8 = local_7b8 + dVar26 * dVar20;
    }
    dVar26 = 0.0;
    lVar7 = (long)auStack_744;
    lVar13 = 0;
    do {
      uVar18 = 0xfffffffffffffff8;
      dVar20 = 0.0;
      uVar17 = 0;
      do {
        uVar12 = (ulong)*(uint *)(lVar7 + uVar18 + 4);
        if (uVar12 < 0x100) {
          dVar21 = (double)(&_kBrotliLog2Table)[uVar12];
        }
        else {
          dVar21 = (double)_log2();
        }
        uVar16 = (ulong)*(uint *)(lVar7 + uVar18 + 8);
        if (uVar16 < 0x100) {
          dVar22 = (double)(&_kBrotliLog2Table)[uVar16];
        }
        else {
          dVar22 = (double)_log2(SUB84((double)uVar16,0));
        }
        uVar17 = uVar17 + uVar12 + uVar16;
        dVar20 = (dVar20 - (double)uVar12 * dVar21) - (double)uVar16 * dVar22;
        uVar18 = uVar18 + 8;
      } while (uVar18 < 0x78);
      if (uVar17 != 0) {
        auVar32._8_4_ = (int)(uVar17 >> 0x20);
        auVar32._0_8_ = uVar17;
        auVar32._12_4_ = 0x45300000;
        dVar21 = ((double)CONCAT44(0x43300000,(int)uVar17) - 4503599627370496.0) +
                 (auVar32._8_8_ - 1.9342813113834067e+25);
        if (uVar17 < 0x100) {
          dVar22 = (double)(&_kBrotliLog2Table)[uVar17];
        }
        else {
          dVar22 = (double)_log2(SUB84(dVar21,0));
        }
        dVar20 = dVar20 + dVar21 * dVar22;
      }
      dVar26 = dVar26 + dVar20;
      lVar13 = lVar13 + 1;
      lVar7 = lVar7 + 0x80;
    } while (lVar13 != 0xd);
    dVar26 = dVar26 * (1.0 / local_7e0);
    if ((3.0 < dVar26) || ((1.0 / local_7e0) * local_7b8 - dVar26 < 0.2)) goto LAB_001cffbe;
    *param_7 = 0xd;
    puVar10 = &_ShouldUseComplexStaticContextMap_kStaticContextMapComplexUTF8;
  }
  *param_8 = puVar10;
LAB_001d0716:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

