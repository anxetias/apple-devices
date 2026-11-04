// rea decompile_all
// name: _releaseMemoryRegions
// address: 0x266582
// body: available
// range: 0x266582-0x2665f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _releaseMemoryRegions(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
     (puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x48), puVar2 != (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)*puVar2;
    while (puVar2 != (undefined8 *)0x0) {
      pvVar4 = (void *)puVar2[3];
      puVar3 = (undefined8 *)puVar2[5];
      if (pvVar4 != (void *)0x0) {
        plVar1 = puVar2 + 3;
        do {
          _free(pvVar4);
          pvVar4 = *(void **)(*plVar1 + 0x18);
          *plVar1 = (long)pvVar4;
        } while (pvVar4 != (void *)0x0);
        puVar2[4] = plVar1;
      }
      _free((void *)*puVar2);
      _free(puVar2);
      puVar2 = puVar3;
    }
  }
  return;
}

