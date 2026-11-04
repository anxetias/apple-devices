// rea decompile_all
// name: _UarpRestoreInfoQueriesQueueHandler
// address: 0x186c62
// body: available
// range: 0x186c62-0x186d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x186d11 to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x186d3b to 0x186987 _UarpRestoreLayer3LogErrorInternal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _UarpRestoreInfoQueriesQueueHandler(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  
  if (param_1 == (long *)0x0) {
    pcVar3 = "%s: NULL pBlock";
  }
  else {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if ((int)param_1[1] != 0) {
        uVar4 = 0;
        do {
          iVar2 = _uarpPlatformEndpointRequestInfoProperty
                            (*(long *)(lVar1 + 0x28) + 0x298,*(long *)(lVar1 + 0x28) + 0x6d0,
                             *(undefined4 *)(param_1[2] + uVar4 * 4));
          if (iVar2 == 0) {
            *(int *)(lVar1 + 0xd8) = *(int *)(lVar1 + 0xd8) + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 1));
      }
      if ((int)param_1[3] != 0) {
        uVar4 = 0;
        do {
          iVar2 = _CoreUARPRestoreEndpointQueryAppleProperty
                            (*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(param_1[4] + uVar4 * 4));
          if (iVar2 == 0) {
            *(int *)(lVar1 + 0xd8) = *(int *)(lVar1 + 0xd8) + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 3));
      }
      _free((void *)param_1[4]);
      _free((void *)param_1[2]);
      _free(param_1);
      return;
    }
    pcVar3 = "%s: NULL pUarpCtx";
  }
  _UarpRestoreLayer3LogErrorInternal(0,param_2,pcVar3,"UarpRestoreInfoQueriesQueueHandler");
  return;
}

