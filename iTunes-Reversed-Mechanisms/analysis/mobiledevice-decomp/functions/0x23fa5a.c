// rea decompile_all
// name: UARPAssetVersionBackDeploy::initWithBVERString:
// address: 0x23fa5a
// body: available
// range: 0x23fa5a-0x23fc11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID UARPAssetVersionBackDeploy::initWithBVERString_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ID IVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"componentsSeparatedByString:",&cf__);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_38 = 0;
  uVar4 = (*(code *)puVar1)(uVar3,"objectAtIndexedSubscript:",0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,"componentsSeparatedByString:",&cf__);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  lVar6 = (*(code *)puVar1)(uVar5,"count");
  puVar1 = PTR__objc_msgSend_00441098;
  uVar9 = 0;
  uVar10 = 0;
  uVar4 = 0;
  if (lVar6 == 3) {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"objectAtIndexedSubscript:",0);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)puVar1)(uVar9,"integerValue");
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar9);
    uVar9 = (*(code *)puVar1)(uVar5,"objectAtIndexedSubscript:",1);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    local_38 = (*(code *)puVar1)(uVar9,"longLongValue");
    (*(code *)puVar2)(uVar9);
    puVar1 = PTR__objc_msgSend_00441098;
    uVar10 = local_38 >> 0x20;
    local_38 = local_38 & 0xffffffff;
    uVar9 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"objectAtIndexedSubscript:",2);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar9);
    uVar9 = (*(code *)puVar1)(uVar7,"integerValue");
    (*(code *)puVar2)(uVar7);
  }
  IVar8 = (*(code *)PTR__objc_msgSend_00441098)
                    (param_1,"initWithMajorVersion:minorVersion:releaseVersion:buildVersion:",uVar4,
                     uVar10,local_38,uVar9);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(uVar3);
  return IVar8;
}

