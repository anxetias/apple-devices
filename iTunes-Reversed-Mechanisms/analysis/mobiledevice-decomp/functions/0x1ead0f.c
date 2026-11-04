// rea decompile_all
// name: _lzfse_encode_scratch_size
// address: 0x1ead0f
// body: available
// range: 0x1ead0f-0x1ead42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _lzfse_encode_scratch_size(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = _lzfseEncodeGetScratchSize();
  uVar2 = _lzvn_encode_scratch_size(param_1 == 0x802 | 0x900);
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

