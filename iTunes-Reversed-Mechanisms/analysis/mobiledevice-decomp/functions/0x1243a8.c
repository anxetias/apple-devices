// rea decompile_all
// name: PersonalizedImage::initializeDeviceAttributes:
// address: 0x1243a8
// body: available
// range: 0x1243a8-0x125416 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x125412 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

int PersonalizedImage::initializeDeviceAttributes_(ID param_1,SEL param_2,ID *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ID IVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  cfstringStruct *pcVar13;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  int local_4c;
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
  iVar4 = _AMDeviceConnect(uVar6);
  local_4c = iVar4;
  if (iVar4 != 0) {
    uVar6 = 0;
    local_a8 = 0;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = 0;
    uVar8 = 0;
    uVar9 = 0;
    local_a0 = 0;
    uVar12 = 0;
    uVar7 = 0;
    local_b0 = 0;
    local_58 = 0;
    goto LAB_0012527d;
  }
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
  local_4c = _AMDeviceStartSession(uVar6);
  if (local_4c != 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
    iVar5 = _AMDevicePairWithCallback(uVar6,0,0,0);
    local_4c = iVar5;
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
      iVar5 = _AMDeviceStartSession(uVar6);
      local_4c = iVar5;
      if (iVar5 == 0) goto LAB_001245bc;
      local_58 = _AMDCopyErrorText(iVar5);
      uVar6 = _AMDErrorString(iVar5);
      pcVar13 = &cf_Failedtostartsession_0x_08x__s____;
      uVar12 = 0x473;
    }
    else {
      local_58 = _AMDCopyErrorText(iVar5);
      uVar6 = _AMDErrorString(iVar5);
      pcVar13 = &cf_Failedtopairwithdevice_0x_08x__s____;
      uVar12 = 0x46c;
    }
    local_a8 = 0;
    uVar6 = _createAndLogError("-[PersonalizedImage initializeDeviceAttributes:]",uVar12,iVar5,1,0,
                               pcVar13,iVar5,uVar6,local_58);
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = 0;
    uVar8 = 0;
    uVar9 = 0;
    local_a0 = 0;
    uVar12 = 0;
    uVar7 = 0;
    local_b0 = 0;
    goto LAB_0012527d;
  }
LAB_001245bc:
  puVar1 = PTR__objc_msgSend_00441098;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
  uVar12 = _AMDeviceCopyValueWithError(uVar6,0,&cf_HardwareModel,&local_4c);
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
  cVar3 = (*(code *)puVar1)(uVar12,"isKindOfClass:",uVar6);
  if (cVar3 == '\0') {
    iVar5 = 0xe8000013;
    if (local_4c != 0) {
      iVar5 = local_4c;
    }
    local_4c = iVar5;
    local_58 = _AMDCopyErrorText();
    iVar5 = local_4c;
    uVar6 = _AMDErrorString(local_4c);
    local_a8 = 0;
    uVar6 = _createAndLogError("-[PersonalizedImage initializeDeviceAttributes:]",0x480,iVar5,1,0,
                               &cf_FailedtoretrieveHardwareModel_0x_08x__s____,iVar5,uVar6,local_58)
    ;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = 0;
    uVar8 = 0;
    uVar9 = 0;
    local_a0 = 0;
    uVar7 = 0;
    local_b0 = 0;
    goto LAB_0012527d;
  }
  uVar6 = (*(code *)puVar1)(param_1,"device");
  uVar7 = _AMDeviceCopyValueWithError(uVar6,0,&cf_DeviceClass,&local_4c);
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
  cVar3 = (*(code *)puVar1)(uVar7,"isKindOfClass:",uVar6);
  if (cVar3 == '\0') {
    iVar5 = 0xe8000013;
    if (local_4c != 0) {
      iVar5 = local_4c;
    }
    local_4c = iVar5;
    local_58 = _AMDCopyErrorText();
    iVar5 = local_4c;
    uVar6 = _AMDErrorString(local_4c);
    local_a8 = 0;
    uVar6 = _createAndLogError("-[PersonalizedImage initializeDeviceAttributes:]",0x488,iVar5,1,0,
                               &cf_FailedtoretrieveDeviceClass_0x_08x__s____,iVar5,uVar6,local_58);
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = 0;
    local_a0 = 0;
    local_b0 = 0;
  }
  else {
    local_48 = &cf_PersonalizedImageType;
    local_40 = (*(code *)puVar1)(param_1,"imageVariant");
    uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                              &local_40,&local_48,1);
    uVar8 = (*(code *)puVar1)(param_1,"device");
    cVar3 = _device_os_is_at_least(uVar8,&cf_15_0,&cf_8_0,&cf_15_0,&cf_1_0);
    if (cVar3 == '\0') {
      local_b0 = 0;
    }
    else {
      uVar8 = (*(code *)puVar1)(param_1,"device");
      local_b0 = _AMDeviceCopyPersonalizationIdentifiersWithError(uVar8,uVar6,&local_4c);
      uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
      cVar3 = (*(code *)puVar1)(local_b0,"isKindOfClass:",uVar8);
      if (cVar3 == '\0') {
        iVar5 = 0xe8000013;
        if (local_4c != 0) {
          iVar5 = local_4c;
        }
        local_4c = iVar5;
        local_58 = _AMDCopyErrorText();
        iVar5 = local_4c;
        uVar6 = _AMDErrorString(local_4c);
        local_a8 = 0;
        uVar6 = _createAndLogError("-[PersonalizedImage initializeDeviceAttributes:]",0x497,iVar5,1,
                                   0,&cf_Failedtoretrievepersonalizationidentifiers_0x_08x__s____,
                                   iVar5,uVar6,local_58);
        local_98 = 0;
        local_90 = 0;
        local_78 = 0;
        local_70 = 0;
        local_88 = 0;
        local_80 = 0;
        local_a0 = 0;
        goto LAB_00125271;
      }
    }
    uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
    cVar3 = (*(code *)puVar1)(local_b0,"isKindOfClass:",uVar8);
    if (cVar3 == '\0') {
      uVar8 = (*(code *)puVar1)(param_1,"device");
      local_a0 = 0;
      local_a8 = _AMDeviceCopyValueWithError(uVar8,0,&cf_UniqueChipID,&local_4c);
      uVar8 = (*(code *)puVar1)(param_1,"device");
      local_98 = _AMDeviceCopyValueWithError(uVar8,0,&cf_ChipID,&local_4c);
      uVar8 = (*(code *)puVar1)(param_1,"device");
      local_90 = _AMDeviceCopyValueWithError(uVar8,0,&cf_BoardId,&local_4c);
      uVar8 = (*(code *)puVar1)(param_1,"device");
      local_58 = _AMDeviceCopyValueWithError(uVar8,0,&cf_SecurityDomain,&local_4c);
      uVar8 = (*(code *)puVar1)(param_1,"device");
      local_88 = _AMDeviceCopyValueWithError(uVar8,0,&cf_EffectiveSecurityModeAp,&local_4c);
      uVar8 = (*(code *)puVar1)(param_1,"device");
      local_80 = _AMDeviceCopyValueWithError(uVar8,0,&cf_EffectiveProductionStatusAp,&local_4c);
      uVar8 = (*(code *)puVar1)(param_1,"device");
      local_78 = _AMDeviceCopyValueWithError(uVar8,0,&cf_CertificateSecurityMode,&local_4c);
      uVar8 = (*(code *)puVar1)(param_1,"device");
      local_70 = _AMDeviceCopyValueWithError(uVar8,0,&cf_CertificateProductionStatus,&local_4c);
    }
    else {
      uVar8 = (*(code *)puVar1)(local_b0,"objectForKeyedSubscript:",&cf_UniqueChipID);
      puVar2 = PTR__objc_retain_004410a8;
      local_a8 = (*(code *)PTR__objc_retain_004410a8)(uVar8);
      uVar8 = (*(code *)puVar1)(local_b0,"objectForKeyedSubscript:",&cf_ChipID);
      local_98 = (*(code *)puVar2)(uVar8);
      uVar8 = (*(code *)puVar1)(local_b0,"objectForKeyedSubscript:",&cf_BoardId);
      local_90 = (*(code *)puVar2)(uVar8);
      uVar8 = (*(code *)puVar1)(local_b0,"objectForKeyedSubscript:",&cf_SecurityDomain);
      local_58 = (*(code *)puVar2)(uVar8);
      uVar8 = (*(code *)puVar1)(local_b0,"objectForKeyedSubscript:",&cf_EffectiveSecurityModeAp);
      local_88 = (*(code *)puVar2)(uVar8);
      uVar8 = (*(code *)puVar1)(local_b0,"objectForKeyedSubscript:",&cf_EffectiveProductionStatusAp)
      ;
      local_80 = (*(code *)puVar2)(uVar8);
      uVar8 = (*(code *)puVar1)(local_b0,"objectForKeyedSubscript:",&cf_CertificateSecurityMode);
      local_78 = (*(code *)puVar2)(uVar8);
      uVar8 = (*(code *)puVar1)(local_b0,"objectForKeyedSubscript:",&cf_CertificateProductionStatus)
      ;
      local_70 = (*(code *)puVar2)(uVar8);
      uVar8 = (*(code *)puVar1)(local_b0,"objectForKeyedSubscript:",&cf_Ap_SikaFuse);
      local_a0 = (*(code *)puVar2)(uVar8);
    }
    uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
    cVar3 = (*(code *)puVar1)(local_a8,"isKindOfClass:",uVar8);
    if (cVar3 == '\0') {
      iVar5 = 0xe8000013;
      if (local_4c != 0) {
        iVar5 = local_4c;
      }
      local_4c = iVar5;
      local_58 = _AMDCopyErrorText();
      iVar5 = local_4c;
      uVar6 = _AMDErrorString(local_4c);
      pcVar13 = &cf_FailedtoretrieveUniqueChipID_0x_08x__s____;
      uVar8 = 0x4b4;
    }
    else {
      uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
      cVar3 = (*(code *)puVar1)(local_98,"isKindOfClass:",uVar8);
      if (cVar3 == '\0') {
        iVar5 = 0xe8000013;
        if (local_4c != 0) {
          iVar5 = local_4c;
        }
        local_4c = iVar5;
        local_58 = _AMDCopyErrorText();
        iVar5 = local_4c;
        uVar6 = _AMDErrorString(local_4c);
        pcVar13 = &cf_FailedtoretrieveChipID_0x_08x__s____;
        uVar8 = 0x4bb;
      }
      else {
        uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
        cVar3 = (*(code *)puVar1)(local_90,"isKindOfClass:",uVar8);
        if (cVar3 == '\0') {
          iVar5 = 0xe8000013;
          if (local_4c != 0) {
            iVar5 = local_4c;
          }
          local_4c = iVar5;
          local_58 = _AMDCopyErrorText();
          iVar5 = local_4c;
          uVar6 = _AMDErrorString(local_4c);
          pcVar13 = &cf_FailedtoretrieveBoardId_0x_08x__s____;
          uVar8 = 0x4c2;
        }
        else {
          uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
          cVar3 = (*(code *)puVar1)(local_58,"isKindOfClass:",uVar8);
          if (cVar3 == '\0') {
            uVar8 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
            cVar3 = _device_os_is_at_least(uVar8,&cf_15_0,&cf_8_0,&cf_15_0,&cf_1_0);
            if (cVar3 != '\0') {
              local_58 = _AMDCopyErrorText(local_4c);
              iVar5 = local_4c;
              uVar6 = _AMDErrorString(local_4c);
              pcVar13 = &cf_FailedtoretrieveSecurityDomain_0x_08x__s____;
              uVar8 = 0x4ce;
              goto LAB_0012524d;
            }
            uVar8 = _objc_alloc(&_OBJC_CLASS___NSNumber);
            local_58 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"initWithInt:",1);
            local_4c = 0;
          }
          uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
          cVar3 = (*(code *)puVar1)(local_88,"isKindOfClass:",uVar8);
          if (cVar3 == '\0') {
            iVar5 = 0xe8000013;
            if (local_4c != 0) {
              iVar5 = local_4c;
            }
            local_4c = iVar5;
            local_58 = _AMDCopyErrorText();
            iVar5 = local_4c;
            uVar6 = _AMDErrorString(local_4c);
            pcVar13 = &cf_FailedtoretrieveEffectiveSecurityModeAp_0x_08x__s____;
            uVar8 = 0x4d6;
          }
          else {
            uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
            cVar3 = (*(code *)puVar1)(local_80,"isKindOfClass:",uVar8);
            if (cVar3 == '\0') {
              iVar5 = 0xe8000013;
              if (local_4c != 0) {
                iVar5 = local_4c;
              }
              local_4c = iVar5;
              local_58 = _AMDCopyErrorText();
              iVar5 = local_4c;
              uVar6 = _AMDErrorString(local_4c);
              pcVar13 = &cf_FailedtoretrieveEffectiveProductionStatusAp_0x_08x__s____;
              uVar8 = 0x4dd;
            }
            else {
              uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
              cVar3 = (*(code *)puVar1)(local_78,"isKindOfClass:",uVar8);
              if (cVar3 == '\0') {
                iVar5 = 0xe8000013;
                if (local_4c != 0) {
                  iVar5 = local_4c;
                }
                local_4c = iVar5;
                local_58 = _AMDCopyErrorText();
                iVar5 = local_4c;
                uVar6 = _AMDErrorString(local_4c);
                pcVar13 = &cf_FailedtoretrieveCertificateSecurityMode_0x_08x__s____;
                uVar8 = 0x4e4;
              }
              else {
                uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
                cVar3 = (*(code *)puVar1)(local_70,"isKindOfClass:",uVar8);
                if (cVar3 != '\0') {
                  uVar8 = (*(code *)puVar1)(param_1,"device");
                  uVar8 = _AMDeviceCopyPersonalizationNonceWithOptions(uVar8,uVar6,&local_4c);
                  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSData,"class");
                  cVar3 = (*(code *)puVar1)(uVar8,"isKindOfClass:",uVar6);
                  if (cVar3 == '\0') {
                    iVar5 = 0xe8000013;
                    if (local_4c != 0) {
                      iVar5 = local_4c;
                    }
                    local_4c = iVar5;
                    local_58 = _AMDCopyErrorText();
                    iVar5 = local_4c;
                    uVar6 = _AMDErrorString(local_4c);
                    uVar9 = 0;
                    uVar6 = _createAndLogError("-[PersonalizedImage initializeDeviceAttributes:]",
                                               0x4f3,iVar5,1,0,
                                               &
                                               cf_FailedtoretrieveApNonce_personalizationnonce__0x_08x__s____
                                               ,iVar5,uVar6,local_58);
                  }
                  else {
                    uVar6 = (*(code *)puVar1)(param_1,"device");
                    uVar9 = _AMDeviceCopyValueWithError(uVar6,0,&cf_SEPNonce,0);
                    uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSData,"class");
                    (*(code *)puVar1)(uVar9,"isKindOfClass:",uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"deviceClass");
                    puVar2 = PTR__objc_release_004410a0;
                    (*(code *)PTR__objc_release_004410a0)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"hardwareModel");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"ecid");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"chipID");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"boardID");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"securityDomain");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"effectiveSecurityMode");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"effectiveProductionStatus");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"certificateSecurityMode");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"certificateProductionStatus");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"image4Supported");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"apNonce");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"sepNonce");
                    (*(code *)puVar2)(uVar6);
                    uVar6 = (*(code *)puVar1)(param_1,"sikaFuse");
                    (*(code *)puVar2)(uVar6);
                    (*(code *)puVar1)(param_1,"setDeviceClass:",uVar7);
                    (*(code *)puVar1)(param_1,"setHardwareModel:",uVar12);
                    (*(code *)puVar1)(param_1,"setEcid:",local_a8);
                    (*(code *)puVar1)(param_1,"setChipID:",local_98);
                    (*(code *)puVar1)(param_1,"setBoardID:",local_90);
                    (*(code *)puVar1)(param_1,"setSecurityDomain:",local_58);
                    (*(code *)puVar1)(param_1,"setEffectiveSecurityMode:",local_88);
                    (*(code *)puVar1)(param_1,"setEffectiveProductionStatus:",local_80);
                    (*(code *)puVar1)(param_1,"setCertificateSecurityMode:",local_78);
                    (*(code *)puVar1)(param_1,"setCertificateProductionStatus:",local_70);
                    uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
                    (*(code *)puVar1)(param_1,"setImage4Supported:",uVar6);
                    (*(code *)puVar1)(param_1,"setApNonce:",uVar8);
                    (*(code *)puVar1)(param_1,"setSepNonce:",uVar9);
                    (*(code *)puVar1)(param_1,"setSikaFuse:",local_a0);
                    uVar6 = 0;
                    local_4c = 0;
                    local_58 = 0;
                  }
                  goto LAB_0012527d;
                }
                iVar5 = 0xe8000013;
                if (local_4c != 0) {
                  iVar5 = local_4c;
                }
                local_4c = iVar5;
                local_58 = _AMDCopyErrorText();
                iVar5 = local_4c;
                uVar6 = _AMDErrorString(local_4c);
                pcVar13 = &cf_FailedtoretrieveCertificateProductionStatus_0x_08x__s____;
                uVar8 = 0x4eb;
              }
            }
          }
        }
      }
    }
LAB_0012524d:
    uVar6 = _createAndLogError("-[PersonalizedImage initializeDeviceAttributes:]",uVar8,iVar5,1,0,
                               pcVar13,iVar5,uVar6,local_58);
  }
LAB_00125271:
  uVar8 = 0;
  uVar9 = 0;
LAB_0012527d:
  iVar5 = local_4c;
  if (param_3 != (ID *)0x0 && local_4c != 0) {
    IVar10 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
    *param_3 = IVar10;
  }
  if (iVar4 == 0) {
    uVar11 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
    _AMDeviceDisconnect(uVar11);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar1)(local_a8);
  (*(code *)puVar1)(local_98);
  (*(code *)puVar1)(local_90);
  (*(code *)puVar1)(local_78);
  (*(code *)puVar1)(local_70);
  (*(code *)puVar1)(local_88);
  (*(code *)puVar1)(local_80);
  (*(code *)puVar1)(uVar8);
  (*(code *)puVar1)(uVar9);
  (*(code *)puVar1)(local_a0);
  (*(code *)puVar1)(uVar12);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(local_b0);
  (*(code *)puVar1)(local_58);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

