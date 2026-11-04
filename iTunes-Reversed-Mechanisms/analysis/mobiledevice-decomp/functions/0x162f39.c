// rea decompile_all
// name: ___thr_AMRemoteServiceDeviceDisconnectedCallback
// address: 0x162f39
// body: available
// range: 0x162f39-0x1631a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x163195 to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRemoteServiceDeviceDisconnectedCallback(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    _AMRSafeLogAndRelease(3,&cf_InvalidECID_);
    return;
  }
  _CFNumberGetValue(param_1,0xb,&local_38);
  lVar2 = __AMRestorableCreateKeyForDeviceWithECID(local_38);
  if (lVar2 == 0) {
    pcVar5 = &cf_FailedtocreateecidkeyforRSDdevice;
    lVar2 = 0;
  }
  else {
    _AMRLog(7,&cf_RSDdevicedisconnectedwithECID_0x_lX,local_38);
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
    lVar3 = _CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x38),lVar2);
    if (lVar3 != 0) {
      _CFRetain(lVar3);
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
      if (*(long *)(lVar3 + 0xf0) != 0) {
        _AMRLog(6,&cf_mdrsDevice__pdetachedfromrestorableDevice__p_ECID_0x_lX,
                *(long *)(lVar3 + 0xf0),lVar3,*(undefined8 *)(lVar3 + 0x70));
        if (*(long *)(lVar3 + 0xf0) != 0) {
          _CFRelease();
        }
        *(undefined8 *)(lVar3 + 0xf0) = 0;
        lVar4 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                           PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar4 == 0) {
          _AMRLog(3,&cf_Failedtoallocatechangesdictionary);
        }
        else {
          _CFDictionaryAddValue(lVar4,&cf_AMRestorableDeviceReboot,&cf_NotAvailable);
          _CFDictionaryAddValue(lVar4,&cf_AMRestorableDeviceRebootToRecovery,&cf_NotAvailable);
          _CFDictionaryAddValue(lVar4,&cf_AMRestorableDeviceCopyProperties,&cf_NotAvailable);
          ___thr_AMRestoreableDeviceAPIAvailabilityChanged(lVar3,lVar4);
          _CFRelease(lVar4);
        }
      }
      lVar4 = __AMDeviceProxyGetDeviceRef(*(undefined8 *)(lVar3 + 0x20));
      iVar1 = __AMDeviceProxyGetState(*(undefined8 *)(lVar3 + 0x20));
      if ((lVar4 == 0 || iVar1 != 4) ||
         (lVar4 = _CFGetTypeID(lVar4), lVar4 != __MDRemoteServiceDeviceTypeID)) {
        _AMRLog(7,&cf_IgnoringRSDdisconnecteventfornon_RSDrestorabledevice);
      }
      else {
        __AMRestorableDeviceHandleDisconnection(lVar3);
      }
      _AMRSafeLogAndRelease(3,0);
      _CFRelease(lVar3);
      _CFRelease(param_1);
      goto LAB_00163164;
    }
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
    pcVar5 = &cf_Can_thandledevicedisconnectionsincethisdeviceisnottracked;
  }
  _AMRSafeLogAndRelease(3,pcVar5);
  _CFRelease(param_1);
  if (lVar2 == 0) {
    return;
  }
LAB_00163164:
  _CFRelease(lVar2);
  return;
}

