// rea decompile_all
// name: FUN_0019dc6b
// address: 0x19dc6b
// body: available
// range: 0x19dc6b-0x19dca9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_0019dc6b(ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = &DAT_00330f30;
  uVar3 = 0;
  do {
    uVar4 = uVar3;
    if (uVar4 == 3) break;
    uVar1 = *puVar2;
    puVar2 = puVar2 + 2;
    uVar3 = uVar4 + 1;
  } while (uVar1 != param_1);
  uVar3 = 0x6021;
  if (2 < uVar4) {
    uVar3 = param_1 >> 8 & 0xffff;
  }
  return uVar3;
}

