// rea decompile_all
// name: _StoreCompressedMetaBlockHeader
// address: 0x9264b
// body: available
// range: 0x9264b-0x92791 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _StoreCompressedMetaBlockHeader(int param_1,long param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar1 = *param_3;
  *(ulong *)(param_4 + (uVar1 >> 3)) =
       (long)param_1 << ((byte)uVar1 & 7) | (ulong)*(byte *)(param_4 + (uVar1 >> 3));
  uVar3 = uVar1 + 1;
  *param_3 = uVar3;
  if (param_1 == 0) {
    if ((param_2 == 1) || (uVar4 = (int)param_2 - 1, uVar4 < 0x8000)) {
      uVar5 = 4;
    }
    else {
      uVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar2 == 0; uVar2 = uVar2 - 1) {
        }
      }
      uVar5 = (ulong)((uVar2 ^ 0xffffffe0) + 0x24 >> 2);
    }
    *(ulong *)(param_4 + (uVar3 >> 3)) =
         uVar5 - 4 << ((byte)uVar3 & 7) | (ulong)*(byte *)(param_4 + (uVar3 >> 3));
    uVar3 = uVar1 + 3;
    *param_3 = uVar3;
    *(ulong *)(param_4 + (uVar3 >> 3)) =
         param_2 + -1 << ((byte)uVar3 & 7) | (ulong)*(byte *)(param_4 + (uVar3 >> 3));
    uVar3 = uVar1 + uVar5 * 4 + 3;
    *param_3 = uVar3;
    uVar3 = uVar3 >> 3;
    *(ulong *)(param_4 + uVar3) = (ulong)*(byte *)(param_4 + uVar3);
  }
  else {
    *(ulong *)(param_4 + (uVar3 >> 3)) = (ulong)*(byte *)(param_4 + (uVar3 >> 3));
    uVar3 = uVar1 + 2;
    *param_3 = uVar3;
    if ((param_2 == 1) || (uVar4 = (int)param_2 - 1, uVar4 < 0x8000)) {
      uVar5 = 4;
    }
    else {
      uVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar2 == 0; uVar2 = uVar2 - 1) {
        }
      }
      uVar5 = (ulong)((uVar2 ^ 0xffffffe0) + 0x24 >> 2);
    }
    *(ulong *)(param_4 + (uVar3 >> 3)) =
         uVar5 - 4 << ((byte)uVar3 & 7) | (ulong)*(byte *)(param_4 + (uVar3 >> 3));
    uVar3 = uVar1 + 4;
    *param_3 = uVar3;
    *(ulong *)(param_4 + (uVar3 >> 3)) =
         param_2 + -1 << ((byte)uVar3 & 7) | (ulong)*(byte *)(param_4 + (uVar3 >> 3));
  }
  *param_3 = uVar1 + uVar5 * 4 + 4;
  return;
}

