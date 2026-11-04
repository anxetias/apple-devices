// rea decompile_all
// name: std::__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>::_DetachedTreeCache::__detach_next
// address: 0x21f076
// body: available
// range: 0x21f076-0x21f0ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree<std::__value_type<__CFString const*, unsigned long>,
   std::__map_value_compare<__CFString const*, std::__value_type<__CFString const*, unsigned long>,
   std::less<__CFString const*>, true>, std::allocator<std::__value_type<__CFString const*, unsigned
   long> > >::_DetachedTreeCache::__detach_next(std::__tree_node<std::__value_type<__CFString
   const*, unsigned long>, void*>*) */

__tree_node *
std::
__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
::_DetachedTreeCache::__detach_next(__tree_node *param_1)

{
  __tree_node *p_Var1;
  __tree_node *p_Var2;
  
  p_Var1 = *(__tree_node **)(param_1 + 0x10);
  if (p_Var1 == (__tree_node *)0x0) {
    return (__tree_node *)0x0;
  }
  p_Var2 = *(__tree_node **)p_Var1;
  if (p_Var2 == param_1) {
    *(undefined8 *)p_Var1 = 0;
    while (p_Var2 = *(__tree_node **)(p_Var1 + 8),
          *(__tree_node **)(p_Var1 + 8) != (__tree_node *)0x0) {
      do {
        p_Var1 = p_Var2;
        p_Var2 = *(__tree_node **)p_Var1;
      } while (*(__tree_node **)p_Var1 != (__tree_node *)0x0);
    }
  }
  else {
    *(undefined8 *)(p_Var1 + 8) = 0;
    while (p_Var2 != (__tree_node *)0x0) {
      do {
        p_Var1 = p_Var2;
        p_Var2 = *(__tree_node **)p_Var1;
      } while (*(__tree_node **)p_Var1 != (__tree_node *)0x0);
      p_Var2 = *(__tree_node **)(p_Var1 + 8);
    }
  }
  return p_Var1;
}

