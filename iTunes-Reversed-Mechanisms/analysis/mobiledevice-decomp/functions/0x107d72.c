// rea decompile_all
// name: AMRestoreOSDeviceProxy::Restore
// address: 0x107d72
// body: available
// range: 0x107d72-0x1084b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMRestoreOSDeviceProxy::Restore(__CFDictionary*, void*, __CFError**) */

ulong __thiscall
AMRestoreOSDeviceProxy::Restore
          (AMRestoreOSDeviceProxy *this,__CFDictionary *param_1,void *param_2,__CFError **param_3)

{
  AMDeviceProxy *pAVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  __CFDictionary *p_Var8;
  __CFDictionary *p_Var9;
  undefined8 uVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  cfstringStruct *pcVar17;
  __CFError *p_Var18;
  cfstringStruct *pcVar19;
  __CFError **pp_Var20;
  ulong *puVar21;
  ulong uVar22;
  ulong local_80;
  long local_78;
  __CFError **local_70;
  void *local_68;
  AMRestoreOSDeviceProxy *local_60;
  ulong local_58;
  long local_50;
  void *local_48;
  int local_3c;
  AMRestoreOSDeviceProxy *local_38;
  
  local_78 = 0;
  if (param_3 != (__CFError **)0x0) {
    *param_3 = (__CFError *)0x0;
  }
  puVar4 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
  puVar3 = PTR__kCFTypeDictionaryKeyCallBacks_004411b0;
  pvVar2 = *(void **)PTR__kCFAllocatorDefault_004410e8;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = this;
  local_50 = _CFDictionaryCreateMutable
                       (pvVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  local_48 = pvVar2;
  lVar7 = _CFDictionaryCreateMutable(pvVar2,0,puVar3,puVar4);
  LOCK();
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  UNLOCK();
  local_38 = this;
  if (param_1 == (__CFDictionary *)0x0) {
    pcVar17 = &cf_Can_trestoredevicewithNULLflattenedoptions;
    pp_Var20 = local_70;
  }
  else {
    p_Var8 = (__CFDictionary *)_CFDictionaryGetValue(param_1,&cf_BootOptions);
    p_Var9 = (__CFDictionary *)_CFDictionaryGetValue(param_1,&cf_RestoreOptions);
    if (p_Var9 != (__CFDictionary *)0x0 && p_Var8 != (__CFDictionary *)0x0) {
      _AMDeviceProxyMergePersonalizationKeysFromSourceToDestination(p_Var8,p_Var9);
      param_1 = (__CFDictionary *)_CFDictionaryGetValue(param_1,&cf_RestoreOptions);
      if (param_1 == (__CFDictionary *)0x0) {
        pcVar17 = &cf_Can_trestoredevicewithNULLrestoreoptions;
        this = local_38;
        pp_Var20 = local_70;
        goto LAB_001083c0;
      }
    }
    lVar12 = local_50;
    _AMRestoreModeDeviceSetCheckpointInfo(*(undefined8 *)(local_38 + 0x20),local_50);
    if (lVar12 != 0) {
      _CFRelease(lVar12);
    }
    this = local_38;
    _AMRestoreModeDeviceSetAttestationInfo(*(undefined8 *)(local_38 + 0x20),lVar7);
    if (lVar7 != 0) {
      _CFRelease(lVar7);
    }
    _AMRestoreModeDeviceSetHostLogContext(*(undefined8 *)(this + 0x20),param_2);
    cVar5 = _AMRestorePerformRestoreModeRestoreWithErrorV2
                      (*(undefined8 *)(this + 0x20),param_1,RestoreProgressCallback,&local_68,
                       &local_78);
    pcVar17 = (cfstringStruct *)0x0;
    _AMRestoreModeDeviceSetHostLogContext(*(undefined8 *)(this + 0x20),0);
    pvVar2 = local_48;
    local_58 = 0;
    local_80 = 0;
    local_3c = 0;
    if (local_60 == (AMRestoreOSDeviceProxy *)0x0) {
      pcVar19 = &cf_Can_tforwardlastfailurelogwithNULLproxy;
      puVar21 = (ulong *)0x0;
    }
    else {
      if (*(long *)(local_60 + 8) == 0) {
        pcVar19 = &cf_Can_tforwardlastfailuretoNULLcallback;
      }
      else {
        uVar10 = (**(code **)(*(long *)local_60 + 0x18))();
        iVar6 = _AMRestoreModeGetLastFailureLog(uVar10,&local_58,&local_3c,&local_80);
        if (iVar6 == 0) {
          pcVar17 = (cfstringStruct *)0x0;
          if (local_3c == 0) {
            puVar21 = (ulong *)0x0;
          }
          else {
            puVar21 = (ulong *)0x0;
            pcVar19 = (cfstringStruct *)0x0;
            if (local_58 == 0) goto LAB_00107ff3;
            puVar21 = (ulong *)_CFDictionaryCreateMutable
                                         (pvVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            if (puVar21 == (ulong *)0x0) {
              pcVar19 = &cf_Failedtoallocatedictionaryforlastrestorefailurestatus;
              goto LAB_0010849e;
            }
            _CFDictionarySetValue(puVar21,&cf_LastFailureLog,local_58);
            pcVar19 = &cf_UnknownRestoreType;
            if (local_3c == 2) {
              pcVar19 = &cf_RestoreTypeOTA;
            }
            pcVar17 = &cf_RestoreTypeRestore;
            if (local_3c != 1) {
              pcVar17 = pcVar19;
            }
            _CFDictionarySetValue(puVar21,&cf_LastFailureType,pcVar17);
            if (local_80 != 0) {
              _CFDictionarySetValue(puVar21,&cf_LastFailureInfo);
            }
            (**(code **)(local_60 + 8))(local_68,puVar21);
          }
          pcVar19 = (cfstringStruct *)0x0;
          goto LAB_00107ff3;
        }
        pcVar19 = (cfstringStruct *)
                  _AMRMakeString(&cf_Failedtocopylastrestorefailurefromdevice_error__d,iVar6);
      }
LAB_0010849e:
      pcVar17 = (cfstringStruct *)0x0;
      puVar21 = (ulong *)0x0;
    }
LAB_00107ff3:
    AMDeviceProxy::LogAndRelease((AMDeviceProxy *)local_60,3,(__CFString *)pcVar19);
    if (local_80 != 0) {
      _CFRelease();
    }
    if (puVar21 != (ulong *)0x0) {
      _CFRelease(puVar21);
    }
    if (pcVar17 != (cfstringStruct *)0x0) {
      _CFRelease(pcVar17);
    }
    puVar11 = (ulong *)_AMRestoreModeDeviceGetFDRUserInfo(*(undefined8 *)(this + 0x20));
    if ((puVar11 != (ulong *)0x0) &&
       (lVar7 = _CFDictionaryCreateMutable
                          (pvVar2,10,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8), puVar21 = puVar11,
       lVar7 != 0)) {
      local_58 = CONCAT44(local_58._4_4_,0xd1);
      lVar12 = _CFNumberCreate(pvVar2,9);
      if (lVar12 != 0) {
        _CFDictionaryAddValue(lVar7,&cf_Operation,lVar12);
        _CFDictionarySetValue(lVar7,&cf_FDRUserInfo,puVar11);
        if ((local_60 != (AMRestoreOSDeviceProxy *)0x0) && (*(code **)(local_60 + 8) != (code *)0x0)
           ) {
          (**(code **)(local_60 + 8))(local_68,lVar7);
        }
        _CFRelease(lVar12);
      }
      _CFRelease(lVar7);
      this = local_38;
    }
    lVar7 = _AMRestoreModeDeviceGetCheckpointInfo(*(undefined8 *)(this + 0x20));
    pvVar2 = local_68;
    if (lVar7 != 0) {
      lVar12 = _CFDictionaryGetValue(lVar7,&cf_LastCheckpoint);
      lVar13 = _CFDictionaryGetValue(lVar7,&cf_FailedCheckpoint);
      if (lVar13 != 0) {
        lVar12 = lVar13;
      }
      if (lVar12 == 0) {
        __AMRestorableDeviceCleanupCheckpointData(pvVar2);
        *(undefined8 *)((long)pvVar2 + 0x108) = 0;
        _AMRSafeLog(3,&cf_CheckpointdataafterarestoreisNULL_);
        this = local_38;
      }
      else {
        local_50 = _CFDictionaryGetValue(lVar12,&cf_CHECKPOINT_ID);
        uVar10 = _CFDictionaryGetValue(lVar12,&cf_CHECKPOINT_RESULT);
        local_48 = (void *)_CFDictionaryGetValue(lVar12,&cf_CHECKPOINT_ERROR);
        uVar14 = _CFDictionaryGetValue(lVar12,&cf_CHECKPOINT_WARNING);
        uVar15 = _CFDictionaryGetValue(lVar12,&cf_CHECKPOINT_NAME);
        uVar16 = _CFDictionaryGetValue(lVar7,&cf_CheckpointInfoMessages);
        local_58 = local_58 & 0xffffffff00000000;
        puVar21 = &local_80;
        local_80 = local_80 & 0xffffffff00000000;
        _CFNumberGetValue(local_50,10,&local_58);
        _CFNumberGetValue(uVar10,9,puVar21);
        uVar10 = _RestoreCheckpointDataCreate
                           (local_58 & 0xffffffff,local_80 & 0xffffffff,uVar14,uVar16,local_48,
                            uVar15);
        __AMRestorableDeviceCleanupCheckpointData(pvVar2);
        *(undefined8 *)((long)pvVar2 + 0x108) = uVar10;
        this = local_38;
      }
    }
    lVar7 = _AMRestoreModeDeviceGetAttestationInfo(*(undefined8 *)(this + 0x20));
    if (lVar7 != 0) {
      local_48 = local_68;
      local_50 = _CFDictionaryGetValue(lVar7,&cf_AttestationUnsupportedReason);
      uVar10 = _CFDictionaryGetValue(lVar7,&cf_AttestationRequestStatus);
      lVar12 = _CFDictionaryGetValue(lVar7,&cf_AttestationRequested);
      lVar13 = _CFDictionaryGetValue(lVar7,&cf_AttestationPassed);
      puVar21 = (ulong *)_CFDictionaryGetValue(lVar7,&cf_AttestationError);
      uVar14 = _CFDictionaryGetValue(lVar7,&cf_AttestationFailureReason);
      uVar15 = _CFDictionaryGetValue(lVar7,&cf_AttestationLevel);
      this = local_38;
      uVar10 = _AttestedRestoreDataCreate
                         (local_50,uVar10,uVar15,lVar12 == *(long *)PTR__kCFBooleanTrue_00441110,
                          lVar13 == *(long *)PTR__kCFBooleanTrue_00441110,puVar21,uVar14);
      pvVar2 = local_48;
      __AMRestorableDeviceCleanupAttestedRestoreData(local_48);
      *(undefined8 *)((long)pvVar2 + 0x110) = uVar10;
    }
    pvVar2 = local_68;
    if (cVar5 != '\0') {
      uVar22 = CONCAT71((int7)((ulong)puVar21 >> 8),1);
      pcVar17 = (cfstringStruct *)0x0;
      goto LAB_001083f4;
    }
    if (local_68 == (void *)0x0) {
      pcVar17 = &cf_Can_tsenddump_consolecommandwithNULLdevice;
      pp_Var20 = local_70;
    }
    else {
      iVar6 = __AMDeviceProxyGetState(*(undefined8 *)((long)local_68 + 0x20));
      pp_Var20 = local_70;
      if (iVar6 == 2) {
        pcVar17 = (cfstringStruct *)0x0;
        _AMRLog(7,&cf_SendingiBootdump_consolecommand_);
        uVar10 = _AMRMakeString(&cf_dump_console);
        uVar14 = __AMDeviceProxyGetDeviceRef(*(undefined8 *)((long)pvVar2 + 0x20));
        iVar6 = _AMRecoveryModeDeviceSendCommandToDevice(uVar14,uVar10);
        if (iVar6 != 0) {
          pcVar17 = (cfstringStruct *)
                    _AMRMakeString(&cf_Failedtosenddump_consolecommandtodevice_error__d,iVar6);
        }
      }
      else {
        pcVar17 = &cf_Can_tsenddump_consolecommandsincedeviceisnotinrecoverymode;
      }
    }
    _AMRSafeLogAndRelease(3,pcVar17);
    uVar10 = _CFErrorGetCode(local_78);
    pcVar17 = (cfstringStruct *)
              _AMRMakeString(&cf_AMRestorePerformRestoreModeRestoreWithErrorfailedwitherror__ld,
                             uVar10);
  }
LAB_001083c0:
  if (pp_Var20 != (__CFError **)0x0) {
    if (pcVar17 == (cfstringStruct *)0x0) {
      pcVar17 = &cf_AnunknownerroroccurredduringrestoreOSmoderestore;
    }
    p_Var18 = (__CFError *)
              _AMRCreateErrorWithDomain
                        (pcVar17,0xffffffffffffffff,&cf_com_apple_MobileDevice_MobileRestore,
                         local_78);
    *pp_Var20 = p_Var18;
  }
  uVar22 = 0;
LAB_001083f4:
  pAVar1 = (AMDeviceProxy *)(this + 0x14);
  AMDeviceProxy::LogAndRelease((AMDeviceProxy *)this,3,(__CFString *)pcVar17);
  if (local_78 != 0) {
    _CFRelease();
  }
  LOCK();
  *(int *)pAVar1 = *(int *)pAVar1 + -1;
  UNLOCK();
  if (this != (AMRestoreOSDeviceProxy *)0x0 && *(int *)pAVar1 == 0) {
    (**(code **)(*(long *)this + 8))(this);
  }
  return uVar22 & 0xffffffff;
}

