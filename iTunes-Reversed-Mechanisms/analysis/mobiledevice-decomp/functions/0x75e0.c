// rea decompile_all
// name: AMSupportStaticURLSession::dealloc
// address: 0x75e0
// body: available
// range: 0x75e0-0x7662 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void AMSupportStaticURLSession::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID local_30;
  class_t *local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((*(dispatch_object_t *)(param_1 + 8))._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(*(dispatch_object_t *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(*(undefined8 *)(param_1 + 0x20));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28));
  local_28 = &objc::class_t::AMSupportStaticURLSession;
  local_30 = param_1;
  NSObject::dealloc((ID)&local_30,"dealloc");
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

