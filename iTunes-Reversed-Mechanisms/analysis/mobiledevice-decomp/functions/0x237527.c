// rea decompile_all
// name: UARPTLVPersonalizationSecurityDomainBackDeploy::tlvWithLength:value:
// address: 0x237527
// body: available
// range: 0x237527-0x237581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23757d to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID UARPTLVPersonalizationSecurityDomainBackDeploy::tlvWithLength_value_
             (ID param_1,SEL param_2,unsigned_long_long param_3,void *param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__objc_msgSend_00441098;
  if (param_3 == 4) {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (&objc::class_t::UARPTLVPersonalizationSecurityDomainBackDeploy,"new");
    uVar3 = _uarpNtohl(*(undefined4 *)param_4);
    (*(code *)puVar2)(uVar4,"setSecurityDomain:",uVar3);
  }
  else {
    uVar4 = 0;
  }
  IVar1 = _objc_autoreleaseReturnValue(uVar4);
  return IVar1;
}

