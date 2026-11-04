// rea decompile_all
// name: _AMDeviceSecureInstallApplicationBundle
// address: 0x148ab5
// body: available
// range: 0x148ab5-0x14add8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14aa50 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMDeviceSecureInstallApplicationBundle
                (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  dispatch_object_t group;
  ulong uVar1;
  char *pcVar2;
  dispatch_queue_t pdVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined7 uVar15;
  long lVar11;
  char *pcVar12;
  long lVar13;
  int *piVar14;
  void *pvVar16;
  cfstringStruct *pcVar17;
  undefined8 uVar18;
  char cVar19;
  bool bVar20;
  undefined1 local_a20 [4];
  ushort local_a1c;
  undefined *local_990;
  undefined8 local_988;
  code *local_980;
  undefined *local_978;
  undefined8 *local_970;
  char *local_968;
  char *local_960;
  char *local_958;
  undefined8 local_950;
  undefined8 *local_948;
  undefined8 local_940;
  undefined4 local_938;
  undefined8 local_930;
  undefined8 *local_928;
  undefined8 local_920;
  undefined4 local_918;
  dispatch_object_t local_910;
  long local_908;
  undefined8 local_900;
  long local_8f8;
  ulong local_8f0;
  long local_8e8;
  long local_8e0;
  long local_8d8;
  long local_8d0;
  long local_8c8;
  undefined8 local_8c0;
  uint local_8b4;
  char *local_8b0;
  cfstringStruct *local_8a8;
  undefined8 local_8a0;
  long local_898;
  dispatch_queue_t local_890;
  char *local_888;
  long local_880;
  char *local_878;
  ulong local_870;
  long local_868;
  void *local_860;
  long local_858;
  long local_850;
  char *local_848;
  long local_840;
  cfstringStruct local_838 [32];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_8b4 = 0xe8000007;
  ___bzero(local_438,0x400);
  local_928 = &local_930;
  local_930 = 0;
  local_920 = 0x2000000000;
  local_918 = 0xe8000001;
  local_948 = &local_950;
  local_950 = 0;
  local_940 = 0x2000000000;
  local_938 = 0xe8000001;
  local_910._os_obj = (_os_object_s *)_dispatch_group_create();
  local_890 = _dispatch_get_global_queue(0,0);
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,0,
                    "ENTRY, device: %p appBundleURL: %@ callback: %p context: %p options: %@",
                    param_1,param_2,param_4,param_5,param_3);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,
                      "invalid parameter, device: %p, appBundleURL: %p, options: %p",param_1,param_2
                      ,param_3);
LAB_00149f8d:
    local_870 = 0xe8000007;
    local_8d8 = 0;
    local_8e0 = 0;
    local_868 = 0;
    local_8b0 = (char *)0x0;
LAB_00149030:
    local_848 = (char *)0x0;
    local_850 = 0;
    local_858 = 0;
    local_860 = (void *)0x0;
    local_880 = 0;
    local_898 = 0;
    local_8d0 = 0;
    lVar8 = 0;
    lVar13 = 0;
    lVar11 = 0;
    lVar7 = 0;
    cVar4 = '\0';
    local_878 = (char *)0x0;
    local_8a8 = (void *)0x0;
    local_888 = (char *)0x0;
  }
  else {
    local_8a8 = (cfstringStruct *)_CFDictionaryGetValue(param_3,&cf_PackageType);
    if (local_8a8 == (cfstringStruct *)0x0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"options dictionary missing required value for key: %@",
                        &cf_PackageType);
      goto LAB_00149f8d;
    }
    local_870 = param_5;
    lVar7 = _CFDictionaryCreateMutableCopy(0,0,param_3);
    if (lVar7 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10);
      goto LAB_00149f8d;
    }
    local_900 = param_4;
    _CFDictionaryRemoveValue(lVar7);
    lVar8 = _CFURLCopyFileSystemPath(param_2);
    local_868 = lVar7;
    if (lVar8 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"CFURLCopyFileSystemPath failed");
LAB_0014a045:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10);
      local_870 = 0xe8000007;
      pcVar9 = (char *)0x0;
LAB_00148ecb:
      local_8d8 = 0;
      local_8e0 = 0;
      local_8b0 = pcVar9;
      goto LAB_00149030;
    }
    pcVar9 = (char *)_copyCStringFromCFString(lVar8);
    _CFRelease(lVar8);
    if (pcVar9 == (char *)0x0) goto LAB_0014a045;
    iVar5 = _access(pcVar9,0);
    if (iVar5 != 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar10 = _md_log_log;
      piVar14 = ___error();
      pcVar12 = _strerror(*piVar14);
      __os_log_internal(0,uVar10,0x10,"access failed for %s : %s",pcVar9,pcVar12);
      local_870 = 0xe8000007;
      goto LAB_00148ecb;
    }
    uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_8e0 = _CFDictionaryCreateMutable
                          (uVar10,6,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (local_8e0 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1);
      local_870 = 0xe8000003;
      goto LAB_00148ecb;
    }
    local_8d8 = _copy_string_value_from_device(param_1,&cf_ProductVersion,&local_8b4);
    local_8b0 = pcVar9;
    if (local_8d8 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Unable to determine OS version of %@: 0x%x",
                        *(undefined8 *)(param_1 + 0x20),local_8b4);
      local_8d8 = 0;
LAB_00149004:
      local_870 = (ulong)local_8b4;
      goto LAB_00149030;
    }
    local_908 = param_2;
    lVar8 = _copy_device_product_name_string(param_1,&local_8b4);
    lVar7 = local_8e0;
    if (lVar8 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Unable to determine product name of %@: 0x%x",
                        *(undefined8 *)(param_1 + 0x20),local_8b4);
      goto LAB_00149004;
    }
    _CFDictionarySetValue(local_8e0,&cf_CurrentDeviceVersion,local_8d8);
    local_8d0 = lVar8;
    _CFDictionarySetValue(lVar7,&cf_CurrentProductName,lVar8);
    _CFDictionarySetValue(lVar7,&cf_MinWatchVersion,&cf_2_0);
    _CFDictionarySetValue(lVar7,&cf_MinAppleTVVersion,&cf_9_0);
    _CFDictionarySetValue(lVar7,&cf_MinIPhoneVersion,&cf_7_0);
    cVar4 = _AMDeviceIsAtLeastVersionOnPlatform(param_1,lVar7);
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar7 = local_908;
    local_8f8 = param_1;
    if (cVar4 == '\0') {
      local_888 = (char *)0x0;
      uVar10 = __os_log_internal(0,_md_log_log,0);
      local_890 = (dispatch_queue_t)CONCAT71((int7)((ulong)uVar10 >> 8),1);
      local_8a8 = (void *)0x0;
      local_878 = (char *)0x0;
      local_8c0 = 0;
      uVar10 = 0;
      local_8a0 = 0;
      local_8f0 = 0;
      local_898 = 0;
      local_880 = 0;
      local_850 = 0;
      local_858 = 0;
      local_860 = (void *)0x0;
      local_848 = (char *)0x0;
      local_840 = 0;
      lVar7 = 0;
      lVar13 = 0;
      local_8c8 = 0;
      lVar8 = local_868;
LAB_00149510:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar1 = local_8f0;
      uVar18 = 0x4e;
      if ((char)local_8f0 != '\0') {
        uVar18 = 0x59;
      }
      __os_log_internal(0,_md_log_log,1,
                        "Transferring bundle to the device directly; useSZconduit = %c, _options: %@"
                        ,uVar18,lVar8);
      local_870 = __AMDeviceTransferAndInstall
                            (local_8f8,local_908,uVar1 & 0xff,lVar7,lVar8,uVar10,local_900,local_870
                            );
      cVar4 = (char)local_890;
      cVar19 = (char)local_8a0;
      pcVar9 = local_8b0;
LAB_001495c4:
      pcVar12 = local_888;
      lVar8 = local_8c8;
      if ((cVar19 != '\0') && ((int)local_870 == 0)) {
        local_8b4 = __AMDeviceUpdateOldPackage(local_8f8,local_888,pcVar9,lVar7,1);
        pcVar9 = local_878;
        if (local_8b4 == 0) {
          local_870 = 0;
          lVar8 = local_8c8;
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_870 = 0;
          __os_log_internal(0,_md_log_log,0x10,"_AMDeviceUpdateOldPackage failed: %d",local_8b4);
          if (pcVar12 != (char *)0x0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,1,"*** Removing Shadow Directory at: %s",pcVar12);
            _removefile(pcVar12,(removefile_state_t)0x0,1);
          }
          if (pcVar9 == (char *)0x0) {
            local_878 = (char *)0x0;
            lVar8 = local_8c8;
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            local_870 = 0;
            __os_log_internal(0,_md_log_log,1,"*** Removing Shadow Installed App Info at: %s",
                              pcVar12);
            _removefile(pcVar9,(removefile_state_t)0x0,1);
            lVar8 = local_8c8;
          }
        }
      }
LAB_00149798:
      lVar11 = local_840;
      bVar20 = local_8a8 != (void *)0x0;
      cVar19 = true;
      if ((cVar4 == '\0') || (local_8a8 == (void *)0x0)) {
        cVar4 = (char)local_8c0;
      }
      else {
        _MDMCacheDirectoryManifest(local_8b0);
        cVar19 = true;
        bVar20 = true;
        cVar4 = (char)local_8c0;
      }
      goto LAB_00149066;
    }
    local_8f0 = 0;
    __os_log_internal(0,_md_log_log,0,"Device OS is at least 7.0");
    cVar4 = _CFPreferencesGetAppBooleanValue(&cf_EnableBinaryDiff,&cf_com_apple_MobileDevice,0);
    pcVar17 = &cf_InstallDeltaTypeSparseIPABinary;
    if (cVar4 == '\0') {
      pcVar17 = &cf_InstallDeltaTypeSparseIPAFiles;
    }
    _CFDictionarySetValue(local_868,&cf_InstallDeltaTypeKey,pcVar17);
    lVar8 = local_8e0;
    _CFDictionarySetValue(local_8e0,&cf_MinIPhoneVersion,&cf_8_0);
    cVar4 = _AMDeviceIsAtLeastVersionOnPlatform(param_1,lVar8);
    if (cVar4 != '\0') {
      cVar4 = _CFPreferencesGetAppBooleanValue(&cf_DisableSZConduit,&cf_com_apple_MobileDevice,0);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      if (cVar4 == '\0') {
        uVar18 = __os_log_internal(0,_md_log_log,0,"Using StreamingZip for transfer and install");
        local_8f0 = CONCAT71((int7)((ulong)uVar18 >> 8),1);
      }
      else {
        local_8f0 = 0;
        __os_log_internal(0,_md_log_log,2,"SZConduit transport is disabled via defaults");
      }
    }
    uVar18 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
    _CFDictionarySetValue(local_868,&cf_DisableDeltaTransfer,uVar18);
    local_840 = __CFBundleCreateUnique(uVar10,lVar7);
    if (local_840 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      lVar8 = local_868;
      local_888 = (char *)0x0;
      uVar10 = __os_log_internal(0,_md_log_log,0x10,"Failed to create CFBundle from %@",lVar7);
      local_890 = (dispatch_queue_t)CONCAT71((int7)((ulong)uVar10 >> 8),1);
      local_8a8 = (void *)0x0;
      local_878 = (char *)0x0;
      local_8c0 = 0;
      uVar10 = 0;
      local_8a0 = 0;
      local_898 = 0;
      local_880 = 0;
      local_850 = 0;
      local_858 = 0;
      local_860 = (void *)0x0;
      local_848 = (char *)0x0;
      local_840 = 0;
      lVar7 = 0;
      lVar13 = 0;
      local_8c8 = 0;
      goto LAB_00149510;
    }
    lVar7 = _CFBundleGetIdentifier(local_840);
    if (lVar7 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"CFBundleGetIdentifier failed");
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      local_888 = (char *)0x0;
      uVar10 = __os_log_internal(0,_md_log_log,0x10);
      uVar15 = (undefined7)((ulong)uVar10 >> 8);
      local_8a8 = (void *)0x0;
      local_878 = (char *)0x0;
      uVar10 = 0;
      local_8a0 = 0;
      local_898 = 0;
      local_880 = 0;
      lVar7 = 0;
LAB_0014a7eb:
      local_848 = (char *)0x0;
      local_850 = 0;
      local_858 = 0;
      local_860 = (void *)0x0;
      lVar8 = local_868;
LAB_0014944e:
      local_890 = (dispatch_queue_t)CONCAT71(uVar15,1);
      local_8c8 = 0;
      lVar13 = 0;
      local_8c0 = 0;
      goto LAB_00149510;
    }
    _CFRetain(lVar7);
    pcVar17 = local_8a8;
    cVar4 = _CFEqual(&cf_Customer,local_8a8);
    if (cVar4 != '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
LAB_001493cc:
      lVar8 = local_868;
      local_888 = (char *)0x0;
      uVar10 = __os_log_internal(0,_md_log_log,0);
      uVar15 = (undefined7)((ulong)uVar10 >> 8);
      local_8a8 = (void *)0x0;
      local_878 = (char *)0x0;
      uVar10 = 0;
      local_8a0 = 0;
      local_898 = 0;
      local_880 = 0;
      local_850 = 0;
      local_858 = 0;
      pvVar16 = (void *)0x0;
LAB_0014943d:
      local_848 = (char *)0x0;
      local_860 = pvVar16;
      goto LAB_0014944e;
    }
    lVar8 = _CFDictionaryGetValue(param_3,&cf_SkipDeltaKey);
    if ((lVar8 != 0) && (cVar4 = _CFEqual(uVar18,lVar8), cVar4 != '\0')) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      goto LAB_001493cc;
    }
    cVar4 = _CFEqual(&cf_Developer,pcVar17);
    if (cVar4 != '\0') {
      pcVar17 = (cfstringStruct *)_CFDictionaryGetValue(param_3,&cf_ShadowParentKey);
      if (pcVar17 == (cfstringStruct *)0x0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar9 = "options dictionary missing required value for key: %@";
        pcVar17 = &cf_ShadowParentKey;
        goto LAB_0014a553;
      }
      lVar8 = _CFGetTypeID(pcVar17);
      lVar11 = _CFURLGetTypeID();
      if (lVar8 != lVar11) {
        uVar10 = _CFCopyTypeIDDescription(lVar8);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,
                          "kShadowParentKey\'s value is not a CFURLRef (it\'s a %@ (%lu) ",uVar10,
                          lVar8);
        _CFRelease(uVar10);
        goto LAB_0014a55a;
      }
      cVar4 = _CFURLGetFileSystemRepresentation(pcVar17,0,local_838,0x400);
      if (cVar4 == '\0') {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar9 = "unable to get c string from shadowParent: %@";
        goto LAB_0014a553;
      }
      iVar5 = _lstat_INODE64(local_838,local_a20);
      lVar8 = local_868;
      if (iVar5 != 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar10 = _md_log_log;
        piVar14 = ___error();
        pcVar9 = _strerror(*piVar14);
        __os_log_internal(0,uVar10,0x10,"%s does not exist: %s",local_838,pcVar9);
        goto LAB_0014a55a;
      }
      if ((local_a1c & 0xf000) != 0x4000) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar9 = "%s is not a directory";
        pcVar17 = local_838;
        goto LAB_0014a553;
      }
      pcVar9 = (char *)_createShadowPath(param_1,local_8b0,local_838);
      if (pcVar9 == (char *)0x0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_888 = (char *)0x0;
        uVar10 = __os_log_internal(0,_md_log_log,0x10,
                                   "createShadowPath failed for %s, falling back to non-delta install"
                                   ,local_8b0);
        uVar15 = (undefined7)((ulong)uVar10 >> 8);
        local_8a8 = (void *)0x0;
        local_878 = (char *)0x0;
LAB_0014a67d:
        uVar10 = 0;
        local_898 = 0;
LAB_0014a728:
        local_880 = 0;
LAB_0014a7c8:
        local_8a0 = CONCAT71(uVar15,1);
        goto LAB_0014a7eb;
      }
      local_8a8 = (cfstringStruct *)_createSiblingInPath(pcVar9,"ManifestCache.plist");
      lVar11 = __AMDeviceCopyInstalledAppInfo(param_1,lVar7);
      local_888 = pcVar9;
      if (lVar11 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_878 = (char *)0x0;
        uVar10 = __os_log_internal(0,_md_log_log,0x10);
        uVar15 = (undefined7)((ulong)uVar10 >> 8);
        goto LAB_0014a67d;
      }
      local_878 = (char *)_createSiblingInPath(pcVar9,"InstalledAppInfo");
      local_898 = lVar11;
      if (local_878 == (char *)0x0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        local_878 = (char *)0x0;
        uVar10 = __os_log_internal(0,_md_log_log,0x10);
        uVar15 = (undefined7)((ulong)uVar10 >> 8);
LAB_0014a71c:
        uVar10 = 1;
        goto LAB_0014a728;
      }
      local_880 = _createDictFromFile(local_878);
      if (local_880 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar10 = __os_log_internal(0,_md_log_log,0x10);
        uVar15 = (undefined7)((ulong)uVar10 >> 8);
        goto LAB_0014a71c;
      }
      cVar4 = _CFEqual(lVar11);
      if (cVar4 == '\0') {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
LAB_0014a7a5:
        uVar10 = __os_log_internal(0,_md_log_log,0x10);
        uVar15 = (undefined7)((ulong)uVar10 >> 8);
        uVar10 = 1;
        goto LAB_0014a7c8;
      }
      iVar5 = _access(pcVar9,0);
      if (iVar5 != 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        goto LAB_0014a7a5;
      }
      local_860 = (void *)_copyComponentOfPath(local_8b0);
      if (local_860 == (void *)0x0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        goto LAB_0014a7a5;
      }
      local_858 = _copyExecNameFromBundle(local_840);
      if (local_858 != 0) {
        lVar11 = _CFArrayCreateMutable(0,0,PTR__kCFTypeArrayCallBacks_004411a8);
        if (lVar11 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"CFArrayCreateMutable failed");
          goto LAB_0014a8a8;
        }
        _CFArrayAppendValue(lVar11,&cf_Info_plist);
        _CFArrayAppendValue(lVar11,&cf_ResourceRules_plist);
        _CFArrayAppendValue(lVar11,&cf_CodeResources);
        local_850 = lVar11;
        _CFArrayAppendValue(lVar11,&cf__CodeSignature_CodeResources);
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"calling MDMCreateDeltaDirectoryForDevice with %@",
                          local_850);
        uVar6 = _snprintf(local_438,0x400,"%s/%s.XXXXXX",local_838,local_860);
        if (0x3ff < uVar6) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pvVar16 = local_860;
          uVar10 = __os_log_internal(0,_md_log_log,0x10,"Path too long: /tmp/%s.XXXXXX",local_860);
          uVar15 = (undefined7)((ulong)uVar10 >> 8);
          uVar10 = 1;
          local_8a0 = CONCAT71(uVar15,1);
          goto LAB_0014943d;
        }
        pcVar12 = _mkdtemp(local_438);
        if (pcVar12 == (char *)0x0) {
          local_8e8 = lVar7;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar10 = _md_log_log;
          piVar14 = ___error();
          pcVar9 = _strerror(*piVar14);
          uVar10 = __os_log_internal(0,uVar10,0x10,"mkdtemp failed for %s : %s",0,pcVar9);
          uVar15 = (undefined7)((ulong)uVar10 >> 8);
          local_848 = (char *)0x0;
          lVar7 = local_8e8;
          lVar8 = local_868;
LAB_00149d0a:
          local_890 = (dispatch_queue_t)CONCAT71(uVar15,1);
          local_8a0 = CONCAT71(uVar15,1);
          lVar13 = 0;
          local_8c8 = 0;
          local_8c0 = 0;
          uVar10 = 1;
          goto LAB_00149510;
        }
        pcVar12 = _calloc(0x400,1);
        if (pcVar12 == (char *)0x0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar10 = __os_log_internal(0,_md_log_log,0x10,"unable to calloc %d bytes",0x400);
          uVar15 = (undefined7)((ulong)uVar10 >> 8);
          local_848 = (char *)0x0;
          lVar8 = local_868;
          goto LAB_00149d0a;
        }
        uVar6 = _snprintf(pcVar12,0x400,"%s/%s_sparse.ipa",local_438,local_860);
        local_848 = pcVar12;
        if (0x3ff < uVar6) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          pvVar16 = local_860;
          uVar10 = __os_log_internal(0,_md_log_log,0x10,"Path too long: %s/%s_sparse.ipa",local_438,
                                     local_860);
          uVar15 = (undefined7)((ulong)uVar10 >> 8);
          uVar10 = 1;
          local_8a0 = CONCAT71(uVar15,1);
          local_860 = pvVar16;
          goto LAB_0014944e;
        }
        iVar5 = _mkdir(pcVar12,0x1c0);
        local_8e8 = lVar7;
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar10 = _md_log_log;
        if (iVar5 == -1) {
          piVar14 = ___error();
          pcVar9 = _strerror(*piVar14);
          uVar10 = __os_log_internal(0,uVar10,0x10,"mkdir failed to create %s : %s",pcVar12,pcVar9);
          uVar15 = (undefined7)((ulong)uVar10 >> 8);
          lVar7 = local_8e8;
          goto LAB_00149d0a;
        }
        __os_log_internal(0,_md_log_log,1,"dst_ipa_container: %s\ndst_ipa: %s",local_438,pcVar12);
        uVar10 = _CFPreferencesGetAppBooleanValue(&cf_KeepSparseIPA,&cf_com_apple_MobileDevice,0);
        local_8c0 = CONCAT71((int7)((ulong)uVar10 >> 8),(char)uVar10 == '\0');
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        lVar7 = local_850;
        pcVar2 = local_8b0;
        __os_log_internal(0,_md_log_log,1,"diffing %s",local_8b0);
        iVar5 = _MDMCreateDeltaDirectoryForDevice(local_8f8,pcVar2,pcVar9,pcVar12,lVar7,lVar8);
        lVar7 = local_8e8;
        if (iVar5 != 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar10 = __os_log_internal(0,_md_log_log,0x10,"MDMCreateDeltaDirectoryForDevice failed");
          uVar15 = (undefined7)((ulong)uVar10 >> 8);
          local_890 = (dispatch_queue_t)CONCAT71(uVar15,1);
          local_8c8 = 0;
LAB_00149c96:
          local_8a0 = CONCAT71(uVar15,1);
          lVar13 = 0;
          uVar10 = 1;
          goto LAB_00149510;
        }
        local_8c8 = _CFStringCreateWithFileSystemRepresentation(0,pcVar12);
        lVar7 = local_8e8;
        if (local_8c8 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          local_890 = (dispatch_queue_t)0x0;
          uVar10 = __os_log_internal(0,_md_log_log,0x10,
                                     "unable to create CFString from: %s\nfalling back to file delta"
                                     ,local_848);
          uVar15 = (undefined7)((ulong)uVar10 >> 8);
          local_8c8 = 0;
          lVar8 = local_868;
          goto LAB_00149c96;
        }
        lVar13 = __AMDCFURLCreateFromFileSystemPathWithSmarts(local_8c8);
        pdVar3 = local_890;
        group = local_910;
        if (lVar13 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar8 = local_8c8;
          local_890 = (dispatch_queue_t)0x0;
          uVar10 = __os_log_internal(0,_md_log_log,0x10,
                                     "_AMDCFURLCreateFromFileSystemPathWithSmarts failed on \'%@\'\nfalling back to file delta"
                                     ,local_8c8);
          uVar15 = (undefined7)((ulong)uVar10 >> 8);
          local_8c8 = lVar8;
          lVar8 = local_868;
          goto LAB_00149c96;
        }
        local_990 = PTR___NSConcreteStackBlock_004412a8;
        local_988 = 0x42000000;
        local_980 = ___AMDeviceSecureInstallApplicationBundle_block_invoke;
        local_978 = &___block_descriptor_tmp_2949;
        local_970 = &local_950;
        local_960 = local_8b0;
        local_968 = pcVar9;
        local_958 = pcVar12;
        _dispatch_group_async(local_910._os_obj,local_890);
        lVar8 = local_868;
        _dispatch_group_async(group._os_obj,pdVar3);
        _dispatch_group_wait((dispatch_group_t)group._os_obj,0xffffffffffffffff);
        pcVar12 = local_888;
        pcVar9 = local_8b0;
        uVar6 = *(uint *)(local_928 + 3);
        if (uVar6 == 0xe8000086) {
          uVar10 = 1;
          local_890 = (dispatch_queue_t)0x0;
          local_8a0 = 0xe8000001;
          goto LAB_00149510;
        }
        if (uVar6 != 0) {
          local_870 = (ulong)uVar6;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,
                            "Install failed on device: %08x, removing shadow directory",
                            *(undefined4 *)(local_928 + 3));
          iVar5 = _removefile(pcVar12,(removefile_state_t)0x0,1);
          lVar8 = local_8c8;
          if (iVar5 == 0) {
            cVar4 = (char)local_8c0;
            lVar11 = local_840;
            local_8b0 = pcVar9;
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar10 = _md_log_log;
            piVar14 = ___error();
            pcVar12 = _strerror(*piVar14);
            __os_log_internal(0,uVar10,0x10,"Unable to remove the shadow directory: %s",pcVar12);
            cVar4 = (char)local_8c0;
            lVar11 = local_840;
            local_8b0 = pcVar9;
          }
          goto LAB_0014904a;
        }
        iVar5 = __AMDeviceUpdateOldPackage
                          (local_8f8,local_888,local_8b0,lVar7,*(int *)(local_948 + 3) != 0);
        cVar19 = iVar5 != 0;
        cVar4 = '\0';
        local_870 = 0;
        goto LAB_001495c4;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"copyExecNameFromURL failed");
      local_858 = 0;
LAB_0014a8a8:
      local_848 = (char *)0x0;
      local_870 = 0xe8000001;
      lVar13 = 0;
      cVar4 = '\x01';
      local_850 = 0;
      local_8c0 = 0;
      lVar8 = 0;
      goto LAB_00149798;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar9 = "wrong package type: %@";
    pcVar17 = local_8a8;
LAB_0014a553:
    __os_log_internal(0,_md_log_log,0x10,pcVar9,pcVar17);
LAB_0014a55a:
    lVar8 = 0;
    local_870 = 0xe8000007;
    lVar13 = 0;
    local_848 = (char *)0x0;
    local_860 = (void *)0x0;
    local_858 = 0;
    local_850 = 0;
    local_880 = 0;
    local_898 = 0;
    cVar4 = '\0';
    local_878 = (char *)0x0;
    local_8a8 = (void *)0x0;
    local_888 = (char *)0x0;
    lVar11 = local_840;
  }
LAB_0014904a:
  bVar20 = local_8a8 != (void *)0x0;
  cVar19 = local_8b0 != (char *)0x0;
LAB_00149066:
  if ((cVar4 != '\0') && (local_438[0] != '\0')) {
    local_900 = CONCAT71(local_900._1_7_,cVar19);
    _removefile(local_438,(removefile_state_t)0x0,1);
    cVar19 = (char)local_900;
  }
  if (lVar11 != 0) {
    _CFRelease();
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (local_868 != 0) {
    _CFRelease();
  }
  if (lVar13 != 0) {
    _CFRelease(lVar13);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  lVar7 = local_8d8;
  if (cVar19 != '\0') {
    _free(local_8b0);
  }
  pcVar9 = local_878;
  lVar8 = local_8e0;
  if (local_860 != (void *)0x0) {
    _free(local_860);
  }
  if (bVar20) {
    _free(local_8a8);
  }
  pcVar12 = local_848;
  if (local_888 != (char *)0x0) {
    _free(local_888);
  }
  lVar11 = local_880;
  if (local_898 != 0) {
    _CFRelease();
  }
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  if (local_858 != 0) {
    _CFRelease();
  }
  if (local_850 != 0) {
    _CFRelease();
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (local_8d0 != 0) {
    _CFRelease();
  }
  uVar1 = local_870;
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (pcVar9 != (char *)0x0) {
    _free(pcVar9);
  }
  if (pcVar12 != (char *)0x0) {
    _free(pcVar12);
  }
  _dispatch_release(local_910);
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,1,"returning 0x%08x",uVar1 & 0xffffffff);
  __Block_object_dispose(&local_950,8);
  __Block_object_dispose(&local_930,8);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1 & 0xffffffff;
}

