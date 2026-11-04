// rea decompile_all
// name: _IXRemotePerformInstallationAsync
// address: 0x36873
// body: available
// range: 0x36873-0x38866 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x38862 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IXRemotePerformInstallationAsync
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  dispatch_queue_attr_t pdVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  dispatch_semaphore_t pdVar17;
  int *piVar18;
  cfstringStruct *pcVar19;
  dispatch_queue_t pdVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  char *pcVar23;
  undefined *local_390;
  undefined8 local_388;
  code *local_380;
  undefined *local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined *local_358;
  undefined8 local_350;
  code *local_348;
  undefined *local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined *local_318;
  undefined8 local_310;
  code *local_308;
  undefined *local_300;
  undefined8 local_2f8;
  cfstringStruct *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 *local_2d0;
  ulong local_2c8;
  undefined8 local_2c0;
  undefined8 *local_2b8;
  undefined8 local_2b0;
  code *local_2a8;
  code *local_2a0;
  undefined8 local_298;
  undefined *local_290;
  undefined8 local_288;
  code *local_280;
  undefined *local_278;
  dispatch_semaphore_t local_270;
  undefined8 local_268;
  undefined8 local_260;
  long local_258;
  undefined8 local_250;
  undefined *local_248;
  undefined8 local_240;
  code *local_238;
  undefined *local_230;
  cfstringStruct *local_228;
  undefined8 local_220;
  dispatch_semaphore_t local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  code *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined8 local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  dispatch_queue_t local_138;
  undefined8 local_130;
  dispatch_semaphore_t local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  long local_d0;
  cfstringStruct *local_c8;
  dispatch_semaphore_t local_c0;
  cfstringStruct *local_b8;
  char local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  ulong local_98;
  cfstringStruct *local_90;
  undefined1 local_88 [16];
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  dispatch_semaphore_t local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  long local_38;
  
  puVar3 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_e0 = param_6;
  local_98 = param_1;
  uVar6 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  local_b8 = (cfstringStruct *)(*(code *)puVar3)(param_3);
  local_100 = (*(code *)puVar3)(param_4);
  pcVar7 = (cfstringStruct *)(*(code *)puVar3)(param_5);
  local_e0 = (*(code *)puVar3)(local_e0);
  local_90 = (cfstringStruct *)0xffffffffffffffff;
  pcVar8 = (cfstringStruct *)(*(code *)puVar3)(uVar6);
  local_1e0 = &local_1e8;
  local_1e8 = 0;
  local_1d8 = 0x2020000000;
  local_1d0 = 0;
  uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_a8 = pcVar8;
  uVar9 = (*(code *)PTR__objc_msgSend_00441098)(pcVar8,"path");
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  local_a0 = pcVar7;
  uVar10 = _objc_retainBlock(pcVar7);
  uVar11 = _objc_retainBlock(local_e0);
  __os_log_internal(0,uVar6,0,
                    "%s: => begin for device:%p installable:%@ config:%@ queue:%p progress:%p completion:%p"
                    ,"IXRemotePerformInstallationAsync",local_98,uVar9,local_b8,local_100,uVar10,
                    uVar11);
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  (*(code *)PTR__objc_release_004410a0)(uVar10);
  (*(code *)PTR__objc_release_004410a0)(uVar9);
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  puVar3 = PTR__objc_retain_004410a8;
  local_318 = PTR___NSConcreteStackBlock_004412a8;
  local_310 = 0xc2000000;
  local_308 = ___IXRemotePerformInstallationAsync_block_invoke;
  local_300 = &
              ___block_descriptor_88_e8_32s40s48s56bs64bs72r_e95_v40__0__OS_remote_device_8__IXRemoteInstallDeltaHelper_16__IXRemoteInstallResult_24__NSError_32l
  ;
  local_2d0 = &local_1e8;
  local_2f8 = (*(code *)PTR__objc_retain_004410a8)(local_b8);
  local_2c8 = local_98;
  local_148 = local_2f8;
  local_2f0 = (cfstringStruct *)(*(code *)puVar3)(local_a8);
  local_b8 = local_2f0;
  local_2e8 = (*(code *)puVar3)(local_100);
  local_100 = local_2e8;
  local_2e0 = (*(code *)puVar3)(local_a0);
  local_140 = local_2e0;
  local_2d8 = (*(code *)puVar3)(local_e0);
  local_150 = local_2d8;
  local_e0 = _objc_retainBlock(&local_318);
  iVar5 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  if (iVar5 == 0) {
    lVar13 = 0;
    uVar6 = __CreateError("IXRemotePerformInstallationAsync",0x2ce,&cf_IXRemoteErrorDomain,1,0,0,
                          &cf_Notsupportedonhostsrunning<10_15);
    pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar6);
    local_138 = (dispatch_queue_t)0x0;
  }
  else {
    uVar6 = _dispatch_queue_attr_make_with_autorelease_frequency(0,1);
    pdVar12 = (dispatch_queue_attr_t)_objc_retainAutoreleasedReturnValue(uVar6);
    local_138 = _dispatch_queue_create("com.apple.RemoteInstallQueue",pdVar12);
    (*(code *)PTR__objc_release_004410a0)(pdVar12);
    local_170 = 0;
    local_114 = 0;
    lVar13 = _AMDeviceCopyRemoteDeviceWithError(local_98);
    uVar6 = local_170;
    puVar3 = PTR__objc_retain_004410a8;
    if (lVar13 == 0) {
      uVar9 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = _AMDErrorString(local_114);
      __os_log_internal(0,uVar9,0x10,
                        "%s: Failed to get remote_device_t from AMDeviceRef using AMDeviceCopyRemoteDeviceWithError() : %s"
                        ,"IXRemotePerformInstallationAsync",uVar10);
      (*(code *)PTR__objc_release_004410a0)(uVar9);
      uVar9 = _AMDErrorString(local_114);
      uVar9 = __CreateError("IXRemotePerformInstallationAsync",0x250,&cf_IXRemoteErrorDomain,5,uVar6
                            ,0,&
                               cf_Failedtogetremote_device_tfromAMDeviceRefusingAMDeviceCopyRemoteDeviceWithError____s
                            ,uVar9);
      pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)PTR__objc_release_004410a0)(uVar6);
    }
    else {
      lVar14 = (*(code *)PTR__objc_retain_004410a8)(lVar13);
      local_c0 = (dispatch_semaphore_t)(*(code *)puVar3)(local_148);
      local_e8 = lVar14;
      if (local_c0 == (dispatch_semaphore_t)0x0) {
        uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        __os_log_internal(0,uVar6,0x10,
                          "%s: An IXRemoteInstallConfiguration object must be passed to this function"
                          ,"_ValidateConfig");
        (*(code *)PTR__objc_release_004410a0)(uVar6);
        uVar6 = __CreateError("_ValidateConfig",0xd3,&cf_IXRemoteErrorDomain,4,0,0,
                              &cf_AnIXRemoteInstallConfigurationobjectmustbepassedtothisfunction);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar6 = _objc_autorelease(uVar6);
        bVar1 = false;
      }
      else {
        cVar4 = __IsEmbeddedRemoteDevice(lVar14);
        uVar9 = (*(code *)PTR__objc_retain_004410a8)(local_c0);
        if (cVar4 == '\0') {
          uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"remoteInstallTargetDirectoryURL");
          pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar6);
          uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"remoteInstallTargetURL");
          local_98 = _objc_retainAutoreleasedReturnValue(uVar6);
          cVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"stashMode");
          local_a8 = pcVar7;
          if (cVar4 == '\0') {
            uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"remoteInstallTargetBundleName");
            lVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
            (*(code *)PTR__objc_release_004410a0)(lVar14);
            if (lVar14 == 0) {
              if ((pcVar7 != (cfstringStruct *)0x0) != (local_98 != 0)) goto LAB_00037c3a;
              local_a0 = &
                         cf_IXRemoteInstallConfigurationmusthaveeitheraninstalltargetdirectoryset_oraninstalltargetpathset_notboth
              ;
              uVar22 = 0xa3;
              pcVar23 = 
              "%s: IXRemoteInstallConfiguration must have either an install target directory set, or an install target path set, not both"
              ;
              goto LAB_00036dd7;
            }
            if (pcVar7 != (cfstringStruct *)0x0 || local_98 != 0) {
              local_a0 = &
                         cf_IXRemoteInstallConfigurationmustnothaveinstalldirectoryorinstalltargetsetifinstalltargetbundlenameisset
              ;
              uVar22 = 0x9e;
              pcVar23 = 
              "%s: IXRemoteInstallConfiguration must not have install directory or install target set if install target bundle name is set"
              ;
              goto LAB_00036dd7;
            }
LAB_00037c3a:
            uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"provisioningProfileDatas");
            lVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
            (*(code *)PTR__objc_release_004410a0)(lVar14);
            if (lVar14 != 0) {
              local_a0 = &cf_provisioningProfileDatasnotsupportedwhentargetingadevicerunningmacOS;
              uVar22 = 0xa9;
              pcVar23 = 
              "%s: provisioningProfileDatas not supported when targeting a device running macOS";
              goto LAB_00036dd7;
            }
            cVar4 = (*(code *)PTR__objc_msgSend_00441098)
                              (uVar9,"provisioningProfileInstallFailureIsFatal");
            if (cVar4 != '\0') {
              local_a0 = &
                         cf_provisioningProfileInstallFailureIsFatalisnotsupportedwhentargetingadevicerunningmacOS
              ;
              uVar22 = 0xae;
              pcVar23 = 
              "%s: provisioningProfileInstallFailureIsFatal is not supported when targeting a device running macOS"
              ;
              goto LAB_00036dd7;
            }
            uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"sinfData");
            lVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
            if (lVar14 != 0) {
              (*(code *)PTR__objc_release_004410a0)(lVar14);
LAB_000387ae:
              local_a0 = &cf_sinfDataandstoreMetadataarenotsupportedwhentargetingadevicerunningmacOS
              ;
              uVar22 = 0xb3;
              pcVar23 = 
              "%s: sinfData and storeMetadata are not supported when targeting a device running macOS"
              ;
              goto LAB_00036dd7;
            }
            uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"storeMetadata");
            lVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
            (*(code *)PTR__objc_release_004410a0)(lVar14);
            if (lVar14 != 0) goto LAB_000387ae;
            uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"deltaDirectoryURL");
            lVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
            (*(code *)PTR__objc_release_004410a0)(lVar14);
            if (lVar14 != 0) {
              local_a0 = &cf_DeltaupdatesarenotsupportedwhentargetingadevicerunningmacOS;
              uVar22 = 0xb8;
              pcVar23 = "%s: Delta updates are not supported when targeting a device running macOS";
              goto LAB_00036dd7;
            }
            cVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"pairedAutoInstallOverride");
            if (cVar4 != '\0') {
              local_a0 = &cf_pairedAutoInstallOverrideisnotsupportedwhentargetingadevicerunningmacOS
              ;
              uVar22 = 0xbd;
              pcVar23 = 
              "%s: pairedAutoInstallOverride is not supported when targeting a device running macOS"
              ;
              goto LAB_00036dd7;
            }
            bVar1 = true;
            uVar6 = 0;
            pcVar7 = local_a8;
          }
          else {
            local_a0 = &
                       cf_Stashinganexistingcopyoftheappisn_tsupportedwhentargetingadevicerunningmacOS
            ;
            uVar22 = 0x98;
            pcVar23 = 
            "%s: Stashing an existing copy of the app isn\'t supported when targeting a device running macOS"
            ;
LAB_00036dd7:
            uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            __os_log_internal(0,uVar6,0x10,pcVar23,"_ValidateConfigForMac");
            (*(code *)PTR__objc_release_004410a0)(uVar6);
            pcVar7 = local_a8;
            uVar6 = __CreateError("_ValidateConfigForMac",uVar22,&cf_IXRemoteErrorDomain,2,0,0,
                                  local_a0);
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            uVar6 = _objc_retainAutorelease(uVar6);
            (*(code *)PTR__objc_release_004410a0)(uVar6);
            bVar1 = false;
          }
          (*(code *)PTR__objc_release_004410a0)(local_98);
          (*(code *)PTR__objc_release_004410a0)(pcVar7);
          (*(code *)PTR__objc_release_004410a0)(uVar9);
        }
        else {
          cVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"installableType");
          if (cVar4 == '\0') {
            uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"remoteInstallTargetURL");
            lVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
            if (lVar14 != 0) {
              (*(code *)PTR__objc_release_004410a0)(lVar14);
LAB_00036f50:
              pcVar7 = &
                       cf_remoteInstallTargetURLandremoteInstallTargetDirectoryURLareonlysupportedwhentargetingadevicerunningmacOS
              ;
              local_98 = CONCAT44(local_98._4_4_,0x7d);
              pcVar23 = 
              "%s: remoteInstallTargetURL and remoteInstallTargetDirectoryURL are only supported when targeting a device running macOS"
              ;
              goto LAB_00036f6b;
            }
            uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar9,"remoteInstallTargetDirectoryURL");
            lVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
            (*(code *)PTR__objc_release_004410a0)(lVar14);
            if (lVar14 != 0) goto LAB_00036f50;
            bVar1 = true;
            uVar6 = 0;
          }
          else {
            pcVar7 = &
                     cf_installableTypemustbekIXRemoteInstallableTypeEmbeddedwhentargetinganembeddeddevice
            ;
            local_98 = CONCAT44(local_98._4_4_,0x75);
            pcVar23 = 
            "%s: installableType must be kIXRemoteInstallableTypeEmbedded when targeting an embedded device"
            ;
LAB_00036f6b:
            uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            __os_log_internal(0,uVar6,0x10,pcVar23,"_ValidateConfigForEmbedded");
            (*(code *)PTR__objc_release_004410a0)(uVar6);
            uVar6 = __CreateError("_ValidateConfigForEmbedded",local_98 & 0xffffffff,
                                  &cf_IXRemoteErrorDomain,2,0,0,pcVar7);
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            uVar6 = _objc_retainAutorelease(uVar6);
            (*(code *)PTR__objc_release_004410a0)(uVar6);
            bVar1 = false;
          }
          (*(code *)PTR__objc_release_004410a0)(uVar9);
        }
      }
      (*(code *)PTR__objc_release_004410a0)(local_c0);
      (*(code *)PTR__objc_release_004410a0)(local_e8);
      pcVar7 = (cfstringStruct *)(*(code *)PTR__objc_retain_004410a8)(uVar6);
      if (bVar1) {
        local_a9 = '\0';
        local_168 = pcVar7;
        cVar4 = _IXItemExistsAtURL(local_b8);
        local_f8 = (cfstringStruct *)(*(code *)PTR__objc_retain_004410a8)(local_168);
        (*(code *)PTR__objc_release_004410a0)(pcVar7);
        puVar3 = PTR__objc_retain_004410a8;
        if (cVar4 == '\0') {
          uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          uVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_b8,"path");
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          __os_log_internal(0,uVar6,0x10,"%s: Failed to determine if installable at %@ exists : %@",
                            "IXRemotePerformInstallationAsync",uVar9,local_f8);
          (*(code *)PTR__objc_release_004410a0)(uVar9);
          (*(code *)PTR__objc_release_004410a0)(uVar6);
          uVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_b8,"path");
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          uVar9 = __CreateError("IXRemotePerformInstallationAsync",0x25a,&cf_IXRemoteErrorDomain,2,0
                                ,0,&cf_Failedtodetermineifinstallableat__exists___,uVar6,local_f8);
          pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)PTR__objc_release_004410a0)(uVar6);
LAB_00037b46:
          bVar1 = true;
          uVar6 = 0;
          local_98 = 0;
          local_a0 = local_b8;
          local_c8 = (cfstringStruct *)0x0;
          pdVar17 = (dispatch_semaphore_t)0x0;
          local_a8 = (cfstringStruct *)0x0;
          pcVar8 = local_f8;
        }
        else {
          if (local_a9 == '\0') {
            uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            uVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_b8,"path");
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            __os_log_internal(0,uVar6,2,"%s: Ignoring bundle version for %@ because it is a file",
                              "IXRemotePerformInstallationAsync",uVar9);
            (*(code *)PTR__objc_release_004410a0)(uVar9);
            (*(code *)PTR__objc_release_004410a0)(uVar6);
          }
          else {
            local_98 = (*(code *)PTR__objc_retain_004410a8)(local_c0);
            local_a8 = (cfstringStruct *)(*(code *)puVar3)(local_b8);
            uVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_a8,"pathExtension");
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            cVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"isEqualToString:",&cf_app);
            (*(code *)PTR__objc_release_004410a0)(uVar6);
            if (cVar4 == '\0') {
              uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                                (local_a8,"URLByAppendingPathComponent:isDirectory:",&cf_Payload,1);
              lVar13 = _objc_retainAutoreleasedReturnValue(uVar6);
              auVar2._8_8_ = 0;
              auVar2._0_8_ = local_88._8_8_;
              local_88 = auVar2 << 0x40;
              uVar6 = _AppURLFromExtractedPayloadDir(lVar13);
              lVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
              uVar6 = (*(code *)PTR__objc_retain_004410a8)(local_88._0_8_);
              if (lVar14 != 0) {
                (*(code *)PTR__objc_release_004410a0)(uVar6);
                (*(code *)PTR__objc_release_004410a0)(lVar13);
                goto LAB_0003732c;
              }
              uVar9 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
              uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
              __os_log_internal(0,uVar9,0x10,"%s: Failed to find an app url in %@: %@",
                                "_ConfigureBundleVersionOnConfig",lVar13,uVar6);
              (*(code *)PTR__objc_release_004410a0)(uVar9);
LAB_000374ab:
              (*(code *)PTR__objc_release_004410a0)(uVar6);
            }
            else {
              lVar14 = (*(code *)PTR__objc_retain_004410a8)(local_a8);
LAB_0003732c:
              lVar15 = __CFBundleCreateUnique
                                 (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar14);
              lVar13 = lVar14;
              if (lVar15 == 0) {
                uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
                uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                __os_log_internal(0,uVar6,0x10,"%s: Failed to create a bundle from URL %@",
                                  "_ConfigureBundleVersionOnConfig",lVar14);
                goto LAB_000374ab;
              }
              uVar6 = _CFBundleGetValueForInfoDictionaryKey
                                (lVar15,*(undefined8 *)PTR__kCFBundleVersionKey_00441128);
              (*(code *)PTR__objc_msgSend_00441098)(local_98,"setBundleVersion:",uVar6);
              uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              uVar9 = (*(code *)PTR__objc_msgSend_00441098)(lVar14,"path");
              uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
              uVar10 = (*(code *)PTR__objc_msgSend_00441098)(local_98,"bundleVersion");
              uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
              __os_log_internal(0,uVar6,2,"%s: Setting bundle version for %@ to %@",
                                "_ConfigureBundleVersionOnConfig",uVar9,uVar10);
              (*(code *)PTR__objc_release_004410a0)(uVar10);
              (*(code *)PTR__objc_release_004410a0)(uVar9);
              (*(code *)PTR__objc_release_004410a0)(uVar6);
              _CFRelease(lVar15);
            }
            (*(code *)PTR__objc_release_004410a0)(lVar13);
            (*(code *)PTR__objc_release_004410a0)(local_a8);
            (*(code *)PTR__objc_release_004410a0)(local_98);
          }
          uVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_c0,"deltaDirectoryURL");
          lVar13 = _objc_retainAutoreleasedReturnValue(uVar6);
          (*(code *)PTR__objc_release_004410a0)(lVar13);
          if (lVar13 == 0) {
            local_98 = 0;
            local_c8 = (cfstringStruct *)0x0;
            pcVar8 = local_f8;
            local_a0 = local_b8;
          }
          else {
            if (local_a9 == '\0') {
              uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              uVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_b8,"path");
              uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
              __os_log_internal(0,uVar6,0x10,
                                "%s: Installable at %@ isn\'t an application bundle. It\'s required that the installable be a bundle when attempting delta"
                                ,"IXRemotePerformInstallationAsync",uVar9);
              (*(code *)PTR__objc_release_004410a0)(uVar9);
              (*(code *)PTR__objc_release_004410a0)(uVar6);
              uVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_b8,"path");
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              uVar9 = __CreateError("IXRemotePerformInstallationAsync",0x268,&cf_IXRemoteErrorDomain
                                    ,2,0,0,&
                                           cf_Installableat__isn_tanapplicationbundle_It_srequiredthattheinstallablebeabundlewhenattemptingdelta
                                    ,uVar6);
              pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar9);
              (*(code *)PTR__objc_release_004410a0)(uVar6);
              goto LAB_00037b46;
            }
            uVar6 = _objc_alloc(&objc::class_t::IXRemoteInstallDeltaHelper);
            uVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_c0,"deltaDirectoryURL");
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            uVar10 = (*(code *)PTR__objc_msgSend_00441098)
                               (local_b8,"URLByDeletingLastPathComponent");
            local_98 = _objc_retainAutoreleasedReturnValue(uVar10);
            uVar10 = (*(code *)PTR__objc_retain_004410a8)(local_e8);
            local_88 = (undefined1  [16])0x0;
            uVar11 = 0;
            iVar5 = ___isPlatformVersionAtLeast(1,10,0xf,0);
            if (iVar5 != 0) {
              _remote_device_copy_uuid(uVar10,local_88);
              uVar11 = _objc_alloc(&_OBJC_CLASS___NSUUID);
              uVar11 = (*(code *)PTR__objc_msgSend_00441098)(uVar11,"initWithUUIDBytes:",local_88);
            }
            (*(code *)PTR__objc_release_004410a0)(uVar10);
            uVar16 = (*(code *)PTR__objc_msgSend_00441098)(local_c0,"bundleID");
            uVar16 = _objc_retainAutoreleasedReturnValue(uVar16);
            local_160 = local_f8;
            lVar13 = (*(code *)PTR__objc_msgSend_00441098)
                               (uVar6,
                                "initWithDeltaDirectoryURL:installableParentURL:forDeviceWithUUID:forAppWithBundleID:withError:"
                                ,uVar9,local_98,uVar11,uVar16,&local_160);
            local_a8 = (cfstringStruct *)(*(code *)PTR__objc_retain_004410a8)(local_160);
            (*(code *)PTR__objc_release_004410a0)(local_f8);
            (*(code *)PTR__objc_release_004410a0)(uVar16);
            (*(code *)PTR__objc_release_004410a0)(uVar11);
            (*(code *)PTR__objc_release_004410a0)(local_98);
            (*(code *)PTR__objc_release_004410a0)(uVar9);
            puVar3 = PTR__objc_retain_004410a8;
            if (lVar13 == 0) {
              uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
              uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
              __os_log_internal(0,uVar6,0x10,
                                "%s: Failed to create delta helper : %@, proceeding with full app install"
                                ,"IXRemotePerformInstallationAsync",local_a8);
              (*(code *)PTR__objc_release_004410a0)(uVar6);
              pcVar7 = local_a8;
              local_98 = 0;
              local_c8 = (cfstringStruct *)0x0;
              local_a8 = (cfstringStruct *)0x0;
              pcVar19 = local_b8;
            }
            else {
              local_120 = (*(code *)PTR__objc_retain_004410a8)(uVar10);
              local_98 = (*(code *)puVar3)(lVar13);
              pcVar7 = (cfstringStruct *)(*(code *)puVar3)(local_c0);
              local_a0 = (cfstringStruct *)(*(code *)puVar3)(local_b8);
              local_1c8 = 0;
              local_1b8 = 0x3032000000;
              local_1b0 = ___Block_byref_object_copy_;
              local_1a8 = ___Block_byref_object_dispose_;
              local_1a0 = 0;
              local_2c0 = 0;
              local_2b0 = 0x3032000000;
              local_2a8 = ___Block_byref_object_copy_;
              local_2a0 = ___Block_byref_object_dispose_;
              local_298 = 0;
              local_2b8 = &local_2c0;
              local_1c0 = &local_1c8;
              (*(code *)PTR__objc_msgSend_00441098)(pcVar7,"bundleID");
              local_c8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
              local_128 = _dispatch_semaphore_create(0);
              local_f8 = pcVar7;
              uVar6 = (*(code *)PTR__objc_msgSend_00441098)(pcVar7,"remoteInstallTargetURL");
              local_d8 = (undefined8 *)_objc_retainAutoreleasedReturnValue(uVar6);
              local_198 = 0;
              local_190 = 0;
              cVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                (local_98,"getStashedInstallableURL:forRemoteInstallResult:error:",
                                 &local_198,0);
              puVar3 = PTR__objc_retain_004410a8;
              lVar13 = (*(code *)PTR__objc_retain_004410a8)(local_198);
              uVar6 = (*(code *)puVar3)(local_190);
              local_110 = uVar6;
              if (cVar4 == '\0') {
                lVar14 = 0;
                goto LAB_00037e58;
              }
              if (lVar13 == 0) {
                uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
                uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                __os_log_internal(0,uVar6,0,"%s: No stashed install; skipping delta for %@",
                                  "_IXRemoteGenerateDeltaURL",local_c8);
                (*(code *)PTR__objc_release_004410a0)(uVar6);
                lVar13 = 0;
                lVar14 = 0;
                lVar15 = 0;
                uVar6 = local_110;
              }
              else {
                local_d0 = lVar13;
                uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                                  (local_f8,"remoteInstallTargetBundleName");
                uVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
                puVar3 = PTR__objc_retain_004410a8;
                local_88._8_8_ = 0xc2000000;
                local_88._0_8_ = PTR___NSConcreteStackBlock_004412a8;
                local_78 = ____IXRemoteGenerateDeltaURL_block_invoke;
                local_70 = &
                           ___block_descriptor_64_e8_32s40s48r56r_e43_v24__0__IXRemoteInstallResult_8__NSError_16l
                ;
                uVar10 = (*(code *)PTR__objc_retain_004410a8)(local_c8);
                local_68 = uVar10;
                local_58 = &local_1c8;
                local_50 = &local_2c0;
                pdVar17 = (dispatch_semaphore_t)(*(code *)puVar3)(local_128);
                uVar6 = local_110;
                local_130 = uVar10;
                local_60 = pdVar17;
                __IXQueryInstalledInfoForDevice(local_120,uVar10,local_d8,uVar9,local_88);
                (*(code *)PTR__objc_release_004410a0)(uVar9);
                (*(code *)PTR__objc_release_004410a0)(local_60);
                (*(code *)PTR__objc_release_004410a0)(local_68);
                uVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_f8,"deltaScheme");
                local_188 = uVar6;
                uVar9 = (*(code *)PTR__objc_msgSend_00441098)
                                  (local_98,
                                   "generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:"
                                   ,local_a0,local_d0,uVar9);
                lVar14 = _objc_retainAutoreleasedReturnValue(uVar9);
                local_108 = (*(code *)PTR__objc_retain_004410a8)(local_188);
                (*(code *)PTR__objc_release_004410a0)(uVar6);
                _dispatch_semaphore_wait(pdVar17,0xffffffffffffffff);
                if (lVar14 == 0) {
                  lVar14 = 0;
                  uVar6 = local_108;
                  lVar13 = local_d0;
LAB_00037e58:
                  local_d0 = lVar13;
                  uVar9 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
                  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
                  __os_log_internal(0,uVar9,0x10,"%s: Failed to generate delta for %@ : %@",
                                    "_IXRemoteGenerateDeltaURL",local_c8,uVar6);
                  (*(code *)PTR__objc_release_004410a0)(uVar9);
                  lVar15 = 0;
                  lVar13 = local_d0;
                }
                else {
                  if (local_1c0[5] == 0) {
                    uVar6 = __CreateError("_IXRemoteGenerateDeltaURL",0x1c8,&cf_IXRemoteErrorDomain,
                                          5,local_2b8[5],0,
                                          &
                                          cf_Currentlyinstalledinfofor__doesn_texist_goingtoskipdelta___
                                          ,local_130);
                    uVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
LAB_00037e4b:
                    (*(code *)PTR__objc_release_004410a0)(local_108);
                    uVar6 = uVar9;
                    lVar13 = local_d0;
                    goto LAB_00037e58;
                  }
                  uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
                  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                  __os_log_internal(0,uVar6,2,
                                    "%s: Got info about installed app with bundleID %@ from remote: %@"
                                    ,"_IXRemoteGenerateDeltaURL",local_130,local_1c0[5]);
                  (*(code *)PTR__objc_release_004410a0)(uVar6);
                  local_180 = local_d0;
                  local_178 = local_108;
                  cVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                    (local_98,
                                     "getStashedInstallableURL:forRemoteInstallResult:error:",
                                     &local_180,local_1c0[5]);
                  lVar13 = (*(code *)PTR__objc_retain_004410a8)(local_180);
                  (*(code *)PTR__objc_release_004410a0)(local_d0);
                  uVar6 = (*(code *)PTR__objc_retain_004410a8)(local_178);
                  (*(code *)PTR__objc_release_004410a0)(local_108);
                  if (cVar4 == '\0') goto LAB_00037e58;
                  if (lVar13 == 0) {
                    local_d0 = 0;
                    uVar9 = __CreateError("_IXRemoteGenerateDeltaURL",0x1d4,&cf_IXRemoteErrorDomain,
                                          5,0,0,&
                                                cf_Unexpectedlyfoundnostashedinstallableaftercreatingdeltafor__
                                          ,local_130);
                    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
                    local_108 = uVar6;
                    goto LAB_00037e4b;
                  }
                  lVar15 = (*(code *)PTR__objc_retain_004410a8)(lVar14);
                  lVar14 = lVar15;
                }
                lVar15 = (*(code *)PTR__objc_retain_004410a8)(lVar15);
              }
              (*(code *)PTR__objc_release_004410a0)(local_d8);
              (*(code *)PTR__objc_release_004410a0)(local_128);
              (*(code *)PTR__objc_release_004410a0)(local_c8);
              (*(code *)PTR__objc_release_004410a0)(lVar13);
              (*(code *)PTR__objc_release_004410a0)(lVar15);
              (*(code *)PTR__objc_release_004410a0)(lVar14);
              (*(code *)PTR__objc_release_004410a0)(uVar6);
              __Block_object_dispose(&local_2c0,8);
              (*(code *)PTR__objc_release_004410a0)(local_298);
              __Block_object_dispose(&local_1c8,8);
              (*(code *)PTR__objc_release_004410a0)(local_1a0);
              (*(code *)PTR__objc_release_004410a0)(local_a0);
              (*(code *)PTR__objc_release_004410a0)(local_f8);
              (*(code *)PTR__objc_release_004410a0)(local_98);
              (*(code *)PTR__objc_release_004410a0)(local_120);
              if (lVar15 == 0) {
                local_c8 = (cfstringStruct *)0x0;
                pcVar8 = local_a8;
                goto LAB_00037fcc;
              }
              local_c8 = (cfstringStruct *)(*(code *)PTR__objc_retain_004410a8)(lVar15);
              pcVar19 = local_c8;
              pcVar7 = local_a0;
            }
            (*(code *)PTR__objc_release_004410a0)(pcVar7);
            pcVar8 = local_a8;
            local_a0 = pcVar19;
          }
LAB_00037fcc:
          local_158 = pcVar8;
          uVar6 = __RemoteInstallCoordinationServiceForDevice(local_e8);
          local_a8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar6);
          pcVar7 = (cfstringStruct *)(*(code *)PTR__objc_retain_004410a8)(local_158);
          (*(code *)PTR__objc_release_004410a0)(pcVar8);
          if (local_a8 == (cfstringStruct *)0x0) {
            bVar1 = true;
            uVar6 = 0;
            pdVar17 = (dispatch_semaphore_t)0x0;
            local_a8 = (cfstringStruct *)0x0;
            lVar13 = local_e8;
            goto LAB_00038539;
          }
          iVar5 = _pipe((int)&local_90);
          if (iVar5 == 0) {
            local_f8 = local_90;
            uStack_f0 = 0;
            pdVar17 = (dispatch_semaphore_t)
                      _xpc_remote_connection_create_with_remote_service(local_a8,local_138,0);
            if (local_98 == 0) {
              pdVar20 = (dispatch_queue_t)0x0;
            }
            else {
              iVar5 = ___isPlatformVersionAtLeast(1,10,0xf,0);
              if (iVar5 == 0) {
                uVar6 = __CreateError("IXRemotePerformInstallationAsync",0x290,
                                      &cf_IXRemoteErrorDomain,1,0,0,
                                      &cf_Notsupportedonhostsrunning<10_15);
                pcVar19 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar6);
                goto LAB_00038084;
              }
              uVar6 = _dispatch_queue_attr_make_with_autorelease_frequency(0,1);
              pdVar12 = (dispatch_queue_attr_t)_objc_retainAutoreleasedReturnValue(uVar6);
              pdVar20 = _dispatch_queue_create("com.apple.IXRemoteStashingQueue",pdVar12);
              (*(code *)PTR__objc_release_004410a0)(pdVar12);
              puVar3 = PTR__objc_retain_004410a8;
              local_390 = PTR___NSConcreteStackBlock_004412a8;
              local_388 = 0xc2000000;
              local_380 = ___IXRemotePerformInstallationAsync_block_invoke_31;
              local_378 = &___block_descriptor_56_e8_32s40s48s_e5_v8__0l;
              local_370 = (*(code *)PTR__objc_retain_004410a8)(local_b8);
              local_368 = (*(code *)puVar3)(local_c0);
              local_360 = (*(code *)puVar3)(local_98);
              _dispatch_async(pdVar20,&local_390);
              (*(code *)PTR__objc_release_004410a0)(local_360);
              (*(code *)PTR__objc_release_004410a0)(local_368);
              (*(code *)PTR__objc_release_004410a0)(local_370);
            }
            puVar3 = PTR__objc_retain_004410a8;
            local_290 = PTR___NSConcreteStackBlock_004412a8;
            local_288 = 0xc2000000;
            local_280 = ___IXRemotePerformInstallationAsync_block_invoke_35;
            local_278 = &
                        ___block_descriptor_72_e8_32s40s48s56s64bs_e43_v24__0__IXRemoteInstallResult_8__NSError_16l
            ;
            local_270 = (dispatch_semaphore_t)(*(code *)PTR__objc_retain_004410a8)(local_98);
            local_128 = local_270;
            uVar6 = (*(code *)puVar3)(pdVar20);
            local_268 = uVar6;
            local_260 = (*(code *)puVar3)(local_c0);
            local_110 = local_260;
            local_250 = (*(code *)puVar3)(local_e0);
            local_120 = local_250;
            local_258 = (*(code *)puVar3)(local_e8);
            local_d0 = local_258;
            local_c0 = (dispatch_semaphore_t)(*(code *)puVar3)(pdVar17);
            local_98 = (*(code *)puVar3)(local_100);
            local_d8 = (undefined8 *)(*(code *)puVar3)(local_140);
            uVar9 = (*(code *)puVar3)(&local_290);
            local_1c0 = &local_1c8;
            local_1c8 = 0;
            local_1b8 = 0x2020000000;
            local_1b0 = (code *)((ulong)local_1b0 & 0xffffffffffffff00);
            local_88._8_8_ = 0xc2000000;
            local_88._0_8_ = PTR___NSConcreteStackBlock_004412a8;
            local_78 = ____IXHandleConnectionForInstallMessagesFromRemoteService_block_invoke;
            local_70 = &
                       ___block_descriptor_72_e8_32s40s48bs56bs64r_e33_v16__0__NSObject<OS_xpc_object>_8l
            ;
            local_48 = local_1c0;
            local_98 = (*(code *)puVar3)(local_98);
            local_68 = local_98;
            puVar21 = (undefined8 *)(*(code *)puVar3)(uVar9);
            local_58 = puVar21;
            local_d8 = (undefined8 *)(*(code *)puVar3)(local_d8);
            local_50 = local_d8;
            local_c0 = (dispatch_semaphore_t)(*(code *)puVar3)(local_c0);
            local_60 = local_c0;
            _xpc_remote_connection_set_event_handler(local_c0,local_88);
            (*(code *)PTR__objc_release_004410a0)(local_60);
            (*(code *)PTR__objc_release_004410a0)(local_50);
            (*(code *)PTR__objc_release_004410a0)(local_58);
            (*(code *)PTR__objc_release_004410a0)(local_68);
            __Block_object_dispose(&local_1c8,8);
            (*(code *)PTR__objc_release_004410a0)(puVar21);
            (*(code *)PTR__objc_release_004410a0)(local_d8);
            (*(code *)PTR__objc_release_004410a0)(local_98);
            (*(code *)PTR__objc_release_004410a0)(local_c0);
            (*(code *)PTR__objc_release_004410a0)(local_258);
            (*(code *)PTR__objc_release_004410a0)(local_250);
            (*(code *)PTR__objc_release_004410a0)(local_260);
            (*(code *)PTR__objc_release_004410a0)(local_268);
            (*(code *)PTR__objc_release_004410a0)(local_270);
            pdVar17 = local_c0;
            _xpc_remote_connection_activate();
            pdVar20 = _dispatch_get_global_queue(0,0);
            local_d8 = (undefined8 *)_objc_retainAutoreleasedReturnValue(pdVar20);
            puVar3 = PTR__objc_retain_004410a8;
            local_248 = PTR___NSConcreteStackBlock_004412a8;
            local_240 = 0xc2000000;
            local_238 = ___IXRemotePerformInstallationAsync_block_invoke_39;
            local_230 = &___block_descriptor_96_e8_32s40s48s56s64s72s80bs_e5_v8__0l;
            local_228 = (cfstringStruct *)(*(code *)PTR__objc_retain_004410a8)(local_a0);
            local_a0 = local_228;
            local_220 = (*(code *)puVar3)(local_110);
            local_1f0 = CONCAT44((undefined4)local_f8,local_f8._4_4_);
            pdVar17 = (dispatch_semaphore_t)(*(code *)puVar3)(pdVar17);
            local_218 = pdVar17;
            local_210 = (*(code *)puVar3)(local_98);
            local_1f8 = (*(code *)puVar3)(local_120);
            local_208 = (*(code *)puVar3)(local_d0);
            local_200 = (*(code *)puVar3)(local_128);
            puVar21 = local_d8;
            local_98 = local_200;
            _IXDispatchAsyncWithAutoreleasePool(local_d8,&local_248);
            (*(code *)PTR__objc_release_004410a0)(puVar21);
            (*(code *)PTR__objc_release_004410a0)(local_200);
            (*(code *)PTR__objc_release_004410a0)(local_208);
            (*(code *)PTR__objc_release_004410a0)(local_1f8);
            (*(code *)PTR__objc_release_004410a0)(local_210);
            (*(code *)PTR__objc_release_004410a0)(local_218);
            (*(code *)PTR__objc_release_004410a0)(local_220);
            bVar1 = false;
            pcVar8 = local_228;
          }
          else {
            piVar18 = ___error();
            iVar5 = *piVar18;
            pcVar23 = _strerror(iVar5);
            uVar6 = __CreateError("IXRemotePerformInstallationAsync",0x27f,&cf_IXRemoteErrorDomain,5
                                  ,0,0,&cf_Failedtocreateapipe___s__d_,pcVar23,iVar5);
            pcVar19 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar6);
            pdVar17 = (dispatch_semaphore_t)0x0;
LAB_00038084:
            uVar6 = 0;
            bVar1 = true;
            pcVar8 = pcVar7;
            pcVar7 = pcVar19;
          }
        }
        (*(code *)PTR__objc_release_004410a0)(pcVar8);
        lVar13 = local_e8;
        goto LAB_00038539;
      }
    }
  }
  bVar1 = true;
  uVar6 = 0;
  local_98 = 0;
  local_a0 = local_b8;
  local_c8 = (cfstringStruct *)0x0;
  pdVar17 = (dispatch_semaphore_t)0x0;
  local_a8 = (cfstringStruct *)0x0;
LAB_00038539:
  puVar3 = PTR__objc_retain_004410a8;
  if ((bVar1) && (pcVar7 != (cfstringStruct *)0x0)) {
    local_358 = PTR___NSConcreteStackBlock_004412a8;
    local_350 = 0xc2000000;
    local_348 = ___IXRemotePerformInstallationAsync_block_invoke_47;
    local_340 = &___block_descriptor_64_e8_32s40s48s56bs_e5_v8__0l;
    local_c0 = pdVar17;
    local_320 = (*(code *)PTR__objc_retain_004410a8)(local_e0);
    local_338 = (*(code *)puVar3)(lVar13);
    local_330 = (*(code *)puVar3)(local_98);
    local_328 = (*(code *)puVar3)(pcVar7);
    pdVar17 = local_c0;
    _dispatch_async(local_100,&local_358);
    (*(code *)PTR__objc_release_004410a0)(local_328);
    (*(code *)PTR__objc_release_004410a0)(local_330);
    (*(code *)PTR__objc_release_004410a0)(local_338);
    (*(code *)PTR__objc_release_004410a0)(local_320);
  }
  (*(code *)PTR__objc_release_004410a0)(local_e0);
  (*(code *)PTR__objc_release_004410a0)(local_2d8);
  (*(code *)PTR__objc_release_004410a0)(local_2e0);
  (*(code *)PTR__objc_release_004410a0)(local_2e8);
  (*(code *)PTR__objc_release_004410a0)(local_2f0);
  (*(code *)PTR__objc_release_004410a0)(local_2f8);
  __Block_object_dispose(&local_1e8,8);
  (*(code *)PTR__objc_release_004410a0)(lVar13);
  (*(code *)PTR__objc_release_004410a0)(local_138);
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)PTR__objc_release_004410a0)(local_98);
  (*(code *)PTR__objc_release_004410a0)(local_a0);
  (*(code *)PTR__objc_release_004410a0)(local_c8);
  (*(code *)PTR__objc_release_004410a0)(pdVar17);
  (*(code *)PTR__objc_release_004410a0)(local_a8);
  (*(code *)PTR__objc_release_004410a0)(pcVar7);
  (*(code *)PTR__objc_release_004410a0)(local_150);
  (*(code *)PTR__objc_release_004410a0)(local_140);
  (*(code *)PTR__objc_release_004410a0)(local_100);
  (*(code *)PTR__objc_release_004410a0)(local_148);
  (*(code *)PTR__objc_release_004410a0)(local_b8);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

