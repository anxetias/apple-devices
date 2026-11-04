// rea decompile_all
// name: _make_and_check_dest_path
// address: 0xad978
// body: available
// range: 0xad978-0xadb07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xadb03 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000adaea) */

undefined8
_make_and_check_dest_path
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5
          ,undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  uVar2 = _snprintf(local_438,0x400,"%s/%s",param_1,param_2);
  if (uVar2 < 0x400) {
    cVar1 = _realpath_parent_no_symlink(local_438,param_3,param_4);
    if (cVar1 != '\0') {
      iVar3 = __utf_aware_strcmp(local_438,param_3);
      if (iVar3 == 0) {
        uVar5 = 1;
        goto LAB_000ada91;
      }
      uVar5 = 0x2c5;
      goto LAB_000ada64;
    }
    lVar4 = __CreateAndLogDMError
                      ("make_and_check_dest_path",0x2bd,extraout_RDX,&cf_Failedtorealpathparentof_s,
                       0,param_6,&cf_Failedtorealpathparentof_s,local_438);
  }
  else {
    uVar5 = 0x2b7;
LAB_000ada64:
    lVar4 = __CreateAndLogDMError("make_and_check_dest_path",uVar5);
  }
  if (param_5 == (long *)0x0) {
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
  }
  else {
    *param_5 = lVar4;
  }
  uVar5 = 0;
LAB_000ada91:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

