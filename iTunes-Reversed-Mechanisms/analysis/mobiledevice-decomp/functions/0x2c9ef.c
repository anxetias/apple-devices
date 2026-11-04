// rea decompile_all
// name: _ccder_decode_rsa_priv_internal
// address: 0x2c9ef
// body: available
// range: 0x2c9ef-0x2ca84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccder_decode_rsa_priv_internal(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long local_50;
  long local_48;
  undefined8 local_40;
  code *local_38;
  code *local_30;
  
  local_50 = _cc_malloc_clear(*param_1 * 0x28 + 0x18);
  local_48 = *param_1 * 5 + 3;
  local_40 = 0;
  local_38 = _cc_ws_alloc;
  local_30 = _cc_ws_free;
  if (local_50 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = _ccder_decode_rsa_priv_ws(&local_50,param_1,param_2,param_3);
    (*local_30)(&local_50);
  }
  return uVar1;
}

