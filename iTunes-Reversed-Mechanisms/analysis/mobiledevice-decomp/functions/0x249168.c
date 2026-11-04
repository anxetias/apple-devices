// rea decompile_all
// name: std::__tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>::__emplace_unique_key_args<__CFString_const*,std::pair<__CFString_const*const,ACFURestoreHost::DemoteConfig>const&>
// address: 0x249168
// body: available
// range: 0x249168-0x2491f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::pair<std::__tree_iterator<std::__value_type<__CFString const*,
   ACFURestoreHost::DemoteConfig>, std::__tree_node<std::__value_type<__CFString const*,
   ACFURestoreHost::DemoteConfig>, void*>*, long>, bool> std::__tree<std::__value_type<__CFString
   const*, ACFURestoreHost::DemoteConfig>, std::__map_value_compare<__CFString const*,
   std::__value_type<__CFString const*, ACFURestoreHost::DemoteConfig>, std::less<__CFString
   const*>, true>, std::allocator<std::__value_type<__CFString const*,
   ACFURestoreHost::DemoteConfig> > >::__emplace_unique_key_args<__CFString const*,
   std::pair<__CFString const* const, ACFURestoreHost::DemoteConfig> const&>(__CFString const*
   const&, std::pair<__CFString const* const, ACFURestoreHost::DemoteConfig> const&) */

undefined1  [16] __thiscall
std::
__tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>
::
__emplace_unique_key_args<__CFString_const*,std::pair<__CFString_const*const,ACFURestoreHost::DemoteConfig>const&>
          (__tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>
           *this,__CFString **param_1,pair_conflict *param_2)

{
  __tree_node_base *p_Var1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  undefined1 auVar5 [16];
  
  if (*(__tree_node_base **)(this + 8) == (__tree_node_base *)0x0) {
    p_Var4 = (__tree_node_base *)(this + 8);
    p_Var3 = p_Var4;
  }
  else {
    p_Var1 = *(__tree_node_base **)(this + 8);
    do {
      while (p_Var4 = p_Var1, *(__CFString **)(p_Var4 + 0x20) <= *param_1) {
        if (*param_1 <= *(__CFString **)(p_Var4 + 0x20)) {
          uVar2 = 0;
          goto LAB_002491e8;
        }
        p_Var1 = *(__tree_node_base **)(p_Var4 + 8);
        if (*(__tree_node_base **)(p_Var4 + 8) == (__tree_node_base *)0x0) {
          p_Var3 = p_Var4 + 8;
          goto LAB_002491b9;
        }
      }
      p_Var1 = *(__tree_node_base **)p_Var4;
      p_Var3 = p_Var4;
    } while (*(__tree_node_base **)p_Var4 != (__tree_node_base *)0x0);
  }
LAB_002491b9:
  p_Var1 = operator_new(0x30);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(p_Var1 + 0x20) = *(undefined8 *)param_2;
  *(undefined8 *)(p_Var1 + 0x28) = uVar2;
  __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
  ::__insert_node_at((__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                      *)this,(__tree_end_node *)p_Var4,(__tree_node_base **)p_Var3,p_Var1);
  uVar2 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  p_Var4 = p_Var1;
LAB_002491e8:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = p_Var4;
  return auVar5;
}

