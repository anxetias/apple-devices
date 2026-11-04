// rea decompile_all
// name: _UarpRestoreStageFirmwareDataBufferQueueHandler
// address: 0x186ad5
// body: available
// range: 0x186ad5-0x186b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x186b30 to 0x186e9d _UarpRestoreLayer3FirmwareStageStatus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x186b60 to 0x186987 _UarpRestoreLayer3LogErrorInternal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _UarpRestoreStageFirmwareDataBufferQueueHandler(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    pcVar4 = "%s: NULL pUarpCtx";
    param_1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x110);
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      *(undefined1 *)(lVar2 + 0x7a0) = 0;
      iVar3 = _CoreUARPRestoreEndpointOfferSuperBinaryBuffer
                        (lVar2,lVar1,*(undefined8 *)(param_1 + 0x118));
      if (iVar3 != 0) {
        _UarpRestoreLayer3LogErrorInternal(param_1);
        _UarpRestoreLayer3FirmwareStageStatus(param_1,5,0xa00);
        return;
      }
      return;
    }
    pcVar4 = "%s: NULL pBuffer";
    param_2 = 0;
  }
  _UarpRestoreLayer3LogErrorInternal
            (param_1,param_2,pcVar4,"UarpRestoreStageFirmwareDataBufferQueueHandler");
  return;
}

