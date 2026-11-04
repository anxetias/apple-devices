// rea decompile_all
// name: _FlsParserSetInjectedItem
// address: 0x1b876e
// body: available
// range: 0x1b876e-0x1b8816 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _FlsParserSetInjectedItem(__FlsParser*, unsigned int, __CFData const*) */

undefined4 _FlsParserSetInjectedItem(__FlsParser *param_1,uint param_2,__CFData *param_3)

{
  PRGSequencer *this;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  
  if (param_1 == (__FlsParser *)0x0) {
    uVar5 = 1;
  }
  else {
    puVar3 = (uint *)PRGSequencer::CreateElement(*(PRGSequencer **)(param_1 + 0x18),param_2);
    uVar5 = 2;
    if (puVar3 != (uint *)0x0) {
      this = *(PRGSequencer **)(param_1 + 0x18);
      pvVar4 = (void *)_CFDataGetBytePtr(param_3);
      uVar1 = PRGSequencer::RegisterElementData(this,pvVar4);
      if (uVar1 == 0xffffffff) {
        PRGSequencer::RemoveElement(*(PRGSequencer **)(param_1 + 0x18),puVar3);
      }
      else {
        _CFArrayAppendValue(*(undefined8 *)(param_1 + 0x10),param_3);
        *puVar3 = param_2;
        puVar3[1] = 0x20;
        puVar3[2] = 0;
        uVar2 = _CFDataGetLength(param_3);
        puVar3[5] = uVar2;
        puVar3[6] = uVar1;
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

