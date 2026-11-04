// rea decompile_all
// name: _PSProbeCopySWDName
// address: 0x34702
// body: available
// range: 0x34702-0x34a78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x34a74 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _PSProbeCopySWDName(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = (*(code *)PTR__objc_retain_004410a8)();
  lVar3 = _probeDeviceForRegistryEntry(uVar2);
  if (lVar3 == 0) {
    uVar4 = 0;
    goto LAB_00034a49;
  }
  if (*(int *)(lVar3 + 0x28) == 4) {
    uVar4 = (*(code *)PTR__objc_retain_004410a8)(uVar2);
    uVar5 = __probeSWDType(uVar4,lVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = __probeSerialNumber(uVar4,lVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_004410a0)(uVar4);
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"length");
    if ((lVar3 == 0) || (lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"length"), lVar3 == 0))
    {
      uVar4 = 0;
    }
    else {
      IVar7 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______,uVar5,uVar6);
      uVar4 = _objc_retainAutoreleasedReturnValue(IVar7);
    }
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    (*(code *)puVar1)(uVar5);
    goto LAB_00034a49;
  }
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(uVar2);
  if (*(int *)(lVar3 + 0x10) == -1) {
LAB_00034928:
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar5,"objectForKeyedSubscript:",&cf_USBProductName);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = _ensureString(uVar4);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_004410a0)(uVar4);
    uVar4 = _safeUSBSerialNumber(uVar5);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar4);
    lVar9 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"length");
    if ((lVar9 == 0) && (*(long *)(lVar3 + 8) != 0)) {
      IVar7 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:");
      uVar4 = _objc_retainAutoreleasedReturnValue(IVar7);
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      uVar6 = uVar4;
    }
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"length");
    if ((lVar3 == 0) || (lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"length"), lVar3 == 0))
    {
      uVar4 = 0;
    }
    else {
      IVar7 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______,uVar6,uVar8);
      uVar4 = _objc_retainAutoreleasedReturnValue(IVar7);
    }
    (*(code *)PTR__objc_release_004410a0)(uVar8);
  }
  else {
    local_48 = &cf_IOTTYSuffix;
    local_40 = &cf___;
    IVar7 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                       &local_40,&local_48,1);
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar7);
    uVar6 = __bsdSerialChildMatching(uVar5,uVar4);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar6,"objectForKeyedSubscript:",&cf_IOTTYBaseName);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = _ensureString(uVar8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(uVar8);
    lVar9 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"length");
    if (lVar9 == 0) {
      (*(code *)puVar1)(uVar4);
      (*(code *)puVar1)(uVar6);
      goto LAB_00034928;
    }
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar1)(uVar5);
LAB_00034a49:
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

