// rea decompile_all
// name: UARPTLVPersonalizationFTABPayloadBackDeploy::init
// address: 0x233535
// body: available
// range: 0x233535-0x233599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID UARPTLVPersonalizationFTABPayloadBackDeploy::init(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::UARPTLVPersonalizationFTABPayloadBackDeploy;
  local_20.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_20,"init");
  if (IVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableArray,"new");
    uVar1 = *(undefined8 *)(IVar2 + _tlvs);
    *(undefined8 *)(IVar2 + _tlvs) = uVar3;
    (*(code *)PTR__objc_release_004410a0)(uVar1);
  }
  return IVar2;
}

