// rea decompile_all
// name: __DLCheckVersionForConnect
// address: 0x5fb2
// body: available
// range: 0x5fb2-0x64ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __DLCheckVersionForConnect(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  undefined7 uVar10;
  ulong uVar9;
  long local_48;
  long local_40;
  int local_38;
  int local_34;
  
  local_40 = 0;
  iVar2 = _StreamHandlerReceive(*(undefined8 *)(param_1 + 0x40),&local_40,param_2);
  if (iVar2 == 0) {
    if (local_40 == 0) {
      cVar1 = _DLShouldLog(3);
      if (cVar1 != '\0') {
        uVar9 = 0;
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLCheckVersionForConnect",3,&cf_Didnotreceiveversionnumberdatafromacceptingside);
        goto LAB_00006027;
      }
    }
    else {
      lVar3 = _CFPropertyListCreateFromXMLData(0,local_40,0,param_2);
      if (local_40 != 0) {
        _CFRelease();
        local_40 = 0;
      }
      if (lVar3 == 0) {
        cVar1 = _DLShouldLog(3);
        if (cVar1 == '\0') goto LAB_00006024;
        pcVar8 = (cfstringStruct *)*param_2;
        pcVar6 = &cf_Didnotreceiveversionnumberarrayfromacceptingside___;
LAB_000064ba:
        uVar9 = 0;
        uVar7 = 3;
LAB_000064c2:
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLCheckVersionForConnect",uVar7,pcVar6,pcVar8);
        goto LAB_00006027;
      }
      local_34 = 0;
      local_38 = 0;
      lVar4 = __DLGetParameterAtIndexWithDefaultValue(lVar3,0,0);
      if (lVar4 == 0) {
LAB_000060a7:
        cVar1 = _DLShouldLog(6);
        if (cVar1 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"_DLCheckVersionForConnect",6,
                  &
                  cf_Connectingsidereceivedmessagefromacceptingside_buteithermessagewasNULLoramismatchontheexpected_____
                  ,&cf_DLMessageVersionExchange,lVar3);
        }
      }
      else {
        lVar4 = _CFStringCompare(lVar4,&cf_DLMessageVersionExchange,0);
        if (lVar4 != 0) goto LAB_000060a7;
        lVar4 = __DLGetParameterAtIndexWithDefaultValue(lVar3,1,0);
        lVar5 = __DLGetParameterAtIndexWithDefaultValue(lVar3,2,0);
        if (lVar4 != 0) {
          _CFNumberGetValue(lVar4,9,&local_34);
        }
        if (lVar5 != 0) {
          _CFNumberGetValue(lVar5,9,&local_38);
        }
        cVar1 = _DLShouldLog(6);
        if (cVar1 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"_DLCheckVersionForConnect",6,
                  &cf_Connectingsidereceivedversionnumbersfromtheacceptingside_DeviceLink_d_app_d,
                  local_34,local_38);
        }
      }
      _CFRelease(lVar3);
      if (local_34 == 0) {
        local_48 = 0;
        lVar3 = __DLCreateMessageDataV(&cf_DLMessageDisconnect,1,&cf_Protocolversionmismatch);
        iVar2 = __DLSendData(*(undefined8 *)(param_1 + 0x40),lVar3,&local_48);
        if (lVar3 != 0) {
          _CFRelease(lVar3);
        }
        if (iVar2 != 0) {
          cVar1 = _DLShouldLog(3);
          if (cVar1 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                    ,"_DLCheckVersionForConnect",3,&cf_Couldnotsenddisconnectmessage_____,local_48);
          }
          if (local_48 != 0) {
            _CFRelease();
            local_48 = 0;
          }
        }
        __DLCleanupStreamHandler(param_1);
      }
      else {
        uVar10 = (undefined7)((ulong)lVar3 >> 8);
        if (local_34 < _kDLProtocolVersion) {
          cVar1 = _DLShouldLog(3);
          pcVar8 = &cf_DLVersionsOk;
          uVar9 = CONCAT71(uVar10,1);
          if (cVar1 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                    ,"_DLCheckVersionForConnect",3,
                    &
                    cf_ConnectingsidedeterminedthatitsDeviceLinkprotocolversionisgreater_connect__d_accept__d_
                    ,_kDLProtocolVersion,local_34);
          }
        }
        else if (_kDLProtocolVersion < local_34) {
          cVar1 = _DLShouldLog(3);
          if (cVar1 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                    ,"_DLCheckVersionForConnect",3,
                    &
                    cf_ConnectingsidedeterminedthatitsDeviceLinkprotocolversionislesser_connect__d_accept__d_
                    ,_kDLProtocolVersion,local_34);
          }
          pcVar8 = (cfstringStruct *)_CFRetain(&cf_DLErrorAcceptingDeviceLinkGreater);
          *param_2 = pcVar8;
          uVar9 = CONCAT71(uVar10,1);
        }
        else if (local_38 < *(int *)(param_1 + 0x24)) {
          cVar1 = _DLShouldLog(3);
          if (cVar1 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                    ,"_DLCheckVersionForConnect",3,
                    &
                    cf_Connectingsidedeterminedthatitsappprotocolversionisgreater_connect__d_accept__d_
                    ,*(undefined4 *)(param_1 + 0x24),local_38);
          }
          pcVar8 = (cfstringStruct *)_CFRetain(&cf_DLErrorConnectingProtocolGreater);
          *param_2 = pcVar8;
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT71(uVar10,1);
          if (*(int *)(param_1 + 0x24) < local_38) {
            cVar1 = _DLShouldLog(3);
            if (cVar1 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                      ,"_DLCheckVersionForConnect",3,
                      &
                      cf_Connectingsidedeterminedthatitsappprotocolversionislesser_connect__d_accept__d_
                      ,*(undefined4 *)(param_1 + 0x24),local_38);
            }
            pcVar8 = (cfstringStruct *)_CFRetain(&cf_DLErrorAcceptingProtocolGreater);
            *param_2 = pcVar8;
          }
          else {
            pcVar8 = &cf_DLVersionsOk;
          }
        }
        iVar2 = local_34;
        if (_kDLProtocolVersion < local_34) {
          iVar2 = _kDLProtocolVersion;
        }
        *(int *)(param_1 + 0x20) = iVar2;
        cVar1 = _DLShouldLog(6);
        if (cVar1 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"_DLCheckVersionForConnect",6,&cf_UsingDeviceLinkprotocolversion_d,
                  *(undefined4 *)(param_1 + 0x20));
        }
        lVar3 = _CFNumberCreate(0,9,&_kDLProtocolVersion);
        lVar4 = __DLCreateMessageDataV(&cf_DLMessageVersionExchange,2,pcVar8,lVar3);
        if (lVar3 != 0) {
          _CFRelease(lVar3);
        }
        iVar2 = __DLSendData(*(undefined8 *)(param_1 + 0x40),lVar4,param_2);
        if (lVar4 != 0) {
          _CFRelease(lVar4);
        }
        if (iVar2 == 0) {
          cVar1 = _DLShouldLog(6);
          if (cVar1 == '\0') goto LAB_00006027;
          pcVar6 = &cf_Connectingsidesent__;
          uVar7 = 6;
          goto LAB_000064c2;
        }
        cVar1 = _DLShouldLog(3);
        if (cVar1 != '\0') {
          pcVar8 = (cfstringStruct *)*param_2;
          pcVar6 = &cf_Couldnotsendversionresponse_____;
          goto LAB_000064ba;
        }
      }
    }
  }
  else {
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLCheckVersionForConnect",3,&cf_Couldnotreceivemessage_____,*param_2);
    }
    if (local_40 != 0) {
      _CFRelease();
    }
  }
LAB_00006024:
  uVar9 = 0;
LAB_00006027:
  return uVar9 & 0xffffffff;
}

