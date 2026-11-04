// rea decompile_all
// name: std::__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>::__emplace_hint_unique_key_args<__CFString_const*,std::pair<__CFString_const*const,unsigned_long>const&>
// address: 0x21542a
// body: available
// range: 0x21542a-0x215496 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::pair<std::__tree_iterator<std::__value_type<__CFString const*, unsigned long>,
   std::__tree_node<std::__value_type<__CFString const*, unsigned long>, void*>*, long>, bool>
   std::__tree<std::__value_type<__CFString const*, unsigned long>,
   std::__map_value_compare<__CFString const*, std::__value_type<__CFString const*, unsigned long>,
   std::less<__CFString const*>, true>, std::allocator<std::__value_type<__CFString const*, unsigned
   long> > >::__emplace_hint_unique_key_args<__CFString const*, std::pair<__CFString const* const,
   unsigned long> const&>(std::__tree_const_iterator<std::__value_type<__CFString const*, unsigned
   long>, std::__tree_node<std::__value_type<__CFString const*, unsigned long>, void*>*, long>,
   __CFString const* const&, std::pair<__CFString const* const, unsigned long> const&) */

undefined1  [16] __thiscall
std::
__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
::
__emplace_hint_unique_key_args<__CFString_const*,std::pair<__CFString_const*const,unsigned_long>const&>
          (__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
           *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  __tree_node_base **pp_Var1;
  __tree_node_base *p_Var2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 local_38 [8];
  __tree_end_node *local_30;
  
  pp_Var1 = __tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>
            ::__find_equal<__CFString_const*>
                      ((__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>
                        *)this,param_2,&local_30,local_38,param_3);
  p_Var2 = *pp_Var1;
  if (p_Var2 == (__tree_node_base *)0x0) {
    p_Var2 = operator_new(0x30);
    uVar3 = param_4[1];
    *(undefined8 *)(p_Var2 + 0x20) = *param_4;
    *(undefined8 *)(p_Var2 + 0x28) = uVar3;
    __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
    ::__insert_node_at((__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                        *)this,local_30,pp_Var1,p_Var2);
    uVar3 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = p_Var2;
  return auVar4;
}

