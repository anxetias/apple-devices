// rea decompile_all
// name: _ccn_trailing_zeros
// address: 0x262cd
// body: available
// range: 0x262cd-0x26329 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ccn_trailing_zeros(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar5 = param_1 - 1;
    lVar6 = param_1 << 6;
    uVar4 = 0;
    do {
      lVar6 = lVar6 + -0x40;
      uVar3 = *(ulong *)(param_2 + uVar5 * 8);
      uVar2 = uVar3 | 0x8000000000000000;
      lVar1 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
        }
      }
      uVar3 = (ulong)(uVar3 != 0);
      uVar4 = uVar3 - 1 & uVar4 | lVar1 + lVar6 & -uVar3;
      uVar5 = uVar5 - 1;
    } while (uVar5 < param_1);
  }
  return uVar4;
}

