// rea decompile_all
// name: _USBCUpdateEndpointInitialize
// address: 0x272aad
// body: available
// range: 0x272aad-0x272d6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _USBCUpdateEndpointInitialize
               (undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined1 local_248 [32];
  code *local_228;
  code *local_200;
  code *local_1f8;
  code *local_1f0;
  code *local_1a0;
  code *local_190;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  bVar6 = 0;
  if ((((param_2 != 0) && (param_1 != (undefined8 *)0x0)) && (param_3 != (undefined8 *)0x0)) &&
     ((param_4 != (undefined8 *)0x0 && (lVar3 = _uarpZalloc(0x658), lVar3 != 0)))) {
    uVar1 = param_3[1];
    *(undefined8 *)(lVar3 + 0x4f0) = *param_3;
    *(undefined8 *)(lVar3 + 0x4f8) = uVar1;
    *(long *)(lVar3 + 0x500) = param_2;
    puVar5 = (undefined8 *)(lVar3 + 0x508);
    for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_1;
      param_1 = param_1 + (ulong)bVar6 * -2 + 1;
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
    }
    uStack_40 = 0;
    local_38 = 0;
    local_54 = 0x800000008000;
    local_4c = 0x8000;
    local_48 = 4;
    ___bzero(local_248,0x1f0);
    local_228 = _fSendMessage;
    local_200 = _fSuperBinaryOffered;
    local_1f8 = _fDynamicAssetOffered;
    local_1f0 = _fApplyStagedAssets;
    local_1a0 = _fActiveFirmwareVersion2;
    local_190 = _fStagedFirmwareVersion2;
    *(undefined2 *)(lVar3 + 0x260) = 1;
    *(undefined1 *)(lVar3 + 0x263) = 0;
    *(code **)(lVar3 + 0x268) = _USBCUpdateInfoUnsupported;
    *(code **)(lVar3 + 0x278) = _USBCUpdateInfoUnsupported;
    *(code **)(lVar3 + 0x328) = _USBCUpdateInfoUnsupported;
    *(code **)(lVar3 + 0x338) = _USBCUpdateInfoUnsupported;
    *(code **)(lVar3 + 0x3c8) = _USBCUpdateInfoUnsupported;
    *(code **)(lVar3 + 0x3b8) = _USBCUpdateInfoUnsupported;
    *(code **)(lVar3 + 0x288) = _USBCUpdateManifestPrefix;
    *(code **)(lVar3 + 0x298) = _USBCUpdateBoardID;
    *(code **)(lVar3 + 0x2a8) = _USBCUpdateChipID;
    *(code **)(lVar3 + 0x398) = _USBCUpdateAPBoardID;
    *(code **)(lVar3 + 0x3a8) = _USBCUpdateAPChipID;
    *(code **)(lVar3 + 0x2b8) = _USBCUpdateChipRevision;
    *(code **)(lVar3 + 0x2c8) = _USBCUpdateECID;
    *(code **)(lVar3 + 0x2e8) = _USBCUpdateSecurityDomain;
    *(code **)(lVar3 + 0x2f8) = _USBCUpdateSecurityMode;
    *(code **)(lVar3 + 0x308) = _USBCUpdateProductionMode;
    *(code **)(lVar3 + 0x318) = _USBCUpdateChipEpoch;
    *(code **)(lVar3 + 0x348) = _USBCUpdatePrefixNeedsLUN;
    *(code **)(lVar3 + 0x358) = _USBCUpdateSuffixNeedsLUN;
    *(code **)(lVar3 + 0x368) = _USBCUpdateTag;
    *(code **)(lVar3 + 0x378) = _USBCUpdateLongName;
    *(code **)(lVar3 + 0x388) = _USBCUpdateRequiresPersonalization;
    iVar2 = _uarpPlatformEndpointInit
                      (lVar3,lVar3,0,&local_54,local_248,lVar3 + 0x260,
                       _uarpPlatformEndpointCallbackAppleSpecific);
    if ((iVar2 == 0) &&
       (iVar2 = _uarpPlatformRemoteEndpointAdd(lVar3,lVar3 + 0x438,&local_54,lVar3), iVar2 == 0)) {
      *param_4 = __sendMsgToAccessory;
      param_4[1] = __USBCUpdateFinalize;
      iVar2 = _BackendCreate(lVar3 + 0x568,(undefined8 *)(lVar3 + 0x508),lVar3);
      if (iVar2 == 0) {
        return lVar3;
      }
    }
    _image3Free(lVar3);
  }
  return 0;
}

