// rea decompile_all
// name: +[NSDictionary(InstallCoordinationAdditions)_IX_dictionaryWithContentsOfURL:options:error:]
// address: 0x42360
// body: available
// range: 0x42360-0x424d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x424d2 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __NSDictionary_InstallCoordinationAdditions__IX_dictionaryWithContentsOfURL_options_error__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_50 = 0;
  local_40 = param_5;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSData,"dataWithContentsOfURL:options:error:",param_3,2,
                     &local_50);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(local_50);
  puVar1 = PTR__objc_msgSend_00441098;
  if (lVar5 == 0) {
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    local_48 = 0;
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                      (&_OBJC_CLASS___NSPropertyListSerialization,
                       "propertyListWithData:options:format:error:",lVar5,param_4,0,&local_48);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_38 = (*(code *)PTR__objc_retain_004410a8)(local_48);
    (*(code *)PTR__objc_release_004410a0)(uVar4);
    uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
    cVar3 = (*(code *)puVar1)(lVar7,"isKindOfClass:",uVar4);
    if (cVar3 == '\0') {
      lVar8 = 0;
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                        (&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",
                         *(undefined8 *)PTR__NSCocoaErrorDomain_00441050,0x800,0);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)PTR__objc_release_004410a0)(local_38);
    }
    else {
      lVar8 = (*(code *)PTR__objc_retain_004410a8)(lVar7);
      uVar4 = local_38;
      lVar7 = lVar8;
    }
  }
  puVar2 = local_40;
  if ((local_40 != (undefined8 *)0x0) && (lVar8 == 0)) {
    uVar6 = _objc_retainAutorelease(uVar4);
    *puVar2 = uVar6;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(lVar7);
  _objc_autoreleaseReturnValue(lVar8);
  return;
}

