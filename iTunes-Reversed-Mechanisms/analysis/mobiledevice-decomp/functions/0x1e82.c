// rea decompile_all
// name: AMSupportStaticURLConnectionDelegate::initWithData:Options:
// address: 0x1e82
// body: available
// range: 0x1e82-0x1f4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f48 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID AMSupportStaticURLConnectionDelegate::initWithData_Options_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_40;
  class_t *local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  _AMSupportLogInternal
            (7,"-[AMSupportStaticURLConnectionDelegate initWithData:Options:]",
             "init-ing delegate with data=%@ options=%@",param_3,param_4);
  local_38 = &objc::class_t::AMSupportStaticURLConnectionDelegate;
  local_40 = param_1;
  IVar2 = NSObject::init((ID)&local_40,"init");
  if (IVar2 != 0) {
    *(undefined1 *)(IVar2 + 8) = 0;
    puVar1 = PTR__objc_retain_004410a8;
    uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_4);
    *(undefined8 *)(IVar2 + 0x10) = uVar3;
    *(undefined8 *)(IVar2 + 0x18) = 0;
    uVar3 = (*(code *)puVar1)(param_3);
    *(undefined8 *)(IVar2 + 0x20) = uVar3;
    (*(code *)PTR__objc_msgSend_00441098)(uVar3,"setLength:",0);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

