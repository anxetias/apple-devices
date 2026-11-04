// rea decompile_all
// name: __DefaultLogHandler
// address: 0x1abc15
// body: available
// range: 0x1abc15-0x1abdd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1abdcd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DefaultLogHandler(uint param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  if (__DefaultLogHandler_once != -1) {
    __DefaultLogHandler_cold_1();
  }
  uVar1 = __DefaultLogHandler_logHandle;
  if ((int)param_1 < 3) {
    cVar2 = _os_log_type_enabled(__DefaultLogHandler_logHandle,0x11);
    if (cVar2 != '\0') {
      __DefaultLogHandler_cold_3(param_2,uVar1);
    }
  }
  else if (param_1 == 3) {
    cVar2 = _os_log_type_enabled(__DefaultLogHandler_logHandle,0x10);
    if (cVar2 != '\0') {
      __DefaultLogHandler_cold_2(param_2,uVar1);
    }
  }
  else {
    if (param_1 < 6) {
      cVar2 = _os_log_type_enabled(__DefaultLogHandler_logHandle,0);
      if (cVar2 == '\0') goto LAB_001abda8;
      local_38 = 0x8220102;
      pcVar3 = "%{public}s";
      uVar4 = 0;
    }
    else if (param_1 == 6) {
      cVar2 = _os_log_type_enabled(__DefaultLogHandler_logHandle,1);
      if (cVar2 == '\0') goto LAB_001abda8;
      local_38 = 0x8220102;
      pcVar3 = "%{public}s";
      uVar4 = 1;
    }
    else {
      cVar2 = _os_log_type_enabled(__DefaultLogHandler_logHandle,2);
      if (param_1 < 8) {
        if (cVar2 == '\0') goto LAB_001abda8;
        local_38 = 0x8220102;
        pcVar3 = "%{public}s";
      }
      else {
        if (cVar2 == '\0') goto LAB_001abda8;
        local_38 = 0x8200102;
        pcVar3 = "%s";
      }
      uVar4 = 2;
    }
    local_34 = param_2;
    __os_log_impl(0,uVar1,uVar4,pcVar3,&local_38,0xc);
  }
LAB_001abda8:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

