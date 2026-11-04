// rea decompile_all
// name: std::__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>::__emplace_hint_unique_key_args<SERestoreInfo::AMS_UOS_ID,std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>const&>
// address: 0x24d554
// body: available
// range: 0x24d554-0x24d5bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::pair<std::__tree_iterator<std::__value_type<SERestoreInfo::AMS_UOS_ID, std::string >,
   std::__tree_node<std::__value_type<SERestoreInfo::AMS_UOS_ID, std::string >, void*>*, long>,
   bool> std::__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID, std::string >,
   std::__map_value_compare<SERestoreInfo::AMS_UOS_ID, std::__value_type<SERestoreInfo::AMS_UOS_ID,
   std::string >, std::less<SERestoreInfo::AMS_UOS_ID>, true>,
   std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID, std::string > >
   >::__emplace_hint_unique_key_args<SERestoreInfo::AMS_UOS_ID, std::pair<SERestoreInfo::AMS_UOS_ID
   const, std::string >
   const&>(std::__tree_const_iterator<std::__value_type<SERestoreInfo::AMS_UOS_ID, std::string >,
   std::__tree_node<std::__value_type<SERestoreInfo::AMS_UOS_ID, std::string >, void*>*, long>,
   SERestoreInfo::AMS_UOS_ID const&, std::pair<SERestoreInfo::AMS_UOS_ID const, std::string >
   const&) */

undefined1  [16]
std::
__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
::
__emplace_hint_unique_key_args<SERestoreInfo::AMS_UOS_ID,std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>const&>
          (__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
           *param_1,undefined8 param_2,undefined8 param_3)

{
  __tree_node_base **pp_Var1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  __tree_node_base *local_50 [3];
  undefined1 local_38 [8];
  __tree_end_node *local_30;
  
  pp_Var1 = __find_equal<SERestoreInfo::AMS_UOS_ID>
                      ((__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
                        *)param_1,param_2,&local_30,local_38,param_3);
  if (*pp_Var1 == (__tree_node_base *)0x0) {
    __construct_node<std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>const&>
              ((pair_conflict *)local_50);
    __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
    ::__insert_node_at(param_1,local_30,pp_Var1,local_50[0]);
    uVar2 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar2 = 0;
    local_50[0] = *pp_Var1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = local_50[0];
  return auVar3;
}

