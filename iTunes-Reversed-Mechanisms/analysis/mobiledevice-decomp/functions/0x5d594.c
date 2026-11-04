// rea decompile_all
// name: _lz4_stream_init
// address: 0x5d594
// body: available
// range: 0x5d594-0x5d63b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lz4_stream_init(undefined8 *param_1,int param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
  }
  if (param_2 == 1) {
    lVar1 = _realloc_stream_state(param_1[4],1,0x100,0x4813c,0);
    param_1[4] = lVar1;
    if (lVar1 == 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar1 + 0x10) = 5;
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    lVar1 = _realloc_stream_state(param_1[4],0,0x100,0x4813c,0);
    param_1[4] = lVar1;
    if (lVar1 == 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar1 + 0x10) = 0;
    _memset_pattern8((void *)(lVar1 + 0x4013c),&DAT_0032aea0,0x8000);
  }
  return 0;
}

