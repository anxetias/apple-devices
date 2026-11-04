// rea decompile_all
// name: _BuildAndStoreEntropyCodesDistance
// address: 0x936ba
// body: available
// range: 0x936ba-0x937a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BuildAndStoreEntropyCodesDistance
               (long param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2 * param_4;
  if (lVar2 == 0) {
    param_2[0x75] = 0;
    lVar2 = 0;
  }
  else {
    lVar1 = _BrotliAllocate(param_1,lVar2);
    param_2[0x75] = lVar1;
    lVar2 = _BrotliAllocate(param_1,lVar2 * 2);
  }
  param_2[0x76] = lVar2;
  if (param_4 != 0 && *(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
    do {
      lVar1 = *param_2 * lVar2;
      _BuildAndStoreHuffmanTree
                (param_3,*param_2,param_5,param_6,param_2[0x75] + lVar1,lVar1 * 2 + param_2[0x76],
                 param_7,param_8);
      lVar2 = lVar2 + 1;
      param_3 = param_3 + 0x890;
    } while (param_4 != lVar2);
  }
  return;
}

