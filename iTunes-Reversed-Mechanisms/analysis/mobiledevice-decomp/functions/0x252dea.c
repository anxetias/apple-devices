// rea decompile_all
// name: std::vector<__CFString_const*,std::allocator<__CFString_const*>>::__init_with_size[abi:ne190102]<__CFString_const*const*,__CFString_const*const*>
// address: 0x252dea
// body: available
// range: 0x252dea-0x252e31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void std::vector<__CFString const*, std::allocator<__CFString const*>
   >::__init_with_size[abi:ne190102]<__CFString const* const*, __CFString const* const*>(__CFString
   const* const*, __CFString const* const*, unsigned long) */

void __thiscall
std::vector<__CFString_const*,std::allocator<__CFString_const*>>::
__init_with_size_abi_ne190102_<__CFString_const*const*,__CFString_const*const*>
          (vector<__CFString_const*,std::allocator<__CFString_const*>> *this,__CFString **param_1,
          __CFString **param_2,ulong param_3)

{
  void *pvVar1;
  size_t sVar2;
  
  if (param_3 != 0) {
    __vallocate_abi_ne190102_(this,param_3);
    pvVar1 = *(void **)(this + 8);
    sVar2 = (long)param_2 - (long)param_1;
    if (sVar2 != 0) {
      _memmove(pvVar1,param_1,sVar2);
    }
    *(size_t *)(this + 8) = (long)pvVar1 + sVar2;
  }
  return;
}

