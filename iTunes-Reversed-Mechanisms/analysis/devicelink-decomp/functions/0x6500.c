// rea decompile_all
// name: __DLMainThreadMessagePortCallback
// address: 0x6500
// body: available
// range: 0x6500-0x69d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__DLMainThreadMessagePortCallback(undefined8 param_1,ulong param_2,long param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  uint uVar9;
  long local_38;
  
  uVar9 = (uint)param_2;
  local_38 = 0;
  param_2 = param_2 & 0xff;
  if ((0xf < (uint)param_2) && (cVar2 = _DLShouldLog(4), cVar2 != '\0')) {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLMainThreadMessagePortCallback",4,
            &cf_Mainthreadinvokedwithunknownmsgid_dforconnection_p,param_2,param_4);
  }
  if ((uVar9 & 0xffffff00) != param_4[1]) {
    cVar2 = _DLShouldLog(4);
    if (cVar2 == '\0') {
      return 0;
    }
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLMainThreadMessagePortCallback",4,
            &
            cf_Connectionsessionnumber_dfromincomingmessagedoesn_tmatchcurrentconnection_d_connection_p_
            ,(int)uVar9 >> 8,(int)param_4[1] >> 8,param_4);
    return 0;
  }
  if (_sSaveCallHistory == '\x01') {
    if ((uint)param_2 < 0x10) {
      pcVar7 = *(char **)(&_sDLMessageStrings + param_2 * 8);
    }
    else {
      pcVar7 = "(Invalid Message Code)";
    }
    lVar3 = _CFStringCreateWithFormat(0,0,&cf_<_Main_s,pcVar7);
    __DLCallHistoryAddEntry(lVar3);
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
  }
  switch(uVar9 & 0xff) {
  case 1:
    if (param_3 == 0) {
LAB_00006884:
      lVar3 = 0;
    }
    else {
      lVar3 = _CFPropertyListCreateFromXMLData(0,param_3,0,&local_38);
      if (lVar3 == 0) {
        cVar2 = _DLShouldLog(3);
        if (cVar2 == '\0') goto LAB_00006884;
        lVar3 = 0;
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLMainThreadMessagePortCallback",3,
                &cf_CouldnotcreateapropertylistfromthemessageXMLdata_____,local_38);
      }
    }
    if (local_38 != 0) {
      _CFRelease();
      local_38 = 0;
    }
    (*(code *)**(undefined8 **)(param_4 + 10))(param_4,lVar3);
    goto LAB_000069b9;
  case 2:
    lVar3 = 0;
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      lVar4 = _CFPropertyListCreateFromXMLData(0,param_3,0,&local_38);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = __DLGetParameterAtIndexWithDefaultValue(lVar4,1,0);
        lVar3 = lVar4;
      }
    }
    *param_4 = 0;
    (**(code **)(*(long *)(param_4 + 10) + 0x18))(param_4,uVar5);
    goto LAB_00006956;
  case 3:
    (**(code **)(*(long *)(param_4 + 10) + 8))(param_4);
    __DLRequestRead(param_4);
    break;
  case 4:
    lVar3 = 0;
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      lVar4 = _CFPropertyListCreateFromXMLData(0,param_3,0,&local_38);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = __DLGetParameterAtIndexWithDefaultValue(lVar4,1,0);
        lVar3 = lVar4;
      }
    }
    *param_4 = 0;
    (**(code **)(*(long *)(param_4 + 10) + 0x10))(param_4,uVar5);
LAB_00006956:
    if (lVar3 == 0) {
      return 0;
    }
    goto LAB_000069c1;
  case 5:
    if (param_3 == 0) {
      local_38 = _CFRetain(&cf_NULLdatareturnedfromread);
LAB_000068be:
      cVar2 = _DLShouldLog(3);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLMainThreadMessagePortCallback",3,&cf_Errorcreatingcomponentsfromreaddata_____,
                local_38);
      }
      (**(code **)(*(long *)(param_4 + 10) + 0x28))(param_4);
      bVar1 = true;
      lVar3 = 0;
    }
    else {
      lVar3 = _CFPropertyListCreateFromXMLData(0,param_3,0,&local_38);
      if (lVar3 == 0) goto LAB_000068be;
      __DLHandleIncomingMessage(param_4,lVar3);
      bVar1 = false;
    }
    if (local_38 != 0) {
      _CFRelease();
      local_38 = 0;
    }
    if (!bVar1) {
      _CFRelease(lVar3);
    }
    *(undefined1 *)((long)param_4 + 0x91) = 0;
    break;
  case 6:
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return 0;
    }
    pcVar8 = &cf_DLMainThreadMessagePortCallbackcalledwithDLWriteMessage;
    goto LAB_0000671b;
  case 7:
    (**(code **)(*(long *)(param_4 + 10) + 0x20))(param_4,0);
    break;
  case 8:
    if (*(long *)(param_4 + 0x14) != 0) {
      _DLThreadDeleteReceivePort();
    }
    if (*(long *)(param_4 + 0x18) != 0) {
      _DLThreadDeleteSendPort();
    }
    if (*(long *)(param_4 + 0x1e) != 0) {
      _CFRelease();
    }
    _free(param_4);
    break;
  default:
    cVar2 = _DLShouldLog(3);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLMainThreadMessagePortCallback",3,
              &cf_DLMainThreadMessagePortCallbackcalledwithunknownmessagetype__d,param_2);
    }
    break;
  case 0xb:
    if (param_3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = _CFPropertyListCreateFromXMLData(0,param_3,0,&local_38);
    }
    lVar4 = _CFArrayGetCount(lVar3);
    if (lVar4 < 2) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      uVar5 = __DLGetParameterAtIndexWithDefaultValue(lVar3,1,0);
      if (lVar4 != 2) {
        uVar6 = __DLGetParameterAtIndexWithDefaultValue(lVar3,2,0);
      }
    }
    (**(code **)(*(long *)(param_4 + 10) + 0x48))(param_4,uVar5,uVar6);
LAB_000069b9:
    if (lVar3 != 0) {
LAB_000069c1:
      _CFRelease(lVar3);
    }
    break;
  case 0xc:
    (**(code **)(*(long *)(param_4 + 10) + 0x28))(param_4);
    break;
  case 0xd:
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return 0;
    }
    pcVar8 = &cf_DLMainThreadMessagePortCallbackcalledwithDLWriteThenReadMessage;
LAB_0000671b:
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
            ,"_DLMainThreadMessagePortCallback",3,pcVar8);
  }
  return 0;
}

