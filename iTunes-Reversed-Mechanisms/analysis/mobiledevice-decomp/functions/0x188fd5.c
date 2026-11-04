// rea decompile_all
// name: Ace3SoCRestoreInfoFirmwareCopierBackDeploy::copyFirmwareToDestinationBundleWithError:
// address: 0x188fd5
// body: available
// range: 0x188fd5-0x1894a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char Ace3SoCRestoreInfoFirmwareCopierBackDeploy::copyFirmwareToDestinationBundleWithError_
               (ID param_1,SEL param_2,ID *param_3)

{
  undefined *puVar1;
  long lVar2;
  ID *pIVar3;
  char cVar4;
  char cVar5;
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
  undefined8 local_48;
  ID *local_40;
  ID local_38;
  
  lVar2 = _firmwarePathSuffix;
  puVar1 = PTR__objc_msgSend_00441098;
  if ((*(long *)(param_1 + _destBundlePathURL) == 0) ||
     (*(long *)(param_1 + _firmwarePathSuffix) == 0)) {
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Notcopyingfirmwaretodestinationbundle);
    return '\x01';
  }
  local_40 = param_3;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(*(long *)(param_1 + _destBundlePathURL),"path");
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_38 = param_1;
  uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______,uVar6,
                            *(undefined8 *)(param_1 + lVar2));
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  local_68 = uVar7;
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar7);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  local_50 = _objc_retainAutoreleasedReturnValue(uVar7);
  local_48 = uVar6;
  uVar6 = (*(code *)puVar1)(uVar6,"URLByDeletingLastPathComponent");
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  local_60 = uVar6;
  uVar6 = (*(code *)puVar1)(uVar6,"path");
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_80 = 0;
  cVar4 = (*(code *)puVar1)(uVar7,
                            "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                            uVar6,1,0,&local_80);
  uVar8 = (*(code *)PTR__objc_retain_004410a8)(local_80);
  pcVar10 = (code *)PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*pcVar10)(uVar7);
  local_58 = uVar8;
  if ((cVar4 == '\0') &&
     (cVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"isFileExistsError"), cVar4 == '\0')) {
    uVar6 = (*(code *)puVar1)(local_60,"path");
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar4 = '\0';
    (*(code *)puVar1)(local_38,"log:",&cf_Failedtocreatedirectoryat________,uVar6,uVar8);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    pIVar3 = local_40;
    uVar6 = local_48;
    if (local_40 == (ID *)0x0) goto LAB_00189470;
    IVar9 = _objc_retainAutorelease(local_58);
    *pIVar3 = IVar9;
LAB_001893d3:
    cVar4 = '\0';
  }
  else {
    uVar6 = local_48;
    uVar7 = (*(code *)puVar1)(local_48,"path");
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar4 = (*(code *)puVar1)(local_50,"fileExistsAtPath:",uVar7);
    (*(code *)PTR__objc_release_004410a0)(uVar7);
    if (cVar4 != '\0') {
      local_78 = 0;
      cVar4 = (*(code *)PTR__objc_msgSend_00441098)
                        (local_50,"removeItemAtURL:error:",uVar6,&local_78);
      uVar7 = (*(code *)PTR__objc_retain_004410a8)(local_78);
      puVar1 = PTR__objc_msgSend_00441098;
      if (cVar4 == '\0') {
        uVar8 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"path");
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        (*(code *)puVar1)(local_38,"log:",&cf_Failedtoremovefileat________,uVar8,uVar7);
        (*(code *)PTR__objc_release_004410a0)(uVar8);
        pIVar3 = local_40;
        if (local_40 != (ID *)0x0) {
          IVar9 = _objc_retainAutorelease(uVar7);
          *pIVar3 = IVar9;
        }
        (*(code *)PTR__objc_release_004410a0)(uVar7);
        goto LAB_001893d3;
      }
      (*(code *)PTR__objc_release_004410a0)(uVar7);
    }
    IVar9 = local_38;
    puVar1 = PTR__objc_msgSend_00441098;
    if (*(long *)(local_38 + _firmwareOverrideData) == 0) {
      uVar7 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSFileManager,"defaultManager");
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      local_70 = 0;
      cVar4 = (*(code *)puVar1)(uVar7,"copyItemAtURL:toURL:error:",
                                *(undefined8 *)(IVar9 + _firmwareBundleURL),uVar6,&local_70);
      uVar8 = (*(code *)PTR__objc_retain_004410a8)(local_70);
      (*(code *)PTR__objc_release_004410a0)(uVar7);
      puVar1 = PTR__objc_msgSend_00441098;
      if (cVar4 == '\0') {
        uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                          (*(undefined8 *)(IVar9 + _firmwareBundleURL),"path");
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar6 = (*(code *)puVar1)(uVar6,"path");
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)puVar1)(IVar9,"log:",&cf_Failedtocopyfirmwarefrom____to________,uVar7,uVar6,uVar8)
        ;
        pcVar10 = (code *)PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar6);
        (*pcVar10)(uVar7);
        pIVar3 = local_40;
        if (local_40 != (ID *)0x0) {
          IVar9 = _objc_retainAutorelease(uVar8);
          *pIVar3 = IVar9;
        }
        (*(code *)PTR__objc_release_004410a0)(uVar8);
        cVar4 = '\0';
        uVar6 = local_48;
      }
      else {
        (*(code *)PTR__objc_release_004410a0)(uVar8);
        cVar4 = '\x01';
        pcVar10 = (code *)PTR__objc_release_004410a0;
      }
    }
    else {
      cVar5 = (*(code *)PTR__objc_msgSend_00441098)
                        (*(long *)(local_38 + _firmwareOverrideData),"writeToURL:atomically:",uVar6,
                         1);
      puVar1 = PTR__objc_msgSend_00441098;
      cVar4 = '\x01';
      if (cVar5 == '\0') {
        uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"path");
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        cVar4 = '\0';
        (*(code *)puVar1)(local_38,"log:",&cf_Failedtowritefirmwarefiledatato____,uVar7);
        (*(code *)PTR__objc_release_004410a0)(uVar7);
      }
    }
  }
LAB_00189470:
  (*pcVar10)(local_58);
  (*pcVar10)(local_60);
  (*pcVar10)(local_50);
  (*pcVar10)(uVar6);
  (*pcVar10)(local_68);
  return cVar4;
}

