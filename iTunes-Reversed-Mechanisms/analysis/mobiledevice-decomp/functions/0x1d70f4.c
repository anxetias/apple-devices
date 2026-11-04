// rea decompile_all
// name: _zlibDecodeBufferSafe
// address: 0x1d70f4
// body: available
// range: 0x1d70f4-0x1d79a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d79a5 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _zlibDecodeBufferSafe(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  sbyte sVar10;
  long lVar11;
  ulong uVar12;
  size_t sVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulong local_158 [36];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar16 = *(uint *)(param_1 + 6);
  if (uVar16 != 0xb) {
    if (uVar16 < 0xb) {
      plVar1 = param_1 + 0x2012;
      uVar7 = param_1[0x11];
      uVar12 = param_1[0x10];
      uVar15 = param_1[0xe];
      uVar14 = param_1[0xf];
      iVar22 = (int)param_1[0xb];
      iVar21 = *(int *)((long)param_1 + 0x5c);
      switch(uVar16) {
      case 0:
switchD_001d7180_caseD_0:
        if (*(int *)((long)param_1 + 0x34) == 0) {
          uVar12 = param_1[4];
          uVar7 = param_1[5];
          uVar15 = 0;
          if (uVar7 <= uVar12) {
            uVar15 = uVar12 - uVar7;
          }
          if (2 < uVar15) {
            sVar13 = (uVar12 + 7) - uVar7 >> 3;
            if (7 < sVar13) {
              sVar13 = 8;
            }
            local_158[0] = 0;
            lVar6 = param_1[3];
            _memcpy(local_158,(void *)((uVar7 >> 3) + lVar6),sVar13);
            uVar15 = uVar7 + 1;
            param_1[5] = uVar15;
            *(uint *)((long)param_1 + 0x34) =
                 (uint)(((uint)local_158[0] >> ((uint)uVar7 & 7) & 1) != 0);
            sVar13 = uVar12 + ~uVar7 + 7 >> 3;
            if (7 < sVar13) {
              sVar13 = 8;
            }
            local_158[0] = 0;
            _memcpy(local_158,(void *)((uVar15 >> 3) + lVar6),sVar13);
            uVar7 = uVar7 + 3;
            param_1[5] = uVar7;
            param_1[9] = 0x800000008000;
            switch((uint)(local_158[0] >> ((byte)uVar15 & 7)) & 3) {
            case 0:
switchD_001d72a9_caseD_0:
              uVar15 = 0;
              if (uVar7 <= uVar12) {
                uVar15 = uVar12 - uVar7;
              }
              if (0xf < uVar15) goto code_r0x001d72c1;
              *(undefined4 *)(param_1 + 6) = 1;
              goto LAB_001d7887;
            case 1:
              uVar7 = 0;
              do {
                if (uVar7 < 0x90) {
LAB_001d73d7:
                  *(undefined1 *)((long)local_158 + uVar7) = 8;
                }
                else if (uVar7 < 0x100) {
                  *(undefined1 *)((long)local_158 + uVar7) = 9;
                }
                else {
                  if (0x117 < uVar7) goto LAB_001d73d7;
                  *(undefined1 *)((long)local_158 + uVar7) = 7;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 != 0x120);
              local_168 = 0x505050505050505;
              uStack_160 = 0x505050505050505;
              local_178 = 0x505050505050505;
              uStack_170 = 0x505050505050505;
              iVar22 = _getDecoderTable(0x120,local_158,0x8000,param_1 + 0x12);
              if ((iVar22 == 0) ||
                 (iVar21 = _getDecoderTable(0x20,&local_178,*(undefined4 *)((long)param_1 + 0x4c),
                                            plVar1), iVar21 == 0)) goto switchD_001d7180_caseD_8;
              *(int *)(param_1 + 9) = iVar22;
              *(int *)((long)param_1 + 0x4c) = iVar21;
              break;
            case 2:
switchD_001d72a9_caseD_2:
              iVar22 = _readHuffmanTable(param_1 + 3,param_1 + 9,param_1 + 0x12,(long)param_1 + 0x4c
                                         ,plVar1);
              if (iVar22 != 0) {
                param_1[5] = uVar7;
                *(undefined4 *)(param_1 + 6) = 3;
                goto LAB_001d7887;
              }
              break;
            case 3:
              goto switchD_001d7180_caseD_8;
            }
switchD_001d7180_caseD_4:
            iVar22 = (int)param_1[9] + -1;
            iVar21 = *(int *)((long)param_1 + 0x4c) + -1;
            uVar14 = 0;
            uVar15 = 0;
switchD_001d7180_caseD_5:
            while( true ) {
              if (uVar14 < (ulong)(long)iVar22) {
                uVar12 = param_1[5];
                lVar6 = param_1[4] - uVar12;
                if ((ulong)param_1[4] < uVar12 || lVar6 == 0) {
                  *(undefined4 *)(param_1 + 6) = 5;
                  param_1[0xe] = uVar15;
                  param_1[0xf] = uVar14;
                  *(int *)(param_1 + 0xb) = iVar22;
                  *(int *)((long)param_1 + 0x5c) = iVar21;
                  goto LAB_001d7887;
                }
                uVar7 = lVar6 + 7U >> 3;
                sVar13 = 8;
                if (uVar7 < 8) {
                  sVar13 = uVar7;
                }
                local_158[0] = 0;
                _memcpy(local_158,(void *)((uVar12 >> 3) + param_1[3]),sVar13);
                bVar9 = (byte)uVar12 & 7;
                uVar14 = (0xffffffffffffffffU >> (-(char)((int)sVar13 << 3) & 0x3fU)) >> bVar9;
                uVar15 = local_158[0] >> bVar9;
              }
              else {
                uVar12 = param_1[5];
              }
              uVar3 = *(ushort *)((long)param_1 + ((long)iVar22 & uVar15) * 2 + 0x90);
              uVar16 = uVar3 & 0xf;
              sVar10 = (char)uVar16 + 1;
              uVar15 = uVar15 >> sVar10;
              uVar14 = uVar14 >> sVar10;
              uVar7 = (ulong)(uVar3 >> 4);
              param_1[0xc] = uVar7;
              param_1[5] = uVar16 + uVar12 + 1;
LAB_001d757b:
              if (0xff < uVar7) break;
              if (param_1[1] == 0) {
                *(undefined4 *)(param_1 + 6) = 6;
                param_1[0xe] = uVar15;
                param_1[0xf] = uVar14;
                *(int *)(param_1 + 0xb) = iVar22;
                *(int *)((long)param_1 + 0x5c) = iVar21;
                goto LAB_001d7942;
              }
              puVar17 = (undefined1 *)param_1[8];
              param_1[8] = (long)(puVar17 + 1);
              *puVar17 = (char)uVar7;
              param_1[1] = param_1[1] + -1;
            }
            param_1[0xc] = uVar7 - 0x100;
            if (uVar7 - 0x100 != 0) {
switchD_001d7180_caseD_7:
              uVar20 = param_1[5];
              lVar6 = param_1[4] - uVar20;
              if (uVar20 <= (ulong)param_1[4] && lVar6 != 0) {
                uVar7 = lVar6 + 7U >> 3;
                sVar13 = 8;
                if (uVar7 < 8) {
                  sVar13 = uVar7;
                }
                local_158[0] = 0;
                _memcpy(local_158,(void *)((uVar20 >> 3) + param_1[3]),sVar13);
                bVar9 = (byte)uVar20 & 7;
                uVar14 = (0xffffffffffffffffU >> (-(char)((int)sVar13 << 3) & 0x3fU)) >> bVar9;
                uVar15 = local_158[0] >> bVar9;
                uVar12 = param_1[0xc];
                if (uVar12 < 0x1e) {
                  uVar7 = (ulong)*(ushort *)(&_zlibDecodeBufferSafe_litlen_base + uVar12 * 2);
                  if (uVar12 != 0x1d && 8 < uVar12) {
                    uVar12 = uVar12 - 5 >> 2;
                    bVar9 = (byte)uVar12;
                    uVar16 = (uint)uVar15;
                    uVar15 = uVar15 >> (bVar9 & 0x3f);
                    uVar14 = uVar14 >> (bVar9 & 0x3f);
                    uVar7 = uVar7 + (~(-1 << (bVar9 & 0x1f)) & uVar16);
                    uVar20 = uVar20 + uVar12;
                    param_1[5] = uVar20;
                  }
                  uVar3 = *(ushort *)((long)plVar1 + ((long)iVar21 & uVar15) * 2);
                  if (uVar3 < 0x1e0) {
                    sVar10 = (char)(uVar3 & 0xf) + 1;
                    uVar15 = uVar15 >> sVar10;
                    uVar14 = uVar14 >> sVar10;
                    uVar12 = (ulong)*(ushort *)
                                     (&_zlibDecodeBufferSafe_distance_base + (ulong)(uVar3 >> 4) * 2
                                     );
                    lVar6 = (uVar3 & 0xf) + uVar20 + 1;
                    param_1[5] = lVar6;
                    if (0x3f < uVar3) {
                      uVar20 = (ulong)(uVar3 >> 4) - 2 >> 1;
                      bVar9 = (byte)uVar20;
                      uVar16 = (uint)uVar15;
                      uVar15 = uVar15 >> (bVar9 & 0x3f);
                      uVar14 = uVar14 >> (bVar9 & 0x3f);
                      uVar12 = uVar12 + (~(-1 << (bVar9 & 0x1f)) & uVar16);
                      param_1[5] = lVar6 + uVar20;
                    }
switchD_001d7180_caseD_9:
                    if (uVar12 - 1 < (ulong)(param_1[8] - *param_1)) {
switchD_001d7180_caseD_a:
                      uVar20 = param_1[1];
                      if (uVar7 <= uVar20) goto code_r0x001d7726;
                      lVar6 = param_1[8];
                      if (uVar20 == 0) {
                        uVar20 = 0;
                      }
                      else {
                        uVar18 = 0;
                        do {
                          *(undefined1 *)(lVar6 + uVar18) =
                               *(undefined1 *)((lVar6 - uVar12) + uVar18);
                          uVar18 = uVar18 + 1;
                          uVar20 = param_1[1];
                        } while (uVar18 < uVar20);
                        lVar6 = param_1[8];
                      }
                      lVar6 = lVar6 + uVar20;
                      param_1[8] = lVar6;
                      param_1[0xe] = uVar15;
                      param_1[0xf] = uVar14;
                      *(int *)(param_1 + 0xb) = iVar22;
                      *(int *)((long)param_1 + 0x5c) = iVar21;
                      param_1[0x10] = uVar12;
                      param_1[0x11] = uVar7 - uVar20;
                      param_1[1] = 0;
                      *(undefined4 *)(param_1 + 6) = 10;
                      goto LAB_001d799d;
                    }
                  }
                }
                break;
              }
              *(undefined4 *)(param_1 + 6) = 7;
              param_1[0xe] = uVar15;
              param_1[0xf] = uVar14;
              *(int *)(param_1 + 0xb) = iVar22;
              *(int *)((long)param_1 + 0x5c) = iVar21;
              goto LAB_001d7887;
            }
            goto switchD_001d7180_caseD_0;
          }
          *(undefined4 *)(param_1 + 6) = 0;
          goto LAB_001d7887;
        }
        *(undefined4 *)(param_1 + 6) = 0xb;
LAB_001d7942:
        lVar6 = param_1[8];
        goto LAB_001d799d;
      case 1:
        uVar12 = param_1[4];
        uVar7 = param_1[5];
        goto switchD_001d72a9_caseD_0;
      case 2:
        lVar6 = param_1[3];
        uVar12 = param_1[4];
        uVar15 = param_1[5];
        uVar7 = param_1[10];
        goto LAB_001d7325;
      case 3:
        uVar7 = param_1[5];
        goto switchD_001d72a9_caseD_2;
      case 4:
        goto switchD_001d7180_caseD_4;
      case 5:
        goto switchD_001d7180_caseD_5;
      case 6:
        uVar7 = param_1[0xc];
        goto LAB_001d757b;
      case 7:
        goto switchD_001d7180_caseD_7;
      case 9:
        goto switchD_001d7180_caseD_9;
      case 10:
        goto switchD_001d7180_caseD_a;
      }
    }
switchD_001d7180_caseD_8:
    *(undefined4 *)(param_1 + 6) = 0xc;
  }
LAB_001d7887:
  lVar6 = 0;
LAB_001d7889:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar6;
code_r0x001d7726:
  puVar8 = (undefined8 *)param_1[8];
  if (uVar20 < uVar7 + 0x1f) {
    uVar18 = uVar7;
    if (uVar7 != 0) {
      do {
        *(undefined1 *)puVar8 = *(undefined1 *)((long)puVar8 - uVar12);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      uVar20 = param_1[1];
      puVar8 = (undefined8 *)param_1[8];
    }
    param_1[8] = (long)((long)puVar8 + uVar7);
    param_1[1] = uVar20 - uVar7;
  }
  else {
    puVar2 = (undefined8 *)((long)puVar8 + uVar7);
    param_1[8] = (long)puVar2;
    param_1[1] = uVar20 - uVar7;
    auVar5 = _DAT_0032b310;
    auVar4 = _DAT_0032b300;
    if (uVar12 < 8) {
      if (uVar12 == 1) {
        if (0 < (long)uVar7) {
          lVar6 = (ulong)*(byte *)((long)puVar8 + -1) * 0x101010101010101;
          puVar19 = puVar8 + 1;
          if (puVar8 + 1 < puVar2) {
            puVar19 = puVar2;
          }
          puVar17 = (undefined1 *)(~(ulong)puVar8 + (long)puVar19);
          auVar25._8_4_ = (int)puVar17;
          auVar25._0_8_ = puVar17;
          auVar25._12_4_ = (int)((ulong)puVar17 >> 0x20);
          auVar23._0_8_ = (ulong)puVar17 >> 3;
          auVar23._8_8_ = auVar25._8_8_ >> 3;
          uVar7 = 0;
          auVar23 = auVar23 ^ _DAT_0032b310;
          do {
            auVar24._8_4_ = (int)uVar7;
            auVar24._0_8_ = uVar7;
            auVar24._12_4_ = (int)(uVar7 >> 0x20);
            auVar25 = (auVar24 | auVar4) ^ auVar5;
            if ((bool)(~(auVar23._4_4_ < auVar25._4_4_ ||
                        auVar23._0_4_ < auVar25._0_4_ && auVar25._4_4_ == auVar23._4_4_) & 1)) {
              puVar8[uVar7] = lVar6;
            }
            if (auVar25._12_4_ <= auVar23._12_4_ &&
                (auVar25._8_4_ <= auVar23._8_4_ || auVar25._12_4_ != auVar23._12_4_)) {
              puVar8[uVar7 + 1] = lVar6;
            }
            uVar7 = uVar7 + 2;
          } while ((((ulong)puVar17 >> 3) + 2 & 0xfffffffffffffffe) != uVar7);
        }
      }
      else if (0 < (long)uVar7) {
        do {
          *(undefined2 *)puVar8 = *(undefined2 *)((long)puVar8 + -uVar12);
          *(undefined2 *)((long)puVar8 + 2) = *(undefined2 *)((long)puVar8 + -uVar12 + 2);
          puVar8 = (undefined8 *)((long)puVar8 + 4);
        } while (puVar8 < puVar2);
      }
    }
    else if (0 < (long)uVar7) {
      do {
        *puVar8 = *(undefined8 *)((long)puVar8 + -uVar12);
        puVar8[1] = *(undefined8 *)((long)puVar8 + -uVar12 + 8);
        puVar8 = puVar8 + 2;
      } while (puVar8 < puVar2);
    }
  }
  goto switchD_001d7180_caseD_5;
code_r0x001d72c1:
  uVar15 = uVar7 + 7 & 0xfffffffffffffff8;
  param_1[5] = uVar15;
  uVar14 = (uVar12 - uVar15) + 7 >> 3;
  sVar13 = 8;
  if (uVar14 < 8) {
    sVar13 = uVar14;
  }
  local_158[0] = 0;
  lVar6 = param_1[3];
  _memcpy(local_158,(void *)((uVar7 + 7 >> 3) + lVar6),sVar13);
  uVar7 = local_158[0] & 0xffff;
  param_1[10] = uVar7;
  uVar15 = uVar15 + 0x20;
  param_1[5] = uVar15;
LAB_001d7325:
  uVar14 = 0;
  if (uVar15 <= uVar12) {
    uVar14 = uVar12 - uVar15;
  }
  uVar12 = uVar14 >> 3;
  if ((ulong)param_1[1] <= uVar14 >> 3) {
    uVar12 = param_1[1];
  }
  if (uVar7 <= uVar12) {
    uVar12 = uVar7;
  }
  _memcpy((void *)param_1[8],(void *)((uVar15 >> 3) + lVar6),uVar12);
  param_1[5] = param_1[5] + uVar12 * 8;
  param_1[1] = param_1[1] - uVar12;
  lVar6 = param_1[8] + uVar12;
  param_1[8] = lVar6;
  lVar11 = param_1[10] - uVar12;
  if (uVar12 <= (ulong)param_1[10] && lVar11 != 0) goto code_r0x001d7383;
  goto switchD_001d7180_caseD_0;
code_r0x001d7383:
  param_1[10] = lVar11;
  *(undefined4 *)(param_1 + 6) = 2;
LAB_001d799d:
  lVar6 = lVar6 - *param_1;
  goto LAB_001d7889;
}

