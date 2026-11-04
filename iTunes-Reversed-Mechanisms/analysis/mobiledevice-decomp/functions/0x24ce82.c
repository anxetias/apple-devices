// rea decompile_all
// name: std::__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>::destroy
// address: 0x24ce82
// body: available
// range: 0x24ce82-0x24ceb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24ceaf to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree<std::__value_type<ImageType_t, unsigned short>, std::__map_value_compare<ImageType_t,
   std::__value_type<ImageType_t, unsigned short>, std::less<ImageType_t>, true>,
   std::allocator<std::__value_type<ImageType_t, unsigned short> >
   >::destroy(std::__tree_node<std::__value_type<ImageType_t, unsigned short>, void*>*) */

void __thiscall
std::
__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
::destroy(__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

