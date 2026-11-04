// rea decompile_all
// name: _AMRLogv
// address: 0xe2100
// body: available
// range: 0xe2100-0xe2214 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe2210 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMRLogv(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 <= _logLevel) {
    lVar2 = _CFStringCreateWithFormatAndArguments
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,param_2,param_3);
    if (lVar2 != 0) {
      ___bzero(local_438,0x400);
      cVar1 = _CFStringGetCString(lVar2,local_438,0x400,0x8000100);
      puVar6 = local_438;
      if (cVar1 == '\0') {
        uVar3 = _CFStringGetLength(lVar2);
        sVar4 = _CFStringGetMaximumSizeForEncoding(uVar3,0x8000100);
        puVar5 = _malloc(sVar4);
        if (puVar5 != (undefined1 *)0x0) {
          _CFStringGetCString(lVar2,puVar5,sVar4,0x8000100);
          puVar6 = puVar5;
        }
      }
      __AMRLogMessage(param_1,puVar6,lVar2);
      _CFRelease(lVar2);
      if (puVar6 != local_438) {
        _free(puVar6);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

