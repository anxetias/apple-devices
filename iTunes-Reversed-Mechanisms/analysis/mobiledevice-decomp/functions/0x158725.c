// rea decompile_all
// name: __AMRestorableAddKnownDevice
// address: 0x158725
// body: available
// range: 0x158725-0x158a26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x158a10 to 0x17415e __AMRHostLogMapCurrentThreadToDevice (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableAddKnownDevice(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  undefined8 uVar10;
  
  __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),param_1);
  __AMRestorableDeviceLogStateChange(param_2,1);
  if ((*(int *)(param_1 + 0x2c) == 6) &&
     (plVar2 = *(long **)(param_1 + 0x20), plVar2 != (long *)0x0)) {
    cVar4 = (**(code **)(*plVar2 + 0xf0))(plVar2,param_2);
    cVar5 = *(char *)(param_1 + 0x28);
    if (cVar4 == '\0') goto LAB_00158781;
    bVar3 = false;
  }
  else {
    cVar5 = *(char *)(param_1 + 0x28);
LAB_00158781:
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      UNLOCK();
    }
    plVar2 = *(long **)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = param_2;
    *(undefined1 *)(param_1 + 0x28) = 1;
    bVar3 = true;
    if (plVar2 != (long *)0x0) {
      LOCK();
      piVar1 = (int *)((long)plVar2 + 0x14);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  uVar7 = *(uint *)(param_1 + 0x2c);
  switch(uVar7) {
  case 4:
    _AMRLog(7,&cf_Transitioningdevicereturned_continuingrestore_);
    cVar5 = __AMRestorableDeviceCancelTimer(param_1);
    if (cVar5 != '\0') {
      cVar5 = __AMRestorableStateMachineIsComplete(*(undefined8 *)(param_1 + 0x18));
      if (cVar5 == '\0') {
        iVar6 = __AMDeviceProxyGetState(*(undefined8 *)(param_1 + 0x20));
        if (iVar6 == 3) {
          uVar10 = 5;
        }
        else {
          iVar6 = __AMDeviceProxyGetState(*(undefined8 *)(param_1 + 0x20));
          if (iVar6 != 5) goto LAB_001588f1;
          uVar10 = 1;
        }
        goto LAB_001588f6;
      }
      _AMRLog(7,&cf_Restorecomplete);
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar8 = _CFErrorCopyDescription();
        _AMRLog(3,&cf_Restorecompletedwitherror___,lVar8);
        __AMRestorableDeviceSetState(param_1,2);
        _AMRSafeLogAndRelease(3,0);
        if (lVar8 != 0) {
          _CFRelease(lVar8);
        }
        goto LAB_001589f9;
      }
      __AMRestorableDeviceSetState(param_1,1);
      goto LAB_001589ed;
    }
    pcVar9 = &cf_Failedtoremovetimerwhentransitioningdevicereturned;
    break;
  case 5:
    _AMRLog(7,&cf_Debouncedevicereturned_continuingrestore_);
    cVar5 = __AMRestorableDeviceCancelTimer(param_1);
    if (cVar5 == '\0') {
      pcVar9 = &cf_Failedtoremovetimerwhendebouncingdevicereturned;
    }
    else {
LAB_001588f1:
      uVar10 = 6;
LAB_001588f6:
      cVar5 = __AMRestorableDeviceSetState(param_1,uVar10);
      if (cVar5 != '\0') goto LAB_001589ed;
      pcVar9 = &cf_Failedtocontinuetherestore;
    }
    break;
  case 6:
    if (bVar3 || cVar5 != '\0') {
      if ((cVar5 == '\0') && (*(long *)(param_1 + 0x10) != 0)) {
        pcVar9 = (cfstringStruct *)_CFErrorCopyDescription();
      }
      else {
        pcVar9 = (cfstringStruct *)
                 _AMRMakeString(&
                                cf_DeviceaddedfrominvalidstateRestoring_Thismeansthateitherwegotadisconnectionduringrestore_orwegottheconnecteventtwice
                               );
      }
      if (pcVar9 == (cfstringStruct *)0x0) {
        uVar7 = *(uint *)(param_1 + 0x2c);
        goto switchD_001587cc_default;
      }
      goto LAB_00158986;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      _CFRelease();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    goto LAB_001589ed;
  case 7:
    _AMRLog(6,&
              cf_Preparingdeviceconnectedagainbutitwasneverindisconnectedstate___Thisisabug__eitherwegotaduplicateconnectevent_ornevergotthedisconnectevent_
           );
    goto LAB_001589ed;
  case 8:
    _AMRLog(6,&cf_Preparingdeviceconnectedagain_waitingforpreparetocomplete);
    *(undefined4 *)(param_1 + 0x2c) = 7;
LAB_001589ed:
    pcVar9 = (cfstringStruct *)0x0;
    break;
  default:
switchD_001587cc_default:
    if (uVar7 < 7) {
      uVar10 = *(undefined8 *)(&DAT_0044a348 + (ulong)uVar7 * 8);
    }
    else {
      uVar10 = 0;
    }
    pcVar9 = (cfstringStruct *)_AMRMakeString(&cf_Deviceaddedfrominvalidstate__,uVar10);
LAB_00158986:
    uVar10 = _AMRCreateErrorWithDomain
                       (pcVar9,0xfaa,&cf_com_apple_MobileDevice_MobileRestore,
                        *(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = uVar10;
    __AMRestorableRemoveDevice(param_1);
    __AMRestorableDeviceSetState(param_1,2);
  }
  _AMRSafeLogAndRelease(3,pcVar9);
LAB_001589f9:
  __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),0);
  return;
}

