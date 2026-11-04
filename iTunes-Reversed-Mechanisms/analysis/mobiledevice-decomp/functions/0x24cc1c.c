// rea decompile_all
// name: std::map<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>>>::at
// address: 0x24cc1c
// body: available
// range: 0x24cc1c-0x24cc53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24cc49 to 0x21ee84 std::__throw_out_of_range[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::map<unsigned int, std::map<unsigned int, unsigned int, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned int> > >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, std::map<unsigned int, unsigned int,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > > > >
   >::at(unsigned int const&) const */

undefined8 * __thiscall
std::
map<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>>>
::at(map<unsigned_int,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>>>>
     *this,uint *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != (undefined8 *)0x0) {
    do {
      if (*param_1 < *(uint *)(puVar1 + 4)) {
        puVar1 = (undefined8 *)*puVar1;
      }
      else {
        if (*param_1 <= *(uint *)(puVar1 + 4)) {
          return puVar1 + 5;
        }
        puVar1 = (undefined8 *)puVar1[1];
      }
    } while (puVar1 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  __throw_out_of_range_abi_ne190102_("map::at:  key not found");
}

