// rea decompile_all
// name: _BbfwReaderStart
// address: 0x2a3240
// body: available
// range: 0x2a3240-0x2a336a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a3366 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _BbfwReaderStart(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uStackY_4f0;
  undefined1 local_4d0 [136];
  undefined8 local_448;
  code *local_440;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_448 = param_3;
  local_440 = param_2;
  lVar4 = _BbfwReaderOpen();
  if (lVar4 == 0) {
    _AMAuthInstallLog(3,"BbfwReaderStart","failed to open bbfw archive for reading");
    uStackY_4f0 = 4;
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    do {
      iVar3 = _amai_unzGetCurrentFileInfo(lVar4,local_4d0,local_438,0x400,0,0,0,0);
      if (iVar3 != 0) {
        uStackY_4f0 = 0xf;
        goto LAB_002a3311;
      }
      if (local_438[0] != '\0') {
        lVar5 = _CFStringCreateWithCString(uVar1,local_438,0x8000100);
        if (lVar5 == 0) {
          uStackY_4f0 = 3;
          goto LAB_002a3311;
        }
        cVar2 = (*local_440)(local_448,lVar5,lVar4);
        _CFRelease(lVar5);
        if (cVar2 == '\0') break;
      }
      iVar3 = _amai_unzGoToNextFile(lVar4);
    } while (iVar3 == 0);
    uStackY_4f0 = 0;
LAB_002a3311:
    _amai_unzClose(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uStackY_4f0;
}

