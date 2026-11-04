// rea decompile_all
// name: _fRestoreUARPHardwareFusingTypeResponse
// address: 0x17c275
// body: available
// range: 0x17c275-0x17c302 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fRestoreUARPHardwareFusingTypeResponse
               (long param_1,undefined8 param_2,void *param_3,uint param_4)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    _image3Free(*(undefined8 *)(param_1 + 0x800));
    *(undefined8 *)(param_1 + 0x800) = 0;
    if (param_4 != 0 && param_3 != (void *)0x0) {
      pvVar1 = (void *)_uarpZalloc(param_4 + 1);
      *(void **)(param_1 + 0x800) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        return;
      }
      _memcpy(pvVar1,param_3,(ulong)param_4);
    }
    if (*(code **)(param_1 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0017c2f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x50))(*(undefined8 *)(param_1 + 0x798),2);
      return;
    }
  }
  return;
}

