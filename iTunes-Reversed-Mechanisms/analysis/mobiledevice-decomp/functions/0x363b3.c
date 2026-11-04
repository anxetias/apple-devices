// rea decompile_all
// name: __matchWithParentProperty
// address: 0x363b3
// body: available
// range: 0x363b3-0x364e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x364d8 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x364dd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __matchWithParentProperty(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar3 = (*(code *)puVar1)(param_2);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"mutableCopy");
  local_48 = &cf_IOPropertyMatch;
  local_58 = uVar3;
  local_50 = uVar2;
  IVar5 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_50,&local_58,1);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  local_40 = uVar6;
  IVar5 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_40,&local_48,1);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)puVar1)(uVar4,"setObject:forKeyedSubscript:",uVar7,&cf_IOParentMatch);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(uVar6);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    _objc_autoreleaseReturnValue(uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

