// rea decompile_all
// name: _handleFDRSubmit
// address: 0xd57dc
// body: available
// range: 0xd57dc-0xd5a8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleFDRSubmit(AMRestoreMuxedDeviceMessage*) */

int _handleFDRSubmit(AMRestoreMuxedDeviceMessage *param_1)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  long local_38;
  
  lVar9 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar9 + 0x10);
  ppVar1 = (pthread_mutex_t *)(lVar2 + 0x158);
  bVar3 = true;
  _pthread_mutex_lock(ppVar1);
  if (*(long *)(lVar2 + 0x150) == 0) {
    pcVar10 = &cf_device_>amaiisNULL;
LAB_000d5a2f:
    _AMRLog(3,pcVar10);
    iVar4 = 1;
  }
  else {
    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_DataInstance);
    if (lVar5 == 0) {
      pcVar10 = &cf_dataInstanceisNULL;
      goto LAB_000d5a2f;
    }
    lVar6 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_DataClass);
    if (lVar6 == 0) {
      pcVar10 = &cf_dataClassisNULL;
      goto LAB_000d5a2f;
    }
    lVar7 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_DataPayload);
    if (lVar7 == 0) {
      pcVar10 = &cf_dataPayloadisNULL;
      goto LAB_000d5a2f;
    }
    _AMFDRLogSetHandler(__AMAuthInstallLogHandler);
    local_38 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Permissions);
    if (local_38 != 0) {
      _CFRetain();
LAB_000d58de:
      uVar8 = _CFDataGetLength(lVar7);
      _AMRLog(6,&cf_DevicerequestingFDRPUTof_lubytestodataclass__,uVar8,lVar6);
      iVar4 = _AMRAuthInstallSubmitFDRData
                        (lVar6,lVar5,lVar7,*(undefined8 *)(lVar2 + 0x150),local_38,
                         *(undefined8 *)(lVar9 + 0x18));
      if (iVar4 == 0) {
        _pthread_mutex_unlock(ppVar1);
        bVar3 = false;
        lVar9 = _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                                    &_RESTORED_MSG_TYPE,&_RESTORED_MSG_TYPE_FDR_SUBMIT_ACK,1,
                                    PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar9 == 0) {
          lVar9 = 0;
          _AMRLog(7,&cf_FailedtoallocatesubmitFDRackmessage);
          iVar4 = 0x12;
        }
        else {
          _AMRLog(6,&cf_SendingacknowledgementthatsubmitFDRhasbeencompleted);
          iVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar9);
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            _AMRLog(3,&cf_FailedtosendfinalsubmitFDRacknowledgement_error__d,iVar4);
          }
        }
      }
      else {
        lVar9 = 0;
        _AMRLog(3,&cf_AMRAuthInstallSubmitFDRDatafailedwith_d,iVar4);
        iVar4 = 0x40;
      }
      goto LAB_000d59db;
    }
    local_38 = _AMFDRCreatePermissionsString
                         (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1,lVar6,&cf__);
    if (local_38 != 0) goto LAB_000d58de;
    _AMRLog(3,&cf_AMFDRCreatePermissionsStringfailedfordataClass__,lVar6);
    iVar4 = 0x40;
  }
  local_38 = 0;
  lVar9 = 0;
LAB_000d59db:
  _AMSupportSafeRelease(local_38);
  _AMSupportSafeRelease(lVar9);
  if (bVar3) {
    _pthread_mutex_unlock(ppVar1);
  }
  return iVar4;
}

