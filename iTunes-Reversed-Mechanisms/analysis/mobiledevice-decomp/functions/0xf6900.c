// rea decompile_all
// name: _AMRAuthInstallAddUUID
// address: 0xf6900
// body: available
// range: 0xf6900-0xf69ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRAuthInstallAddUUID(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long local_28;
  
  if (param_1 == 0) {
    _AMRAuthInstallAddUUID_cold_4();
  }
  else {
    if (param_2 != 0) {
      local_28 = 0;
      uVar2 = _CFGetAllocator();
      iVar1 = _AMRAuthInstallGetUUIDString(uVar2,param_2,&local_28);
      if (iVar1 != 0) {
        _AMRAuthInstallAddUUID_cold_1();
        return iVar1;
      }
      if (local_28 != 0) {
        iVar1 = _AMAuthInstallSetUUID(param_1);
        if (iVar1 != 0) {
          _AMRLog(3,&cf_failedtoadduuid);
          iVar1 = _AMAuthInstallToRestoreError(iVar1);
          return iVar1;
        }
        return 0;
      }
      _AMRAuthInstallAddUUID_cold_2();
      return 0xbc6;
    }
    _AMRAuthInstallAddUUID_cold_3();
  }
  return 1;
}

