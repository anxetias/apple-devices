// rea decompile_all
// name: __AMAuthInstallUpdateHTTPHeaderWithEntry
// address: 0x1bc8a1
// body: available
// range: 0x1bc8a1-0x1bc972 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bc96e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMAuthInstallUpdateHTTPHeaderWithEntry
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_238,0x200);
  ___bzero(local_438,0x200);
  _CFStringGetCString(param_1,local_238,0x1ff,0x8000100);
  _CFStringGetCString(param_2,local_438,0x1ff,0x8000100);
  _AMAuthInstallLog(7,"_AMAuthInstallUpdateHTTPHeaderWithEntry","Appending {%s : %s} to http header"
                    ,local_238,local_438);
  _CFHTTPMessageSetHeaderFieldValue(param_3,param_1,param_2);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

