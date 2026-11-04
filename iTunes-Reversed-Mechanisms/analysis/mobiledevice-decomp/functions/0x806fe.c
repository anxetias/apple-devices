// rea decompile_all
// name: _BrotliHistogramBitCostDistanceCommand
// address: 0x806fe
// body: available
// range: 0x806fe-0x8078a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double _BrotliHistogramBitCostDistanceCommand(void *param_1,long param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  double dVar3;
  int local_b28 [704];
  long local_28;
  
  if (*(long *)((long)param_1 + 0xb00) != 0) {
    _memcpy(local_b28,param_1,0xb10);
    local_28 = local_28 + *(long *)(param_2 + 0xb00);
    lVar2 = 0;
    do {
      auVar1 = *(undefined1 (*) [16])(param_2 + lVar2 * 4);
      local_b28[lVar2] = local_b28[lVar2] + auVar1._0_4_;
      local_b28[lVar2 + 1] = local_b28[lVar2 + 1] + auVar1._4_4_;
      local_b28[lVar2 + 2] = local_b28[lVar2 + 2] + auVar1._8_4_;
      local_b28[lVar2 + 3] = local_b28[lVar2 + 3] + auVar1._12_4_;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x2c0);
    dVar3 = (double)_BrotliPopulationCostCommand(local_b28);
    return dVar3 - *(double *)(param_2 + 0xb08);
  }
  return 0.0;
}

