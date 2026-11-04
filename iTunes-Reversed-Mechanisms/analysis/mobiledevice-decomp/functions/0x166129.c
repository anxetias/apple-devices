// rea decompile_all
// name: ___thr_AMRestorableDeviceUnregisterForNotifications
// address: 0x166129
// body: available
// range: 0x166129-0x166434 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceUnregisterForNotifications(int *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  void *local_40;
  
  if (_gRestorableData == 0) {
    pcVar10 = &cf_Unregisteredcalledwithoutpreviousregistration_noglobaldataissetup_;
  }
  else if (*(long *)(_gRestorableData + 0x30) == 0) {
    pcVar10 = &cf_ClientsarrayisNULL;
  }
  else if (param_1 == (int *)0x0) {
    pcVar10 = &cf_Can_tunregisterwithNULLargs;
  }
  else {
    if (-1 < *param_1) {
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
      bVar8 = false;
      _AMRSafeLog(7,&cf_UnregisteringclientID_d,*param_1);
      lVar4 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,4);
      if (lVar4 == 0) {
        pcVar10 = &cf_Failedtoallocateclientkey;
        local_40 = (void *)0x0;
        pvVar5 = (void *)0x0;
      }
      else {
        iVar2 = _CFArrayGetCount(*(undefined8 *)(_gRestorableData + 0x30));
        iVar3 = _CFDictionaryGetCount(*(undefined8 *)(_gRestorableData + 0x38));
        lVar9 = (long)iVar3;
        local_40 = _calloc(1,lVar9 * 8);
        pvVar5 = _calloc(1,lVar9 * 8);
        if (local_40 == (void *)0x0) {
          pcVar10 = &cf_Failedtoallocateroomfordevicekeys;
          local_40 = (void *)0x0;
        }
        else {
          if (pvVar5 != (void *)0x0) {
            _CFDictionaryGetKeysAndValues(*(undefined8 *)(_gRestorableData + 0x38),local_40,pvVar5);
            _dispatch_semaphore_wait
                      (*(dispatch_semaphore_t *)(_gRestorableData + 0x28),0xffffffffffffffff);
            if (0 < (long)iVar2) {
              lVar11 = 0;
              do {
                lVar6 = _CFArrayGetValueAtIndex(*(undefined8 *)(_gRestorableData + 0x30),lVar11);
                if (*(int *)(lVar6 + 0x10) == *param_1) {
                  *(undefined8 *)(lVar6 + 0x20) = 0;
                  goto LAB_00166297;
                }
                lVar11 = lVar11 + 1;
              } while (iVar2 != lVar11);
            }
            lVar11 = -1;
LAB_00166297:
            if (0 < lVar9) {
              lVar6 = 0;
              do {
                lVar1 = *(long *)((long)pvVar5 + lVar6 * 8);
                if (lVar1 == 0) {
                  pcVar10 = &cf_NULLdevicefoundinrestorabledictionary_thisisbad;
LAB_001662f6:
                  _AMRLog(3,pcVar10);
                }
                else {
                  if (*(long *)(lVar1 + 0x120) == 0) {
                    pcVar10 = &cf_NULLregisteredclientsdictfoundinrestorabledevice_thisisbad;
                    goto LAB_001662f6;
                  }
                  lVar7 = _CFDictionaryGetValue(*(long *)(lVar1 + 0x120),lVar4);
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x18) = 0;
                    _CFDictionaryRemoveValue(*(undefined8 *)(lVar1 + 0x120),lVar4);
                  }
                }
                lVar6 = lVar6 + 1;
              } while (lVar9 != lVar6);
            }
            _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x28));
            if (lVar11 < 0) {
              pcVar10 = &cf_Can_tunregisteraclientthatisnotcurrentlyregistered;
            }
            else {
              _CFArrayRemoveValueAtIndex(*(undefined8 *)(_gRestorableData + 0x30),lVar11);
              pcVar10 = (cfstringStruct *)0x0;
            }
            bVar8 = lVar11 >= 0;
            goto LAB_0016633e;
          }
          pcVar10 = &cf_Failedtoallocateroomfordevicerefs;
          pvVar5 = (void *)0x0;
        }
        bVar8 = false;
      }
LAB_0016633e:
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
      _AMRSafeLogAndRelease(3,pcVar10);
      if (local_40 != (void *)0x0) {
        _free(local_40);
      }
      if (pvVar5 != (void *)0x0) {
        _free(pvVar5);
      }
      if (lVar4 != 0) {
        _CFRelease(lVar4);
      }
      goto LAB_00166383;
    }
    pcVar10 = &cf_InvalidclientIDpassedtounregister;
  }
  bVar8 = false;
  _AMRSafeLog(3,&cf___,pcVar10);
  _CFRelease(pcVar10);
LAB_00166383:
  if (param_1 != (int *)0x0) {
    *(bool *)(param_1 + 1) = bVar8;
  }
  return;
}

