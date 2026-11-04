// rea decompile_all
// name: _FlsParserReplaceRamPsi
// address: 0x1b8947
// body: available
// range: 0x1b8947-0x1b899c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b8984 to 0x1b876e _FlsParserSetInjectedItem (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1b8998 to 0x1b8817 _FlsParserReplaceDownloadItem (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _FlsParserReplaceRamPsi(__FlsParser *param_1,__CFData *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)PRGSequencer::FindElementStructure(*(PRGSequencer **)(param_1 + 0x18),0x12,0);
  if (pvVar1 != (void *)0x0) {
    PRGSequencer::RemoveElement(*(PRGSequencer **)(param_1 + 0x18),pvVar1);
    _FlsParserSetInjectedItem(param_1,0x12,param_2);
    return;
  }
  _FlsParserReplaceDownloadItem(param_1,1,param_2);
  return;
}

