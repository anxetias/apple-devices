// rea decompile_all
// name: FUN_100012191
// address: 0x100012191
// body: available
// range: 0x100012191-0x10001224a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100012191(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_100022be8 != 0) && (*(long *)(DAT_100022be8 + 0x20) != 0)) &&
     (lVar2 = _CFArrayGetCount(), 0 < lVar2)) {
    lVar2 = 0;
    while (lVar3 = _CFArrayGetValueAtIndex(*(undefined8 *)(DAT_100022be8 + 0x20),lVar2), lVar3 != 0)
    {
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFDictionaryGetTypeID();
      if (lVar4 != lVar5) {
        return 0;
      }
      lVar4 = _CFDictionaryGetValue(lVar3,&cf_FullEscapedServiceName);
      if (lVar4 == 0) {
        return 0;
      }
      cVar1 = _CFEqual(lVar4,param_1);
      if (cVar1 != '\0') {
        return lVar3;
      }
      lVar2 = lVar2 + 1;
      lVar3 = _CFArrayGetCount(*(undefined8 *)(DAT_100022be8 + 0x20));
      if (lVar3 <= lVar2) {
        return 0;
      }
    }
  }
  return 0;
}

