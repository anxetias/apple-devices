// rea decompile_all
// name: _AMAuthInstallPlatformCopyURLToNewTempDirectory
// address: 0x1b1d30
// body: available
// range: 0x1b1d30-0x1b1e4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b1e4a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallPlatformCopyURLToNewTempDirectory(undefined8 param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  int *piVar5;
  char local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar1 = 1;
  if (param_3 != (long *)0x0 && param_2 != 0) {
    _snprintf(local_438,0x400,"/tmp/%s",param_2);
    pcVar2 = _mkdtemp(local_438);
    if (pcVar2 == (char *)0x0) {
      piVar5 = ___error();
      pcVar2 = _strerror(*piVar5);
      _AMAuthInstallLog(3,"AMAuthInstallPlatformCopyURLToNewTempDirectory",
                        "failed to create tmp dir: %s",pcVar2);
      _AMAuthInstallLog(8,"AMAuthInstallPlatformCopyURLToNewTempDirectory","tmp dir template: %s",
                        param_2);
      uVar1 = 4;
    }
    else {
      sVar3 = _strlen(local_438);
      lVar4 = _CFURLCreateFromFileSystemRepresentation(param_1,local_438,sVar3,1);
      if (lVar4 == 0) {
        _unlink(local_438);
        uVar1 = 2;
      }
      else {
        *param_3 = lVar4;
        uVar1 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

