// rea decompile_all
// name: UARPAssetVersionBackDeploy::initWithVersionString:
// address: 0x23f75e
// body: available
// range: 0x23f75e-0x23fa59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID UARPAssetVersionBackDeploy::initWithVersionString_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined8 uVar8;
  undefined8 local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"componentsSeparatedByString:",&cf__);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  lVar3 = (*(code *)puVar1)(uVar2,"count");
  if (lVar3 == 1) {
    uVar6 = 0;
    uVar4 = (*(code *)puVar1)(uVar2,"objectAtIndexedSubscript:",0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_38 = (*(code *)puVar1)(uVar5,"integerValue");
LAB_0023f864:
    uVar4 = 0;
    uVar8 = 0;
  }
  else {
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"count");
    if (lVar3 == 2) {
      uVar6 = (*(code *)puVar1)(uVar2,"objectAtIndexedSubscript:",0);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_38 = (*(code *)puVar1)(uVar6,"integerValue");
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      uVar6 = (*(code *)puVar1)(uVar2,"objectAtIndexedSubscript:",1);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar5,"integerValue");
      goto LAB_0023f864;
    }
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"count");
    if (lVar3 == 3) {
      uVar8 = 0;
      uVar6 = (*(code *)puVar1)(uVar2,"objectAtIndexedSubscript:",0);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_38 = (*(code *)puVar1)(uVar6,"integerValue");
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      uVar6 = (*(code *)puVar1)(uVar2,"objectAtIndexedSubscript:",1);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar4,"integerValue");
      (*(code *)PTR__objc_release_004410a0)(uVar4);
      uVar4 = (*(code *)puVar1)(uVar2,"objectAtIndexedSubscript:",2);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar4 = (*(code *)puVar1)(uVar5,"integerValue");
    }
    else {
      lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"count");
      if (lVar3 != 4) {
        local_38 = 0;
        uVar6 = 0;
        uVar4 = 0;
        uVar8 = 0;
        goto LAB_0023f878;
      }
      uVar6 = (*(code *)puVar1)(uVar2,"objectAtIndexedSubscript:",0);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_38 = (*(code *)puVar1)(uVar6,"integerValue");
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      uVar6 = (*(code *)puVar1)(uVar2,"objectAtIndexedSubscript:",1);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar4,"integerValue");
      (*(code *)PTR__objc_release_004410a0)(uVar4);
      uVar4 = (*(code *)puVar1)(uVar2,"objectAtIndexedSubscript:",2);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar4 = (*(code *)puVar1)(uVar8,"integerValue");
      (*(code *)PTR__objc_release_004410a0)(uVar8);
      uVar8 = (*(code *)puVar1)(uVar2,"objectAtIndexedSubscript:",3);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar8 = (*(code *)puVar1)(uVar5,"integerValue");
    }
  }
  (*(code *)PTR__objc_release_004410a0)(uVar5);
LAB_0023f878:
  IVar7 = (*(code *)PTR__objc_msgSend_00441098)
                    (param_1,"initWithMajorVersion:minorVersion:releaseVersion:buildVersion:",
                     local_38,uVar6,uVar4,uVar8);
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  return IVar7;
}

