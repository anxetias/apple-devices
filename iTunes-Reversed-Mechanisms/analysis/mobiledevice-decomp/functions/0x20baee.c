// rea decompile_all
// name: _compression_encode_scratch_buffer_size
// address: 0x20baee
// body: available
// range: 0x20baee-0x20bc3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20bb92 to 0x1ead0f _lzfse_encode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bbb1 to 0x1eb067 _lzbitmap_encode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bbcd to 0x1d49ae _lzvn_encode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bbd6 to 0x1eaff7 _lzbitmap_fast_encode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bbfe to 0x1eb08c _smb_encode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bc04 to 0xb7b7c _USBMuxStartWSA (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bc2a to 0x1d2561 _zlib_encode_scratch_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20bc3b to 0x1d8f52 _lz24_encode_scratch_buffer_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _compression_encode_scratch_buffer_size(uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0xa18;
  if (0xff < (param_1 ^ 0xa00)) {
    uVar2 = param_1;
  }
  uVar3 = 0x205;
  if (9 < uVar2 - 0x200) {
    uVar3 = uVar2;
  }
  uVar4 = 0x505;
  if (9 < uVar3 - 0x500) {
    uVar4 = uVar3;
  }
  if ((int)uVar4 < 0x801) {
    if ((int)uVar4 < 0x505) {
      if ((int)uVar4 < 0x306) {
        if (uVar4 - 0x100 < 2) {
          return 0x8000;
        }
        if (uVar4 == 0x205) goto LAB_0020bc11;
      }
      else if (uVar4 == 0x306) {
        uVar1 = _USBMuxStartWSA();
        return uVar1;
      }
    }
    else {
      if (uVar4 - 0x600 < 3) {
        uVar1 = _lzbitmap_fast_encode_scratch_size(uVar4 & 0xf);
        return uVar1;
      }
      if (uVar4 - 0x700 < 3) {
        uVar1 = _lzbitmap_encode_scratch_size(uVar4 & 0xf);
        return uVar1;
      }
      if (uVar4 == 0x505) {
LAB_0020bc11:
        uVar4 = 5;
        if (uVar2 - 0x200 < 10) {
          uVar4 = uVar2 & 0xf;
        }
        if (uVar3 - 0x500 < 10) {
          uVar4 = uVar3 & 0xf;
        }
        uVar1 = _zlib_encode_scratch_size(uVar4);
        return uVar1;
      }
    }
  }
  else if ((int)uVar4 < 0x900) {
    if (((uVar4 - 0x801 < 2) || (uVar4 == 0x891)) || (uVar4 == 0x8a1)) {
      uVar1 = _lzfse_encode_scratch_size();
      return uVar1;
    }
  }
  else {
    if ((uVar4 - 0xc00 < 0x21) && ((0x100010001U >> ((ulong)(uVar4 - 0xc00) & 0x3f) & 1) != 0)) {
      uVar1 = _smb_encode_scratch_size();
      return uVar1;
    }
    if (uVar4 - 0x900 < 2) {
      uVar1 = _lzvn_encode_scratch_size();
      return uVar1;
    }
    if (uVar4 == 0xa18) {
      uVar1 = _lz24_encode_scratch_buffer_size(param_1 & 0xff);
      return uVar1;
    }
  }
  return 0;
}

