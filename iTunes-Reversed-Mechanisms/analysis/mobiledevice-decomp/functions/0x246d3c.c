// rea decompile_all
// name: std::__shared_ptr_pointer<RoseCapabilities*,std::shared_ptr<RoseCapabilities>::__shared_ptr_default_delete<RoseCapabilities,RoseCapabilities>,std::allocator<RoseCapabilities>>::__get_deleter
// address: 0x246d3c
// body: available
// range: 0x246d3c-0x246d56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__shared_ptr_pointer<RoseCapabilities*,
   std::shared_ptr<RoseCapabilities>::__shared_ptr_default_delete<RoseCapabilities,
   RoseCapabilities>, std::allocator<RoseCapabilities> >::__get_deleter(std::type_info const&) const
    */

__shared_ptr_pointer<RoseCapabilities*,std::shared_ptr<RoseCapabilities>::__shared_ptr_default_delete<RoseCapabilities,RoseCapabilities>,std::allocator<RoseCapabilities>>
* __thiscall
std::
__shared_ptr_pointer<RoseCapabilities*,std::shared_ptr<RoseCapabilities>::__shared_ptr_default_delete<RoseCapabilities,RoseCapabilities>,std::allocator<RoseCapabilities>>
::__get_deleter(__shared_ptr_pointer<RoseCapabilities*,std::shared_ptr<RoseCapabilities>::__shared_ptr_default_delete<RoseCapabilities,RoseCapabilities>,std::allocator<RoseCapabilities>>
                *this,type_info *param_1)

{
  __shared_ptr_pointer<RoseCapabilities*,std::shared_ptr<RoseCapabilities>::__shared_ptr_default_delete<RoseCapabilities,RoseCapabilities>,std::allocator<RoseCapabilities>>
  *p_Var1;
  
  p_Var1 = (__shared_ptr_pointer<RoseCapabilities*,std::shared_ptr<RoseCapabilities>::__shared_ptr_default_delete<RoseCapabilities,RoseCapabilities>,std::allocator<RoseCapabilities>>
            *)0x0;
  if (*(char **)(param_1 + 8) ==
      "NSt3__110shared_ptrI16RoseCapabilitiesE27__shared_ptr_default_deleteIS1_S1_EE") {
    p_Var1 = this + 0x18;
  }
  return p_Var1;
}

