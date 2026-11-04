// rea decompile_all
// name: ___52-[AMSupportStaticURLSession_sendRequest:completion:]_block_invoke
// address: 0x77cc
// body: available
// range: 0x77cc-0x78f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x786b to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x78ec to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___52__AMSupportStaticURLSession_sendRequest_completion___block_invoke(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  dispatch_queue_t pdVar5;
  
  lVar1 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)
                    (*(undefined8 *)(param_1 + 0x20),"_urlRequestForHTTPMessage:",
                     *(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR__objc_msgSend_00441098;
  if (lVar3 == 0) {
    _AMSupportLogInternal
              (3,"-[AMSupportStaticURLSession sendRequest:completion:]_block_invoke",
               "Could not construct NSURLRequest from message %@",*(undefined8 *)(param_1 + 0x30));
    pdVar5 = _dispatch_get_global_queue(0,0);
    _dispatch_async(pdVar5);
    if (*(long *)PTR____stack_chk_guard_004412b8 == lVar1) {
      return;
    }
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
                       "dataTaskWithRequest:completionHandler:",lVar3,
                       *(undefined8 *)(param_1 + 0x28));
    (*(code *)puVar2)(*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),uVar4,"setPriority:");
    if (*(long *)PTR____stack_chk_guard_004412b8 == lVar1) {
      (*(code *)puVar2)(uVar4,"resume");
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

