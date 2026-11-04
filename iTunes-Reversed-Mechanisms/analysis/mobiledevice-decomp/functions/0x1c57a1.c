// rea decompile_all
// name: _BrotliStoreMetaBlockHeader
// address: 0x1c57a1
// body: available
// range: 0x1c57a1-0x1c5859 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliStoreMetaBlockHeader(ulong param_1,uint param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_3;
  *(ulong *)(param_4 + (uVar1 >> 3)) = (ulong)*(byte *)(param_4 + (uVar1 >> 3));
  uVar2 = uVar1 + 1;
  *param_3 = uVar2;
  uVar3 = 4;
  if (0x10000 < param_1) {
    uVar3 = 6 - (ulong)(param_1 < 0x100001);
  }
  *(ulong *)(param_4 + (uVar2 >> 3)) =
       uVar3 - 4 << ((byte)uVar2 & 7) | (ulong)*(byte *)(param_4 + (uVar2 >> 3));
  uVar2 = uVar1 + 3;
  *param_3 = uVar2;
  *(ulong *)(param_4 + (uVar2 >> 3)) =
       param_1 - 1 << ((byte)uVar2 & 7) | (ulong)*(byte *)(param_4 + (uVar2 >> 3));
  uVar2 = uVar1 + (uVar3 & 0xffffffff) * 4 + 3;
  *param_3 = uVar2;
  *(ulong *)(param_4 + (uVar2 >> 3)) =
       (ulong)param_2 << ((byte)uVar2 & 7) | (ulong)*(byte *)(param_4 + (uVar2 >> 3));
  *param_3 = uVar1 + (uVar3 & 0xffffffff) * 4 + 4;
  return;
}

