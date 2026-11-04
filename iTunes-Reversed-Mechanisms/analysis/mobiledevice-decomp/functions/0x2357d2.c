// rea decompile_all
// name: UARPSuperBinaryPayloadBackDeploy::processMeasurementsForTSSOptions:unitNumber:asMeasurement:
// address: 0x2357d2
// body: available
// range: 0x2357d2-0x235ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x235ee3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x24 bytes */

void UARPSuperBinaryPayloadBackDeploy::processMeasurementsForTSSOptions_unitNumber_asMeasurement_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,char param_5)

{
  undefined *puVar1;
  char *pcVar2;
  ID IVar3;
  char cVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  undefined7 in_register_00000081;
  char *pcVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 local_2a8;
  long lStack_2a0;
  long *local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  long lStack_260;
  long *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  long local_220;
  char *local_218;
  char *local_210;
  char *local_208;
  cfstringStruct *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  cfstringStruct *local_1e0;
  long local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  char *local_1b8;
  long local_1b0;
  long local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  unsigned_long_long local_190;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  ID local_168;
  undefined8 local_160;
  char *local_158;
  char *local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_144 = (undefined4)CONCAT71(in_register_00000081,param_5);
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_190 = param_4;
  local_180 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_2a8 = 0;
  lStack_2a0 = 0;
  local_298 = (long *)0x0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_168 = param_1;
  local_170 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x50));
  local_188 = (*(code *)PTR__objc_msgSend_00441098)
                        (local_170,"countByEnumeratingWithState:objects:count:",&local_2a8,local_b8,
                         0x10);
  if (local_188 != 0) {
    local_1b0 = *local_298;
    local_200 = &cf_Digest;
    local_1a0 = &cf_ESEC;
    local_198 = &cf_EPRO;
    local_1e0 = &cf_Trusted;
    do {
      pcVar11 = "new";
      local_1c8 = "tlvs";
      local_1b8 = "setObject:forKeyedSubscript:";
      lVar10 = 0;
      local_1d0 = "new";
      local_1c0 = "appendFormat:";
      do {
        if (*local_298 != local_1b0) {
          _objc_enumerationMutation(local_170);
        }
        pcVar13 = (code *)PTR__objc_msgSend_00441098;
        uVar6 = *(undefined8 *)(lStack_2a0 + lVar10 * 8);
        local_1d8 = lVar10;
        local_140 = (*(code *)PTR__objc_msgSend_00441098)
                              (&_OBJC_CLASS___NSMutableDictionary,pcVar11);
        local_268 = 0;
        lStack_260 = 0;
        local_258 = (long *)0x0;
        uStack_250 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_238 = 0;
        uStack_230 = 0;
        uVar6 = (*pcVar13)(uVar6,local_1c8);
        local_178 = _objc_retainAutoreleasedReturnValue(uVar6);
        local_1a8 = (*pcVar13)(local_178,"countByEnumeratingWithState:objects:count:",&local_268,
                               local_138,0x10);
        if (local_1a8 == 0) {
          local_160 = 0;
        }
        else {
          local_220 = *local_258;
          local_160 = 0;
          do {
            pcVar11 = "class";
            local_210 = "longname";
            local_208 = "digest";
            local_150 = "setObject:forKeyedSubscript:";
            local_1f8 = "securityMode";
            local_158 = "numberWithBool:";
            local_1f0 = "productionMode";
            local_1e8 = "trusted";
            lVar10 = 0;
            local_218 = "class";
            do {
              if (*local_258 != local_220) {
                _objc_enumerationMutation(local_178);
              }
              uVar6 = *(undefined8 *)(lStack_260 + lVar10 * 8);
              uVar7 = (*pcVar13)(&objc::class_t::UARPTLVPersonalizationFTABSubfileLongnameBackDeploy
                                 ,pcVar11);
              cVar4 = (*pcVar13)(uVar6,"isKindOfClass:",uVar7);
              if (cVar4 == '\0') {
                uVar7 = (*pcVar13)(&objc::class_t::UARPTLVPersonalizationFTABSubfileDigestBackDeploy
                                   ,pcVar11);
                cVar4 = (*pcVar13)(uVar6,"isKindOfClass:",uVar7);
                if (cVar4 != '\0') {
                  uVar6 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
                  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,local_208);
                  uVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
                  pcVar9 = local_200;
                  uVar7 = uVar8;
LAB_00235b46:
                  (*(code *)PTR__objc_msgSend_00441098)(local_140,local_150,uVar8,pcVar9);
                  pcVar12 = (code *)PTR__objc_release_004410a0;
                  pcVar13 = (code *)PTR__objc_msgSend_00441098;
                  (*(code *)PTR__objc_release_004410a0)(uVar6);
                  goto LAB_00235b60;
                }
                uVar7 = (*pcVar13)(&objc::class_t::UARPTLVPersonalizationFTABSubfileESECBackDeploy,
                                   pcVar11);
                cVar4 = (*pcVar13)(uVar6,"isKindOfClass:",uVar7);
                if (cVar4 == '\0') {
                  uVar7 = (*pcVar13)(&objc::class_t::UARPTLVPersonalizationFTABSubfileEPROBackDeploy
                                     ,pcVar11);
                  cVar4 = (*pcVar13)(uVar6,"isKindOfClass:",uVar7);
                  if (cVar4 == '\0') {
                    uVar7 = (*pcVar13)(&objc::class_t::
                                        UARPTLVPersonalizationFTABSubfileTrustedBackDeploy,pcVar11);
                    cVar4 = (*pcVar13)(uVar6,"isKindOfClass:",uVar7);
                    if (cVar4 != '\0') {
                      uVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
                      sVar5 = (*pcVar13)(uVar7,local_1e8);
                      pcVar12 = (code *)PTR__objc_release_004410a0;
                      if ((char)local_144 != '\0') goto LAB_00235b60;
                      uVar6 = (*pcVar13)(&_OBJC_CLASS___NSNumber,local_158,sVar5 != 0);
                      uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
                      pcVar9 = local_1e0;
                      uVar6 = uVar8;
                      goto LAB_00235b46;
                    }
                  }
                  else if ((char)local_144 == '\0') {
                    cVar4 = (*pcVar13)(local_168,local_1f0);
                    uVar6 = (*pcVar13)(&_OBJC_CLASS___NSNumber,local_158,cVar4 != '\0');
                    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
                    pcVar9 = local_198;
                    goto LAB_00235d1c;
                  }
                }
                else if ((char)local_144 == '\0') {
                  cVar4 = (*pcVar13)(local_168,local_1f8);
                  uVar6 = (*pcVar13)(&_OBJC_CLASS___NSNumber,local_158,cVar4 != '\0');
                  uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
                  pcVar9 = local_1a0;
LAB_00235d1c:
                  (*pcVar13)(local_140,local_150,uVar7,pcVar9);
                  pcVar12 = (code *)PTR__objc_release_004410a0;
                  goto LAB_00235b60;
                }
              }
              else {
                uVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
                uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,local_210);
                uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                pcVar12 = (code *)PTR__objc_release_004410a0;
                (*(code *)PTR__objc_release_004410a0)(local_160);
                pcVar13 = (code *)PTR__objc_msgSend_00441098;
                local_160 = uVar6;
LAB_00235b60:
                (*pcVar12)(uVar7);
                pcVar11 = local_218;
              }
              lVar10 = lVar10 + 1;
            } while (local_1a8 != lVar10);
            local_1a8 = (*pcVar13)(local_178,"countByEnumeratingWithState:objects:count:",&local_268
                                   ,local_138,0x10);
          } while (local_1a8 != 0);
        }
        local_1a8 = 0;
        (*(code *)PTR__objc_release_004410a0)(local_178);
        pcVar11 = local_1d0;
        uVar6 = (*pcVar13)(&_OBJC_CLASS___NSMutableString,local_1d0);
        IVar3 = local_168;
        pcVar2 = local_1c0;
        (*pcVar13)(uVar6,local_1c0,&cf___,*(undefined8 *)(local_168 + 0x40));
        if (*(char *)(IVar3 + 0x4a) != '\0') {
          (*pcVar13)(uVar6,pcVar2,&cf__lu,local_190);
        }
        (*pcVar13)(uVar6,pcVar2,&cf____,local_160);
        if (*(char *)(local_168 + 0x49) != '\0') {
          (*pcVar13)(uVar6,pcVar2,&cf___lu,local_190);
        }
        uVar7 = local_140;
        (*pcVar13)(local_180,local_1b8,local_140,uVar6);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar6);
        (*(code *)puVar1)(uVar7);
        (*(code *)puVar1)(local_160);
        lVar10 = local_1d8 + 1;
      } while (lVar10 != local_188);
      local_188 = (*(code *)PTR__objc_msgSend_00441098)
                            (local_170,"countByEnumeratingWithState:objects:count:",&local_2a8,
                             local_b8,0x10);
    } while (local_188 != 0);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_170);
  (*(code *)puVar1)(local_180);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

