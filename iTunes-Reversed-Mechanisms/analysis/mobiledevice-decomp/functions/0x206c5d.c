// rea decompile_all
// name: _SafeDecodeCommandBlockSwitch
// address: 0x206c5d
// body: available
// range: 0x206c5d-0x206fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _SafeDecodeCommandBlockSwitch(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint local_38;
  uint local_34;
  
  uVar4 = *(uint *)(param_1 + 0x120);
  if (uVar4 < 2) {
LAB_00206f29:
    uVar11 = 0;
  }
  else {
    lVar16 = *(long *)(param_1 + 0xf0) + 0x9e0;
    lVar9 = *(long *)(param_1 + 0xf8) + 0x630;
    puVar1 = (ulong *)(param_1 + 8);
    uVar6 = *(ulong *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0x10);
    pbVar7 = *(byte **)(param_1 + 0x18);
    lVar8 = *(long *)(param_1 + 0x20);
    uVar17 = iVar5 - 0x32;
    uVar10 = uVar6;
    iVar12 = iVar5;
    pbVar13 = pbVar7;
    lVar15 = lVar8;
    while (uVar17 < 0xf) {
      lVar15 = lVar15 + -1;
      if (lVar15 == -1) {
        iVar12 = _SafeDecodeSymbol(lVar16,puVar1,&local_34);
        if (iVar12 != 0) goto LAB_00206d6b;
        goto LAB_00206f29;
      }
      *(ulong *)(param_1 + 8) = uVar10 >> 8;
      uVar10 = uVar10 >> 8 | (ulong)*pbVar13 << 0x38;
      *(ulong *)(param_1 + 8) = uVar10;
      *(int *)(param_1 + 0x10) = iVar12 + -8;
      *(long *)(param_1 + 0x20) = lVar15;
      *(byte **)(param_1 + 0x18) = pbVar13 + 1;
      uVar17 = iVar12 - 0x3a;
      iVar12 = iVar12 + -8;
      pbVar13 = pbVar13 + 1;
    }
    uVar10 = uVar10 >> ((byte)iVar12 & 0x3f);
    pbVar13 = (byte *)(lVar16 + (uVar10 & 0xff) * 4);
    uVar17 = (uint)*pbVar13;
    if (8 < uVar17) {
      iVar12 = iVar12 + 8;
      pbVar13 = pbVar13 + (ulong)(((uint)(uVar10 >> 8) & 0xffffff &
                                   *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar13 - 8) * 4) & 0x7f) +
                                 (uint)*(ushort *)(pbVar13 + 2)) * 4;
      uVar17 = (uint)*pbVar13;
    }
    *(uint *)(param_1 + 0x10) = uVar17 + iVar12;
    local_34 = (uint)*(ushort *)(pbVar13 + 2);
LAB_00206d6b:
    if (*(int *)(param_1 + 0x294) == 0) {
      iVar12 = *(int *)(param_1 + 0x10);
      if (iVar12 - 0x32U < 0xf) {
        lVar15 = *(long *)(param_1 + 0x20);
        iVar14 = iVar12;
        do {
          lVar15 = lVar15 + -1;
          if (lVar15 == -1) {
            iVar12 = _SafeDecodeSymbol(lVar9,puVar1,&local_38);
            if (iVar12 != 0) goto LAB_00206e52;
            goto LAB_00206f07;
          }
          uVar10 = *(ulong *)(param_1 + 8);
          *(ulong *)(param_1 + 8) = uVar10 >> 8;
          uVar10 = (ulong)**(byte **)(param_1 + 0x18) << 0x38 | uVar10 >> 8;
          *(ulong *)(param_1 + 8) = uVar10;
          iVar12 = iVar14 + -8;
          *(int *)(param_1 + 0x10) = iVar12;
          *(long *)(param_1 + 0x20) = lVar15;
          *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
          uVar17 = iVar14 - 0x3a;
          iVar14 = iVar12;
        } while (uVar17 < 0xf);
      }
      else {
        uVar10 = *puVar1;
      }
      uVar10 = uVar10 >> ((byte)iVar12 & 0x3f);
      pbVar13 = (byte *)(lVar9 + (uVar10 & 0xff) * 4);
      uVar17 = (uint)*pbVar13;
      if (8 < uVar17) {
        iVar12 = iVar12 + 8;
        pbVar13 = pbVar13 + (ulong)(((uint)(uVar10 >> 8) & 0xffffff &
                                     *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar13 - 8) * 4) & 0x7f)
                                   + (uint)*(ushort *)(pbVar13 + 2)) * 4;
        uVar17 = (uint)*pbVar13;
      }
      *(uint *)(param_1 + 0x10) = uVar17 + iVar12;
      local_38 = (uint)*(ushort *)(pbVar13 + 2);
    }
    else {
      local_38 = *(uint *)(param_1 + 0x10c);
    }
LAB_00206e52:
    bVar2 = (&DAT_0033c922)[(ulong)local_38 * 4];
    uVar3 = *(ushort *)(&__kBrotliPrefixCodeRanges + (ulong)local_38 * 4);
    iVar12 = *(int *)(param_1 + 0x10);
    uVar17 = 0x40 - iVar12;
    if (uVar17 < bVar2) {
      lVar15 = *(long *)(param_1 + 0x20);
      do {
        lVar15 = lVar15 + -1;
        if (lVar15 == -1) {
          *(uint *)(param_1 + 0x10c) = local_38;
LAB_00206f07:
          *(undefined4 *)(param_1 + 0x294) = 0;
          *(ulong *)(param_1 + 8) = uVar6;
          *(int *)(param_1 + 0x10) = iVar5;
          *(byte **)(param_1 + 0x18) = pbVar7;
          *(long *)(param_1 + 0x20) = lVar8;
          goto LAB_00206f29;
        }
        uVar10 = *(ulong *)(param_1 + 8);
        *(ulong *)(param_1 + 8) = uVar10 >> 8;
        uVar10 = (ulong)**(byte **)(param_1 + 0x18) << 0x38 | uVar10 >> 8;
        *(ulong *)(param_1 + 8) = uVar10;
        iVar12 = iVar12 + -8;
        *(int *)(param_1 + 0x10) = iVar12;
        *(long *)(param_1 + 0x20) = lVar15;
        *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
        uVar17 = uVar17 + 8;
      } while (uVar17 < bVar2);
    }
    else {
      uVar10 = *puVar1;
    }
    uVar17 = *(uint *)(&_kBrotliBitMask + (ulong)(uint)bVar2 * 4);
    *(uint *)(param_1 + 0x10) = iVar12 + (uint)bVar2;
    *(uint *)(param_1 + 0x114) = ((uint)(uVar10 >> ((byte)iVar12 & 0x3f)) & uVar17) + (uint)uVar3;
    *(undefined4 *)(param_1 + 0x294) = 0;
    if (local_34 == 0) {
      local_34 = *(uint *)(param_1 + 0x130);
    }
    else if (local_34 == 1) {
      local_34 = *(int *)(param_1 + 0x134) + 1;
    }
    else {
      local_34 = local_34 - 2;
    }
    uVar17 = 0;
    if (uVar4 <= local_34) {
      uVar17 = uVar4;
    }
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x134);
    *(uint *)(param_1 + 0x134) = local_34 - uVar17;
    *(undefined8 *)(param_1 + 0x88) =
         *(undefined8 *)(*(long *)(param_1 + 0xc0) + (ulong)(local_34 - uVar17) * 8);
    uVar11 = 1;
  }
  return uVar11;
}

