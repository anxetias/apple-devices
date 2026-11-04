// rea decompile_all
// name: PersonalizedImage::mountImage:
// address: 0x126cf8
// body: available
// range: 0x126cf8-0x12818a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x12816e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

int PersonalizedImage::mountImage_(ID param_1,SEL param_2,ID *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ID IVar10;
  long lVar11;
  ulong uVar12;
  ID *pIVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  cfstringStruct *pcVar16;
  cfstringStruct *pcVar17;
  code *pcVar18;
  char *pcVar19;
  char *local_1a0;
  cfstringStruct *local_198;
  char *local_190;
  long local_188;
  long local_180;
  char local_171;
  cfstringStruct *local_170;
  ID *local_168;
  int local_15c;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_1a0 = (char *)0x0;
  local_168 = (ID *)0x0;
  local_15c = 0xe80000f1;
  local_171 = '\0';
  lVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
  if (lVar7 == 0) {
    local_15c = (*(code *)PTR__objc_msgSend_00441098)
                          (param_1,"initializeRemoteDeviceAttributes:",&local_168);
    if (local_15c == 0) goto LAB_00126e16;
    uVar8 = _AMDCopyErrorText(local_15c);
    iVar4 = local_15c;
    pIVar13 = local_168;
    uVar9 = _AMDErrorString(local_15c);
    pcVar16 = &cf_Failedtoinitializeremotedeviceattributes_0x_08x__s____;
    uVar15 = 0x70e;
  }
  else {
    local_15c = (*(code *)PTR__objc_msgSend_00441098)
                          (param_1,"initializeDeviceAttributes:",&local_168);
    if (local_15c == 0) {
LAB_00126e16:
      local_15c = (*(code *)PTR__objc_msgSend_00441098)
                            (param_1,"initializeImageProperties:",&local_168);
      puVar1 = PTR__objc_msgSend_00441098;
      if (local_15c == 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imageVariant");
        cVar2 = (*(code *)puVar1)(uVar9,"isEqualToString:",&cf_DeveloperDiskImage);
        if (cVar2 == '\0') {
LAB_00126fef:
          if (_mountImage__onceToken != -1) {
            _dispatch_once(&_mountImage__onceToken,&___block_literal_global_821);
          }
          lVar7 = _AMAuthInstallCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
          if (lVar7 == 0) {
            local_15c = 0xe8000003;
            local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",0x73a,0xe8000003
                                                 ,1,0,&cf_AMAuthInstallCreatefailed_);
LAB_00127120:
            lVar7 = 0;
            local_180 = 0;
LAB_00127135:
            local_188 = 0;
            pIVar13 = (ID *)0x0;
          }
          else {
            uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"signingServerURL");
            iVar3 = _AMAuthInstallSetSigningServerURL(lVar7,uVar9);
            if (iVar3 != 0) {
              iVar4 = _convertLibAuthInstallErrorToAMDError(iVar3);
              local_15c = iVar4;
              uVar9 = _convertLibAuthInstallErrorToString(iVar3);
              local_180 = 0;
              local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",0x743,iVar4,1,
                                                   0,&
                                                  cf_AMAuthInstallSetSigningServerURLfailed__d__s_,
                                                  iVar3,uVar9);
              goto LAB_00127135;
            }
            local_170 = (cfstringStruct *)param_3;
            cVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"useCredentials");
            if (cVar2 != '\0') {
              uVar5 = _AMAuthInstallSsoEnable(lVar7);
              param_3 = &local_170->field0_0x0;
              if (uVar5 == 0) {
                if (_isRunningInRootLaunchdContext_onceToken != -1) {
                  _dispatch_once(&_isRunningInRootLaunchdContext_onceToken,
                                 &___block_literal_global_692);
                }
                if ((_isRunningInRootLaunchdContext_retval == '\x01') &&
                   ((lVar11 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"appleConnectData"),
                    lVar11 == 0 ||
                    (lVar11 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"appleConnectUsername"),
                    lVar11 == 0)))) {
                  local_180 = 0;
                  local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",0x755,
                                                       0xe8000007,1,0,
                                                       &
                                                  cf_Clientrunninginsystemcontextismissingrequiredoption_s__kPersonalizationSSOUsername_kPersonalizationSSOData
                                                  );
                  goto LAB_00127135;
                }
                lVar11 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"appleConnectData");
                if ((lVar11 != 0) &&
                   (lVar11 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"appleConnectUsername"),
                   puVar1 = PTR__objc_msgSend_00441098, lVar11 != 0)) {
                  uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"appleConnectUsername");
                  uVar8 = (*(code *)puVar1)(param_1,"appleConnectData");
                  uVar5 = _AMAuthInstallSsoSetAppleConnectInfo(lVar7,uVar9,uVar8);
                  if (uVar5 != 0) {
                    uVar12 = (ulong)uVar5;
                    iVar4 = _convertLibAuthInstallErrorToAMDError(uVar5);
                    local_15c = iVar4;
                    _convertLibAuthInstallErrorToString(uVar12);
                    pcVar16 = &cf_AMAuthInstallSsoSetAppleConnectInfofailed__d__s_;
                    uVar9 = 0x75d;
                    goto LAB_001271b0;
                  }
                }
                goto LAB_001272b5;
              }
              uVar12 = (ulong)uVar5;
              iVar4 = _convertLibAuthInstallErrorToAMDError(uVar5);
              local_15c = iVar4;
              _convertLibAuthInstallErrorToString(uVar12);
              pcVar16 = &cf_AMAuthInstallSsoEnablefailed__d__s_;
              uVar9 = 0x74d;
LAB_001271b0:
              pIVar13 = (ID *)0x0;
LAB_00127425:
              local_180 = 0;
              local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",uVar9,iVar4,1,
                                                   pIVar13,pcVar16,uVar12);
              local_188 = 0;
LAB_00127445:
              uVar8 = 0;
LAB_00127448:
              pIVar13 = (ID *)0x0;
              param_3 = &local_170->field0_0x0;
              goto LAB_00126eb2;
            }
LAB_001272b5:
            pcVar18 = (code *)PTR__objc_msgSend_00441098;
            uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imagePathURL");
            uVar6 = (*pcVar18)(param_1,"digestLength");
            local_180 = (*pcVar18)(param_1,"digestFile:digestLength:error:",uVar9,uVar6,&local_168);
            pIVar13 = local_168;
            if (local_180 == 0) {
              local_15c = 0xe8000079;
              uVar12 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imagePathURL");
              pcVar16 = &cf_Failedtodigest__;
              uVar9 = 0x768;
              iVar4 = 0xe8000079;
              goto LAB_00127425;
            }
            lVar11 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"trustCacheURL");
            if (lVar11 != 0) {
              uVar9 = (*pcVar18)(param_1,"trustCacheURL");
              uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"digestLength");
              pcVar18 = (code *)PTR__objc_msgSend_00441098;
              local_188 = (*(code *)PTR__objc_msgSend_00441098)
                                    (param_1,"digestFile:digestLength:error:",uVar9,uVar6,&local_168
                                    );
              pIVar13 = local_168;
              if (local_188 != 0) goto LAB_00127456;
              local_15c = 0xe8000079;
              uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"trustCacheURL");
              local_188 = 0;
              local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",0x772,
                                                   0xe8000079,1,pIVar13,&cf_Failedtodigest__,uVar9);
              goto LAB_00127445;
            }
            local_188 = 0;
LAB_00127456:
            lVar11 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
            if (lVar11 != 0) {
              uVar9 = (*pcVar18)(param_1,"device");
              uVar8 = (*pcVar18)(param_1,"imageType");
              uVar15 = (*pcVar18)(param_1,"imageVariant");
              cVar2 = _AMDeviceImageMounted(uVar9,local_180,uVar8,uVar15);
              param_3 = &local_170->field0_0x0;
              puVar1 = PTR__objc_msgSend_00441098;
              if (local_15c != 0) {
                uVar8 = _AMDCopyErrorText();
                iVar4 = local_15c;
                uVar9 = _AMDErrorString(local_15c);
                uVar15 = 0x77f;
LAB_001275a2:
                pIVar13 = (ID *)0x0;
                pcVar17 = &cf_Failedtoquerywhetherimageisalreadymounted_0x_08x__s____;
                pcVar16 = (cfstringStruct *)(ID *)0x0;
LAB_001275ad:
                local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",uVar15,iVar4
                                                     ,1,pcVar16,pcVar17,iVar4,uVar9,uVar8);
                goto LAB_00126eb2;
              }
              local_190 = "imageType";
              if (cVar2 != '\0') {
                uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imageType");
                uVar8 = (*(code *)puVar1)(param_1,"imageVariant");
                uVar15 = 0x784;
                goto LAB_001276ae;
              }
              uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imageVariant");
              cVar2 = (*(code *)puVar1)(uVar9,"isEqualToString:",&cf_FactoryDiskImage);
              if (cVar2 != '\0') {
LAB_00127997:
                local_170 = &cf_Digest;
                local_88 = &cf_Digest;
                local_60 = local_180;
                local_198 = &cf_Trusted;
                local_80 = &cf_Trusted;
                local_58 = (*(code *)PTR__objc_msgSend_00441098)
                                     (&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
                local_78 = &cf_EPRO;
                local_50 = (*(code *)PTR__objc_msgSend_00441098)
                                     (param_1,"effectiveProductionStatus");
                pcVar18 = (code *)PTR__objc_msgSend_00441098;
                local_70 = &cf_ESEC;
                local_48 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"effectiveSecurityMode");
                local_68 = &cf_Name;
                local_40 = (*pcVar18)(param_1,"imageVariant");
                uVar9 = (*pcVar18)(&_OBJC_CLASS___NSDictionary,
                                   "dictionaryWithObjects:forKeys:count:",&local_60,&local_88,5);
                if (local_188 == 0) {
                  local_198 = (cfstringStruct *)0x0;
                }
                else {
                  local_c8 = local_170;
                  local_a8 = local_188;
                  local_c0 = local_198;
                  local_a0 = (*(code *)PTR__objc_msgSend_00441098)
                                       (&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
                  local_b8 = &cf_EPRO;
                  local_98 = (*(code *)PTR__objc_msgSend_00441098)
                                       (param_1,"effectiveProductionStatus");
                  local_b0 = &cf_ESEC;
                  local_90 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"effectiveSecurityMode");
                  pcVar18 = (code *)PTR__objc_msgSend_00441098;
                  local_198 = (cfstringStruct *)
                              (*(code *)PTR__objc_msgSend_00441098)
                                        (&_OBJC_CLASS___NSDictionary,
                                         "dictionaryWithObjects:forKeys:count:",&local_a8,&local_c8,
                                         4);
                }
                lVar11 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
                if (lVar11 == 0) {
                  uVar8 = (*pcVar18)(param_1,"remoteDevice");
                  uVar15 = (*pcVar18)(param_1,"imageVariant");
                  pIVar13 = (ID *)_AMDeviceRemoteCopyPersonalizationManifest
                                            (uVar8,uVar15,local_180,0);
                }
                else {
                  uVar8 = (*pcVar18)(param_1,"device");
                  uVar15 = (*pcVar18)(param_1,"imageVariant");
                  pIVar13 = (ID *)_AMDeviceCopyPersonalizationManifest(uVar8,uVar15,local_180,0);
                }
                pcVar19 = local_190;
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                puVar1 = PTR__objc_msgSend_00441098;
                local_170 = (cfstringStruct *)_md_log_log;
                local_190 = (char *)(*(code *)PTR__objc_msgSend_00441098)(param_1,pcVar19);
                uVar8 = (*(code *)puVar1)(param_1,"imageVariant");
                if (pIVar13 == (ID *)0x0) {
                  __os_log_internal(0,local_170,1,"Fetching new personalization ticket for %@/%@.",
                                    local_190,uVar8);
                  local_170 = (cfstringStruct *)&_OBJC_CLASS___NSMutableDictionary;
                  local_158 = &cf_ApSecurityMode;
                  local_110 = (*(code *)PTR__objc_msgSend_00441098)
                                        (param_1,"certificateSecurityMode");
                  local_150 = &cf_ApProductionMode;
                  local_108 = (*(code *)PTR__objc_msgSend_00441098)
                                        (param_1,"certificateProductionStatus");
                  puVar1 = PTR__objc_msgSend_00441098;
                  local_148 = &cf_ApSecurityDomain;
                  local_100 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"securityDomain");
                  local_140 = &cf_ApBoardID;
                  local_f8 = (*(code *)puVar1)(param_1,"boardID");
                  local_138 = &cf_ApChipID;
                  local_f0 = (*(code *)puVar1)(param_1,"chipID");
                  local_130 = &cf_ApECID;
                  local_e8 = (*(code *)puVar1)(param_1,"ecid");
                  local_128 = &cf__ApImg4Ticket;
                  local_e0 = (*(code *)puVar1)(param_1,"image4Supported");
                  local_120 = &cf_ApNonce;
                  local_d8 = (*(code *)puVar1)(param_1,"apNonce");
                  local_118 = &cf_PersonalizedDMG;
                  local_d0 = uVar9;
                  uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,
                                            "dictionaryWithObjects:forKeys:count:",&local_110,
                                            &local_158,9);
                  local_170 = (cfstringStruct *)
                              (*(code *)puVar1)(local_170,"dictionaryWithDictionary:",uVar9);
                  cVar2 = (*(code *)puVar1)(param_1,"deviceRequiresUIDMode");
                  if (cVar2 != '\0') {
                    uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
                    (*(code *)puVar1)(local_170,"setObject:forKeyedSubscript:",uVar9,&cf_UID_MODE);
                  }
                  lVar11 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"sepNonce");
                  puVar1 = PTR__objc_msgSend_00441098;
                  if (lVar11 != 0) {
                    uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"sepNonce");
                    (*(code *)puVar1)(local_170,"setObject:forKeyedSubscript:",uVar9,&cf_SepNonce);
                  }
                  lVar11 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"sikaFuse");
                  puVar1 = PTR__objc_msgSend_00441098;
                  if (lVar11 != 0) {
                    uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"sikaFuse");
                    (*(code *)puVar1)(local_170,"setObject:forKeyedSubscript:",uVar9,&cf_Ap_SikaFuse
                                     );
                  }
                  if (local_198 != (cfstringStruct *)0x0) {
                    (*(code *)PTR__objc_msgSend_00441098)
                              (local_170,"setObject:forKeyedSubscript:",local_198,
                               &cf_LoadableTrustCache);
                  }
                  uVar5 = _AMAuthInstallRequestSendSync(lVar7,local_170,&local_1a0);
                  pcVar18 = (code *)PTR__objc_msgSend_00441098;
                  if (uVar5 == 0) {
                    local_190 = local_1a0;
                    local_170 = (cfstringStruct *)
                                (*(code *)PTR__objc_msgSend_00441098)
                                          (local_1a0,"objectForKeyedSubscript:",&cf_ApImg4Ticket);
                    uVar9 = (*pcVar18)(&_OBJC_CLASS___NSData,"class");
                    cVar2 = (*pcVar18)(local_170,"isKindOfClass:",uVar9);
                    if (cVar2 != '\0') goto LAB_00127c65;
                    local_15c = 0xe8000117;
                    pcVar16 = &cf_Invalidserverticketinresponse___;
                    uVar9 = 0x805;
                    iVar4 = 0xe8000117;
                    pcVar19 = local_190;
                  }
                  else {
                    iVar4 = _convertLibAuthInstallErrorToAMDError(uVar5);
                    local_15c = iVar4;
                    _convertLibAuthInstallErrorToString((char *)(ulong)uVar5);
                    pcVar16 = &cf_AMAuthInstallRequestSendSyncfailed__d__s_;
                    uVar9 = 0x7fa;
                    pcVar19 = (char *)(ulong)uVar5;
                  }
                  pIVar13 = (ID *)0x0;
                  local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",uVar9,
                                                       iVar4,1,0,pcVar16,pcVar19);
                }
                else {
                  __os_log_internal(0,local_170,1,"Using cached personalization ticket for %@/%@.",
                                    local_190,uVar8);
                  pcVar18 = (code *)PTR__objc_msgSend_00441098;
                  local_170 = (cfstringStruct *)pIVar13;
LAB_00127c65:
                  local_198 = (cfstringStruct *)(*pcVar18)(param_1,"device");
                  local_190 = (char *)(*pcVar18)(param_1,"imagePathURL");
                  uVar9 = (*pcVar18)(param_1,"trustCacheURL");
                  ppuVar14 = &PTR_s_mountImage_serverTicket_imageDig_0048d8c0;
                  if (local_198 == (cfstringStruct *)0x0) {
                    ppuVar14 = &PTR_s_mountRemoteImage_serverTicket_im_0048d8c8;
                  }
                  local_15c = (*pcVar18)(param_1,*ppuVar14,local_190,local_170,local_180,uVar9,
                                         &local_168);
                  if (local_15c != 0) {
                    uVar8 = _AMDCopyErrorText(local_15c);
                    iVar4 = local_15c;
                    local_170 = (cfstringStruct *)local_168;
                    uVar9 = _AMDErrorString(local_15c);
                    pcVar17 = &cf_Failedtomountimage_0x_08x__s____;
                    uVar15 = 0x814;
                    pcVar16 = local_170;
                    goto LAB_001275ad;
                  }
                }
                goto LAB_00127142;
              }
              uVar9 = (*(code *)puVar1)(param_1,"imageType");
              cVar2 = (*(code *)puVar1)(uVar9,"isEqualToString:",&cf_Cryptex);
              if (cVar2 != '\0') goto LAB_00127997;
              uVar9 = (*(code *)puVar1)(param_1,"device");
              uVar8 = (*(code *)puVar1)(param_1,"imageType");
              uVar15 = (*(code *)puVar1)(param_1,"imageVariant");
              cVar2 = _AMDeviceImageMounted(uVar9,0,uVar8,uVar15,&local_15c);
              puVar1 = PTR__objc_msgSend_00441098;
              if (local_15c == 0) {
                param_3 = &local_170->field0_0x0;
                if (cVar2 != '\0') {
                  uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imageType");
                  uVar8 = (*(code *)puVar1)(param_1,"imageVariant");
                  uVar15 = 0x793;
LAB_0012795e:
                  local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",uVar15,0,1
                                                       ,0,&
                                                  cf_Imagematchingvariant_______isalreadymounted_,
                                                  uVar9,uVar8);
                  local_15c = 0xe8000111;
                  goto LAB_00127445;
                }
                goto LAB_00127997;
              }
              uVar8 = _AMDCopyErrorText();
              iVar4 = local_15c;
              uVar9 = _AMDErrorString(local_15c);
              uVar15 = 0x78e;
LAB_00127899:
              local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",uVar15,iVar4,1
                                                   ,0,&
                                                  cf_Failedtoquerywhetherimageisalreadymounted_0x_08x__s____
                                                  ,iVar4,uVar9,uVar8);
              goto LAB_00127448;
            }
            uVar9 = (*pcVar18)(param_1,"remoteDevice");
            uVar8 = (*pcVar18)(param_1,"imageType");
            uVar15 = (*pcVar18)(param_1,"imageVariant");
            cVar2 = _isRemoteImageMounted(0,uVar9,local_180,uVar8,uVar15);
            param_3 = &local_170->field0_0x0;
            puVar1 = PTR__objc_msgSend_00441098;
            if (local_15c != 0) {
              uVar8 = _AMDCopyErrorText();
              iVar4 = local_15c;
              uVar9 = _AMDErrorString(local_15c);
              uVar15 = 0x79c;
              goto LAB_001275a2;
            }
            local_190 = "imageType";
            if (cVar2 == '\0') {
              uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imageVariant");
              cVar2 = (*(code *)puVar1)(uVar9,"isEqualToString:",&cf_FactoryDiskImage);
              if (cVar2 == '\0') {
                uVar9 = (*(code *)puVar1)(param_1,"imageType");
                cVar2 = (*(code *)puVar1)(uVar9,"isEqualToString:",&cf_Cryptex);
                if (cVar2 == '\0') {
                  uVar9 = (*(code *)puVar1)(param_1,"remoteDevice");
                  uVar8 = (*(code *)puVar1)(param_1,"imageType");
                  uVar15 = (*(code *)puVar1)(param_1,"imageVariant");
                  cVar2 = _isRemoteImageMounted(0,uVar9,0,uVar8,uVar15,&local_15c);
                  puVar1 = PTR__objc_msgSend_00441098;
                  if (local_15c != 0) {
                    uVar8 = _AMDCopyErrorText();
                    iVar4 = local_15c;
                    uVar9 = _AMDErrorString(local_15c);
                    uVar15 = 0x7ab;
                    goto LAB_00127899;
                  }
                  param_3 = &local_170->field0_0x0;
                  if (cVar2 != '\0') {
                    uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imageType");
                    uVar8 = (*(code *)puVar1)(param_1,"imageVariant");
                    uVar15 = 0x7b0;
                    goto LAB_0012795e;
                  }
                }
              }
              goto LAB_00127997;
            }
            uVar9 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"imageType");
            uVar8 = (*(code *)puVar1)(param_1,"imageVariant");
            uVar15 = 0x7a1;
LAB_001276ae:
            pIVar13 = (ID *)0x0;
            local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",uVar15,0,1,0,
                                                 &cf_Imageisalreadymounted___________,uVar9,uVar8,
                                                 local_180);
            local_15c = 0xe8000072;
          }
LAB_00127142:
          uVar8 = 0;
          goto LAB_00126eb2;
        }
        local_15c = (*(code *)PTR__objc_msgSend_00441098)
                              (param_1,"copyDeveloperModeState:withError:",&local_171,&local_168);
        if (local_15c == 0) {
          if (local_171 != '\0') goto LAB_00126fef;
          local_15c = 0xe800011c;
          local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",0x728,0xe800011c,1
                                               ,0,&
                                                  cf_Developermodeisnotenabledondevice_0x_08x__s____
                                               ,0xe800011c,
                                               "kAMDMobileImageMounterDiskImageRestricted",0);
          goto LAB_00127120;
        }
        uVar8 = _AMDCopyErrorText(local_15c);
        iVar4 = local_15c;
        pIVar13 = local_168;
        uVar9 = _AMDErrorString(local_15c);
        pcVar16 = &cf_Failedtoquerydevelopermodestate_0x_08x__s____;
        uVar15 = 0x722;
      }
      else {
        uVar8 = _AMDCopyErrorText(local_15c);
        iVar4 = local_15c;
        pIVar13 = local_168;
        uVar9 = _AMDErrorString(local_15c);
        pcVar16 = &cf_Failedtoinitializeimageproperties_0x_08x__s____;
        uVar15 = 0x718;
      }
    }
    else {
      uVar8 = _AMDCopyErrorText(local_15c);
      iVar4 = local_15c;
      pIVar13 = local_168;
      uVar9 = _AMDErrorString(local_15c);
      pcVar16 = &cf_Failedtoinitializedeviceattributes_0x_08x__s____;
      uVar15 = 0x707;
    }
  }
  lVar7 = 0;
  local_168 = (ID *)_createAndLogError("-[PersonalizedImage mountImage:]",uVar15,iVar4,1,pIVar13,
                                       pcVar16,iVar4,uVar9,uVar8);
  local_180 = 0;
  local_188 = 0;
  pIVar13 = (ID *)0x0;
LAB_00126eb2:
  iVar4 = local_15c;
  if (param_3 != (ID *)0x0 && local_15c != 0) {
    IVar10 = (*(code *)PTR__objc_retain_004410a8)(local_168);
    *param_3 = IVar10;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_168);
  (*(code *)puVar1)(local_180);
  (*(code *)puVar1)(local_188);
  (*(code *)puVar1)(pIVar13);
  (*(code *)puVar1)(uVar8);
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (local_1a0 != (char *)0x0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

