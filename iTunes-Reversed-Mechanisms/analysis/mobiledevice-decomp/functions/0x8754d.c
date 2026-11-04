// rea decompile_all
// name: _ReadHuffmanCode
// address: 0x8754d
// body: available
// range: 0x8754d-0x87f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ReadHuffmanCode(int param_1,uint param_2,undefined8 param_3,undefined4 *param_4,long param_5)

{
  ulong *puVar1;
  undefined1 (*pauVar2) [16];
  short *psVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  sbyte sVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int local_3c;
  uint local_38;
  
  puVar1 = (ulong *)(param_5 + 8);
  pauVar2 = (undefined1 (*) [16])(param_5 + 0x9ca);
  iVar14 = *(int *)(param_5 + 0x2f0);
  while (iVar14 == 0) {
    iVar14 = *(int *)(param_5 + 0x10);
    if (iVar14 - 0x3fU < 2) {
      if (*(long *)(param_5 + 0x20) == 0) {
        return 2;
      }
      uVar17 = *(ulong *)(param_5 + 8);
      *(ulong *)(param_5 + 8) = uVar17 >> 8;
      uVar17 = (ulong)**(byte **)(param_5 + 0x18) << 0x38 | uVar17 >> 8;
      *(ulong *)(param_5 + 8) = uVar17;
      iVar14 = iVar14 + -8;
      *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
      *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
    }
    else {
      uVar17 = *puVar1;
    }
    uVar16 = (uint)(uVar17 >> ((byte)iVar14 & 0x3f)) & 3;
    *(uint *)(param_5 + 0x2f4) = uVar16;
    iVar14 = iVar14 + 2;
    *(int *)(param_5 + 0x10) = iVar14;
    if (uVar16 == 1) goto LAB_00087643;
    *(undefined8 *)(param_5 + 0x304) = 0x2000000000;
    *(undefined1 (*) [16])(param_5 + 0x9c6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_5 + 0x9b8) = (undefined1  [16])0x0;
    *(undefined4 *)(param_5 + 0x2f0) = 4;
    iVar14 = 4;
  }
  switch(iVar14) {
  case 1:
    iVar14 = *(int *)(param_5 + 0x10);
LAB_00087643:
    if (iVar14 - 0x3fU < 2) {
      if (*(long *)(param_5 + 0x20) == 0) {
        *(undefined4 *)(param_5 + 0x2f0) = 1;
        return 2;
      }
      uVar17 = *(ulong *)(param_5 + 8);
      *(ulong *)(param_5 + 8) = uVar17 >> 8;
      uVar17 = (ulong)**(byte **)(param_5 + 0x18) << 0x38 | uVar17 >> 8;
      *(ulong *)(param_5 + 8) = uVar17;
      iVar14 = iVar14 + -8;
      *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
      *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
    }
    else {
      uVar17 = *puVar1;
    }
    uVar16 = (uint)(uVar17 >> ((byte)iVar14 & 0x3f)) & 3;
    *(uint *)(param_5 + 0x300) = uVar16;
    *(int *)(param_5 + 0x10) = iVar14 + 2;
    *(undefined4 *)(param_5 + 0x2f4) = 0;
    uVar21 = 0;
    break;
  case 2:
    uVar21 = *(uint *)(param_5 + 0x2f4);
    uVar16 = *(uint *)(param_5 + 0x300);
    break;
  case 3:
    uVar16 = *(uint *)(param_5 + 0x300);
    goto LAB_000876d3;
  case 4:
    uVar17 = (ulong)*(uint *)(param_5 + 0x2f4);
    iVar14 = *(int *)(param_5 + 0x304);
    iVar10 = *(int *)(param_5 + 0x308);
    if (uVar17 < 0x12) {
      iVar23 = *(int *)(param_5 + 0x10);
      do {
        bVar5 = (&_kCodeLengthCodeOrder)[uVar17];
        if (iVar23 - 0x3dU < 4) {
          if (*(long *)(param_5 + 0x20) != 0) {
            uVar15 = *(ulong *)(param_5 + 8);
            *(ulong *)(param_5 + 8) = uVar15 >> 8;
            uVar15 = (ulong)**(byte **)(param_5 + 0x18) << 0x38 | uVar15 >> 8;
            *(ulong *)(param_5 + 8) = uVar15;
            iVar23 = iVar23 + -8;
            *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
            *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
            goto LAB_000877bb;
          }
          if (iVar23 + -0x40 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *puVar1 >> ((byte)iVar23 & 0x3f);
          }
          uVar16 = (uint)(byte)(&_kCodeLengthPrefixLength)[uVar15];
          if ((uint)-(iVar23 + -0x40) < uVar16) {
            *(int *)(param_5 + 0x2f4) = (int)uVar17;
            *(int *)(param_5 + 0x304) = iVar14;
            *(int *)(param_5 + 0x308) = iVar10;
            *(undefined4 *)(param_5 + 0x2f0) = 4;
            return 2;
          }
        }
        else {
          uVar15 = *puVar1;
LAB_000877bb:
          uVar15 = (ulong)((uint)(uVar15 >> ((byte)iVar23 & 0x3f)) & 0xf);
          uVar16 = (uint)(byte)(&_kCodeLengthPrefixLength)[uVar15];
        }
        iVar23 = uVar16 + iVar23;
        bVar4 = (&_kCodeLengthPrefixValue)[uVar15];
        *(int *)(param_5 + 0x10) = iVar23;
        *(byte *)(param_5 + 0x9b8 + (ulong)bVar5) = bVar4;
        if ((0x1111UL >> (uVar15 & 0x3f) & 1) == 0) {
          *(short *)(*pauVar2 + (ulong)bVar4 * 2) = *(short *)(*pauVar2 + (ulong)bVar4 * 2) + 1;
          iVar10 = iVar10 - (0x20U >> (bVar4 & 0x1f));
          iVar14 = iVar14 + 1;
          if (iVar10 - 0x21U < 0xffffffe0) break;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 != 0x12);
    }
    if ((iVar14 != 1) && (iVar10 != 0)) {
      return 0xfffffffa;
    }
    _BrotliBuildCodeLengthsHuffmanTable
              (param_5 + 0x30c,(undefined1 (*) [16])(param_5 + 0x9b8),pauVar2);
    *(undefined1 (*) [16])(param_5 + 0x9da) = (undefined1  [16])0x0;
    *pauVar2 = (undefined1  [16])0x0;
    auVar9 = _DAT_0032b2c0;
    auVar8 = _DAT_0032b2b0;
    lVar25 = *(long *)(param_5 + 0x390);
    lVar12 = 0;
    do {
      auVar26._8_4_ = (int)lVar12;
      auVar26._0_8_ = lVar12;
      auVar26._12_4_ = (int)((ulong)lVar12 >> 0x20);
      auVar27 = packssdw(auVar26 | auVar9,auVar26 | auVar8);
      *(undefined1 (*) [16])(param_5 + 0x938 + lVar12 * 4) = auVar27;
      *(undefined8 *)(lVar25 + SUB168(auVar26 | auVar9,0) * 2) = 0xffffffffffffffff;
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0x10);
    *(undefined8 *)(param_5 + 0x2f8) = 0x800000000;
    *(undefined8 *)(param_5 + 0x300) = 0;
    *(undefined4 *)(param_5 + 0x308) = 0x8000;
    *(undefined4 *)(param_5 + 0x2f0) = 5;
    local_3c = 0x8000;
    local_38 = 8;
    uVar21 = 0;
    iVar14 = 0;
    uVar16 = 0;
    goto LAB_00087a78;
  case 5:
    uVar16 = *(uint *)(param_5 + 0x300);
    iVar14 = *(int *)(param_5 + 0x304);
    local_3c = *(int *)(param_5 + 0x308);
    uVar21 = *(uint *)(param_5 + 0x2f8);
    local_38 = *(uint *)(param_5 + 0x2fc);
    lVar25 = *(long *)(param_5 + 0x390);
LAB_00087a78:
    iVar10 = _BrotliWarmupBitReader();
    if (iVar10 == 0) {
      uVar16 = *(uint *)(param_5 + 0x300);
      local_3c = *(int *)(param_5 + 0x308);
LAB_00087cb9:
      if (uVar16 < param_2) {
        bVar7 = false;
        do {
          if (local_3c == 0) goto LAB_00087f08;
          if (bVar7) {
            if (*(long *)(param_5 + 0x20) == 0) {
              return 2;
            }
            uVar17 = *(ulong *)(param_5 + 8);
            *(ulong *)(param_5 + 8) = uVar17 >> 8;
            *(ulong *)(param_5 + 8) = (ulong)**(byte **)(param_5 + 0x18) << 0x38 | uVar17 >> 8;
            iVar14 = *(int *)(param_5 + 0x10) + -8;
            *(int *)(param_5 + 0x10) = iVar14;
            *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
            *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
          }
          else {
            iVar14 = *(int *)(param_5 + 0x10);
          }
          uVar21 = 0;
          if (iVar14 + -0x40 != 0) {
            uVar21 = (uint)(*puVar1 >> ((byte)iVar14 & 0x3f));
          }
          uVar19 = -(iVar14 + -0x40);
          bVar5 = *(byte *)(param_5 + 0x30c + (ulong)(uVar21 & 0x1f) * 4);
          bVar7 = true;
          if (bVar5 <= uVar19) {
            uVar6 = *(ushort *)(param_5 + 0x30e + (ulong)(uVar21 & 0x1f) * 4);
            if (uVar6 < 0x10) {
              *(uint *)(param_5 + 0x10) = iVar14 + (uint)bVar5;
              *(undefined4 *)(param_5 + 0x304) = 0;
              uVar21 = (uint)uVar6;
              if (uVar21 != 0) {
                uVar17 = (ulong)uVar21;
                *(short *)(*(long *)(param_5 + 0x390) +
                          (long)*(int *)(param_5 + 0x938 + uVar17 * 4) * 2) = (short)uVar16;
                *(uint *)(param_5 + 0x938 + uVar17 * 4) = uVar16;
                *(uint *)(param_5 + 0x2fc) = uVar21;
                local_3c = local_3c - (0x8000U >> ((byte)uVar6 & 0x1f));
                *(int *)(param_5 + 0x308) = local_3c;
                psVar3 = (short *)(param_5 + 0x9ca + uVar17 * 2);
                *psVar3 = *psVar3 + 1;
              }
              uVar16 = uVar16 + 1;
              *(uint *)(param_5 + 0x300) = uVar16;
              bVar7 = false;
            }
            else {
              uVar20 = ((uint)uVar6 + (uint)bVar5) - 0xe;
              if (uVar20 <= uVar19) {
                uVar21 = uVar21 >> (bVar5 & 0x1f) &
                         *(uint *)(&_kBrotliBitMask + (ulong)(uVar6 - 0xe) * 4);
                *(uint *)(param_5 + 0x10) = uVar20 + iVar14;
                if (uVar6 == 0x10) {
                  uVar19 = *(uint *)(param_5 + 0x2fc);
                  sVar13 = 2;
                }
                else {
                  uVar19 = 0;
                  sVar13 = 3;
                }
                if (*(uint *)(param_5 + 0x2f8) == uVar19) {
                  iVar14 = *(int *)(param_5 + 0x304);
                  if (iVar14 == 0) goto LAB_00087e3d;
                  iVar10 = iVar14 + -2 << sVar13;
                }
                else {
                  *(uint *)(param_5 + 0x2f8) = uVar19;
LAB_00087e3d:
                  iVar10 = 0;
                  iVar14 = 0;
                }
                lVar25 = *(long *)(param_5 + 0x390);
                iVar23 = uVar21 + iVar10 + 3;
                *(int *)(param_5 + 0x304) = iVar23;
                iVar23 = iVar23 - iVar14;
                uVar20 = iVar23 + uVar16;
                if (param_2 < uVar20) {
                  *(uint *)(param_5 + 0x300) = param_2;
                  *(undefined4 *)(param_5 + 0x308) = 0xfffff;
                  return 0xfffffff9;
                }
                if (uVar19 == 0) {
                  *(uint *)(param_5 + 0x300) = uVar20;
                }
                else {
                  uVar17 = (ulong)uVar19;
                  iVar14 = ((iVar10 + uVar21) - iVar14) + 3;
                  uVar21 = *(uint *)(param_5 + 0x938 + uVar17 * 4);
                  do {
                    uVar22 = uVar16;
                    *(short *)(lVar25 + (long)(int)uVar21 * 2) = (short)uVar22;
                    iVar14 = iVar14 + -1;
                    uVar16 = uVar22 + 1;
                    uVar21 = uVar22;
                  } while (iVar14 != 0);
                  *(uint *)(param_5 + 0x300) = uVar20;
                  *(uint *)(param_5 + 0x938 + uVar17 * 4) = uVar22;
                  local_3c = local_3c - (iVar23 << (0xfU - (char)uVar19 & 0x1f));
                  *(int *)(param_5 + 0x308) = local_3c;
                  psVar3 = (short *)(param_5 + 0x9ca + uVar17 * 2);
                  *psVar3 = *psVar3 + (short)iVar23;
                }
                bVar7 = false;
                uVar16 = uVar20;
              }
            }
          }
        } while (uVar16 < param_2);
      }
    }
    else {
      if (local_3c != 0 && uVar16 < param_2) {
        uVar17 = *(ulong *)(param_5 + 0x20);
        do {
          if (uVar17 < 4) {
            *(uint *)(param_5 + 0x300) = uVar16;
            *(int *)(param_5 + 0x304) = iVar14;
            *(uint *)(param_5 + 0x2fc) = local_38;
            *(uint *)(param_5 + 0x2f8) = uVar21;
            *(int *)(param_5 + 0x308) = local_3c;
            goto LAB_00087cb9;
          }
          uVar19 = *(uint *)(param_5 + 0x10);
          uVar15 = *(ulong *)(param_5 + 8);
          if (0x1f < uVar19) {
            uVar19 = uVar19 ^ 0x20;
            *(uint *)(param_5 + 0x10) = uVar19;
            uVar15 = uVar15 >> 0x20 | (ulong)**(uint **)(param_5 + 0x18) << 0x20;
            *(ulong *)(param_5 + 8) = uVar15;
            uVar17 = uVar17 - 4;
            *(ulong *)(param_5 + 0x20) = uVar17;
            *(uint **)(param_5 + 0x18) = *(uint **)(param_5 + 0x18) + 1;
          }
          uVar18 = (ulong)((uint)(uVar15 >> ((byte)uVar19 & 0x3f)) & 0x1f);
          iVar10 = *(byte *)(param_5 + 0x30c + uVar18 * 4) + uVar19;
          *(int *)(param_5 + 0x10) = iVar10;
          uVar6 = *(ushort *)(param_5 + 0x30e + uVar18 * 4);
          if (uVar6 < 0x10) {
            uVar19 = (uint)uVar6;
            if (uVar19 != 0) {
              uVar15 = (ulong)uVar19;
              *(short *)(lVar25 + (long)*(int *)(param_5 + 0x938 + uVar15 * 4) * 2) = (short)uVar16;
              *(uint *)(param_5 + 0x938 + uVar15 * 4) = uVar16;
              local_3c = local_3c - (0x8000U >> ((byte)uVar6 & 0x1f));
              psVar3 = (short *)(param_5 + 0x9ca + uVar15 * 2);
              *psVar3 = *psVar3 + 1;
              local_38 = uVar19;
            }
            uVar16 = uVar16 + 1;
            iVar14 = 0;
          }
          else {
            iVar23 = 0;
            uVar19 = 0;
            if (uVar6 == 0x10) {
              uVar19 = local_38;
            }
            uVar20 = uVar6 == 0x10 ^ 3;
            uVar22 = (uint)(uVar15 >> ((byte)iVar10 & 0x3f)) &
                     *(uint *)(&_kBrotliBitMask + (ulong)uVar20 * 4);
            *(uint *)(param_5 + 0x10) = iVar10 + uVar20;
            if ((uVar21 == uVar19) && (uVar19 = uVar21, iVar14 != 0)) {
              iVar23 = iVar14 + -2 << (sbyte)uVar20;
            }
            else {
              iVar14 = 0;
            }
            iVar10 = uVar22 + iVar23 + 3;
            iVar24 = iVar10 - iVar14;
            uVar20 = iVar24 + uVar16;
            if (param_2 < uVar20) {
              local_3c = 0xfffff;
              break;
            }
            if (uVar19 == 0) {
              uVar21 = 0;
              uVar16 = uVar20;
              iVar14 = iVar10;
            }
            else {
              uVar15 = (ulong)uVar19;
              iVar14 = ((iVar23 + uVar22) - iVar14) + 3;
              uVar21 = *(uint *)(param_5 + 0x938 + uVar15 * 4);
              do {
                uVar22 = uVar16;
                *(short *)(lVar25 + (long)(int)uVar21 * 2) = (short)uVar22;
                iVar14 = iVar14 + -1;
                uVar16 = uVar22 + 1;
                uVar21 = uVar22;
              } while (iVar14 != 0);
              *(uint *)(param_5 + 0x938 + uVar15 * 4) = uVar22;
              psVar3 = (short *)(param_5 + 0x9ca + uVar15 * 2);
              *psVar3 = *psVar3 + (short)iVar24;
              local_3c = local_3c - (iVar24 << (0xfU - (char)uVar19 & 0x1f));
              uVar16 = uVar20;
              iVar14 = iVar10;
              uVar21 = uVar19;
            }
          }
          if ((param_2 <= uVar16) || (local_3c == 0)) break;
        } while( true );
      }
      *(int *)(param_5 + 0x308) = local_3c;
    }
    if (local_3c != 0) {
      return 0xfffffff9;
    }
LAB_00087f08:
    uVar11 = _BrotliBuildHuffmanTable(param_3,8,*(undefined8 *)(param_5 + 0x390),pauVar2);
    goto LAB_00087f21;
  default:
    return 0xffffffe1;
  }
  uVar20 = param_1 - 1;
  uVar19 = 0x1f;
  if (uVar20 != 0) {
    for (; uVar20 >> uVar19 == 0; uVar19 = uVar19 - 1) {
    }
  }
  uVar19 = (uVar19 ^ 0xffffffe0) + 0x21;
  if (uVar20 == 0) {
    uVar19 = 0;
  }
  if (uVar21 <= uVar16) {
    iVar14 = *(int *)(param_5 + 0x10);
    do {
      uVar20 = 0x40 - iVar14;
      if (uVar20 < uVar19) {
        lVar25 = *(long *)(param_5 + 0x20);
        do {
          lVar25 = lVar25 + -1;
          if (lVar25 == -1) {
            *(uint *)(param_5 + 0x2f4) = uVar21;
            *(undefined4 *)(param_5 + 0x2f0) = 2;
            return 2;
          }
          uVar17 = *(ulong *)(param_5 + 8);
          *(ulong *)(param_5 + 8) = uVar17 >> 8;
          uVar17 = (ulong)**(byte **)(param_5 + 0x18) << 0x38 | uVar17 >> 8;
          *(ulong *)(param_5 + 8) = uVar17;
          iVar14 = iVar14 + -8;
          *(int *)(param_5 + 0x10) = iVar14;
          *(long *)(param_5 + 0x20) = lVar25;
          *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
          uVar20 = uVar20 + 8;
        } while (uVar20 < uVar19);
      }
      else {
        uVar17 = *puVar1;
      }
      uVar20 = (uint)(uVar17 >> ((byte)iVar14 & 0x3f)) &
               *(uint *)(&_kBrotliBitMask + (ulong)uVar19 * 4);
      iVar14 = iVar14 + uVar19;
      *(int *)(param_5 + 0x10) = iVar14;
      if (param_2 <= uVar20) {
        return 0xfffffffc;
      }
      *(short *)(param_5 + 0x398 + (ulong)uVar21 * 2) = (short)uVar20;
      uVar21 = uVar21 + 1;
    } while (uVar21 <= uVar16);
  }
  if (uVar16 == 0) {
    uVar16 = 0;
  }
  else {
    uVar17 = 0;
    do {
      lVar25 = uVar17 * 2;
      uVar17 = uVar17 + 1;
      uVar15 = uVar17 & 0xffffffff;
      do {
        if (*(short *)(param_5 + 0x398 + lVar25) == *(short *)(param_5 + 0x398 + uVar15 * 2)) {
          return 0xfffffffb;
        }
        uVar21 = (int)uVar15 + 1;
        uVar15 = (ulong)uVar21;
      } while (uVar21 <= uVar16);
    } while (uVar17 != uVar16);
LAB_000876d3:
    if (uVar16 == 3) {
      uVar17 = (ulong)*(uint *)(param_5 + 0x10);
      if (*(uint *)(param_5 + 0x10) == 0x40) {
        if (*(long *)(param_5 + 0x20) == 0) {
          *(undefined4 *)(param_5 + 0x2f0) = 3;
          return 2;
                    /* WARNING: Read-only address (ram,0x0032b2b0) is written */
                    /* WARNING: Read-only address (ram,0x0032b2c0) is written */
        }
        uVar17 = *(ulong *)(param_5 + 8);
        *(ulong *)(param_5 + 8) = uVar17 >> 8;
        uVar15 = (ulong)**(byte **)(param_5 + 0x18) << 0x38 | uVar17 >> 8;
        *(ulong *)(param_5 + 8) = uVar15;
        *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
        *(byte **)(param_5 + 0x18) = *(byte **)(param_5 + 0x18) + 1;
        uVar17 = 0x38;
      }
      else {
        uVar15 = *puVar1;
      }
      *(int *)(param_5 + 0x10) = (int)uVar17 + 1;
      uVar16 = ((uVar15 >> (uVar17 & 0x3f) & 1) != 0) + 3;
      *(uint *)(param_5 + 0x300) = uVar16;
    }
  }
  uVar11 = _BrotliBuildSimpleHuffmanTable(param_3,8,param_5 + 0x398,uVar16);
LAB_00087f21:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar11;
  }
  *(undefined4 *)(param_5 + 0x2f0) = 0;
                    /* WARNING: Read-only address (ram,0x0032b2b0) is written */
                    /* WARNING: Read-only address (ram,0x0032b2c0) is written */
  return 1;
}

