// rea decompile_all
// name: ACFUFTABFile::copyFWDataByName
// address: 0x21b242
// body: available
// range: 0x21b242-0x21b2f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::copyFWDataByName(std::string const&) */

long __thiscall ACFUFTABFile::copyFWDataByName(ACFUFTABFile *this,string *param_1)

{
  char cVar1;
  ACFUFTABFile *pAVar2;
  long lVar3;
  ulong uVar4;
  __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
  *this_00;
  string *psVar5;
  ACFUDataContainer *this_01;
  
  this_00 = *(__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
              **)(this + 8);
  cVar1 = ACFUDataContainer::isOptimized((ACFUDataContainer *)this_00);
  if (cVar1 != '\0') {
    this_00 = (__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
               *)(this + 0x48);
    pAVar2 = (ACFUFTABFile *)
             std::
             __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
             ::find<std::string>(this_00,param_1);
    if (pAVar2 != this + 0x50) {
      psVar5 = *(string **)(pAVar2 + 0x38);
      lVar3 = _AMSupportSafeRetain();
      if (lVar3 == 0) {
        copyFWDataByName(psVar5);
        return 0;
      }
      return lVar3;
    }
  }
  if (*(long *)(this + 8) == 0) {
    copyFWDataByName((string *)this_00);
  }
  else {
    if (((byte)*param_1 & 1) == 0) {
      uVar4 = (ulong)((byte)*param_1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    if (uVar4 == 4) {
      pAVar2 = (ACFUFTABFile *)
               std::
               __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
               ::find<std::string>((__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                                    *)(this + 0x28),param_1);
      if (pAVar2 == this + 0x30) {
        copyFWDataByName(param_1);
      }
      else {
        this_01 = *(ACFUDataContainer **)(this + 8);
        lVar3 = ACFUDataContainer::copyData
                          (this_01,*(uint *)(pAVar2 + 0x3c),(ulong)*(uint *)(pAVar2 + 0x38));
        if (lVar3 != 0) {
          return lVar3;
        }
        copyFWDataByName((string *)this_01);
      }
    }
    else {
      copyFWDataByName((string *)this_00);
    }
  }
  return 0;
}

