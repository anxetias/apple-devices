// rea decompile_all
// name: _AppleTCONDP835DeviceRestoreTagForBoardID
// address: 0x22712c
// body: available
// range: 0x22712c-0x227315 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AppleTCONDP835DeviceRestoreTagForBoardID(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  
  bVar1 = false;
  if (param_2 != 2) {
    if (param_2 != 3) {
      return 0;
    }
    bVar1 = true;
  }
  switch(param_1) {
  case 0:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagRequestTicket;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagRequestTicket;
    }
    break;
  case 1:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagResponseTicket;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagResponseTicket;
    }
    break;
  case 2:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceChipID;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceChipID;
    }
    break;
  case 3:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceBoardID;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceBoardID;
    }
    break;
  case 4:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagManifestEpoch;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagManifestEpoch;
    }
    break;
  case 5:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceProductionMode;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceProductionMode;
    }
    break;
  case 6:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceProv;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceProv;
    }
    break;
  case 7:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceSDOM;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceSDOM;
    }
    break;
  case 8:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceNonce;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceNonce;
    }
    break;
  case 9:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceUpdateNonce;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceUpdateNonce;
    }
    break;
  case 10:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceECID;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceECID;
    }
    break;
  case 0xb:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceInvariantFirmware;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceInvariantFirmware;
    }
    break;
  case 0xc:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceBacklightControllerFirmware;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceBacklightControllerFirmware;
    }
    break;
  case 0xd:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceCabalFirmware;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceCabalFirmware;
    }
    break;
  case 0xe:
    if (bVar1) {
      puVar2 = &_kAppleTCON2CommonTagDeviceTrinityFirmware;
    }
    else {
      puVar2 = &_kAppleTCONCommonTagDeviceTrinityFirmware;
    }
    break;
  default:
    return 0;
  }
  return *puVar2;
}

