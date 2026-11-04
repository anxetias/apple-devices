// rea decompile_all
// name: _fAssetStore
// address: 0x18401e
// body: available
// range: 0x18401e-0x1840e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1840b5 to 0x17ce84 _CoreUARPRestoreAssetTransferProgress (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1840e3 to 0x17af4c _CoreUARPRestoreLogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fAssetStore(undefined8 param_1,long param_2,undefined8 param_3,void *param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  if (*(FILE **)(param_2 + 0x10) == (FILE *)0x0) {
    pcVar3 = "UARP Restore (Asset Solicitation): %s: pAsset->_fp is NULL";
  }
  else {
    iVar1 = _fseek(*(FILE **)(param_2 + 0x10),(ulong)param_6,0);
    if (iVar1 != -1) {
      sVar2 = _fwrite(param_4,1,(ulong)param_5,*(FILE **)(param_2 + 0x10));
      *(int *)(param_2 + 0x138) = *(int *)(param_2 + 0x138) + (int)sVar2;
      _fflush(*(FILE **)(param_2 + 0x10));
      _CoreUARPRestoreLogDebug
                (param_1,1,"UARP Restore (Asset Solicitation): %s: %u bytes written","fAssetStore",
                 *(undefined4 *)(param_2 + 0x138));
      _CoreUARPRestoreAssetTransferProgress
                (param_1,param_2,*(undefined4 *)(param_2 + 0x138),*(undefined4 *)(param_2 + 0x134));
      return;
    }
    pcVar3 = "UARP Restore (Asset Solicitation): %s: fseek failed";
  }
  _CoreUARPRestoreLogError(param_1,1,pcVar3,"fAssetStore");
  return;
}

