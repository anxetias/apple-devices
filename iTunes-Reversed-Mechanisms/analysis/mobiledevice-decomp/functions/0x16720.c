// rea decompile_all
// name: _ccn_shift_right_asm
// address: 0x16720
// body: available
// range: 0x16720-0x1681f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccn_shift_right_asm(long param_1,ulong *param_2,ulong *param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar9 = -(param_4 + -0x40);
  lVar10 = param_1 + -4;
  if (param_1 < 4) {
LAB_000167c6:
    if (lVar10 < -2) {
      *param_2 = *param_3 >> param_4;
    }
    else if (lVar10 == -2) {
      uVar2 = param_3[1];
      *param_2 = *param_3 >> param_4 | param_3[1] << lVar9;
      param_2[1] = uVar2 >> param_4 | 0L << lVar9;
    }
    else {
      uVar3 = param_3[1];
      uVar2 = param_3[2];
      uVar4 = param_3[2];
      *param_2 = *param_3 >> param_4 | param_3[1] << lVar9;
      param_2[1] = uVar3 >> param_4 | uVar4 << lVar9;
      param_2[2] = uVar2 >> param_4;
    }
  }
  else {
    if (lVar10 != 0) {
      do {
        lVar11 = lVar10;
        uVar2 = *param_3;
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        puVar1 = param_3 + 1;
        uVar6 = param_3[2];
        uVar7 = param_3[3];
        uVar8 = param_3[4];
        param_3 = param_3 + 4;
        *param_2 = uVar2 >> param_4 | *puVar1 << lVar9;
        param_2[1] = uVar3 >> param_4 | uVar6 << lVar9;
        param_2[2] = uVar4 >> param_4 | uVar7 << lVar9;
        param_2[3] = uVar5 >> param_4 | uVar8 << lVar9;
        param_2 = param_2 + 4;
        lVar10 = lVar11 + -4;
      } while (lVar10 != 0 && 3 < lVar11);
      if (lVar11 < 4) goto LAB_000167c6;
    }
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[2];
    uVar2 = param_3[3];
    *param_2 = *param_3 >> param_4 | param_3[1] << lVar9;
    param_2[1] = uVar3 >> param_4 | uVar6 << lVar9;
    param_2[2] = uVar4 >> param_4 | uVar2 << lVar9;
    param_2[3] = uVar5 >> param_4 | 0L << lVar9;
  }
  return 0;
}

