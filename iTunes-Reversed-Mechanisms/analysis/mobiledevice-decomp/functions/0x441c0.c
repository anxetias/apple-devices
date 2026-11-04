// rea decompile_all
// name: _CPXStartListeningForPairedDevices
// address: 0x441c0
// body: available
// range: 0x441c0-0x44566 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44562 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _CPXStartListeningForPairedDevices
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,int *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  dispatch_queue_t queue;
  dispatch_object_t object;
  long lVar7;
  long lVar8;
  long local_88;
  int *local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_88 = 0;
  local_80 = param_5;
  local_78 = param_3;
  iVar4 = __CopyCompanionProxyServiceConnectionForDevice(param_1,&local_88);
  lVar7 = local_78;
  lVar2 = local_88;
  if (iVar4 == 0) {
    local_60 = &local_68;
    local_68 = 0;
    local_58 = 0x2000000000;
    local_50 = 0;
    iVar4 = -0x17fffff9;
    local_70 = param_1;
    if (local_78 == 0 || local_88 == 0) {
LAB_000444c2:
      __Block_object_dispose(&local_68,8);
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"_ListenForAsyncronousData failed: 0x%08x"
                        ,iVar4);
      goto LAB_000444f1;
    }
    iVar5 = _AMDServiceConnectionGetSocket(local_88);
    if (iVar5 == -1) {
      __os_log_internal(0,PTR___os_log_default_004412f0,0,
                        "Service connection \"%@\" is already closed.",lVar2);
      goto LAB_000444c2;
    }
    plVar6 = _calloc(1,0x28);
    puVar3 = local_60;
    local_60[3] = plVar6;
    *plVar6 = lVar2;
    plVar6 = (long *)puVar3[3];
    if (*plVar6 != 0) {
      _CFRetain();
      plVar6 = (long *)local_60[3];
    }
    plVar6[1] = local_70;
    lVar8 = local_60[3];
    if (*(long *)(lVar8 + 8) != 0) {
      _CFRetain();
      lVar8 = local_60[3];
    }
    *(undefined8 *)(lVar8 + 0x10) = param_2;
    lVar8 = local_60[3];
    if (*(long *)(lVar8 + 0x10) != 0) {
      _CFRetain();
      lVar8 = local_60[3];
    }
    *(long *)(lVar8 + 0x18) = lVar7;
    *(undefined8 *)(local_60[3] + 0x20) = param_4;
    queue = _dispatch_get_global_queue(0,0);
    object._os_obj =
         (_os_object_s *)
         _dispatch_source_create
                   ((dispatch_source_type_t)PTR___dispatch_source_type_read_004412e0,(long)iVar5,0,
                    queue);
    if (object._os_obj == (_os_object_s *)0x0) {
      __CleanupListeningState(local_60[3],0);
      iVar4 = -0x17fffffd;
      goto LAB_000444c2;
    }
    _dispatch_source_set_event_handler(object._os_obj);
    _dispatch_source_set_cancel_handler(object._os_obj);
    _dispatch_resume(object);
    _pthread_mutex_lock((pthread_mutex_t *)&_gActiveConnectionsMutex);
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    if (_gActiveConnections == 0) {
      _gActiveConnections =
           _CFDictionaryCreateMutable(uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,0);
    }
    _CFDictionarySetValue(_gActiveConnections,lVar2,object._os_obj);
    _pthread_mutex_unlock((pthread_mutex_t *)&_gActiveConnectionsMutex);
    __Block_object_dispose(&local_68,8);
    local_40 = &cf_Command;
    local_48 = &cf_StartListeningForDevices;
    lVar7 = _CFDictionaryCreate(uVar1,&local_40,&local_48,1,
                                PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar7 == 0) {
      __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to create message dictionary");
      _CPXStopListeningForPairedDevices(lVar2,0);
      iVar4 = -0x17fffffd;
    }
    else {
      iVar4 = _AMDServiceConnectionSendMessage(lVar2,lVar7,200,0);
      if (iVar4 != 0) {
        __os_log_internal(0,PTR___os_log_default_004412f0,0,"Failed to send initial message: 0x%08x"
                          ,iVar4);
        _CPXStopListeningForPairedDevices(lVar2,0);
      }
      _CFRelease(lVar7);
    }
  }
  else {
LAB_000444f1:
    if (lVar2 == 0) goto LAB_000444fe;
  }
  _CFRelease(lVar2);
LAB_000444fe:
  if (local_80 != (int *)0x0) {
    *local_80 = iVar4;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar4 == 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

