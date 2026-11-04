// rea decompile_all
// name: _ccn_bitlen_public_value
// address: 0x1bfc0
// body: available
// range: 0x1bfc0-0x1c01a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ccn_bitlen_public_value(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0x40;
    uVar4 = 0;
    lVar6 = 0;
    do {
      uVar3 = *(ulong *)(param_2 + lVar6 * 8);
      uVar2 = uVar3 | 1;
      uVar1 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      uVar3 = (ulong)(uVar3 != 0);
      lVar6 = lVar6 + 1;
      uVar4 = uVar3 - 1 & uVar4 | lVar5 - (uVar1 ^ 0x3f) & -uVar3;
      lVar5 = lVar5 + 0x40;
    } while (param_1 != lVar6);
  }
  return uVar4;
}

