// rea decompile_all
// name: _ccn_sqr_ws
// address: 0xfeb4
// body: available
// range: 0xfeb4-0xffd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_sqr_ws(undefined8 param_1,ulong param_2,undefined8 *param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  bool bVar21;
  
  uVar10 = _ccn_mul1(param_2 - 1,param_3 + 1,param_4 + 1,*param_4);
  param_3[param_2] = uVar10;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_4;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_4;
  uVar13 = SUB168(auVar4 * auVar6,8);
  *param_3 = SUB168(auVar4 * auVar6,0);
  uVar11 = param_3[1] * 2;
  uVar16 = (ulong)CARRY8(uVar11,uVar13) - ((long)param_3[1] >> 0x3f);
  param_3[1] = uVar11 + uVar13;
  if (1 < param_2) {
    lVar20 = param_2 - 2;
    lVar15 = 0;
    lVar19 = 0;
    do {
      uVar10 = _ccn_addmul1(lVar20,(long)param_3 + lVar15 + 0x18,(long)param_4 + lVar19 + 0x10,
                            *(undefined8 *)((long)param_4 + lVar19 + 8));
      *(undefined8 *)((long)param_3 + lVar19 + param_2 * 8 + 8) = uVar10;
      uVar11 = *(ulong *)((long)param_4 + lVar19 + 8);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar11;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar11;
      uVar14 = SUB168(auVar5 * auVar7,8);
      uVar11 = SUB168(auVar5 * auVar7,0);
      lVar1 = *(long *)((long)param_3 + lVar19 * 2 + 0x10);
      lVar2 = *(long *)((long)param_3 + lVar19 * 2 + 0x18);
      uVar18 = -(lVar1 >> 0x3f);
      uVar8 = lVar1 * 2;
      uVar9 = lVar2 * 2;
      uVar12 = uVar11 + uVar16;
      uVar11 = (ulong)CARRY8(uVar11,uVar16);
      uVar16 = uVar9 + uVar14;
      uVar17 = uVar16 + uVar11;
      uVar13 = (ulong)CARRY8(uVar12,uVar8);
      uVar3 = uVar17 + uVar18;
      *(ulong *)((long)param_3 + lVar19 * 2 + 0x10) = uVar12 + uVar8;
      uVar16 = ((ulong)(CARRY8(uVar9,uVar14) || CARRY8(uVar16,uVar11)) - (lVar2 >> 0x3f)) +
               (ulong)(CARRY8(uVar17,uVar18) || CARRY8(uVar3,uVar13));
      *(ulong *)((long)param_3 + lVar19 * 2 + 0x18) = uVar3 + uVar13;
      lVar19 = lVar19 + 8;
      lVar15 = lVar15 + 0x10;
      bVar21 = lVar20 != 0;
      lVar20 = lVar20 + -1;
    } while (bVar21);
  }
  return;
}

