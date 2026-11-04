// rea decompile_all
// name: _AMRLazyExtractorOpenArchive
// address: 0x26f60f
// body: available
// range: 0x26f60f-0x26f69e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _AMRLazyExtractorOpenArchive(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar4 = _archiveSchemes;
  if (param_1 != 0) {
    uVar2 = _CFDictionaryGetValue(param_1,&cf___ArchiveScheme__);
    puVar3 = (undefined8 *)_getSchemeCallbacks(uVar4,uVar2);
    if (puVar3 != (undefined8 *)0x0) {
      pcVar1 = (code *)*puVar3;
      uVar4 = _CFDictionaryGetValue(param_1,&cf___ArchiveArgs__);
      lVar5 = (*pcVar1)(uVar4);
      if (lVar5 != 0) {
        puVar6 = _calloc(1,0x20);
        uVar4 = _CFRetain(param_1);
        *puVar6 = uVar4;
        puVar6[1] = lVar5;
        puVar6[2] = puVar3;
        *(undefined1 *)(puVar6 + 3) = 0;
        return puVar6;
      }
    }
  }
  return (undefined8 *)0x0;
}

