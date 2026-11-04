// rea decompile_all
// name: _bi_windup
// address: 0x8388c
// body: available
// range: 0x8388c-0x838fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _bi_windup(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_1 + 0x1724) < 9) {
    if (*(int *)(param_1 + 0x1724) < 1) goto LAB_000838e8;
    uVar2 = (undefined1)*(undefined2 *)(param_1 + 0x1720);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = *(undefined1 *)(param_1 + 0x1720);
    uVar2 = *(undefined1 *)(param_1 + 0x1721);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1) = uVar2;
LAB_000838e8:
  *(undefined2 *)(param_1 + 0x1720) = 0;
  *(undefined4 *)(param_1 + 0x1724) = 0;
  return;
}

