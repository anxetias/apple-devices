// rea decompile_all
// name: SERestoreInfo::SERestoreInfoLog::createVerboseLogString
// address: 0x25a440
// body: available
// range: 0x25a440-0x25a533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25a52f to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SERestoreInfoLog::createVerboseLogString(int, char const*, char const*) */

void __thiscall
SERestoreInfo::SERestoreInfoLog::createVerboseLogString
          (SERestoreInfoLog *this,int param_1,char *param_2,char *param_3)

{
  runtime_error *this_00;
  __darwin_time_t *p_Var1;
  timeval *ptVar2;
  timeval local_58;
  __darwin_time_t local_48;
  char local_40 [24];
  
  if ((uint)param_1 < 5) {
    ptVar2 = &local_58;
    local_58.tv_sec = 0;
    local_58.tv_usec = 0;
    local_58._12_4_ = 0;
    _gettimeofday(ptVar2,(void *)0x0);
    FormatMsg((char *)ptVar2,"[%3.3ld.%1.1d] [%s] %s: %s",local_58.tv_sec,
              (ulong)(uint)(local_58.tv_usec / 1000),
              &__ZN13SERestoreInfoL13logLevelNamesE_rel +
              *(int *)(&__ZN13SERestoreInfoL13logLevelNamesE_rel + (ulong)(uint)param_1 * 4),param_2
              ,param_3);
    return;
  }
  this_00 = (runtime_error *)___cxa_allocate_exception(0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_40,"Assertion: ");
  p_Var1 = (__darwin_time_t *)std::string::append(local_40);
  local_48 = p_Var1[2];
  local_58.tv_sec = *p_Var1;
  local_58._8_8_ = p_Var1[1];
  *p_Var1 = 0;
  p_Var1[1] = 0;
  p_Var1[2] = 0;
  std::runtime_error::runtime_error(this_00,(string *)&local_58);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this_00,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
}

