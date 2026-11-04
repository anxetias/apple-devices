// rea decompile_all
// name: __AMDSecureListenForNotificationsWithRetainedContext
// address: 0x155cdb
// body: available
// range: 0x155cdb-0x155f29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMDSecureListenForNotificationsWithRetainedContext(long param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  dispatch_queue_t queue;
  dispatch_source_t pdVar8;
  undefined8 uVar9;
  
  uVar9 = 0xe8000007;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar5 = _pthread_once((pthread_once_t *)&_gInitListThing,__ListInitPthreadOnceRoutine);
    uVar9 = 0xe8000003;
    if (iVar5 == 0) {
      lVar6 = __CFRuntimeCreateInstance
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,__AMDListenContextTypeID,
                         0x58,0);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x14) = 0;
        *(undefined8 *)(lVar6 + 0x1c) = 0;
        *(undefined8 *)(lVar6 + 0x54) = 0;
        *(undefined8 *)(lVar6 + 0x5c) = 0;
        *(undefined8 *)(lVar6 + 0x44) = 0;
        *(undefined8 *)(lVar6 + 0x4c) = 0;
        *(undefined8 *)(lVar6 + 0x34) = 0;
        *(undefined8 *)(lVar6 + 0x3c) = 0;
        *(undefined8 *)(lVar6 + 0x24) = 0;
        *(undefined8 *)(lVar6 + 0x2c) = 0;
        *(undefined4 *)(lVar6 + 100) = 0;
        *(undefined4 *)(lVar6 + 0x10) = 0x7a676d6f;
        *(long *)(lVar6 + 0x18) = param_1;
        _CFRetain();
        *(long *)(lVar6 + 0x38) = param_2;
        if (param_3 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar6 + 0x40) = *param_3;
          pcVar1 = (code *)param_3[2];
          *(code **)(lVar6 + 0x50) = pcVar1;
          uVar2 = *(undefined4 *)((long)param_3 + 0x1c);
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)((long)param_3 + 0x24);
          *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_3 + 3);
          *(undefined4 *)(lVar6 + 0x5c) = uVar2;
          *(undefined4 *)(lVar6 + 0x60) = uVar3;
          *(undefined4 *)(lVar6 + 100) = uVar4;
          lVar7 = param_3[1];
          if (pcVar1 != (code *)0x0) {
            if (lVar7 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (*pcVar1)(lVar7);
            }
          }
          *(long *)(lVar6 + 0x48) = lVar7;
        }
        lVar7 = _CFDataCreateMutable();
        *(long *)(lVar6 + 0x20) = lVar7;
        if (lVar7 != 0) {
          iVar5 = *(int *)(param_1 + 0x10);
          if ((long)iVar5 == 0xffffffffffffffff) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"Service connection \"%@\" is already closed.",
                              param_1);
            uVar9 = 0xe8000007;
          }
          else {
            queue = _dispatch_get_global_queue(0,0);
            pdVar8 = _dispatch_source_create
                               ((dispatch_source_type_t)PTR___dispatch_source_type_read_004412e0,
                                (long)iVar5,0,queue);
            *(dispatch_source_t *)(lVar6 + 0x30) = pdVar8;
            if (pdVar8 != (dispatch_source_t)0x0) {
              _dispatch_source_set_event_handler(pdVar8);
              _CFRetain(lVar6);
              _dispatch_source_set_cancel_handler(*(undefined8 *)(lVar6 + 0x30));
              _dispatch_resume(*(dispatch_object_t *)(lVar6 + 0x30));
              _pthread_mutex_lock((pthread_mutex_t *)&_gActiveNotificationConnectionsMutex);
              _CFDictionarySetValue(_gActiveNotificationConnections,param_1,lVar6);
              _pthread_mutex_unlock((pthread_mutex_t *)&_gActiveNotificationConnectionsMutex);
              uVar9 = 0;
            }
          }
        }
        _CFRelease(lVar6);
      }
    }
  }
  return uVar9;
}

