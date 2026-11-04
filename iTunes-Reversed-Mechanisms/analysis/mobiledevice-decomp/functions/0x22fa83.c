// rea decompile_all
// name: AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy::initWithOptions:logFunction:logContext:
// address: 0x22fa83
// body: available
// range: 0x22fa83-0x22fb34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

ID AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy::
   initWithOptions_logFunction_logContext_
             (ID param_1,SEL param_2,ID param_3,undefined4 *param_4,void *param_5)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  objc_super local_38;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_38.super_class = &objc::class_t::AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy;
  local_38.receiver = param_1;
  IVar4 = _objc_msgSendSuper2(&local_38,"initWithOptions:logFunction:logContext:",uVar3,param_4,
                              param_5);
  if (IVar4 == 0) {
LAB_0022fb01:
    IVar5 = (*(code *)PTR__objc_retain_004410a8)(IVar4);
  }
  else {
    cVar2 = (*(code *)PTR__objc_msgSend_00441098)(IVar4,"parseOptions:",uVar3);
    if (cVar2 != '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_00441098)(IVar4,"generateRequestDictionary");
      if (cVar2 != '\0') goto LAB_0022fb01;
    }
    IVar5 = 0;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)puVar1)(IVar4);
  return IVar5;
}

