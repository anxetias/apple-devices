// rea decompile_all
// name: __DLUploadFilesToComputer
// address: 0x7a62
// body: available
// range: 0x7a62-0x7c9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLUploadFilesToComputer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_90 [9];
  int local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  
  __DLBulkOperationContextInit(local_90,param_1,param_2,param_3,param_4,param_5);
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLUploadFilesToComputer",6,&cf_UploadFiles________bytes,param_5);
  }
  while( true ) {
    if ((local_48 != 0) && (local_48 != -0xd)) goto LAB_00007c50;
    lVar2 = __DLHandlerThreadReadMessage(param_1);
    if (lVar2 == 0) {
      if ((local_48 == 0) || (local_48 == -0xd)) {
        local_48 = -1;
        if (local_40 != (cfstringStruct *)0x0) {
          _CFRelease();
        }
        local_40 = &cf_Errorreadingfrompathdata;
      }
      goto LAB_00007c50;
    }
    lVar3 = _CFDataGetLength(lVar2);
    if (lVar3 == 0) goto LAB_00007c4b;
    lVar3 = _DLCreateStringFromData(lVar2);
    if (lVar3 == 0) {
      if ((local_48 == 0) || (local_48 == -0xd)) {
        local_48 = -1;
        if (local_40 != (cfstringStruct *)0x0) {
          _CFRelease();
        }
        local_40 = &cf_Errorcreatingfrompath;
      }
      goto LAB_00007c4b;
    }
    lVar4 = __DLHandlerThreadReadMessage(param_1);
    if (lVar4 == 0) {
      if ((local_48 == 0) || (local_48 == -0xd)) {
        local_48 = -1;
        if (local_40 != (cfstringStruct *)0x0) {
          _CFRelease();
        }
        local_40 = &cf_Errorreadingtopathdata;
      }
      goto LAB_00007c40;
    }
    lVar5 = _DLCreateStringFromData(lVar4);
    if (lVar5 == 0) break;
    __DLUploadFileToComputer(local_90,lVar3,lVar5);
    _CFRelease(lVar2);
    _CFRelease(lVar4);
    _CFRelease(lVar3);
    _CFRelease(lVar5);
  }
  if ((local_48 == 0) || (local_48 == -0xd)) {
    local_48 = -1;
    if (local_40 != (cfstringStruct *)0x0) {
      _CFRelease();
    }
    local_40 = &cf_Errorcreatingtopath;
  }
  _CFRelease(lVar2);
  lVar2 = lVar4;
LAB_00007c40:
  _CFRelease(lVar2);
  lVar2 = lVar3;
LAB_00007c4b:
  _CFRelease(lVar2);
LAB_00007c50:
  __DLSendStatusResponse(local_90[0],local_48,local_40,local_38);
  if ((local_48 == 0) || (local_48 == -0xd)) {
    __DLUpdateProgress(param_1,param_4);
  }
  __DLBulkOperationContextDealloc(local_90);
  return;
}

