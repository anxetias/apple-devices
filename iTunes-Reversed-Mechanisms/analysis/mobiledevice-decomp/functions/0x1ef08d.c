// rea decompile_all
// name: _BlockSplitterFinishBlockDistance
// address: 0x1ef08d
// body: available
// range: 0x1ef08d-0x1ef919 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ef915 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BlockSplitterFinishBlockDistance(ulong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double *pdVar17;
  double *pdVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  ulong local_1218;
  uint *local_1210;
  ulong local_1208;
  ulong *local_1200;
  ulong local_11f8 [2];
  double *local_11e8;
  double dStack_11e0;
  double local_11d0;
  double local_11c8 [2];
  double *local_11b8;
  double dStack_11b0;
  int local_119c;
  ulong local_1198;
  ulong local_1190;
  uint local_1184;
  uint *local_1180;
  double *local_1178;
  double dStack_1170;
  ulong *local_1168;
  double *local_1160;
  uint local_1158 [548];
  uint local_8c8 [548];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  puVar11 = (ulong *)param_1[4];
  uVar14 = param_1[1];
  if (param_1[1] < param_1[8]) {
    uVar14 = param_1[8];
  }
  puVar10 = (uint *)param_1[5];
  uVar5 = param_1[3];
  param_1[8] = uVar14;
  local_1180 = puVar10;
  local_1168 = param_1;
  if (uVar5 == 0) {
    *(int *)puVar11[3] = (int)uVar14;
    *(undefined1 *)puVar11[2] = 0;
    puVar1 = puVar10 + *param_1;
    pdVar17 = (double *)0x0;
    uVar14 = 0;
    if ((*param_1 & 1) != 0) goto LAB_001ef1ba;
    while (param_1 = local_1168, puVar3 = local_1180, puVar10 < puVar1) {
      uVar5 = (ulong)*puVar10;
      puVar10 = puVar10 + 1;
      uVar14 = uVar14 + uVar5;
      pdVar18 = (double *)(double)uVar5;
      if (uVar5 < 0x100) {
        dVar15 = (double)(&_kBrotliLog2Table)[uVar5];
      }
      else {
        local_1178 = pdVar18;
        local_1160 = pdVar17;
        dVar15 = (double)_log2(pdVar18);
        pdVar17 = local_1160;
        pdVar18 = local_1178;
      }
      pdVar17 = (double *)((double)pdVar17 - (double)pdVar18 * dVar15);
LAB_001ef1ba:
      uVar5 = (ulong)*puVar10;
      puVar10 = puVar10 + 1;
      uVar14 = uVar14 + uVar5;
      pdVar18 = (double *)(double)uVar5;
      if (uVar5 < 0x100) {
        dVar15 = (double)(&_kBrotliLog2Table)[uVar5];
      }
      else {
        local_1178 = pdVar18;
        local_1160 = pdVar17;
        dVar15 = (double)_log2(pdVar18);
        pdVar17 = local_1160;
        pdVar18 = local_1178;
      }
      pdVar17 = (double *)((double)pdVar17 - (double)pdVar18 * dVar15);
    }
    auVar19._8_4_ = (int)(uVar14 >> 0x20);
    auVar19._0_8_ = uVar14;
    auVar19._12_4_ = 0x45300000;
    dVar15 = (double)CONCAT44(0x43300000,(int)uVar14) - 4503599627370496.0;
    dVar21 = auVar19._8_8_ - 1.9342813113834067e+25;
    pdVar18 = (double *)(dVar15 + dVar21);
    if (uVar14 != 0) {
      if (uVar14 < 0x100) {
        dVar15 = (double)(&_kBrotliLog2Table)[uVar14];
      }
      else {
        local_1178 = pdVar18;
        dStack_1170 = dVar15 + dVar21;
        local_1160 = pdVar17;
        dVar15 = (double)_log2(pdVar18);
        pdVar17 = local_1160;
        pdVar18 = local_1178;
      }
      pdVar17 = (double *)((double)pdVar17 + dVar15 * (double)pdVar18);
    }
    if ((double)pdVar18 <= (double)pdVar17) {
      pdVar18 = pdVar17;
    }
    param_1[0xc] = (ulong)pdVar18;
    param_1[0xd] = (ulong)pdVar18;
    param_1[3] = param_1[3] + 1;
    *puVar11 = *puVar11 + 1;
    uVar14 = param_1[9] + 1;
    param_1[9] = uVar14;
    if (uVar14 < *(ulong *)param_1[6]) {
      ___bzero(puVar3 + uVar14 * 0x224,0x888);
      puVar3 = puVar3 + uVar14 * 0x224 + 0x222;
      puVar3[0] = 0;
      puVar3[1] = 0x7ff00000;
    }
    param_1[8] = 0;
  }
  else if (uVar14 != 0) {
    puVar10 = puVar10 + param_1[9] * 0x224;
    local_1208 = *param_1;
    puVar1 = puVar10 + local_1208;
    pdVar17 = (double *)0x0;
    uVar9 = 0;
    local_1210 = puVar10;
    local_1198 = uVar14;
    local_1190 = uVar5;
    if ((local_1208 & 1) == 0) goto LAB_001ef2fc;
    while( true ) {
      uVar14 = (ulong)*puVar10;
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 + uVar14;
      pdVar18 = (double *)(double)uVar14;
      if (uVar14 < 0x100) {
        dVar15 = (double)(&_kBrotliLog2Table)[uVar14];
      }
      else {
        local_1178 = pdVar18;
        local_1160 = pdVar17;
        dVar15 = (double)_log2(pdVar18);
        pdVar17 = local_1160;
        pdVar18 = local_1178;
      }
      pdVar17 = (double *)((double)pdVar17 - (double)pdVar18 * dVar15);
LAB_001ef2fc:
      param_1 = local_1168;
      if (puVar1 <= puVar10) break;
      uVar14 = (ulong)*puVar10;
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 + uVar14;
      pdVar18 = (double *)(double)uVar14;
      if (uVar14 < 0x100) {
        dVar15 = (double)(&_kBrotliLog2Table)[uVar14];
      }
      else {
        local_1178 = pdVar18;
        local_1160 = pdVar17;
        dVar15 = (double)_log2(pdVar18);
        pdVar17 = local_1160;
        pdVar18 = local_1178;
      }
      pdVar17 = (double *)((double)pdVar17 - (double)pdVar18 * dVar15);
    }
    auVar16._8_4_ = (int)(uVar9 >> 0x20);
    auVar16._0_8_ = uVar9;
    auVar16._12_4_ = 0x45300000;
    dStack_11e0 = (double)CONCAT44(0x43300000,(int)uVar9) - 4503599627370496.0;
    dVar15 = auVar16._8_8_ - 1.9342813113834067e+25;
    local_11e8 = (double *)(dStack_11e0 + dVar15);
    dStack_11e0 = dStack_11e0 + dVar15;
    local_1200 = puVar11;
    local_119c = param_2;
    if (uVar9 != 0) {
      if (uVar9 < 0x100) {
        dVar15 = (double)(&_kBrotliLog2Table)[uVar9];
      }
      else {
        local_1160 = pdVar17;
        dVar15 = (double)_log2();
        pdVar17 = local_1160;
      }
      pdVar17 = (double *)((double)pdVar17 + dVar15 * (double)local_11e8);
    }
    if ((double)local_11e8 <= (double)pdVar17) {
      local_11e8 = pdVar17;
    }
    puVar10 = local_1158;
    puVar12 = local_11f8;
    local_1178 = local_11c8;
    uVar6 = CONCAT71((int7)((ulong)local_1178 >> 8),1);
    lVar13 = 0;
    do {
      local_1184 = (uint)uVar6;
      uVar14 = param_1[lVar13 + 10];
      _memcpy(puVar10,local_1210,0x890);
      *(long *)(puVar10 + 0x220) =
           *(long *)(puVar10 + 0x220) + *(long *)(local_1180 + uVar14 * 0x224 + 0x220);
      lVar7 = 0;
      do {
        puVar10[lVar7] = puVar10[lVar7] + local_1180[uVar14 * 0x224 + lVar7];
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x220);
      puVar1 = puVar10 + local_1208;
      pdVar17 = (double *)0x0;
      uVar14 = 0;
      if ((local_1208 & 1) != 0) goto LAB_001ef587;
      while (uVar4 = local_1184, puVar10 < puVar1) {
        uVar5 = (ulong)*puVar10;
        puVar10 = puVar10 + 1;
        uVar14 = uVar14 + uVar5;
        pdVar18 = (double *)(double)uVar5;
        if (uVar5 < 0x100) {
          dVar15 = (double)(&_kBrotliLog2Table)[uVar5];
        }
        else {
          local_11b8 = pdVar18;
          local_1160 = pdVar17;
          dVar15 = (double)_log2(pdVar18);
          pdVar17 = local_1160;
          pdVar18 = local_11b8;
        }
        pdVar17 = (double *)((double)pdVar17 - (double)pdVar18 * dVar15);
LAB_001ef587:
        uVar5 = (ulong)*puVar10;
        puVar10 = puVar10 + 1;
        uVar14 = uVar14 + uVar5;
        pdVar18 = (double *)(double)uVar5;
        if (uVar5 < 0x100) {
          dVar15 = (double)(&_kBrotliLog2Table)[uVar5];
        }
        else {
          local_11b8 = pdVar18;
          local_1160 = pdVar17;
          dVar15 = (double)_log2(pdVar18);
          pdVar17 = local_1160;
          pdVar18 = local_11b8;
        }
        pdVar17 = (double *)((double)pdVar17 - (double)pdVar18 * dVar15);
      }
      auVar20._8_4_ = (int)(uVar14 >> 0x20);
      auVar20._0_8_ = uVar14;
      auVar20._12_4_ = 0x45300000;
      dVar15 = (double)CONCAT44(0x43300000,(int)uVar14) - 4503599627370496.0;
      dVar21 = auVar20._8_8_ - 1.9342813113834067e+25;
      pdVar18 = (double *)(dVar15 + dVar21);
      if (uVar14 != 0) {
        if (uVar14 < 0x100) {
          dVar15 = (double)(&_kBrotliLog2Table)[uVar14];
        }
        else {
          local_11b8 = pdVar18;
          dStack_11b0 = dVar15 + dVar21;
          local_1160 = pdVar17;
          dVar15 = (double)_log2(pdVar18);
          pdVar17 = local_1160;
          pdVar18 = local_11b8;
        }
        pdVar17 = (double *)((double)pdVar17 + dVar15 * (double)pdVar18);
      }
      param_1 = local_1168;
      if ((double)pdVar18 <= (double)pdVar17) {
        pdVar18 = pdVar17;
      }
      *puVar12 = (ulong)pdVar18;
      puVar11 = local_1200;
      *local_1178 = ((double)pdVar18 - (double)local_11e8) - (double)local_1168[lVar13 + 0xc];
      puVar1 = local_1180;
      param_2 = local_119c;
      lVar13 = 1;
      local_1178 = &local_11d0;
      puVar12 = &local_1218;
      puVar10 = local_8c8;
      uVar6 = 0;
    } while ((uVar4 & 1) != 0);
    uVar14 = *local_1200;
    iVar8 = (int)local_1198;
    if (((0xff < uVar14) || (local_11c8[0] <= (double)param_1[2])) ||
       (local_11d0 <= (double)param_1[2])) {
      if (local_11c8[0] + -20.0 <= local_11d0) {
        piVar2 = (int *)((local_1200[3] - 4) + local_1190 * 4);
        *piVar2 = *piVar2 + iVar8;
        _memcpy(local_1180 + param_1[10] * 0x224,local_1158,0x890);
        param_1[0xc] = local_11f8[0];
        if (*puVar11 == 1) {
          param_1[0xd] = local_11f8[0];
        }
        param_1[8] = 0;
        uVar14 = param_1[9];
        ___bzero(puVar1 + uVar14 * 0x224,0x888);
        (puVar1 + uVar14 * 0x224 + 0x222)[0] = 0;
        (puVar1 + uVar14 * 0x224 + 0x222)[1] = 0x7ff00000;
        uVar14 = param_1[0xe];
        param_1[0xe] = uVar14 + 1;
        if (1 < uVar14 + 1) {
          param_1[7] = param_1[7] + param_1[1];
        }
        goto LAB_001ef8da;
      }
      *(int *)(local_1200[3] + local_1190 * 4) = iVar8;
      *(undefined1 *)(local_1200[2] + local_1190) =
           *(undefined1 *)((local_1200[2] - 2) + local_1190);
      uVar14 = param_1[10];
      uVar5 = param_1[0xb];
      param_1[10] = uVar5;
      param_1[0xb] = uVar14;
      _memcpy(local_1180 + uVar5 * 0x224,local_8c8,0x890);
      param_1[0xd] = param_1[0xc];
      param_1[0xc] = local_1218;
      param_1[3] = param_1[3] + 1;
      param_1[8] = 0;
      uVar14 = param_1[9];
      ___bzero(puVar1 + uVar14 * 0x224,0x888);
      (puVar1 + uVar14 * 0x224 + 0x222)[0] = 0;
      (puVar1 + uVar14 * 0x224 + 0x222)[1] = 0x7ff00000;
    }
    else {
      *(int *)(local_1200[3] + local_1190 * 4) = iVar8;
      *(char *)(local_1200[2] + local_1190) = (char)uVar14;
      param_1[0xb] = param_1[10];
      param_1[10] = (ulong)(byte)*local_1200;
      param_1[0xd] = param_1[0xc];
      param_1[0xc] = (ulong)local_11e8;
      param_1[3] = param_1[3] + 1;
      *local_1200 = *local_1200 + 1;
      uVar14 = param_1[9] + 1;
      param_1[9] = uVar14;
      if (uVar14 < *(ulong *)param_1[6]) {
        ___bzero(local_1180 + uVar14 * 0x224,0x888);
        (puVar1 + uVar14 * 0x224 + 0x222)[0] = 0;
        (puVar1 + uVar14 * 0x224 + 0x222)[1] = 0x7ff00000;
      }
      param_1[8] = 0;
    }
    param_1[0xe] = 0;
    param_1[7] = param_1[1];
  }
LAB_001ef8da:
  if (param_2 != 0) {
    *(ulong *)param_1[6] = *puVar11;
    puVar11[1] = param_1[3];
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

