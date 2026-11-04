// rea decompile_all
// name: std::__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>::__lower_bound<std::vector<unsigned_char,std::allocator<unsigned_char>>>
// address: 0x2528b2
// body: available
// range: 0x2528b2-0x25290f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree_iterator<std::__value_type<std::vector<unsigned char, std::allocator<unsigned char>
   >, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >,
   std::__tree_node<std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >, void*>*, long>
   std::__tree<std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >,
   std::__map_value_compare<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >, std::less<std::vector<unsigned
   char, std::allocator<unsigned char> > >, true>,
   std::allocator<std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> > >
   >::__lower_bound<std::vector<unsigned char, std::allocator<unsigned char> >
   >(std::vector<unsigned char, std::allocator<unsigned char> > const&,
   std::__tree_node<std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >, void*>*,
   std::__tree_end_node<std::__tree_node_base<void*>*>*) */

__tree_end_node * __thiscall
std::
__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
::__lower_bound<std::vector<unsigned_char,std::allocator<unsigned_char>>>
          (__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
           *this,vector *param_1,__tree_node *param_2,__tree_end_node *param_3)

{
  byte *pbVar1;
  __tree_node *p_Var2;
  __tree_end_node *p_Var3;
  __tree_end_node *p_Var4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (param_2 != (__tree_node *)0x0) {
    p_Var3 = param_3;
    p_Var2 = param_2;
    do {
      param_3 = (__tree_end_node *)p_Var2;
      p_Var4 = param_3;
      if (*(byte **)param_1 != *(byte **)(param_1 + 8)) {
        pbVar5 = *(byte **)(param_3 + 0x20);
        pbVar1 = *(byte **)param_1;
        while ((pbVar6 = pbVar1 + 1, pbVar5 != *(byte **)(param_3 + 0x28) && (*pbVar1 <= *pbVar5)))
        {
          if ((*pbVar5 != *pbVar1) ||
             (pbVar5 = pbVar5 + 1, pbVar1 = pbVar6, pbVar6 == *(byte **)(param_1 + 8)))
          goto LAB_00252905;
        }
        p_Var4 = param_3 + 8;
        param_3 = p_Var3;
      }
LAB_00252905:
      p_Var3 = param_3;
      p_Var2 = (__tree_node *)*(__tree_end_node **)p_Var4;
    } while (*(__tree_end_node **)p_Var4 != (__tree_end_node *)0x0);
  }
  return param_3;
}

