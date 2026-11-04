// rea decompile_all
// name: _lzx_decode_buffer
// address: 0x1eb17b
// body: available
// range: 0x1eb17b-0x1ebb0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _lzx_decode_buffer(long param_1,ulong param_2,long param_3,ulong param_4,uint *param_5)

{
  uint *puVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  ushort uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  size_t sVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  ushort *puVar22;
  uint uVar23;
  uint uVar24;
  ushort *puVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  ulong local_b0;
  int local_88;
  ushort local_54;
  ushort local_52;
  ushort *local_50;
  ushort *local_48;
  ulong local_40;
  uint local_38;
  
  uVar27 = param_2 + 0x7fff >> 0xf;
  iVar13 = (int)uVar27;
  if (iVar13 == 0) {
    return 0;
  }
  uVar12 = iVar13 * 4 - 4;
  if ((uVar12 < param_4) && (uVar27 = uVar27 & 0xffffffff, uVar27 != 0)) {
    puVar3 = param_5 + 0x10100;
    puVar1 = param_5 + 4;
    puVar4 = param_5 + 0x1817e;
    puVar5 = param_5 + 0x8082;
    uVar30 = 0;
    uVar21 = 0;
    do {
      iVar13 = 0;
      if (uVar30 != 0) {
        iVar13 = *(int *)(param_3 + -4 + uVar30 * 4);
      }
      uVar19 = uVar12 + iVar13;
      uVar2 = uVar30 + 1;
      if (uVar2 == uVar27) {
        uVar23 = (int)param_4 - uVar19;
      }
      else {
        uVar23 = *(int *)(param_3 + uVar30 * 4) - iVar13;
      }
      uVar30 = (ulong)uVar19;
      if ((param_4 < uVar30) || (param_4 - uVar30 < (ulong)uVar23)) goto LAB_001ebaf6;
      local_88 = (int)uVar21;
      local_50 = (ushort *)(uVar30 + param_3);
      local_48 = (ushort *)((long)local_50 + (ulong)uVar23);
      local_40 = 0;
      local_38 = 0;
      _lzx_decoder_init(param_5);
      uVar19 = (int)param_2 - local_88;
      if (uVar21 + 0x8000 <= param_2) {
        uVar19 = 0x8000;
      }
      uVar11 = uVar21;
      if (uVar19 == 0) {
LAB_001eba76:
        local_88 = (int)uVar11 - local_88;
        if (10 < local_88) {
          lVar29 = uVar21 + param_1;
          uVar30 = 0;
          do {
            iVar14 = 1;
            iVar13 = (int)uVar30;
            if (*(char *)(lVar29 + uVar30) == -0x18) {
              iVar16 = *(int *)(lVar29 + 1 + uVar30);
              iVar20 = -iVar13;
              iVar14 = 5;
              if (iVar16 < 12000000 && iVar20 <= iVar16) {
                if (iVar16 < 0) {
                  iVar20 = 12000000;
                }
                *(int *)(lVar29 + 1 + uVar30) = iVar20 + iVar16;
              }
            }
            uVar30 = (ulong)(uint)(iVar14 + iVar13);
          } while (iVar13 + iVar14 + 10 < local_88);
        }
      }
      else {
        bVar8 = false;
        uVar30 = uVar21;
        do {
          puVar22 = local_48;
          if (uVar23 == uVar19) {
            bVar8 = true;
            uVar28 = 4;
            uVar15 = uVar23;
LAB_001eb44c:
            sVar18 = (size_t)uVar15;
          }
          else {
            if ((int)local_38 < 0x31) {
              iVar13 = 0x30 - local_38;
              uVar24 = local_38;
              do {
                puVar25 = local_50 + 1;
                if (local_48 < puVar25) {
                  local_38 = uVar24;
                  if ((int)uVar24 < 3) goto LAB_001ebaf6;
                  break;
                }
                local_38 = uVar24 + 0x10;
                local_40 = local_40 | (ulong)*local_50 << ((byte)iVar13 & 0x3f);
                iVar13 = iVar13 + -0x10;
                bVar7 = (int)uVar24 < 0x21;
                uVar24 = local_38;
                local_50 = puVar25;
              } while (bVar7);
            }
            uVar28 = local_40 >> 0x3d;
            uVar11 = local_40 << 3;
            uVar24 = local_38 - 3;
            if (2 < uVar28 - 1) goto LAB_001ebaf6;
            if (local_38 < 0x34) {
              iVar13 = 0x33 - local_38;
              uVar15 = uVar24;
              do {
                puVar25 = local_50 + 1;
                if (local_48 < puVar25) {
                  uVar24 = uVar15;
                  if ((int)uVar15 < 1) goto LAB_001ebaf6;
                  break;
                }
                uVar24 = uVar15 + 0x10;
                uVar11 = uVar11 | (ulong)*local_50 << ((byte)iVar13 & 0x3f);
                iVar13 = iVar13 + -0x10;
                bVar7 = (int)uVar15 < 0x21;
                uVar15 = uVar24;
                local_50 = puVar25;
              } while (bVar7);
            }
            local_40 = uVar11 * 2;
            local_38 = uVar24 - 1;
            uVar15 = uVar19;
            if ((long)uVar11 < 0) goto LAB_001eb44c;
            if (uVar24 < 0x32) {
              iVar13 = 0x31 - uVar24;
              uVar24 = local_38;
              do {
                puVar25 = local_50 + 1;
                if (local_48 < puVar25) {
                  local_38 = uVar24;
                  if ((int)uVar24 < 0x10) goto LAB_001ebaf6;
                  break;
                }
                local_38 = uVar24 + 0x10;
                local_40 = local_40 | (ulong)*local_50 << ((byte)iVar13 & 0x3f);
                iVar13 = iVar13 + -0x10;
                bVar7 = (int)uVar24 < 0x21;
                local_50 = puVar25;
                uVar24 = local_38;
              } while (bVar7);
            }
            sVar18 = local_40 >> 0x30;
            local_40 = local_40 << 0x10;
            local_38 = local_38 - 0x10;
            if (0x8000 < sVar18) goto LAB_001ebaf6;
          }
          uVar24 = (uint)sVar18;
          if ((uVar19 < uVar24) || (uVar11 = sVar18 + uVar30, param_2 < uVar11)) goto LAB_001ebaf6;
          iVar13 = (int)uVar28;
          if (iVar13 == 3) {
            uVar15 = local_38 & 0xf;
            if (uVar15 == 0) {
              uVar15 = 0x10;
            }
            uVar26 = local_38;
            if ((int)local_38 < 0x31) {
              do {
                puVar25 = local_50 + 1;
                uVar26 = local_38;
                if (local_48 < puVar25) break;
                uVar26 = local_38 + 0x10;
                bVar7 = (int)local_38 < 0x21;
                local_38 = uVar26;
                local_50 = puVar25;
              } while (bVar7);
            }
            if (((int)uVar26 < (int)uVar15) || ((uVar26 - uVar15 & 7) != 0)) goto LAB_001ebaf6;
            lVar29 = (long)-((int)(uVar26 - uVar15) >> 3);
            puVar6 = (undefined8 *)((long)local_50 + lVar29);
            local_50 = (ushort *)((long)local_50 + lVar29 + 0xc);
            if (local_48 < local_50) goto LAB_001ebaf6;
            uVar15 = *(uint *)(puVar6 + 1);
            *(undefined8 *)param_5 = *puVar6;
            param_5[2] = uVar15;
            local_40 = 0;
            local_38 = 0;
            puVar25 = (ushort *)((long)local_50 + sVar18);
            if (local_48 < puVar25) goto LAB_001ebaf6;
            _memcpy((void *)(uVar30 + param_1),local_50,sVar18);
            local_50 = puVar25;
            if (((sVar18 & 1) != 0) && (puVar22 != puVar25)) {
              local_40 = 0;
              local_38 = 0;
              local_50 = (ushort *)((long)puVar25 + 1);
              if (puVar22 < local_50) goto LAB_001ebaf6;
            }
          }
          else if (iVar13 == 4) {
            if ((local_38 & 7) != 0) goto LAB_001ebaf6;
            local_50 = (ushort *)((long)-((int)local_38 >> 3) + (long)local_50);
            local_40 = 0;
            local_38 = 0;
            puVar22 = (ushort *)((long)local_50 + sVar18);
            if (local_48 < puVar22) goto LAB_001ebaf6;
            _memcpy((void *)(uVar30 + param_1),local_50,sVar18);
            local_50 = puVar22;
          }
          else if (sVar18 != 0) {
            if (iVar13 == 2) {
              lVar29 = 0;
              uVar28 = local_40;
              puVar22 = local_50;
              do {
                if ((int)local_38 < 0x31) {
                  iVar14 = 0x30 - local_38;
                  puVar25 = puVar22;
                  uVar15 = local_38;
                  do {
                    puVar22 = puVar25 + 1;
                    if (local_48 < puVar22) {
                      puVar22 = puVar25;
                      local_38 = uVar15;
                      if ((int)uVar15 < 3) goto LAB_001ebaf6;
                      break;
                    }
                    local_38 = uVar15 + 0x10;
                    uVar28 = uVar28 | (ulong)*puVar25 << ((byte)iVar14 & 0x3f);
                    iVar14 = iVar14 + -0x10;
                    bVar7 = (int)uVar15 < 0x21;
                    puVar25 = puVar22;
                    uVar15 = local_38;
                    local_50 = puVar22;
                  } while (bVar7);
                }
                local_40 = uVar28 << 3;
                local_38 = local_38 - 3;
                *(byte *)((long)puVar3 + lVar29) = (byte)(uVar28 >> 0x3d);
                lVar29 = lVar29 + 1;
                uVar28 = local_40;
              } while (lVar29 != 8);
              _lzx_huffman_tree_compute_lookup_from_code_len(puVar3);
            }
            iVar14 = _lzx_huffman_tree_update_tree_using_pre_tree_encoding
                               (puVar1,&local_50,0,0x100,puVar4);
            if ((((iVar14 != 0) ||
                 (iVar14 = _lzx_huffman_tree_update_tree_using_pre_tree_encoding
                                     (puVar1,&local_50,0x100,0xf0,puVar4), iVar14 != 0)) ||
                (iVar14 = _lzx_huffman_tree_compute_lookup_from_code_len(puVar1), iVar14 != 0)) ||
               ((iVar14 = _lzx_huffman_tree_update_tree_using_pre_tree_encoding
                                    (puVar5,&local_50,0,0xf9,puVar4), iVar14 != 0 ||
                (iVar14 = _lzx_huffman_tree_compute_lookup_from_code_len(puVar5), iVar14 != 0))))
            goto LAB_001ebaf6;
            do {
              iVar14 = _lzx_huffman_tree_read_code(&local_54,&local_50,puVar1);
              if (iVar14 != 0) goto LAB_001ebaf6;
              if (local_54 < 0x100) {
                *(char *)(param_1 + uVar30) = (char)local_54;
                uVar30 = uVar30 + 1;
                lVar29 = -1;
              }
              else {
                if ((ulong)(local_54 & 7) == 7) {
                  iVar14 = _lzx_huffman_tree_read_code(&local_52,&local_50,puVar5);
                  if (iVar14 != 0) goto LAB_001ebaf6;
                  uVar28 = (ulong)local_52 + 9;
                }
                else {
                  uVar28 = (ulong)(local_54 & 7) + 2;
                }
                lVar29 = -uVar28;
                if (sVar18 < uVar28) goto LAB_001ebaf6;
                uVar15 = (int)(local_54 - 0x100) >> 3;
                if (uVar15 == 2) {
                  uVar15 = param_5[2];
                  param_5[2] = *param_5;
LAB_001eb783:
                  *param_5 = uVar15;
LAB_001eb785:
                  if (uVar15 == 0) {
                    iVar14 = 0;
LAB_001eb792:
                    iVar20 = 0;
                    uVar10 = 0;
                    goto LAB_001eb934;
                  }
                }
                else {
                  if (uVar15 == 1) {
                    uVar15 = param_5[1];
                    param_5[1] = *param_5;
                    goto LAB_001eb783;
                  }
                  if (uVar15 == 0) {
                    uVar15 = *param_5;
                    goto LAB_001eb785;
                  }
                  lVar17 = (long)(int)uVar15;
                  iVar16 = *(int *)(&_position_slot_extra_bits + lVar17 * 4);
                  iVar14 = *(int *)(&_position_slot_base_position + lVar17 * 4);
                  local_52 = 0;
                  bVar9 = (byte)iVar16;
                  if ((iVar13 != 2) || (0x15 < lVar17 - 8U)) {
                    if (uVar15 < 4) goto LAB_001eb792;
                    if ((int)local_38 < 0x31) {
                      iVar20 = 0x30 - local_38;
                      uVar15 = local_38;
                      do {
                        puVar22 = local_50 + 1;
                        local_38 = uVar15;
                        if (local_48 < puVar22) break;
                        local_38 = uVar15 + 0x10;
                        local_40 = local_40 | (ulong)*local_50 << ((byte)iVar20 & 0x3f);
                        iVar20 = iVar20 + -0x10;
                        bVar7 = (int)uVar15 < 0x21;
                        uVar15 = local_38;
                        local_50 = puVar22;
                      } while (bVar7);
                    }
                    if (iVar16 <= (int)local_38) {
                      iVar20 = (int)(local_40 >> (-bVar9 & 0x3f));
                      local_40 = local_40 << (bVar9 & 0x3f);
                      local_38 = local_38 - iVar16;
                      uVar10 = 0;
                      goto LAB_001eb934;
                    }
                    goto LAB_001ebaf6;
                  }
                  uVar15 = iVar16 - 3;
                  if (0x30 < uVar15) goto LAB_001ebaf6;
                  if (uVar15 == 0) {
                    local_b0 = 0;
                  }
                  else {
                    uVar26 = local_38;
                    if ((int)local_38 < 0x31) {
                      iVar16 = 0x30 - local_38;
                      do {
                        puVar22 = local_50 + 1;
                        uVar26 = local_38;
                        if (local_48 < puVar22) break;
                        uVar26 = local_38 + 0x10;
                        local_40 = local_40 | (ulong)*local_50 << ((byte)iVar16 & 0x3f);
                        iVar16 = iVar16 + -0x10;
                        bVar7 = (int)local_38 < 0x21;
                        local_38 = uVar26;
                        local_50 = puVar22;
                      } while (bVar7);
                    }
                    local_38 = uVar26 - uVar15;
                    if ((int)uVar26 < (int)uVar15) goto LAB_001ebaf6;
                    local_b0 = local_40 >> (0x43 - bVar9 & 0x3f);
                    local_40 = local_40 << ((byte)uVar15 & 0x3f);
                  }
                  iVar16 = _lzx_huffman_tree_read_code(&local_52,&local_50,puVar3);
                  if (iVar16 != 0) goto LAB_001ebaf6;
                  iVar20 = (int)(local_b0 << 3);
                  uVar10 = local_52;
LAB_001eb934:
                  uVar15 = ((uint)uVar10 + iVar14 + iVar20) - 2;
                  *(undefined8 *)(param_5 + 1) = *(undefined8 *)param_5;
                  *param_5 = uVar15;
                }
                if ((uVar15 == 0) || (uVar30 < uVar15)) goto LAB_001ebaf6;
                do {
                  *(undefined1 *)(param_1 + uVar30) =
                       *(undefined1 *)((param_1 - (ulong)uVar15) + uVar30);
                  uVar30 = uVar30 + 1;
                  uVar28 = uVar28 - 1;
                } while (uVar28 != 0);
              }
              sVar18 = sVar18 + lVar29;
            } while (sVar18 != 0);
          }
          uVar19 = uVar19 - uVar24;
          uVar30 = uVar11;
        } while (uVar19 != 0);
        if (!bVar8) goto LAB_001eba76;
      }
      uVar30 = uVar2;
      uVar21 = uVar11;
    } while (uVar2 != uVar27);
  }
  else {
LAB_001ebaf6:
    uVar11 = 0;
  }
  return uVar11;
}

