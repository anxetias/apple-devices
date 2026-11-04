// rea decompile_all
// name: std::__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>::__construct_node<std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>const&>
// address: 0x24d6ea
// body: available
// range: 0x24d6ea-0x24d742 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::unique_ptr<std::__tree_node<std::__value_type<SERestoreInfo::AMS_UOS_ID, std::string >,
   void*>,
   std::__tree_node_destructor<std::allocator<std::__tree_node<std::__value_type<SERestoreInfo::AMS_UOS_ID,
   std::string >, void*> > > > std::__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID, std::string
   >, std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,
   std::__value_type<SERestoreInfo::AMS_UOS_ID, std::string >, std::less<SERestoreInfo::AMS_UOS_ID>,
   true>, std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID, std::string > >
   >::__construct_node<std::pair<SERestoreInfo::AMS_UOS_ID const, std::string >
   const&>(std::pair<SERestoreInfo::AMS_UOS_ID const, std::string > const&) */

pair_conflict *
std::
__tree<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::__map_value_compare<SERestoreInfo::AMS_UOS_ID,std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>,std::less<SERestoreInfo::AMS_UOS_ID>,true>,std::allocator<std::__value_type<SERestoreInfo::AMS_UOS_ID,std::string>>>
::__construct_node<std::pair<SERestoreInfo::AMS_UOS_ID_const,std::string>const&>
          (pair_conflict *param_1)

{
  void *pvVar1;
  pair_conflict *in_RDX;
  long in_RSI;
  
  pvVar1 = operator_new(0x40);
  *(void **)param_1 = pvVar1;
  *(long *)(param_1 + 8) = in_RSI + 8;
  param_1[0x10] = (pair_conflict)0x0;
  pair<SERestoreInfo::AMS_UOS_ID_const,std::string>::pair_abi_ne190102_
            ((pair<SERestoreInfo::AMS_UOS_ID_const,std::string> *)((long)pvVar1 + 0x20),in_RDX);
  param_1[0x10] = (pair_conflict)0x1;
  return param_1;
}

