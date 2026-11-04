// rea decompile_all
// name: _lzma1_chunk_decode
// address: 0x2a3bdb
// body: available
// range: 0x2a3bdb-0x2a6060 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _lzma1_chunk_decode(uint *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                        undefined1 (*param_4) [16],undefined1 *param_5,byte *param_6,long param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  short sVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 (*pauVar17) [16];
  byte bVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  byte bVar23;
  uint uVar24;
  ushort *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  uint uVar29;
  undefined1 (*pauVar30) [16];
  byte bVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [16];
  uint uVar34;
  uint uVar35;
  byte *pbVar36;
  bool bVar37;
  bool bVar38;
  undefined1 auVar39 [16];
  ulong local_80;
  ulong local_50;
  byte local_3a;
  
  lVar4 = *(long *)(param_1 + 4);
  if ((lVar4 != 0) && (param_7 != 0)) {
    uVar29 = 0;
    if (param_7 < 1) {
      bVar38 = false;
      pbVar36 = param_6;
    }
    else {
      bVar38 = *param_6 != 0;
      pbVar36 = param_6 + 1;
    }
    uVar8 = param_1[7];
    bVar1 = *(byte *)((long)param_1 + 0x1b);
    bVar2 = *(byte *)((long)param_1 + 0x1a);
    local_3a = *(byte *)((long)param_1 + 0x1d);
    param_6 = param_6 + param_7;
    iVar12 = 4;
    do {
      if (pbVar36 < param_6) {
        bVar18 = *pbVar36;
        pbVar36 = pbVar36 + 1;
      }
      else {
        bVar18 = 0;
      }
      uVar29 = (uint)bVar18 | uVar29 << 8;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    if (!bVar38 && uVar29 != 0xffffffff) {
      pauVar17 = param_3;
      if (param_3 < param_4) {
        uVar9 = 0xffffffff;
        do {
          if ((uint)uVar9 < 0x1000000) {
            if (pbVar36 < param_6) {
              bVar18 = *pbVar36;
              pbVar36 = pbVar36 + 1;
            }
            else {
              bVar18 = 0;
            }
            uVar9 = (ulong)((uint)uVar9 << 8);
            uVar29 = uVar29 << 8 | (uint)bVar18;
          }
          local_80 = (long)pauVar17 - (long)param_2;
          bVar18 = (byte)uVar8 & (byte)local_80;
          local_50 = (ulong)local_3a;
          puVar25 = (ushort *)((ulong)local_3a * 0x20 + lVar4 + (ulong)bVar18 * 2);
          uVar3 = *puVar25;
          uVar24 = (uint)uVar9;
          uVar35 = (int)(uVar9 >> 0xb) * (uint)uVar3;
          uVar13 = uVar29 - uVar35;
          pauVar33 = pauVar17;
          if (uVar29 < uVar35) {
            *puVar25 = uVar3 + (short)(0x800 - uVar3 >> 5);
            if (param_2 < pauVar17) {
              bVar18 = pauVar17[-1][0xf];
            }
            else {
              bVar18 = 0;
            }
            lVar10 = (long)(int)((uint)(bVar18 >> (8 - bVar2 & 0x1f)) |
                                ((uint)local_80 & (uint)bVar1) << (bVar2 & 0x1f)) * 0x660 +
                     lVar4 + 0xf48;
            if ((&_lzma_fsm_lut)[local_50] != '\0') goto LAB_002a4404;
            bVar18 = *(byte *)((long)pauVar17 - (ulong)*param_1);
            bVar11 = bVar18 & 0xf0;
            iVar12 = 0;
            uVar24 = 1;
            do {
              if (3 < iVar12) break;
              if (uVar35 < 0x1000000) {
                if (pbVar36 < param_6) {
                  bVar23 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                else {
                  bVar23 = 0;
                }
                uVar35 = uVar35 << 8;
                uVar29 = uVar29 << 8 | (uint)bVar23;
              }
              bVar23 = bVar11 >> 7;
              uVar9 = (ulong)((uint)bVar23 + uVar24 * 2 + 0x10);
              uVar3 = *(ushort *)(lVar10 + 0x600 + uVar9 * 2);
              uVar13 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar35 = uVar35 - uVar13;
              bVar38 = uVar13 <= uVar29;
              iVar22 = 0x800;
              if (bVar38) {
                iVar22 = 0x1f;
              }
              if (!bVar38) {
                uVar35 = uVar13;
                uVar13 = 0;
              }
              uVar29 = uVar29 - uVar13;
              uVar13 = (uint)bVar38;
              uVar24 = uVar24 * 2 | uVar13;
              *(ushort *)(lVar10 + 0x600 + uVar9 * 2) = (short)(iVar22 - (uint)uVar3 >> 5) + uVar3;
              if (uVar13 == bVar23) {
                iVar12 = iVar12 + 1;
              }
              else {
                if (iVar12 == 3) break;
                do {
                  uVar9 = (ulong)uVar24;
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar31 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar31 = 0;
                    }
                    uVar35 = uVar35 << 8;
                    uVar29 = uVar29 << 8 | (uint)bVar31;
                  }
                  uVar3 = *(ushort *)(lVar10 + 0x600 + uVar9 * 2);
                  uVar14 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar14;
                  bVar38 = uVar14 <= uVar29;
                  iVar22 = 0x800;
                  if (bVar38) {
                    iVar22 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar35 = uVar14;
                    uVar14 = 0;
                  }
                  uVar29 = uVar29 - uVar14;
                  uVar24 = (uint)bVar38 + uVar24 * 2;
                  *(ushort *)(lVar10 + 0x600 + uVar9 * 2) =
                       (short)(iVar22 - (uint)uVar3 >> 5) + uVar3;
                  iVar12 = iVar12 + 1;
                } while (iVar12 < 3);
                iVar12 = 4;
              }
              bVar11 = bVar11 * '\x02';
            } while (uVar13 == bVar23);
            uVar14 = (uVar24 ^ 0x10) * 0x10;
            if ((uVar14 ^ bVar18) < 0x10) {
              lVar10 = lVar10 + (ulong)((uVar24 ^ 0x10) * 0x30) * 2;
              bVar18 = bVar18 << 4;
              iVar12 = 0;
              uVar24 = 1;
              goto LAB_002a3fe2;
            }
            while( true ) {
              lVar10 = lVar10 + (ulong)(uVar14 * 3) * 2;
              uVar3 = *(ushort *)(lVar10 + 2);
              if (uVar35 < 0x1000000) {
                bVar18 = 0;
                if (pbVar36 < param_6) {
                  bVar18 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                uVar35 = uVar35 << 8;
                uVar29 = uVar29 << 8 | (uint)bVar18;
              }
              uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar35 = uVar35 - uVar24;
              bVar38 = uVar29 < uVar24;
              iVar12 = 0x800;
              if (!bVar38) {
                iVar12 = 0x1f;
              }
              if (bVar38) {
                uVar35 = uVar24;
                uVar24 = 0;
              }
              uVar13 = 3 - bVar38;
              uVar29 = uVar29 - uVar24;
              *(ushort *)(lVar10 + 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
              uVar3 = *(ushort *)(lVar10 + (ulong)uVar13 * 2);
              if (uVar35 < 0x1000000) {
                bVar18 = 0;
                if (pbVar36 < param_6) {
                  bVar18 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                uVar35 = uVar35 << 8;
                uVar29 = uVar29 * 0x100 | (uint)bVar18;
              }
              uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar35 = uVar35 - uVar24;
              bVar38 = uVar24 <= uVar29;
              iVar12 = 0x800;
              if (bVar38) {
                iVar12 = 0x1f;
              }
              if (!bVar38) {
                uVar35 = uVar24;
                uVar24 = 0;
              }
              uVar29 = uVar29 - uVar24;
              uVar24 = (uint)bVar38 + uVar13 * 2;
              *(ushort *)(lVar10 + (ulong)uVar13 * 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
              uVar3 = *(ushort *)(lVar10 + (ulong)uVar24 * 2);
              if (uVar35 < 0x1000000) {
                bVar18 = 0;
                if (pbVar36 < param_6) {
                  bVar18 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                uVar35 = uVar35 << 8;
                uVar29 = uVar29 * 0x100 | (uint)bVar18;
              }
              uVar13 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar35 = uVar35 - uVar13;
              bVar38 = uVar13 <= uVar29;
              iVar12 = 0x800;
              if (bVar38) {
                iVar12 = 0x1f;
              }
              if (!bVar38) {
                uVar35 = uVar13;
                uVar13 = 0;
              }
              uVar29 = uVar29 - uVar13;
              uVar13 = (uint)bVar38 + uVar24 * 2;
              *(ushort *)(lVar10 + (ulong)(uVar24 * 2)) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3
              ;
              uVar3 = *(ushort *)(lVar10 + (ulong)uVar13 * 2);
              if (uVar35 < 0x1000000) {
                bVar18 = 0;
                if (pbVar36 < param_6) {
                  bVar18 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                uVar35 = uVar35 << 8;
                uVar29 = uVar29 * 0x100 | (uint)bVar18;
              }
              uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar35 = uVar35 - uVar24;
              bVar38 = uVar24 <= uVar29;
              iVar12 = 0x800;
              if (bVar38) {
                iVar12 = 0x1f;
              }
              if (!bVar38) {
                uVar35 = uVar24;
                uVar24 = 0;
              }
              uVar29 = uVar29 - uVar24;
              *(ushort *)(lVar10 + (ulong)uVar13 * 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
              uVar14 = ((uint)bVar38 + uVar13 * 2 ^ 0x10) + uVar14;
              local_50 = (ulong)local_3a;
LAB_002a4346:
              local_3a = (&DAT_003a22bc)[local_50];
              (*pauVar17)[0] = (char)uVar14;
              pauVar33 = (undefined1 (*) [16])(*pauVar17 + 1);
              pauVar17 = param_4;
              if (pauVar33 == param_4) goto LAB_002a602c;
              local_50 = (ulong)local_3a;
              bVar11 = (char)local_80 + 1;
              local_80 = (ulong)bVar11;
              bVar18 = bVar11 & (byte)uVar8;
              puVar25 = (ushort *)((ulong)local_3a * 0x20 + lVar4 + (ulong)bVar18 * 2);
              uVar3 = *puVar25;
              uVar24 = uVar35;
              if (uVar35 < 0x1000000) {
                bVar23 = 0;
                if (pbVar36 < param_6) {
                  bVar23 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                uVar24 = uVar35 << 8;
                uVar29 = uVar29 << 8 | (uint)bVar23;
              }
              uVar35 = (uVar24 >> 0xb) * (uint)uVar3;
              uVar13 = uVar29 - uVar35;
              if (uVar35 <= uVar29) break;
              *puVar25 = uVar3 + (short)(0x800 - uVar3 >> 5);
              lVar10 = (ulong)(uVar14 >> (8 - bVar2 & 0x1f) |
                              (uint)(bVar11 & bVar1) << (bVar2 & 0x1f)) * 0x660 + lVar4 + 0xf48;
              pauVar17 = pauVar33;
LAB_002a4404:
              uVar3 = *(ushort *)(lVar10 + 0x602);
              if (uVar35 < 0x1000000) {
                bVar18 = 0;
                if (pbVar36 < param_6) {
                  bVar18 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                uVar35 = uVar35 << 8;
                uVar29 = uVar29 << 8 | (uint)bVar18;
              }
              uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar35 = uVar35 - uVar24;
              bVar38 = uVar29 < uVar24;
              iVar12 = 0x800;
              if (!bVar38) {
                iVar12 = 0x1f;
              }
              if (bVar38) {
                uVar35 = uVar24;
                uVar24 = 0;
              }
              uVar13 = 3 - bVar38;
              uVar29 = uVar29 - uVar24;
              *(ushort *)(lVar10 + 0x602) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
              uVar3 = *(ushort *)(lVar10 + 0x600 + (ulong)uVar13 * 2);
              if (uVar35 < 0x1000000) {
                bVar18 = 0;
                if (pbVar36 < param_6) {
                  bVar18 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                uVar35 = uVar35 << 8;
                uVar29 = uVar29 * 0x100 | (uint)bVar18;
              }
              uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar35 = uVar35 - uVar24;
              bVar38 = uVar24 <= uVar29;
              iVar12 = 0x800;
              if (bVar38) {
                iVar12 = 0x1f;
              }
              if (!bVar38) {
                uVar35 = uVar24;
                uVar24 = 0;
              }
              uVar29 = uVar29 - uVar24;
              uVar24 = (uint)bVar38 + uVar13 * 2;
              *(ushort *)(lVar10 + 0x600 + (ulong)uVar13 * 2) =
                   (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
              uVar3 = *(ushort *)(lVar10 + 0x600 + (ulong)uVar24 * 2);
              if (uVar35 < 0x1000000) {
                bVar18 = 0;
                if (pbVar36 < param_6) {
                  bVar18 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                uVar35 = uVar35 << 8;
                uVar29 = uVar29 * 0x100 | (uint)bVar18;
              }
              uVar14 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar13 = uVar35 - uVar14;
              bVar38 = uVar14 <= uVar29;
              iVar12 = 0x800;
              if (bVar38) {
                iVar12 = 0x1f;
              }
              if (!bVar38) {
                uVar13 = uVar14;
                uVar14 = 0;
              }
              uVar29 = uVar29 - uVar14;
              uVar14 = (uint)bVar38 + uVar24 * 2;
              *(ushort *)(lVar10 + 0x600 + (ulong)(uVar24 * 2)) =
                   (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
              uVar3 = *(ushort *)(lVar10 + 0x600 + (ulong)uVar14 * 2);
              if (uVar13 < 0x1000000) {
                bVar18 = 0;
                if (pbVar36 < param_6) {
                  bVar18 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                uVar13 = uVar13 << 8;
                uVar29 = uVar29 * 0x100 | (uint)bVar18;
              }
              uVar35 = (uVar13 >> 0xb) * (uint)uVar3;
              bVar38 = uVar35 <= uVar29;
              iVar12 = 0x800;
              if (bVar38) {
                iVar12 = 0x1f;
                uVar24 = uVar35;
                uVar35 = uVar13 - uVar35;
              }
              else {
                uVar24 = 0;
              }
              uVar29 = uVar29 - uVar24;
              *(ushort *)(lVar10 + 0x600 + (ulong)uVar14 * 2) =
                   (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
              uVar14 = ((uint)bVar38 << 4 | uVar14 * 0x20) ^ 0x100;
            }
          }
          uVar24 = uVar24 - uVar35;
          *puVar25 = uVar3 - (uVar3 >> 5);
          if (uVar24 < 0x1000000) {
            if (pbVar36 < param_6) {
              bVar11 = *pbVar36;
              pbVar36 = pbVar36 + 1;
            }
            else {
              bVar11 = 0;
            }
            uVar24 = uVar24 * 0x100;
            uVar13 = uVar13 << 8 | (uint)bVar11;
          }
          uVar3 = *(ushort *)(lVar4 + 0x180 + local_50 * 2);
          uVar35 = (uVar24 >> 0xb) * (uint)uVar3;
          uVar29 = uVar13 - uVar35;
          if (uVar13 < uVar35) {
            *(ushort *)(lVar4 + 0x180 + local_50 * 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
            if (uVar35 < 0x1000000) {
              if (pbVar36 < param_6) {
                bVar11 = *pbVar36;
                pbVar36 = pbVar36 + 1;
              }
              else {
                bVar11 = 0;
              }
              uVar35 = uVar35 * 0x100;
              uVar13 = uVar13 << 8 | (uint)bVar11;
            }
            uVar3 = *(ushort *)(lVar4 + 0x360);
            uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
            uVar24 = uVar13 - uVar29;
            if (uVar13 < uVar29) {
              *(ushort *)(lVar4 + 0x360) = (short)(0x800 - uVar3 >> 5) + uVar3;
              if (uVar29 < 0x1000000) {
                if (pbVar36 < param_6) {
                  bVar11 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                else {
                  bVar11 = 0;
                }
                uVar29 = uVar29 * 0x100;
                uVar13 = uVar13 << 8 | (uint)bVar11;
              }
              uVar3 = *(ushort *)(lVar4 + 0x366 + (ulong)bVar18 * 0x10);
              uVar24 = (uVar29 >> 0xb) * (uint)uVar3;
              bVar38 = uVar13 < uVar24;
              iVar12 = 0x800;
              if (!bVar38) {
                iVar12 = 0x1f;
              }
              uVar14 = 0;
              if (!bVar38) {
                uVar14 = uVar24;
              }
              lVar10 = lVar4 + 0x364 + (ulong)bVar18 * 0x10;
              uVar35 = uVar29 - uVar24;
              if (bVar38) {
                uVar35 = uVar24;
              }
              uVar29 = 3 - bVar38;
              uVar13 = uVar13 - uVar14;
              *(ushort *)(lVar10 + 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
              if (uVar35 < 0x1000000) {
                if (pbVar36 < param_6) {
                  bVar18 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                else {
                  bVar18 = 0;
                }
                uVar35 = uVar35 << 8;
                uVar13 = uVar13 * 0x100 | (uint)bVar18;
              }
              uVar3 = *(ushort *)(lVar10 + (ulong)uVar29 * 2);
              uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar35 = uVar35 - uVar24;
              bVar38 = uVar24 <= uVar13;
              iVar12 = 0x800;
              if (bVar38) {
                iVar12 = 0x1f;
              }
              if (!bVar38) {
                uVar35 = uVar24;
                uVar24 = 0;
              }
              uVar13 = uVar13 - uVar24;
              *(ushort *)(lVar10 + (ulong)uVar29 * 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
              if (uVar35 < 0x1000000) {
                if (pbVar36 < param_6) {
                  uVar24 = (uint)*pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                else {
                  uVar24 = 0;
                }
                uVar35 = uVar35 << 8;
                uVar13 = uVar13 * 0x100 | uVar24;
              }
              uVar29 = (uint)bVar38 + uVar29 * 2;
              uVar3 = *(ushort *)(lVar10 + (ulong)uVar29 * 2);
              uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar35 = uVar35 - uVar24;
              bVar38 = uVar24 <= uVar13;
              iVar12 = 0x800;
              if (bVar38) {
                iVar12 = 0x1f;
              }
              if (!bVar38) {
                uVar35 = uVar24;
                uVar24 = 0;
              }
              uVar13 = uVar13 - uVar24;
              uVar29 = uVar29 * 2;
              *(ushort *)(lVar10 + (ulong)uVar29) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
              uVar24 = (uVar29 & 6) + (uint)bVar38 + 2;
            }
            else {
              uVar35 = uVar35 - uVar29;
              *(ushort *)(lVar4 + 0x360) = uVar3 - (uVar3 >> 5);
              if (uVar35 < 0x1000000) {
                if (pbVar36 < param_6) {
                  bVar11 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                else {
                  bVar11 = 0;
                }
                uVar35 = uVar35 * 0x100;
                uVar24 = uVar24 * 0x100 | (uint)bVar11;
              }
              uVar3 = *(ushort *)(lVar4 + 0x362);
              uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar13 = uVar24 - uVar29;
              if (uVar24 < uVar29) {
                *(ushort *)(lVar4 + 0x362) = (short)(0x800 - uVar3 >> 5) + uVar3;
                if (uVar29 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar11 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar11 = 0;
                  }
                  uVar29 = uVar29 * 0x100;
                  uVar24 = uVar24 << 8 | (uint)bVar11;
                }
                uVar3 = *(ushort *)(lVar4 + 0x466 + (ulong)bVar18 * 0x10);
                uVar13 = (uVar29 >> 0xb) * (uint)uVar3;
                bVar38 = uVar24 < uVar13;
                iVar12 = 0x800;
                if (!bVar38) {
                  iVar12 = 0x1f;
                }
                uVar14 = 0;
                if (!bVar38) {
                  uVar14 = uVar13;
                }
                lVar10 = lVar4 + 0x464 + (ulong)bVar18 * 0x10;
                uVar35 = uVar29 - uVar13;
                if (bVar38) {
                  uVar35 = uVar13;
                }
                uVar29 = 3 - bVar38;
                uVar24 = uVar24 - uVar14;
                *(ushort *)(lVar10 + 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar18 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar18 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar24 = uVar24 * 0x100 | (uint)bVar18;
                }
                uVar3 = *(ushort *)(lVar10 + (ulong)uVar29 * 2);
                uVar13 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar13;
                bVar38 = uVar13 <= uVar24;
                iVar12 = 0x800;
                if (bVar38) {
                  iVar12 = 0x1f;
                }
                if (!bVar38) {
                  uVar35 = uVar13;
                  uVar13 = 0;
                }
                uVar24 = uVar24 - uVar13;
                *(ushort *)(lVar10 + (ulong)uVar29 * 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3
                ;
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    uVar13 = (uint)*pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    uVar13 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar24 = uVar24 * 0x100 | uVar13;
                }
                uVar29 = (uint)bVar38 + uVar29 * 2;
                uVar3 = *(ushort *)(lVar10 + (ulong)uVar29 * 2);
                uVar13 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar13;
                bVar38 = uVar13 <= uVar24;
                iVar12 = 0x800;
                if (bVar38) {
                  iVar12 = 0x1f;
                }
                if (!bVar38) {
                  uVar35 = uVar13;
                  uVar13 = 0;
                }
                uVar13 = uVar24 - uVar13;
                uVar29 = uVar29 * 2;
                *(ushort *)(lVar10 + (ulong)uVar29) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                uVar24 = (uVar29 & 6) + (uint)bVar38 + 10;
              }
              else {
                uVar35 = uVar35 - uVar29;
                *(ushort *)(lVar4 + 0x362) = uVar3 - (uVar3 >> 5);
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar18 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar18 = 0;
                  }
                  uVar35 = uVar35 * 0x100;
                  uVar13 = uVar13 * 0x100 | (uint)bVar18;
                }
                uVar3 = *(ushort *)(lVar4 + 0x566);
                uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar29;
                bVar38 = uVar13 < uVar29;
                iVar12 = 0x800;
                if (!bVar38) {
                  iVar12 = 0x1f;
                }
                if (bVar38) {
                  uVar35 = uVar29;
                  uVar29 = 0;
                }
                uVar24 = 3 - bVar38;
                uVar13 = uVar13 - uVar29;
                *(ushort *)(lVar4 + 0x566) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar18 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar18 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar13 = uVar13 * 0x100 | (uint)bVar18;
                }
                uVar3 = *(ushort *)(lVar4 + 0x564 + (ulong)uVar24 * 2);
                uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar29;
                bVar38 = uVar29 <= uVar13;
                iVar12 = 0x800;
                if (bVar38) {
                  iVar12 = 0x1f;
                }
                if (!bVar38) {
                  uVar35 = uVar29;
                  uVar29 = 0;
                }
                uVar13 = uVar13 - uVar29;
                *(ushort *)(lVar4 + 0x564 + (ulong)uVar24 * 2) =
                     (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar18 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar18 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar13 = uVar13 * 0x100 | (uint)bVar18;
                }
                uVar24 = (uint)bVar38 + uVar24 * 2;
                uVar3 = *(ushort *)(lVar4 + 0x564 + (ulong)uVar24 * 2);
                uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar29;
                bVar38 = uVar29 <= uVar13;
                iVar12 = 0x800;
                if (bVar38) {
                  iVar12 = 0x1f;
                }
                if (!bVar38) {
                  uVar35 = uVar29;
                  uVar29 = 0;
                }
                uVar13 = uVar13 - uVar29;
                uVar29 = (uint)bVar38 + uVar24 * 2;
                *(ushort *)(lVar4 + 0x564 + (ulong)(uVar24 * 2)) =
                     (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                uVar3 = *(ushort *)(lVar4 + 0x564 + (ulong)uVar29 * 2);
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar18 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar18 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar13 = uVar13 * 0x100 | (uint)bVar18;
                }
                uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar24;
                bVar38 = uVar24 <= uVar13;
                iVar12 = 0x800;
                if (bVar38) {
                  iVar12 = 0x1f;
                }
                if (!bVar38) {
                  uVar35 = uVar24;
                  uVar24 = 0;
                }
                uVar13 = uVar13 - uVar24;
                *(ushort *)(lVar4 + 0x564 + (ulong)uVar29 * 2) =
                     (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar18 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar18 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar13 = uVar13 * 0x100 | (uint)bVar18;
                }
                uVar24 = (uint)bVar38 + uVar29 * 2 ^ 0x10;
                lVar10 = (ulong)uVar24 * 0x20;
                uVar3 = *(ushort *)(lVar4 + 0x586 + lVar10);
                uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar29;
                bVar38 = uVar13 < uVar29;
                iVar12 = 0x800;
                if (!bVar38) {
                  iVar12 = 0x1f;
                }
                if (bVar38) {
                  uVar35 = uVar29;
                  uVar29 = 0;
                }
                uVar14 = 3 - bVar38;
                lVar10 = lVar10 + lVar4 + 0x584;
                uVar13 = uVar13 - uVar29;
                *(ushort *)(lVar10 + 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                uVar3 = *(ushort *)(lVar10 + (ulong)uVar14 * 2);
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar18 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar18 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar13 = uVar13 * 0x100 | (uint)bVar18;
                }
                uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar29;
                bVar38 = uVar29 <= uVar13;
                iVar12 = 0x800;
                if (bVar38) {
                  iVar12 = 0x1f;
                }
                if (!bVar38) {
                  uVar35 = uVar29;
                  uVar29 = 0;
                }
                uVar13 = uVar13 - uVar29;
                uVar29 = (uint)bVar38 + uVar14 * 2;
                *(ushort *)(lVar10 + (ulong)uVar14 * 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3
                ;
                uVar3 = *(ushort *)(lVar10 + (ulong)uVar29 * 2);
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar18 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar18 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar13 = uVar13 * 0x100 | (uint)bVar18;
                }
                uVar14 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar14;
                bVar38 = uVar14 <= uVar13;
                iVar12 = 0x800;
                if (bVar38) {
                  iVar12 = 0x1f;
                }
                if (!bVar38) {
                  uVar35 = uVar14;
                  uVar14 = 0;
                }
                uVar13 = uVar13 - uVar14;
                uVar14 = (uint)bVar38 + uVar29 * 2;
                *(ushort *)(lVar10 + (ulong)(uVar29 * 2)) =
                     (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                uVar3 = *(ushort *)(lVar10 + (ulong)uVar14 * 2);
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar18 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar18 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar13 = uVar13 * 0x100 | (uint)bVar18;
                }
                uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar29;
                bVar38 = uVar29 <= uVar13;
                iVar12 = 0x800;
                if (bVar38) {
                  iVar12 = 0x1f;
                }
                if (!bVar38) {
                  uVar35 = uVar29;
                  uVar29 = 0;
                }
                uVar13 = uVar13 - uVar29;
                *(ushort *)(lVar10 + (ulong)uVar14 * 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3
                ;
                uVar24 = (uVar24 & 0xff) * 0x10 + ((uint)bVar38 + uVar14 * 2 ^ 0x10) + 0x12;
              }
            }
            uVar29 = 0;
            uVar9 = (ulong)(uVar24 - 2);
            if (5 < uVar24) {
              uVar9 = 3;
            }
            uVar3 = *(ushort *)(lVar4 + 0xc2a + uVar9 * 0xa0);
            if (uVar35 < 0x1000000) {
              if (pbVar36 < param_6) {
                bVar18 = *pbVar36;
                pbVar36 = pbVar36 + 1;
              }
              else {
                bVar18 = 0;
              }
              uVar35 = uVar35 << 8;
              uVar13 = uVar13 << 8 | (uint)bVar18;
            }
            lVar10 = uVar9 * 0xa0 + lVar4 + 0xba8;
            uVar14 = (uVar35 >> 0xb) * (uint)uVar3;
            uVar35 = uVar35 - uVar14;
            bVar38 = uVar13 < uVar14;
            iVar12 = 0x800;
            if (!bVar38) {
              iVar12 = 0x1f;
            }
            if (bVar38) {
              uVar35 = uVar14;
              uVar14 = 0;
            }
            uVar21 = 3 - bVar38;
            uVar13 = uVar13 - uVar14;
            *(ushort *)(lVar10 + 0x82) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
            uVar3 = *(ushort *)(lVar10 + 0x80 + (ulong)uVar21 * 2);
            if (uVar35 < 0x1000000) {
              if (pbVar36 < param_6) {
                bVar18 = *pbVar36;
                pbVar36 = pbVar36 + 1;
              }
              else {
                bVar18 = 0;
              }
              uVar35 = uVar35 << 8;
              uVar13 = uVar13 * 0x100 | (uint)bVar18;
            }
            uVar14 = (uVar35 >> 0xb) * (uint)uVar3;
            uVar35 = uVar35 - uVar14;
            bVar38 = uVar14 <= uVar13;
            iVar12 = 0x800;
            if (bVar38) {
              iVar12 = 0x1f;
            }
            if (!bVar38) {
              uVar35 = uVar14;
              uVar14 = 0;
            }
            uVar13 = uVar13 - uVar14;
            uVar14 = (uint)bVar38 + uVar21 * 2;
            *(ushort *)(lVar10 + 0x80 + (ulong)uVar21 * 2) =
                 (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
            uVar3 = *(ushort *)(lVar10 + 0x80 + (ulong)uVar14 * 2);
            if (uVar35 < 0x1000000) {
              if (pbVar36 < param_6) {
                bVar18 = *pbVar36;
                pbVar36 = pbVar36 + 1;
              }
              else {
                bVar18 = 0;
              }
              uVar35 = uVar35 << 8;
              uVar13 = uVar13 * 0x100 | (uint)bVar18;
            }
            uVar21 = (uVar35 >> 0xb) * (uint)uVar3;
            uVar35 = uVar35 - uVar21;
            bVar38 = uVar21 <= uVar13;
            iVar12 = 0x800;
            if (bVar38) {
              iVar12 = 0x1f;
            }
            if (!bVar38) {
              uVar35 = uVar21;
              uVar21 = 0;
            }
            uVar13 = uVar13 - uVar21;
            uVar21 = (uint)bVar38 + uVar14 * 2;
            *(ushort *)(lVar10 + 0x80 + (ulong)(uVar14 * 2)) =
                 (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
            uVar3 = *(ushort *)(lVar10 + 0x80 + (ulong)uVar21 * 2);
            if (uVar35 < 0x1000000) {
              if (pbVar36 < param_6) {
                bVar18 = *pbVar36;
                pbVar36 = pbVar36 + 1;
              }
              else {
                bVar18 = 0;
              }
              uVar35 = uVar35 << 8;
              uVar13 = uVar13 * 0x100 | (uint)bVar18;
            }
            uVar14 = (uVar35 >> 0xb) * (uint)uVar3;
            bVar38 = uVar14 <= uVar13;
            iVar12 = 0x800;
            if (bVar38) {
              iVar12 = 0x1f;
              uVar29 = uVar14;
              uVar14 = uVar35 - uVar14;
            }
            uVar13 = uVar13 - uVar29;
            *(ushort *)(lVar10 + 0x80 + (ulong)uVar21 * 2) =
                 (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
            uVar35 = (uint)bVar38 * 4 + uVar21 * 8;
            uVar21 = uVar35 ^ 0x40;
            uVar3 = *(ushort *)(lVar10 + 2 + (ulong)uVar21 * 2);
            if (uVar14 < 0x1000000) {
              if (pbVar36 < param_6) {
                bVar18 = *pbVar36;
                pbVar36 = pbVar36 + 1;
              }
              else {
                bVar18 = 0;
              }
              uVar14 = uVar14 << 8;
              uVar13 = uVar13 * 0x100 | (uint)bVar18;
            }
            lVar10 = lVar10 + (ulong)uVar21 * 2;
            uVar34 = (uVar14 >> 0xb) * (uint)uVar3;
            uVar14 = uVar14 - uVar34;
            bVar38 = uVar13 < uVar34;
            iVar12 = 0x800;
            if (!bVar38) {
              iVar12 = 0x1f;
            }
            uVar29 = uVar34;
            if (bVar38) {
              uVar14 = uVar34;
              uVar29 = 0;
            }
            uVar29 = uVar13 - uVar29;
            *(ushort *)(lVar10 + 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
            uVar3 = *(ushort *)(lVar10 + (3 - (ulong)bVar38 & 0xffffffff) * 2);
            if (uVar14 < 0x1000000) {
              if (pbVar36 < param_6) {
                bVar18 = *pbVar36;
                pbVar36 = pbVar36 + 1;
              }
              else {
                bVar18 = 0;
              }
              uVar14 = uVar14 << 8;
              uVar29 = uVar29 * 0x100 | (uint)bVar18;
            }
            uVar15 = (uVar14 >> 0xb) * (uint)uVar3;
            uVar14 = uVar14 - uVar15;
            bVar37 = uVar15 <= uVar29;
            uVar5 = (uint)bVar37;
            iVar12 = 0x800;
            if (bVar37) {
              iVar12 = 0x1f;
            }
            if (!bVar37) {
              uVar14 = uVar15;
              uVar15 = 0;
            }
            uVar9 = (ulong)uVar14;
            uVar29 = uVar29 - uVar15;
            *(ushort *)(lVar10 + (3 - (ulong)bVar38) * 2) =
                 (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
            uVar14 = uVar5 + (uint)(uVar34 <= uVar13) * 2 | uVar21;
            if (uVar35 != 0x40) {
              uVar35 = uVar5 + 2 << ((char)(uVar14 >> 1) - 1U & 0x1f);
              if (uVar14 < 0xe) {
                iVar22 = ((uint)(uVar34 <= uVar13) * 2 + uVar21 + uVar5 >> 1) - 1;
                if (iVar22 < 2) {
                  iVar22 = 1;
                }
                lVar10 = lVar4 + 0xe28 + (ulong)uVar35 * 2;
                iVar16 = 0;
                iVar12 = 0;
                uVar32 = 1;
                do {
                  uVar13 = (uint)uVar9;
                  if (uVar13 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      uVar14 = (uint)*pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      uVar14 = 0;
                    }
                    uVar13 = uVar13 << 8;
                    uVar29 = uVar29 << 8 | uVar14;
                  }
                  uVar3 = *(ushort *)(lVar10 + uVar32 * 2);
                  uVar14 = (uVar13 >> 0xb) * (uint)uVar3;
                  uVar13 = uVar13 - uVar14;
                  bVar38 = uVar14 <= uVar29;
                  iVar20 = 0x800;
                  if (bVar38) {
                    iVar20 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar13 = uVar14;
                    uVar14 = 0;
                  }
                  uVar9 = (ulong)uVar13;
                  uVar29 = uVar29 - uVar14;
                  *(ushort *)(lVar10 + uVar32 * 2) = (short)(iVar20 - (uint)uVar3 >> 5) + uVar3;
                  iVar12 = iVar12 + ((uint)bVar38 << ((byte)iVar16 & 0x1f));
                  iVar16 = iVar16 + 1;
                  uVar32 = (ulong)((uint)bVar38 + (int)uVar32 * 2);
                } while (iVar22 != iVar16);
              }
              else {
                iVar16 = 0;
                iVar22 = 0;
                for (iVar12 = (uVar14 >> 1) - 5; iVar12 != 0; iVar12 = iVar12 + -1) {
                  uVar13 = (uint)uVar9;
                  if (uVar13 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar18 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar18 = 0;
                    }
                    uVar13 = uVar13 << 8;
                    uVar29 = uVar29 << 8 | (uint)bVar18;
                  }
                  uVar13 = uVar13 >> 1;
                  uVar9 = (ulong)uVar13;
                  iVar22 = (uint)(uVar13 <= uVar29) + iVar22 * 2;
                  uVar14 = 0;
                  if (uVar13 <= uVar29) {
                    uVar14 = uVar13;
                  }
                  uVar29 = uVar29 - uVar14;
                }
                iVar12 = 0;
                uVar13 = 1;
                do {
                  uVar14 = (uint)uVar9;
                  if (uVar14 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      uVar21 = (uint)*pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      uVar21 = 0;
                    }
                    uVar14 = uVar14 << 8;
                    uVar29 = uVar29 << 8 | uVar21;
                  }
                  uVar32 = (ulong)uVar13;
                  uVar3 = *(ushort *)(lVar4 + 0xf28 + uVar32 * 2);
                  uVar21 = (uVar14 >> 0xb) * (uint)uVar3;
                  uVar14 = uVar14 - uVar21;
                  bVar38 = uVar21 <= uVar29;
                  iVar20 = 0x800;
                  if (bVar38) {
                    iVar20 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar14 = uVar21;
                    uVar21 = 0;
                  }
                  uVar9 = (ulong)uVar14;
                  uVar29 = uVar29 - uVar21;
                  uVar13 = (uint)bVar38 + uVar13 * 2;
                  *(ushort *)(lVar4 + 0xf28 + uVar32 * 2) =
                       (short)(iVar20 - (uint)uVar3 >> 5) + uVar3;
                  iVar12 = iVar12 + ((uint)bVar38 << ((byte)iVar16 & 0x1f));
                  iVar16 = iVar16 + 1;
                } while (iVar16 != 4);
                iVar12 = iVar12 + iVar22 * 0x10;
              }
              uVar14 = iVar12 + uVar35;
            }
            if ((long)pauVar33 - (long)param_2 <= (long)(ulong)uVar14) {
              return 0;
            }
            local_3a = (&UNK_003a22c8)[local_50];
            param_1[3] = param_1[2];
            *(undefined8 *)(param_1 + 1) = *(undefined8 *)param_1;
            uVar32 = (ulong)(uVar14 + 1);
            *param_1 = uVar14 + 1;
LAB_002a5d35:
            uVar19 = (ulong)uVar24;
            pauVar17 = (undefined1 (*) [16])(*pauVar33 + uVar19);
            uVar35 = (uint)uVar32;
            if (param_5 < pauVar33[2] + uVar19 + 0xf) {
              if (param_4 < pauVar17) {
                return 0;
              }
              do {
                (*pauVar33)[0] = *(undefined1 *)((long)pauVar33 - uVar32);
                pauVar33 = (undefined1 (*) [16])(*pauVar33 + 1);
              } while (pauVar33 < pauVar17);
            }
            else if (uVar35 < 0x10) {
              pauVar30 = (undefined1 (*) [16])((long)pauVar33 - uVar32);
              auVar39 = pshufb(*pauVar30,
                               *(undefined1 (*) [16])
                                (lzma_copy_with_pattern + (ulong)(uVar35 - 1) * 0x10));
              uVar26 = (ulong)(byte)lzma_copy_with_pattern[uVar35 - 1];
              *pauVar33 = auVar39;
              uVar7 = *(undefined8 *)((long)(*pauVar30 + uVar26) + 8);
              *(undefined8 *)pauVar33[1] = *(undefined8 *)(*pauVar30 + uVar26);
              *(undefined8 *)(pauVar33[1] + 8) = uVar7;
              uVar7 = *(undefined8 *)((long)(pauVar30[1] + uVar26) + 8);
              *(undefined8 *)pauVar33[2] = *(undefined8 *)(pauVar30[1] + uVar26);
              *(undefined8 *)(pauVar33[2] + 8) = uVar7;
              if (0x30 < uVar24) {
                lVar10 = 0;
                do {
                  puVar28 = (undefined8 *)((long)pauVar33 + lVar10 + (uVar26 - uVar32) + 0x20);
                  uVar7 = puVar28[1];
                  *(undefined8 *)(pauVar33[3] + lVar10) = *puVar28;
                  *(undefined8 *)((long)(pauVar33[3] + lVar10) + 8) = uVar7;
                  uVar27 = lVar10 + 0x40;
                  lVar10 = lVar10 + 0x10;
                } while (uVar27 < uVar19);
              }
            }
            else {
              puVar28 = (undefined8 *)((long)pauVar33 - uVar32);
              if (uVar35 < uVar24 + 0x2f) {
                uVar7 = puVar28[1];
                *(undefined8 *)*pauVar33 = *puVar28;
                *(undefined8 *)(*pauVar33 + 8) = uVar7;
                uVar7 = puVar28[3];
                *(undefined8 *)pauVar33[1] = puVar28[2];
                *(undefined8 *)(pauVar33[1] + 8) = uVar7;
                uVar7 = puVar28[5];
                *(undefined8 *)pauVar33[2] = puVar28[4];
                *(undefined8 *)(pauVar33[2] + 8) = uVar7;
                if (0x30 < uVar24) {
                  uVar32 = 0x30;
                  do {
                    uVar7 = ((undefined8 *)((long)puVar28 + uVar32))[1];
                    *(undefined8 *)(*pauVar33 + uVar32) = *(undefined8 *)((long)puVar28 + uVar32);
                    *(undefined8 *)((long)(*pauVar33 + uVar32) + 8) = uVar7;
                    uVar32 = uVar32 + 0x10;
                  } while (uVar32 < uVar19);
                }
              }
              else {
                uVar7 = puVar28[1];
                *(undefined8 *)*pauVar33 = *puVar28;
                *(undefined8 *)(*pauVar33 + 8) = uVar7;
                uVar7 = puVar28[3];
                *(undefined8 *)pauVar33[1] = puVar28[2];
                *(undefined8 *)(pauVar33[1] + 8) = uVar7;
                uVar7 = puVar28[5];
                *(undefined8 *)pauVar33[2] = puVar28[4];
                *(undefined8 *)(pauVar33[2] + 8) = uVar7;
                if (0x30 < uVar24) {
                  uVar32 = 0x30;
                  do {
                    uVar7 = ((undefined8 *)((long)puVar28 + uVar32))[1];
                    *(undefined8 *)(*pauVar33 + uVar32) = *(undefined8 *)((long)puVar28 + uVar32);
                    *(undefined8 *)((long)(*pauVar33 + uVar32) + 8) = uVar7;
                    uVar32 = uVar32 + 0x10;
                  } while (uVar32 < uVar19);
                }
              }
            }
          }
          else {
            *(ushort *)(lVar4 + 0x180 + local_50 * 2) = uVar3 - (uVar3 >> 5);
            if (pauVar33 == param_2) {
              return 0;
            }
            uVar24 = uVar24 - uVar35;
            if (uVar24 < 0x1000000) {
              if (pbVar36 < param_6) {
                bVar11 = *pbVar36;
                pbVar36 = pbVar36 + 1;
              }
              else {
                bVar11 = 0;
              }
              uVar24 = uVar24 * 0x100;
              uVar29 = uVar29 * 0x100 | (uint)bVar11;
            }
            uVar3 = *(ushort *)(lVar4 + 0x198 + local_50 * 2);
            uVar35 = (uVar24 >> 0xb) * (uint)uVar3;
            uVar13 = uVar29 - uVar35;
            if (uVar35 <= uVar29) {
              uVar24 = uVar24 - uVar35;
              *(ushort *)(lVar4 + 0x198 + local_50 * 2) = uVar3 - (uVar3 >> 5);
              if (uVar24 < 0x1000000) {
                if (pbVar36 < param_6) {
                  bVar11 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                else {
                  bVar11 = 0;
                }
                uVar24 = uVar24 * 0x100;
                uVar13 = uVar13 * 0x100 | (uint)bVar11;
              }
              uVar3 = *(ushort *)(lVar4 + 0x330 + local_50 * 2);
              uVar35 = (uVar24 >> 0xb) * (uint)uVar3;
              uVar29 = uVar13 - uVar35;
              if (uVar13 < uVar35) {
                *(ushort *)(lVar4 + 0x330 + local_50 * 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
                uVar24 = param_1[1];
              }
              else {
                uVar24 = uVar24 - uVar35;
                *(ushort *)(lVar4 + 0x330 + local_50 * 2) = uVar3 - (uVar3 >> 5);
                if (uVar24 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar11 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar11 = 0;
                  }
                  uVar24 = uVar24 * 0x100;
                  uVar29 = uVar29 * 0x100 | (uint)bVar11;
                }
                uVar3 = *(ushort *)(lVar4 + 0x348 + local_50 * 2);
                uVar35 = (uVar24 >> 0xb) * (uint)uVar3;
                uVar13 = uVar29 - uVar35;
                if (uVar29 < uVar35) {
                  sVar6 = (short)(0x800 - uVar3 >> 5);
                  uVar24 = param_1[2];
                  uVar13 = uVar29;
                }
                else {
                  uVar35 = uVar24 - uVar35;
                  sVar6 = -(uVar3 >> 5);
                  uVar24 = param_1[3];
                  param_1[3] = param_1[2];
                }
                *(ushort *)(lVar4 + 0x348 + local_50 * 2) = sVar6 + uVar3;
                param_1[2] = param_1[1];
              }
              uVar32 = (ulong)uVar24;
              param_1[1] = *param_1;
              *param_1 = uVar24;
LAB_002a55b5:
              uVar3 = *(ushort *)(lVar4 + 0x784);
              if (uVar35 < 0x1000000) {
                if (pbVar36 < param_6) {
                  bVar11 = *pbVar36;
                  pbVar36 = pbVar36 + 1;
                }
                else {
                  bVar11 = 0;
                }
                uVar35 = uVar35 << 8;
                uVar13 = uVar13 << 8 | (uint)bVar11;
              }
              uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
              uVar29 = uVar13 - uVar24;
              if (uVar13 < uVar24) {
                *(ushort *)(lVar4 + 0x784) = (short)(0x800 - uVar3 >> 5) + uVar3;
                if (uVar24 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar11 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar11 = 0;
                  }
                  uVar24 = uVar24 * 0x100;
                  uVar13 = uVar13 << 8 | (uint)bVar11;
                }
                uVar3 = *(ushort *)(lVar4 + 0x78a + (ulong)bVar18 * 0x10);
                uVar29 = (uVar24 >> 0xb) * (uint)uVar3;
                bVar38 = uVar13 < uVar29;
                iVar12 = 0x800;
                if (!bVar38) {
                  iVar12 = 0x1f;
                }
                uVar14 = 0;
                if (!bVar38) {
                  uVar14 = uVar29;
                }
                lVar10 = lVar4 + 0x788 + (ulong)bVar18 * 0x10;
                uVar35 = uVar24 - uVar29;
                if (bVar38) {
                  uVar35 = uVar29;
                }
                uVar29 = 3 - bVar38;
                uVar13 = uVar13 - uVar14;
                *(ushort *)(lVar10 + 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar18 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar18 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar13 = uVar13 * 0x100 | (uint)bVar18;
                }
                uVar3 = *(ushort *)(lVar10 + (ulong)uVar29 * 2);
                uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar24;
                bVar38 = uVar24 <= uVar13;
                iVar12 = 0x800;
                if (bVar38) {
                  iVar12 = 0x1f;
                }
                if (!bVar38) {
                  uVar35 = uVar24;
                  uVar24 = 0;
                }
                uVar13 = uVar13 - uVar24;
                *(ushort *)(lVar10 + (ulong)uVar29 * 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3
                ;
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    uVar24 = (uint)*pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    uVar24 = 0;
                  }
                  uVar35 = uVar35 << 8;
                  uVar13 = uVar13 * 0x100 | uVar24;
                }
                uVar24 = (uint)bVar38 + uVar29 * 2;
                uVar3 = *(ushort *)(lVar10 + (ulong)uVar24 * 2);
                uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar35 = uVar35 - uVar29;
                bVar38 = uVar29 <= uVar13;
                iVar12 = 0x800;
                if (bVar38) {
                  iVar12 = 0x1f;
                }
                if (!bVar38) {
                  uVar35 = uVar29;
                  uVar29 = 0;
                }
                uVar29 = uVar13 - uVar29;
                uVar24 = uVar24 * 2;
                *(ushort *)(lVar10 + (ulong)uVar24) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                uVar24 = (uVar24 & 6) + (uint)bVar38 + 2;
              }
              else {
                uVar35 = uVar35 - uVar24;
                *(ushort *)(lVar4 + 0x784) = uVar3 - (uVar3 >> 5);
                if (uVar35 < 0x1000000) {
                  if (pbVar36 < param_6) {
                    bVar11 = *pbVar36;
                    pbVar36 = pbVar36 + 1;
                  }
                  else {
                    bVar11 = 0;
                  }
                  uVar35 = uVar35 * 0x100;
                  uVar29 = uVar29 * 0x100 | (uint)bVar11;
                }
                uVar3 = *(ushort *)(lVar4 + 0x786);
                uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
                uVar13 = uVar29 - uVar24;
                if (uVar29 < uVar24) {
                  *(ushort *)(lVar4 + 0x786) = (short)(0x800 - uVar3 >> 5) + uVar3;
                  if (uVar24 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar11 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar11 = 0;
                    }
                    uVar24 = uVar24 * 0x100;
                    uVar29 = uVar29 << 8 | (uint)bVar11;
                  }
                  uVar3 = *(ushort *)(lVar4 + 0x88a + (ulong)bVar18 * 0x10);
                  uVar13 = (uVar24 >> 0xb) * (uint)uVar3;
                  bVar38 = uVar29 < uVar13;
                  iVar12 = 0x800;
                  if (!bVar38) {
                    iVar12 = 0x1f;
                  }
                  uVar14 = 0;
                  if (!bVar38) {
                    uVar14 = uVar13;
                  }
                  lVar10 = lVar4 + 0x888 + (ulong)bVar18 * 0x10;
                  uVar35 = uVar24 - uVar13;
                  if (bVar38) {
                    uVar35 = uVar13;
                  }
                  uVar24 = 3 - bVar38;
                  uVar29 = uVar29 - uVar14;
                  *(ushort *)(lVar10 + 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar18 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar18 = 0;
                    }
                    uVar35 = uVar35 << 8;
                    uVar29 = uVar29 * 0x100 | (uint)bVar18;
                  }
                  uVar3 = *(ushort *)(lVar10 + (ulong)uVar24 * 2);
                  uVar13 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar13;
                  bVar38 = uVar13 <= uVar29;
                  iVar12 = 0x800;
                  if (bVar38) {
                    iVar12 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar35 = uVar13;
                    uVar13 = 0;
                  }
                  uVar29 = uVar29 - uVar13;
                  *(ushort *)(lVar10 + (ulong)uVar24 * 2) =
                       (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      uVar13 = (uint)*pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      uVar13 = 0;
                    }
                    uVar35 = uVar35 << 8;
                    uVar29 = uVar29 * 0x100 | uVar13;
                  }
                  uVar24 = (uint)bVar38 + uVar24 * 2;
                  uVar3 = *(ushort *)(lVar10 + (ulong)uVar24 * 2);
                  uVar13 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar13;
                  bVar38 = uVar13 <= uVar29;
                  iVar12 = 0x800;
                  if (bVar38) {
                    iVar12 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar35 = uVar13;
                    uVar13 = 0;
                  }
                  uVar29 = uVar29 - uVar13;
                  uVar24 = uVar24 * 2;
                  *(ushort *)(lVar10 + (ulong)uVar24) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  uVar24 = (uVar24 & 6) + (uint)bVar38 + 10;
                }
                else {
                  uVar35 = uVar35 - uVar24;
                  *(ushort *)(lVar4 + 0x786) = uVar3 - (uVar3 >> 5);
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar18 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar18 = 0;
                    }
                    uVar35 = uVar35 * 0x100;
                    uVar13 = uVar13 * 0x100 | (uint)bVar18;
                  }
                  uVar3 = *(ushort *)(lVar4 + 0x98a);
                  uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar29;
                  bVar38 = uVar13 < uVar29;
                  iVar12 = 0x800;
                  if (!bVar38) {
                    iVar12 = 0x1f;
                  }
                  if (bVar38) {
                    uVar35 = uVar29;
                    uVar29 = 0;
                  }
                  uVar24 = 3 - bVar38;
                  uVar13 = uVar13 - uVar29;
                  *(ushort *)(lVar4 + 0x98a) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar18 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar18 = 0;
                    }
                    uVar35 = uVar35 << 8;
                    uVar13 = uVar13 * 0x100 | (uint)bVar18;
                  }
                  uVar3 = *(ushort *)(lVar4 + 0x988 + (ulong)uVar24 * 2);
                  uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar29;
                  bVar38 = uVar29 <= uVar13;
                  iVar12 = 0x800;
                  if (bVar38) {
                    iVar12 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar35 = uVar29;
                    uVar29 = 0;
                  }
                  uVar13 = uVar13 - uVar29;
                  *(ushort *)(lVar4 + 0x988 + (ulong)uVar24 * 2) =
                       (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar18 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar18 = 0;
                    }
                    uVar35 = uVar35 << 8;
                    uVar13 = uVar13 * 0x100 | (uint)bVar18;
                  }
                  uVar24 = (uint)bVar38 + uVar24 * 2;
                  uVar3 = *(ushort *)(lVar4 + 0x988 + (ulong)uVar24 * 2);
                  uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar29;
                  bVar38 = uVar29 <= uVar13;
                  iVar12 = 0x800;
                  if (bVar38) {
                    iVar12 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar35 = uVar29;
                    uVar29 = 0;
                  }
                  uVar13 = uVar13 - uVar29;
                  uVar29 = (uint)bVar38 + uVar24 * 2;
                  *(ushort *)(lVar4 + 0x988 + (ulong)(uVar24 * 2)) =
                       (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  uVar3 = *(ushort *)(lVar4 + 0x988 + (ulong)uVar29 * 2);
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar18 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar18 = 0;
                    }
                    uVar35 = uVar35 << 8;
                    uVar13 = uVar13 * 0x100 | (uint)bVar18;
                  }
                  uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar24;
                  bVar38 = uVar24 <= uVar13;
                  iVar12 = 0x800;
                  if (bVar38) {
                    iVar12 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar35 = uVar24;
                    uVar24 = 0;
                  }
                  uVar13 = uVar13 - uVar24;
                  *(ushort *)(lVar4 + 0x988 + (ulong)uVar29 * 2) =
                       (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar18 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar18 = 0;
                    }
                    uVar35 = uVar35 << 8;
                    uVar13 = uVar13 * 0x100 | (uint)bVar18;
                  }
                  uVar24 = (uint)bVar38 + uVar29 * 2 ^ 0x10;
                  lVar10 = (ulong)uVar24 * 0x20;
                  uVar3 = *(ushort *)(lVar4 + 0x9aa + lVar10);
                  uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar29;
                  bVar38 = uVar13 < uVar29;
                  iVar12 = 0x800;
                  if (!bVar38) {
                    iVar12 = 0x1f;
                  }
                  if (bVar38) {
                    uVar35 = uVar29;
                    uVar29 = 0;
                  }
                  uVar14 = 3 - bVar38;
                  lVar10 = lVar10 + lVar4 + 0x9a8;
                  uVar13 = uVar13 - uVar29;
                  *(ushort *)(lVar10 + 2) = (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  uVar3 = *(ushort *)(lVar10 + (ulong)uVar14 * 2);
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar18 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar18 = 0;
                    }
                    uVar35 = uVar35 << 8;
                    uVar13 = uVar13 * 0x100 | (uint)bVar18;
                  }
                  uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar29;
                  bVar38 = uVar29 <= uVar13;
                  iVar12 = 0x800;
                  if (bVar38) {
                    iVar12 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar35 = uVar29;
                    uVar29 = 0;
                  }
                  uVar13 = uVar13 - uVar29;
                  uVar29 = (uint)bVar38 + uVar14 * 2;
                  *(ushort *)(lVar10 + (ulong)uVar14 * 2) =
                       (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  uVar3 = *(ushort *)(lVar10 + (ulong)uVar29 * 2);
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      bVar18 = *pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      bVar18 = 0;
                    }
                    uVar35 = uVar35 << 8;
                    uVar13 = uVar13 * 0x100 | (uint)bVar18;
                  }
                  uVar14 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar14;
                  bVar38 = uVar14 <= uVar13;
                  iVar12 = 0x800;
                  if (bVar38) {
                    iVar12 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar35 = uVar14;
                    uVar14 = 0;
                  }
                  uVar13 = uVar13 - uVar14;
                  uVar14 = (uint)bVar38 + uVar29 * 2;
                  *(ushort *)(lVar10 + (ulong)(uVar29 * 2)) =
                       (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  uVar3 = *(ushort *)(lVar10 + (ulong)uVar14 * 2);
                  if (uVar35 < 0x1000000) {
                    if (pbVar36 < param_6) {
                      uVar29 = (uint)*pbVar36;
                      pbVar36 = pbVar36 + 1;
                    }
                    else {
                      uVar29 = 0;
                    }
                    uVar35 = uVar35 << 8;
                    uVar13 = uVar13 * 0x100 | uVar29;
                  }
                  uVar29 = (uVar35 >> 0xb) * (uint)uVar3;
                  uVar35 = uVar35 - uVar29;
                  bVar38 = uVar29 <= uVar13;
                  iVar12 = 0x800;
                  if (bVar38) {
                    iVar12 = 0x1f;
                  }
                  if (!bVar38) {
                    uVar35 = uVar29;
                    uVar29 = 0;
                  }
                  uVar29 = uVar13 - uVar29;
                  *(ushort *)(lVar10 + (ulong)uVar14 * 2) =
                       (short)(iVar12 - (uint)uVar3 >> 5) + uVar3;
                  uVar24 = (uVar24 & 0xff) * 0x10 + ((uint)bVar38 + uVar14 * 2 ^ 0x10) + 0x12;
                }
              }
              uVar9 = (ulong)uVar35;
              local_3a = (&UNK_003a22d4)[local_50];
              goto LAB_002a5d35;
            }
            *(ushort *)(lVar4 + 0x198 + local_50 * 2) = (short)(0x800 - uVar3 >> 5) + uVar3;
            if (uVar35 < 0x1000000) {
              if (pbVar36 < param_6) {
                bVar11 = *pbVar36;
                pbVar36 = pbVar36 + 1;
              }
              else {
                bVar11 = 0;
              }
              uVar35 = uVar35 * 0x100;
              uVar29 = uVar29 << 8 | (uint)bVar11;
            }
            uVar32 = (ulong)*param_1;
            puVar25 = (ushort *)
                      ((ulong)(uint)((int)local_50 << 5) + lVar4 + 0x1b0 + (ulong)bVar18 * 2);
            uVar3 = *puVar25;
            uVar24 = (uVar35 >> 0xb) * (uint)uVar3;
            uVar9 = (ulong)uVar24;
            uVar13 = uVar29 - uVar24;
            if (uVar24 <= uVar29) {
              uVar35 = uVar35 - uVar24;
              *puVar25 = uVar3 - (uVar3 >> 5);
              goto LAB_002a55b5;
            }
            *puVar25 = (short)(0x800 - uVar3 >> 5) + uVar3;
            (*pauVar33)[0] = *(undefined1 *)((long)pauVar33 - uVar32);
            pauVar17 = (undefined1 (*) [16])(*pauVar33 + 1);
            local_3a = (&UNK_003a22e0)[local_50];
          }
        } while (pauVar17 < param_4);
      }
LAB_002a602c:
      if (uVar29 != 0) {
        return 0;
      }
      if (pauVar17 == param_4) {
        *(byte *)((long)param_1 + 0x1d) = local_3a;
        return (long)param_4 - (long)param_3;
      }
      return 0;
    }
  }
  return 0;
  while( true ) {
    if (uVar35 < 0x1000000) {
      if (pbVar36 < param_6) {
        uVar13 = (uint)*pbVar36;
        pbVar36 = pbVar36 + 1;
      }
      else {
        uVar13 = 0;
      }
      uVar35 = uVar35 << 8;
      uVar29 = uVar29 << 8 | uVar13;
    }
    uVar13 = (uint)(bVar18 >> 7);
    uVar9 = (ulong)(uVar13 + uVar24 * 2 + 0x10);
    uVar3 = *(ushort *)(lVar10 + uVar9 * 2);
    uVar21 = (uVar35 >> 0xb) * (uint)uVar3;
    uVar35 = uVar35 - uVar21;
    bVar38 = uVar21 <= uVar29;
    iVar22 = 0x800;
    if (bVar38) {
      iVar22 = 0x1f;
    }
    if (!bVar38) {
      uVar35 = uVar21;
      uVar21 = 0;
    }
    uVar29 = uVar29 - uVar21;
    uVar21 = (uint)bVar38;
    uVar24 = uVar24 * 2 | uVar21;
    *(ushort *)(lVar10 + uVar9 * 2) = (short)(iVar22 - (uint)uVar3 >> 5) + uVar3;
    if (uVar21 == uVar13) {
      iVar12 = iVar12 + 1;
    }
    else {
      if (iVar12 == 3) break;
      do {
        uVar9 = (ulong)uVar24;
        if (uVar35 < 0x1000000) {
          if (pbVar36 < param_6) {
            bVar11 = *pbVar36;
            pbVar36 = pbVar36 + 1;
          }
          else {
            bVar11 = 0;
          }
          uVar35 = uVar35 << 8;
          uVar29 = uVar29 << 8 | (uint)bVar11;
        }
        uVar3 = *(ushort *)(lVar10 + uVar9 * 2);
        uVar34 = (uVar35 >> 0xb) * (uint)uVar3;
        uVar35 = uVar35 - uVar34;
        bVar38 = uVar34 <= uVar29;
        iVar22 = 0x800;
        if (bVar38) {
          iVar22 = 0x1f;
        }
        if (!bVar38) {
          uVar35 = uVar34;
          uVar34 = 0;
        }
        uVar29 = uVar29 - uVar34;
        uVar24 = (uint)bVar38 + uVar24 * 2;
        *(ushort *)(lVar10 + uVar9 * 2) = (short)(iVar22 - (uint)uVar3 >> 5) + uVar3;
        iVar12 = iVar12 + 1;
      } while (iVar12 < 3);
      iVar12 = 4;
    }
    bVar18 = bVar18 * '\x02';
    if (uVar21 != uVar13) break;
LAB_002a3fe2:
    if (3 < iVar12) break;
  }
  uVar14 = (uVar24 ^ 0x10) + uVar14;
  goto LAB_002a4346;
}

