// rea decompile_all
// name: _apBoardForAceBoard
// address: 0x19dc0a
// body: available
// range: 0x19dc0a-0x19dc5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _apBoardForAceBoard(ulong param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  
  if (param_1 == 0x5603100) {
    puVar2 = &_apBoardForAceBoard_lookup;
    bVar5 = false;
  }
  else {
    uVar3 = 0xffffffffffffffff;
    puVar4 = &_apBoardForAceBoard_lookup;
    do {
      if (uVar3 == 6) goto LAB_0019dc54;
      puVar2 = puVar4 + 0x10;
      uVar3 = uVar3 + 1;
      puVar1 = (ulong *)(puVar4 + 0x10);
      puVar4 = puVar2;
    } while (*puVar1 != param_1);
    bVar5 = 6 < uVar3;
  }
  if (bVar5) {
LAB_0019dc54:
    uVar3 = param_1 >> 0x18 & 0xff;
  }
  else {
    uVar3 = (ulong)*(uint *)(puVar2 + 8);
  }
  return uVar3;
}

