// rea decompile_all
// name: std::__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>::__emplace_multi<std::pair<__CFString_const*const,std::string>const&>
// address: 0x21f118
// body: available
// range: 0x21f118-0x21f188 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree_iterator<std::__value_type<__CFString const*, std::string >,
   std::__tree_node<std::__value_type<__CFString const*, std::string >, void*>*, long>
   std::__tree<std::__value_type<__CFString const*, std::string >,
   std::__map_value_compare<__CFString const*, std::__value_type<__CFString const*, std::string >,
   std::less<__CFString const*>, true>, std::allocator<std::__value_type<__CFString const*,
   std::string > > >::__emplace_multi<std::pair<__CFString const* const, std::string >
   const&>(std::pair<__CFString const* const, std::string > const&) */

__tree_node_base *
std::
__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>
::__emplace_multi<std::pair<__CFString_const*const,std::string>const&>(pair_conflict *param_1)

{
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  __tree_end_node *p_Var3;
  __tree_node_base *local_30 [3];
  
  __construct_node<std::pair<__CFString_const*const,std::string>const&>((pair_conflict *)local_30);
  if (*(__tree_node_base **)(param_1 + 8) == (__tree_node_base *)0x0) {
    p_Var3 = (__tree_end_node *)(param_1 + 8);
    p_Var2 = (__tree_node_base *)p_Var3;
  }
  else {
    p_Var1 = *(__tree_node_base **)(param_1 + 8);
    do {
      while (p_Var3 = (__tree_end_node *)p_Var1,
            *(ulong *)(p_Var3 + 0x20) <= *(ulong *)(local_30[0] + 0x20)) {
        p_Var1 = *(__tree_node_base **)(p_Var3 + 8);
        if (*(__tree_node_base **)(p_Var3 + 8) == (__tree_node_base *)0x0) {
          p_Var2 = (__tree_node_base *)(p_Var3 + 8);
          goto LAB_0021f174;
        }
      }
      p_Var2 = (__tree_node_base *)p_Var3;
      p_Var1 = *(__tree_node_base **)p_Var3;
    } while (*(__tree_node_base **)p_Var3 != (__tree_node_base *)0x0);
  }
LAB_0021f174:
  __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
  ::__insert_node_at((__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                      *)param_1,p_Var3,(__tree_node_base **)p_Var2,local_30[0]);
  return local_30[0];
}

