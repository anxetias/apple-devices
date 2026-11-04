// rea decompile_all
// name: _DLThreadCreateReceivePort
// address: 0xa174
// body: available
// range: 0xa174-0xa27f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _DLThreadCreateReceivePort(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char local_29;
  
  local_29 = '\0';
  puStack_50 = _calloc(0x10,1);
  *puStack_50 = param_2;
  puStack_50[1] = param_3;
  local_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  pcVar2 = (cfstringStruct *)_DLGetUniqueProcessName();
  pcVar5 = &cf_default;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar5 = pcVar2;
  }
  uVar3 = _CFStringCreateWithFormat(0,0,&cf_com_apple_DeviceLink______,pcVar5,param_1);
  lVar4 = _CFMessagePortCreateLocal(0,uVar3,__DeviceLinkThreadMessageCallback,&local_58,&local_29);
  if ((lVar4 == 0) || (local_29 == '\x01')) {
    cVar1 = _DLShouldLog(3);
    if (cVar1 == '\0') {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkThread.c"
              ,"DLThreadCreateReceivePort",3,&cf_Can_tcreatemessageportfor______,param_1,uVar3);
    }
  }
  else {
    _CFMessagePortSetInvalidationCallBack(lVar4,__DeviceLinkThreadPortInvalidationCallback);
  }
  _CFRelease(uVar3);
  return lVar4;
}

