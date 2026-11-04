// rea decompile_all
// name: _AMSupportHttpMessageSendSyncWithOptions
// address: 0x4e38
// body: available
// range: 0x4e38-0x523d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5207 to 0x5bc8 __AMSupportHttpMessageSendSyncNoRetry (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x5239 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMSupportHttpMessageSendSyncWithOptions
                (undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                long *param_5,undefined8 *param_6)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ID IVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  long local_58;
  long local_50;
  long local_48;
  uint local_40;
  int local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if ((param_2 == 0) ||
     ((lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"objectForKey:",&cf_ValidResponses),
      lVar3 == 0 &&
      (lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"objectForKey:",&cf_MaxAttempts),
      lVar3 == 0)))) {
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      uVar11 = __AMSupportHttpMessageSendSyncNoRetry
                         (param_1,param_2,param_3,param_4,param_5,param_6);
      return uVar11;
    }
    goto LAB_00005239;
  }
  uVar4 = _objc_autoreleasePoolPush();
  uVar10 = 1;
  local_3c = 1;
  local_40 = 1;
  local_48 = 0;
  local_50 = -1;
  local_58 = 0;
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"objectForKey:",&cf_ValidResponses);
  if (lVar3 == 0) {
LAB_00004f40:
    do {
      lVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"objectForKey:",&cf_Backoff);
      if ((lVar5 == 0) || (cVar1 = _CFNumberGetValue(lVar5,3,&local_3c), cVar1 == '\0')) {
        local_3c = 1;
      }
      lVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_2,"objectForKey:",&cf_MaxAttempts);
      if ((lVar5 == 0) || (cVar1 = _CFNumberGetValue(lVar5,3,&local_40), cVar1 == '\0')) {
        local_40 = 1;
      }
      uVar2 = __AMSupportHttpMessageSendSyncNoRetry
                        (param_1,param_2,param_3,&local_48,&local_50,&local_58);
      uVar11 = (ulong)uVar2;
      bVar12 = uVar2 != 0;
      if (bVar12) {
        _AMSupportLogInternal
                  (3,"_AMSupportHttpMessageSendSyncRetry","HTTP request failed (status=%d)",uVar11);
      }
      bVar13 = local_58 != 0;
      if (bVar13) {
        _AMSupportLogInternal
                  (3,"_AMSupportHttpMessageSendSyncRetry","URL connection error occurred: %@");
      }
      bVar14 = local_48 == 0;
      if (bVar14) {
        _AMSupportLogInternal
                  (3,"_AMSupportHttpMessageSendSyncRetry",
                   "HTTP request failed, httpResponseHeader is NULL");
      }
      bVar9 = bVar14 || (bVar13 || bVar12);
      if (lVar3 == 0) {
LAB_00005072:
        if (!bVar14 && (!bVar13 && !bVar12)) break;
      }
      else {
        IVar7 = NSNumber::numberWithLong_((ID)&_OBJC_CLASS___NSNumber,"numberWithLong:",local_50);
        lVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar3,"member:",IVar7);
        if (lVar5 != 0) goto LAB_00005072;
        _AMSupportLogInternal
                  (3,"_AMSupportHttpMessageSendSyncRetry",
                   "HTTP server returned unexpected HTTP response code %ld",local_50);
        bVar9 = true;
      }
      if (uVar10 < local_40) {
        uVar2 = local_3c * uVar10;
        _AMSupportLogInternal
                  (3,"_AMSupportHttpMessageSendSyncRetry",
                   "-------------------- Attempt %d of %d failed, sleeping for %d seconds --------------------"
                   ,uVar10,local_40,uVar2);
        _sleep(uVar2);
        local_50 = -1;
        if (local_48 != 0) {
          _CFRelease();
          local_48 = 0;
        }
        if (local_58 != 0) {
          _CFRelease();
          local_58 = 0;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 <= local_40);
    if (bVar9) {
      _AMSupportHttpMessageSendSyncWithOptions_cold_3(&local_40);
    }
    else if (local_48 == 0) {
      _AMSupportHttpMessageSendSyncWithOptions_cold_2();
    }
    else {
      if (param_4 != (undefined8 *)0x0) {
        uVar8 = _CFRetain();
        *param_4 = uVar8;
      }
      if (local_50 != 0 && param_5 != (long *)0x0) {
        *param_5 = local_50;
      }
    }
  }
  else {
    lVar5 = _CFSetGetTypeID();
    lVar6 = _CFGetTypeID(lVar3);
    if (lVar5 == lVar6) goto LAB_00004f40;
    _AMSupportHttpMessageSendSyncWithOptions_cold_1();
    uVar11 = 0x10;
  }
  if (local_58 != 0 && param_6 != (undefined8 *)0x0) {
    uVar8 = _CFRetain();
    *param_6 = uVar8;
  }
  if (local_48 != 0) {
    _CFRelease();
    local_48 = 0;
  }
  if (local_58 != 0) {
    _CFRelease();
  }
  _objc_autoreleasePoolPop(uVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar11;
  }
LAB_00005239:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

