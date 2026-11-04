// rea decompile_all
// name: __RSDeviceCopyPreflightKey
// address: 0x1007be
// body: available
// range: 0x1007be-0x100865 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100861 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __RSDeviceCopyPreflightKey(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  puVar2 = (undefined1 *)_CFStringGetCStringPtr(param_2,0x8000100);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = local_428;
    cVar1 = _CFStringGetCString(param_2,puVar2,0x400,0x8000100);
    if (cVar1 == '\0') {
      uVar3 = 0;
      _AMRLog(3,&cf_Failedtoconvert__toCstring,param_2);
      goto LAB_00100825;
    }
  }
  uVar3 = _MDRemoteServiceDeviceCopyProperty(param_1,puVar2);
LAB_00100825:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

