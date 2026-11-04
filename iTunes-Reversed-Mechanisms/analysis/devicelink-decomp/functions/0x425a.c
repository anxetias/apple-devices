// rea decompile_all
// name: __DLSingleFromMultiError
// address: 0x425a
// body: available
// range: 0x425a-0x4361 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435d to 0xee55 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __DLSingleFromMultiError(int param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_00015070;
  local_44 = param_1;
  if (param_1 != -0xd) goto LAB_000042f1;
  if ((param_3 == 0) || (lVar2 = _CFDictionaryGetCount(param_3), lVar2 != 1)) {
    param_1 = -1;
    if (param_4 == (long *)0x0) goto LAB_000042f1;
    pcVar3 = &cf_Unexpectedbulkoperationresultcount;
  }
  else {
    local_38 = 0;
    local_40 = 0;
    _CFDictionaryGetKeysAndValues(param_3,&local_38);
    lVar2 = _CFStringCompare(local_38,param_2,0);
    uVar1 = local_40;
    if (lVar2 == 0) {
      uVar4 = _CFDictionaryGetValue(local_40,&cf_DLFileErrorCode);
      _CFNumberGetValue(uVar4,9,&local_44);
      param_1 = local_44;
      if (param_4 != (long *)0x0) {
        lVar2 = _CFDictionaryGetValue(uVar1,&cf_DLFileErrorString);
        *param_4 = lVar2;
        param_1 = local_44;
        if (lVar2 != 0) {
          _CFRetain(lVar2);
          param_1 = local_44;
        }
      }
      goto LAB_000042f1;
    }
    param_1 = -1;
    if (param_4 == (long *)0x0) goto LAB_000042f1;
    pcVar3 = &cf_Unexpectedbulkoperationresultkey;
  }
  param_1 = -1;
  *param_4 = (long)pcVar3;
LAB_000042f1:
  if (*(long *)PTR____stack_chk_guard_00015070 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

