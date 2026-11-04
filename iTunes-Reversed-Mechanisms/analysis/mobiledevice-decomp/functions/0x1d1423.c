// rea decompile_all
// name: _lzx_huffman_tree_update_tree_using_pre_tree_encoding
// address: 0x1d1423
// body: available
// range: 0x1d1423-0x1d1715 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _lzx_huffman_tree_update_tree_using_pre_tree_encoding
              (long param_1,undefined8 *param_2,ulong param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ushort local_34;
  ushort local_32;
  
  iVar5 = _lzx_huffman_create_pre_tree(param_5);
  if (iVar5 != 0) {
    return -1;
  }
  uVar13 = param_4 + param_3;
joined_r0x001d145e:
  while( true ) {
    while( true ) {
      if (uVar13 <= param_3) {
        return -(uint)(param_3 != uVar13);
      }
      iVar5 = _lzx_huffman_tree_read_code(&local_34,param_2,param_5);
      if (iVar5 != 0) {
        return -1;
      }
      if (0x10 < local_34) break;
      bVar1 = *(byte *)(param_1 + param_3);
      bVar8 = bVar1 + 0x11;
      if ((byte)local_34 <= bVar1) {
        bVar8 = bVar1;
      }
      *(byte *)(param_1 + param_3) = bVar8 - (byte)local_34;
      param_3 = param_3 + 1;
    }
    if (local_34 != 0x13) break;
    iVar5 = *(int *)(param_2 + 3);
    if (iVar5 < 0x31) {
      iVar7 = 0x30 - iVar5;
      iVar6 = iVar5;
      puVar4 = (ushort *)*param_2;
      do {
        puVar9 = puVar4 + 1;
        if ((ushort *)param_2[1] < puVar9) {
          iVar5 = iVar6;
          if (iVar6 < 1) {
            return -1;
          }
          break;
        }
        uVar2 = *puVar4;
        *param_2 = puVar9;
        iVar5 = iVar6 + 0x10;
        *(int *)(param_2 + 3) = iVar5;
        param_2[2] = param_2[2] | (ulong)uVar2 << ((byte)iVar7 & 0x3f);
        iVar7 = iVar7 + -0x10;
        bVar3 = iVar6 < 0x21;
        iVar6 = iVar5;
        puVar4 = puVar9;
      } while (bVar3);
    }
    uVar11 = -((long)param_2[2] >> 0x3f);
    param_2[2] = param_2[2] * 2;
    *(int *)(param_2 + 3) = iVar5 + -1;
    uVar10 = param_3 + uVar11 + 4;
    if (uVar13 < uVar10) {
      return -1;
    }
    iVar5 = _lzx_huffman_tree_read_code(&local_32,param_2,param_5);
    if (iVar5 != 0) {
      return -1;
    }
    if (0x10 < local_32) {
      return -1;
    }
    bVar1 = *(byte *)(param_1 + param_3);
    bVar8 = bVar1 + 0x11;
    if ((byte)local_32 <= bVar1) {
      bVar8 = bVar1;
    }
    _memset((void *)(param_1 + param_3),(uint)(byte)(bVar8 - (byte)local_32),uVar11 | 4);
    param_3 = uVar10;
  }
  if (local_34 != 0x12) goto code_r0x001d14be;
  iVar5 = *(int *)(param_2 + 3);
  if (iVar5 < 0x31) {
    iVar7 = 0x30 - iVar5;
    iVar6 = iVar5;
    puVar4 = (ushort *)*param_2;
    do {
      puVar9 = puVar4 + 1;
      if ((ushort *)param_2[1] < puVar9) {
        iVar5 = iVar6;
        if (iVar6 < 5) {
          return -1;
        }
        break;
      }
      uVar2 = *puVar4;
      *param_2 = puVar9;
      iVar5 = iVar6 + 0x10;
      *(int *)(param_2 + 3) = iVar5;
      param_2[2] = param_2[2] | (ulong)uVar2 << ((byte)iVar7 & 0x3f);
      iVar7 = iVar7 + -0x10;
      bVar3 = iVar6 < 0x21;
      iVar6 = iVar5;
      puVar4 = puVar9;
    } while (bVar3);
  }
  uVar11 = (ulong)param_2[2] >> 0x3b;
  param_2[2] = param_2[2] << 5;
  *(int *)(param_2 + 3) = iVar5 + -5;
  uVar10 = uVar11 + param_3 + 0x14;
  if (uVar13 < uVar10) {
    return -1;
  }
  lVar12 = uVar11 + 0x14;
  goto LAB_001d16d7;
code_r0x001d14be:
  if (local_34 == 0x11) {
    iVar5 = *(int *)(param_2 + 3);
    if (iVar5 < 0x31) {
      iVar7 = 0x30 - iVar5;
      iVar6 = iVar5;
      puVar4 = (ushort *)*param_2;
      do {
        puVar9 = puVar4 + 1;
        if ((ushort *)param_2[1] < puVar9) {
          iVar5 = iVar6;
          if (iVar6 < 4) {
            return -1;
          }
          break;
        }
        uVar2 = *puVar4;
        *param_2 = puVar9;
        iVar5 = iVar6 + 0x10;
        *(int *)(param_2 + 3) = iVar5;
        param_2[2] = param_2[2] | (ulong)uVar2 << ((byte)iVar7 & 0x3f);
        iVar7 = iVar7 + -0x10;
        bVar3 = iVar6 < 0x21;
        iVar6 = iVar5;
        puVar4 = puVar9;
      } while (bVar3);
    }
    uVar11 = (ulong)param_2[2] >> 0x3c;
    param_2[2] = param_2[2] << 4;
    *(int *)(param_2 + 3) = iVar5 + -4;
    uVar10 = uVar11 + param_3 + 4;
    if (uVar13 < uVar10) {
      return -1;
    }
    lVar12 = uVar11 + 4;
LAB_001d16d7:
    ___bzero(param_3 + param_1,lVar12);
    param_3 = uVar10;
  }
  goto joined_r0x001d145e;
}

