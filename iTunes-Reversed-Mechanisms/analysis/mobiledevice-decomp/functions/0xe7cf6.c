// rea decompile_all
// name: _AMGenericDeviceGetECID
// address: 0xe7cf6
// body: available
// range: 0xe7cf6-0xe7da8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe7d19 to 0xeb647 _AMDFUModeDeviceGetECID (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xe7d3a to 0xc88db _AMTADModeDeviceGetECID (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xe7d5b to 0xedd52 _AMRecoveryModeDeviceGetECID (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xe7d7c to 0xc9f0d _AMBootedModeDeviceGetECID (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xe7d9d to 0xde739 _AMPortDFUModeDeviceGetECID (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMGenericDeviceGetECID(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _CFGetTypeID();
  lVar2 = _AMDFUModeDeviceGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _AMDFUModeDeviceGetECID(param_1);
    return uVar3;
  }
  lVar1 = _CFGetTypeID(param_1);
  lVar2 = _AMTADModeDeviceGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _AMTADModeDeviceGetECID(param_1);
    return uVar3;
  }
  lVar1 = _CFGetTypeID(param_1);
  lVar2 = _AMRecoveryModeDeviceGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _AMRecoveryModeDeviceGetECID(param_1);
    return uVar3;
  }
  lVar1 = _CFGetTypeID(param_1);
  lVar2 = _AMBootedModeDeviceGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _AMBootedModeDeviceGetECID(param_1);
    return uVar3;
  }
  lVar1 = _CFGetTypeID(param_1);
  lVar2 = _AMPortDFUModeDeviceGetTypeID();
  if (lVar1 == lVar2) {
    uVar3 = _AMPortDFUModeDeviceGetECID(param_1);
    return uVar3;
  }
  return 0;
}

