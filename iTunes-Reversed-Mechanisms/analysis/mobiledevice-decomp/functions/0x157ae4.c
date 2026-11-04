// rea decompile_all
// name: ___thr_AMRestorableProcessDeviceConnected
// address: 0x157ae4
// body: available
// range: 0x157ae4-0x157e0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x157d58 to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x157d8b to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableProcessDeviceConnected(void *param_1)

{
  int *piVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  ulong uVar10;
  
  if (param_1 == (void *)0x0) {
    _AMRSafeLog(3,&cf___,&cf_Can_tprocessmuxconnectionwithoutargs);
    _CFRelease(&cf_Can_tprocessmuxconnectionwithoutargs);
    return;
  }
  if (*(long *)((long)param_1 + 8) == 0) {
    pcVar9 = &cf_Failedtocreatedeviceproxy;
  }
  else if (*(long *)((long)param_1 + 0x10) == 0) {
    pcVar9 = &cf_Can_tprocessdevicewith0ECID;
  }
  else if (*(int *)((long)param_1 + 0x18) == 0) {
    pcVar9 = &cf_Can_tprocessdevicewith0deviceID;
  }
  else {
    _AMRLog(7,&cf_MuxedmodedeviceconnectedwithECID_0x_lX);
    uVar2 = *(ulong *)((long)param_1 + 0x10);
    uVar10 = uVar2;
    if ((uVar2 == 0) && (uVar10 = (ulong)*(uint *)((long)param_1 + 0x18), uVar10 == 0)) {
      pcVar9 = &cf_Can_ttrackadevicewithouteithermuxIDorECID;
    }
    else {
      lVar5 = __AMRestorableCreateKeyForDeviceWithECID(uVar10);
      if (lVar5 != 0) {
        _dispatch_semaphore_wait
                  (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
        lVar6 = _CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x38),lVar5);
        if (lVar6 != 0) {
          _CFRetain(lVar6);
        }
        _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
        if (*(char *)((long)param_1 + 1) == '\x01') {
          if (lVar6 != 0) {
            if (*(char *)(lVar6 + 0x79) != '\0') goto LAB_00157bd9;
            _AMRLog(7,&cf_Ignoringlockdownlessdeviceconnectoutsideofrestore);
            goto LAB_00157d16;
          }
          _AMRLog(7,&cf_Ignoringlockdownlessdeviceconnectoutsideofrestore);
          pcVar9 = (cfstringStruct *)0x0;
LAB_00157c14:
          _AMRSafeLogAndRelease(3,pcVar9);
        }
        else {
          if (lVar6 == 0) {
            lVar6 = __AMRestorableDeviceCreate(*(undefined8 *)((long)param_1 + 8));
            if (lVar6 == 0) {
              pcVar9 = &cf_Failedtocreatenewmuxrestorabledevice;
              goto LAB_00157c14;
            }
            _AMRLog(7,&cf_Foundnewdevice);
            __AMRestorableAddNewDevice(lVar6);
          }
          else {
LAB_00157bd9:
            _AMRLog(7,&cf_Foundknowndevice);
            __AMRestorableAddKnownDevice(lVar6,*(undefined8 *)((long)param_1 + 8));
          }
          if (*(int *)((long)param_1 + 0x18) == 0) {
            pcVar9 = &cf_Can_tmapmuxID0toanECID;
LAB_00157dc8:
            _AMRSafeLogAndRelease(3,pcVar9);
          }
          else {
            lVar7 = _CFStringCreateWithFormat
                              (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf__u);
            if (lVar7 == 0) {
              pcVar9 = &cf_Can_tmapNULLmuxIDkeytovalue;
              goto LAB_00157dc8;
            }
            lVar8 = __AMRestorableCreateKeyForDeviceWithECID(uVar10);
            if (lVar8 == 0) {
              pcVar9 = &cf_FailedtocreateCFNumberoflocationID;
              lVar8 = 0;
            }
            else {
              _dispatch_semaphore_wait
                        (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
              _CFDictionarySetValue(*(undefined8 *)(_gRestorableData + 0x58),lVar7,lVar8);
              _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
              pcVar9 = (cfstringStruct *)0x0;
            }
            _AMRSafeLogAndRelease(3,pcVar9);
            _CFRelease(lVar7);
            if (lVar8 != 0) {
              _CFRelease(lVar8);
            }
          }
          *(bool *)(lVar6 + 0xb8) = uVar2 != 0;
          if (uVar2 == 0) {
            bVar4 = 0;
          }
          else {
            bVar4 = *(byte *)((long)param_1 + 1) ^ 1;
          }
          *(byte *)(lVar6 + 0xb9) = bVar4;
LAB_00157d16:
          _AMRSafeLogAndRelease(3,0);
          _CFRelease(lVar6);
        }
        _CFRelease(lVar5);
        goto LAB_00157d32;
      }
      pcVar9 = &cf_FailedtocreatedevicekeyfromECID;
    }
  }
  _AMRSafeLogAndRelease(3,pcVar9);
LAB_00157d32:
  plVar3 = *(long **)((long)param_1 + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    piVar1 = (int *)((long)plVar3 + 0x14);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  _free(param_1);
  return;
}

