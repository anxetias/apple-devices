// rea decompile_all
// name: AMBootedOSDeviceProxy::Restore
// address: 0x108810
// body: available
// range: 0x108810-0x10a299 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMBootedOSDeviceProxy::Restore(__CFDictionary*, void*, __CFError**) */

undefined4 AMBootedOSDeviceProxy::Restore(__CFDictionary *param_1,void *param_2,__CFError **param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  AMDeviceProxy *pAVar14;
  _AMDevice *p_Var15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  cfstringStruct *pcVar21;
  __CFData *p_Var22;
  __CFData *p_Var23;
  long lVar24;
  void *pvVar25;
  undefined8 uVar26;
  __CFDictionary *p_Var27;
  cfstringStruct *pcVar28;
  undefined8 *in_RCX;
  bool extraout_DL;
  undefined4 uVar29;
  ulong uVar30;
  cfstringStruct *in_R8;
  undefined *puVar31;
  undefined4 uVar32;
  cfstringStruct *pcVar33;
  __CFDictionary *p_Var34;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  ulong local_138;
  long local_130;
  long local_128;
  long local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  long local_f8;
  long local_f0;
  cfstringStruct local_e8;
  long local_c8;
  long local_c0;
  long local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  __CFDictionary *local_90;
  ulong local_88;
  __CFDictionary *local_80;
  long local_78;
  ulong local_70;
  cfstringStruct *local_68;
  undefined1 local_5a;
  bool local_59;
  long local_58;
  __CFDictionary *local_50;
  __CFData *local_48;
  long local_40;
  AMDeviceProxy local_31;
  
  local_59 = false;
  local_31 = (AMDeviceProxy)0x0;
  local_f8 = 0;
  local_90 = (__CFDictionary *)0x0;
  local_48 = (__CFData *)param_3;
  _AMRLog(7,&cf_PerformingpreflightonbootedOSdevice___);
  local_80 = param_2;
  lVar11 = _AMDeviceProxyGetBootOptions(param_2,&local_59);
  local_50 = param_1;
  if (lVar11 == 0) {
    iVar10 = 0xfa1;
    pcVar33 = &cf_Can_trestoreBootedOSdevicewithNULLbootoptions;
LAB_00109dfb:
    lVar11 = 0;
    lVar12 = 0;
    goto LAB_00109863;
  }
  local_b8 = 0;
  local_118 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_40 = lVar11;
  if (param_1 == (__CFDictionary *)0x0) {
    pcVar33 = &cf_Can_tcheckifrestorewillfitNULLproxy;
    p_Var34 = local_80;
LAB_001088f3:
    _AMRSafeLogAndRelease(3,pcVar33);
  }
  else {
    lVar12 = _CFDictionaryGetValue(lVar11,&cf_CreateFilesystemPartitions);
    p_Var34 = local_80;
    if ((lVar12 == 0) || (cVar6 = _CFBooleanGetValue(lVar12), cVar6 != '\0')) {
      pcVar33 = (cfstringStruct *)0x0;
      goto LAB_001088f3;
    }
    local_140 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_5a = 0;
    local_120 = 0;
    local_158 = 0;
    local_150 = 0;
    local_58 = *(long *)PTR__kCFAllocatorDefault_004410e8;
    pcVar33 = (cfstringStruct *)_CFDictionaryCreateMutableCopy(local_58,0,lVar11);
    local_70 = 0;
    local_98 = -1;
    if (pcVar33 == (cfstringStruct *)0x0) {
      _AMRSafeLogAndRelease(3,&cf_Can_tgetvarsizefromniloptions);
LAB_00109e96:
      lVar16 = 0;
    }
    else {
      lVar12 = _CFDictionaryGetValue(pcVar33,&cf_RestoreBundlePath);
      local_68 = pcVar33;
      if (lVar12 == 0) {
        pcVar33 = &cf_Can_tgetvarsizewithoutrestorebundlepath;
LAB_00109e83:
        _AMRSafeLogAndRelease(3,pcVar33);
LAB_00109e8d:
        _CFRelease(local_68);
        goto LAB_00109e96;
      }
      uVar13 = _AMAuthInstallSupportCreateURLFromString(local_58,lVar12);
      if (uVar13 == 0) {
        pcVar33 = &cf_FailedtocreaterestorebundleURLfrompath;
        goto LAB_00109e83;
      }
      local_78 = __AMRestorableBuildCreateFromURLForType(uVar13,2,&local_70);
      if (local_78 == 0) {
        uVar26 = _AMRMakeString(&cf_Failedtoloadbuildmanifest___,local_70);
        _AMRSafeLogAndRelease(3,uVar26);
        local_98 = -1;
      }
      else {
        pAVar14 = (AMDeviceProxy *)_CFDictionaryGetValue(pcVar33,&cf_AuthInstallVariant);
        if ((pAVar14 == (AMDeviceProxy *)0x0) &&
           (pAVar14 = (AMDeviceProxy *)_CFDictionaryGetValue(pcVar33,&cf_AuthInstallRestoreBehavior)
           , pAVar14 == (AMDeviceProxy *)0x0)) {
          pcVar33 = &cf_Can_tgetvarsizewithoutvariantofbehavior;
LAB_00109efb:
          puVar31 = (undefined *)0x0;
          lVar12 = local_78;
LAB_00108b5f:
          _AMRSafeLogAndRelease(3,pcVar33);
          local_98 = -1;
          _CFRelease(lVar12);
          if (puVar31 == (undefined *)0x0) goto LAB_00108b89;
        }
        else {
          iVar10 = __AMDeviceProxyGetChipID(param_1);
          if (iVar10 == -1) {
            pcVar33 = &cf_FailedtogetvalidchipIDfordevice;
            lVar11 = local_40;
            goto LAB_00109efb;
          }
          local_88 = uVar13;
          iVar9 = __AMDeviceProxyGetBoardID(param_1);
          lVar12 = local_78;
          if (iVar9 == -1) {
            pcVar33 = &cf_FailedtogetvalidboardIDfordevice;
            uVar13 = local_88;
            lVar11 = local_40;
            goto LAB_00109efb;
          }
          if ((*(int *)(local_78 + 0x20) != 2) ||
             (lVar11 = _CFDictionaryGetValue(*(undefined8 *)(local_78 + 0x18),&cf_BuildIdentities),
             lVar11 == 0)) {
LAB_00108b49:
            pcVar33 = &cf_Failedtolocatebuildidentityfordeviceandvariant;
            puVar31 = (undefined *)0x0;
            uVar13 = local_88;
            param_1 = local_50;
            lVar11 = local_40;
            goto LAB_00108b5f;
          }
          in_R8 = &local_e8;
          local_e8.field0_0x0 = CONCAT44(iVar10,iVar9);
          local_e8.field2_0x10 = (undefined *)0x0;
          local_e8.field3_0x18._0_1_ = 0;
          local_e8.field1_0x8 = (qword)pAVar14;
          uVar26 = _CFArrayGetCount(lVar11);
          _CFArrayApplyFunction(lVar11,0,uVar26);
          lVar12 = local_78;
          if (local_e8.field2_0x10 == (undefined *)0x0) goto LAB_00108b49;
          in_R8 = &local_e8;
          local_e8.field3_0x18._0_1_ = 1;
          uVar26 = _CFArrayGetCount(lVar11);
          _CFArrayApplyFunction(lVar11,0,uVar26);
          puVar31 = local_e8.field2_0x10;
          if (local_e8.field2_0x10 == (undefined *)0x0) goto LAB_00108b49;
          _CFRetain(local_e8.field2_0x10);
          lVar11 = _AMAuthInstallSupportGetValueForKeyPathInDict
                             (local_58,puVar31,&cf_Info_OSVarContentSize);
          if (lVar11 == 0) {
            pcVar33 = &cf_Buildidentityhasnoentryforvarsize;
            uVar13 = local_88;
            param_1 = local_50;
            lVar11 = local_40;
            goto LAB_00108b5f;
          }
          cVar6 = _CFNumberGetValue(lVar11,4,&local_98);
          pcVar33 = (cfstringStruct *)0x0;
          if (cVar6 == '\0') {
            pcVar33 = &cf_Failedtogetvaluefromvarsizenumber;
          }
          _AMRSafeLogAndRelease(3,pcVar33);
          lVar11 = local_40;
          if (cVar6 == '\0') {
            local_98 = -1;
          }
          _CFRelease(lVar12);
          uVar13 = local_88;
          param_1 = local_50;
        }
        _CFRelease(puVar31);
      }
LAB_00108b89:
      _CFRelease(uVar13);
      lVar12 = local_98;
      if (local_98 < 0) goto LAB_00109e8d;
      p_Var15 = (_AMDevice *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
      lVar24 = _AMDeviceProxyCopyLockdownValueWithError
                         (p_Var15,(__CFString *)&cf_com_apple_disk_usage,(__CFString *)0x0,true,
                          (int *)in_R8);
      if (lVar24 == 0) goto LAB_00109e8d;
      lVar16 = _CFDictionaryGetCount(lVar24);
      lVar19 = 0;
      if ((((lVar16 == 0) || (lVar16 = __AMDeviceProxyCopyBoardConfig(param_1,0), lVar16 == 0)) ||
          (lVar17 = _CFDictionaryGetValue(lVar24,&cf_TotalSystemCapacity), lVar19 = lVar16,
          lVar11 = local_40, lVar17 == 0)) ||
         ((lVar18 = _CFDictionaryGetValue(lVar24,&cf_TotalDataCapacity), lVar11 = local_40,
          lVar18 == 0 ||
          (local_78 = lVar16, lVar16 = _CFDictionaryGetValue(lVar24,&cf_TotalDataAvailable),
          lVar19 = local_78, lVar11 = local_40, lVar16 == 0)))) {
LAB_00108cf4:
        _CFRelease(lVar24);
        _CFRelease(local_68);
        lVar16 = 0;
        if (lVar19 != 0) goto LAB_0010902b;
      }
      else {
        local_f0 = _CFDictionaryGetValue(lVar24,&cf_AmountRestoreAvailable);
        _CFNumberGetValue(lVar17,4,&local_c8);
        _CFNumberGetValue(lVar18,4,&local_c0);
        _CFNumberGetValue(lVar16,4,&local_130);
        lVar11 = local_40;
        pcVar33 = local_68;
        lVar19 = local_78;
        if ((local_c8 == 0) || (local_c0 == 0)) goto LAB_00108cf4;
        (**(code **)(*(long *)local_50 + 0xd0))(local_50,local_68);
        iVar10 = __AMRestoreGetMinimumSystemPartitionSize(lVar19,pcVar33,&local_158);
        lVar17 = local_158;
        if ((((iVar10 != 0) ||
             (cVar6 = _RCGetSystemPartitionExtrasSizeForDevice(lVar19,lVar11,&local_120),
             cVar6 == '\0')) ||
            (lVar16 = _CFDictionaryGetValue(lVar24,&cf_TotalDiskCapacity), lVar16 == 0)) ||
           (_CFNumberGetValue(lVar16,4,&local_138), (long)local_138 < 1)) goto LAB_00108cf4;
        lVar18 = local_c8 + local_c0;
        local_88 = local_138;
        local_138 = local_138 >> 0x1e;
        lVar19 = __AMRestoreCopySystemPartitionPaddingDictionary(lVar19,lVar11);
        if (lVar19 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = __AMRestoreFindBestFittingSystemPartitionPadding(lVar19,local_138);
          if (lVar16 == -1) {
            lVar16 = 0;
            _AMRSafeLog(5,&
                          cf_Nopaddingwasfoundfordevice_assumingpaddingis0forsystempartition_continuing___
                       );
          }
          else {
            lVar16 = lVar16 << 0x14;
          }
        }
        if ((local_f0 != 0) &&
           (cVar6 = _CFNumberGetValue(local_f0,4,&local_150), local_150 != 0 && cVar6 != '\0')) {
          _AMRSafeLog(7,&
                        cf_FoundanAmountRestoreAvailablevalue__llu_UsingitinsteadofavailableDataPartition_
                     );
          local_130 = (local_150 + lVar16) - local_c8;
        }
        lVar11 = _CFDictionaryGetValue(lVar11,&cf_SystemPartitionCushion);
        local_148 = lVar16;
        if (lVar11 != 0) {
          _CFNumberGetValue(lVar11,4,&local_128);
          local_128 = local_128 << 0x14;
        }
        lVar5 = local_c0;
        lVar4 = local_120;
        lVar3 = local_128;
        lVar11 = local_130;
        local_f0 = local_c8;
        lVar20 = _CFDictionaryCreateMutable(local_58,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
        lVar16 = 0;
        if (lVar20 != 0) {
          local_88 = local_88 - lVar18;
          lVar16 = local_f0 + lVar5;
          _AMSupportCFDictionarySetInteger64
                    (lVar20,&cf_restoreSystemPartitionSize,
                     lVar3 + lVar4 + local_148 + lVar17 * 0x100000);
          _AMSupportCFDictionarySetInteger64
                    (lVar20,&cf_requiredDataSpace,((lVar12 + lVar5) - lVar11) + 0x1e00000);
          _AMSupportCFDictionarySetInteger64(lVar20,&cf_diskCapacityInt,lVar16);
          _AMSupportCFDictionarySetInteger64(lVar20,&cf_firmwareExtrasSizeInBytes,local_120);
          _AMSupportCFDictionarySetInteger64(lVar20,&cf_newSystemImageSizeInt,lVar17 * 0x100000);
          _AMSupportCFDictionarySetInteger64(lVar20,&cf_sysPadding,local_148);
          _AMSupportCFDictionarySetInteger64(lVar20,&cf_systemPartitionCushionInt,local_128);
          _AMSupportCFDictionarySetInteger64
                    (lVar20,&cf_recoveryOSDeviceEstimatedCurrentSize,local_88);
          _CFDictionarySetValue(lVar20,&cf_sizeComputationDescription,local_140);
          lVar16 = lVar20;
        }
        _CFRelease(lVar24);
        if (lVar19 != 0) {
          _CFRelease();
        }
        _CFRelease(local_68);
        lVar19 = local_78;
        lVar11 = local_40;
LAB_0010902b:
        _CFRelease(lVar19);
      }
    }
    if (local_140 != 0) {
      _CFRelease();
    }
    if (lVar16 == 0) {
      pcVar33 = (cfstringStruct *)0x0;
      param_1 = local_50;
      p_Var34 = local_80;
      goto LAB_001088f3;
    }
    uVar26 = _CFDictionaryGetValue(lVar16,&cf_restoreSystemPartitionSize);
    _CFNumberGetValue(uVar26,4,&local_108);
    uVar26 = _CFDictionaryGetValue(lVar16,&cf_requiredDataSpace);
    _CFNumberGetValue(uVar26,4,&local_110);
    uVar26 = _CFDictionaryGetValue(lVar16,&cf_diskCapacityInt);
    _CFNumberGetValue(uVar26,4,&local_118);
    uVar26 = _CFDictionaryGetValue(lVar16,&cf_firmwareExtrasSizeInBytes);
    _CFNumberGetValue(uVar26,4,&local_a0);
    uVar26 = _CFDictionaryGetValue(lVar16,&cf_newSystemImageSizeInt);
    _CFNumberGetValue(uVar26,4,&local_b0);
    uVar26 = _CFDictionaryGetValue(lVar16,&cf_sysPadding);
    _CFNumberGetValue(uVar26,4,&local_b8);
    uVar26 = _CFDictionaryGetValue(lVar16,&cf_systemPartitionCushionInt);
    _CFNumberGetValue(uVar26,4,&local_a8);
    uVar26 = _CFDictionaryGetValue(lVar16,&cf_recoveryOSDeviceEstimatedCurrentSize);
    _CFNumberGetValue(uVar26,4,&local_100);
    uVar26 = _CFDictionaryGetValue(lVar16,&cf_sizeComputationDescription);
    lVar12 = _CFDictionaryGetValue(lVar11,&cf_InstallRecoveryOS);
    if ((lVar12 == 0) || (cVar6 = _CFBooleanGetValue(lVar12), cVar6 == '\0')) {
      pcVar33 = (cfstringStruct *)0x0;
      local_58 = 0;
      uVar13 = 0;
LAB_00109289:
      uVar1 = local_110 + local_108;
      if (uVar1 < local_118) {
        uVar30 = local_100 + local_118;
        local_68 = pcVar33;
        if (uVar1 + uVar13 < uVar30) {
LAB_00109386:
          lVar11 = local_b8 + 0xfffff;
          if (-1 < local_b8) {
            lVar11 = local_b8;
          }
          uVar26 = _RCCreateExtraSizeCalculationWithRecoveryOsDescriptionString
                             (uVar30 - (uVar13 + local_110 + local_108) >> 0x14,local_108 >> 0x14,
                              local_a0 >> 0x14,local_b0 >> 0x14,lVar11 >> 0x14,local_a8 >> 0x14,
                              uVar13 >> 0x14,local_110 >> 0x14,local_100 >> 0x14,local_118 >> 0x14,
                              uVar26);
          _AMRSafeLogAndRelease(6,uVar26);
          pcVar28 = (cfstringStruct *)0x0;
        }
        else {
          lVar11 = local_b8 + 0xfffff;
          if (-1 < local_b8) {
            lVar11 = local_b8;
          }
          pcVar28 = (cfstringStruct *)
                    _RCCreateSizeCalculationWithRecoveryOsDescriptionString
                              ((uVar1 + uVar13) - uVar30 >> 0x14,local_108 >> 0x14,local_a0 >> 0x14,
                               local_b0 >> 0x14,lVar11 >> 0x14,local_a8 >> 0x14,uVar13 >> 0x14,
                               local_110 >> 0x14,local_100 >> 0x14,local_118 >> 0x14,uVar26);
          if (pcVar28 == (cfstringStruct *)0x0) {
            uVar30 = local_100 + local_118;
            goto LAB_00109386;
          }
        }
        bVar2 = true;
        pcVar33 = local_68;
        lVar11 = local_40;
      }
      else {
        lVar12 = local_b8 + 0xfffff;
        if (-1 < local_b8) {
          lVar12 = local_b8;
        }
        pcVar28 = (cfstringStruct *)
                  _RCCreateSizeCalculationDescriptionString
                            (uVar1 - local_118 >> 0x14,local_108 >> 0x14,local_a0 >> 0x14,
                             local_b0 >> 0x14,lVar12 >> 0x14,local_a8 >> 0x14,local_110 >> 0x14,
                             local_118 >> 0x14,uVar26);
        bVar2 = false;
      }
    }
    else {
      local_70 = local_70 & 0xffffffffffffff00;
      local_e8.field0_0x0 = local_e8.field0_0x0 & 0xffffffff00000000;
      lVar12 = _CFDictionaryGetValue(lVar11,&cf_RecoveryOSBundlePath);
      lVar24 = _CFDictionaryGetValue(lVar11,&cf_AuthInstallRecoveryOSVariant);
      pcVar28 = &cf_Failedtogetrecoverypathandvariantfromrestoreoptions_;
      if (lVar24 == 0 || lVar12 == 0) {
        pcVar21 = (cfstringStruct *)0x0;
        lVar12 = 0;
      }
      else {
        pcVar33 = (cfstringStruct *)_CFDictionaryCreateMutableCopy(local_58,0,lVar11);
        _CFDictionarySetValue(pcVar33,&cf_RestoreBundlePath,lVar12);
        _CFDictionarySetValue(pcVar33,&cf_AuthInstallVariant,lVar24);
        pcVar21 = (cfstringStruct *)0x0;
        lVar12 = 0;
        if (pcVar33 != (cfstringStruct *)0x0) {
          lVar12 = 0;
          lVar24 = __AMDeviceProxyCopyBoardConfig(local_50,0);
          pcVar21 = pcVar33;
          if (lVar24 == 0) {
            pcVar28 = &cf_Failedtogethardwaremodelfromlockdown;
          }
          else {
            iVar10 = __AMRestoreGetMinimumRecoveryOSPartitionSize(lVar24,pcVar33,&local_e8);
            if (iVar10 == 0) {
              uVar13 = 0;
              lVar11 = local_40;
              local_58 = lVar24;
              if (0 < (int)local_e8.field0_0x0) {
                uVar13 = (ulong)(uint)((int)local_e8.field0_0x0 << 0x14);
              }
              goto LAB_00109289;
            }
            pcVar28 = &cf_FailedtogetnewrecoveryOSsystempartitionsize;
            lVar12 = lVar24;
          }
        }
      }
      bVar2 = true;
      pcVar33 = pcVar21;
      lVar11 = local_40;
      local_58 = lVar12;
    }
    _AMRSafeLogAndRelease(3,pcVar28);
    _CFRelease(lVar16);
    if (pcVar33 != (cfstringStruct *)0x0) {
      _CFRelease(pcVar33);
    }
    param_1 = local_50;
    p_Var34 = local_80;
    if (local_58 != 0) {
      _CFRelease();
    }
    if (!bVar2) {
      iVar10 = 0xfba;
      pcVar33 = &cf_Notenoughfreediskspace;
      goto LAB_00109dfb;
    }
  }
  iVar10 = (int)param_1;
  if (*(AMDeviceProxy *)(param_1 + 0x12) == (AMDeviceProxy)0x1) {
    local_31 = *(AMDeviceProxy *)(param_1 + 0x13);
LAB_0010979d:
    pcVar33 = &local_e8;
    local_e8.field0_0x0 = (qword)local_48;
    local_e8.field1_0x8 = (qword)param_1;
    pvVar25 = (void *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
    _AMDeviceProxyGenericProgressCallbackV2(pvVar25,0xcb,-1,(__CFDictionary *)0x0,pcVar33);
    iVar9 = _AMDeviceCopyAuthInstallPreflightOptions
                      (*(undefined8 *)(param_1 + 0x20),lVar11,&local_f8);
    if (iVar9 != 0) {
      lVar11 = _AMRestoreErrorTranslation(iVar9);
      lVar12 = _AMRCreateErrorWithDomain(lVar11,(long)iVar9,&cf_AMRestoreErrorDomain,0);
      iVar10 = 0xfbc;
      pcVar33 = &cf_Personalizationfailed;
LAB_00109863:
      bVar2 = false;
      local_48 = (__CFData *)0x0;
      goto LAB_0010986b;
    }
    iVar9 = _AMDeviceCopyFDRPreflightOptions(*(undefined8 *)(param_1 + 0x20),local_f8,&local_90);
    if (iVar9 != 0) {
      pcVar33 = &cf_FDRpreflightfailed;
      lVar11 = 0;
      lVar12 = _AMRCreateErrorWithDomain
                         (&cf_FDRpreflightfailed,(long)iVar9,&cf_AMRestoreErrorDomain,0);
      iVar10 = 0xfbb;
      goto LAB_00109863;
    }
    if (local_59 == true) {
      pcVar33 = (cfstringStruct *)_CFDictionaryGetValue(p_Var34,&cf_BootOptions);
      p_Var27 = (__CFDictionary *)_CFDictionaryGetValue(p_Var34,&cf_RestoreOptions);
      _AMDeviceProxyMergePersonalizationKeysFromSourceToDestination
                (local_90,(__CFDictionary *)pcVar33);
      _AMDeviceProxyMergePersonalizationKeysFromSourceToDestination(local_90,p_Var27);
    }
    else {
      _AMDeviceProxyMergeDictionaryWithDictionary(p_Var34,local_90,extraout_DL);
    }
    p_Var22 = (__CFData *)0x0;
    AMDeviceProxy::Log(iVar10,(__CFString *)((long)&MACH_HEADER.cputype + 1),
                       &cf_Successfullypreflightedrestore);
    if (local_31 == (AMDeviceProxy)0x1) {
      AMDeviceProxy::Log(iVar10,(__CFString *)((long)&MACH_HEADER.cputype + 1),
                         &cf_Committingstashbag);
      p_Var34 = local_90;
      local_e8.field0_0x0 = 0;
      if (local_90 == (__CFDictionary *)0x0) {
        pcVar33 = &cf_NULLrestoreoptions_can_tcreatepre_manifest;
LAB_0010a035:
        lVar11 = 0;
        lVar12 = 0;
LAB_0010a0fa:
        AMDeviceProxy::Log(iVar10,(__CFString *)((long)&MACH_HEADER.magic + 3),&cf___,pcVar33);
        _CFRelease(pcVar33);
        if (lVar11 != 0) goto LAB_00109a9f;
      }
      else {
        uVar26 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar11 = _CFDictionaryCreateMutable
                           (uVar26,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                            PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar11 == 0) {
          pcVar33 = &cf_FailedtoallocateCFMutableDictionaryRefforapParameters;
          goto LAB_0010a035;
        }
        uVar8 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
        _AMAuthInstallSupportDictionarySetBoolean(lVar11,&cf_ApSupportsImg4,uVar8);
        lVar12 = _AMAuthInstallCreate(uVar26);
        if (lVar12 == 0) {
          pcVar33 = &cf_Couldn_tinstantiatedAMAuthInstall;
          lVar12 = 0;
          goto LAB_0010a0fa;
        }
        iVar9 = _AMAuthInstallApSetParameters(lVar12,lVar11);
        if (iVar9 != 0) {
          pcVar33 = &cf_Failedtosetapparameters;
          goto LAB_0010a0fa;
        }
        iVar9 = _AMRAuthInstallCopyTicketData(lVar12,p_Var34,&local_e8);
        if (iVar9 != 0) {
          pcVar33 = &cf_Failedtocopyticketdata;
          goto LAB_0010a0fa;
        }
LAB_00109a9f:
        _CFRelease(lVar11);
      }
      if (lVar12 != 0) {
        _CFRelease(lVar12);
      }
      local_48 = (__CFData *)local_e8.field0_0x0;
      local_e8.field0_0x0 = 0;
      local_70 = 0;
      iVar10 = __AMDeviceProxyGetState(param_1);
      uVar26 = 4000;
      if (iVar10 == 4) {
        pcVar33 = (cfstringStruct *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
        if (pcVar33 == (cfstringStruct *)0x0) {
          local_68 = &cf_FailedtogetAMDevice;
          goto LAB_0010a04f;
        }
        iVar10 = _AMDeviceConnect(pcVar33);
        if (iVar10 == 0) {
          lVar11 = 0;
          lVar12 = _CFDictionaryCreateMutable
                             (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          uVar26 = 0xfa2;
          local_58 = CONCAT71((int7)((ulong)lVar12 >> 8),1);
          if (lVar12 == 0) {
            local_68 = &cf_Failedtoallocationoptionsdict;
            goto LAB_0010a15b;
          }
          _CFDictionarySetValue
                    (lVar12,&cf_UnlockEscrowBag,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
          iVar10 = _AMDeviceSecureStartService
                             (pcVar33,&cf_com_apple_preboardservice_v2,lVar12,&local_e8);
          lVar11 = lVar12;
          if (iVar10 != 0) {
            local_68 = pcVar33;
            lVar12 = _AMDCopyErrorText(iVar10);
            pcVar33 = &cf_AMDeviceSecureStartServicefailed;
            goto LAB_0010a1c5;
          }
          lVar12 = _CFDictionaryCreateMutable(0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
          if (lVar12 == 0) {
            local_68 = &cf_failedtoallocatemessagedict;
            param_1 = local_50;
            goto LAB_0010a15b;
          }
          _CFDictionarySetValue(lVar12,&cf_Command,&cf_CommitStashbag);
          p_Var22 = local_48;
          if (local_48 != (__CFData *)0x0) {
            _CFDictionarySetValue(lVar12,&cf_Manifest,local_48);
          }
          iVar10 = _AMDServiceConnectionSendMessage(local_e8.field0_0x0,lVar12,100);
          _CFRelease(lVar12);
          if (iVar10 == 0) {
            iVar10 = _AMDServiceConnectionReceiveMessage(local_e8.field0_0x0,&local_70,0);
            param_1 = local_50;
            if (iVar10 != 0) {
              local_68 = pcVar33;
              lVar12 = _AMDCopyErrorText(iVar10);
              pcVar33 = &cf_Failedtoreceivemessageafterstartingservicetocommitthestashbag;
              goto LAB_0010a1c5;
            }
            lVar12 = _CFDictionaryGetValue(local_70,&cf_Error);
            if ((lVar12 != 0) && (cVar6 = _CFBooleanGetValue(lVar12), cVar6 != '\0')) {
              uVar26 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
              local_68 = pcVar33;
              _CFDictionaryGetValue(local_70,&cf_ErrorString);
              pcVar28 = (cfstringStruct *)
                        _CFStringCreateWithFormat(uVar26,0,&cf_Stashbagcommitfailed___);
              iVar10 = 4000;
              goto LAB_0010a1ee;
            }
            local_40 = 0;
          }
          else {
            local_68 = pcVar33;
            lVar12 = _AMDCopyErrorText(iVar10);
            pcVar33 = &cf_AMDServiceConnectionSendMessagefailed;
LAB_0010a1c5:
            pcVar28 = (cfstringStruct *)
                      _CFStringCreateWithFormat(0,0,&cf__________d_,pcVar33,lVar12,iVar10);
            p_Var22 = local_48;
            param_1 = local_50;
            if (lVar12 != 0) {
              _CFRelease(lVar12);
              p_Var22 = local_48;
              param_1 = local_50;
            }
LAB_0010a1ee:
            local_40 = _AMRCreateErrorWithDomain
                                 (pcVar28,(long)iVar10,&cf_com_apple_MobileDevice_MobileRestore);
            local_58 = CONCAT71((int7)((ulong)local_40 >> 8),1);
            pcVar33 = local_68;
            if (pcVar28 != (cfstringStruct *)0x0) goto LAB_0010a21c;
          }
          goto LAB_00109c3d;
        }
        lVar11 = _AMDCopyErrorText(iVar10);
        pcVar28 = (cfstringStruct *)
                  _CFStringCreateWithFormat
                            (0,0,&cf__________d_,&cf_AMDeviceConnect__failed,lVar11,iVar10);
        if (lVar11 != 0) {
          _CFRelease(lVar11);
        }
        lVar11 = 0;
        local_40 = _AMRCreateErrorWithDomain
                             (pcVar28,(long)iVar10,&cf_com_apple_MobileDevice_MobileRestore);
        local_58 = 0;
        p_Var22 = local_48;
        param_1 = local_50;
        if (pcVar28 != (cfstringStruct *)0x0) goto LAB_0010a21c;
      }
      else {
        local_68 = &cf_Can_tcommitstashbagunlessdeviceisinthebootedOS;
LAB_0010a04f:
        local_58 = 0;
        lVar11 = 0;
        pcVar33 = (cfstringStruct *)0x0;
LAB_0010a15b:
        local_40 = _AMRCreateErrorWithDomain
                             (local_68,uVar26,&cf_com_apple_MobileDevice_MobileRestore,0);
        p_Var22 = local_48;
        pcVar28 = local_68;
LAB_0010a21c:
        AMDeviceProxy::Log((int)param_1,(__CFString *)((long)&MACH_HEADER.magic + 3),&cf___);
        _CFRelease(pcVar28);
        if ((char)local_58 != '\0') {
LAB_00109c3d:
          _AMDeviceDisconnect(pcVar33);
        }
      }
      if ((__CFData *)local_e8.field0_0x0 != (__CFData *)0x0) {
        _CFRelease();
      }
      if (local_70 != 0) {
        _CFRelease();
      }
      if (lVar11 != 0) {
        _CFRelease(lVar11);
      }
      p_Var34 = local_80;
      if (local_40 != 0) {
        cVar6 = _AMDeviceProxyIsStashbagRequired((AMDeviceProxy *)param_1);
        p_Var34 = local_80;
        if (cVar6 != '\0') {
          iVar10 = 0xfc5;
          pcVar33 = &cf_Failedtocommitstashbag;
          lVar11 = 0;
          bVar2 = false;
          lVar12 = local_40;
          goto LAB_0010986b;
        }
        AMDeviceProxy::Log((int)param_1,(__CFString *)((long)&MACH_HEADER.cputype + 1),
                           &cf_Stashbagnotrequired_OKtocontinue);
        _CFRelease(local_40);
      }
    }
    pcVar28 = (cfstringStruct *)_CFDictionaryGetValue(p_Var34,&cf_StopRestoreAfterPreflight);
    if (pcVar28 != (cfstringStruct *)0x0) {
      lVar11 = _CFGetTypeID(pcVar28);
      lVar12 = _CFBooleanGetTypeID();
      pcVar33 = pcVar28;
      if ((lVar11 != lVar12) || (cVar6 = _CFBooleanGetValue(pcVar28), cVar6 == '\0'))
      goto LAB_00109d53;
      iVar10 = 4000;
      pcVar33 = &cf_StoppingRestore;
LAB_00109d46:
      bVar2 = false;
      local_48 = p_Var22;
LAB_00109d4c:
      lVar11 = 0;
      lVar12 = 0;
      goto LAB_0010986b;
    }
LAB_00109d53:
    iVar10 = _AMDeviceConnect(*(long *)(param_1 + 0x20));
    if (iVar10 != 0) {
      pcVar33 = &cf_FailedtoconnecttobootedOSdevice;
      goto LAB_00109d46;
    }
    AMDeviceProxy::Log((int)param_1,(__CFString *)((long)&MACH_HEADER.cputype + 1),
                       &cf_Enteringrecoverymode);
    iVar10 = _AMDeviceEnterRecovery(*(long *)(param_1 + 0x20));
    if (iVar10 != 0) {
      local_48 = p_Var22;
      uVar26 = _AMDErrorString(iVar10);
      pcVar33 = (cfstringStruct *)
                _AMRMakeString(&cf_FailedtoputbootedOSdeviceintorecoverymode_0x_08x__s_,iVar10,
                               uVar26);
      bVar2 = true;
      goto LAB_00109d4c;
    }
    *(undefined2 *)(param_1 + 0x11) = 0;
    param_1[0x13] = (__CFDictionary)0x0;
    uVar29 = (undefined4)CONCAT71((int7)((ulong)pcVar33 >> 8),1);
    lVar11 = 0;
    local_40 = 0;
  }
  else {
    cVar6 = __AMDeviceProxyGetIsEraseInstall(p_Var34);
    if (cVar6 != '\0') {
      AMDeviceProxy::Log(iVar10,(__CFString *)((long)&MACH_HEADER.cputype + 1),
                         &cf_Requestingsystemtokenbecleared_);
      local_e8.field0_0x0 = 0;
      local_70 = 0;
      iVar9 = __AMDeviceProxyGetState(param_1);
      if ((iVar9 == 4) && (lVar11 = (**(code **)(*(long *)param_1 + 0x18))(param_1), lVar11 != 0)) {
        iVar9 = _AMDeviceConnect(lVar11);
        if (iVar9 == 0) {
          iVar9 = _AMDeviceSecureStartService(lVar11,&cf_com_apple_preboardservice_v2,p_Var34);
          if (iVar9 == 0) {
            _AMRLog(6,&cf_ConnectedtoPreboardServicev2);
            lVar12 = _CFDictionaryCreateMutable(0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
            if (lVar12 != 0) {
              _CFDictionarySetValue(lVar12,&cf_Command,&cf_ClearSystemToken);
              iVar9 = _AMDServiceConnectionSendMessage(local_e8.field0_0x0,lVar12,100);
              if (iVar9 == 0) {
                iVar9 = _AMDServiceConnectionReceiveMessage(local_e8.field0_0x0,&local_70,0);
                if (iVar9 != 0) {
                  lVar24 = _AMDCopyErrorText(iVar9);
                  pcVar33 = &cf_failedtoreceivemessageaftersendingclearsystemtokenrequest_;
                  goto LAB_00109fad;
                }
                lVar24 = _CFDictionaryGetValue(local_70,&cf_ClearSystemTokenSuccess);
                if (lVar24 != 0) {
                  cVar6 = _CFBooleanGetValue(lVar24);
                  if (cVar6 == '\0') {
                    pcVar33 = &cf_Clearingsystemtokenfailed_;
                  }
                  else {
                    pcVar33 = &cf_Clearingsystemtokensucceeded_;
                  }
                  _AMRLog(6,pcVar33);
                }
              }
              else {
                lVar24 = _AMDCopyErrorText(iVar9);
                pcVar33 = &cf_AMDServiceConnectionSendMessagefailed;
LAB_00109fad:
                _CFStringCreateWithFormat(0,0,&cf__________d_,pcVar33,lVar24,iVar9);
                if (lVar24 != 0) {
                  _CFRelease(lVar24);
                }
              }
              _AMDeviceDisconnect(lVar11);
              _CFRelease(lVar12);
              p_Var34 = local_80;
              goto LAB_0010977a;
            }
          }
          else {
            _AMRLog(6,&cf_Couldn_tstartPreboardServicev2toclearsystemtoken_);
          }
          _AMDeviceDisconnect(lVar11);
          p_Var34 = local_80;
        }
        else {
          lVar11 = _AMDCopyErrorText(iVar9);
          _CFStringCreateWithFormat(0,0,&cf__________d_,&cf_AMDeviceConnectfailed,lVar11,iVar9);
          if (lVar11 != 0) {
            _CFRelease(lVar11);
          }
        }
      }
LAB_0010977a:
      p_Var22 = (__CFData *)local_e8.field0_0x0;
      lVar11 = local_40;
      if (local_70 != 0) {
        _CFRelease();
        p_Var22 = (__CFData *)local_e8.field0_0x0;
        lVar11 = local_40;
      }
      goto joined_r0x00109796;
    }
    lVar11 = _CFDictionaryGetValue(p_Var34,&cf_DisableUserAuthentication);
    if (lVar11 != 0) {
      lVar12 = _CFGetTypeID(lVar11);
      lVar24 = _CFBooleanGetTypeID();
      if ((lVar12 != lVar24) || (cVar6 = _CFBooleanGetValue(lVar11), cVar6 == '\0'))
      goto LAB_00109550;
      pcVar33 = &cf_UserauthenticationisDISABLED;
LAB_0010961b:
      AMDeviceProxy::Log(iVar10,(__CFString *)((long)&MACH_HEADER.cputype + 1),pcVar33);
      lVar11 = local_40;
      goto LAB_0010979d;
    }
LAB_00109550:
    bVar7 = _AMDeviceProxyIsStashbagRequired((AMDeviceProxy *)param_1);
    if (((~(byte)*(AMDeviceProxy *)(param_1 + 0x11) | bVar7) & 1) == 0) {
      pcVar33 = &cf_Notcreatingstashbag_previousattemptfailed;
      goto LAB_0010961b;
    }
    p_Var22 = (__CFData *)0x0;
    AMDeviceProxy::Log(iVar10,(__CFString *)((long)&MACH_HEADER.cputype + 1),&cf_Creatingstashbag);
    cVar6 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
    if (cVar6 != '\0') {
      AMDeviceProxy::Log(iVar10,(__CFString *)((long)&MACH_HEADER.cputype + 1),
                         &cf_Creatingpre_manifest);
      p_Var22 = (__CFData *)_AMDeviceProxyCreatePreManifest((AMDeviceProxy *)param_1,p_Var34);
    }
    p_Var23 = (__CFData *)_CFDictionaryGetValue(p_Var34,&cf_DevicePasscodeData);
    if (p_Var23 == (__CFData *)0x0) {
      lVar12 = _AMDeviceProxyCreateStashBagWithManifest
                         ((AMDeviceProxy *)param_1,p_Var22,(__CFData *)0x0,(bool *)&local_31,
                          _NotifyOperationChangedHandler,local_48);
    }
    else {
      lVar11 = _CFGetTypeID(p_Var23);
      lVar12 = _CFDataGetTypeID();
      if (lVar11 != lVar12) {
        *(undefined2 *)(param_1 + 0x11) = 0;
        *(AMDeviceProxy *)(param_1 + 0x13) = (AMDeviceProxy)0x0;
        lVar11 = 0;
        uVar32 = 0;
        local_40 = 0;
        goto LAB_001098fe;
      }
      lVar12 = _AMDeviceProxyCreateStashBagWithManifest
                         ((AMDeviceProxy *)param_1,p_Var22,p_Var23,(bool *)&local_31,
                          _NotifyOperationChangedHandler,local_48);
      p_Var34 = local_80;
    }
    lVar11 = local_40;
    if (lVar12 == 0) {
joined_r0x00109796:
      local_40 = lVar11;
      if (p_Var22 != (__CFData *)0x0) {
        _CFRelease(p_Var22);
      }
      goto LAB_0010979d;
    }
    local_31 = (AMDeviceProxy)0x0;
    if ((bVar7 & 1) == 0) {
      AMDeviceProxy::Log(iVar10,(__CFString *)((long)&MACH_HEADER.cputype + 1),
                         &cf_Stashbagnotrequired_OKtocontinue);
      _CFRelease(lVar12);
      lVar11 = local_40;
      goto joined_r0x00109796;
    }
    iVar10 = 0xfc5;
    pcVar33 = &cf_Failedtocreatestashbag;
    lVar11 = 0;
    bVar2 = false;
    local_48 = p_Var22;
LAB_0010986b:
    param_1 = local_50;
    *(undefined2 *)(local_50 + 0x11) = 0;
    *(AMDeviceProxy *)(local_50 + 0x13) = (AMDeviceProxy)0x0;
    local_40 = lVar12;
    if ((in_RCX == (undefined8 *)0x0) || (pcVar33 == (cfstringStruct *)0x0)) {
      AMDeviceProxy::LogAndRelease((AMDeviceProxy *)local_50,3,(__CFString *)pcVar33);
    }
    else {
      uVar26 = _AMRCreateErrorWithDomain
                         (pcVar33,(long)iVar10,&cf_com_apple_MobileDevice_MobileRestore);
      param_1 = local_50;
      *in_RCX = uVar26;
      AMDeviceProxy::Log((int)local_50,(__CFString *)((long)&MACH_HEADER.magic + 3),&cf___,pcVar33);
      _CFRelease(pcVar33);
    }
    uVar29 = 0;
    p_Var22 = local_48;
    uVar32 = 0;
    if (!bVar2) goto LAB_001098fe;
  }
  _AMDeviceDisconnect(*(long *)(param_1 + 0x20));
  uVar32 = uVar29;
LAB_001098fe:
  if (local_f8 != 0) {
    _CFRelease();
  }
  if (local_90 != (__CFDictionary *)0x0) {
    _CFRelease();
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  if (p_Var22 != (__CFData *)0x0) {
    _CFRelease(p_Var22);
  }
  return uVar32;
}

