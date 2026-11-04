// rea decompile_all
// name: _GetDictionaryUIntValue
// address: 0xc46f4
// body: available
// range: 0xc46f4-0xc4757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GetDictionaryUIntValue(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  ulong in_RAX;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong local_28;
  
  local_28 = in_RAX;
  lVar2 = _CFDictionaryGetValue();
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFNumberGetTypeID();
    if (((lVar3 == lVar4) && (cVar1 = _CFNumberGetValue(lVar2,4,&local_28), cVar1 != '\0')) &&
       (local_28 >> 0x20 == 0)) {
      *param_3 = (int)local_28;
      return 1;
    }
  }
  return 0;
}

