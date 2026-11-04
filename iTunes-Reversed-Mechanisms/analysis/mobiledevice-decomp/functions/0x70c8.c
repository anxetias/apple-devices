// rea decompile_all
// name: _AMSupportPlatformOpenFileStreamWithURL
// address: 0x70c8
// body: available
// range: 0x70c8-0x718b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7187 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


FILE * _AMSupportPlatformOpenFileStreamWithURL(undefined8 param_1,char *param_2)

{
  char cVar1;
  FILE *pFVar2;
  char local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_428,0x400);
  cVar1 = _CFURLGetFileSystemRepresentation(param_1,1,local_428,0x400);
  if (cVar1 == '\0') {
    pFVar2 = (FILE *)0x0;
    _AMSupportLogInternal
              (3,"AMSupportPlatformOpenFileStreamWithURL",
               "failed to convert url to file system representation");
    _AMSupportLogInternal(8,"AMSupportPlatformOpenFileStreamWithURL","%@",param_1);
  }
  else {
    pFVar2 = _fopen(local_428,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return pFVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

