// rea decompile_all
// name: __AMRestorableRemoveDevice
// address: 0x158e1c
// body: available
// range: 0x158e1c-0x159163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRestorableRemoveDevice(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  cfstringStruct *pcVar9;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  void *local_48;
  long local_40;
  long local_38;
  
  if (param_1 == 0) {
    pcVar9 = &cf_Can_tremoveNULLdevice;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      pcVar9 = &cf_Can_tcreatetrackingkeyforNULLproxy;
LAB_001590db:
      _AMRSafeLog(3,&cf___,pcVar9);
      _CFRelease(pcVar9);
    }
    else {
      local_60 = param_1;
      ___thr_AMRestorableDeviceGetECID(&local_60);
      uVar8 = CONCAT44(uStack_54,local_58);
      if (uVar8 == 0) {
        iVar2 = __AMDeviceProxyGetState(*(undefined8 *)(param_1 + 0x20));
        if (1 < iVar2 - 1U) {
          pcVar9 = &cf_Can_tgeneratefaketrackingidentifierfordevicethat_snotoftyperecoveryorDFU;
          goto LAB_001590db;
        }
        uVar3 = __AMDeviceProxyGetLocationID(*(undefined8 *)(param_1 + 0x20));
        uVar8 = (ulong)uVar3;
      }
      local_38 = __AMRestorableCreateKeyForDeviceWithECID(uVar8);
      if (local_38 != 0) {
        pvVar4 = (void *)0x0;
        local_50 = __AMRestorableEventDataExtendedCreate(1,param_1,0,0,0,0,0);
        __AMRestorableDeviceEnqueueEventForAllClients(local_50);
        if (*(long *)(param_1 + 0x120) == 0) {
          pcVar9 = &cf_DevicewithNULLregisteredclients_thisisbad_;
LAB_0015914c:
          pvVar5 = (void *)0x0;
LAB_0015914f:
          _AMRSafeLogAndRelease(3,pcVar9);
          uVar8 = 0;
          lVar7 = 0;
        }
        else {
          uVar3 = _CFDictionaryGetCount();
          pvVar4 = _calloc(1,(long)(int)uVar3 << 3);
          pvVar5 = _calloc(1,(long)(int)uVar3 << 3);
          if (pvVar4 == (void *)0x0) {
            pcVar9 = &cf_Failedtoallocateroomforclientkeys;
            pvVar4 = (void *)0x0;
            goto LAB_0015914f;
          }
          if (pvVar5 == (void *)0x0) {
            pcVar9 = &cf_Failedtoallocateroomforclientextrefs;
            goto LAB_0015914c;
          }
          local_48 = pvVar4;
          local_40 = param_1;
          _CFDictionaryGetKeysAndValues(*(undefined8 *)(param_1 + 0x120),pvVar4,pvVar5);
          if (0 < (int)uVar3) {
            uVar8 = 0;
            do {
              param_1 = *(long *)((long)pvVar5 + uVar8 * 8);
              if (param_1 == 0) {
                _AMRLog(3,&cf_NULLclientextfoundinclientsdictionary_thisisbad);
              }
              else {
                _dispatch_semaphore_wait
                          (*(dispatch_semaphore_t *)(_gRestorableData + 0x28),0xffffffffffffffff);
                *(undefined8 *)(param_1 + 0x18) = 0;
                _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x28));
              }
              uVar8 = uVar8 + 1;
            } while ((uVar3 & 0x7fffffff) != uVar8);
          }
          _dispatch_semaphore_wait
                    (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
          _CFDictionaryRemoveValue(*(undefined8 *)(_gRestorableData + 0x38),local_38);
          lVar1 = local_40;
          uVar3 = *(int *)(local_40 + 0x2c) + 1;
          if ((uVar3 < 6) && ((0x31U >> (uVar3 & 0x1f) & 1) != 0)) {
LAB_00158fd6:
            lVar7 = 0;
          }
          else {
            iVar2 = __AMDeviceProxyGetState(*(undefined8 *)(local_40 + 0x20));
            if (iVar2 != 6) goto LAB_00158fd6;
            local_60 = lVar1;
            ___thr_AMRestorableDeviceGetLocationID(&local_60);
            param_1 = __AMRestorableCreateKeyForDeviceWithECID(local_58);
            local_60 = lVar1;
            ___thr_AMRestorableDeviceGetECID(&local_60);
            lVar7 = __AMRestorableCreateKeyForDeviceWithECID(CONCAT44(uStack_54,local_58));
            _CFDictionaryRemoveValue(*(undefined8 *)(_gRestorableData + 0x40),param_1);
            _CFDictionaryRemoveValue(*(undefined8 *)(_gRestorableData + 0x48),lVar7);
          }
          _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
          if (*(char *)(lVar1 + 0x28) == '\x01') {
            uVar6 = __AMRestorableDeviceCreate(*(undefined8 *)(lVar1 + 0x20));
            __AMRestorableAddNewDevice(uVar6);
            _CFRelease(uVar6);
          }
          _AMRSafeLogAndRelease(3,0);
          uVar8 = CONCAT71((int7)((ulong)param_1 >> 8),1);
          pvVar4 = local_48;
        }
        _CFRelease(local_38);
        if (local_50 != 0) {
          _CFRelease();
        }
        if (lVar7 != 0) {
          _CFRelease(lVar7);
        }
        if (pvVar4 != (void *)0x0) {
          _free(pvVar4);
        }
        if (pvVar5 != (void *)0x0) {
          _free(pvVar5);
        }
        goto LAB_0015910d;
      }
    }
    pcVar9 = &cf_Can_tremovedevicewithoutadevicekey;
  }
  _AMRSafeLogAndRelease(3,pcVar9);
  uVar8 = 0;
LAB_0015910d:
  return uVar8 & 0xffffffff;
}

