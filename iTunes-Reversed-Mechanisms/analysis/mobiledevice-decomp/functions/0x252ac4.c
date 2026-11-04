// rea decompile_all
// name: std::unique_ptr<std::__tree_node<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,void*>,std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,void*>>>>::reset[abi:ne190102]
// address: 0x252ac4
// body: available
// range: 0x252ac4-0x252af8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x252aed to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::unique_ptr<std::__tree_node<std::__value_type<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >,
   void*>,
   std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<std::vector<unsigned
   char, std::allocator<unsigned char> >, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject
   const> >, void*> > >
   >::reset[abi:ne190102](std::__tree_node<std::__value_type<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >,
   void*>*) */

void __thiscall
std::
unique_ptr<std::__tree_node<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,void*>,std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,void*>>>>
::reset_abi_ne190102_
          (unique_ptr<std::__tree_node<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,void*>,std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,void*>>>>
           *this,__tree_node *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  *(__tree_node **)this = param_1;
  if (pvVar1 != (void *)0x0) {
    if (this[0x10] ==
        (unique_ptr<std::__tree_node<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,void*>,std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,void*>>>>
         )0x1) {
      __destroy_at_abi_ne190102_<std::pair<std::vector<unsigned_char,std::allocator<unsigned_char>>const,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,0>
                ((pair_conflict *)((long)pvVar1 + 0x20));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

