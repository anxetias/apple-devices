// rea decompile_all
// name: _FlsParserCopyInjectedItem
// address: 0x1b8693
// body: available
// range: 0x1b8693-0x1b8717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _FlsParserCopyInjectedItem(__FlsParser*, unsigned int, __CFData const**) */

undefined8 _FlsParserCopyInjectedItem(__FlsParser *param_1,uint param_2,__CFData **param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __CFData *p_Var4;
  
  lVar1 = PRGSequencer::FindElementStructure(*(PRGSequencer **)(param_1 + 0x18),param_2,0);
  if (lVar1 == 0) {
    _AMAuthInstallLog(6,"_FlsParserCopyInjectedItem","not found in this file");
    uVar2 = 1;
  }
  else {
    uVar2 = PRGSequencer::GetElementData(*(PRGSequencer **)(param_1 + 0x18),*(uint *)(lVar1 + 0x18))
    ;
    uVar3 = _CFGetAllocator(param_1);
    p_Var4 = (__CFData *)_CFDataCreate(uVar3,uVar2,*(undefined4 *)(lVar1 + 0x14));
    if (p_Var4 == (__CFData *)0x0) {
      uVar2 = 2;
    }
    else {
      *param_3 = p_Var4;
      uVar2 = 0;
    }
  }
  return uVar2;
}

