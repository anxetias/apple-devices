// rea decompile_all
// name: std::__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>::__find_equal<std::string>
// address: 0x21bfee
// body: available
// range: 0x21bfee-0x21c074 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree_node_base<void*>*& std::__tree<std::__value_type<std::string,
   ACFUFTABFile::CachedFileMetadata>, std::__map_value_compare<std::string,
   std::__value_type<std::string, ACFUFTABFile::CachedFileMetadata>, std::less<std::string >, true>,
   std::allocator<std::__value_type<std::string, ACFUFTABFile::CachedFileMetadata> >
   >::__find_equal<std::string >(std::__tree_end_node<std::__tree_node_base<void*>*>*&, std::string
   const&) */

__tree_node_base ** __thiscall
std::
__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
::__find_equal<std::string>
          (__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
           *this,__tree_end_node **param_1,string *param_2)

{
  char cVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  
  p_Var3 = (__tree_node_base *)(this + 8);
  p_Var4 = p_Var3;
  if (*(__tree_node_base **)(this + 8) != (__tree_node_base *)0x0) {
    p_Var2 = *(__tree_node_base **)(this + 8);
    do {
      p_Var4 = p_Var2;
      cVar1 = less<std::string>::operator()[abi_ne190102_
                        ((less<std::string> *)(this + 0x10),param_2,(string *)(p_Var4 + 0x20));
      if (cVar1 == '\0') {
        cVar1 = less<std::string>::operator()[abi_ne190102_
                          ((less<std::string> *)(this + 0x10),(string *)(p_Var4 + 0x20),param_2);
        if (cVar1 == '\0') break;
        p_Var3 = p_Var4 + 8;
        p_Var2 = *(__tree_node_base **)(p_Var4 + 8);
      }
      else {
        p_Var2 = *(__tree_node_base **)p_Var4;
        p_Var3 = p_Var4;
      }
    } while (p_Var2 != (__tree_node_base *)0x0);
  }
  *param_1 = (__tree_end_node *)p_Var4;
  return (__tree_node_base **)p_Var3;
}

