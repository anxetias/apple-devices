// rea decompile_all
// name: std::vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>::__destroy_vector::operator()[abi:ne190102]
// address: 0x2520f2
// body: available
// range: 0x2520f2-0x252161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25214e to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::vector<SERestoreInfo::UpdateTableEntry, std::allocator<SERestoreInfo::UpdateTableEntry>
   >::__destroy_vector::operator()[abi:ne190102]() */

void __thiscall
std::vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>::
__destroy_vector::operator()[abi_ne190102_(__destroy_vector *this)

{
  long *plVar1;
  UpdateTableEntry *pUVar2;
  UpdateTableEntry *pUVar3;
  UpdateTableEntry *pUVar4;
  
  plVar1 = *(long **)this;
  pUVar2 = (UpdateTableEntry *)*plVar1;
  if (pUVar2 != (UpdateTableEntry *)0x0) {
    pUVar4 = (UpdateTableEntry *)plVar1[1];
    pUVar3 = pUVar2;
    if (pUVar4 != pUVar2) {
      do {
        pUVar4 = pUVar4 + -0x30;
        allocator<SERestoreInfo::UpdateTableEntry>::destroy_abi_ne190102_
                  ((allocator<SERestoreInfo::UpdateTableEntry> *)(plVar1 + 2),pUVar4);
      } while (pUVar4 != pUVar2);
      pUVar3 = (UpdateTableEntry *)**(undefined8 **)this;
    }
    plVar1[1] = (long)pUVar2;
    operator_delete(pUVar3);
    return;
  }
  return;
}

