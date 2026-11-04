// rea decompile_all
// name: _handleStreamedImageFileRequest
// address: 0xca89e
// body: available
// range: 0xca89e-0xcaa4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleStreamedImageFileRequest(AMRestoreMuxedDeviceMessage*, __CFString const*, unsigned char)
    */

undefined4
_handleStreamedImageFileRequest
          (AMRestoreMuxedDeviceMessage *param_1,__CFString *param_2,uchar param_3)

{
  long *plVar1;
  __AMRestoreModeDevice *p_Var2;
  uint uVar3;
  __CFString *p_Var4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *context;
  dispatch_object_t object;
  uchar extraout_DL;
  cfstringStruct *pcVar8;
  AMRestoreMuxedDeviceMessage *pAVar9;
  uint uVar10;
  double dVar11;
  undefined4 local_48;
  uint local_44;
  __CFString *local_40;
  undefined4 local_34;
  
  pAVar9 = *(AMRestoreMuxedDeviceMessage **)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  p_Var2 = (__AMRestoreModeDevice *)plVar1[2];
  pcVar8 = &cf_DataPort;
  lVar7 = _CFDictionaryGetValue();
  if (lVar7 == 0) {
    _handleStreamedImageFileRequest(pAVar9,(__CFString *)pcVar8,extraout_DL);
    uVar6 = 10;
  }
  else {
    local_44 = 0;
    local_40 = param_2;
    _CFNumberGetValue(lVar7,9,&local_44);
    uVar3 = local_44;
    uVar10 = local_44 & 0xffff;
    lVar7 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Operation);
    if (lVar7 == 0) {
      local_34 = 0xd;
    }
    else {
      local_48 = 0;
      _CFNumberGetValue(lVar7,9,&local_48);
      local_34 = local_48;
    }
    dVar11 = (double)_asrConnectTimeout((__CFDictionary *)plVar1[3]);
    iVar5 = _AMRestoreModeDeviceConnectToPortInternal
                      (p_Var2,(ushort)uVar3,dVar11,(ulong)(param_3 == '\0') + 8);
    if (iVar5 < 0) {
      _AMRLog(3,&cf_receivedstreamedimagerequestbutfailedtoconnecttodevice_stransferport_d,uVar10);
      uVar6 = 0xffffffff;
    }
    else if (param_3 == '\0') {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      uVar6 = _handleStreamedImageFileRequest_Impl(p_Var2,iVar5,local_40,local_34,0);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    else {
      lVar7 = plVar1[3];
      context = _calloc(1,0x28);
      _AMSupportSafeRetain(p_Var2);
      p_Var4 = local_40;
      *context = p_Var2;
      *(int *)(context + 1) = iVar5;
      _AMSupportSafeRetain(local_40);
      context[2] = p_Var4;
      *(undefined4 *)(context + 3) = local_34;
      _AMSupportSafeRetain(lVar7);
      context[4] = lVar7;
      object._os_obj = (_os_object_s *)_asyncOperationQueueCreate(p_Var2);
      _dispatch_async_f((dispatch_queue_t)object._os_obj,context,
                        __block_handleStreamedImageFileRequest);
      uVar6 = 0xffffffff;
      if (object._os_obj != (_os_object_s *)0x0) {
        _dispatch_release(object);
      }
    }
  }
  return uVar6;
}

