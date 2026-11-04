// rea decompile_all
// name: UARPMetaDataTLV32BackDeploy::generateTLV:tlvValue:
// address: 0x22b0b6
// body: available
// range: 0x22b0b6-0x22b1a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22b19f to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID UARPMetaDataTLV32BackDeploy::generateTLV_tlvValue_
             (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 in_register_00000004;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 local_34;
  
  local_34 = in_register_00000004;
  uVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableData);
  puVar4 = PTR__objc_msgSend_00441098;
  uVar1 = (*(code *)PTR__objc_msgSend_00441098)(uVar1,"init");
  uVar5 = _uarpNtohl(param_3);
  _local_38 = CONCAT44(local_34,uVar5);
  (*(code *)puVar4)(uVar1,"appendBytes:length:",&local_38,4);
  uVar5 = _uarpNtohl(4);
  _local_38 = CONCAT44(uVar5,local_38);
  (*(code *)puVar4)(uVar1,"appendBytes:length:",&local_34,4);
  uVar2 = (*(code *)puVar4)(param_1,"tlvValue:",param_4);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar4)(uVar1,"appendData:",uVar6);
  uVar2 = (*(code *)puVar4)(&_OBJC_CLASS___NSData,"dataWithData:",uVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  puVar4 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar4)(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

