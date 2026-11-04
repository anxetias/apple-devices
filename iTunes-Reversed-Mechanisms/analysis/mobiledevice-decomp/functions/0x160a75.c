// rea decompile_all
// name: _cfstring_dup
// address: 0x160a75
// body: available
// range: 0x160a75-0x160b12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x160ac2 to 0x2aa902 _strdup (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x160b0e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * _cfstring_dup(long param_1)

{
  char cVar1;
  char *pcVar2;
  char local_418 [1024];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == 0) {
LAB_00160af2:
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = (char *)_CFStringGetCStringPtr(param_1,0x8000100);
    if (pcVar2 != (char *)0x0) {
      if (*(long *)PTR____stack_chk_guard_004412b8 == local_18) {
        pcVar2 = _strdup(pcVar2);
        return pcVar2;
      }
      goto LAB_00160b0e;
    }
    cVar1 = _CFStringGetCString(param_1,local_418,0x400,0x8000100);
    if (cVar1 == '\0') goto LAB_00160af2;
    pcVar2 = _strdup(local_418);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_18) {
    return pcVar2;
  }
LAB_00160b0e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

