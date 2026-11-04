// rea decompile_all
// name: UARPMetaDataTLVStringBackDeploy::generateTLV:tlvValue:
// address: 0x23f530
// body: available
// range: 0x23f530-0x23f639 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23f635 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x1c bytes */

ID UARPMetaDataTLVStringBackDeploy::generateTLV_tlvValue_
             (ID param_1,SEL param_2,unsigned_int param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 in_register_00000004;
  undefined4 local_38;
  undefined4 local_34;
  
  local_34 = in_register_00000004;
  uVar1 = (*(code *)PTR__objc_retain_004410a8)(param_4);
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableData);
  puVar5 = PTR__objc_msgSend_00441098;
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"init");
  uVar7 = _uarpNtohl(param_3);
  _local_38 = CONCAT44(local_34,uVar7);
  (*(code *)puVar5)(uVar2,"appendBytes:length:",&local_38,4);
  uVar7 = (*(code *)puVar5)(uVar1,"length");
  uVar7 = _uarpNtohl(uVar7);
  _local_38 = CONCAT44(uVar7,local_38);
  (*(code *)puVar5)(uVar2,"appendBytes:length:",&local_34,4);
  uVar3 = (*(code *)puVar5)(param_1,"tlvValue:",uVar1);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar6 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar1);
  (*(code *)puVar5)(uVar2,"appendData:",uVar3);
  uVar1 = (*(code *)puVar5)(&_OBJC_CLASS___NSData,"dataWithData:",uVar2);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)puVar6)(uVar3);
  (*(code *)puVar6)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar1);
  return IVar4;
}

