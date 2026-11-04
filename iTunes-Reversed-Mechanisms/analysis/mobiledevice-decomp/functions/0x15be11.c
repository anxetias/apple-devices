// rea decompile_all
// name: __AMRestorableDeviceRestoreQueueFlush
// address: 0x15be11
// body: available
// range: 0x15be11-0x15c008 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceRestoreQueueFlush(void)

{
  uint in_EAX;
  long lVar1;
  long lVar2;
  long *context;
  dispatch_queue_t queue;
  cfstringStruct *pcVar3;
  int iVar4;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
  uStack_38 = (ulong)(uint)uStack_38;
  _CFDictionaryApplyFunction
            (*(undefined8 *)(_gRestorableData + 0x38),__AMRestorableCountRestoringDevicesApplier,
             (long)&uStack_38 + 4);
  if ((long)uStack_38 < 0) {
    pcVar3 = &cf_Failedtolookupnumberofcurrentlyrestoringdevices;
  }
  else {
    if (uStack_38._4_4_ < 0x1e) {
      iVar4 = 0x1f - uStack_38._4_4_;
      do {
        lVar1 = _CFArrayGetCount(*(undefined8 *)(_gRestorableData + 0xb0));
        if (lVar1 == 0) break;
        lVar1 = _CFArrayGetValueAtIndex(*(undefined8 *)(_gRestorableData + 0xb0),0);
        if (((lVar1 == 0) || (lVar2 = _CFDictionaryGetValue(lVar1,&cf_Device), lVar2 == 0)) ||
           (lVar1 = _CFDictionaryGetValue(lVar1,&cf_RestoreOptions), lVar1 == 0)) {
LAB_0015bf78:
          _AMRSafeLog(3);
        }
        else {
          context = _calloc(1,0x18);
          if (context == (long *)0x0) {
            _AMRSafeLog(3,&cf___,&cf_Failedtoallocateargsforasyncdispatch);
            _CFRelease(&cf_Failedtoallocateargsforasyncdispatch);
            goto LAB_0015bf78;
          }
          *(undefined1 *)(lVar2 + 0x79) = 1;
          *context = lVar2;
          context[1] = lVar1;
          _CFRetain(lVar2);
          _CFRetain();
          queue = _dispatch_get_global_queue(0,0);
          _dispatch_async_f(queue,context,___thr_AMRestorableDevicePrepareOptions);
        }
        _CFArrayRemoveValueAtIndex(*(undefined8 *)(_gRestorableData + 0xb0));
        iVar4 = iVar4 + -1;
      } while (1 < iVar4);
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
      __AMRestorableDeviceRestoreQueueNotifyClientsOfPendingPosition();
      pcVar3 = (cfstringStruct *)0x0;
      goto LAB_0015bfed;
    }
    pcVar3 = (cfstringStruct *)0x0;
  }
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
LAB_0015bfed:
  _AMRSafeLogAndRelease(3,pcVar3);
  return;
}

