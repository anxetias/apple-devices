// rea decompile_all
// name: _ProcessCommands
// address: 0x88621
// body: available
// range: 0x88621-0x8907a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _ProcessCommands(undefined4 *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  void *pvVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  ulong uVar21;
  byte bVar22;
  uint uVar23;
  byte bVar24;
  int iVar25;
  uint uVar26;
  undefined4 local_34;
  
  uVar26 = param_1[0x13];
  uVar14 = (ulong)uVar26;
  uVar23 = param_1[1];
  uVar13 = (ulong)uVar23;
  local_34 = 2;
  if (0x1b < *(ulong *)(param_1 + 8)) {
    _BrotliWarmupBitReader();
    uVar10 = uVar26;
    switch(*param_1) {
    case 7:
      goto switchD_0008867a_caseD_7;
    case 8:
      goto switchD_0008867a_caseD_8;
    case 9:
      goto switchD_0008867a_caseD_9;
    case 10:
      lVar7 = (long)(int)uVar26;
      goto LAB_00088ece;
    default:
      return 0xffffffe1;
    }
  }
  goto LAB_00088bbf;
switchD_0008867a_caseD_7:
  do {
    uVar23 = (uint)uVar13;
    uVar26 = (uint)uVar14;
    uVar18 = *(ulong *)(param_1 + 8);
    if (uVar18 < 0x1c) {
      *param_1 = 7;
      goto LAB_00088bbf;
    }
    if (param_1[0x45] != 0) {
      uVar23 = param_1[4];
      uVar13 = *(ulong *)(param_1 + 2);
      if (0x2f < uVar23) {
        *(ulong *)(param_1 + 2) = uVar13 >> 0x30;
        uVar23 = uVar23 ^ 0x30;
        uVar13 = uVar13 >> 0x30 | **(long **)(param_1 + 6) << 0x10;
        *(ulong *)(param_1 + 2) = uVar13;
        uVar18 = uVar18 - 6;
        *(ulong *)(param_1 + 8) = uVar18;
        *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 6;
      }
      uVar21 = uVar13 >> ((byte)uVar23 & 0x3f);
      pbVar9 = (byte *)(*(long *)(param_1 + 0x22) + (uVar21 & 0xff) * 4);
      uVar10 = (uint)*pbVar9;
      if (8 < uVar10) {
        uVar23 = uVar23 + 8;
        pbVar9 = pbVar9 + (ulong)(((uint)(uVar21 >> 8) & 0xffffff &
                                  *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar9 - 8) * 4)) +
                                 (uint)*(ushort *)(pbVar9 + 2)) * 4;
        uVar10 = (uint)*pbVar9;
      }
      uVar10 = uVar10 + uVar23;
      param_1[4] = uVar10;
      uVar21 = (ulong)*(ushort *)(pbVar9 + 2);
      bVar1 = (&_kCmdLut)[uVar21 * 8];
      uVar23 = 0;
      bVar24 = (&DAT_00320e61)[uVar21 * 8];
      bVar22 = (&DAT_00320e63)[uVar21 * 8];
      uVar2 = *(ushort *)(&DAT_00320e64 + uVar21 * 8);
      uVar3 = *(ushort *)(&DAT_00320e66 + uVar21 * 8);
      param_1[0x5a] = (int)(char)(&DAT_00320e62)[uVar21 * 8];
      param_1[0x41] = (uint)bVar22;
      *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(*(long *)(param_1 + 0x28) + (ulong)bVar22);
      if (bVar1 != 0) {
        if (0x1f < uVar10) {
          uVar10 = uVar10 ^ 0x20;
          param_1[4] = uVar10;
          uVar13 = uVar13 >> 0x20 | (ulong)**(uint **)(param_1 + 6) << 0x20;
          *(ulong *)(param_1 + 2) = uVar13;
          uVar18 = uVar18 - 4;
          *(ulong *)(param_1 + 8) = uVar18;
          *(uint **)(param_1 + 6) = *(uint **)(param_1 + 6) + 1;
        }
        uVar23 = (uint)(uVar13 >> ((byte)uVar10 & 0x3f)) &
                 *(uint *)(&_kBrotliBitMask + (ulong)(uint)bVar1 * 4);
        uVar10 = uVar10 + bVar1;
      }
      if (0x1f < uVar10) {
        uVar10 = uVar10 ^ 0x20;
        param_1[4] = uVar10;
        uVar13 = uVar13 >> 0x20 | (ulong)**(uint **)(param_1 + 6) << 0x20;
        *(ulong *)(param_1 + 2) = uVar13;
        *(ulong *)(param_1 + 8) = uVar18 - 4;
        *(uint **)(param_1 + 6) = *(uint **)(param_1 + 6) + 1;
      }
      uVar11 = *(uint *)(&_kBrotliBitMask + (ulong)bVar24 * 4);
      param_1[4] = uVar10 + bVar24;
      param_1[0x59] = ((uint)(uVar13 >> ((byte)uVar10 & 0x3f)) & uVar11) + (uint)uVar3;
      param_1[0x45] = param_1[0x45] + -1;
      uVar23 = uVar23 + uVar2;
      uVar13 = (ulong)uVar23;
      uVar10 = uVar26;
      if (uVar23 != 0) {
        param_1[0x42] = param_1[0x42] - uVar23;
switchD_0008867a_caseD_8:
        iVar25 = param_1[0x40];
LAB_0008880f:
        iVar20 = (int)uVar13;
        iVar12 = (int)uVar14;
        if (iVar25 == 0) {
          lVar7 = 0;
          bVar1 = *(byte *)(*(long *)(param_1 + 0x1e) + (long)(int)(iVar12 - 1U & param_1[0x17]));
          bVar24 = *(byte *)(*(long *)(param_1 + 0x1e) + (long)(int)(iVar12 - 2U & param_1[0x17]));
          do {
            bVar22 = bVar1;
            if (*(ulong *)(param_1 + 8) < 0x1c) goto LAB_00088bb0;
            if (param_1[0x44] == 0) {
              _DecodeLiteralBlockSwitch(param_1);
              iVar25 = param_1[0x40];
              if (iVar25 != 0) goto code_r0x00088b92;
            }
            lVar8 = *(long *)(*(long *)(param_1 + 0x2a) +
                             (ulong)*(byte *)(*(long *)(param_1 + 0x26) +
                                             (ulong)(*(byte *)(*(long *)(param_1 + 0x24) + 0x100 +
                                                              (ulong)bVar24) |
                                                    *(byte *)(*(long *)(param_1 + 0x24) +
                                                             (ulong)bVar22))) * 8);
            uVar26 = param_1[4];
            uVar13 = *(ulong *)(param_1 + 2);
            if (0x2f < uVar26) {
              *(ulong *)(param_1 + 2) = uVar13 >> 0x30;
              uVar13 = uVar13 >> 0x30 | **(long **)(param_1 + 6) << 0x10;
              *(ulong *)(param_1 + 2) = uVar13;
              *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -6;
              uVar26 = uVar26 ^ 0x30;
              *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 6;
            }
            uVar13 = uVar13 >> ((byte)uVar26 & 0x3f);
            pbVar9 = (byte *)(lVar8 + (uVar13 & 0xff) * 4);
            uVar23 = (uint)*pbVar9;
            if (8 < uVar23) {
              uVar26 = uVar26 + 8;
              pbVar9 = pbVar9 + (ulong)(((uint)(uVar13 >> 8) & 0xffffff &
                                        *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar9 - 8) * 4)) +
                                       (uint)*(ushort *)(pbVar9 + 2)) * 4;
              uVar23 = (uint)*pbVar9;
            }
            param_1[4] = uVar23 + uVar26;
            bVar1 = pbVar9[2];
            *(byte *)(lVar7 + *(long *)(param_1 + 0x1e) + (long)iVar12) = bVar1;
            param_1[0x44] = param_1[0x44] + -1;
            uVar26 = param_1[0x16];
            if (iVar12 + (int)lVar7 + 1U == uVar26) goto LAB_00088ffc;
            lVar7 = lVar7 + 1;
            bVar24 = bVar22;
            if (iVar20 == (int)lVar7) goto LAB_00088bd9;
          } while( true );
        }
        uVar26 = param_1[4];
        uVar13 = *(ulong *)(param_1 + 2);
        if (0x37 < uVar26) {
          *(ulong *)(param_1 + 2) = uVar13 >> 0x38;
          uVar26 = uVar26 ^ 0x38;
          param_1[4] = uVar26;
          uVar13 = uVar13 >> 0x38 | **(long **)(param_1 + 6) << 8;
          *(ulong *)(param_1 + 2) = uVar13;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -7;
          *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 7;
        }
        uVar13 = uVar13 >> ((byte)uVar26 & 0x3f) & 0xff;
        bVar1 = *(byte *)(*(long *)(param_1 + 0x56) + uVar13 * 4);
        uVar2 = *(ushort *)(*(long *)(param_1 + 0x56) + 2 + uVar13 * 4);
        lVar7 = 0;
        do {
          if (*(ulong *)(param_1 + 8) < 0x1c) goto LAB_00088bb0;
          if (param_1[0x44] == 0) {
            _DecodeLiteralBlockSwitch(param_1);
            uVar26 = param_1[4];
            uVar13 = *(ulong *)(param_1 + 2);
            if (0x37 < uVar26) {
              *(ulong *)(param_1 + 2) = uVar13 >> 0x38;
              uVar26 = uVar26 ^ 0x38;
              param_1[4] = uVar26;
              uVar13 = uVar13 >> 0x38 | **(long **)(param_1 + 6) << 8;
              *(ulong *)(param_1 + 2) = uVar13;
              *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -7;
              *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 7;
            }
            if (param_1[0x40] == 0) goto LAB_00088ba0;
            lVar8 = *(long *)(param_1 + 0x56);
            uVar13 = uVar13 >> ((byte)uVar26 & 0x3f) & 0xff;
            bVar1 = *(byte *)(lVar8 + uVar13 * 4);
            uVar2 = *(ushort *)(lVar8 + 2 + uVar13 * 4);
          }
          else {
            lVar8 = *(long *)(param_1 + 0x56);
          }
          uVar26 = param_1[4];
          if (bVar1 < 9) {
            uVar26 = uVar26 + bVar1;
            param_1[4] = uVar26;
            uVar13 = *(ulong *)(param_1 + 2);
            uVar17 = (undefined1)uVar2;
          }
          else {
            uVar13 = *(ulong *)(param_1 + 2);
            if (0x2f < uVar26) {
              *(ulong *)(param_1 + 2) = uVar13 >> 0x30;
              uVar13 = uVar13 >> 0x30 | **(long **)(param_1 + 6) << 0x10;
              *(ulong *)(param_1 + 2) = uVar13;
              *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -6;
              uVar26 = uVar26 ^ 0x30;
              *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 6;
            }
            uVar14 = uVar13 >> ((byte)uVar26 & 0x3f);
            lVar5 = lVar8 + (uVar14 & 0xff) * 4 + (ulong)uVar2 * 4;
            uVar14 = (ulong)((uint)(uVar14 >> 8) & 0xffffff &
                            *(uint *)(&_kBrotliBitMask + (ulong)(bVar1 - 8) * 4));
            uVar26 = uVar26 + *(byte *)(lVar5 + uVar14 * 4) + 8;
            param_1[4] = uVar26;
            uVar17 = (undefined1)*(undefined2 *)(lVar5 + 2 + uVar14 * 4);
          }
          if (0x37 < uVar26) {
            *(ulong *)(param_1 + 2) = uVar13 >> 0x38;
            uVar26 = uVar26 ^ 0x38;
            param_1[4] = uVar26;
            uVar13 = uVar13 >> 0x38 | **(long **)(param_1 + 6) << 8;
            *(ulong *)(param_1 + 2) = uVar13;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -7;
            *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 7;
          }
          uVar13 = uVar13 >> ((byte)uVar26 & 0x3f) & 0xff;
          bVar1 = *(byte *)(lVar8 + uVar13 * 4);
          uVar2 = *(ushort *)(lVar8 + 2 + uVar13 * 4);
          *(undefined1 *)(lVar7 + *(long *)(param_1 + 0x1e) + (long)iVar12) = uVar17;
          param_1[0x44] = param_1[0x44] + -1;
          uVar26 = param_1[0x16];
          if (iVar12 + (int)lVar7 + 1U == uVar26) goto LAB_00088ffc;
          lVar7 = lVar7 + 1;
          if (iVar20 == (int)lVar7) goto LAB_00088bd9;
        } while( true );
      }
      goto switchD_0008867a_caseD_9;
    }
    _DecodeCommandBlockSwitch(param_1);
  } while( true );
code_r0x00088b92:
  uVar14 = iVar12 + lVar7;
  uVar13 = (ulong)(uint)(iVar20 - (int)lVar7);
  goto LAB_0008880f;
LAB_00088bb0:
  uVar26 = iVar12 + (int)lVar7;
  *param_1 = 8;
  uVar23 = iVar20 - (int)lVar7;
  goto LAB_00088bbf;
LAB_00088ba0:
  uVar14 = iVar12 + lVar7;
  uVar13 = (ulong)(uint)(iVar20 - (int)lVar7);
  iVar25 = 0;
  goto LAB_0008880f;
LAB_00088ffc:
  *param_1 = 0xd;
  uVar23 = ~(uint)lVar7 + iVar20;
  local_34 = 1;
  goto LAB_00088bbf;
LAB_00088bd9:
  uVar26 = iVar12 + (int)lVar7;
  uVar10 = uVar26;
  if ((int)param_1[0x42] < 1) {
    *param_1 = 0xe;
    local_34 = 1;
    uVar23 = 0;
    goto LAB_00088bbf;
  }
switchD_0008867a_caseD_9:
  iVar25 = param_1[0x5a];
  if (iVar25 < 0) {
    if (param_1[0x46] == 0) {
      _DecodeDistanceBlockSwitch(param_1);
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x36) + (ulong)*(byte *)(param_1 + 0x58) * 8);
    uVar26 = param_1[4];
    uVar13 = *(ulong *)(param_1 + 2);
    if (0x2f < uVar26) {
      *(ulong *)(param_1 + 2) = uVar13 >> 0x30;
      uVar13 = uVar13 >> 0x30 | **(long **)(param_1 + 6) << 0x10;
      *(ulong *)(param_1 + 2) = uVar13;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -6;
      uVar26 = uVar26 ^ 0x30;
      *(long *)(param_1 + 6) = (long)*(long **)(param_1 + 6) + 6;
    }
    uVar14 = uVar13 >> ((byte)uVar26 & 0x3f);
    pbVar9 = (byte *)(lVar7 + (uVar14 & 0xff) * 4);
    uVar23 = (uint)*pbVar9;
    if (8 < uVar23) {
      uVar26 = uVar26 + 8;
      pbVar9 = pbVar9 + (ulong)(((uint)(uVar14 >> 8) & 0xffffff &
                                *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar9 - 8) * 4)) +
                               (uint)*(ushort *)(pbVar9 + 2)) * 4;
      uVar23 = (uint)*pbVar9;
    }
    uVar23 = uVar23 + uVar26;
    param_1[4] = uVar23;
    uVar2 = *(ushort *)(pbVar9 + 2);
    param_1[0x46] = param_1[0x46] + -1;
    param_1[0x41] = 0;
    if (uVar2 < 0x10) {
      param_1[0x5a] = (uint)uVar2;
      if (uVar2 < 4) {
        uVar26 = 1 >> ((byte)uVar2 & 0x1f);
        param_1[0x41] = uVar26;
        iVar25 = param_1[(ulong)(~(uint)uVar2 + param_1[0x18] & 3) + 0x19];
        param_1[0x5a] = iVar25;
        param_1[0x18] = param_1[0x18] - uVar26;
        goto LAB_00088dc3;
      }
      iVar25 = uVar2 - 4;
      if (uVar2 >= 10) {
        iVar25 = uVar2 - 10;
      }
      iVar12 = (0x605142U >> ((byte)(iVar25 << 2) & 0x1f) & 7) +
               param_1[(ulong)(param_1[0x18] + (uint)(uVar2 < 10) + 2 & 3) + 0x19] + -3;
      iVar25 = 0x7fffffff;
      if (0 < iVar12) {
        iVar25 = iVar12;
      }
    }
    else {
      bVar1 = *(byte *)((long)param_1 + (ulong)uVar2 + 0x2e8);
      if (0x1f < uVar23) {
        uVar23 = uVar23 ^ 0x20;
        param_1[4] = uVar23;
        uVar13 = uVar13 >> 0x20 | (ulong)**(uint **)(param_1 + 6) << 0x20;
        *(ulong *)(param_1 + 2) = uVar13;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -4;
        *(uint **)(param_1 + 6) = *(uint **)(param_1 + 6) + 1;
      }
      uVar26 = *(uint *)(&_kBrotliBitMask + (ulong)bVar1 * 4);
      param_1[4] = uVar23 + bVar1;
      iVar25 = (((uint)(uVar13 >> ((byte)uVar23 & 0x3f)) & uVar26) <<
               (*(byte *)(param_1 + 0x50) & 0x1f)) + param_1[(ulong)uVar2 + 0x142];
    }
    param_1[0x5a] = iVar25;
    uVar26 = 0;
  }
  else {
    uVar26 = (uint)(iVar25 == 0);
    param_1[0x41] = (uint)(iVar25 == 0);
    iVar25 = param_1[0x18];
    param_1[0x18] = iVar25 - 1U;
    iVar25 = param_1[(ulong)(iVar25 - 1U & 3) + 0x19];
    param_1[0x5a] = iVar25;
  }
LAB_00088dc3:
  uVar23 = param_1[0x14];
  uVar11 = param_1[0x15];
  if (uVar11 != uVar23) {
    uVar11 = uVar23;
    if ((int)uVar10 < (int)uVar23) {
      uVar11 = uVar10;
    }
    param_1[0x15] = uVar11;
  }
  uVar23 = param_1[0x59];
  uVar13 = (ulong)uVar23;
  if ((int)uVar11 < iVar25) {
    if (0x7ffffffc < iVar25) {
      return 0xfffffff0;
    }
    if (0x14 < uVar23 - 4) {
      return 0xfffffff4;
    }
    lVar7 = *(long *)(param_1 + 0xae);
    lVar8 = *(long *)(param_1 + 0xb0);
    uVar4 = *(uint *)(&_kBrotliBitMask + (ulong)*(byte *)(lVar7 + uVar13) * 4);
    iVar20 = (int)(iVar25 + ~uVar11) >> (*(byte *)(lVar7 + uVar13) & 0x1f);
    iVar12 = *(int *)(lVar7 + 0x20 + uVar13 * 4);
    param_1[0x18] = param_1[0x18] + uVar26;
    if (*(long *)(lVar7 + 0xa8) == 0) {
      return 0xffffffed;
    }
    if (*(int *)(lVar8 + 0x18) <= iVar20) {
      return 0xfffffff5;
    }
    pvVar15 = (void *)(*(long *)(lVar7 + 0xa8) +
                      (long)(int)((uVar4 & iVar25 + ~uVar11) * uVar23) + (long)iVar12);
    if (iVar20 == *(short *)(lVar8 + 0x30)) {
      _memcpy((void *)((long)(int)uVar10 + *(long *)(param_1 + 0x1e)),pvVar15,uVar13);
      uVar26 = uVar23;
    }
    else {
      uVar26 = _BrotliTransformDictionaryWord
                         ((void *)((long)(int)uVar10 + *(long *)(param_1 + 0x1e)),pvVar15,uVar23,
                          lVar8);
    }
    param_1[0x42] = param_1[0x42] - uVar26;
    uVar26 = uVar10 + uVar26;
    if ((int)param_1[0x16] <= (int)uVar26) {
      *param_1 = 0xf;
      goto LAB_00088ff0;
    }
  }
  else {
    uVar11 = uVar10 - iVar25 & param_1[0x17];
    lVar5 = *(long *)(param_1 + 0x1e);
    uVar26 = param_1[0x18];
    param_1[(ulong)(uVar26 & 3) + 0x19] = iVar25;
    lVar7 = (long)(int)uVar10;
    param_1[0x18] = uVar26 + 1;
    lVar8 = lVar5 + (int)uVar11;
    param_1[0x42] = param_1[0x42] - uVar23;
    puVar16 = (undefined8 *)(lVar5 + (int)uVar11);
    uVar6 = puVar16[1];
    uVar26 = uVar23 + uVar10;
    *(undefined8 *)(lVar5 + lVar7) = *puVar16;
    ((undefined8 *)(lVar5 + lVar7))[1] = uVar6;
    if (((((int)uVar10 < (int)(uVar11 + uVar23)) && ((int)uVar11 < (int)uVar26)) ||
        ((int)param_1[0x16] <= (int)uVar26)) || ((int)param_1[0x16] <= (int)(uVar11 + uVar23))) {
LAB_00088ece:
      iVar25 = uVar10 - param_1[0x16];
      iVar12 = -(int)lVar7;
      while (iVar20 = (int)uVar13, 0 < iVar20) {
        *(undefined1 *)(*(long *)(param_1 + 0x1e) + lVar7) =
             *(undefined1 *)
              (*(long *)(param_1 + 0x1e) + (long)((int)lVar7 - param_1[0x5a] & param_1[0x17]));
        lVar7 = lVar7 + 1;
        iVar12 = iVar12 + -1;
        uVar13 = (ulong)(iVar20 - 1);
        iVar25 = iVar25 + 1;
        if (iVar25 == 0) {
          uVar26 = -iVar12;
          *param_1 = 0x10;
          uVar23 = iVar20 - 1;
          goto LAB_00088ff0;
        }
      }
      uVar26 = -iVar12;
      uVar14 = (ulong)uVar26;
      uVar23 = iVar20 - 1;
      uVar13 = (ulong)uVar23;
      if ((int)param_1[0x42] < 1) goto code_r0x00088f34;
      goto switchD_0008867a_caseD_7;
    }
    if (0x10 < (int)uVar23) {
      puVar19 = (undefined8 *)(lVar5 + lVar7 + 0x10);
      puVar16 = (undefined8 *)(lVar8 + 0x10);
      if (uVar23 < 0x21) {
        uVar6 = *(undefined8 *)(lVar8 + 0x18);
        *puVar19 = *puVar16;
        *(undefined8 *)(lVar5 + lVar7 + 0x18) = uVar6;
      }
      else {
        _memcpy(puVar19,puVar16,(ulong)(uVar23 - 0x10));
      }
    }
  }
  if ((int)param_1[0x42] < 1) {
    *param_1 = 0xe;
    local_34 = 1;
    goto LAB_00088bbf;
  }
  uVar14 = (ulong)uVar26;
  goto switchD_0008867a_caseD_7;
code_r0x00088f34:
  *param_1 = 0xe;
LAB_00088ff0:
  local_34 = 1;
LAB_00088bbf:
  param_1[0x13] = uVar26;
  param_1[1] = uVar23;
  return local_34;
}

