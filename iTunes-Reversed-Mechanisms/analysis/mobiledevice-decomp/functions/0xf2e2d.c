// rea decompile_all
// name: _createAndLogUSBErrorv
// address: 0xf2e2d
// body: available
// range: 0xf2e2d-0xf2f36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf2f32 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _createAndLogUSBErrorv(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = _objc_alloc(&_OBJC_CLASS___NSString);
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"initWithFormat:arguments:",param_2,param_3);
  uVar3 = _objc_autorelease(uVar3);
  cVar2 = _os_log_type_enabled(PTR___os_log_default_004412f0,0);
  if (cVar2 != '\0') {
    local_38 = 0x8400102;
    local_34 = uVar3;
    __os_log_impl(0,PTR___os_log_default_004412f0,0,"%@",&local_38,0xc);
  }
  puVar1 = PTR__objc_msgSend_00441098;
  local_48 = &cf_Errormessage;
  local_40 = uVar3;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",&local_40,
                     &local_48,1);
  (*(code *)puVar1)(&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",&cf_AMRestoreErrorDomain
                    ,(long)param_1,uVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

