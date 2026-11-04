// rea decompile_all
// name: PersonalizedImage::initializeImageProperties:
// address: 0x123c56
// body: available
// range: 0x123c56-0x12436c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

int PersonalizedImage::initializeImageProperties_(ID param_1,SEL param_2,ID *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  int iVar9;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  code *local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  ID *local_50;
  undefined8 local_48;
  long local_40;
  ID local_38;
  
  local_78 = &local_80;
  local_80 = 0;
  local_70 = 0x3052000000;
  local_68 = ___Block_byref_object_copy__956;
  local_60 = ___Block_byref_object_dispose__957;
  local_58 = 0;
  local_a8 = &local_b0;
  local_b0 = 0;
  local_a0 = 0x3052000000;
  local_98 = ___Block_byref_object_copy__956;
  local_90 = ___Block_byref_object_dispose__957;
  local_88 = 0;
  local_d8 = &local_e0;
  local_e0 = 0;
  local_d0 = 0x3052000000;
  local_c8 = ___Block_byref_object_copy__956;
  local_c0 = ___Block_byref_object_dispose__957;
  local_b8 = 0;
  local_48 = 0;
  local_50 = param_3;
  local_38 = param_1;
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"userProvidedBundleMountPathURL");
  if (lVar3 == 0) {
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"mountedVolumeEntry");
    if (lVar3 != 0) {
      local_40 = 0;
      goto LAB_00123d54;
    }
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"bundlePathURL");
    uVar4 = _AMDeviceMountImageOnHost(uVar4,0);
    (*(code *)PTR__objc_msgSend_00441098)(local_38,"setMountedVolumeEntry:",uVar4);
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"mountedVolumeEntry");
    if (lVar3 == 0) {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"bundlePathURL");
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"path");
      local_48 = _createAndLogError("-[PersonalizedImage initializeImageProperties:]",0x376,
                                    0xe8000110,1,0,&cf_Failedtomount__onhost_,uVar4);
    }
    else {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"mountedVolumeEntry");
      local_40 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"objectForKey:",&cf_mount_point);
      if (local_40 != 0) {
        (*(code *)PTR__objc_retain_004410a8)();
        goto LAB_00123d54;
      }
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"mountedVolumeEntry");
      local_48 = _createAndLogError("-[PersonalizedImage initializeImageProperties:]",0x37d,
                                    0xe8000110,1,0,&cf_Invalidvolumeentry___,uVar4);
    }
    iVar9 = 0xe8000110;
    local_40 = 0;
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"userProvidedBundleMountPathURL");
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"path");
    local_40 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"copy");
LAB_00123d54:
    uVar4 = _objc_alloc(&_OBJC_CLASS___NSURL);
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                      (local_40,"stringByAppendingPathComponent:",&cf_Restore_BuildManifest_plist);
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"initFileURLWithPath:",uVar5);
    if (lVar3 == 0) {
      iVar9 = 0xe80000f1;
      local_48 = _createAndLogError("-[PersonalizedImage initializeImageProperties:]",0x389,
                                    0xe80000f1,1,0,&cf_FailedtocreateURL_);
    }
    else {
      iVar2 = ___isPlatformVersionAtLeast(1,10,0xd,0);
      if (iVar2 == 0) {
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar3,"path");
        lVar3 = (*(code *)PTR__objc_msgSend_00441098)
                          (&_OBJC_CLASS___NSDictionary,"dictionaryWithContentsOfFile:",uVar4);
      }
      else {
        lVar3 = (*(code *)PTR__objc_msgSend_00441098)
                          (&_OBJC_CLASS___NSDictionary,"dictionaryWithContentsOfURL:error:",lVar3,
                           &local_48);
      }
      if (lVar3 == 0) {
        iVar9 = 0xe8000114;
        local_48 = _createAndLogError("-[PersonalizedImage initializeImageProperties:]",0x394,
                                      0xe8000114,1,local_48,&cf_Failedtoloadbuildmanifest_);
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar4 = _md_log_log;
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                          (lVar3,"objectForKeyedSubscript:",&cf_ManifestVersion);
        __os_log_internal(0,uVar4,1,"Manifest Version: %@",uVar5);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar4 = _md_log_log;
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                          (lVar3,"objectForKeyedSubscript:",&cf_ProductVersion);
        __os_log_internal(0,uVar4,1,"Product Version: %@",uVar5);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar4 = _md_log_log;
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                          (lVar3,"objectForKeyedSubscript:",&cf_ProductBuildVersion);
        __os_log_internal(0,uVar4,1,"Product Build Version: %@",uVar5);
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                          (lVar3,"objectForKeyedSubscript:",&cf_BuildIdentities);
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSArray,"class");
        cVar1 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"isKindOfClass:",uVar5);
        if (cVar1 == '\0') {
          iVar9 = 0xe800010f;
          local_48 = _createAndLogError("-[PersonalizedImage initializeImageProperties:]",0x3a1,
                                        0xe800010f,1,0,&cf_Missingkey_BuildIdentities__);
        }
        else {
          (*(code *)PTR__objc_msgSend_00441098)(uVar4,"enumerateObjectsUsingBlock:");
          if (local_78[5] != 0) {
            uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                              (&cf_Restore,"stringByAppendingPathComponent:");
            local_78[5] = uVar4;
            uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                              (local_40,"stringByAppendingPathComponent:",uVar4);
            uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                              (&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar4);
            (*(code *)PTR__objc_msgSend_00441098)(local_38,"setImagePathURL:",uVar4);
            iVar9 = 0;
            if (local_a8[5] != 0) {
              uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                (&cf_Restore,"stringByAppendingPathComponent:");
              local_a8[5] = uVar4;
              uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                (local_40,"stringByAppendingPathComponent:",uVar4);
              uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                                (&_OBJC_CLASS___NSURL,"fileURLWithPath:",uVar4);
              (*(code *)PTR__objc_msgSend_00441098)(local_38,"setTrustCacheURL:",uVar4);
              iVar9 = 0;
            }
            goto LAB_0012422d;
          }
          uVar4 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"imageVariant");
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"boardID");
          uVar6 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"chipID");
          uVar7 = (*(code *)PTR__objc_msgSend_00441098)(local_38,"securityDomain");
          iVar9 = 0xe800010f;
          local_48 = _createAndLogError("-[PersonalizedImage initializeImageProperties:]",0x427,
                                        0xe800010f,1,0,
                                        &
                                        cf_Failedtofindimageforvariant_identity__variant____boardID____chipID____securityDomain_____
                                        ,uVar4,uVar5,uVar6,uVar7);
        }
      }
    }
  }
  if (local_50 != (ID *)0x0) {
    IVar8 = (*(code *)PTR__objc_retain_004410a8)(local_48);
    *local_50 = IVar8;
  }
LAB_0012422d:
  (*(code *)PTR__objc_release_004410a0)(local_48);
  (*(code *)PTR__objc_release_004410a0)(local_40);
  __Block_object_dispose(&local_e0,8);
  __Block_object_dispose(&local_b0,8);
  __Block_object_dispose(&local_80,8);
  return iVar9;
}

