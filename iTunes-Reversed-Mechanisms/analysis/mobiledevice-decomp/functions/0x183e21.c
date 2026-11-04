// rea decompile_all
// name: _fAssetGetBytesAtOffset2
// address: 0x183e21
// body: available
// range: 0x183e21-0x183f1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_fAssetGetBytesAtOffset2
          (long param_1,undefined8 param_2,long param_3,void *param_4,ulong param_5,uint param_6,
          undefined2 *param_7)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = "UARP Restore (Asset Solicitation): %s: pEndpoint is NULL";
    param_1 = 0;
  }
  else {
    if ((param_3 != 0) && (*(FILE **)(param_3 + 0x10) != (FILE *)0x0)) {
      iVar1 = _fseek(*(FILE **)(param_3 + 0x10),(ulong)param_6,0);
      if (iVar1 != -1) {
        sVar2 = _fread(param_4,1,param_5 & 0xffff,*(FILE **)(param_3 + 0x10));
        *param_7 = (short)sVar2;
        _CoreUARPRestoreLogDebug
                  (param_1,1,"UARP Restore (Asset Solicitation): %s: Get %u Bytes from offset %u",
                   "fAssetGetBytesAtOffset2",param_5 & 0xffff,param_6);
        return 0;
      }
      _CoreUARPRestoreLogError
                (param_1,1,"UARP Restore (Asset Solicitation): %s: fseek failed",
                 "fAssetGetBytesAtOffset2");
      return 0x2b;
    }
    pcVar3 = "UARP Restore (Asset Solicitation): %s: pAsset is NULL";
  }
  _CoreUARPRestoreLogError(param_1,1,pcVar3,"fAssetGetBytesAtOffset2");
  return 0x1e;
}

