// rea decompile_all
// name: _AMRestorableDeviceNeedsUpdatedFramework
// address: 0x164fde
// body: available
// range: 0x164fde-0x165525 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x165521 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMRestorableDeviceNeedsUpdatedFramework(cfstringStruct *param_1)

{
  cfstringStruct *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  char *pcVar10;
  cfstringStruct *pcVar11;
  ulong uVar12;
  bool bVar13;
  undefined1 local_d0 [8];
  cfstringStruct *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *pcStack_50;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_58 = param_1;
  _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_58,
                   ___thr_AMRestorableDeviceGetState);
  if ((int)pcStack_50 != 4) {
    _AMRLog(6,&
              cf_Deviceisn_tbooted_UsingDeviceRegistrationClasstodetermineiftheframeworkneedsanupdate_
           );
    pcStack_50 = param_1;
    _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_58,
                     ___thr_AMRestorableDeviceGetDeviceClass);
    uVar12 = CONCAT71((int7)((ulong)param_1 >> 8),(int)local_58 == 0);
    goto LAB_001650bd;
  }
  local_58 = param_1;
  _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_58,
                   ___thr_AMRestorableDeviceCopyAMDevice);
  pcVar1 = pcStack_50;
  if ((pcStack_50 == (cfstringStruct *)0x0) || (iVar3 = _AMDeviceConnect(pcStack_50), iVar3 != 0)) {
    uVar12 = 0;
    _AMRLog(6,&cf_Connectiontobooteddevicefailed_Assumingnoupdateneeded_);
  }
  else {
    lVar4 = _CFPreferencesCopyAppValue(&cf_MobileDeviceMinVersion,&cf_com_apple_MobileDeviceUpdater)
    ;
    uVar5 = _CFBundleGetBundleWithIdentifier(&cf_com_apple_mobiledevice);
    local_80 = _CFBundleGetValueForInfoDictionaryKey
                         (uVar5,*(undefined8 *)PTR__kCFBundleVersionKey_00441128);
    lVar6 = _AMDeviceCopyValueWithError(pcVar1,0,&cf_MobileDeviceMinimumVersion,0);
    local_48 = &cf_MinAppleTVVersion;
    local_58 = &cf_MinIPhoneVersion;
    pcStack_50 = &cf_MinWatchVersion;
    local_68 = &cf_12_0;
    local_78 = 0x46ef10;
    uStack_74 = 0;
    uStack_70 = 0x46ea70;
    uStack_6c = 0;
    local_90 = *(long *)PTR__kCFAllocatorDefault_004410e8;
    local_c0 = _CFDictionaryCreate();
    cVar2 = _AMDeviceIsAtLeastVersionOnPlatform(pcVar1,local_c0);
    _AMDeviceDisconnect(pcVar1);
    _AMRLog(6,&cf_BootedOSdevice_Askingitforitsminimumsupportedframeworkversion_);
    if (lVar4 == 0 && cVar2 == '\0') {
      _AMRLog(6,&cf_Deviceistoooldtotellusits__andnooverridepresent_Assumingnoupdateneeded_,
              &cf_MobileDeviceMinimumVersion);
LAB_00165359:
      lVar7 = 0;
LAB_0016535d:
      uVar12 = 0;
      _AMRLog(3,&
                cf_Couldn_treadsomeversionnumbers_Assumingnoneedtoupdate_CurrentMDVersionis___Deviceneeds__
              ,local_80,lVar7);
    }
    else {
      if (lVar4 == 0 && lVar6 == 0) {
        _AMRLog(3,&
                  cf_Thisshouldneverhappen_minVersion_dataanddeviceNeedsMDVersion_overidearebothNULL_
               );
        goto LAB_00165359;
      }
      if (lVar4 == 0) {
        if (lVar6 == 0) goto LAB_00165359;
        local_88 = lVar4;
        lVar4 = _CFGetTypeID(lVar6);
        lVar7 = _CFDataGetTypeID();
        if (lVar4 == lVar7) {
          lVar7 = _CFStringCreateFromExternalRepresentation(local_90,lVar4,0x8000100);
LAB_0016547e:
          lVar4 = local_88;
          if (lVar7 != 0) {
            lVar8 = _CFStringCompare(lVar7,&cf_0_0_0_0_0,0x40);
            if (lVar8 != 0) goto LAB_0016520e;
            local_c8 = param_1;
            _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),local_d0,
                             ___thr_AMRestorableDeviceGetDeviceClass);
            _AMRLog(3,&cf___is__andshouldn_tbe_Pleasefileabug_,&cf_MobileDeviceMinimumVersion,lVar7)
            ;
            _CFRelease(lVar7);
          }
          goto LAB_00165359;
        }
        lVar7 = _CFStringGetTypeID();
        if (lVar4 == lVar7) {
          lVar7 = _CFRetain(lVar6);
          goto LAB_0016547e;
        }
        _AMRLog(3,&cf___wasn_tastringordata_,&cf_MobileDeviceMinimumVersion);
        lVar7 = 0;
        lVar4 = local_88;
        goto LAB_0016535d;
      }
      _AMRLog(6,&cf__swasoverriddentobe____,"MobileDeviceMinVersion",lVar4);
      lVar7 = _CFRetain(lVar4);
LAB_0016520e:
      lVar8 = local_90;
      if ((local_80 == 0) || (lVar7 == 0)) goto LAB_0016535d;
      local_b0 = lVar6;
      local_98 = _CFStringCreateArrayBySeparatingStrings(local_90,local_80,&cf__);
      local_a8 = lVar7;
      lVar6 = _CFStringCreateArrayBySeparatingStrings(lVar8,lVar7,&cf__);
      lVar7 = _CFArrayGetCount(local_98);
      local_a0 = lVar6;
      local_b8 = _CFArrayGetCount(lVar6);
      lVar6 = local_b8;
      if (local_b8 < lVar7) {
        lVar6 = lVar7;
      }
      local_90 = lVar7;
      if (lVar6 < 1) {
        uVar12 = 0;
      }
      else {
        lVar7 = 0;
        local_88 = lVar4;
        do {
          pcVar11 = &cf_0;
          if (lVar7 < local_90) {
            pcVar11 = (cfstringStruct *)_CFArrayGetValueAtIndex(local_98,lVar7);
          }
          pcVar9 = &cf_0;
          if (lVar7 < local_b8) {
            pcVar9 = (cfstringStruct *)_CFArrayGetValueAtIndex(local_a0,lVar7);
          }
          lVar4 = _CFStringCompare(pcVar11,pcVar9,0x40);
        } while ((lVar4 == 0) && (bVar13 = lVar6 + -1 != lVar7, lVar7 = lVar7 + 1, bVar13));
        uVar12 = CONCAT71(0x44fe,lVar4 == -1);
        lVar4 = local_88;
      }
      lVar7 = local_a8;
      lVar6 = local_b0;
      if (local_98 != 0) {
        _CFRelease();
      }
      if (local_a0 != 0) {
        _CFRelease();
      }
      pcVar10 = "NO";
      if ((char)uVar12 != '\0') {
        pcVar10 = "YES";
      }
      _AMRLog(6,&cf_CurrentMDVersionis___Deviceneeds___Needtoupdate__s,local_80,lVar7,pcVar10);
    }
    if (local_c0 != 0) {
      _CFRelease();
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
    if (lVar7 != 0) {
      _CFRelease(lVar7);
    }
  }
  if (pcVar1 != (cfstringStruct *)0x0) {
    _CFRelease(pcVar1);
  }
LAB_001650bd:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12 & 0xffffffff;
}

