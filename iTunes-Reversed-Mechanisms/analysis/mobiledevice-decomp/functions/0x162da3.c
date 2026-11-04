// rea decompile_all
// name: ___thr__AMRestorableAttemptBootedOSRegistrationNow
// address: 0x162da3
// body: available
// range: 0x162da3-0x162ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr__AMRestorableAttemptBootedOSRegistrationNow(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  uVar1 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
  _CFDictionarySetValue(uVar4,&cf_NotificationOptionEnableUSBMux,uVar1);
  _CFDictionarySetValue(uVar4,&cf_NotificationOptionSearchForPairedDevices,uVar1);
  _CFDictionarySetValue
            (uVar4,&cf_NotificationOptionSearchForPairedDevicesViaDirectConnectionsOnly,uVar1);
  _CFDictionarySetValue(uVar4,&cf_NotificationOptionSearchForWiFiPairableDevices,uVar1);
  iVar3 = _AMDeviceNotificationSubscribeWithOptions
                    (___thr_AMRestorableBootedOSDeviceNotificationCallback);
  _CFRelease(uVar4);
  if (iVar3 == 0) {
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
    lVar2 = *(long *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
    if (lVar2 != 0) {
      _AMDeviceNotificationUnsubscribe(lVar2);
    }
  }
  else {
    _AMRLog(3,&cf_FailedtosubscribeforbootedOSdevicenotifications_);
  }
  return;
}

