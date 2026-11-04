// rea decompile_all
// name: _SafeDecodeDistanceBlockSwitch
// address: 0x207773
// body: available
// range: 0x207773-0x207acc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _SafeDecodeDistanceBlockSwitch(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint local_38;
  uint local_34;
  
  uVar4 = *(uint *)(param_1 + 0x124);
  if (uVar4 < 2) {
LAB_00207a3f:
    uVar11 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0xf8) + 0xc60;
    puVar1 = (ulong *)(param_1 + 8);
    uVar6 = *(ulong *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0x10);
    pbVar7 = *(byte **)(param_1 + 0x18);
    lVar10 = *(long *)(param_1 + 0x20);
    uVar16 = iVar5 - 0x32;
    uVar9 = uVar6;
    iVar12 = iVar5;
    pbVar13 = pbVar7;
    lVar15 = lVar10;
    while (uVar16 < 0xf) {
      lVar15 = lVar15 + -1;
      if (lVar15 == -1) {
        iVar12 = _SafeDecodeSymbol("/usr/lib/libSystem.B.dylib" + *(long *)(param_1 + 0xf0),puVar1,
                                   &local_34);
        if (iVar12 != 0) goto LAB_00207881;
        goto LAB_00207a3f;
      }
      *(ulong *)(param_1 + 8) = uVar9 >> 8;
      uVar9 = uVar9 >> 8 | (ulong)*pbVar13 << 0x38;
      *(ulong *)(param_1 + 8) = uVar9;
      *(int *)(param_1 + 0x10) = iVar12 + -8;
      *(long *)(param_1 + 0x20) = lVar15;
      *(byte **)(param_1 + 0x18) = pbVar13 + 1;
      uVar16 = iVar12 - 0x3a;
      iVar12 = iVar12 + -8;
      pbVar13 = pbVar13 + 1;
    }
    uVar9 = uVar9 >> ((byte)iVar12 & 0x3f);
    pbVar13 = (byte *)("/usr/lib/libSystem.B.dylib" + *(long *)(param_1 + 0xf0) + (uVar9 & 0xff) * 4
                      );
    uVar16 = (uint)*pbVar13;
    if (8 < uVar16) {
      iVar12 = iVar12 + 8;
      pbVar13 = pbVar13 + (ulong)(((uint)(uVar9 >> 8) & 0xffffff &
                                   *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar13 - 8) * 4) & 0x7f) +
                                 (uint)*(ushort *)(pbVar13 + 2)) * 4;
      uVar16 = (uint)*pbVar13;
    }
    *(uint *)(param_1 + 0x10) = uVar16 + iVar12;
    local_34 = (uint)*(ushort *)(pbVar13 + 2);
LAB_00207881:
    if (*(int *)(param_1 + 0x294) == 0) {
      iVar12 = *(int *)(param_1 + 0x10);
      if (iVar12 - 0x32U < 0xf) {
        lVar15 = *(long *)(param_1 + 0x20);
        iVar14 = iVar12;
        do {
          lVar15 = lVar15 + -1;
          if (lVar15 == -1) {
            iVar12 = _SafeDecodeSymbol(lVar8,puVar1,&local_38);
            if (iVar12 != 0) goto LAB_00207968;
            goto LAB_00207a1d;
          }
          uVar9 = *(ulong *)(param_1 + 8);
          *(ulong *)(param_1 + 8) = uVar9 >> 8;
          uVar9 = (ulong)**(byte **)(param_1 + 0x18) << 0x38 | uVar9 >> 8;
          *(ulong *)(param_1 + 8) = uVar9;
          iVar12 = iVar14 + -8;
          *(int *)(param_1 + 0x10) = iVar12;
          *(long *)(param_1 + 0x20) = lVar15;
          *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
          uVar16 = iVar14 - 0x3a;
          iVar14 = iVar12;
        } while (uVar16 < 0xf);
      }
      else {
        uVar9 = *puVar1;
      }
      uVar9 = uVar9 >> ((byte)iVar12 & 0x3f);
      pbVar13 = (byte *)(lVar8 + (uVar9 & 0xff) * 4);
      uVar16 = (uint)*pbVar13;
      if (8 < uVar16) {
        iVar12 = iVar12 + 8;
        pbVar13 = pbVar13 + (ulong)(((uint)(uVar9 >> 8) & 0xffffff &
                                     *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar13 - 8) * 4) & 0x7f)
                                   + (uint)*(ushort *)(pbVar13 + 2)) * 4;
        uVar16 = (uint)*pbVar13;
      }
      *(uint *)(param_1 + 0x10) = uVar16 + iVar12;
      local_38 = (uint)*(ushort *)(pbVar13 + 2);
    }
    else {
      local_38 = *(uint *)(param_1 + 0x10c);
    }
LAB_00207968:
    bVar2 = (&DAT_0033c922)[(ulong)local_38 * 4];
    uVar3 = *(ushort *)(&__kBrotliPrefixCodeRanges + (ulong)local_38 * 4);
    iVar12 = *(int *)(param_1 + 0x10);
    uVar16 = 0x40 - iVar12;
    if (uVar16 < bVar2) {
      lVar15 = *(long *)(param_1 + 0x20);
      do {
        lVar15 = lVar15 + -1;
        if (lVar15 == -1) {
          *(uint *)(param_1 + 0x10c) = local_38;
LAB_00207a1d:
          *(undefined4 *)(param_1 + 0x294) = 0;
          *(ulong *)(param_1 + 8) = uVar6;
          *(int *)(param_1 + 0x10) = iVar5;
          *(byte **)(param_1 + 0x18) = pbVar7;
          *(long *)(param_1 + 0x20) = lVar10;
          goto LAB_00207a3f;
        }
        uVar9 = *(ulong *)(param_1 + 8);
        *(ulong *)(param_1 + 8) = uVar9 >> 8;
        uVar9 = (ulong)**(byte **)(param_1 + 0x18) << 0x38 | uVar9 >> 8;
        *(ulong *)(param_1 + 8) = uVar9;
        iVar12 = iVar12 + -8;
        *(int *)(param_1 + 0x10) = iVar12;
        *(long *)(param_1 + 0x20) = lVar15;
        *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
        uVar16 = uVar16 + 8;
      } while (uVar16 < bVar2);
    }
    else {
      uVar9 = *puVar1;
    }
    uVar16 = *(uint *)(&_kBrotliBitMask + (ulong)(uint)bVar2 * 4);
    *(uint *)(param_1 + 0x10) = iVar12 + (uint)bVar2;
    *(uint *)(param_1 + 0x118) = ((uint)(uVar9 >> ((byte)iVar12 & 0x3f)) & uVar16) + (uint)uVar3;
    *(undefined4 *)(param_1 + 0x294) = 0;
    if (local_34 == 0) {
      local_34 = *(uint *)(param_1 + 0x138);
    }
    else if (local_34 == 1) {
      local_34 = *(int *)(param_1 + 0x13c) + 1;
    }
    else {
      local_34 = local_34 - 2;
    }
    uVar16 = 0;
    if (uVar4 <= local_34) {
      uVar16 = uVar4;
    }
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x13c) = local_34 - uVar16;
    lVar10 = (ulong)((local_34 - uVar16) * 4) + *(long *)(param_1 + 0x150);
    *(long *)(param_1 + 0xa0) = lVar10;
    *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(*(int *)(param_1 + 0x104) + lVar10);
    uVar11 = 1;
  }
  return uVar11;
}

