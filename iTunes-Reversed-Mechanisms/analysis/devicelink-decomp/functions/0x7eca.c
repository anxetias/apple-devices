// rea decompile_all
// name: __DLPurgeDiskSpaceOnComputer
// address: 0x7eca
// body: available
// range: 0x7eca-0x81e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x81e5 to 0xee55 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLPurgeDiskSpaceOnComputer(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  dispatch_object_t object;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  void *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00015070;
  local_80 = (void *)0x0;
  local_c8 = &local_d0;
  local_d0 = 0;
  local_c0 = 0x2000000000;
  local_b8 = 0;
  local_98 = &local_a0;
  local_a0 = 0;
  local_90 = 0x2000000000;
  local_88 = (cfstringStruct *)0x0;
  local_e8 = &local_f0;
  local_f0 = 0;
  local_e0 = 0x2000000000;
  local_d8 = 0;
  local_b0 = param_1;
  if (*(long *)(param_1 + 0x98) == 0) {
    local_b8 = 0xffffffff;
    local_88 = &cf_Rootdirectorynotset;
  }
  else {
    iVar2 = _DLGetFileSystemRepresentation(*(long *)(param_1 + 0x98),&local_80,&local_88);
    *(int *)(local_c8 + 3) = iVar2;
    if (iVar2 == 0) {
      local_48 = &cf_CACHE_DELETE_URGENCY_LIMIT;
      local_58 = 0x16c70;
      uStack_54 = 0;
      uStack_50 = 0x16c90;
      uStack_4c = 0;
      local_a8 = _CFStringCreateWithCString(0,local_80,0x8000100);
      local_78 = local_a8;
      local_70 = param_2;
      local_68 = param_3;
      lVar3 = _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_00015008,&local_58,
                                  &local_78,3,PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                                  PTR__kCFTypeDictionaryValueCallBacks_00015058);
      local_98[3] = 0;
      object._os_obj = (_os_object_s *)_dispatch_group_create();
      _dispatch_group_enter((dispatch_group_t)object._os_obj);
      _CacheDeletePurgeSpaceWithInfo(lVar3);
      _dispatch_group_wait((dispatch_group_t)object._os_obj,0xffffffffffffffff);
      if (local_a8 != 0) {
        _CFRelease();
      }
      if (lVar3 != 0) {
        _CFRelease(lVar3);
      }
      _dispatch_release(object);
      if (*(int *)(local_c8 + 3) == 0) goto LAB_000080bf;
    }
  }
  if (local_98[3] == 0) {
    local_98[3] = &cf_DLPurgeDiskSpacefailedtopurge;
  }
LAB_000080bf:
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLPurgeDiskSpaceOnComputer",6,&cf_DLPurgeDiskSpace____d____,
            *(undefined4 *)(local_c8 + 3),local_98[3],local_e8[3]);
  }
  __DLSendStatusResponse(local_b0,*(undefined4 *)(local_c8 + 3),local_98[3],local_e8[3]);
  if (local_98[3] != 0) {
    _CFRelease();
    local_98[3] = 0;
  }
  if (local_e8[3] != 0) {
    _CFRelease();
    local_e8[3] = 0;
  }
  _free(local_80);
  __Block_object_dispose(&local_f0,8);
  __Block_object_dispose(&local_a0,8);
  __Block_object_dispose(&local_d0,8);
  if (*(long *)PTR____stack_chk_guard_00015070 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

