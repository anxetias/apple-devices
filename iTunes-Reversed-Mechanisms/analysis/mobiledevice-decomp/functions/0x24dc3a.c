// rea decompile_all
// name: SERestoreInfo::IcefallDeviceInfo::updateFromMQ
// address: 0x24dc3a
// body: available
// range: 0x24dc3a-0x24dd62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24dd5e to 0x2a9ef4 __Unwind_Resume (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallDeviceInfo::updateFromMQ(SERestoreInfo::BLOB const&) */

undefined8 __thiscall
SERestoreInfo::IcefallDeviceInfo::updateFromMQ(IcefallDeviceInfo *this,BLOB *param_1)

{
  short *psVar1;
  SEWrongDeviceInfo *this_00;
  _Unwind_Exception *exception_object;
  
  psVar1 = *(short **)(param_1 + 8);
  if (((psVar1 != (short *)0x0) && ((*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffd) == 0x9d)) &&
     (*psVar1 == 0x101)) {
    this[10] = (IcefallDeviceInfo)(*(char *)((long)psVar1 + 3) == '\0');
    std::vector<unsigned_char,std::allocator<unsigned_char>>::
    __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10),
               (uchar *)(psVar1 + 2),(uchar *)(psVar1 + 0xe),0x18);
    std::vector<unsigned_char,std::allocator<unsigned_char>>::
    __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x28),
               (uchar *)(psVar1 + 0xe),(uchar *)(psVar1 + 0x18),0x14);
    std::vector<unsigned_char,std::allocator<unsigned_char>>::
    __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x40),
               (uchar *)(psVar1 + 0x18),(uchar *)(psVar1 + 0x28),0x20);
    std::vector<unsigned_char,std::allocator<unsigned_char>>::
    __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x58),
               (uchar *)(psVar1 + 0x38),(uchar *)(psVar1 + 0x48),0x20);
    std::vector<unsigned_char,std::allocator<unsigned_char>>::
    __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x70),
               (uchar *)(psVar1 + 0x28),(uchar *)(psVar1 + 0x38),0x20);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(psVar1 + 0x48);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)((long)psVar1 + 0x99);
    *(uint *)(this + 0x94) = (uint)*(byte *)(psVar1 + 1);
    return 1;
  }
  this_00 = (SEWrongDeviceInfo *)___cxa_allocate_exception(0x48);
  SEWrongDeviceInfo::SEWrongDeviceInfo(this_00);
  exception_object = (_Unwind_Exception *)updateFromMQ((BLOB *)this_00);
  ___cxa_free_exception(this_00);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(exception_object);
}

