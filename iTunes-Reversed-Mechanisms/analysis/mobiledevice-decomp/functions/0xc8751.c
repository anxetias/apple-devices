// rea decompile_all
// name: _AMTADModeDeviceGetProductType
// address: 0xc8751
// body: available
// range: 0xc8751-0xc8792 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMTADModeDeviceGetProductType(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    return;
  }
  iVar1 = _AMTADModeDeviceGetBoardID();
  iVar2 = __AMRLoadFirmwareInfoTAD(param_1);
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0xa0) = uVar3 | iVar1 << 0x18;
  return;
}

