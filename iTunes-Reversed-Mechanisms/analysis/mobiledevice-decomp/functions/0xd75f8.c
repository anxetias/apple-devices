// rea decompile_all
// name: _handleBasebandStackDataRequest
// address: 0xd75f8
// body: available
// range: 0xd75f8-0xd789a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleBasebandStackDataRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*) */

int _handleBasebandStackDataRequest(AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_48;
  long local_40;
  long local_38;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar7 + 0x10);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  ppVar1 = (pthread_mutex_t *)(lVar8 + 0x158);
  _pthread_mutex_lock(ppVar1);
  if (*(long *)(lVar8 + 0x150) == 0) {
    _AMRLog(3,&cf_unexpectedrequestforpersonalizedbasebandfirmware);
LAB_000d77c7:
    iVar4 = 10;
  }
  else if (param_2 == (__CFDictionary *)0x0) {
LAB_000d7695:
    lVar6 = _CFDictionaryGetValue(*(undefined8 *)(lVar7 + 0x18),&cf_PersonalizedRestoreBundlePath);
    if (lVar6 == 0) {
      _AMRLog(3,&cf__s_unexpectedlackofpersonalizedbundle,"_handleBasebandStackDataRequest");
      goto LAB_000d77c7;
    }
    iVar4 = _AMRAuthInstallPersonalizeBundle
                      (*(undefined8 *)(lVar8 + 0x150),*(undefined8 *)(lVar7 + 0x18));
    if (iVar4 == 0) {
      uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar7 = _CFURLCreateWithFileSystemPath(uVar2,lVar6,0,1);
      iVar4 = 0x12;
      if (lVar7 != 0) {
        iVar5 = _AMAuthInstallBundleCopyNextBasebandComponentName
                          (*(undefined8 *)(lVar8 + 0x150),&local_48);
        bVar3 = true;
        if (((iVar5 == 0) &&
            (iVar5 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                               (uVar2,lVar7,local_48,0,&local_40), iVar5 == 0)) &&
           (iVar5 = _AMAuthInstallSupportCreateDataFromMappedFileURL(uVar2,&local_38,local_40),
           iVar5 == 0)) {
          _pthread_mutex_unlock(ppVar1);
          lVar8 = _CFDictionaryCreateMutable
                            (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar8 != 0) {
            _CFDictionarySetValue(lVar8,&cf_BasebandStackData,local_38);
            iVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar8);
            _CFRelease(lVar8);
            iVar4 = (uint)(iVar4 != 0) * 9;
          }
          bVar3 = false;
        }
        else {
          iVar4 = _AMAuthInstallToRestoreError(iVar5);
        }
        goto LAB_000d77cf;
      }
    }
    else {
      _AMRLog(3,&cf_failedtopersonalizebundle);
    }
  }
  else {
    _AMRLog(8,&cf_basebandqueryresponse___,param_2);
    lVar6 = _CFDictionaryGetValue(param_2,&cf_Nonce);
    if ((lVar6 == 0) ||
       (iVar4 = _AMAuthInstallBasebandSetNonce(*(undefined8 *)(lVar8 + 0x150),lVar6), iVar4 == 0))
    goto LAB_000d7695;
    iVar4 = _AMAuthInstallToRestoreError(iVar4);
    _AMRLog(3,&cf_invalidbasebandnonce);
  }
  lVar7 = 0;
  bVar3 = true;
LAB_000d77cf:
  if (local_48 != 0) {
    _CFRelease();
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (bVar3) {
    _pthread_mutex_unlock(ppVar1);
  }
  return iVar4;
}

