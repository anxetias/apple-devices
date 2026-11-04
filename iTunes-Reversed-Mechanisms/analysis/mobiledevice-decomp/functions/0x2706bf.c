// rea decompile_all
// name: _FWImageAddBytes
// address: 0x2706bf
// body: available
// range: 0x2706bf-0x27070c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _FWImageAddBytes(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uStack_20;
  
  uStack_20 = 0x1e;
  if (((param_1 != 0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
    lVar2 = (long)*(int *)(param_1 + 0x44);
    uVar1 = *(uint *)(param_1 + 0x10 + lVar2 * 4);
    uVar3 = uVar1 + param_3;
    if (*(uint *)(param_1 + lVar2 * 4) < uVar3) {
      uStack_20 = 0x27;
    }
    else {
      _memcpy((void *)((ulong)uVar1 + *(long *)(param_1 + 0x20 + lVar2 * 8)),param_2,(ulong)param_3)
      ;
      *(uint *)(param_1 + 0x10 + (long)*(int *)(param_1 + 0x44) * 4) = uVar3;
      uStack_20 = 0;
    }
  }
  return uStack_20;
}

