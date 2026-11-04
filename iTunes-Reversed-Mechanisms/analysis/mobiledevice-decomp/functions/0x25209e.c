// rea decompile_all
// name: std::__tree<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::__map_value_compare<unsigned_short,std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::less<unsigned_short>,true>,std::allocator<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>>>::destroy
// address: 0x25209e
// body: available
// range: 0x25209e-0x2520f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree<std::__value_type<unsigned short, SERestoreInfo::ImageBinary>,
   std::__map_value_compare<unsigned short, std::__value_type<unsigned short,
   SERestoreInfo::ImageBinary>, std::less<unsigned short>, true>,
   std::allocator<std::__value_type<unsigned short, SERestoreInfo::ImageBinary> >
   >::destroy(std::__tree_node<std::__value_type<unsigned short, SERestoreInfo::ImageBinary>,
   void*>*) */

void __thiscall
std::
__tree<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::__map_value_compare<unsigned_short,std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::less<unsigned_short>,true>,std::allocator<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>>>
::destroy(__tree<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::__map_value_compare<unsigned_short,std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::less<unsigned_short>,true>,std::allocator<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>>>
          *this,__tree_node *param_1)

{
  __tree_node *local_20;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    local_20 = param_1 + 0x58;
    vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>>::__destroy_vector::
    operator()[abi_ne190102_((__destroy_vector *)&local_20);
    SERestoreInfo::BLOB::~BLOB((BLOB *)(param_1 + 0x30));
    operator_delete(param_1);
  }
  return;
}

