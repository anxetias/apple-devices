// rea decompile_all
// name: _ccder_sizeof_tag
// address: 0xda85
// body: available
// range: 0xda85-0xdadc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _ccder_sizeof_tag(ulong param_1)

{
  long lVar1;
  
  param_1 = param_1 & 0x1fffffffffffffff;
  lVar1 = 1;
  if ((((0x1e < param_1) && (lVar1 = 2, 0x7f < param_1)) && (lVar1 = 3, 0x3fff < param_1)) &&
     (lVar1 = 4, 0x1fffff < param_1)) {
    lVar1 = 6 - (ulong)(param_1 < 0x10000000);
  }
  return lVar1;
}

