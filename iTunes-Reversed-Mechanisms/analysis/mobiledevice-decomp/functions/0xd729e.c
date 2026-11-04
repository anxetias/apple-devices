// rea decompile_all
// name: _handleBasebandBootDataRequest
// address: 0xd729e
// body: available
// range: 0xd729e-0xd75d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleBasebandBootDataRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*) */

int _handleBasebandBootDataRequest(AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar9 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar9 + 0x10);
  local_38 = 0;
  local_34 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  ppVar1 = (pthread_mutex_t *)(lVar10 + 0x158);
  _pthread_mutex_lock(ppVar1);
  if (*(long *)(lVar10 + 0x150) == 0) {
    _AMRLog(3,&cf_unexpectedrequestforpersonalizedbasebandfirmware);
    iVar4 = 10;
  }
  else {
    _AMRLog(8,&cf_basebandqueryresponse___,param_2);
    lVar6 = _CFDictionaryGetValue(param_2,&cf_ChipID);
    lVar7 = _CFDictionaryGetValue(param_2,&cf_GoldCertID);
    lVar8 = _CFDictionaryGetValue(param_2,&cf_ChipSerialNo);
    if (lVar8 == 0 || (lVar7 == 0 || lVar6 == 0)) {
      _AMRLog(3,&cf_missingbasebandpersonalizationparameter_s_);
      iVar4 = 1;
    }
    else {
      _CFNumberGetValue(lVar6,3,&local_38);
      _CFNumberGetValue(lVar7,3,&local_34);
      iVar4 = _AMAuthInstallBasebandSetFusings
                        (*(undefined8 *)(lVar10 + 0x150),local_38,local_34,lVar8);
      if (iVar4 == 0) {
        lVar6 = _CFDictionaryGetValue
                          (*(undefined8 *)(lVar9 + 0x18),&cf_PersonalizedRestoreBundlePath);
        if (lVar6 != 0) {
          iVar4 = _AMRAuthInstallPersonalizeBundle
                            (*(undefined8 *)(lVar10 + 0x150),*(undefined8 *)(lVar9 + 0x18));
          bVar3 = true;
          if (iVar4 == 0) {
            uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
            lVar9 = _CFURLCreateWithFileSystemPath(uVar2,lVar6,0,1);
            iVar4 = 0x12;
            if (lVar9 == 0) {
              lVar9 = 0;
            }
            else {
              iVar5 = _AMAuthInstallBundleCopyNextBasebandComponentName
                                (*(undefined8 *)(lVar10 + 0x150),&local_50);
              if (iVar5 == 0) {
                iVar5 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                                  (uVar2,lVar9,local_50,0,&local_48);
                if (iVar5 == 0) {
                  iVar5 = _AMAuthInstallSupportCreateDataFromMappedFileURL(uVar2,&local_40,local_48)
                  ;
                  if (iVar5 == 0) {
                    _pthread_mutex_unlock(ppVar1);
                    lVar10 = _CFDictionaryCreateMutable
                                       (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                        PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                    if (lVar10 != 0) {
                      _CFDictionarySetValue(lVar10,&cf_BasebandBootData,local_40);
                      iVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar10);
                      _CFRelease(lVar10);
                      iVar4 = (uint)(iVar4 != 0) * 9;
                    }
                    bVar3 = false;
                    goto LAB_000d7502;
                  }
                }
                iVar4 = 0;
                _AMAuthInstallToRestoreError(iVar5);
              }
              else {
                iVar4 = _AMAuthInstallToRestoreError(iVar5);
              }
            }
          }
          else {
            lVar9 = 0;
            _AMRLog(3,&cf__s_failedtopersonalizebundle,"_handleBasebandBootDataRequest");
          }
          goto LAB_000d7502;
        }
        iVar4 = 10;
      }
      else {
        iVar4 = _AMAuthInstallToRestoreError(iVar4);
        _AMRLog(3,&cf__s_invalidbasebandfusings,"_handleBasebandBootDataRequest");
      }
    }
  }
  lVar9 = 0;
  bVar3 = true;
LAB_000d7502:
  if (local_50 != 0) {
    _CFRelease();
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (bVar3) {
    _pthread_mutex_unlock(ppVar1);
  }
  return iVar4;
}

