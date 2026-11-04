// rea decompile_all
// name: std::string::string[abi:ne190102]
// address: 0x220e4c
// body: available
// range: 0x220e4c-0x220ed2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x220ece to 0x25a6c8 std::string::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::string::string[abi:ne190102](unsigned long, char) */

void __thiscall std::string::string_abi_ne190102_(string *this,ulong param_1,char param_2)

{
  string *psVar1;
  ulong uVar2;
  
  if (0xfffffffffffffff7 < param_1) {
                    /* WARNING: Subroutine does not return */
    __throw_length_error_abi_ne190102_();
  }
  if (param_1 < 0x17) {
    *this = (string)((char)param_1 * '\x02');
    psVar1 = this + 1;
    if (param_1 == 0) goto LAB_00220ebd;
  }
  else {
    uVar2 = 0x1a;
    if ((param_1 | 7) != 0x17) {
      uVar2 = (param_1 | 7) + 1;
    }
    psVar1 = operator_new(uVar2);
    *(string **)(this + 0x10) = psVar1;
    *(ulong *)this = uVar2 + 1;
    *(ulong *)(this + 8) = param_1;
  }
  _memset(psVar1,(uint)(byte)param_2,param_1);
LAB_00220ebd:
  psVar1[param_1] = (string)0x0;
  return;
}

