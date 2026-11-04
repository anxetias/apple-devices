// rea decompile_all
// name: UARPTLVPersonalizationProvisioningBackDeploy::tlvFromPropertyListValue:
// address: 0x233d7e
// body: available
// range: 0x233d7e-0x233e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x233e33 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID UARPTLVPersonalizationProvisioningBackDeploy::tlvFromPropertyListValue_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  
  uVar1 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar4 = PTR__objc_msgSend_00441098;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"class");
  cVar5 = (*(code *)puVar4)(uVar1,"isKindOfClass:",uVar7);
  if (cVar5 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar2 = (*(code *)PTR__objc_retain_004410a8)(uVar1);
    uVar7 = (*(code *)puVar4)(&objc::class_t::UARPTLVPersonalizationProvisioningBackDeploy,"new");
    uVar6 = (*(code *)puVar4)(uVar2,"unsignedCharValue");
    (*(code *)PTR__objc_release_004410a0)(uVar2);
    (*(code *)puVar4)(uVar7,"setProvisioning:",uVar6);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar7);
  return IVar3;
}

