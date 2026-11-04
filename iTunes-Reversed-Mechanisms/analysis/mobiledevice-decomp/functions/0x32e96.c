// rea decompile_all
// name: _PSProbeNormalizeUSBDevice
// address: 0x32e96
// body: available
// range: 0x32e96-0x333ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x333e5 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x333ea to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _PSProbeNormalizeUSBDevice(void)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ID IVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *local_128;
  undefined8 local_120;
  code *local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  code *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  cfstringStruct *local_98;
  long local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = (*(code *)PTR__objc_retain_004410a8)();
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar3,"objectForKeyedSubscript:",&cf_IOClassNameOverride);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = _ensureString(uVar4);
  local_c8 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  cVar2 = (*(code *)PTR__objc_msgSend_00441098)(local_c8,"hasPrefix:",&cf_IOUSB);
  if (cVar2 == '\0') {
    uVar4 = (*(code *)PTR__objc_retain_004410a8)(uVar3);
    goto LAB_000333ab;
  }
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar3,"objectForKeyedSubscript:",&cf_IOServiceLegacyMatchingRegistryID);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = _ensureNumber(uVar4);
  local_b0 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  puVar1 = PTR__objc_msgSend_00441098;
  if (local_b0 == 0) {
LAB_00032fa7:
    uVar4 = _safeUSBLocationIDNumber(uVar3);
    local_a8 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar3,"objectForKeyedSubscript:",&cf_AppleUSBAlternateServiceRegistryID);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = _ensureNumber(uVar4);
    local_c0 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_004410a0)(uVar4);
    if (local_c0 == 0) {
      local_58 = &cf_IOPropertyMatch;
      local_68 = &cf_IOServiceLegacyMatchingRegistryID;
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"entryID");
      IVar8 = NSNumber::numberWithUnsignedLongLong_
                        ((ID)&_OBJC_CLASS___NSNumber,"numberWithUnsignedLongLong:",uVar4);
      uVar4 = _objc_retainAutoreleasedReturnValue(IVar8);
      local_60 = uVar4;
      IVar8 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_60,&local_68,1);
      uVar5 = _objc_retainAutoreleasedReturnValue(IVar8);
      local_50 = uVar5;
      IVar8 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_50,&local_58,1);
      local_a0 = _objc_retainAutoreleasedReturnValue(IVar8);
      (*(code *)PTR__objc_release_004410a0)(uVar5);
      (*(code *)PTR__objc_release_004410a0)(uVar4);
    }
    else {
      local_48 = &cf_IORegistryEntryID;
      local_40 = local_c0;
      IVar8 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_40,&local_48,1);
      local_a0 = _objc_retainAutoreleasedReturnValue(IVar8);
    }
    local_f8 = 0;
    local_e8 = 0x3032000000;
    local_e0 = ___Block_byref_object_copy_;
    local_d8 = ___Block_byref_object_dispose_;
    local_f0 = &local_f8;
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"finder");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"entryMatching:",local_a0);
    local_d0 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_004410a0)(uVar4);
    lVar10 = local_f0[5];
    if (local_a8 != 0 && lVar10 == 0) {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"finder");
      local_b8 = _objc_retainAutoreleasedReturnValue(uVar4);
      local_88 = &cf_IOProviderClass;
      local_78 = &cf_AppleUSBHostPort;
      local_80 = &cf_IOPropertyMatch;
      local_98 = &cf_locationID;
      local_90 = local_a8;
      IVar8 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_90,&local_98,1);
      uVar4 = _objc_retainAutoreleasedReturnValue(IVar8);
      local_70 = uVar4;
      IVar8 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_78,&local_88,2);
      uVar5 = _objc_retainAutoreleasedReturnValue(IVar8);
      uVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_b8,"entryMatching:",uVar5);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)PTR__objc_release_004410a0)(uVar5);
      (*(code *)PTR__objc_release_004410a0)(uVar4);
      (*(code *)PTR__objc_release_004410a0)(local_b8);
      local_128 = PTR___NSConcreteStackBlock_004412a8;
      local_120 = 0xc2000000;
      local_118 = ___PSProbeNormalizeUSBDevice_block_invoke;
      local_110 = &___block_descriptor_48_e8_32s40r_e33_v24__0__<PSIORegistryEntry>_8_Q16l;
      local_108 = (*(code *)PTR__objc_retain_004410a8)(local_a0);
      local_100 = &local_f8;
      (*(code *)PTR__objc_msgSend_00441098)
                (uVar9,"enumeratePlane:options:usingBlock:",&cf_IOService,1,&local_128);
      (*(code *)PTR__objc_release_004410a0)(local_108);
      (*(code *)PTR__objc_release_004410a0)(uVar9);
      lVar10 = local_f0[5];
    }
    uVar4 = (*(code *)PTR__objc_retain_004410a8)(lVar10);
    __Block_object_dispose(&local_f8,8);
    (*(code *)PTR__objc_release_004410a0)(local_d0);
    (*(code *)PTR__objc_release_004410a0)(local_a0);
    (*(code *)PTR__objc_release_004410a0)(local_c0);
    (*(code *)PTR__objc_release_004410a0)(local_a8);
    lVar10 = local_b0;
  }
  else {
    lVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_b0,"unsignedLongLongValue");
    lVar7 = (*(code *)puVar1)(uVar3,"entryID");
    lVar10 = local_b0;
    if (lVar6 == lVar7) goto LAB_00032fa7;
    uVar4 = (*(code *)PTR__objc_retain_004410a8)(uVar3);
  }
  (*(code *)PTR__objc_release_004410a0)(lVar10);
LAB_000333ab:
  (*(code *)PTR__objc_release_004410a0)(local_c8);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    _objc_autoreleaseReturnValue(uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

