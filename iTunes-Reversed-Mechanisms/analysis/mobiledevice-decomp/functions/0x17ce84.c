// rea decompile_all
// name: _CoreUARPRestoreAssetTransferProgress
// address: 0x17ce84
// body: available
// range: 0x17ce84-0x17cf3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17cf24 to 0x17af4c _CoreUARPRestoreLogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CoreUARPRestoreAssetTransferProgress
               (long param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (long *)0x0) {
    pcVar3 = "UARP Restore: %s: pAsset is NULL";
  }
  else if (*param_2 == 0) {
    pcVar3 = "UARP Restore: %s: pAsset->_pAsset is NULL";
  }
  else if (*(long *)(param_1 + 8) == 0) {
    pcVar3 = "UARP Restore: %s: fLayer3FirmwareStageProgress is NULL";
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar2 = _uarpAssetTagStructSuperBinary();
      cVar1 = _uarpAssetTagCompare(uVar2,*param_2 + 0x30);
      if (cVar1 == '\x01') {
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
      }
                    /* WARNING: Could not recover jumptable at 0x0017cf3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x798),param_3,param_4);
      return;
    }
    pcVar3 = "UARP Restore: %s: fLayer3AssetSolicitationProgress is NULL";
  }
  _CoreUARPRestoreLogError(param_1,1,pcVar3,"CoreUARPRestoreAssetTransferProgress");
  return;
}

