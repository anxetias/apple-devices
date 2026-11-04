// rea decompile_all
// name: FTABFileBackDeploy::initWithData:
// address: 0x237cd2
// body: available
// range: 0x237cd2-0x237d7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID FTABFileBackDeploy::initWithData_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  ID IVar7;
  objc_super local_38;
  
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_38.super_class = &objc::class_t::FTABFileBackDeploy;
  local_38.receiver = param_1;
  IVar5 = _objc_msgSendSuper2(&local_38,"init");
  puVar2 = PTR__objc_msgSend_00441098;
  if (IVar5 != 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"copy");
    uVar1 = *(undefined8 *)(IVar5 + 8);
    *(undefined8 *)(IVar5 + 8) = uVar6;
    (*(code *)PTR__objc_release_004410a0)(uVar1);
    cVar3 = (*(code *)puVar2)(IVar5,"initFile");
    if (cVar3 == '\0') {
      IVar7 = 0;
      goto LAB_00237d5a;
    }
  }
  IVar7 = (*(code *)PTR__objc_retain_004410a8)(IVar5);
LAB_00237d5a:
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar2)(IVar5);
  return IVar7;
}

