// rea decompile_all
// name: _CoreUARPRestoreEndpointInitialize
// address: 0x17b340
// body: available
// range: 0x17b340-0x17b8f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_CoreUARPRestoreEndpointInitialize
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  
  *param_1 = 0;
  puVar7 = (undefined8 *)_uarpZalloc(0x8a8);
  if (puVar7 == (undefined8 *)0x0) {
    uVar8 = 0xb;
  }
  else {
    *(undefined2 *)((long)puVar7 + 0x7a2) = 1;
    puVar7[0xfd] = param_4;
    if (param_3 == (undefined8 *)0x0) {
      puVar7[0x10] = 0x800000008000;
      *(undefined4 *)(puVar7 + 0x11) = 0x8000;
      *(undefined2 *)((long)puVar7 + 0x8c) = 4;
      *(undefined1 *)((long)puVar7 + 0x8e) = 0;
      *(undefined4 *)(puVar7 + 0x12) = 0x407d0;
      *(undefined2 *)((long)puVar7 + 0x94) = 1;
      *(undefined4 *)(puVar7 + 0x13) = 0;
      bVar9 = false;
    }
    else {
      *(undefined4 *)(puVar7 + 0x14) = *(undefined4 *)(param_3 + 4);
      uVar8 = *param_3;
      uVar1 = param_3[1];
      uVar2 = param_3[3];
      puVar7[0x12] = param_3[2];
      puVar7[0x13] = uVar2;
      puVar7[0x10] = uVar8;
      puVar7[0x11] = uVar1;
      bVar9 = *(short *)(puVar7 + 0x12) == 0;
    }
    puVar7[0x15] = 0;
    puVar7[0x16] = 0;
    puVar7[0x19] = _fRestoreUARPSendMessage;
    puVar7[0x1a] = _fRestoreUARPDataTransferPause;
    puVar7[0x1b] = _fRestoreUARPDataTransferPauseAck;
    puVar7[0x1c] = _fRestoreUARPDataTransferResume;
    puVar7[0x1d] = _fRestoreUARPDataTransferResumeAck;
    puVar7[0x1e] = _fRestoreUARPSuperBinaryOffered;
    puVar7[0x1f] = _fRestoreUARPDynamicAssetOffered;
    puVar7[0x20] = _fRestoreUARPApplyStagedAssets;
    puVar7[0x21] = _fRestoreUARPApplyStagedAssetsResponse;
    puVar7[0x22] = _fRestoreUARPManufacturerName;
    puVar7[0x23] = _fRestoreUARPManufacturerNameResponse;
    puVar7[0x24] = _fRestoreUARPModelName;
    puVar7[0x25] = _fRestoreUARPModelNameResponse;
    puVar7[0x26] = _fRestoreUARPSerialNumber;
    puVar7[0x27] = _fRestoreUARPSerialNumberResponse;
    puVar7[0x28] = _fRestoreUARPHardwareVersion;
    puVar7[0x29] = _fRestoreUARPHardwareVersionResponse;
    puVar7[0x2a] = _fRestoreUARPActiveFirmwareVersion2;
    puVar7[0x2b] = _fRestoreUARPActiveFirmwareVersionResponse;
    puVar7[0x2c] = _fRestoreUARPStagedFirmwareVersion2;
    puVar7[0x2d] = _fRestoreUARPStagedFirmwareVersionResponse;
    puVar7[0x2e] = _fRestoreUARPLastError;
    puVar7[0x2f] = _fRestoreUARPLastErrorResponse;
    puVar7[0x30] = _fRestoreUARPStatisticsResponse;
    puVar7[0x31] = _fRestoreUARPAssetSolicitation;
    puVar7[0x32] = _fRestoreUARPRescindAllAssets;
    puVar7[0x33] = _fRestoreUARPRescindAllAssetsAck;
    if ((!bVar9) && (param_4 != 0 && *(short *)((long)puVar7 + 0x92) != 0)) {
      puVar7[0x34] = _fRestoreUARPTxWatchdogSet;
      puVar7[0x35] = _fRestoreUARPTxWatchdogCancel;
    }
    puVar7[0x36] = _fRestoreUARPProtocolVersion;
    puVar7[0x37] = _fRestoreUARPFriendlyName;
    puVar7[0x38] = _fRestoreUARPFriendlyNameResponse;
    puVar7[0x40] = _fRestoreUARPPlatformLogPacket;
    puVar7[0x41] = _CoreUARPRestoreLogError;
    puVar7[0x42] = _CoreUARPRestoreLogInfo;
    puVar7[0x43] = _CoreUARPRestoreLogDebug;
    puVar7[0x44] = _CoreUARPRestoreLogFault;
    puVar7[0x4b] = _fRestoreUARPVendorSpecificRecvMsg;
    puVar7[0x4c] = _fRestoreUARPVendorSpecificCheckExpectedResponse;
    puVar7[0x4d] = _fRestoreUARPVendorSpecificCheckValidToSend;
    puVar7[0x4e] = _fRestoreUARPVendorSpecificExceededRetries;
    puVar7[0xa1] = _fRestoreUARPAppleModelNumberResponse;
    puVar7[0xa3] = _fRestoreUARPHardwareFusingTypeResponse;
    puVar7[0xa5] = _fRestoreUARPManifestPrefixResponse;
    puVar7[0xa7] = _fRestoreUARPBoardIDResponse;
    puVar7[0xa9] = _fRestoreUARPChipIDResponse;
    puVar7[0xab] = _fRestoreUARPChipRevisionResponse;
    puVar7[0xad] = _fRestoreUARPECIDResponse;
    puVar7[0xaf] = _fRestoreUARPECIDDataResponse;
    puVar7[0xb1] = _fRestoreUARPSecurityDomainResponse;
    puVar7[0xb3] = _fRestoreUARPSecurityModeResponse;
    puVar7[0xb5] = _fRestoreUARPProductionModeResponse;
    puVar7[0xb7] = _fRestoreUARPChipEpochResponse;
    puVar7[0xb9] = _fRestoreUARPEnableMixMatchResponse;
    puVar7[0xbb] = _fRestoreUARPSocLiveNonceResponse;
    puVar7[0xbd] = _fRestoreUARPPrefixNeedsLogicalUnitNumberResponse;
    puVar7[0xbf] = _fRestoreUARPSuffixNeedsLogicalUnitNumberResponse;
    puVar7[0xc1] = _fRestoreUARPLogicalUnitNumberResponse;
    puVar7[0xc3] = _fRestoreUARPTicketLongNameResponse;
    puVar7[0xc5] = _fRestoreUARPRequiresPersonalizationResponse;
    puVar7[199] = _fRestoreUARPApBoardIDResponse;
    puVar7[0xc9] = _fRestoreUARPApChipIDResponse;
    puVar7[0xcb] = _fRestoreUARPApProductionModeResponse;
    puVar7[0xcd] = _fRestoreUARPApSecurityModeResponse;
    puVar7[0xcf] = _fRestoreUARPHardwareSpecificResponse;
    puVar7[0xd1] = _fRestoreUARPNonceResponse;
    puVar7[0xd3] = _fRestoreUARPLifeResponse;
    puVar7[0xd5] = _fRestoreUARPProvisioningResponse;
    puVar7[0xd7] = _fRestoreUARPManifestEpochResponse;
    puVar7[0xd9] = _fRestoreUARPManifestSuffixResponse;
    uVar8 = _uarpPlatformEndpointInit2
                      (puVar7 + 0x53,puVar7,2,puVar7 + 0x10,puVar7 + 0x15,puVar7 + 0x9f);
    if ((int)uVar8 == 0) {
      uVar8 = param_2[0xf];
      puVar7[0xe] = param_2[0xe];
      puVar7[0xf] = uVar8;
      uVar8 = param_2[0xd];
      puVar7[0xc] = param_2[0xc];
      puVar7[0xd] = uVar8;
      uVar8 = param_2[0xb];
      puVar7[10] = param_2[10];
      puVar7[0xb] = uVar8;
      uVar8 = param_2[9];
      puVar7[8] = param_2[8];
      puVar7[9] = uVar8;
      uVar8 = *param_2;
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[4];
      uVar5 = param_2[5];
      uVar6 = param_2[7];
      puVar7[6] = param_2[6];
      puVar7[7] = uVar6;
      puVar7[4] = uVar4;
      puVar7[5] = uVar5;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      *puVar7 = uVar8;
      puVar7[1] = uVar1;
      puVar7[0xf3] = param_5;
      *param_1 = puVar7;
      uVar8 = 0;
    }
  }
  return uVar8;
}

