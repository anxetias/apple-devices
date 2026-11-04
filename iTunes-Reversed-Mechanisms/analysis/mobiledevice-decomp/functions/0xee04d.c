// rea decompile_all
// name: _AMGenericDeviceCopyDeviceName
// address: 0xee04d
// body: available
// range: 0xee04d-0xee13c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xee084 to 0xeb8e9 _AMDFUModeDeviceCopyDeviceName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xee0af to 0xc8bec _AMTADModeDeviceCopyDeviceName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xee0d7 to 0xcd3f4 _AMRestoreModeDeviceCopyDeviceName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xee102 to 0xb7b7c _USBMuxStartWSA (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xee12d to 0xdea12 _AMPortDFUModeDeviceCopyDeviceName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMGenericDeviceCopyDeviceName(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _CFGetTypeID();
  lVar2 = _AMDFUModeDeviceGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _AMDFUModeDeviceCopyDeviceName(param_1,param_2,param_3);
    return uVar3;
  }
  lVar1 = _CFGetTypeID(param_1);
  lVar2 = _AMTADModeDeviceGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _AMTADModeDeviceCopyDeviceName(param_1,param_2,param_3);
    return uVar3;
  }
  lVar1 = _CFGetTypeID(param_1);
  lVar2 = _AMRestoreModeDeviceGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _AMRestoreModeDeviceCopyDeviceName(param_1,param_3);
    return uVar3;
  }
  lVar1 = _CFGetTypeID(param_1);
  lVar2 = _AMBootedModeDeviceGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _USBMuxStartWSA(param_1,param_2,param_3);
    return uVar3;
  }
  lVar1 = _CFGetTypeID(param_1);
  lVar2 = _AMPortDFUModeDeviceGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _AMPortDFUModeDeviceCopyDeviceName(param_1,param_2,param_3);
    return uVar3;
  }
  return 0;
}

