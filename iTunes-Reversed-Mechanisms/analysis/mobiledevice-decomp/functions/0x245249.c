// rea decompile_all
// name: PS190RestoreInfoFirmwareCopierBackDeploy::initWithOptions:logFunction:logContext:
// address: 0x245249
// body: available
// range: 0x245249-0x245403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

ID PS190RestoreInfoFirmwareCopierBackDeploy::initWithOptions_logFunction_logContext_
             (ID param_1,SEL param_2,ID param_3,undefined4 *param_4,void *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ID IVar9;
  objc_super local_40;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_40.super_class = &objc::class_t::PS190RestoreInfoFirmwareCopierBackDeploy;
  local_40.receiver = param_1;
  IVar4 = _objc_msgSendSuper2(&local_40,"initWithOptions:logFunction:logContext:",uVar3,param_4,
                              param_5);
  puVar1 = PTR__objc_msgSend_00441098;
  if (IVar4 != 0) {
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar3,"objectForKeyedSubscript:",&cf_BuildIdentity);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,"valueForKeyWithSuffix:",&cf__BoardID);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    if (lVar7 == 0) {
      IVar9 = 0;
      (*(code *)PTR__objc_msgSend_00441098)
                (IVar4,"log:",&cf__s_FailedtolocateboardID,
                 "-[PS190RestoreInfoFirmwareCopierBackDeploy initWithOptions:logFunction:logContext:]"
                );
      (*(code *)PTR__objc_release_004410a0)(uVar5);
      goto LAB_002453df;
    }
    uVar2 = (*(code *)puVar1)(lVar7,"unsignedIntValue");
    *(undefined4 *)(IVar4 + _boardID) = uVar2;
    uVar6 = (*(code *)puVar1)(uVar5,"valueForKeyWithSuffix:",&cf__SecurityDomain);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
    if (lVar8 == 0) {
      IVar9 = 0;
      (*(code *)PTR__objc_msgSend_00441098)
                (IVar4,"log:",&cf__s_Failedtolocatesecuritydomain,
                 "-[PS190RestoreInfoFirmwareCopierBackDeploy initWithOptions:logFunction:logContext:]"
                );
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(lVar7);
      (*(code *)puVar1)(uVar5);
      goto LAB_002453df;
    }
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"unsignedIntValue");
    *(undefined4 *)(IVar4 + _securityDomain) = uVar2;
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar8);
    (*(code *)puVar1)(lVar7);
    (*(code *)puVar1)(uVar5);
  }
  IVar9 = (*(code *)PTR__objc_retain_004410a8)(IVar4);
LAB_002453df:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)puVar1)(IVar4);
  return IVar9;
}

