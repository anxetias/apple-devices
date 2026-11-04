// rea decompile_all
// name: _uarpPlatformResponseAccessoryInfo
// address: 0x182d44
// body: available
// range: 0x182d44-0x182edc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x182d88 to 0x181b56 _UARPLayer2ManufacturerNameResponse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x182dd6 to 0x181c12 _UARPLayer2SerialNumberResponse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x182df1 to 0x181c70 _UARPLayer2HardwareVersionResponse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x182e23 to 0x181dd1 _UARPLayer2LastErrorResponse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x182e3e to 0x181bb4 _UARPLayer2ModelNameResponse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x182e96 to 0x181f55 _UARPLayer2FriendlyNameResponse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x182ed8 to 0x181df1 _UARPLayer2StatisticsResponse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _uarpPlatformResponseAccessoryInfo
               (undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,uint param_5,
               undefined8 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  switch(param_4) {
  case 1:
    _UARPLayer2ManufacturerNameResponse(param_1,param_2,param_6,param_5);
    return;
  case 2:
    _UARPLayer2ModelNameResponse(param_1,param_2,param_6,param_5);
    return;
  case 3:
    _UARPLayer2SerialNumberResponse(param_1,param_2,param_6,param_5);
    return;
  case 4:
    _UARPLayer2HardwareVersionResponse(param_1,param_2,param_6,param_5);
    return;
  case 5:
    if (0xf < param_5) {
      _uarpVersionEndianSwap(param_6,param_6);
      _UARPLayer2ActiveFirmwareVersionResponse(param_1,param_2,param_6);
      uVar1 = param_6[1];
      *(undefined8 *)(param_2 + 0x8a) = *param_6;
      *(undefined8 *)(param_2 + 0x92) = uVar1;
    }
    break;
  case 6:
    if (0xf < param_5) {
      _uarpVersionEndianSwap(param_6,param_6);
      _UARPLayer2StagedFirmwareVersionResponse(param_1,param_2,param_6);
      uVar1 = param_6[1];
      *(undefined8 *)(param_2 + 0x9a) = *param_6;
      *(undefined8 *)(param_2 + 0xa2) = uVar1;
    }
    break;
  case 7:
    if (0xf < param_5) {
      uVar2 = _uarpNtohl(*(undefined4 *)param_6);
      *(undefined4 *)param_6 = uVar2;
      uVar2 = _uarpNtohl(*(undefined4 *)((long)param_6 + 4));
      *(undefined4 *)((long)param_6 + 4) = uVar2;
      uVar2 = _uarpNtohl(*(undefined4 *)(param_6 + 1));
      *(undefined4 *)(param_6 + 1) = uVar2;
      uVar2 = _uarpNtohl(*(undefined4 *)((long)param_6 + 0xc));
      *(undefined4 *)((long)param_6 + 0xc) = uVar2;
      _UARPLayer2StatisticsResponse(param_1,param_2,param_6);
      return;
    }
    break;
  case 8:
    if (7 < param_5) {
      uVar2 = _uarpNtohl(*(undefined4 *)param_6);
      *(undefined4 *)param_6 = uVar2;
      uVar2 = _uarpNtohl(*(undefined4 *)((long)param_6 + 4));
      *(undefined4 *)((long)param_6 + 4) = uVar2;
      _UARPLayer2LastErrorResponse(param_1,param_2,param_6);
      return;
    }
    break;
  case 9:
    _UARPLayer2FriendlyNameResponse(param_1,param_2,param_6,param_5);
    return;
  }
  return;
}

