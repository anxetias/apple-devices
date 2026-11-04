// rea decompile_all
// name: _AMSupportHttpSetUriEscapedValue
// address: 0x262d23
// body: available
// range: 0x262d23-0x262ddc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x262dd8 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMSupportHttpSetUriEscapedValue(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  char *pcVar2;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_30 = 0;
  iVar1 = 1;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    iVar1 = _AMSupportHttpUriEscapeString(param_1,param_4,&local_30);
    if (iVar1 == 0) {
      if (local_30 != 0) {
        _CFDictionarySetValue(param_2,param_3);
        iVar1 = 0;
        goto LAB_00262d81;
      }
      pcVar2 = "escapedValue is NULL";
      iVar1 = 3;
    }
    else {
      pcVar2 = "AMSupportHttpUriEscapeString failed";
    }
    _AMSupportLogInternal(3,"AMSupportHttpSetUriEscapedValue",pcVar2);
  }
LAB_00262d81:
  _AMSupportSafeRelease(local_30);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

