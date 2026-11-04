// rea decompile_all
// name: _T200UpdaterCopyFirmwareWithLogging
// address: 0x25d9de
// body: available
// range: 0x25d9de-0x25e304 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25e300 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _T200UpdaterCopyFirmwareWithLogging
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long local_8a8;
  long local_8a0;
  long local_898;
  long local_890;
  long local_888;
  long local_880;
  long local_878;
  long local_870;
  undefined8 local_868;
  long local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  long local_838 [128];
  long local_438 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  _logSinkFunc = param_2;
  _logContext = param_3;
  _T200RestoreInfoLog("%s:%d Start\n","_T200UpdaterCopyFirmwareWithLogging",0x290);
  if (param_1 == 0) {
    _T200UpdaterCopyFirmwareWithLogging_cold_19(local_438);
LAB_0025e1ca:
    lVar3 = 0;
    lVar9 = local_438[0];
  }
  else {
    lVar3 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
    if (lVar3 == 0) {
LAB_0025e170:
      _T200UpdaterCopyFirmwareWithLogging_cold_18(local_438);
      goto LAB_0025e1ca;
    }
    lVar3 = _CFGetTypeID(lVar3);
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar3 != lVar4) goto LAB_0025e170;
    local_888 = 0;
    local_880 = 0;
    local_898 = 0;
    _T200RestoreInfoLog("%s:%d Start\n","copyFirmwareData",0x1d8);
    lVar3 = _CFStringGetCStringPtr(&cf_BMU_FirmwareMap,0x8000100);
    if (lVar3 != 0) {
      _T200RestoreInfoLog("%s:%d Start file_name=%s \n","copyFirmwareData",0x1db);
    }
    lVar3 = _CFDictionaryGetValue(param_1,&cf_BuildIdentity);
    if ((lVar3 == 0) || (local_8a8 = _CFRetain(lVar3), local_8a8 == 0)) {
      uVar8 = _T200UpdaterCopyFirmwareWithLogging_cold_16(local_438);
      local_868 = CONCAT71((int7)((ulong)uVar8 >> 8),1);
      local_8a8 = 0;
      lVar3 = local_438[0];
LAB_0025e03f:
      local_878 = 0;
      local_870 = 0;
      lVar6 = 0;
      lVar7 = 0;
      lVar4 = 0;
      local_890 = 0;
      lVar5 = 0;
LAB_0025e0da:
      if (lVar3 == 0) {
        lVar9 = 0;
      }
      else {
        local_860 = lVar4;
        lVar9 = _CFRetain(lVar3);
        lVar4 = _CFErrorCopyDescription(lVar3);
        lVar10 = _CFStringGetCStringPtr(lVar4,0x8000100);
        if (lVar10 != 0) {
          _T200RestoreInfoLog("%s:%d Error : %s\n","copyFirmwareData",0x230,lVar10);
        }
        if (lVar4 != 0) {
          _CFRelease(lVar4);
        }
        _CFRelease(lVar3);
        lVar4 = local_860;
      }
    }
    else {
      lVar3 = _CFDictionaryGetValue(local_8a8,&cf_BMU_FirmwareMap);
      if ((lVar3 == 0) || (local_870 = _CFRetain(lVar3), local_870 == 0)) {
        _T200UpdaterCopyFirmwareWithLogging_cold_15(local_438);
        local_868 = 0;
        lVar3 = local_438[0];
        goto LAB_0025e03f;
      }
      lVar3 = _CFDictionaryGetValue(local_870,&cf_Info);
      if ((lVar3 == 0) || (local_878 = _CFRetain(lVar3), local_878 == 0)) {
        _T200UpdaterCopyFirmwareWithLogging_cold_14(local_438);
        local_868 = 0;
        local_878 = 0;
        lVar6 = 0;
        lVar7 = 0;
        lVar4 = 0;
        local_890 = 0;
        lVar5 = 0;
        lVar3 = local_438[0];
        goto LAB_0025e0da;
      }
      lVar3 = _CFDictionaryGetValue(local_878,&cf_Path);
      if ((lVar3 == 0) || (local_860 = _CFRetain(lVar3), local_860 == 0)) {
        _T200UpdaterCopyFirmwareWithLogging_cold_13(local_438);
        lVar6 = 0;
        lVar7 = 0;
        lVar4 = 0;
        local_890 = 0;
        lVar5 = 0;
LAB_0025e0cc:
        local_868 = 0;
        lVar3 = local_438[0];
        goto LAB_0025e0da;
      }
      lVar3 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo);
      if (lVar3 == 0) {
LAB_0025e181:
        _T200UpdaterCopyFirmwareWithLogging_cold_12(local_438);
        local_890 = 0;
        local_838[0] = local_438[0];
LAB_0025e205:
        lVar7 = 0;
        lVar6 = 0;
        lVar5 = 0;
LAB_0025e208:
        local_868 = 0;
        lVar3 = local_838[0];
        lVar4 = local_860;
        goto LAB_0025e0da;
      }
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFDictionaryGetTypeID();
      if (lVar4 != lVar5) goto LAB_0025e181;
      lVar3 = _CFRetain(lVar3);
      iVar2 = _getChemistryId(lVar3);
      local_890 = lVar3;
      if (iVar2 == 0) {
        _T200UpdaterCopyFirmwareWithLogging_cold_11(local_438);
        local_838[0] = local_438[0];
        goto LAB_0025e205;
      }
      lVar5 = _CopyHWVersion(lVar3);
      if (lVar5 == 0) {
        _T200UpdaterCopyFirmwareWithLogging_cold_10(local_438);
        local_838[0] = local_438[0];
        goto LAB_0025e205;
      }
      local_848 = 0;
      uStack_840 = 0;
      local_858 = 0;
      uStack_850 = 0;
      _CFStringGetCString(lVar5,&local_858,0x20,0x600);
      _T200RestoreInfoLog("%s:%d chemistry=%d silicon_ver=%s\n","copyFirmwareData",0x1f5,iVar2,
                          &local_858);
      lVar3 = _CFDictionaryGetValue(param_1,&cf_BundlePath);
      if ((lVar3 != 0) && (lVar6 = _CFRetain(lVar3), lVar4 = local_860, lVar6 != 0)) {
        iVar2 = _AMSupportPlatformCopyURLWithAppendedComponent(0,lVar6,local_860,0,&local_888);
        if (iVar2 != 0) {
          plVar11 = local_438;
          _T200UpdaterCopyFirmwareWithLogging_cold_1(iVar2,plVar11);
LAB_0025e27e:
          local_438[0] = *plVar11;
          lVar7 = 0;
          lVar4 = local_860;
          goto LAB_0025e0cc;
        }
        if (local_888 == 0) {
          plVar11 = local_438;
          _T200UpdaterCopyFirmwareWithLogging_cold_8(plVar11);
          goto LAB_0025e27e;
        }
        cVar1 = _CFEqual(&cf_BMU_FirmwareMap,&cf_BMU_FirmwareMap);
        if (cVar1 == '\0') {
          lVar7 = 0;
          goto LAB_0025dead;
        }
        _T200RestoreInfoLog("%s:%d Loading FW map url \n","copyFirmwareData",0x202);
        cVar1 = _CFURLGetFileSystemRepresentation(local_888,1,local_438,0x400);
        if (cVar1 == '\0') {
          plVar11 = local_838;
          _T200UpdaterCopyFirmwareWithLogging_cold_7(plVar11);
          goto LAB_0025e27e;
        }
        lVar3 = _CFDictionaryGetValue(param_1,&cf_DestBundlePath);
        if ((lVar3 == 0) || (lVar7 = _CFRetain(lVar3), lVar7 == 0)) {
          lVar7 = 0;
LAB_0025de4b:
          _T200RestoreInfoLog("%s:%d Loading FW from %s\n","copyFirmwareData",0x21e,local_438);
          iVar2 = _AMSupportCreateDataFromFileURL
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_898,local_888);
          if (iVar2 == 0) goto LAB_0025dead;
          plVar11 = &local_8a0;
          _T200UpdaterCopyFirmwareWithLogging_cold_6(iVar2,plVar11);
LAB_0025e231:
          local_438[0] = *plVar11;
          lVar4 = local_860;
          goto LAB_0025e0cc;
        }
        iVar2 = _AMSupportPlatformCopyURLWithAppendedComponent(0,lVar7,lVar4,0,&local_880);
        if ((iVar2 != 0) || (local_880 == 0)) {
          plVar11 = local_838;
          _T200UpdaterCopyFirmwareWithLogging_cold_5(iVar2,plVar11);
          goto LAB_0025e231;
        }
        iVar2 = _AMSupportMakeDirectory();
        if (iVar2 != 0) {
          plVar11 = local_838;
          _T200UpdaterCopyFirmwareWithLogging_cold_2(iVar2,plVar11);
          goto LAB_0025e231;
        }
        iVar2 = _AMSupportCopyFile(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_888,
                                   local_880);
        if (iVar2 == 0) {
          _AMSupportPlatformFileURLExists(local_880,&local_8a0);
          if ((char)local_8a0 != '\0') {
            _CFURLGetFileSystemRepresentation(local_880,1,local_838,0x400);
            _T200RestoreInfoLog("%s:%d Copy the file %s to  %s\n","copyFirmwareData",0x21b,local_438
                                ,local_838);
            lVar4 = local_860;
            goto LAB_0025de4b;
          }
          _T200UpdaterCopyFirmwareWithLogging_cold_4(&local_8a0,local_838);
        }
        else {
          _T200UpdaterCopyFirmwareWithLogging_cold_3(iVar2,local_838);
        }
        goto LAB_0025e208;
      }
      lVar9 = 0;
      _T200RestoreInfoLog("%s:%d Override is set \n","copyFirmwareData",0x1f9);
      lVar3 = _CFDictionaryGetValue(param_1,&cf_FirmwareData);
      lVar4 = local_860;
      if (lVar3 != 0) {
        lVar9 = _CFRetain(lVar3);
      }
      lVar6 = 0;
      lVar7 = 0;
      local_898 = lVar9;
LAB_0025dead:
      if (local_898 == 0) {
        plVar11 = &local_8a0;
        _T200UpdaterCopyFirmwareWithLogging_cold_9(plVar11);
        goto LAB_0025e231;
      }
      lVar9 = 0;
      local_868 = 0;
    }
    if (local_888 != 0) {
      _CFRelease();
      local_888 = 0;
    }
    if (local_880 != 0) {
      _CFRelease();
      local_880 = 0;
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
    if (lVar7 != 0) {
      _CFRelease(lVar7);
    }
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
    if (local_878 != 0) {
      _CFRelease();
    }
    lVar3 = local_890;
    if (local_870 != 0) {
      _CFRelease();
    }
    if ((char)local_868 == '\0') {
      _CFRelease(local_8a8);
    }
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
    _T200RestoreInfoLog("%s:%d End\n","copyFirmwareData",0x23f);
    lVar3 = local_898;
    if (local_898 == 0) {
      _T200UpdaterCopyFirmwareWithLogging_cold_17();
      local_438[0] = lVar9;
      goto LAB_0025e1ca;
    }
  }
  if ((param_4 == (undefined8 *)0x0) || (lVar9 == 0)) {
    if (lVar9 == 0) goto LAB_0025dfd1;
  }
  else {
    uVar8 = _CFRetain(lVar9);
    *param_4 = uVar8;
  }
  _CFRelease(lVar9);
LAB_0025dfd1:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar3;
}

