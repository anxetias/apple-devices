// rea decompile_all
// name: _handleDiagDataRequest
// address: 0xd9b43
// body: available
// range: 0xd9b43-0xd9d64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd9d60 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleDiagDataRequest(AMRestoreMuxedDeviceMessage*) */

int _handleDiagDataRequest(AMRestoreMuxedDeviceMessage *param_1)

{
  __AMRestoreModeDevice *p_Var1;
  char cVar2;
  int iVar3;
  long lVar4;
  long local_78;
  long local_70;
  long local_68;
  int local_5c;
  undefined **local_58;
  int *local_50;
  long *local_48;
  long *local_40;
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar4 = *(long *)(param_1 + 0x10);
  p_Var1 = *(__AMRestoreModeDevice **)(lVar4 + 0x10);
  local_5c = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = lVar4;
  cVar2 = _AMRestoreOptionsAreLegacy(*(undefined8 *)(lVar4 + 0x18));
  if (cVar2 == '\0') {
    local_58 = &PTR____func_00445f40;
    local_50 = &local_5c;
    local_48 = &local_78;
    local_40 = &local_68;
    local_38 = &local_58;
    __AMRestoreModeDevice::with_amai_locked(p_Var1,&local_58);
    if (local_38 == &local_58) {
      lVar4 = 0x20;
LAB_000d9c22:
      (**(code **)((long)*local_38 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (local_38 != (undefined ***)0x0) goto LAB_000d9c22;
    }
    lVar4 = local_68;
    if (local_5c == 0) goto LAB_000d9c47;
    _AMRLog(3,&cf__handleDiagDataRequest_Couldn_tfinddiagsentryinbuildmanifest);
  }
  else {
    lVar4 = _CFDictionaryGetValue(*(undefined8 *)(lVar4 + 0x18),&cf_DiagToInstall);
    local_68 = lVar4;
    if (lVar4 == 0) {
      lVar4 = 0;
      _AMRLog(3,&cf__handleDiagDataRequest_receiveddiagdatarequestbuthavenodiagtoinstall);
      local_5c = 10;
      goto LAB_000d9c76;
    }
    _CFRetain(lVar4);
LAB_000d9c47:
    local_5c = __AMRestoreCreateCFDataWithContentsOfFile(lVar4,&local_70);
    if (local_5c == 0) {
      lVar4 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar4 != 0) {
        _CFDictionarySetValue(lVar4,&cf_DiagData,local_70);
        _CFDictionarySetValue(lVar4,&cf_DiagToInstall,local_68);
        iVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar4);
        if (iVar3 != 0) {
          _AMRLog(3,&cf__handleDiagDataRequest_failedtosenddiagtorestored);
          local_5c = 9;
        }
        goto LAB_000d9c76;
      }
      _AMRLog(3,&cf__handleDiagDataRequest_couldn_tallocatereplydict);
      local_5c = 0x12;
    }
    else {
      _AMRLog(3,&cf__handleDiagDataRequest_couldn_tloaddiag______d,local_68,local_5c);
    }
  }
  lVar4 = 0;
LAB_000d9c76:
  if (local_70 != 0) {
    _CFRelease();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (local_68 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_5c;
}

