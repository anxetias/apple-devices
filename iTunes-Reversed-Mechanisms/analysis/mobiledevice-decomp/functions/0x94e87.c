// rea decompile_all
// name: _compression_stream_get_encode_state_size
// address: 0x94e87
// body: available
// range: 0x94e87-0x94edc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x94eaf to 0x5d566 _zlib_stream_get_encode_state_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x94ec0 to 0x57c69 _lzvn_stream_get_encode_state_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x94ece to 0x7f53f _lzfse_stream_get_encode_state_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x94ed8 to 0x5dced _lz4_stream_get_encode_state_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _compression_stream_get_encode_state_size(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x891) {
    if (param_1 - 0x801U < 2) {
LAB_00094ecd:
      uVar1 = _lzfse_stream_get_encode_state_size();
      return uVar1;
    }
    if (param_1 == 0x100) {
      uVar1 = _lz4_stream_get_encode_state_size();
      return uVar1;
    }
    if (param_1 == 0x205) {
      uVar1 = _zlib_stream_get_encode_state_size();
      return uVar1;
    }
  }
  else {
    if (param_1 - 0x900U < 2) {
      uVar1 = _lzvn_stream_get_encode_state_size();
      return uVar1;
    }
    if (param_1 == 0x891) goto LAB_00094ecd;
  }
  return 0;
}

