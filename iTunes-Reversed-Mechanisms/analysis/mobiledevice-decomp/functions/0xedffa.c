// rea decompile_all
// name: _AMRecoveryModeDeviceCopyBoardConfig
// address: 0xedffa
// body: available
// range: 0xedffa-0xee04c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xee035 to 0xe48bb _AMRestoreCopyNormalizedBoardConfig (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRecoveryModeDeviceCopyBoardConfig(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    if ((*(char *)(param_1 + 0x54) == '\0') && (iVar1 = __loadFirmwareInfo(param_1), iVar1 != 0)) {
      return 0;
    }
    lVar2 = __AMRestoreGetResolvedBoardConfig
                      (*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0xac),param_2);
    if (lVar2 != 0) {
      uVar3 = _AMRestoreCopyNormalizedBoardConfig(lVar2);
      return uVar3;
    }
  }
  return 0;
}

