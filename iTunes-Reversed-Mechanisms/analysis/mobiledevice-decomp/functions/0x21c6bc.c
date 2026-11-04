// rea decompile_all
// name: std::__allocate_at_least[abi:ne190102]<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
// address: 0x21c6bc
// body: available
// range: 0x21c6bc-0x21c6f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21c6ef to 0x24ce50 std::__throw_bad_array_new_length[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__allocation_result<std::allocator_traits<std::allocator<std::vector<unsigned short,
   std::allocator<unsigned short> > > >::pointer>
   std::__allocate_at_least[abi:ne190102]<std::allocator<std::vector<unsigned short,
   std::allocator<unsigned short> > > >(std::allocator<std::vector<unsigned short,
   std::allocator<unsigned short> > >&, unsigned long) */

void std::
     __allocate_at_least_abi_ne190102_<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
               (allocator *param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    operator_new(param_2 * 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_array_new_length_abi_ne190102_();
}

