// rea decompile_all
// name: __AMRestorableDeviceEnqueueEventForAllClients
// address: 0x1592d2
// body: available
// range: 0x1592d2-0x159443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15943f to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceEnqueueEventForAllClients(long param_1)

{
  uint uVar1;
  long lVar2;
  void *context;
  cfstringStruct *pcVar3;
  undefined4 uVar4;
  long lVar5;
  uint local_40 [2];
  undefined8 local_38;
  
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
  lVar5 = 0;
  do {
    lVar2 = _CFArrayGetCount(*(undefined8 *)(_gRestorableData + 0x30));
    if (lVar2 <= lVar5) {
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
      return;
    }
    lVar2 = _CFArrayGetValueAtIndex(*(undefined8 *)(_gRestorableData + 0x30),lVar5);
    if (lVar2 == 0) {
      pcVar3 = &cf_Can_tnotifyNULLclient;
LAB_001593d2:
      _AMRLog(3,pcVar3);
    }
    else {
      uVar4 = 1;
      if (*(int *)(param_1 + 0x28) == 1) {
LAB_00159372:
        context = (void *)__AMRestorableEventDataExtendedCreate
                                    (uVar4,*(undefined8 *)(param_1 + 0x20),
                                     *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x10)
                                     ,*(undefined8 *)(param_1 + 0x18),
                                     *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40)
                                    );
        if (context == (void *)0x0) {
          _AMRSafeLog(3,&cf___,&cf_Failedtocreatenewevent);
          _CFRelease(&cf_Failedtocreatenewevent);
          pcVar3 = &cf_Failedtocopyevent_can_tdispatchtoclientnow;
          goto LAB_001593d2;
        }
        if (*(long *)((long)context + 0x10) != 0) {
          _CFRelease();
        }
        _CFRetain(lVar2);
        *(long *)((long)context + 0x10) = lVar2;
        _dispatch_async_f(*(dispatch_queue_t *)(lVar2 + 0x28),context,
                          ___thr_AMRestorableDispatchEvent);
      }
      else {
        local_38 = *(undefined8 *)(param_1 + 0x20);
        uVar1 = *(uint *)(lVar2 + 0x30);
        local_40[0] = 0;
        ___thr_AMRestorableDeviceGetDeviceClass(local_40);
        if ((local_40[0] & ~uVar1) == 0) {
          uVar4 = *(undefined4 *)(param_1 + 0x28);
          goto LAB_00159372;
        }
        _AMRLog(7,&
                  cf_Notsendinganeventforadeviceclassforwhichclient_dhasaskednottoreceivenotifications_
                ,*(undefined4 *)(lVar2 + 0x10));
      }
    }
    lVar5 = lVar5 + 1;
  } while( true );
}

