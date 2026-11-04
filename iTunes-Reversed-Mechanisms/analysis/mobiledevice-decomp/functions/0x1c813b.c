// rea decompile_all
// name: _BrotliCreateZopfliBackwardReferences
// address: 0x1c813b
// body: available
// range: 0x1c813b-0x1c8263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1c825f to 0x207e0e _BrotliFree (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCreateZopfliBackwardReferences
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,long *param_12,undefined8 param_13)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = param_2 + 1;
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      return;
    }
    lVar1 = 0;
  }
  else {
    lVar1 = _BrotliAllocate(param_1,lVar3 * 0x10);
    if (*(int *)(param_1 + 0x18) != 0) {
      return;
    }
    puVar2 = (undefined4 *)(lVar1 + 0xc);
    do {
      puVar2[-3] = 1;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0x7effc99e;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar3 = _BrotliZopfliComputeShortestPath
                    (param_1,param_2,param_3,param_4,param_5,param_8,param_7,param_9,param_8,lVar1);
  *param_12 = *param_12 + lVar3;
  if (*(int *)(param_1 + 0x18) != 0) {
    return;
  }
  _BrotliZopfliCreateCommands(param_2,param_3,lVar1,param_9,param_10,param_7,param_11,param_13);
  _BrotliFree(param_1,lVar1);
  return;
}

