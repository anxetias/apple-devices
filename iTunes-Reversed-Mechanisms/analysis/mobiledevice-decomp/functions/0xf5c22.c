// rea decompile_all
// name: _AMRestoreCreatePathFromURLWithAppendedComponent
// address: 0xf5c22
// body: available
// range: 0xf5c22-0xf5d34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf5d30 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000f5c9c) */

undefined4
_AMRestoreCreatePathFromURLWithAppendedComponent
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent(param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    cVar1 = _CFURLGetFileSystemRepresentation(0,1,local_438,0x400);
    if (cVar1 == '\0') {
      uVar3 = 0xffffffff;
    }
    else {
      lVar4 = _CFStringCreateWithCString(param_1,local_438,0x8000100);
      if (lVar4 == 0) {
        uVar3 = 0x12;
      }
      else {
        uVar5 = _CFRetain(lVar4);
        *param_5 = uVar5;
        _CFRelease(lVar4);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = _AMAuthInstallToRestoreError(iVar2);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

