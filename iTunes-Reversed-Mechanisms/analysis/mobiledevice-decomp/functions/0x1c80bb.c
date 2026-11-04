// rea decompile_all
// name: _ComputeShortestPathFromNodes
// address: 0x1c80bb
// body: available
// range: 0x1c80bb-0x1c813a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _ComputeShortestPathFromNodes(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 8 + param_1 * 0x10);
  for (piVar1 = (int *)(param_2 + param_1 * 0x10); ((uVar3 & 0x7ffffff) == 0 && (*piVar1 == 1));
      piVar1 = piVar1 + -4) {
    param_1 = param_1 + -1;
    uVar3 = piVar1[-2];
  }
  piVar1[3] = -1;
  lVar2 = 0;
  while (param_1 != 0) {
    uVar3 = (*(uint *)(param_2 + 8 + param_1 * 0x10) & 0x7ffffff) +
            (*(uint *)(param_2 + param_1 * 0x10) & 0x1ffffff);
    param_1 = param_1 - (ulong)uVar3;
    *(uint *)(param_2 + 0xc + param_1 * 0x10) = uVar3;
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}

