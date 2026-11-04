// rea decompile_all
// name: __AMRDiskFileOpen
// address: 0xfe9b2
// body: available
// range: 0xfe9b2-0xfea96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfea92 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __AMRDiskFileOpen(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 local_430;
  char local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = _CFDictionaryGetValue(param_2,&cf___DiskFilePath__);
  ___bzero(local_428,0x400);
  cVar1 = _CFStringGetFileSystemRepresentation(uVar3,local_428,0x400);
  piVar4 = (int *)0x0;
  if (cVar1 != '\0') {
    iVar2 = _open(local_428,0);
    if (iVar2 != -1) {
      piVar4 = _calloc(1,0x10);
      *piVar4 = iVar2;
      local_430 = 0;
      uVar3 = _CFDictionaryGetValue(param_2,&cf___DiskFileOffset__);
      _CFNumberGetValue(uVar3,4,&local_430);
      *(undefined8 *)(piVar4 + 2) = local_430;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return piVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

