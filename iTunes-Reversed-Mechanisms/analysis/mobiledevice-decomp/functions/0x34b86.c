// rea decompile_all
// name: __bsdSerialForDockChannel
// address: 0x34b86
// body: available
// range: 0x34b86-0x352e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x352c6 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x352e2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __bsdSerialForDockChannel(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  code *pcVar15;
  code *pcVar16;
  undefined8 local_248;
  long lStack_240;
  long *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  long lStack_200;
  long *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  long local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  cfstringStruct *local_190;
  undefined8 local_188;
  char *local_180;
  long local_178;
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  char *local_158;
  undefined1 local_150 [128];
  undefined1 local_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_160 = (*(code *)PTR__objc_retain_004410a8)();
  uVar3 = __findAlternateProbeForProbe(local_160,_probeIsKIS);
  local_1a0 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar1 = PTR__objc_msgSend_00441098;
  IVar4 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
  IVar4 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  (*(code *)puVar1)(uVar3,"setObject:forKeyedSubscript:",&cf_IOSerialBSDClient,&cf_IOProviderClass);
  local_188 = uVar3;
  (*(code *)puVar1)(uVar3,"setObject:forKeyedSubscript:",uVar5,&cf_IOPropertyMatch);
  IVar4 = NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__ch__lu,param_2);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
  (*(code *)puVar1)(uVar5,"setObject:forKeyedSubscript:",uVar3,&cf_IOTTYSuffix);
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = local_1a0;
  uVar6 = (*(code *)puVar1)(local_1a0,"searchForKey:plane:options:",&cf_ApplePAMSerialPortBaseName,
                            &cf_IOService,1);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = _ensureString(uVar6);
  lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar2)(uVar6);
  uVar6 = local_160;
  puVar1 = PTR__objc_msgSend_00441098;
  local_170 = lVar8;
  if (lVar8 != 0) {
    (*(code *)PTR__objc_msgSend_00441098)
              (uVar5,"setObject:forKeyedSubscript:",lVar8,&cf_IOTTYBaseName);
    uVar6 = local_160;
    uVar3 = (*(code *)puVar1)(local_160,"finder");
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = local_188;
    uVar9 = (*(code *)puVar1)(uVar7,"entryMatching:",local_188);
    local_158 = (char *)_objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)PTR__objc_release_004410a0)(uVar7);
    pcVar15 = (code *)PTR__objc_release_004410a0;
    lVar8 = local_170;
    goto LAB_0003527c;
  }
  local_1c0 = uVar5;
  uVar5 = __findAstrisHubForDevice(local_160);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar3 = _safeUSBLocationIDNumber(uVar3);
  pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = _safeUSBLocationIDNumber(uVar6);
  pcVar11 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar3);
  local_1b8 = uVar5;
  uVar3 = _safeUSBLocationIDNumber(uVar5);
  local_190 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar3);
  pcVar16 = (code *)PTR__objc_msgSend_00441098;
  local_50 = pcVar10;
  if (pcVar10 == (cfstringStruct *)0x0) {
    local_50 = &cf__;
  }
  local_48 = pcVar11;
  if (pcVar11 == (cfstringStruct *)0x0) {
    local_48 = &cf__;
  }
  local_40 = &cf__;
  if (local_190 != (cfstringStruct *)0x0) {
    local_40 = local_190;
  }
  local_1b0 = pcVar10;
  local_1a8 = pcVar11;
  IVar4 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_50,3);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
  local_248 = 0;
  lStack_240 = 0;
  local_238 = (long *)0x0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_168 = (*(code *)PTR__objc_retain_004410a8)(uVar3);
  local_180 = (char *)(*pcVar16)(local_168,"countByEnumeratingWithState:objects:count:",&local_248,
                                 local_d0,0x10);
  pcVar15 = (code *)PTR__objc_release_004410a0;
  if (local_180 == (char *)0x0) {
    pcVar12 = (char *)0x0;
  }
  else {
    local_178 = *local_238;
    pcVar12 = (char *)0x0;
    do {
      local_158 = "finder";
      pcVar13 = (char *)0x0;
      uVar3 = pcVar12;
      do {
        if (*local_238 != local_178) {
          _objc_enumerationMutation(local_168);
        }
        uVar6 = __matchWithParentProperty
                          (local_188,&cf_IOUserDockChannelSerialPortLocation,
                           *(undefined8 *)(lStack_240 + (long)pcVar13 * 8));
        pcVar12 = (char *)_objc_retainAutoreleasedReturnValue(uVar6);
        (*pcVar15)(uVar3);
        puVar1 = PTR__objc_msgSend_00441098;
        uVar3 = (*(code *)PTR__objc_msgSend_00441098)(local_160,local_158);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        uVar6 = (*(code *)puVar1)(uVar3,"entryMatching:",pcVar12);
        lVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
        pcVar15 = (code *)PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar3);
        pcVar16 = (code *)PTR__objc_msgSend_00441098;
        if (lVar8 != 0) goto LAB_000351f9;
        pcVar13 = pcVar13 + 1;
        uVar3 = pcVar12;
      } while (local_180 != pcVar13);
      local_180 = (char *)(*(code *)PTR__objc_msgSend_00441098)
                                    (local_168,"countByEnumeratingWithState:objects:count:",
                                     &local_248,local_d0,0x10);
    } while (local_180 != (char *)0x0);
  }
  (*(code *)PTR__objc_release_004410a0)(local_168);
  pcVar10 = local_190;
  if (local_190 == (cfstringStruct *)0x0) {
LAB_00035072:
    lVar8 = local_170;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1f8 = (long *)0x0;
    uStack_1f0 = 0;
    local_208 = 0;
    lStack_200 = 0;
    pcVar13 = (char *)(*(code *)PTR__objc_retain_004410a8)(local_168);
    local_178 = (*(code *)PTR__objc_msgSend_00441098)
                          (pcVar13,"countByEnumeratingWithState:objects:count:",&local_208,local_150
                           ,0x10);
    if (local_178 == 0) {
      local_158 = (char *)0x0;
    }
    else {
      local_1c8 = *local_1f8;
      local_158 = (char *)0x0;
      local_198 = pcVar13;
      do {
        local_180 = "finder";
        lVar14 = 0;
        uVar3 = pcVar12;
        do {
          if (*local_1f8 != local_1c8) {
            _objc_enumerationMutation(local_198);
          }
          uVar6 = __matchWithParentProperty
                            (local_188,&cf_locationID,*(undefined8 *)(lStack_200 + lVar14 * 8));
          pcVar12 = (char *)_objc_retainAutoreleasedReturnValue(uVar6);
          (*pcVar15)(uVar3);
          puVar1 = PTR__objc_msgSend_00441098;
          uVar3 = (*(code *)PTR__objc_msgSend_00441098)(local_160,local_180);
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          uVar6 = (*(code *)puVar1)(uVar3,"entryMatching:",pcVar12);
          lVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
          pcVar15 = (code *)PTR__objc_release_004410a0;
          (*(code *)PTR__objc_release_004410a0)(uVar3);
          pcVar13 = local_198;
          if (lVar8 != 0) goto LAB_000351f9;
          lVar14 = lVar14 + 1;
          uVar3 = pcVar12;
        } while (local_178 != lVar14);
        local_178 = (*(code *)PTR__objc_msgSend_00441098)
                              (local_198,"countByEnumeratingWithState:objects:count:",&local_208,
                               local_150,0x10);
        lVar8 = local_170;
      } while (local_178 != 0);
    }
    goto LAB_00035227;
  }
  uVar3 = __matchWithParentProperty(pcVar12,&cf_IOUserDockChannelSerialNexusLocation,local_190);
  local_158 = (char *)_objc_retainAutoreleasedReturnValue(uVar3);
  (*pcVar15)(pcVar12);
  uVar6 = local_160;
  uVar3 = (*pcVar16)(local_160,"finder");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  pcVar12 = local_158;
  uVar5 = (*pcVar16)(uVar3,"entryMatching:",local_158);
  pcVar13 = (char *)_objc_retainAutoreleasedReturnValue(uVar5);
  pcVar15 = (code *)PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  lVar8 = local_170;
  local_158 = pcVar13;
  if (pcVar13 == (char *)0x0) {
    local_158 = (char *)0x0;
    goto LAB_00035072;
  }
  goto LAB_0003523a;
LAB_000351f9:
  pcVar13 = (char *)(*(code *)PTR__objc_retain_004410a8)(lVar8);
  (*(code *)PTR__objc_release_004410a0)(local_168);
  lVar8 = local_170;
  local_158 = pcVar13;
LAB_00035227:
  uVar6 = local_160;
  (*(code *)PTR__objc_release_004410a0)(pcVar13);
  pcVar10 = local_190;
LAB_0003523a:
  (*pcVar15)(local_168);
  (*pcVar15)(pcVar10);
  (*pcVar15)(local_1a8);
  (*pcVar15)(local_1b0);
  (*pcVar15)(local_1b8);
  (*pcVar15)(pcVar12);
  uVar5 = local_1c0;
  uVar3 = local_188;
LAB_0003527c:
  (*pcVar15)(lVar8);
  (*pcVar15)(uVar5);
  (*pcVar15)(uVar3);
  (*pcVar15)(local_1a0);
  (*pcVar15)(uVar6);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(local_158);
  return;
}

