// rea decompile_all
// name: UARPSuperBinaryBackDeploy::processMeasurementsForTSSOptions:unitNumber:asMeasurement:
// address: 0x22eb3c
// body: available
// range: 0x22eb3c-0x22f1e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22f1dd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x24 bytes */

void UARPSuperBinaryBackDeploy::processMeasurementsForTSSOptions_unitNumber_asMeasurement_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,char param_5)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined7 in_register_00000081;
  long lVar9;
  char *pcVar10;
  code *pcVar11;
  undefined8 local_358;
  long lStack_350;
  long *local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  long lStack_310;
  long *local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  long lStack_2d0;
  long *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  long local_298;
  char *local_290;
  char *local_288;
  char *local_280;
  char *local_278;
  long local_270;
  char *local_268;
  long local_260;
  long local_258;
  char *local_250;
  long local_248;
  char *local_240;
  undefined8 local_238;
  unsigned_long_long local_230;
  long local_228;
  char *local_220;
  char *local_218;
  cfstringStruct *local_210;
  long local_208;
  long local_200;
  undefined4 local_1f4;
  long local_1f0;
  undefined8 local_1e8;
  ID local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [128];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_1f4 = (undefined4)CONCAT71(in_register_00000081,param_5);
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_230 = param_4;
  local_238 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  pcVar8 = (code *)PTR__objc_msgSend_00441098;
  local_1c0 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableDictionary,"new");
  local_358 = 0;
  lStack_350 = 0;
  local_348 = (long *)0x0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_1e0 = param_1;
  local_1d0 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x50));
  local_200 = (*pcVar8)(local_1d0,"countByEnumeratingWithState:objects:count:",&local_358,local_b8,
                        0x10);
  if (local_200 != 0) {
    local_248 = *local_348;
    local_210 = &cf_EPRO;
    pcVar11 = (code *)PTR__objc_release_004410a0;
    do {
      local_250 = "measurements";
      local_240 = "setObject:forKeyedSubscript:";
      lVar9 = 0;
      do {
        if (*local_348 != local_248) {
          _objc_enumerationMutation(local_1d0);
        }
        local_258 = lVar9;
        uVar5 = (*pcVar8)(*(undefined8 *)(lStack_350 + lVar9 * 8),local_250);
        local_1d8 = _objc_retainAutoreleasedReturnValue(uVar5);
        local_318 = 0;
        lStack_310 = 0;
        local_308 = (long *)0x0;
        uStack_300 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_2e8 = 0;
        uStack_2e0 = 0;
        local_208 = (*pcVar8)(local_1d8,"countByEnumeratingWithState:objects:count:",&local_318,
                              local_138,0x10);
        if (local_208 == 0) {
          lVar9 = 0;
          lVar7 = 0;
          local_208 = 0;
        }
        else {
          local_260 = *local_308;
          local_1c8 = 0;
          local_1f0 = 0;
          do {
            local_268 = "tlvs";
            lVar9 = 0;
            do {
              if (*local_308 != local_260) {
                _objc_enumerationMutation(local_1d8);
              }
              local_2d8 = 0;
              lStack_2d0 = 0;
              local_2c8 = (long *)0x0;
              uStack_2c0 = 0;
              local_2b8 = 0;
              uStack_2b0 = 0;
              local_2a8 = 0;
              uStack_2a0 = 0;
              local_270 = lVar9;
              uVar5 = (*pcVar8)(*(undefined8 *)(lStack_310 + lVar9 * 8),local_268);
              local_1e8 = _objc_retainAutoreleasedReturnValue(uVar5);
              local_228 = (*pcVar8)(local_1e8,"countByEnumeratingWithState:objects:count:",
                                    &local_2d8,local_1b8,0x10);
              if (local_228 != 0) {
                local_298 = *local_2c8;
                do {
                  pcVar10 = "class";
                  local_288 = "longname";
                  local_280 = "digest";
                  local_278 = "productionMode";
                  local_220 = "numberWithBool:";
                  local_218 = "setObject:forKeyedSubscript:";
                  lVar9 = 0;
                  local_290 = "class";
                  do {
                    if (*local_2c8 != local_298) {
                      _objc_enumerationMutation(local_1e8);
                    }
                    uVar5 = *(undefined8 *)(lStack_2d0 + lVar9 * 8);
                    uVar6 = (*pcVar8)(&objc::class_t::
                                       UARPTLVPersonalizationFTABSubfileLongnameBackDeploy,pcVar10);
                    cVar4 = (*pcVar8)(uVar5,"isKindOfClass:",uVar6);
                    if (cVar4 == '\0') {
                      uVar6 = (*pcVar8)(&objc::class_t::
                                         UARPTLVPersonalizationFTABSubfileDigestBackDeploy,pcVar10);
                      cVar4 = (*pcVar8)(uVar5,"isKindOfClass:",uVar6);
                      if (cVar4 != '\0') {
                        uVar6 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
                        uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,local_280);
                        lVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
                        pcVar11 = (code *)PTR__objc_release_004410a0;
                        (*(code *)PTR__objc_release_004410a0)(local_1c8);
                        pcVar8 = (code *)PTR__objc_msgSend_00441098;
                        local_1c8 = lVar7;
                        goto LAB_0022ef0f;
                      }
                      uVar6 = (*pcVar8)(&objc::class_t::
                                         UARPTLVPersonalizationFTABSubfileEPROBackDeploy,pcVar10);
                      cVar4 = (*pcVar8)(uVar5,"isKindOfClass:",uVar6);
                      if (((char)local_1f4 == '\0') && (cVar4 != '\0')) {
                        cVar4 = (*pcVar8)(local_1e0,local_278);
                        uVar5 = (*pcVar8)(&_OBJC_CLASS___NSNumber,local_220,cVar4 != '\0');
                        uVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
                        (*pcVar8)(local_1c0,local_218,uVar6,local_210);
                        pcVar11 = (code *)PTR__objc_release_004410a0;
                        goto LAB_0022ef0f;
                      }
                    }
                    else {
                      uVar6 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
                      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,local_288);
                      lVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
                      pcVar11 = (code *)PTR__objc_release_004410a0;
                      (*(code *)PTR__objc_release_004410a0)(local_1f0);
                      pcVar8 = (code *)PTR__objc_msgSend_00441098;
                      local_1f0 = lVar7;
LAB_0022ef0f:
                      (*pcVar11)(uVar6);
                      pcVar10 = local_290;
                    }
                    lVar9 = lVar9 + 1;
                  } while (local_228 != lVar9);
                  local_228 = (*pcVar8)(local_1e8,"countByEnumeratingWithState:objects:count:",
                                        &local_2d8,local_1b8,0x10);
                } while (local_228 != 0);
              }
              pcVar11 = (code *)PTR__objc_release_004410a0;
              (*(code *)PTR__objc_release_004410a0)(local_1e8);
              lVar9 = local_270 + 1;
            } while (lVar9 != local_208);
            local_208 = (*pcVar8)(local_1d8,"countByEnumeratingWithState:objects:count:",&local_318,
                                  local_138,0x10);
            lVar7 = local_1c8;
            lVar9 = local_1f0;
          } while (local_208 != 0);
          if ((local_1f0 != 0) && (local_1c8 != 0)) {
            (*pcVar8)(local_1c0,local_240,local_1c8,local_1f0);
          }
        }
        (*pcVar11)(local_1d8);
        (*pcVar11)(lVar7);
        (*pcVar11)(lVar9);
        lVar9 = local_258 + 1;
      } while (lVar9 != local_200);
      local_200 = (*pcVar8)(local_1d0,"countByEnumeratingWithState:objects:count:",&local_358,
                            local_b8,0x10);
    } while (local_200 != 0);
  }
  (*(code *)PTR__objc_release_004410a0)(local_1d0);
  uVar5 = (*pcVar8)(&_OBJC_CLASS___NSMutableString,"new");
  IVar2 = local_1e0;
  (*pcVar8)(uVar5,"appendFormat:",&cf___,*(undefined8 *)(local_1e0 + 0x80));
  if (*(char *)(IVar2 + 0x91) != '\0') {
    (*(code *)PTR__objc_msgSend_00441098)(uVar5,"appendFormat:",&cf__lu,local_230);
  }
  puVar1 = PTR__objc_msgSend_00441098;
  (*(code *)PTR__objc_msgSend_00441098)
            (uVar5,"appendFormat:",&cf____,*(undefined8 *)(local_1e0 + 0x88));
  uVar3 = local_1c0;
  uVar6 = local_238;
  (*(code *)puVar1)(local_238,"setObject:forKeyedSubscript:",local_1c0,uVar5);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar6);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

