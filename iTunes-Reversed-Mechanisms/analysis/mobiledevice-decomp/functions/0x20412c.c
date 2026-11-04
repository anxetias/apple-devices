// rea decompile_all
// name: _BrotliCalculateRingBufferSize
// address: 0x20412c
// body: available
// range: 0x20412c-0x20418d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCalculateRingBufferSize(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 1 << (*(byte *)(param_1 + 0x29c) & 0x1f);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar2 = 0x400;
  if (iVar3 != 0) {
    iVar2 = iVar3;
  }
  if ((iVar3 != iVar1) && ((*(ushort *)(param_1 + 0x298) & 4) == 0)) {
    if (*(long *)(param_1 + 0x78) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4c);
    }
    iVar3 = iVar3 + *(int *)(param_1 + 0x108);
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    iVar2 = iVar1;
    if ((*(ushort *)(param_1 + 0x298) & 0x10) != 0) {
      do {
        iVar1 = iVar2;
        iVar2 = iVar1 >> 1;
      } while (iVar3 <= iVar1 >> 1);
    }
    *(int *)(param_1 + 0x2a0) = iVar1;
  }
  return;
}

