// rea decompile_all
// name: ACFURestoreHost::~ACFURestoreHost
// address: 0x214a94
// body: available
// range: 0x214a94-0x214b54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x214b50 to 0x216388 ACFUError::~ACFUError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::~ACFURestoreHost() */

void __thiscall ACFURestoreHost::~ACFURestoreHost(ACFURestoreHost *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR_getTags_0044ddf0;
  if (*(long *)(this + 0x10) != 0) {
    _CFRelease();
    *(undefined8 *)(this + 0x10) = 0;
  }
  std::
  __tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>
  ::destroy((__tree<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,ACFURestoreHost::DemoteConfig>>>
             *)(this + 200),*(__tree_node **)(this + 0xd0));
  std::
  __tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
  ::destroy((__tree<std::__value_type<__CFString_const*,unsigned_long>,std::__map_value_compare<__CFString_const*,std::__value_type<__CFString_const*,unsigned_long>,std::less<__CFString_const*>,true>,std::allocator<std::__value_type<__CFString_const*,unsigned_long>>>
             *)(this + 0xa0),*(__tree_node **)(this + 0xa8));
  pvVar1 = *(void **)(this + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x70);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x58);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  ACFUError::~ACFUError((ACFUError *)(this + 0x18));
  return;
}

