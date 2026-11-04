// rea decompile_all
// name: _AMRLazyArchiveOpenFile
// address: 0x26f87f
// body: available
// range: 0x26f87f-0x26fa00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * _AMRLazyArchiveOpenFile(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long local_38;
  
  if ((*(char *)(param_1 + 0x18) == '\0') &&
     (lVar3 = __AMRLazyFileGetDictForPath(), uVar8 = _fileSchemes, lVar3 != 0)) {
    uVar4 = _CFDictionaryGetValue(lVar3,&cf___FileScheme__);
    puVar5 = (undefined8 *)_getSchemeCallbacks(uVar8,uVar4);
    if (puVar5 != (undefined8 *)0x0) {
      if (((param_3 & 1) != 0) && (puVar5[3] == 0)) {
        cVar2 = _AMRLazyArchiveExtractToPath(param_1,param_2);
        if (cVar2 == '\0') {
          return (long *)0x0;
        }
        lVar3 = __AMRLazyFileGetDictForPath(param_1,param_2);
        uVar8 = _fileSchemes;
        if (lVar3 == 0) {
          return (long *)0x0;
        }
        uVar4 = _CFDictionaryGetValue(lVar3,&cf___FileScheme__);
        puVar5 = (undefined8 *)_getSchemeCallbacks(uVar8,uVar4);
        if (puVar5 == (undefined8 *)0x0) {
          return (long *)0x0;
        }
        if (puVar5[3] == 0) {
          return (long *)0x0;
        }
      }
      pcVar1 = (code *)*puVar5;
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar4 = _CFDictionaryGetValue(lVar3,&cf___FileArgs__);
      lVar6 = (*pcVar1)(uVar8,uVar4);
      if (lVar6 != 0) {
        plVar7 = _calloc(1,0x40);
        *plVar7 = param_1;
        plVar7[1] = *(long *)(param_1 + 8);
        plVar7[2] = lVar6;
        plVar7[3] = (long)puVar5;
        uVar8 = _CFDictionaryGetValue(lVar3,&cf___FileSubPath__);
        lVar6 = _CFRetain(uVar8);
        plVar7[4] = lVar6;
        local_38 = 0;
        uVar8 = _CFDictionaryGetValue(lVar3,&cf___FileSize__);
        _CFNumberGetValue(uVar8,4,&local_38);
        plVar7[5] = local_38;
        plVar7[6] = 0;
        *(undefined1 *)(plVar7 + 7) = 0;
        *(undefined1 *)(param_1 + 0x18) = 1;
        return plVar7;
      }
    }
  }
  return (long *)0x0;
}

