// rea decompile_all
// name: __findAdjacentMultiProbeForDevice
// address: 0x341ad
// body: available
// range: 0x341ad-0x34433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3442f to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __findAdjacentMultiProbeForDevice(void)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)();
  lVar4 = _safeUSBHubPortNumber(uVar3);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    local_40 = uVar3;
    local_38 = (*(code *)PTR__objc_retain_004410a8)(uVar3);
    local_68 = &local_70;
    local_70 = 0;
    local_60 = 0x3032000000;
    local_58 = ___Block_byref_object_copy_;
    local_50 = ___Block_byref_object_dispose_;
    local_48 = 0;
    (*(code *)PTR__objc_msgSend_00441098)
              (local_38,"enumeratePlane:options:usingBlock:",&cf_IOService);
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                      (local_68[5],"objectForKeyedSubscript:",&cf_bDeviceClass);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar5 = _ensureNumber(uVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"unsignedCharValue");
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    (*(code *)puVar1)(uVar3);
    uVar3 = local_38;
    if (cVar2 == '\t') {
      uVar5 = local_68[5];
    }
    else {
      uVar5 = 0;
    }
    lVar4 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
    __Block_object_dispose(&local_70,8);
    (*(code *)puVar1)(local_48);
    (*(code *)puVar1)(uVar3);
    if (lVar4 == 0) {
      uVar5 = 0;
      uVar3 = local_40;
    }
    else {
      local_70 = 0;
      local_60 = 0x3032000000;
      local_58 = ___Block_byref_object_copy_;
      local_50 = ___Block_byref_object_dispose_;
      local_48 = 0;
      local_68 = &local_70;
      (*(code *)PTR__objc_msgSend_00441098)
                (lVar4,"enumeratePlane:options:usingBlock:",&cf_IOService,1);
      uVar3 = local_40;
      lVar6 = _probeDeviceForRegistryEntry(local_68[5]);
      if (lVar6 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(code *)PTR__objc_retain_004410a8)(local_68[5]);
      }
      __Block_object_dispose(&local_70,8);
      (*(code *)PTR__objc_release_004410a0)(local_48);
    }
    (*(code *)PTR__objc_release_004410a0)(lVar4);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  _objc_autoreleaseReturnValue(uVar5);
  return;
}

