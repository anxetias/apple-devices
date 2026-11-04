// rea decompile_all
// name: ACFUFTABFile::updateCache
// address: 0x2199d8
// body: available
// range: 0x2199d8-0x219c35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::updateCache(std::string const&, unsigned int, unsigned int) */

undefined8 __thiscall
ACFUFTABFile::updateCache(ACFUFTABFile *this,string *param_1,uint param_2,uint param_3)

{
  __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
  *p_Var1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  string *psVar5;
  uint7 uVar6;
  undefined1 auVar7 [12];
  string *local_48;
  __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
  *local_40;
  
  local_40 = (__tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
              *)(this + 0x28);
  psVar5 = param_1;
  auVar7 = std::
           __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
           ::find<std::string>(local_40,param_1);
  if (((byte)*param_1 & 1) == 0) {
    uVar2 = (ulong)((byte)*param_1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (uVar2 != 4) {
    updateCache(param_1,(uint)psVar5,auVar7._8_4_);
    return 0;
  }
  uVar6 = (uint7)(uint3)(param_2 >> 8);
  if (param_3 == 0 && param_2 == 0) {
    uVar3 = ACFULogging::getLogInstance();
    if (((byte)*param_1 & 1) == 0) {
      psVar5 = param_1 + 1;
    }
    else {
      psVar5 = *(string **)(param_1 + 0x10);
    }
    if (auVar7._0_8_ == this + 0x30) {
      ACFULogging::handleMessage
                (uVar3,4,
                 "%s::%s: attempting to delete file from cache that does not exist. File: %s\n",
                 "ACFUFTABFile","updateCache",psVar5);
    }
    else {
      ACFULogging::handleMessage
                (uVar3,4,"%s::%s: removing file from FTAB cache. File: %s\n","ACFUFTABFile",
                 "updateCache",psVar5);
      std::
      __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
      ::__erase_unique<std::string>(local_40,param_1);
    }
  }
  else {
    local_48 = param_1;
    if (auVar7._0_8_ != this + 0x30) {
      uVar3 = ACFULogging::getLogInstance();
      p_Var1 = local_40;
      if (((byte)*param_1 & 1) == 0) {
        psVar5 = param_1 + 1;
      }
      else {
        psVar5 = *(string **)(param_1 + 0x10);
      }
      ACFULogging::handleMessage
                (uVar3,4,"%s::%s: ftab cache entry updated. File: %s, offset: %u, size: %u\n",
                 "ACFUFTABFile","updateCache",psVar5,param_2,param_3);
      if (param_2 != 0) {
        lVar4 = std::
                __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
                ::
                __emplace_unique_key_args<std::string,std::piecewise_construct_t_const&,std::tuple<std::string_const&>,std::tuple<>>
                          ((string *)p_Var1,(piecewise_construct_t *)param_1,
                           (tuple *)&std::piecewise_construct,(tuple *)&local_48);
        *(uint *)(lVar4 + 0x3c) = param_2;
      }
      uVar3 = CONCAT71(uVar6,1);
      if (param_3 == 0) {
        return uVar3;
      }
      local_48 = param_1;
      lVar4 = std::
              __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
              ::
              __emplace_unique_key_args<std::string,std::piecewise_construct_t_const&,std::tuple<std::string_const&>,std::tuple<>>
                        ((string *)p_Var1,(piecewise_construct_t *)param_1,
                         (tuple *)&std::piecewise_construct,(tuple *)&local_48);
      *(uint *)(lVar4 + 0x38) = param_3;
      return uVar3;
    }
    uVar3 = ACFULogging::getLogInstance();
    if (((byte)*param_1 & 1) == 0) {
      psVar5 = param_1 + 1;
    }
    else {
      psVar5 = *(string **)(param_1 + 0x10);
    }
    if ((param_2 == 0) || (param_3 == 0)) {
      ACFULogging::handleMessage
                (uVar3,2,
                 "%s::%s: attempting to add new file to cache, but not both size and offset are provided. File: %s\n"
                 ,"ACFUFTABFile","updateCache",psVar5);
      return 0;
    }
    ACFULogging::handleMessage
              (uVar3,4,"%s::%s: Adding new file to FTAB cache. File: %s, offset: %u, size: %u\n",
               "ACFUFTABFile","updateCache",psVar5,param_2,param_3);
    p_Var1 = local_40;
    lVar4 = std::
            __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
            ::
            __emplace_unique_key_args<std::string,std::piecewise_construct_t_const&,std::tuple<std::string_const&>,std::tuple<>>
                      ((string *)local_40,(piecewise_construct_t *)param_1,
                       (tuple *)&std::piecewise_construct,(tuple *)&local_48);
    *(uint *)(lVar4 + 0x3c) = param_2;
    local_48 = param_1;
    lVar4 = std::
            __tree<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::__map_value_compare<std::string,std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>,std::less<std::string>,true>,std::allocator<std::__value_type<std::string,ACFUFTABFile::CachedFileMetadata>>>
            ::
            __emplace_unique_key_args<std::string,std::piecewise_construct_t_const&,std::tuple<std::string_const&>,std::tuple<>>
                      ((string *)p_Var1,(piecewise_construct_t *)param_1,
                       (tuple *)&std::piecewise_construct,(tuple *)&local_48);
    *(uint *)(lVar4 + 0x38) = param_3;
  }
  return CONCAT71(uVar6,1);
}

