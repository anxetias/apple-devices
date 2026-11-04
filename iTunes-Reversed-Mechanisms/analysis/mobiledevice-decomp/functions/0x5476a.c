// rea decompile_all
// name: _PrepareH41
// address: 0x5476a
// body: available
// range: 0x5476a-0x54807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _PrepareH41(undefined2 *param_1,int param_2,ulong param_3,long param_4)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  
  pvVar1 = *(void **)(param_1 + 8);
  if (param_3 < 0x201 && param_2 != 0) {
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        uVar3 = (ulong)((uint)(*(int *)(param_4 + uVar2) * 0x1e35a7bd) >> 0x11);
        *(undefined4 *)((long)pvVar1 + uVar3 * 4) = 0xcccccccc;
        *(undefined2 *)((long)pvVar1 + uVar3 * 2 + 0x20000) = 0xcccc;
        uVar2 = uVar2 + 1;
      } while (param_3 != uVar2);
    }
  }
  else {
    _memset(pvVar1,0xcc,0x20000);
    ___bzero((long)pvVar1 + 0x20000,0x10000);
  }
  ___bzero((long)pvVar1 + 0x30000,0x10000);
  *param_1 = 0;
  return;
}

