// rea decompile_all
// name: _AMSupportPlatformFileURLExists
// address: 0x263098
// body: available
// range: 0x263098-0x263146 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x263142 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportPlatformFileURLExists(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [1024];
  undefined1 local_b8 [144];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_4c0 = 1;
  if ((param_1 != 0) && (param_2 != 0)) {
    ___bzero(local_b8,0x90);
    ___bzero(local_4b8,0x400);
    cVar1 = _CFURLGetFileSystemRepresentation(param_1,1,local_4b8,0x400);
    if (cVar1 == '\0') {
      uStack_4c0 = 3;
    }
    else {
      iVar2 = _stat_INODE64(local_4b8,local_b8);
      *(bool *)param_2 = iVar2 == 0;
      uStack_4c0 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uStack_4c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

