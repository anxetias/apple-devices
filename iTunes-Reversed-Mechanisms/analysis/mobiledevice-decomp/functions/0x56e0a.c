// rea decompile_all
// name: _lzvnStreamDecodeInit
// address: 0x56e0a
// body: available
// range: 0x56e0a-0x56e9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzvnStreamDecodeInit(undefined8 *param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_1[4];
  }
  lVar3 = _realloc_stream_state(uVar4,1,param_2,0x80100,0x80078);
  param_1[4] = lVar3;
  if (lVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar1 = lVar3 + 0x100;
    *(long *)(lVar3 + 0x10) = lVar1;
    lVar2 = lVar3 + 0x40100;
    *(long *)(lVar3 + 0x18) = lVar2;
    *(long *)(lVar3 + 0x30) = lVar1;
    *(long *)(lVar3 + 0x38) = lVar1;
    *(long *)(lVar3 + 0x40) = lVar2;
    *(long *)(lVar3 + 0x58) = lVar2;
    *(long *)(lVar3 + 0x48) = lVar2;
    *(long *)(lVar3 + 0x50) = lVar3 + 0x80100;
    uVar4 = 0;
  }
  return uVar4;
}

