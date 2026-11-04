// rea decompile_all
// name: AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy::generateRequestDictionary
// address: 0x23031a
// body: available
// range: 0x23031a-0x231c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x231c5f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

char AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy::generateRequestDictionary
               (ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  code *pcVar13;
  code *pcVar14;
  undefined8 local_4c8;
  long lStack_4c0;
  long *local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  long local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  long local_458;
  cfstringStruct *local_450;
  cfstringStruct *local_448;
  cfstringStruct *local_440;
  cfstringStruct *local_438;
  undefined8 local_430;
  cfstringStruct *local_428;
  cfstringStruct *local_420;
  cfstringStruct *local_418;
  cfstringStruct *local_410;
  undefined8 local_408;
  undefined8 local_400;
  cfstringStruct *local_3f8;
  cfstringStruct *local_3f0;
  undefined8 local_3e8;
  cfstringStruct *local_3e0;
  cfstringStruct *local_3d8;
  cfstringStruct *local_3d0;
  cfstringStruct *local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  cfstringStruct *local_3b0;
  cfstringStruct *local_3a8;
  char *local_3a0;
  cfstringStruct *local_398;
  cfstringStruct *local_390;
  cfstringStruct *local_388;
  cfstringStruct *local_380;
  cfstringStruct *local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  long local_350;
  char *local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  long local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  char *local_2f0;
  char *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  char *local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  char *local_2b0;
  undefined8 local_2a8;
  char *local_2a0;
  char *local_298;
  ID local_290;
  char *local_288;
  undefined8 local_280;
  undefined8 local_278;
  char *local_270;
  cfstringStruct *local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar2 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                    (param_1,"generateHashForData:",*(undefined8 *)(param_1 + _rkosData));
  local_340 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar7 = (*(code *)puVar2)(param_1,"generateHashForData:",*(undefined8 *)(param_1 + _rrkoData));
  local_338 = _objc_retainAutoreleasedReturnValue(uVar7);
  if (*(long *)(param_1 + _cphyData) == 0) {
    local_320 = 0;
  }
  else {
    uVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"generateHashForData:");
    local_320 = _objc_retainAutoreleasedReturnValue(uVar7);
  }
  uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  local_280 = _objc_retainAutoreleasedReturnValue(uVar7);
  local_4c8 = 0;
  lStack_4c0 = 0;
  local_4b8 = (long *)0x0;
  uStack_4b0 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_328 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + _deviceInfoArray));
  local_350 = (*(code *)puVar2)(local_328,"countByEnumeratingWithState:objects:count:",&local_4c8,
                                local_b8,0x10);
  if (local_350 != 0) {
    local_458 = *local_4b8;
    local_450 = &cf_TagNumber;
    local_448 = &cf_HardwareID;
    local_440 = &cf__Timer_u_Ticket;
    local_438 = &cf_BoardID;
    local_428 = &cf_Timer_BoardID__u;
    local_420 = &cf_ChipID;
    local_418 = &cf_Timer_ChipID__u;
    local_410 = &cf_ECID;
    local_3f8 = &cf_Timer_ECID__u;
    local_3f0 = &cf_Nonce;
    local_3e0 = &cf_Timer_Nonce__u;
    local_3d8 = &cf_ProductionStatus;
    local_3d0 = &cf_Timer_ProductionMode__u;
    local_3c8 = &cf_SecurityDomain;
    local_3b0 = &cf_Timer_SecurityDomain__u;
    local_3a8 = &cf_SecurityMode;
    local_398 = &cf_Timer_SecurityMode__u;
    local_390 = &cf_Demote;
    local_388 = &cf_Trusted;
    local_380 = &cf_Timer_RTKitOS__u;
    local_378 = &cf_Timer_RestoreRTKitOS__u;
    local_290 = param_1;
    do {
      local_2b8 = "class";
      local_2c8 = "isKindOfClass:";
      local_298 = "unsignedCharValue";
      local_2a0 = "stringWithValidatedFormat:validFormatSpecifiers:error:";
      local_270 = "numberWithBool:";
      local_288 = "setObject:forKeyedSubscript:";
      local_2b0 = "log:";
      local_2f0 = "boolValue";
      local_2e8 = "dictionaryWithObjects:forKeys:count:";
      local_3a0 = "stringWithFormat:";
      lVar10 = 0;
      local_348 = "objectForKeyedSubscript:";
      do {
        pcVar3 = local_348;
        if (*local_4b8 != local_458) {
          _objc_enumerationMutation(local_328);
        }
        puVar2 = PTR__objc_msgSend_00441098;
        uVar7 = *(undefined8 *)(lStack_4c0 + lVar10 * 8);
        uVar8 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,pcVar3,local_450);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar9 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_2b8);
        pcVar3 = local_2c8;
        cVar5 = (*(code *)puVar2)(uVar8,local_2c8,uVar9);
        local_2c0 = uVar8;
        if (cVar5 == '\0') {
          (*(code *)PTR__objc_msgSend_00441098)
                    (local_290,local_2b0,&cf_Unabletolocatetagnumberindeviceinfo);
LAB_00231bec:
          (*(code *)PTR__objc_release_004410a0)(local_2c0);
LAB_00231bf9:
          (*(code *)PTR__objc_release_004410a0)(local_328);
          cVar5 = '\0';
          uVar7 = local_280;
          goto LAB_00231c0f;
        }
        local_480 = lVar10;
        uVar6 = (*(code *)puVar2)(uVar8,local_298);
        uVar8 = (*(code *)puVar2)(uVar7,local_348,local_448);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar9 = (*(code *)puVar2)(&_OBJC_CLASS___NSDictionary,local_2b8);
        cVar5 = (*(code *)puVar2)(uVar8,pcVar3,uVar9);
        if (cVar5 == '\0') {
          (*(code *)PTR__objc_msgSend_00441098)
                    (local_290,local_2b0,&cf_UnabletolocatehardwareIDdata);
          (*(code *)PTR__objc_release_004410a0)(uVar8);
          goto LAB_00231bec;
        }
        local_278 = CONCAT44(local_278._4_4_,uVar6) & 0xffffffff000000ff;
        local_300 = uVar7;
        uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSString,local_2a0,local_440,&cf__u,0);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar9 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_270,1);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        local_478 = uVar7;
        (*(code *)puVar2)(local_280,local_288,uVar9,uVar7);
        pcVar4 = local_348;
        (*(code *)PTR__objc_release_004410a0)(uVar9);
        local_2d0 = uVar8;
        uVar7 = (*(code *)puVar2)(uVar8,pcVar4,local_438);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar8 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_2b8);
        cVar5 = (*(code *)puVar2)(uVar7,pcVar3,uVar8);
        param_1 = local_290;
        puVar2 = PTR__objc_msgSend_00441098;
        local_470 = uVar7;
        if (cVar5 == '\0') {
          (*(code *)PTR__objc_msgSend_00441098)
                    (local_290,local_2b0,&cf_UnabletolocateboardIDfortag_u,local_278 & 0xffffffff);
          bVar1 = true;
          uVar7 = local_2c0;
          pcVar14 = (code *)PTR__objc_release_004410a0;
        }
        else {
          uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                            (&_OBJC_CLASS___NSString,local_2a0,local_428,&cf__u,0,
                             local_278 & 0xffffffff);
          local_468 = _objc_retainAutoreleasedReturnValue(uVar8);
          uVar8 = local_280;
          (*(code *)puVar2)(local_280,local_288,uVar7,local_468);
          uVar7 = (*(code *)puVar2)(local_2d0,pcVar4,local_420);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar9 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_2b8);
          cVar5 = (*(code *)puVar2)(uVar7,pcVar3,uVar9);
          param_1 = local_290;
          puVar2 = PTR__objc_msgSend_00441098;
          local_460 = uVar7;
          if (cVar5 == '\0') {
            (*(code *)PTR__objc_msgSend_00441098)
                      (local_290,local_2b0,&cf_UnabletolocateboardIDfortag_u,local_278 & 0xffffffff)
            ;
            bVar1 = true;
            uVar7 = local_2c0;
            pcVar14 = (code *)PTR__objc_release_004410a0;
          }
          else {
            uVar9 = (*(code *)PTR__objc_msgSend_00441098)
                              (&_OBJC_CLASS___NSString,local_2a0,local_418,&cf__u,0,
                               local_278 & 0xffffffff);
            local_430 = _objc_retainAutoreleasedReturnValue(uVar9);
            (*(code *)puVar2)(uVar8,local_288,uVar7,local_430);
            uVar7 = (*(code *)puVar2)(local_2d0,pcVar4,local_410);
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
            uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_2b8);
            cVar5 = (*(code *)puVar2)(uVar9,local_2c8,uVar7);
            param_1 = local_290;
            pcVar14 = (code *)PTR__objc_release_004410a0;
            puVar2 = PTR__objc_msgSend_00441098;
            if (cVar5 == '\0') {
              (*(code *)PTR__objc_msgSend_00441098)
                        (local_290,local_2b0,&cf_UnabletolocateECIDfortag_u,local_278 & 0xffffffff);
              bVar1 = true;
              uVar7 = local_2c0;
            }
            else {
              uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                                (&_OBJC_CLASS___NSString,local_2a0,local_3f8,&cf__u,0,
                                 local_278 & 0xffffffff);
              local_408 = _objc_retainAutoreleasedReturnValue(uVar7);
              local_318 = uVar9;
              (*(code *)puVar2)(uVar8,local_288,uVar9,local_408);
              uVar7 = (*(code *)puVar2)(local_2d0,pcVar4,local_3f0);
              uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
              uVar9 = (*(code *)puVar2)(&_OBJC_CLASS___NSData,local_2b8);
              cVar5 = (*(code *)puVar2)(uVar7,local_2c8,uVar9);
              param_1 = local_290;
              puVar2 = PTR__objc_msgSend_00441098;
              local_400 = uVar7;
              if (cVar5 == '\0') {
                (*(code *)PTR__objc_msgSend_00441098)
                          (local_290,local_2b0,&cf_Unabletolocatenoncefortag_u,
                           local_278 & 0xffffffff);
                bVar1 = true;
                uVar7 = local_2c0;
                uVar9 = local_318;
              }
              else {
                uVar9 = (*(code *)PTR__objc_msgSend_00441098)
                                  (&_OBJC_CLASS___NSString,local_2a0,local_3e0,&cf__u,0,
                                   local_278 & 0xffffffff);
                local_3e8 = _objc_retainAutoreleasedReturnValue(uVar9);
                (*(code *)puVar2)(uVar8,local_288,uVar7,local_3e8);
                uVar7 = (*(code *)puVar2)(local_2d0,pcVar4,local_3d8);
                uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                uVar8 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_2b8);
                cVar5 = (*(code *)puVar2)(uVar7,local_2c8,uVar8);
                param_1 = local_290;
                puVar2 = PTR__objc_msgSend_00441098;
                local_2f8 = uVar7;
                if (cVar5 == '\0') {
                  (*(code *)PTR__objc_msgSend_00441098)
                            (local_290,local_2b0,&cf_Unabletolocateproductionstatusfortag_u,
                             local_278 & 0xffffffff);
                  bVar1 = true;
                  uVar7 = local_2c0;
                  uVar9 = local_318;
                }
                else {
                  uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                    (&_OBJC_CLASS___NSString,local_2a0,local_3d0,&cf__u,0,
                                     local_278 & 0xffffffff);
                  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
                  cVar5 = (*(code *)puVar2)(uVar7,local_298);
                  uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_270,cVar5 != '\0');
                  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                  local_3c0 = uVar8;
                  (*(code *)puVar2)(local_280,local_288,uVar7,uVar8);
                  (*pcVar14)(uVar7);
                  uVar7 = (*(code *)puVar2)(local_2d0,pcVar4,local_3c8);
                  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                  uVar8 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_2b8);
                  cVar5 = (*(code *)puVar2)(uVar7,local_2c8,uVar8);
                  param_1 = local_290;
                  puVar2 = PTR__objc_msgSend_00441098;
                  local_3b8 = uVar7;
                  if (cVar5 == '\0') {
                    (*(code *)PTR__objc_msgSend_00441098)
                              (local_290,local_2b0,&cf_Unabletolocatesecuritydomainfortag_u,
                               local_278 & 0xffffffff);
                    bVar1 = true;
                    uVar7 = local_2c0;
                    uVar9 = local_318;
                  }
                  else {
                    uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                      (&_OBJC_CLASS___NSString,local_2a0,local_3b0,&cf__u,0,
                                       local_278 & 0xffffffff);
                    local_370 = _objc_retainAutoreleasedReturnValue(uVar8);
                    (*(code *)puVar2)(local_280,local_288,uVar7,local_370);
                    uVar7 = (*(code *)puVar2)(local_2d0,pcVar4,local_3a8);
                    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                    uVar8 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_2b8);
                    cVar5 = (*(code *)puVar2)(uVar7,local_2c8,uVar8);
                    param_1 = local_290;
                    puVar2 = PTR__objc_msgSend_00441098;
                    local_2d8 = uVar7;
                    if (cVar5 == '\0') {
                      (*(code *)PTR__objc_msgSend_00441098)
                                (local_290,local_2b0,&cf_Unabletolocatesecuritymodefortag_u,
                                 local_278 & 0xffffffff);
                      bVar1 = true;
                    }
                    else {
                      uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                        (&_OBJC_CLASS___NSString,local_2a0,local_398,&cf__u,0,
                                         local_278 & 0xffffffff);
                      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
                      cVar5 = (*(code *)puVar2)(uVar7,local_298);
                      uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_270,cVar5 != '\0');
                      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                      local_368 = uVar8;
                      (*(code *)puVar2)(local_280,local_288,uVar7,uVar8);
                      (*pcVar14)(uVar7);
                      uVar7 = (*(code *)puVar2)(local_2d0,pcVar4,local_390);
                      lVar10 = _objc_retainAutoreleasedReturnValue(uVar7);
                      pcVar3 = local_2b8;
                      puVar2 = PTR__objc_msgSend_00441098;
                      local_310 = lVar10;
                      if (lVar10 == 0) {
LAB_00230d0e:
                        puVar2 = PTR__objc_msgSend_00441098;
                        uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                                          (&_OBJC_CLASS___NSNumber,local_270,1);
                        uVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
                        uVar7 = (*(code *)puVar2)(local_300,pcVar4,local_388);
                        uVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
                        uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,pcVar3);
                        cVar5 = (*(code *)puVar2)(uVar9,local_2c8,uVar7);
                        uVar7 = uVar8;
                        local_360 = uVar9;
                        if (cVar5 == '\x01') {
                          uVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar9);
                          (*pcVar14)(uVar8);
                        }
                        uVar8 = local_2d8;
                        lVar10 = local_310;
                        pcVar13 = (code *)PTR__objc_msgSend_00441098;
                        uVar9 = (*(code *)PTR__objc_msgSend_00441098)
                                          (&_OBJC_CLASS___NSString,local_2a0,local_380,&cf__u,0,
                                           local_278 & 0xffffffff);
                        local_330 = _objc_retainAutoreleasedReturnValue(uVar9);
                        cVar5 = (*pcVar13)(lVar10,local_2f0);
                        local_300 = uVar7;
                        if ((cVar5 == '\0') ||
                           (cVar5 = (*pcVar13)(local_2f8,local_298), pcVar3 = local_270,
                           cVar5 == '\0')) {
                          local_f8 = &cf_Digest;
                          local_d8 = local_340;
                          local_f0 = &cf_EPRO;
                          cVar5 = (*pcVar13)(local_2f8,local_298);
                          uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                                            (&_OBJC_CLASS___NSNumber,local_270,cVar5 != '\0');
                          local_2e0 = _objc_retainAutoreleasedReturnValue(uVar7);
                          uVar7 = local_280;
                          local_e8 = &cf_ESEC;
                          local_d0 = local_2e0;
                          cVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,local_298);
                          uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                            (&_OBJC_CLASS___NSNumber,local_270,cVar5 != '\0');
                          uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
                          local_e0 = &cf_Trusted;
                          local_c8 = uVar8;
                          cVar5 = (*(code *)PTR__objc_msgSend_00441098)(local_300,local_2f0);
                          uVar9 = (*(code *)PTR__objc_msgSend_00441098)
                                            (&_OBJC_CLASS___NSNumber,local_270,cVar5 == '\x01');
                          local_2a8 = _objc_retainAutoreleasedReturnValue(uVar9);
                          pcVar13 = (code *)PTR__objc_msgSend_00441098;
                          local_c0 = local_2a8;
                          uVar9 = (*(code *)PTR__objc_msgSend_00441098)
                                            (&_OBJC_CLASS___NSDictionary,local_2e8,&local_d8,
                                             &local_f8,4);
                          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
                          (*pcVar13)(uVar7,local_288,uVar9,local_330);
                        }
                        else {
                          local_148 = &cf_Digest;
                          local_120 = local_340;
                          local_140 = &cf_EPRO;
                          uVar7 = (*pcVar13)(&_OBJC_CLASS___NSNumber,local_270,0);
                          local_2e0 = _objc_retainAutoreleasedReturnValue(uVar7);
                          local_138 = &cf_DPRO;
                          local_118 = local_2e0;
                          uVar7 = (*pcVar13)(&_OBJC_CLASS___NSNumber,pcVar3,1);
                          uVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
                          local_130 = &cf_ESEC;
                          local_110 = uVar8;
                          uVar7 = (*pcVar13)(&_OBJC_CLASS___NSNumber,pcVar3,1);
                          local_2a8 = _objc_retainAutoreleasedReturnValue(uVar7);
                          local_128 = &cf_Trusted;
                          local_108 = local_2a8;
                          uVar7 = (*pcVar13)(&_OBJC_CLASS___NSNumber,pcVar3,0);
                          uVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
                          local_100 = uVar9;
                          uVar7 = (*pcVar13)(&_OBJC_CLASS___NSDictionary,local_2e8,&local_120,
                                             &local_148,5);
                          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                          (*pcVar13)(local_280,local_288,uVar7,local_330);
                          pcVar14 = (code *)PTR__objc_release_004410a0;
                          (*(code *)PTR__objc_release_004410a0)(uVar7);
                        }
                        (*pcVar14)(uVar9);
                        (*pcVar14)(local_2a8);
                        (*pcVar14)(uVar8);
                        (*pcVar14)(local_2e0);
                        uVar7 = (*pcVar13)(&_OBJC_CLASS___NSString,local_2a0,local_378,&cf__u,0,
                                           local_278 & 0xffffffff);
                        local_2e0 = _objc_retainAutoreleasedReturnValue(uVar7);
                        cVar5 = (*pcVar13)(local_310,local_2f0);
                        if ((cVar5 == '\0') ||
                           (cVar5 = (*pcVar13)(local_2f8,local_298), pcVar3 = local_270,
                           cVar5 == '\0')) {
                          local_188 = &cf_Digest;
                          local_168 = local_338;
                          local_180 = &cf_EPRO;
                          cVar5 = (*pcVar13)(local_2f8,local_298);
                          uVar7 = local_300;
                          uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                            (&_OBJC_CLASS___NSNumber,local_270,cVar5 != '\0');
                          local_2a8 = _objc_retainAutoreleasedReturnValue(uVar8);
                          local_178 = &cf_ESEC;
                          local_160 = local_2a8;
                          cVar5 = (*(code *)PTR__objc_msgSend_00441098)(local_2d8,local_298);
                          uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                            (&_OBJC_CLASS___NSNumber,local_270,cVar5 != '\0');
                          uVar9 = _objc_retainAutoreleasedReturnValue(uVar8);
                          local_170 = &cf_Trusted;
                          local_158 = uVar9;
                          cVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,local_2f0);
                          uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                            (&_OBJC_CLASS___NSNumber,local_270,cVar5 == '\x01');
                          local_308 = _objc_retainAutoreleasedReturnValue(uVar8);
                          puVar2 = PTR__objc_msgSend_00441098;
                          local_150 = local_308;
                          uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                            (&_OBJC_CLASS___NSDictionary,local_2e8,&local_168,
                                             &local_188);
                          uVar11 = _objc_retainAutoreleasedReturnValue(uVar8);
                          (*(code *)puVar2)(local_280,local_288,uVar11,local_2e0);
                          uVar8 = local_2a8;
                        }
                        else {
                          local_1d8 = &cf_Digest;
                          local_1b0 = local_338;
                          local_1d0 = &cf_EPRO;
                          uVar7 = (*pcVar13)(&_OBJC_CLASS___NSNumber,local_270,0);
                          local_2a8 = _objc_retainAutoreleasedReturnValue(uVar7);
                          local_1c8 = &cf_DPRO;
                          local_1a8 = local_2a8;
                          uVar7 = (*pcVar13)(&_OBJC_CLASS___NSNumber,pcVar3,1);
                          uVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
                          local_1c0 = &cf_ESEC;
                          local_1a0 = uVar9;
                          uVar7 = (*pcVar13)(&_OBJC_CLASS___NSNumber,pcVar3,1);
                          local_308 = _objc_retainAutoreleasedReturnValue(uVar7);
                          local_1b8 = &cf_Trusted;
                          local_198 = local_308;
                          uVar7 = (*pcVar13)(&_OBJC_CLASS___NSNumber,pcVar3,0);
                          uVar11 = _objc_retainAutoreleasedReturnValue(uVar7);
                          local_190 = uVar11;
                          uVar7 = (*pcVar13)(&_OBJC_CLASS___NSDictionary,local_2e8,&local_1b0,
                                             &local_1d8);
                          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
                          (*pcVar13)(local_280,local_288,uVar7,local_2e0);
                          uVar8 = local_2a8;
                          (*pcVar14)(uVar7);
                          uVar7 = local_300;
                        }
                        (*pcVar14)(uVar11);
                        (*pcVar14)(local_308);
                        (*pcVar14)(uVar9);
                        (*pcVar14)(uVar8);
                        puVar2 = PTR__objc_msgSend_00441098;
                        if (*(long *)(local_290 + _cphyData) != 0) {
                          uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                            (&_OBJC_CLASS___NSString,local_3a0,
                                             &cf_Timer_AppleTypeCPhyFirmware__u,
                                             local_278 & 0xffffffff);
                          local_278 = _objc_retainAutoreleasedReturnValue(uVar8);
                          cVar5 = (*(code *)puVar2)(local_310,local_2f0);
                          uVar8 = local_2f8;
                          if ((cVar5 == '\0') ||
                             (cVar5 = (*(code *)puVar2)(local_2f8,local_298), pcVar3 = local_270,
                             cVar5 == '\0')) {
                            local_218 = &cf_Digest;
                            local_1f8 = local_320;
                            local_210 = &cf_EPRO;
                            cVar5 = (*(code *)puVar2)(uVar8,local_298);
                            uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                                              (&_OBJC_CLASS___NSNumber,local_270,cVar5 != '\0');
                            uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
                            local_208 = &cf_ESEC;
                            local_1f0 = uVar8;
                            cVar5 = (*(code *)puVar2)(local_2d8,local_298);
                            uVar9 = (*(code *)PTR__objc_msgSend_00441098)
                                              (&_OBJC_CLASS___NSNumber,local_270,cVar5 != '\0');
                            local_2a8 = _objc_retainAutoreleasedReturnValue(uVar9);
                            local_200 = &cf_Trusted;
                            local_1e8 = local_2a8;
                            cVar5 = (*(code *)puVar2)(uVar7,local_2f0);
                            uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                                              (&_OBJC_CLASS___NSNumber,local_270,cVar5 == '\x01');
                            local_308 = _objc_retainAutoreleasedReturnValue(uVar7);
                            puVar2 = PTR__objc_msgSend_00441098;
                            local_1e0 = local_308;
                            uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                                              (&_OBJC_CLASS___NSDictionary,local_2e8,&local_1f8,
                                               &local_218);
                            uVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
                            uVar12 = local_278;
                            (*(code *)puVar2)(local_280,local_288,uVar9,local_278);
                            uVar7 = local_2a8;
                            pcVar14 = (code *)PTR__objc_release_004410a0;
                          }
                          else {
                            local_268 = &cf_Digest;
                            local_240 = local_320;
                            local_260 = &cf_EPRO;
                            uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_270,0);
                            local_358 = _objc_retainAutoreleasedReturnValue(uVar7);
                            local_258 = &cf_DPRO;
                            local_238 = local_358;
                            uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,pcVar3,1);
                            local_2a8 = _objc_retainAutoreleasedReturnValue(uVar7);
                            local_250 = &cf_ESEC;
                            local_230 = local_2a8;
                            uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,pcVar3,1);
                            local_308 = _objc_retainAutoreleasedReturnValue(uVar7);
                            local_248 = &cf_Trusted;
                            local_228 = local_308;
                            uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,pcVar3,0);
                            uVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
                            local_220 = uVar9;
                            uVar7 = (*(code *)puVar2)(&_OBJC_CLASS___NSDictionary,local_2e8,
                                                      &local_240,&local_268);
                            uVar11 = _objc_retainAutoreleasedReturnValue(uVar7);
                            uVar12 = local_278;
                            (*(code *)puVar2)(local_280,local_288,uVar11,local_278);
                            uVar7 = local_2a8;
                            uVar8 = local_358;
                            (*pcVar14)(uVar11);
                          }
                          (*pcVar14)(uVar9);
                          (*pcVar14)(local_308);
                          (*pcVar14)(uVar7);
                          (*pcVar14)(uVar8);
                          (*pcVar14)(uVar12);
                          uVar7 = local_300;
                        }
                        param_1 = local_290;
                        (*pcVar14)(local_2e0);
                        (*pcVar14)(local_330);
                        (*pcVar14)(local_360);
                        (*pcVar14)(uVar7);
                        bVar1 = false;
                      }
                      else {
                        uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                                          (&_OBJC_CLASS___NSNumber,local_2b8);
                        cVar5 = (*(code *)puVar2)(lVar10,local_2c8,uVar7);
                        param_1 = local_290;
                        if (cVar5 != '\0') goto LAB_00230d0e;
                        (*(code *)PTR__objc_msgSend_00441098)
                                  (local_290,local_2b0,&cf_Invaliddemotesettingfortag_u,
                                   local_278 & 0xffffffff);
                        bVar1 = true;
                      }
                      (*pcVar14)(local_310);
                      (*pcVar14)(local_368);
                    }
                    uVar7 = local_2c0;
                    uVar9 = local_318;
                    (*pcVar14)(local_2d8);
                    (*pcVar14)(local_370);
                  }
                  (*pcVar14)(local_3b8);
                  (*pcVar14)(local_3c0);
                }
                (*pcVar14)(local_2f8);
                (*pcVar14)(local_3e8);
              }
              (*pcVar14)(local_400);
              (*pcVar14)(local_408);
            }
            (*pcVar14)(uVar9);
            (*pcVar14)(local_430);
          }
          (*pcVar14)(local_460);
          (*pcVar14)(local_468);
        }
        (*pcVar14)(local_470);
        (*pcVar14)(local_478);
        (*pcVar14)(local_2d0);
        (*pcVar14)(uVar7);
        if (bVar1) goto LAB_00231bf9;
        lVar10 = local_480 + 1;
      } while (local_350 != lVar10);
      local_350 = (*(code *)PTR__objc_msgSend_00441098)
                            (local_328,"countByEnumeratingWithState:objects:count:",&local_4c8,
                             local_b8);
    } while (local_350 != 0);
  }
  (*(code *)PTR__objc_release_004410a0)(local_328);
  uVar7 = local_280;
  if (*(long *)(param_1 + _apParameters) != 0) {
    (*(code *)PTR__objc_msgSend_00441098)(local_280,"addEntriesFromDictionary:");
  }
  puVar2 = PTR__objc_msgSend_00441098;
  uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSDictionary,"dictionaryWithDictionary:",uVar7);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar8);
  lVar10 = _requestDictionary;
  uVar8 = *(undefined8 *)(param_1 + _requestDictionary);
  *(undefined8 *)(param_1 + _requestDictionary) = uVar9;
  (*(code *)PTR__objc_release_004410a0)(uVar8);
  (*(code *)puVar2)(param_1,"verboseLog:",&cf_ATCRTrequestdictionary___,
                    *(undefined8 *)(param_1 + lVar10));
  cVar5 = '\x01';
LAB_00231c0f:
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  (*(code *)puVar2)(local_320);
  (*(code *)puVar2)(local_338);
  (*(code *)puVar2)(local_340);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return cVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

