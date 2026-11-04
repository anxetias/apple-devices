// rea decompile_all
// name: _BrotliEstimateBitCostsForLiterals
// address: 0x20ffb2
// body: available
// range: 0x20ffb2-0x210623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21061f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliEstimateBitCostsForLiterals
               (ulong param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  ulong local_1888 [2];
  long local_1878;
  ulong local_1870;
  ulong local_1868;
  ulong local_1860;
  ulong local_1858 [4];
  ulong local_1838 [768];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar3 = _BrotliIsMostlyUTF8(0x3fe8000000000000,param_4,param_1,param_3,param_2);
  local_1878 = param_4;
  local_1870 = param_3;
  local_1868 = param_2;
  if (iVar3 == 0) {
    ___bzero(local_1838,0x800);
    uVar4 = 2000;
    if (param_2 < 2000) {
      uVar4 = param_2;
    }
    uVar6 = param_1;
    uVar5 = uVar4;
    if (param_2 != 0) {
      do {
        local_1838[*(byte *)(param_4 + (uVar6 & param_3))] =
             local_1838[*(byte *)(param_4 + (uVar6 & param_3))] + 1;
        uVar5 = uVar5 - 1;
        uVar6 = uVar6 + 1;
      } while (uVar5 != 0);
      if (param_2 != 0) {
        local_1860 = uVar4;
        uVar4 = 2000;
        do {
          if (1999 < uVar4 - 2000) {
            local_1838[*(byte *)(param_4 + (param_1 - 2000 & param_3))] =
                 local_1838[*(byte *)(param_4 + (param_1 - 2000 & param_3))] - 1;
            local_1860 = local_1860 - 1;
          }
          if (uVar4 < param_2) {
            local_1838[*(byte *)(param_4 + (param_1 + 2000 & param_3))] =
                 local_1838[*(byte *)(param_4 + (param_1 + 2000 & param_3))] + 1;
            local_1860 = local_1860 + 1;
          }
          uVar6 = local_1838[*(byte *)(param_4 + (param_1 & param_3))];
          lVar7 = uVar6 + (uVar6 == 0);
          if (local_1860 < 0x100) {
            dVar17 = (double)(&_kBrotliLog2Table)[local_1860];
          }
          else {
            auVar15._8_4_ = (int)(local_1860 >> 0x20);
            auVar15._0_8_ = local_1860;
            auVar15._12_4_ = 0x45300000;
            dVar17 = (double)_log2(((double)CONCAT44(0x43300000,(int)local_1860) -
                                   4503599627370496.0) + (auVar15._8_8_ - 1.9342813113834067e+25));
          }
          if (uVar6 < 0x100) {
            dVar12 = (double)(&_kBrotliLog2Table)[lVar7];
          }
          else {
            auVar16._8_4_ = (int)((ulong)lVar7 >> 0x20);
            auVar16._0_8_ = lVar7;
            auVar16._12_4_ = 0x45300000;
            dVar12 = (double)_log2(((double)CONCAT44(0x43300000,(int)lVar7) - 4503599627370496.0) +
                                   (auVar16._8_8_ - 1.9342813113834067e+25));
          }
          dVar17 = (dVar17 - dVar12) + 0.029;
          *(float *)(param_5 + -8000 + uVar4 * 4) =
               (float)(double)(-(ulong)(dVar17 < 1.0) & (ulong)(dVar17 * 0.5 + 0.5) |
                              ~-(ulong)(dVar17 < 1.0) & (ulong)dVar17);
          param_1 = param_1 + 1;
          uVar6 = uVar4 - 1999;
          param_2 = local_1868;
          uVar4 = uVar4 + 1;
          param_4 = local_1878;
          param_3 = local_1870;
        } while (uVar6 != local_1868);
      }
    }
  }
  else {
    local_1838[0] = 0;
    local_1858[0] = 0;
    local_1888[0] = 0;
    if (param_2 != 0) {
      uVar4 = 0;
      bVar8 = 0;
      do {
        bVar2 = *(byte *)(param_4 + (uVar4 + param_1 & param_3));
        puVar10 = local_1838;
        if ((((char)bVar2 < '\0') && (puVar10 = local_1858, bVar2 < 0xc0)) &&
           (puVar10 = local_1838, 0xdf < bVar8)) {
          puVar10 = local_1888;
        }
        *puVar10 = *puVar10 + 1;
        uVar4 = uVar4 + 1;
        bVar8 = bVar2;
      } while (param_2 != uVar4);
      local_1860 = (ulong)(0x18 < local_1858[0] + local_1888[0]);
      ___bzero();
      uVar4 = 0x1ef;
      if (local_1868 < 0x1ef) {
        uVar4 = local_1868;
      }
      local_1858[0] = 0;
      local_1858[1] = 0;
      local_1858[2] = 0;
      uVar9 = 0;
      uVar6 = param_1;
      uVar5 = 0;
      do {
        bVar8 = *(byte *)(param_4 + (uVar6 & param_3));
        local_1838[uVar9 * 0x100 + (ulong)bVar8] = local_1838[uVar9 * 0x100 + (ulong)bVar8] + 1;
        local_1858[uVar9] = local_1858[uVar9] + 1;
        if ((char)bVar8 < '\0') {
          uVar9 = local_1860;
          if ((bVar8 < 0xc0) && (uVar5 < 0xe0)) {
            uVar9 = 0;
          }
        }
        else {
          uVar9 = 0;
        }
        uVar6 = uVar6 + 1;
        uVar4 = uVar4 - 1;
        uVar5 = (ulong)bVar8;
      } while (uVar4 != 0);
      lVar7 = 2000;
      uVar4 = 0;
      do {
        if (0x1ee < uVar4) {
          if (uVar4 == 0x1ef) {
LAB_00210195:
            uVar6 = 0;
          }
          else {
            if (uVar4 < 0x1f1) {
              bVar8 = 0;
            }
            else {
              bVar8 = *(byte *)(param_4 + ((uVar4 + param_1) - 0x1f1 & param_3));
            }
            bVar2 = *(byte *)(param_4 + ((uVar4 + param_1) - 0x1f0 & param_3));
            if (-1 < (char)bVar2) goto LAB_00210195;
            uVar6 = local_1860;
            if ((bVar2 < 0xc0) && (bVar8 < 0xe0)) {
              uVar6 = 0;
            }
          }
          plVar1 = (long *)((long)local_1838 +
                           (ulong)*(byte *)(param_4 + ((uVar4 + param_1) - 0x1ef & param_3)) * 8 +
                           (ulong)(uint)((int)uVar6 << 0xb));
          *plVar1 = *plVar1 + -1;
          local_1858[uVar6] = local_1858[uVar6] - 1;
        }
        if (uVar4 + 0x1ef < local_1868) {
          bVar8 = *(byte *)(param_4 + (uVar4 + param_1 + 0x1ee & param_3));
          if ((char)bVar8 < '\0') {
            uVar6 = local_1860;
            if ((bVar8 < 0xc0) && (*(byte *)(param_4 + (uVar4 + param_1 + 0x1ed & param_3)) < 0xe0))
            {
              uVar6 = 0;
            }
          }
          else {
            uVar6 = 0;
          }
          plVar1 = (long *)((long)local_1838 +
                           (ulong)*(byte *)(param_4 + (uVar4 + param_1 + 0x1ef & param_3)) * 8 +
                           (ulong)(uint)((int)uVar6 << 0xb));
          *plVar1 = *plVar1 + 1;
          local_1858[uVar6] = local_1858[uVar6] + 1;
        }
        if (uVar4 == 0) {
LAB_0021027c:
          uVar6 = 0;
        }
        else {
          if (uVar4 == 1) {
            bVar8 = 0;
          }
          else {
            bVar8 = *(byte *)(param_4 + ((uVar4 + param_1) - 2 & param_3));
          }
          bVar2 = *(byte *)(param_4 + ((uVar4 + param_1) - 1 & param_3));
          if (-1 < (char)bVar2) goto LAB_0021027c;
          uVar6 = local_1860;
          if ((bVar2 < 0xc0) && (bVar8 < 0xe0)) {
            uVar6 = 0;
          }
        }
        uVar5 = *(ulong *)((long)local_1838 +
                          (ulong)*(byte *)(param_4 + (uVar4 + param_1 & param_3)) * 8 +
                          (ulong)(uint)((int)uVar6 << 0xb));
        lVar11 = uVar5 + (uVar5 == 0);
        uVar6 = local_1858[uVar6];
        if (uVar6 < 0x100) {
          dVar17 = (double)(&_kBrotliLog2Table)[uVar6];
        }
        else {
          auVar13._8_4_ = (int)(uVar6 >> 0x20);
          auVar13._0_8_ = uVar6;
          auVar13._12_4_ = 0x45300000;
          dVar17 = (double)_log2(((double)CONCAT44(0x43300000,(int)uVar6) - 4503599627370496.0) +
                                 (auVar13._8_8_ - 1.9342813113834067e+25));
        }
        if (uVar5 < 0x100) {
          dVar12 = (double)(&_kBrotliLog2Table)[lVar11];
        }
        else {
          auVar14._8_4_ = (int)((ulong)lVar11 >> 0x20);
          auVar14._0_8_ = lVar11;
          auVar14._12_4_ = 0x45300000;
          dVar12 = (double)_log2(((double)CONCAT44(0x43300000,(int)lVar11) - 4503599627370496.0) +
                                 (auVar14._8_8_ - 1.9342813113834067e+25));
        }
        dVar17 = (dVar17 - dVar12) + 0.02905;
        dVar17 = (double)(-(ulong)(dVar17 < 1.0) & (ulong)(dVar17 * 0.5 + 0.5) |
                         ~-(ulong)(dVar17 < 1.0) & (ulong)dVar17);
        if (uVar4 < 2000) {
          dVar17 = dVar17 + ((double)lVar7 / -2000.0) * 0.35 + 0.7;
        }
        *(float *)(param_5 + uVar4 * 4) = (float)dVar17;
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + -1;
        param_4 = local_1878;
        param_3 = local_1870;
      } while (local_1868 != uVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

