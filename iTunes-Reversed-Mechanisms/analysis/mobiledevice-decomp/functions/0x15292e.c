// rea decompile_all
// name: _copy_symlink
// address: 0x15292e
// body: available
// range: 0x15292e-0x152a39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x152a35 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _copy_symlink(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  char local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x401);
  sVar3 = _readlink(param_2,local_438,0x400);
  if (sVar3 == -1) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar1 = _md_log_log;
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    __os_log_internal(0,uVar1,1,"Could not read the symlink %s: %s",param_2,pcVar5);
    iVar2 = -0x17fffffc;
  }
  else {
    iVar2 = _AFCLinkPath(param_1,2,local_438,param_3);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      _pretty_afc_error("make_symlink","Could not create symlink on device",iVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

