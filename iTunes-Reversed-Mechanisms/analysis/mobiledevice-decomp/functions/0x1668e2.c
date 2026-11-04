// rea decompile_all
// name: ___thr_AMRestorableDeviceUnregisterForAPIAvailabilityNotifications
// address: 0x1668e2
// body: available
// range: 0x1668e2-0x166ab1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceUnregisterForAPIAvailabilityNotifications(long *param_1)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfa3;
  if (_gRestorableData == 0) {
    pcVar3 = &cf_Unregistercalledwithoutpreviousregistration_noglobaldataissetup_;
LAB_00166a62:
    lVar1 = 0;
  }
  else {
    if (*(long *)(_gRestorableData + 0x30) == 0) {
      pcVar3 = &cf_ClientsarrayisNULL;
      goto LAB_00166a62;
    }
    if (param_1 == (long *)0x0) {
      uVar4 = 4000;
      pcVar3 = &cf_Can_tunregisterwithNULLargs;
      goto LAB_00166a62;
    }
    uVar4 = 0xfa1;
    if (*param_1 == 0) {
      pcVar3 = &cf_Can_tunregisterfordevicenotificationswithNULLrestorabledevice;
      goto LAB_00166a62;
    }
    if (*(long *)(*param_1 + 0x120) == 0) {
      pcVar3 = &cf_DeviceregisteredclientsisNULL_thisisbad;
      goto LAB_00166a62;
    }
    if ((int)param_1[1] == -1) {
      pcVar3 = &cf_InvalidclientIDpassedtounregister;
      goto LAB_00166a62;
    }
    _AMRSafeLog(6,&cf_UnregisteringclientID_dforAPIchangesondevice__p);
    lVar1 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,4);
    if (lVar1 == 0) {
      uVar4 = 0xfa2;
      pcVar3 = &cf_Failedtoallocateclientkey;
      goto LAB_00166a62;
    }
    lVar2 = _CFDictionaryGetValue(*(undefined8 *)(*param_1 + 0x120),lVar1);
    if (lVar2 != 0) {
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(_gRestorableData + 0x28),0xffffffffffffffff);
      *(undefined8 *)(lVar2 + 0x18) = 0;
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x28));
      _CFDictionaryRemoveValue(*(undefined8 *)(*param_1 + 0x120),lVar1);
      if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[2] = 0;
      }
      _AMRSafeLogAndRelease(3,0);
      goto LAB_00166a04;
    }
    pcVar3 = &cf_Can_tunregisterfordevicenotificationswithaclientthatisnotregistered;
  }
  if (param_1[2] != 0) {
    uVar4 = _CFErrorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                           &cf_com_apple_MobileDevice_MobileRestore,uVar4,0);
    *(undefined8 *)param_1[2] = uVar4;
  }
  _AMRSafeLogAndRelease(3,pcVar3);
  if (lVar1 == 0) {
    return;
  }
LAB_00166a04:
  _CFRelease(lVar1);
  return;
}

