// rea decompile_all
// name: _externalBackendFlash
// address: 0x2728c7
// body: available
// range: 0x2728c7-0x272a44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_externalBackendFlash(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_140 [88];
  code *local_e8;
  code *local_e0;
  code *local_b0;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3a;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_1 + 0x40);
  puVar2 = *(undefined8 **)(lVar1 + 0x558);
  local_58 = param_4;
  uVar3 = _DynamicAssetCreate(&local_38);
  if ((int)uVar3 == 0) {
    local_50 = param_2;
    local_40 = param_3;
    _uarpZero(local_140,0xe0);
    local_e8 = _DynamicAssetUARPGetBytes;
    local_e0 = _DynamicAssetUARPSetBytes;
    local_b0 = _fAssetProcessingNotification2;
    local_5c = 0x4d524946;
    _uarpPlatformEndpointPrepareDynamicAsset(lVar1,lVar1 + 0x438,local_38,&local_5c,local_140);
    uVar3 = _uarpPersonalizationRequestAssetInitialize(lVar1,local_38,1);
    if ((int)uVar3 == 0) {
      local_3a = 0;
      uVar3 = _uarpPlatformAssetQueryAssetID(*puVar2);
      if ((int)uVar3 == 0) {
        uVar3 = _uarpPersonalizationRequestAddRemoteAssetID(lVar1,local_38,local_3a);
        if ((int)uVar3 == 0) {
          local_44 = 0x4d524946;
          uVar3 = _UARPSuperBinaryPreparePayload(lVar1,local_38,0,&local_44,local_58);
          if ((int)uVar3 == 0) {
            uVar3 = _UARPSuperBinaryAddPayloadMetaData(lVar1,local_38,0,0xccd28111,4,&local_44);
            if ((int)uVar3 == 0) {
              uVar3 = _UARPSuperBinaryAddPayloadDataLarge(lVar1,local_38,0,local_50,local_40);
              if ((int)uVar3 == 0) {
                uVar3 = _UARPSuperBinaryFinalizeHeader(lVar1,local_38);
                if ((int)uVar3 == 0) {
                  uVar3 = _uarpPlatformEndpointOfferAsset(lVar1,lVar1 + 0x438,local_38);
                  if ((int)uVar3 == 0) {
                    *(undefined1 *)(param_1 + 0x48) = 1;
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

