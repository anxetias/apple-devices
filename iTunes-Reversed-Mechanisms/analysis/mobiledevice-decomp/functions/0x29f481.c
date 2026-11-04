// rea decompile_all
// name: _AMAuthInstallSupportCopyFile
// address: 0x29f481
// body: available
// range: 0x29f481-0x29f556 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallSupportCopyFile(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long local_30;
  
  local_30 = 0;
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  iVar2 = _AMAuthInstallPlatformMakeDirectoryForURL(param_3);
  if (iVar2 == 0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    iVar2 = __AMAuthInstallSupportCreateDataFromCopiedOrMappedFileURL(uVar1,&local_30,param_2,1);
    if (iVar2 == 0) {
      iVar3 = _AMAuthInstallSupportWriteDataToFileURL(uVar1,local_30,param_3,1);
      iVar2 = 0;
      if (iVar3 != 0) {
        _AMAuthInstallLog(3,"AMAuthInstallSupportCopyFile",
                          "AMAuthInstallSupportWriteDataToFileURL failed.");
        iVar2 = iVar3;
      }
      goto LAB_0029f4ec;
    }
    pcVar4 = "AMAuthInstallSupportCreateDataFromFileURL failed.";
  }
  else {
    pcVar4 = "AMAuthInstallSupportMakeDirectory failed.";
  }
  _AMAuthInstallLog(3,"AMAuthInstallSupportCopyFile",pcVar4);
LAB_0029f4ec:
  if (local_30 != 0) {
    _CFRelease();
  }
  return iVar2;
}

