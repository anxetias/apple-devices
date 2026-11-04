// rea decompile_all
// name: FTABFileBackDeploy::initWithContentsOfURL:
// address: 0x237b82
// body: available
// range: 0x237b82-0x237cd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID FTABFileBackDeploy::initWithContentsOfURL_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  objc_super local_48;
  undefined8 local_38;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_48.super_class = &objc::class_t::FTABFileBackDeploy;
  local_48.receiver = param_1;
  IVar4 = _objc_msgSendSuper2(&local_48,"init");
  if (IVar4 == 0) {
LAB_00237c53:
    IVar8 = (*(code *)PTR__objc_retain_004410a8)(IVar4);
  }
  else {
    local_38 = 0;
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                      (&_OBJC_CLASS___NSData,"dataWithContentsOfURL:options:error:",uVar3,1,
                       &local_38);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar7 = (*(code *)PTR__objc_retain_004410a8)(local_38);
    uVar5 = *(undefined8 *)(IVar4 + 8);
    *(undefined8 *)(IVar4 + 8) = uVar6;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    if (*(long *)(IVar4 + 8) == 0) {
      uVar5 = _os_log_create("com.apple.accessoryupdater.ftab","parsing");
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        __FTABFileBackDeploy_initWithContentsOfURL___cold_1(uVar3,uVar7,uVar5);
      }
      (*(code *)PTR__objc_release_004410a0)(uVar5);
    }
    else {
      cVar2 = (*(code *)PTR__objc_msgSend_00441098)(IVar4,"initFile");
      if (cVar2 != '\0') {
        _objc_storeStrong(IVar4 + 0x40,param_3);
        (*(code *)PTR__objc_release_004410a0)(uVar7);
        goto LAB_00237c53;
      }
    }
    (*(code *)PTR__objc_release_004410a0)(uVar7);
    IVar8 = 0;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)puVar1)(IVar4);
  return IVar8;
}

