// rea decompile_all
// name: FTABSubfileBackDeploy::initWithTag:data:
// address: 0x24144c
// body: available
// range: 0x24144c-0x241528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID FTABSubfileBackDeploy::initWithTag_data_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  objc_super local_40;
  
  puVar1 = PTR__objc_retain_004410a8;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar5 = (*(code *)puVar1)(param_4);
  local_40.super_class = &objc::class_t::FTABSubfileBackDeploy;
  local_40.receiver = param_1;
  IVar6 = _objc_msgSendSuper2(&local_40,"init");
  puVar1 = PTR__objc_msgSend_00441098;
  if (IVar6 != 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"copy");
    uVar8 = *(undefined8 *)(IVar6 + 0x18);
    *(undefined8 *)(IVar6 + 0x18) = uVar7;
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar8);
    uVar7 = (*(code *)puVar1)(uVar5,"copy");
    uVar8 = *(undefined8 *)(IVar6 + 8);
    *(undefined8 *)(IVar6 + 8) = uVar7;
    (*(code *)puVar2)(uVar8);
    uVar8 = (*(code *)puVar1)(*(undefined8 *)(IVar6 + 8),"bytes");
    *(undefined8 *)(IVar6 + 0x20) = uVar8;
    uVar3 = (*(code *)puVar1)(*(undefined8 *)(IVar6 + 8),"length");
    *(undefined4 *)(IVar6 + 0x10) = uVar3;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(uVar4);
  return IVar6;
}

