// rea decompile_all
// name: __AMRestorableDeviceNotifyStatusInfoChanged
// address: 0x1602fc
// body: available
// range: 0x1602fc-0x160587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16052e to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceNotifyStatusInfoChanged
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  long local_38;
  
  local_44 = 0;
  local_50 = param_2;
  local_4c = param_3;
  local_48 = param_4;
  if (param_1 == 0) {
    pcVar7 = &cf_Can_tsetoperationwithNULLdevice;
LAB_0016051b:
    _AMRSafeLogAndRelease(3,pcVar7);
    return;
  }
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar2 = _CFDictionaryCreateMutable
                    (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    pcVar7 = &cf_Failedtocreateinfodictionaryforoperationchange;
    goto LAB_0016051b;
  }
  local_40 = _CFNumberCreate(uVar1,9,&local_50);
  if (local_40 == 0) {
    pcVar7 = &cf_FailedtocreateoperationCFNumber;
    local_40 = 0;
LAB_0016054b:
    local_38 = 0;
LAB_0016055c:
    lVar3 = 0;
LAB_00160568:
    lVar4 = 0;
  }
  else {
    local_38 = _CFNumberCreate(uVar1,9,&local_4c);
    if (local_38 == 0) {
      pcVar7 = &cf_FailedtocreateprogressCFNumber;
      goto LAB_0016054b;
    }
    lVar3 = _CFNumberCreate(uVar1,9);
    if (lVar3 == 0) {
      pcVar7 = &cf_FailedtocreateoverallprogressCFNumber;
      goto LAB_0016055c;
    }
    lVar4 = _CFNumberCreate(uVar1,9,&local_48);
    if (lVar4 == 0) {
      pcVar7 = &cf_Failedtocreatepositionnumber;
      goto LAB_00160568;
    }
    local_44 = __AMDeviceProxyGetState(*(undefined8 *)(param_1 + 0x20));
    lVar5 = _CFNumberCreate(uVar1,9);
    if (lVar5 != 0) {
      _CFDictionarySetValue(lVar2,&cf_Operation,local_40);
      _CFDictionarySetValue(lVar2,&cf_Progress,local_38);
      _CFDictionarySetValue(lVar2,&cf_OverallProgress,lVar3);
      _CFDictionarySetValue(lVar2,&cf_Status,&cf_Restoring);
      _CFDictionarySetValue(lVar2,&cf_QueuePosition,lVar4);
      _CFDictionarySetValue(lVar2,&cf_DeviceState,lVar5);
      lVar6 = __AMRestorableEventDataExtendedCreate
                        (100,param_1,lVar2,0,0,*(undefined8 *)(param_1 + 0x48),
                         *(undefined8 *)(param_1 + 0x58));
      if (lVar6 == 0) {
        pcVar7 = &cf_Failedtocreateeventtodelivertoclient;
      }
      else {
        pcVar7 = (cfstringStruct *)0x0;
        __AMRestorableDispatchStatusEvent(lVar6,0);
      }
      goto LAB_001604a4;
    }
    pcVar7 = &cf_Failedtocreatedevicestatenumber;
  }
  lVar5 = 0;
LAB_001604a4:
  _AMRSafeLogAndRelease(3,pcVar7);
  _CFRelease(lVar2);
  if (local_40 != 0) {
    _CFRelease();
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return;
}

