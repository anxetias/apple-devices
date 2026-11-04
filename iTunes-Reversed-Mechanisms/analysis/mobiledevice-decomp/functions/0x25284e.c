// rea decompile_all
// name: std::__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>::find<std::vector<unsigned_char,std::allocator<unsigned_char>>>
// address: 0x25284e
// body: available
// range: 0x25284e-0x2528b0 inclusive
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
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> > > >::find<std::vector<unsigned
   char, std::allocator<unsigned char> > >(std::vector<unsigned char, std::allocator<unsigned char>
   > const&) */

__tree_end_node * __thiscall
std::
__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
::find<std::vector<unsigned_char,std::allocator<unsigned_char>>>
          (__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
           *this,vector *param_1)

{
  __tree_end_node *p_Var1;
  byte *pbVar2;
  __tree_end_node *p_Var3;
  byte *pbVar4;
  __tree_end_node *p_Var5;
  byte *pbVar6;
  
  p_Var1 = (__tree_end_node *)(this + 8);
  p_Var3 = (__tree_end_node *)
           __lower_bound<std::vector<unsigned_char,std::allocator<unsigned_char>>>
                     (this,param_1,*(__tree_node **)(this + 8),p_Var1);
  p_Var5 = p_Var1;
  if (p_Var3 != p_Var1) {
    p_Var5 = p_Var3;
    if (*(byte **)(p_Var3 + 0x20) != *(byte **)(p_Var3 + 0x28)) {
      pbVar6 = *(byte **)param_1;
      pbVar2 = *(byte **)(p_Var3 + 0x20);
      do {
        pbVar4 = pbVar2 + 1;
        if (pbVar6 == *(byte **)(param_1 + 8)) {
          return p_Var1;
        }
        if (*pbVar6 < *pbVar2) {
          return p_Var1;
        }
        if (*pbVar6 != *pbVar2) {
          return p_Var3;
        }
        pbVar6 = pbVar6 + 1;
        pbVar2 = pbVar4;
      } while (pbVar4 != *(byte **)(p_Var3 + 0x28));
    }
  }
  return p_Var5;
}

