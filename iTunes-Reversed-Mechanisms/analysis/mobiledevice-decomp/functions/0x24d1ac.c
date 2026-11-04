// rea decompile_all
// name: std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>::map[abi:ne190102]
// address: 0x24d1ac
// body: available
// range: 0x24d1ac-0x24d1d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned
   int const, unsigned int> > >::map[abi:ne190102](std::map<unsigned int, unsigned int,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > > const&)
    */

void __thiscall
std::
map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
::map_abi_ne190102_(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                    *this,map *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    **)this = this + 8;
  insert_abi_ne190102_<std::__map_const_iterator<std::__tree_const_iterator<std::__value_type<unsigned_int,unsigned_int>,std::__tree_node<std::__value_type<unsigned_int,unsigned_int>,void*>*,long>>>
            (this,*(undefined8 *)param_1,param_1 + 8);
  return;
}

