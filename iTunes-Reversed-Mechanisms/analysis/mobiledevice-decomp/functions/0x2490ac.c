// rea decompile_all
// name: std::__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>::__node_assign_unique
// address: 0x2490ac
// body: available
// range: 0x2490ac-0x24911b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree<std::__value_type<__CFString const*, unsigned long>,
   std::__map_value_compare<__CFString const*, std::__value_type<__CFString const*, unsigned long>,
   std::less<__CFString const*>, true>, std::allocator<std::__value_type<__CFString const*, unsigned
   long> > >::__node_assign_unique(std::pair<__CFString const* const, unsigned long> const&,
   std::__tree_node<std::__value_type<__CFString const*, unsigned long>, void*>*) */

undefined1  [16] __thiscall
std::
__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
::__node_assign_unique
          (__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
           *this,pair_conflict *param_1,__tree_node *param_2)

{
  ulong uVar1;
  __tree_end_node *p_Var2;
  __tree_end_node *p_Var3;
  __tree_end_node *p_Var4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(ulong *)param_1;
  p_Var2 = *(__tree_end_node **)(this + 8);
  if (*(__tree_end_node **)(this + 8) == (__tree_end_node *)0x0) {
    p_Var3 = (__tree_end_node *)(this + 8);
    p_Var4 = p_Var3;
  }
  else {
    do {
      while (p_Var3 = p_Var2, *(ulong *)(p_Var3 + 0x20) <= uVar1) {
        if (uVar1 <= *(ulong *)(p_Var3 + 0x20)) {
          uVar5 = 0;
          goto LAB_00249112;
        }
        p_Var2 = *(__tree_end_node **)(p_Var3 + 8);
        if (*(__tree_end_node **)(p_Var3 + 8) == (__tree_end_node *)0x0) {
          p_Var4 = p_Var3 + 8;
          goto LAB_002490f2;
        }
      }
      p_Var4 = p_Var3;
      p_Var2 = *(__tree_end_node **)p_Var3;
    } while (*(__tree_end_node **)p_Var3 != (__tree_end_node *)0x0);
  }
LAB_002490f2:
  *(ulong *)(param_2 + 0x20) = uVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 8);
  __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
  ::__insert_node_at((__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                      *)this,p_Var3,(__tree_node_base **)p_Var4,(__tree_node_base *)param_2);
  uVar5 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  p_Var3 = (__tree_end_node *)param_2;
LAB_00249112:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = p_Var3;
  return auVar6;
}

