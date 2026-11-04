// rea decompile_all
// name: std::__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>::_DetachedTreeCache::~_DetachedTreeCache[abi:ne190102]
// address: 0x21f0cc
// body: available
// range: 0x21f0cc-0x21f117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21f10c to 0x21e02e std::__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>::destroy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__tree<std::__value_type<__CFString const*, std::string >,
   std::__map_value_compare<__CFString const*, std::__value_type<__CFString const*, std::string >,
   std::less<__CFString const*>, true>, std::allocator<std::__value_type<__CFString const*,
   std::string > > >::_DetachedTreeCache::~_DetachedTreeCache[abi:ne190102]() */

void __thiscall
std::
__tree<std::__value_type<__CFString_const*,std::string>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,std::string>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,std::string>>>
::_DetachedTreeCache::~_DetachedTreeCache_abi_ne190102_(_DetachedTreeCache *this)

{
  __tree_node *p_Var1;
  __tree_node *p_Var2;
  
  __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
  ::destroy(*(__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
              **)this,*(__tree_node **)(this + 0x10));
  p_Var2 = *(__tree_node **)(this + 8);
  if (p_Var2 != (__tree_node *)0x0) {
    p_Var1 = *(__tree_node **)(p_Var2 + 0x10);
    if (*(__tree_node **)(p_Var2 + 0x10) != (__tree_node *)0x0) {
      do {
        p_Var2 = p_Var1;
        p_Var1 = *(__tree_node **)(p_Var2 + 0x10);
      } while (*(__tree_node **)(p_Var2 + 0x10) != (__tree_node *)0x0);
      *(__tree_node **)(this + 8) = p_Var2;
    }
    __tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
    ::destroy(*(__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
                **)this,p_Var2);
    return;
  }
  return;
}

