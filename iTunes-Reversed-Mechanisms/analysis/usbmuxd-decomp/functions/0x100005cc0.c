// rea decompile_all
// name: FUN_100005cc0
// address: 0x100005cc0
// body: available
// range: 0x100005cc0-0x100005cfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100005cc0(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  
  if ((int)param_2[9] != 0) {
    **(undefined8 **)(param_1 + 0x98) = param_2;
    do {
      plVar1 = param_2;
      param_2 = (long *)*plVar1;
    } while (param_2 != (long *)0x0);
    *(long **)(param_1 + 0x98) = plVar1;
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + param_3;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 100);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_3;
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 2;
  }
  return;
}

