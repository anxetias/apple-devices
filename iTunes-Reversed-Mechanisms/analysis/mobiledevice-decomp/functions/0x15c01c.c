// rea decompile_all
// name: ___thr_AMRestorableDevicePrepareOptions
// address: 0x15c01c
// body: available
// range: 0x15c01c-0x160254 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1601bc to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDevicePrepareOptions(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  pid_t pVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined4 extraout_var;
  ssize_t sVar18;
  undefined8 uVar19;
  char *pcVar20;
  undefined8 uVar21;
  size_t sVar22;
  void *pvVar23;
  ulong uVar24;
  char *pcVar25;
  cfstringStruct *pcVar26;
  undefined8 uVar27;
  int *piVar28;
  undefined *puVar29;
  bool bVar30;
  cfstringStruct *pcVar31;
  cfstringStruct *pcVar32;
  long *plVar33;
  undefined1 auVar34 [16];
  undefined1 local_11b8 [24];
  long local_11a0;
  long local_1188;
  long local_1180;
  cfstringStruct *local_1130;
  undefined4 local_1124;
  long local_1120;
  undefined8 local_1118;
  uint local_110c;
  long local_1108;
  cfstringStruct *local_1100;
  long local_10f8;
  long local_10f0;
  cfstringStruct *local_10e8;
  cfstringStruct *pcStack_10e0;
  char *local_10d0;
  cfstringStruct *local_10c8;
  long local_10c0;
  cfstringStruct *local_10b8;
  long local_10b0;
  char *local_10a8;
  long local_10a0;
  undefined8 local_1098;
  long local_1090;
  long local_1088;
  long local_1080;
  long local_1078;
  undefined8 local_1070;
  long local_1068;
  long *local_1060;
  long local_1058 [128];
  long local_c58;
  int local_c50;
  cfstringStruct *local_858 [128];
  cfstringStruct *local_458;
  long lStack_450;
  cfstringStruct *local_448;
  dispatch_object_t dStack_440;
  long local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  char *local_58;
  ulong local_50;
  cfstringStruct *local_48;
  cfstringStruct *pcStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_1120 = 0;
  if (param_1 == (long *)0x0) {
    local_10b0 = 0;
    local_10a0 = 0;
    local_1090 = 0;
    local_1068 = 0;
    local_1108 = 0;
    local_1078 = 0;
    bVar30 = false;
    pcVar31 = &cf_Can_tprepareoptionswithNULLcontext;
    lVar11 = 0;
    pcVar32 = (cfstringStruct *)0x0;
    goto LAB_0015fa96;
  }
  if (*param_1 == 0) {
    pcVar31 = &cf_Can_tprepareNULLdevice;
LAB_0015c0a0:
    local_1088 = 0;
LAB_0015c0ab:
    local_10b8 = (cfstringStruct *)0x0;
  }
  else {
    if (param_1[1] == 0) {
      pcVar31 = &cf_Can_tupdateNULLrestoreoptions;
      goto LAB_0015c0a0;
    }
    __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78));
    __AMRestorableDeviceCleanupAttestedRestoreData(*param_1);
    __AMRestorableDeviceCleanupCheckpointData(*param_1);
    iVar5 = _AMRestoreOptionsApplyMacOSChangesIfNeeded(param_1[1]);
    if (iVar5 != 0) {
      pcVar31 = &cf_failedtoapplymacOSrestoreoptionchangesinPrepare_;
      goto LAB_0015c0a0;
    }
    local_10c8 = *(cfstringStruct **)PTR__kCFBooleanFalse_00441108;
    _CFDictionarySetValue(param_1[1],&cf_SkipPreflightPersonalization);
    lVar11 = _CFDictionaryGetValue(param_1[1],&cf_InstallRecoveryOS);
    if (lVar11 == 0) {
      lVar11 = *(long *)PTR__kCFBooleanTrue_00441110;
      _CFDictionarySetValue(param_1[1],&cf_InstallRecoveryOS,lVar11);
    }
    lVar16 = param_1[1];
    if (lVar16 == 0) {
      pcVar31 = &cf_Can_treplateURLswithNULLrestoreoptions;
LAB_0015fdb4:
      _AMRSafeLogAndRelease(3,pcVar31);
      pcVar31 = &cf_FailedtoconvertnetworkURL_stofileURL_s;
      goto LAB_0015c0a0;
    }
    local_1070 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_1060 = param_1;
    lVar12 = _CFDictionaryGetValue(lVar16,&cf_RestoreBundlePath);
    if (lVar12 != 0) {
      lVar13 = _CFGetTypeID(lVar12);
      lVar14 = _CFStringGetTypeID();
      if (lVar13 == lVar14) {
        lVar13 = _AMAuthInstallSupportCreateURLFromString(local_1070,lVar12);
LAB_0015c1dd:
        if (lVar13 != 0) {
          cVar3 = _AMRIsURLSchemeType(lVar13,&cf_https);
          lVar14 = lVar13;
          if (((cVar3 != '\0') || (cVar3 = _AMRIsURLSchemeType(lVar13,&cf_http), cVar3 != '\0')) ||
             (cVar3 = _AMRIsURLSchemeType(lVar13,&cf_file), cVar3 != '\0')) {
LAB_0015c26f:
            _CFRelease(lVar14);
            goto LAB_0015c277;
          }
          lVar15 = _AMRCopyFileURLForNetworkURL(lVar13);
          if (lVar15 == 0) {
            pcVar31 = &cf_FailedtogetlocalURLfornetworkURL___;
            lVar15 = 0;
          }
          else {
            lVar14 = _AMRCopyFileSystemPathForURL(lVar15);
            if (lVar14 != 0) {
              _CFDictionarySetValue(lVar16,&cf_RestoreBundlePath,lVar14);
              _CFRelease(lVar13);
              _CFRelease(lVar15);
              goto LAB_0015c26f;
            }
            pcVar31 = &cf_FailedtogetfilepathfromURL___;
            lVar12 = lVar15;
          }
          uVar27 = _AMRMakeString(pcVar31,lVar12);
          _AMRSafeLogAndRelease(3,uVar27);
          _CFRelease(lVar13);
          pcVar31 = &cf_FailedtoconvertnetworkURL_stofileURL_s;
          if (lVar15 != 0) {
            _CFRelease(lVar15);
          }
          local_1088 = 0;
          local_10b8 = (cfstringStruct *)0x0;
          local_1108 = 0;
          local_1068 = 0;
          local_1090 = 0;
          local_10a0 = 0;
          local_10b0 = 0;
          goto LAB_001600d8;
        }
        pcVar31 = &cf_FailedtoconvertkeyvaluetoURL___;
      }
      else {
        lVar13 = _CFGetTypeID(lVar12);
        lVar14 = _CFURLGetTypeID();
        if (lVar13 == lVar14) {
          lVar13 = _CFRetain(lVar12);
          goto LAB_0015c1dd;
        }
        pcVar31 = &cf_UnexpectedCFtypeforkey___;
      }
      param_1 = local_1060;
      pcVar31 = (cfstringStruct *)_AMRMakeString(pcVar31,&cf_RestoreBundlePath);
      goto LAB_0015fdb4;
    }
LAB_0015c277:
    param_1 = local_1060;
    lVar16 = _CFDictionaryGetValue(local_1060[1],&cf_RestoreBundlePath);
    pcVar31 = (cfstringStruct *)
              _CFDictionaryGetValue(param_1[1],&cf_RestoreBundleOriginalPathOverride);
    if (pcVar31 == (cfstringStruct *)0x0) {
      _CFDictionarySetValue(param_1[1],&cf_RestoreBundleOriginalPathOverride,lVar16);
      pcVar31 = (cfstringStruct *)
                _CFDictionaryGetValue(param_1[1],&cf_RestoreBundleOriginalPathOverride);
    }
    local_1078 = lVar11;
    if (lVar16 == 0) {
      local_10b0 = 0;
      local_10a0 = 0;
      local_1090 = 0;
      local_1068 = 0;
      local_1108 = 0;
      pcVar31 = (cfstringStruct *)0x0;
      lVar11 = 0;
LAB_0015d6ee:
      local_10b8 = pcVar31;
      local_1088 = lVar11;
      cVar3 = _CFBooleanGetValue(local_1078);
      if (cVar3 != '\0') {
        plVar33 = *(long **)(*param_1 + 0x20);
        if (plVar33 == (long *)0x0) {
          AMDeviceProxy::Log(0,(__CFString *)((long)&MACH_HEADER.magic + 3),&cf___,
                             &cf_Can_tresolverecoveryOSvariantwithNULLproxy);
          _CFRelease(&cf_Can_tresolverecoveryOSvariantwithNULLproxy);
          lVar11 = param_1[1];
        }
        else {
          cVar3 = (**(code **)(*plVar33 + 0xd8))(plVar33,param_1[1]);
          lVar11 = param_1[1];
          if (cVar3 != '\0') {
            _CFDictionarySetValue(lVar11,&cf_InstallRecoveryOS,local_10c8);
            _AMRSafeLog(7,&cf_Norecoveryvariantfoundinbundle_continuewithoutrecoveryOSinstallation_)
            ;
            goto LAB_0015ed96;
          }
        }
        lVar11 = _CFDictionaryGetValue(lVar11,&cf_BundleOverrides);
        if (lVar11 == 0) {
          lVar11 = param_1[1];
        }
        lVar11 = _CFDictionaryGetValue(lVar11,&cf_RecoveryOSBundlePath);
        if (lVar11 == 0) {
          lVar11 = _CFDictionaryGetValue(param_1[1],&cf_RestoreBundlePath);
        }
        _CFDictionarySetValue(param_1[1],&cf_RecoveryOSBundlePath,lVar11);
        _CFDictionarySetValue(param_1[1],&cf_RecoveryOSSourceBundlePath,lVar11);
        if (lVar11 != 0) goto LAB_0015ed96;
        pcVar31 = &cf_FailedtogetrecoveryOSbundlepath_;
LAB_0015f9d5:
        cVar3 = '\0';
        local_1078 = 0;
        goto LAB_0015f9e0;
      }
LAB_0015ed96:
      lVar11 = _CFDictionaryGetValue(param_1[1],&cf_AHTOptions);
      if ((lVar11 != 0) && (lVar16 = _CFDictionaryGetValue(lVar11,&cf_multi_touch), lVar16 != 0)) {
        _CFDictionarySetValue(lVar11,&cf_touch,lVar16);
        _AMRSafeLog(7,&cf_Copymulti_touchrestoreoptionstotouchsupportbothtypesofservicenames_);
      }
      if (*(int *)(*param_1 + 0x2c) == 8) {
        _usleep(10000000);
        if (*(int *)(*param_1 + 0x2c) == 8) {
          *(undefined4 *)(*param_1 + 0x2c) = 2;
          local_10b0 = _AMRCreateErrorWithDomain
                                 (&
                                  cf_Devicedisappearedwhilepreparingrestore_eitherdevicegoneofflinewhilewaitingforrestoretocommence_orUSBconnectionwaslost
                                  ,0xfc8,&cf_com_apple_MobileDevice_MobileRestore,0);
          pvVar23 = (void *)*param_1;
          if (pvVar23 == (void *)0x0) {
            _AMRSafeLog(3,&cf___,&cf_Can_thandledisconnectwithoutdevice);
            _CFRelease(&cf_Can_thandledisconnectwithoutdevice);
          }
          else {
            _CFRetain(pvVar23);
            _dispatch_async_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),pvVar23,
                              ___thr_AMRestorableDeviceHandleDisconnectionAsync);
          }
          pcVar31 = (cfstringStruct *)0x0;
          goto LAB_0015f9d5;
        }
      }
      lVar11 = __AMRestorableCopyDeviceMapFromRestoreOptions(param_1[1]);
      pcVar31 = (cfstringStruct *)*param_1;
      local_1078 = lVar11;
      if (lVar11 == 0) {
        uVar10 = 600;
      }
      else {
        local_858[0] = (cfstringStruct *)CONCAT44(local_858[0]._4_4_,600);
        lVar16 = _CFDictionaryGetValue(pcVar31[2].field2_0x10,&cf_TransitionTimeout);
        if (lVar16 == 0) {
          local_458 = pcVar31;
          lStack_450 = lVar11;
          ___thr_AMRestorableDeviceCopyBoardConfig(&local_458);
          uVar27 = local_1070;
          local_10c8 = local_448;
          if (local_448 == (cfstringStruct *)0x0) {
            pcVar31 = &cf_Can_tgettimeoutvaluewithNULLboardconfig;
            goto LAB_0015eecc;
          }
          lVar16 = _CFLocaleCreate(local_1070,&cf_en_US);
          if (lVar16 == 0) {
            _AMRSafeLogAndRelease(3,&cf_Failedtogetcurrentlocale);
            _CFRelease(local_10c8);
            param_1 = local_1060;
          }
          else {
            pcVar20 = (char *)0x0;
            lVar12 = _CFStringCreateMutableCopy(uVar27,0,local_10c8);
            if (lVar12 == 0) {
              pcVar31 = &cf_Failedtoallocatelowercaseboardconfig;
              lVar12 = 0;
            }
            else {
              _CFStringLowercase(lVar12,lVar16);
              lVar11 = _CFDictionaryGetValue(lVar11,lVar12);
              if (lVar11 == 0) {
                pcVar31 = &cf_Can_tfindtimeoutvaluefordevicethatisn_tindevicemap;
              }
              else {
                lVar11 = _CFDictionaryGetValue(lVar11,&cf_TransitionTimeout);
                if (lVar11 == 0) {
                  pcVar31 = (cfstringStruct *)0x0;
                }
                else {
                  lVar13 = _CFStringGetLength(lVar11);
                  pcVar20 = _calloc(lVar13 + 1U,1);
                  if (pcVar20 != (char *)0x0) {
                    cVar3 = _CFStringGetCString(lVar11,pcVar20,lVar13 + 1U,0x8000100);
                    if (cVar3 == '\0') {
                      pcVar31 = &cf_Failedtoconverttimeoutvalueintocstring;
                    }
                    else {
                      pcVar31 = (cfstringStruct *)0x0;
                      _sscanf(pcVar20,"%X",local_858);
                    }
                    goto LAB_0015efeb;
                  }
                  pcVar31 = &cf_Failedtoallocatebufferforhextimeoutcstring;
                }
              }
              pcVar20 = (char *)0x0;
            }
LAB_0015efeb:
            _AMRSafeLogAndRelease(3,pcVar31);
            _CFRelease(lVar16);
            if (lVar12 != 0) {
              _CFRelease(lVar12);
            }
            _CFRelease(local_10c8);
            param_1 = local_1060;
            if (pcVar20 != (char *)0x0) {
              _free(pcVar20);
            }
          }
        }
        else {
          _CFNumberGetValue(lVar16,3,local_858);
          pcVar31 = (cfstringStruct *)0x0;
          _AMRSafeLog(6,&cf_DeviceTransitiontimeouthasbeenoverriddenbyPRDoc_It_snow_dseconds,
                      (ulong)local_858[0] & 0xffffffff);
LAB_0015eecc:
          _AMRSafeLogAndRelease(3,pcVar31);
        }
        pcVar31 = (cfstringStruct *)*param_1;
        uVar10 = local_858[0]._0_4_;
      }
      *(undefined4 *)&pcVar31[3].field1_0x8 = uVar10;
      lVar11 = _CFDictionaryGetValue(param_1[1],&cf_USBDebounceTimer);
      if (lVar11 == 0) {
LAB_0015f0a4:
        *(undefined4 *)(*param_1 + 0x6c) = 2;
      }
      else {
        lVar16 = _CFGetTypeID(lVar11);
        lVar12 = _CFNumberGetTypeID();
        if (lVar16 != lVar12) goto LAB_0015f0a4;
        local_458 = (cfstringStruct *)((ulong)local_458 & 0xffffffff00000000);
        _CFNumberGetValue(lVar11,3,&local_458);
        iVar5 = 0;
        if (0 < (int)local_458) {
          iVar5 = (int)local_458;
        }
        *(int *)(*local_1060 + 0x6c) = iVar5;
        param_1 = local_1060;
      }
      lVar11 = _CFDictionaryGetValue(param_1[1],&cf_AuthInstallVariant);
      plVar33 = local_1060;
      if (lVar11 != 0) {
        uVar27 = _CFDictionaryGetValue(local_1060[1],&cf_AuthInstallVariant);
        lVar11 = _CFStringCompare(uVar27,&cf_InternalEmulationDevelopment,1);
        lVar16 = _CFDictionaryGetValue(plVar33[1],&cf_NVRAMVariableModifications);
        uVar27 = _CFArrayCreateMutable(local_1070,0,PTR__kCFTypeArrayCallBacks_004411a8);
        if (lVar11 == 0) {
          if (lVar16 == 0) {
            _AMRSafeLog(7,&cf_NVRAMmodificationsdon_texist_Creatingthem_);
            lVar16 = _CFArrayCreateMutable(local_1070,0,PTR__kCFTypeArrayCallBacks_004411a8);
            _CFDictionarySetValue(plVar33[1],&cf_NVRAMVariableModifications,lVar16);
            _CFRelease(lVar16);
          }
          _CFArraySetValueAtIndex(uVar27,0,&cf_Add);
          _CFArraySetValueAtIndex(uVar27,1,&cf_emu);
          _CFArraySetValueAtIndex(uVar27,2,&cf_1);
          _AMRSafeLog(7,&cf_Adding_add_NVRAMmodificationstothekey_);
          _CFArrayAppendValue(lVar16,uVar27);
          for (lVar11 = 0; lVar12 = _CFArrayGetCount(lVar16), lVar11 < lVar12; lVar11 = lVar11 + 1)
          {
            uVar27 = _CFArrayGetValueAtIndex(lVar16,lVar11);
            uVar21 = _CFArrayGetValueAtIndex(uVar27,0);
            uVar19 = _CFArrayGetValueAtIndex(uVar27,1);
            lVar12 = _CFStringCompare(uVar19,&cf_emu,1);
            if (lVar12 == 0) {
              lVar12 = _CFStringCompare(uVar21,&cf_Add,1);
              if (lVar12 == 0) {
                lVar12 = _CFArrayGetCount(uVar27);
                if (lVar12 < 3) {
                  _CFArrayAppendValue(uVar27,&cf_1);
                }
                else {
                  uVar21 = _CFArrayGetValueAtIndex(uVar27,2);
                  lVar12 = _CFStringCompare(uVar21,&cf_0,1);
                  if (lVar12 == 0) goto LAB_0015f3cb;
                }
              }
              else {
                lVar12 = _CFStringCompare(uVar21,&cf_Remove,1);
                if (lVar12 == 0) {
                  _CFArraySetValueAtIndex(uVar27,0,&cf_Add);
LAB_0015f3cb:
                  _CFArraySetValueAtIndex(uVar27,2,&cf_1);
                }
              }
            }
          }
        }
        else {
          if (lVar16 == 0) {
            _AMRSafeLog(7,&cf_NVRAMmodificationsdon_texist_Creatingthem_);
            lVar16 = _CFArrayCreateMutable(local_1070,0,PTR__kCFTypeArrayCallBacks_004411a8);
            _CFDictionarySetValue(plVar33[1],&cf_NVRAMVariableModifications,lVar16);
            _CFRelease(lVar16);
          }
          _CFArraySetValueAtIndex(uVar27,0,&cf_Remove);
          _CFArraySetValueAtIndex(uVar27,1,&cf_emu);
          _AMRSafeLog(7,&cf_Adding_remove_NVRAMmodificationstothekey_);
          _CFArrayAppendValue(lVar16,uVar27);
          for (lVar11 = 0; lVar12 = _CFArrayGetCount(lVar16), lVar11 < lVar12; lVar11 = lVar11 + 1)
          {
            uVar27 = _CFArrayGetValueAtIndex(lVar16,lVar11);
            uVar21 = _CFArrayGetValueAtIndex(uVar27,0);
            uVar19 = _CFArrayGetValueAtIndex(uVar27,1);
            lVar12 = _CFStringCompare(uVar19,&cf_emu,1);
            if ((lVar12 == 0) && (lVar12 = _CFStringCompare(uVar21,&cf_Add,1), lVar12 == 0)) {
              _CFArraySetValueAtIndex(uVar27,0,&cf_Remove);
              lVar12 = _CFArrayGetCount(uVar27);
              if (2 < lVar12) {
                _CFArrayRemoveValueAtIndex(uVar27,2);
              }
            }
          }
        }
      }
      plVar33 = local_1060;
      lVar11 = _CFDictionaryGetValue(local_1060[1],&cf_EnableVolumeSplit);
      if ((lVar11 == 0) ||
         (lVar11 = _CFDictionaryGetValue(plVar33[1],&cf_EnableVolumeSplit), uVar27 = local_1070,
         puVar2 = PTR__kCFTypeArrayCallBacks_004411a8,
         lVar11 != *(long *)PTR__kCFBooleanTrue_00441110)) {
        _AMRSafeLog(7,&cf_Notsettingapfsboot_argsbecauseoptionisnotsettotrue_);
      }
      else {
        puVar29 = PTR__kCFBooleanTrue_00441110;
        local_10c8 = (cfstringStruct *)
                     _CFArrayCreateMutable(local_1070,0,PTR__kCFTypeArrayCallBacks_004411a8);
        uVar10 = SUB84(puVar29,0);
        pcVar20 = (char *)_CFArrayCreateMutable(uVar27,0,puVar2);
        pcVar26 = (cfstringStruct *)_CFArrayCreateMutable(uVar27,0,puVar2);
        pcVar32 = (cfstringStruct *)_CFArrayCreateMutable(uVar27,0,puVar2);
        lVar11 = _CFArrayCreateMutable(uVar27,0,puVar2);
        pcVar31 = local_10c8;
        auVar34._0_4_ = -(uint)((int)((ulong)local_10c8 >> 0x20) == 0 && (int)local_10c8 == 0);
        auVar34._4_4_ = -(uint)((int)pcVar20 == 0 && (int)((ulong)pcVar20 >> 0x20) == 0);
        auVar34._8_4_ = -(uint)((int)((ulong)pcVar26 >> 0x20) == 0 && (int)pcVar26 == 0);
        auVar34._12_4_ = -(uint)((int)pcVar32 == 0 && (int)((ulong)pcVar32 >> 0x20) == 0);
        iVar5 = movmskps(uVar10,auVar34);
        if (iVar5 == 0 && lVar11 != 0) {
          local_1080 = lVar11;
          _CFArraySetValueAtIndex(local_10c8,0,&cf_Add);
          _CFArraySetValueAtIndex(pcVar31,1,&cf__apfs_newvf_enabled);
          _CFArraySetValueAtIndex(pcVar20,0,&cf_Add);
          local_10a8 = pcVar20;
          _CFArraySetValueAtIndex(pcVar20,1,&cf__apfs_shared_datavolume);
          _CFArraySetValueAtIndex(pcVar26,0,&cf_Add);
          local_1100 = pcVar26;
          _CFArraySetValueAtIndex(pcVar26,1,&cf_keybag_initlog);
          _CFArraySetValueAtIndex(pcVar32,0,&cf_Add);
          _CFArraySetValueAtIndex(pcVar32,1,&cf_trm_default);
          _CFArraySetValueAtIndex(pcVar32,2,&cf_0);
          lVar11 = local_1080;
          _CFArraySetValueAtIndex(local_1080,0,&cf_Add);
          _CFArraySetValueAtIndex(lVar11,1,&cf__apfs_restorevf_enabled);
          lVar16 = _CFDictionaryGetValue(plVar33[1],&cf_PersistantBootArgsModifications);
          local_10e8 = pcVar32;
          if (lVar16 == 0) {
            _AMRSafeLog(7,&cf_PersistentBootArgsmodificationsdon_texist_Creatingthem_);
            lVar16 = _CFArrayCreateMutable(local_1070,0,PTR__kCFTypeArrayCallBacks_004411a8);
            if (lVar16 != 0) {
              _CFDictionarySetValue(local_1060[1],&cf_PersistantBootArgsModifications,lVar16);
              _CFRelease(lVar16);
              lVar11 = local_1080;
              goto LAB_0015f917;
            }
            _AMRSafeLog(3,&cf_Failedallocatingboot_argsarray);
          }
          else {
LAB_0015f917:
            pcVar31 = local_10e8;
            _CFArrayAppendValue(lVar16,local_10c8);
            _CFArrayAppendValue(lVar16,local_10a8);
            _CFArrayAppendValue(lVar16,local_1100);
            _CFArrayAppendValue(lVar16,pcVar31);
            _CFArrayAppendValue(lVar16,lVar11);
          }
          plVar33 = local_1060;
          lVar11 = _CFDictionaryGetValue(local_1060[1],&cf_RestoreBootArgs);
          if (lVar11 == 0) {
            pcVar31 = &cf_RestoreBootArgsdon_texist_sonotaddingAPFSmigratorrequiredboot_args_;
            uVar27 = 7;
          }
          else {
            lVar11 = _CFStringCreateWithFormat
                               (local_1070,0,&cf_________,lVar11,&cf__apfs_newvf_enabled,
                                &cf__apfs_shared_datavolume,&cf__apfs_restorevf_enabled);
            if (lVar11 != 0) {
              _CFDictionarySetValue(plVar33[1],&cf_RestoreBootArgs,lVar11);
              _CFRelease(lVar11);
              pcVar20 = local_10a8;
              pcVar32 = local_10e8;
              lVar11 = local_1080;
              pcVar26 = local_1100;
              goto LAB_0015fbf4;
            }
            pcVar31 = &cf_Failedallocatingboot_argsstring;
            uVar27 = 3;
          }
          _AMRSafeLog(uVar27,pcVar31);
          pcVar20 = local_10a8;
          pcVar32 = local_10e8;
          lVar11 = local_1080;
          pcVar26 = local_1100;
        }
        else {
          _AMRSafeLog(3,&cf_Failedallocatingboot_argmodificationarray);
        }
LAB_0015fbf4:
        if (local_10c8 != (cfstringStruct *)0x0) {
          _CFRelease();
        }
        if (pcVar20 != (char *)0x0) {
          _CFRelease(pcVar20);
        }
        if (pcVar26 != (cfstringStruct *)0x0) {
          _CFRelease(pcVar26);
        }
        if (pcVar32 != (cfstringStruct *)0x0) {
          _CFRelease(pcVar32);
        }
        if (lVar11 != 0) {
          _CFRelease(lVar11);
        }
      }
      lVar11 = _AMRestorableDeviceCopyUserFriendlyName(*plVar33);
      local_458 = (cfstringStruct *)0x0;
      iVar5 = __AMDeviceProxyGetState(*(undefined8 *)(*plVar33 + 0x20));
      if (iVar5 == 4) {
        uVar27 = __AMDeviceProxyGetDeviceRef(*(undefined8 *)(*plVar33 + 0x20));
        lVar16 = _CFGetTypeID(uVar27);
        if (__AMDeviceTypeID == 0) {
          __AMDeviceTypeID = __CFRuntimeRegisterClass(&_AMDeviceGetTypeID__AMDeviceClass);
        }
        if (lVar16 != __AMDeviceTypeID) goto LAB_0015f4b9;
        lVar16 = _AMDeviceCreateCopy(uVar27);
      }
      else {
LAB_0015f4b9:
        lVar16 = 0;
      }
      pcVar32 = &cf__unknown_;
      pcVar31 = &cf__unknown_;
      if (local_1078 != 0) {
        pcVar26 = (cfstringStruct *)
                  __AMDeviceProxyCopyBoardConfig(*(undefined8 *)(*local_1060 + 0x20));
        pcVar31 = &cf__unknown_;
        if (pcVar26 != (cfstringStruct *)0x0) {
          pcVar31 = pcVar26;
        }
      }
      if ((lVar16 != 0) && (iVar5 = _AMDeviceConnect(lVar16), iVar5 == 0)) {
        lVar12 = _AMDeviceCopyValueWithError(lVar16,0,&cf_DeviceClass,0);
        pcVar26 = (cfstringStruct *)_AMDeviceCopyValueWithError(lVar16,0,&cf_BuildVersion,0);
        if (lVar12 != 0) {
          lVar11 = lVar12;
        }
        pcVar32 = &cf__unknown_;
        if (pcVar26 != (cfstringStruct *)0x0) {
          pcVar32 = pcVar26;
        }
        _AMDeviceDisconnect(lVar16);
      }
      plVar33 = local_1060;
      _CFDictionaryAddValue(*(undefined8 *)(*local_1060 + 0xd8),&cf_BoardConfig,pcVar31);
      _CFDictionaryAddValue(*(undefined8 *)(*plVar33 + 0xd8),&cf_DeviceClass,lVar11);
      local_10c8 = pcVar32;
      _CFDictionaryAddValue(*(undefined8 *)(*plVar33 + 0xd8),&cf_BuildVersion,pcVar32);
      lVar12 = _CFDictionaryGetValue(plVar33[1],&cf_RestoreBundlePath);
      uVar27 = local_1070;
      if (lVar12 == 0) {
        lVar12 = 0;
        lVar13 = 0;
      }
      else {
        local_1080 = lVar16;
        lVar12 = _CFURLCreateWithFileSystemPath(local_1070,lVar12,0,1);
        lVar13 = _CFURLCreateCopyAppendingPathComponent(uVar27,lVar12,&cf_Restore_plist,0);
        if (lVar13 == 0) {
          lVar13 = 0;
          lVar16 = local_1080;
        }
        else {
          iVar5 = _AMAuthInstallSupportCreateDictionaryFromFileURL(uVar27,&local_458,lVar13);
          lVar16 = local_1080;
          if ((iVar5 == 0) &&
             (lVar14 = _CFDictionaryGetValue(local_458,&cf_ProductBuildVersion), lVar16 = local_1080
             , lVar14 != 0)) {
            _CFDictionaryAddValue(*(undefined8 *)(*local_1060 + 0xd8),&cf_TargetOSVersion,lVar14);
            lVar16 = local_1080;
          }
        }
      }
      _CFRelease(pcVar31);
      if (lVar11 != 0) {
        _CFRelease(lVar11);
      }
      _CFRelease(local_10c8);
      if (lVar16 != 0) {
        _CFRelease(lVar16);
      }
      param_1 = local_1060;
      if (lVar12 != 0) {
        _CFRelease(lVar12);
      }
      if (lVar13 != 0) {
        _CFRelease(lVar13);
      }
      if (local_458 != (cfstringStruct *)0x0) {
        _CFRelease();
      }
      cVar3 = __AMRestorableDeviceSetStateOnEventQueue(*param_1,6);
      pcVar31 = (cfstringStruct *)0x0;
      if (cVar3 == '\0') {
        pcVar31 = &cf_Failedtochangetorestoringstate;
      }
      goto LAB_0015f9e0;
    }
    local_1100 = pcVar31;
    lVar11 = _AMAuthInstallSupportCreateURLFromString(local_1070,lVar16);
    if (lVar11 == 0) {
      local_1088 = 0;
      pcVar31 = (cfstringStruct *)_AMRMakeString(&cf_FailedtocreateURLfromstring___,lVar16);
      goto LAB_0015c0ab;
    }
    local_10b8 = (cfstringStruct *)_CFURLCopyPathExtension(lVar11);
    if (local_10b8 == (cfstringStruct *)0x0) {
      local_10b0 = 0;
      local_10a0 = 0;
      local_1090 = 0;
      local_1068 = 0;
      local_1108 = 0;
      local_10b8 = (cfstringStruct *)0x0;
      goto LAB_0015d00f;
    }
    local_1108 = _CFURLCopyScheme(lVar11);
    if (local_1108 != 0) {
      lVar16 = _CFStringCompare(local_1108,&cf_http,1);
      if ((lVar16 != 0) && (lVar16 = _CFStringCompare(local_1108,&cf_https,1), lVar16 != 0)) {
        local_10b0 = 0;
LAB_0015c8b8:
        lVar16 = _CFStringCompare(local_10b8,&cf_dmg,1);
        if (lVar16 == 0) {
          _AMRLog(7,&cf_FounddiskimageinrestorebundleURL_attemptingtomount___,lVar11);
          __AMRestorableDeviceNotifyStatusInfoChanged(*param_1,0xca,0xffffffff,0);
          cVar3 = (*(code *)PTR__objc_msgSend_00441098)
                            (&objc::class_t::AMRManagedDiskImagesRegistry,"isAvailable");
          puVar2 = PTR__objc_msgSend_00441098;
          local_1088 = lVar11;
          if (cVar3 == '\0') {
LAB_0015c963:
            local_c58 = 0;
            pVar6 = _getpid();
            local_1058[0] = (long)pVar6;
            ___bzero(&local_458,0x400);
            ___bzero(local_858,0x400);
            sVar22 = _confstr(0x10001,(char *)&local_458,0x400);
            if (0x3fe < sVar22 - 1) {
              ___strlcpy_chk(&local_458,"/tmp/",0x400,0x400);
            }
            uVar9 = _snprintf((char *)local_858,0x400,"%s%s%s",&local_458,"/",
                              "diskImageShadowFile.XXXXXX");
            if ((int)uVar9 < 1) {
              pcVar31 = &cf_snprintf__creatingtheshadowfilepathstringfailed_;
            }
            else if (uVar9 < 0x400) {
              pcVar20 = _mktemp((char *)local_858);
              if (pcVar20 != (char *)0x0) {
                sVar22 = _strlen((char *)&local_458);
                uVar27 = local_1070;
                lVar16 = _CFURLCreateFromFileSystemRepresentation(local_1070,&local_458,sVar22,1);
                sVar22 = _strlen(pcVar20);
                local_10a8 = pcVar20;
                local_1068 = _CFURLCreateFromFileSystemRepresentation(uVar27,pcVar20,sVar22,0);
                local_1080 = _CFNumberCreate(uVar27,10,local_1058);
                iVar5 = _DIIsInitialized();
                local_10a0 = lVar16;
                if ((iVar5 == 0) && (iVar5 = _DIInitialize(), iVar5 != 0)) {
                  pcVar32 = &cf_Failedtoinitializediskimagesframework_can_tmountnow;
                  local_1090 = 0;
                  lVar11 = 0;
                }
                else {
                  local_1090 = _CFDictionaryCreateMutable
                                         (uVar27,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                  if (local_1090 == 0) {
                    pcVar32 = &cf_Failedtoallocatemountoptionsdict;
                    local_1090 = 0;
                    lVar11 = 0;
                    param_1 = local_1060;
                  }
                  else {
                    _CFDictionarySetValue(local_1090,&cf_main_url,lVar11);
                    _CFDictionarySetValue(local_1090,&cf_classic,&cf_agent);
                    uVar27 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
                    _CFDictionarySetValue(local_1090,&cf_mount_nobrowse,uVar27);
                    _CFDictionarySetValue(local_1090,&cf_suppress_uiagent,uVar27);
                    _CFDictionarySetValue(local_1090,&cf_read_only,uVar27);
                    _CFDictionarySetValue(local_1090,&cf_shadow_url,local_1068);
                    _CFDictionarySetValue(local_1090,&cf_auto_fsck,local_10c8);
                    _CFDictionarySetValue(local_1090,&cf_mount_type,&cf_randomized);
                    _CFDictionarySetValue(local_1090,&cf_mount_point,local_10a0);
                    uVar9 = 4;
                    do {
                      iVar5 = _DIHLDiskImageAttach(local_1090,0,0,&local_c58);
                      if (iVar5 == 0) {
                        uVar27 = _CFDictionaryGetValue(local_c58,&cf_system_entities);
                        param_1 = local_1060;
                        lVar11 = 0;
                        pcVar31 = (cfstringStruct *)0x0;
                        goto LAB_0015cc75;
                      }
                      _DICopyStrError(iVar5);
                      lVar11 = _DICopyStrError(iVar5);
                      _AMRSafeLog(7,&cf_DIHLDiskImageAttachfailedtomountdmgwithstatus_d___,iVar5,
                                  lVar11);
                      if (lVar11 != 0) {
                        _CFRelease(lVar11);
                      }
                      _sleep(5);
                      uVar9 = uVar9 - 1;
                    } while (1 < uVar9);
                    lVar11 = _DICopyStrError(iVar5);
                    pcVar32 = (cfstringStruct *)
                              _AMRMakeString(&cf_Failedtomountdmgwithstatus_d___,iVar5,lVar11);
                    param_1 = local_1060;
                  }
                }
LAB_0015ccf1:
                pcVar31 = (cfstringStruct *)0x0;
                goto LAB_0015ccf8;
              }
              pcVar31 = &cf_mktemp__failedtochooseashadowfilepath;
            }
            else {
              pcVar31 = &cf_AskedtowriteafilepathgreaterthanMAXPATHLEN___;
            }
            _AMRSafeLogAndRelease(3,pcVar31);
            pcVar31 = (cfstringStruct *)0x0;
            lVar12 = 0;
            lVar11 = 0;
            lVar16 = 0;
            param_1 = local_1060;
            goto LAB_0015cd3d;
          }
          uVar27 = (*(code *)PTR__objc_msgSend_00441098)
                             (&objc::class_t::AMRManagedDiskImagesRegistry,"sharedInstance");
          pcVar31 = (cfstringStruct *)(*(code *)puVar2)(uVar27,"mountDiskImage:",lVar11);
          if (pcVar31 == (cfstringStruct *)0x0) goto LAB_0015c963;
          goto LAB_0015cd86;
        }
        local_10a0 = 0;
        lVar12 = 0;
        goto LAB_0015cfd0;
      }
      pcVar31 = (cfstringStruct *)*param_1;
      local_438 = 0;
      uStack_430 = 0;
      local_448 = (cfstringStruct *)0x0;
      dStack_440._os_obj = (_os_object_s *)0x0;
      local_458 = (cfstringStruct *)0x0;
      lStack_450 = 0;
      local_428 = 0;
      if (param_1[1] == 0) {
        pcVar31 = &cf_Can_tpreapreHTTPrestorebundlewithoutoptions;
        local_1088 = lVar11;
LAB_0015c7e4:
        if (local_448 != (cfstringStruct *)0x0) {
          __AMRResourceManagerStoppedUsingResourceAtURL();
        }
        local_10b0 = _AMRCreateErrorWithDomain
                               (pcVar31,0xfb4,&cf_com_apple_MobileDevice_MobileRestore,local_438);
        bVar30 = false;
        lVar16 = 0;
      }
      else {
        if (pcVar31 == (cfstringStruct *)0x0) {
          pcVar31 = &cf_Can_tmanagedownloadwithNULLassociateddevice;
          local_1088 = lVar11;
          goto LAB_0015c7e4;
        }
        uStack_430 = 0;
        local_428 = 0;
        dStack_440 = (dispatch_object_t)0x0;
        local_438 = 0;
        lStack_450 = 0;
        local_448 = (cfstringStruct *)0x0;
        local_10b0 = param_1[1];
        local_1088 = lVar11;
        local_458 = pcVar31;
        dStack_440._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
        if (dStack_440._os_obj == (_os_object_s *)0x0) {
          pcVar31 = &cf_Failedtocreatelocktowaitfordownload;
          goto LAB_0015c7e4;
        }
        __AMRestorableDeviceNotifyStatusInfoChanged(pcVar31,200,0xffffffff,0);
        local_858[0] = (cfstringStruct *)0x0;
        local_c58 = 0;
        if (_once != -1) {
          _dispatch_once_f(&_once,(void *)0x0,__thr_AMRResourceManagerInit);
        }
        if (_didInitSuccessfully == '\x01') {
          puVar17 = _calloc(1,0x10);
          *puVar17 = __resourceManagerHTTPDownloadCallback;
          puVar17[1] = &local_458;
          _dispatch_semaphore_wait((dispatch_semaphore_t)*_gResourceData,0xffffffffffffffff);
          lVar11 = _CFDictionaryGetValue(_gResourceData[2],lVar11);
          if (lVar11 != 0) {
            _CFRetain(lVar11);
          }
          lVar16 = local_1088;
          lVar12 = _CFDictionaryGetValue(_gResourceData[3],local_1088);
          if (lVar12 == 0) {
            if (lVar11 != 0) {
              lVar16 = _CFArrayGetCount(lVar11);
              if (lVar16 == 0) {
                _AMRSafeLog(6,&cf_DownloadingcontentatURL___,local_1088);
                _CFRelease(lVar11);
                goto LAB_0015c653;
              }
              pcVar32 = (cfstringStruct *)0x0;
              _AMRSafeLog(6,&cf_JoiningexistingdownloadgroupforURL___,local_1088);
              _CFArrayAppendValue(lVar11,puVar17);
LAB_0015c60b:
              lVar13 = 0;
              lVar16 = lVar11;
              goto LAB_0015c55d;
            }
            _AMRSafeLog(6,&cf_DownloadingcontentatURL___,local_1088);
LAB_0015c653:
            uVar27 = local_1070;
            lVar11 = 0;
            lVar16 = _CFArrayCreateMutable(local_1070,0,0);
            if (lVar16 == 0) {
              pcVar32 = &cf_Failedtoallocatenewclientsarrayfordownload;
              goto LAB_0015c60b;
            }
            iVar5 = _AMAuthInstallSupportCopyURLToNewTempDirectory
                              (uVar27,"restore_resource_XXXX",&local_c58);
            lVar12 = local_1088;
            lVar11 = lVar16;
            if (iVar5 != 0) {
              pcVar32 = &cf_Failedtocreatetmpdirfordownload;
              goto LAB_0015c60b;
            }
            lVar13 = _CFURLCopyLastPathComponent(local_1088);
            if (lVar13 == 0) {
              pcVar32 = &cf_FailedtogetfilenamefromsourceURL;
              goto LAB_0015c60b;
            }
            iVar5 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                              (local_1070,local_c58,lVar13,0,local_858);
            if (iVar5 != 0) {
              pcVar32 = &cf_FailedtocreatedestinationURLfordownload;
              goto LAB_0015c55d;
            }
            _CFArrayAppendValue(lVar16,puVar17);
            _CFDictionarySetValue(_gResourceData[2],lVar12,lVar16);
            _dispatch_semaphore_signal((dispatch_semaphore_t)*_gResourceData);
            __AMRHTTPDownloadFileAtURL(lVar12,local_858[0],__downloadHTTPCallback);
            _AMRSafeLogAndRelease(3,0);
LAB_0015c72a:
            _CFRelease(lVar13);
          }
          else {
            _AMRSafeLog(6,&cf_UsingpreviouslydownloadedcontentfromURL___,lVar16);
            uVar27 = _CFDictionaryGetValue(_gResourceData[1],lVar12);
            __AMRResourceManagerSetIncrementedNumber(uVar27,_gResourceData[1],lVar12);
            __resourceManagerHTTPDownloadCallback();
            lVar13 = 0;
            pcVar32 = (cfstringStruct *)0x0;
            lVar16 = lVar11;
LAB_0015c55d:
            _dispatch_semaphore_signal((dispatch_semaphore_t)*_gResourceData);
            _AMRSafeLogAndRelease(3,pcVar32);
            if (lVar13 != 0) goto LAB_0015c72a;
          }
          _free(puVar17);
          if (lVar16 != 0) {
            _CFRelease(lVar16);
          }
        }
        else {
          _AMRSafeLogAndRelease(3,&cf_Failedtoinitializeresourcemanager);
        }
        _dispatch_semaphore_wait((dispatch_semaphore_t)dStack_440._os_obj,0xffffffffffffffff);
        __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),pcVar31);
        if ((char)lStack_450 != '\x01') {
          pcVar31 = &cf_Failedtodownloadrestorebundle;
          lVar11 = local_1088;
          goto LAB_0015c7e4;
        }
        lVar16 = _CFURLCopyFileSystemPath(local_448,0);
        lVar11 = local_1088;
        if (lVar16 == 0) {
          pcVar31 = &cf_Failedtogetpathtodownloadedrestorebundle;
          goto LAB_0015c7e4;
        }
        _CFDictionarySetValue(local_10b0,&cf_RestoreBundlePath,lVar16);
        local_10b0 = 0;
        __AMRestorableDeviceAddUsedResource(pcVar31,local_448,1,0);
        bVar30 = true;
        pcVar31 = (cfstringStruct *)0x0;
      }
      _AMRSafeLogAndRelease(3,pcVar31);
      if (dStack_440._os_obj != (_os_object_s *)0x0) {
        _dispatch_release(dStack_440);
      }
      if (local_448 != (cfstringStruct *)0x0) {
        _CFRelease();
      }
      if (local_438 != 0) {
        _CFRelease();
      }
      if (lVar16 != 0) {
        _CFRelease(lVar16);
      }
      if (!bVar30) {
        pcVar31 = &cf_FailedtoprepareHTTPrestorebundle;
        local_1068 = 0;
        local_1090 = 0;
        local_10a0 = 0;
        goto LAB_001600d8;
      }
      _CFRelease(lVar11);
      param_1 = local_1060;
      lVar16 = _CFDictionaryGetValue(local_1060[1],&cf_RestoreBundlePath);
      if (lVar16 == 0) {
        pcVar31 = &cf_PreparedHTTPrestoreoptionshavenobundlepath;
        local_1088 = 0;
      }
      else {
        lVar11 = _AMAuthInstallSupportCreateURLFromString(local_1070,lVar16);
        if (lVar11 != 0) goto LAB_0015c8b8;
        local_1088 = 0;
        pcVar31 = (cfstringStruct *)_AMRMakeString(&cf_FailedtocreateURLfromstring___,lVar16);
      }
      goto LAB_0015d845;
    }
    pcVar31 = &cf_FailedtocopyschemefromURL;
    local_1088 = lVar11;
  }
  cVar3 = '\0';
  local_1078 = 0;
  local_1108 = 0;
  local_1068 = 0;
  local_1090 = 0;
  local_10a0 = 0;
  local_10b0 = 0;
  goto LAB_0015f9e0;
LAB_0015cc75:
  lVar16 = _CFArrayGetCount(uVar27);
  if (lVar16 <= lVar11) goto LAB_0015ccc0;
  uVar21 = _CFArrayGetValueAtIndex(uVar27,lVar11);
  lVar16 = _CFDictionaryGetValue(uVar21,&cf_mount_point);
  if (lVar16 != 0) {
    if (pcVar31 != (cfstringStruct *)0x0) {
      lVar11 = 0;
      _AMRSafeLog(3,&
                    cf_FoundtwomountPointentriesinthelistofsystementitiesforthedmg_Failingthisrestore_
                 );
      _CFRelease(pcVar31);
      pcVar32 = (cfstringStruct *)0x0;
      goto LAB_0015ccf1;
    }
    pcVar31 = (cfstringStruct *)_CFURLCreateWithFileSystemPath(local_1070,lVar16,0,1);
  }
  lVar11 = lVar11 + 1;
  goto LAB_0015cc75;
LAB_0015ccc0:
  pcVar32 = (cfstringStruct *)0x0;
  lVar11 = 0;
LAB_0015ccf8:
  lVar16 = local_1080;
  _unlink(local_10a8);
  _AMRSafeLogAndRelease(3,pcVar32);
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  lVar12 = local_1068;
  lVar11 = local_10a0;
  if (local_1090 != 0) {
    _CFRelease();
  }
LAB_0015cd3d:
  if (local_c58 != 0) {
    _CFRelease();
  }
  if (lVar16 != 0) {
    _CFRelease(lVar16);
  }
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  if (lVar12 != 0) {
    _CFRelease(lVar12);
  }
  if (pcVar31 == (cfstringStruct *)0x0) {
    _AMRSafeLogAndRelease(3,&cf_FailedtomountandlocateRestoreBundledmg);
    pcVar31 = &cf_Failedtomountdiskimage;
LAB_0015d845:
    local_1090 = 0;
  }
  else {
    _CFAutorelease(pcVar31);
LAB_0015cd86:
    _AMRSafeLogAndRelease(3,0);
    __AMRestorableDeviceAddUsedResource(*param_1,pcVar31,2,0);
    local_458 = (cfstringStruct *)0x0;
    local_858[0] = (cfstringStruct *)0x0;
    lVar11 = _CFURLEnumeratorCreateForDirectoryURL(local_1070,pcVar31,2,0);
    if (lVar11 == 0) {
LAB_0015d808:
      _AMRSafeLog(3,&cf_RestoredmgatURL__hadnobuildmanifest_,pcVar31);
      pcVar31 = &cf_Failedtolocaterestorebundleonvolume;
      goto LAB_0015d845;
    }
    local_1090 = 0;
    while (lVar16 = _CFURLEnumeratorGetNextURL(lVar11,&local_458,0), lVar16 == 1) {
      lVar16 = _CFURLCopyPathExtension(local_458);
      if (((lVar16 != 0) && (lVar12 = _CFStringCompare(lVar16,&cf_IPSW,1), lVar12 == 0)) &&
         (cVar3 = _AMRestorableIsURLDirectory(local_458), cVar3 == '\0')) {
        lVar16 = _CFRetain(local_458);
        _CFRelease(lVar11);
        if (lVar16 == 0) goto LAB_0015cf2d;
        lVar12 = _CFRetain(lVar16);
        _CFRelease(lVar16);
        lVar11 = local_1090;
        if (local_1090 == 0) goto LAB_0015cf50;
        goto LAB_0015cf48;
      }
      lVar12 = _CFURLCopyLastPathComponent(local_458);
      if (lVar12 != 0) {
        cVar3 = _AMRestorableIsURLDirectory(local_458);
        if (cVar3 == '\0') {
          lVar13 = _CFStringCompare(lVar12,&cf_BuildManifest_plist,1);
          pcVar32 = pcVar31;
          if (lVar13 == 0) goto LAB_0015ced7;
        }
        else {
          lVar13 = _CFStringCompare(lVar12,&cf_Restore,1);
          if (((lVar13 == 0) &&
              (iVar5 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                                 (local_1070,local_458,&cf_BuildManifest_plist,0,local_858),
              iVar5 == 0)) &&
             (cVar3 = _CFURLResourceIsReachable(local_858[0],0), pcVar32 = local_458, cVar3 != '\0')
             ) {
LAB_0015ced7:
            local_1090 = _CFRetain(pcVar32);
          }
        }
      }
      if (lVar16 != 0) {
        _CFRelease(lVar16);
      }
      if (lVar12 != 0) {
        _CFRelease(lVar12);
      }
      if (local_858[0] != (cfstringStruct *)0x0) {
        _CFRelease();
      }
      local_858[0] = (cfstringStruct *)0x0;
      param_1 = local_1060;
    }
    _CFRelease(lVar11);
LAB_0015cf2d:
    lVar11 = local_1090;
    if (local_1090 == 0) goto LAB_0015d808;
    lVar12 = _CFRetain(local_1090);
LAB_0015cf48:
    _CFRelease(lVar11);
LAB_0015cf50:
    lVar11 = local_1088;
    pcVar31 = local_10b8;
    if (lVar12 == 0) {
      pcVar31 = &cf_Failedtolocaterestorebundleonvolume;
      goto LAB_0015d845;
    }
    lVar16 = _AMRCopyFileSystemPathForURL(lVar12);
    if (lVar16 != 0) {
      _CFRelease(pcVar31);
      _CFRelease(lVar11);
      pcVar31 = (cfstringStruct *)_CFURLCopyPathExtension(lVar12);
      lVar11 = _CFRetain(lVar12);
      local_10b8 = &cf___;
      if (pcVar31 != (cfstringStruct *)0x0) {
        local_10b8 = pcVar31;
      }
      local_10a0 = lVar16;
      _CFDictionarySetValue(param_1[1],&cf_RestoreBundlePath,lVar16);
LAB_0015cfd0:
      lVar16 = _CFStringCompare(local_10b8,&cf_ipsw,1);
      local_1090 = lVar12;
      if ((lVar16 == 0) && (cVar3 = _AMRestorableIsURLDirectory(lVar11), cVar3 == '\0')) {
        _AMRLog(7,&cf_FoundIPSWrestorebundlepath_attemptingtounpackit);
        lVar16 = _CFDictionaryGetValue(param_1[1],&cf_IPSWExtractPath);
        local_1088 = lVar11;
        if (lVar16 == 0) {
          iVar5 = _AMAuthInstallSupportCopyURLToNewTempDirectory
                            (local_1070,"restore_bundle_XXXXX",&local_1120);
          if (iVar5 == 0) goto LAB_0015d898;
          pcVar31 = &cf_FailedtocreatetempdirectoryforunzippedIPSW;
        }
        else {
          local_1120 = _AMAuthInstallSupportCreateURLFromString(local_1070,lVar16);
          if (local_1120 != 0) {
LAB_0015d898:
            __AMRestorableDeviceNotifyStatusInfoChanged(*param_1,0xc9,0xffffffff,0);
            lVar16 = local_1120;
            if (lVar11 == 0) {
              pcVar31 = &cf_Can_tunzipNULLIPSWURL;
            }
            else if (local_1120 == 0) {
              pcVar31 = &cf_Can_tunziptoNULLoutputlocation;
            }
            else {
              local_1080 = param_1[1];
              cVar3 = _CFURLGetFileSystemRepresentation(lVar11,1,&local_458,0x400);
              if (cVar3 == '\0') {
                pcVar31 = &cf_FailedtogetfilesystempathtoIPSW;
              }
              else {
                cVar3 = _CFURLGetFileSystemRepresentation(lVar16,1,local_858,0x400);
                if (cVar3 == '\0') {
                  pcVar31 = &cf_Failedtogetfilesystemrepresentationofpath;
                }
                else {
                  pvVar23 = _calloc(0x20000,1);
                  if (pvVar23 != (void *)0x0) {
                    lVar11 = _unzOpen(&local_458);
                    if (lVar11 == 0) {
                      pcVar31 = &cf_Failedtoopenziparchive;
LAB_00160147:
                      _AMRSafeLog(3,&cf___,pcVar31);
                      cVar3 = '\0';
                      _CFRelease(pcVar31);
                      _free(pvVar23);
                      iVar5 = -1;
                    }
                    else {
                      *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(lVar11 + 0xa8);
                      *(undefined8 *)(lVar11 + 0x80) = 0;
                      iVar5 = _unz64local_GetCurrentFileInfoInternal
                                        (lVar11,lVar11 + 0xb0,lVar11 + 0x138,0,0);
                      *(ulong *)(lVar11 + 0x90) = (ulong)(iVar5 == 0);
                      if (iVar5 != 0) {
                        pcVar31 = &cf_Failedtomovetofirstfile;
                        goto LAB_00160147;
                      }
                      iVar5 = _access((char *)local_858,0);
                      if ((iVar5 != 0) && (iVar5 = _mkdir((char *)local_858,0x1ed), iVar5 != 0)) {
                        pcVar31 = &cf_Failedtocreatetargetdirectory;
                        goto LAB_00160147;
                      }
                      lVar16 = 0;
                      bVar30 = false;
                      iVar5 = -1;
                      do {
                        if (lVar16 != 0) {
                          _CFRelease(lVar16);
                        }
                        iVar7 = _unzOpenCurrentFile(lVar11);
                        lVar16 = 0;
                        if (iVar7 != 0) {
                          local_1068 = 0;
                          pcVar31 = &cf_Failedtoopencurrentfileinarchive;
                          goto LAB_0015dec1;
                        }
                        uVar27 = _unz64local_GetCurrentFileInfoInternal
                                           (lVar11,local_11b8,0,&local_c58,0x400);
                        if ((int)uVar27 != 0) {
                          pcVar31 = &cf_Failedtogetfileinfo;
LAB_0015e350:
                          bVar30 = true;
                          local_1068 = 0;
                          goto LAB_0015dec1;
                        }
                        if ((char)local_c58 != '\0') {
                          lVar16 = _CFStringCreateWithFormat
                                             (local_1070,0,&cf__s__s,local_858,&local_c58);
                          if (lVar16 == 0) {
                            pcVar31 = &cf_Failedtocreateabsolutepath;
                            lVar16 = 0;
                            goto LAB_0015e350;
                          }
                          cVar3 = _CFStringGetFileSystemRepresentation(lVar16,local_1058,0x400);
                          if (cVar3 == '\0') {
                            pcVar31 = &cf_Failedtogetcstringforabsolutepath;
                          }
                          else {
                            cVar3 = _CFStringHasSuffix(lVar16,&cf__);
                            if ((cVar3 == '\0') &&
                               (uVar27 = _CFStringHasSuffix(lVar16,&cf__), (char)uVar27 == '\0')) {
                              local_1068 = CONCAT71((int7)((ulong)uVar27 >> 8),1);
                              cVar3 = _AMSupportCFDictionaryGetBoolean
                                                (local_1080,&cf_IPSWLazyUnzip,0);
                              if (cVar3 != '\0') {
                                _pthread_once((pthread_once_t *)&__AMRAddLazyUnzipFile_once_control,
                                              __AMRZipRegisterSchemes);
                                cVar3 = __AMRCStringHasSuffix(&local_c58,".dmg");
                                if ((((cVar3 != '\0') ||
                                     (cVar3 = __AMRCStringHasSuffix(&local_c58,".dmg.aea"),
                                     cVar3 != '\0')) ||
                                    (cVar3 = __AMRCStringHasSuffix(&local_c58,".im4p"),
                                    cVar3 != '\0')) ||
                                   (local_c50 == 0x2e656863 && local_c58 == 0x61636c656e72656b)) {
                                  lVar12 = _AMRLazyExtractorGetFromOptions(local_1080);
                                  if (lVar12 == 0) {
                                    pcVar20 = (char *)_CFStringCreateWithFileSystemRepresentation
                                                                (local_1070,&local_458);
                                    if (pcVar20 != (char *)0x0) {
                                      local_48 = &cf___ZipArchivePath__;
                                      local_58 = pcVar20;
                                      local_10c0 = _CFDictionaryCreate(local_1070,&local_48,
                                                                       &local_58,1,
                                                                                                                                              
                                                  PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                                      local_10f8 = _AMRLazyExtractorCreate
                                                             (local_858,local_1080,
                                                              &cf___ZipArchiveScheme__,local_10c0);
                                      if (local_10f8 != 0) {
                                        _CFRelease(local_10f8);
                                        goto LAB_0015dc48;
                                      }
                                      local_10f8 = 0;
                                      local_10e8 = (cfstringStruct *)0x0;
                                      local_10a8 = (char *)0x0;
                                      local_1098 = 0;
                                      goto LAB_0015ddd1;
                                    }
                                  }
                                  else {
                                    pcVar20 = (char *)0x0;
                                    local_10c0 = 0;
                                    local_10f8 = lVar12;
LAB_0015dc48:
                                    uVar27 = local_1070;
                                    if ((local_11a0 == 0) && (local_1188 == local_1180)) {
                                      lVar12 = *(long *)(lVar11 + 0x140);
                                      if (((lVar12 == 0) ||
                                          (*(long *)(lVar12 + 0x130) + *(long *)(lVar12 + 0x78) == 0
                                          )) || (uVar27 = _AMRLazyExtractorAddFileFromPathRange
                                                                    (local_10f8,&local_c58,
                                                                     &local_458),
                                                (char)uVar27 == '\0')) {
LAB_0015dda0:
                                        local_1098 = 0;
                                      }
                                      else {
                                        local_1098 = CONCAT71((int7)((ulong)uVar27 >> 8),1);
                                      }
                                      local_10a8 = (char *)0x0;
                                      local_10e8 = (cfstringStruct *)0x0;
                                      local_10f8 = 0;
                                    }
                                    else {
                                      if (*(long *)(lVar11 + 0x90) == 0) goto LAB_0015dda0;
                                      local_10e8 = *(cfstringStruct **)(lVar11 + 0x80);
                                      pcStack_10e0 = *(cfstringStruct **)(lVar11 + 0x88);
                                      local_10d0 = pcVar20;
                                      local_48 = pcStack_10e0;
                                      local_10a8 = (char *)_CFNumberCreate(local_1070,4,&local_48);
                                      local_48 = local_10e8;
                                      local_10e8 = (cfstringStruct *)
                                                   _CFNumberCreate(uVar27,4,&local_48);
                                      pcVar20 = local_10d0;
                                      local_48 = &cf___ZipFileDirPos__;
                                      pcStack_40 = &cf___ZipFileNum__;
                                      local_58 = local_10a8;
                                      local_50 = (ulong)local_10e8;
                                      lVar13 = _CFDictionaryCreate(uVar27,&local_48,&local_58,2,
                                                                                                                                      
                                                  PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                                      lVar12 = local_10f8;
                                      local_10f8 = lVar13;
                                      local_1098 = _AMRLazyExtractorAddFile
                                                             (lVar12,&local_c58,local_1180,
                                                              &cf___ZipFileScheme__,lVar13);
                                    }
                                    if (pcVar20 != (char *)0x0) {
LAB_0015ddd1:
                                      _CFRelease(pcVar20);
                                    }
                                    if (local_10c0 != 0) {
                                      _CFRelease();
                                    }
                                    if (local_10a8 != (char *)0x0) {
                                      _CFRelease();
                                    }
                                    if (local_10e8 != (cfstringStruct *)0x0) {
                                      _CFRelease();
                                    }
                                    if (local_10f8 != 0) {
                                      _CFRelease();
                                    }
                                    bVar30 = true;
                                    if ((char)local_1098 != '\0') goto LAB_0015dad0;
                                  }
                                }
                              }
                              iVar7 = _open((char *)local_1058,0x602,0x1a4);
                              if (iVar7 != -1) {
                                while (uVar9 = _unzReadCurrentFile(lVar11,pvVar23,0x20000),
                                      0 < (int)uVar9) {
                                  sVar18 = _write(iVar7,pvVar23,(ulong)uVar9);
                                  if ((int)sVar18 == 0) {
                                    pcVar31 = &cf_Failedtowritedatatofile;
                                    iVar5 = iVar7;
                                    goto LAB_0015eca6;
                                  }
                                }
                                _close(iVar7);
                                _unzCloseCurrentFile(lVar11);
                                bVar30 = false;
                                goto LAB_0015dad0;
                              }
                              pcVar31 = &cf_Failedtocreatefile;
                              goto LAB_0015e350;
                            }
                            iVar7 = _mkdir((char *)local_1058,0x1ed);
                            if (iVar7 == 0) {
                              local_1068 = CONCAT71((int7)(CONCAT44(extraout_var,iVar7) >> 8),1);
                              iVar7 = _chmod((char *)local_1058,0x1ed);
                              bVar30 = true;
                              if (iVar7 == 0) goto LAB_0015dad0;
                              local_1068 = 0;
                              pcVar31 = &cf_Failedtosetpermissionsondirectory;
                              goto LAB_0015dec1;
                            }
                            pcVar31 = &cf_Failedtocreatedirectory;
                          }
LAB_0015eca6:
                          local_1068 = 0;
                          bVar30 = true;
                          goto LAB_0015dec1;
                        }
                        local_1068 = CONCAT71((int7)((ulong)uVar27 >> 8),1);
                        lVar16 = 0;
                        bVar30 = true;
LAB_0015dad0:
                        iVar7 = _unzGoToNextFile(lVar11);
                      } while (iVar7 == 0);
                      pcVar31 = (cfstringStruct *)0x0;
LAB_0015dec1:
                      _AMRSafeLogAndRelease(3,pcVar31);
                      _free(pvVar23);
                      if (lVar16 != 0) {
                        _CFRelease(lVar16);
                      }
                      if (bVar30) {
                        _unzCloseCurrentFile(lVar11);
                      }
                      cVar3 = (char)local_1068;
                    }
                    if (lVar11 != 0) {
                      _unzClose(lVar11);
                    }
                    pcVar31 = &cf_Failedtounziptherestorebundle;
                    if (iVar5 != -1) {
                      _close(iVar5);
                    }
                    param_1 = local_1060;
                    if (cVar3 != '\0') {
                      lVar16 = _CFURLCopyFileSystemPath(local_1120,0);
                      if (lVar16 != 0) {
                        _AMRSafeLog(7,&cf_Settingrestorebundleinoptionsto___,lVar16);
                        _CFDictionarySetValue(param_1[1],&cf_RestoreBundlePath,lVar16);
                        lVar12 = _CFDictionaryGetValue(param_1[1],&cf_AuthInstallRestoreBehavior);
                        lVar11 = local_1088;
                        if (lVar12 != 0) {
                          lVar13 = _CFStringFind(lVar12,&cf_Erase,0);
                          lVar14 = _CFStringFind(lVar12,&cf_Update,0);
                          if ((lVar13 == -1) || (lVar14 == -1)) {
                            _AMRLog(7,&
                                      cf_Foundrestorebehavior___removingthevarianttousethedefinedbehavior_
                                    ,lVar12);
                            _CFDictionaryRemoveValue(param_1[1],&cf_AuthInstallVariant);
                          }
                          else {
                            _AMRLog(7,&cf_Foundunsupportedrestorebehavior___ignoreingthebehavior_,
                                    lVar12);
                          }
                        }
                        local_1068 = lVar16;
                        __AMRestorableDeviceAddUsedResource(*param_1,local_1120,0,1);
                        goto LAB_0015d00f;
                      }
                      pcVar31 = &cf_FailedtogetpathfromunzippedURL;
                    }
                    goto LAB_001601ac;
                  }
                  pcVar31 = &cf_Failedtoallocatebufferforfiledata;
                }
              }
            }
            _AMRSafeLog(3,&cf___,pcVar31);
            _CFRelease(pcVar31);
            pcVar31 = &cf_Failedtounziptherestorebundle;
            local_1068 = 0;
            goto LAB_001600d8;
          }
          pcVar31 = &cf_FailedtocreateCFURLRefforunzippedIPSW;
        }
LAB_001601ac:
        local_1078 = 0;
        cVar3 = '\0';
        local_1068 = 0;
      }
      else {
        local_1068 = 0;
LAB_0015d00f:
        local_1088 = lVar11;
        cVar3 = _AMSupportCFDictionaryGetBoolean(param_1[1],&cf_RegenerateDyldSharedCache,0);
        cVar4 = _AMSupportCFDictionaryGetBoolean(param_1[1],&cf_GenerateStaticTrustCache,0);
        if (cVar3 == '\0' && cVar4 == '\0') {
LAB_0015d2a0:
          local_458 = (cfstringStruct *)0x0;
          lVar11 = _CFDictionaryGetValue(param_1[1],&cf_RestoreBundlePath);
          uVar27 = local_1070;
          if (lVar11 == 0) {
            pcVar31 = &cf_DidnotfindaRestorebundleinourrestoreoptions_;
            lVar12 = 0;
            lVar14 = 0;
            lVar11 = 0;
            lVar16 = 0;
            lVar13 = 0;
            local_1080 = 0;
          }
          else {
            lVar16 = _CFURLCreateWithFileSystemPath(local_1070,lVar11,0,1);
            uVar21 = _CFDictionaryGetCount(*(undefined8 *)(*param_1 + 0x50));
            lVar11 = _CFDictionaryCreateMutableCopy(uVar27,uVar21,*(undefined8 *)(*param_1 + 0x50));
            local_1080 = lVar16;
            if (lVar11 == 0) {
              pcVar31 = &cf_Failedtoduplicatetherestoreargsdictionarytoresolvethesystemimagepath_;
              lVar11 = 0;
            }
            else {
              _CFDictionarySetValue(lVar11,&cf_PersonalizedRestoreBundle,lVar16);
              plVar33 = *(long **)(*param_1 + 0x20);
              if (plVar33 == (long *)0x0) {
                AMDeviceProxy::Log(0,(__CFString *)((long)&MACH_HEADER.magic + 3),&cf___,
                                   &cf_Can_tresolvesystemimagewithNULLproxy);
                _CFRelease(&cf_Can_tresolvesystemimagewithNULLproxy);
              }
              else {
                cVar3 = (**(code **)(*plVar33 + 0xd0))(plVar33,lVar11);
                if (cVar3 != '\0') {
                  pcVar31 = &cf_FailedtoresolvetheSystemRestoreImagegivenourproxyandrestoreoptions_;
                  goto LAB_0015fd2e;
                }
              }
              lVar16 = _CFDictionaryGetValue(lVar11,&cf_SystemImage);
              if (lVar16 == 0) {
                pcVar31 = &
                          cf_FailedtoreadtheSystemImagekeyoutoftherestoreoptions_Itmaynothavebeenresolved_
                ;
              }
              else {
                lVar16 = _CFDictionaryGetValue(lVar16,&cf_ImageFile);
                if (lVar16 == 0) {
                  pcVar31 = &cf_FailedtoreadtheImageFilekeyoutoftheSystemImagedictionary_;
                }
                else {
                  lVar16 = _CFURLCreateWithFileSystemPath(uVar27,lVar16,0,0);
                  if (lVar16 != 0) {
                    lVar12 = _CFURLCopyLastPathComponent(lVar16);
                    lVar13 = _CFURLCreateCopyAppendingPathComponent
                                       (uVar27,local_1080,&cf_Restore_plist,0);
                    if (lVar13 == 0) {
                      pcVar31 = &cf_FailedtocreateCFURLfortherestore_plist_;
                      lVar13 = 0;
                    }
                    else {
                      iVar5 = _AMAuthInstallSupportCreateDictionaryFromFileURL
                                        (uVar27,&local_458,lVar13);
                      if (iVar5 == 0) {
                        lVar14 = _CFDictionaryGetValue(local_458,&cf_SystemRestoreImageFileSystems);
                        if (lVar14 == 0) {
                          lVar14 = _CFStringCreateCopy(local_1070,&cf_Case_sensitiveJournaledHFS_);
                        }
                        else {
                          lVar14 = _CFDictionaryGetValue(lVar14,lVar12);
                          if (lVar14 == 0) {
                            pcVar31 = &cf_Failedtofindsystemimagefilesysteminplist_;
                            goto LAB_0015fd69;
                          }
                          _CFRetain(lVar14);
                        }
                        pcVar31 = (cfstringStruct *)0x0;
                        goto LAB_0015d432;
                      }
                      pcVar31 = &cf_FailedtoreadtheRestore_plistinsidethebundledmg_;
                    }
LAB_0015fd69:
                    lVar14 = 0;
                    goto LAB_0015d432;
                  }
                  pcVar31 = &cf_FailedtocreateURLfromsystemimagefilepath_;
                }
              }
            }
LAB_0015fd2e:
            lVar14 = 0;
            lVar12 = 0;
            lVar16 = 0;
            lVar13 = 0;
          }
LAB_0015d432:
          _AMRSafeLogAndRelease(3,pcVar31);
          if (local_458 != (cfstringStruct *)0x0) {
            _CFRelease();
          }
          if (lVar11 != 0) {
            _CFRelease(lVar11);
          }
          if (lVar16 != 0) {
            _CFRelease(lVar16);
          }
          if (lVar12 != 0) {
            _CFRelease(lVar12);
          }
          plVar33 = local_1060;
          if (lVar13 != 0) {
            _CFRelease(lVar13);
          }
          lVar11 = local_1088;
          pcVar31 = local_10b8;
          if (local_1080 != 0) {
            _CFRelease();
          }
          if (lVar14 == 0) {
            uVar27 = _CFDictionaryGetValue(*(undefined8 *)(*plVar33 + 0x50),&cf_FormatForAPFS);
            uVar21 = _CFDictionaryGetValue(*(undefined8 *)(*plVar33 + 0x50),&cf_FormatForLwVM);
            param_1 = local_1060;
            _AMRSafeLog(7,&cf_Couldn_tdeterminerestorebundleFS_PRDocsays___>______>___Usingthose_,
                        &cf_FormatForAPFS,uVar27,&cf_FormatForLwVM,uVar21);
            _AMRSafeLog(3,&cf___,&
                                 cf_CouldnotdeterminerestorebundleFS_DoingwhateverweweretoldtodointhePRDoc_
                       );
            _CFRelease(&cf_CouldnotdeterminerestorebundleFS_DoingwhateverweweretoldtodointhePRDoc_);
            goto LAB_0015d6ee;
          }
          lVar16 = _CFStringCompare(lVar14,&cf_APFS,1);
          if (lVar16 == 0) {
            _AMRSafeLog(7,&cf_AutomaticallysetFormatForAPFS_>TrueandFormatForLwVM_>False_);
            _CFDictionarySetValue
                      (*(undefined8 *)(*plVar33 + 0x50),&cf_FormatForAPFS,
                       *(undefined8 *)PTR__kCFBooleanTrue_00441110);
            _CFDictionarySetValue(*(undefined8 *)(*plVar33 + 0x50),&cf_FormatForLwVM,local_10c8);
LAB_0015d6c6:
            pcVar32 = (cfstringStruct *)0x0;
            bVar30 = true;
          }
          else {
            lVar16 = _CFStringCompare(lVar14,&cf_Case_sensitiveHFS_,1);
            if ((lVar16 != 0) &&
               (lVar16 = _CFStringCompare(lVar14,&cf_Case_sensitiveJournaledHFS_,1), lVar16 != 0)) {
              _AMRSafeLog(4,&cf_DidnotfindarecognizableFilesystem_AssumingHFSvariant_LwVM_);
              goto LAB_0015d6c6;
            }
            local_458 = local_10c8;
            local_858[0] = local_10c8;
            cVar3 = _CFDictionaryGetValueIfPresent
                              (*(undefined8 *)(*plVar33 + 0x50),&cf_CreateFilesystemPartitions);
            if (cVar3 == '\0') {
              local_458 = *(cfstringStruct **)PTR__kCFBooleanTrue_00441110;
            }
            cVar3 = _CFDictionaryGetValueIfPresent
                              (*(undefined8 *)(*plVar33 + 0x50),&cf_FormatForAPFS,local_858);
            if (cVar3 == '\0') {
              local_858[0] = local_10c8;
            }
            cVar3 = _CFBooleanGetValue(local_458);
            if ((cVar3 == '\0') && (cVar3 = _CFBooleanGetValue(local_858[0]), cVar3 != '\0')) {
              pcVar32 = (cfstringStruct *)0x0;
              local_10b0 = _AMRCreateErrorWithDomain
                                     (&
                                      cf_UpgraderestoresusinganHFSrestorevolumewhenFormatForAPFS_>Truearenotsupported_
                                      ,0xfb5,&cf_com_apple_MobileDevice_MobileRestore,0);
              bVar30 = false;
            }
            else {
              cVar3 = _CFBooleanGetValue(local_458);
              plVar33 = local_1060;
              bVar30 = true;
              if (cVar3 == '\0') {
                pcVar32 = (cfstringStruct *)0x0;
              }
              else {
                _CFDictionarySetValue
                          (*(undefined8 *)(*local_1060 + 0x50),&cf_FormatForAPFS,local_10c8);
                _CFDictionarySetValue
                          (*(undefined8 *)(*plVar33 + 0x50),&cf_FormatForLwVM,
                           *(undefined8 *)PTR__kCFBooleanTrue_00441110);
                pcVar32 = &cf_AutomaticallysetFormatForLwVM_>TrueandFormatForAPFS_>False;
              }
            }
          }
          _CFRelease(lVar14);
          _AMRSafeLogAndRelease(3,pcVar32);
          param_1 = local_1060;
          if (bVar30) goto LAB_0015d6ee;
          pcVar31 = &cf_Failedtoalterrestoreoptions_;
LAB_001600d8:
          local_1078 = 0;
          cVar3 = '\0';
          param_1 = local_1060;
        }
        else {
          local_10f8 = CONCAT71(local_10f8._1_7_,cVar4);
          iVar5 = _AMRestoreOptionsApplyMacOSChangesIfNeeded(param_1[1]);
          if (iVar5 != 0) {
            _AMRSafeLog(7,&
                          cf_failedtoapplymacOSrestoreoptionchangesinpreprocess_roots_continuewithoutswapping_
                       );
          }
          puVar2 = PTR__kCFTypeArrayCallBacks_004411a8;
          uVar19 = 0;
          uVar27 = _CFArrayCreateMutable(0,0,PTR__kCFTypeArrayCallBacks_004411a8);
          local_1080 = _CFArrayCreateMutable(0,0,puVar2);
          local_10a8 = (char *)_CFArrayCreateMutable(0,0,puVar2);
          lVar11 = _CFArrayCreateMutable(0,0,puVar2);
          cVar4 = _append_root_paths_from_options(uVar27,local_1060[1],&cf_RootToInstall);
          plVar33 = local_1060;
          lVar16 = 0;
          pcVar31 = (cfstringStruct *)0x0;
          pcVar20 = (char *)0x0;
          uVar21 = 0;
          if (cVar4 != '\0') {
            local_10c0 = lVar11;
            cVar4 = _append_root_paths_from_options(uVar27,local_1060[1],&cf_OverlayRootsToInstall);
            if (((cVar4 == '\0') ||
                (cVar4 = _append_root_paths_from_options
                                   (local_1080,plVar33[1],&cf_OSCryptexOverlayRootsToInstall),
                cVar4 == '\0')) ||
               (cVar4 = _append_root_paths_from_options
                                  (local_10a8,plVar33[1],&cf_AppCryptexOverlayRootsToInstall),
               lVar11 = local_10c0, cVar4 == '\0')) {
              uVar19 = 0;
              pcVar31 = (cfstringStruct *)0x0;
              lVar16 = 0;
              pcVar20 = (char *)0x0;
              lVar11 = local_10c0;
              uVar21 = 0;
            }
            else {
              cVar4 = _append_root_paths_from_options
                                (local_10c0,plVar33[1],&cf_ExclaveOSCryptexOverlayRootsToInstall);
              if (cVar4 == '\0') {
                uVar21 = 0;
                lVar16 = 0;
                pcVar20 = (char *)0x0;
LAB_0015e06d:
                uVar19 = 0;
                pcVar31 = (cfstringStruct *)0x0;
              }
              else {
                lVar12 = _CFArrayGetCount(uVar27);
                if (((lVar12 == 0) && (lVar12 = _CFArrayGetCount(local_1080), lVar12 == 0)) &&
                   ((lVar12 = _CFArrayGetCount(local_10a8), lVar12 == 0 &&
                    (lVar12 = _CFArrayGetCount(lVar11), lVar12 == 0)))) {
                  pcVar31 = &cf_Requestedrootpreprocessingwithnoroots;
                  uVar19 = 0;
                  _AMRSafeLog(4,&cf_Requestedrootpreprocessingwithnoroots);
                  pcVar31 = (cfstringStruct *)CONCAT71((int7)((ulong)pcVar31 >> 8),1);
                  lVar16 = 0;
                  pcVar20 = (char *)0x0;
                  uVar21 = 0;
                  goto LAB_0015d23a;
                }
                if ((char)local_10f8 == '\0') {
                  local_110c = 0;
                  local_1124 = 0;
                }
                else {
                  lVar12 = _CFArrayGetCount(uVar27);
                  local_110c = (uint)CONCAT71((int7)((ulong)lVar16 >> 8),1);
                  if ((lVar12 < 1) && (lVar16 = _CFArrayGetCount(local_1080), lVar16 < 1)) {
                    lVar16 = _CFArrayGetCount(local_10a8);
                    local_110c = (uint)CONCAT71((int7)((ulong)lVar16 >> 8),0 < lVar16);
                  }
                  lVar11 = _CFArrayGetCount(lVar11);
                  local_1124 = (undefined4)CONCAT71((int7)((ulong)lVar11 >> 8),0 < lVar11);
                }
                if (cVar3 != '\0') {
                  __AMRestorableDeviceNotifyStatusInfoChanged(*local_1060,0xd5,0xffffffff,0);
                }
                uVar21 = local_1070;
                local_10f0 = _CFLocaleCreate(local_1070,&cf_en_US);
                uVar19 = _CFArrayCreateMutable(uVar21,0,&_preprocess_roots_argvCallbacks);
                local_10d0 = _strdup("/tmp/unified_cache.XXXXXX");
                iVar5 = _mkstemp(local_10d0);
                uVar24 = CONCAT71((int7)((ulong)uVar21 >> 8),1);
                if (iVar5 == 0) {
                  uVar24 = 0;
                  _AMRSafeLog(7,&cf_mkstempfailedwhengeneratingcommandlineforpreprocessingroots);
                }
                local_10e8 = (cfstringStruct *)CONCAT71(local_10e8._1_7_,cVar3 == '\0');
                pcVar20 = _strdup("/usr/local/bin/root_util");
                _CFArrayAppendValue(uVar19,pcVar20);
                pcVar20 = _strdup("merge");
                _CFArrayAppendValue(uVar19,pcVar20);
                pcVar20 = _strdup("--verbose");
                local_1098 = uVar19;
                _CFArrayAppendValue(uVar19,pcVar20);
                plVar33 = local_1060;
                bVar30 = (char)local_10e8 == '\0';
                local_10e8 = (cfstringStruct *)uVar24;
                local_1118 = uVar27;
                if ((char)uVar24 == '\x01' && bVar30) {
                  uVar27 = _CFDictionaryGetValue(local_1060[1],&cf_AuthInstallVariant);
                  local_1130 = (cfstringStruct *)_cfstring_dup(uVar27);
                  lVar11 = __AMRestorableCopyDeviceMapFromRestoreOptions(plVar33[1]);
                  if (local_10f0 == 0 || lVar11 == 0) {
                    _AMRSafeLog(7,&
                                  cf_Couldn_topendevicemaporenglishlocalewhengeneratingcommandlineforpreprocessingroots
                               );
                    if (lVar11 == 0) {
                      _AMRSafeLog(7,&
                                    cf_Couldn_topendevicemapwhengeneratingcommandlineforpreprocessingroots
                                 );
                    }
                    if (local_10f0 == 0) {
                      _AMRSafeLog(7,&
                                    cf_Couldn_topenenglishlocalewhengeneratingcommandlineforpreprocessingroots
                                 );
                    }
                    local_10e8 = (cfstringStruct *)0x0;
                    uVar27 = 0;
                    if (lVar11 != 0) goto LAB_0015e3a4;
                  }
                  else {
                    lVar16 = __AMDeviceProxyCopyBoardConfig(*(undefined8 *)(*plVar33 + 0x20),lVar11)
                    ;
                    if (lVar16 == 0) {
                      pcVar31 = &
                                cf_Couldn_tascertaindevicetypewhengeneratingcommandlineforpreprocessingroots
                      ;
                    }
                    else {
                      lVar16 = _CFStringCreateMutableCopy(local_1070,0,lVar16);
                      if (lVar16 != 0) {
                        _CFStringLowercase(lVar16,local_10f0);
                        uVar27 = _cfstring_dup(lVar16);
                        _CFRelease(lVar16);
                        goto LAB_0015e3a4;
                      }
                      pcVar31 = &
                                cf_Couldn_tallocatedevicetypestringwhengeneratingcommandlineforpreprocessingroots
                      ;
                    }
                    local_10e8 = (cfstringStruct *)0x0;
                    _AMRSafeLog(7,pcVar31);
                    uVar27 = 0;
LAB_0015e3a4:
                    _CFRelease(lVar11);
                  }
                  uVar19 = _cfstring_dup_strip_uri(local_1100,0);
                  pcVar20 = _strdup("--update_shared_cache");
                  uVar21 = local_1098;
                  _CFArrayAppendValue(local_1098,pcVar20);
                  pcVar20 = _strdup("--restore_images");
                  _CFArrayAppendValue(uVar21,pcVar20);
                  _CFArrayAppendValue(uVar21,uVar19);
                  pcVar20 = _strdup("--device_type");
                  _CFArrayAppendValue(uVar21,pcVar20);
                  _CFArrayAppendValue(uVar21,uVar27);
                  pcVar20 = _strdup("--restore_variant");
                  _CFArrayAppendValue(uVar21,pcVar20);
                  _CFArrayAppendValue(uVar21,local_1130);
                  if ((char)local_10e8 != '\0') {
                    pcVar31 = (cfstringStruct *)
                              _CFDictionaryGetValue(local_1060[1],&cf_DylibCachePath);
                    if (pcVar31 == (cfstringStruct *)0x0) {
                      pcVar32 = &cf_DylibCache_dmg;
                      pcVar31 = local_1100;
                    }
                    else {
                      pcVar32 = (cfstringStruct *)0x0;
                    }
                    uVar21 = _cfstring_dup_strip_uri(pcVar31,pcVar32);
                    pcVar20 = _strdup("--dylib_cache");
                    uVar27 = local_1098;
                    _CFArrayAppendValue(local_1098,pcVar20);
                    _CFArrayAppendValue(uVar27,uVar21);
                  }
                }
                bVar1 = (byte)local_10e8;
                if ((bVar1 & (byte)local_110c) == 1) {
                  lVar11 = _CFDictionaryGetValue(local_1060[1],&cf_BundleOverrides);
                  if ((lVar11 == 0) ||
                     (lVar11 = _CFDictionaryGetValue(lVar11,&cf_StaticTrustCache), lVar11 == 0)) {
                    lVar11 = __AMRestoreBundleCopyTrustCacheLocation(local_1060,0);
                    pcVar31 = &cf_Didn_tfindstatictrustcacheoverride_originalpathis___;
                  }
                  else {
                    pcVar31 = &cf_Foundstatictrustcacheoverride___;
                  }
                  _AMRSafeLog(7,pcVar31,lVar11);
                  uVar21 = _cfstring_dup(lVar11);
                  local_458 = (cfstringStruct *)0x0;
                  _asprintf((char **)&local_458,"%s.trustcache",local_10d0);
                  pcVar20 = _strdup("--merge_trust_cache");
                  uVar27 = local_1098;
                  _CFArrayAppendValue(local_1098,pcVar20);
                  _CFArrayAppendValue(uVar27,uVar21);
                  pcVar20 = _strdup("--save_trust_cache");
                  _CFArrayAppendValue(uVar27,pcVar20);
                  _CFArrayAppendValue(uVar27,local_458);
                  local_1130 = local_458;
                }
                else {
                  local_1130 = (cfstringStruct *)0x0;
                }
                plVar33 = local_1060;
                bVar30 = true;
                uVar19 = 0xffffffffffffffff;
                if ((bVar1 == 1 && cVar3 != '\0') &&
                   (cVar4 = _CFDictionaryContainsKey(local_1060[1],&cf_AuthorizationTokensPath),
                   cVar4 != '\0')) {
                  lVar11 = _CFDictionaryGetValue(plVar33[1]);
                  if (lVar11 != 0) {
                    uVar27 = _CFStringGetCStringPtr(lVar11);
                    pcVar31 = (cfstringStruct *)__CreateDictFromFileContents(uVar27);
                    if (pcVar31 != (cfstringStruct *)0x0) {
                      lVar11 = _CFDictionaryGetValue(pcVar31);
                      if (lVar11 == 0) {
                        _AMRLog(4);
                      }
                      else {
                        local_1100 = pcVar31;
                        lVar11 = _CFDictionaryCreateJSONCFDataRef(lVar11);
                        if (lVar11 != 0) {
                          sVar22 = _CFDataGetLength(lVar11);
                          pvVar23 = (void *)_CFDataGetBytePtr(lVar11);
                          local_458 = (cfstringStruct *)0x0;
                          _asprintf((char **)&local_458,"%s.knox_token",local_10d0);
                          iVar5 = _open((char *)local_458,0x202,0x180);
                          if (iVar5 == -1) {
                            _AMRLog(3);
                          }
                          else {
                            uVar24 = _write(iVar5,pvVar23,sVar22);
                            if ((long)(int)uVar24 == sVar22) {
                              _close(iVar5);
                              uVar27 = local_1098;
                              uVar19 = _CFArrayGetCount(local_1098);
                              pcVar20 = _strdup("--knox_token");
                              _CFArrayAppendValue(uVar27,pcVar20);
                              _CFArrayAppendValue(uVar27,local_458);
                              _CFRelease(local_1100);
                              _CFRelease(lVar11);
                              bVar30 = false;
                              goto LAB_0015e749;
                            }
                            piVar28 = ___error();
                            iVar5 = *piVar28;
                            piVar28 = ___error();
                            pcVar20 = _strerror(*piVar28);
                            _AMRLog(3,&
                                      cf_Failedtowriteknoxtokenfileforroot_util__dbyteswritten__error_d__s_
                                    ,uVar24 & 0xffffffff,iVar5,pcVar20);
                          }
                        }
                      }
                    }
                  }
                  uVar19 = 0;
                  pcVar31 = (cfstringStruct *)0x0;
                  lVar16 = local_10f0;
                  pcVar20 = local_10d0;
                  lVar11 = local_10c0;
                  uVar21 = local_1098;
                  uVar27 = local_1118;
                }
                else {
LAB_0015e749:
                  if ((char)local_10e8 == '\0') {
                    local_1100 = (cfstringStruct *)0x0;
                    uVar21 = local_1098;
                  }
                  else {
                    local_458 = (cfstringStruct *)0x0;
                    _asprintf((char **)&local_458,"%s.cpio.gz",local_10d0);
                    pcVar20 = _strdup("--output");
                    uVar21 = local_1098;
                    _CFArrayAppendValue(local_1098,pcVar20);
                    _CFArrayAppendValue(uVar21,local_458);
                    local_1100 = local_458;
                  }
                  uVar27 = local_1118;
                  _append_argv_paths_from_array(uVar21,local_1118,0);
                  _append_argv_paths_from_array(uVar21,local_1080,"--os_cryptex_roots");
                  _append_argv_paths_from_array(uVar21,local_10a8,"--app_cryptex_roots");
                  uVar9 = local_110c;
                  pcVar31 = local_10e8;
                  if (((char)local_10e8 != '\0') && (cVar3 != '\0' || (local_110c & 1) != 0)) {
                    uVar8 = _exec_root_util(local_1098);
                    pcVar31 = (cfstringStruct *)(ulong)uVar8;
                  }
                  if (!bVar30 && (char)pcVar31 == '\0') {
                    _AMRSafeLog(4,&
                                  cf_WARNING_Ifroot_utilfailedwithausageerror_thisisalmostcertainlybecausethishost_scopyofroot_utilisoutdated_PLEASEFILEARADARonthemanagerofthisautomationhost_WhenNFSisdeprecated_thiserrorwillbeFATAL_
                               );
                    uVar21 = local_1098;
                    _CFArrayRemoveValueAtIndex(local_1098,uVar19);
                    _CFArrayRemoveValueAtIndex(uVar21);
                    lVar16 = local_10f0;
                    pcVar20 = local_10d0;
                    lVar11 = local_10c0;
                    if (cVar3 == '\0' && (uVar9 & 1) == 0) goto LAB_0015e06d;
                    uVar9 = _exec_root_util(uVar21);
                    pcVar31 = (cfstringStruct *)(ulong)uVar9;
                  }
                  if (((byte)pcVar31 & (byte)local_1124) == 1) {
                    lVar11 = _CFDictionaryGetValue(local_1060[1],&cf_BundleOverrides);
                    if ((lVar11 == 0) ||
                       (lVar11 = _CFDictionaryGetValue(lVar11,&cf_Ap_ExclaveOSTrustCache),
                       lVar11 == 0)) {
                      lVar11 = __AMRestoreBundleCopyTrustCacheLocation(local_1060,1);
                      pcVar31 = &cf_Didn_tfindExclaveOStrustcacheoverride_originalpathis___;
                    }
                    else {
                      pcVar31 = &cf_FoundExclaveOStrustcacheoverride___;
                    }
                    _AMRSafeLog(7,pcVar31,lVar11);
                    uVar27 = _cfstring_dup(lVar11);
                    pcVar20 = local_10d0;
                    local_458 = (cfstringStruct *)0x0;
                    _asprintf((char **)&local_458,"%s.exclaveOS.trustcache",local_10d0);
                    local_858[0] = (cfstringStruct *)0x0;
                    _asprintf((char **)local_858,"%s.dummy.cpio.gz",pcVar20);
                    uVar19 = _CFArrayCreateMutable(local_1070,0,&_preprocess_roots_argvCallbacks);
                    pcVar25 = _strdup("/usr/local/bin/root_util");
                    _CFArrayAppendValue(uVar19,pcVar25);
                    pcVar25 = _strdup("merge");
                    _CFArrayAppendValue(uVar19,pcVar25);
                    pcVar25 = _strdup("--verbose");
                    _CFArrayAppendValue(uVar19,pcVar25);
                    pcVar25 = _strdup("--merge_trust_cache");
                    _CFArrayAppendValue(uVar19,pcVar25);
                    _CFArrayAppendValue(uVar19,uVar27);
                    pcVar25 = _strdup("--save_trust_cache");
                    _CFArrayAppendValue(uVar19,pcVar25);
                    _CFArrayAppendValue(uVar19,local_458);
                    pcVar25 = _strdup("--output");
                    _CFArrayAppendValue(uVar19,pcVar25);
                    _CFArrayAppendValue(uVar19,local_858[0]);
                    lVar11 = local_10c0;
                    _append_argv_paths_from_array(uVar19,local_10c0,"--roots");
                    uVar9 = _exec_root_util(uVar19);
                    pcVar31 = (cfstringStruct *)(ulong)uVar9;
                    local_10e8 = local_458;
                    uVar27 = local_1118;
                  }
                  else {
                    uVar19 = 0;
                    local_10e8 = (cfstringStruct *)0x0;
                    pcVar20 = local_10d0;
                    lVar11 = local_10c0;
                  }
                  lVar16 = local_10f0;
                  uVar21 = local_1098;
                  if ((char)pcVar31 != '\0') {
                    lVar11 = _CFStringCreateWithCString(local_1070,local_1100,0x8000100);
                    plVar33 = local_1060;
                    if (lVar11 == 0) {
                      pcVar31 = (cfstringStruct *)0x0;
                      _AMRSafeLog(7,&cf_Failedtochangeoverrideafterpreprocessingroots);
                      plVar33 = local_1060;
                    }
                    else {
                      _CFDictionarySetValue(local_1060[1],&cf_RootToInstall,lVar11);
                      _CFDictionaryRemoveValue(plVar33[1],&cf_OverlayRootsToInstall);
                      _CFDictionaryRemoveValue(plVar33[1],&cf_OSCryptexOverlayRootsToInstall);
                      _CFDictionaryRemoveValue(plVar33[1],&cf_AppCryptexOverlayRootsToInstall);
                      _CFRelease(lVar11);
                    }
                    lVar16 = local_10f0;
                    pcVar20 = local_10d0;
                    lVar11 = local_10c0;
                    uVar21 = local_1098;
                    if ((char)local_10f8 != '\0') {
                      lVar11 = _CFDictionaryGetValue(plVar33[1],&cf_BundleOverrides);
                      if (lVar11 == 0) {
                        lVar11 = _CFDictionaryCreateMutable
                                           (local_1070,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0
                                            ,PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                        if (lVar11 == 0) {
                          lVar11 = 0;
                          _AMRSafeLog(7,&cf_Failedtoallocateoverridesafterregeneratingtrustcache);
                          pcVar31 = (cfstringStruct *)0x0;
                        }
                      }
                      else {
                        _CFRetain(lVar11);
                      }
                      if ((byte)local_110c != '\0') {
                        lVar16 = _CFStringCreateWithCString(local_1070,local_1130,0x8000100);
                        if (lVar16 == 0) {
                          pcVar31 = (cfstringStruct *)0x0;
                          _AMRSafeLog(7,&
                                        cf_Failedtoallocateoutputpathafterregeneratingstatictrustcache
                                     );
                        }
                        _CFDictionarySetValue(lVar11,&cf_StaticTrustCache,lVar16);
                        _AMSupportSafeRelease(lVar16);
                        uVar27 = local_1118;
                      }
                      if ((byte)local_1124 != '\0') {
                        lVar16 = _CFStringCreateWithCString(local_1070,local_10e8,0x8000100);
                        if (lVar16 == 0) {
                          pcVar31 = (cfstringStruct *)0x0;
                          _AMRSafeLog(7,&
                                        cf_FailedtoallocateoutputpathafterregeneratingExclaveOStrustcache
                                     );
                        }
                        _CFDictionarySetValue(lVar11,&cf_Ap_ExclaveOSTrustCache,lVar16);
                        _AMSupportSafeRelease(lVar16);
                        uVar27 = local_1118;
                      }
                      _CFDictionarySetValue(plVar33[1],&cf_BundleOverrides,lVar11);
                      _AMSupportSafeRelease(lVar11);
                      lVar16 = local_10f0;
                      pcVar20 = local_10d0;
                      lVar11 = local_10c0;
                      uVar21 = local_1098;
                    }
                  }
                }
              }
            }
          }
LAB_0015d23a:
          local_10e8 = pcVar31;
          _AMSupportSafeRelease(uVar21);
          _AMSupportSafeRelease(uVar19);
          _AMSupportSafeRelease(uVar27);
          _AMSupportSafeRelease(local_1080);
          _AMSupportSafeRelease(local_10a8);
          _AMSupportSafeRelease(lVar11);
          _AMSupportSafeRelease(lVar16);
          _free(pcVar20);
          param_1 = local_1060;
          if ((char)local_10e8 != '\0') goto LAB_0015d2a0;
          pcVar31 = &cf_Failedtocallouttoroot_utilforrootpreprocessing_;
          cVar3 = '\0';
          local_1078 = 0;
        }
      }
      goto LAB_0015f9e0;
    }
    pcVar31 = &cf_FailedtoconvertmountedbundleURLtostring;
    local_1090 = lVar12;
  }
  local_1068 = 0;
  local_1078 = 0;
  cVar3 = '\0';
  local_10a0 = 0;
LAB_0015f9e0:
  if (*param_1 == 0) {
    if (cVar3 == '\0') {
      pcVar32 = &cf_Failedtopreparerestoreoptions;
      if (pcVar31 != (cfstringStruct *)0x0) {
        pcVar32 = pcVar31;
      }
      goto LAB_0015fa85;
    }
  }
  else {
    __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),0);
    if (cVar3 == '\0') {
      pcVar32 = &cf_Failedtopreparerestoreoptions;
      if (pcVar31 != (cfstringStruct *)0x0) {
        pcVar32 = pcVar31;
      }
      if (*param_1 != 0) {
        _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(*param_1 + 0x88),0xffffffffffffffff);
        uVar27 = _AMRCreateErrorWithDomain
                           (pcVar32,0xfb5,&cf_com_apple_MobileDevice_MobileRestore,local_10b0);
        lVar11 = *param_1;
        *(undefined8 *)(lVar11 + 0x10) = uVar27;
        _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(lVar11 + 0x88));
        __AMRestorableDeviceSetStateOnEventQueue(*param_1,2);
      }
LAB_0015fa85:
      bVar30 = false;
      pcVar31 = pcVar32;
      lVar11 = local_1088;
      pcVar32 = local_10b8;
      goto LAB_0015fa96;
    }
  }
  bVar30 = true;
  lVar11 = local_1088;
  pcVar32 = local_10b8;
LAB_0015fa96:
  _AMRSafeLogAndRelease(3,pcVar31);
  if (local_1120 != 0 && !bVar30) {
    _AMRRecursivelyDeleteContentAtURL();
  }
  if (pcVar32 != (cfstringStruct *)0x0) {
    _CFRelease(pcVar32);
  }
  if (local_10b0 != 0) {
    _CFRelease();
  }
  lVar16 = local_1078;
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  if (local_1090 != 0) {
    _CFRelease();
  }
  lVar12 = local_1068;
  lVar11 = local_1108;
  if (local_10a0 != 0) {
    _CFRelease();
  }
  if (local_1120 != 0) {
    _CFRelease();
  }
  if (lVar12 != 0) {
    _CFRelease(lVar12);
  }
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  if (lVar16 != 0) {
    _CFRelease(lVar16);
  }
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      _CFRelease();
    }
    if (param_1[1] != 0) {
      _CFRelease();
    }
    _free(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

