// rea decompile_all
// name: _runASRServer
// address: 0xcb188
// body: available
// range: 0xcb188-0xcb2cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcb2c9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _runASRServer(__AMRestoreModeDevice*, int, __CFString const*, char const*, __CFDictionary const*,
   unsigned char) */

ulong _runASRServer(__AMRestoreModeDevice *param_1,int param_2,__CFString *param_3,char *param_4,
                   __CFDictionary *param_5,uchar param_6)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar3 = _AMRLazyFileOpenFromOptions(param_5,param_3,1);
  if (lVar3 == 0) {
    ___bzero(local_438,0x400);
    cVar1 = _CFStringGetFileSystemRepresentation(param_3,local_438,0x400);
    if (cVar1 == '\0') {
      uVar5 = 0x16;
    }
    else {
      pcVar6 = _asyncRestoreImageCallback;
      if (param_6 == '\0') {
        pcVar6 = _restoreImageCallback;
      }
      uVar5 = _ASRServerHandleConnection(param_2,local_438,param_4,0,0,pcVar6,param_1);
    }
    if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) goto LAB_000cb2c9;
  }
  else {
    uVar4 = _AMRLazyFileGetSize(lVar3);
    pcVar6 = _asyncRestoreImageCallback;
    if (param_6 == '\0') {
      pcVar6 = _restoreImageCallback;
    }
    uVar2 = _ASRServerHandleConnectionWithProvider
                      (param_2,param_4,pcVar6,param_1,uVar4,_ASRProvideDataCallback,lVar3);
    uVar5 = (ulong)uVar2;
    _AMRLazyFileClose(lVar3);
    if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
LAB_000cb2c9:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  }
  return uVar5;
}

