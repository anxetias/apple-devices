// rea decompile_all
// name: ____walkUSBAncestors_block_invoke
// address: 0x35928
// body: available
// range: 0x35928-0x35ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x35adf to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____walkUSBAncestors_block_invoke(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  cfstringStruct *local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar4,param_3);
  if (*param_3 == 0) {
    cVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"conformsTo:",&cf_AppleUSBHostController);
    if (cVar3 != '\0') {
      *param_3 = 1;
      uVar5 = _safeUSBLocationIDNumber(uVar4);
      lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
      puVar2 = PTR__objc_msgSend_00441098;
      if (lVar6 != 0) {
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"finder");
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
        local_58 = &cf_IOProviderClass;
        local_48 = &cf_IOUSBHostDevice;
        local_50 = &cf_IOPropertyMatch;
        local_68 = &cf_locationID;
        local_60 = lVar6;
        IVar8 = NSDictionary::dictionaryWithObjects_forKeys_count_
                          ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                           &local_60,&local_68,1);
        uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
        local_40 = uVar9;
        IVar8 = NSDictionary::dictionaryWithObjects_forKeys_count_
                          ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                           &local_48,&local_58,2);
        uVar10 = _objc_retainAutoreleasedReturnValue(IVar8);
        uVar5 = (*(code *)puVar2)(uVar7,"entryMatching:",uVar10);
        uVar11 = _objc_retainAutoreleasedReturnValue(uVar5);
        lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        uVar5 = *(undefined8 *)(lVar1 + 0x28);
        *(undefined8 *)(lVar1 + 0x28) = uVar11;
        puVar2 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar5);
        (*(code *)puVar2)(uVar10);
        (*(code *)puVar2)(uVar9);
        (*(code *)puVar2)(uVar7);
      }
      (*(code *)PTR__objc_release_004410a0)(lVar6);
    }
  }
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

