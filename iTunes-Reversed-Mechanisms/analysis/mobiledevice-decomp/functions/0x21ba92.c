// rea decompile_all
// name: ACFUFTABFile::~ACFUFTABFile
// address: 0x21ba92
// body: available
// range: 0x21ba92-0x21bb21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21bb1d to 0x21f664 ACFUFile::~ACFUFile (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::~ACFUFTABFile() */

void __thiscall ACFUFTABFile::~ACFUFTABFile(ACFUFTABFile *this)

{
  ACFUFTABFile *pAVar1;
  ACFUFTABFile *pAVar2;
  ACFUFTABFile *pAVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR_copyFWDataByName_0044de40;
  pAVar2 = *(ACFUFTABFile **)(this + 0x48);
  while (pAVar2 != this + 0x50) {
    if (*(long *)(pAVar2 + 0x38) != 0) {
      _CFRelease();
      *(long *)(pAVar2 + 0x38) = 0;
    }
    pAVar1 = *(ACFUFTABFile **)(pAVar2 + 8);
    pAVar3 = pAVar2;
    if (*(ACFUFTABFile **)(pAVar2 + 8) == (ACFUFTABFile *)0x0) {
      do {
        pAVar2 = *(ACFUFTABFile **)(pAVar3 + 0x10);
        bVar4 = *(ACFUFTABFile **)pAVar2 != pAVar3;
        pAVar3 = pAVar2;
      } while (bVar4);
    }
    else {
      do {
        pAVar2 = pAVar1;
        pAVar1 = *(ACFUFTABFile **)pAVar2;
      } while (*(ACFUFTABFile **)pAVar2 != (ACFUFTABFile *)0x0);
    }
  }
  std::
  __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
  ::destroy((__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
             *)(this + 0x48),*(__tree_node **)(this + 0x50));
  std::
  __tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
  ::destroy((__tree<std::__value_type<std::string,void_const*>,std::__map_value_compare<std::string,std::__value_type<std::string,void_const*>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,void_const*>>>
             *)(this + 0x28),*(__tree_node **)(this + 0x30));
  ACFUFile::~ACFUFile((ACFUFile *)this);
  return;
}

