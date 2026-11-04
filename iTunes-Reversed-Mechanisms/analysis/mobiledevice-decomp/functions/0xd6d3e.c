// rea decompile_all
// name: _handleKernelCacheRequest
// address: 0xd6d3e
// body: available
// range: 0xd6d3e-0xd70b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd70ad to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleKernelCacheRequest(AMRestoreMuxedDeviceMessage*) */

int _handleKernelCacheRequest(AMRestoreMuxedDeviceMessage *param_1)

{
  pthread_mutex_t *ppVar1;
  __AMRestoreModeDevice *p_Var2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  AMRestoreMuxedDeviceMessage *pAVar8;
  long local_98;
  pthread_mutex_t *local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined **local_68;
  long *local_60;
  long *local_58;
  AMRestoreMuxedDeviceMessage *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_98 = *(long *)(param_1 + 0x10);
  p_Var2 = *(__AMRestoreModeDevice **)(local_98 + 0x10);
  local_70 = 0;
  local_80 = 0;
  cVar3 = _AMRestoreOptionsAreLegacy(*(undefined8 *)(local_98 + 0x18));
  if (cVar3 == '\0') {
    local_68 = &PTR____func_00445d88;
    local_60 = &local_98;
    local_58 = &local_70;
    local_48 = (AMRestoreMuxedDeviceMessage *)&local_68;
    __AMRestoreModeDevice::with_amai_locked(p_Var2,(AMRestoreMuxedDeviceMessage *)&local_68);
    pAVar8 = local_48;
    if (local_48 == (AMRestoreMuxedDeviceMessage *)&local_68) {
      lVar7 = 0x20;
LAB_000d6f13:
      (**(code **)((long)*(undefined ***)local_48 + lVar7))();
    }
    else {
      lVar7 = 0x28;
      if (local_48 != (AMRestoreMuxedDeviceMessage *)0x0) goto LAB_000d6f13;
    }
    if (local_70 == 0) {
      _handleKernelCacheRequest(pAVar8);
      iVar4 = -1;
      goto LAB_000d6ffd;
    }
    _AMRestoreModeDeviceProgressAsync(p_Var2,0x1b,-1,(__CFString *)0x0);
    _AMRLogWithFilePath(8,local_70,&cf_sendingkernelcache);
    iVar4 = __AMRestoreCreateCFDataWithContentsOfFile(local_70,&local_80);
    if (iVar4 != 0) {
      _AMRLog(3,&cf_couldn_tloadkernelcache__d,iVar4);
      iVar4 = 10;
      goto LAB_000d7029;
    }
    lVar7 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar7 == 0) goto LAB_000d70a2;
    _CFDictionarySetValue(lVar7,&cf_KernelCacheFile,local_80);
    iVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar7);
    iVar4 = (uint)(iVar4 != 0) * 9;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
    p_Var2 = *(__AMRestoreModeDevice **)(lVar7 + 0x10);
    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar7 + 0x18),&cf_KernelCacheFile);
    local_78 = lVar5;
    if (lVar5 == 0) {
      uVar6 = _handleKernelCacheRequest((AMRestoreMuxedDeviceMessage *)(lVar7 + 0x18));
      if ((uVar6 & 1) != 0) goto LAB_000d6e91;
      iVar4 = (int)local_90;
    }
    else {
      local_88 = 1;
      ppVar1 = (pthread_mutex_t *)(p_Var2 + 0x158);
      local_90 = ppVar1;
      _pthread_mutex_lock(ppVar1);
      iVar4 = _AMAuthInstallBundleCreatePersonalizedPath(*(undefined8 *)(p_Var2 + 0x150),lVar5);
      if (iVar4 == 0) {
        local_78 = 0;
        _pthread_mutex_unlock(ppVar1);
LAB_000d6e91:
        _AMRestoreModeDeviceProgressAsync(p_Var2,0x1b,-1,(__CFString *)0x0);
        _AMRLog(8,&cf_sendingkernelcache___,local_78);
        local_90 = (pthread_mutex_t *)0x0;
        iVar4 = __AMRestoreCreateCFDataWithContentsOfFile(local_78);
        if (local_78 != 0) {
          _CFRelease();
        }
        if (iVar4 != 0) {
          _AMRLog(3,&cf_couldn_tloadkernelcache__d,iVar4);
          iVar4 = 10;
          goto LAB_000d6ffd;
        }
        lVar7 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                           PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar7 != 0) {
          _CFDictionarySetValue(lVar7,&cf_KernelCacheFile,local_90);
          _CFRelease(local_90);
          iVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar7);
          _CFRelease(lVar7);
          iVar4 = (uint)(iVar4 != 0) * 9;
          goto LAB_000d6ffd;
        }
LAB_000d70a2:
        iVar4 = 0x12;
      }
      else {
        _pthread_mutex_unlock(ppVar1);
      }
    }
LAB_000d6ffd:
    lVar7 = 0;
  }
  if (local_70 != 0) {
    _CFRelease();
  }
  if (local_80 != 0) {
    _CFRelease();
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
LAB_000d7029:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

