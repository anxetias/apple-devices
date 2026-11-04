// rea decompile_all
// name: std::__tree<std::__value_type<unsigned_int,unsigned_int>,std::__map_value_compare<unsigned_int,std::__value_type<unsigned_int,unsigned_int>,std::less<unsigned_int>,true>,std::allocator<std::__value_type<unsigned_int,unsigned_int>>>::__emplace_hint_unique_key_args<unsigned_int,std::pair<unsigned_int_const,unsigned_int>const&>
// address: 0x24ccba
// body: available
// range: 0x24ccba-0x24cd25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::pair<std::__tree_iterator<std::__value_type<unsigned int, unsigned int>,
   std::__tree_node<std::__value_type<unsigned int, unsigned int>, void*>*, long>, bool>
   std::__tree<std::__value_type<unsigned int, unsigned int>, std::__map_value_compare<unsigned int,
   std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>, true>,
   std::allocator<std::__value_type<unsigned int, unsigned int> >
   >::__emplace_hint_unique_key_args<unsigned int, std::pair<unsigned int const, unsigned int>
   const&>(std::__tree_const_iterator<std::__value_type<unsigned int, unsigned int>,
   std::__tree_node<std::__value_type<unsigned int, unsigned int>, void*>*, long>, unsigned int
   const&, std::pair<unsigned int const, unsigned int> const&) */

undefined1  [16] __thiscall
std::
__tree<std::__value_type<unsigned_int,unsigned_int>,std::__map_value_compare<unsigned_int,std::__value_type<unsigned_int,unsigned_int>,std::less<unsigned_int>,true>,std::allocator<std::__value_type<unsigned_int,unsigned_int>>>
::__emplace_hint_unique_key_args<unsigned_int,std::pair<unsigned_int_const,unsigned_int>const&>
          (__tree<std::__value_type<unsigned_int,unsigned_int>,std::__map_value_compare<unsigned_int,std::__value_type<unsigned_int,unsigned_int>,std::less<unsigned_int>,true>,std::allocator<std::__value_type<unsigned_int,unsigned_int>>>
           *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  __tree_node_base **pp_Var1;
  __tree_node_base *p_Var2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 local_38 [8];
  __tree_end_node *local_30;
  
  pp_Var1 = __find_equal<unsigned_int>(this,param_2,&local_30,local_38,param_3);
  p_Var2 = *pp_Var1;
  if (p_Var2 == (__tree_node_base *)0x0) {
    p_Var2 = operator_new(0x28);
    *(undefined8 *)(p_Var2 + 0x1c) = *param_4;
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

