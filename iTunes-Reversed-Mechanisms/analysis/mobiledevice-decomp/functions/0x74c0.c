// rea decompile_all
// name: AMSupportStaticURLSession::initWithOptions:
// address: 0x74c0
// body: available
// range: 0x74c0-0x75df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75db to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID AMSupportStaticURLSession::initWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  long lVar1;
  dispatch_queue_t pdVar2;
  ID IVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ID local_38;
  class_t *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_30 = &objc::class_t::AMSupportStaticURLSession;
  local_38 = param_1;
  self = NSObject::init((ID)&local_38,"init");
  if (self != 0) {
    lVar1 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"objectForKey:",&cf_Timeout);
    if (lVar1 == 0) {
      uVar5 = 0x4072c00000000000;
    }
    else {
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar1,"doubleValue");
    }
    *(undefined8 *)(self + 0x10) = uVar5;
    lVar1 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"objectForKey:",&cf_Priority);
    if (lVar1 == 0) {
      uVar4 = 0x3f000000;
    }
    else {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar1);
    }
    *(undefined4 *)(self + 0x18) = uVar4;
    pdVar2 = _dispatch_queue_create
                       ("com.apple.libamsupport.http-session",(dispatch_queue_attr_t)0x0);
    *(dispatch_queue_t *)(self + 8) = pdVar2;
    uVar5 = (*(code *)PTR__objc_retain_004410a8)(param_3);
    *(undefined8 *)(self + 0x28) = uVar5;
    IVar3 = NSObject::_newSession(self,"_newSession");
    *(ID *)(self + 0x20) = IVar3;
    *(undefined1 *)(self + 0x30) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

