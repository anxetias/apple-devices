// rea decompile_all
// name: __DLCopyItemOnComputer
// address: 0x798f
// body: available
// range: 0x798f-0x7a61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLCopyItemOnComputer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined1 local_78 [56];
  undefined8 local_40;
  long local_38;
  
  local_38 = 0;
  local_40 = param_5;
  __DLOperationProgressContextInit(local_78,param_1,param_4,param_5,param_6);
  iVar2 = ___DLCopyItemOnComputer(param_2,param_3,local_78,&local_38);
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLCopyItemOnComputer",6,&cf_CopyItem_____________d__,param_2,param_3,iVar2,local_38);
  }
  __DLSendStatusResponse(param_1,iVar2,local_38,0);
  if (iVar2 == 0) {
    __DLUpdateProgress(param_1,local_40);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  return;
}

