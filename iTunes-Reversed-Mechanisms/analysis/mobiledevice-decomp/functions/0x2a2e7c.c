// rea decompile_all
// name: _BbfwReaderOpen
// address: 0x2a2e7c
// body: available
// range: 0x2a2e7c-0x2a2f79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a2f75 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _BbfwReaderOpen(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uStack_440;
  char *local_430;
  undefined1 local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  local_430 = (char *)0x0;
  iVar2 = _AMAuthInstallSupportCopyPreserveFileURL
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_1,&local_430,0);
  if (iVar2 == 0) {
    cVar1 = _CFURLGetFileSystemRepresentation(local_430,1,local_428,0x400);
    if (cVar1 == '\0') {
      lVar3 = 0;
      goto LAB_002a2f2e;
    }
    lVar3 = _amai_unzOpen(local_428);
    if (lVar3 != 0) goto LAB_002a2f2e;
    _AMAuthInstallLog(3,"BbfwReaderOpen","failed to open bbfw archive for reading");
    pcVar5 = "Bbfw url: %@";
    uStack_440 = 7;
    pcVar4 = local_430;
  }
  else {
    pcVar5 = "%s: failed to get new URL";
    pcVar4 = "BbfwReaderOpen";
    uStack_440 = 3;
  }
  lVar3 = 0;
  _AMAuthInstallLog(uStack_440,"BbfwReaderOpen",pcVar5,pcVar4);
LAB_002a2f2e:
  _SafeRelease(local_430);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

