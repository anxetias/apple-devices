// rea decompile_all
// name: std::__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>::__construct_node<std::vector<unsigned_char,std::allocator<unsigned_char>>const&,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>
// address: 0x252b6c
// body: available
// range: 0x252b6c-0x252bee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::unique_ptr<std::__tree_node<std::__value_type<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >,
   void*>,
   std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<std::vector<unsigned
   char, std::allocator<unsigned char> >, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject
   const> >, void*> > > > std::__tree<std::__value_type<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >,
   std::__map_value_compare<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >, std::less<std::vector<unsigned
   char, std::allocator<unsigned char> > >, true>,
   std::allocator<std::__value_type<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> > >
   >::__construct_node<std::vector<unsigned char, std::allocator<unsigned char> > const&,
   std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject const> >(std::vector<unsigned char,
   std::allocator<unsigned char> > const&, std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject
   const>&&) */

vector * std::
         __tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
         ::
         __construct_node<std::vector<unsigned_char,std::allocator<unsigned_char>>const&,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>
                   (vector *param_1,shared_ptr *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *in_RCX;
  undefined8 *in_RDX;
  
  pvVar2 = operator_new(0x48);
  *(void **)param_1 = pvVar2;
  *(shared_ptr **)(param_1 + 8) = param_2 + 8;
  param_1[0x10] = (vector)0x0;
  *(undefined8 *)((long)pvVar2 + 0x20) = 0;
  *(undefined8 *)((long)pvVar2 + 0x28) = 0;
  *(undefined8 *)((long)pvVar2 + 0x30) = 0;
  vector<unsigned_char,std::allocator<unsigned_char>>::
  __init_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)((long)pvVar2 + 0x20),
             (uchar *)*in_RDX,(uchar *)in_RDX[1],(long)in_RDX[1] - (long)*in_RDX);
  uVar1 = in_RCX[1];
  *(undefined8 *)((long)pvVar2 + 0x38) = *in_RCX;
  *(undefined8 *)((long)pvVar2 + 0x40) = uVar1;
  *in_RCX = 0;
  in_RCX[1] = 0;
  param_1[0x10] = (vector)0x1;
  return param_1;
}

