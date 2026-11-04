// rea decompile_all
// name: _IXCreateRemoteInstallBeginRequest
// address: 0x425dc
// body: available
// range: 0x425dc-0x42d0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d0a to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IXCreateRemoteInstallBeginRequest(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar5 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  if (lVar5 == 0 || param_1 < 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = _xpc_file_transfer_create_with_fd(param_1,&___block_literal_global);
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = _xpc_dictionary_create(0,0,0);
      _xpc_dictionary_set_uint64(uVar7,"RequestType",1);
      _xpc_dictionary_set_uint64(uVar7,"RequestVersion",1);
      _xpc_dictionary_set_uint64(uVar7,"InstallMessageType",1);
      _xpc_dictionary_set_uint64(uVar7,"AssetSize",param_3);
      _xpc_dictionary_set_uint64(uVar7,"ProtocolVersion",1);
      _xpc_dictionary_set_value(uVar7,"AssetStreamFD",lVar6);
      uVar8 = (*(code *)PTR__objc_retain_004410a8)(lVar5);
      uVar9 = _xpc_dictionary_create(0,0,0);
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"bundleID");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar11 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
      puVar2 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      _xpc_dictionary_set_value(uVar9,"BundleID",uVar11);
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"localizedName");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar12 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
      (*(code *)puVar2)(uVar10);
      _xpc_dictionary_set_value(uVar9,"LocalizedName",uVar12);
      puVar1 = PTR__objc_msgSend_00441098;
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"installMode");
      _xpc_dictionary_set_uint64(uVar9,"InstallMode",uVar3);
      uVar3 = (*(code *)puVar1)(uVar8,"importance");
      _xpc_dictionary_set_uint64(uVar9,"Importance",uVar3);
      uVar3 = (*(code *)puVar1)(uVar8,"iconType");
      _xpc_dictionary_set_uint64(uVar9,"IconDataType",uVar3);
      uVar3 = (*(code *)puVar1)(uVar8,"pairedAutoInstallOverride");
      _xpc_dictionary_set_uint64(uVar9,"AIOverride",uVar3);
      uVar3 = (*(code *)puVar1)(uVar8,"installableType");
      _xpc_dictionary_set_uint64(uVar9,"InstallableType",uVar3);
      uVar3 = (*(code *)puVar1)(uVar8,"stashMode");
      _xpc_dictionary_set_uint64(uVar9,"StashOption",uVar3);
      cVar4 = (*(code *)puVar1)(uVar8,"provisioningProfileInstallFailureIsFatal");
      _xpc_dictionary_set_bool(uVar9,"ProfileErrorsFatal",cVar4 != '\0');
      uVar10 = (*(code *)puVar1)(uVar8,"remoteInstallTargetDirectoryURL");
      lVar13 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)puVar2)(lVar13);
      if (lVar13 != 0) {
        uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"remoteInstallTargetDirectoryURL");
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar14 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
        (*(code *)puVar2)(uVar10);
        _xpc_dictionary_set_value(uVar9,"InstallTargetDir",uVar14);
        (*(code *)puVar2)(uVar14);
      }
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"remoteInstallTargetURL");
      lVar13 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)PTR__objc_release_004410a0)(lVar13);
      if (lVar13 != 0) {
        uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"remoteInstallTargetURL");
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar14 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar10);
        _xpc_dictionary_set_value(uVar9,"InstallTargetPath",uVar14);
        (*(code *)puVar1)(uVar14);
      }
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"remoteInstallTargetBundleName");
      lVar13 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)PTR__objc_release_004410a0)(lVar13);
      if (lVar13 != 0) {
        uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"remoteInstallTargetBundleName");
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar14 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar10);
        _xpc_dictionary_set_value(uVar9,"InstallTargetBundleName",uVar14);
        (*(code *)puVar1)(uVar14);
      }
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"iconData");
      lVar13 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)PTR__objc_release_004410a0)(lVar13);
      if (lVar13 != 0) {
        uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"iconData");
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar14 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar10);
        _xpc_dictionary_set_value(uVar9,"IconData",uVar14);
        (*(code *)puVar1)(uVar14);
      }
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"storeMetadata");
      lVar13 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)PTR__objc_release_004410a0)(lVar13);
      if (lVar13 != 0) {
        uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"storeMetadata");
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar14 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar10);
        _xpc_dictionary_set_value(uVar9,"StoreMetadata",uVar14);
        (*(code *)puVar1)(uVar14);
      }
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"sinfData");
      lVar13 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)PTR__objc_release_004410a0)(lVar13);
      if (lVar13 != 0) {
        uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"sinfData");
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar14 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar10);
        _xpc_dictionary_set_value(uVar9,"SINFData",uVar14);
        (*(code *)puVar1)(uVar14);
      }
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"provisioningProfileDatas");
      lVar13 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)PTR__objc_release_004410a0)(lVar13);
      if (lVar13 != 0) {
        uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"provisioningProfileDatas");
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar14 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar10);
        _xpc_dictionary_set_value(uVar9,"ProvisioningProfiles",uVar14);
        (*(code *)puVar1)(uVar14);
      }
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"targetLastPathComponent");
      lVar13 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)PTR__objc_release_004410a0)(lVar13);
      if (lVar13 != 0) {
        uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"targetLastPathComponent");
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar14 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar10);
        _xpc_dictionary_set_value(uVar9,"TargetLastPathComponent",uVar14);
        (*(code *)puVar1)(uVar14);
      }
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"bundleVersion");
      lVar13 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)PTR__objc_release_004410a0)(lVar13);
      if (lVar13 != 0) {
        uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"bundleVersion");
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar14 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar10);
        _xpc_dictionary_set_value(uVar9,"BundleVersion",uVar14);
        (*(code *)puVar1)(uVar14);
      }
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"geoJSONData");
      lVar13 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)PTR__objc_release_004410a0)(lVar13);
      puVar1 = PTR__objc_release_004410a0;
      if (lVar13 != 0) {
        uVar10 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"geoJSONData");
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar14 = __CFXPCCreateXPCObjectFromCFObject(uVar10);
        (*(code *)puVar1)(uVar10);
        _xpc_dictionary_set_value(uVar9,"GeoJSONData",uVar14);
        (*(code *)puVar1)(uVar14);
      }
      (*(code *)puVar1)(uVar12);
      (*(code *)puVar1)(uVar11);
      (*(code *)puVar1)(uVar8);
      _xpc_dictionary_set_value(uVar7,"RemoteInstallOptions",uVar9);
      (*(code *)puVar1)(uVar9);
    }
    (*(code *)PTR__objc_release_004410a0)(lVar6);
  }
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  _objc_autoreleaseReturnValue(uVar7);
  return;
}

