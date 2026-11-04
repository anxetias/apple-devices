// rea decompile_all
// name: std::vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>::__vdeallocate
// address: 0x251c30
// body: available
// range: 0x251c30-0x251c8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::vector<SERestoreInfo::UpdateTableEntry, std::allocator<SERestoreInfo::UpdateTableEntry>
   >::__vdeallocate() */

void __thiscall
std::vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>::
__vdeallocate(vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>
              *this)

{
  UpdateTableEntry *pUVar1;
  UpdateTableEntry *pUVar2;
  UpdateTableEntry *pUVar3;
  
  pUVar1 = *(UpdateTableEntry **)this;
  if (pUVar1 != (UpdateTableEntry *)0x0) {
    pUVar3 = *(UpdateTableEntry **)(this + 8);
    pUVar2 = pUVar1;
    if (pUVar3 != pUVar1) {
      do {
        pUVar3 = pUVar3 + -0x30;
        allocator<SERestoreInfo::UpdateTableEntry>::destroy_abi_ne190102_
                  ((allocator<SERestoreInfo::UpdateTableEntry> *)(this + 0x10),pUVar3);
      } while (pUVar3 != pUVar1);
      pUVar2 = *(UpdateTableEntry **)this;
    }
    *(UpdateTableEntry **)(this + 8) = pUVar1;
    operator_delete(pUVar2);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

