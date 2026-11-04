// rea decompile_all
// name: std::vector<__CFString_const*,std::allocator<__CFString_const*>>::__vallocate[abi:ne190102]
// address: 0x220b88
// body: available
// range: 0x220b88-0x220bc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x220bbc to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::vector<__CFString const*, std::allocator<__CFString const*>
   >::__vallocate[abi:ne190102](unsigned long) */

void __thiscall
std::vector<__CFString_const*,std::allocator<__CFString_const*>>::__vallocate_abi_ne190102_
          (vector<__CFString_const*,std::allocator<__CFString_const*>> *this,ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_1 >> 0x3d == 0) {
    auVar2 = __allocate_at_least_abi_ne190102_<std::allocator<__CFString_const*>>
                       ((allocator *)(this + 0x10),param_1);
    lVar1 = auVar2._0_8_;
    *(long *)this = lVar1;
    *(long *)(this + 8) = lVar1;
    *(long *)(this + 0x10) = lVar1 + auVar2._8_8_ * 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_();
}

