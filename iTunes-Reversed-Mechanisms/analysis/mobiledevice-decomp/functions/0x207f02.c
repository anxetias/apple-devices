// rea decompile_all
// name: _Annihilate
// address: 0x207f02
// body: available
// range: 0x207f02-0x207fb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _Annihilate(long param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (param_4 == 0 || param_2 == 0) {
    uVar6 = 0;
    uVar4 = 0;
    lVar8 = 0;
    lVar5 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    lVar5 = 0;
    lVar8 = 0;
    uVar4 = 0;
    uVar6 = 0;
    do {
      uVar1 = *(ulong *)(param_1 + uVar6 * 8);
      uVar2 = *(ulong *)(param_3 + uVar4 * 8);
      if (uVar1 == uVar2) {
        uVar6 = uVar6 + 1;
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 1;
      }
      else if (uVar1 < uVar2) {
        uVar6 = uVar6 + 1;
        *(ulong *)(param_1 + lVar8 * 8) = uVar1;
        lVar8 = lVar8 + 1;
      }
      else {
        uVar4 = uVar4 + 1;
        *(ulong *)(param_3 + lVar5 * 8) = uVar2;
        lVar5 = lVar5 + 1;
      }
    } while ((uVar6 < param_2) && (uVar4 < param_4));
  }
  if (uVar6 < param_2) {
    lVar7 = 0;
    do {
      *(undefined8 *)(param_1 + lVar8 * 8 + lVar7 * 8) =
           *(undefined8 *)(param_1 + uVar6 * 8 + lVar7 * 8);
      lVar7 = lVar7 + 1;
    } while (param_2 - uVar6 != lVar7);
  }
  if (uVar4 < param_4) {
    lVar8 = 0;
    do {
      *(undefined8 *)(param_3 + lVar5 * 8 + lVar8 * 8) =
           *(undefined8 *)(param_3 + uVar4 * 8 + lVar8 * 8);
      lVar8 = lVar8 + 1;
    } while (param_4 - uVar4 != lVar8);
  }
  return lVar3;
}

