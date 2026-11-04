// rea decompile_all
// name: _DLConnectToServiceOnDeviceWithOptions
// address: 0xe7d6
// body: available
// range: 0xe7d6-0xe928 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_DLConnectToServiceOnDeviceWithOptions
          (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xe8000007;
  if (param_2 != 0 && param_1 != 0) {
    cVar1 = _DLShouldLog(6);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
              ,"DLConnectToServiceOnDeviceWithOptions",6,&cf_Connectingtolockdownservice__,param_3);
    }
    uVar4 = 0;
    lVar3 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_00015008,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                       PTR__kCFTypeDictionaryValueCallBacks_00015058);
    _CFDictionarySetValue(lVar3,&cf_DLInfoStreamTypeKey,&cf_DLInfoStreamTypeTCP);
    _CFDictionarySetValue(lVar3,&cf_DLInfoServiceNameKey,param_3);
    if (param_4 != 0) {
      _CFDictionarySetValue(lVar3,&cf_DLInfoLockdownOptions);
    }
    _CFDictionarySetValue(lVar3,&cf_DLInfoMobileDeviceRefKey,*(undefined8 *)(param_2 + 0x10));
    iVar2 = _DLConnect(param_1,lVar3,param_5);
    if (iVar2 != 0) {
      cVar1 = _DLShouldLog(3);
      uVar4 = 0xe8000001;
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
                ,"DLConnectToServiceOnDeviceWithOptions",3,&cf_Couldnotconnecttodevice___,param_5);
      }
    }
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
  }
  return uVar4;
}

