// rea decompile_all
// name: _handleBootObjectRequest
// address: 0xdb269
// body: available
// range: 0xdb269-0xdbe22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdbe1e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleBootObjectRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*, bool, int,
   __CFError**) */

ulong _handleBootObjectRequest
                (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,bool param_3,
                int param_4,__CFError **param_5)

{
  pthread_mutex_t *ppVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  __CFError *p_Var5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 in_register_0000000c;
  cfstringStruct *pcVar14;
  cfstringStruct *pcVar15;
  cfstringStruct *pcVar16;
  bool bVar17;
  cfstringStruct local_4a8;
  __CFURL *local_488;
  __CFString *local_480;
  long local_478;
  long local_470;
  long local_468;
  long local_460;
  ulong local_458;
  long local_450;
  cfstringStruct *local_448;
  cfstringStruct local_43a [32];
  long local_38;
  
  pcVar14 = (cfstringStruct *)CONCAT44(in_register_0000000c,param_4);
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar13 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar13 + 0x10);
  local_488 = (__CFURL *)0x0;
  local_480 = (__CFString *)0x0;
  local_4a8.field0_0x0 = 0;
  local_468 = 0;
  local_4a8.field2_0x10 = (undefined *)param_5;
  ___bzero((undefined1 *)((long)&local_43a[0].field0_0x0 + 2),0x400);
  local_43a[0].field0_0x0._1_1_ = '\0';
  local_43a[0].field0_0x0._0_1_ = '\0';
  ppVar1 = (pthread_mutex_t *)(lVar11 + 0x158);
  bVar2 = true;
  _pthread_mutex_lock(ppVar1);
  local_458 = 1;
  pcVar16 = &cf_imagenamenotspecifiedforsourcebootobjectrequest;
  if ((param_2 == (__CFDictionary *)0x0) ||
     (local_4a8.field3_0x18 = _CFDictionaryGetValue(param_2,&cf_ImageName),
     (cfstringStruct *)local_4a8.field3_0x18 == (cfstringStruct *)0x0)) {
LAB_000db3a2:
    local_478 = 0;
    lVar13 = 0;
    local_448 = (cfstringStruct *)0x0;
    local_450 = 0;
    local_460 = 0;
    local_470 = 0;
  }
  else {
    pcVar14 = local_43a;
    iVar4 = _copyBundleURLAndVariantForBootObjectRequest
                      (*(__AMAuthInstall **)(lVar11 + 0x150),*(__CFDictionary **)(lVar13 + 0x18),
                       param_2,(bool *)pcVar14,&local_488,&local_480,
                       (__CFError **)local_4a8.field2_0x10);
    if (iVar4 != 0) {
      pcVar16 = &cf_couldn_tfindsourcebundlepathorvariantforsourcebootobjectrequest;
      goto LAB_000db3a2;
    }
    pcVar14 = &local_4a8;
    uVar6 = _AMAuthInstallBundleCopyBuildIdentityForVariant
                      (*(undefined8 *)(lVar11 + 0x150),local_488,local_480);
    if ((int)uVar6 != 0) {
      pcVar16 = &cf_failedtocopybuildidentityforsourcebootobjectrequest;
      local_458 = uVar6;
      goto LAB_000db3a2;
    }
    lVar7 = _CFStringCompare(local_4a8.field3_0x18,&cf___GlobalManifest__,0);
    if (lVar7 == 0) {
      pcVar16 = (cfstringStruct *)_CFDictionaryGetValue(param_2,&cf_GlobalManifestPrefix);
      if (pcVar16 == (cfstringStruct *)0x0) {
        local_448 = &cf_apticket;
      }
      else {
        lVar7 = _CFGetTypeID(pcVar16);
        lVar8 = _CFStringGetTypeID();
        local_448 = &cf_apticket;
        if (lVar7 == lVar8) {
          local_448 = pcVar16;
        }
      }
      pcVar16 = (cfstringStruct *)_CFDictionaryGetValue(param_2,&cf_GlobalManifestSuffix);
      if (pcVar16 == (cfstringStruct *)0x0) {
        pcVar15 = &cf___;
      }
      else {
        lVar7 = _CFGetTypeID(pcVar16);
        lVar8 = _CFStringGetTypeID();
        pcVar15 = &cf___;
        if (lVar7 == lVar8) {
          pcVar15 = pcVar16;
        }
      }
      local_478 = _AMRestoreModeDeviceCopyBoardID(lVar11);
      local_470 = _AMRestoreModeDeviceCopyChipID(lVar11);
      if (*(long *)(lVar11 + 0x100) == 0) {
        local_460 = 0;
      }
      else {
        local_460 = _AMRestoreCopyNormalizedBoardConfig();
      }
      pcVar16 = &cf_failedtocopydeviceidentityorvariantnameforglobalmanifestrequest;
      if ((((local_478 != 0) && (local_470 != 0)) && (local_460 != 0)) &&
         (local_480 != (__CFString *)0x0)) {
        local_4a8.field1_0x8 = local_4a8.field1_0x8 & 0xffffffff00000000;
        _CFNumberGetValue(local_478,9);
        local_458 = CONCAT44(local_458._4_4_,(undefined4)local_4a8.field1_0x8);
        local_4a8.field1_0x8 = local_4a8.field1_0x8 & 0xffffffff00000000;
        _CFNumberGetValue(local_470,9);
        uVar6 = local_4a8.field1_0x8 & 0xffffffff;
        uVar9 = _CFStringGetLength(local_460);
        uVar12 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        pcVar14 = (cfstringStruct *)PTR__kCFAllocatorDefault_004410e8;
        local_450 = _CFStringCreateMutableCopy(uVar12,uVar9,local_460);
        if (local_450 == 0) {
          local_458 = 0x12;
          pcVar16 = &cf_failedtoallocatememoryforlowercaseHardwareModel;
          goto LAB_000db97c;
        }
        uVar9 = _CFLocaleGetSystem();
        _CFStringLowercase(local_450,uVar9);
        local_448 = (cfstringStruct *)
                    _CFStringCreateWithFormat
                              (uVar12,0,&cf_Firmware_Manifests_restore____________im4m,local_480,
                               local_448,local_450,pcVar15);
        pcVar14 = (cfstringStruct *)0x0;
        local_468 = _CFURLCreateWithFileSystemPathRelativeToBase(uVar12,local_448,0,0,local_488);
        iVar4 = _AMSupportFileURLExists
                          (local_468,(undefined1 *)((long)&local_43a[0].field0_0x0 + 1));
        if ((iVar4 != 0) || (local_43a[0].field0_0x0._1_1_ == '\0')) {
          _AMRLog(4,&cf_globalmanifestwithhardwaremodeldoesn_texist_fallingbacktoboardID_chipIDpath)
          ;
          _AMSupportSafeRelease(local_448);
          _AMSupportSafeRelease(local_468);
          local_448 = (cfstringStruct *)
                      _CFStringCreateWithFormat
                                (uVar12,0,&cf_Firmware_Manifests_restore____apticket__X__X_im4m,
                                 local_480,local_458 & 0xffffffff,uVar6);
          pcVar14 = (cfstringStruct *)0x0;
          local_468 = _CFURLCreateWithFileSystemPathRelativeToBase(uVar12,local_448,0,0,local_488);
        }
        lVar11 = _AMAuthInstallSupportGetValueForKeyPathInDict
                           (uVar12,local_4a8.field0_0x0,&cf_Info_VariantSupportsGlobalSigning);
        if (lVar11 == 0) {
          pcVar16 = &
                    cf_VariantSupportsGlobalSigningisn_tset_willtoleratefailuretoobtainglobalmanifest
          ;
LAB_000dbdd2:
          bVar17 = true;
          _AMRLog(6,pcVar16);
        }
        else {
          cVar3 = _AMSupportCFDictionaryGetBoolean(param_2,&cf_GlobalManifestOptional,0);
          if (cVar3 != '\0') {
            pcVar16 = &
                      cf_RESTORED_MSG_ARGS_GLOBAL_MANIFEST_OPTIONALisset_willtoleratefailuretoobtainglobalmanifest
            ;
            goto LAB_000dbdd2;
          }
          bVar17 = false;
        }
        goto LAB_000dba24;
      }
LAB_000db97c:
      lVar13 = 0;
      local_448 = (cfstringStruct *)0x0;
      local_450 = 0;
    }
    else {
      lVar7 = _CFStringCompare(local_4a8.field3_0x18,&cf___RestoreVersion__,0);
      if (lVar7 == 0) {
        pcVar14 = (cfstringStruct *)0x0;
        local_468 = _CFURLCreateWithFileSystemPathRelativeToBase
                              (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                               &cf_RestoreVersion_plist,0,0,local_488);
        cVar3 = _restored_is_factory_variant(local_480);
LAB_000db672:
        bVar17 = cVar3 != '\0';
      }
      else {
        lVar7 = _CFStringCompare(local_4a8.field3_0x18,&cf___SystemVersion__,0);
        if (lVar7 == 0) {
          pcVar14 = (cfstringStruct *)0x0;
          local_468 = _CFURLCreateWithFileSystemPathRelativeToBase
                                (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                                 &cf_SystemVersion_plist,0,0,local_488);
          cVar3 = _restored_is_factory_variant(local_480);
          goto LAB_000db672;
        }
        if (param_3) {
          local_4a8.field1_0x8 = 0;
          uVar6 = _AMRAuthInstallCopyPersonalizedBundleURL(*(undefined8 *)(lVar13 + 0x18));
          pcVar14 = (cfstringStruct *)local_4a8.field1_0x8;
          if ((cfstringStruct *)local_4a8.field1_0x8 == (cfstringStruct *)0x0 || (int)uVar6 != 0) {
            pcVar16 = &cf_failedtocopypersonalizedbundleURL;
            local_458 = uVar6;
            goto LAB_000db3a2;
          }
          _AMAuthInstallBundleCopyURLForKey
                    (*(undefined8 *)(lVar11 + 0x150),local_4a8.field3_0x18,local_480,
                     local_4a8.field1_0x8,&local_468);
          _CFRelease(local_4a8.field1_0x8);
        }
        else {
          puVar10 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
          if ((char)local_43a[0].field0_0x0 != '\0') {
            puVar10 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
          }
          pcVar14 = (cfstringStruct *)local_4a8.field3_0x18;
          local_468 = _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity
                                (*(undefined8 *)(lVar11 + 0x150),local_488,local_4a8.field0_0x0,
                                 local_4a8.field3_0x18,*puVar10,local_4a8.field2_0x10);
        }
        bVar17 = false;
      }
      local_448 = (cfstringStruct *)0x0;
      local_450 = 0;
      local_460 = 0;
      local_470 = 0;
      local_478 = 0;
LAB_000dba24:
      _pthread_mutex_unlock(ppVar1);
      bVar2 = false;
      if (((local_468 == 0) ||
          (_AMSupportFileURLExists(local_468,(undefined1 *)((long)&local_43a[0].field0_0x0 + 1)),
          local_468 == 0)) || ((param_4 < 3 && (local_43a[0].field0_0x0._1_1_ == '\0')))) {
        lVar11 = _CFStringCompare(local_4a8.field3_0x18,&cf_BaseSystem,0);
        if (lVar11 == 0) {
          _AMRLog(6,&cf_UsinghardcodedpathforBaseSytem_dmg);
          pcVar14 = (cfstringStruct *)0x0;
          local_468 = _CFURLCreateCopyAppendingPathComponent
                                (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_488,
                                 &cf_BaseSystem_dmg);
          bVar17 = true;
        }
        if (local_468 != 0) goto LAB_000dbad4;
        local_458 = 0x11;
        pcVar16 = &cf_failedtogetpathforobjectinbundle;
      }
      else {
LAB_000dbad4:
        cVar3 = _CFURLGetFileSystemRepresentation
                          (local_468,1,(undefined1 *)((long)&local_43a[0].field0_0x0 + 2),0x400);
        pcVar14 = (cfstringStruct *)((long)&MACH_HEADER.ncmds + 1);
        local_458 = 0x11;
        if (cVar3 != '\0') {
          lVar11 = _CFStringCompare(local_4a8.field3_0x18,&cf_BaseSystem,0);
          if (lVar11 == 0) {
            lVar11 = _CFDictionaryGetValue(*(undefined8 *)(lVar13 + 0x18),&cf_EnableBaseSystemRoots)
            ;
            if ((char)local_43a[0].field0_0x0 == '\x01') {
              lVar7 = _CFDictionaryGetValue
                                (*(undefined8 *)(lVar13 + 0x18),&cf_BaseSystemOverlayRootsToInstall)
              ;
              uVar12 = _CFDictionaryGetValue
                                 (*(undefined8 *)(lVar13 + 0x18),&cf_PersonalizedRestoreBundlePath);
              _AMRLog(6,&cf_CheckingBaseSystemoverlayrootsexistence);
            }
            else {
              lVar7 = _CFDictionaryGetValue
                                (*(undefined8 *)(lVar13 + 0x18),
                                 &cf_RecoveryOSBaseSystemOverlayRootsToInstall);
              uVar12 = _CFDictionaryGetValue
                                 (*(undefined8 *)(lVar13 + 0x18),
                                  &cf_PersonalizedRecoveryOSBundlePath);
              _AMRLog(6,&cf_CheckingRecoveryOSBaseSystemoverlayrootsexistence);
            }
            if (((lVar11 == 0) ||
                (pcVar14 = (cfstringStruct *)
                           CONCAT71((int7)((ulong)pcVar14 >> 8),
                                    lVar7 != 0 && lVar11 == *(long *)PTR__kCFBooleanTrue_00441110),
                lVar7 == 0 || lVar11 != *(long *)PTR__kCFBooleanTrue_00441110)) ||
               (lVar13 = _CFArrayGetCount(lVar7), lVar13 < 1)) goto LAB_000dbb1c;
            lVar13 = _CFURLCopyFileSystemPath(local_468,0);
            if (lVar13 == 0) {
              pcVar16 = &cf_failedtogetCFStringRefrepresentationforsourcebootobject;
              goto LAB_000dbbbc;
            }
            pcVar14 = &cf_macOSBaseSystem;
            lVar11 = _AMRestoreInsertRootsToDmgAndCreatePath(lVar13,lVar7,uVar12);
            _CFRelease(lVar13);
            if (lVar11 == 0) {
              pcVar16 = &
                        cf_FailedinAMRestoreInsertRootsToDmgAndCreatePathtocreatemodifiedBaseSystemfile_thismightbeduetobasesystemdmgtypethatisn_tsupportedinMacOSversionbeforeJazzG_considerupdatingyourOStogetbasesystemrootssupport__
              ;
              goto LAB_000dbbbc;
            }
            pcVar14 = (cfstringStruct *)0x8000100;
            cVar3 = _CFStringGetCString(lVar11,(undefined1 *)((long)&local_43a[0].field0_0x0 + 2),
                                        0x400);
            _CFRelease(lVar11);
            if (cVar3 != '\0') goto LAB_000dbb1c;
            pcVar16 = &cf_failedtoconvertupdateBaseSystemPathtobytearray_;
            local_458 = 0x12;
            lVar13 = 0;
            bVar17 = false;
          }
          else {
LAB_000dbb1c:
            if (bVar17) {
              local_43a[0].field0_0x0._1_1_ = '\0';
              iVar4 = _AMSupportFileURLExists(local_468);
              if ((iVar4 == 0) && (local_43a[0].field0_0x0._1_1_ != '\0')) goto LAB_000dbb4c;
              _AMRLog(6,&cf_sourcebootobjectdoesn_texist_skipping__s,
                      (undefined1 *)((long)&local_43a[0].field0_0x0 + 2));
              pcVar14 = (cfstringStruct *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
              lVar13 = _CFDictionaryCreateMutable
                                 (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                  PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
              if (lVar13 == 0) {
                local_458 = 0x12;
                pcVar16 = &
                          cf_failedtoallocatememoryforreplyinfallbackpathwhenhandlingbootobjectrequest
                ;
                goto LAB_000dbbbc;
              }
              _CFDictionarySetValue
                        (lVar13,&cf_FileDataDone,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
              iVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar13);
              if (iVar4 != 0) {
                local_458 = 9;
                pcVar16 = &cf_failedtosenddoneindicationinfallbackpathwhenhandlingbootobjectrequest;
                goto LAB_000db3d0;
              }
            }
            else {
LAB_000dbb4c:
              _AMRLog(6,&cf_sendingsourcebootobjectfrompath__s,
                      (undefined1 *)((long)&local_43a[0].field0_0x0 + 2));
              local_458 = _sendLargeFile(param_1,0x4e,(char *)((long)&local_43a[0].field0_0x0 + 2));
              lVar13 = 0;
              if ((int)local_458 != 0) {
                pcVar16 = &cf_failedtosendsourcebootobjectfiletodevice;
                goto LAB_000db3d0;
              }
            }
            bVar17 = true;
            local_458 = 0;
            pcVar16 = (cfstringStruct *)0x0;
          }
          if (bVar17) {
            pcVar16 = (cfstringStruct *)0x0;
            goto LAB_000db3e6;
          }
          goto LAB_000db3d0;
        }
        pcVar16 = &cf_failedtogetfilesystemrepresentationforsourcebootobject;
      }
LAB_000dbbbc:
      lVar13 = 0;
    }
  }
LAB_000db3d0:
  _AMRLog(3,&cf___,pcVar16);
LAB_000db3e6:
  if ((((__CFError **)local_4a8.field2_0x10 != (__CFError **)0x0) && ((int)local_458 != 0)) &&
     (*(__CFError **)local_4a8.field2_0x10 == (__CFError *)0x0)) {
    p_Var5 = (__CFError *)
             _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)(long)(int)local_458,(long)pcVar16,(__CFString *)0x0,
                        (__CFError *)pcVar14);
    *(__CFError **)local_4a8.field2_0x10 = p_Var5;
  }
  _AMSupportSafeRelease(local_488);
  _AMSupportSafeRelease(local_468);
  _AMSupportSafeRelease(local_4a8.field0_0x0);
  _AMSupportSafeRelease(local_478);
  _AMSupportSafeRelease(local_470);
  _AMSupportSafeRelease(local_460);
  _AMSupportSafeRelease(local_450);
  _AMSupportSafeRelease(local_480);
  _AMSupportSafeRelease(local_448);
  _AMSupportSafeRelease(lVar13);
  if (bVar2) {
    _pthread_mutex_unlock(ppVar1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_458;
}

