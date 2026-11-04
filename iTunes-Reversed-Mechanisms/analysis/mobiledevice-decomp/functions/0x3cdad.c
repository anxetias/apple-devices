// rea decompile_all
// name: IXRemoteInstallConfiguration::copyWithZone:
// address: 0x3cdad
// body: available
// range: 0x3cdad-0x3d292 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID IXRemoteInstallConfiguration::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  unsigned_char uVar3;
  char cVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  
  puVar1 = PTR__objc_msgSend_00441098;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"class");
  IVar6 = (*(code *)puVar1)(uVar5,"allocWithZone:",param_3);
  IVar7 = bundleID(param_1,"bundleID");
  IVar7 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar8 = localizedName(param_1,"localizedName");
  IVar8 = _objc_retainAutoreleasedReturnValue(IVar8);
  uVar3 = installMode(param_1,"installMode");
  IVar6 = initForAppWithBundleID_localizedName_installMode_
                    (IVar6,"initForAppWithBundleID:localizedName:installMode:",IVar7,IVar8,uVar3);
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar8);
  (*(code *)puVar2)(IVar7);
  uVar3 = importance(param_1,"importance");
  setImportance_(IVar6,"setImportance:",uVar3);
  IVar7 = iconData(param_1,"iconData");
  IVar7 = _objc_retainAutoreleasedReturnValue(IVar7);
  uVar3 = iconType(param_1,"iconType");
  setIconData_containingImageOfType_(IVar6,"setIconData:containingImageOfType:",IVar7,uVar3);
  (*(code *)puVar2)(IVar7);
  uVar3 = stashMode(param_1,"stashMode");
  setStashMode_(IVar6,"setStashMode:",uVar3);
  IVar7 = deltaDirectoryURL(param_1,"deltaDirectoryURL");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar7 = (*(code *)puVar1)(uVar5,"copyWithZone:",param_3);
  setDeltaDirectoryURL_(IVar6,"setDeltaDirectoryURL:",IVar7);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar7);
  (*(code *)puVar1)(uVar5);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = pairedAutoInstallOverride(param_1,"pairedAutoInstallOverride");
  setPairedAutoInstallOverride_(IVar6,"setPairedAutoInstallOverride:",uVar3);
  IVar7 = storeMetadata(param_1,"storeMetadata");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar7 = (*(code *)puVar1)(uVar5,"copyWithZone:",param_3);
  setStoreMetadata_(IVar6,"setStoreMetadata:",IVar7);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar7);
  (*(code *)puVar1)(uVar5);
  puVar1 = PTR__objc_msgSend_00441098;
  IVar7 = sinfData(param_1,"sinfData");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar7 = (*(code *)puVar1)(uVar5,"copyWithZone:",param_3);
  setSinfData_(IVar6,"setSinfData:",IVar7);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar7);
  (*(code *)puVar1)(uVar5);
  puVar1 = PTR__objc_msgSend_00441098;
  IVar7 = provisioningProfileDatas(param_1,"provisioningProfileDatas");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar7 = (*(code *)puVar1)(uVar5,"copyWithZone:",param_3);
  setProvisioningProfileDatas_(IVar6,"setProvisioningProfileDatas:",IVar7);
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar7);
  (*(code *)puVar2)(uVar5);
  cVar4 = provisioningProfileInstallFailureIsFatal
                    (param_1,"provisioningProfileInstallFailureIsFatal");
  setProvisioningProfileInstallFailureIsFatal_
            (IVar6,"setProvisioningProfileInstallFailureIsFatal:",cVar4);
  IVar7 = remoteInstallTargetURL(param_1,"remoteInstallTargetURL");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar7 = (*(code *)puVar1)(uVar5,"copyWithZone:",param_3);
  setRemoteInstallTargetURL_(IVar6,"setRemoteInstallTargetURL:",IVar7);
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar7);
  (*(code *)puVar2)(uVar5);
  IVar7 = remoteInstallTargetDirectoryURL(param_1,"remoteInstallTargetDirectoryURL");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar7 = (*(code *)puVar1)(uVar5,"copyWithZone:",param_3);
  setRemoteInstallTargetDirectoryURL_(IVar6,"setRemoteInstallTargetDirectoryURL:",IVar7);
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar7);
  (*(code *)puVar2)(uVar5);
  IVar7 = remoteInstallTargetBundleName(param_1,"remoteInstallTargetBundleName");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar7 = (*(code *)puVar1)(uVar5,"copyWithZone:",param_3);
  setRemoteInstallTargetBundleName_(IVar6,"setRemoteInstallTargetBundleName:",IVar7);
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar7);
  (*(code *)puVar2)(uVar5);
  uVar3 = installableType(param_1,"installableType");
  setInstallableType_(IVar6,"setInstallableType:",uVar3);
  IVar7 = targetLastPathComponent(param_1,"targetLastPathComponent");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar7 = (*(code *)puVar1)(uVar5,"copyWithZone:",param_3);
  setTargetLastPathComponent_(IVar6,"setTargetLastPathComponent:",IVar7);
  (*(code *)puVar2)(IVar7);
  (*(code *)puVar2)(uVar5);
  IVar7 = bundleVersion(param_1,"bundleVersion");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar7 = (*(code *)puVar1)(uVar5,"copyWithZone:",param_3);
  setBundleVersion_(IVar6,"setBundleVersion:",IVar7);
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar7);
  (*(code *)puVar2)(uVar5);
  IVar7 = geoJSONData(param_1,"geoJSONData");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
  IVar7 = (*(code *)puVar1)(uVar5,"copyWithZone:",param_3);
  setGeoJSONData_(IVar6,"setGeoJSONData:",IVar7);
  (*(code *)puVar2)(IVar7);
  (*(code *)puVar2)(uVar5);
  return IVar6;
}

