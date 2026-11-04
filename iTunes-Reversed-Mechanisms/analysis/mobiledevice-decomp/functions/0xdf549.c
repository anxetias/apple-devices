// rea decompile_all
// name: __AMRestoreGetFileSize
// address: 0xdf549
// body: available
// range: 0xdf549-0xdf80d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdf809 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000df72e) */
/* WARNING: Removing unreachable block (ram,0x000df7ed) */
/* WARNING: Removing unreachable block (ram,0x000df760) */

undefined8 __AMRestoreGetFileSize(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  char local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_428,0x400);
  if (param_1 == 0) {
    _AMRLog(3,&cf_Can_tfindfilesizefromNULL__s,"_AMRestoreGetFileSize");
    iVar1 = -1;
    iVar2 = 1;
  }
  else {
    _CFStringGetFileSystemRepresentation(param_1,local_428,0x400);
    iVar1 = _open(local_428,0,0);
    if (iVar1 != -1) {
      iVar2 = _fstat_INODE64(iVar1);
      if (iVar2 == -1) {
        piVar3 = ___error();
        iVar2 = __AMRestoreErrorForErrno(*piVar3,0xb);
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        _AMRLogWithFilePath(3,param_1,&cf_fstatfailed__s,pcVar4);
        goto LAB_000df6ea;
      }
LAB_000df6f6:
      _AMRLog(6,&cf__sgotfilesizeoffile_s__lld,"_AMRestoreGetFileSize",local_428,0);
      goto LAB_000df7c0;
    }
    piVar3 = ___error();
    iVar2 = __AMRestoreErrorForErrno(*piVar3,0xc);
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    _AMRLogWithFilePath(3,param_1,&cf_openfailed__s,pcVar4);
    if (iVar2 == 0x11) {
      iVar1 = _lstat_INODE64(local_428);
      if (iVar1 == 0) {
        pcVar5 = &
                 cf__AMRestoreGetFileSize_lstat_2_saysthefileexists_eventhoughopen_2_failedtofindit_Mabyearacecondition_
        ;
      }
      else {
        pcVar5 = &cf__AMRestoreGetFileSize_Lookslikethefilewewereexpectingwasdeletedoutfromunderus_;
      }
      _AMRLog(7,pcVar5);
      iVar2 = 0x11;
      iVar1 = -1;
    }
    else {
LAB_000df6ea:
      if (iVar2 == 0) goto LAB_000df6f6;
    }
  }
  _AMRLog(6,&cf__sfailedtogetsizeoffile__d,"_AMRestoreGetFileSize",iVar2);
LAB_000df7c0:
  if (iVar1 != -1) {
    _close(iVar1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

