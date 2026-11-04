// rea decompile_all
// name: _createEncryptedData
// address: 0xb9d9
// body: available
// range: 0xb9d9-0xbc0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _createEncryptedData(long param_1,long param_2,long param_3)

{
  char cVar1;
  CCCryptorStatus CVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  size_t sVar6;
  long lVar7;
  void *dataOut;
  size_t local_38;
  
  if (param_1 == 0 || param_2 == 0) {
    cVar1 = _DLLoggingEnabled(3);
    if ((cVar1 != '\0') || (cVar1 = _DLOutputEnabled(3), cVar1 != '\0')) {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
              ,"createEncryptedData",3,&cf_Cannotencryptwithoutakeyordata_);
    }
  }
  else {
    local_38 = 0;
    pvVar3 = (void *)_CFDataGetBytePtr(param_2);
    if (param_3 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)_CFDataGetBytePtr(param_3);
    }
    pvVar5 = (void *)_CFDataGetBytePtr(param_1);
    sVar6 = _CFDataGetLength();
    CVar2 = _CCCrypt(0,0,1,pvVar3,0x20,pvVar4,pvVar5,sVar6,(void *)0x0,0,&local_38);
    if (((CVar2 != -0x10cd) && (lVar7 = _CFDataGetLength(param_1), lVar7 != 0)) &&
       ((cVar1 = _DLLoggingEnabled(3), cVar1 != '\0' || (cVar1 = _DLOutputEnabled(3), cVar1 != '\0')
        ))) {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
              ,"createEncryptedData",3,
              &cf_Woah_CCCryptwasokwitha0lengthbufferfortheencrypteddata_Somethingisgoingwrong_);
    }
    pvVar4 = (void *)0x0;
    lVar7 = _CFDataCreateMutable(0,local_38);
    _CFDataSetLength(lVar7);
    pvVar3 = (void *)_CFDataGetBytePtr(param_2);
    if (param_3 != 0) {
      pvVar4 = (void *)_CFDataGetBytePtr(param_3);
    }
    pvVar5 = (void *)_CFDataGetBytePtr(param_1);
    sVar6 = _CFDataGetLength(param_1);
    dataOut = (void *)_CFDataGetMutableBytePtr();
    CVar2 = _CCCrypt(0,0,1,pvVar3,0x20,pvVar4,pvVar5,sVar6,dataOut,local_38,&local_38);
    _CFDataSetLength(lVar7,local_38);
    if (CVar2 == 0) {
      return lVar7;
    }
    cVar1 = _DLLoggingEnabled(3);
    if ((cVar1 != '\0') || (cVar1 = _DLOutputEnabled(3), cVar1 != '\0')) {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
              ,"createEncryptedData",3,&cf_Couldnotencryptdata__d,CVar2);
    }
    if (lVar7 != 0) {
      _CFRelease(lVar7);
    }
  }
  return 0;
}

