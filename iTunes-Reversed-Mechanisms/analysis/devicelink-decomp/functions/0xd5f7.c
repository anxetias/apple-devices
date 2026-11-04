// rea decompile_all
// name: __copyMobileDeviceValue
// address: 0xd5f7
// body: available
// range: 0xd5f7-0xd83a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __copyMobileDeviceValue
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               char param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  uint uVar7;
  
  if (param_4 == (undefined8 *)0x0) {
    cVar1 = _DLShouldLog(3);
    uVar2 = 0xe8000007;
    if (cVar1 == '\0') {
      return 0xe8000007;
    }
    pcVar6 = &cf_PassedinvaluepointerisNULL;
LAB_0000d6a6:
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
            ,"_copyMobileDeviceValue",3,pcVar6);
  }
  else {
    uVar2 = _AMDeviceConnect();
    if (uVar2 != 0) {
      lVar4 = _AMDCopyErrorText(uVar2);
      cVar1 = _DLShouldLog(3);
      if (cVar1 != '\0') {
        uVar7 = uVar2 & 0x17ffffff;
        pcVar6 = &cf_Couldnotconnecttoattacheddevice_____d_;
        goto LAB_0000d660;
      }
      goto LAB_0000d66f;
    }
    if (param_5 == '\0') {
      uVar5 = _AMDeviceCopyValue(param_1,param_2,param_3);
      *param_4 = uVar5;
LAB_0000d741:
      uVar2 = _AMDeviceDisconnect(param_1);
      if (uVar2 == 0) {
        return 0;
      }
      lVar4 = _AMDCopyErrorText(uVar2);
      cVar1 = _DLShouldLog(3);
      if (cVar1 != '\0') {
        uVar7 = uVar2 & 0x17ffffff;
        pcVar6 = &cf_Couldnotdisconnectfromtheattacheddevice_____d_;
LAB_0000d660:
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
                ,"_copyMobileDeviceValue",3,pcVar6,lVar4,uVar7);
      }
    }
    else {
      iVar3 = _AMDeviceIsPaired();
      if (iVar3 == 0) {
        _AMDeviceDisconnect(param_1);
        cVar1 = _DLShouldLog(3);
        uVar2 = 0xe8000025;
        if (cVar1 == '\0') {
          return 0xe8000025;
        }
        pcVar6 = &cf_Attempttocopyavaluefromanunpaireddevice_Cowardlyrefusingtodoso_;
        goto LAB_0000d6a6;
      }
      uVar2 = _AMDeviceStartSession(param_1);
      if (uVar2 == 0) {
        uVar5 = _AMDeviceCopyValue(param_1,param_2,param_3);
        *param_4 = uVar5;
        uVar2 = _AMDeviceStopSession(param_1);
        if (uVar2 == 0) goto LAB_0000d741;
        _AMDeviceDisconnect(param_1);
        lVar4 = _AMDCopyErrorText(uVar2);
        cVar1 = _DLShouldLog(3);
        if (cVar1 != '\0') {
          uVar7 = uVar2 & 0x17ffffff;
          pcVar6 = &cf_Couldnotstopsessionwithdevice_____d_;
          goto LAB_0000d660;
        }
      }
      else {
        _AMDeviceDisconnect(param_1);
        lVar4 = _AMDCopyErrorText(uVar2);
        cVar1 = _DLShouldLog(3);
        if (cVar1 != '\0') {
          uVar7 = uVar2 & 0x17ffffff;
          pcVar6 = &cf_Couldnotstartsessionwithdevice_____d_;
          goto LAB_0000d660;
        }
      }
    }
LAB_0000d66f:
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
  }
  return uVar2;
}

