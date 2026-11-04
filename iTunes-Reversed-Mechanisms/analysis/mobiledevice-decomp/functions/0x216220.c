// rea decompile_all
// name: ACFUError::addError
// address: 0x216220
// body: available
// range: 0x216220-0x216287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUError::addError(std::string, long, __CFError*) */

void __thiscall ACFUError::addError(ACFUError *this,string *param_2,long param_3,__CFError *param_4)

{
  vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>> *this_00;
  ACFUErrorContainer *pAVar1;
  long local_28;
  __CFError *local_20;
  
  this_00 = *(vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>> **)(this + 8);
  pAVar1 = *(ACFUErrorContainer **)(this_00 + 8);
  local_28 = param_3;
  local_20 = param_4;
  if (pAVar1 < *(ACFUErrorContainer **)(this_00 + 0x10)) {
    std::allocator<ACFUErrorContainer>::
    construct_abi_ne190102_<ACFUErrorContainer,std::string_const&,long&,__CFError*&>
              ((allocator<ACFUErrorContainer> *)(this_00 + 0x10),pAVar1,param_2,&local_28,&local_20)
    ;
    pAVar1 = pAVar1 + 0x28;
    *(ACFUErrorContainer **)(this_00 + 8) = pAVar1;
  }
  else {
    pAVar1 = std::vector<ACFUErrorContainer,std::allocator<ACFUErrorContainer>>::
             __emplace_back_slow_path<std::string_const&,long&,__CFError*&>
                       (this_00,param_2,&local_28,&local_20);
  }
  *(ACFUErrorContainer **)(this_00 + 8) = pAVar1;
  return;
}

