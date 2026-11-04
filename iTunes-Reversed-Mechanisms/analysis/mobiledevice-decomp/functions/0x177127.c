// rea decompile_all
// name: ___thr_AMRDeviceLogStartWatchingDevice
// address: 0x177127
// body: available
// range: 0x177127-0x17737c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRDeviceLogStartWatchingDevice(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  long lVar5;
  void *context;
  undefined8 uVar6;
  dispatch_source_t pdVar7;
  dispatch_time_t start;
  cfstringStruct *pcVar8;
  bool bVar9;
  long local_58;
  long local_50;
  undefined8 *local_48;
  long local_40;
  undefined1 *local_38;
  
  local_40 = 0;
  if (param_1 == 0) {
    pcVar8 = &cf_Can_tstopwatchingdevicewithoutargs;
    goto LAB_00177319;
  }
  lVar1 = _CFArrayGetCount();
  if (lVar1 != 3) {
    _CFRelease(param_1);
    pcVar8 = &cf_Can_tstartwatchingdevicewithincorrectargscount;
    goto LAB_00177319;
  }
  puVar2 = (undefined8 *)_CFArrayGetValueAtIndex(param_1,0);
  lVar1 = _CFArrayGetValueAtIndex(param_1,1);
  puVar3 = (undefined1 *)_CFArrayGetValueAtIndex(param_1,2);
  if (puVar2 == (undefined8 *)0x0) {
    pcVar8 = &cf_Can_twatchdevicewithNULLdevicelogmanager;
LAB_00177368:
    bVar9 = false;
  }
  else {
    if (lVar1 == 0) {
      pcVar8 = &cf_Can_twatchNULLdeviceforlogs;
      goto LAB_00177368;
    }
    local_58 = lVar1;
    ___thr_AMRestorableDeviceGetECID(&local_58);
    local_40 = local_50;
    if (local_50 == 0) {
      pcVar8 = &cf_Can_twatchdevicelogwith0ECID;
      goto LAB_00177368;
    }
    uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_38 = puVar3;
    pvVar4 = (void *)_CFNumberCreate(uVar6,4,&local_40);
    if (pvVar4 == (void *)0x0) {
      pcVar8 = &cf_FailedtocreateCFNumberfromECID;
      bVar9 = false;
      puVar3 = local_38;
    }
    else {
      lVar5 = _CFDictionaryGetValue(*puVar2,pvVar4);
      bVar9 = lVar5 == 0;
      if (bVar9) {
        local_48 = puVar2;
        context = (void *)__CFRuntimeCreateInstance(uVar6,__AMRDeviceLogContextRefTypeID,0x30,0);
        *(undefined4 *)((long)context + 0x30) = 0xffffffff;
        *(undefined2 *)((long)context + 0x34) = 0xa00;
        *(undefined8 *)((long)context + 0x10) = 0;
        *(undefined8 *)((long)context + 0x18) = 0;
        *(undefined8 *)((long)context + 0x20) = 0;
        *(undefined8 *)((long)context + 0x38) = 0;
        *(undefined8 **)((long)context + 0x28) = puVar2;
        uVar6 = _CFRetain(lVar1);
        *(undefined8 *)((long)context + 0x20) = uVar6;
        pdVar7 = _dispatch_source_create
                           ((dispatch_source_type_t)PTR___dispatch_source_type_timer_004412e8,0,0,
                            *(dispatch_queue_t *)(_gRestorableData + 0x18));
        *(dispatch_source_t *)((long)context + 0x18) = pdVar7;
        _dispatch_source_set_event_handler_f(pdVar7,__AMRDeviceLogConnectToDeviceTimerFired);
        pdVar7 = *(dispatch_source_t *)((long)context + 0x18);
        start = _dispatch_time(0,5000000000);
        pcVar8 = (cfstringStruct *)0x0;
        _dispatch_source_set_timer(pdVar7,start,5000000000,1000000000);
        _CFRetain(context);
        _dispatch_set_context(*(dispatch_object_t *)((long)context + 0x18),context);
        _dispatch_set_finalizer_f(*(dispatch_object_t *)((long)context + 0x18),__CFTypeFinalizer);
        _CFDictionarySetValue(*local_48,pvVar4,context);
        _dispatch_resume(*(dispatch_object_t *)((long)context + 0x18));
        _CFRelease(pvVar4);
      }
      else {
        pcVar8 = &cf_Can_twatchadevicewe_realreadywatching;
        context = pvVar4;
      }
      puVar3 = local_38;
      _CFRelease(context);
    }
  }
  _CFRelease(param_1);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = bVar9;
  }
LAB_00177319:
  _AMRSafeLogAndRelease(3,pcVar8);
  return;
}

