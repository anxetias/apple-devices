// rea decompile_all
// name: __copyRestoreSEPFirmwarePath
// address: 0xf0cf0
// body: available
// range: 0xf0cf0-0xf0d5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __copyRestoreSEPFirmwarePath(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  
  *param_3 = 0;
  cVar1 = _AMRestoreOptionsAreLegacy(param_2);
  uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if (cVar1 == '\0') {
    uVar2 = _AMRAuthInstallCopyFileSystemPathForKey
                      (*(undefined8 *)(param_1 + 200),param_2,&cf_RestoreSEP,param_3);
    if ((uVar2 & 0xfffffff7) != 0) {
      uVar3 = 0;
      _AMRLog(3,&cf_FailedtolocaterestoreSEPfirmware);
    }
  }
  return uVar3 & 0xffffffff;
}

