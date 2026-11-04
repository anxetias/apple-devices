// rea decompile_all
// name: __block_handleAsyncStreamedImageDecryptionKeyRequest
// address: 0xcf87b
// body: available
// range: 0xcf87b-0xcfd11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* __block_handleAsyncStreamedImageDecryptionKeyRequest(__CFDictionary const*) */

int __block_handleAsyncStreamedImageDecryptionKeyRequest(__CFDictionary *param_1)

{
  char cVar1;
  int iVar2;
  __AMRestoreModeDevice *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  __CFString *p_Var7;
  long lVar8;
  undefined8 uVar9;
  __CFDictionary *p_Var10;
  undefined8 uVar11;
  __CFError *p_Var12;
  pthread_mutex_t *ppVar13;
  cfstringStruct *pcVar14;
  pthread_mutex_t *local_78;
  undefined8 local_70;
  __AMRestoreModeDevice *local_68;
  __CFDictionary *local_60;
  __CFString *local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  int local_34;
  
  local_34 = 0;
  p_Var3 = (__AMRestoreModeDevice *)_CFDictionaryGetValue(param_1,&cf_device);
  uVar4 = _CFDictionaryGetValue(param_1,&cf_message);
  local_40 = _CFDictionaryGetValue(param_1,&cf_options);
  uVar5 = _CFDictionaryGetValue(param_1,&cf_msgArgs);
  lVar6 = _CFDictionaryGetValue(uVar4,&cf_DataPort);
  local_68 = p_Var3;
  if (lVar6 == 0) {
    iVar2 = -1;
LAB_000cfb74:
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    uVar4 = _CFDictionaryCreateMutable
                      (uVar5,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    uVar11 = 0;
  }
  else {
    local_78 = (pthread_mutex_t *)((ulong)local_78 & 0xffffffff00000000);
    _CFNumberGetValue(lVar6,9,&local_78);
    iVar2 = _AMRestoreModeDeviceConnectToPortInternal(p_Var3,(ushort)local_78,0.0,0);
    if (iVar2 < 0) goto LAB_000cfb74;
    p_Var7 = (__CFString *)_CFDictionaryGetValue(uVar5,&cf_ArchiveIdentifier);
    local_60 = (__CFDictionary *)_CFDictionaryGetValue(uVar5,&cf_RequestURL);
    local_58 = (__CFString *)_CFDictionaryGetValue(uVar5,&cf_RequestMethod);
    local_50 = _CFDictionaryGetValue(uVar5,&cf_RequestBody);
    uVar4 = _CFDictionaryGetValue(uVar5,&cf_RequestAdditionalHeaders);
    cVar1 = _isNonEmptyCFString(p_Var7);
    if (cVar1 != '\0') {
      local_48 = __AMRestoreWKMSCopyDecryptionKeyFromLocalStorage(p_Var7,local_40);
      if (local_48 == 0) goto LAB_000cfa4f;
      pcVar14 = &cf_LocalUnwrapped;
      uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar4 = _CFDictionaryCreateMutable
                        (uVar5,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      local_40 = 0;
LAB_000cf9fe:
      _CFDictionarySetValue(uVar4,&cf_KeyData,local_48);
      _CFDictionarySetValue(uVar4,&cf_KeySource,pcVar14);
      uVar11 = local_40;
      goto LAB_000cfbae;
    }
    _AMRLog(4,&cf_Decryption_receivedkeyrequestwithinvalidarchiveidentifier_ignoring);
LAB_000cfa4f:
    p_Var10 = local_60;
    cVar1 = _isNonEmptyCFString((__CFString *)local_60);
    if ((((cVar1 == '\0') || (cVar1 = _isNonEmptyCFString(local_58), cVar1 == '\0')) ||
        (lVar6 = _CFDataGetTypeID(), local_50 == 0)) ||
       ((lVar8 = _CFGetTypeID(local_50), lVar8 != lVar6 ||
        (lVar6 = _CFDataGetLength(local_50), lVar6 < 1)))) {
      _AMRLog(4,&cf_Decryption_receivedkeyrequestwithinvalidserverinfo_ignoring);
      goto LAB_000cfb74;
    }
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    uVar9 = _CFURLCreateWithString(uVar5,p_Var10,0);
    ppVar13 = (pthread_mutex_t *)(p_Var3 + 0x158);
    local_70 = 1;
    local_78 = ppVar13;
    _pthread_mutex_lock(ppVar13);
    uVar11 = local_40;
    local_40 = uVar9;
    local_48 = __AMRestoreWKMSCopyDecryptionKeyFromServer
                         (*(undefined8 *)(local_68 + 0x150),p_Var7,uVar9,local_58,local_50,uVar4,
                          uVar11);
    _pthread_mutex_unlock(ppVar13);
    uVar4 = _CFDictionaryCreateMutable
                      (uVar5,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    uVar11 = local_40;
    if (local_48 != 0) {
      pcVar14 = &cf_Remote;
      goto LAB_000cf9fe;
    }
  }
  local_34 = 0x455;
  local_48 = 0;
LAB_000cfbae:
  _ramrod_send_message(iVar2,uVar4);
  if (local_34 != 0) {
    local_58 = (__CFString *)CONCAT44(local_58._4_4_,iVar2);
    p_Var12 = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
    local_60 = param_1;
    local_40 = uVar11;
    p_Var10 = (__CFDictionary *)
              _CFDictionaryCreateMutable(uVar5,3,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
    _CFDictionarySetValue(p_Var10,&cf_MsgType,&cf_StatusMsg);
    uVar5 = _CFNumberCreate(uVar5,9,&local_34);
    _CFDictionarySetValue(p_Var10,&cf_Status,uVar5);
    _CFDictionarySetValue(p_Var10,&cf_Successful,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
    uVar11 = _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)(long)local_34,0x45c590,(__CFString *)0x0,p_Var12);
    lVar6 = _copy_encoded_error(uVar11);
    if (lVar6 != 0) {
      _CFDictionarySetValue(p_Var10,&cf_Error,lVar6);
      _CFRelease(lVar6);
    }
    _send_internal_message(local_68,p_Var10);
    _CFRelease(p_Var10);
    _CFRelease(uVar5);
    _CFRelease(uVar11);
    uVar11 = local_40;
    param_1 = local_60;
    iVar2 = (int)local_58;
  }
  _AMSupportSafeRelease(uVar4);
  _AMSupportSafeRelease(uVar11);
  _AMSupportSafeRelease(local_48);
  _AMRLog(6,&cf_sock_3d__s,iVar2,"closed");
  _close(iVar2);
  _CFRelease(param_1);
  return local_34;
}

