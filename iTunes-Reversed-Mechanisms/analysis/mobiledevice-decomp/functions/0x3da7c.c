// rea decompile_all
// name: IXRemoteInstallConfiguration::hash
// address: 0x3da7c
// body: available
// range: 0x3da7c-0x3de23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

unsigned_long_long IXRemoteInstallConfiguration::hash(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  ID IVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  puVar1 = PTR__objc_msgSend_00441098;
  IVar10 = bundleID(param_1,"bundleID");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar12 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  IVar10 = localizedName(param_1,"localizedName");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar13 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  bVar3 = installMode(param_1,"installMode");
  bVar4 = importance(param_1,"importance");
  IVar10 = iconData(param_1,"iconData");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar14 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  bVar5 = iconType(param_1,"iconType");
  bVar6 = stashMode(param_1,"stashMode");
  IVar10 = deltaDirectoryURL(param_1,"deltaDirectoryURL");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar15 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  bVar7 = pairedAutoInstallOverride(param_1,"pairedAutoInstallOverride");
  IVar10 = storeMetadata(param_1,"storeMetadata");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar16 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  puVar1 = PTR__objc_msgSend_00441098;
  IVar10 = sinfData(param_1,"sinfData");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar17 = (*(code *)puVar1)(uVar11,"hash");
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  puVar1 = PTR__objc_msgSend_00441098;
  IVar10 = provisioningProfileDatas(param_1,"provisioningProfileDatas");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar18 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)puVar2)(uVar11);
  puVar1 = PTR__objc_msgSend_00441098;
  cVar8 = provisioningProfileInstallFailureIsFatal
                    (param_1,"provisioningProfileInstallFailureIsFatal");
  IVar10 = remoteInstallTargetURL(param_1,"remoteInstallTargetURL");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar19 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  puVar1 = PTR__objc_msgSend_00441098;
  IVar10 = remoteInstallTargetDirectoryURL(param_1,"remoteInstallTargetDirectoryURL");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar20 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  puVar1 = PTR__objc_msgSend_00441098;
  IVar10 = remoteInstallTargetBundleName(param_1,"remoteInstallTargetBundleName");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar21 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  puVar1 = PTR__objc_msgSend_00441098;
  bVar9 = installableType(param_1,"installableType");
  IVar10 = targetLastPathComponent(param_1,"targetLastPathComponent");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar22 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  IVar10 = bundleVersion(param_1,"bundleVersion");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar23 = (*(code *)PTR__objc_msgSend_00441098)(uVar11,"hash");
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  puVar1 = PTR__objc_msgSend_00441098;
  IVar10 = geoJSONData(param_1,"geoJSONData");
  uVar11 = _objc_retainAutoreleasedReturnValue(IVar10);
  uVar24 = (*(code *)puVar1)(uVar11,"hash");
  (*(code *)puVar2)(uVar11);
  return uVar24 ^ uVar23 ^ uVar22 ^ bVar9 ^
         uVar21 ^ uVar20 ^ uVar19 ^ (long)cVar8 ^ uVar18 ^
         uVar17 ^ uVar16 ^ bVar7 ^ uVar15 ^
         (ulong)bVar6 ^ bVar5 ^ uVar14 ^ (ulong)(bVar4 ^ bVar3) ^ uVar13 ^ uVar12;
}

