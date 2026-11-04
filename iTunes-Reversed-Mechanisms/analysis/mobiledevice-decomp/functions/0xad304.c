// rea decompile_all
// name: __utf_aware_strcmp
// address: 0xad304
// body: available
// range: 0xad304-0xad401 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xad3fd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __utf_aware_strcmp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char local_828 [1024];
  char local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar4 = _CFStringCreateWithCString(uVar1,param_1,0x8000100);
  lVar5 = _CFStringCreateWithCString(uVar1,param_2,0x8000100);
  ___bzero(local_428,0x400);
  ___bzero(local_828,0x400);
  cVar2 = _CFStringGetFileSystemRepresentation(lVar4,local_428,0x400);
  iVar3 = -1;
  if (cVar2 != '\0') {
    cVar2 = _CFStringGetFileSystemRepresentation(lVar5,local_828,0x400);
    if (cVar2 != '\0') {
      iVar3 = _strcmp(local_428,local_828);
    }
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

