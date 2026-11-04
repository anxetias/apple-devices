// rea decompile_all
// name: std::__split_buffer<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>&>::__destruct_at_end[abi:ne190102]
// address: 0x251a16
// body: available
// range: 0x251a16-0x251a56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__split_buffer<std::vector<unsigned short, std::allocator<unsigned short> >,
   std::allocator<std::vector<unsigned short, std::allocator<unsigned short> >
   >&>::__destruct_at_end[abi:ne190102](std::vector<unsigned short, std::allocator<unsigned short>
   >*) */

void __thiscall
std::
__split_buffer<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>&>
::__destruct_at_end_abi_ne190102_
          (__split_buffer<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>&>
           *this,vector *param_1)

{
  void *pvVar1;
  vector *pvVar2;
  vector *pvVar3;
  
  pvVar3 = *(vector **)(this + 0x10);
  while (pvVar2 = pvVar3, pvVar2 != param_1) {
    *(vector **)(this + 0x10) = pvVar2 + -0x18;
    pvVar1 = *(void **)(pvVar2 + -0x18);
    pvVar3 = pvVar2 + -0x18;
    if (pvVar1 != (void *)0x0) {
      *(void **)(pvVar2 + -0x10) = pvVar1;
      operator_delete(pvVar1);
      pvVar3 = *(vector **)(this + 0x10);
    }
  }
  return;
}

