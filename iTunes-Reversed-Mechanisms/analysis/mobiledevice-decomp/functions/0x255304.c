// rea decompile_all
// name: std::_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::ApduBLOB>,SERestoreInfo::ApduBLOB*>::operator()[abi:ne190102]
// address: 0x255304
// body: available
// range: 0x255304-0x25533f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::ApduBLOB>,
   SERestoreInfo::ApduBLOB*>::operator()[abi:ne190102]() const */

void __thiscall
std::_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::ApduBLOB>,SERestoreInfo::ApduBLOB*>
::operator()[abi_ne190102_
          (_AllocatorDestroyRangeReverse<std::allocator<SERestoreInfo::ApduBLOB>,SERestoreInfo::ApduBLOB*>
           *this)

{
  BLOB *pBVar1;
  BLOB *pBVar2;
  
  pBVar1 = (BLOB *)**(undefined8 **)(this + 8);
  pBVar2 = (BLOB *)**(undefined8 **)(this + 0x10);
  while (pBVar2 != pBVar1) {
    SERestoreInfo::BLOB::~BLOB(pBVar2 + -0x20);
    SERestoreInfo::BLOB::~BLOB(pBVar2 + -0x40);
    pBVar2 = pBVar2 + -0x40;
  }
  return;
}

