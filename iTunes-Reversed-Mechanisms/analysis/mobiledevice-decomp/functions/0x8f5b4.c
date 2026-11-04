// rea decompile_all
// name: _flush_pending
// address: 0x8f5b4
// body: available
// range: 0x8f5b4-0x8f617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _flush_pending(long param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0x38) + 0x28);
  uVar5 = *(uint *)(param_1 + 0x20);
  if (uVar2 < *(uint *)(param_1 + 0x20)) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    uVar4 = (ulong)uVar5;
    _memcpy(*(void **)(param_1 + 0x18),*(void **)(*(long *)(param_1 + 0x38) + 0x20),uVar4);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar4;
    lVar3 = *(long *)(param_1 + 0x38);
    *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + uVar4;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar4;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - uVar5;
    piVar1 = (int *)(lVar3 + 0x28);
    *piVar1 = *piVar1 - uVar5;
    if (*piVar1 == 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
    }
  }
  return;
}

