// rea decompile_all
// name: _handleAsyncDataRequestMessage
// address: 0xcb987
// body: available
// range: 0xcb987-0xcbd95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleAsyncDataRequestMessage(AMRestoreMuxedDeviceMessage*, __CFError**) */

int _handleAsyncDataRequestMessage(AMRestoreMuxedDeviceMessage *param_1,__CFError **param_2)

{
  pthread_mutex_t *ppVar1;
  __AMRestoreModeDevice *p_Var2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  __CFError *p_Var8;
  undefined8 *context;
  void *pvVar9;
  dispatch_object_t dVar10;
  cfstringStruct *in_RCX;
  cfstringStruct *pcVar11;
  cfstringStruct *pcVar12;
  bool bVar13;
  pthread_mutex_t *local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  __CFError **local_38;
  
  lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_DataType);
  uVar6 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Arguments);
  if (lVar5 == 0) {
    _AMRLog(3,&cf_nodatatypespecifiedinasyncdatarequestmessage);
    return 10;
  }
  lVar7 = _CFStringCompare(lVar5,&cf_SystemImageData,0);
  if (lVar7 == 0) {
    pcVar11 = &cf_SystemImage;
LAB_000cbaa8:
    iVar4 = _handleAsyncImageDataRequest(param_1,(__CFString *)pcVar11);
    in_RCX = &cf_Failedtohandleasyncimagerequest;
  }
  else {
    lVar7 = _CFStringCompare(lVar5,&cf_RecoveryOSASRImage,0);
    if (lVar7 == 0) {
      pcVar11 = &cf_RecoveryOSImage;
      goto LAB_000cbaa8;
    }
    lVar7 = _CFStringCompare(lVar5,&cf_BasebandData,0);
    if (lVar7 != 0) {
      lVar7 = _CFStringCompare(lVar5,&cf_StreamedImageDecryptionKey,0);
      if (lVar7 == 0) {
        lVar5 = *(long *)(param_1 + 0x10);
        pvVar9 = (void *)_CFDictionaryCreateMutable
                                   (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                    PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        _CFDictionarySetValue(pvVar9,&cf_device,*(undefined8 *)(lVar5 + 0x10));
        _CFDictionarySetValue(pvVar9,&cf_options,*(undefined8 *)(lVar5 + 0x18));
        _CFDictionarySetValue(pvVar9,&cf_message,*(undefined8 *)(param_1 + 8));
        _CFDictionarySetValue(pvVar9,&cf_msgArgs,uVar6);
        dVar10._os_obj =
             (_os_object_s *)_asyncOperationQueueCreate(*(__AMRestoreModeDevice **)(lVar5 + 0x10));
        _dispatch_async_f((dispatch_queue_t)dVar10._os_obj,pvVar9,
                          __block_handleAsyncStreamedImageDecryptionKeyRequest);
LAB_000cbd38:
        _dispatch_release(dVar10);
        return 0;
      }
      lVar7 = _CFStringCompare(lVar5,&cf_URLAsset,0);
      if (lVar7 == 0) {
        local_38 = *(__CFError ***)(param_1 + 0x10);
        p_Var2 = (__AMRestoreModeDevice *)local_38[2];
        pvVar9 = (void *)_CFDictionaryCreateMutable
                                   (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                                    PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        _CFDictionarySetValue(pvVar9,&cf_device,p_Var2);
        _CFDictionarySetValue(pvVar9,&cf_options,local_38[3]);
        _CFDictionarySetValue(pvVar9,&cf_message,*(undefined8 *)(param_1 + 8));
        _CFDictionarySetValue(pvVar9,&cf_msgArgs,uVar6);
        dVar10._os_obj = (_os_object_s *)_asyncOperationQueueCreate(p_Var2);
        _dispatch_async_f((dispatch_queue_t)dVar10._os_obj,pvVar9,__block_handleAsyncURLRequest);
        goto LAB_000cbd38;
      }
      _AMRLog(3,&cf_Unexpected_unsupportedasynccommand____sentbydevice_Upgradeyourrestoretools_,
              lVar5);
      iVar4 = 10;
      pcVar11 = &cf_UnknownAsyncCommand_Upgraderestoretools_;
      goto LAB_000cbac3;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(lVar5 + 0x10);
    local_40 = 0;
    local_50 = 1;
    ppVar1 = (pthread_mutex_t *)(lVar7 + 0x158);
    local_58 = ppVar1;
    local_38 = param_2;
    _pthread_mutex_lock(ppVar1);
    local_48 = lVar7;
    if (*(long *)(lVar7 + 0x150) == 0) {
      iVar4 = 1;
      bVar13 = false;
    }
    else {
      iVar4 = _AMRAuthInstallBasebandUpdaterRequest
                        (*(long *)(lVar7 + 0x150),uVar6,*(undefined8 *)(lVar5 + 0x18),&local_40);
      bVar13 = local_40 != 0;
    }
    param_2 = local_38;
    _pthread_mutex_unlock(ppVar1);
    if (bVar13) {
      dVar10._os_obj =
           (_os_object_s *)
           _dispatch_queue_create("com.apple.libusbrestore.async_send",(dispatch_queue_attr_t)0x0);
      if (dVar10._os_obj == (_os_object_s *)0x0) {
        iVar4 = 0x12;
      }
      else {
        lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_DataPort);
        if (lVar5 == 0) {
          iVar4 = 10;
        }
        else {
          local_58 = (pthread_mutex_t *)((ulong)local_58 & 0xffffffff00000000);
          _CFNumberGetValue(lVar5,9,&local_58);
          uVar3 = local_58._0_2_;
          context = _calloc(1,0x18);
          uVar6 = _CFRetain(local_48);
          context[1] = uVar6;
          uVar6 = _CFRetain(local_40);
          *context = uVar6;
          *(undefined2 *)(context + 2) = uVar3;
          _dispatch_async_f((dispatch_queue_t)dVar10._os_obj,context,
                            __block_handleAsyncBasebandUpdaterRequest);
          iVar4 = 0;
        }
        _dispatch_release(dVar10);
      }
    }
    if (local_40 != 0) {
      _CFRelease();
    }
    in_RCX = &cf_Failedtohandleasyncbasebandupdaterrequest;
  }
  pcVar11 = (cfstringStruct *)0x0;
  if (iVar4 != 0) {
    pcVar11 = in_RCX;
  }
LAB_000cbac3:
  if ((param_2 != (__CFError **)0x0) && (iVar4 != 0)) {
    pcVar12 = &cf_Failedtohandleasyncsystemimagedatarequest;
    if (pcVar11 != (cfstringStruct *)0x0) {
      pcVar12 = pcVar11;
    }
    p_Var8 = (__CFError *)
             _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)(long)iVar4,(long)pcVar12,(__CFString *)0x0,
                        (__CFError *)in_RCX);
    *param_2 = p_Var8;
  }
  return iVar4;
}

