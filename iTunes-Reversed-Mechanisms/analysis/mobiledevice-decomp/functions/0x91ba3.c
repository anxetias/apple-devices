// rea decompile_all
// name: _BrotliStoreMetaBlock
// address: 0x91ba3
// body: available
// range: 0x91ba3-0x9264a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x92646 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliStoreMetaBlock
               (long param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
               uint param_6,byte param_7,int param_8,long param_9,uint param_10,long param_11,
               long param_12,ulong *param_13,ulong *param_14,long param_15)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  undefined *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  ushort uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ushort uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  uint local_b74;
  ulong local_b60;
  ulong local_b58;
  ulong local_b50;
  uint *local_b48;
  ulong local_b40;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 local_7d0;
  ulong local_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  long local_7a8;
  ulong local_7a0;
  ulong local_798;
  uint *local_790;
  ulong local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 local_418;
  ulong local_410;
  undefined8 local_408;
  long lStack_400;
  long local_3f8;
  long local_3f0;
  ulong local_3e8;
  ulong local_3e0;
  uint *local_3d8;
  ulong local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = *(undefined4 *)(param_9 + 0x48);
  uVar11 = *(uint *)(param_9 + 0x4c);
  _StoreCompressedMetaBlockHeader(param_8,param_4,param_14,param_15);
  uVar12 = _BrotliAllocate(param_1,0x2c08);
  if (*(int *)(param_1 + 0x18) == 0) {
    local_3e0 = param_13[2];
    local_3d8 = (uint *)param_13[3];
    local_3e8 = *param_13;
    local_3d0 = param_13[1];
    local_3f0 = 0x100;
    local_3c8 = 1;
    local_58 = 0;
    local_3c0 = 0;
    local_60 = 0;
    if (local_3d0 != 0) {
      local_58 = (ulong)*local_3d8;
    }
    local_50 = 0;
    lStack_48 = 0;
    local_410 = 0;
    local_40 = 0;
    local_798 = param_13[8];
    local_790 = (uint *)param_13[9];
    local_7a0 = param_13[6];
    local_788 = param_13[7];
    local_7a8 = 0x2c0;
    local_780 = 1;
    local_778 = 0;
    local_418 = 0;
    if (local_788 != 0) {
      local_410 = (ulong)*local_790;
    }
    local_408 = 0;
    lStack_400 = 0;
    local_7c8 = 0;
    local_3f8 = 0;
    local_b50 = param_13[0xe];
    local_b48 = (uint *)param_13[0xf];
    local_b58 = param_13[0xc];
    local_b40 = param_13[0xd];
    local_b38 = 1;
    local_b30 = 0;
    local_7d0 = 0;
    if (local_b40 != 0) {
      local_7c8 = (ulong)*local_b48;
    }
    local_7c0 = 0;
    uStack_7b8 = 0;
    local_7b0 = 0;
    local_b60 = (ulong)uVar11;
    _BuildAndStoreBlockSwitchEntropyCodes(&local_3f0,uVar12,param_14,param_15);
    _BuildAndStoreBlockSwitchEntropyCodes(&local_7a8,uVar12,param_14,param_15);
    _BuildAndStoreBlockSwitchEntropyCodes(&local_b60,uVar12,param_14,param_15);
    uVar11 = *(uint *)(param_9 + 0x40);
    uVar21 = *param_14;
    *(ulong *)(param_15 + (uVar21 >> 3)) =
         (ulong)uVar11 << ((byte)uVar21 & 7) | (ulong)*(byte *)(param_15 + (uVar21 >> 3));
    uVar17 = uVar21 + 2;
    *param_14 = uVar17;
    *(ulong *)(param_15 + (uVar17 >> 3)) =
         (ulong)(*(uint *)(param_9 + 0x44) >> ((byte)uVar11 & 0x1f)) << ((byte)uVar17 & 7) |
         (ulong)*(byte *)(param_15 + (uVar17 >> 3));
    uVar21 = uVar21 + 6;
    *param_14 = uVar21;
    if (*param_13 != 0) {
      uVar17 = 0;
      do {
        *(ulong *)(param_15 + (uVar21 >> 3)) =
             (ulong)param_10 << ((byte)uVar21 & 7) | (ulong)*(byte *)(param_15 + (uVar21 >> 3));
        uVar21 = uVar21 + 2;
        *param_14 = uVar21;
        uVar17 = uVar17 + 1;
      } while (uVar17 < *param_13);
    }
    if (param_13[0x13] == 0) {
      _StoreTrivialContextMap(param_13[0x17],6,uVar12,param_14);
    }
    else {
      _EncodeContextMap(param_1,param_13[0x12],param_13[0x13],param_13[0x17],uVar12,param_14,
                        param_15);
      if (*(int *)(param_1 + 0x18) != 0) goto LAB_00091c20;
    }
    if (param_13[0x15] == 0) {
      _StoreTrivialContextMap(param_13[0x1b],2,uVar12,param_14,param_15);
    }
    else {
      _EncodeContextMap(param_1,param_13[0x14],param_13[0x15],param_13[0x1b],uVar12,param_14,
                        param_15);
      if (*(int *)(param_1 + 0x18) != 0) goto LAB_00091c20;
    }
    uVar17 = param_13[0x16];
    uVar21 = param_13[0x17];
    lVar23 = local_3f0 * uVar21;
    if (lVar23 == 0) {
      lStack_48 = 0;
      local_40 = 0;
    }
    else {
      lStack_48 = _BrotliAllocate(param_1,lVar23);
      local_40 = _BrotliAllocate(param_1,lVar23 * 2);
    }
    iVar14 = *(int *)(param_1 + 0x18);
    if (uVar21 != 0 && iVar14 == 0) {
      uVar24 = 0;
      do {
        _BuildAndStoreHuffmanTree
                  (uVar17,local_3f0,0x100,uVar12,lStack_48 + local_3f0 * uVar24,
                   local_3f0 * uVar24 * 2 + local_40,param_14,param_15);
        uVar24 = uVar24 + 1;
        uVar17 = uVar17 + 0x410;
      } while (uVar21 != uVar24);
      iVar14 = *(int *)(param_1 + 0x18);
    }
    if (iVar14 == 0) {
      uVar17 = param_13[0x18];
      uVar21 = param_13[0x19];
      lVar23 = local_7a8 * uVar21;
      if (lVar23 == 0) {
        lStack_400 = 0;
        iVar14 = 0;
        local_3f8 = 0;
      }
      else {
        lStack_400 = _BrotliAllocate(param_1,lVar23);
        local_3f8 = _BrotliAllocate(param_1,lVar23 * 2);
        iVar14 = *(int *)(param_1 + 0x18);
      }
      if (uVar21 != 0 && iVar14 == 0) {
        uVar24 = 0;
        do {
          _BuildAndStoreHuffmanTree
                    (uVar17,local_7a8,0x2c0,uVar12,lStack_400 + local_7a8 * uVar24,
                     local_7a8 * uVar24 * 2 + local_3f8,param_14,param_15);
          uVar24 = uVar24 + 1;
          uVar17 = uVar17 + 0xb10;
        } while (uVar21 != uVar24);
        iVar14 = *(int *)(param_1 + 0x18);
      }
      if ((iVar14 == 0) &&
         (_BuildAndStoreEntropyCodesDistance
                    (param_1,&local_b60,param_13[0x1a],param_13[0x1b],uVar4,uVar12,param_14,param_15
                    ), *(int *)(param_1 + 0x18) == 0)) {
        _BrotliFree(param_1,uVar12);
        puVar8 = PTR___kBrotliContextLookupTable_00441028;
        if (param_12 != 0) {
          uVar17 = (ulong)param_7;
          lVar23 = 0;
          local_b74 = param_6;
          do {
            lVar13 = lVar23 * 0x10;
            uVar11 = *(uint *)(param_11 + lVar13);
            uVar21 = (ulong)uVar11;
            uVar18 = *(uint *)(param_11 + 4 + lVar13);
            uVar5 = *(uint *)(param_11 + 8 + lVar13);
            uVar2 = *(ushort *)(param_11 + 0xc + lVar13);
            uVar3 = *(ushort *)(param_11 + 0xe + lVar13);
            _StoreSymbol(&local_7a8,uVar2,param_14,param_15);
            uVar20 = uVar11;
            if (5 < uVar21) {
              if (uVar11 < 0x82) {
                uVar20 = 0x1f;
                uVar16 = (uint)(uVar21 - 2);
                if (uVar16 != 0) {
                  for (; uVar16 >> uVar20 == 0; uVar20 = uVar20 - 1) {
                  }
                }
                iVar14 = (uVar20 ^ 0xffffffe0) + 0x1f;
                uVar20 = (int)(uVar21 - 2 >> ((byte)iVar14 & 0x3f)) + iVar14 * 2 + 2;
              }
              else if (uVar11 < 0x842) {
                uVar20 = 0x1f;
                if (uVar11 - 0x42 != 0) {
                  for (; uVar11 - 0x42 >> uVar20 == 0; uVar20 = uVar20 - 1) {
                  }
                }
                uVar20 = (uVar20 ^ 0xffffffe0) + 0x2a;
              }
              else {
                uVar20 = 0x15;
                if (0x1841 < uVar11) {
                  uVar20 = 0x17 - (uVar11 < 0x5842);
                }
              }
            }
            bVar1 = (byte)(uVar18 >> 0x18);
            uVar18 = uVar18 & 0x1ffffff;
            uVar16 = (int)(char)(bVar1 & 0x80 | bVar1 >> 1) + uVar18;
            if (uVar16 < 10) {
              uVar22 = uVar16 + 0xfffe;
            }
            else if (uVar16 < 0x86) {
              uVar22 = 0x1f;
              uVar10 = (uint)((ulong)uVar16 - 6);
              if (uVar10 != 0) {
                for (; uVar10 >> uVar22 == 0; uVar22 = uVar22 - 1) {
                }
              }
              iVar14 = (uVar22 ^ 0xffffffe0) + 0x1f;
              uVar22 = (int)((ulong)uVar16 - 6 >> ((byte)iVar14 & 0x3f)) + iVar14 * 2 + 4;
            }
            else {
              uVar22 = 0x17;
              if (uVar16 < 0x846) {
                uVar22 = 0x1f;
                if (uVar16 - 0x46 != 0) {
                  for (; uVar16 - 0x46 >> uVar22 == 0; uVar22 = uVar22 - 1) {
                  }
                }
                uVar22 = (uVar22 ^ 0xffffffe0) + 0x2c;
              }
            }
            uVar20 = (uVar20 & 0xffff) << 2;
            iVar14 = *(int *)(&_kBrotliInsExtra + uVar20);
            uVar22 = (uVar22 & 0xffff) << 2;
            iVar6 = *(int *)(&_kBrotliCopyExtra + uVar22);
            uVar24 = *param_14;
            *(ulong *)(param_15 + (uVar24 >> 3)) =
                 ((ulong)(uVar16 - *(int *)(&_kBrotliCopyBase + uVar22)) << ((byte)iVar14 & 0x3f) |
                 (ulong)(uVar11 - *(int *)(&_kBrotliInsBase + uVar20))) << ((byte)uVar24 & 7) |
                 (ulong)*(byte *)(param_15 + (uVar24 >> 3));
            *param_14 = (uint)(iVar14 + iVar6) + uVar24;
            if (param_13[0x13] == 0) {
              if (uVar11 == 0) {
                uVar17 = uVar17 & 0xff;
              }
              else {
                do {
                  _StoreSymbol(&local_3f0,*(undefined1 *)(param_2 + (param_3 & param_5)),param_14,
                               param_15);
                  param_3 = param_3 + 1;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
                uVar17 = uVar17 & 0xff;
              }
            }
            else {
              uVar24 = uVar17 & 0xff;
              uVar17 = uVar17 & 0xff;
              uVar9 = (ulong)local_b74;
              if (uVar11 != 0) {
                do {
                  uVar17 = uVar9;
                  bVar1 = *(byte *)(param_2 + (param_3 & param_5));
                  local_b74 = (uint)bVar1;
                  _StoreSymbolWithContext
                            (&local_3f0,bVar1,
                             puVar8[(uVar24 & 0xff) + (ulong)(param_10 << 9) + 0x100] |
                             puVar8[(uVar17 & 0xff) + (ulong)(param_10 << 9)],param_13[0x12],
                             param_14,param_15,6);
                  param_3 = param_3 + 1;
                  uVar21 = uVar21 - 1;
                  uVar24 = uVar17;
                  uVar9 = (ulong)bVar1;
                } while (uVar21 != 0);
              }
            }
            param_3 = param_3 + uVar18;
            if (uVar18 != 0) {
              uVar17 = (ulong)*(byte *)(param_2 + (param_3 - 2 & param_5));
              local_b74 = (uint)*(byte *)(param_2 + (param_3 - 1 & param_5));
              if (0x7f < uVar2) {
                uVar19 = uVar3 & 0x3ff;
                if (param_13[0x15] == 0) {
                  _StoreSymbol(&local_b60,uVar19,param_14,param_15);
                }
                else {
                  uVar7 = uVar2 & 7;
                  if (2 < (uVar2 & 7)) {
                    uVar7 = 3;
                  }
                  uVar15 = 3;
                  if (((uVar2 >> 6) - 2 & 0xfffffffd) == 0) {
                    uVar15 = uVar7;
                  }
                  if (uVar2 >> 6 == 7) {
                    uVar15 = uVar7;
                  }
                  _StoreSymbolWithContext
                            (&local_b60,uVar19,uVar15,param_13[0x14],param_14,param_15,2);
                }
                uVar21 = *param_14;
                *(ulong *)(param_15 + (uVar21 >> 3)) =
                     (ulong)uVar5 << ((byte)uVar21 & 7) | (ulong)*(byte *)(param_15 + (uVar21 >> 3))
                ;
                *param_14 = (uVar3 >> 10) + uVar21;
              }
            }
            lVar23 = lVar23 + 1;
          } while (lVar23 != param_12);
        }
        _BrotliFree(param_1,uStack_7b8);
        uStack_7b8 = 0;
        _BrotliFree(param_1,local_7b0);
        local_7b0 = 0;
        _BrotliFree(param_1,lStack_400);
        lStack_400 = 0;
        _BrotliFree(param_1,local_3f8);
        local_3f8 = 0;
        _BrotliFree(param_1,lStack_48);
        lStack_48 = 0;
        _BrotliFree(param_1,local_40);
        if (param_8 != 0) {
          uVar11 = (int)*param_14 + 7;
          *param_14 = (ulong)(uVar11 & 0xfffffff8);
          *(undefined1 *)(param_15 + (ulong)(uVar11 >> 3)) = 0;
        }
      }
    }
  }
LAB_00091c20:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

