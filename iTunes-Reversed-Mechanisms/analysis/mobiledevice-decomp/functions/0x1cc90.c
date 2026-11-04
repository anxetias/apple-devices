// rea decompile_all
// name: _ccn_mul
// address: 0x1cc90
// body: available
// range: 0x1cc90-0x1cd0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_mul(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 != 0) {
    param_3 = param_3 + param_1 * 8;
    param_4 = param_4 + param_1 * 8;
    puVar10 = (ulong *)(param_2 + param_1 * 8);
    lVar11 = -param_1;
    uVar9 = 0;
    uVar1 = *(ulong *)(param_4 + param_1 * -8);
    lVar12 = lVar11;
    do {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar9;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulong *)(param_3 + lVar12 * 8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar1;
      auVar6 = auVar2 * auVar4 + auVar6;
      uVar9 = auVar6._8_8_;
      puVar10[lVar12] = auVar6._0_8_;
      lVar12 = lVar12 + 1;
      lVar13 = lVar11;
    } while (lVar12 != 0);
    while( true ) {
      *puVar10 = uVar9;
      lVar13 = lVar13 + 1;
      if (lVar13 == 0) break;
      puVar10 = puVar10 + 1;
      uVar9 = 0;
      uVar1 = *(ulong *)(param_4 + lVar13 * 8);
      lVar12 = lVar11;
      do {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar9;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulong *)(param_3 + lVar12 * 8);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar1;
        auVar7 = auVar3 * auVar5 + auVar7;
        uVar8 = auVar7._0_8_;
        uVar9 = auVar7._8_8_ + (ulong)CARRY8(uVar8,puVar10[lVar12]);
        puVar10[lVar12] = uVar8 + puVar10[lVar12];
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0);
    }
  }
  return;
}

