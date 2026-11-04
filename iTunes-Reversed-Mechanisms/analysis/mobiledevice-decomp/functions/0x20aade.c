// rea decompile_all
// name: _lzfseStreamEncodeInit
// address: 0x20aade
// body: available
// range: 0x20aade-0x20ab73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzfseStreamEncodeInit(undefined8 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
  }
  iVar1 = _lzfseEncodeGetScratchSize(param_2);
  uVar3 = 0;
  lVar2 = _realloc_stream_state(param_1[4],0,param_2,iVar1 + 0x1800d8,iVar1 + 0x180000);
  param_1[4] = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    *(undefined8 *)(lVar2 + 0x40) = 0xd8;
    *(undefined8 *)(lVar2 + 0x68) = 0xc00d8;
    *(undefined8 *)(lVar2 + 0x70) = 0xc00d8;
    *(undefined8 *)(lVar2 + 0x78) = 0x1800d8;
    *(undefined8 *)(lVar2 + 0x10) = 0xd8;
    *(undefined8 *)(lVar2 + 0x18) = 0xc00d8;
    *(undefined8 *)(lVar2 + 0x20) = 0x1800d8;
  }
  return uVar3;
}

