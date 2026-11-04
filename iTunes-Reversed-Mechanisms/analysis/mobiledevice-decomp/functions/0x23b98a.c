// rea decompile_all
// name: UARPTLVPersonalizationFTABSubfileHashAlgorithmBackDeploy::metaDataTableEntry
// address: 0x23b98a
// body: available
// range: 0x23b98a-0x23ba91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23ba88 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x23ba8d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID UARPTLVPersonalizationFTABSubfileHashAlgorithmBackDeploy::metaDataTableEntry
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_58 = &cf_Name;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSNumber,"numberWithUnsignedInt:",0x88b29114);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_50 = &cf_Value;
  local_48 = uVar3;
  uVar2 = (*(code *)puVar1)(&objc::class_t::UARPTLVPersonalizationFTABSubfileHashAlgorithmBackDeploy
                            ,"tlvType");
  uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedInt:",uVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = uVar4;
  uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                            &local_48,&local_58,2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar1)(uVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar6 = _objc_autoreleaseReturnValue(uVar5);
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

