// rea decompile_all
// name: UARPTLVPersonalizationPayloadTagBackDeploy::generateTLV
// address: 0x23c138
// body: available
// range: 0x23c138-0x23c22b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23c227 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID UARPTLVPersonalizationPayloadTagBackDeploy::generateTLV(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableData);
  puVar3 = PTR__objc_msgSend_00441098;
  uVar1 = (*(code *)PTR__objc_msgSend_00441098)(uVar1,"init");
  uVar5 = (*(code *)puVar3)(&objc::class_t::UARPTLVPersonalizationPayloadTagBackDeploy,"tlvType");
  local_30 = _uarpNtohl(uVar5);
  (*(code *)puVar3)(uVar1,"appendBytes:length:",&local_30,4);
  local_2c = _uarpNtohl(4);
  (*(code *)puVar3)(uVar1,"appendBytes:length:",&local_2c,4);
  uVar6 = (*(code *)puVar3)(param_1,"tlvValue");
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar3)(uVar1,"appendData:",uVar6);
  puVar4 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  uVar6 = (*(code *)puVar3)(&_OBJC_CLASS___NSData,"dataWithData:",uVar1);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar4)(uVar1);
  IVar2 = _objc_autoreleaseReturnValue(uVar6);
  return IVar2;
}

