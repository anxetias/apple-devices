// rea decompile_all
// name: _SortPointers
// address: 0x8b1ea
// body: available
// range: 0x8b1ea-0x8b25d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _SortPointers(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = 0;
  do {
    uVar1 = (&_SortPointers_gaps)[lVar3];
    if (uVar1 < param_2) {
      lVar6 = param_1 + uVar1 * 8;
      lVar7 = param_1;
      uVar8 = uVar1;
      do {
        uVar2 = *(ulong *)(param_1 + uVar8 * 8);
        uVar5 = uVar8;
        if (uVar1 <= uVar8) {
          lVar4 = 0;
          do {
            uVar5 = *(ulong *)(lVar7 + lVar4 * 8);
            if (uVar5 <= uVar2) {
              uVar5 = lVar4 + uVar8;
              break;
            }
            *(ulong *)(lVar6 + lVar4 * 8) = uVar5;
            lVar4 = lVar4 - uVar1;
            uVar5 = uVar8 + lVar4;
          } while (uVar1 <= uVar5);
        }
        *(ulong *)(param_1 + uVar5 * 8) = uVar2;
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 8;
        lVar7 = lVar7 + 8;
      } while (uVar8 != param_2);
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 4) {
      return;
    }
  } while( true );
}

