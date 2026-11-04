// rea decompile_all
// name: _AMAuthInstallPlatformIsRegularFile
// address: 0x1b17cb
// body: available
// range: 0x1b17cb-0x1b1846 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b1842 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 _AMAuthInstallPlatformIsRegularFile(undefined8 param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 local_4a8 [4];
  ushort local_4a4;
  undefined1 local_418 [1024];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_004412b8;
  cVar1 = _CFURLGetFileSystemRepresentation(param_1,1,local_418,0x400);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    _stat_INODE64(local_418,local_4a8);
    uVar2 = CONCAT11((char)((ushort)-(local_4a4 & 0xf000) >> 8),SBORROW2(0,local_4a4 & 0xf000));
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

