// rea decompile_all
// name: UARPTLVPersonalizationPayloadTagBackDeploy::tlvFromPropertyListValue:
// address: 0x23c36b
// body: available
// range: 0x23c36b-0x23c480 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23c47c to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID UARPTLVPersonalizationPayloadTagBackDeploy::tlvFromPropertyListValue_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  ID IVar4;
  undefined *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar5 = PTR__objc_msgSend_00441098;
  uVar9 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSString,"class");
  cVar6 = (*(code *)puVar5)(uVar1,"isKindOfClass:",uVar9);
  if (cVar6 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar1);
    lVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"length");
    if (lVar2 == 4) {
      uVar9 = _objc_retainAutorelease(uVar7);
      pcVar3 = (char *)(*(code *)puVar5)(uVar9,"UTF8String");
      uVar9 = (*(code *)puVar5)(&objc::class_t::UARPTLVPersonalizationPayloadTagBackDeploy,"new");
      uVar8 = _objc_alloc(&objc::class_t::UARPAssetTagBackDeploy);
      uVar8 = (*(code *)puVar5)(uVar8,"initWithChar1:char2:char3:char4:",(int)*pcVar3,(int)pcVar3[1]
                                ,(int)pcVar3[2],(int)pcVar3[3]);
      (*(code *)puVar5)(uVar9,"setTag:",uVar8);
      (*(code *)PTR__objc_release_004410a0)(uVar8);
    }
    else {
      uVar9 = 0;
    }
    (*(code *)PTR__objc_release_004410a0)(uVar7);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar1);
  IVar4 = _objc_autoreleaseReturnValue(uVar9);
  return IVar4;
}

