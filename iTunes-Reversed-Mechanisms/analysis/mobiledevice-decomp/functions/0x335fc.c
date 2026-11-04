// rea decompile_all
// name: _PSProbeFindProbeForUSBLocationID
// address: 0x335fc
// body: available
// range: 0x335fc-0x338d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x338c7 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x338cc to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _PSProbeFindProbeForUSBLocationID
               (undefined8 param_1,undefined8 param_2,ulong param_3,ushort param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = (*(code *)PTR__objc_retain_004410a8)();
  uVar3 = _CFNumberCreate(0,3);
  puVar1 = PTR__objc_msgSend_00441098;
  local_48 = &cf_locationID;
  local_40 = uVar3;
  IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_40,&local_48,1);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  uVar6 = (*(code *)puVar1)(uVar5,"mutableCopy");
  if ((int)param_3 != 0) {
    IVar4 = NSNumber::numberWithUnsignedShort_
                      ((ID)&_OBJC_CLASS___NSNumber,"numberWithUnsignedShort:",param_3 & 0xffff);
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar4);
    (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar7,&cf_idVendor);
    (*(code *)PTR__objc_release_004410a0)(uVar7);
  }
  if (param_4 != 0) {
    IVar4 = NSNumber::numberWithUnsignedShort_
                      ((ID)&_OBJC_CLASS___NSNumber,"numberWithUnsignedShort:",(ulong)param_4);
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar4);
    (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar7,&cf_idProduct);
    (*(code *)PTR__objc_release_004410a0)(uVar7);
  }
  local_68 = &cf_IOProviderClass;
  local_58 = &cf_IOUSBHostDevice;
  local_60 = &cf_IOPropertyMatch;
  local_50 = uVar6;
  IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_58,&local_68,2);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar4);
  uVar8 = (*(code *)puVar1)(uVar2,"entryMatching:",uVar7);
  lVar9 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  if (lVar9 == 0) {
    local_88 = &cf_IOProviderClass;
    local_78 = &cf_AppleUSBHostPort;
    local_80 = &cf_IOPropertyMatch;
    local_70 = uVar5;
    IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                       &local_78,&local_88,2);
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar4);
    uVar8 = (*(code *)puVar1)(uVar2,"entryMatching:",uVar7);
    lVar10 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)PTR__objc_release_004410a0)(uVar7);
    if (lVar10 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = _PSProbeFindProbeForUSBDevice(lVar10);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    }
    (*(code *)PTR__objc_release_004410a0)(lVar10);
  }
  else {
    uVar7 = _PSProbeFindProbeForUSBDevice(lVar9);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar9);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    _objc_autoreleaseReturnValue(uVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

