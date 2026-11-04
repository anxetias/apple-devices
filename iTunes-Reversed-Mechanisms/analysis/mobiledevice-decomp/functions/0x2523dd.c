// rea decompile_all
// name: std::__uninitialized_allocator_copy_impl[abi:ne190102]<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*,std::vector<unsigned_short,std::allocator<unsigned_short>>*,std::vector<unsigned_short,std::allocator<unsigned_short>>*>
// address: 0x2523dd
// body: available
// range: 0x2523dd-0x25246b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::vector<unsigned short, std::allocator<unsigned short> >*
   std::__uninitialized_allocator_copy_impl[abi:ne190102]<std::allocator<std::vector<unsigned short,
   std::allocator<unsigned short> > >, std::vector<unsigned short, std::allocator<unsigned short>
   >*, std::vector<unsigned short, std::allocator<unsigned short> >*, std::vector<unsigned short,
   std::allocator<unsigned short> >*>(std::allocator<std::vector<unsigned short,
   std::allocator<unsigned short> > >&, std::vector<unsigned short, std::allocator<unsigned short>
   >*, std::vector<unsigned short, std::allocator<unsigned short> >*, std::vector<unsigned short,
   std::allocator<unsigned short> >*) */

vector * std::
         __uninitialized_allocator_copy_impl_abi_ne190102_<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*,std::vector<unsigned_short,std::allocator<unsigned_short>>*,std::vector<unsigned_short,std::allocator<unsigned_short>>*>
                   (allocator *param_1,vector *param_2,vector *param_3,vector *param_4)

{
  vector *local_50;
  allocator *local_48;
  vector **local_40;
  vector<unsigned_short,std::allocator<unsigned_short>> **local_38;
  undefined1 local_30;
  vector<unsigned_short,std::allocator<unsigned_short>> *local_28;
  
  local_38 = &local_28;
  local_40 = &local_50;
  local_30 = 0;
  local_48 = param_1;
  local_50 = param_4;
  for (; local_28 = (vector<unsigned_short,std::allocator<unsigned_short>> *)param_4,
      param_2 != param_3; param_2 = param_2 + 0x18) {
    *(undefined8 *)param_4 = 0;
    *(undefined8 *)(param_4 + 8) = 0;
    *(undefined8 *)(param_4 + 0x10) = 0;
    vector<unsigned_short,std::allocator<unsigned_short>>::
    __init_with_size_abi_ne190102_<unsigned_short*,unsigned_short*>
              ((vector<unsigned_short,std::allocator<unsigned_short>> *)param_4,*(ushort **)param_2,
               *(ushort **)(param_2 + 8),
               (long)*(ushort **)(param_2 + 8) - (long)*(ushort **)param_2 >> 1);
    param_4 = (vector *)(local_28 + 0x18);
  }
  local_30 = 1;
  __exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*>>
  ::~__exception_guard_exceptions_abi_ne190102_
            ((__exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::vector<unsigned_short,std::allocator<unsigned_short>>*>>
              *)&local_48);
  return param_4;
}

