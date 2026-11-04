// rea decompile_all
// name: std::__tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>::__assign_unique<std::pair<__CFString_const*const,ACFURestoreHost::DemoteConfig>const*>
// address: 0x2491fa
// body: available
// range: 0x2491fa-0x2492d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void std::__tree<std::__value_type<__CFString const*, ACFURestoreHost::DemoteConfig>,
   std::__map_value_compare<__CFString const*, std::__value_type<__CFString const*,
   ACFURestoreHost::DemoteConfig>, std::less<__CFString const*>, true>,
   std::allocator<std::__value_type<__CFString const*, ACFURestoreHost::DemoteConfig> >
   >::__assign_unique<std::pair<__CFString const* const, ACFURestoreHost::DemoteConfig>
   const*>(std::pair<__CFString const* const, ACFURestoreHost::DemoteConfig> const*,
   std::pair<__CFString const* const, ACFURestoreHost::DemoteConfig> const*) */

void __thiscall
std::
__tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>
::__assign_unique<std::pair<__CFString_const*const,ACFURestoreHost::DemoteConfig>const*>
          (__tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>
           *this,pair_conflict *param_1,pair_conflict *param_2)

{
  __tree_node *p_Var1;
  ulong extraout_RDX;
  __tree_node *p_Var2;
  __tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>
  *local_40;
  __tree_node *local_38;
  __tree_node *local_30;
  
  if (*(long *)(this + 0x10) != 0) {
    p_Var1 = *(__tree_node **)this;
    *(__tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>
      **)this = this + 8;
    *(undefined8 *)(*(long *)(this + 8) + 0x10) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    p_Var2 = *(__tree_node **)(p_Var1 + 8);
    if (p_Var2 == (__tree_node *)0x0) {
      p_Var2 = p_Var1;
    }
    local_40 = this;
    local_38 = p_Var2;
    local_30 = p_Var2;
    if (p_Var2 != (__tree_node *)0x0) {
      local_38 = (__tree_node *)
                 __tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
                 ::_DetachedTreeCache::__detach_next(p_Var2);
      do {
        if (param_1 == param_2) break;
        __node_assign_unique(this,param_1,p_Var2);
        p_Var1 = local_38;
        p_Var2 = local_30;
        if ((extraout_RDX & 1) != 0) {
          local_30 = local_38;
          if (local_38 == (__tree_node *)0x0) {
            param_1 = param_1 + 0x10;
            break;
          }
          local_38 = (__tree_node *)
                     __tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
                     ::_DetachedTreeCache::__detach_next(local_38);
          p_Var2 = p_Var1;
        }
        param_1 = param_1 + 0x10;
      } while (p_Var2 != (__tree_node *)0x0);
    }
    _DetachedTreeCache::~_DetachedTreeCache_abi_ne190102_((_DetachedTreeCache *)&local_40);
  }
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    __emplace_unique_key_args<__CFString_const*,std::pair<__CFString_const*const,ACFURestoreHost::DemoteConfig>const&>
              (this,(__CFString **)param_1,param_1);
  }
  return;
}

