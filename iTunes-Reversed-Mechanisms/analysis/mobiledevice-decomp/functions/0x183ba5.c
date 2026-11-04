// rea decompile_all
// name: _fPayloadData
// address: 0x183ba5
// body: available
// range: 0x183ba5-0x183c9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x183c62 to 0x17ce84 _CoreUARPRestoreAssetTransferProgress (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x183c96 to 0x17af4c _CoreUARPRestoreLogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fPayloadData(undefined8 param_1,long param_2,void *param_3,uint param_4,ulong param_5)

{
  long lVar1;
  FILE *pFVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar1 = *(long *)(param_2 + 0x128);
  lVar6 = (ulong)*(ushort *)(param_2 + 0x130) * 0x160;
  pFVar2 = *(FILE **)(lVar1 + 0x58 + lVar6);
  if (pFVar2 == (FILE *)0x0) {
    pcVar5 = "UARP Restore (Asset Solicitation): %s: pPayload->_fp is NULL";
  }
  else {
    iVar3 = _fseek(pFVar2,param_5 & 0xffffffff,0);
    if (iVar3 != -1) {
      puVar7 = (undefined8 *)(lVar6 + lVar1 + 0x58);
      sVar4 = _fwrite(param_3,1,(ulong)param_4,(FILE *)*puVar7);
      *(int *)(param_2 + 0x138) = *(int *)(param_2 + 0x138) + (int)sVar4;
      _fflush((FILE *)*puVar7);
      _CoreUARPRestoreLogDebug
                (param_1,1,"UARP Restore (Asset Solicitation): %s: %u bytes written","fPayloadData",
                 *(undefined4 *)(param_2 + 0x138));
      _CoreUARPRestoreAssetTransferProgress
                (param_1,param_2,*(undefined4 *)(param_2 + 0x138),*(undefined4 *)(param_2 + 0x134));
      return;
    }
    pcVar5 = "UARP Restore (Asset Solicitation): %s: fseek failed";
  }
  _CoreUARPRestoreLogError(param_1,1,pcVar5,"fPayloadData");
  return;
}

