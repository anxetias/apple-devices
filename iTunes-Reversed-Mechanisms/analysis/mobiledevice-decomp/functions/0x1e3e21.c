// rea decompile_all
// name: _lzma1_model_reset
// address: 0x1e3e21
// body: available
// range: 0x1e3e21-0x1e3e5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _lzma1_model_reset(undefined8 *param_1,void *param_2)

{
  _memset_pattern16(param_2,&DAT_003a22a0,0x7580);
  *param_1 = 0x100000001;
  param_1[1] = 0x100000001;
  param_1[2] = param_2;
  *(undefined1 *)((long)param_1 + 0x1d) = 0;
  return;
}

