// rea decompile_all
// name: getCFTypeDescription
// address: 0x25679a
// body: available
// range: 0x25679a-0x256824 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* getCFTypeDescription(void const*) */

void * getCFTypeDescription(void *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long in_RSI;
  char *pcVar4;
  
  if (in_RSI == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (param_1,"null value");
  }
  else {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFErrorGetTypeID();
    if (lVar1 == lVar2) {
      lVar1 = _CFErrorCopyDescription();
    }
    else {
      lVar1 = _CFCopyDescription();
    }
    pcVar3 = (char *)_CFStringGetCStringPtr(lVar1,0x8000100);
    pcVar4 = "null description";
    if (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (param_1,pcVar4);
    if (lVar1 != 0) {
      _CFRelease(lVar1);
    }
  }
  return param_1;
}

