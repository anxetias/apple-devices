// rea decompile_all
// name: _personalizationBackendFlash
// address: 0x270116
// body: available
// range: 0x270116-0x270303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_personalizationBackendFlash(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_138 [88];
  code *local_e0;
  code *local_d8;
  code *local_a8;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  undefined2 local_3a;
  undefined8 local_38;
  
  local_58 = param_4;
  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
    _puts("Staging FW in personalization backend");
  }
  else {
    _uarpLogInfo(3,"Staging FW in personalization backend\n");
  }
  lVar1 = *(long *)(param_1 + 0x38);
  puVar2 = *(undefined8 **)(lVar1 + 0x558);
  uVar3 = _DynamicAssetCreate(&local_38);
  if ((int)uVar3 == 0) {
    local_50 = param_2;
    local_48 = param_1;
    _uarpZero(local_138,0xe0);
    local_e0 = _DynamicAssetUARPGetBytes;
    local_d8 = _DynamicAssetUARPSetBytes;
    local_a8 = _fAssetProcessingNotification2;
    local_40 = 0x4d524946;
    _uarpPlatformEndpointPrepareDynamicAsset(lVar1,lVar1 + 0x438,local_38,&local_40,local_138);
    uVar3 = _uarpPersonalizationRequestAssetInitialize(lVar1,local_38,1);
    if ((int)uVar3 == 0) {
      local_3a = 0;
      uVar3 = _uarpPlatformAssetQueryAssetID(*puVar2);
      if ((int)uVar3 == 0) {
        uVar3 = _uarpPersonalizationRequestAddRemoteAssetID(lVar1,local_38,local_3a);
        if ((int)uVar3 == 0) {
          uVar3 = _UARPSuperBinaryPreparePayload(lVar1,local_38,0,&local_40,local_58);
          if ((int)uVar3 == 0) {
            uVar3 = _UARPSuperBinaryAddPayloadMetaData(lVar1,local_38,0,0xccd28111,4,&local_40);
            if ((int)uVar3 == 0) {
              uVar3 = _UARPSuperBinaryAddPayloadDataLarge(lVar1,local_38,0,local_50,param_3);
              if ((int)uVar3 == 0) {
                uVar3 = _UARPSuperBinaryFinalizeHeader(lVar1,local_38);
                if ((int)uVar3 == 0) {
                  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                    _puts("Offering FIRM to controller");
                  }
                  else {
                    _uarpLogInfo(3,"Offering FIRM to controller\n");
                  }
                  uVar3 = _uarpPlatformEndpointOfferAsset(lVar1,lVar1 + 0x438,local_38);
                  if ((int)uVar3 == 0) {
                    *(undefined1 *)(local_48 + 0x30) = 1;
                    uVar3 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}

