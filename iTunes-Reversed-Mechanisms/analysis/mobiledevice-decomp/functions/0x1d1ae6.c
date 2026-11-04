// rea decompile_all
// name: _brotli_stream_process
// address: 0x1d1ae6
// body: available
// range: 0x1d1ae6-0x1d1b89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _brotli_stream_process(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  piVar1 = *(int **)(param_1 + 0x20);
  uVar4 = param_2 & 1 | piVar1[6];
  piVar1[6] = uVar4;
  if (*piVar1 == 0) {
    iVar2 = _BrotliEncoderCompressStream
                      (*(undefined8 *)(piVar1 + 4),(uVar4 != 0) * '\x02',param_1 + 0x18,
                       param_1 + 0x10,param_1 + 8,param_1,0);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      if ((piVar1[6] != 0) &&
         (iVar2 = _BrotliEncoderIsFinished(*(undefined8 *)(piVar1 + 4)), iVar2 != 0)) {
        return 1;
      }
      uVar3 = 0;
    }
  }
  else {
    iVar2 = _BrotliDecoderDecompressStream
                      (*(undefined8 *)(piVar1 + 4),param_1 + 0x18,param_1 + 0x10,param_1 + 8,param_1
                       ,0);
    uVar3 = 0xffffffff;
    if (iVar2 - 1U < 3) {
      uVar3 = *(undefined4 *)(&DAT_0033c9a0 + (ulong)(iVar2 - 1U) * 4);
    }
  }
  return uVar3;
}

