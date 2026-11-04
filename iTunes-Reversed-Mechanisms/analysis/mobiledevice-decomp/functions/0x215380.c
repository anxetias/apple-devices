// rea decompile_all
// name: std::map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>::map[abi:ne190102]
// address: 0x215380
// body: available
// range: 0x215380-0x2153ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::map<__CFString const*, unsigned long, std::less<__CFString const*>,
   std::allocator<std::pair<__CFString const* const, unsigned long> >
   >::map[abi:ne190102](std::map<__CFString const*, unsigned long, std::less<__CFString const*>,
   std::allocator<std::pair<__CFString const* const, unsigned long> > > const&) */

void __thiscall
std::
map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
::map_abi_ne190102_(map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                    *this,map *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
    **)this = this + 8;
  insert_abi_ne190102_<std::__map_const_iterator<std::__tree_const_iterator<std::__value_type<__CFString_const*,unsigned_long>,std::__tree_node<std::__value_type<__CFString_const*,unsigned_long>,void*>*,long>>>
            (this,*(undefined8 *)param_1,param_1 + 8);
  return;
}

