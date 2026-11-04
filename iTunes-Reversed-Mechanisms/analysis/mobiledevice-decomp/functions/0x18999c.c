// rea decompile_all
// name: Ace3RestoreInfoFirmwareCopierBackDeploy::firmwareKeyFromBuildIdentityDict:deviceInfo:
// address: 0x18999c
// body: available
// range: 0x18999c-0x189a78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x189a74 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID Ace3RestoreInfoFirmwareCopierBackDeploy::firmwareKeyFromBuildIdentityDict_deviceInfo_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  
  puVar1 = PTR__objc_retain_004410a8;
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  lVar3 = (*(code *)puVar1)(param_4);
  (*(code *)PTR__objc_msgSend_00441098)
            (param_1,"verboseLog:",&cf__s,
             "-[Ace3RestoreInfoFirmwareCopierBackDeploy firmwareKeyFromBuildIdentityDict:deviceInfo:]"
            );
  puVar1 = PTR__objc_msgSend_00441098;
  if (lVar3 == 0) {
    uVar4 = 0;
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Error_Couldnotfinddeviceinfodictionary)
    ;
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (lVar3,"objectForKeyedSubscript:",&cf_ManifestPrefix);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)puVar1)(uVar2,"keyWithPrefix:",uVar5);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_release_004410a0)(uVar5);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar3);
  (*(code *)puVar1)(uVar2);
  IVar6 = _objc_autoreleaseReturnValue(uVar4);
  return IVar6;
}

