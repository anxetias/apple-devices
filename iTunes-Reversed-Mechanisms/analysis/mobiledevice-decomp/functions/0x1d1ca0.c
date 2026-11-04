// rea decompile_all
// name: _lzvnStreamEncodeInit
// address: 0x1d1ca0
// body: available
// range: 0x1d1ca0-0x1d1d75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzvnStreamEncodeInit(undefined8 *param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
  }
  lVar2 = _lzvn_encode_scratch_size(param_2);
  uVar5 = 0;
  lVar3 = _realloc_stream_state(param_1[4],0,param_2,(int)lVar2 + 0x80100,(int)lVar2 + 0x80038);
  param_1[4] = lVar3;
  if (lVar3 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    *(long *)(lVar3 + 0x20) = lVar3 + 0x100;
    lVar4 = lVar3 + lVar2 + 0x100;
    *(long *)(lVar3 + 0x10) = lVar4;
    lVar1 = lVar3 + 0x40100 + lVar2;
    *(long *)(lVar3 + 0x18) = lVar1;
    *(long *)(lVar3 + 0x40) = lVar4;
    *(long *)(lVar3 + 0x70) = lVar1;
    *(long *)(lVar3 + 0x78) = lVar1;
    *(long *)(lVar3 + 0x80) = lVar3 + 0x80100 + lVar2;
    *(undefined1 *)(lVar3 + 0x40100 + lVar2) = 0xe;
    *(undefined1 *)(*(long *)(lVar3 + 0x70) + 1) = 0x16;
    *(undefined1 *)(*(long *)(lVar3 + 0x70) + 2) = 0x16;
    *(undefined1 *)(*(long *)(lVar3 + 0x70) + 3) = 0xe;
    *(long *)(lVar3 + 0x70) = *(long *)(lVar3 + 0x70) + 4;
  }
  return uVar5;
}

