// rea decompile_all
// name: std::_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::UpdateTableEntry>,SERestoreInfo::UpdateTableEntry*>::operator()[abi:ne190102]
// address: 0x2525e0
// body: available
// range: 0x2525e0-0x25261e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::UpdateTableEntry>,
   SERestoreInfo::UpdateTableEntry*>::operator()[abi:ne190102]() const */

void __thiscall
std::
_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::UpdateTableEntry>,SERestoreInfo::UpdateTableEntry*>
::operator()[abi_ne190102_
          (_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::UpdateTableEntry>,SERestoreInfo::UpdateTableEntry*>
           *this)

{
  UpdateTableEntry *pUVar1;
  allocator<SERestoreInfo::UpdateTableEntry> *this_00;
  UpdateTableEntry *pUVar2;
  
  pUVar2 = (UpdateTableEntry *)**(long **)(this + 0x10);
  pUVar1 = (UpdateTableEntry *)**(long **)(this + 8);
  if (pUVar2 != pUVar1) {
    this_00 = *(allocator<SERestoreInfo::UpdateTableEntry> **)this;
    do {
      pUVar2 = pUVar2 + -0x30;
      allocator<SERestoreInfo::UpdateTableEntry>::destroy_abi_ne190102_(this_00,pUVar2);
    } while (pUVar2 != pUVar1);
  }
  return;
}

