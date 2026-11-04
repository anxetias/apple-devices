// rea decompile_all
// name: _CoreUARPRestoreSetAssetPersonalizedFirmwareCallbacks
// address: 0x17ea6d
// body: available
// range: 0x17ea6d-0x17eb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CoreUARPRestoreSetAssetPersonalizedFirmwareCallbacks(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = _fPersonalizedFirmwareAssetReady;
  param_1[8] = _fPersonalizedFirmwarePayloadData;
  param_1[10] = _fPersonalizedFirmwarePayloadDataComplete;
  param_1[0xf] = _fPersonalizedFirmwareAssetCorrupt;
  param_1[0x10] = _fPersonalizedFirmwareAssetOrphaned;
  param_1[0x11] = _fPersonalizedFirmwareAssetReleased2;
  param_1[0x12] = _fPersonalizedFirmwareAssetProcessingNotification2;
  param_1[0x13] = _fPersonalizedFirmwareAssetProcessingNotificationAck;
  param_1[0x14] = _fPersonalizedFirmwareAssetPreProcessingNotification;
  param_1[0x15] = _fPersonalizedFirmwareAssetPreProcessingNotificationAck;
  param_1[0x16] = _fPersonalizedFirmwareAssetAllHeadersAndMetaDataComplete;
  return;
}

