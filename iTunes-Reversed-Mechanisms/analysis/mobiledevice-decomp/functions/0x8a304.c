// rea decompile_all
// name: _DecodeCommandBlockSwitch
// address: 0x8a304
// body: available
// range: 0x8a304-0x8a4de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _DecodeCommandBlockSwitch(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x120);
  if (1 < uVar3) {
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar7 = *(ulong *)(param_1 + 8);
    if (0x2f < uVar5) {
      *(ulong *)(param_1 + 8) = uVar7 >> 0x30;
      uVar5 = uVar5 ^ 0x30;
      *(uint *)(param_1 + 0x10) = uVar5;
      uVar7 = uVar7 >> 0x30 | **(long **)(param_1 + 0x18) << 0x10;
      *(ulong *)(param_1 + 8) = uVar7;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -6;
      *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
    }
    uVar9 = uVar7 >> ((byte)uVar5 & 0x3f);
    pbVar8 = (byte *)(*(long *)(param_1 + 0xf0) + 0x9e0 + (uVar9 & 0xff) * 4);
    bVar4 = *pbVar8;
    if (8 < bVar4) {
      uVar5 = uVar5 + 8;
      pbVar8 = pbVar8 + (ulong)(((uint)(uVar9 >> 8) & 0xffffff &
                                *(uint *)(&_kBrotliBitMask + (ulong)(bVar4 - 8) * 4)) +
                               (uint)*(ushort *)(pbVar8 + 2)) * 4;
      bVar4 = *pbVar8;
    }
    uVar5 = bVar4 + uVar5;
    uVar1 = *(ushort *)(pbVar8 + 2);
    if (0x2f < uVar5) {
      *(ulong *)(param_1 + 8) = uVar7 >> 0x30;
      uVar7 = uVar7 >> 0x30 | **(long **)(param_1 + 0x18) << 0x10;
      *(ulong *)(param_1 + 8) = uVar7;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -6;
      uVar5 = uVar5 ^ 0x30;
      *(long *)(param_1 + 0x18) = (long)*(long **)(param_1 + 0x18) + 6;
    }
    uVar9 = uVar7 >> ((byte)uVar5 & 0x3f);
    pbVar8 = (byte *)(*(long *)(param_1 + 0xf8) + 0x630 + (uVar9 & 0xff) * 4);
    uVar6 = (uint)*pbVar8;
    if (8 < uVar6) {
      uVar5 = uVar5 + 8;
      pbVar8 = pbVar8 + (ulong)(((uint)(uVar9 >> 8) & 0xffffff &
                                *(uint *)(&_kBrotliBitMask + (ulong)(*pbVar8 - 8) * 4)) +
                               (uint)*(ushort *)(pbVar8 + 2)) * 4;
      uVar6 = (uint)*pbVar8;
    }
    uVar6 = uVar6 + uVar5;
    bVar4 = (&DAT_002b5682)[(ulong)*(ushort *)(pbVar8 + 2) * 4];
    uVar2 = *(ushort *)(&__kBrotliPrefixCodeRanges + (ulong)*(ushort *)(pbVar8 + 2) * 4);
    if (0x1f < uVar6) {
      uVar6 = uVar6 ^ 0x20;
      *(uint *)(param_1 + 0x10) = uVar6;
      uVar7 = uVar7 >> 0x20 | (ulong)**(uint **)(param_1 + 0x18) << 0x20;
      *(ulong *)(param_1 + 8) = uVar7;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -4;
      *(uint **)(param_1 + 0x18) = *(uint **)(param_1 + 0x18) + 1;
    }
    uVar5 = *(uint *)(&_kBrotliBitMask + (ulong)(uint)bVar4 * 4);
    *(uint *)(param_1 + 0x10) = uVar6 + bVar4;
    *(uint *)(param_1 + 0x114) = ((uint)(uVar7 >> ((byte)uVar6 & 0x3f)) & uVar5) + (uint)uVar2;
    if (uVar1 == 0) {
      uVar5 = *(uint *)(param_1 + 0x130);
    }
    else if (uVar1 == 1) {
      uVar5 = *(int *)(param_1 + 0x134) + 1;
    }
    else {
      uVar5 = uVar1 - 2;
    }
    uVar6 = 0;
    if (uVar3 <= uVar5) {
      uVar6 = uVar3;
    }
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x134);
    *(uint *)(param_1 + 0x134) = uVar5 - uVar6;
    *(undefined8 *)(param_1 + 0x88) =
         *(undefined8 *)(*(long *)(param_1 + 0xc0) + (ulong)(uVar5 - uVar6) * 8);
  }
  return;
}

