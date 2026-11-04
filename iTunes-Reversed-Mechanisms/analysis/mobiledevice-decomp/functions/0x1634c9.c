// rea decompile_all
// name: ___thr_AMRemoteServiceDeviceConnectedCallback
// address: 0x1634c9
// body: available
// range: 0x1634c9-0x16380f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x163571 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1637d5 to 0x16f4c7 _AMRSafeLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRemoteServiceDeviceConnectedCallback(long param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  
  if (param_1 == 0) {
    _AMRSafeLog(3,&cf_Invalidremoteservicedeviceref_);
    return;
  }
  if (((byte)(0xb20 >> ((byte)*(uint *)(param_1 + 0x20) & 0x1f)) & *(uint *)(param_1 + 0x20) < 0xc)
      != 1) goto LAB_00163560;
  if (*(int *)(param_1 + 0x30) == 0) {
    pcVar9 = &cf_FoundRSDdevicewithnolocationID_Bailing_;
LAB_00163554:
    _AMRLog(7,pcVar9);
LAB_00163560:
    _CFRelease(param_1);
    return;
  }
  if (__locationIDFilter != 0 && __locationIDFilter != *(int *)(param_1 + 0x30)) goto LAB_00163560;
  lVar4 = _MDRemoteServiceDeviceCopyProperty(param_1,"DeviceSupportsLockdown");
  if (lVar4 != 0) {
    cVar2 = _CFBooleanGetValue(lVar4);
    _CFRelease(lVar4);
    if (cVar2 != '\0') {
      pcVar9 = &cf_FoundRSDdevicewhichsupportslockdown_ignoring;
      goto LAB_00163554;
    }
  }
  plVar5 = (long *)__AMDeviceProxyCreateRemoteServiceProxy(param_1);
  uVar6 = __AMDeviceProxyGetECID(plVar5);
  lVar4 = __AMRestorableCreateKeyForDeviceWithECID(uVar6);
  if (lVar4 == 0) {
    _AMRSafeLog(3,&cf_Couldn_tgenerateadeviceKeyforanMDRemoteServiceDeviceRef_);
    goto LAB_0016377f;
  }
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
  lVar7 = _CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x38),lVar4);
  if (lVar7 == 0) {
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
    lVar7 = __AMRestorableDeviceCreate(plVar5);
    _AMRLog(7,&cf_FoundnewRSDdevice);
    __AMRestorableAddNewDevice(lVar7);
LAB_0016366b:
    cVar2 = __AMRestorableDeviceIsProxyTrackable(*(undefined8 *)(lVar7 + 0x20));
    *(char *)(lVar7 + 0xb8) = cVar2;
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = _MDRemoteServiceReachable(param_1);
    }
    *(undefined1 *)(lVar7 + 0xb9) = uVar3;
  }
  else {
    _CFRetain(lVar7);
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
    if ((*(char *)(lVar7 + 0x79) == '\0') && (*(char *)(lVar7 + 0xb9) == '\x01')) {
      pcVar9 = &cf_FoundidleRSDdevicewhichalreadysupportsrestoring_ignoring_;
    }
    else {
      if ((*(int *)(lVar7 + 0x2c) != 6) || (*(char *)(lVar7 + 0xb9) != '\x01')) {
        _AMRLog(7,&cf_FoundknownRSDdevicedevice);
        __AMRestorableAddKnownDevice(lVar7,plVar5);
        goto LAB_0016366b;
      }
      pcVar9 = &cf_FoundRSDdevicewhichisalreadyrestoring_ignoring_;
    }
    _AMRLog(7,pcVar9);
  }
  _CFRetain(param_1);
  if (*(long *)(lVar7 + 0xf0) != 0) {
    _CFRelease();
  }
  *(long *)(lVar7 + 0xf0) = param_1;
  _AMRLog(6,&cf_mdrsDevice__pattachedtorestorableDevice__p_ECID_0x_lX,param_1,lVar7,
          *(undefined8 *)(lVar7 + 0x70));
  lVar8 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar8 == 0) {
    _AMRLog(3,&cf_Failedtoallocatechangesdictionary);
  }
  else {
    _CFDictionaryAddValue(lVar8,&cf_AMRestorableDeviceReboot,&cf_Available);
    _CFDictionaryAddValue(lVar8,&cf_AMRestorableDeviceRebootToRecovery,&cf_Available);
    _CFDictionaryAddValue(lVar8,&cf_AMRestorableDeviceCopyProperties,&cf_Available);
    ___thr_AMRestoreableDeviceAPIAvailabilityChanged(lVar7,lVar8);
    _CFRelease(lVar8);
  }
  _CFRelease(lVar7);
  _CFRelease(lVar4);
LAB_0016377f:
  _CFRelease(param_1);
  if (plVar5 != (long *)0x0) {
    LOCK();
    piVar1 = (int *)((long)plVar5 + 0x14);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001637a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5);
      return;
    }
  }
  return;
}

