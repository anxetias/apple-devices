// rea decompile_all
// name: ___AFCCopyErrorInfoDescription
// address: 0xbbef2
// body: available
// range: 0xbbef2-0xbbfa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long ___AFCCopyErrorInfoDescription(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 != 0) && (lVar2 = _CFDictionaryGetCount(), lVar2 != 0)) {
    lVar3 = _CFAllocatorAllocate(0,lVar2 << 4,0);
    if (lVar3 == 0) {
      return 0;
    }
    lVar1 = lVar3 + lVar2 * 8;
    _CFDictionaryGetKeysAndValues(param_1,lVar3,lVar1);
    lVar4 = _CFStringCreateMutable(0,0);
    if (0 < lVar2 && lVar4 != 0) {
      lVar5 = 0;
      do {
        _CFStringAppendFormat
                  (lVar4,0,&cf________,*(undefined8 *)(lVar3 + lVar5 * 8),
                   *(undefined8 *)(lVar1 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
    }
    _CFAllocatorDeallocate(0,lVar3);
    return lVar4;
  }
  return 0;
}

