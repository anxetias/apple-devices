// rea decompile_all
// name: _SavageCFDictionarySetInteger32
// address: 0x25b130
// body: available
// range: 0x25b130-0x25b18a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25b186 to 0x25b2b7 _SavageCFDictionarySetInteger32.cold.1 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _SavageCFDictionarySetInteger32(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 local_24 [4];
  
  lVar1 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,3,local_24);
  if (lVar1 != 0) {
    _CFDictionarySetValue(param_1,param_2,lVar1);
    _CFRelease(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _SavageCFDictionarySetInteger32_cold_1();
}

