// rea decompile_all
// name: _PSProbeFindProbeForUSBDevice
// address: 0x338d1
// body: available
// range: 0x338d1-0x33e8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x33e89 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _PSProbeFindProbeForUSBDevice(void)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined *local_d0;
  undefined **local_c8;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  uVar3 = _PSProbeNormalizeUSBDevice();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = __findAstrisHubForDevice(uVar3);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (lVar5 == 0) {
    local_50 = uVar3;
    local_38 = lVar5;
    uVar3 = (*(code *)PTR__objc_retain_004410a8)(uVar3);
    local_b0 = (code *)&local_80;
    local_80 = 0;
    local_70 = 0x3032000000;
    local_68 = ___Block_byref_object_copy_;
    local_60 = ___Block_byref_object_dispose_;
    local_58 = 0;
    local_d0 = PTR___NSConcreteStackBlock_004412a8;
    local_c8 = (undefined **)0xc2000000;
    local_c0 = ____findParentProbeForDevice_block_invoke;
    local_b8 = (code *)&___block_descriptor_40_e8_32r_e33_v24__0__<PSIORegistryEntry>_8_Q16l;
    local_78 = local_b0;
    __walkUSBAncestors(uVar3,&local_d0);
    lVar6 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(local_78 + 0x28));
    __Block_object_dispose(&local_80,8);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(local_58);
    (*(code *)puVar1)(uVar3);
    if (lVar6 != 0) {
      lVar7 = (*(code *)PTR__objc_retain_004410a8)(lVar6);
      uVar3 = local_50;
      lVar5 = local_38;
      goto LAB_00033e59;
    }
    local_40 = (*(code *)PTR__objc_retain_004410a8)(uVar3);
    uVar3 = __findParentPortForDevice(local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"conformsTo:",&cf_AppleUSBXHCIPort);
    puVar1 = PTR__objc_msgSend_00441098;
    local_48 = uVar3;
    if (cVar2 == '\0') {
      lVar8 = 0;
      pcVar10 = (code *)PTR__objc_release_004410a0;
    }
    else {
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"parentInPlane:",&cf_IOService);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar2 = (*(code *)puVar1)(uVar3,"conformsTo:",&cf_AppleUSBXHCIARM);
      if (cVar2 == '\0') {
        lVar8 = 0;
        pcVar10 = (code *)PTR__objc_release_004410a0;
      }
      else {
        local_80 = 0;
        local_78 = (code *)&local_80;
        local_70 = 0x3032000000;
        local_68 = ___Block_byref_object_copy_;
        local_60 = ___Block_byref_object_dispose_;
        local_58 = 0;
        local_d0 = (undefined *)0x0;
        local_c0 = (code *)0x3032000000;
        local_b8 = ___Block_byref_object_copy_;
        local_b0 = ___Block_byref_object_dispose_;
        local_a8 = 0;
        local_c8 = &local_d0;
        (*(code *)PTR__objc_msgSend_00441098)
                  (uVar3,"enumeratePlane:options:usingBlock:",&cf_IOService,0);
        (*(code *)PTR__objc_msgSend_00441098)
                  (*(undefined8 *)(local_78 + 0x28),"enumeratePlane:options:usingBlock:",
                   &cf_IOService,0);
        lVar8 = (*(code *)PTR__objc_retain_004410a8)(local_c8[5]);
        __Block_object_dispose(&local_d0,8);
        pcVar10 = (code *)PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(local_a8);
        __Block_object_dispose(&local_80,8);
        (*pcVar10)(local_58);
      }
      (*(code *)PTR__objc_release_004410a0)(uVar3);
    }
    lVar5 = local_40;
    (*pcVar10)(local_48);
    (*pcVar10)(lVar5);
    if (lVar8 == 0) {
      uVar3 = (*(code *)PTR__objc_retain_004410a8)(lVar5);
      uVar4 = __findParentPortForDevice(uVar3);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar9 = __fastsimControllerNameForPort(uVar4);
      lVar7 = _objc_retainAutoreleasedReturnValue(uVar9);
      puVar1 = PTR__objc_msgSend_00441098;
      local_90 = lVar6;
      local_48 = uVar4;
      local_40 = lVar8;
      if (lVar7 == 0) {
        lVar8 = 0;
        lVar5 = local_38;
      }
      else {
        local_88 = uVar3;
        uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"parentInPlane:",&cf_IOService);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        local_a0 = lVar7;
        cVar2 = (*(code *)puVar1)(uVar3,"conformsTo:",lVar7);
        local_98 = uVar3;
        if (cVar2 == '\0') {
          lVar8 = 0;
        }
        else {
          local_80 = 0;
          local_b0 = (code *)&local_80;
          local_70 = 0x3032000000;
          local_68 = ___Block_byref_object_copy_;
          local_60 = ___Block_byref_object_dispose_;
          local_58 = 0;
          local_d0 = PTR___NSConcreteStackBlock_004412a8;
          local_c8 = (undefined **)0xc2000000;
          local_c0 = ____findFastsimProbeForDevice_block_invoke;
          local_b8 = (code *)&___block_descriptor_40_e8_32r_e33_v24__0__<PSIORegistryEntry>_8_Q16l;
          local_78 = local_b0;
          (*(code *)PTR__objc_msgSend_00441098)
                    (uVar3,"enumeratePlane:options:usingBlock:",&cf_IOService,1);
          lVar8 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(local_78 + 0x28));
          __Block_object_dispose(&local_80,8);
          (*(code *)PTR__objc_release_004410a0)(local_58);
        }
        lVar5 = local_38;
        uVar3 = local_88;
        (*(code *)PTR__objc_release_004410a0)(local_98);
        lVar7 = local_a0;
      }
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(lVar7);
      (*(code *)puVar1)(local_48);
      (*(code *)puVar1)(uVar3);
      if (lVar8 == 0) {
        uVar3 = __findAdjacentMultiProbeForDevice(uVar3);
        lVar7 = _objc_retainAutoreleasedReturnValue(uVar3);
        lVar6 = local_90;
        if (lVar7 != 0) {
          (*(code *)PTR__objc_retain_004410a8)(lVar7);
        }
        (*(code *)PTR__objc_release_004410a0)(lVar7);
      }
      else {
        lVar7 = (*(code *)PTR__objc_retain_004410a8)(lVar8);
        lVar6 = local_90;
      }
      (*(code *)PTR__objc_release_004410a0)(lVar8);
      uVar3 = local_50;
      lVar8 = local_40;
    }
    else {
      lVar7 = (*(code *)PTR__objc_retain_004410a8)(lVar8);
      uVar3 = local_50;
      lVar5 = local_38;
    }
  }
  else {
    uVar4 = __findProbeAttachedToAstrisHub(lVar5,_probeIsUSB);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
    if (lVar6 != 0) {
      lVar7 = (*(code *)PTR__objc_retain_004410a8)(lVar6);
      goto LAB_00033e59;
    }
    uVar4 = __findProbeAttachedToAstrisHub(lVar5,_probeIsKIS);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar4);
    lVar7 = lVar8;
    if (lVar8 != 0) {
      (*(code *)PTR__objc_retain_004410a8)(lVar8);
    }
  }
  (*(code *)PTR__objc_release_004410a0)(lVar8);
LAB_00033e59:
  (*(code *)PTR__objc_release_004410a0)(lVar6);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar5);
  (*(code *)puVar1)(uVar3);
  _objc_autoreleaseReturnValue(lVar7);
  return;
}

