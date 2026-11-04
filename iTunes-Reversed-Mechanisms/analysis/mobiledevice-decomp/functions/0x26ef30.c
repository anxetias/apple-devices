// rea decompile_all
// name: _AMRAuthInstallDeletePersonalizedBundle.cold.1
// address: 0x26ef30
// body: available
// range: 0x26ef30-0x26efbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMRAuthInstallDeletePersonalizedBundle_cold_1
               (undefined8 param_1,char *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  cfstringStruct *pcVar3;
  undefined8 uStack_40;
  
  iVar1 = _AMAuthInstallSupportFileURLExists();
  if (iVar1 == 0) {
    if (*param_2 == '\0') {
      pcVar3 = &cf_personalizedbundledoesnotexist_skippingremoval;
      iVar1 = 0;
      uStack_40 = 7;
    }
    else {
      iVar1 = _AMAuthInstallSupportRemoveDirectory(param_1);
      if (iVar1 == 0) {
        pcVar3 = &cf_removedpersonalizedbundle;
        iVar1 = 0;
        uStack_40 = 8;
      }
      else {
        pcVar3 = &cf_failedtoremovepersonalizedbundle;
        uStack_40 = 3;
      }
    }
    _AMRLogWithFilePath(uStack_40,param_3,pcVar3);
  }
  uVar2 = _AMAuthInstallToRestoreError(iVar1);
  *param_4 = uVar2;
  _CFRelease(param_1);
  return;
}

