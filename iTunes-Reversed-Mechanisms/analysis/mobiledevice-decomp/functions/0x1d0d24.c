// rea decompile_all
// name: _lzma_stream_init
// address: 0x1d0d24
// body: available
// range: 0x1d0d24-0x1d0de1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzma_stream_init(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  piVar2 = _malloc(0xa0);
  uVar3 = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    piVar2[0x24] = 0;
    piVar2[0x25] = 0;
    piVar2[0x26] = 0;
    piVar2[0x27] = 0;
    piVar2[0x20] = 0;
    piVar2[0x21] = 0;
    piVar2[0x22] = 0;
    piVar2[0x23] = 0;
    piVar2[0x1c] = 0;
    piVar2[0x1d] = 0;
    piVar2[0x1e] = 0;
    piVar2[0x1f] = 0;
    piVar2[0x18] = 0;
    piVar2[0x19] = 0;
    piVar2[0x1a] = 0;
    piVar2[0x1b] = 0;
    piVar2[0x14] = 0;
    piVar2[0x15] = 0;
    piVar2[0x16] = 0;
    piVar2[0x17] = 0;
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    piVar2[0x12] = 0;
    piVar2[0x13] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[0] = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    if (param_2 == 0) {
      iVar1 = _lzma_easy_encoder(piVar2 + 6,6,0);
    }
    else {
      iVar1 = _lzma_auto_decoder(piVar2 + 6,0xffffffffffffffff,0);
    }
    if (iVar1 == 0) {
      piVar2[1] = 0x306;
      piVar2[2] = -0x5432fffb;
      *piVar2 = param_2;
      *(int **)(param_1 + 0x20) = piVar2;
      uVar3 = 0;
    }
    else {
      _free(piVar2);
    }
  }
  return uVar3;
}

