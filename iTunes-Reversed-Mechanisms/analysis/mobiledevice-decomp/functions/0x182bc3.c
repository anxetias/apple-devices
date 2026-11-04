// rea decompile_all
// name: _uarpPlatformQueryAccessoryInfo
// address: 0x182bc3
// body: available
// range: 0x182bc3-0x182d1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x182bfa to 0x181b18 _UARPLayer2ManufacturerName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x182c4f to 0x181bd4 _UARPLayer2SerialNumber (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x182c62 to 0x181b76 _UARPLayer2ModelName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x182c75 to 0x181c32 _UARPLayer2HardwareVersion (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x182c88 to 0x181f17 _UARPLayer2FriendlyName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _uarpPlatformQueryAccessoryInfo
                (undefined8 param_1,int param_2,undefined4 *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  *param_5 = param_4;
  switch(param_2) {
  case 1:
    uVar3 = _UARPLayer2ManufacturerName(param_1,param_3,param_5);
    return uVar3;
  case 2:
    uVar3 = _UARPLayer2ModelName(param_1,param_3,param_5);
    return uVar3;
  case 3:
    uVar3 = _UARPLayer2SerialNumber(param_1,param_3,param_5);
    return uVar3;
  case 4:
    uVar3 = _UARPLayer2HardwareVersion(param_1,param_3,param_5);
    return uVar3;
  case 9:
    uVar3 = _UARPLayer2FriendlyName(param_1,param_3,param_5);
    return uVar3;
  }
  if (param_2 - 5U < 2) {
    *param_5 = 0x10;
    uVar3 = 0x27;
    if (0xf < param_4) {
      if (param_2 == 5) {
        local_1c = 0;
        uVar1 = _UARPLayer2ActiveFirmwareVersion2(param_1,&local_1c,param_3);
      }
      else {
        local_20 = 0;
        uVar1 = _UARPLayer2StagedFirmwareVersion2(param_1,&local_20,param_3);
      }
      uVar3 = (ulong)uVar1;
      uVar2 = _uarpNtohl(*param_3);
      *param_3 = uVar2;
      uVar2 = _uarpNtohl(param_3[1]);
      param_3[1] = uVar2;
      uVar2 = _uarpNtohl(param_3[2]);
      param_3[2] = uVar2;
      uVar2 = _uarpNtohl(param_3[3]);
      param_3[3] = uVar2;
    }
  }
  else if (param_2 == 8) {
    *param_5 = 8;
    uVar3 = 0x27;
    if (7 < param_4) {
      uVar1 = _UARPLayer2LastError(param_1,param_3);
      uVar3 = (ulong)uVar1;
      uVar2 = _uarpNtohl(*param_3);
      *param_3 = uVar2;
      uVar2 = _uarpNtohl(param_3[1]);
      param_3[1] = uVar2;
    }
  }
  else {
    *param_5 = 0;
    uVar3 = 0x1c;
  }
  return uVar3;
}

