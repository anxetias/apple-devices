// rea decompile_all
// name: _lzx_huffman_tree_read_code
// address: 0x1d133f
// body: available
// range: 0x1d133f-0x1d1422 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzx_huffman_tree_read_code(ushort *param_1,undefined8 *param_2,long param_3)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  ulong uVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_2 + 3);
  if (iVar10 < 0x31) {
    iVar6 = 0x30 - iVar10;
    iVar4 = iVar10;
    puVar3 = (ushort *)*param_2;
    do {
      puVar8 = puVar3 + 1;
      iVar10 = iVar4;
      if ((ushort *)param_2[1] < puVar8) break;
      uVar1 = *puVar3;
      *param_2 = puVar8;
      iVar10 = iVar4 + 0x10;
      *(int *)(param_2 + 3) = iVar10;
      param_2[2] = param_2[2] | (ulong)uVar1 << ((byte)iVar6 & 0x3f);
      iVar6 = iVar6 + -0x10;
      bVar2 = iVar4 < 0x21;
      iVar4 = iVar10;
      puVar3 = puVar8;
    } while (bVar2);
  }
  uVar9 = param_2[2];
  uVar1 = *(ushort *)(param_3 + 0x1f0 + (uVar9 >> 0x30) * 2);
  *param_1 = uVar1 >> 5;
  uVar5 = 0xffffffff;
  if (((ulong)(uVar1 >> 5) < *(ulong *)(param_3 + 0x201f0)) &&
     (uVar7 = uVar1 & 0x1f, (uVar1 & 0x1f) != 0)) {
    if (iVar10 < 0x31) {
      iVar6 = 0x30 - iVar10;
      puVar3 = (ushort *)*param_2;
      iVar4 = iVar10;
      do {
        puVar8 = puVar3 + 1;
        iVar10 = iVar4;
        if ((ushort *)param_2[1] < puVar8) break;
        uVar1 = *puVar3;
        *param_2 = puVar8;
        iVar10 = iVar4 + 0x10;
        *(int *)(param_2 + 3) = iVar10;
        uVar9 = uVar9 | (ulong)uVar1 << ((byte)iVar6 & 0x3f);
        param_2[2] = uVar9;
        iVar6 = iVar6 + -0x10;
        bVar2 = iVar4 < 0x21;
        puVar3 = puVar8;
        iVar4 = iVar10;
      } while (bVar2);
    }
    if ((int)uVar7 <= iVar10) {
      param_2[2] = uVar9 << (sbyte)uVar7;
      *(uint *)(param_2 + 3) = iVar10 - uVar7;
      uVar5 = 0;
    }
  }
  return uVar5;
}

