// rea decompile_all
// name: _BrotliBuildAndStoreHuffmanTreeFast
// address: 0x91489
// body: available
// range: 0x91489-0x91ba2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x91b9e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliBuildAndStoreHuffmanTreeFast
               (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               ulong *param_7,long param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  long lVar25;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_3 != 0) {
    uVar14 = 0;
    uVar8 = 0;
    do {
      uVar12 = uVar8;
      uVar8 = (ulong)*(uint *)(param_2 + uVar12 * 4);
      if (uVar8 != 0) {
        if (uVar14 < 4) {
          *(ulong *)(local_58 + uVar14 * 8) = uVar12;
        }
        uVar14 = uVar14 + 1;
        param_3 = param_3 - uVar8;
      }
      uVar8 = uVar12 + 1;
    } while (param_3 != 0);
    if (1 < uVar14) {
      ___bzero(param_5,uVar8);
      puVar6 = (uint *)_BrotliAllocate(param_1,uVar8 * 0x10 | 8);
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar24 = 1;
        puVar7 = puVar6;
        uVar15 = uVar12;
        uVar11 = uVar8;
        do {
          while (uVar17 = uVar15, uVar11 != 0) {
            uVar13 = *(uint *)(param_2 + uVar17 * 4);
            if (uVar13 != 0) {
              if (uVar13 < uVar24) {
                uVar13 = uVar24;
              }
              *puVar7 = uVar13;
              *(undefined2 *)(puVar7 + 1) = 0xffff;
              *(short *)((long)puVar7 + 6) = (short)uVar17;
              puVar7 = puVar7 + 2;
            }
            uVar15 = uVar17 - 1;
            uVar11 = uVar17;
          }
          iVar5 = (int)((ulong)((long)puVar7 - (long)puVar6) >> 3);
          uVar11 = (ulong)iVar5;
          if (uVar11 < 0xd) {
            if (1 < uVar11) {
              uVar15 = 1;
              do {
                uVar3 = *(undefined8 *)(puVar6 + uVar15 * 2);
                uVar17 = uVar15;
                do {
                  if (puVar6[uVar17 * 2 + -2] <= (uint)uVar3) goto LAB_00091653;
                  *(undefined8 *)(puVar6 + uVar17 * 2) = *(undefined8 *)(puVar6 + uVar17 * 2 + -2);
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
                uVar17 = 0;
LAB_00091653:
                *(undefined8 *)(puVar6 + uVar17 * 2) = uVar3;
                uVar15 = uVar15 + 1;
              } while (uVar15 != uVar11);
            }
          }
          else {
            uVar15 = (ulong)((uint)(uVar11 < 0x39) * 2);
            do {
              uVar17 = *(ulong *)(&_kBrotliShellGaps + uVar15 * 8);
              if (uVar17 < uVar11) {
                lVar25 = 0;
                uVar9 = uVar17;
                do {
                  uVar3 = *(undefined8 *)(puVar6 + uVar9 * 2);
                  uVar21 = uVar9;
                  for (lVar20 = lVar25;
                      (uVar17 <= uVar21 && ((uint)uVar3 < *(uint *)((long)puVar6 + lVar20)));
                      lVar20 = lVar20 + uVar17 * -8) {
                    *(undefined8 *)(puVar6 + uVar21 * 2) = *(undefined8 *)((long)puVar6 + lVar20);
                    uVar21 = uVar21 - uVar17;
                  }
                  *(undefined8 *)(puVar6 + uVar21 * 2) = uVar3;
                  uVar9 = uVar9 + 1;
                  lVar25 = lVar25 + 8;
                } while (uVar9 != uVar11);
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != 6);
          }
          *puVar7 = 0xffffffff;
          puVar7[1] = 0xffffffff;
          puVar7[2] = 0xffffffff;
          puVar7[3] = 0xffffffff;
          if (1 < iVar5) {
            iVar10 = iVar5 + 1;
            puVar7 = puVar7 + 4;
            uVar13 = iVar5 + 1;
            iVar16 = 0;
            do {
              uVar2 = puVar6[(long)iVar16 * 2];
              uVar1 = puVar6[(long)iVar10 * 2];
              iVar18 = iVar16;
              if (uVar1 < uVar2) {
                iVar18 = iVar10;
              }
              iVar16 = iVar16 + (uint)(uVar2 <= uVar1);
              iVar10 = iVar10 + (uint)(uVar1 < uVar2);
              uVar2 = puVar6[(long)iVar16 * 2];
              uVar1 = puVar6[(long)iVar10 * 2];
              iVar19 = iVar16;
              if (uVar1 < uVar2) {
                iVar19 = iVar10;
              }
              iVar16 = iVar16 + (uint)(uVar2 <= uVar1);
              iVar10 = iVar10 + (uint)(uVar1 < uVar2);
              puVar7[-2] = puVar6[(long)iVar19 * 2] + puVar6[(long)iVar18 * 2];
              *(short *)(puVar7 + -1) = (short)iVar18;
              *(short *)((long)puVar7 + -2) = (short)iVar19;
              puVar7[0] = 0xffffffff;
              puVar7[1] = 0xffffffff;
              puVar7 = puVar7 + 2;
              uVar13 = uVar13 - 1;
            } while (2 < uVar13);
          }
          iVar5 = _BrotliSetDepth(iVar5 * 2 + -1,puVar6,param_5,0xe);
          uVar24 = uVar24 * 2;
          puVar7 = puVar6;
          uVar15 = uVar12;
          uVar11 = uVar8;
        } while (iVar5 == 0);
        _BrotliFree(param_1,puVar6);
        _BrotliConvertBitDepthsToSymbols(param_5,uVar8,param_6);
        if (uVar14 < 5) {
          uVar12 = *param_7;
          *(ulong *)(param_8 + (uVar12 >> 3)) =
               (ulong)*(byte *)(param_8 + (uVar12 >> 3)) | 1L << ((byte)uVar12 & 7);
          uVar8 = uVar12 + 2;
          *param_7 = uVar8;
          *(ulong *)(param_8 + (uVar8 >> 3)) =
               uVar14 - 1 << ((byte)uVar8 & 7) | (ulong)*(byte *)(param_8 + (uVar8 >> 3));
          uVar12 = uVar12 + 4;
          *param_7 = uVar12;
          uVar8 = 0;
          do {
            uVar11 = uVar8 + 1;
            if (uVar11 < uVar14) {
              lVar25 = *(long *)(local_58 + uVar8 * 8);
              uVar15 = uVar11;
              do {
                lVar20 = *(long *)(local_58 + uVar15 * 8);
                if (*(byte *)(param_5 + lVar20) < *(byte *)(param_5 + lVar25)) {
                  *(long *)(local_58 + uVar15 * 8) = lVar25;
                  *(long *)(local_58 + uVar8 * 8) = lVar20;
                  lVar25 = lVar20;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar14);
            }
            uVar8 = uVar11;
          } while (uVar11 != uVar14);
          uVar17 = local_58._0_8_ << ((byte)uVar12 & 7);
          uVar15 = uVar12 >> 3;
          uVar12 = uVar12 + param_4;
          uVar11 = uVar12 >> 3;
          bVar22 = (byte)uVar12;
          uVar8 = uVar12 + param_4;
          if (uVar14 == 3) {
            *(ulong *)(param_8 + uVar15) = uVar17 | *(byte *)(param_8 + uVar15);
            *param_7 = uVar12;
            *(ulong *)(param_8 + uVar11) =
                 local_58._8_8_ << (bVar22 & 7) | (ulong)*(byte *)(param_8 + uVar11);
            *param_7 = uVar8;
            *(ulong *)(param_8 + (uVar8 >> 3)) =
                 local_48._0_8_ << ((byte)uVar8 & 7) | (ulong)*(byte *)(param_8 + (uVar8 >> 3));
            *param_7 = param_4 + uVar8;
          }
          else if (uVar14 == 2) {
            *(ulong *)(param_8 + uVar15) = uVar17 | *(byte *)(param_8 + uVar15);
            *param_7 = uVar12;
            *(ulong *)(param_8 + uVar11) =
                 local_58._8_8_ << (bVar22 & 7) | (ulong)*(byte *)(param_8 + uVar11);
            *param_7 = uVar8;
          }
          else {
            *(ulong *)(param_8 + uVar15) = uVar17 | *(byte *)(param_8 + uVar15);
            *param_7 = uVar12;
            *(ulong *)(param_8 + uVar11) =
                 local_58._8_8_ << (bVar22 & 7) | (ulong)*(byte *)(param_8 + uVar11);
            *param_7 = uVar8;
            *(ulong *)(param_8 + (uVar8 >> 3)) =
                 local_48._0_8_ << ((byte)uVar8 & 7) | (ulong)*(byte *)(param_8 + (uVar8 >> 3));
            uVar8 = uVar8 + param_4;
            *param_7 = uVar8;
            *(ulong *)(param_8 + (uVar8 >> 3)) =
                 local_48._8_8_ << ((byte)uVar8 & 7) | (ulong)*(byte *)(param_8 + (uVar8 >> 3));
            uVar14 = uVar8 + param_4;
            *param_7 = uVar14;
            *(ulong *)(param_8 + (uVar14 >> 3)) =
                 (ulong)(*(char *)(param_5 + local_58._0_8_) == '\x01') << ((byte)uVar14 & 7) |
                 (ulong)*(byte *)(param_8 + (uVar14 >> 3));
            *param_7 = uVar8 + param_4 + 1;
          }
        }
        else {
          uVar14 = *param_7;
          uVar11 = uVar14 + 0x28;
          *(ulong *)(param_8 + (uVar14 >> 3)) =
               0xff55555554 << ((byte)uVar14 & 7) | (ulong)*(byte *)(param_8 + (uVar14 >> 3));
          *param_7 = uVar11;
          if (uVar8 != 0) {
            uVar14 = 0;
            bVar22 = 8;
            do {
              bVar23 = *(byte *)(param_5 + uVar14);
              uVar17 = 1;
              uVar15 = uVar14 + 1;
              if (uVar14 + 1 < uVar8) {
                uVar15 = uVar17;
                do {
                  uVar17 = uVar15;
                  if (*(byte *)(param_5 + uVar14 + uVar15) != bVar23) break;
                  lVar25 = uVar15 + (uVar14 - uVar12);
                  uVar15 = uVar15 + 1;
                  uVar17 = uVar8 - uVar14;
                } while (lVar25 != 0);
                uVar15 = uVar14 + uVar17;
              }
              uVar14 = uVar15;
              if (bVar23 == 0) {
                uVar24 = (&_kZeroRepsDepth)[uVar17];
                *(ulong *)(param_8 + (uVar11 >> 3)) =
                     (&_kZeroRepsBits)[uVar17] << ((byte)uVar11 & 7) |
                     (ulong)*(byte *)(param_8 + (uVar11 >> 3));
                uVar11 = uVar11 + uVar24;
                bVar23 = bVar22;
LAB_00091a8a:
                *param_7 = uVar11;
              }
              else {
                uVar15 = (ulong)bVar23;
                if (bVar22 != bVar23) {
                  bVar22 = (&_kCodeLengthDepth)[uVar15];
                  *(ulong *)(param_8 + (uVar11 >> 3)) =
                       (ulong)*(uint *)(&_kCodeLengthBits + uVar15 * 4) << ((byte)uVar11 & 7) |
                       (ulong)*(byte *)(param_8 + (uVar11 >> 3));
                  uVar11 = uVar11 + bVar22;
                  *param_7 = uVar11;
                  uVar17 = uVar17 - 1;
                }
                if (2 < uVar17) {
                  uVar24 = (&DAT_003282f4)[uVar17];
                  *(ulong *)(param_8 + (uVar11 >> 3)) =
                       (&DAT_00328de8)[uVar17] << ((byte)uVar11 & 7) |
                       (ulong)*(byte *)(param_8 + (uVar11 >> 3));
                  uVar11 = uVar11 + uVar24;
                  goto LAB_00091a8a;
                }
                if (uVar17 != 0) {
                  bVar22 = (&_kCodeLengthDepth)[uVar15];
                  uVar24 = *(uint *)(&_kCodeLengthBits + uVar15 * 4);
                  do {
                    uVar15 = uVar11 >> 3;
                    bVar4 = (byte)uVar11;
                    uVar11 = uVar11 + bVar22;
                    *(ulong *)(param_8 + uVar15) =
                         (ulong)uVar24 << (bVar4 & 7) | (ulong)*(byte *)(param_8 + uVar15);
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                  goto LAB_00091a8a;
                }
              }
              bVar22 = bVar23;
            } while (uVar14 < uVar8);
          }
        }
      }
      goto LAB_00091593;
    }
  }
  uVar14 = *param_7;
  uVar8 = uVar14 + 4;
  *(ulong *)(param_8 + (uVar14 >> 3)) =
       (ulong)*(byte *)(param_8 + (uVar14 >> 3)) | 1L << ((byte)uVar14 & 7);
  *param_7 = uVar8;
  *(ulong *)(param_8 + (uVar8 >> 3)) =
       local_58._0_8_ << ((byte)uVar8 & 7) | (ulong)*(byte *)(param_8 + (uVar8 >> 3));
  *param_7 = uVar14 + param_4 + 4;
  *(undefined1 *)(param_5 + local_58._0_8_) = 0;
  *(undefined2 *)(param_6 + local_58._0_8_ * 2) = 0;
LAB_00091593:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

