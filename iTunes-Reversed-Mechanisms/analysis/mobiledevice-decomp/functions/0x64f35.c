// rea decompile_all
// name: _BrotliDecoderStateInit
// address: 0x64f35
// body: available
// range: 0x64f35-0x6501a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_BrotliDecoderStateInit(undefined8 *param_1,code *param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == (code *)0x0) {
    param_2 = _BrotliDefaultAllocFunc;
    param_3 = _BrotliDefaultFreeFunc;
    param_4 = 0;
  }
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  _BrotliInitBitReader(param_1 + 1);
  *param_1 = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  param_1[0x2a] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(ushort *)(param_1 + 0x53) = (ushort)*(undefined4 *)(param_1 + 0x53) & 0xffc0 | 0x10;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x10;
  *(undefined4 *)(param_1 + 0xd) = 0xf;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xb;
  *(undefined4 *)(param_1 + 0xe) = 4;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f;
  uVar1 = _BrotliGetDictionary();
  param_1[0x57] = uVar1;
  uVar1 = _BrotliGetTransforms();
  param_1[0x58] = uVar1;
  return 1;
}

