// rea decompile_all
// name: _AMFDRLoadLibrary.cold.18
// address: 0x18af2a
// body: available
// range: 0x18af2a-0x18afb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18afb4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMFDRLoadLibrary_cold_18(void)

{
  char cVar1;
  undefined4 local_28;
  char *local_24;
  undefined2 local_1c;
  char *local_1a;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  cVar1 = _os_log_type_enabled(PTR___os_log_default_004412f0,0x10);
  if (cVar1 != '\0') {
    local_28 = 0x8200202;
    local_24 = "AMFDRSealingMapGetEntry";
    local_1c = 0x820;
    local_1a = "/usr/local/lib/libFDR_internal.dylib";
    __os_log_error_impl(0,PTR___os_log_default_004412f0,0x10,"failed to load \'%s\' from \'%s\'\n",
                        &local_28,0x16);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

