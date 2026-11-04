// rea decompile_all
// name: std::__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>::__count_unique<std::string>
// address: 0x21be92
// body: available
// range: 0x21be92-0x21bf06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* unsigned long std::__tree<std::__value_type<std::string, ACFUFTABFile::CachedFileMetadata>,
   std::__map_value_compare<std::string, std::__value_type<std::string,
   ACFUFTABFile::CachedFileMetadata>, std::less<std::string >, true>,
   std::allocator<std::__value_type<std::string, ACFUFTABFile::CachedFileMetadata> >
   >::__count_unique<std::string >(std::string const&) const */

ulong __thiscall
std::
__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
::__count_unique<std::string>
          (__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
           *this,string *param_1)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    do {
      cVar1 = less<std::string>::operator()[abi_ne190102_
                        ((less<std::string> *)(this + 0x10),param_1,(string *)(plVar2 + 4));
      if (cVar1 == '\0') {
        cVar1 = less<std::string>::operator()[abi_ne190102_
                          ((less<std::string> *)(this + 0x10),(string *)(plVar2 + 4),param_1);
        if (cVar1 == '\0') {
          return 1;
        }
        plVar2 = plVar2 + 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return 0;
}

