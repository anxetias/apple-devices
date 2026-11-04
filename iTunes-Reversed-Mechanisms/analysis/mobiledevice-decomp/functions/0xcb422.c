// rea decompile_all
// name: _handleAsyncImageDataRequest
// address: 0xcb422
// body: available
// range: 0xcb422-0xcb722 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcb525 to 0xca89e _handleStreamedImageFileRequest (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xcb71e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleAsyncImageDataRequest(AMRestoreMuxedDeviceMessage*, __CFString const*) */

undefined8 _handleAsyncImageDataRequest(AMRestoreMuxedDeviceMessage *param_1,__CFString *param_2)

{
  long lVar1;
  __AMRestoreModeDevice *p_Var2;
  char cVar3;
  int iVar4;
  long lVar5;
  __CFString *p_Var6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *context;
  size_t sVar10;
  char *pcVar11;
  dispatch_object_t object;
  char *pcVar12;
  double dVar13;
  undefined4 local_454;
  long local_450;
  __CFString *local_448;
  dispatch_object_t local_440;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar1 = *(long *)(param_1 + 0x10);
  p_Var2 = *(__AMRestoreModeDevice **)(lVar1 + 0x10);
  local_440._os_obj = (_os_object_s *)_asyncOperationQueueCreate(p_Var2);
  ___bzero(local_438,0x400);
  lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),param_2);
  if (lVar5 == 0) {
    _AMRLog(3,&cf_receivedimagedatarequestbuthavenoimagetorestore);
LAB_000cb55a:
    uVar7 = 10;
    object = local_440;
  }
  else {
    p_Var6 = (__CFString *)_CFDictionaryGetValue(lVar5,&cf_ImageFile);
    local_450 = _CFDictionaryGetValue(lVar5,&cf_ImagePassword);
    if ((p_Var6 == (__CFString *)0x0) || (lVar5 = _CFStringGetLength(p_Var6), lVar5 == 0)) {
      _AMRLog(3,&cf_missingimagepathfor__,param_2);
      uVar7 = 1;
      object = local_440;
    }
    else {
      cVar3 = _imageDataRequestUsesStreamedFile
                        (*(__CFDictionary **)(lVar1 + 0x18),*(__CFDictionary **)(param_1 + 8));
      if (cVar3 != '\0') {
        _AMRLog(6,&cf_Handlingasynchronous__imagedatarequestforencrypted__,param_2,p_Var6);
        if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
          uVar7 = _handleStreamedImageFileRequest(param_1,p_Var6,'\x01');
          return uVar7;
        }
        goto LAB_000cb71e;
      }
      lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_DataPort);
      if (lVar5 == 0) goto LAB_000cb55a;
      local_454 = 0;
      _CFNumberGetValue(lVar5,9,&local_454);
      local_448 = (__CFString *)CONCAT62(local_448._2_6_,(undefined2)local_454);
      lVar5 = _CFDictionaryGetValue
                        (*(undefined8 *)(param_1 + 8),&cf_WillSendImageVerificationProgress);
      if (lVar5 != 0) {
        lVar8 = _CFGetTypeID(lVar5);
        lVar9 = _CFBooleanGetTypeID();
        if (lVar8 == lVar9) {
          _CFBooleanGetValue(lVar5);
        }
      }
      _AMRestoreModeDeviceProgressAsync(p_Var2,0xd,0,(__CFString *)0x0);
      dVar13 = (double)_asrConnectTimeout(*(__CFDictionary **)(lVar1 + 0x18));
      iVar4 = _AMRestoreModeDeviceConnectToPortInternal(p_Var2,(ushort)local_448,dVar13,8);
      if (iVar4 == -1) {
        uVar7 = 2;
        object = local_440;
      }
      else {
        local_448 = p_Var6;
        if (local_450 == 0) {
          pcVar12 = (char *)0x0;
        }
        else {
          pcVar12 = local_438;
          _CFStringGetCString(local_450,pcVar12,0x400,0x8000100);
        }
        lVar1 = *(long *)(lVar1 + 0x18);
        context = _calloc(1,0x28);
        if (p_Var2 != (__AMRestoreModeDevice *)0x0) {
          uVar7 = _CFRetain(p_Var2);
          *context = uVar7;
        }
        *(int *)(context + 1) = iVar4;
        uVar7 = _CFRetain(local_448);
        context[2] = uVar7;
        if (pcVar12 != (char *)0x0) {
          sVar10 = _strlen(pcVar12);
          pcVar11 = _calloc(1,sVar10 + 1);
          context[3] = pcVar11;
          _strlcpy(pcVar11,pcVar12,sVar10 + 1);
        }
        object = local_440;
        if (lVar1 != 0) {
          uVar7 = _CFRetain(lVar1);
          context[4] = uVar7;
        }
        _dispatch_async_f((dispatch_queue_t)object._os_obj,context,
                          __block_handleAsyncImageDataRequest);
        uVar7 = 0;
      }
    }
  }
  _dispatch_release(object);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar7;
  }
LAB_000cb71e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

