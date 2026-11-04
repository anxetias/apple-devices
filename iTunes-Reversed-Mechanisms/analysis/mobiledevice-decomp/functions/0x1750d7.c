// rea decompile_all
// name: _doSRPPair
// address: 0x1750d7
// body: available
// range: 0x1750d7-0x175542 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17553e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _doSRPPair(undefined8 param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  dispatch_object_t object;
  dispatch_semaphore_t pdVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  code *local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_f0 = &local_f8;
  local_f8 = 0;
  local_e8 = 0x2020000000;
  local_e0 = 0;
  local_d0 = &local_d8;
  local_d8 = 0;
  local_c8 = 0x2020000000;
  local_c0 = 0;
  local_b0 = &local_b8;
  local_b8 = 0;
  local_a8 = 0x2020000000;
  local_a0 = 0;
  local_90 = &local_98;
  local_98 = 0;
  local_88 = 0x3052000000;
  local_80 = ___Block_byref_object_copy__5112;
  local_78 = ___Block_byref_object_dispose__5113;
  local_70 = 0;
  local_5c = param_2;
  if (param_3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "Invalid session.";
LAB_0017541e:
    object._os_obj = (_os_object_s *)0x0;
  }
  else {
    local_68 = param_1;
    object._os_obj =
         (_os_object_s *)_dispatch_queue_create("MobileDevice-SPRPair",(dispatch_queue_attr_t)0x0);
    if (object._os_obj == (_os_object_s *)0x0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar4 = "Failed to create queue.";
      goto LAB_0017541e;
    }
    pdVar2 = _dispatch_semaphore_create(0);
    local_90[5] = pdVar2;
    if (pdVar2 != (dispatch_semaphore_t)0x0) {
      if (local_5c == 1) {
        local_58 = &cf_com_apple_developer;
        local_48 = (*(code *)PTR__objc_msgSend_00441098)
                             (&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
        local_50 = &cf_com_apple_ScreenCapture;
        local_40 = (*(code *)PTR__objc_msgSend_00441098)
                             (&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
        uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                          (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                           &local_48,&local_58,2);
        (*(code *)PTR__objc_msgSend_00441098)(param_3,"setAcl:",uVar3);
      }
      (*(code *)PTR__objc_msgSend_00441098)(param_3,"setSessionType:",local_5c);
      (*(code *)PTR__objc_msgSend_00441098)(param_3,"setFlags:",8);
      (*(code *)PTR__objc_msgSend_00441098)(param_3,"setDispatchQueue:",object._os_obj);
      (*(code *)PTR__objc_msgSend_00441098)(param_3,"setCompletionHandler:");
      (*(code *)PTR__objc_msgSend_00441098)(param_3,"setPromptForPINHandler:");
      (*(code *)PTR__objc_msgSend_00441098)(param_3,"setSendDataHandler:");
      _dispatch_retain(*(dispatch_object_t *)(local_90 + 5));
      (*(code *)PTR__objc_msgSend_00441098)(param_3,"activate");
      _dispatch_semaphore_wait((dispatch_semaphore_t)local_90[5],0xffffffffffffffff);
      goto LAB_0017542c;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "Failed to create semaphore.";
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar4);
LAB_0017542c:
  if (local_d0[3] != 0) {
    _CFRelease();
  }
  if (object._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(object);
  }
  if ((*(dispatch_object_t *)(local_90 + 5))._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(*(dispatch_object_t *)(local_90 + 5));
  }
  uVar1 = *(undefined4 *)(local_f0 + 3);
  __Block_object_dispose(&local_98,8);
  __Block_object_dispose(&local_b8,8);
  __Block_object_dispose(&local_d8,8);
  __Block_object_dispose(&local_f8,8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

