// rea decompile_all
// name: _MISAgentRemoveProvisioningProfile
// address: 0xbc6a0
// body: available
// range: 0xbc6a0-0xbc716 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbc712 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _MISAgentRemoveProvisioningProfile(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  cfstringStruct *local_18;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_18 = &cf_ProfileID;
  local_28 = 0x458850;
  uStack_24 = 0;
  uStack_20 = 0x458870;
  uStack_1c = 0;
  local_48 = &cf_Remove;
  local_40 = &cf_Provisioning;
  local_38 = param_2;
  __MISAgentPerformOperation(param_1,&local_28,&local_48,3,0);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

