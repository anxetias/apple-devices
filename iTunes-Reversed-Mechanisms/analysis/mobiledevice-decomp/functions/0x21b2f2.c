// rea decompile_all
// name: ACFUFTABFile::copyFWRefByName
// address: 0x21b2f2
// body: available
// range: 0x21b2f2-0x21b4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::copyFWRefByName(std::string const&, unsigned int, unsigned int) */

string * ACFUFTABFile::copyFWRefByName(string *param_1,uint param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  DirectDataRef *pDVar5;
  undefined8 uVar6;
  undefined4 in_ECX;
  undefined4 in_register_00000014;
  string *psVar7;
  char *pcVar8;
  undefined4 in_register_00000034;
  long lVar9;
  uint in_R8D;
  DirectDataRef *local_40;
  string *local_38;
  
  lVar9 = CONCAT44(in_register_00000034,param_2);
  psVar7 = (string *)CONCAT44(in_register_00000014,param_3);
  *(undefined8 *)param_1 = 0;
  local_38 = param_1;
  if (*(ACFUDataContainer **)(lVar9 + 8) == (ACFUDataContainer *)0x0) {
    uVar6 = ACFULogging::getLogInstance();
    pcVar8 = "%s::%s: file data was invalid\n";
  }
  else {
    if (((byte)*psVar7 & 1) == 0) {
      uVar2 = (ulong)((byte)*psVar7 >> 1);
    }
    else {
      uVar2 = *(ulong *)(psVar7 + 8);
    }
    if (uVar2 == 4) {
      cVar1 = ACFUDataContainer::isOptimized(*(ACFUDataContainer **)(lVar9 + 8));
      if ((cVar1 != '\0') &&
         (lVar3 = std::
                  __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                  ::find<std::string>((__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                                       *)(lVar9 + 0x48),psVar7), lVar3 != lVar9 + 0x50)) {
        uVar2 = (ulong)in_R8D;
        pvVar4 = _malloc(uVar2);
        psVar7 = local_38;
        if (pvVar4 == (void *)0x0) {
          uVar6 = ACFULogging::getLogInstance();
          pcVar8 = "%s::%s: failed to allocate data\n";
        }
        else {
          _CFDataGetBytes(*(undefined8 *)(lVar3 + 0x38),in_ECX,uVar2);
          pDVar5 = operator_new(0x18);
          ACFUDataContainer::DirectDataRef::DirectDataRef(pDVar5,pvVar4,uVar2,false);
          std::
          unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>>
          ::reset_abi_ne190102_
                    ((unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>>
                      *)psVar7,pDVar5);
          if (*(long *)psVar7 != 0) {
            return psVar7;
          }
          uVar6 = ACFULogging::getLogInstance();
          pcVar8 = "%s::%s: failed to obtain data ref\n";
        }
        ACFULogging::handleMessage(uVar6,2,pcVar8,"ACFUFTABFile","copyFWRefByName");
        return psVar7;
      }
      lVar3 = std::
              __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
              ::find<std::string>((__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                                   *)(lVar9 + 0x28),psVar7);
      param_1 = local_38;
      if (lVar3 == lVar9 + 0x30) {
        uVar6 = ACFULogging::getLogInstance();
        pcVar8 = "%s::%s: file does not exist\n";
      }
      else {
        ACFUDataContainer::copyDirectData((uint)&local_40,*(ulong *)(lVar9 + 8));
        pDVar5 = local_40;
        local_40 = (DirectDataRef *)0x0;
        std::
        unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>>
        ::reset_abi_ne190102_
                  ((unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>>
                    *)param_1,pDVar5);
        pDVar5 = local_40;
        local_40 = (DirectDataRef *)0x0;
        if (pDVar5 != (DirectDataRef *)0x0) {
          ACFUDataContainer::DirectDataRef::~DirectDataRef(pDVar5);
          operator_delete(pDVar5);
        }
        param_1 = local_38;
        if (*(long *)local_38 != 0) {
          return local_38;
        }
        uVar6 = ACFULogging::getLogInstance();
        pcVar8 = "%s::%s: failed to obtain data ref\n";
      }
    }
    else {
      uVar6 = ACFULogging::getLogInstance();
      pcVar8 = "%s::%s: specified tag name is invalid!\n";
    }
  }
  ACFULogging::handleMessage(uVar6,2,pcVar8,"ACFUFTABFile","copyFWRefByName");
  return param_1;
}

