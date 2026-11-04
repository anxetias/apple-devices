// rea decompile_all
// name: ___thr_AMRestorableBootedOSDeviceNotificationCallback
// address: 0x163810
// body: available
// range: 0x163810-0x163a84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x163a08 to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableBootedOSDeviceNotificationCallback(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined2 *context;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  
  if (param_1 == (undefined8 *)0x0) {
    pcVar7 = &cf_Invalidnotificationinfo_;
LAB_001639fb:
    _AMRSafeLogAndRelease(3,pcVar7);
    return;
  }
  plVar4 = (long *)__AMDeviceProxyCreateBootedOSProxy(*param_1);
  if (plVar4 == (long *)0x0) {
    pcVar7 = &cf_FailedtocreatebootedOSdeviceproxy;
    goto LAB_001639fb;
  }
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 == 3) {
    _AMRLog(3,&cf_BootedOScallbacksstopped_attemptingtoregisteragain___);
    ___AMRestorableScheduleCallBackTimer
              (0x4008000000000000,___thr__AMRestorableAttemptBootedOSRegistrationNow,param_2);
    goto LAB_001639bf;
  }
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      uVar3 = _AMDeviceUSBDeviceID(*param_1);
      lVar5 = __AMDeviceProxyGetECID(plVar4);
      if (lVar5 == 0) {
        pcVar7 = &cf_FailedtogetECIDforbootedOSdevice;
      }
      else {
        context = _calloc(1,0x20);
        if (context == (undefined2 *)0x0) {
          pcVar7 = &cf_FailedtoallocateargsforprocessingbootedOSevent;
        }
        else {
          *context = 0;
          *(long *)(context + 8) = lVar5;
          *(undefined4 *)(context + 0xc) = uVar3;
          *(long **)(context + 4) = plVar4;
          LOCK();
          *(int *)((long)plVar4 + 0x14) = *(int *)((long)plVar4 + 0x14) + 1;
          UNLOCK();
          _dispatch_async_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),context,
                            ___thr_AMRestorableProcessDeviceConnected);
          pcVar7 = (cfstringStruct *)0x0;
        }
      }
      _AMRSafeLogAndRelease(3,pcVar7);
    }
    goto LAB_001639bf;
  }
  uVar3 = _AMDeviceUSBDeviceID(*param_1);
  uVar6 = __AMRestoreGetECIDForMuxID(uVar3);
  lVar5 = __AMRestorableCreateKeyForDeviceWithECID(uVar6);
  if (lVar5 == 0) {
    _AMRSafeLog(3,&cf___,&cf_FailedtocreatedevicekeyfromECID);
    _CFRelease(&cf_FailedtocreatedevicekeyfromECID);
LAB_00163a32:
    pcVar7 = &cf_FailedtogetrestorabledeviceforbootedOSdevice;
    _AMRSafeLog(3,&cf___,&cf_FailedtogetrestorabledeviceforbootedOSdevice);
  }
  else {
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
    pcVar7 = (cfstringStruct *)_CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x38),lVar5)
    ;
    if (pcVar7 == (cfstringStruct *)0x0) {
      uVar6 = _AMRMakeString(&cf_FailedtofindrestorabledevicewithmatchingECID_0x_llx__,uVar6);
    }
    else {
      _CFRetain(pcVar7);
      uVar6 = 0;
    }
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
    _AMRSafeLogAndRelease(3,uVar6);
    _CFRelease(lVar5);
    if (pcVar7 == (cfstringStruct *)0x0) goto LAB_00163a32;
    _CFRetain(pcVar7);
    _dispatch_async_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),pcVar7,
                      ___thr_AMRestorableDeviceHandleDisconnectionAsync);
  }
  _CFRelease(pcVar7);
LAB_001639bf:
  _AMRSafeLogAndRelease(3,0);
  LOCK();
  piVar1 = (int *)((long)plVar4 + 0x14);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001639df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))(plVar4);
    return;
  }
  return;
}

