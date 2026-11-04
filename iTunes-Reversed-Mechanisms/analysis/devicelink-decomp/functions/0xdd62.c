// rea decompile_all
// name: _DLDeviceListenerCreateWithCallbacks
// address: 0xdd62
// body: available
// range: 0xdd62-0xdea4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_DLDeviceListenerCreateWithCallbacks
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  
  local_38 = 0;
  puVar3 = _malloc(0x38);
  *puVar3 = param_1;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar3[3] = param_4;
  *(undefined1 *)(puVar3 + 6) = 0;
  puVar3[4] = 0;
  _DAT_00018f28 = __DLDeviceRetain;
  _DAT_00018f30 = __DLDeviceRelease;
  _DAT_00018f38 = __DLDeviceCreateDescription;
  uVar4 = _CFArrayCreateMutable(0,0,&_deviceCallbacks);
  puVar3[5] = uVar4;
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
            ,"DLDeviceListenerCreateWithCallbacks",6,&cf_SubscribingforAMDeviceNotifications);
  }
  iVar2 = _AMDeviceNotificationSubscribe(__AMDeviceNotification,0,0,puVar3,&local_38);
  if (iVar2 == 0) {
    puVar3[4] = local_38;
  }
  else {
    lVar5 = _AMDCopyErrorText(iVar2);
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
              ,"DLDeviceListenerCreateWithCallbacks",3,&cf_Can_tlistenformobiledevices_error_d___,
              iVar2,lVar5);
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
    _DLDeviceListenerDestroy(puVar3);
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}

