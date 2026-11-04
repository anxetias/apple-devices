// rea decompile_all
// name: AppleTypeCRetimerFirmwareCopierBackDeploy::copyFirmwareToDestinationBundleWithError:
// address: 0x23a7d8
// body: available
// range: 0x23a7d8-0x23acc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char AppleTypeCRetimerFirmwareCopierBackDeploy::copyFirmwareToDestinationBundleWithError_
               (ID param_1,SEL param_2,ID *param_3)

{
  undefined *puVar1;
  ID *pIVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  code *pcVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ID *local_48;
  ID local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  if (*(long *)(param_1 + _destBundlePathURL) == 0) {
    return '\x01';
  }
  local_48 = param_3;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(*(long *)(param_1 + _destBundlePathURL),"path");
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_40 = param_1;
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______,uVar5,
                            *(undefined8 *)(param_1 + _firmwarePathSuffix));
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  local_68 = uVar6;
  uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar6);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  local_38 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_50 = uVar5;
  uVar5 = (*(code *)puVar1)(uVar5,"URLByDeletingLastPathComponent");
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_60 = uVar5;
  uVar5 = (*(code *)puVar1)(uVar5,"path");
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_80 = 0;
  cVar3 = (*(code *)puVar1)(uVar6,
                            "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                            uVar5,1,0,&local_80);
  pcVar10 = (code *)PTR__objc_release_004410a0;
  uVar7 = (*(code *)PTR__objc_retain_004410a8)(local_80);
  (*pcVar10)(uVar5);
  (*pcVar10)(uVar6);
  local_58 = uVar7;
  if ((cVar3 == '\0') &&
     (cVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"isFileExistsError"),
     puVar1 = PTR__objc_msgSend_00441098, cVar3 == '\0')) {
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(local_60,"path");
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = '\0';
    (*(code *)puVar1)(local_40,"log:",&cf_Failedtocreatedirectoryat________,uVar5,uVar7);
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    uVar6 = local_38;
    pIVar2 = local_48;
    uVar5 = local_50;
    if (local_48 != (ID *)0x0) {
      IVar9 = _objc_retainAutorelease(local_58);
      *pIVar2 = IVar9;
      cVar3 = '\0';
    }
  }
  else {
    uVar5 = local_50;
    puVar1 = PTR__objc_msgSend_00441098;
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_50,"path");
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar3 = (*(code *)puVar1)(local_38,"fileExistsAtPath:",uVar6);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    if (cVar3 != '\0') {
      local_78 = 0;
      cVar3 = (*(code *)PTR__objc_msgSend_00441098)
                        (local_38,"removeItemAtURL:error:",uVar5,&local_78);
      uVar6 = (*(code *)PTR__objc_retain_004410a8)(local_78);
      puVar1 = PTR__objc_msgSend_00441098;
      if (cVar3 == '\0') {
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"path");
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)puVar1)(local_40,"log:",&cf_Failedtoremovefileat________,uVar5,uVar6);
        (*(code *)PTR__objc_release_004410a0)(uVar5);
        pIVar2 = local_48;
        if (local_48 != (ID *)0x0) {
          IVar9 = _objc_retainAutorelease(uVar6);
          *pIVar2 = IVar9;
        }
        (*(code *)PTR__objc_release_004410a0)(uVar6);
        cVar3 = '\0';
        uVar6 = local_38;
        uVar5 = local_50;
        goto LAB_0023ac8f;
      }
      (*(code *)PTR__objc_release_004410a0)(uVar6);
    }
    uVar6 = local_38;
    IVar9 = local_40;
    puVar1 = PTR__objc_msgSend_00441098;
    if (*(long *)(local_40 + _firmwareOverrideData) == 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSFileManager,"defaultManager");
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_70 = 0;
      cVar3 = (*(code *)puVar1)(uVar6,"copyItemAtURL:toURL:error:",
                                *(undefined8 *)(IVar9 + _firmwareBundleURL),uVar5,&local_70);
      uVar7 = (*(code *)PTR__objc_retain_004410a8)(local_70);
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      puVar1 = PTR__objc_msgSend_00441098;
      if (cVar3 == '\0') {
        uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                          (*(undefined8 *)(IVar9 + _firmwareBundleURL),"path");
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar8 = (*(code *)puVar1)(uVar5,"path");
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        (*(code *)puVar1)(IVar9,"log:",&cf_Failedtocopyfirmwarefrom____to________,uVar6,uVar8,uVar7)
        ;
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar8);
        (*(code *)puVar1)(uVar6);
        pIVar2 = local_48;
        if (local_48 != (ID *)0x0) {
          IVar9 = _objc_retainAutorelease(uVar7);
          *pIVar2 = IVar9;
        }
        (*(code *)PTR__objc_release_004410a0)(uVar7);
        cVar3 = '\0';
        uVar6 = local_38;
        pcVar10 = (code *)PTR__objc_release_004410a0;
      }
      else {
        (*(code *)PTR__objc_release_004410a0)(uVar7);
        cVar3 = '\x01';
        uVar6 = local_38;
        pcVar10 = (code *)PTR__objc_release_004410a0;
      }
    }
    else {
      cVar4 = (*(code *)PTR__objc_msgSend_00441098)
                        (*(long *)(local_40 + _firmwareOverrideData),"writeToURL:atomically:",uVar5,
                         1);
      puVar1 = PTR__objc_msgSend_00441098;
      cVar3 = '\x01';
      if (cVar4 == '\0') {
        uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"path");
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        cVar3 = '\0';
        (*(code *)puVar1)(local_40,"log:",&cf_Failedtowritefirmwarefiledatato____,uVar7);
        (*(code *)PTR__objc_release_004410a0)(uVar7);
      }
    }
  }
LAB_0023ac8f:
  (*pcVar10)(local_58);
  (*pcVar10)(local_60);
  (*pcVar10)(uVar6);
  (*pcVar10)(uVar5);
  (*pcVar10)(local_68);
  return cVar3;
}

