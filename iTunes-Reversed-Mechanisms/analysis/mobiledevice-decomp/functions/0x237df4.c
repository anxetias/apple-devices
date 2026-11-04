// rea decompile_all
// name: FTABFileBackDeploy::init
// address: 0x237df4
// body: available
// range: 0x237df4-0x237eec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID FTABFileBackDeploy::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::FTABFileBackDeploy;
  local_30.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_30,"init");
  puVar1 = PTR__objc_msgSend_00441098;
  if (IVar3 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSData,"new");
    uVar5 = *(undefined8 *)(IVar3 + 8);
    *(undefined8 *)(IVar3 + 8) = uVar4;
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    uVar5 = *(undefined8 *)(IVar3 + 0x58);
    *(undefined8 *)(IVar3 + 0x58) = 0;
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(*(undefined8 *)(IVar3 + 8),"bytes");
    *(undefined8 *)(IVar3 + 0x30) = uVar5;
    uVar5 = (*(code *)puVar1)(*(undefined8 *)(IVar3 + 8),"length");
    *(undefined8 *)(IVar3 + 0x38) = uVar5;
    uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableArray,"array");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = *(undefined8 *)(IVar3 + 0x10);
    *(undefined8 *)(IVar3 + 0x10) = uVar4;
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSData,"dataWithBytes:length:",
                              "rkosftabNSt3__120__shared_ptr_pointerIP16RoseCapabilitiesNS_10shared_ptrIS1_E27__shared_ptr_default_deleteIS1_S1_EENS_9allocatorIS1_EEEE"
                              ,8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = *(undefined8 *)(IVar3 + 0x50);
    *(undefined8 *)(IVar3 + 0x50) = uVar4;
    (*(code *)puVar2)(uVar5);
  }
  return IVar3;
}

