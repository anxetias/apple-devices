// rea decompile_all
// name: _lzx_huffman_create_pre_tree
// address: 0x1d1716
// body: available
// range: 0x1d1716-0x1d17ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzx_huffman_create_pre_tree(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  ushort *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  
  ___bzero(param_1,0x201f0);
  *(undefined8 *)(param_1 + 0x201f0) = 0x14;
  uVar5 = 0;
  do {
    iVar9 = *(int *)(param_2 + 3);
    if (iVar9 < 0x31) {
      iVar6 = 0x30 - iVar9;
      iVar7 = iVar9;
      puVar4 = (ushort *)*param_2;
      do {
        puVar8 = puVar4 + 1;
        if ((ushort *)param_2[1] < puVar8) {
          iVar9 = iVar7;
          if (iVar7 < 4) {
            return 0xffffffff;
          }
          break;
        }
        uVar1 = *puVar4;
        *param_2 = puVar8;
        iVar9 = iVar7 + 0x10;
        *(int *)(param_2 + 3) = iVar9;
        param_2[2] = param_2[2] | (ulong)uVar1 << ((byte)iVar6 & 0x3f);
        iVar6 = iVar6 + -0x10;
        bVar3 = iVar7 < 0x21;
        iVar7 = iVar9;
        puVar4 = puVar8;
      } while (bVar3);
    }
    lVar2 = param_2[2];
    param_2[2] = lVar2 << 4;
    *(int *)(param_2 + 3) = iVar9 + -4;
    *(byte *)(param_1 + uVar5) = (byte)((ulong)lVar2 >> 0x3c);
    uVar5 = uVar5 + 1;
    if (*(ulong *)(param_1 + 0x201f0) <= uVar5) {
      _lzx_huffman_tree_compute_lookup_from_code_len(param_1);
      return 0;
    }
  } while( true );
}

