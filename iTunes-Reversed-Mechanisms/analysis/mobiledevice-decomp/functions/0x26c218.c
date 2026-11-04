// rea decompile_all
// name: _handleFirmwareUpdaterPreflight
// address: 0x26c218
// body: available
// range: 0x26c218-0x26c57e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26c57a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleFirmwareUpdaterPreflight(AMRestoreMuxedDeviceMessage*, __CFDictionary const*, __CFString
   const**) */

int _handleFirmwareUpdaterPreflight
              (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFString **param_3)

{
  __AMRestoreModeDevice *p_Var1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  __CFString *p_Var6;
  long lVar7;
  long *plVar8;
  __CFString **local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar7 = *(long *)(param_1 + 0x10);
  p_Var1 = *(__AMRestoreModeDevice **)(lVar7 + 0x10);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = param_3;
  if (param_3 == (__CFString **)0x0) {
    iVar2 = 1;
    lVar4 = 0;
    goto LAB_0026c42a;
  }
  lVar4 = 0;
  lVar3 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar3 == 0) {
    iVar2 = 0x12;
    goto LAB_0026c42a;
  }
  local_70 = lVar3;
  lVar3 = _CFDictionaryGetValue(param_2,&cf_MessageArgType);
  if (lVar3 == 0) {
LAB_0026c550:
    iVar2 = 1;
    lVar4 = 0;
    lVar7 = local_70;
  }
  else {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFStringGetTypeID();
    if (lVar4 != lVar5) goto LAB_0026c550;
    p_Var6 = (__CFString *)_CFDictionaryGetValue(param_2,&cf_MessageArgUpdaterName);
    *param_3 = p_Var6;
    if (p_Var6 == (__CFString *)0x0) goto LAB_0026c550;
    lVar4 = _CFGetTypeID(p_Var6);
    lVar5 = _CFStringGetTypeID();
    if (lVar4 != lVar5) goto LAB_0026c550;
    lVar4 = 0;
    lVar5 = _CFDictionaryCreateMutable
                      (0,2,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar5 == 0) {
      iVar2 = 0x12;
      lVar7 = local_70;
    }
    else {
      lVar7 = _CFDictionaryGetValue(*(undefined8 *)(lVar7 + 0x18),&cf_RestoreBundlePath);
      lVar4 = lVar5;
      if (lVar7 == 0) {
        _AMSupportCreateErrorInternal
                  (&local_78,&cf_AMRestoreErrorDomain,1,0,
                   &cf__s_failedtofindrestorebundlepathinrestoreoptionsfor__,
                   "_handleFirmwareUpdaterPreflight",*param_3);
      }
      else {
        local_80 = _AMSupportCreateURLFromString(0,lVar7);
        if (local_80 != 0) {
          lVar7 = _CFStringCompare(lVar3,&cf_FirmwareResponsePreflight,0);
          if (lVar7 == 0) {
            plVar8 = operator_new(0x28);
            *plVar8 = (long)&PTR____func_00445e88;
            plVar8[1] = (long)&local_88;
            plVar8[2] = (long)&local_90;
            plVar8[3] = (long)&local_80;
            plVar8[4] = (long)&local_78;
            local_48 = plVar8;
            __AMRestoreModeDevice::with_amai_locked(p_Var1);
            (**(code **)(*plVar8 + 0x28))(plVar8);
            if (local_78 == 0) {
              _AMRLog(6,&cf_foundpersonalizedresponseinthebundlefor__,*local_90);
              lVar7 = local_70;
              _CFDictionarySetValue(local_70,&cf_FirmwareResponsePreflight,local_88);
            }
            else {
              _CFRelease();
              local_78 = 0;
              lVar7 = local_70;
            }
            iVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar7);
            iVar2 = (uint)(iVar2 != 0) * 9;
          }
          else {
            _AMSupportLogInternal
                      (3,"_handleFirmwareUpdaterPreflight","unexpected message type %@",lVar3);
            iVar2 = 0x16;
            lVar7 = local_70;
          }
          goto LAB_0026c401;
        }
        _AMSupportCreateErrorInternal
                  (&local_78,&cf_AMRestoreErrorDomain,0x1f,0,
                   &cf__s_failedtoconvertbundleURLtoURLfor__,"_handleFirmwareUpdaterPreflight",
                   *param_3);
      }
      iVar2 = -1;
      lVar7 = local_70;
    }
  }
LAB_0026c401:
  if (local_78 != 0) {
    _AMRLog(3,&cf__s_failedwitherror___,"_handleFirmwareUpdaterPreflight");
  }
  _CFRelease(lVar7);
LAB_0026c42a:
  if (local_88 != 0) {
    _CFRelease();
    local_88 = 0;
  }
  if (local_80 != 0) {
    _CFRelease();
    local_80 = 0;
  }
  if (local_78 != 0) {
    _CFRelease();
    local_78 = 0;
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

