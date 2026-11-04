// rea decompile_all
// name: std::vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>::__init_with_size[abi:ne190102]<std::vector<unsigned_short,std::allocator<unsigned_short>>*,std::vector<unsigned_short,std::allocator<unsigned_short>>*>
// address: 0x252328
// body: available
// range: 0x252328-0x25237b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void std::vector<std::vector<unsigned short, std::allocator<unsigned short> >,
   std::allocator<std::vector<unsigned short, std::allocator<unsigned short> > >
   >::__init_with_size[abi:ne190102]<std::vector<unsigned short, std::allocator<unsigned short> >*,
   std::vector<unsigned short, std::allocator<unsigned short> >*>(std::vector<unsigned short,
   std::allocator<unsigned short> >*, std::vector<unsigned short, std::allocator<unsigned short> >*,
   unsigned long) */

void __thiscall
std::
vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
::
__init_with_size_abi_ne190102_<std::vector<unsigned_short,std::allocator<unsigned_short>>*,std::vector<unsigned_short,std::allocator<unsigned_short>>*>
          (vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
           *this,vector *param_1,vector *param_2,ulong param_3)

{
  vector *pvVar1;
  
  if (param_3 != 0) {
    __vallocate_abi_ne190102_(this,param_3);
    pvVar1 = __uninitialized_allocator_copy_impl_abi_ne190102_<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*,std::vector<unsigned_short,std::allocator<unsigned_short>>*,std::vector<unsigned_short,std::allocator<unsigned_short>>*>
                       ((allocator *)(this + 0x10),param_1,param_2,*(vector **)(this + 8));
    *(vector **)(this + 8) = pvVar1;
  }
  return;
}

