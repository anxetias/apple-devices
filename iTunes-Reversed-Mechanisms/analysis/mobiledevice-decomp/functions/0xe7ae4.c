// rea decompile_all
// name: _AMGenericDeviceGetProductID
// address: 0xe7ae4
// body: available
// range: 0xe7ae4-0xe7b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 _AMGenericDeviceGetProductID(undefined8 param_1)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = _CFGetTypeID();
  lVar3 = _AMDFUModeDeviceGetTypeID();
  if (lVar2 == lVar3) {
    uVar1 = _AMDFUModeDeviceGetProductID(param_1);
  }
  else {
    lVar2 = _CFGetTypeID(param_1);
    lVar3 = _AMTADModeDeviceGetTypeID();
    if (lVar2 == lVar3) {
      uVar1 = _AMTADModeDeviceGetProductID(param_1);
    }
    else {
      lVar2 = _CFGetTypeID(param_1);
      lVar3 = _AMRecoveryModeDeviceGetTypeID();
      if (lVar2 == lVar3) {
        uVar1 = _AMRecoveryModeDeviceGetProductID(param_1);
      }
      else {
        lVar2 = _CFGetTypeID(param_1);
        lVar3 = _AMBootedModeDeviceGetTypeID();
        if (lVar2 == lVar3) {
          uVar1 = _AMBootedModeDeviceGetProductID(param_1);
        }
        else {
          lVar2 = _CFGetTypeID(param_1);
          lVar3 = _AMPortDFUModeDeviceGetTypeID();
          if (lVar2 == lVar3) {
            uVar1 = _AMPortDFUModeDeviceGetProductID(param_1);
          }
          else {
            uVar1 = 0;
          }
        }
      }
    }
  }
  return uVar1;
}

