// rea decompile_all
// name: _DLDevicePair
// address: 0xdb97
// body: available
// range: 0xdb97-0xdc74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLDevicePair(long param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = _AMDeviceConnect(*(undefined8 *)(param_1 + 0x10));
  if (uVar2 == 0) {
    uVar2 = _AMDevicePair(*(undefined8 *)(param_1 + 0x10));
    _AMDeviceDisconnect(*(undefined8 *)(param_1 + 0x10));
    if (uVar2 == 0) {
      return 0;
    }
    lVar3 = _AMDCopyErrorText(uVar2);
    cVar1 = _DLShouldLog(3);
    if (cVar1 == '\0') goto LAB_0000dc56;
    pcVar4 = &cf_Couldnotpairthroughlockdown_____d_;
  }
  else {
    lVar3 = _AMDCopyErrorText(uVar2);
    cVar1 = _DLShouldLog(3);
    if (cVar1 == '\0') goto LAB_0000dc56;
    pcVar4 = &cf_Couldnotconnectthroughlockdown_____d_;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
          ,"DLDevicePair",3,pcVar4,lVar3,uVar2 & 0x17ffffff);
LAB_0000dc56:
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return 0xffffffff;
}

