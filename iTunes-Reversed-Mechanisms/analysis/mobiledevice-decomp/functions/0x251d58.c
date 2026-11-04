// rea decompile_all
// name: std::__tree<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::__map_value_compare<unsigned_short,std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::less<unsigned_short>,true>,std::allocator<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>>>::__emplace_unique_impl<unsigned_int&,SERestoreInfo::ImageBinary&>
// address: 0x251d58
// body: available
// range: 0x251d58-0x251df5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::pair<std::__tree_iterator<std::__value_type<unsigned short, SERestoreInfo::ImageBinary>,
   std::__tree_node<std::__value_type<unsigned short, SERestoreInfo::ImageBinary>, void*>*, long>,
   bool> std::__tree<std::__value_type<unsigned short, SERestoreInfo::ImageBinary>,
   std::__map_value_compare<unsigned short, std::__value_type<unsigned short,
   SERestoreInfo::ImageBinary>, std::less<unsigned short>, true>,
   std::allocator<std::__value_type<unsigned short, SERestoreInfo::ImageBinary> >
   >::__emplace_unique_impl<unsigned int&, SERestoreInfo::ImageBinary&>(unsigned int&,
   SERestoreInfo::ImageBinary&) */

undefined1  [16]
std::
__tree<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::__map_value_compare<unsigned_short,std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::less<unsigned_short>,true>,std::allocator<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>>>
::__emplace_unique_impl<unsigned_int&,SERestoreInfo::ImageBinary&>
          (uint *param_1,ImageBinary *param_2)

{
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  __tree_end_node *p_Var5;
  undefined1 auVar6 [16];
  __tree_node_base *local_30;
  __tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,void*>>>
  local_28 [16];
  
  __construct_node<unsigned_int&,SERestoreInfo::ImageBinary&>
            ((uint *)&local_30,(ImageBinary *)param_1);
  p_Var1 = local_30;
  if (*(__tree_node_base **)(param_1 + 2) == (__tree_node_base *)0x0) {
    p_Var5 = (__tree_end_node *)(param_1 + 2);
    p_Var3 = (__tree_node_base *)p_Var5;
  }
  else {
    p_Var2 = *(__tree_node_base **)(param_1 + 2);
    do {
      while (p_Var5 = (__tree_end_node *)p_Var2,
            *(ushort *)(p_Var5 + 0x20) <= *(ushort *)(local_30 + 0x20)) {
        if (*(ushort *)(local_30 + 0x20) <= *(ushort *)(p_Var5 + 0x20)) {
          local_30 = (__tree_node_base *)0x0;
          if (p_Var1 != (__tree_node_base *)0x0) {
            __tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,void*>>>
            ::operator()[abi_ne190102_(local_28,(__tree_node *)p_Var1);
          }
          uVar4 = 0;
          goto LAB_00251dea;
        }
        p_Var2 = *(__tree_node_base **)(p_Var5 + 8);
        if (*(__tree_node_base **)(p_Var5 + 8) == (__tree_node_base *)0x0) {
          p_Var3 = (__tree_node_base *)(p_Var5 + 8);
          goto LAB_00251dbc;
        }
      }
      p_Var3 = (__tree_node_base *)p_Var5;
      p_Var2 = *(__tree_node_base **)p_Var5;
    } while (*(__tree_node_base **)p_Var5 != (__tree_node_base *)0x0);
  }
LAB_00251dbc:
  __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
  ::__insert_node_at((__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                      *)param_1,p_Var5,(__tree_node_base **)p_Var3,local_30);
  uVar4 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  p_Var5 = (__tree_end_node *)local_30;
LAB_00251dea:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = p_Var5;
  return auVar6;
}

