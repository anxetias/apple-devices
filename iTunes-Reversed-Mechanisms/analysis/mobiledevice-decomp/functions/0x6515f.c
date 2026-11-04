// rea decompile_all
// name: _BrotliDecoderHuffmanTreeGroupInit
// address: 0x6515f
// body: available
// range: 0x6515f-0x651d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _BrotliDecoderHuffmanTreeGroupInit
               (long param_1,long *param_2,undefined2 param_3,int param_4,uint param_5)

{
  long lVar1;
  
  lVar1 = (**(code **)(param_1 + 0x28))
                    (*(undefined8 *)(param_1 + 0x38),
                     ((ulong)(param_4 + 0x178) * 4 + 8) * (ulong)param_5);
  *(undefined2 *)(param_2 + 2) = param_3;
  *(short *)((long)param_2 + 0x12) = (short)param_4;
  *(short *)((long)param_2 + 0x14) = (short)param_5;
  *param_2 = lVar1;
  param_2[1] = lVar1 + (ulong)param_5 * 8;
  return lVar1 != 0;
}

