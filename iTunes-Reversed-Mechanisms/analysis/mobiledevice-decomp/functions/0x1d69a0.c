// rea decompile_all
// name: _zlibDecodeBuffer
// address: 0x1d69a0
// body: available
// range: 0x1d69a0-0x1d70b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d70b3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _zlibDecodeBuffer(long *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  sbyte sVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [288];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar17 = *(uint *)(param_1 + 6);
  if (uVar17 != 0xb) {
    if (uVar17 < 0xb) {
      uVar15 = param_1[0x11];
      uVar5 = param_1[0x10];
      uVar14 = param_1[0xe];
      uVar13 = param_1[0xf];
      iVar12 = (int)param_1[0xb];
      iVar11 = *(int *)((long)param_1 + 0x5c);
      switch(uVar17) {
      case 0:
switchD_001d6a1c_caseD_0:
        if (*(int *)((long)param_1 + 0x34) == 0) {
          uVar5 = param_1[4];
          uVar14 = param_1[5];
          uVar15 = 0;
          if (uVar14 <= uVar5) {
            uVar15 = uVar5 - uVar14;
          }
          if (2 < uVar15) {
            *(uint *)((long)param_1 + 0x34) =
                 (uint)((*(uint *)(param_1[3] + (uVar14 >> 3)) >> ((uint)uVar14 & 7) & 1) != 0);
            uVar13 = *(ulong *)(param_1[3] + (uVar14 + 1 >> 3));
            uVar15 = uVar14 + 3;
            param_1[5] = uVar15;
            param_1[9] = 0x800000008000;
            switch((uint)(uVar13 >> ((byte)(uVar14 + 1) & 7)) & 3) {
            case 0:
switchD_001d6ad8_caseD_0:
              uVar14 = 0;
              if (uVar15 <= uVar5) {
                uVar14 = uVar5 - uVar15;
              }
              if (0xf < uVar14) goto code_r0x001d6af0;
              *(undefined4 *)(param_1 + 6) = 1;
              goto LAB_001d7053;
            case 1:
              uVar15 = 0;
              do {
                if (uVar15 < 0x90) {
LAB_001d6bbb:
                  local_158[uVar15] = 8;
                }
                else if (uVar15 < 0x100) {
                  local_158[uVar15] = 9;
                }
                else {
                  if (0x117 < uVar15) goto LAB_001d6bbb;
                  local_158[uVar15] = 7;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 != 0x120);
              local_168 = 0x505050505050505;
              uStack_160 = 0x505050505050505;
              local_178 = 0x505050505050505;
              uStack_170 = 0x505050505050505;
              iVar12 = _getDecoderTable(0x120,local_158,0x8000,param_1 + 0x12);
              if ((iVar12 == 0) ||
                 (iVar11 = _getDecoderTable(0x20,&local_178,*(undefined4 *)((long)param_1 + 0x4c),
                                            param_1 + 0x2012), iVar11 == 0))
              goto switchD_001d6a1c_caseD_8;
              *(int *)(param_1 + 9) = iVar12;
              *(int *)((long)param_1 + 0x4c) = iVar11;
              break;
            case 2:
switchD_001d6ad8_caseD_2:
              iVar12 = _readHuffmanTable(param_1 + 3,param_1 + 9,param_1 + 0x12,(long)param_1 + 0x4c
                                        );
              if (iVar12 != 0) {
                param_1[5] = uVar15;
                *(undefined4 *)(param_1 + 6) = 3;
                goto LAB_001d7053;
              }
              break;
            case 3:
              goto switchD_001d6a1c_caseD_8;
            }
switchD_001d6a1c_caseD_4:
            iVar12 = (int)param_1[9] + -1;
            iVar11 = *(int *)((long)param_1 + 0x4c) + -1;
            uVar13 = 0;
            uVar14 = 0;
switchD_001d6a1c_caseD_5:
            if (uVar13 < (ulong)(long)iVar12) {
              uVar5 = param_1[5];
              if (uVar5 < (ulong)param_1[4]) {
                bVar8 = (byte)uVar5 & 7;
                uVar13 = 0xffffffffffffffff >> bVar8;
                uVar14 = *(ulong *)(param_1[3] + (uVar5 >> 3)) >> bVar8;
                goto LAB_001d6cca;
              }
              *(undefined4 *)(param_1 + 6) = 5;
LAB_001d7045:
              param_1[0xe] = uVar14;
              param_1[0xf] = uVar13;
              *(int *)(param_1 + 0xb) = iVar12;
              *(int *)((long)param_1 + 0x5c) = iVar11;
              goto LAB_001d7053;
            }
            uVar5 = param_1[5];
LAB_001d6cca:
            uVar2 = *(ushort *)((long)param_1 + ((long)iVar12 & uVar14) * 2 + 0x90);
            uVar17 = uVar2 & 0xf;
            sVar9 = (char)uVar17 + 1;
            uVar14 = uVar14 >> sVar9;
            uVar13 = uVar13 >> sVar9;
            uVar15 = (ulong)(uVar2 >> 4);
            param_1[0xc] = uVar15;
            param_1[5] = uVar17 + uVar5 + 1;
LAB_001d6cf8:
            if (uVar15 < 0x100) {
              if (param_1[1] != 0) goto code_r0x001d6d0b;
              *(undefined4 *)(param_1 + 6) = 6;
              param_1[0xe] = uVar14;
              param_1[0xf] = uVar13;
              *(int *)(param_1 + 0xb) = iVar12;
              *(int *)((long)param_1 + 0x5c) = iVar11;
              goto LAB_001d7038;
            }
            param_1[0xc] = uVar15 - 0x100;
            if (uVar15 - 0x100 != 0) {
switchD_001d6a1c_caseD_7:
              uVar20 = param_1[5];
              if ((ulong)param_1[4] <= uVar20) {
                *(undefined4 *)(param_1 + 6) = 7;
                goto LAB_001d7045;
              }
              bVar8 = (byte)uVar20 & 7;
              uVar13 = 0xffffffffffffffff >> bVar8;
              uVar5 = param_1[0xc];
              uVar14 = *(ulong *)(param_1[3] + (uVar20 >> 3)) >> bVar8;
              if (0x1d < uVar5) break;
              uVar15 = (ulong)*(ushort *)(&_zlibDecodeBufferSafe_litlen_base + uVar5 * 2);
              if (uVar5 != 0x1d && 8 < uVar5) {
                uVar5 = uVar5 - 5 >> 2;
                bVar8 = (byte)uVar5;
                uVar17 = (uint)uVar14;
                uVar14 = uVar14 >> (bVar8 & 0x3f);
                uVar13 = uVar13 >> (bVar8 & 0x3f);
                uVar15 = uVar15 + (~(-1 << (bVar8 & 0x1f)) & uVar17);
                uVar20 = uVar20 + uVar5;
                param_1[5] = uVar20;
              }
              uVar2 = *(ushort *)((long)(param_1 + 0x2012) + ((long)iVar11 & uVar14) * 2);
              if (0x1df < uVar2) break;
              sVar9 = (char)(uVar2 & 0xf) + 1;
              uVar14 = uVar14 >> sVar9;
              uVar13 = uVar13 >> sVar9;
              uVar5 = (ulong)*(ushort *)
                              (&_zlibDecodeBufferSafe_distance_base + (ulong)(uVar2 >> 4) * 2);
              lVar7 = uVar20 + (uVar2 & 0xf) + 1;
              param_1[5] = lVar7;
              if (0x3f < uVar2) {
                uVar20 = (ulong)(uVar2 >> 4) - 2 >> 1;
                bVar8 = (byte)uVar20;
                uVar17 = (uint)uVar14;
                uVar14 = uVar14 >> (bVar8 & 0x3f);
                uVar13 = uVar13 >> (bVar8 & 0x3f);
                uVar5 = uVar5 + (~(-1 << (bVar8 & 0x1f)) & uVar17);
                param_1[5] = lVar7 + uVar20;
              }
switchD_001d6a1c_caseD_9:
              if ((ulong)(param_1[8] - *param_1) <= uVar5 - 1) break;
switchD_001d6a1c_caseD_a:
              uVar20 = param_1[1];
              if (uVar20 < uVar15) {
                lVar7 = param_1[8];
                if (uVar20 == 0) {
                  uVar20 = 0;
                }
                else {
                  uVar18 = 0;
                  do {
                    *(undefined1 *)(lVar7 + uVar18) = *(undefined1 *)((lVar7 - uVar5) + uVar18);
                    uVar18 = uVar18 + 1;
                    uVar20 = param_1[1];
                  } while (uVar18 < uVar20);
                  lVar7 = param_1[8];
                }
                lVar7 = lVar7 + uVar20;
                param_1[8] = lVar7;
                param_1[0xe] = uVar14;
                param_1[0xf] = uVar13;
                *(int *)(param_1 + 0xb) = iVar12;
                *(int *)((long)param_1 + 0x5c) = iVar11;
                param_1[0x10] = uVar5;
                param_1[0x11] = uVar15 - uVar20;
                param_1[1] = 0;
                *(undefined4 *)(param_1 + 6) = 10;
                goto LAB_001d70ae;
              }
              puVar6 = (undefined8 *)param_1[8];
              if (uVar20 < uVar15 + 0x1f) {
                uVar18 = uVar15;
                if (uVar15 != 0) {
                  do {
                    *(undefined1 *)puVar6 = *(undefined1 *)((long)puVar6 - uVar5);
                    puVar6 = (undefined8 *)((long)puVar6 + 1);
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                  uVar20 = param_1[1];
                  puVar6 = (undefined8 *)param_1[8];
                }
                param_1[8] = (long)((long)puVar6 + uVar15);
                param_1[1] = uVar20 - uVar15;
              }
              else {
                puVar1 = (undefined8 *)((long)puVar6 + uVar15);
                param_1[8] = (long)puVar1;
                param_1[1] = uVar20 - uVar15;
                auVar4 = _DAT_0032b310;
                auVar3 = _DAT_0032b300;
                if (uVar5 < 8) {
                  if (uVar5 == 1) {
                    if (0 < (long)uVar15) {
                      lVar7 = (ulong)*(byte *)((long)puVar6 + -1) * 0x101010101010101;
                      puVar19 = puVar6 + 1;
                      if (puVar6 + 1 < puVar1) {
                        puVar19 = puVar1;
                      }
                      puVar16 = (undefined1 *)(~(ulong)puVar6 + (long)puVar19);
                      auVar23._8_4_ = (int)puVar16;
                      auVar23._0_8_ = puVar16;
                      auVar23._12_4_ = (int)((ulong)puVar16 >> 0x20);
                      auVar21._0_8_ = (ulong)puVar16 >> 3;
                      auVar21._8_8_ = auVar23._8_8_ >> 3;
                      uVar15 = 0;
                      auVar21 = auVar21 ^ _DAT_0032b310;
                      do {
                        auVar22._8_4_ = (int)uVar15;
                        auVar22._0_8_ = uVar15;
                        auVar22._12_4_ = (int)(uVar15 >> 0x20);
                        auVar23 = (auVar22 | auVar3) ^ auVar4;
                        if ((bool)(~(auVar21._4_4_ < auVar23._4_4_ ||
                                    auVar21._0_4_ < auVar23._0_4_ && auVar23._4_4_ == auVar21._4_4_)
                                  & 1)) {
                          puVar6[uVar15] = lVar7;
                        }
                        if (auVar23._12_4_ <= auVar21._12_4_ &&
                            (auVar23._8_4_ <= auVar21._8_4_ || auVar23._12_4_ != auVar21._12_4_)) {
                          puVar6[uVar15 + 1] = lVar7;
                        }
                        uVar15 = uVar15 + 2;
                      } while ((((ulong)puVar16 >> 3) + 2 & 0xfffffffffffffffe) != uVar15);
                    }
                  }
                  else if (0 < (long)uVar15) {
                    do {
                      *(undefined2 *)puVar6 = *(undefined2 *)((long)puVar6 + -uVar5);
                      *(undefined2 *)((long)puVar6 + 2) = *(undefined2 *)((long)puVar6 + -uVar5 + 2)
                      ;
                      puVar6 = (undefined8 *)((long)puVar6 + 4);
                    } while (puVar6 < puVar1);
                  }
                }
                else if (0 < (long)uVar15) {
                  do {
                    *puVar6 = *(undefined8 *)((long)puVar6 + -uVar5);
                    puVar6[1] = *(undefined8 *)((long)puVar6 + -uVar5 + 8);
                    puVar6 = puVar6 + 2;
                  } while (puVar6 < puVar1);
                }
              }
              goto switchD_001d6a1c_caseD_5;
            }
            goto switchD_001d6a1c_caseD_0;
          }
          *(undefined4 *)(param_1 + 6) = 0;
          goto LAB_001d7053;
        }
        *(undefined4 *)(param_1 + 6) = 0xb;
LAB_001d7038:
        lVar7 = param_1[8];
        goto LAB_001d70ae;
      case 1:
        uVar5 = param_1[4];
        uVar15 = param_1[5];
        goto switchD_001d6ad8_caseD_0;
      case 2:
        lVar7 = param_1[3];
        uVar5 = param_1[4];
        uVar15 = param_1[5];
        uVar14 = param_1[10];
        goto LAB_001d6b14;
      case 3:
        uVar15 = param_1[5];
        goto switchD_001d6ad8_caseD_2;
      case 4:
        goto switchD_001d6a1c_caseD_4;
      case 5:
        goto switchD_001d6a1c_caseD_5;
      case 6:
        uVar15 = param_1[0xc];
        goto LAB_001d6cf8;
      case 7:
        goto switchD_001d6a1c_caseD_7;
      case 9:
        goto switchD_001d6a1c_caseD_9;
      case 10:
        goto switchD_001d6a1c_caseD_a;
      }
    }
switchD_001d6a1c_caseD_8:
    *(undefined4 *)(param_1 + 6) = 0xc;
  }
LAB_001d7053:
  lVar7 = 0;
LAB_001d7055:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar7;
code_r0x001d6d0b:
  puVar16 = (undefined1 *)param_1[8];
  param_1[8] = (long)(puVar16 + 1);
  *puVar16 = (char)uVar15;
  param_1[1] = param_1[1] + -1;
  goto switchD_001d6a1c_caseD_5;
code_r0x001d6af0:
  lVar7 = param_1[3];
  uVar14 = (ulong)*(ushort *)(lVar7 + (uVar15 + 7 >> 3));
  param_1[10] = uVar14;
  uVar15 = (uVar15 + 7 & 0xfffffffffffffff8) + 0x20;
  param_1[5] = uVar15;
LAB_001d6b14:
  uVar13 = 0;
  if (uVar15 <= uVar5) {
    uVar13 = uVar5 - uVar15;
  }
  uVar5 = uVar13 >> 3;
  if ((ulong)param_1[1] <= uVar13 >> 3) {
    uVar5 = param_1[1];
  }
  if (uVar14 <= uVar5) {
    uVar5 = uVar14;
  }
  _memcpy((void *)param_1[8],(void *)((uVar15 >> 3) + lVar7),uVar5);
  param_1[5] = param_1[5] + uVar5 * 8;
  param_1[1] = param_1[1] - uVar5;
  lVar7 = param_1[8] + uVar5;
  param_1[8] = lVar7;
  lVar10 = param_1[10] - uVar5;
  if (uVar5 <= (ulong)param_1[10] && lVar10 != 0) goto code_r0x001d6b6f;
  goto switchD_001d6a1c_caseD_0;
code_r0x001d6b6f:
  param_1[10] = lVar10;
  *(undefined4 *)(param_1 + 6) = 2;
LAB_001d70ae:
  lVar7 = lVar7 - *param_1;
  goto LAB_001d7055;
}

