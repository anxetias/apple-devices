// rea decompile_all
// name: UARPMetaDataTLVBackDeploy::initWithType:length:value:
// address: 0x23e3ef
// body: available
// range: 0x23e3ef-0x23e477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID UARPMetaDataTLVBackDeploy::initWithType_length_value_
             (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4,void *param_5)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  objc_super local_38;
  
  local_38.super_class = &objc::class_t::UARPMetaDataTLVBackDeploy;
  local_38.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_38,"init");
  if (IVar1 != 0) {
    *(unsigned_int *)(IVar1 + 8) = param_3;
    *(unsigned_int *)(IVar1 + 0x18) = param_4;
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)
                      (&_OBJC_CLASS___NSData,"dataWithBytes:length:",param_5,param_4);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar2 = *(undefined8 *)(IVar1 + 0x10);
    *(undefined8 *)(IVar1 + 0x10) = uVar3;
    (*(code *)PTR__objc_release_004410a0)(uVar2);
  }
  return IVar1;
}

