// rea decompile_all
// name: _acceptArchiveType
// address: 0xdd3c9
// body: available
// range: 0xdd3c9-0xdd412 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _acceptArchiveType(__CFDictionary const*, __CFString const*, __CFDictionary const*, __CFString
   const*) */

undefined8
_acceptArchiveType(__CFDictionary *param_1,__CFString *param_2,__CFDictionary *param_3,
                  __CFString *param_4)

{
  long lVar1;
  
  if ((((param_1 == (__CFDictionary *)0x0) ||
       (lVar1 = _CFDictionaryGetValue(), lVar1 != *(long *)PTR__kCFBooleanTrue_00441110)) &&
      (param_3 != (__CFDictionary *)0x0)) &&
     (lVar1 = _CFDictionaryGetValue(param_3,param_4), lVar1 == *(long *)PTR__kCFBooleanTrue_00441110
     )) {
    return 1;
  }
  return 0;
}

