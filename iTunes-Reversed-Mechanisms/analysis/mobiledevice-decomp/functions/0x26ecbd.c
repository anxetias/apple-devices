// rea decompile_all
// name: _AMRAuthInstallCopyFileSystemPathForKeyInBundle
// address: 0x26ecbd
// body: available
// range: 0x26ecbd-0x26ed46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0026ed30) */

int _AMRAuthInstallCopyFileSystemPathForKeyInBundle
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              long *param_5)

{
  int iVar1;
  long lVar2;
  
  if (param_5 == (long *)0x0) {
    iVar1 = 1;
  }
  else {
    iVar1 = _AMRAuthInstallCopyURLForKeyInBundle();
    if (iVar1 == 0) {
      iVar1 = 0;
      lVar2 = _CFURLCopyFileSystemPath(0,0);
      if (lVar2 == 0) {
        _AMRLog(3,&cf_FailedtoconvertURLtofilesytempath);
        iVar1 = 0x1f;
      }
      else {
        *param_5 = lVar2;
      }
    }
    else {
      _AMRLog(3,&cf_FailedtogetURLforkey___,param_3);
    }
  }
  return iVar1;
}

