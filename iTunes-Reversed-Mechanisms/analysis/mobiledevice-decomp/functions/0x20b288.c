// rea decompile_all
// name: _lzfseStreamDecodeInit
// address: 0x20b288
// body: available
// range: 0x20b288-0x20b333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzfseStreamDecodeInit(undefined8 *param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_1[4];
  }
  lVar1 = _realloc_stream_state(uVar2,1,param_2,0x18b940,0x180000);
  param_1[4] = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = 40000;
    if (param_2 == 0x891) {
      uVar3 = 15000;
    }
    *(undefined4 *)(lVar1 + 0x1cb8) = uVar3;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) - lVar1;
    *(undefined8 *)(lVar1 + 0x30) = 0xb940;
    *(undefined8 *)(lVar1 + 0x38) = 0xb940;
    *(undefined8 *)(lVar1 + 0x40) = 0xb940;
    *(undefined8 *)(lVar1 + 0x48) = 0xcb940;
    *(undefined8 *)(lVar1 + 0x50) = 0xcb940;
    *(undefined8 *)(lVar1 + 0x58) = 0x18b940;
    *(undefined8 *)(lVar1 + 0x10) = 0xb940;
    *(undefined8 *)(lVar1 + 0x18) = 0xcb940;
    *(undefined8 *)(lVar1 + 0x20) = 0xcb940;
    uVar2 = 0;
  }
  return uVar2;
}

