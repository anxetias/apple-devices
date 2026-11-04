// rea decompile_all
// name: UARPAssetVersionBackDeploy::initWithCoder:
// address: 0x23fdb0
// body: available
// range: 0x23fdb0-0x23ff31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID UARPAssetVersionBackDeploy::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ID IVar10;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"class");
  uVar3 = (*(code *)puVar1)(uVar2,"decodeObjectOfClass:forKey:",uVar3,&cf_majorVersion);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
  uVar4 = (*(code *)puVar1)(uVar2,"decodeObjectOfClass:forKey:",uVar4,&cf_minorVersion);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
  uVar5 = (*(code *)puVar1)(uVar2,"decodeObjectOfClass:forKey:",uVar5,&cf_releaseVersion);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
  uVar6 = (*(code *)puVar1)(uVar2,"decodeObjectOfClass:forKey:",uVar6,&cf_buildVersion);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  uVar2 = (*(code *)puVar1)(uVar3,"unsignedIntegerValue");
  uVar7 = (*(code *)puVar1)(uVar4,"unsignedIntegerValue");
  uVar8 = (*(code *)puVar1)(uVar5,"unsignedIntegerValue");
  uVar9 = (*(code *)puVar1)(uVar6,"unsignedIntegerValue");
  IVar10 = (*(code *)puVar1)(param_1,
                             "initWithMajorVersion:minorVersion:releaseVersion:buildVersion:",uVar2,
                             uVar7,uVar8,uVar9);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return IVar10;
}

