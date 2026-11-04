// rea decompile_all
// name: _AMAuthInstallSupportCompareStringToInt32
// address: 0x1b4300
// body: available
// range: 0x1b4300-0x1b43b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b43b5 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _AMAuthInstallSupportCompareStringToInt32(long param_1,long param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  char local_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  piVar2 = ___error();
  *piVar2 = 0;
  if (param_1 == 0) {
    _AMAuthInstallSupportCompareStringToInt32_cold_2();
  }
  else if (param_2 == 0) {
    _AMAuthInstallSupportCompareStringToInt32_cold_1();
  }
  else {
    lVar3 = _CFDictionaryGetValue(param_1,param_2);
    if (lVar3 != 0) {
      cVar1 = _CFStringGetCString(lVar3,local_48,0x20,0x8000100);
      if (cVar1 != '\0') {
        bVar4 = false;
        lVar3 = _strtol(local_48,(char **)0x0,0x10);
        if ((int)lVar3 == param_3) {
          piVar2 = ___error();
          bVar4 = *piVar2 == 0;
        }
        goto LAB_001b4396;
      }
    }
  }
  bVar4 = false;
LAB_001b4396:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

