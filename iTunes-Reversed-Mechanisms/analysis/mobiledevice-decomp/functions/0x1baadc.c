// rea decompile_all
// name: _b64encode
// address: 0x1baadc
// body: available
// range: 0x1baadc-0x1bab51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _b64encode(long param_1,uint param_2)

{
  void *pvVar1;
  ulong uVar2;
  
  if (0 < (int)param_2 && param_1 != 0) {
    uVar2 = (ulong)(((param_2 / 3 + 1) - (uint)(param_2 * -0x55555555 < 0x55555556)) * 4 + 1);
    pvVar1 = _malloc(uVar2);
    if (pvVar1 != (void *)0x0) {
      _b64_ntop(param_1,param_2,pvVar1,uVar2);
      return pvVar1;
    }
  }
  return (void *)0x0;
}

