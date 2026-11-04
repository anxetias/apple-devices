// rea decompile_all
// name: Ace3SoCRestoreInfoFirmwareCopierBackDeploy::parseOptions:
// address: 0x188b01
// body: available
// range: 0x188b01-0x188fd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char Ace3SoCRestoreInfoFirmwareCopierBackDeploy::parseOptions_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  char cVar11;
  long local_38;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"objectForKeyedSubscript:",&cf_BuildIdentity);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    cVar11 = '\0';
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Couldnotfindbuildidentitydictionary);
    goto LAB_00188efc;
  }
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"objectForKeyedSubscript:",&cf_DeviceInfo);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar5 == 0) {
    (*(code *)PTR__objc_msgSend_00441098)
              (param_1,"log:",&cf_Warning_Couldnotfinddeviceinfodictionary);
  }
  lVar6 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"count");
  if (lVar6 == 0) {
    local_38 = 0;
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Detectedemptybuildidentitydictionary);
LAB_00188cf0:
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar2,"objectForKeyedSubscript:",&cf_FirmwareData)
    ;
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar3);
    lVar6 = _firmwareOverrideData;
    uVar3 = *(undefined8 *)(param_1 + _firmwareOverrideData);
    *(undefined8 *)(param_1 + _firmwareOverrideData) = uVar7;
    (*(code *)PTR__objc_release_004410a0)(uVar3);
    if (*(long *)(param_1 + lVar6) == 0) {
      lVar8 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Detectedfirmwareoverride);
      lVar8 = *(long *)(param_1 + lVar6);
    }
    if ((lVar8 == 0) && (local_38 != 0)) {
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                        (uVar2,"objectForKeyedSubscript:",&cf_BundleDataDict);
      lVar8 = _objc_retainAutoreleasedReturnValue(uVar3);
      if (lVar8 != 0) {
        uVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"objectForKeyedSubscript:",local_38);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar3);
        uVar3 = *(undefined8 *)(param_1 + _firmwareInBundleDataDict);
        *(undefined8 *)(param_1 + _firmwareInBundleDataDict) = uVar7;
        (*(code *)PTR__objc_release_004410a0)(uVar3);
        (*(code *)PTR__objc_msgSend_00441098)
                  (param_1,"log:",&cf_Attempttouse____firmwarefromBundleDataDict___,local_38,
                   *(undefined8 *)(param_1 + _firmwareInBundleDataDict));
      }
      (*(code *)PTR__objc_release_004410a0)(lVar8);
      lVar8 = *(long *)(param_1 + lVar6);
    }
    lVar6 = _firmwarePathSuffix;
    if ((lVar8 == 0) && (*(long *)(param_1 + _firmwareInBundleDataDict) == 0)) {
      if (*(long *)(param_1 + _firmwarePathSuffix) == 0) {
        pcVar10 = &cf_Firmwareoverridemustbespecifiedifbuildidentitydictionaryisempty;
      }
      else {
        uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                          (uVar2,"objectForKeyedSubscript:",&cf_BundlePath);
        lVar8 = _objc_retainAutoreleasedReturnValue(uVar3);
        if (lVar8 != 0) {
          uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                            (lVar8,"URLByAppendingPathComponent:",*(undefined8 *)(param_1 + lVar6));
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar3);
          uVar3 = *(undefined8 *)(param_1 + _firmwareBundleURL);
          *(undefined8 *)(param_1 + _firmwareBundleURL) = uVar7;
          puVar1 = PTR__objc_release_004410a0;
          (*(code *)PTR__objc_release_004410a0)(uVar3);
          (*(code *)puVar1)(lVar8);
          goto LAB_00188e34;
        }
        pcVar10 = &cf_Couldnotfindbundlepath;
      }
      cVar11 = '\0';
      (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",pcVar10);
      (*(code *)PTR__objc_release_004410a0)(local_38);
    }
    else {
LAB_00188e34:
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                        (uVar2,"objectForKeyedSubscript:",&cf_DestBundlePath);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar3 = *(undefined8 *)(param_1 + _destBundlePathURL);
      *(undefined8 *)(param_1 + _destBundlePathURL) = uVar7;
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar3);
      (*(code *)puVar1)(local_38);
      cVar11 = '\x01';
    }
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                      (param_1,"firmwareKeyFromBuildIdentityDict:deviceInfo:",lVar4,lVar5);
    local_38 = _objc_retainAutoreleasedReturnValue(uVar3);
    puVar1 = PTR__objc_msgSend_00441098;
    if (local_38 == 0) {
      cVar11 = '\0';
      (*(code *)PTR__objc_msgSend_00441098)
                (param_1,"log:",&cf_Couldnotfindfirmwarekeyinbuildidentitydictionary);
    }
    else {
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"objectForKeyedSubscript:",local_38);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar7 = (*(code *)puVar1)(uVar3,"objectForKeyedSubscript:",&cf_Info);
      lVar6 = _objc_retainAutoreleasedReturnValue(uVar7);
      if (lVar6 == 0) {
        (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Couldnotfindfirmwareinfodictionary)
        ;
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar3);
        (*(code *)puVar1)(local_38);
      }
      else {
        uVar7 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"objectForKeyedSubscript:",&cf_Path);
        lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
        if (lVar8 != 0) {
          uVar9 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,"copy");
          uVar7 = *(undefined8 *)(param_1 + _firmwarePathSuffix);
          *(undefined8 *)(param_1 + _firmwarePathSuffix) = uVar9;
          puVar1 = PTR__objc_release_004410a0;
          (*(code *)PTR__objc_release_004410a0)(uVar7);
          (*(code *)puVar1)(lVar8);
          (*(code *)puVar1)(lVar6);
          (*(code *)puVar1)(uVar3);
          goto LAB_00188cf0;
        }
        (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Couldnotfindfirmwarepath);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(lVar6);
        (*(code *)puVar1)(uVar3);
        (*(code *)puVar1)(local_38);
      }
      cVar11 = '\0';
    }
  }
  (*(code *)PTR__objc_release_004410a0)(lVar5);
LAB_00188efc:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar4);
  (*(code *)puVar1)(uVar2);
  return cVar11;
}

