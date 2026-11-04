// rea decompile_all
// name: ___thr_AMRestorableDeviceRegisterForNotifications
// address: 0x165c06
// body: available
// range: 0x165c06-0x16603a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x166036 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceRegisterForNotifications(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  dispatch_queue_t pdVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  size_t sVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  uint local_d8 [2];
  long local_d0;
  undefined4 *local_c8;
  void *local_c0;
  ulong local_b8;
  long local_b0;
  char local_a8 [112];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  **(undefined4 **)(param_1[1] + 8) = 0xffffffff;
  if (_gRestorableData == 0) {
    uVar9 = 0xfa3;
    pcVar10 = &cf_Failedtoinitilizeglobaldata;
LAB_00165fc3:
    pvVar7 = (void *)0x0;
    pvVar8 = (void *)0x0;
    local_b0 = 0;
  }
  else {
    if (*(long *)*param_1 == 0) {
      uVar9 = 0xfa1;
      pcVar10 = &cf_Youcan_tregisterfordevicenotificationswithNULLeventhandler;
      goto LAB_00165fc3;
    }
    lVar5 = __CFRuntimeCreateInstance
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,__AMRestorableClientTypeID,
                       0x28,0);
    if (lVar5 == 0) {
      _AMRSafeLog(3,&cf___,&cf_Failedtoallocateclient);
      _CFRelease(&cf_Failedtoallocateclient);
      uVar9 = 0xfa2;
      pcVar10 = &cf_Failedtoallocateclientobject;
      goto LAB_00165fc3;
    }
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
    *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
    iVar4 = *(int *)(_gRestorableData + 0x60);
    *(int *)(_gRestorableData + 0x60) = iVar4 + 1;
    **(int **)(param_1[1] + 8) = iVar4;
    *(int *)(lVar5 + 0x10) = iVar4;
    auVar1 = *param_1;
    auVar13._0_8_ = auVar1._8_8_;
    auVar13._8_4_ = auVar1._0_4_;
    auVar13._12_4_ = auVar1._4_4_;
    *(undefined1 (*) [16])(lVar5 + 0x18) = auVar13;
    *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)param_1[2];
    iVar4 = _snprintf(local_a8,100,"com.apple.mobiledevice.mobilerestore.client.%d");
    local_b0 = lVar5;
    if (iVar4 == -1) {
      pvVar7 = (void *)0x0;
      _AMRLog(3,&cf_Failedtocreatestringforeventdelieveryqueue);
      pvVar8 = (void *)0x0;
LAB_00165ee9:
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
      pcVar10 = (cfstringStruct *)0x0;
      goto LAB_00165efc;
    }
    pvVar7 = (void *)0x0;
    pdVar6 = _dispatch_queue_create(local_a8,(dispatch_queue_attr_t)0x0);
    *(dispatch_queue_t *)(lVar5 + 0x28) = pdVar6;
    if (pdVar6 == (dispatch_queue_t)0x0) {
      pcVar10 = &cf_Failedtocreateeventqueueforclient;
LAB_00165fee:
      pvVar8 = (void *)0x0;
    }
    else {
      local_b8 = _CFDictionaryGetCount(*(undefined8 *)(_gRestorableData + 0x38));
      sVar11 = (long)(int)local_b8 << 3;
      pvVar7 = _calloc(1,sVar11);
      pvVar8 = _calloc(1,sVar11);
      if (pvVar7 != (void *)0x0) {
        if (pvVar8 != (void *)0x0) {
          local_c0 = pvVar7;
          _CFDictionaryGetKeysAndValues(*(undefined8 *)(_gRestorableData + 0x38),pvVar7,pvVar8);
          lVar5 = local_b0;
          if (0 < (int)(uint)local_b8) {
            local_c8 = (undefined4 *)(local_b0 + 0x10);
            local_b8 = (ulong)((uint)local_b8 & 0x7fffffff);
            uVar12 = 0;
            do {
              lVar3 = *(long *)((long)pvVar8 + uVar12 * 8);
              if (lVar3 == 0) {
                _AMRLog(3,&cf_NULLdevicefoundinrestorabledictionary_thisisbad);
              }
              else {
                uVar2 = *(uint *)(lVar5 + 0x30);
                local_d8[0] = 0;
                local_d0 = lVar3;
                ___thr_AMRestorableDeviceGetDeviceClass(local_d8);
                if ((local_d8[0] & ~uVar2) == 0) {
                  pvVar7 = (void *)__AMRestorableEventDataExtendedCreate(0,lVar3,0,lVar5,0,0,0);
                  _dispatch_async_f(*(dispatch_queue_t *)(*(long *)((long)pvVar7 + 0x10) + 0x28),
                                    pvVar7,___thr_AMRestorableDispatchEvent);
                }
                else {
                  _AMRLog(7,&
                            cf_Deviceisinaclassthatclient_dhasexplicitlyaskednottoreceivenotificationfor_Ignoring_
                          ,*local_c8);
                }
              }
              uVar12 = uVar12 + 1;
            } while (local_b8 != uVar12);
          }
          _CFArrayAppendValue(*(undefined8 *)(_gRestorableData + 0x30),local_b0);
          _AMRLog(7,&cf_Successfullyregisterednewclient);
          uVar9 = _CFArrayGetCount(*(undefined8 *)(_gRestorableData + 0x30));
          _AMRLog(7,&cf_Nowtracking_dclients,uVar9);
          pvVar7 = local_c0;
          goto LAB_00165ee9;
        }
        pcVar10 = &cf_Failedtoallocateroomfordevicerefs;
        goto LAB_00165fee;
      }
      pcVar10 = &cf_Failedtoallocateroomfordevicekeys;
      pvVar7 = (void *)0x0;
    }
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
    uVar9 = 0xfa2;
  }
  if (*(long *)param_1[1] != 0) {
    uVar9 = _CFErrorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                           &cf_com_apple_MobileDevice_MobileRestore,uVar9,0);
    **(undefined8 **)param_1[1] = uVar9;
  }
LAB_00165efc:
  _AMRSafeLog(3,&cf___,pcVar10);
  if (pvVar7 != (void *)0x0) {
    _free(pvVar7);
  }
  if (pvVar8 != (void *)0x0) {
    _free(pvVar8);
  }
  if (pcVar10 != (cfstringStruct *)0x0) {
    _CFRelease(pcVar10);
  }
  if (local_b0 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

