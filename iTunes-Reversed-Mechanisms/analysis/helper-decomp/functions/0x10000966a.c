// rea decompile_all
// name: MSFileManager::defaultManager
// address: 0x10000966a
// body: available
// range: 0x10000966a-0x10000969f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID MSFileManager::defaultManager(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  if (DAT_1000166b8 != 0) {
    return DAT_1000166b8;
  }
  uVar1 = _objc_alloc(&objc::class_t::MSFileManager);
  DAT_1000166b8 = (*(code *)PTR__objc_msgSend_100012170)(uVar1,"init");
  return DAT_1000166b8;
}

