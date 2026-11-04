// rea decompile_all
// name: _handleRecoveryOSFileRequest
// address: 0xdab4d
// body: available
// range: 0xdab4d-0xdadc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdadc1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleRecoveryOSFileRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*, __CFError**) */

uint _handleRecoveryOSFileRequest
               (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  __AMRestoreModeDevice *p_Var1;
  int iVar2;
  __CFError *p_Var3;
  long lVar4;
  uint uVar5;
  cfstringStruct *pcVar6;
  bool bVar7;
  __CFError *local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined **local_68;
  __CFError **local_60;
  long *local_58;
  long *local_50;
  undefined ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  p_Var3 = *(__CFError **)(param_1 + 0x10);
  p_Var1 = *(__AMRestoreModeDevice **)(p_Var3 + 0x10);
  lVar4 = 0;
  local_70 = 0;
  local_78 = 0;
  local_88 = p_Var3;
  local_80 = _CFDictionaryGetValue(param_2,&cf_FWOverrideKey);
  bVar7 = true;
  if (local_80 == 0) {
    uVar5 = 0x3f;
    pcVar6 = &cf_failedtogetFWoverridepathkey;
  }
  else {
    local_68 = &PTR____func_00446040;
    local_60 = &local_88;
    local_58 = &local_80;
    local_50 = &local_70;
    local_48 = &local_68;
    __AMRestoreModeDevice::with_amai_locked(p_Var1,&local_68);
    if (local_48 == &local_68) {
      lVar4 = 0x20;
LAB_000dac0e:
      (**(code **)((long)*local_48 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (local_48 != (undefined ***)0x0) goto LAB_000dac0e;
    }
    if (local_70 == 0) {
      _AMRLog(3,&cf_FailedonfindingtheassetonthebuildManifest_continuewithrestore);
      p_Var3 = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
      lVar4 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
      pcVar6 = &cf_FailedtohandlerecoveryosFWdatarequest;
      if (lVar4 == 0) {
LAB_000dadb6:
        pcVar6 = &cf_FailedtohandlerecoveryosFWdatarequest;
        uVar5 = 0x12;
        lVar4 = 0;
      }
      else {
        _CFDictionarySetValue
                  (lVar4,&cf_RecoveryOSNoAssetFound,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
        (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar4);
        bVar7 = false;
        uVar5 = 0;
      }
    }
    else {
      _AMRestoreModeDeviceProgressAsync(p_Var1,0x46,-1,(__CFString *)0x0);
      _AMRLogWithFilePath(8,local_70,&cf_sendingrecoveyOSfile);
      iVar2 = __AMRestoreCreateCFDataWithContentsOfFile(local_70,&local_78);
      if (iVar2 != 0) {
        _AMRLog(3,&cf_couldn_tloadrecoveryosfile__d,iVar2);
        uVar5 = 10;
        goto LAB_000dad94;
      }
      p_Var3 = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
      lVar4 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
      pcVar6 = &cf_FailedtohandlerecoveryosFWdatarequest;
      if (lVar4 == 0) goto LAB_000dadb6;
      _CFDictionarySetValue(lVar4,&cf_AdditionalBootImages,local_78);
      iVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar4);
      bVar7 = iVar2 != 0;
      uVar5 = (uint)bVar7 * 9;
    }
  }
  if (local_70 != 0) {
    _CFRelease();
  }
  if (local_78 != 0) {
    _CFRelease();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (bVar7 && param_3 != (__CFError **)0x0) {
    p_Var3 = (__CFError *)
             _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)(ulong)uVar5,(long)pcVar6,(__CFString *)0x0,p_Var3);
    *param_3 = p_Var3;
  }
LAB_000dad94:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

