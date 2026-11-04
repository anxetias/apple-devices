// rea decompile_all
// name: SERestoreInfo::getValueFromCFDict
// address: 0x25a198
// body: available
// range: 0x25a198-0x25a1e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::getValueFromCFDict(__CFDictionary const*, __CFString const*, unsigned long, void*,
   unsigned int) [clone .cold.1] */

void SERestoreInfo::getValueFromCFDict
               (__CFDictionary *param_1,__CFString *param_2,ulong param_3,void *param_4,uint param_5
               )

{
  uchar *puVar1;
  long lVar2;
  
  puVar1 = (uchar *)_CFDataGetBytePtr(*(undefined8 *)param_1);
  lVar2 = _CFDataGetLength(*(undefined8 *)param_1);
  if (lVar2 <= (long)param_2) {
    std::vector<unsigned_char,std::allocator<unsigned_char>>::
    __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)param_3,puVar1,puVar1 + lVar2,
               lVar2);
  }
  return;
}

