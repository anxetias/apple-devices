// rea decompile_all
// name: _AMRLogCStringv
// address: 0xe1c35
// body: available
// range: 0xe1c35-0xe1d2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe1cef to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xe1d26 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMRLogCStringv(int param_1,char *param_2,va_list param_3)

{
  uint uVar1;
  char *pcVar2;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 <= _logLevel) {
    ___bzero(local_438,0x400);
    uVar1 = _vsnprintf(local_438,0x400,param_2,param_3);
    if (0x3ff < uVar1) {
      pcVar2 = _malloc((long)(int)(uVar1 + 1));
      if (pcVar2 != (char *)0x0) {
        _vsnprintf(pcVar2,(long)(int)(uVar1 + 1),param_2,param_3);
        __AMRLogMessage(param_1,pcVar2,0);
        if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
          _free(pcVar2);
          return;
        }
        goto LAB_000e1d26;
      }
    }
    __AMRLogMessage(param_1,local_438,0);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
LAB_000e1d26:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

