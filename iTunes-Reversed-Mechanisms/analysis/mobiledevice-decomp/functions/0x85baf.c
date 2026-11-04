// rea decompile_all
// name: _BrotliDecoderDecompressStream
// address: 0x85baf
// body: available
// range: 0x85baf-0x86c0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x85c12 to 0x86c7c _SaveErrorCode (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_BrotliDecoderDecompressStream
          (int *param_1,long *param_2,long *param_3,long *param_4,long *param_5,undefined8 *param_6)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  undefined1 *puVar11;
  int iVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  bool bVar24;
  uint local_74;
  uint local_70;
  uint local_6c;
  long *local_68;
  uint *local_60;
  undefined8 *local_58;
  int local_4c;
  long *local_48;
  long *local_40;
  ulong *local_38;
  
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = *(undefined8 *)(param_1 + 0x5e);
  }
  if (param_1[0x1d] < 0) {
    return 0;
  }
  if (*param_4 == 0) {
    param_5 = (long *)0x0;
  }
  else if ((param_5 == (long *)0x0) || (*param_5 == 0)) {
    uVar6 = _SaveErrorCode(param_1,0xffffffec);
    return uVar6;
  }
  if (param_1[0x12] == 0) {
    *(long *)(param_1 + 8) = *param_2;
    piVar9 = (int *)*param_3;
    iVar4 = 1;
  }
  else {
    piVar9 = param_1 + 0x10;
    iVar4 = 2;
  }
  local_38 = (ulong *)(param_1 + 2);
  *(int **)(param_1 + 6) = piVar9;
  local_60 = (uint *)(param_1 + 0x47);
  piVar9 = param_1 + 0xb2;
  plVar1 = (long *)(param_1 + 0x2a);
  local_68 = param_5;
  local_58 = param_6;
  local_40 = param_4;
switchD_00085d76_default:
  if (iVar4 != 1) {
    if (iVar4 != 2) {
      if (param_1[0x12] == 0) {
        uVar8 = 0x40 - param_1[4];
        uVar10 = (ulong)(uVar8 >> 3);
        uVar8 = uVar8 & 0xfffffff8;
        lVar14 = *(long *)(param_1 + 8) + uVar10;
        *(long *)(param_1 + 8) = lVar14;
        lVar16 = *(long *)(param_1 + 6) - uVar10;
        *(long *)(param_1 + 6) = lVar16;
        if (uVar8 == 0x40) {
          lVar19 = 0;
        }
        else {
          lVar19 = *local_38 << ((byte)uVar8 & 0x3f);
        }
        *(long *)(param_1 + 2) = lVar19;
        param_1[4] = uVar8 + param_1[4];
        *param_2 = lVar14;
        *param_3 = lVar16;
      }
      else {
        param_1[0x12] = 0;
      }
      goto LAB_00086be4;
    }
    if ((*(long *)(param_1 + 0x1e) != 0) &&
       (iVar4 = _WriteRingBuffer(param_1,param_4,local_68,param_6,1), iVar4 < 0)) goto LAB_00086be4;
    if ((ulong)(uint)param_1[0x12] == 0) {
      puVar11 = *(undefined1 **)(param_1 + 6);
      *param_3 = (long)puVar11;
      lVar14 = *(long *)(param_1 + 8);
      *param_2 = lVar14;
      iVar4 = 2;
      if (lVar14 != 0) {
        uVar10 = 0;
        do {
          *(undefined1 *)((long)param_1 + uVar10 + 0x40) = *puVar11;
          uVar10 = (ulong)(param_1[0x12] + 1U);
          param_1[0x12] = param_1[0x12] + 1U;
          puVar11 = (undefined1 *)(*param_3 + 1);
          *param_3 = (long)puVar11;
          *param_2 = *param_2 + -1;
        } while (*param_2 != 0);
      }
      goto LAB_00086be4;
    }
    if (*(long *)(param_1 + 8) == 0) {
      param_1[0x12] = 0;
      *(long *)(param_1 + 8) = *param_2;
      *(long *)(param_1 + 6) = *param_3;
      iVar4 = 1;
    }
    else {
      if (*param_2 == 0) {
        iVar4 = 2;
        goto LAB_00086be4;
      }
      *(undefined1 *)((long)param_1 + (ulong)(uint)param_1[0x12] + 0x40) = *(undefined1 *)*param_3;
      iVar4 = param_1[0x12];
      param_1[0x12] = iVar4 + 1U;
      *(ulong *)(param_1 + 8) = (ulong)(iVar4 + 1U);
      *param_3 = *param_3 + 1;
      *param_2 = *param_2 + -1;
      iVar4 = 1;
    }
    goto switchD_00085d76_default;
  }
  iVar4 = 1;
  plVar23 = plVar1;
  switch(*param_1) {
  case 0:
    iVar5 = _BrotliWarmupBitReader(local_38);
    iVar4 = 2;
    if (iVar5 != 0) {
      uVar2 = *(ushort *)(param_1 + 0xa6);
      uVar3 = uVar2 & 0xffdf;
      *(ushort *)(param_1 + 0xa6) = uVar3;
      uVar10 = *(ulong *)(param_1 + 2);
      uVar8 = param_1[4];
      param_1[4] = uVar8 + 1;
      if ((uVar10 >> ((ulong)uVar8 & 0x3f) & 1) == 0) {
        param_1[0xa7] = 0x10;
      }
      else {
        uVar18 = uVar10 >> ((byte)(uVar8 + 1) & 0x3f);
        param_1[4] = uVar8 + 4;
        if ((uVar18 & 7) == 0) {
          uVar18 = uVar10 >> ((byte)(uVar8 + 4) & 0x3f);
          param_1[4] = uVar8 + 7;
          uVar15 = (uint)uVar18 & 7;
          if ((uVar18 & 7) == 0) {
            param_1[0xa7] = 0x11;
          }
          else {
            if (uVar15 != 1) {
              uVar15 = uVar15 | 8;
              goto LAB_00085f00;
            }
            iVar4 = -0xd;
            if (((uVar2 & 0x20) == 0) ||
               (param_1[4] = uVar8 + 8, (uVar10 >> ((ulong)(uVar8 + 7) & 0x3f) & 1) != 0))
            goto switchD_00085d76_default;
            *(ushort *)(param_1 + 0xa6) = uVar2;
            uVar3 = uVar2;
          }
        }
        else {
          uVar15 = ((uint)uVar18 & 7) + 0x11;
LAB_00085f00:
          param_1[0xa7] = uVar15;
        }
      }
      if ((uVar3 & 0x20) == 0) {
        *param_1 = 2;
        iVar4 = 1;
      }
      else {
        *param_1 = 1;
        iVar4 = 1;
      }
    }
    goto switchD_00085d76_default;
  case 1:
    iVar5 = param_1[4];
    if (iVar5 - 0x3bU < 6) {
      iVar4 = 2;
      if (*(long *)(param_1 + 8) == 0) goto switchD_00085d76_default;
      uVar10 = *(ulong *)(param_1 + 2);
      *(ulong *)(param_1 + 2) = uVar10 >> 8;
      uVar10 = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar10 >> 8;
      *(ulong *)(param_1 + 2) = uVar10;
      iVar5 = iVar5 + -8;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
      *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
    }
    else {
      uVar10 = *local_38;
    }
    uVar8 = (uint)(uVar10 >> ((byte)iVar5 & 0x3f)) & 0x3f;
    param_1[0xa7] = uVar8;
    param_1[4] = iVar5 + 6;
    iVar4 = -0xd;
    if (0xffffffea < uVar8 - 0x1f) {
      *param_1 = 2;
      goto LAB_000860ae;
    }
    goto switchD_00085d76_default;
  case 2:
    uVar8 = param_1[0xa7];
LAB_000860ae:
    param_1[0x14] = (1 << ((byte)uVar8 & 0x1f)) + -0x10;
    lVar14 = (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 0xe),0x3030);
    *(long *)(param_1 + 0x3c) = lVar14;
    iVar4 = -0x1e;
    if (lVar14 == 0) goto switchD_00085d76_default;
    *(long *)(param_1 + 0x3e) = lVar14 + 0x1da0;
    *param_1 = 3;
switchD_00085d76_caseD_3:
    _BrotliDecoderStateMetablockBegin(param_1);
    *param_1 = 4;
switchD_00085d76_caseD_4:
    iVar4 = _DecodeMetaBlockLength(param_1,local_38);
    if (iVar4 != 1) goto switchD_00085d76_default;
    if ((*(ushort *)(param_1 + 0xa6) & 6) != 0) {
      iVar5 = param_1[4];
      uVar8 = -iVar5 & 7;
      if (uVar8 != 0) {
        param_1[4] = uVar8 + iVar5;
        iVar4 = -0xe;
        if ((*(uint *)(&_kBrotliBitMask + (ulong)uVar8 * 4) &
            (uint)(*(ulong *)(param_1 + 2) >> ((byte)iVar5 & 0x3f))) != 0)
        goto switchD_00085d76_default;
      }
      if ((*(ushort *)(param_1 + 0xa6) & 4) != 0) {
        *param_1 = 0xc;
        iVar4 = 1;
        goto switchD_00085d76_default;
      }
    }
    if (param_1[0x42] != 0) {
      _BrotliCalculateRingBufferSize(param_1);
      if ((*(byte *)(param_1 + 0xa6) & 2) == 0) {
switchD_00085d76_caseD_11:
        *(int **)(param_1 + 0xe4) = param_1 + 0xee;
        param_1[0xba] = 0;
        param_1[0xbb] = 0;
        param_1[0xbc] = 0;
        param_1[0xbd] = 0;
        param_1[0] = 0x12;
        param_1[1] = 0;
        iVar4 = 0;
LAB_0008619f:
        iVar4 = _DecodeVarLenUint8(param_1,local_38,local_60 + iVar4);
        if (iVar4 == 1) {
          param_1[(long)param_1[1] + 0x47] = param_1[(long)param_1[1] + 0x47] + 1;
          iVar4 = param_1[1];
          lVar14 = (long)iVar4;
          if ((uint)param_1[lVar14 + 0x47] < 2) {
            param_1[1] = iVar4 + 1;
            iVar4 = 1;
          }
          else {
            *param_1 = 0x13;
LAB_00086522:
            iVar4 = _ReadHuffmanCode(param_1[lVar14 + 0x47] + 2,param_1[lVar14 + 0x47] + 2,
                                     (long)(iVar4 * 0x278) * 4 + *(long *)(param_1 + 0x3c),0);
            if (iVar4 == 1) {
              *param_1 = 0x14;
switchD_00085d76_caseD_14:
              iVar4 = _ReadHuffmanCode(0x1a,0x1a,
                                       (long)param_1[1] * 0x630 + *(long *)(param_1 + 0x3e),0);
              if (iVar4 == 1) {
                *param_1 = 0x15;
switchD_00085d76_caseD_15:
                iVar4 = param_1[1];
                if (param_1[0xa5] == 0) {
                  lVar14 = (long)iVar4 * 0x630 + *(long *)(param_1 + 0x3e);
                  iVar5 = param_1[4];
                  if (iVar5 - 0x32U < 0xf) {
                    lVar16 = *(long *)(param_1 + 8);
                    iVar12 = iVar5;
                    do {
                      lVar16 = lVar16 + -1;
                      if (lVar16 == -1) {
                        iVar5 = _SafeDecodeSymbol(lVar14,local_38,&local_70);
                        uVar8 = local_70;
                        if (iVar5 == 0) goto LAB_0008671a;
                        goto LAB_0008665f;
                      }
                      uVar10 = *(ulong *)(param_1 + 2);
                      *(ulong *)(param_1 + 2) = uVar10 >> 8;
                      uVar10 = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar10 >> 8;
                      *(ulong *)(param_1 + 2) = uVar10;
                      iVar5 = iVar12 + -8;
                      param_1[4] = iVar5;
                      *(long *)(param_1 + 8) = lVar16;
                      *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
                      uVar8 = iVar12 - 0x3a;
                      iVar12 = iVar5;
                    } while (uVar8 < 0xf);
                  }
                  else {
                    uVar10 = *local_38;
                  }
                  uVar10 = uVar10 >> ((byte)iVar5 & 0x3f);
                  pbVar13 = (byte *)(lVar14 + (uVar10 & 0xff) * 4);
                  uVar8 = (uint)*pbVar13;
                  if (8 < uVar8) {
                    iVar5 = iVar5 + 8;
                    pbVar13 = pbVar13 + (ulong)(((uint)(uVar10 >> 8) & 0xffffff &
                                                 *(uint *)(&_kBrotliBitMask +
                                                          (ulong)(*pbVar13 - 8) * 4) & 0x7f) +
                                               (uint)*(ushort *)(pbVar13 + 2)) * 4;
                    uVar8 = (uint)*pbVar13;
                  }
                  param_1[4] = uVar8 + iVar5;
                  uVar8 = (uint)*(ushort *)(pbVar13 + 2);
                }
                else {
                  uVar8 = param_1[0x43];
                }
LAB_0008665f:
                bVar7 = (&DAT_002b5682)[(ulong)uVar8 * 4];
                uVar2 = *(ushort *)(&__kBrotliPrefixCodeRanges + (ulong)uVar8 * 4);
                iVar5 = param_1[4];
                uVar15 = 0x40 - iVar5;
                if (uVar15 < bVar7) {
                  lVar14 = *(long *)(param_1 + 8);
                  while (lVar14 = lVar14 + -1, lVar14 != -1) {
                    uVar10 = *(ulong *)(param_1 + 2);
                    *(ulong *)(param_1 + 2) = uVar10 >> 8;
                    uVar10 = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar10 >> 8;
                    *(ulong *)(param_1 + 2) = uVar10;
                    iVar5 = iVar5 + -8;
                    param_1[4] = iVar5;
                    *(long *)(param_1 + 8) = lVar14;
                    *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
                    uVar15 = uVar15 + 8;
                    if (bVar7 <= uVar15) goto LAB_000866d0;
                  }
                  param_1[0x43] = uVar8;
                  param_1[0xa5] = 1;
LAB_0008671a:
                  iVar4 = 2;
                  param_4 = local_40;
                }
                else {
                  uVar10 = *local_38;
LAB_000866d0:
                  uVar8 = *(uint *)(&_kBrotliBitMask + (ulong)(uint)bVar7 * 4);
                  param_1[4] = iVar5 + (uint)bVar7;
                  param_1[(long)iVar4 + 0x44] =
                       ((uint)(uVar10 >> ((byte)iVar5 & 0x3f)) & uVar8) + (uint)uVar2;
                  param_1[0xa5] = 0;
                  param_1[1] = param_1[1] + 1;
                  *param_1 = 0x12;
                  iVar4 = 1;
                  param_4 = local_40;
                }
              }
            }
          }
        }
      }
      else {
        *param_1 = 0xb;
        iVar4 = 1;
      }
      goto switchD_00085d76_default;
    }
    break;
  case 3:
    goto switchD_00085d76_caseD_3;
  case 4:
    goto switchD_00085d76_caseD_4;
  case 5:
    iVar5 = param_1[4];
    if (iVar5 - 0x3bU < 6) {
      iVar4 = 2;
      if (*(long *)(param_1 + 8) == 0) goto switchD_00085d76_default;
      uVar10 = *(ulong *)(param_1 + 2);
      *(ulong *)(param_1 + 2) = uVar10 >> 8;
      uVar10 = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar10 >> 8;
      *(ulong *)(param_1 + 2) = uVar10;
      iVar5 = iVar5 + -8;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
      *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
    }
    else {
      uVar10 = *local_38;
    }
    param_1[4] = iVar5 + 6;
    uVar8 = (uint)(uVar10 >> ((byte)iVar5 & 0x3f));
    uVar15 = uVar8 & 3;
    param_1[0x50] = uVar15;
    param_1[0x51] = (uVar8 >> 2 & 0xf) << (sbyte)uVar15;
    lVar14 = (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 0xe),param_1[0x47]);
    *(long *)(param_1 + 0xac) = lVar14;
    iVar4 = -0x15;
    if (lVar14 != 0) {
      param_1[0] = 6;
      param_1[1] = 0;
      iVar4 = 0;
      goto LAB_00086243;
    }
    goto switchD_00085d76_default;
  case 6:
    iVar4 = param_1[1];
LAB_00086243:
    uVar8 = *local_60;
    if ((int)uVar8 <= iVar4) {
LAB_000862c6:
      *param_1 = 0x16;
LAB_000862cc:
      iVar4 = _DecodeContextMap(uVar8 << 6,param_1 + 0xa9,param_1 + 0xaa,param_1);
      if (iVar4 == 1) {
        param_1[0xb6] = 0;
        param_1[0xb7] = 0;
        param_1[0xb8] = 0;
        param_1[0xb9] = 0;
        piVar9[0] = 0;
        piVar9[1] = 0;
        param_1[0xb4] = 0;
        param_1[0xb5] = 0;
        uVar8 = *local_60;
        if ((ulong)uVar8 != 0) {
          lVar16 = *(long *)(param_1 + 0xaa);
          lVar14 = lVar16 + 2;
          uVar10 = 0;
          do {
            bVar7 = *(byte *)(lVar16 + uVar10 * 0x40);
            bVar20 = 0;
            uVar18 = 0;
            do {
              uVar22 = uVar18 | uVar10 * 0x40;
              bVar20 = bVar20 | *(byte *)(lVar16 + 3 + uVar22) ^ bVar7 |
                                *(byte *)(lVar14 + uVar18) ^ bVar7 |
                                *(byte *)(lVar14 + -1 + uVar18) ^ bVar7 |
                                *(byte *)(lVar16 + uVar22) ^ bVar7;
              bVar24 = uVar18 < 0x3c;
              uVar18 = uVar18 + 4;
            } while (bVar24);
            if (bVar20 == 0) {
              piVar9[uVar10 >> 5] = piVar9[uVar10 >> 5] | 1 << ((byte)uVar10 & 0x1f);
            }
            uVar10 = uVar10 + 1;
            lVar14 = lVar14 + 0x40;
          } while (uVar10 != uVar8);
        }
        *param_1 = 0x17;
        param_6 = local_58;
        param_4 = local_40;
        local_48 = param_2;
switchD_00085d76_caseD_17:
        bVar7 = (byte)param_1[0x50];
        uVar8 = param_1[0x51];
        if ((*(byte *)(param_1 + 0xa6) & 0x20) == 0) {
          local_4c = uVar8 + (0x18 << (bVar7 + 1 & 0x1f)) + 0x10;
          iVar4 = local_4c;
        }
        else {
          local_4c = -0x7ffffff4;
          if (uVar8 < 0x7ffffffc) {
            uVar21 = 0xffffffff;
            uVar17 = (0x7ffffffc - uVar8 >> (bVar7 & 0x1f)) + 4;
            iVar4 = -5;
            uVar15 = uVar17;
            do {
              uVar21 = uVar21 + 1;
              iVar4 = iVar4 + 2;
              bVar24 = 3 < uVar15;
              uVar15 = uVar15 >> 1;
            } while (bVar24);
            iVar4 = (uint)((uVar17 >> (uVar21 & 0x1f) & 1) != 0) + iVar4;
            local_4c = uVar8 + 0x10;
            if (iVar4 != -1) {
              local_4c = uVar8 + (iVar4 << (bVar7 & 0x1f) | ~(-1 << (bVar7 & 0x1f))) + 0x11;
            }
          }
          iVar4 = uVar8 + 0x10 + (0x3e << (bVar7 + 1 & 0x1f));
        }
        local_48 = (long *)CONCAT44(local_48._4_4_,iVar4);
        iVar4 = _DecodeContextMap(param_1[0x49] << 2,param_1 + 0x52,param_1 + 0x54,param_1);
        if (iVar4 == 1) {
          local_6c = _BrotliDecoderHuffmanTreeGroupInit(param_1,plVar1,0x100,0x100,param_1[0xa9]);
          uVar8 = _BrotliDecoderHuffmanTreeGroupInit
                            (param_1,param_1 + 0x30,0x2c0,0x2c0,param_1[0x48]);
          uVar8 = uVar8 & local_6c;
          uVar15 = _BrotliDecoderHuffmanTreeGroupInit
                             (param_1,param_1 + 0x36,(ulong)local_48 & 0xffffffff);
          if ((uVar15 & uVar8 & 1) == 0) {
            iVar4 = -0x16;
            goto LAB_00086be4;
          }
          param_1[0] = 0x18;
          param_1[1] = 0;
          iVar5 = 0;
LAB_00086732:
          param_6 = local_58;
          if (param_1[0xba] == 1) {
            iVar4 = param_1[0x27b];
          }
          else {
            *(long *)(param_1 + 0x27c) = plVar23[1];
            param_1[0x27b] = 0;
            param_1[0xba] = 1;
            iVar4 = 0;
          }
          if (iVar4 < (int)(uint)*(ushort *)((long)plVar23 + 0x14)) {
            lVar14 = *(long *)(param_1 + 0x27c);
            do {
              iVar4 = _ReadHuffmanCode((short)plVar23[2],*(undefined2 *)((long)plVar23 + 0x12),
                                       lVar14,&local_74);
              param_4 = local_40;
              if (iVar4 != 1) goto switchD_00085d76_default;
              lVar14 = *(long *)(param_1 + 0x27c);
              iVar4 = param_1[0x27b];
              *(long *)(*plVar23 + (long)iVar4 * 8) = lVar14;
              lVar14 = lVar14 + (ulong)local_74 * 4;
              *(long *)(param_1 + 0x27c) = lVar14;
              iVar4 = iVar4 + 1;
              param_1[0x27b] = iVar4;
            } while (iVar4 < (int)(uint)*(ushort *)((long)plVar23 + 0x14));
            iVar5 = param_1[1];
          }
          param_1[0xba] = 0;
          param_1[1] = iVar5 + 1;
          iVar4 = 1;
          param_4 = local_40;
          if (1 < iVar5) {
            *param_1 = 0x19;
switchD_00085d76_caseD_19:
            uVar8 = param_1[0x4b];
            *(ulong *)(param_1 + 0x26) = *(long *)(param_1 + 0xaa) + (ulong)(uVar8 << 6);
            param_1[0x40] =
                 (uint)(((uint)param_1[(ulong)(uVar8 >> 5) + 0xb2] >> (uVar8 & 0x1f) & 1) != 0);
            *(undefined8 *)(param_1 + 0x56) =
                 *(undefined8 *)
                  (*(long *)(param_1 + 0x2a) +
                  (ulong)*(byte *)(*(long *)(param_1 + 0xaa) + (ulong)(uVar8 << 6)) * 8);
            *(undefined **)(param_1 + 0x24) =
                 PTR___kBrotliContextLookupTable_00441028 +
                 ((*(byte *)(*(long *)(param_1 + 0xac) + (ulong)uVar8) & 3) << 9);
            *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x54);
            *(undefined8 *)(param_1 + 0x22) = **(undefined8 **)(param_1 + 0x30);
            iVar5 = _BrotliEnsureRingBuffer(param_1);
            iVar4 = -0x1b;
            if (iVar5 != 0) {
              iVar4 = param_1[0x51];
              if (iVar4 == 0) {
                uVar10 = 0x10;
              }
              else {
                uVar10 = 0x10;
                do {
                  *(undefined1 *)((long)param_1 + uVar10 + 0x2e8) = 0;
                  iVar5 = (int)uVar10;
                  param_1[uVar10 + 0x142] = iVar5 + -0xf;
                  uVar10 = (ulong)(iVar5 + 1);
                } while (iVar5 - iVar4 != 0xf);
              }
              uVar2 = *(ushort *)((long)param_1 + 0xea);
              if ((uint)uVar10 < (uint)uVar2) {
                iVar5 = param_1[0x50];
                iVar12 = 1;
                uVar8 = 0;
                do {
                  uVar15 = 1;
                  do {
                    uVar18 = (ulong)(((int)uVar10 + uVar15) - 1);
                    *(byte *)((long)param_1 + uVar18 + 0x2e8) = (byte)iVar12;
                    param_1[uVar18 + 0x142] =
                         ((uVar8 + 2 << ((byte)iVar12 & 0x1f)) + -4 << ((byte)iVar5 & 0x1f)) + iVar4
                         + uVar15;
                    uVar21 = uVar15 + 1;
                    uVar17 = uVar15 >> ((byte)iVar5 & 0x1f);
                    uVar15 = uVar21;
                  } while (uVar17 == 0);
                  iVar12 = iVar12 + uVar8;
                  uVar8 = uVar8 ^ 1;
                  uVar15 = ((int)uVar10 + uVar21) - 1;
                  uVar10 = (ulong)uVar15;
                } while (uVar15 < uVar2);
              }
              *param_1 = 7;
              param_6 = local_58;
              param_4 = local_40;
switchD_00085d76_caseD_7:
              iVar4 = _ProcessCommands(param_1);
              if (iVar4 == 2) {
                iVar4 = _SafeProcessCommands(param_1);
              }
            }
          }
        }
      }
      goto switchD_00085d76_default;
    }
    lVar14 = (long)iVar4;
LAB_0008624f:
    iVar4 = param_1[4];
    if (iVar4 - 0x3fU < 2) {
      if (*(long *)(param_1 + 8) == 0) {
        param_1[1] = (int)lVar14;
LAB_00086a0d:
        iVar4 = 2;
        goto switchD_00085d76_default;
      }
      uVar10 = *(ulong *)(param_1 + 2);
      *(ulong *)(param_1 + 2) = uVar10 >> 8;
      uVar10 = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar10 >> 8;
      *(ulong *)(param_1 + 2) = uVar10;
      iVar4 = iVar4 + -8;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
      *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
    }
    else {
      uVar10 = *local_38;
    }
    param_1[4] = iVar4 + 2;
    *(byte *)(*(long *)(param_1 + 0xac) + lVar14) = (byte)(uVar10 >> ((byte)iVar4 & 0x3f)) & 3;
    lVar14 = lVar14 + 1;
    uVar8 = param_1[0x47];
    if ((int)uVar8 <= lVar14) goto LAB_000862c6;
    goto LAB_0008624f;
  case 7:
  case 8:
  case 9:
  case 10:
    goto switchD_00085d76_caseD_7;
  case 0xb:
    iVar4 = _CopyUncompressedBlockToOutput(param_4,local_68,param_6,param_1);
    if (iVar4 != 1) goto switchD_00085d76_default;
    break;
  case 0xc:
    if (0 < param_1[0x42]) {
      iVar4 = param_1[4];
      iVar5 = param_1[0x42] + 1;
      do {
        if (iVar4 - 0x39U < 8) {
          if (*(long *)(param_1 + 8) == 0) goto LAB_00086a0d;
          uVar10 = *(ulong *)(param_1 + 2);
          *(ulong *)(param_1 + 2) = uVar10 >> 8;
          *(ulong *)(param_1 + 2) = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar10 >> 8;
          iVar4 = iVar4 + -8;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
          *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
        }
        iVar4 = iVar4 + 8;
        param_1[4] = iVar4;
        param_1[0x42] = iVar5 + -2;
        iVar5 = iVar5 + -1;
      } while (1 < iVar5);
    }
    break;
  case 0xd:
  case 0xf:
  case 0x10:
    iVar4 = _WriteRingBuffer(param_1,param_4,local_68,param_6,0);
    if (iVar4 != 1) goto switchD_00085d76_default;
    _WrapRingBuffer(param_1);
    if (param_1[0x16] == 1 << (*(byte *)(param_1 + 0xa7) & 0x1f)) {
      param_1[0x15] = param_1[0x14];
    }
    if (*param_1 == 0x10) {
      *param_1 = 10;
      iVar4 = 1;
      goto switchD_00085d76_default;
    }
    if (*param_1 == 0xf) {
      if (param_1[0x42] != 0) {
        *param_1 = 7;
        iVar4 = 1;
        goto switchD_00085d76_default;
      }
    }
    else {
      if (param_1[1] != 0) {
        *param_1 = 8;
        iVar4 = 1;
        goto switchD_00085d76_default;
      }
      if (param_1[0x42] != 0) {
        *param_1 = 9;
        iVar4 = 1;
        goto switchD_00085d76_default;
      }
    }
    break;
  case 0xe:
    iVar4 = -10;
    if (-1 < param_1[0x42]) {
      _BrotliDecoderStateCleanupAfterMetablock(param_1);
      if ((*(byte *)(param_1 + 0xa6) & 1) == 0) {
        *param_1 = 3;
        iVar4 = 1;
        goto switchD_00085d76_default;
      }
      iVar5 = param_1[4];
      uVar8 = -iVar5 & 7;
      if (uVar8 != 0) {
        bVar7 = (byte)iVar5;
        iVar5 = uVar8 + iVar5;
        param_1[4] = iVar5;
        iVar4 = -0xf;
        if ((*(uint *)(&_kBrotliBitMask + (ulong)uVar8 * 4) &
            (uint)(*(ulong *)(param_1 + 2) >> (bVar7 & 0x3f))) != 0) goto switchD_00085d76_default;
      }
      if (param_1[0x12] == 0) {
        uVar10 = (ulong)(0x40U - iVar5 >> 3);
        uVar8 = 0x40U - iVar5 & 0xfffffff8;
        lVar14 = *(long *)(param_1 + 8) + uVar10;
        *(long *)(param_1 + 8) = lVar14;
        lVar16 = *(long *)(param_1 + 6) - uVar10;
        *(long *)(param_1 + 6) = lVar16;
        if (uVar8 == 0x40) {
          lVar19 = 0;
        }
        else {
          lVar19 = *local_38 << ((byte)uVar8 & 0x3f);
        }
        *(long *)(param_1 + 2) = lVar19;
        param_1[4] = uVar8 + iVar5;
        *param_2 = lVar14;
        *param_3 = lVar16;
      }
      *param_1 = 0x1a;
      goto switchD_00085d76_caseD_1a;
    }
    goto switchD_00085d76_default;
  case 0x11:
    goto switchD_00085d76_caseD_11;
  case 0x12:
    iVar4 = param_1[1];
    if (iVar4 < 3) goto LAB_0008619f;
    *param_1 = 5;
    iVar4 = 1;
    goto switchD_00085d76_default;
  case 0x13:
    iVar4 = param_1[1];
    lVar14 = (long)iVar4;
    goto LAB_00086522;
  case 0x14:
    goto switchD_00085d76_caseD_14;
  case 0x15:
    goto switchD_00085d76_caseD_15;
  case 0x16:
    uVar8 = *local_60;
    goto LAB_000862cc;
  case 0x17:
    goto switchD_00085d76_caseD_17;
  case 0x18:
    iVar5 = param_1[1];
    if (((iVar5 == 0) || (plVar23 = (long *)(param_1 + 0x36), iVar5 == 2)) ||
       (plVar23 = (long *)(param_1 + 0x30), iVar5 == 1)) goto LAB_00086732;
    iVar4 = -0x1f;
    goto LAB_00086be4;
  case 0x19:
    goto switchD_00085d76_caseD_19;
  case 0x1a:
    goto switchD_00085d76_caseD_1a;
  default:
    goto switchD_00085d76_default;
  }
  *param_1 = 0xe;
  iVar4 = 1;
  goto switchD_00085d76_default;
switchD_00085d76_caseD_1a:
  if ((*(long *)(param_1 + 0x1e) == 0) ||
     (iVar4 = _WriteRingBuffer(param_1,param_4,local_68,param_6,1), iVar4 == 1)) {
    iVar4 = 1;
LAB_00086be4:
    uVar6 = _SaveErrorCode(param_1,iVar4);
    return uVar6;
  }
  goto switchD_00085d76_default;
}

