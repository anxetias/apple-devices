// rea decompile_all
// name: std::unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>>::reset[abi:ne190102]
// address: 0x2180f0
// body: available
// range: 0x2180f0-0x21811d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x218112 to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::unique_ptr<ACFUDataContainer::DirectDataRef,
   std::default_delete<ACFUDataContainer::DirectDataRef>
   >::reset[abi:ne190102](ACFUDataContainer::DirectDataRef*) */

void __thiscall
std::
unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>>::
reset_abi_ne190102_(unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>>
                    *this,DirectDataRef *param_1)

{
  DirectDataRef *this_00;
  
  this_00 = *(DirectDataRef **)this;
  *(DirectDataRef **)this = param_1;
  if (this_00 != (DirectDataRef *)0x0) {
    ACFUDataContainer::DirectDataRef::~DirectDataRef(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

