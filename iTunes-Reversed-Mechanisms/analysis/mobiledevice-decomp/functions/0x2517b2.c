// rea decompile_all
// name: SERestoreInfo::P73BaseDeliveryObject::~P73BaseDeliveryObject
// address: 0x2517b2
// body: available
// range: 0x2517b2-0x251812 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeliveryObject::~P73BaseDeliveryObject() */

void __thiscall
SERestoreInfo::P73BaseDeliveryObject::~P73BaseDeliveryObject(P73BaseDeliveryObject *this)

{
  void *pvVar1;
  P73BaseDeliveryObject *local_18;
  
  *(undefined ***)this = &PTR__P73BaseDeliveryObject_0044f0c0;
  local_18 = this + 0x80;
  std::vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>::
  __destroy_vector::operator()[abi_ne190102_((__destroy_vector *)&local_18);
  BLOB::~BLOB((BLOB *)(this + 0x58));
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  BLOB::~BLOB((BLOB *)(this + 0x20));
  std::
  __tree<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::__map_value_compare<unsigned_short,std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::less<unsigned_short>,true>,std::allocator<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>>>
  ::destroy((__tree<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::__map_value_compare<unsigned_short,std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::less<unsigned_short>,true>,std::allocator<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>>>
             *)(this + 8),*(__tree_node **)(this + 0x10));
  return;
}

