// rea decompile_all
// name: _StoreVarLenUint8
// address: 0x20fc12
// body: available
// range: 0x20fc12-0x20fcb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _StoreVarLenUint8(long param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 == 0) {
    uVar5 = *param_2;
    uVar4 = uVar5 >> 3;
    *(ulong *)(param_3 + uVar4) = (ulong)*(byte *)(param_3 + uVar4);
    uVar5 = uVar5 + 1;
  }
  else {
    uVar3 = 0x1f;
    if ((uint)param_1 != 0) {
      for (; (uint)param_1 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar2 = *param_2;
    uVar4 = uVar2 + 1;
    uVar1 = uVar2 + 4;
    uVar5 = uVar2 + uVar3 + 4;
    *(ulong *)(param_3 + (uVar2 >> 3)) =
         (ulong)*(byte *)(param_3 + (uVar2 >> 3)) | 1L << ((byte)uVar2 & 7);
    *param_2 = uVar4;
    *(ulong *)(param_3 + (uVar4 >> 3)) =
         (ulong)uVar3 << ((byte)uVar4 & 7) | (ulong)*(byte *)(param_3 + (uVar4 >> 3));
    *param_2 = uVar1;
    *(ulong *)(param_3 + (uVar1 >> 3)) =
         (-1L << ((byte)uVar3 & 0x3f)) + param_1 << ((byte)uVar1 & 7) |
         (ulong)*(byte *)(param_3 + (uVar1 >> 3));
  }
  *param_2 = uVar5;
  return;
}

