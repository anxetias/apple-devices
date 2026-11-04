// rea decompile_all
// name: RTKitFirmware::init
// address: 0x21d948
// body: available
// range: 0x21d948-0x21dad1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RTKitFirmware::init(std::map<__CFString const*, std::string, std::less<__CFString const*>,
   std::allocator<std::pair<__CFString const* const, std::string > > >, __CFData const*,
   ACFUFTABFile::FTABOptimization) */

undefined4 __thiscall
RTKitFirmware::init(RTKitFirmware *this,map *param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  map<__CFString_const*,std::string,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,std::string>>>
  local_50 [8];
  __tree_node *local_48;
  long *local_38;
  int local_30;
  
  std::
  map<__CFString_const*,std::string,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,std::string>>>
  ::map_abi_ne190102_(local_50,param_2);
  cVar2 = ACFUFirmware::init((ACFUFirmware *)this,local_50);
  std::
  __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
  ::destroy((__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
             *)local_50,local_48);
  if (cVar2 == '\0') {
    init();
  }
  else {
    ACFUFTABFile::create((ACFUFTABFile *)&local_38,param_3,param_4,0xffff);
    plVar5 = local_38;
    local_38 = (long *)0x0;
    plVar1 = *(long **)(this + 0x20);
    *(long **)(this + 0x20) = plVar5;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
      plVar1 = local_38;
      local_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      plVar5 = *(long **)(this + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      ___dynamic_cast(plVar5,&ACFUFile::typeinfo,&ACFUFTABFile::typeinfo,0);
      ACFUFTABFile::copyManifest();
      if (local_30 == 0) {
        *(long **)(this + 0x30) = local_38;
        if (local_38 == (long *)0x0) {
          init();
          return 0;
        }
      }
      else {
        if (local_30 != 0x3e9) {
          uVar4 = ACFULogging::getLogInstance();
          ACFULogging::handleMessage
                    (uVar4,2,"%s::%s: failed to get manifest, error: %d\n","RTKitFirmware","init",
                     local_30);
          return 0;
        }
        uVar4 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage(uVar4,0,"%s::%s: No manifest present\n","RTKitFirmware","init");
        *(undefined8 *)(this + 0x30) = 0;
      }
      if ((param_4 & 2) != 0) {
        this[0x50] = (RTKitFirmware)0x1;
      }
      *(undefined4 *)(this + 0x38) = 1;
      uVar3 = (**(code **)(*(long *)this + 0x40))(this);
      return uVar3;
    }
    init();
  }
  return 0;
}

