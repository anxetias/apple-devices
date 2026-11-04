// rea decompile_all
// name: _DLDeviceValidatePairing
// address: 0xd419
// body: available
// range: 0xd419-0xd4ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _DLDeviceValidatePairing(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (param_1 != 0) {
    uVar2 = _AMDeviceConnect(*(undefined8 *)(param_1 + 0x10));
    if (uVar2 == 0) {
      uVar3 = _AMDeviceValidatePairing(*(undefined8 *)(param_1 + 0x10));
      _AMDeviceDisconnect(*(undefined8 *)(param_1 + 0x10));
      return uVar3;
    }
    lVar4 = _AMDCopyErrorText(uVar2);
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
              ,"DLDeviceValidatePairing",3,&cf_Couldnotconnecttodevice_____d_,lVar4,
              uVar2 & 0x17ffffff);
    }
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
  }
  return 0;
}

