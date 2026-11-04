// rea decompile_all
// name: _AMAuthInstallPlatformCreateSoftLink
// address: 0x1b16d6
// body: available
// range: 0x1b16d6-0x1b17ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b17c6 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallPlatformCreateSoftLink(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  char local_828 [1024];
  char local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  cVar1 = _CFURLGetFileSystemRepresentation(param_2,1,local_428,0x400);
  uVar5 = 3;
  if (cVar1 != '\0') {
    cVar1 = _CFURLGetFileSystemRepresentation(param_1,1,local_828,0x400);
    if (cVar1 != '\0') {
      iVar2 = _symlink(local_428,local_828);
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        _AMAuthInstallLog(3,"AMAuthInstallPlatformCreateSoftLink","failed to create link: %s",pcVar4
                         );
        _AMAuthInstallLog(7,"AMAuthInstallPlatformCreateSoftLink","source path: %s; dest path: %s",
                          local_428,local_828);
        uVar5 = 4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

