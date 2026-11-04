// rea decompile_all
// name: std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>,void*>>>::operator()[abi:ne190102]
// address: 0x24d134
// body: available
// range: 0x24d134-0x24d16b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24d160 to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<unsigned int,
   std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned
   int const, unsigned int> > > >, void*> >
   >::operator()[abi:ne190102](std::__tree_node<std::__value_type<unsigned int, std::map<unsigned
   int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned
   int> > > >, void*>*) */

void __thiscall
std::
__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>,void*>>>
::operator()[abi_ne190102_
          (__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>,void*>>>
           *this,__tree_node *param_1)

{
  if (this[8] ==
      (__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>,void*>>>
       )0x1) {
    __tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
    ::destroy((__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
               *)(param_1 + 0x28),*(__tree_node **)(param_1 + 0x30));
  }
  else if (param_1 == (__tree_node *)0x0) {
    return;
  }
  operator_delete(param_1);
  return;
}

