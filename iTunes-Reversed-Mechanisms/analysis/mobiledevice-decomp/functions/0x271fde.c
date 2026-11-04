// rea decompile_all
// name: _internalBackendGetActiveVersion
// address: 0x271fde
// body: available
// range: 0x271fde-0x272084 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x272080 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_internalBackendGetActiveVersion(undefined8 *param_1,undefined4 *param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar1 = 0x1e;
  if (((param_1 != (undefined8 *)0x0) && (param_2 != (undefined4 *)0x0)) &&
     (param_3 != (undefined2 *)0x0)) {
    local_30 = 0;
    local_38 = 0;
    uVar1 = (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,0,0xf,&local_30,8,0,&local_38);
    if (local_38 == 8) {
      *param_2 = (undefined4)local_30;
      *param_3 = local_30._4_2_;
    }
    else if (local_38 == 4) {
      *param_2 = 0;
      *param_3 = 0;
    }
    else {
      uVar1 = 0x36;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

