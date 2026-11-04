// rea decompile_all
// name: _UARPLayer2PayloadMetaDataComplete
// address: 0x1821f2
// body: available
// range: 0x1821f2-0x18227f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _UARPLayer2PayloadMetaDataComplete(long param_1,long param_2)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_2 + 0x21c) != 0) {
    if (*(code **)(param_1 + 0x178) != (code *)0x0) {
      (**(code **)(param_1 + 0x178))
                (*(int *)(param_2 + 0x21c),*(undefined8 *)(param_2 + 0x220),
                 *(undefined8 *)(param_2 + 0x230),*(undefined4 *)(param_2 + 0x238));
    }
    cVar1 = _uarpPlatformCompareHash
                      (param_1,*(undefined8 *)(param_2 + 0x230),*(undefined4 *)(param_2 + 0x238),
                       *(undefined8 *)(param_2 + 0x240),*(undefined4 *)(param_2 + 0x248));
    if (cVar1 == '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 200);
      goto LAB_00182262;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x80);
LAB_00182262:
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00182279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_2 + 0x2c0));
    return;
  }
  return;
}

