// rea decompile_all
// name: _handleStatusMessage
// address: 0xd5aaf
// body: available
// range: 0xd5aaf-0xd5e95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleStatusMessage(AMRestoreMuxedDeviceMessage*, __CFError**) */

bool _handleStatusMessage(AMRestoreMuxedDeviceMessage *param_1,__CFError **param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  __CFError *p_Var7;
  cfstringStruct *pcVar8;
  uint local_40;
  uint local_3c;
  __CFError **local_38;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_FDRUserInfo);
  if (lVar1 != 0 && lVar5 != 0) {
    uVar6 = _CFRetain(lVar5);
    *(undefined8 *)(lVar1 + 0x1a8) = uVar6;
  }
  lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Successful);
  *(undefined1 *)(lVar1 + 0x1a0) = 1;
  if (lVar5 == 0) {
    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_AMRError);
    if (lVar5 == 0) {
      lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Status);
      if (lVar5 == 0) {
        pcVar8 = &cf_nostatusprovidedinstatusmessage;
        goto LAB_000d5cba;
      }
      local_40 = 0;
      _CFNumberGetValue(lVar5,9,&local_40);
      uVar3 = local_40;
      p_Var7 = (__CFError *)0x0;
      _AMRLog(7,&cf_devicereturnedstatus_d,local_40);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        p_Var7 = (__CFError *)0x0;
        if ((*(int *)(lVar1 + 0x28) != 0x13) && (*(int *)(lVar1 + 0x28) != 0x28)) {
          uVar3 = 6;
          goto LAB_000d5b3e;
        }
      }
    }
    else {
      local_3c = 0;
      _CFNumberGetValue(lVar5,9,&local_3c);
      uVar3 = local_3c;
      p_Var7 = (__CFError *)0x0;
      _AMRLog(7,&cf_devicereturnedAMRerror_d,local_3c);
    }
  }
  else {
    cVar2 = _CFBooleanGetValue(lVar5);
    if (cVar2 == '\0') {
      lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Error);
      if (lVar5 == 0) {
        pcVar8 = &cf_encodedCFErrorwasmissingfromunsuccessfulrestore;
LAB_000d5cba:
        p_Var7 = (__CFError *)0x0;
        _AMRLog(3,pcVar8);
        uVar3 = 10;
      }
      else {
        _set_archive_logger(_archiveLogHandler);
        p_Var7 = (__CFError *)_copy_decoded_error(lVar5);
        if (p_Var7 == (__CFError *)0x0) {
          p_Var7 = (__CFError *)0x0;
          _AMRLog(3,&cf_failedtodecodeCFError);
          uVar3 = 1;
        }
        else {
          uVar3 = _CFErrorGetCode(p_Var7);
          _AMRLog(7,&cf_devicereturnedCFErrorwithcode_d,uVar3);
          _AMRLog(3,&cf_dumpingCFErrorreturnedbyrestored_);
          _dumpError(p_Var7);
        }
      }
    }
    else {
      uVar3 = 0;
      _AMRLog(7,&cf_devicereturnedsuccess);
LAB_000d5b3e:
      p_Var7 = (__CFError *)0x0;
    }
  }
  if (0xc < *(int *)(lVar1 + 0x130)) {
    local_38 = param_2;
    lVar5 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar5 == 0) {
      _AMRLog(3,&cf_Failedtoallocatefinalresponsedictionary);
      param_2 = local_38;
    }
    else {
      _CFDictionarySetValue(lVar5,&cf_MsgType,&cf_ReceivedFinalStatusMsg);
      _CFDictionarySetValue(lVar5,&cf_WillSendEOF,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
      _AMRLog(7,&cf_Sendingacknowledgementthatfinalstatuswasreceived);
      iVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar5);
      if (iVar4 != 0) {
        _AMRLog(3,&cf_Failedtosendfinalstatusacknowledgement_error__d,iVar4);
      }
      _CFRelease(lVar5);
      param_2 = local_38;
    }
  }
  lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_WillSendEOF);
  (**(code **)(**(long **)(lVar1 + 0x70) + 0x20 +
              (ulong)(lVar5 != *(long *)PTR__kCFBooleanTrue_00441110) * 8))();
  if (uVar3 != 0) {
    lVar5 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Log);
    if (lVar5 == 0) {
      _AMRLog(3,&cf_devicerestoreoutputunavailable);
    }
    else {
      iVar4 = _AMRestoreIsScrubbingEnabled();
      if (iVar4 == 0) {
        uVar6 = _CFRetain(lVar5);
        *(undefined8 *)(lVar1 + 0x120) = uVar6;
      }
      else {
        uVar6 = __AMRestoreCreateScrubbedLog(*(undefined8 *)(lVar1 + 0x110),lVar5,_AMRLog);
        *(undefined8 *)(lVar1 + 0x120) = uVar6;
        _AMRLog(3,&cf_____devicerestoreoutput__________endofdevicerestoreoutput____,uVar6);
      }
    }
    if (param_2 != (__CFError **)0x0) {
      if (p_Var7 == (__CFError *)0x0) {
        p_Var7 = (__CFError *)
                 _CFErrorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                                &cf_AMRestoreErrorDomain,(long)(int)uVar3,0);
      }
      *param_2 = p_Var7;
      goto LAB_000d5e77;
    }
  }
  if (p_Var7 != (__CFError *)0x0) {
    _CFRelease(p_Var7);
  }
LAB_000d5e77:
  return uVar3 == 0;
}

