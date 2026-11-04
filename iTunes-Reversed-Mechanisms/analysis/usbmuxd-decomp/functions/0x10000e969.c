// rea decompile_all
// name: FUN_10000e969
// address: 0x10000e969
// body: available
// range: 0x10000e969-0x10000e9e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10000e969(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = _CFArrayGetCount();
  if (0 < lVar2) {
    lVar2 = 0;
    do {
      lVar3 = _CFArrayGetValueAtIndex(param_1,lVar2);
      if (lVar3 == 0) {
        return 0;
      }
      lVar4 = _CFDictionaryGetValue(lVar3,&cf_WiFiMACAddress);
      if ((lVar4 != 0) && (cVar1 = _CFEqual(param_2,lVar4), cVar1 != '\0')) {
        return lVar3;
      }
      lVar2 = lVar2 + 1;
      lVar3 = _CFArrayGetCount(param_1);
    } while (lVar2 < lVar3);
  }
  return 0;
}

