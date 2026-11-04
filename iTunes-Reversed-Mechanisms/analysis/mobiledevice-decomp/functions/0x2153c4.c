// rea decompile_all
// name: std::map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>::insert[abi:ne190102]<std::__map_const_iterator<std::__tree_const_iterator<std::__value_type<__CFString_const*,unsigned_long>,std::__tree_node<std::__value_type<__CFString_const*,unsigned_long>,void*>*,long>>>
// address: 0x2153c4
// body: available
// range: 0x2153c4-0x215428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void std::map<__CFString const*, unsigned long, std::less<__CFString const*>,
   std::allocator<std::pair<__CFString const* const, unsigned long> >
   >::insert[abi:ne190102]<std::__map_const_iterator<std::__tree_const_iterator<std::__value_type<__CFString
   const*, unsigned long>, std::__tree_node<std::__value_type<__CFString const*, unsigned long>,
   void*>*, long> >
   >(std::__map_const_iterator<std::__tree_const_iterator<std::__value_type<__CFString const*,
   unsigned long>, std::__tree_node<std::__value_type<__CFString const*, unsigned long>, void*>*,
   long> >, std::__map_const_iterator<std::__tree_const_iterator<std::__value_type<__CFString
   const*, unsigned long>, std::__tree_node<std::__value_type<__CFString const*, unsigned long>,
   void*>*, long> >) */

void __thiscall
std::
map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
::
insert_abi_ne190102_<std::__map_const_iterator<std::__tree_const_iterator<std::__value_type<__CFString_const*,unsigned_long>,std::__tree_node<std::__value_type<__CFString_const*,unsigned_long>,void*>*,long>>>
          (map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
           *this,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  
  if (param_2 != param_3) {
    do {
      __tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
      ::
      __emplace_hint_unique_key_args<__CFString_const*,std::pair<__CFString_const*const,unsigned_long>const&>
                ((__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
                  *)this,this + 8,param_2 + 4);
      plVar1 = (long *)param_2[1];
      plVar2 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar2[2];
          bVar3 = (long *)*param_2 != plVar2;
          plVar2 = param_2;
        } while (bVar3);
      }
      else {
        do {
          param_2 = plVar1;
          plVar1 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    } while (param_2 != param_3);
  }
  return;
}

