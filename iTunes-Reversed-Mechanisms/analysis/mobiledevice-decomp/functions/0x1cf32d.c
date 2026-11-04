// rea decompile_all
// name: _UpdateLastProcessedPos
// address: 0x1cf32d
// body: available
// range: 0x1cf32d-0x1cf39c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _UpdateLastProcessedPos(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x928);
  if (2 < uVar2 >> 0x1e) {
    uVar2 = (ulong)(((uint)uVar2 & 0x3fffffff) + ((int)((uint)uVar2 * 2) >> 1 & 0xc0000000U) +
                   0x80000000);
  }
  uVar1 = *(ulong *)(param_1 + 0x8c8);
  uVar3 = (uint)uVar1;
  if (0xbfffffff < uVar1) {
    uVar3 = ((int)(uVar3 * 2) >> 1 & 0xc0000000U) + (uVar3 & 0x3fffffff) + 0x80000000;
  }
  *(ulong *)(param_1 + 0x928) = uVar1;
  return uVar3 < (uint)uVar2;
}

