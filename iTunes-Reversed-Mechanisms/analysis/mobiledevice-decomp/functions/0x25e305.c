// rea decompile_all
// name: _T200UpdaterCreateRequestWithLogging
// address: 0x25e305
// body: available
// range: 0x25e305-0x25f29c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25f298 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _T200UpdaterCreateRequestWithLogging
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  void *pvVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long local_c0;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58 [5];
  
  local_58[4] = *(long *)PTR____stack_chk_guard_004412b8;
  _logSinkFunc = param_2;
  _logContext = param_3;
  _T200RestoreInfoLog("%s:%d Start\n","__T200UpdaterCreateRequestWithLogging",0x2b9);
  if (param_1 == 0) {
    _T200UpdaterCreateRequestWithLogging_cold_22(local_58);
LAB_0025eecb:
    lVar9 = 0;
    local_80 = 0;
    local_60 = 0;
    lVar8 = 0;
LAB_0025ef31:
    local_78 = 0;
    lVar10 = 0;
    lVar11 = local_58[0];
LAB_0025ef34:
    if ((param_4 == (undefined8 *)0x0) || (lVar11 == 0)) {
      if (lVar11 != 0) goto LAB_0025ef76;
    }
    else {
      uVar18 = _CFRetain(lVar11);
      *param_4 = uVar18;
      _T200RestoreInfoLog("%s:%d requestDict =\n","__T200UpdaterCreateRequestWithLogging",0x2fa);
LAB_0025ef76:
      _CFRelease(lVar11);
    }
    lVar12 = 0;
    if (local_78 != 0) {
LAB_0025ef8a:
      _CFRelease(local_78);
    }
    if (lVar8 == 0) goto LAB_0025efa0;
  }
  else {
    cVar4 = _CFDictionaryContainsKey(param_1,&cf_BuildIdentity);
    if (((cVar4 == '\0') || (lVar8 = _CFDictionaryGetValue(param_1,&cf_BuildIdentity), lVar8 == 0))
       || (lVar8 = _CFRetain(lVar8), lVar8 == 0)) {
      _T200UpdaterCreateRequestWithLogging_cold_21(local_58);
      goto LAB_0025eecb;
    }
    cVar4 = _CFDictionaryContainsKey(param_1,&cf_DeviceInfo);
    if (((cVar4 == '\0') || (lVar9 = _CFDictionaryGetValue(param_1,&cf_DeviceInfo), lVar9 == 0)) ||
       (lVar9 = _CFRetain(lVar9), lVar9 == 0)) {
      _T200UpdaterCreateRequestWithLogging_cold_20(local_58);
      lVar9 = 0;
      local_80 = 0;
      local_60 = 0;
      goto LAB_0025ef31;
    }
    cVar4 = _CFDictionaryContainsKey(lVar9,&cf_UpdaterOptions);
    if (cVar4 == '\0') {
      local_80 = 0;
      _T200RestoreInfoLog("%s:%d Updater options is empty\n","__T200UpdaterCreateRequestWithLogging"
                          ,0x2cd);
    }
    else {
      lVar10 = _CFDictionaryGetValue(lVar9,&cf_UpdaterOptions);
      if (lVar10 == 0) {
        local_80 = 0;
      }
      else {
        local_80 = _CFRetain(lVar10);
      }
    }
    cVar4 = _CFDictionaryContainsKey(param_1,&cf_Options);
    if (cVar4 == '\0') {
      local_60 = 0;
      _T200RestoreInfoLog("%s:%d Restore options is empty\n","__T200UpdaterCreateRequestWithLogging"
                          ,0x2d4);
    }
    else {
      lVar10 = _CFDictionaryGetValue(param_1,&cf_Options);
      if (lVar10 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = _CFRetain(lVar10);
      }
    }
    cVar4 = _CheckKey(local_80,&cf_RestoreInternal);
    if (cVar4 != '\0') {
      _T200RestoreInfoLog("%s:%d Internal build detected\n","__T200UpdaterCreateRequestWithLogging",
                          0x2d9);
    }
    cVar5 = _CheckKey(local_60,&cf_SkipSameVersion);
    if (cVar5 == '\x01') {
      bVar1 = false;
      _T200RestoreInfoLog("%s:%d Skip same version detected\n",
                          "__T200UpdaterCreateRequestWithLogging",0x2dd);
    }
    else if (cVar4 == '\x01' && cVar5 == '\0') {
      _T200RestoreInfoLog("%s:%d Internal, Allow update to same version\n",
                          "__T200UpdaterCreateRequestWithLogging",0x2e0);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    lVar10 = _CFDictionaryGetValue(lVar9,&cf_LocalSigningID);
    if (lVar10 != 0) {
      lVar10 = _CFGetTypeID(lVar10);
      lVar11 = _CFBooleanGetTypeID();
      if (lVar10 != lVar11) goto LAB_0025f051;
      cVar4 = _CFDictionaryContainsKey(param_1,&cf_FirmwareData);
      if (cVar4 == '\0') {
        lVar10 = 0;
        _T200RestoreInfoLog("%s:%d Start\n","_createRequestDictForTATSU",0x11f);
LAB_0025e7ca:
        local_78 = 0;
        _DebugAssert(0x3f2a3f2a,0,"Third Party Client: measurementDict","exit",0,
                     "/AppleInternal/Library/BuildRoots/4~CajzugAGHtsafftOhWSINGk5HSoWP6SVFVL27zQ/Library/Caches/com.apple.xbs/Sources/VeridianDylibs/T200RestoreInfo/T200RestoreInfo.c"
                     ,0x122,0);
        uVar18 = 2;
LAB_0025e807:
        _T200RestoreInfoLog("%s:%d End,Failed with ret=%d\n","_createRequestDictForTATSU",0x157,
                            uVar18);
LAB_0025e824:
        _DebugAssert(0x3f2a3f2a,0,"Third Party Client: ret == kT200Success","exit",0,
                     "/AppleInternal/Library/BuildRoots/4~CajzugAGHtsafftOhWSINGk5HSoWP6SVFVL27zQ/Library/Caches/com.apple.xbs/Sources/VeridianDylibs/T200RestoreInfo/T200RestoreInfo.c"
                     ,0x2f2,0);
        lVar11 = _createCFError("_createRequestDictForTATSU fails.",uVar18,
                                "_createRequestDictForTATSU",uVar18);
        goto LAB_0025ef34;
      }
      lVar10 = _CFDictionaryGetValue(param_1,&cf_FirmwareData);
      if ((lVar10 == 0) || (lVar10 = _CFRetain(lVar10), lVar10 == 0)) {
        _T200UpdaterCreateRequestWithLogging_cold_18(local_58);
        goto LAB_0025ef31;
      }
      _T200RestoreInfoLog("%s:%d Start\n","_createMeasurementDict",0x166);
      puVar3 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
      puVar2 = PTR__kCFTypeDictionaryKeyCallBacks_004411b0;
      uVar18 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar11 = _CFDictionaryCreateMutable
                         (uVar18,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      lVar12 = _CFDictionaryCreateMutable(uVar18,0,puVar2,puVar3);
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      lVar13 = _CFDictionaryCreateMutable(0,0,puVar2,puVar3);
      lVar14 = _CFDictionaryCreateMutable(0,0,puVar2,puVar3);
      if (lVar13 == 0) {
        _T200UpdaterCreateRequestWithLogging_cold_7();
        iVar6 = 3;
LAB_0025f105:
        local_90 = 0;
        local_68 = 0;
        lVar15 = 0;
        local_70 = 0;
        local_c0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a0 = 0;
        local_a8 = 0;
LAB_0025f026:
        local_78 = 0;
        _T200RestoreInfoLog("%s:%d Failed with %d\n","_createMeasurementDict",0x1ae);
        lVar16 = 0;
      }
      else {
        iVar6 = _getChemistryId(lVar9);
        if (iVar6 == 0) {
          _T200UpdaterCreateRequestWithLogging_cold_6();
          iVar6 = 0xb;
          goto LAB_0025f105;
        }
        local_c0 = _CopyHWVersion(lVar9);
        if (local_c0 == 0) {
          _T200UpdaterCreateRequestWithLogging_cold_5();
          iVar6 = 0xb;
          local_c0 = 0;
          local_b0 = 0;
LAB_0025f1ed:
          local_a8 = 0;
LAB_0025f243:
          local_68 = 0;
          local_70 = 0;
          local_90 = 0;
          local_98 = 0;
          local_a0 = 0;
          lVar15 = 0;
          goto LAB_0025f026;
        }
        local_b0 = _CFStringCreateWithFormat(uVar18,0,&cf___,&cf_board_id);
        local_a8 = _CFPropertyListCreateWithData(uVar18,lVar10,0,0,0);
        if (local_a8 == 0) {
          _T200UpdaterCreateRequestWithLogging_cold_4();
          iVar6 = 0xd;
          goto LAB_0025f1ed;
        }
        local_a0 = _CFRetain(lVar10);
        if (local_a0 == 0) {
          _T200UpdaterCreateRequestWithLogging_cold_3();
          iVar6 = 0xb;
          goto LAB_0025f243;
        }
        local_98 = _CFStringCreateWithFormat(uVar18,0,&cf______,&cf_digest_der,&cf_Digest);
        lVar15 = _AMSupportGetValueForKeyPathInDict(uVar18,local_a8,local_98);
        if ((lVar15 == 0) || (lVar15 = _CFRetain(lVar15), lVar15 == 0)) {
          _T200UpdaterCreateRequestWithLogging_cold_2();
          iVar6 = 0x42;
          local_90 = 0;
          local_68 = 0;
          lVar15 = 0;
          local_70 = 0;
          goto LAB_0025f026;
        }
        _CFDictionarySetValue(lVar12,&cf_Digest,lVar15);
        _CFDictionarySetValue(lVar14,&cf_BMU_DigestMap,lVar12);
        lVar16 = _AMSupportGetValueForKeyPathInDict(uVar18,local_a8,local_b0);
        if (lVar16 == 0) {
          local_70 = 0;
        }
        else {
          local_70 = _CFRetain(lVar16);
        }
        if (lVar14 == 0) {
          local_90 = 0;
        }
        else {
          local_90 = _CFRetain(lVar14);
        }
        if (local_70 == 0) {
          local_68 = 0;
        }
        else {
          local_68 = _CFRetain(local_70);
        }
        uVar7 = _CFDataGetLength(lVar10);
        uVar20 = (ulong)uVar7;
        pvVar17 = _calloc(uVar20,1);
        if (pvVar17 == (void *)0x0) {
          _T200UpdaterCreateRequestWithLogging_cold_1();
          iVar6 = 0xd;
          goto LAB_0025f026;
        }
        iVar6 = 0;
        _CFDataGetBytes(lVar10,0,uVar20,pvVar17);
        _computeFirmwareDigest(pvVar17,uVar20,local_58);
        lVar16 = _CFDataCreate(uVar18,local_58,0x20);
        _CFDictionarySetValue(lVar11,&cf_Digest,lVar16);
        _CFDictionarySetValue(lVar13,&cf_BMU_FirmwareMap,lVar11);
        local_78 = _CFRetain(lVar13);
        _T200RestoreInfoLog("%s:%d End\n","_createMeasurementDict",0x1ab);
        _free(pvVar17);
      }
      if (lVar12 != 0) {
        _CFRelease();
      }
      if (lVar15 != 0) {
        _CFRelease(lVar15);
      }
      if (local_98 != 0) {
        _CFRelease();
      }
      if (lVar16 != 0) {
        _CFRelease(lVar16);
      }
      if (lVar11 != 0) {
        _CFRelease();
      }
      if (lVar13 != 0) {
        _CFRelease();
      }
      if (lVar14 != 0) {
        _CFRelease();
      }
      if (local_a0 != 0) {
        _CFRelease();
      }
      if (local_70 != 0) {
        _CFRelease();
      }
      if (local_a8 != 0) {
        _CFRelease();
      }
      if (local_c0 != 0) {
        _CFRelease();
      }
      if (local_b0 != 0) {
        _CFRelease();
      }
      if (iVar6 != 0) {
        _T200UpdaterCreateRequestWithLogging_cold_8(iVar6,local_58);
        lVar11 = local_58[0];
        goto LAB_0025ef34;
      }
      _T200RestoreInfoLog("%s:%d Start\n","_createRequestDictForTATSU",0x11f);
      if (local_78 == 0) goto LAB_0025e7ca;
      lVar11 = _CFDictionaryCreateMutable
                         (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar11 == 0) {
        _T200UpdaterCreateRequestWithLogging_cold_17();
        uVar18 = 3;
        goto LAB_0025e807;
      }
      uVar18 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
      _CFDictionaryAddValue(lVar11,&cf__BMU_Ticket,uVar18);
      lVar12 = _CFDictionaryGetValue(lVar9,&cf_LocalSigningID);
      if (lVar12 == 0) {
LAB_0025f076:
        _T200UpdaterCreateRequestWithLogging_cold_16();
LAB_0025f0a5:
        uVar18 = 2;
        _T200RestoreInfoLog("%s:%d End,Failed with ret=%d\n","_createRequestDictForTATSU",0x157,2);
        _CFRelease(lVar11);
        goto LAB_0025e824;
      }
      lVar12 = _CFGetTypeID(lVar12);
      lVar13 = _CFBooleanGetTypeID();
      if (lVar12 != lVar13) goto LAB_0025f076;
      lVar12 = _CFDictionaryGetValue(lVar9,&cf_ChipID);
      if (lVar12 == 0) {
LAB_0025f07d:
        _T200UpdaterCreateRequestWithLogging_cold_15();
        goto LAB_0025f0a5;
      }
      lVar13 = _CFGetTypeID(lVar12);
      lVar14 = _CFNumberGetTypeID();
      if (lVar13 != lVar14) goto LAB_0025f07d;
      _CFDictionarySetValue(lVar11,&cf_BMU_ChipID,lVar12);
      lVar12 = _CFDictionaryGetValue(lVar9,&cf_ProductionMode);
      if (lVar12 == 0) {
LAB_0025f084:
        _T200UpdaterCreateRequestWithLogging_cold_14();
        goto LAB_0025f0a5;
      }
      lVar13 = _CFGetTypeID(lVar12);
      lVar14 = _CFBooleanGetTypeID();
      if (lVar13 != lVar14) goto LAB_0025f084;
      cVar4 = _CFBooleanGetValue(lVar12);
      uVar19 = uVar18;
      if (cVar4 == '\0') {
        uVar19 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      _CFDictionaryAddValue(lVar11,&cf_BMU_ProductionMode,uVar19);
      lVar12 = _CFDictionaryGetValue(lVar9,&cf_UniqueID);
      if (lVar12 == 0) {
LAB_0025f08b:
        _T200UpdaterCreateRequestWithLogging_cold_13();
        goto LAB_0025f0a5;
      }
      lVar13 = _CFGetTypeID(lVar12);
      lVar14 = _CFNumberGetTypeID();
      if (lVar13 != lVar14) goto LAB_0025f08b;
      _CFDictionaryAddValue(lVar11,&cf_BMU_UniqueID,lVar12);
      lVar12 = _CFDictionaryGetValue(lVar9,&cf_Nonce);
      if (lVar12 == 0) {
LAB_0025f092:
        _T200UpdaterCreateRequestWithLogging_cold_12();
        goto LAB_0025f0a5;
      }
      lVar13 = _CFGetTypeID(lVar12);
      lVar14 = _CFDataGetTypeID();
      if (lVar13 != lVar14) goto LAB_0025f092;
      _CFDictionaryAddValue(lVar11,&cf_BMU_Nonce,lVar12);
      lVar12 = _CFDictionaryGetValue(local_78,&cf_BMU_FirmwareMap);
      if (lVar12 == 0) {
LAB_0025f099:
        _T200UpdaterCreateRequestWithLogging_cold_11();
        goto LAB_0025f0a5;
      }
      lVar13 = _CFGetTypeID(lVar12);
      lVar14 = _CFDictionaryGetTypeID();
      if (lVar13 != lVar14) goto LAB_0025f099;
      _CFDictionaryAddValue(lVar11,&cf_BMU_FirmwareMap,lVar12);
      if (local_90 != 0) {
        lVar12 = _CFDictionaryGetValue(local_90,&cf_BMU_DigestMap);
        if (lVar12 != 0) {
          lVar13 = _CFGetTypeID(lVar12);
          lVar14 = _CFDictionaryGetTypeID();
          if (lVar13 == lVar14) {
            _CFDictionaryAddValue(lVar11,&cf_BMU_DigestMap,lVar12);
            goto LAB_0025ecc9;
          }
        }
        _T200UpdaterCreateRequestWithLogging_cold_9();
        goto LAB_0025f0a5;
      }
LAB_0025ecc9:
      if (local_68 != 0) {
        _CFDictionaryAddValue(lVar11,&cf_BMU_BoardID);
      }
      _T200RestoreInfoLog("%s:%d Start\n","AddEntitlementsToTATSURequestDict",0xe5);
      if (bVar1) {
        _T200RestoreInfoLog("%s:%d Add Entitlements kT200TagFWOverWrite\n",
                            "AddEntitlementsToTATSURequestDict",0xe8);
        _CFDictionaryAddValue(lVar11,&cf_BMU_ForceFirmwareUpgrade,uVar18);
      }
      if (local_60 == 0) {
        _T200RestoreInfoLog("%s:%d No additional option selected for Veridian update\n",
                            "AddEntitlementsToTATSURequestDict",0xec);
      }
      else {
        _T200RestoreInfoLog("%s:%d Restore Options\n","AddEntitlementsToTATSURequestDict",0xee);
        _T200CFShow(local_60);
        lVar12 = _CFDictionaryGetValue(local_60,&cf_EnableDeveloperCommands);
        if ((lVar12 != 0) && (cVar4 = _CFBooleanGetValue(lVar12), cVar4 != '\0')) {
          _T200RestoreInfoLog("%s:%d Add Entitlements kT200TagFAEnableOption\n",
                              "AddEntitlementsToTATSURequestDict",0xf3);
          _CFDictionaryAddValue(lVar11,&cf_BMU_EnableDeveloperCommands,uVar18);
        }
        lVar12 = _CFDictionaryGetValue(local_60,&cf_EnableValidationCommands);
        if ((lVar12 != 0) && (cVar4 = _CFBooleanGetValue(lVar12), cVar4 != '\0')) {
          _T200RestoreInfoLog("%s:%d Add Entitlements kT200TagVNVEnableOption\n",
                              "AddEntitlementsToTATSURequestDict",0xf9);
          _CFDictionaryAddValue(lVar11,&cf_BMU_EnableValidationCommands,uVar18);
        }
        lVar12 = _CFDictionaryGetValue(local_60,&cf_RollbackFWVer);
        if ((lVar12 != 0) && (cVar4 = _CFBooleanGetValue(lVar12), cVar4 != '\0')) {
          _T200RestoreInfoLog("%s:%d Add Entitlements kT200TagEFFV\n",
                              "AddEntitlementsToTATSURequestDict",0xff);
          _CFDictionaryAddValue(lVar11,&cf_BMU_EnableFutureFWVersion,uVar18);
        }
        _T200RestoreInfoLog("%s:%d End\n","AddEntitlementsToTATSURequestDict",0x103);
      }
      lVar12 = _CFRetain(lVar11);
      _T200RestoreInfoLog("%s:%d End\n","_createRequestDictForTATSU",0x153);
      _CFRelease(lVar11);
      if (lVar12 == 0) {
        _T200UpdaterCreateRequestWithLogging_cold_10(local_58);
        lVar11 = local_58[0];
        goto LAB_0025ef34;
      }
      _T200RestoreInfoLog("%s:%d End\n","__T200UpdaterCreateRequestWithLogging",0x2f4);
      goto LAB_0025ef8a;
    }
LAB_0025f051:
    _T200UpdaterCreateRequestWithLogging_cold_19();
    lVar12 = 0;
    lVar10 = 0;
  }
  _CFRelease(lVar8);
LAB_0025efa0:
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (lVar10 != 0) {
    _CFRelease(lVar10);
  }
  if (local_60 != 0) {
    _CFRelease();
  }
  if (local_80 != 0) {
    _CFRelease(local_80);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_58[4]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar12;
}

