// rea decompile_all
// name: ___thr_AMRestorableDeviceLogMessageData
// address: 0x161e23
// body: available
// range: 0x161e23-0x1620fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1620b8 to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1620c9 to 0x16f42d _AMRSafePrintLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceLogMessageData(long *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  
  lVar5 = _gRestorableData;
  if (param_1 == (long *)0x0) {
    _AMRSafePrintLogAndRelease(3,&cf_Can_thandlelogmessagewithoutargs);
    return;
  }
  if (param_1[2] == 0) {
    pcVar7 = &cf_Can_tforwardnillogdata;
LAB_001620de:
    lVar5 = 0;
  }
  else {
    if (_gRestorableData == 0) {
      pcVar7 = &cf_Can_thandlelogmessagewithoutglobaldata;
      goto LAB_001620de;
    }
    if ((*param_1 != 0) && (lVar6 = *(long *)(*param_1 + 0x20), lVar6 != 0)) {
      *(undefined1 *)(lVar6 + 0x10) = 0;
    }
    lVar5 = *(long *)(lVar5 + 0xa8);
    if (lVar5 == 0) {
      pcVar7 = (cfstringStruct *)0x0;
    }
    else {
      uVar3 = _CFDataGetBytePtr(param_1[2]);
      uVar4 = _CFDataGetLength(param_1[2]);
      lVar5 = _CFWriteStreamWrite(lVar5,uVar3,uVar4);
      pcVar7 = (cfstringStruct *)0x0;
      if (lVar5 == -1) {
        pcVar7 = &cf_Failedtowriteintogloballogfile;
      }
    }
    lVar5 = *param_1;
    if (lVar5 == 0) {
LAB_00162047:
      lVar5 = 0;
LAB_0016204a:
      if (pcVar7 == (cfstringStruct *)0x0) goto LAB_0016205c;
    }
    else {
      cVar2 = _CFEqual(param_1[1],&cf_DeviceLogType);
      if (cVar2 != '\0') {
        __AMRestorableDeviceWatcherResetTimer(*(undefined8 *)(lVar5 + 0xa0));
      }
      lVar5 = *param_1;
      if (*(long *)(lVar5 + 0x48) == 0) goto LAB_00162047;
      lVar6 = param_1[1];
      lVar1 = param_1[2];
      _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(lVar5 + 0x88),0xffffffffffffffff);
      lVar6 = _CFDictionaryGetValue(*(undefined8 *)(lVar5 + 0x80),lVar6);
      if ((lVar6 != 0) && (lVar6 = _CFDictionaryGetValue(lVar6,&cf_WriteStream), lVar6 != 0)) {
        uVar3 = _CFDataGetBytePtr(lVar1);
        uVar4 = _CFDataGetLength(lVar1);
        lVar6 = _CFWriteStreamWrite(lVar6,uVar3,uVar4);
        if (lVar6 == -1) {
          pcVar7 = &cf_F;
        }
      }
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(lVar5 + 0x88));
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
      cVar2 = *(char *)(_gRestorableData + 0xa0);
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
      if (cVar2 != '\x01') goto LAB_00162047;
      lVar5 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,2,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar5 == 0) {
        pcVar7 = &cf_Failedtocreatemutabledictionaryfromproxydictionary;
        goto LAB_001620de;
      }
      _CFDictionaryAddValue(lVar5,&cf_Status,&cf_Restoring);
      _CFDictionaryAddValue(lVar5,&cf_LogData,param_1[2]);
      _CFDictionaryAddValue(lVar5,&cf_LogDataType,param_1[1]);
      lVar6 = *param_1;
      lVar6 = __AMRestorableEventDataExtendedCreate
                        (100,lVar6,lVar5,0,0,*(undefined8 *)(lVar6 + 0x48),
                         *(undefined8 *)(lVar6 + 0x58));
      if (lVar6 != 0) {
        __AMRestorableDispatchStatusEvent(lVar6,0);
        goto LAB_0016204a;
      }
      pcVar7 = &cf_Failedtocreateneweventforstatusupdate;
    }
  }
  _AMRSafePrintLogAndRelease(3,pcVar7);
LAB_0016205c:
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if ((*param_1 != 0) &&
     ((lVar5 = *(long *)(*param_1 + 0x20), lVar5 == 0 ||
      (*(undefined1 *)(lVar5 + 0x10) = 1, *param_1 != 0)))) {
    _CFRelease();
  }
  if (param_1[2] != 0) {
    _CFRelease();
  }
  if (param_1[1] != 0) {
    _CFRelease();
  }
  _free(param_1);
  return;
}

