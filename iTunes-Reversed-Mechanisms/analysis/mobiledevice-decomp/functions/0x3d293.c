// rea decompile_all
// name: IXRemoteInstallConfiguration::isEqual:
// address: 0x3d293
// body: available
// range: 0x3d293-0x3d9f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char IXRemoteInstallConfiguration::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  unsigned_char uVar4;
  char cVar5;
  ID IVar6;
  undefined8 uVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  IVar6 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  if (IVar6 == param_1) {
    cVar3 = '\x01';
    goto LAB_0003d449;
  }
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"class");
  cVar3 = (*(code *)puVar1)(IVar6,"isKindOfClass:",uVar7);
  puVar2 = PTR__objc_retain_004410a8;
  if (cVar3 == '\0') {
    cVar3 = '\0';
    goto LAB_0003d449;
  }
  uVar7 = (*(code *)PTR__objc_retain_004410a8)(IVar6);
  IVar8 = bundleID(param_1,"bundleID");
  uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
  uVar10 = (*(code *)puVar1)(uVar7,"bundleID");
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  lVar11 = (*(code *)puVar2)(uVar9);
  lVar12 = (*(code *)puVar2)(uVar10);
  if (((lVar11 != 0) == (lVar12 != 0)) &&
     ((lVar12 == 0 || lVar11 == 0 ||
      (cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar11,"isEqual:",lVar12), cVar3 != '\0')))) {
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar12);
    (*(code *)puVar1)(lVar11);
    (*(code *)puVar1)(lVar12);
    (*(code *)puVar1)(lVar11);
    puVar1 = PTR__objc_msgSend_00441098;
    IVar8 = localizedName(param_1,"localizedName");
    uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
    uVar10 = (*(code *)puVar1)(uVar7,"localizedName");
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    puVar1 = PTR__objc_retain_004410a8;
    lVar11 = (*(code *)PTR__objc_retain_004410a8)(uVar9);
    lVar12 = (*(code *)puVar1)(uVar10);
    if (((lVar11 != 0) != (lVar12 != 0)) ||
       ((lVar12 != 0 && lVar11 != 0 &&
        (cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar11,"isEqual:",lVar12), cVar3 == '\0'))))
    goto LAB_0003d419;
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar12);
    (*(code *)puVar1)(lVar11);
    (*(code *)puVar1)(lVar12);
    (*(code *)puVar1)(lVar11);
    puVar1 = PTR__objc_msgSend_00441098;
    uVar4 = installMode(param_1,"installMode");
    cVar3 = (*(code *)puVar1)(uVar7,"installMode");
    if (uVar4 == cVar3) {
      uVar4 = importance(param_1,"importance");
      cVar3 = (*(code *)puVar1)(uVar7,"importance");
      if (uVar4 != cVar3) goto LAB_0003d9e9;
      IVar8 = iconData(param_1,"iconData");
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar10 = (*(code *)puVar1)(uVar7,"iconData");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      puVar1 = PTR__objc_retain_004410a8;
      lVar11 = (*(code *)PTR__objc_retain_004410a8)(uVar9);
      lVar12 = (*(code *)puVar1)(uVar10);
      if (((lVar11 != 0) != (lVar12 != 0)) ||
         ((lVar12 != 0 && lVar11 != 0 &&
          (cVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar11,"isEqual:",lVar12), cVar3 == '\0')))
         ) goto LAB_0003d419;
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(lVar12);
      (*(code *)puVar1)(lVar11);
      (*(code *)puVar1)(lVar12);
      (*(code *)puVar1)(lVar11);
      puVar1 = PTR__objc_msgSend_00441098;
      uVar4 = iconType(param_1,"iconType");
      cVar3 = (*(code *)puVar1)(uVar7,"iconType");
      if (uVar4 != cVar3) goto LAB_0003d9e9;
      uVar4 = stashMode(param_1,"stashMode");
      cVar3 = (*(code *)puVar1)(uVar7,"stashMode");
      if (uVar4 != cVar3) goto LAB_0003d9e9;
      IVar8 = deltaDirectoryURL(param_1,"deltaDirectoryURL");
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar10 = (*(code *)puVar1)(uVar7,"deltaDirectoryURL");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar3 = __CompareObjects(uVar9,uVar10);
      puVar2 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar2)(uVar9);
      if (cVar3 == '\0') goto LAB_0003d9f1;
      uVar4 = pairedAutoInstallOverride(param_1,"pairedAutoInstallOverride");
      cVar3 = (*(code *)puVar1)(uVar7,"pairedAutoInstallOverride");
      if (uVar4 != cVar3) goto LAB_0003d9e9;
      IVar8 = storeMetadata(param_1,"storeMetadata");
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar10 = (*(code *)puVar1)(uVar7,"storeMetadata");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar3 = __CompareObjects(uVar9,uVar10);
      puVar2 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar2)(uVar9);
      if (cVar3 == '\0') {
LAB_0003d9f1:
        cVar3 = '\0';
        goto LAB_0003d43c;
      }
      IVar8 = sinfData(param_1,"sinfData");
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar10 = (*(code *)puVar1)(uVar7,"sinfData");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar3 = __CompareObjects(uVar9,uVar10);
      puVar2 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar2)(uVar9);
      if (cVar3 == '\0') goto LAB_0003d9f1;
      IVar8 = provisioningProfileDatas(param_1,"provisioningProfileDatas");
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar10 = (*(code *)puVar1)(uVar7,"provisioningProfileDatas");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar3 = __CompareObjects(uVar9,uVar10);
      puVar2 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar2)(uVar9);
      if (cVar3 == '\0') goto LAB_0003d9f1;
      cVar3 = provisioningProfileInstallFailureIsFatal
                        (param_1,"provisioningProfileInstallFailureIsFatal");
      cVar5 = (*(code *)puVar1)(uVar7,"provisioningProfileInstallFailureIsFatal");
      if (cVar3 != cVar5) goto LAB_0003d9e9;
      IVar8 = remoteInstallTargetURL(param_1,"remoteInstallTargetURL");
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar10 = (*(code *)puVar1)(uVar7,"remoteInstallTargetURL");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar3 = __CompareObjects(uVar9,uVar10);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar1)(uVar9);
      puVar1 = PTR__objc_msgSend_00441098;
      if (cVar3 == '\0') goto LAB_0003d9f1;
      IVar8 = remoteInstallTargetDirectoryURL(param_1,"remoteInstallTargetDirectoryURL");
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar10 = (*(code *)puVar1)(uVar7,"remoteInstallTargetDirectoryURL");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar3 = __CompareObjects(uVar9,uVar10);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar1)(uVar9);
      puVar1 = PTR__objc_msgSend_00441098;
      if (cVar3 == '\0') goto LAB_0003d9f1;
      IVar8 = remoteInstallTargetBundleName(param_1,"remoteInstallTargetBundleName");
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar10 = (*(code *)puVar1)(uVar7,"remoteInstallTargetBundleName");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar3 = __CompareObjects(uVar9,uVar10);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar1)(uVar9);
      puVar1 = PTR__objc_msgSend_00441098;
      if (cVar3 == '\0') goto LAB_0003d9f1;
      uVar4 = installableType(param_1,"installableType");
      cVar3 = (*(code *)puVar1)(uVar7,"installableType");
      puVar1 = PTR__objc_msgSend_00441098;
      if (uVar4 != cVar3) goto LAB_0003d9f1;
      IVar8 = targetLastPathComponent(param_1,"targetLastPathComponent");
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar10 = (*(code *)puVar1)(uVar7,"targetLastPathComponent");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar3 = __CompareObjects(uVar9,uVar10);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar1)(uVar9);
      puVar1 = PTR__objc_msgSend_00441098;
      if (cVar3 == '\0') goto LAB_0003d9f1;
      IVar8 = bundleVersion(param_1,"bundleVersion");
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar10 = (*(code *)puVar1)(uVar7,"bundleVersion");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar3 = __CompareObjects(uVar9,uVar10);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar1)(uVar9);
      puVar1 = PTR__objc_msgSend_00441098;
      if (cVar3 == '\0') goto LAB_0003d9f1;
      IVar8 = geoJSONData(param_1,"geoJSONData");
      lVar11 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar9 = (*(code *)puVar1)(uVar7,"geoJSONData");
      lVar12 = _objc_retainAutoreleasedReturnValue(uVar9);
      cVar3 = __CompareObjects(lVar11,lVar12);
      goto LAB_0003d425;
    }
LAB_0003d9e9:
    cVar3 = '\0';
  }
  else {
LAB_0003d419:
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar12);
    (*(code *)puVar1)(lVar11);
    cVar3 = '\0';
LAB_0003d425:
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar12);
    (*(code *)puVar1)(lVar11);
  }
LAB_0003d43c:
  (*(code *)PTR__objc_release_004410a0)(uVar7);
LAB_0003d449:
  (*(code *)PTR__objc_release_004410a0)(IVar6);
  return cVar3;
}

