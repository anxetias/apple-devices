// rea decompile_all
// name: std::__tree<std::__value_type<ImageType_t,SERestoreInfo::BLOB>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,SERestoreInfo::BLOB>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,SERestoreInfo::BLOB>>>::__emplace_unique_key_args<ImageType_t,std::piecewise_construct_t_const&,std::tuple<ImageType_t_const&>,std::tuple<>>
// address: 0x2553ae
// body: available
// range: 0x2553ae-0x255454 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::pair<std::__tree_iterator<std::__value_type<ImageType_t, SERestoreInfo::BLOB>,
   std::__tree_node<std::__value_type<ImageType_t, SERestoreInfo::BLOB>, void*>*, long>, bool>
   std::__tree<std::__value_type<ImageType_t, SERestoreInfo::BLOB>,
   std::__map_value_compare<ImageType_t, std::__value_type<ImageType_t, SERestoreInfo::BLOB>,
   std::less<ImageType_t>, true>, std::allocator<std::__value_type<ImageType_t, SERestoreInfo::BLOB>
   > >::__emplace_unique_key_args<ImageType_t, std::piecewise_construct_t const&,
   std::tuple<ImageType_t const&>, std::tuple<> >(ImageType_t const&, std::piecewise_construct_t
   const&, std::tuple<ImageType_t const&>&&, std::tuple<>&&) */

undefined1  [16]
std::
__tree<std::__value_type<ImageType_t,SERestoreInfo::BLOB>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,SERestoreInfo::BLOB>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,SERestoreInfo::BLOB>>>
::
__emplace_unique_key_args<ImageType_t,std::piecewise_construct_t_const&,std::tuple<ImageType_t_const&>,std::tuple<>>
          (ImageType_t *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  __tree_node_base *p_Var1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  undefined1 auVar5 [16];
  
  if (*(__tree_node_base **)(param_1 + 8) == (__tree_node_base *)0x0) {
    p_Var4 = (__tree_node_base *)(param_1 + 8);
    p_Var3 = p_Var4;
  }
  else {
    p_Var1 = *(__tree_node_base **)(param_1 + 8);
    do {
      while (p_Var4 = p_Var1, *(int *)(p_Var4 + 0x20) <= *(int *)param_2) {
        if (*(int *)param_2 <= *(int *)(p_Var4 + 0x20)) {
          uVar2 = 0;
          goto LAB_00255443;
        }
        p_Var1 = *(__tree_node_base **)(p_Var4 + 8);
        if (*(__tree_node_base **)(p_Var4 + 8) == (__tree_node_base *)0x0) {
          p_Var3 = p_Var4 + 8;
          goto LAB_002553fc;
        }
      }
      p_Var1 = *(__tree_node_base **)p_Var4;
      p_Var3 = p_Var4;
    } while (*(__tree_node_base **)p_Var4 != (__tree_node_base *)0x0);
  }
LAB_002553fc:
  p_Var1 = operator_new(0x48);
  *(undefined4 *)(p_Var1 + 0x20) = **(undefined4 **)param_4;
  *(undefined ***)(p_Var1 + 0x28) = &PTR__BLOB_0044f1c8;
  *(undefined8 *)(p_Var1 + 0x40) = 0;
  __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
  ::__insert_node_at((__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                      *)param_1,(__tree_end_node *)p_Var4,(__tree_node_base **)p_Var3,p_Var1);
  uVar2 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  p_Var4 = p_Var1;
LAB_00255443:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = p_Var4;
  return auVar5;
}

