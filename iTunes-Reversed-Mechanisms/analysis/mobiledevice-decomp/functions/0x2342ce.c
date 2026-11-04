// rea decompile_all
// name: UARPSuperBinaryPayloadBackDeploy::initWithData:metaData:tag:version:
// address: 0x2342ce
// body: available
// range: 0x2342ce-0x2344b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID UARPSuperBinaryPayloadBackDeploy::initWithData_metaData_tag_version_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  objc_super local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_40 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  uVar4 = (*(code *)puVar1)(param_5);
  uVar5 = (*(code *)puVar1)(param_6);
  local_58.super_class = &objc::class_t::UARPSuperBinaryPayloadBackDeploy;
  local_58.receiver = param_1;
  IVar6 = _objc_msgSendSuper2(&local_58,"init");
  puVar1 = PTR__objc_msgSend_00441098;
  if (IVar6 != 0) {
    local_38 = uVar3;
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"copy");
    uVar3 = *(undefined8 *)(IVar6 + 0x78);
    *(undefined8 *)(IVar6 + 0x78) = uVar7;
    puVar2 = PTR__objc_release_004410a0;
    local_48 = uVar4;
    (*(code *)PTR__objc_release_004410a0)(uVar3);
    uVar4 = (*(code *)puVar1)(uVar5,"copy");
    uVar3 = *(undefined8 *)(IVar6 + 0x80);
    *(undefined8 *)(IVar6 + 0x80) = uVar4;
    (*(code *)puVar2)(uVar3);
    uVar4 = (*(code *)puVar1)(local_40,"copy");
    uVar3 = *(undefined8 *)(IVar6 + 0x88);
    *(undefined8 *)(IVar6 + 0x88) = uVar4;
    (*(code *)puVar2)(uVar3);
    uVar4 = (*(code *)puVar1)(local_38,"copy");
    uVar3 = *(undefined8 *)(IVar6 + 0x90);
    *(undefined8 *)(IVar6 + 0x90) = uVar4;
    (*(code *)puVar2)(uVar3);
    uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableArray,"new");
    uVar3 = *(undefined8 *)(IVar6 + 8);
    *(undefined8 *)(IVar6 + 8) = uVar4;
    (*(code *)puVar2)(uVar3);
    uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableArray,"new");
    uVar3 = *(undefined8 *)(IVar6 + 0x50);
    *(undefined8 *)(IVar6 + 0x50) = uVar4;
    (*(code *)puVar2)(uVar3);
    uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableDictionary,"new");
    uVar3 = *(undefined8 *)(IVar6 + 0x28);
    *(undefined8 *)(IVar6 + 0x28) = uVar4;
    (*(code *)puVar2)(uVar3);
    uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableArray,"new");
    uVar3 = *(undefined8 *)(IVar6 + 0x58);
    *(undefined8 *)(IVar6 + 0x58) = uVar4;
    (*(code *)puVar2)(uVar3);
    uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableArray,"new");
    uVar3 = *(undefined8 *)(IVar6 + 0x60);
    *(undefined8 *)(IVar6 + 0x60) = uVar4;
    (*(code *)puVar2)(uVar3);
    uVar3 = _objc_alloc(&objc::class_t::FTABFileBackDeploy);
    uVar7 = (*(code *)puVar1)(uVar3,"initWithData:",*(undefined8 *)(IVar6 + 0x88));
    uVar3 = local_38;
    uVar4 = *(undefined8 *)(IVar6 + 0x18);
    *(undefined8 *)(IVar6 + 0x18) = uVar7;
    (*(code *)puVar2)(uVar4);
    uVar4 = local_48;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(local_40);
  return IVar6;
}

