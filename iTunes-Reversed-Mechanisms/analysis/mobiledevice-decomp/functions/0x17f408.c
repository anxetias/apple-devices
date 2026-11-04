// rea decompile_all
// name: _uarpPlatformAssetFindByAssetContext
// address: 0x17f408
// body: available
// range: 0x17f408-0x17f472 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _uarpPlatformAssetFindByAssetContext(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 != 0 && param_1 != 0) &&
     (lVar3 = *(long *)(param_1 + 0x238), lVar2 = lVar3, lVar3 != 0)) {
    while ((*(int *)(lVar2 + 0x130) != 1 || (*(long *)(lVar2 + 0x2c0) != param_2))) {
      plVar1 = (long *)(lVar2 + 0x2c8);
      lVar2 = *plVar1;
      if (*plVar1 == 0) {
        for (; (lVar2 = 0, lVar3 != 0 &&
               ((*(int *)(lVar3 + 0x130) != 0 ||
                (lVar2 = lVar3, *(long *)(lVar3 + 0x2c0) != param_2))));
            lVar3 = *(long *)(lVar3 + 0x2c8)) {
        }
        return lVar2;
      }
    }
    return lVar2;
  }
  return 0;
}

