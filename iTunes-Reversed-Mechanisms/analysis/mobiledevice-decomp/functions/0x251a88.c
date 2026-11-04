// rea decompile_all
// name: std::vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>::__clear[abi:ne190102]
// address: 0x251a88
// body: available
// range: 0x251a88-0x251ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::vector<std::vector<unsigned short, std::allocator<unsigned short> >,
   std::allocator<std::vector<unsigned short, std::allocator<unsigned short> > >
   >::__clear[abi:ne190102]() */

void __thiscall
std::
vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
::__clear_abi_ne190102_
          (vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
           *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = *(long *)this;
  for (lVar3 = *(long *)(this + 8); lVar3 != lVar1; lVar3 = lVar3 + -0x18) {
    pvVar2 = *(void **)(lVar3 + -0x18);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x10) = pvVar2;
      operator_delete(pvVar2);
    }
  }
  *(long *)(this + 8) = lVar1;
  return;
}

