// rea decompile_all
// name: ACFUCommon::getFileSize
// address: 0x21fbe3
// body: available
// range: 0x21fbe3-0x21fcac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21fca8 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUCommon::getFileSize(__CFURL const*) */

undefined8 ACFUCommon::getFileSize(__CFURL *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  __CFURL *p_Var4;
  undefined8 uVar5;
  undefined1 local_4b8 [96];
  undefined8 local_458;
  __CFURL local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_428,0x400);
  cVar1 = _CFURLGetFileSystemRepresentation(param_1,1,local_428,0x400);
  if (cVar1 == '\0') {
    getFileSize(param_1);
    uVar2 = 0xffffffff;
LAB_0021fc99:
    uVar5 = 0;
  }
  else {
    p_Var4 = local_428;
    uVar2 = _open((char *)p_Var4,0);
    if ((int)uVar2 < 0) {
      getFileSize(p_Var4);
      goto LAB_0021fc99;
    }
    p_Var4 = (__CFURL *)(ulong)uVar2;
    iVar3 = _fstat_INODE64(p_Var4,local_4b8);
    if (iVar3 != 0) {
      getFileSize(p_Var4);
      local_458 = 0;
    }
    uVar5 = local_458;
    if (uVar2 == 0) goto LAB_0021fc69;
  }
  _close(uVar2);
LAB_0021fc69:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

