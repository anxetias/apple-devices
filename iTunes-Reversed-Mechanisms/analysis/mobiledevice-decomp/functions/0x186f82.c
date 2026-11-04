// rea decompile_all
// name: _UarpRestoreLayer3AssetSolicitationStatus
// address: 0x186f82
// body: available
// range: 0x186f82-0x186fe1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x186fdc to 0x2aa206 _dispatch_async_f (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _UarpRestoreLayer3AssetSolicitationStatus(undefined8 *param_1,ulong param_2,undefined4 param_3)

{
  undefined8 *context;
  
  if (param_1[0x11] != 0) {
    _UarpRestoreLayer3LogInfoInternal
              (param_1,param_2,
               "UARP Restore Layer 3: Solicit Status; status <0x%04x>, reason <0x%04x>",
               param_2 & 0xffffffff,param_3);
    context = (undefined8 *)_uarpZalloc(0x10);
    *context = param_1;
    *(int *)(context + 1) = (int)param_2;
    *(undefined4 *)((long)context + 0xc) = param_3;
    _dispatch_async_f((dispatch_queue_t)*param_1,context,
                      _UarpRestoreLayer3AssetSolicitationStatusQueueHandler);
    return;
  }
  return;
}

