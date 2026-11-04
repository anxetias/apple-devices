// rea decompile_all
// name: _AMSupportCommonCopyHexStringFromUInt64
// address: 0x8b05
// body: available
// range: 0x8b05-0x8b52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x8b4e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMSupportCommonCopyHexStringFromUInt64(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_18 = param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 |
             (param_1 & 0xff0000000000) >> 0x18 | (param_1 & 0xff00000000) >> 8 |
             (param_1 & 0xff000000) << 8 | (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28
             | param_1 << 0x38;
  _AMSupportCommonCopyHexStringFromData(&local_18,8,param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

