// rea decompile_all
// name: __beginSync
// address: 0xbfda3
// body: available
// range: 0xbfda3-0xbffa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__beginSync(long param_1,long param_2,undefined8 param_3,char param_4,char param_5,code *param_6,
           undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_34;
  
  uVar1 = 3;
  if (((param_2 != 0 && param_1 != 0) && (uVar1 = 2, _sHelperPath != '\0')) &&
     (_sSyncerPathString != 0)) {
    uVar2 = _ProcessLinkSetupParent(&_sHelperPath,0);
    lVar3 = _CFStringCreateWithFormat(0,0,&cf_com_apple_MobileSync___,param_2);
    uVar1 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
    if (param_4 == '\0') {
      uVar1 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
    }
    uVar7 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
    if (param_5 == '\0') {
      uVar7 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
    }
    uVar1 = __createDictionaryWithRequestAndArgKeysAndValues
                      (&cf_AMSBeginSyncRequest,6,&cf_AMSDeviceIdentifierKey,param_1,
                       &cf_AMSTargetIdentifierKey,param_2,&cf_AMSSyncToolPathKey,_sSyncerPathString,
                       &cf_AMSDataClassNamesKey,param_3,&cf_AMSResetDataClassesKey,uVar1,
                       &cf_AMSClearDataClassesKey,uVar7);
    _AMSProcessLinkSendMessageAsync(uVar2,uVar1);
    _CFRelease(uVar1);
    do {
      local_34 = 0;
      lVar4 = _AMSProcessLinkReadMessageFromChild(uVar2);
      if (lVar4 == 0) {
        pcVar5 = &cf_ProgressSyncCompleted;
        uVar1 = 0;
      }
      else {
        pcVar5 = (cfstringStruct *)_CFDictionaryGetValue(lVar4,&cf_AMSStatus);
        uVar1 = _CFDictionaryGetValue(lVar4,&cf_AMSDataClassNameKey);
        if (pcVar5 == (cfstringStruct *)0x0) {
          pcVar5 = &cf_ProgressSyncCompleted;
        }
        lVar6 = _CFDictionaryGetValue(lVar4,&cf_errorCode);
        if (lVar6 != 0) {
          _CFNumberGetValue(lVar6,9,&local_34);
        }
      }
      if (param_6 != (code *)0x0) {
        (*param_6)(param_2,lVar3,pcVar5,uVar1,local_34,param_7);
      }
      lVar6 = _CFStringCompare(pcVar5,&cf_ProgressSyncCompleted,0);
      if (lVar4 != 0) {
        _CFRelease(lVar4);
      }
    } while (lVar6 != 0);
    if (lVar3 != 0) {
      _CFRelease();
    }
    _AMSProcessLinkRelease(uVar2);
    uVar1 = 0;
  }
  return uVar1;
}

