// rea decompile_all
// name: AMRManagedDiskImage::mediaInImage:matching:
// address: 0x17302b
// body: available
// range: 0x17302b-0x17313a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x173136 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID AMRManagedDiskImage::mediaInImage_matching_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ID local_30;
  long local_28;
  
  puVar2 = PTR__objc_msgSend_00441098;
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_4,"mutableCopy");
  local_48 = &cf_IOProviderClass;
  local_38 = &cf_IOMedia;
  local_40 = &cf_BSDName;
  local_30 = param_3;
  uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                            &local_38,&local_48,2);
  (*(code *)puVar2)(uVar4,"setObject:forKeyedSubscript:",uVar5,&cf_IOParentMatch);
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_004411d8;
  uVar5 = _CFRetain(uVar4);
  iVar3 = _IOServiceGetMatchingService(uVar1,uVar5);
  if (iVar3 == 0) {
    IVar6 = 0;
  }
  else {
    uVar5 = _IORegistryEntryCreateCFProperty(iVar3,&cf_BSDName,0,0);
    uVar5 = _CFMakeCollectable(uVar5);
    IVar6 = _objc_autorelease(uVar5);
    _IOObjectRelease(iVar3);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

