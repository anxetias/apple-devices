// rea decompile_all
// name: std::__exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*>>::~__exception_guard_exceptions[abi:ne190102]
// address: 0x252480
// body: available
// range: 0x252480-0x252490 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<std::vector<unsigned
   short, std::allocator<unsigned short> > >, std::vector<unsigned short, std::allocator<unsigned
   short> >*> >::~__exception_guard_exceptions[abi:ne190102]() */

void __thiscall
std::
__exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*>>
::~__exception_guard_exceptions_abi_ne190102_
          (__exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*>>
           *this)

{
  if (this[0x18] ==
      (__exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*>>
       )0x0) {
    _AllocatorDestroyRangeReverse<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*>
    ::operator()[abi_ne190102_
              ((_AllocatorDestroyRangeReverse<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*>
                *)this);
  }
  return;
}

