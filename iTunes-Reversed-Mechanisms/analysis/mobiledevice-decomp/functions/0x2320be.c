// rea decompile_all
// name: UARPAssetTagBackDeploy::isEqual:
// address: 0x2320be
// body: available
// range: 0x2320be-0x2321ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char UARPAssetTagBackDeploy::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  ID IVar4;
  undefined8 uVar5;
  bool bVar6;
  
  IVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&objc::class_t::UARPAssetTagBackDeploy,"class");
  cVar2 = (*(code *)puVar1)(IVar4,"isKindOfClass:",uVar5);
  if (cVar2 == '\0') {
    bVar6 = false;
    goto LAB_00232197;
  }
  if (param_1 == IVar4) {
    bVar6 = true;
    goto LAB_00232197;
  }
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(IVar4);
  cVar2 = *(char *)(param_1 + 8);
  cVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"char1");
  if (cVar2 == cVar3) {
    cVar2 = *(char *)(param_1 + 9);
    cVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"char2");
    if (cVar2 != cVar3) goto LAB_00232186;
    cVar2 = *(char *)(param_1 + 10);
    cVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"char3");
    if (cVar2 != cVar3) goto LAB_00232186;
    cVar2 = *(char *)(param_1 + 0xb);
    cVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"char4");
    bVar6 = cVar2 == cVar3;
  }
  else {
LAB_00232186:
    bVar6 = false;
  }
  (*(code *)PTR__objc_release_004410a0)(uVar5);
LAB_00232197:
  (*(code *)PTR__objc_release_004410a0)(IVar4);
  return bVar6;
}

