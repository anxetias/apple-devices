// rea decompile_all
// name: PS190TatsuRequestCreatorBackDeploy::generateRequestDictionary
// address: 0x243efe
// body: available
// range: 0x243efe-0x244ec9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x244ec5 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

char PS190TatsuRequestCreatorBackDeploy::generateRequestDictionary(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 local_2e8;
  long lStack_2e0;
  long *local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a0;
  long local_298;
  long local_290;
  long local_288;
  long local_280;
  long local_278;
  cfstringStruct *local_270;
  char *local_268;
  char *local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  undefined8 local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  long local_228;
  long local_220;
  long local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long local_1e0;
  char *local_1d8;
  char *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  char *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  undefined8 local_198;
  long local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  undefined8 local_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  char *local_138;
  undefined8 local_130;
  undefined8 local_128;
  char *local_120;
  char *local_118;
  undefined8 local_110;
  long local_108;
  char *local_100;
  ID local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar5 = _PS190GenerateDigest(*(undefined8 *)(param_1 + _firmwareData));
  local_148 = _objc_retainAutoreleasedReturnValue(uVar5);
  pcVar11 = (code *)PTR__objc_msgSend_00441098;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  local_d0 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_2e8 = 0;
  lStack_2e0 = 0;
  local_2d8 = (long *)0x0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_f8 = param_1;
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + _deviceInfoArray));
  local_168 = (*pcVar11)(uVar5,"countByEnumeratingWithState:objects:count:",&local_2e8,local_b8,0x10
                        );
  if (local_168 != 0) {
    local_278 = *local_2d8;
    local_270 = &cf_TagNumber;
    local_258 = &cf__PCON_u_Ticket;
    local_250 = &cf_HardwareID;
    local_240 = &cf_BoardID;
    local_238 = &cf_ChipID;
    local_230 = &cf_DebugDisable;
    local_210 = &cf_ECID;
    local_208 = &cf_Nonce;
    local_200 = &cf_ProductionMode;
    local_1f8 = &cf_RealHDCPKeysPresent;
    local_1c8 = &cf_SecurityDomain;
    local_1c0 = &cf_SecurityMode;
    local_1b0 = &cf_DebugEnableOverride;
    local_1a8 = &cf_UseHDCPEntitlement;
    local_1a0 = &cf_FWFeatureConfig;
    local_110 = uVar5;
    do {
      local_100 = "objectForKeyedSubscript:";
      local_268 = "unsignedIntValue";
      local_260 = "stringWithValidatedFormat:validFormatSpecifiers:error:";
      pcVar12 = "numberWithBool:";
      local_e0 = "setObject:forKeyedSubscript:";
      local_f0 = "stringWithFormat:";
      local_120 = "boolValue";
      local_1d8 = "unsignedLongLongValue";
      local_1d0 = "dataWithBytes:length:";
      local_138 = "numberWithInt:";
      local_1b8 = "dictionaryWithObjects:forKeys:count:";
      pcVar13 = "log:";
      lVar8 = 0;
      local_118 = "log:";
      local_e8 = "numberWithBool:";
      do {
        if (*local_2d8 != local_278) {
          _objc_enumerationMutation(local_110);
        }
        uVar5 = *(undefined8 *)(lStack_2e0 + lVar8 * 8);
        uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,local_100,local_270);
        lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
        if (lVar7 == 0) {
          (*(code *)PTR__objc_msgSend_00441098)
                    (local_f8,pcVar13,&cf__s_Unabletolocatetagnumberindeviceinfo,
                     "-[PS190TatsuRequestCreatorBackDeploy generateRequestDictionary]");
LAB_00244e78:
          cVar4 = '\0';
          uVar5 = local_110;
          uVar6 = local_d0;
          goto LAB_00244e86;
        }
        local_170 = lVar7;
        local_d4 = (*pcVar11)(lVar7,local_268);
        uVar6 = (*pcVar11)(&_OBJC_CLASS___NSString,local_260,local_258,&cf__u,0,local_d4);
        lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
        if (lVar7 == 0) {
          (*(code *)PTR__objc_msgSend_00441098)
                    (local_f8,pcVar13,&cf__s_Unabletolocateticketname,
                     "-[PS190TatsuRequestCreatorBackDeploy generateRequestDictionary]");
          (*(code *)PTR__objc_release_004410a0)(local_170);
          goto LAB_00244e78;
        }
        uVar6 = (*pcVar11)(&_OBJC_CLASS___NSNumber,pcVar12,1);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        local_298 = lVar7;
        (*(code *)PTR__objc_msgSend_00441098)(local_d0,local_e0,uVar6,lVar7);
        pcVar11 = (code *)PTR__objc_msgSend_00441098;
        (*(code *)PTR__objc_release_004410a0)(uVar6);
        pcVar12 = local_100;
        uVar6 = (*pcVar11)(uVar5,local_100,local_250);
        local_108 = _objc_retainAutoreleasedReturnValue(uVar6);
        local_290 = lVar8;
        if (local_108 == 0) {
          (*pcVar11)(local_f8,pcVar13,&cf__s_Unabletolocatehardwaredictionary,
                     "-[PS190TatsuRequestCreatorBackDeploy generateRequestDictionary]");
          bVar1 = true;
          pcVar11 = (code *)PTR__objc_release_004410a0;
          pcVar12 = local_e8;
        }
        else {
          local_160 = uVar5;
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)(local_108,pcVar12,local_240);
          lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
          if (lVar8 != 0) {
            uVar5 = (*pcVar11)(&_OBJC_CLASS___NSString,local_f0,&cf_PCON_u_BoardID,local_d4);
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            (*(code *)PTR__objc_msgSend_00441098)(local_d0,local_e0,lVar8,uVar5);
            pcVar11 = (code *)PTR__objc_msgSend_00441098;
            (*(code *)PTR__objc_release_004410a0)(uVar5);
          }
          pcVar12 = local_100;
          lVar7 = local_108;
          local_288 = lVar8;
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)(local_108,local_100,local_238);
          lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar3 = local_d4;
          local_280 = lVar8;
          if (lVar8 == 0) {
            (*pcVar11)(local_f8,pcVar13,&cf__s_UnabletolocatechipID,
                       "-[PS190TatsuRequestCreatorBackDeploy generateRequestDictionary]");
            bVar1 = true;
            pcVar11 = (code *)PTR__objc_release_004410a0;
            pcVar12 = local_e8;
          }
          else {
            uVar5 = (*pcVar11)(&_OBJC_CLASS___NSString,local_f0,&cf_PCON_u_ChipID,local_d4);
            local_248 = _objc_retainAutoreleasedReturnValue(uVar5);
            (*pcVar11)(local_d0,local_e0,lVar8,local_248);
            uVar5 = (*pcVar11)(lVar7,pcVar12,local_230);
            lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
            pcVar13 = local_118;
            if (lVar8 == 0) {
              (*pcVar11)(local_f8,local_118,&cf__s_Unabletolocatedebugdisable,
                         "-[PS190TatsuRequestCreatorBackDeploy generateRequestDictionary]");
              bVar1 = true;
              pcVar11 = (code *)PTR__objc_release_004410a0;
              pcVar12 = local_e8;
            }
            else {
              uVar5 = (*pcVar11)(&_OBJC_CLASS___NSString,local_f0,&cf_PCON_u_DebugDisable,uVar3);
              local_158 = _objc_retainAutoreleasedReturnValue(uVar5);
              local_150 = lVar8;
              cVar4 = (*pcVar11)(lVar8,local_120);
              uVar5 = (*pcVar11)(&_OBJC_CLASS___NSNumber,local_e8,cVar4 != '\0');
              uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
              (*pcVar11)(local_d0,local_e0,uVar5,local_158);
              puVar2 = PTR__objc_release_004410a0;
              (*(code *)PTR__objc_release_004410a0)(uVar5);
              uVar5 = (*pcVar11)(lVar7,pcVar12,local_210);
              lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
              pcVar13 = local_f0;
              if (lVar8 != 0) {
                uVar5 = (*pcVar11)(&_OBJC_CLASS___NSString,local_f0,&cf_PCON_u_ECID,local_d4);
                uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                local_2a0 = (*pcVar11)(lVar8,local_1d8);
                uVar6 = (*pcVar11)(&_OBJC_CLASS___NSData,local_1d0,&local_2a0,8);
                uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                (*pcVar11)(local_d0,local_e0,uVar6,uVar5);
                (*(code *)puVar2)(uVar6);
                pcVar13 = local_f0;
                (*(code *)puVar2)(uVar5);
              }
              pcVar12 = local_100;
              local_228 = lVar8;
              uVar5 = (*(code *)PTR__objc_msgSend_00441098)(local_108,local_100,local_208);
              lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
              puVar2 = PTR__objc_msgSend_00441098;
              if (lVar8 != 0) {
                uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                                  (&_OBJC_CLASS___NSString,pcVar13,&cf_PCON_u_Nonce,local_d4);
                uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                (*(code *)puVar2)(local_d0,local_e0,lVar8,uVar5);
                (*(code *)PTR__objc_release_004410a0)(uVar5);
              }
              local_220 = lVar8;
              uVar5 = (*(code *)PTR__objc_msgSend_00441098)(local_108,pcVar12,local_200);
              lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
              pcVar13 = local_e8;
              pcVar11 = (code *)PTR__objc_msgSend_00441098;
              if (lVar8 != 0) {
                uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                                  (&_OBJC_CLASS___NSString,local_f0,&cf_PCON_u_ProductionMode,
                                   local_d4);
                uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                cVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar8,local_120);
                uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                                  (&_OBJC_CLASS___NSNumber,pcVar13,cVar4 != '\0');
                uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                (*(code *)PTR__objc_msgSend_00441098)(local_d0,local_e0,uVar6,uVar5);
                puVar2 = PTR__objc_release_004410a0;
                (*(code *)PTR__objc_release_004410a0)(uVar6);
                pcVar11 = (code *)PTR__objc_msgSend_00441098;
                (*(code *)puVar2)(uVar5);
              }
              uVar3 = local_d4;
              lVar7 = local_108;
              local_218 = lVar8;
              uVar5 = (*(code *)PTR__objc_msgSend_00441098)(local_108,pcVar12,local_1f8);
              lVar9 = _objc_retainAutoreleasedReturnValue(uVar5);
              if (lVar9 == 0) {
                (*pcVar11)(local_f8,local_118,&cf__s_UnabletolocaterealHDCPkeyspresent,
                           "-[PS190TatsuRequestCreatorBackDeploy generateRequestDictionary]");
                bVar1 = true;
                pcVar11 = (code *)PTR__objc_release_004410a0;
                pcVar12 = local_e8;
              }
              else {
                uVar5 = (*pcVar11)(&_OBJC_CLASS___NSString,local_f0,&cf_PCON_u_RealHdcpKeysPresent,
                                   uVar3);
                uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                local_140 = lVar9;
                cVar4 = (*pcVar11)(lVar9,local_120);
                uVar6 = (*pcVar11)(&_OBJC_CLASS___NSNumber,local_e8,cVar4 != '\0');
                uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                pcVar13 = local_e0;
                local_1f0 = uVar5;
                (*(code *)PTR__objc_msgSend_00441098)(local_d0,local_e0,uVar6,uVar5);
                puVar2 = PTR__objc_msgSend_00441098;
                (*(code *)PTR__objc_release_004410a0)(uVar6);
                uVar5 = (*(code *)puVar2)(lVar7,local_100,local_1c8);
                lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
                if (lVar8 == 0) {
                  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,local_138,0)
                  ;
                  lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
                }
                uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSString,local_f0,&cf_PCON_u_SecurityDomain
                                          ,uVar3);
                uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                (*(code *)puVar2)(local_d0,pcVar13,lVar8,uVar5);
                uVar6 = (*(code *)puVar2)(local_108,local_100,local_1c0);
                lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
                local_1e8 = lVar8;
                local_1e0 = lVar7;
                if (lVar7 == 0) {
                  (*(code *)puVar2)(local_f8,local_118,&cf__s_Unabletolocatesecuritymode,
                                    "-[PS190TatsuRequestCreatorBackDeploy generateRequestDictionary]"
                                   );
                  bVar1 = true;
                  pcVar11 = (code *)PTR__objc_release_004410a0;
                }
                else {
                  local_198 = uVar5;
                  uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSString,local_f0,&cf_PCON_u_SecurityMode
                                            ,uVar3);
                  uVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
                  cVar4 = (*(code *)puVar2)(lVar7,local_120);
                  uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_e8,cVar4 != '\0');
                  uVar10 = _objc_retainAutoreleasedReturnValue(uVar5);
                  uVar5 = local_d0;
                  local_130 = uVar6;
                  (*(code *)PTR__objc_msgSend_00441098)(local_d0,pcVar13,uVar10,uVar6);
                  puVar2 = PTR__objc_release_004410a0;
                  (*(code *)PTR__objc_release_004410a0)(uVar10);
                  pcVar13 = local_f0;
                  uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                                    (&_OBJC_CLASS___NSString,local_f0,&cf_PCON_u_Firmware,local_d4);
                  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                  local_c8 = &cf_Digest;
                  local_c0 = local_148;
                  uVar10 = (*(code *)PTR__objc_msgSend_00441098)
                                     (&_OBJC_CLASS___NSDictionary,local_1b8,&local_c0,&local_c8);
                  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                  local_128 = uVar6;
                  (*(code *)PTR__objc_msgSend_00441098)(uVar5,local_e0,uVar10,uVar6);
                  pcVar11 = (code *)PTR__objc_msgSend_00441098;
                  (*(code *)puVar2)(uVar10);
                  uVar5 = (*pcVar11)(local_160,local_100,local_1b0);
                  lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
                  uVar5 = (*pcVar11)(&_OBJC_CLASS___NSString,pcVar13,&cf_PCON_u_DebugEnableOverride,
                                     local_d4);
                  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                  local_190 = lVar8;
                  local_188 = uVar5;
                  if (lVar8 == 0) {
                    uVar6 = (*pcVar11)(&_OBJC_CLASS___NSNumber,local_e8,0);
                    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                    (*(code *)PTR__objc_msgSend_00441098)(local_d0,local_e0,uVar6,uVar5);
                    pcVar11 = (code *)PTR__objc_msgSend_00441098;
                    (*(code *)puVar2)(uVar6);
                  }
                  else {
                    (*pcVar11)(local_d0,local_e0,lVar8,uVar5);
                  }
                  uVar5 = local_160;
                  uVar6 = (*pcVar11)(local_160,local_100,local_1a8);
                  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
                  uVar3 = local_d4;
                  pcVar13 = local_f0;
                  uVar6 = (*pcVar11)(&_OBJC_CLASS___NSString,local_f0,&cf_PCON_u_UseHdcpEntitlement,
                                     local_d4);
                  local_178 = _objc_retainAutoreleasedReturnValue(uVar6);
                  lVar8 = local_140;
                  if (lVar7 != 0) {
                    lVar8 = lVar7;
                  }
                  local_180 = lVar7;
                  (*pcVar11)(local_d0,local_e0,lVar8,local_178);
                  uVar5 = (*pcVar11)(uVar5,local_100,local_1a0);
                  lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
                  uVar5 = (*pcVar11)(&_OBJC_CLASS___NSString,pcVar13,&cf_PCON_u_FwFeatureConfig,
                                     uVar3);
                  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                  if (lVar8 == 0) {
                    uVar6 = (*pcVar11)(&_OBJC_CLASS___NSNumber,local_138,0);
                    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                    (*pcVar11)(local_d0,local_e0,uVar6,uVar5);
                    pcVar11 = (code *)PTR__objc_release_004410a0;
                    (*(code *)PTR__objc_release_004410a0)(uVar6);
                  }
                  else {
                    (*pcVar11)(local_d0,local_e0,lVar8,uVar5);
                    pcVar11 = (code *)PTR__objc_release_004410a0;
                  }
                  uVar10 = local_128;
                  uVar6 = local_130;
                  (*pcVar11)(uVar5);
                  (*pcVar11)(lVar8);
                  (*pcVar11)(local_178);
                  (*pcVar11)(local_180);
                  (*pcVar11)(local_188);
                  (*pcVar11)(local_190);
                  (*pcVar11)(uVar10);
                  (*pcVar11)(uVar6);
                  bVar1 = false;
                  uVar5 = local_198;
                }
                pcVar12 = local_e8;
                (*pcVar11)(local_1e0);
                (*pcVar11)(uVar5);
                (*pcVar11)(local_1e8);
                (*pcVar11)(local_1f0);
                lVar9 = local_140;
              }
              lVar8 = local_150;
              (*pcVar11)(lVar9);
              (*pcVar11)(local_218);
              (*pcVar11)(local_220);
              (*pcVar11)(local_228);
              (*pcVar11)(local_158);
              pcVar13 = local_118;
            }
            (*pcVar11)(lVar8);
            (*pcVar11)(local_248);
          }
          (*pcVar11)(local_280);
          (*pcVar11)(local_288);
        }
        (*pcVar11)(local_108);
        (*pcVar11)(local_298);
        (*pcVar11)(local_170);
        uVar5 = local_110;
        pcVar11 = (code *)PTR__objc_msgSend_00441098;
        if (bVar1) goto LAB_00244e78;
        lVar8 = local_290 + 1;
      } while (local_168 != lVar8);
      local_168 = (*(code *)PTR__objc_msgSend_00441098)
                            (local_110,"countByEnumeratingWithState:objects:count:",&local_2e8,
                             local_b8);
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  uVar6 = local_d0;
  if (*(long *)(local_f8 + _apParameters) != 0) {
    (*(code *)PTR__objc_msgSend_00441098)(local_d0,"addEntriesFromDictionary:");
  }
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSDictionary,"dictionaryWithDictionary:",uVar6);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = *(undefined8 *)(local_f8 + _requestDictionary);
  *(undefined8 *)(local_f8 + _requestDictionary) = uVar10;
  cVar4 = '\x01';
LAB_00244e86:
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(local_148);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar4;
}

