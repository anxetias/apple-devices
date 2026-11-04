// rea decompile_all
// name: __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
// address: 0x215274
// body: available
// range: 0x215274-0x215301 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2152fd to 0x25a6c8 std::string::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
               (long *param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  ulong uVar3;
  
  sVar1 = _strlen(param_2);
  if (0xfffffffffffffff7 < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::string::__throw_length_error_abi_ne190102_();
  }
  if (sVar1 < 0x17) {
    *(char *)param_1 = (char)sVar1 * '\x02';
    pcVar2 = (char *)((long)param_1 + 1);
    if (sVar1 == 0) goto LAB_002152ec;
  }
  else {
    uVar3 = 0x1a;
    if ((sVar1 | 7) != 0x17) {
      uVar3 = (sVar1 | 7) + 1;
    }
    pcVar2 = operator_new(uVar3);
    param_1[2] = (long)pcVar2;
    *param_1 = uVar3 + 1;
    param_1[1] = sVar1;
  }
  _memmove(pcVar2,param_2,sVar1);
LAB_002152ec:
  pcVar2[sVar1] = '\0';
  return;
}

