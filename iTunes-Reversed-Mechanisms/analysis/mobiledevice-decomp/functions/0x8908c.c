// rea decompile_all
// name: _SafeProcessCommands
// address: 0x8908c
// body: available
// range: 0x8908c-0x89b9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _SafeProcessCommands(int *param_1)

{
  ulong *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  void *pvVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  byte bVar24;
  uint uVar25;
  ulong local_58;
  byte *local_50;
  long local_48;
  uint local_34;
  
  if (3 < *param_1 - 7U) {
    return 0xffffffe1;
  }
  uVar12 = param_1[0x13];
  uVar25 = param_1[1];
  uVar7 = (ulong)uVar25;
  puVar1 = (ulong *)(param_1 + 2);
  switch(*param_1) {
  case 8:
    goto LAB_0008936f;
  case 9:
    goto switchD_000890c8_caseD_9;
  case 10:
    lVar6 = (long)(int)uVar12;
    goto LAB_00089a18;
  }
switchD_000890c8_caseD_7:
  do {
    uVar25 = (uint)uVar7;
    *param_1 = 7;
    uVar23 = uVar12;
    if (param_1[0x45] != 0) {
      local_58 = *(ulong *)(param_1 + 2);
      iVar22 = param_1[4];
      local_50 = *(byte **)(param_1 + 6);
      local_48 = *(long *)(param_1 + 8);
      uVar18 = iVar22 - 0x32;
      uVar7 = local_58;
      iVar10 = iVar22;
      pbVar11 = local_50;
      lVar6 = local_48;
      while (uVar18 < 0xf) {
        lVar6 = lVar6 + -1;
        if (lVar6 == -1) {
          iVar10 = _SafeDecodeSymbol(*(long *)(param_1 + 0x22),puVar1,&local_34);
          if (iVar10 != 0) goto LAB_000891fe;
          goto LAB_00089b11;
        }
        *(ulong *)(param_1 + 2) = uVar7 >> 8;
        uVar7 = uVar7 >> 8 | (ulong)*pbVar11 << 0x38;
        *(ulong *)(param_1 + 2) = uVar7;
        param_1[4] = iVar10 + -8;
        *(long *)(param_1 + 8) = lVar6;
        *(byte **)(param_1 + 6) = pbVar11 + 1;
        uVar18 = iVar10 - 0x3a;
        iVar10 = iVar10 + -8;
        pbVar11 = pbVar11 + 1;
      }
      uVar7 = uVar7 >> ((byte)iVar10 & 0x3f);
      pbVar11 = (byte *)(*(long *)(param_1 + 0x22) + (uVar7 & 0xff) * 4);
      uVar25 = (uint)*pbVar11;
      if (8 < uVar25) {
        iVar10 = iVar10 + 8;
        pbVar11 = pbVar11 + (ulong)(((uint)(uVar7 >> 8) & 0xffffff &
                                     *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar11 - 8) * 4) & 0x7f)
                                   + (uint)*(ushort *)(pbVar11 + 2)) * 4;
        uVar25 = (uint)*pbVar11;
      }
      param_1[4] = uVar25 + iVar10;
      local_34 = (uint)*(ushort *)(pbVar11 + 2);
LAB_000891fe:
      uVar7 = (ulong)local_34;
      bVar2 = (&_kCmdLut)[uVar7 * 8];
      uVar18 = 0;
      bVar21 = (&DAT_00320e61)[uVar7 * 8];
      bVar24 = (&DAT_00320e63)[uVar7 * 8];
      uVar3 = *(ushort *)(&DAT_00320e64 + uVar7 * 8);
      uVar25 = (uint)uVar3;
      uVar4 = *(ushort *)(&DAT_00320e66 + uVar7 * 8);
      param_1[0x5a] = (int)(char)(&DAT_00320e62)[uVar7 * 8];
      param_1[0x41] = (uint)bVar24;
      *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(*(long *)(param_1 + 0x28) + (ulong)bVar24);
      uVar23 = 0;
      if (bVar2 != 0) {
        iVar10 = param_1[4];
        uVar23 = 0x40 - iVar10;
        uVar20 = (uint)bVar2;
        if (uVar23 < uVar20) {
          lVar6 = *(long *)(param_1 + 8);
          do {
            lVar6 = lVar6 + -1;
            if (lVar6 == -1) goto LAB_00089af5;
            uVar7 = *(ulong *)(param_1 + 2);
            *(ulong *)(param_1 + 2) = uVar7 >> 8;
            uVar7 = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar7 >> 8;
            *(ulong *)(param_1 + 2) = uVar7;
            iVar10 = iVar10 + -8;
            param_1[4] = iVar10;
            *(long *)(param_1 + 8) = lVar6;
            *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
            uVar23 = uVar23 + 8;
          } while (uVar23 < uVar20);
        }
        else {
          uVar7 = *puVar1;
        }
        uVar23 = (uint)(uVar7 >> ((byte)iVar10 & 0x3f)) &
                 *(uint *)(&_kBrotliBitMask + (ulong)uVar20 * 4);
        param_1[4] = iVar10 + uVar20;
      }
      if (bVar21 != 0) {
        iVar10 = param_1[4];
        uVar18 = 0x40 - iVar10;
        uVar20 = (uint)bVar21;
        if (uVar18 < uVar20) {
          lVar6 = *(long *)(param_1 + 8);
          do {
            lVar6 = lVar6 + -1;
            if (lVar6 == -1) goto LAB_00089af5;
            uVar7 = *(ulong *)(param_1 + 2);
            *(ulong *)(param_1 + 2) = uVar7 >> 8;
            uVar7 = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar7 >> 8;
            *(ulong *)(param_1 + 2) = uVar7;
            iVar10 = iVar10 + -8;
            param_1[4] = iVar10;
            *(long *)(param_1 + 8) = lVar6;
            *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
            uVar18 = uVar18 + 8;
          } while (uVar18 < uVar20);
        }
        else {
          uVar7 = *puVar1;
        }
        uVar18 = (uint)(uVar7 >> ((byte)iVar10 & 0x3f)) &
                 *(uint *)(&_kBrotliBitMask + (ulong)uVar20 * 4);
        param_1[4] = iVar10 + uVar20;
      }
      param_1[0x59] = uVar18 + uVar4;
      param_1[0x45] = param_1[0x45] + -1;
      uVar25 = uVar23 + uVar3;
      if (uVar25 != 0) {
        param_1[0x42] = param_1[0x42] - uVar25;
LAB_0008936f:
        uVar7 = (ulong)uVar12;
LAB_00089375:
        *param_1 = 8;
        iVar22 = (int)uVar7;
        if (param_1[0x40] == 0) {
          uVar7 = (ulong)iVar22;
          iVar10 = param_1[0x44];
          bVar2 = *(byte *)(*(long *)(param_1 + 0x1e) + (long)(int)(iVar22 - 1U & param_1[0x17]));
          bVar21 = *(byte *)(*(long *)(param_1 + 0x1e) + (long)(int)(iVar22 - 2U & param_1[0x17]));
          do {
            bVar24 = bVar2;
            if (iVar10 == 0) {
              iVar22 = _SafeDecodeLiteralBlockSwitch(param_1);
              if (iVar22 == 0) goto LAB_0008977e;
              if (param_1[0x40] != 0) goto LAB_00089375;
            }
            lVar6 = *(long *)(*(long *)(param_1 + 0x2a) +
                             (ulong)*(byte *)(*(long *)(param_1 + 0x26) +
                                             (ulong)(*(byte *)(*(long *)(param_1 + 0x24) + 0x100 +
                                                              (ulong)bVar21) |
                                                    *(byte *)(*(long *)(param_1 + 0x24) +
                                                             (ulong)bVar24))) * 8);
            iVar22 = param_1[4];
            if (iVar22 - 0x32U < 0xf) {
              lVar14 = *(long *)(param_1 + 8);
              iVar10 = iVar22;
              do {
                lVar14 = lVar14 + -1;
                if (lVar14 == -1) {
                  iVar22 = _SafeDecodeSymbol(lVar6,puVar1,&local_34);
                  if (iVar22 == 0) goto LAB_0008977e;
                  bVar2 = (byte)local_34;
                  goto LAB_000895ed;
                }
                uVar8 = *(ulong *)(param_1 + 2);
                *(ulong *)(param_1 + 2) = uVar8 >> 8;
                uVar8 = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar8 >> 8;
                *(ulong *)(param_1 + 2) = uVar8;
                iVar22 = iVar10 + -8;
                param_1[4] = iVar22;
                *(long *)(param_1 + 8) = lVar14;
                *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
                uVar12 = iVar10 - 0x3a;
                iVar10 = iVar22;
              } while (uVar12 < 0xf);
            }
            else {
              uVar8 = *puVar1;
            }
            uVar8 = uVar8 >> ((byte)iVar22 & 0x3f);
            pbVar11 = (byte *)(lVar6 + (uVar8 & 0xff) * 4);
            uVar12 = (uint)*pbVar11;
            if (8 < uVar12) {
              iVar22 = iVar22 + 8;
              pbVar11 = pbVar11 + (ulong)(((uint)(uVar8 >> 8) & 0xffffff &
                                           *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar11 - 8) * 4) &
                                          0x7f) + (uint)*(ushort *)(pbVar11 + 2)) * 4;
              uVar12 = (uint)*pbVar11;
            }
            param_1[4] = uVar12 + iVar22;
            bVar2 = pbVar11[2];
LAB_000895ed:
            *(byte *)(*(long *)(param_1 + 0x1e) + uVar7) = bVar2;
            uVar23 = param_1[0x16];
            iVar10 = param_1[0x44] + -1;
            param_1[0x44] = iVar10;
            uVar7 = uVar7 + 1;
            if (uVar23 == (uint)uVar7) goto LAB_00089b5a;
            uVar25 = uVar25 - 1;
            bVar21 = bVar24;
            if (uVar25 == 0) goto LAB_0008964a;
          } while( true );
        }
        uVar7 = (ulong)iVar22;
        iVar22 = param_1[0x44];
        do {
          if (iVar22 == 0) {
            iVar22 = _SafeDecodeLiteralBlockSwitch(param_1);
            if (iVar22 == 0) goto LAB_0008977e;
            if (param_1[0x40] == 0) goto LAB_00089375;
          }
          iVar22 = param_1[4];
          if (iVar22 - 0x32U < 0xf) {
            lVar6 = *(long *)(param_1 + 8);
            iVar10 = iVar22;
            do {
              lVar6 = lVar6 + -1;
              if (lVar6 == -1) {
                iVar22 = _SafeDecodeSymbol(*(long *)(param_1 + 0x56),puVar1,&local_34);
                uVar12 = local_34;
                if (iVar22 != 0) goto LAB_00089468;
                goto LAB_0008977e;
              }
              uVar8 = *(ulong *)(param_1 + 2);
              *(ulong *)(param_1 + 2) = uVar8 >> 8;
              uVar8 = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar8 >> 8;
              *(ulong *)(param_1 + 2) = uVar8;
              iVar22 = iVar10 + -8;
              param_1[4] = iVar22;
              *(long *)(param_1 + 8) = lVar6;
              *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
              uVar12 = iVar10 - 0x3a;
              iVar10 = iVar22;
            } while (uVar12 < 0xf);
          }
          else {
            uVar8 = *puVar1;
          }
          uVar8 = uVar8 >> ((byte)iVar22 & 0x3f);
          pbVar11 = (byte *)(*(long *)(param_1 + 0x56) + (uVar8 & 0xff) * 4);
          uVar12 = (uint)*pbVar11;
          if (8 < uVar12) {
            iVar22 = iVar22 + 8;
            pbVar11 = pbVar11 + (ulong)(((uint)(uVar8 >> 8) & 0xffffff &
                                         *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar11 - 8) * 4) &
                                        0x7f) + (uint)*(ushort *)(pbVar11 + 2)) * 4;
            uVar12 = (uint)*pbVar11;
          }
          param_1[4] = uVar12 + iVar22;
          uVar12 = (uint)*(ushort *)(pbVar11 + 2);
LAB_00089468:
          *(char *)(*(long *)(param_1 + 0x1e) + uVar7) = (char)uVar12;
          uVar23 = param_1[0x16];
          iVar22 = param_1[0x44] + -1;
          param_1[0x44] = iVar22;
          uVar7 = uVar7 + 1;
          if (uVar23 == (uint)uVar7) goto LAB_00089b5a;
          uVar25 = uVar25 - 1;
          if (uVar25 == 0) goto LAB_0008964a;
        } while( true );
      }
      uVar25 = 0;
      goto switchD_000890c8_caseD_9;
    }
    iVar22 = _SafeDecodeCommandBlockSwitch(param_1);
  } while (iVar22 != 0);
  goto LAB_00089b11;
LAB_0008977e:
  uVar23 = (uint)uVar7;
  uVar9 = 2;
  goto LAB_00089b16;
LAB_00089b5a:
  *param_1 = 0xd;
LAB_00089b60:
  uVar25 = uVar25 - 1;
  goto LAB_00089b63;
LAB_0008964a:
  uVar23 = (uint)uVar7;
  uVar25 = 0;
  uVar12 = uVar23;
  if (param_1[0x42] < 1) {
    *param_1 = 0xe;
    uVar9 = 1;
    uVar25 = 0;
    goto LAB_00089b16;
  }
switchD_000890c8_caseD_9:
  *param_1 = 9;
  iVar22 = param_1[0x5a];
  if (iVar22 < 0) {
    uVar23 = uVar12;
    if ((param_1[0x46] == 0) && (iVar22 = _SafeDecodeDistanceBlockSwitch(param_1), iVar22 == 0)) {
LAB_00089b11:
      uVar9 = 2;
      goto LAB_00089b16;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x36) + (ulong)*(byte *)(param_1 + 0x58) * 8);
    local_58 = *(ulong *)(param_1 + 2);
    iVar22 = param_1[4];
    local_50 = *(byte **)(param_1 + 6);
    local_48 = *(long *)(param_1 + 8);
    uVar18 = iVar22 - 0x32;
    uVar7 = local_58;
    iVar10 = iVar22;
    pbVar11 = local_50;
    lVar14 = local_48;
    while (uVar18 < 0xf) {
      lVar14 = lVar14 + -1;
      if (lVar14 == -1) {
        iVar10 = _SafeDecodeSymbol(lVar6,puVar1,&local_34);
        uVar18 = local_34;
        if (iVar10 != 0) goto LAB_000897ac;
        goto LAB_00089b11;
      }
      *(ulong *)(param_1 + 2) = uVar7 >> 8;
      uVar7 = uVar7 >> 8 | (ulong)*pbVar11 << 0x38;
      *(ulong *)(param_1 + 2) = uVar7;
      param_1[4] = iVar10 + -8;
      *(long *)(param_1 + 8) = lVar14;
      *(byte **)(param_1 + 6) = pbVar11 + 1;
      uVar18 = iVar10 - 0x3a;
      iVar10 = iVar10 + -8;
      pbVar11 = pbVar11 + 1;
    }
    uVar7 = uVar7 >> ((byte)iVar10 & 0x3f);
    pbVar11 = (byte *)(lVar6 + (uVar7 & 0xff) * 4);
    uVar23 = (uint)*pbVar11;
    if (8 < uVar23) {
      iVar10 = iVar10 + 8;
      pbVar11 = pbVar11 + (ulong)(((uint)(uVar7 >> 8) & 0xffffff &
                                   *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar11 - 8) * 4) & 0x7f) +
                                 (uint)*(ushort *)(pbVar11 + 2)) * 4;
      uVar23 = (uint)*pbVar11;
    }
    param_1[4] = uVar23 + iVar10;
    uVar18 = (uint)*(ushort *)(pbVar11 + 2);
LAB_000897ac:
    iVar10 = param_1[0x46];
    param_1[0x46] = iVar10 + -1;
    param_1[0x41] = 0;
    if (uVar18 < 0x10) {
      param_1[0x5a] = uVar18;
      if (uVar18 < 4) {
        uVar23 = 1 >> ((byte)uVar18 & 0x1f);
        param_1[0x41] = uVar23;
        iVar22 = param_1[(ulong)(~uVar18 + param_1[0x18] & 3) + 0x19];
        param_1[0x5a] = iVar22;
        param_1[0x18] = param_1[0x18] - uVar23;
      }
      else {
        iVar22 = uVar18 - 4;
        iVar10 = 3;
        if (9 < uVar18) {
          iVar22 = uVar18 - 10;
          iVar10 = 10;
        }
        iVar10 = param_1[(ulong)(iVar10 + param_1[0x18] & 3) + 0x19] +
                 (0x605142U >> ((byte)(iVar22 << 2) & 0x1f) & 7) + -3;
        iVar22 = 0x7fffffff;
        if (0 < iVar10) {
          iVar22 = iVar10;
        }
        param_1[0x5a] = iVar22;
        uVar23 = 0;
      }
      goto LAB_0008990d;
    }
    bVar2 = *(byte *)((long)param_1 + (ulong)uVar18 + 0x2e8);
    uVar23 = 0;
    uVar20 = 0;
    if (bVar2 != 0) {
      iVar19 = param_1[4];
      uVar20 = 0x40 - iVar19;
      uVar13 = (uint)bVar2;
      if (uVar20 < uVar13) {
        lVar6 = *(long *)(param_1 + 8);
LAB_00089842:
        lVar6 = lVar6 + -1;
        if (lVar6 != -1) goto code_r0x0008984c;
        param_1[0x46] = iVar10;
LAB_00089af5:
        *(ulong *)(param_1 + 2) = local_58;
        param_1[4] = iVar22;
        *(byte **)(param_1 + 6) = local_50;
        *(long *)(param_1 + 8) = local_48;
        uVar23 = uVar12;
        goto LAB_00089b11;
      }
      uVar7 = *puVar1;
LAB_000898dc:
      uVar20 = (uint)(uVar7 >> ((byte)iVar19 & 0x3f)) &
               *(uint *)(&_kBrotliBitMask + (ulong)uVar13 * 4);
      param_1[4] = iVar19 + uVar13;
    }
    iVar22 = (uVar20 << (*(byte *)(param_1 + 0x50) & 0x1f)) + param_1[(ulong)uVar18 + 0x142];
  }
  else {
    uVar23 = (uint)(iVar22 == 0);
    param_1[0x41] = (uint)(iVar22 == 0);
    iVar22 = param_1[0x18];
    param_1[0x18] = iVar22 - 1U;
    iVar22 = param_1[(ulong)(iVar22 - 1U & 3) + 0x19];
  }
  param_1[0x5a] = iVar22;
LAB_0008990d:
  uVar25 = param_1[0x14];
  uVar18 = param_1[0x15];
  if (uVar18 != uVar25) {
    uVar18 = uVar25;
    if ((int)uVar12 < (int)uVar25) {
      uVar18 = uVar12;
    }
    param_1[0x15] = uVar18;
  }
  uVar25 = param_1[0x59];
  uVar7 = (ulong)uVar25;
  if ((int)uVar18 < iVar22) {
    if (0x7ffffffc < iVar22) {
      return 0xfffffff0;
    }
    if (0x14 < uVar25 - 4) {
      return 0xfffffff4;
    }
    lVar6 = *(long *)(param_1 + 0xae);
    lVar14 = *(long *)(param_1 + 0xb0);
    uVar20 = *(uint *)(&_kBrotliBitMask + (ulong)*(byte *)(lVar6 + uVar7) * 4);
    iVar19 = (int)(iVar22 + ~uVar18) >> (*(byte *)(lVar6 + uVar7) & 0x1f);
    iVar10 = *(int *)(lVar6 + 0x20 + uVar7 * 4);
    param_1[0x18] = param_1[0x18] + uVar23;
    if (*(long *)(lVar6 + 0xa8) == 0) {
      return 0xffffffed;
    }
    if (*(int *)(lVar14 + 0x18) <= iVar19) {
      return 0xfffffff5;
    }
    pvVar15 = (void *)(*(long *)(lVar6 + 0xa8) +
                      (long)(int)((uVar20 & iVar22 + ~uVar18) * uVar25) + (long)iVar10);
    if (iVar19 == *(short *)(lVar14 + 0x30)) {
      _memcpy((void *)((long)(int)uVar12 + *(long *)(param_1 + 0x1e)),pvVar15,uVar7);
      uVar23 = uVar25;
    }
    else {
      uVar23 = _BrotliTransformDictionaryWord
                         ((void *)((long)(int)uVar12 + *(long *)(param_1 + 0x1e)),pvVar15,uVar7,
                          lVar14);
    }
    param_1[0x42] = param_1[0x42] - uVar23;
    uVar23 = uVar12 + uVar23;
    if (param_1[0x16] <= (int)uVar23) {
      *param_1 = 0xf;
      goto LAB_00089b63;
    }
  }
  else {
    uVar18 = uVar12 - iVar22 & param_1[0x17];
    lVar5 = *(long *)(param_1 + 0x1e);
    uVar23 = param_1[0x18];
    param_1[(ulong)(uVar23 & 3) + 0x19] = iVar22;
    lVar6 = (long)(int)uVar12;
    param_1[0x18] = uVar23 + 1;
    lVar14 = lVar5 + (int)uVar18;
    param_1[0x42] = param_1[0x42] - uVar25;
    puVar16 = (undefined8 *)(lVar5 + (int)uVar18);
    uVar9 = puVar16[1];
    uVar23 = uVar25 + uVar12;
    *(undefined8 *)(lVar5 + lVar6) = *puVar16;
    ((undefined8 *)(lVar5 + lVar6))[1] = uVar9;
    if (((((int)uVar12 < (int)(uVar18 + uVar25)) && ((int)uVar18 < (int)uVar23)) ||
        (param_1[0x16] <= (int)uVar23)) || (param_1[0x16] <= (int)(uVar18 + uVar25))) {
LAB_00089a18:
      iVar22 = uVar12 - param_1[0x16];
      iVar10 = -(int)lVar6;
      while (uVar25 = (uint)uVar7, 0 < (int)uVar25) {
        *(undefined1 *)(*(long *)(param_1 + 0x1e) + lVar6) =
             *(undefined1 *)
              (*(long *)(param_1 + 0x1e) + (long)((int)lVar6 - param_1[0x5a] & param_1[0x17]));
        lVar6 = lVar6 + 1;
        iVar10 = iVar10 + -1;
        uVar7 = (ulong)(uVar25 - 1);
        iVar22 = iVar22 + 1;
        if (iVar22 == 0) {
          uVar23 = -iVar10;
          *param_1 = 0x10;
          goto LAB_00089b60;
        }
      }
      uVar23 = -iVar10;
      uVar25 = uVar25 - 1;
      uVar7 = (ulong)uVar25;
      uVar12 = uVar23;
      if (param_1[0x42] < 1) {
        *param_1 = 0xe;
LAB_00089b63:
        uVar9 = 1;
LAB_00089b16:
        param_1[0x13] = uVar23;
        param_1[1] = uVar25;
        return uVar9;
      }
      goto switchD_000890c8_caseD_7;
    }
    if (0x10 < (int)uVar25) {
      puVar17 = (undefined8 *)(lVar5 + lVar6 + 0x10);
      puVar16 = (undefined8 *)(lVar14 + 0x10);
      if (uVar25 < 0x21) {
        uVar9 = *(undefined8 *)(lVar14 + 0x18);
        *puVar17 = *puVar16;
        *(undefined8 *)(lVar5 + lVar6 + 0x18) = uVar9;
      }
      else {
        _memcpy(puVar17,puVar16,(ulong)(uVar25 - 0x10));
      }
    }
  }
  uVar12 = uVar23;
  if (param_1[0x42] < 1) {
    *param_1 = 0xe;
    uVar9 = 1;
    goto LAB_00089b16;
  }
  goto switchD_000890c8_caseD_7;
code_r0x0008984c:
  uVar7 = *(ulong *)(param_1 + 2);
  *(ulong *)(param_1 + 2) = uVar7 >> 8;
  uVar7 = (ulong)**(byte **)(param_1 + 6) << 0x38 | uVar7 >> 8;
  *(ulong *)(param_1 + 2) = uVar7;
  iVar19 = iVar19 + -8;
  param_1[4] = iVar19;
  *(long *)(param_1 + 8) = lVar6;
  *(byte **)(param_1 + 6) = *(byte **)(param_1 + 6) + 1;
  uVar20 = uVar20 + 8;
  if (uVar13 <= uVar20) goto LAB_000898dc;
  goto LAB_00089842;
}

