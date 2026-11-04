// rea decompile_all
// name: std::allocator<SERestoreInfo::UpdateTableEntry>::construct[abi:ne190102]<SERestoreInfo::UpdateTableEntry,SERestoreInfo::UpdateTableEntry&>
// address: 0x2522a0
// body: available
// range: 0x2522a0-0x252310 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void 
   std::allocator<SERestoreInfo::UpdateTableEntry>::construct[abi:ne190102]<SERestoreInfo::UpdateTableEntry,
   SERestoreInfo::UpdateTableEntry&>(SERestoreInfo::UpdateTableEntry*,
   SERestoreInfo::UpdateTableEntry&) */

void __thiscall
std::allocator<SERestoreInfo::UpdateTableEntry>::
construct_abi_ne190102_<SERestoreInfo::UpdateTableEntry,SERestoreInfo::UpdateTableEntry&>
          (allocator<SERestoreInfo::UpdateTableEntry> *this,UpdateTableEntry *param_1,
          UpdateTableEntry *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
  ::
  __init_with_size_abi_ne190102_<std::vector<unsigned_short,std::allocator<unsigned_short>>*,std::vector<unsigned_short,std::allocator<unsigned_short>>*>
            ((vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
              *)param_1,*(vector **)param_2,*(vector **)(param_2 + 8),
             ((long)*(vector **)(param_2 + 8) - (long)*(vector **)param_2 >> 3) *
             -0x5555555555555555);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  vector<unsigned_char,std::allocator<unsigned_char>>::
  __init_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(param_1 + 0x18),
             *(uchar **)(param_2 + 0x18),*(uchar **)(param_2 + 0x20),
             (long)*(uchar **)(param_2 + 0x20) - (long)*(uchar **)(param_2 + 0x18));
  return;
}

