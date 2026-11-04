// rea decompile_all
// name: _ccn_mul1_asm
// address: 0x8f60
// body: available
// range: 0x8f60-0x9004 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _ccn_mul1_asm(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;
  
  param_2 = param_2 + param_1 * 8;
  param_3 = param_3 + param_1 * 8;
  uVar20 = -param_1;
  uVar18 = 0;
  if ((uVar20 & 1) != 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_4;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulong *)(param_3 + param_1 * -8);
    uVar18 = SUB168(auVar3 * auVar10,8);
    *(long *)(param_2 + param_1 * -8) = SUB168(auVar3 * auVar10,0);
    uVar20 = uVar20 + 1;
  }
  bVar24 = false;
  if ((uVar20 >> 1 & 1) != 0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_4;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulong *)(param_3 + uVar20 * 8);
    uVar1 = SUB168(auVar4 * auVar11,0);
    uVar21 = SUB168(auVar4 * auVar11,8);
    bVar24 = CARRY8(uVar1,uVar18);
    *(ulong *)(param_2 + uVar20 * 8) = uVar1 + uVar18;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulong *)(param_3 + 8 + uVar20 * 8);
    uVar17 = SUB168(auVar5 * auVar12,0);
    uVar18 = SUB168(auVar5 * auVar12,8);
    uVar1 = (ulong)bVar24;
    uVar2 = uVar17 + uVar21;
    bVar24 = CARRY8(uVar17,uVar21) || CARRY8(uVar2,uVar1);
    *(ulong *)(param_2 + 8 + uVar20 * 8) = uVar2 + uVar1;
    uVar20 = uVar20 + 2;
  }
  for (; uVar20 != 0; uVar20 = uVar20 + 4) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_4;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(ulong *)(param_3 + uVar20 * 8);
    uVar2 = SUB168(auVar6 * auVar13,0);
    uVar22 = SUB168(auVar6 * auVar13,8);
    uVar1 = uVar2 + uVar18;
    *(ulong *)(param_2 + uVar20 * 8) = uVar1 + bVar24;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_4;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *(ulong *)(param_3 + 8 + uVar20 * 8);
    uVar17 = SUB168(auVar7 * auVar14,0);
    uVar19 = SUB168(auVar7 * auVar14,8);
    uVar18 = (ulong)(CARRY8(uVar2,uVar18) || CARRY8(uVar1,(ulong)bVar24));
    uVar1 = uVar17 + uVar22;
    *(ulong *)(param_2 + 8 + uVar20 * 8) = uVar1 + uVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_4;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *(ulong *)(param_3 + 0x10 + uVar20 * 8);
    uVar21 = SUB168(auVar8 * auVar15,0);
    uVar23 = SUB168(auVar8 * auVar15,8);
    uVar1 = (ulong)(CARRY8(uVar17,uVar22) || CARRY8(uVar1,uVar18));
    uVar2 = uVar21 + uVar19;
    *(ulong *)(param_2 + 0x10 + uVar20 * 8) = uVar2 + uVar1;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_4;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulong *)(param_3 + 0x18 + uVar20 * 8);
    uVar17 = SUB168(auVar9 * auVar16,0);
    uVar18 = SUB168(auVar9 * auVar16,8);
    uVar1 = (ulong)(CARRY8(uVar21,uVar19) || CARRY8(uVar2,uVar1));
    uVar2 = uVar17 + uVar23;
    bVar24 = CARRY8(uVar17,uVar23) || CARRY8(uVar2,uVar1);
    *(ulong *)(param_2 + 0x18 + uVar20 * 8) = uVar2 + uVar1;
  }
  return uVar18 + bVar24;
}

