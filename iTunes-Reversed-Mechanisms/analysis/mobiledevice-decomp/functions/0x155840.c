// rea decompile_all
// name: _createAndLogError
// address: 0x155840
// body: available
// range: 0x155840-0x155ab2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x155aae to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_createAndLogError(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  long param_13,undefined8 param_14)

{
  undefined *puVar1;
  char in_AL;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  long local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_e8 = param_1;
    local_d8 = param_2;
    local_c8 = param_3;
    local_b8 = param_4;
    local_a8 = param_5;
    local_98 = param_6;
    local_88 = param_7;
    local_78 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_48 = local_118;
  local_50 = &stack0x00000008;
  local_58 = 0x3000000030;
  local_68 = param_13;
  local_60 = param_12;
  local_5c = param_11;
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableString);
  puVar1 = PTR__objc_msgSend_00441098;
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar2,"initWithFormat:arguments:",param_14,&local_58);
  lVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_9);
  lVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithInt:",param_10);
  lVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithInt:",local_5c);
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
  uVar2 = (*(code *)puVar1)(uVar2,"init");
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_00441098)
              (uVar2,"setObject:forKeyedSubscript:",lVar3,
               *(undefined8 *)PTR__NSLocalizedDescriptionKey_00441060);
  }
  if (local_68 != 0) {
    (*(code *)PTR__objc_msgSend_00441098)
              (uVar2,"setObject:forKeyedSubscript:",local_68,
               *(undefined8 *)PTR__NSUnderlyingErrorKey_00441088);
  }
  if (lVar4 != 0) {
    (*(code *)PTR__objc_msgSend_00441098)
              (uVar2,"setObject:forKeyedSubscript:",lVar4,&cf_FunctionName);
  }
  if (lVar5 != 0) {
    (*(code *)PTR__objc_msgSend_00441098)(uVar2,"setObject:forKeyedSubscript:",lVar5,&cf_LineNumber)
    ;
  }
  uVar7 = _objc_alloc(&_OBJC_CLASS___NSError);
  if (lVar6 == 0) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    uVar8 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"integerValue");
  }
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar7,"initWithDomain:code:userInfo:",&cf_com_apple_mobiledevice,uVar8,uVar2);
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  if ((char)local_60 != '\0') {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"%@",lVar3);
  }
  (*(code *)PTR__objc_release_004410a0)(lVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

