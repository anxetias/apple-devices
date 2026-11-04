// rea decompile_all
// name: std::vector<std::string,std::allocator<std::string>>::__base_destruct_at_end[abi:ne190102]
// address: 0x21be50
// body: available
// range: 0x21be50-0x21be90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::vector<std::string, std::allocator<std::string >
   >::__base_destruct_at_end[abi:ne190102](std::string*) */

void __thiscall
std::vector<std::string,std::allocator<std::string>>::__base_destruct_at_end_abi_ne190102_
          (vector<std::string,std::allocator<std::string>> *this,string *param_1)

{
  string *psVar1;
  
  for (psVar1 = *(string **)(this + 8); psVar1 != param_1; psVar1 = psVar1 + -0x18) {
    if (((byte)psVar1[-0x18] & 1) != 0) {
      operator_delete(*(void **)(psVar1 + -8));
    }
  }
  *(string **)(this + 8) = param_1;
  return;
}

