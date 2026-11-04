// rea decompile_all
// name: __DLHandlerThreadEntryPoint
// address: 0x83ed
// body: available
// range: 0x83ed-0x84a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __DLHandlerThreadEntryPoint(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _CFStringCreateWithFormat
                    (0,0,&cf______,*(undefined8 *)(param_1 + 0x48),&cf_HandlerMessagePort);
  uVar3 = _DLThreadCreateReceivePort(lVar2,param_1,0xf5c);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  uVar3 = _DLThreadCreateSendPort(lVar2);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  _DLThreadAddMessagePortToRunloop(*(undefined8 *)(param_1 + 0x58));
  _DLSignal(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),param_1 + 0x90);
  _DLThreadRun();
  cVar1 = _DLShouldLog(5);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLHandlerThreadEntryPoint",5,&cf_Handlerthreadexitedrunloop);
  }
  return 0;
}

