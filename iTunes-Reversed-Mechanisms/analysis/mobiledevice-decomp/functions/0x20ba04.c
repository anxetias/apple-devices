// rea decompile_all
// name: _compression_decode_scratch_buffer_size
// address: 0x20ba04
// body: available
// range: 0x20ba04-0x20baed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20ba85 to 0x1d987c _lzfse_decode_buffer_scratch_size_iboot (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20baa3 to 0x1eb170 _lzx_decode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bac4 to 0x1eb0c1 _smb_decode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20baca to 0x1efff6 _lzfse_decode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bad3 to 0x1eb05c _lzbitmap_decode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bad9 to 0x1d67fc _zlib_decode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20badf to 0xb7b7c _USBMuxStartWSA (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bae5 to 0x20b93a _lzma_xz_buffer_decode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _compression_decode_scratch_buffer_size(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = 0x205;
  if (9 < param_1 - 0x200) {
    uVar1 = param_1;
  }
  uVar3 = 0x505;
  if (9 < uVar1 - 0x500) {
    uVar3 = uVar1;
  }
  if ((int)uVar3 < 0x891) {
    if ((int)uVar3 < 0x505) {
      if (uVar3 == 0x205) {
LAB_0020bad8:
        uVar2 = _zlib_decode_scratch_size();
        return uVar2;
      }
      if (uVar3 == 0x306) {
        uVar2 = _lzma_xz_buffer_decode_scratch_size();
        return uVar2;
      }
      if (uVar3 == 0x407) {
        uVar2 = _lzx_decode_scratch_size();
        return uVar2;
      }
    }
    else {
      if (uVar3 - 0x700 < 3) {
        uVar2 = _lzbitmap_decode_scratch_size(uVar3 & 0xf);
        return uVar2;
      }
      if (uVar3 - 0x801 < 2) {
LAB_0020bac9:
        uVar2 = _lzfse_decode_scratch_size();
        return uVar2;
      }
      if (uVar3 == 0x505) goto LAB_0020bad8;
    }
  }
  else if ((int)uVar3 < 0xc00) {
    if (uVar3 - 0x900 < 2) {
      uVar2 = _USBMuxStartWSA();
      return uVar2;
    }
    if (uVar3 == 0x891) goto LAB_0020bac9;
    if (uVar3 == 0x8a1) {
      uVar2 = _lzfse_decode_buffer_scratch_size_iboot();
      return uVar2;
    }
  }
  else if ((uVar3 - 0xc00 < 0x21) && ((0x100010001U >> ((ulong)(uVar3 - 0xc00) & 0x3f) & 1) != 0)) {
    uVar2 = _smb_decode_scratch_size();
    return uVar2;
  }
  return 0;
}

