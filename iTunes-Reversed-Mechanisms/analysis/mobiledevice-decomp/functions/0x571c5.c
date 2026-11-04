// rea decompile_all
// name: _brotli_stream_init
// address: 0x571c5
// body: available
// range: 0x571c5-0x5729a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _brotli_stream_init(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = _malloc(0x20);
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  if (param_2 == 1) {
    lVar2 = _BrotliDecoderCreateInstance(0,0,0);
    *(long *)(piVar1 + 4) = lVar2;
    if (lVar2 != 0) {
      _BrotliDecoderSetParameter(lVar2,1,1);
LAB_0005726d:
      piVar1[1] = 0xb02;
      *piVar1 = param_2;
      *(int **)(param_1 + 0x20) = piVar1;
      return 0;
    }
  }
  else if (param_2 == 0) {
    lVar2 = _BrotliEncoderCreateInstance(0,0,0);
    *(long *)(piVar1 + 4) = lVar2;
    if (lVar2 != 0) {
      _BrotliEncoderSetParameter(lVar2,1,2);
      _BrotliEncoderSetParameter(lVar2,2,0x16);
      goto LAB_0005726d;
    }
  }
  _free(piVar1);
  return 0xffffffff;
}

