// rea decompile_all
// name: _DynamicAssetUARPGetBytes
// address: 0x270f1c
// body: available
// range: 0x270f1c-0x270f72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_DynamicAssetUARPGetBytes
          (undefined8 param_1,undefined8 param_2,uint *param_3,void *param_4,ushort param_5,
          uint param_6,undefined2 *param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uStack_30;
  
  if (param_3 == (uint *)0x0) {
    uStack_30 = 0x1e;
  }
  else {
    uStack_30 = 0;
    uVar2 = *param_3 - param_6;
    if (*param_3 < param_6) {
      uStack_30 = 0x2b;
      uVar3 = 0;
    }
    else {
      uVar1 = (uint)param_5;
      if (uVar2 < param_5) {
        uVar1 = uVar2;
      }
      uVar3 = (ulong)uVar1;
      _memcpy(param_4,(void *)((ulong)param_6 + *(long *)(param_3 + 2)),uVar3);
    }
    *param_7 = (short)uVar3;
  }
  return uStack_30;
}

