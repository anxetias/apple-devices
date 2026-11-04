// rea decompile_all
// name: _DLDeviceWaitForAttachedDevice
// address: 0xe44a
// body: available
// range: 0xe44a-0xe5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _DLDeviceWaitForAttachedDevice(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  double local_48;
  char local_31;
  
  if (param_3 == 0 || param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if ((param_1 == 0.0) && (!NAN(param_1))) {
      local_31 = '\0';
      lVar3 = _CFPreferencesGetAppIntegerValue(&cf_DLWaitTimeout,&cf_com_apple_DeviceLink,&local_31)
      ;
      if (local_31 == '\0') {
        param_1 = 10.0;
      }
      else {
        param_1 = (double)lVar3;
      }
    }
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      __DLLog(param_1,
              "/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
              ,"DLDeviceWaitForAttachedDevice",6,
              &cf_Startingrunlooptosearchfordevice___Runningfor_fsatmost,param_3);
    }
    dVar6 = (double)_CFAbsoluteTimeGetCurrent();
    local_48 = (double)_CFAbsoluteTimeGetCurrent();
    dVar7 = (double)_CFAbsoluteTimeGetCurrent();
    if (param_1 + dVar6 <= dVar7) {
      lVar3 = 0;
    }
    else {
      uVar1 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_00015038;
      lVar3 = 0;
      do {
        lVar4 = _DLDeviceGetWithUDID(param_2,param_3);
        if (lVar4 != lVar3) {
          local_48 = (double)_CFAbsoluteTimeGetCurrent();
          lVar3 = lVar4;
        }
        if ((lVar3 != 0) && (dVar7 = (double)_CFAbsoluteTimeGetCurrent(), 0.1 < dVar7 - local_48))
        break;
        _CFRunLoopRunInMode(0x3f847ae147ae147b,uVar1,1);
        dVar7 = (double)_CFAbsoluteTimeGetCurrent();
      } while (dVar7 < param_1 + dVar6);
    }
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      pcVar5 = "";
      if (lVar3 == 0) {
        pcVar5 = " NOT";
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
              ,"DLDeviceWaitForAttachedDevice",6,&cf_Runloopfinished_Adevicewas_sfound_,pcVar5);
    }
  }
  return lVar3;
}

