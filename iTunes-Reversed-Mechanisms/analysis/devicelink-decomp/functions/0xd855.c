// rea decompile_all
// name: __setMobileDeviceValue
// address: 0xd855
// body: available
// range: 0xd855-0xdaff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __setMobileDeviceValue(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  uint uVar6;
  
  uVar2 = _AMDeviceConnect();
  if (uVar2 == 0) {
    iVar3 = _AMDeviceIsPaired(param_1);
    if (iVar3 == 0) {
      _AMDeviceDisconnect(param_1);
      cVar1 = _DLShouldLog(3);
      if (cVar1 == '\0') {
        return 0xe8000025;
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
              ,"_setMobileDeviceValue",3,
              &cf_Attempttosetavalueonanunpaireddevice_Cowardlyrefusingtodoso_);
      return 0xe8000025;
    }
    uVar2 = _AMDeviceStartSession(param_1);
    if (uVar2 == 0) {
      if (param_4 == 0) {
        uVar2 = _AMDeviceRemoveValue(param_1,param_2,param_3);
        if (uVar2 == 0) goto LAB_0000da40;
        _AMDeviceDisconnect(param_1);
        lVar4 = _AMDCopyErrorText(uVar2);
        cVar1 = _DLShouldLog(3);
        if (cVar1 == '\0') goto LAB_0000d8c0;
        uVar6 = uVar2 & 0x17ffffff;
        pcVar5 = &cf_Couldnotremoveavalueonthedevice_____d_;
      }
      else {
        uVar2 = _AMDeviceSetValue();
        if (uVar2 == 0) {
LAB_0000da40:
          uVar2 = _AMDeviceStopSession(param_1);
          uVar6 = _AMDeviceDisconnect(param_1);
          if (uVar2 == 0) {
            if (uVar6 == 0) {
              return 0;
            }
            lVar4 = _AMDCopyErrorText(uVar6);
            cVar1 = _DLShouldLog(3);
            if (cVar1 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
                      ,"_setMobileDeviceValue",3,&cf_Couldnotdisconnectfromtheattacheddevice_____d_,
                      lVar4,uVar6 & 0x17ffffff);
            }
            if (lVar4 == 0) {
              return uVar6;
            }
            _CFRelease(lVar4);
            return uVar6;
          }
          lVar4 = _AMDCopyErrorText(uVar2);
          cVar1 = _DLShouldLog(3);
          if (cVar1 == '\0') goto LAB_0000d8c0;
          uVar6 = uVar2 & 0x17ffffff;
          pcVar5 = &cf_Couldnotstopsessionwithdevice_____d_;
        }
        else {
          _AMDeviceDisconnect(param_1);
          lVar4 = _AMDCopyErrorText(uVar2);
          cVar1 = _DLShouldLog(3);
          if (cVar1 == '\0') goto LAB_0000d8c0;
          uVar6 = uVar2 & 0x17ffffff;
          pcVar5 = &cf_Couldnotsetavalueonthedevice_____d_;
        }
      }
    }
    else {
      _AMDeviceDisconnect(param_1);
      lVar4 = _AMDCopyErrorText(uVar2);
      cVar1 = _DLShouldLog(3);
      if (cVar1 == '\0') goto LAB_0000d8c0;
      uVar6 = uVar2 & 0x17ffffff;
      pcVar5 = &cf_Couldnotstartsessionwithdevice_____d_;
    }
  }
  else {
    lVar4 = _AMDCopyErrorText(uVar2);
    cVar1 = _DLShouldLog(3);
    if (cVar1 == '\0') goto LAB_0000d8c0;
    uVar6 = uVar2 & 0x17ffffff;
    pcVar5 = &cf_Couldnotconnecttoattacheddevice_____d_;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
          ,"_setMobileDeviceValue",3,pcVar5,lVar4,uVar6);
LAB_0000d8c0:
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return uVar2;
}

