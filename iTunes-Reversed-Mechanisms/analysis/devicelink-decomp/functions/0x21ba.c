// rea decompile_all
// name: __DLCreateMessageDataWithArgs
// address: 0x21ba
// body: available
// range: 0x21ba-0x23aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __DLCreateMessageDataWithArgs(undefined8 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  long local_30;
  
  local_30 = 0;
  lVar3 = _CFArrayCreateMutable(0,(long)(param_2 + 1),PTR__kCFTypeArrayCallBacks_00015048);
  _CFArrayAppendValue(lVar3,param_1);
  if (0 < param_2) {
    do {
      uVar1 = *param_3;
      if ((ulong)uVar1 < 0x29) {
        plVar4 = (long *)((ulong)uVar1 + *(long *)(param_3 + 4));
        *param_3 = uVar1 + 8;
      }
      else {
        plVar4 = *(long **)(param_3 + 2);
        *(long **)(param_3 + 2) = plVar4 + 1;
      }
      pcVar8 = &cf____EmptyParameterString___;
      if ((cfstringStruct *)*plVar4 != (cfstringStruct *)0x0) {
        pcVar8 = (cfstringStruct *)*plVar4;
      }
      _CFArrayAppendValue(lVar3,pcVar8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  lVar5 = _CFWriteStreamCreateWithAllocatedBuffers(0,0);
  if ((lVar5 == 0) || (cVar2 = _CFWriteStreamOpen(lVar5), cVar2 == '\0')) {
    cVar2 = _DLShouldLog(3);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLCreateMessageDataWithArgs",3,&cf_Couldnotopenstreamforwritingmessagedata);
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
  }
  else {
    cVar2 = _CFPropertyListIsValid(lVar3,200);
    if (cVar2 != '\0') {
      lVar6 = _CFPropertyListWriteToStream(lVar3,lVar5,200,&local_30);
      _CFRelease(lVar3);
      if (lVar6 == 0) {
        cVar2 = _DLShouldLog(3);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"_DLCreateMessageDataWithArgs",3,
                  &cf_Couldnotwritepropertylisttomessagedatastream_____,local_30);
        }
        if (local_30 != 0) {
          _CFRelease();
          local_30 = 0;
        }
        uVar7 = 0;
      }
      else {
        uVar7 = _CFWriteStreamCopyProperty
                          (lVar5,*(undefined8 *)PTR__kCFStreamPropertyDataWritten_00015040);
      }
      _CFWriteStreamClose(lVar5);
      _CFRelease(lVar5);
      return uVar7;
    }
    cVar2 = _DLShouldLog(3);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLCreateMessageDataWithArgs",3,&cf_Plistisnotvalid___,lVar3);
    }
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return 0;
}

