// rea decompile_all
// name: __AMRestorableStateMachineHandleRestoreComplete
// address: 0x15a018
// body: available
// range: 0x15a018-0x15a4eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMRestorableStateMachineHandleRestoreComplete(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  time_t tVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  cfstringStruct *pcVar13;
  undefined8 uVar14;
  cfstringStruct *pcVar15;
  
  lVar8 = 0;
  tVar7 = _time((time_t *)0x0);
  *(time_t *)((long)param_1 + 0x40) = tVar7;
  if (*(long *)((long)param_1 + 0x20) == 0) {
    pcVar15 = &cf_Can_tprocessrestorecompletewithNULLproxy;
  }
  else {
    *(undefined8 *)((long)param_1 + 0xc0) = 0;
    *(undefined8 *)((long)param_1 + 200) = 0;
    uVar14 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar8 = _CFDictionaryCreateMutable
                      (uVar14,10,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar8 != 0) {
      if ((*(long *)((long)param_1 + 0x50) != 0) &&
         (lVar9 = _CFDictionaryGetValue(*(long *)((long)param_1 + 0x50),&cf_UUID), lVar9 != 0)) {
        lVar10 = _CFGetTypeID(lVar9);
        lVar11 = _CFStringGetTypeID();
        if (lVar10 == lVar11) {
          _CFDictionarySetValue(lVar8,&cf_UUID,lVar9);
        }
      }
      iVar1 = *(int *)((long)param_1 + 0x2c);
      if (iVar1 == 1) {
        _CFDictionarySetValue(lVar8,&cf_Status,&cf_Successful);
        uVar3 = *(undefined8 *)((long)param_1 + 0x50);
        pcVar13 = (cfstringStruct *)
                  __CFRuntimeCreateInstance(uVar14,__AMRestorablePersonalizedTypeID,0x28,0);
        if (pcVar13 == (cfstringStruct *)0x0) {
          pcVar13 = &cf_FailedtoallocateAMRestorablePersonalizedRef;
          _AMRSafeLog(3,&cf___,&cf_FailedtoallocateAMRestorablePersonalizedRef);
LAB_0015a4c9:
          _CFRelease(pcVar13);
          pcVar13 = (cfstringStruct *)0x0;
          _AMRLog(4,&cf_Failedtocreatepersonalizedobject);
        }
        else {
          pcVar13[1].field0_0x0 = 0;
          pcVar13[1].field1_0x8 = 0;
          pcVar13->field2_0x10 = (undefined *)0x0;
          pcVar13->field3_0x18 = 0;
          pcVar13[1].field2_0x10 = (undefined *)0x0;
          puVar12 = (undefined *)_CFRetain(param_1);
          pcVar13->field2_0x10 = puVar12;
          lVar9 = _CFRetain(uVar3);
          pcVar13->field3_0x18 = lVar9;
          pcVar13[1].field0_0x0 = 0;
          pcVar13[1].field2_0x10 = (undefined *)0x0;
          lVar9 = _CFDictionaryGetValue(uVar3,&cf_PersonalizedRestoreBundlePath);
          if (lVar9 != 0) {
            puVar12 = (undefined *)_AMAuthInstallSupportCreateURLFromString(uVar14,lVar9);
            pcVar13[1].field2_0x10 = puVar12;
            if (puVar12 == (undefined *)0x0) {
              _AMRSafeLog(3,&cf___,&cf_Failedtocreateurlfromstring);
              _CFRelease(&cf_Failedtocreateurlfromstring);
              goto LAB_0015a4c9;
            }
            __AMRResourceManagerStartedUsingResourceAtURL(puVar12);
          }
          _CFDictionarySetValue(lVar8,&cf_PersonalizedObj,pcVar13);
        }
      }
      else {
        if (iVar1 == 3) {
          _CFDictionarySetValue(lVar8,&cf_Status,&cf_Failed);
          __AMRestorableDeviceInvestigateFailure(param_1);
          lVar9 = *(long *)((long)param_1 + 0x10);
          if (lVar9 == 0) {
            uVar5 = *(int *)((long)param_1 + 0x30) - 1;
            pcVar13 = &cf_Unknown;
            pcVar15 = &cf_Unknown;
            if (uVar5 < 6) {
              pcVar15 = *(cfstringStruct **)(&DAT_0044a380 + (ulong)uVar5 * 8);
            }
            piVar2 = *(int **)(*(long *)((long)param_1 + 0x18) + 0x18);
            if (piVar2 != (int *)0x0) {
              if (piVar2 == *(int **)(*(long *)((long)param_1 + 0x18) + 0x10)) {
                uVar5 = 3;
              }
              else {
                uVar5 = *piVar2 - 1;
                if (5 < uVar5) goto LAB_0015a28b;
              }
              pcVar13 = *(cfstringStruct **)(&DAT_0044a380 + (ulong)uVar5 * 8);
            }
LAB_0015a28b:
            pcVar15 = (cfstringStruct *)
                      _AMRMakeString(&cf_Gaveupwaitingfordevicetotransitionfrom__stateto__state_,
                                     pcVar15,pcVar13);
            puVar4 = *(undefined4 **)(*(long *)((long)param_1 + 0x18) + 0x18);
            if (puVar4 == (undefined4 *)0x0) {
switchD_0015a2c8_default:
              uVar14 = 0xfa5;
            }
            else {
              uVar14 = 0xfc9;
              if (puVar4 != *(undefined4 **)(*(long *)((long)param_1 + 0x18) + 0x10)) {
                switch(*puVar4) {
                case 1:
                  uVar14 = 0xfca;
                  break;
                case 2:
                  uVar5 = *(int *)((long)param_1 + 0x30) - 1;
                  uVar14 = 0xfcc;
                  if (uVar5 < 4) {
                    uVar14 = *(undefined8 *)(&DAT_00330b50 + (ulong)uVar5 * 8);
                  }
                  break;
                case 3:
                  uVar14 = 0xfcb;
                  break;
                case 4:
                  break;
                default:
                  goto switchD_0015a2c8_default;
                }
              }
            }
            goto LAB_0015a2e0;
          }
        }
        else {
          if (iVar1 != 2) {
            pcVar15 = &cf_Can_tcompleterestoresincedeviceisnotinafinalstate;
            goto LAB_0015a26e;
          }
          _CFDictionarySetValue(lVar8,&cf_Status,&cf_Failed);
          __AMRestorableDeviceInvestigateFailure(param_1);
          lVar9 = *(long *)((long)param_1 + 0x10);
          if (lVar9 != 0) goto LAB_0015a2ee;
          _AMRLog(7,&cf_Deviceerrordoesnotexistsoreportanunknownfailure);
          pcVar15 = &cf_Unknownrestorefailure;
          uVar14 = 4000;
LAB_0015a2e0:
          lVar9 = _AMRCreateErrorWithDomain
                            (pcVar15,uVar14,&cf_com_apple_MobileDevice_MobileRestore,0);
          *(long *)((long)param_1 + 0x10) = lVar9;
        }
LAB_0015a2ee:
        _CFDictionarySetValue(lVar8,&cf_Error,lVar9);
        pcVar13 = (cfstringStruct *)0x0;
      }
      uVar14 = 0;
      _AMSupportCFDictionarySetInteger32(lVar8,&cf_Operation,0);
      _AMSupportCFDictionarySetInteger32(lVar8,&cf_Progress,100);
      uVar6 = __AMDeviceProxyGetState(*(undefined8 *)((long)param_1 + 0x20));
      _AMSupportCFDictionarySetInteger32(lVar8,&cf_DeviceState,uVar6);
      _AMSupportCFDictionarySetInteger32(lVar8,&cf_OverallProgress,100);
      lVar9 = __AMRestorableEventDataExtendedCreate
                        (100,param_1,lVar8,0,0,*(undefined8 *)((long)param_1 + 0x48),
                         *(undefined8 *)((long)param_1 + 0x58));
      if (lVar9 == 0) {
        pcVar15 = &cf_Failedtocreateeventforrestorecompletenotification;
      }
      else {
        __AMRestorableDispatchStatusEvent(lVar9,1);
        _dispatch_async(*(undefined8 *)(_gRestorableData + 0x18));
        uVar14 = 1;
        pcVar15 = (cfstringStruct *)0x0;
      }
      goto LAB_0015a3d3;
    }
    pcVar15 = &cf_Failedtoallocatedictionaryforrestorecompletestatus;
    lVar8 = 0;
  }
LAB_0015a26e:
  pcVar13 = (cfstringStruct *)0x0;
  uVar14 = 0;
LAB_0015a3d3:
  _CFRetain(param_1);
  _dispatch_async_f(*(dispatch_queue_t *)((long)param_1 + 0x98),param_1,
                    ___thr_AMRestorableCleanupDeviceData);
  __AMRestorableDeviceRestoreQueueFlush();
  _AMRSafeLogAndRelease(3,pcVar15);
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (pcVar13 != (cfstringStruct *)0x0) {
    _CFRelease(pcVar13);
  }
  return uVar14;
}

