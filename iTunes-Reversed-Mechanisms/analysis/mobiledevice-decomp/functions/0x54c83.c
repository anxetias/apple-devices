// rea decompile_all
// name: _GetHashTable
// address: 0x54c83
// body: available
// range: 0x54c83-0x54d5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GetHashTable(long param_1,int param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = 0x20000;
  if (param_2 == 0) {
    uVar2 = 0x8000;
  }
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  uVar1 = 0x100;
  do {
    uVar4 = uVar1;
    uVar1 = uVar4 * 2;
  } while (uVar4 < uVar2);
  uVar2 = uVar4 * 2;
  if ((uVar4 & 0xaaa00) != 0) {
    uVar2 = uVar4;
  }
  if (param_2 != 0) {
    uVar2 = uVar4;
  }
  if (uVar2 < 0x401) {
    lVar3 = param_1 + 0xde0;
  }
  else if (*(ulong *)(param_1 + 0x1de8) < uVar2) {
    *(ulong *)(param_1 + 0x1de8) = uVar2;
    _BrotliFree(param_1 + 0x90,*(undefined8 *)(param_1 + 0x1de0));
    *(undefined8 *)(param_1 + 0x1de0) = 0;
    lVar3 = _BrotliAllocate(param_1 + 0x90,uVar2 * 4);
    *(long *)(param_1 + 0x1de0) = lVar3;
    if (*(int *)(param_1 + 0xa8) != 0) {
      return 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x1de0);
  }
  *param_4 = uVar2;
  ___bzero(lVar3,uVar2 << 2);
  return lVar3;
}

