// rea decompile_all
// name: _restore_message_is_final
// address: 0xd2aab
// body: available
// range: 0xd2aab-0xd2ae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _restore_message_is_final(__CFDictionary const*) */

bool _restore_message_is_final(__CFDictionary *param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  
  if (param_1 != (__CFDictionary *)0x0) {
    lVar2 = _CFDictionaryGetValue(param_1,&cf_MsgType);
    if (lVar2 == 0) {
      bVar3 = false;
    }
    else {
      cVar1 = _CFEqual(lVar2,&cf_StatusMsg);
      bVar3 = cVar1 != '\0';
    }
    return bVar3;
  }
  return true;
}

