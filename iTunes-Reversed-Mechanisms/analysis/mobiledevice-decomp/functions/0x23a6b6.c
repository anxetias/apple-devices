// rea decompile_all
// name: AppleTypeCRetimerFirmwareCopierBackDeploy::createDestinationBundleFirmwareDirectoryFor:error:
// address: 0x23a6b6
// body: available
// range: 0x23a6b6-0x23a7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char AppleTypeCRetimerFirmwareCopierBackDeploy::createDestinationBundleFirmwareDirectoryFor_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSURL,"fileURLWithPath:");
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,"URLByDeletingLastPathComponent");
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(uVar5,"path");
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  cVar3 = (*(code *)puVar1)(uVar6,
                            "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                            uVar7,1,0,param_4);
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  (*(code *)puVar2)(uVar6);
  puVar1 = PTR__objc_msgSend_00441098;
  if (cVar3 == '\0') {
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"path");
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(param_1,"log:",&cf_Failedtocreatedestinationbundlefirmwaredirectoryat________,
                      uVar6,*param_4);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
  }
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  return cVar3;
}

