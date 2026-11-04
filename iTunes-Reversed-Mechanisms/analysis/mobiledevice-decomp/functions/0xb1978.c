// rea decompile_all
// name: _deleteEntry
// address: 0xb1978
// body: available
// range: 0xb1978-0xb1a3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb1a3a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _deleteEntry(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  char local_418 [1024];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_004412b8;
  cVar1 = _CFStringGetFileSystemRepresentation(param_1,local_418,0x400);
  if (cVar1 != '\0') {
    if (param_2 == 0) {
      iVar2 = _unlink(local_418);
      if (iVar2 == 0) goto LAB_000b1a20;
      piVar3 = ___error();
      pcVar4 = _strerror(*piVar3);
      pcVar5 = &cf_unlinkfailedfor_s__s;
      uVar6 = 0x1ac;
    }
    else {
      iVar2 = _rmdir(local_418);
      if (iVar2 == 0) goto LAB_000b1a20;
      piVar3 = ___error();
      pcVar4 = _strerror(*piVar3);
      pcVar5 = &cf_rmdirfailedfor_s__s;
      uVar6 = 0x1b0;
    }
    _dmlog("deleteEntry",uVar6,pcVar5,local_418,pcVar4);
  }
LAB_000b1a20:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

