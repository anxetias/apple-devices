// rea decompile_all
// name: RTKitFirmware::create
// address: 0x21d872
// body: available
// range: 0x21d872-0x21d90d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RTKitFirmware::create(std::map<__CFString const*, std::string, std::less<__CFString const*>,
   std::allocator<std::pair<__CFString const* const, std::string > > >, __CFData const*,
   ACFUFTABFile::FTABOptimization) */

RTKitFirmware * __thiscall
RTKitFirmware::create(RTKitFirmware *this,map *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  ACFUFirmware *this_00;
  map<__CFString_const*,std::string,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,std::string>>>
  local_48 [8];
  __tree_node *local_40;
  
  this_00 = operator_new(0x58);
  ACFUFirmware::ACFUFirmware(this_00);
  *(undefined ***)this_00 = &PTR_openFirmwareInRestoreOptions_0044ded0;
  *(undefined4 *)(this_00 + 0x54) = 0;
  *(ACFUFirmware **)this = this_00;
  std::
  map<__CFString_const*,std::string,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,std::string>>>
  ::map_abi_ne190102_(local_48,param_2);
  cVar1 = init((RTKitFirmware *)this_00,local_48,param_3,param_4);
  std::
  __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
  ::destroy((__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
             *)local_48,local_40);
  if (cVar1 == '\0') {
    *(undefined8 *)this = 0;
    (**(code **)(*(long *)this_00 + 0x38))(this_00);
  }
  return this;
}

