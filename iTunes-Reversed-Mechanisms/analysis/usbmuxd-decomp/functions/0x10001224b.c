// rea decompile_all
// name: FUN_10001224b
// address: 0x10001224b
// body: available
// range: 0x10001224b-0x1000122fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001224b(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0x20));
  if (0 < lVar4) {
    lVar4 = 0;
    while (lVar5 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_1 + 0x20),lVar4), lVar5 != 0) {
      lVar1 = _CFGetTypeID(lVar5);
      lVar2 = _CFDictionaryGetTypeID();
      if (lVar1 != lVar2) {
        return;
      }
      lVar5 = _CFDictionaryGetValue(lVar5,&cf_FullEscapedServiceName);
      if (lVar5 == 0) {
        return;
      }
      cVar3 = _CFEqual(lVar5,param_2);
      if (cVar3 != '\0') {
        FUN_100011261(param_2,param_3);
        _CFArrayRemoveValueAtIndex(*(undefined8 *)(param_1 + 0x20),lVar4);
      }
      lVar4 = lVar4 + 1;
      lVar5 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0x20));
      if (lVar5 <= lVar4) {
        return;
      }
    }
  }
  return;
}

