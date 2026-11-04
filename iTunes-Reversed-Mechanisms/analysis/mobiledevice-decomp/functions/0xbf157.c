// rea decompile_all
// name: _MISPropertyListCreateFromFile
// address: 0xbf157
// body: available
// range: 0xbf157-0xbf215 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _MISPropertyListCreateFromFile(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long local_28;
  
  lVar2 = _MISDataCreateFromFile();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    local_28 = 0;
    lVar3 = _CFPropertyListCreateWithData
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar2,0,0,&local_28);
    if (local_28 != 0) {
      if (lVar3 != 0) {
        _CFRelease(lVar3);
      }
      if (_MISGetLog_onceToken != -1) {
        _MISPropertyListCreateFromFile_cold_1();
      }
      puVar4 = _MISGetLog_mis_log;
      if (_MISGetLog_mis_log == (undefined *)0x0) {
        puVar4 = PTR___os_log_default_004412f0;
      }
      cVar1 = _os_log_type_enabled(puVar4,0x10);
      if (cVar1 != '\0') {
        _MISPropertyListCreateFromFile_cold_2(&local_28,puVar4);
      }
      _CFRelease(local_28);
      lVar3 = 0;
    }
    _CFRelease(lVar2);
  }
  return lVar3;
}

