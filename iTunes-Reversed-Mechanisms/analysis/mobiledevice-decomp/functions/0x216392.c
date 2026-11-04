// rea decompile_all
// name: std::unique_ptr<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>,std::default_delete<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>>>::reset[abi:ne190102]
// address: 0x216392
// body: available
// range: 0x216392-0x2163bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::unique_ptr<std::vector<ACFUErrorContainer, std::allocator<ACFUErrorContainer> >,
   std::default_delete<std::vector<ACFUErrorContainer, std::allocator<ACFUErrorContainer> > >
   >::reset[abi:ne190102](std::vector<ACFUErrorContainer, std::allocator<ACFUErrorContainer> >*) */

void __thiscall
std::
unique_ptr<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>,std::default_delete<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>>>
::reset_abi_ne190102_
          (unique_ptr<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>,std::default_delete<std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>>>
           *this,vector *param_1)

{
  void *pvVar1;
  void *local_18;
  
  pvVar1 = *(void **)this;
  *(vector **)this = param_1;
  if (pvVar1 != (void *)0x0) {
    local_18 = pvVar1;
    vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>::__destroy_vector::
    operator()[abi_ne190102_((__destroy_vector *)&local_18);
    operator_delete(pvVar1);
  }
  return;
}

