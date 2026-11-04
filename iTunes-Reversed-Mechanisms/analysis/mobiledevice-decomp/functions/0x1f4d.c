// rea decompile_all
// name: AMSupportStaticURLConnectionDelegate::dealloc
// address: 0x1f4d
// body: available
// range: 0x1f4d-0x1ff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ff0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void AMSupportStaticURLConnectionDelegate::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID local_38;
  class_t *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  _AMSupportLogInternal(7,"-[AMSupportStaticURLConnectionDelegate dealloc]","dealloc-ing delegate");
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x10));
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_30 = &objc::class_t::AMSupportStaticURLConnectionDelegate;
  local_38 = param_1;
  NSObject::dealloc((ID)&local_38,"dealloc");
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

