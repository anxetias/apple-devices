// rea decompile_all
// name: _EmitUncompressedMetaBlock
// address: 0x1c5720
// body: available
// range: 0x1c5720-0x1c57a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _EmitUncompressedMetaBlock
               (void *param_1,long param_2,ulong param_3,ulong *param_4,long param_5)

{
  byte *pbVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  
  sVar3 = param_2 - (long)param_1;
  pbVar1 = (byte *)(param_5 + (param_3 >> 3));
  *pbVar1 = *pbVar1 & ~(-1 << ((byte)param_3 & 7));
  *param_4 = param_3;
  _BrotliStoreMetaBlockHeader(sVar3,1,param_4,param_5);
  uVar2 = (int)*param_4 + 7;
  *param_4 = (ulong)(uVar2 & 0xfffffff8);
  _memcpy((void *)((ulong)(uVar2 >> 3) + param_5),param_1,sVar3);
  uVar4 = sVar3 * 8 + *param_4;
  *param_4 = uVar4;
  *(undefined1 *)(param_5 + (uVar4 >> 3)) = 0;
  return;
}

