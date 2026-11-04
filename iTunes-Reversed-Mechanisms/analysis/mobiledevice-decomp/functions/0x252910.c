// rea decompile_all
// name: std::__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>::__emplace_unique_key_args<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::piecewise_construct_t_const&,std::tuple<std::vector<unsigned_char,std::allocator<unsigned_char>>const&>,std::tuple<>>
// address: 0x252910
// body: available
// range: 0x252910-0x25298a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::pair<std::__tree_iterator<std::__value_type<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >,
   std::__tree_node<std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >, void*>*, long>, bool>
   std::__tree<std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >,
   std::__map_value_compare<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >, std::less<std::vector<unsigned
   char, std::allocator<unsigned char> > >, true>,
   std::allocator<std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> > >
   >::__emplace_unique_key_args<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::piecewise_construct_t const&, std::tuple<std::vector<unsigned char, std::allocator<unsigned
   char> > const&>, std::tuple<> >(std::vector<unsigned char, std::allocator<unsigned char> >
   const&, std::piecewise_construct_t const&, std::tuple<std::vector<unsigned char,
   std::allocator<unsigned char> > const&>&&, std::tuple<>&&) */

undefined1  [16]
std::
__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
::
__emplace_unique_key_args<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::piecewise_construct_t_const&,std::tuple<std::vector<unsigned_char,std::allocator<unsigned_char>>const&>,std::tuple<>>
          (vector *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  __tree_node_base **pp_Var1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  __tree_node_base *local_50 [3];
  __tree_end_node *local_38;
  
  pp_Var1 = __find_equal<std::vector<unsigned_char,std::allocator<unsigned_char>>>
                      ((__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
                        *)param_1,&local_38,(vector *)param_2);
  if (*pp_Var1 == (__tree_node_base *)0x0) {
    __construct_node<std::piecewise_construct_t_const&,std::tuple<std::vector<unsigned_char,std::allocator<unsigned_char>>const&>,std::tuple<>>
              ((__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
                *)local_50,(piecewise_construct_t *)param_1,param_3,param_4);
    __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
    ::__insert_node_at((__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
                        *)param_1,local_38,pp_Var1,local_50[0]);
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

