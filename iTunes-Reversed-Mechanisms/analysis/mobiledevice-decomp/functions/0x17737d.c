// rea decompile_all
// name: __AMRDeviceLogConnectToDeviceTimerFired
// address: 0x17737d
// body: available
// range: 0x17737d-0x17754b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRDeviceLogConnectToDeviceTimerFired(void *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  dispatch_time_t dVar6;
  dispatch_source_t pdVar7;
  cfstringStruct *pcVar8;
  undefined1 local_24 [4];
  
  if (*(char *)((long)param_1 + 0x34) == '\0') {
    if (*(long *)((long)param_1 + 0x20) == 0) {
      _AMRSafeLog(3,&cf_Can_treturnproxyonNULLdevice);
    }
    else {
      plVar1 = *(long **)(*(long *)((long)param_1 + 0x20) + 0x20);
      if (plVar1 != (long *)0x0) {
        lVar3 = (**(code **)(*plVar1 + 0x18))();
        if (lVar3 == 0) {
          pcVar8 = &cf_Can_tconnecttoNULLdeviceforlogs;
          goto LAB_00177506;
        }
        lVar4 = _CFGetTypeID(lVar3);
        lVar5 = _AMRestoreModeDeviceGetTypeID();
        if (lVar4 == lVar5) {
          pdVar7 = *(dispatch_source_t *)((long)param_1 + 0x18);
          dVar6 = _dispatch_time(0xffffffffffffffff,0);
          _dispatch_source_set_timer(pdVar7,dVar6,0,0);
          iVar2 = _AMRestoreModeDeviceConnectToPort(lVar3,5000);
          *(int *)((long)param_1 + 0x30) = iVar2;
          pdVar7 = *(dispatch_source_t *)((long)param_1 + 0x18);
          if (iVar2 == -1) {
            pcVar8 = (cfstringStruct *)0x0;
            dVar6 = _dispatch_time(0,5000000000);
            _dispatch_source_set_timer(pdVar7,dVar6,5000000000,1000000000);
            goto LAB_00177506;
          }
          _dispatch_source_cancel(pdVar7);
          iVar2 = _setsockopt(*(int *)((long)param_1 + 0x30),0xffff,0x1022,local_24,4);
          if (iVar2 != 0) {
            pcVar8 = &cf_FailedtosetSO_NOSIGPIPEondevicelogsocket;
            goto LAB_00177506;
          }
          _fcntl(*(int *)((long)param_1 + 0x30),4,4);
          pdVar7 = _dispatch_source_create
                             ((dispatch_source_type_t)PTR___dispatch_source_type_read_004412e0,
                              (long)*(int *)((long)param_1 + 0x30),0,
                              *(dispatch_queue_t *)(*(long *)((long)param_1 + 0x28) + 0x10));
          *(dispatch_source_t *)((long)param_1 + 0x10) = pdVar7;
          if (pdVar7 == (dispatch_source_t)0x0) {
            pcVar8 = &cf_Failedtocreatedevicereaddispatchsource;
            goto LAB_00177506;
          }
          _CFRetain(param_1);
          _dispatch_set_context(*(dispatch_object_t *)((long)param_1 + 0x10),param_1);
          _dispatch_set_finalizer_f(*(dispatch_object_t *)((long)param_1 + 0x10),__CFTypeFinalizer);
          _dispatch_source_set_event_handler_f
                    (*(dispatch_source_t *)((long)param_1 + 0x10),__AMRDeviceLogHandleReadEvent);
          _dispatch_source_set_cancel_handler_f
                    (*(dispatch_source_t *)((long)param_1 + 0x10),__AMRDeviceLogHandleCancelEvent);
          _dispatch_resume(*(dispatch_object_t *)((long)param_1 + 0x10));
        }
        goto LAB_00177504;
      }
    }
    pcVar8 = &cf_Failedtogetproxyfordevicelogs;
  }
  else {
LAB_00177504:
    pcVar8 = (cfstringStruct *)0x0;
  }
LAB_00177506:
  _AMRSafeLogAndRelease(3,pcVar8);
  return;
}

