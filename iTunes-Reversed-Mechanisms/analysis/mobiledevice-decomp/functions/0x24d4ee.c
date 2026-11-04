// rea decompile_all
// name: std::map<SERestoreInfo::AMS_UOS_ID,std::string,std::less<SERestoreInfo::AMS_UOS_ID>,std::allocator<std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>>>::map[abi:ne190102]
// address: 0x24d4ee
// body: available
// range: 0x24d4ee-0x24d53c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::map<SERestoreInfo::AMS_UOS_ID, std::string, std::less<SERestoreInfo::AMS_UOS_ID>,
   std::allocator<std::pair<SERestoreInfo::AMS_UOS_ID const, std::string > >
   >::map[abi:ne190102](std::initializer_list<std::pair<SERestoreInfo::AMS_UOS_ID const, std::string
   > >, std::less<SERestoreInfo::AMS_UOS_ID> const&) */

void __thiscall
std::
map<SERestoreInfo::AMS_UOS_ID,std::string,std::less<SERestoreInfo::AMS_UOS_ID>,std::allocator<std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>>>
::map_abi_ne190102_(map<SERestoreInfo::AMS_UOS_ID,std::string,std::less<SERestoreInfo::AMS_UOS_ID>,std::allocator<std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>>>
                    *this,long param_2,long param_3)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(map<SERestoreInfo::AMS_UOS_ID,std::string,std::less<SERestoreInfo::AMS_UOS_ID>,std::allocator<std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>>>
    **)this = this + 8;
  if (param_3 != 0) {
    param_3 = param_3 << 5;
    do {
      __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
      ::
      __emplace_hint_unique_key_args<SERestoreInfo::AMS_UOS_ID,std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>const&>
                (this,this + 8,param_2,param_2);
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  return;
}

