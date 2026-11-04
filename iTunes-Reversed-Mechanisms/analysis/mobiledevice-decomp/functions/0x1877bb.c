// rea decompile_all
// name: _UarpRestoreLayer3TssRequestQueueHandler
// address: 0x1877bb
// body: available
// range: 0x1877bb-0x18788b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18783e to 0x18648f _image3Free (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x187887 to 0x186987 _UarpRestoreLayer3LogErrorInternal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _UarpRestoreLayer3TssRequestQueueHandler(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  
  if (param_1 == (long *)0x0) {
    pcVar6 = "%s: NULL pBlock";
  }
  else {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      pcVar6 = "%s: NULL pUarpCtx";
    }
    else {
      lVar2 = param_1[1];
      if (lVar2 == 0) {
        pcVar6 = "%s: NULL pIM4M";
      }
      else if (*(long *)(lVar2 + 0x128) == 0) {
        pcVar6 = "%s: NULL pIM4M->payloads";
      }
      else {
        lVar3 = *(long *)(*(long *)(lVar2 + 0x128) + 0x30);
        if (lVar3 != 0) {
          lVar5 = param_1[3];
          lVar4 = param_1[2];
          _UarpRestoreLayer3LogInfoInternal
                    (lVar1,param_2,"UARP Restore: Tatsu Server set to %s",lVar4);
          (**(code **)(lVar1 + 0x90))(lVar1,lVar2,lVar3,lVar4,(char)lVar5);
          _image3Free(param_1);
          return;
        }
        pcVar6 = "%s: NULL tssOptions";
      }
    }
  }
  _UarpRestoreLayer3LogErrorInternal(0,param_2,pcVar6,"UarpRestoreLayer3TssRequestQueueHandler");
  return;
}

