// rea decompile_all
// name: _ContextBlockSplitterFinishBlock
// address: 0x6e98c
// body: available
// range: 0x6e98c-0x6f52f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6f52b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ContextBlockSplitterFinishBlock(undefined8 *param_1,long param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  double *pdVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar28 [16];
  long local_238;
  uint *local_230;
  undefined8 *local_228;
  double local_200;
  double *local_1f8;
  ulong *local_1f0;
  double local_1e8 [2];
  ulong *local_1d8;
  ulong *local_1d0;
  uint *local_1c8;
  long local_1c0;
  ulong *local_1b8;
  double dStack_1b0;
  int local_19c;
  ulong *local_198;
  ulong *local_190;
  undefined8 *local_188;
  ulong *local_180;
  ulong local_178 [26];
  ulong auStack_a8 [14];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar14 = param_1[3];
  uVar6 = param_1[10];
  if ((ulong)param_1[10] < uVar14) {
    param_1[10] = uVar14;
    uVar6 = uVar14;
  }
  local_1d0 = (ulong *)param_1[6];
  puVar11 = (ulong *)param_1[1];
  puVar15 = param_1 + 0xe;
  local_230 = (uint *)param_1[7];
  local_188 = param_1;
  local_190 = puVar11;
  if (param_1[5] == 0) {
    *(int *)local_1d0[3] = (int)uVar6;
    *(undefined1 *)local_1d0[2] = 0;
    local_19c = param_3;
    if (puVar11 != (ulong *)0x0) {
      local_1f8 = (double *)*param_1;
      local_1f0 = (ulong *)((long)local_1f8 * 4);
      do {
        puVar17 = (uint *)((long)local_230 + (long)local_1f0);
        puVar23 = (ulong *)0x0;
        uVar14 = 0;
        puVar13 = local_230;
        local_198 = puVar15;
        if (((ulong)local_1f8 & 1) != 0) goto LAB_0006eb55;
        while (puVar15 = local_198, puVar13 < puVar17) {
          uVar6 = (ulong)*puVar13;
          puVar13 = puVar13 + 1;
          uVar14 = uVar14 + uVar6;
          puVar15 = (ulong *)(double)uVar6;
          if (uVar6 < 0x100) {
            dVar20 = (double)(&_kBrotliLog2Table)[uVar6];
          }
          else {
            local_1b8 = puVar15;
            local_180 = puVar23;
            dVar20 = (double)_log2(puVar15);
            puVar23 = local_180;
            puVar15 = local_1b8;
          }
          puVar23 = (ulong *)((double)puVar23 - (double)puVar15 * dVar20);
LAB_0006eb55:
          uVar6 = (ulong)*puVar13;
          puVar13 = puVar13 + 1;
          uVar14 = uVar14 + uVar6;
          puVar15 = (ulong *)(double)uVar6;
          if (uVar6 < 0x100) {
            dVar20 = (double)(&_kBrotliLog2Table)[uVar6];
          }
          else {
            local_1b8 = puVar15;
            local_180 = puVar23;
            dVar20 = (double)_log2(puVar15);
            puVar23 = local_180;
            puVar15 = local_1b8;
          }
          puVar23 = (ulong *)((double)puVar23 - (double)puVar15 * dVar20);
        }
        auVar27._8_4_ = (int)(uVar14 >> 0x20);
        auVar27._0_8_ = uVar14;
        auVar27._12_4_ = 0x45300000;
        dVar20 = (double)CONCAT44(0x43300000,(int)uVar14) - 4503599627370496.0;
        dVar29 = auVar27._8_8_ - 1.9342813113834067e+25;
        puVar25 = (ulong *)(dVar20 + dVar29);
        if (uVar14 != 0) {
          if (uVar14 < 0x100) {
            dVar20 = (double)(&_kBrotliLog2Table)[uVar14];
          }
          else {
            local_1b8 = puVar25;
            dStack_1b0 = dVar20 + dVar29;
            local_180 = puVar23;
            dVar20 = (double)_log2(puVar25);
            puVar23 = local_180;
            puVar25 = local_1b8;
          }
          puVar23 = (ulong *)((double)puVar23 + dVar20 * (double)puVar25);
        }
        if ((double)puVar25 <= (double)puVar23) {
          puVar25 = puVar23;
        }
        *puVar15 = (ulong)puVar25;
        puVar15[(long)local_190] = (ulong)puVar25;
        puVar15 = puVar15 + 1;
        local_230 = local_230 + 0x104;
        puVar11 = (ulong *)((long)puVar11 + -1);
      } while (puVar11 != (ulong *)0x0);
    }
    param_1 = local_188;
    puVar11 = local_190;
    local_188[5] = local_188[5] + 1;
    *local_1d0 = *local_1d0 + 1;
    uVar14 = local_188[0xb] + (long)local_190;
    local_188[0xb] = uVar14;
    if ((uVar14 < *(ulong *)local_188[8]) && (lVar7 = local_188[1], lVar7 != 0)) {
      lVar19 = uVar14 * 0x410 + local_188[7];
      do {
        ___bzero(lVar19,0x408);
        *(undefined8 *)(lVar19 + 0x408) = 0x7ff0000000000000;
        lVar19 = lVar19 + 0x410;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    param_1[10] = 0;
    iVar4 = local_19c;
  }
  else {
    iVar4 = param_3;
    if (uVar6 != 0) {
      if (((ulong)puVar11 & 0x7fffffffffffffff) == 0) {
        local_1c0 = 0;
      }
      else {
        local_1c0 = _BrotliAllocate(param_2,(long)puVar11 * 0x820);
      }
      local_1e8[0] = 0.0;
      local_200 = 0.0;
      if (*(int *)(param_2 + 0x18) != 0) goto LAB_0006ece1;
      local_198 = puVar15;
      local_19c = param_3;
      local_1c8 = local_230;
      if (puVar11 != (ulong *)0x0) {
        local_228 = (undefined8 *)*param_1;
        lVar7 = (long)puVar11 * 0x410;
        puVar15 = (ulong *)0x0;
        local_238 = local_1c0;
        do {
          puVar17 = local_1c8;
          puVar8 = local_1c8 + (long)puVar15 * 0x104 + param_1[0xb] * 0x104;
          puVar13 = puVar8 + (long)local_228;
          puVar23 = (ulong *)0x0;
          uVar14 = 0;
          puVar18 = puVar8;
          local_1d8 = puVar15;
          if (((ulong)local_228 & 1) != 0) goto LAB_0006ee41;
          while (puVar18 < puVar13) {
            uVar6 = (ulong)*puVar18;
            puVar18 = puVar18 + 1;
            uVar14 = uVar14 + uVar6;
            puVar25 = (ulong *)(double)uVar6;
            if (uVar6 < 0x100) {
              local_228 = &_kBrotliLog2Table;
              dVar20 = (double)(&_kBrotliLog2Table)[uVar6];
            }
            else {
              local_1b8 = puVar25;
              local_180 = puVar23;
              dVar20 = (double)_log2(puVar25);
              puVar23 = local_180;
              puVar25 = local_1b8;
            }
            puVar23 = (ulong *)((double)puVar23 - (double)puVar25 * dVar20);
LAB_0006ee41:
            uVar6 = (ulong)*puVar18;
            puVar18 = puVar18 + 1;
            uVar14 = uVar14 + uVar6;
            puVar25 = (ulong *)(double)uVar6;
            if (uVar6 < 0x100) {
              local_228 = &_kBrotliLog2Table;
              dVar20 = (double)(&_kBrotliLog2Table)[uVar6];
            }
            else {
              local_1b8 = puVar25;
              local_180 = puVar23;
              dVar20 = (double)_log2(puVar25);
              puVar23 = local_180;
              puVar25 = local_1b8;
            }
            puVar23 = (ulong *)((double)puVar23 - (double)puVar25 * dVar20);
          }
          auVar21._8_4_ = (int)(uVar14 >> 0x20);
          auVar21._0_8_ = uVar14;
          auVar21._12_4_ = 0x45300000;
          puVar25 = (ulong *)(((double)CONCAT44(0x43300000,(int)uVar14) - 4503599627370496.0) +
                             (auVar21._8_8_ - 1.9342813113834067e+25));
          if (uVar14 != 0) {
            if (uVar14 < 0x100) {
              dVar20 = (double)(&_kBrotliLog2Table)[uVar14];
            }
            else {
              local_180 = puVar23;
              dVar20 = (double)_log2();
              puVar23 = local_180;
            }
            puVar23 = (ulong *)((double)puVar23 + dVar20 * (double)puVar25);
          }
          if ((double)puVar25 <= (double)puVar23) {
            puVar25 = puVar23;
          }
          auStack_a8[(long)local_1d8] = (ulong)puVar25;
          uVar12 = CONCAT71((int7)((ulong)local_228 >> 8),1);
          pdVar9 = local_1e8;
          lVar19 = 0;
          puVar23 = local_1d8;
          do {
            lVar10 = local_1c0;
            local_1b8 = (ulong *)CONCAT44(local_1b8._4_4_,(int)uVar12);
            local_1f0 = (ulong *)(lVar19 * (long)puVar11 + (long)puVar23);
            lVar16 = (long)local_1f0 * 0x410;
            puVar13 = (uint *)(local_1c0 + lVar16);
            lVar3 = param_1[lVar19 + 0xc];
            local_1f8 = pdVar9;
            _memcpy(puVar13,puVar8,0x410);
            puVar11 = local_190;
            puVar23 = local_1d8;
            plVar2 = (long *)(lVar10 + 0x400 + lVar16);
            *plVar2 = *plVar2 + *(long *)(puVar17 + (long)puVar15 * 0x104 + lVar3 * 0x104 + 0x100);
            lVar10 = 0;
            do {
              piVar1 = (int *)(lVar19 * lVar7 + local_238 + lVar10 * 4);
              *piVar1 = *piVar1 + local_230[lVar3 * 0x104 + lVar10];
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0x100);
            local_228 = (undefined8 *)*local_188;
            puVar18 = puVar13 + (long)local_228;
            puVar24 = (ulong *)0x0;
            uVar14 = 0;
            if (((ulong)local_228 & 1) != 0) goto LAB_0006f06b;
            while (puVar5 = local_198, puVar13 < puVar18) {
              uVar6 = (ulong)*puVar13;
              puVar13 = puVar13 + 1;
              uVar14 = uVar14 + uVar6;
              if (uVar6 < 0x100) {
                dVar20 = (double)(&_kBrotliLog2Table)[uVar6];
              }
              else {
                local_180 = puVar24;
                dVar20 = (double)_log2((double)uVar6);
                puVar24 = local_180;
              }
              puVar24 = (ulong *)((double)puVar24 - (double)uVar6 * dVar20);
LAB_0006f06b:
              uVar6 = (ulong)*puVar13;
              puVar13 = puVar13 + 1;
              uVar14 = uVar14 + uVar6;
              if (uVar6 < 0x100) {
                dVar20 = (double)(&_kBrotliLog2Table)[uVar6];
              }
              else {
                local_180 = puVar24;
                dVar20 = (double)_log2((double)uVar6);
                puVar24 = local_180;
              }
              puVar24 = (ulong *)((double)puVar24 - (double)uVar6 * dVar20);
            }
            auVar28._8_4_ = (int)(uVar14 >> 0x20);
            auVar28._0_8_ = uVar14;
            auVar28._12_4_ = 0x45300000;
            puVar26 = (ulong *)(((double)CONCAT44(0x43300000,(int)uVar14) - 4503599627370496.0) +
                               (auVar28._8_8_ - 1.9342813113834067e+25));
            if (uVar14 != 0) {
              if (uVar14 < 0x100) {
                dVar20 = (double)(&_kBrotliLog2Table)[uVar14];
              }
              else {
                local_180 = puVar24;
                dVar20 = (double)_log2(puVar26);
                puVar24 = local_180;
              }
              puVar24 = (ulong *)((double)puVar24 + dVar20 * (double)puVar26);
            }
            param_1 = local_188;
            if ((double)puVar26 <= (double)puVar24) {
              puVar26 = puVar24;
            }
            local_178[(long)local_1f0] = (ulong)puVar26;
            *local_1f8 = (((double)puVar26 - (double)puVar25) - (double)puVar5[(long)local_1f0]) +
                         *local_1f8;
            lVar19 = 1;
            pdVar9 = &local_200;
            uVar12 = 0;
          } while (((ulong)local_1b8 & 1) != 0);
          puVar15 = (ulong *)((long)puVar23 + 1);
          local_230 = local_230 + 0x104;
          local_238 = local_238 + 0x410;
        } while (puVar15 != puVar11);
      }
      uVar14 = *local_1d0;
      puVar15 = puVar11;
      if ((((ulong)param_1[2] <= uVar14) || (local_1e8[0] <= (double)param_1[4])) ||
         (local_200 <= (double)param_1[4])) {
        lVar7 = param_1[5];
        if (local_1e8[0] + -20.0 <= local_200) {
          piVar1 = (int *)((local_1d0[3] - 4) + lVar7 * 4);
          *piVar1 = *piVar1 + *(int *)(param_1 + 10);
          if (puVar11 != (ulong *)0x0) {
            puVar23 = local_178;
            lVar7 = 0;
            puVar13 = local_1c8;
            puVar25 = local_198;
            do {
              local_180 = puVar11;
              _memcpy((void *)((long)puVar13 + lVar7 + param_1[0xc] * 0x410),
                      (void *)(local_1c0 + lVar7),0x410);
              param_1 = local_188;
              puVar13 = local_1c8;
              local_1b8 = puVar23;
              uVar14 = *puVar23;
              *puVar25 = uVar14;
              if (*local_1d0 == 1) {
                puVar25[(long)puVar15] = uVar14;
              }
              lVar19 = local_188[0xb];
              ___bzero((long)local_1c8 + lVar7 + lVar19 * 0x410,0x408);
              *(undefined8 *)((long)puVar13 + lVar7 + 0x408 + lVar19 * 0x410) = 0x7ff0000000000000;
              puVar25 = puVar25 + 1;
              puVar23 = local_1b8 + 1;
              lVar7 = lVar7 + 0x410;
              puVar11 = (ulong *)((long)local_180 + -1);
              puVar15 = local_190;
            } while (puVar11 != (ulong *)0x0);
          }
          param_1[10] = 0;
          lVar7 = param_1[0x28];
          param_1[0x28] = lVar7 + 1U;
          if (1 < lVar7 + 1U) {
            param_1[9] = param_1[9] + param_1[3];
          }
        }
        else {
          *(int *)(local_1d0[3] + lVar7 * 4) = *(int *)(param_1 + 10);
          *(undefined1 *)(local_1d0[2] + lVar7) = *(undefined1 *)((local_1d0[2] - 2) + lVar7);
          auVar27 = *(undefined1 (*) [16])(param_1 + 0xc);
          auVar22._0_8_ = auVar27._8_8_;
          auVar22._8_4_ = auVar27._0_4_;
          auVar22._12_4_ = auVar27._4_4_;
          *(undefined1 (*) [16])(param_1 + 0xc) = auVar22;
          if (puVar11 != (ulong *)0x0) {
            puVar23 = local_178 + (long)local_190;
            local_180 = (ulong *)((long)local_190 * 0x410 + local_1c0);
            lVar7 = 0;
            puVar15 = local_190;
            puVar11 = local_198;
            do {
              _memcpy((void *)((long)local_1c8 + param_1[0xc] * 0x410 + lVar7),
                      (void *)((long)local_180 + lVar7),0x410);
              puVar13 = local_1c8;
              puVar11[(long)local_190] = *puVar11;
              *puVar11 = *puVar23;
              lVar19 = local_188[0xb];
              ___bzero((long)local_1c8 + lVar7 + lVar19 * 0x410,0x408);
              *(undefined8 *)((long)puVar13 + lVar7 + 0x408 + lVar19 * 0x410) = 0x7ff0000000000000;
              puVar11 = puVar11 + 1;
              puVar23 = puVar23 + 1;
              lVar7 = lVar7 + 0x410;
              puVar15 = (ulong *)((long)puVar15 + -1);
              param_1 = local_188;
            } while (puVar15 != (ulong *)0x0);
          }
          param_1[5] = param_1[5] + 1;
          param_1[10] = 0;
          param_1[0x28] = 0;
          param_1[9] = param_1[3];
          puVar15 = local_190;
        }
      }
      else {
        lVar7 = param_1[5];
        *(undefined4 *)(local_1d0[3] + lVar7 * 4) = *(undefined4 *)(param_1 + 10);
        *(char *)(local_1d0[2] + lVar7) = (char)uVar14;
        param_1[0xd] = param_1[0xc];
        param_1[0xc] = *local_1d0 * (long)puVar11;
        if (puVar11 != (ulong *)0x0) {
          puVar23 = (ulong *)0x0;
          do {
            local_198[(long)puVar11 + (long)puVar23] = local_198[(long)puVar23];
            local_198[(long)puVar23] = auStack_a8[(long)puVar23];
            puVar23 = (ulong *)((long)puVar23 + 1);
          } while (puVar11 != puVar23);
        }
        param_1[5] = param_1[5] + 1;
        *local_1d0 = *local_1d0 + 1;
        uVar14 = param_1[0xb] + (long)puVar11;
        param_1[0xb] = uVar14;
        if ((uVar14 < *(ulong *)param_1[8]) && (lVar7 = param_1[1], lVar7 != 0)) {
          lVar19 = uVar14 * 0x410 + param_1[7];
          do {
            ___bzero(lVar19,0x408);
            *(undefined8 *)(lVar19 + 0x408) = 0x7ff0000000000000;
            lVar19 = lVar19 + 0x410;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        param_1[10] = 0;
        param_1[0x28] = 0;
        param_1[9] = param_1[3];
      }
      _BrotliFree(param_2,local_1c0);
      puVar11 = puVar15;
      iVar4 = local_19c;
    }
  }
  if (iVar4 != 0) {
    *(ulong *)param_1[8] = (long)puVar11 * *local_1d0;
    local_1d0[1] = param_1[5];
  }
LAB_0006ece1:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

