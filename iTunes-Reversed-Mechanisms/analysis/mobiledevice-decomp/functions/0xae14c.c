// rea decompile_all
// name: _arrayHasOnlyStringsWithoutSpacesOrNewlines
// address: 0xae14c
// body: available
// range: 0xae14c-0xae218 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _arrayHasOnlyStringsWithoutSpacesOrNewlines(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar2 = _CFCharacterSetGetPredefined(3);
  lVar3 = _CFArrayGetCount(param_1);
  if (lVar3 < 1) {
    uVar8 = CONCAT71((int7)((ulong)param_1 >> 8),1);
  }
  else {
    uVar8 = 0;
    lVar9 = 0;
    do {
      uVar4 = _CFArrayGetValueAtIndex(param_1,lVar9);
      lVar5 = _CFGetTypeID(uVar4);
      lVar6 = _CFStringGetTypeID();
      if (lVar5 != lVar6) {
        cVar1 = _verbose();
        if (cVar1 != '\0') {
          _dmlog("arrayHasOnlyStringsWithoutSpacesOrNewlines",0x558,
                 &cf_Founditeminarraythatwasnotastring___,uVar4);
        }
        break;
      }
      uVar7 = _CFStringGetLength(uVar4);
      cVar1 = _CFStringFindCharacterFromSet(uVar4,uVar2,0,uVar7,0,0);
      if (cVar1 == '\x01') break;
      lVar9 = lVar9 + 1;
      uVar8 = (ulong)(lVar3 <= lVar9);
    } while (lVar9 != lVar3);
  }
  return uVar8 & 0xffffff01;
}

