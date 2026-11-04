// rea decompile_all
// name: __DLCheckVersionForAccept
// address: 0x5b84
// body: available
// range: 0x5b84-0x5fb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __DLCheckVersionForAccept(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long local_40;
  int local_34;
  
  local_40 = 0;
  lVar3 = _CFNumberCreate(0,9,&_kDLProtocolVersion);
  lVar4 = _CFNumberCreate(0,9);
  lVar5 = __DLCreateMessageDataV(&cf_DLMessageVersionExchange,2,lVar3,lVar4);
  iVar2 = __DLSendData(*(undefined8 *)(param_1 + 0x40),lVar5,param_2);
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (iVar2 == 0) {
    _CFRelease(lVar3);
    _CFRelease(lVar4);
    cVar1 = _DLShouldLog(6);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLCheckVersionForAccept",6,
              &cf_Acceptingsidesentversionnumbers_DeviceLink_d_protocol_d,_kDLProtocolVersion,
              *(undefined4 *)(param_1 + 0x24));
    }
    iVar2 = _StreamHandlerReceive(*(undefined8 *)(param_1 + 0x40),&local_40,param_2);
    if (iVar2 != 0) {
      cVar1 = _DLShouldLog(3);
      lVar4 = local_40;
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLCheckVersionForAccept",3,&cf_Couldnotreceivemessage_____,*param_2);
        lVar4 = local_40;
      }
      goto joined_r0x00005d0c;
    }
    if (local_40 != 0) {
      lVar4 = _CFPropertyListCreateFromXMLData(0,local_40,0,param_2);
      if (local_40 != 0) {
        _CFRelease();
        local_40 = 0;
      }
      if (lVar4 == 0) {
        cVar1 = _DLShouldLog(3);
        if (cVar1 != '\0') {
          uVar9 = 0;
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                  ,"_DLCheckVersionForAccept",3,
                  &cf_Didnotreceiveversionnumberarrayfromconnectingside___,*param_2);
          goto LAB_00005d16;
        }
        goto LAB_00005d13;
      }
      lVar5 = __DLGetParameterAtIndexWithDefaultValue(lVar4,1,0);
      if (lVar5 != 0) {
        lVar6 = _CFGetTypeID(lVar5);
        lVar7 = _CFStringGetTypeID();
        if (lVar6 == lVar7) {
          lVar6 = __DLGetParameterAtIndexWithDefaultValue(lVar4,2,0);
          local_34 = 0;
          if (lVar6 != 0) {
            _CFNumberGetValue(lVar6,9,&local_34);
          }
          cVar1 = _DLShouldLog(6);
          if (cVar1 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                    ,"_DLCheckVersionForAccept",6,&cf_Acceptingsidereceivedok_nogofromconnectside___
                    ,lVar5);
          }
          lVar6 = _CFStringCompare(lVar5,&cf_DLVersionsOk,0);
          uVar9 = CONCAT71((int7)((ulong)lVar3 >> 8),1);
          if (lVar6 != 0) {
            lVar3 = _CFStringCompare(lVar5,&cf_DLErrorAcceptingDeviceLinkGreater,0);
            if (lVar3 == 0) {
              cVar1 = _DLShouldLog(4);
              if (cVar1 != '\0') {
                __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                        ,"_DLCheckVersionForAccept",4,
                        &
                        cf_OurDeviceLinkversion__d_isgreaterthantheconnectingside_sversion__d__butthat_sok
                        ,_kDLProtocolVersion,local_34);
              }
            }
            else {
              cVar1 = _DLShouldLog(3);
              if (cVar1 != '\0') {
                __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                        ,"_DLCheckVersionForAccept",3,
                        &cf_Connectingsidetoldtheacceptingsidethattheversionnumbersmismatch___,lVar5
                       );
              }
              uVar8 = _CFRetain(lVar5);
              *param_2 = uVar8;
              uVar9 = 0;
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
                    ,"_DLCheckVersionForAccept",6,&cf_UsingDeviceLinkprotocolversion_d,
                    *(undefined4 *)(param_1 + 0x20));
          }
          _CFRelease(lVar4);
          goto LAB_00005d16;
        }
      }
      cVar1 = _DLShouldLog(3);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
                ,"_DLCheckVersionForAccept",3,&cf_Invalidversionreceivedfromtheconnectside);
      }
      goto LAB_00005d0e;
    }
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      uVar9 = 0;
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLCheckVersionForAccept",3,&cf_Didnotreceiveversionnumberdatafromconnectingside);
      goto LAB_00005d16;
    }
  }
  else {
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/DeviceLinkConnection.c"
              ,"_DLCheckVersionForAccept",3,&cf_Couldnotsenddata_____,*param_2);
    }
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
joined_r0x00005d0c:
    if (lVar4 != 0) {
LAB_00005d0e:
      _CFRelease(lVar4);
    }
  }
LAB_00005d13:
  uVar9 = 0;
LAB_00005d16:
  return uVar9 & 0xffffffff;
}

