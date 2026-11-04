// rea decompile_all
// name: _handleRecoveryOSImageRequest
// address: 0xda8ac
// body: available
// range: 0xda8ac-0xdab44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdab40 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleRecoveryOSImageRequest(AMRestoreMuxedDeviceMessage*, __CFError**) */

int _handleRecoveryOSImageRequest(AMRestoreMuxedDeviceMessage *param_1,__CFError **param_2)

{
  __AMRestoreModeDevice *p_Var1;
  char cVar2;
  long lVar3;
  __CFError *p_Var4;
  long lVar5;
  cfstringStruct *in_RCX;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  long local_478;
  char local_46d;
  int local_46c;
  undefined **local_468;
  int *local_460;
  long *local_458;
  char *local_450;
  undefined ***local_448;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_478 = *(long *)(param_1 + 0x10);
  p_Var1 = *(__AMRestoreModeDevice **)(local_478 + 0x10);
  local_46c = 0;
  local_46d = '\0';
  ___bzero(local_438,0x400);
  local_468 = &PTR____func_00445fc0;
  local_460 = &local_46c;
  local_458 = &local_478;
  local_450 = &local_46d;
  local_448 = &local_468;
  __AMRestoreModeDevice::with_amai_locked(p_Var1,&local_468);
  if (local_448 == &local_468) {
    lVar3 = 0x20;
LAB_000da964:
    in_RCX = (cfstringStruct *)*local_448;
    (**(code **)((long)&in_RCX->field0_0x0 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (local_448 != (undefined ***)0x0) goto LAB_000da964;
  }
  if (local_46c != 0) {
    pcVar6 = &cf_failedtogetpersonalizedkeyfortherecoveryOSimage_;
    pcVar7 = pcVar6;
    goto LAB_000da985;
  }
  lVar3 = _CFDictionaryGetValue(*(undefined8 *)(local_478 + 0x18),&cf_RecoveryOSImage);
  if (lVar3 == 0) {
    pcVar6 = &cf_failedtogetrecoveryosimagedictionary;
    pcVar7 = &cf_failedtogetrecoveryosimagedictionary;
LAB_000daaa2:
    if (local_46c != 0) goto LAB_000da985;
    _AMRLog(6,&cf_installedrecoveryosimagesuccessfullyfrom__s,local_438);
LAB_000daac4:
    pcVar6 = pcVar7;
    if (pcVar6 == (cfstringStruct *)0x0) goto LAB_000daae2;
  }
  else {
    lVar5 = _CFDictionaryGetValue
                      (*(undefined8 *)(local_478 + 0x18),&cf_RecoveryOSOverlayRootsToInstall);
    if ((local_46d == '\0') && ((lVar5 == 0 || (lVar5 = _CFArrayGetCount(lVar5), lVar5 < 1)))) {
      lVar3 = _CFDictionaryGetValue(lVar3,&cf_RecoveryOSImageOriginalPath);
      if (lVar3 == 0) {
        local_46c = 0x11;
        pcVar6 = &cf_failedtogetrecoveryosimageoriginalpath;
        pcVar7 = pcVar6;
      }
      else {
LAB_000daa4d:
        cVar2 = _AMRestoreGetFileSystemRepresentation(lVar3,local_438,0x400);
        if (cVar2 != '\0') {
          local_46c = _sendLargeFile(param_1,0x47,local_438);
          pcVar7 = (cfstringStruct *)0x0;
          pcVar6 = &cf_Failedtohandlerecoveryosimagedatarequest;
          in_RCX = &cf_failedtosendrecoveryOSimagefiletodevice_;
          if (local_46c != 0) {
            pcVar6 = &cf_failedtosendrecoveryOSimagefiletodevice_;
            pcVar7 = &cf_failedtosendrecoveryOSimagefiletodevice_;
          }
          goto LAB_000daaa2;
        }
        local_46c = 0x11;
        pcVar6 = &cf_Failedtogetfilesystempathtorecoveryosimage;
        pcVar7 = pcVar6;
      }
    }
    else {
      lVar3 = _CFDictionaryGetValue(lVar3,&cf_ImageFile);
      if (lVar3 != 0) goto LAB_000daa4d;
      local_46c = 0x11;
      pcVar6 = &cf_failedtogetrecoveryosimagepersonalizedpath;
      pcVar7 = pcVar6;
    }
LAB_000da985:
    if (param_2 == (__CFError **)0x0) goto LAB_000daac4;
    p_Var4 = (__CFError *)
             _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)(long)local_46c,(long)pcVar6,(__CFString *)0x0,
                        (__CFError *)in_RCX);
    *param_2 = p_Var4;
  }
  _AMRLog(3,&cf___,pcVar6);
LAB_000daae2:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return local_46c;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

