// rea decompile_all
// name: std::__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>::__find_equal<std::vector<unsigned_char,std::allocator<unsigned_char>>>
// address: 0x25298c
// body: available
// range: 0x25298c-0x252a3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree_node_base<void*>*& std::__tree<std::__value_type<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >,
   std::__map_value_compare<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >, std::less<std::vector<unsigned
   char, std::allocator<unsigned char> > >, true>,
   std::allocator<std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> > >
   >::__find_equal<std::vector<unsigned char, std::allocator<unsigned char> >
   >(std::__tree_end_node<std::__tree_node_base<void*>*>*&, std::vector<unsigned char,
   std::allocator<unsigned char> > const&) */

__tree_node_base ** __thiscall
std::
__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
::__find_equal<std::vector<unsigned_char,std::allocator<unsigned_char>>>
          (__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
           *this,__tree_end_node **param_1,vector *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  byte *pbVar6;
  byte *pbVar7;
  __tree_node_base *p_Var8;
  
  p_Var4 = (__tree_node_base *)(this + 8);
  p_Var5 = p_Var4;
  if (*(__tree_node_base **)(this + 8) == (__tree_node_base *)0x0) {
LAB_00252a39:
    *param_1 = (__tree_end_node *)p_Var5;
    return (__tree_node_base **)p_Var4;
  }
  pbVar1 = *(byte **)param_2;
  p_Var8 = *(__tree_node_base **)(this + 8);
LAB_002529b4:
  p_Var5 = p_Var8;
  pbVar7 = *(byte **)(p_Var5 + 0x20);
  pbVar6 = pbVar1;
  pbVar2 = pbVar7;
  while (pbVar3 = pbVar1, pbVar2 != *(byte **)(p_Var5 + 0x28)) {
    if ((pbVar6 == *(byte **)(param_2 + 8)) || (*pbVar6 < *pbVar2)) {
      p_Var8 = *(__tree_node_base **)p_Var5;
      p_Var4 = p_Var5;
      goto LAB_00252a29;
    }
    if (*pbVar6 != *pbVar2) break;
    pbVar6 = pbVar6 + 1;
    pbVar2 = pbVar2 + 1;
  }
  do {
    if (pbVar3 == *(byte **)(param_2 + 8)) goto LAB_00252a39;
    if ((pbVar7 == *(byte **)(p_Var5 + 0x28)) || (*pbVar7 < *pbVar3)) break;
    if (*pbVar7 != *pbVar3) goto LAB_00252a39;
    pbVar7 = pbVar7 + 1;
    pbVar3 = pbVar3 + 1;
  } while( true );
  p_Var8 = *(__tree_node_base **)(p_Var5 + 8);
  p_Var4 = p_Var5 + 8;
LAB_00252a29:
  if (p_Var8 == (__tree_node_base *)0x0) goto LAB_00252a39;
  goto LAB_002529b4;
}

