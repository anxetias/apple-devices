// rea decompile_all
// name: std::__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>::__remove_node_pointer
// address: 0x21c222
// body: available
// range: 0x21c222-0x21c26b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree<std::__value_type<std::string, ACFUFTABFile::CachedFileMetadata>,
   std::__map_value_compare<std::string, std::__value_type<std::string,
   ACFUFTABFile::CachedFileMetadata>, std::less<std::string >, true>,
   std::allocator<std::__value_type<std::string, ACFUFTABFile::CachedFileMetadata> >
   >::__remove_node_pointer(std::__tree_node<std::__value_type<std::string,
   ACFUFTABFile::CachedFileMetadata>, void*>*) */

__tree_node * __thiscall
std::
__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
::__remove_node_pointer
          (__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
           *this,__tree_node *param_1)

{
  __tree_node *p_Var1;
  __tree_node *p_Var2;
  __tree_node *p_Var3;
  bool bVar4;
  
  p_Var2 = param_1;
  p_Var1 = *(__tree_node **)(param_1 + 8);
  if (*(__tree_node **)(param_1 + 8) == (__tree_node *)0x0) {
    do {
      p_Var3 = *(__tree_node **)(p_Var2 + 0x10);
      bVar4 = *(__tree_node **)p_Var3 != p_Var2;
      p_Var2 = p_Var3;
    } while (bVar4);
  }
  else {
    do {
      p_Var3 = p_Var1;
      p_Var1 = *(__tree_node **)p_Var3;
    } while (*(__tree_node **)p_Var3 != (__tree_node *)0x0);
  }
  if (*(__tree_node **)this == param_1) {
    *(__tree_node **)this = p_Var3;
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
  __tree_remove_abi_ne190102_<std::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),(__tree_node_base *)param_1);
  return p_Var3;
}

