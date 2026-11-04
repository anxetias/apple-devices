// rea decompile_all
// name: UARPMetaDataTLV16BackDeploy::tlvValue:
// address: 0x2376af
// body: available
// range: 0x2376af-0x2376f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2376f2 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

ID UARPMetaDataTLV16BackDeploy::tlvValue_(ID param_1,SEL param_2,unsigned_short param_3)

{
  undefined2 uVar1;
  undefined4 in_EAX;
  undefined8 uVar2;
  ID IVar3;
  undefined6 in_register_00000012;
  undefined8 in_R8;
  undefined8 in_R9;
  ulong uVar4;
  
  uVar1 = _uarpNtohs(CONCAT62(in_register_00000012,param_3) & 0xffffffff);
  uVar4 = (ulong)CONCAT24(uVar1,in_EAX);
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSData);
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar2,"initWithBytes:length:",&stack0xffffffffffffffec,4,in_R8,in_R9,uVar4);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

