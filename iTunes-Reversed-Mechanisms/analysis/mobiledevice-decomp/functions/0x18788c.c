// rea decompile_all
// name: _UarpRestoreLayer3UarpPropertyUpdateQueueHandler
// address: 0x18788c
// body: available
// range: 0x18788c-0x187912 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1878ea to 0x18648f _image3Free (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x18790e to 0x186987 _UarpRestoreLayer3LogErrorInternal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _UarpRestoreLayer3UarpPropertyUpdateQueueHandler(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 == (long *)0x0) {
    pcVar3 = "%s: NULL pBlock";
  }
  else {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      iVar2 = *(int *)(lVar1 + 0xd8) + -1;
      *(int *)(lVar1 + 0xd8) = iVar2;
      if (*(code **)(lVar1 + 0x98) != (code *)0x0) {
        (**(code **)(lVar1 + 0x98))(lVar1,(int)param_1[1]);
        iVar2 = *(int *)(lVar1 + 0xd8);
      }
      if ((iVar2 == 0) && (*(code **)(lVar1 + 0xa8) != (code *)0x0)) {
        (**(code **)(lVar1 + 0xa8))(lVar1);
      }
      _image3Free(param_1);
      return;
    }
    pcVar3 = "%s: NULL pUarpCtx";
  }
  _UarpRestoreLayer3LogErrorInternal
            (0,param_2,pcVar3,"UarpRestoreLayer3UarpPropertyUpdateQueueHandler");
  return;
}

