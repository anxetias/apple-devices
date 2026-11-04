// rea decompile_all
// name: _compression_stream_init
// address: 0x94b06
// body: available
// range: 0x94b06-0x94b8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x94b33 to 0x56754 _lzma_stream_init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x94b68 to 0x7f464 _lzfse_stream_init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x94b70 to 0x57bad _lzvn_stream_init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x94b76 to 0x571c5 _brotli_stream_init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x94b7e to 0x5d594 _lz4_stream_init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x94b86 to 0x5d15a _zlib_stream_init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _compression_stream_init(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0x891) {
    if (param_3 < 0x801) {
      if (param_3 == 0x100) {
        uVar1 = _lz4_stream_init(param_1,param_2,0);
        return uVar1;
      }
      if (param_3 == 0x205) {
        uVar1 = _zlib_stream_init(param_1,param_2,0);
        return uVar1;
      }
      if (param_3 == 0x306) {
        uVar1 = _lzma_stream_init();
        return uVar1;
      }
    }
    else if (param_3 - 0x801U < 2) goto LAB_00094b65;
  }
  else {
    if (param_3 - 0x900U < 2) {
      uVar1 = _lzvn_stream_init();
      return uVar1;
    }
    if (param_3 == 0xb02) {
      uVar1 = _brotli_stream_init();
      return uVar1;
    }
    if (param_3 == 0x891) {
LAB_00094b65:
      uVar1 = _lzfse_stream_init();
      return uVar1;
    }
  }
  return 0xffffffff;
}

