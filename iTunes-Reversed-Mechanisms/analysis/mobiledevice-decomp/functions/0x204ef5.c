// rea decompile_all
// name: _DecodeContextMap
// address: 0x204ef5
// body: available
// range: 0x204ef5-0x205361 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _DecodeContextMap(uint param_1,uint *param_2,long *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  bool bVar14;
  uint local_3c;
  undefined8 local_38;
  
  if (4 < *(uint *)(param_4 + 0x2ec)) {
    return -0x1f;
  }
  puVar9 = (ulong *)(param_4 + 8);
  switch(*(uint *)(param_4 + 0x2ec)) {
  case 0:
    local_38 = puVar9;
    iVar11 = _DecodeVarLenUint8(param_4,puVar9,param_2);
    if (iVar11 != 1) {
      return iVar11;
    }
    *param_2 = *param_2 + 1;
    *(undefined4 *)(param_4 + 0x9f8) = 0;
    lVar3 = (**(code **)(param_4 + 0x28))(*(undefined8 *)(param_4 + 0x38),param_1);
    *param_3 = lVar3;
    if (lVar3 == 0) {
      return -0x19;
    }
    if (*param_2 < 2) {
      ___bzero(lVar3,param_1);
      return 1;
    }
    *(undefined4 *)(param_4 + 0x2ec) = 1;
    puVar9 = local_38;
  case 1:
    iVar11 = *(int *)(param_4 + 0x10);
    if (iVar11 - 0x3cU < 5) {
      if (*(long *)(param_4 + 0x20) == 0) {
        return 2;
      }
      uVar8 = *(ulong *)(param_4 + 8);
      *(ulong *)(param_4 + 8) = uVar8 >> 8;
      uVar8 = (ulong)**(byte **)(param_4 + 0x18) << 0x38 | uVar8 >> 8;
      *(ulong *)(param_4 + 8) = uVar8;
      iVar11 = iVar11 + -8;
      *(long *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) + -1;
      *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
    }
    else {
      uVar8 = *puVar9;
    }
    uVar10 = (uint)(uVar8 >> ((byte)iVar11 & 0x3f));
    uVar13 = uVar10 & 1;
    uVar10 = (uVar10 >> 1 & 0xf) + 1 & -uVar13;
    *(uint *)(param_4 + 0x9fc) = uVar10;
    *(uint *)(param_4 + 0x10) = iVar11 + uVar13 * 4 + 1;
    *(undefined4 *)(param_4 + 0x2ec) = 2;
    break;
  case 2:
    uVar10 = *(uint *)(param_4 + 0x9fc);
    break;
  case 3:
    uVar10 = *(uint *)(param_4 + 0xa00);
    goto LAB_002050a0;
  case 4:
    goto switchD_00204f31_caseD_4;
  }
  local_38 = (ulong *)CONCAT44(local_38._4_4_,param_1);
  iVar11 = _ReadHuffmanCode(uVar10 + *param_2,uVar10 + *param_2,param_4 + 0xa04,0,param_4);
  if (iVar11 != 1) {
    return iVar11;
  }
  *(undefined4 *)(param_4 + 0xa00) = 0xffff;
  *(undefined4 *)(param_4 + 0x2ec) = 3;
  uVar10 = 0xffff;
  param_1 = (uint)local_38;
LAB_002050a0:
  uVar13 = *(uint *)(param_4 + 0x9f8);
  uVar1 = *(uint *)(param_4 + 0x9fc);
  lVar3 = *param_3;
  bVar14 = uVar10 != 0xffff;
  local_3c = uVar10;
  if (uVar13 < param_1 || bVar14) {
    do {
      iVar11 = *(int *)(param_4 + 0x10);
      if (bVar14) {
LAB_002051eb:
        uVar5 = 0x40 - iVar11;
        if (uVar5 < uVar10) {
          lVar6 = *(long *)(param_4 + 0x20);
          do {
            lVar6 = lVar6 + -1;
            if (lVar6 == -1) {
LAB_0020533d:
              *(uint *)(param_4 + 0xa00) = uVar10;
              *(uint *)(param_4 + 0x9f8) = uVar13;
              return 2;
            }
            uVar8 = *(ulong *)(param_4 + 8);
            *(ulong *)(param_4 + 8) = uVar8 >> 8;
            uVar8 = (ulong)**(byte **)(param_4 + 0x18) << 0x38 | uVar8 >> 8;
            *(ulong *)(param_4 + 8) = uVar8;
            iVar11 = iVar11 + -8;
            *(int *)(param_4 + 0x10) = iVar11;
            *(long *)(param_4 + 0x20) = lVar6;
            *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
            uVar5 = uVar5 + 8;
          } while (uVar5 < uVar10);
        }
        else {
          uVar8 = *puVar9;
        }
        uVar5 = *(uint *)(&_kBrotliBitMask + (ulong)uVar10 * 4);
        *(uint *)(param_4 + 0x10) = iVar11 + uVar10;
        iVar11 = (1 << ((byte)uVar10 & 0x1f)) + ((uint)(uVar8 >> ((byte)iVar11 & 0x3f)) & uVar5);
        if (param_1 < iVar11 + uVar13) {
          return -8;
        }
        do {
          uVar8 = (ulong)uVar13;
          uVar13 = uVar13 + 1;
          *(undefined1 *)(lVar3 + uVar8) = 0;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      else {
        if (iVar11 - 0x32U < 0xf) {
          lVar6 = *(long *)(param_4 + 0x20);
          iVar2 = iVar11;
          do {
            lVar6 = lVar6 + -1;
            if (lVar6 == -1) {
              local_38 = (ulong *)CONCAT44(local_38._4_4_,param_1);
              iVar11 = _SafeDecodeSymbol(param_4 + 0xa04,puVar9,&local_3c);
              if (iVar11 == 0) {
                uVar10 = 0xffff;
                goto LAB_0020533d;
              }
              param_1 = (uint)local_38;
              goto LAB_002051d4;
            }
            uVar8 = *(ulong *)(param_4 + 8);
            *(ulong *)(param_4 + 8) = uVar8 >> 8;
            uVar8 = (ulong)**(byte **)(param_4 + 0x18) << 0x38 | uVar8 >> 8;
            *(ulong *)(param_4 + 8) = uVar8;
            iVar11 = iVar2 + -8;
            *(int *)(param_4 + 0x10) = iVar11;
            *(long *)(param_4 + 0x20) = lVar6;
            *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
            uVar10 = iVar2 - 0x3a;
            iVar2 = iVar11;
          } while (uVar10 < 0xf);
        }
        else {
          uVar8 = *puVar9;
        }
        uVar8 = uVar8 >> ((byte)iVar11 & 0x3f);
        pbVar7 = (byte *)(param_4 + 0xa04 + (uVar8 & 0xff) * 4);
        uVar10 = (uint)*pbVar7;
        if (8 < uVar10) {
          iVar11 = iVar11 + 8;
          pbVar7 = pbVar7 + (ulong)(((uint)(uVar8 >> 8) & 0xffffff &
                                     *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar7 - 8) * 4) & 0x7f)
                                   + (uint)*(ushort *)(pbVar7 + 2)) * 4;
          uVar10 = (uint)*pbVar7;
        }
        *(uint *)(param_4 + 0x10) = uVar10 + iVar11;
        local_3c = (uint)*(ushort *)(pbVar7 + 2);
LAB_002051d4:
        if (local_3c == 0) {
          iVar11 = 0;
          uVar10 = 0;
        }
        else {
          iVar11 = local_3c - uVar1;
          uVar10 = local_3c;
          if (local_3c < uVar1 || iVar11 == 0) {
            iVar11 = *(int *)(param_4 + 0x10);
            goto LAB_002051eb;
          }
        }
        uVar8 = (ulong)uVar13;
        uVar13 = uVar13 + 1;
        *(char *)(lVar3 + uVar8) = (char)iVar11;
      }
      bVar14 = false;
    } while (uVar13 < param_1);
  }
switchD_00204f31_caseD_4:
  uVar8 = (ulong)*(uint *)(param_4 + 0x10);
  if (*(uint *)(param_4 + 0x10) == 0x40) {
    if (*(long *)(param_4 + 0x20) == 0) {
      iVar11 = 2;
      uVar12 = 4;
      goto LAB_00205327;
    }
    uVar8 = *(ulong *)(param_4 + 8);
    *(ulong *)(param_4 + 8) = uVar8 >> 8;
    uVar4 = (ulong)**(byte **)(param_4 + 0x18) << 0x38 | uVar8 >> 8;
    *(ulong *)(param_4 + 8) = uVar4;
    *(long *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) + -1;
    *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
    uVar8 = 0x38;
  }
  else {
    uVar4 = *puVar9;
  }
  *(int *)(param_4 + 0x10) = (int)uVar8 + 1;
  iVar11 = 1;
  uVar12 = 0;
  if ((uVar4 >> (uVar8 & 0x3f) & 1) != 0) {
    _InverseMoveToFrontTransform(*param_3,param_1,param_4);
  }
LAB_00205327:
  *(undefined4 *)(param_4 + 0x2ec) = uVar12;
  return iVar11;
}

