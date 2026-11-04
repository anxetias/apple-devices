// rea decompile_all
// name: _AMSupportHttpURLSessionSendSync
// address: 0x523e
// body: available
// range: 0x523e-0x5918 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5914 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMSupportHttpURLSessionSendSync
              (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,long *param_5)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  dispatch_object_t object;
  ID IVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long local_148;
  long local_140;
  uint local_138;
  int local_134;
  undefined *local_130;
  undefined8 local_128;
  code *local_120;
  undefined *local_118;
  dispatch_object_t local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  code *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  code *local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = _objc_autoreleasePoolPush();
  local_134 = 1;
  local_138 = 1;
  if (param_1 == 0) {
    _AMSupportHttpURLSessionSendSync_cold_3();
  }
  else {
    if (param_2 != 0) {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"options");
      lVar5 = _CFDictionaryGetValue(uVar4,&cf_ValidResponses);
      if (lVar5 != 0) {
        lVar6 = _CFSetGetTypeID();
        lVar7 = _CFGetTypeID(lVar5);
        if (lVar6 != lVar7) {
          _AMSupportHttpURLSessionSendSync_cold_1();
          iVar10 = 0x10;
          goto LAB_000058a6;
        }
      }
      uVar11 = 1;
      local_140 = 0;
      lVar6 = 0;
      do {
        if (lVar6 != 0) {
          _CFRelease(lVar6);
        }
        if (local_140 != 0) {
          _CFRelease();
        }
        lVar6 = _CFDictionaryGetValue(uVar4,&cf_Backoff);
        if ((lVar6 == 0) || (cVar2 = _CFNumberGetValue(lVar6,3,&local_134), cVar2 == '\0')) {
          local_134 = 1;
        }
        lVar6 = _CFDictionaryGetValue(uVar4,&cf_MaxAttempts);
        if ((lVar6 == 0) || (cVar2 = _CFNumberGetValue(lVar6,3,&local_138), cVar2 == '\0')) {
          local_138 = 1;
        }
        local_68 = 0;
        local_58 = 0x3052000000;
        local_50 = ___Block_byref_object_copy_;
        local_48 = ___Block_byref_object_dispose_;
        local_40 = 0;
        local_98 = 0;
        local_88 = 0x3052000000;
        local_80 = ___Block_byref_object_copy_;
        local_78 = ___Block_byref_object_dispose_;
        local_70 = 0;
        local_c8 = 0;
        local_b8 = 0x3052000000;
        local_b0 = ___Block_byref_object_copy_;
        local_a8 = ___Block_byref_object_dispose_;
        local_a0 = 0;
        local_e8 = 0;
        local_d8 = 0x2020000000;
        local_d0 = 0;
        local_e0 = &local_e8;
        local_c0 = &local_c8;
        local_90 = &local_98;
        local_60 = &local_68;
        object._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
        if (object._os_obj == (_os_object_s *)0x0) {
          _AMSupportLogInternal
                    (3,"_AMSupportHttpURLSessionSendSyncNoRetry","Failed to create semaphore");
          iVar10 = 2;
LAB_000055a1:
          local_148 = -1;
          lVar6 = 0;
          local_140 = 0;
        }
        else {
          local_130 = PTR___NSConcreteStackBlock_004412a8;
          local_128 = 0xc2000000;
          local_120 = ____AMSupportHttpURLSessionSendSyncNoRetry_block_invoke;
          local_118 = &
                      ___block_descriptor_72_e8_32o40r48r56r64r_e46_v32__0__NSData_8__NSURLResponse_16__NSError_24l
          ;
          local_110._os_obj = object._os_obj;
          local_108 = &local_68;
          local_100 = &local_98;
          local_f8 = &local_c8;
          local_f0 = &local_e8;
          (*(code *)PTR__objc_msgSend_00441098)
                    (param_1,"sendRequest:completion:",param_2,&local_130);
          _dispatch_semaphore_wait((dispatch_semaphore_t)object._os_obj,0xffffffffffffffff);
          if (local_c0[5] != 0) {
            _AMSupportLogInternal
                      (3,"_AMSupportHttpURLSessionSendSyncNoRetry",
                       "HTTP request failed with error %@");
            cVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"sslEvalFailed");
            iVar10 = 0x17;
            if (cVar2 == '\0') {
              iVar10 = 0x10;
            }
            goto LAB_000055a1;
          }
          if (local_60[5] == 0) {
            _AMSupportLogInternal
                      (3,"_AMSupportHttpURLSessionSendSyncNoRetry",
                       "HTTP request provided no response data");
            iVar10 = 0x10;
            goto LAB_000055a1;
          }
          lVar6 = (*(code *)PTR__objc_retain_004410a8)();
          local_140 = (*(code *)PTR__objc_retain_004410a8)(local_90[5]);
          local_148 = (long)*(int *)(local_e0 + 3);
          iVar10 = 0;
        }
        (*(code *)PTR__objc_release_004410a0)(local_60[5]);
        (*(code *)PTR__objc_release_004410a0)(local_90[5]);
        (*(code *)PTR__objc_release_004410a0)(local_c0[5]);
        if (object._os_obj != (_os_object_s *)0x0) {
          _dispatch_release(object);
        }
        __Block_object_dispose(&local_e8,8);
        __Block_object_dispose(&local_c8,8);
        __Block_object_dispose(&local_98,8);
        __Block_object_dispose(&local_68,8);
        if (iVar10 == 0) {
          bVar1 = false;
        }
        else {
          if (iVar10 == 0x17) {
            _AMSupportLogInternal(3,"AMSupportHttpURLSessionSendSync","SSL trust evaluation failed")
            ;
            goto LAB_00005888;
          }
          _AMSupportLogInternal
                    (3,"AMSupportHttpURLSessionSendSync","HTTP request failed (status=%d)",iVar10);
          bVar1 = true;
        }
        if (lVar6 == 0) {
          _AMSupportLogInternal
                    (3,"AMSupportHttpURLSessionSendSync",
                     "HTTP request failed, httpResponseData is NULL");
          bVar1 = true;
        }
        if (lVar5 == 0) {
LAB_00005714:
          if (!bVar1) break;
        }
        else {
          IVar8 = NSNumber::numberWithLong_((ID)&_OBJC_CLASS___NSNumber,"numberWithLong:",local_148)
          ;
          lVar7 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"member:",IVar8);
          if (lVar7 != 0) goto LAB_00005714;
          _AMSupportLogInternal
                    (3,"AMSupportHttpURLSessionSendSync",
                     "HTTP server returned unexpected HTTP response code %ld",local_148);
          bVar1 = true;
        }
        if (uVar11 < local_138) {
          uVar9 = local_134 * uVar11;
          _AMSupportLogInternal
                    (3,"AMSupportHttpURLSessionSendSync",
                     "-------------------- Attempt %d of %d failed, sleeping for %d seconds --------------------"
                     ,uVar11,local_138,uVar9);
          _sleep(uVar9);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 <= local_138);
      if (bVar1) {
        if (1 < local_138) {
          _AMSupportLogInternal
                    (3,"AMSupportHttpURLSessionSendSync",
                     "!!!!!!!!!!!!!!!!!!!!!!!!!! Retries exhausted on attempt %d !!!!!!!!!!!!!!!!!!!!!!!!!!"
                    );
        }
      }
      else {
        if ((param_3 != (undefined8 *)0x0) && (lVar6 != 0)) {
          uVar4 = _CFRetain(lVar6);
          *param_3 = uVar4;
        }
        if ((param_4 != (undefined8 *)0x0) && (local_140 != 0)) {
          uVar4 = _CFRetain(local_140);
          *param_4 = uVar4;
        }
        if ((param_5 != (long *)0x0) && (local_148 != 0)) {
          *param_5 = local_148;
        }
      }
LAB_00005888:
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
      if (local_140 != 0) {
        _CFRelease();
      }
      goto LAB_000058a6;
    }
    _AMSupportHttpURLSessionSendSync_cold_2();
  }
  iVar10 = 2;
LAB_000058a6:
  _objc_autoreleasePoolPop(uVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar10;
}

