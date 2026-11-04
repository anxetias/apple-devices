// rea decompile_all
// name: _AMAuthInstallSupportWriteDataToFileURL
// address: 0x29ec6e
// body: available
// range: 0x29ec6e-0x29ed09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallSupportWriteDataToFileURL
              (undefined8 param_1,long param_2,long param_3,char param_4)

{
  int iVar1;
  long lVar2;
  long local_28;
  
  local_28 = 0;
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (param_4 == '\0') {
    iVar1 = _AMAuthInstallSupportCopyPreserveFileURL(param_1,param_3,&local_28,1);
    lVar2 = local_28;
    if (iVar1 != 0) {
      _AMAuthInstallLog(3,"AMAuthInstallSupportWriteDataToFileURL",
                        "AMAuthInstallSupportCopyPreserveFileURL failed.");
      goto LAB_0029ecd1;
    }
  }
  else {
    iVar1 = _AMAuthInstallSupportRemoveFile(param_3);
    if (iVar1 != 0) goto LAB_0029ecd1;
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    param_3 = lVar2;
  }
  iVar1 = _AMSupportPlatformWriteDataToFileURL(param_2,param_3);
LAB_0029ecd1:
  if (local_28 != 0) {
    _CFRelease();
  }
  return iVar1;
}

