// rea decompile_all
// name: _handleDeviceTreeRequest
// address: 0xd70e1
// body: available
// range: 0xd70e1-0xd7295 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd7291 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleDeviceTreeRequest(AMRestoreMuxedDeviceMessage*) */

int _handleDeviceTreeRequest(AMRestoreMuxedDeviceMessage *param_1)

{
  __AMRestoreModeDevice *p_Var1;
  char cVar2;
  int iVar3;
  long lVar4;
  AMRestoreMuxedDeviceMessage *pAVar5;
  long local_70;
  long local_68;
  long local_60;
  undefined **local_58;
  long *local_50;
  long *local_48;
  AMRestoreMuxedDeviceMessage *local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_70 = *(long *)(param_1 + 0x10);
  p_Var1 = *(__AMRestoreModeDevice **)(local_70 + 0x10);
  local_60 = 0;
  local_68 = 0;
  pAVar5 = *(AMRestoreMuxedDeviceMessage **)(local_70 + 0x18);
  cVar2 = _AMRestoreOptionsAreLegacy();
  if (cVar2 == '\0') {
    local_58 = &PTR____func_00445e08;
    local_50 = &local_70;
    local_48 = &local_60;
    local_38 = (AMRestoreMuxedDeviceMessage *)&local_58;
    __AMRestoreModeDevice::with_amai_locked(p_Var1,(AMRestoreMuxedDeviceMessage *)&local_58);
    pAVar5 = local_38;
    if (local_38 == (AMRestoreMuxedDeviceMessage *)&local_58) {
      lVar4 = 0x20;
LAB_000d71a8:
      (**(code **)((long)*(undefined ***)local_38 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (local_38 != (AMRestoreMuxedDeviceMessage *)0x0) goto LAB_000d71a8;
    }
    if (local_60 == 0) {
      _handleDeviceTreeRequest(pAVar5);
      goto LAB_000d7127;
    }
    _AMRestoreModeDeviceProgressAsync(p_Var1,0x3d,-1,(__CFString *)0x0);
    _AMRLogWithFilePath(8,local_60,&cf_sendingdevicetree);
    iVar3 = __AMRestoreCreateCFDataWithContentsOfFile(local_60,&local_68);
    if (iVar3 != 0) {
      _AMRLog(3,&cf_couldn_tloaddevicetree__d,iVar3);
      iVar3 = 10;
      goto LAB_000d720b;
    }
    lVar4 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar4 == 0) {
      iVar3 = 0x12;
      goto LAB_000d712c;
    }
    _CFDictionarySetValue(lVar4,&cf_DeviceTreeFile,local_68);
    iVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar4);
    iVar3 = (uint)(iVar3 != 0) * 9;
  }
  else {
    _handleDeviceTreeRequest(pAVar5);
LAB_000d7127:
    iVar3 = -1;
LAB_000d712c:
    lVar4 = 0;
  }
  if (local_60 != 0) {
    _CFRelease();
  }
  if (local_68 != 0) {
    _CFRelease();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
LAB_000d720b:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

