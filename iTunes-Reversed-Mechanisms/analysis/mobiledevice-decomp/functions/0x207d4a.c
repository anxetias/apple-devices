// rea decompile_all
// name: _CollectGarbagePointers
// address: 0x207d4a
// body: available
// range: 0x207d4a-0x207e0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x207e00 to 0x207e8e _SortPointers (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _CollectGarbagePointers(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x38;
  pvVar2 = (void *)(param_1 + 0x438);
  _SortPointers(pvVar2,*(undefined8 *)(param_1 + 0x28));
  lVar4 = param_1 + 0x638;
  _SortPointers(lVar4,*(undefined8 *)(param_1 + 0x30));
  lVar3 = _Annihilate(pvVar2,*(undefined8 *)(param_1 + 0x28),lVar4,*(undefined8 *)(param_1 + 0x30));
  lVar5 = *(long *)(param_1 + 0x28) - lVar3;
  *(long *)(param_1 + 0x28) = lVar5;
  lVar3 = *(long *)(param_1 + 0x30) - lVar3;
  *(long *)(param_1 + 0x30) = lVar3;
  if (lVar3 != 0) {
    lVar4 = _Annihilate(lVar1,*(undefined8 *)(param_1 + 0x20),lVar4);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - lVar4;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - lVar4;
    lVar5 = *(long *)(param_1 + 0x28);
  }
  if (lVar5 != 0) {
    _memcpy((void *)(lVar1 + *(long *)(param_1 + 0x20) * 8),pvVar2,lVar5 << 3);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _SortPointers(lVar1);
    return;
  }
  return;
}

