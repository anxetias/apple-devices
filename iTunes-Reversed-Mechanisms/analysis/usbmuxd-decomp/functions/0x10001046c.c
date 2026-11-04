// rea decompile_all
// name: FUN_10001046c
// address: 0x10001046c
// body: available
// range: 0x10001046c-0x1000104c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10001046c(void)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_R14;
  ulong uVar3;
  
  lVar1 = __CFCopySystemVersionDictionary();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = _CFDictionaryGetValue
                      (lVar1,*(undefined8 *)PTR___kCFSystemVersionProductVersionKey_10001c008);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = _CFStringCompare(lVar2,&cf_10_12_4,0x40);
      uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8),-1 < lVar2);
    }
    _CFRelease(lVar1);
  }
  return uVar3 & 0xffffffff;
}

