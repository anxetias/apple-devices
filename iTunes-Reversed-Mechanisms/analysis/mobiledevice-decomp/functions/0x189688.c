// rea decompile_all
// name: Ace3SoCRestoreInfoHelperBackDeploy::initWithOptions:logFunction:logContext:
// address: 0x189688
// body: available
// range: 0x189688-0x1897a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

ID Ace3SoCRestoreInfoHelperBackDeploy::initWithOptions_logFunction_logContext_
             (ID param_1,SEL param_2,ID param_3,undefined4 *param_4,void *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  objc_super local_40;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_40.super_class = &objc::class_t::Ace3SoCRestoreInfoHelperBackDeploy;
  local_40.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar3 != 0) {
    *(undefined4 **)(IVar3 + 8) = param_4;
    *(void **)(IVar3 + 0x10) = param_5;
    puVar1 = PTR__objc_msgSend_00441098;
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"objectForKeyedSubscript:",&cf_Options);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(uVar4,"objectForKeyedSubscript:",&cf_Verbose);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_004410a0)(lVar6);
    if (lVar6 != 0) {
      *(undefined1 *)(IVar3 + 0x18) = 1;
    }
    uVar5 = _objc_opt_class(IVar3);
    uVar5 = _NSStringFromClass(uVar5);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_msgSend_00441098)(IVar3,"verboseLog:",&cf____options___,uVar5,uVar2);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    (*(code *)puVar1)(uVar4);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  return IVar3;
}

