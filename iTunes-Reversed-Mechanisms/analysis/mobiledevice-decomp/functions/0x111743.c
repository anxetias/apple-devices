// rea decompile_all
// name: _lockdown_connection_destroy
// address: 0x111743
// body: available
// range: 0x111743-0x1117f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x11179d to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _lockdown_connection_destroy(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    if (*(long *)(param_1 + 2) != 0) {
      _SSL_free();
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (*param_1 != -1) {
      iVar2 = _close(*param_1);
      if (iVar2 == -1) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar1 = _md_log_log;
        iVar2 = *param_1;
        piVar3 = ___error();
        __os_log_internal(0,uVar1,0x10,"close(2) on socket %d failed: %d",iVar2,*piVar3);
      }
      *param_1 = -1;
    }
    if (*(void **)(param_1 + 4) != (void *)0x0) {
      _free(*(void **)(param_1 + 4));
    }
    _free(param_1);
    return;
  }
  return;
}

