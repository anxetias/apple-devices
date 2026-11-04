// rea decompile_all
// name: _handleCheckpointMessage
// address: 0x26bfc1
// body: available
// range: 0x26bfc1-0x26c215 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleCheckpointMessage(AMRestoreMuxedDeviceMessage*) */

void _handleCheckpointMessage(AMRestoreMuxedDeviceMessage *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  local_38 = 0;
  local_60 = 0;
  lVar3 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_CHECKPOINT_ID);
  local_58 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_CHECKPOINT_INFO);
  local_50 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_CHECKPOINT_RESULT);
  local_48 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_CHECKPOINT_COMPLETE);
  lVar4 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_CHECKPOINT_NAME);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar6 + 0x1b0);
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  if (lVar5 == 0) {
    lVar5 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    *(long *)(lVar6 + 0x1b0) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  local_40 = uVar1;
  if (lVar4 == 0) {
    lVar6 = _CFStringCreateWithFormat(uVar1,0,&cf___);
  }
  else {
    lVar6 = _CFStringCreateWithFormat(uVar1,0,&cf_____,lVar4);
  }
  cVar2 = _CFNumberGetValue(lVar3,10,&local_38);
  if (cVar2 != '\0') {
    if ((local_48 == 0) || (cVar2 = _CFBooleanGetValue(), cVar2 != '\0')) {
      pcVar7 = &cf_Completedcheckpointid_0x_lX__;
    }
    else {
      pcVar7 = &cf_Startedcheckpointid_0x_lX__;
    }
    _AMRLog(6,pcVar7,local_38,lVar6);
    _CFDictionarySetValue(lVar5,&cf_LastCheckpoint,*(undefined8 *)(param_1 + 8));
  }
  if ((local_50 != 0) && (_CFNumberGetValue(local_50,10,&local_60), local_60 != 0)) {
    _AMRLog(6,&cf_Checkpoint0x_lX__failedwithresult__ld,local_38,lVar6);
    cVar2 = _CFDictionaryGetValueIfPresent(lVar5,&cf_FailedCheckpoint,0);
    if (cVar2 == '\0') {
      _CFDictionarySetValue(lVar5,&cf_FailedCheckpoint,*(undefined8 *)(param_1 + 8));
    }
    else {
      _AMRLog(6,&cf_Checkpoint0x_lXwasnotthefirstfailure_notpreserving_,local_38);
    }
  }
  lVar3 = local_58;
  if (local_58 != 0) {
    lVar4 = _CFDictionaryGetValue(lVar5,&cf_CheckpointInfoMessages);
    if (lVar4 == 0) {
      lVar4 = _CFArrayCreateMutable(local_40,0,PTR__kCFTypeArrayCallBacks_004411a8);
      if (lVar4 == 0) goto LAB_0026c1fa;
      _CFDictionarySetValue(lVar5,&cf_CheckpointInfoMessages,lVar4);
      _CFRelease(lVar4);
    }
    _CFArrayAppendValue(lVar4,lVar3);
  }
LAB_0026c1fa:
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  return;
}

