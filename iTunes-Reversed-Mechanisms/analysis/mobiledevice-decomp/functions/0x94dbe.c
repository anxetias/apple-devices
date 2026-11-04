// rea decompile_all
// name: _compression_stream_identify_algorithm
// address: 0x94dbe
// body: available
// range: 0x94dbe-0x94e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _compression_stream_identify_algorithm(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _lzfse_stream_identify_algorithm();
  uVar2 = 0x801;
  if (iVar1 == 0) {
    iVar1 = _zlib_stream_identify_algorithm(param_1);
    uVar2 = 0x205;
    if (iVar1 == 0) {
      iVar1 = _lzma_stream_identify_algorithm(param_1);
      uVar2 = 0x306;
      if (iVar1 == 0) {
        iVar1 = _lz4_stream_identify_algorithm(param_1);
        uVar2 = 0x100;
        if (iVar1 == 0) {
          iVar1 = _lzvn_stream_identify_algorithm(param_1);
          uVar2 = 0x900;
          if (iVar1 == 0) {
            iVar1 = _lzbitmap_stream_identify_algorithm(param_1);
            uVar2 = -(uint)(iVar1 == 0) | 0x702;
          }
        }
      }
    }
  }
  return uVar2;
}

