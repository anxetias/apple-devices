// rea decompile_all
// name: FUN_100004398
// address: 0x100004398
// body: available
// range: 0x100004398-0x1000046c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000046c2 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100004398(int *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long local_490;
  long local_488;
  long local_480;
  undefined1 local_478 [1024];
  long local_78 [3];
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  cfstringStruct *local_48 [2];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10001c070;
  local_490 = 0;
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_1000210c0);
  cVar1 = FUN_1000046c7(&cf_SystemConfiguration,local_478);
  if (cVar1 == '\0') {
    lVar3 = 0;
    lVar8 = 0;
    goto LAB_1000044e0;
  }
  lVar3 = FUN_100004818(local_478,param_1);
  if (lVar3 == 0) {
    lVar3 = 0;
    lVar4 = 0;
LAB_1000044ea:
    uStack_58 = 0;
    local_78[2] = 0;
    uStack_60 = 0;
    uStack_5b = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    _uuid_generate((uchar *)local_48);
    _uuid_unparse((uchar *)local_48,(char *)local_78);
    local_78[0] = _CFStringCreateWithCString(0,local_78,0x8000100);
    local_48[0] = &cf_SystemBUID;
    local_488 = 0;
    if ((local_78[0] == 0) ||
       (lVar8 = _CFDictionaryCreate(0,local_48,local_78,1,
                                    PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                                    PTR__kCFTypeDictionaryValueCallBacks_10001c060), lVar8 == 0)) {
      *param_1 = 0xc;
      lVar5 = 0;
      lVar6 = 0;
      lVar8 = 0;
    }
    else {
      local_480 = lVar8;
      lVar6 = _CFPropertyListCreateData(0,lVar8,100,0,&local_488);
      if (lVar6 == 0) {
        *param_1 = 0x16;
        if (2 < DAT_100021030) {
          FUN_1000008d2(3,0,&cf__sCFPropertyListCreateDatafailed___,"CreateAndStoreBUID",local_488);
        }
        lVar5 = 0;
        lVar6 = 0;
        lVar8 = local_480;
      }
      else {
        iVar2 = FUN_100005ff5(local_478,lVar6);
        lVar5 = local_78[0];
        lVar8 = local_480;
        *param_1 = iVar2;
        if (iVar2 == 0) {
          _CFRetain(local_78[0]);
          lVar8 = local_480;
        }
        else if (DAT_100021030 < 3) {
          lVar5 = 0;
        }
        else {
          pcVar9 = _strerror(iVar2);
          lVar5 = 0;
          FUN_1000008d2(3,0,&cf__sWriteDataToPathfailed__s,"CreateAndStoreBUID",pcVar9);
        }
      }
    }
    if (local_78[0] != 0) {
      _CFRelease();
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
    if (lVar8 != 0) {
      _CFRelease(lVar8);
    }
    if (local_488 != 0) {
      _CFRelease();
    }
    _pthread_mutex_unlock((pthread_mutex_t *)&DAT_1000210c0);
    if (lVar3 == 0) goto LAB_10000448f;
  }
  else {
    lVar4 = _CFPropertyListCreateWithData(0,lVar3,0,0,&local_490);
    lVar8 = 0;
    if (lVar4 == 0) {
LAB_1000044e0:
      *param_1 = 0x16;
      lVar4 = lVar8;
      goto LAB_1000044ea;
    }
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFDictionaryGetTypeID();
    lVar8 = lVar4;
    if ((lVar5 != lVar6) || (lVar5 = _CFDictionaryGetValue(lVar4,&cf_SystemBUID), lVar5 == 0))
    goto LAB_1000044e0;
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFStringGetTypeID();
    if (lVar6 != lVar7) goto LAB_1000044e0;
    _CFRetain(lVar5);
    _pthread_mutex_unlock((pthread_mutex_t *)&DAT_1000210c0);
  }
  _CFRelease(lVar3);
LAB_10000448f:
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (local_490 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}

