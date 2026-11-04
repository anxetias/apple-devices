// rea decompile_all
// name: _UarpRestoreLayer3MsgSendQueueHandler
// address: 0x18750f
// body: available
// range: 0x18750f-0x1875fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1875be to 0x18648f _image3Free (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1875e6 to 0x186987 _UarpRestoreLayer3LogErrorInternal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _UarpRestoreLayer3MsgSendQueueHandler(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    pcVar4 = "%s: NULL pBlock";
  }
  else {
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if (param_1[1] != 0) {
        pcVar1 = *(code **)(lVar5 + 0x18);
        pvVar3 = (void *)_uarpZalloc((int)param_1[2]);
        _memcpy(pvVar3,(void *)param_1[1],(ulong)*(uint *)(param_1 + 2));
        iVar2 = (*pcVar1)(lVar5,*(undefined8 *)(lVar5 + 0x30),pvVar3,(int)param_1[2]);
        if (iVar2 != 0) {
          _uarpStatusCodeToString(iVar2);
          _UarpRestoreLayer3LogErrorInternal(lVar5);
        }
        _uarpPlatformEndpointSendMessageComplete
                  (*(long *)(lVar5 + 0x28) + 0x298,*(long *)(lVar5 + 0x28) + 0x6d0,param_1[1]);
        _image3Free(param_1);
        _image3Free(pvVar3);
        return;
      }
      pcVar4 = "%s: NULL pBuffer";
      goto LAB_001875dc;
    }
    pcVar4 = "%s: NULL pUarpCtx";
  }
  lVar5 = 0;
LAB_001875dc:
  _UarpRestoreLayer3LogErrorInternal(lVar5,param_2,pcVar4,"UarpRestoreLayer3MsgSendQueueHandler");
  return;
}

