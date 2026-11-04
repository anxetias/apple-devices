// rea decompile_all
// name: PersonalizedImage::initializeRemoteDeviceAttributes:
// address: 0x125417
// body: available
// range: 0x125417-0x12609b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x126097 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

int PersonalizedImage::initializeRemoteDeviceAttributes_(ID param_1,SEL param_2,ID *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  ID *pIVar11;
  bool bVar12;
  long local_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ID *local_60;
  undefined8 local_58;
  int local_4c;
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_4c = 0xe80000f1;
  local_d0 = 0;
  local_60 = param_3;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"remoteDevice");
  uVar5 = __copy_remote_device_property(uVar5,"HWModel");
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
  local_c8 = uVar5;
  cVar4 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar6);
  if (cVar4 == '\0') {
    local_4c = 0xe8000115;
    local_98 = 0;
    uVar5 = _createAndLogError("-[PersonalizedImage initializeRemoteDeviceAttributes:]",0x55c,
                               0xe8000115,1,0,&cf_FailedtoretrieveHardwareModel_);
    local_b0 = 0;
LAB_001256c0:
    local_58 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_a0 = 0;
LAB_001256cb:
    uVar6 = 0;
  }
  else {
    uVar5 = (*(code *)puVar1)(param_1,"remoteDevice");
    uVar5 = __copy_remote_device_property(uVar5,"DeviceClass");
    uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
    local_b0 = uVar5;
    cVar4 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar6);
    if (cVar4 == '\0') {
      pcVar10 = &cf_FailedtoretrieveDeviceClass_;
      uVar5 = 0x563;
      lVar9 = 0;
LAB_00125678:
      local_4c = 0xe8000115;
      local_98 = 0;
      uVar5 = _createAndLogError("-[PersonalizedImage initializeRemoteDeviceAttributes:]",uVar5,
                                 0xe8000115,1,lVar9,pcVar10);
      goto LAB_001256c0;
    }
    local_48 = &cf_PersonalizedImageType;
    local_40 = (*(code *)puVar1)(param_1,"imageVariant");
    uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                              &local_40,&local_48,1);
    uVar6 = (*(code *)puVar1)(param_1,"remoteDevice");
    cVar4 = _remote_device_os_is_at_least
                      (uVar6,&cf_15_0,&cf_8_0,&cf_15_0,&cf_1_0,&cf_12_0,&cf_6_0,&local_d0);
    if (local_d0 != 0) {
      pcVar10 = &cf_FailedtocheckdeviceOSversion_;
      uVar5 = 0x570;
      lVar9 = local_d0;
      goto LAB_00125678;
    }
    local_58 = uVar5;
    if (cVar4 == '\0') {
      uVar5 = 0;
LAB_001258b2:
      uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
      cVar4 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar6);
      local_c0 = param_1;
      local_a0 = uVar5;
      if (cVar4 == '\0') {
        uVar5 = (*(code *)puVar1)(param_1,"remoteDevice");
        uVar5 = __copy_remote_device_property(uVar5,"UniqueChipID");
        uVar6 = (*(code *)puVar1)(param_1,"remoteDevice");
        local_90 = __copy_remote_device_property(uVar6,"ChipID");
        uVar6 = (*(code *)puVar1)(param_1,"remoteDevice");
        local_88 = __copy_remote_device_property(uVar6,"BoardId");
        uVar6 = (*(code *)puVar1)(param_1,"remoteDevice");
        local_a8 = __copy_remote_device_property(uVar6,"SecurityDomain");
        uVar6 = (*(code *)puVar1)(param_1,"remoteDevice");
        local_80 = __copy_remote_device_property(uVar6,"EffectiveSecurityModeAp");
        uVar6 = (*(code *)puVar1)(param_1,"remoteDevice");
        local_78 = __copy_remote_device_property(uVar6,"EffectiveProductionStatusAp");
        uVar6 = (*(code *)puVar1)(param_1,"remoteDevice");
        local_70 = __copy_remote_device_property(uVar6,"CertificateSecurityMode");
        uVar6 = (*(code *)puVar1)(param_1,"remoteDevice");
        local_68 = __copy_remote_device_property(uVar6,"CertificateProductionStatus");
        local_b8 = 0;
      }
      else {
        uVar6 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_UniqueChipID);
        puVar2 = PTR__objc_retain_004410a8;
        local_98 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
        uVar6 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_ChipID);
        local_90 = (*(code *)puVar2)(uVar6);
        uVar6 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_BoardId);
        local_88 = (*(code *)puVar2)(uVar6);
        uVar6 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_SecurityDomain);
        local_a8 = (*(code *)puVar2)(uVar6);
        uVar6 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_EffectiveSecurityModeAp);
        local_80 = (*(code *)puVar2)(uVar6);
        uVar6 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_EffectiveProductionStatusAp);
        local_78 = (*(code *)puVar2)(uVar6);
        uVar6 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_CertificateSecurityMode);
        local_70 = (*(code *)puVar2)(uVar6);
        uVar6 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_CertificateProductionStatus);
        local_68 = (*(code *)puVar2)(uVar6);
        uVar5 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_Ap_SikaFuse);
        local_b8 = (*(code *)puVar2)(uVar5);
        uVar5 = local_98;
      }
      uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
      cVar4 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar6);
      local_98 = uVar5;
      if (cVar4 == '\0') {
        pcVar10 = &cf_FailedtoretrieveUniqueChipID_;
        uVar5 = 0x595;
      }
      else {
        uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
        cVar4 = (*(code *)puVar1)(local_90,"isKindOfClass:",uVar5);
        if (cVar4 == '\0') {
          pcVar10 = &cf_FailedtoretrieveChipID_;
          uVar5 = 0x59b;
        }
        else {
          uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
          cVar4 = (*(code *)puVar1)(local_88,"isKindOfClass:",uVar5);
          if (cVar4 == '\0') {
            pcVar10 = &cf_FailedtoretrieveBoardId_;
            uVar5 = 0x5a1;
          }
          else {
            uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
            cVar4 = (*(code *)puVar1)(local_a8,"isKindOfClass:",uVar5);
            if (cVar4 == '\0') {
              pcVar10 = &cf_FailedtoretrieveSecurityDomain_;
              uVar5 = 0x5a7;
            }
            else {
              uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
              cVar4 = (*(code *)puVar1)(local_80,"isKindOfClass:",uVar5);
              if (cVar4 == '\0') {
                pcVar10 = &cf_FailedtoretrieveEffectiveSecurityModeAp_;
                uVar5 = 0x5ad;
              }
              else {
                uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
                cVar4 = (*(code *)puVar1)(local_78,"isKindOfClass:",uVar5);
                if (cVar4 == '\0') {
                  pcVar10 = &cf_FailedtoretrieveEffectiveProductionStatusAp_;
                  uVar5 = 0x5b3;
                }
                else {
                  uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
                  cVar4 = (*(code *)puVar1)(local_70,"isKindOfClass:",uVar5);
                  if (cVar4 == '\0') {
                    pcVar10 = &cf_FailedtoretrieveCertificateSecurityMode_;
                    uVar5 = 0x5b9;
                  }
                  else {
                    uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
                    cVar4 = (*(code *)puVar1)(local_68,"isKindOfClass:",uVar5);
                    if (cVar4 != '\0') {
                      uVar5 = (*(code *)puVar1)(local_c0,"remoteDevice");
                      uVar5 = _AMDeviceRemoteCopyPersonalizationNonceWithOptions
                                        (uVar5,local_58,&local_4c);
                      uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSData,"class");
                      local_58 = uVar5;
                      cVar4 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar6);
                      if (cVar4 != '\0') {
                        uVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableData);
                        uVar8 = (*(code *)puVar1)(uVar5,"initWithLength:",0x14);
                        uVar5 = (*(code *)puVar1)(uVar8,"length");
                        (*(code *)puVar1)(uVar8,"resetBytesInRange:",0,uVar5);
                        uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSData,"class");
                        cVar4 = (*(code *)puVar1)(uVar8,"isKindOfClass:",uVar5);
                        pIVar11 = local_60;
                        IVar7 = local_c0;
                        if (cVar4 == '\0') {
                          local_4c = 0xe8000115;
                          uVar6 = 0;
                          uVar5 = _createAndLogError(
                                                  "-[PersonalizedImage initializeRemoteDeviceAttributes:]"
                                                  ,0x5d0,0xe8000115,1,0,
                                                  &cf_FailedtocreatedataforSEPNonce_);
                        }
                        else {
                          uVar5 = (*(code *)puVar1)(local_c0,"deviceClass");
                          puVar2 = PTR__objc_release_004410a0;
                          (*(code *)PTR__objc_release_004410a0)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"hardwareModel");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"ecid");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"chipID");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"boardID");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"securityDomain");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"effectiveSecurityMode");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"effectiveProductionStatus");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"certificateSecurityMode");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"certificateProductionStatus");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"image4Supported");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"apNonce");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"sepNonce");
                          (*(code *)puVar2)(uVar5);
                          uVar5 = (*(code *)puVar1)(IVar7,"sikaFuse");
                          (*(code *)puVar2)(uVar5);
                          (*(code *)puVar1)(IVar7,"setDeviceClass:",local_b0);
                          (*(code *)puVar1)(IVar7,"setHardwareModel:",local_c8);
                          (*(code *)puVar1)(IVar7,"setEcid:",local_98);
                          (*(code *)puVar1)(IVar7,"setChipID:",local_90);
                          (*(code *)puVar1)(IVar7,"setBoardID:",local_88);
                          (*(code *)puVar1)(IVar7,"setSecurityDomain:",local_a8);
                          (*(code *)puVar1)(IVar7,"setEffectiveSecurityMode:",local_80);
                          (*(code *)puVar1)(IVar7,"setEffectiveProductionStatus:",local_78);
                          (*(code *)puVar1)(IVar7,"setCertificateSecurityMode:",local_70);
                          (*(code *)puVar1)(IVar7,"setCertificateProductionStatus:",local_68);
                          uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
                          (*(code *)puVar1)(IVar7,"setImage4Supported:",uVar5);
                          (*(code *)puVar1)(IVar7,"setApNonce:",local_58);
                          (*(code *)puVar1)(IVar7,"setSepNonce:",uVar8);
                          (*(code *)puVar1)(IVar7,"setSikaFuse:",local_b8);
                          local_4c = 0;
                          uVar6 = 0;
                          uVar5 = 0;
                        }
                        goto LAB_001256d2;
                      }
                      local_4c = 0xe8000115;
                      uVar6 = _AMDCopyErrorText(0xe8000115);
                      iVar3 = local_4c;
                      uVar5 = _AMDErrorString(local_4c);
                      uVar5 = _createAndLogError("-[PersonalizedImage initializeRemoteDeviceAttributes:]"
                                                 ,0x5c7,iVar3,1,0,
                                                 &
                                                 cf_FailedtoretrieveApNonce_personalizationnonce__0x_08x__s____
                                                 ,iVar3,uVar5,uVar6);
                      goto LAB_001256ce;
                    }
                    pcVar10 = &cf_FailedtoretrieveCertificateProductionStatus_;
                    uVar5 = 0x5bf;
                  }
                }
              }
            }
          }
        }
      }
      local_4c = 0xe8000115;
      local_58 = 0;
      uVar5 = _createAndLogError("-[PersonalizedImage initializeRemoteDeviceAttributes:]",uVar5,
                                 0xe8000115,1,0,pcVar10);
      goto LAB_001256cb;
    }
    uVar6 = (*(code *)puVar1)(param_1,"remoteDevice");
    uVar5 = _AMDeviceRemoteCopyPersonalizationIdentifiersWithError(uVar6,uVar5,&local_4c);
    uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
    cVar4 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar6);
    if (cVar4 != '\0') goto LAB_001258b2;
    bVar12 = local_4c == 0xe80000e2;
    local_4c = 0xe8000115;
    if (bVar12) {
      local_4c = 0xe80000e2;
    }
    local_a0 = uVar5;
    uVar6 = _AMDCopyErrorText();
    iVar3 = local_4c;
    uVar5 = _AMDErrorString(local_4c);
    local_98 = 0;
    uVar5 = _createAndLogError("-[PersonalizedImage initializeRemoteDeviceAttributes:]",0x579,iVar3,
                               1,0,&cf_Failedtoretrievepersonalizationidentifiers_0x_08x__s____,
                               iVar3,uVar5,uVar6);
    local_90 = 0;
    local_88 = 0;
    local_70 = 0;
    local_68 = 0;
    local_80 = 0;
    local_78 = 0;
    local_58 = 0;
  }
LAB_001256ce:
  uVar8 = 0;
  pIVar11 = local_60;
LAB_001256d2:
  iVar3 = local_4c;
  if (pIVar11 != (ID *)0x0 && local_4c != 0) {
    IVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
    *pIVar11 = IVar7;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(local_98);
  (*(code *)puVar1)(local_90);
  (*(code *)puVar1)(local_88);
  (*(code *)puVar1)(local_70);
  (*(code *)puVar1)(local_68);
  (*(code *)puVar1)(local_80);
  (*(code *)puVar1)(local_78);
  (*(code *)puVar1)(local_58);
  (*(code *)puVar1)(uVar8);
  (*(code *)puVar1)(local_c8);
  (*(code *)puVar1)(local_b0);
  (*(code *)puVar1)(local_a0);
  (*(code *)puVar1)(uVar6);
  if (local_d0 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

