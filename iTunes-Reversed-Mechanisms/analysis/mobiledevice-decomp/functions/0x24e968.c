// rea decompile_all
// name: SERestoreInfo::UpdateTableEntry::~UpdateTableEntry
// address: 0x24e968
// body: available
// range: 0x24e968-0x24e995 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::UpdateTableEntry::~UpdateTableEntry() */

void __thiscall SERestoreInfo::UpdateTableEntry::~UpdateTableEntry(UpdateTableEntry *this)

{
  void *pvVar1;
  UpdateTableEntry *local_18;
  
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  local_18 = this;
  std::
  vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
  ::__destroy_vector::operator()[abi_ne190102_((__destroy_vector *)&local_18);
  return;
}

