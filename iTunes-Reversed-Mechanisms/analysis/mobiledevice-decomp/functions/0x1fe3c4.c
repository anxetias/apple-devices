// rea decompile_all
// name: _BrotliPopulationCostCommand
// address: 0x1fe3c4
// body: available
// range: 0x1fe3c4-0x1fe8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fe8ef to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double _BrotliPopulationCostCommand(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined4 uVar17;
  undefined1 auVar16 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double local_e8;
  uint local_b8 [20];
  long local_68 [6];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar9 = *(ulong *)(param_1 + 0xb00);
  dVar20 = 12.0;
  if (uVar9 == 0) goto switchD_001fe440_caseD_1;
  iVar13 = 0;
  lVar8 = 0;
  do {
    if (*(int *)(param_1 + lVar8 * 4) != 0) {
      local_68[iVar13] = lVar8;
      iVar6 = iVar13 + 1;
      bVar3 = 3 < iVar13;
      iVar13 = iVar6;
      if (bVar3) break;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x2c0);
  uVar17 = (undefined4)(uVar9 >> 0x20);
  switch(iVar13) {
  case 1:
    break;
  case 2:
    auVar16._8_4_ = uVar17;
    auVar16._0_8_ = uVar9;
    auVar16._12_4_ = 0x45300000;
    dVar20 = ((double)CONCAT44(0x43300000,(int)uVar9) - 4503599627370496.0) +
             (auVar16._8_8_ - 1.9342813113834067e+25) + 20.0;
    break;
  case 3:
    uVar7 = *(uint *)(param_1 + local_68[0] * 4);
    uVar1 = *(uint *)(param_1 + local_68[1] * 4);
    uVar2 = *(uint *)(param_1 + local_68[2] * 4);
    uVar4 = uVar2;
    if (uVar2 < uVar1) {
      uVar4 = uVar1;
    }
    if (uVar4 < uVar7) {
      uVar4 = uVar7;
    }
    dVar20 = (double)((uVar1 + uVar7 + uVar2) * 2) + 28.0;
    goto LAB_001fe547;
  case 4:
    lVar8 = 0;
    do {
      local_b8[lVar8] = *(uint *)(param_1 + local_68[lVar8] * 4);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 4);
    uVar9 = 0;
    do {
      if (uVar9 < 3) {
        uVar4 = local_b8[uVar9];
        uVar11 = uVar9;
        do {
          uVar7 = local_b8[uVar11 + 1];
          if (uVar4 < uVar7) {
            local_b8[uVar11 + 1] = uVar4;
            local_b8[uVar9] = uVar7;
            uVar4 = uVar7;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < 3);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 4);
    uVar7 = local_b8[3] + local_b8[2];
    uVar4 = local_b8[0];
    if (local_b8[0] < uVar7) {
      uVar4 = uVar7;
    }
    dVar20 = (double)((local_b8[0] + local_b8[1]) * 2) + (double)(uVar7 * 3) + 37.0;
LAB_001fe547:
    dVar20 = dVar20 - (double)uVar4;
    break;
  default:
    local_b8[0xc] = 0;
    local_b8[0xd] = 0;
    local_b8[0xe] = 0;
    local_b8[0xf] = 0;
    local_b8[8] = 0;
    local_b8[9] = 0;
    local_b8[10] = 0;
    local_b8[0xb] = 0;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[0x10] = 0;
    local_b8[0x11] = 0;
    if (uVar9 < 0x100) {
      dVar20 = (double)(&_kBrotliLog2Table)[uVar9];
    }
    else {
      auVar14._8_4_ = uVar17;
      auVar14._0_8_ = uVar9;
      auVar14._12_4_ = 0x45300000;
      dVar20 = (double)_log2(((double)CONCAT44(0x43300000,(int)uVar9) - 4503599627370496.0) +
                             (auVar14._8_8_ - 1.9342813113834067e+25));
    }
    dVar18 = 0.0;
    uVar9 = 1;
    iVar13 = 0;
    uVar11 = 0;
    do {
      uVar4 = *(uint *)(param_1 + uVar11 * 4);
      uVar5 = (ulong)uVar4;
      if (uVar5 == 0) {
        if (uVar11 < 0x2bf) {
          uVar4 = 0x2c0 - (int)uVar11;
          lVar8 = 0;
          do {
            if (*(int *)(param_1 + 4 + uVar11 * 4 + lVar8 * 4) != 0) {
              uVar4 = (int)lVar8 + 1;
              break;
            }
            lVar8 = lVar8 + 1;
          } while (0x2bf - uVar11 != lVar8);
          uVar11 = uVar11 + uVar4;
          if (uVar11 == 0x2c0) break;
          if (2 < uVar4) {
            uVar4 = uVar4 - 2;
            do {
              iVar13 = iVar13 + 1;
              dVar18 = dVar18 + 3.0;
              bVar3 = 7 < uVar4;
              uVar4 = uVar4 >> 3;
            } while (bVar3);
            goto LAB_001fe73b;
          }
        }
        else {
          uVar11 = uVar11 + 1;
          uVar4 = 1;
          if (uVar11 == 0x2c0) break;
        }
        local_b8[0] = local_b8[0] + uVar4;
      }
      else {
        if (uVar4 < 0x100) {
          dVar19 = (double)(&_kBrotliLog2Table)[uVar5];
          dVar22 = (double)(int)uVar4;
        }
        else {
          dVar22 = (double)uVar5;
          dVar19 = (double)_log2();
        }
        dVar15 = (dVar20 - dVar19) + 0.5;
        uVar5 = (ulong)dVar15;
        uVar5 = (long)(dVar15 - 9.223372036854776e+18) & (long)uVar5 >> 0x3f | uVar5;
        dVar18 = dVar18 + dVar22 * (dVar20 - dVar19);
        if (0xe < uVar5) {
          uVar5 = 0xf;
        }
        if (uVar9 < uVar5) {
          uVar9 = uVar5;
        }
        local_b8[uVar5 & 0xffffffff] = local_b8[uVar5 & 0xffffffff] + 1;
        uVar11 = uVar11 + 1;
      }
LAB_001fe73b:
    } while (uVar11 < 0x2c0);
    local_b8[0x11] = iVar13;
    dVar19 = 0.0;
    uVar5 = 0xfffffffffffffff8;
    uVar11 = 0;
    do {
      uVar4 = *(uint *)((long)local_b8 + uVar5 + 8);
      uVar10 = (ulong)uVar4;
      if (uVar10 < 0x100) {
        dVar20 = (double)(&_kBrotliLog2Table)[uVar10];
        local_e8 = (double)(int)uVar4;
      }
      else {
        local_e8 = (double)uVar10;
        dVar20 = (double)_log2();
      }
      uVar12 = (ulong)*(uint *)((long)local_b8 + uVar5 + 0xc);
      if (uVar12 < 0x100) {
        dVar22 = (double)(&_kBrotliLog2Table)[uVar12];
      }
      else {
        dVar22 = (double)_log2((double)uVar12);
      }
      uVar11 = uVar11 + uVar10 + uVar12;
      dVar19 = (dVar19 - local_e8 * dVar20) - (double)uVar12 * dVar22;
      uVar5 = uVar5 + 8;
    } while (uVar5 < 0x40);
    auVar21._8_4_ = (int)(uVar11 >> 0x20);
    auVar21._0_8_ = uVar11;
    auVar21._12_4_ = 0x45300000;
    dVar20 = ((double)CONCAT44(0x43300000,(int)uVar11) - 4503599627370496.0) +
             (auVar21._8_8_ - 1.9342813113834067e+25);
    if (uVar11 != 0) {
      if (uVar11 < 0x100) {
        dVar22 = (double)(&_kBrotliLog2Table)[uVar11];
      }
      else {
        dVar22 = (double)_log2(dVar20);
      }
      dVar19 = dVar19 + dVar22 * dVar20;
    }
    if (dVar20 <= dVar19) {
      dVar20 = dVar19;
    }
    dVar20 = dVar18 + (double)(long)(uVar9 * 2 + 0x12) + dVar20;
  }
switchD_001fe440_caseD_1:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return dVar20;
}

