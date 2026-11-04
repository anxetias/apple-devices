// rea decompile_all
// name: SERestoreInfo::IcefallDeliveryObject::~IcefallDeliveryObject
// address: 0x254ef0
// body: available
// range: 0x254ef0-0x254f49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x254f45 to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallDeliveryObject::~IcefallDeliveryObject() */

void __thiscall
SERestoreInfo::IcefallDeliveryObject::~IcefallDeliveryObject(IcefallDeliveryObject *this)

{
  *(undefined ***)this = &PTR__IcefallDeliveryObject_0044f410;
  BLOB::~BLOB((BLOB *)(this + 0x78));
  BLOB::~BLOB((BLOB *)(this + 0x58));
  std::
  __tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
  ::destroy((__tree<std::__value_type<ImageType_t,unsigned_short>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,unsigned_short>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,unsigned_short>>>
             *)(this + 0x38),*(__tree_node **)(this + 0x40));
  std::
  __tree<std::__value_type<ImageType_t,SERestoreInfo::BLOB>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,SERestoreInfo::BLOB>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,SERestoreInfo::BLOB>>>
  ::destroy((__tree<std::__value_type<ImageType_t,SERestoreInfo::BLOB>,std::__map_value_compare<ImageType_t,std::__value_type<ImageType_t,SERestoreInfo::BLOB>,std::less<ImageType_t>,true>,std::allocator<std::__value_type<ImageType_t,SERestoreInfo::BLOB>>>
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  std::
  __tree<std::__value_type<SERestoreInfo::ApduType_t,std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>>,std::__map_value_compare<SERestoreInfo::ApduType_t,std::__value_type<SERestoreInfo::ApduType_t,std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>>,std::less<SERestoreInfo::ApduType_t>,true>,std::allocator<std::__value_type<SERestoreInfo::ApduType_t,std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>>>>
  ::destroy((__tree<std::__value_type<SERestoreInfo::ApduType_t,std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>>,std::__map_value_compare<SERestoreInfo::ApduType_t,std::__value_type<SERestoreInfo::ApduType_t,std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>>,std::less<SERestoreInfo::ApduType_t>,true>,std::allocator<std::__value_type<SERestoreInfo::ApduType_t,std::vector<SERestoreInfo::ApduBLOB,std::allocator<SERestoreInfo::ApduBLOB>>>>>
             *)(this + 8),*(__tree_node **)(this + 0x10));
  operator_delete(this);
  return;
}

