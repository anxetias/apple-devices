// rea decompile_all
// name: AppleTypeCRetimerFirmwareCopierBackDeploy::parseOptions:
// address: 0x23a1bb
// body: available
// range: 0x23a1bb-0x23a53e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char AppleTypeCRetimerFirmwareCopierBackDeploy::parseOptions_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  cfstringStruct *pcVar13;
  char cVar14;
  
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"objectForKeyedSubscript:",&cf_BuildIdentity);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  if (lVar6 == 0) {
    cVar14 = '\0';
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Couldnotfindbuildidentitydictionary);
    goto LAB_0023a509;
  }
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"rtKitKeyFromBuildIdentityDict:",lVar6);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar1 = PTR__objc_msgSend_00441098;
  if (lVar7 == 0) {
    cVar14 = '\0';
    (*(code *)PTR__objc_msgSend_00441098)
              (param_1,"log:",&cf_CouldnotfindRTKitOSkeyinbuildidentitydictionary);
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"objectForKeyedSubscript:",lVar7);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar8 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_Info);
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar8);
    if (lVar9 == 0) {
      cVar14 = '\0';
      (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_CouldnotfindRTKitOSinfodictionary);
    }
    else {
      uVar8 = (*(code *)PTR__objc_msgSend_00441098)(lVar9,"objectForKeyedSubscript:",&cf_Path);
      lVar10 = _objc_retainAutoreleasedReturnValue(uVar8);
      puVar1 = PTR__objc_msgSend_00441098;
      if (lVar10 == 0) {
        pcVar13 = &cf_CouldnotfindRTKitOSpath;
LAB_0023a4d2:
        cVar14 = '\0';
        (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",pcVar13);
      }
      else {
        uVar11 = (*(code *)PTR__objc_msgSend_00441098)(lVar10,"copy");
        uVar8 = *(undefined8 *)(param_1 + _firmwarePathSuffix);
        *(undefined8 *)(param_1 + _firmwarePathSuffix) = uVar11;
        puVar2 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar8);
        uVar8 = (*(code *)puVar1)(uVar4,"objectForKeyedSubscript:",&cf_FirmwareData);
        uVar11 = _objc_retainAutoreleasedReturnValue(uVar8);
        lVar12 = _firmwareOverrideData;
        uVar8 = *(undefined8 *)(param_1 + _firmwareOverrideData);
        *(undefined8 *)(param_1 + _firmwareOverrideData) = uVar11;
        (*(code *)puVar2)(uVar8);
        if (*(long *)(param_1 + lVar12) == 0) {
          uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                            (uVar4,"objectForKeyedSubscript:",&cf_BundleDataDict);
          lVar12 = _objc_retainAutoreleasedReturnValue(uVar8);
          if (lVar12 != 0) {
            uVar8 = (*(code *)PTR__objc_msgSend_00441098)(lVar12,"objectForKeyedSubscript:",lVar7);
            uVar11 = _objc_retainAutoreleasedReturnValue(uVar8);
            lVar3 = _firmwareInBundleDataDict;
            uVar8 = *(undefined8 *)(param_1 + _firmwareInBundleDataDict);
            *(undefined8 *)(param_1 + _firmwareInBundleDataDict) = uVar11;
            (*(code *)PTR__objc_release_004410a0)(uVar8);
            (*(code *)PTR__objc_msgSend_00441098)
                      (param_1,"log:",&cf_Attempttouse____firmwarefromBundleDataDict___,lVar7,
                       *(undefined8 *)(param_1 + lVar3));
          }
          (*(code *)PTR__objc_release_004410a0)(lVar12);
          if ((*(long *)(param_1 + _firmwareOverrideData) == 0) &&
             (*(long *)(param_1 + _firmwareInBundleDataDict) == 0)) {
            uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                              (uVar4,"objectForKeyedSubscript:",&cf_BundlePath);
            lVar12 = _objc_retainAutoreleasedReturnValue(uVar8);
            if (lVar12 == 0) {
              pcVar13 = &cf_Couldnotfindbundlepath;
              goto LAB_0023a4d2;
            }
            uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                              (lVar12,"URLByAppendingPathComponent:",
                               *(undefined8 *)(param_1 + _firmwarePathSuffix));
            uVar11 = _objc_retainAutoreleasedReturnValue(uVar8);
            uVar8 = *(undefined8 *)(param_1 + _firmwareBundleURL);
            *(undefined8 *)(param_1 + _firmwareBundleURL) = uVar11;
            (*(code *)PTR__objc_release_004410a0)(uVar8);
            (*(code *)PTR__objc_release_004410a0)(lVar12);
          }
        }
        uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                          (uVar4,"objectForKeyedSubscript:",&cf_DestBundlePath);
        uVar11 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar8 = *(undefined8 *)(param_1 + _destBundlePathURL);
        *(undefined8 *)(param_1 + _destBundlePathURL) = uVar11;
        (*(code *)PTR__objc_release_004410a0)(uVar8);
        cVar14 = '\x01';
      }
      (*(code *)PTR__objc_release_004410a0)(lVar10);
    }
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar9);
    (*(code *)puVar1)(uVar5);
  }
  (*(code *)PTR__objc_release_004410a0)(lVar7);
LAB_0023a509:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar6);
  (*(code *)puVar1)(uVar4);
  return cVar14;
}

