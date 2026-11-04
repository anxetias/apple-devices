// rea decompile_all
// name: __findProbeAttachedToAstrisHub
// address: 0x33fea
// body: available
// range: 0x33fea-0x34175 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x34171 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __findProbeAttachedToAstrisHub(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  code *local_38;
  
  uVar6 = (*(code *)PTR__objc_retain_004410a8)();
  lVar7 = _probeDeviceForRegistryEntry(uVar6);
  if (lVar7 == 0) {
    local_38 = param_2;
    uVar8 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
    uVar3 = _safeUSBVendorID(uVar8);
    uVar4 = _safeUSBProductID(uVar8);
    uVar5 = _safeUSBDeviceReleaseNumber(uVar8);
    (*(code *)PTR__objc_release_004410a0)(uVar8);
    lVar7 = _probeHubForVIDPID(uVar3,uVar4,uVar5);
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      local_60 = &local_68;
      local_68 = 0;
      local_58 = 0x3032000000;
      local_50 = ___Block_byref_object_copy_;
      local_48 = ___Block_byref_object_dispose_;
      local_40 = 0;
      uVar9 = _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_00441098)
                (uVar8,"enumeratePlane:options:usingBlock:",&cf_IOService,1,uVar9);
      uVar8 = (*(code *)PTR__objc_retain_004410a8)(local_60[5]);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar9);
      __Block_object_dispose(&local_68,8);
      (*(code *)puVar1)(local_40);
    }
  }
  else {
    cVar2 = (*param_2)(lVar7);
    uVar8 = 0;
    if (cVar2 != '\0') {
      uVar8 = uVar6;
    }
    uVar8 = (*(code *)PTR__objc_retain_004410a8)(uVar8);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  _objc_autoreleaseReturnValue(uVar8);
  return;
}

