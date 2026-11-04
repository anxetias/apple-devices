// rea decompile_all
// name: _ccn_write_int_public_value
// address: 0x1d90c
// body: available
// range: 0x1d90c-0x1d94d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d949 to 0x1da5f _ccn_write_uint_public_value (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_write_int_public_value
               (undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  byte bVar1;
  
  bVar1 = _ccn_bitlen_public_value();
  if ((bVar1 & 7) == 0) {
    *param_4 = 0;
    param_3 = param_3 + -1;
    param_4 = param_4 + 1;
  }
  _ccn_write_uint_public_value(param_1,param_2,param_3,param_4);
  return;
}

