// rea decompile_all
// name: _AppleTypeCRetimerRestoreInfoCreateRequest
// address: 0x23e147
// body: available
// range: 0x23e147-0x23e25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AppleTypeCRetimerRestoreInfoCreateRequest
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  class_t *pcVar7;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)();
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"objectForKeyedSubscript:",&cf_DeviceInfo);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,"objectForKeyedSubscript:",&cf_InfoArray);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  if (lVar5 == 0) {
    pcVar7 = &objc::class_t::AppleTypeCRetimerFirmwareRequestCreatorBackDeploy;
  }
  else {
    pcVar7 = &objc::class_t::AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy;
  }
  uVar4 = _objc_alloc(pcVar7);
  lVar5 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar4,"initWithOptions:logFunction:logContext:",uVar2,param_2,param_3);
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"requestDictionary");
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar2);
  }
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  if (lVar6 != 0) {
    (*(code *)PTR__objc_retain_004410a8)(lVar6);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar6);
  (*(code *)puVar1)(uVar3);
  return lVar6;
}

