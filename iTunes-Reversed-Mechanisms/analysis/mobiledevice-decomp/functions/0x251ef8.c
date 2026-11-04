// rea decompile_all
// name: std::vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>>::__init_with_size[abi:ne190102]<SERestoreInfo::BLOB*,SERestoreInfo::BLOB*>
// address: 0x251ef8
// body: available
// range: 0x251ef8-0x251f66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void std::vector<SERestoreInfo::BLOB, std::allocator<SERestoreInfo::BLOB>
   >::__init_with_size[abi:ne190102]<SERestoreInfo::BLOB*,
   SERestoreInfo::BLOB*>(SERestoreInfo::BLOB*, SERestoreInfo::BLOB*, unsigned long) */

void __thiscall
std::vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>>::
__init_with_size_abi_ne190102_<SERestoreInfo::BLOB*,SERestoreInfo::BLOB*>
          (vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>> *this,BLOB *param_1,
          BLOB *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    __vallocate_abi_ne190102_(this,param_3);
    puVar2 = *(undefined8 **)(this + 8);
    for (; param_1 != param_2; param_1 = param_1 + 0x20) {
      *puVar2 = &PTR__BLOB_0044f1c8;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      puVar2[1] = *(undefined8 *)(param_1 + 8);
      puVar2[2] = uVar1;
      puVar2[3] = *(undefined8 *)(param_1 + 0x18);
      puVar2 = puVar2 + 4;
    }
    *(undefined8 **)(this + 8) = puVar2;
  }
  return;
}

