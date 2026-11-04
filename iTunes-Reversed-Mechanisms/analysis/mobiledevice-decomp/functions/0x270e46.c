// rea decompile_all
// name: _DynamicAssetSetBytesAtOffset
// address: 0x270e46
// body: available
// range: 0x270e46-0x270f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DynamicAssetSetBytesAtOffset(uint *param_1,void *param_2,ushort param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  if (uVar1 < param_4) {
    return 0x2b;
  }
  uVar4 = (uint)param_3;
  uVar5 = uVar4 - (uVar1 - param_4);
  if (uVar4 < uVar1 - param_4) {
    uVar5 = 0;
  }
  if (uVar1 == param_4) {
    uVar5 = uVar4;
  }
  if (param_1[1] < uVar5 + uVar1) {
    uVar4 = param_1[1];
    if (1999999999 < (ulong)uVar5 + (ulong)uVar1) {
      return 0x27;
    }
    do {
      uVar2 = uVar4;
      uVar4 = uVar2 * 2;
    } while ((ulong)uVar2 < (ulong)uVar5 + (ulong)uVar1);
    if (1999999999 < uVar2) {
      return 0x27;
    }
    pvVar3 = (void *)_uarpZalloc();
    if (pvVar3 == (void *)0x0) {
      return 0xb;
    }
    _memcpy(pvVar3,*(void **)(param_1 + 2),(ulong)*param_1);
    _image3Free(*(undefined8 *)(param_1 + 2));
    *(void **)(param_1 + 2) = pvVar3;
    param_1[1] = uVar2;
  }
  else {
    pvVar3 = *(void **)(param_1 + 2);
  }
  _memcpy((void *)((ulong)param_4 + (long)pvVar3),param_2,(ulong)param_3);
  *param_1 = *param_1 + uVar5;
  return 0;
}

