// rea decompile_all
// name: __DLCreateDeviceLinkConnection
// address: 0x2734
// body: available
// range: 0x2734-0x2a95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
__DLCreateDeviceLinkConnection
          (undefined8 param_1,char param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  size_t sVar7;
  char local_31;
  
  local_31 = '\0';
  cVar1 = _CFPreferencesGetAppBooleanValue(&cf_SaveCallHistory,&cf_com_apple_DeviceLink,&local_31);
  if ((local_31 == '\x01') && (cVar1 == '\x01')) {
    cVar1 = _DLShouldLog(4);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLCreateDeviceLinkConnection",4,&cf_TurningoncallhistoryforDeviceLink);
    }
    _sSaveCallHistory = 1;
    _sCallHistoryMutex = _DLCreateMutex();
  }
  if (*param_3 == 0) {
    *param_3 = 0x8e0;
  }
  if (param_3[1] == 0) {
    param_3[1] = 0x978;
  }
  if (param_3[2] == 0) {
    param_3[2] = 0x9ae;
  }
  if (param_3[3] == 0) {
    param_3[3] = 0xa0c;
  }
  if (param_3[4] == 0) {
    param_3[4] = 0xa6a;
  }
  if (param_3[5] == 0) {
    param_3[5] = 0xab2;
  }
  if (param_3[6] == 0) {
    param_3[6] = 0xb04;
  }
  if (param_3[7] == 0) {
    param_3[7] = 0xb7b;
  }
  if (param_3[8] == 0) {
    param_3[8] = 0xe0f;
  }
  if (param_3[9] == 0) {
    param_3[9] = 0xd8a;
  }
  puVar3 = _calloc(0xd0,1);
  *puVar3 = 0;
  puVar3[5] = param_3;
  puVar3[1] = param_4;
  puVar3[2] = param_5;
  *(undefined1 *)((long)puVar3 + 0x92) = 1;
  if (param_2 == '\0') {
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    uVar4 = _CFRunLoopSourceCreate(0,0);
    puVar3[0xe] = uVar4;
    uVar4 = _CFRunLoopGetCurrent();
    _CFRunLoopAddSource(uVar4,puVar3[0xe],*(undefined8 *)PTR__kCFRunLoopCommonModes_00015030);
LAB_000029ec:
    uVar4 = _CFNumberCreate(0,0xd);
    puVar3[0x14] = uVar4;
    uVar4 = _CFNumberCreate(0,9);
    puVar3[0x15] = uVar4;
    lVar5 = _CFPreferencesGetAppIntegerValue(&cf_BufferSize,&cf_com_apple_DeviceLink,0);
    sVar7 = 0x8001;
    if (lVar5 != 0) {
      sVar7 = lVar5 + 1;
    }
    puVar3[0x17] = sVar7;
    pvVar6 = _malloc(sVar7);
    puVar3[0x16] = pvVar6;
  }
  else {
    puVar3[0xe] = 0;
    uVar4 = _CFRetain(param_1);
    puVar3[9] = uVar4;
    lVar5 = _CFStringCreateWithFormat(0,0,&cf______,uVar4,&cf_MainMessagePort);
    uVar4 = _DLThreadCreateReceivePort(lVar5,puVar3,__DLMainThreadMessagePortCallback);
    puVar3[10] = uVar4;
    uVar4 = _DLThreadCreateSendPort(lVar5);
    puVar3[0xc] = uVar4;
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
    if ((puVar3[10] != 0) && (puVar3[0xc] != 0)) {
      _DLThreadAddMessagePortToRunloop();
      uVar4 = _DLCreateCondition();
      puVar3[0x10] = uVar4;
      uVar4 = _DLCreateMutex();
      puVar3[0x11] = uVar4;
      *(undefined1 *)(puVar3 + 0x12) = 0;
      iVar2 = _DLThreadCreateThread(__DLHandlerThreadEntryPoint,puVar3);
      if (iVar2 == 0) {
        _DLWait(puVar3[0x10],puVar3[0x11],puVar3 + 0x12);
        goto LAB_000029ec;
      }
      cVar1 = _DLShouldLog(3);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLSetupHandlerThreadAndMessagePorts",3,&cf_Couldnotcreateamessagehandlerthread);
      }
    }
    _free(puVar3);
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}

