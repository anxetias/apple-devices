// rea decompile_all
// name: __AMRestoreableDeviceSendAPIAvailabilityNotificationsToClient
// address: 0x16330f
// body: available
// range: 0x16330f-0x1634c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestoreableDeviceSendAPIAvailabilityNotificationsToClient
               (long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  void *context;
  cfstringStruct *pcVar3;
  long lVar4;
  long local_38;
  
  local_38 = -1;
  if (param_1 == 0) {
    pcVar3 = &cf_Can_tsendnotificationwithNULLclientID;
  }
  else if (param_2 == 0) {
    pcVar3 = &cf_Can_tsendnotificationwithNULLclientExt;
  }
  else if (*(long *)(param_2 + 0x18) == 0) {
    pcVar3 = &cf_Can_tsendnotificationwithNULLclientExtcallback;
  }
  else if (param_3 == 0) {
    pcVar3 = &cf_Can_tsendnotificationwithNULLrestorabledevice;
  }
  else if (*(long *)(param_3 + 0x128) == 0) {
    pcVar3 = &cf_Can_tsendnotificationwithNULLapiAvailability;
  }
  else {
    _CFNumberGetValue(param_1,4,&local_38);
    if (local_38 != -1) {
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
      lVar4 = 0;
      pcVar3 = &cf_Can_tsendnotificationwithoutmatchingclient;
      do {
        lVar2 = _CFArrayGetCount(*(undefined8 *)(_gRestorableData + 0x30));
        if (lVar2 <= lVar4) {
LAB_0016343b:
          _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
          _AMRSafeLogAndRelease(3,pcVar3);
          if (lVar4 != 0) {
            _CFRelease(lVar4);
          }
          return;
        }
        lVar2 = _CFArrayGetValueAtIndex(*(undefined8 *)(_gRestorableData + 0x30),lVar4);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == (int)local_38)) {
          lVar4 = _CFDictionaryCreateCopy
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                             *(undefined8 *)(param_3 + 0x128));
          if (lVar4 == 0) {
            pcVar3 = &cf_FailedtocreatedictionarycopyfromapiAvailabilitydictionary;
            lVar4 = 0;
          }
          else {
            context = (void *)__AMRestorableEventDataExtendedCreate
                                        (200,param_3,lVar4,lVar2,param_2,0,0);
            if (context == (void *)0x0) {
              pcVar3 = &cf_FailedtocreateneweventforAPIavailabilityupdate;
            }
            else {
              _dispatch_async_f(*(dispatch_queue_t *)(*(long *)((long)context + 0x10) + 0x28),
                                context,___thr_AMRestorableDispatchEvent);
              pcVar3 = (cfstringStruct *)0x0;
            }
          }
          goto LAB_0016343b;
        }
        lVar4 = lVar4 + 1;
      } while( true );
    }
    pcVar3 = &cf_Can_tsendnotificationwithinvalidclientID;
  }
  _AMRSafeLogAndRelease(3,pcVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

