// rea decompile_all
// name: _compression_stream_init_with_state_buffer
// address: 0x94b8b
// body: available
// range: 0x94b8b-0x94bd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x94bd4 to 0x94bd9 _compression_stream_reinit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_compression_stream_init_with_state_buffer
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
          long param_5)

{
  undefined8 uVar1;
  
  if (param_5 - 0x100000000U < 0xffffffff00000010) {
    return 0xffffffff;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = param_4;
  *(undefined8 *)(param_4 + 1) = 0xabcd000500000000;
  *param_4 = 0;
  param_4[3] = (int)param_5;
  uVar1 = _compression_stream_reinit();
  return uVar1;
}

