// rea decompile_all
// name: ___thr__AMRestorableAttemptMuxRegistrationNow
// address: 0x157790
// body: available
// range: 0x157790-0x1578d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr__AMRestorableAttemptMuxRegistrationNow(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined8 local_58;
  undefined8 *local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_58 = 3;
  local_40 = __AMMuxedDeviceDisconnected;
  local_38 = __AMMuxedConnectionStopped;
  local_30 = 0;
  local_48 = __AMMuxedVersion3DeviceConnected;
  local_50 = param_2;
  uVar4 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  _AMAuthInstallSupportDictionarySetInteger32(uVar4,_kUSBMuxProperty_LinkType,1);
  if (__locationIDFilter != 0) {
    _AMAuthInstallSupportDictionarySetInteger64(uVar4,_kUSBMuxProperty_LocationID);
  }
  iVar3 = _USBMuxListenerCreateFiltered(&local_58,uVar4,&local_28);
  if (iVar3 == 0) {
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
    lVar1 = param_2[0xd];
    param_2[0xd] = local_28;
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
    uVar2 = *param_2;
    uVar5 = _USBMuxListenerGetRunLoopSource(local_28);
    _CFRunLoopAddSource(uVar2,uVar5,*(undefined8 *)PTR__kCFRunLoopCommonModes_00441188);
    if (lVar1 != 0) {
      _USBMuxListenerClose(lVar1);
    }
    pcVar6 = (cfstringStruct *)0x0;
  }
  else {
    pcVar6 = &cf_Failedtoregisterwithusbmux;
  }
  _AMRSafeLog(3,&cf___,pcVar6);
  _AMSupportSafeRelease(uVar4);
  return;
}

