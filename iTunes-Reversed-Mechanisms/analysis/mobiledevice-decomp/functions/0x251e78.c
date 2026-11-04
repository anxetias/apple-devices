// rea decompile_all
// name: std::pair<unsigned_short_const,SERestoreInfo::ImageBinary>::pair[abi:ne190102]<unsigned_int&,SERestoreInfo::ImageBinary&,0>
// address: 0x251e78
// body: available
// range: 0x251e78-0x251ee4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* unsigned int& std::pair<unsigned short const,
   SERestoreInfo::ImageBinary>::pair[abi:ne190102]<unsigned int&, SERestoreInfo::ImageBinary&,
   0>(SERestoreInfo::ImageBinary&) */

uint * std::pair<unsigned_short_const,SERestoreInfo::ImageBinary>::
       pair_abi_ne190102_<unsigned_int&,SERestoreInfo::ImageBinary&,0>(ImageBinary *param_1)

{
  undefined8 uVar1;
  uint *extraout_RAX;
  undefined4 *in_RDX;
  undefined2 *in_RSI;
  
  *(undefined2 *)param_1 = *in_RSI;
  *(undefined4 *)(param_1 + 8) = *in_RDX;
  *(undefined ***)(param_1 + 0x10) = &PTR__BLOB_0044f1c8;
  uVar1 = *(undefined8 *)(in_RDX + 6);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(in_RDX + 4);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(in_RDX + 8);
  *(undefined4 *)(param_1 + 0x30) = in_RDX[10];
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>>::
  __init_with_size_abi_ne190102_<SERestoreInfo::BLOB*,SERestoreInfo::BLOB*>
            ((vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>> *)(param_1 + 0x38),
             *(BLOB **)(in_RDX + 0xc),*(BLOB **)(in_RDX + 0xe),
             (long)*(BLOB **)(in_RDX + 0xe) - (long)*(BLOB **)(in_RDX + 0xc) >> 5);
  return extraout_RAX;
}

