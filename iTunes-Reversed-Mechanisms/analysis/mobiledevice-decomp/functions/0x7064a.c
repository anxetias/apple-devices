// rea decompile_all
// name: _MapStaticContexts
// address: 0x7064a
// body: available
// range: 0x7064a-0x706cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _MapStaticContexts(long param_1,int param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_4 << 6;
  param_4[0x13] = lVar2;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = _BrotliAllocate(param_1,*param_4 << 8);
  }
  param_4[0x12] = lVar2;
  if ((*(int *)(param_1 + 0x18) == 0) && (lVar1 = *param_4, lVar1 != 0)) {
    lVar3 = 0;
    do {
      lVar4 = 0;
      do {
        *(int *)(lVar2 + lVar4 * 4) = *(int *)(param_3 + lVar4 * 4) + (int)lVar3 * param_2;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x40);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x100;
    } while (lVar3 != lVar1);
  }
  return;
}

