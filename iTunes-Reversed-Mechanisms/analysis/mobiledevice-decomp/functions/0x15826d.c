// rea decompile_all
// name: __AMRestorableDeviceCreate
// address: 0x15826d
// body: available
// range: 0x15826d-0x1584fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1584f6 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


cfstringStruct * __AMRestorableDeviceCreate(qword param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  dispatch_semaphore_t pdVar3;
  qword qVar4;
  dispatch_queue_t pdVar5;
  dispatch_source_t source;
  cfstringStruct *pcVar6;
  char local_98 [112];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  pcVar2 = (cfstringStruct *)__CFRuntimeCreateInstance(uVar1,__AMRestorableDeviceTypeID,0x120,0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = &cf_FailedtoallocateAMRestorableDeviceRef;
    _AMRSafeLog(3,&cf___,&cf_FailedtoallocateAMRestorableDeviceRef);
  }
  else {
    ___bzero(&pcVar2->field2_0x10);
    if (param_1 != 0) {
      LOCK();
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      UNLOCK();
    }
    pcVar2[1].field0_0x0 = param_1;
    *(undefined1 *)&pcVar2[1].field1_0x8 = 1;
    pcVar2->field2_0x10 = (undefined *)0x0;
    pdVar3 = _dispatch_semaphore_create(1);
    pcVar2[4].field1_0x8 = (qword)pdVar3;
    *(undefined2 *)&pcVar2[5].field3_0x18 = 0x101;
    *(undefined1 *)&pcVar2[6].field2_0x10 = 0;
    pcVar2[6].field3_0x18 = 0;
    pcVar2->field3_0x18 = 0;
    *(undefined4 *)&pcVar2[8].field3_0x18 = 0;
    *(undefined4 *)&pcVar2[7].field1_0x8 = 0;
    pcVar2[7].field2_0x10 = (undefined *)0x0;
    if (pdVar3 == (dispatch_semaphore_t)0x0) {
      pcVar6 = &cf_Failedtocreateper_devicelock;
    }
    else {
      qVar4 = _CFDictionaryCreateMutable
                        (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      pcVar2[4].field0_0x0 = qVar4;
      if (qVar4 == 0) {
        pcVar6 = &cf_FailedtoallocatelogURLtrackingdictionary;
      }
      else {
        pdVar5 = _dispatch_queue_create((char *)0x0,(dispatch_queue_attr_t)0x0);
        pcVar2[4].field2_0x10 = pdVar5;
        if (pdVar5 == (dispatch_queue_t)0x0) {
          pcVar6 = &cf_Failedtoallocatedispatchqueueforevents;
        }
        else {
          builtin_strncpy(local_98 + 0x20,"erationQueue",0xd);
          builtin_strncpy(local_98 + 0x10,"Restore.DeviceOp",0x10);
          builtin_strncpy(local_98,"com.apple.Mobile",0x10);
          pdVar5 = _dispatch_queue_create(local_98,(dispatch_queue_attr_t)0x0);
          pcVar2[4].field3_0x18 = (long)pdVar5;
          if (pdVar5 == (dispatch_queue_t)0x0) {
            pcVar6 = &cf_Failedtoallocatedispatchqueueforrestoreoperations;
          }
          else {
            pcVar2[5].field1_0x8 = (qword)pcVar2;
            *(undefined1 *)&pcVar2[5].field2_0x10 = 0;
            source = _dispatch_source_create
                               ((dispatch_source_type_t)PTR___dispatch_source_type_timer_004412e8,0,
                                0,pdVar5);
            pcVar2[5].field0_0x0 = (qword)source;
            _dispatch_source_set_event_handler_f(source,__AMRestorableDeviceWatcherTimerFired);
            _dispatch_set_context(*(dispatch_object_t *)(pcVar2 + 5),pcVar2 + 5);
            qVar4 = _CFDictionaryCreateMutable
                              (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                               PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            pcVar2[9].field0_0x0 = qVar4;
            if (qVar4 != 0) {
              qVar4 = _CFDictionaryCreateMutable
                                (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                 PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              pcVar2[9].field1_0x8 = qVar4;
              pcVar6 = &cf_FailedtoallocateAPIavailabilitydictionary;
              if (qVar4 != 0) {
                pcVar6 = (cfstringStruct *)0x0;
              }
              _AMRSafeLogAndRelease(3,pcVar6);
              if (qVar4 != 0) goto LAB_0015846b;
              goto LAB_00158461;
            }
            pcVar6 = &cf_Failedtoallocateregisteredclientsdictionary;
          }
        }
      }
    }
    _AMRSafeLog(3,&cf___,pcVar6);
    _CFRelease(pcVar6);
  }
LAB_00158461:
  _CFRelease(pcVar2);
  pcVar2 = (cfstringStruct *)0x0;
LAB_0015846b:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

