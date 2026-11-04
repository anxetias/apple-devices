// rea decompile_all
// name: AppleTypeCRetimerFirmwareCopierBackDeploy::readFirmwareFileDataWithError:
// address: 0x23acc3
// body: available
// range: 0x23acc3-0x23adc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23ad0e to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID AppleTypeCRetimerFirmwareCopierBackDeploy::readFirmwareFileDataWithError_
             (ID param_1,SEL param_2,ID *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 in_RAX;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  lVar2 = _firmwareBundleURL;
  if ((*(long *)(param_1 + _firmwareOverrideData) == 0) &&
     (*(long *)(param_1 + _firmwareInBundleDataDict) == 0)) {
    local_38 = 0;
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                      (&_OBJC_CLASS___NSData,"dataWithContentsOfURL:options:error:",
                       *(undefined8 *)(param_1 + _firmwareBundleURL),0,&local_38);
    lVar3 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = (*(code *)PTR__objc_retain_004410a8)(local_38);
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar3 == 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + lVar2),"path");
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(param_1,"log:",&cf_Failedtoreadfirmwarefileat________,uVar6,uVar5);
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      if (param_3 != (ID *)0x0) {
        IVar4 = _objc_retainAutorelease(uVar5);
        *param_3 = IVar4;
      }
    }
    (*(code *)PTR__objc_release_004410a0)(uVar5);
  }
  else {
    local_38 = in_RAX;
    lVar3 = (*(code *)PTR__objc_retain_004410a8)();
  }
  IVar4 = _objc_autoreleaseReturnValue(lVar3);
  return IVar4;
}

