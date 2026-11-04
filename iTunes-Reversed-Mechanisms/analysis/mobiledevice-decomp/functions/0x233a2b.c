// rea decompile_all
// name: UARPTLVPersonalizationFTABPayloadBackDeploy::tlvWithLength:value:
// address: 0x233a2b
// body: available
// range: 0x233a2b-0x233a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x233a9b to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID UARPTLVPersonalizationFTABPayloadBackDeploy::tlvWithLength_value_
             (ID param_1,SEL param_2,unsigned_long_long param_3,void *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSData,"dataWithBytes:length:",param_4,param_3);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationFTABPayloadBackDeploy,"new");
  (*(code *)puVar1)(uVar3,"setTLVs:",uVar2);
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}

