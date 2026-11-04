// rea decompile_all
// name: _SafeDecodeLiteralBlockSwitch
// address: 0x8a4df
// body: available
// range: 0x8a4df-0x8a8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _SafeDecodeLiteralBlockSwitch(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint local_54;
  ulong *local_50;
  byte *local_48;
  uint local_3c;
  long local_38;
  
  uVar16 = *(uint *)(param_1 + 0x11c);
  if (uVar16 < 2) {
LAB_0008a7c1:
    uVar8 = 0;
  }
  else {
    local_50 = *(ulong **)(param_1 + 0xf8);
    puVar1 = (ulong *)(param_1 + 8);
    uVar4 = *(ulong *)(param_1 + 8);
    uVar17 = *(uint *)(param_1 + 0x10);
    local_48 = (byte *)(ulong)uVar17;
    pbVar13 = *(byte **)(param_1 + 0x18);
    lVar14 = *(long *)(param_1 + 0x20);
    uVar11 = uVar17 - 0x32;
    uVar7 = uVar4;
    uVar9 = uVar17;
    pbVar12 = pbVar13;
    lVar15 = lVar14;
    while (uVar11 < 0xf) {
      lVar15 = lVar15 + -1;
      if (lVar15 == -1) {
        local_38 = CONCAT44(local_38._4_4_,uVar16);
        iVar10 = _SafeDecodeSymbol(*(long *)(param_1 + 0xf0),puVar1,&local_3c);
        uVar17 = (uint)local_48;
        uVar16 = (uint)local_38;
        if (iVar10 != 0) goto LAB_0008a5d9;
        goto LAB_0008a7c1;
      }
      *(ulong *)(param_1 + 8) = uVar7 >> 8;
      uVar7 = uVar7 >> 8 | (ulong)*pbVar12 << 0x38;
      *(ulong *)(param_1 + 8) = uVar7;
      *(uint *)(param_1 + 0x10) = uVar9 - 8;
      *(long *)(param_1 + 0x20) = lVar15;
      *(byte **)(param_1 + 0x18) = pbVar12 + 1;
      uVar11 = uVar9 - 0x3a;
      uVar9 = uVar9 - 8;
      pbVar12 = pbVar12 + 1;
    }
    uVar7 = uVar7 >> ((byte)uVar9 & 0x3f);
    pbVar12 = (byte *)(*(long *)(param_1 + 0xf0) + (uVar7 & 0xff) * 4);
    uVar11 = (uint)*pbVar12;
    if (8 < uVar11) {
      uVar9 = uVar9 + 8;
      pbVar12 = pbVar12 + (ulong)(((uint)(uVar7 >> 8) & 0xffffff &
                                   *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar12 - 8) * 4) & 0x7f) +
                                 (uint)*(ushort *)(pbVar12 + 2)) * 4;
      uVar11 = (uint)*pbVar12;
    }
    *(uint *)(param_1 + 0x10) = uVar11 + uVar9;
    local_3c = (uint)*(ushort *)(pbVar12 + 2);
LAB_0008a5d9:
    puVar6 = local_50;
    local_48 = pbVar13;
    local_38 = lVar14;
    if (*(int *)(param_1 + 0x294) == 0) {
      iVar10 = *(int *)(param_1 + 0x10);
      if (iVar10 - 0x32U < 0xf) {
        lVar14 = *(long *)(param_1 + 0x20);
        iVar5 = iVar10;
        do {
          lVar14 = lVar14 + -1;
          if (lVar14 == -1) {
            local_50 = puVar1;
            iVar10 = _SafeDecodeSymbol(puVar6,puVar1,&local_54);
            if (iVar10 != 0) goto LAB_0008a6e5;
            goto LAB_0008a7a3;
          }
          uVar7 = *(ulong *)(param_1 + 8);
          *(ulong *)(param_1 + 8) = uVar7 >> 8;
          uVar7 = (ulong)**(byte **)(param_1 + 0x18) << 0x38 | uVar7 >> 8;
          *(ulong *)(param_1 + 8) = uVar7;
          iVar10 = iVar5 + -8;
          *(int *)(param_1 + 0x10) = iVar10;
          *(long *)(param_1 + 0x20) = lVar14;
          *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
          uVar9 = iVar5 - 0x3a;
          iVar5 = iVar10;
        } while (uVar9 < 0xf);
      }
      else {
        uVar7 = *puVar1;
      }
      uVar7 = uVar7 >> ((byte)iVar10 & 0x3f);
      pbVar13 = (byte *)((long)local_50 + (uVar7 & 0xff) * 4);
      uVar9 = (uint)*pbVar13;
      if (8 < uVar9) {
        iVar10 = iVar10 + 8;
        pbVar13 = pbVar13 + (ulong)(((uint)(uVar7 >> 8) & 0xffffff &
                                     *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar13 - 8) * 4) & 0x7f)
                                   + (uint)*(ushort *)(pbVar13 + 2)) * 4;
        uVar9 = (uint)*pbVar13;
      }
      *(uint *)(param_1 + 0x10) = uVar9 + iVar10;
      local_54 = (uint)*(ushort *)(pbVar13 + 2);
      local_50 = puVar1;
    }
    else {
      local_54 = *(uint *)(param_1 + 0x10c);
      local_50 = puVar1;
    }
LAB_0008a6e5:
    bVar2 = (&DAT_002b5682)[(ulong)local_54 * 4];
    uVar3 = *(ushort *)(&__kBrotliPrefixCodeRanges + (ulong)local_54 * 4);
    iVar10 = *(int *)(param_1 + 0x10);
    uVar9 = 0x40 - iVar10;
    if (uVar9 < bVar2) {
      lVar14 = *(long *)(param_1 + 0x20);
      do {
        lVar14 = lVar14 + -1;
        if (lVar14 == -1) {
          *(uint *)(param_1 + 0x10c) = local_54;
LAB_0008a7a3:
          *(undefined4 *)(param_1 + 0x294) = 0;
          *(ulong *)(param_1 + 8) = uVar4;
          *(uint *)(param_1 + 0x10) = uVar17;
          *(byte **)(param_1 + 0x18) = local_48;
          *(long *)(param_1 + 0x20) = local_38;
          goto LAB_0008a7c1;
        }
        uVar7 = *(ulong *)(param_1 + 8);
        *(ulong *)(param_1 + 8) = uVar7 >> 8;
        uVar7 = (ulong)**(byte **)(param_1 + 0x18) << 0x38 | uVar7 >> 8;
        *(ulong *)(param_1 + 8) = uVar7;
        iVar10 = iVar10 + -8;
        *(int *)(param_1 + 0x10) = iVar10;
        *(long *)(param_1 + 0x20) = lVar14;
        *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
        uVar9 = uVar9 + 8;
      } while (uVar9 < bVar2);
    }
    else {
      uVar7 = *local_50;
    }
    uVar17 = *(uint *)(&_kBrotliBitMask + (ulong)(uint)bVar2 * 4);
    *(uint *)(param_1 + 0x10) = iVar10 + (uint)bVar2;
    *(uint *)(param_1 + 0x110) = ((uint)(uVar7 >> ((byte)iVar10 & 0x3f)) & uVar17) + (uint)uVar3;
    *(undefined4 *)(param_1 + 0x294) = 0;
    if (local_3c == 0) {
      local_3c = *(uint *)(param_1 + 0x128);
    }
    else if (local_3c == 1) {
      local_3c = *(int *)(param_1 + 300) + 1;
    }
    else {
      local_3c = local_3c - 2;
    }
    uVar17 = 0;
    if (uVar16 <= local_3c) {
      uVar17 = uVar16;
    }
    local_3c = local_3c - uVar17;
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 300);
    *(uint *)(param_1 + 300) = local_3c;
    *(ulong *)(param_1 + 0x98) = *(long *)(param_1 + 0x2a8) + (ulong)(local_3c * 0x40);
    *(uint *)(param_1 + 0x100) =
         (uint)((*(uint *)(param_1 + 0x2c8 + (ulong)(local_3c >> 5) * 4) >> (local_3c & 0x1f) & 1)
               != 0);
    *(undefined8 *)(param_1 + 0x158) =
         *(undefined8 *)
          (*(long *)(param_1 + 0xa8) +
          (ulong)*(byte *)(*(long *)(param_1 + 0x2a8) + (ulong)(local_3c * 0x40)) * 8);
    *(undefined **)(param_1 + 0x90) =
         PTR___kBrotliContextLookupTable_00441028 +
         ((*(byte *)(*(long *)(param_1 + 0x2b0) + (ulong)local_3c) & 3) << 9);
    uVar8 = 1;
  }
  return uVar8;
}

