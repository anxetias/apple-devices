// rea decompile_all
// name: _ccn_addmul1_asm
// address: 0x1c030
// body: available
// range: 0x1c030-0x1c132 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _ccn_addmul1_asm(long param_1,long param_2,long param_3,ulong param_4)

{
  unkint9 Var1;
  unkint9 Var2;
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
  bool bVar19;
  bool bVar20;
  
  param_2 = param_2 + param_1 * 8;
  param_3 = param_3 + param_1 * 8;
  uVar17 = -param_1;
  bVar19 = false;
  bVar20 = false;
  uVar18 = 0;
  if ((uVar17 & 1) != 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_4;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulong *)(param_3 + param_1 * -8);
    uVar18 = SUB168(auVar3 * auVar10,8);
    Var1 = (unkuint9)SUB168(auVar3 * auVar10,0) + (unkuint9)*(ulong *)(param_2 + param_1 * -8) +
           (unkuint9)0;
    bVar19 = (char)((unkuint9)Var1 >> 0x40) != '\0';
    *(long *)(param_2 + param_1 * -8) = (long)Var1;
    uVar17 = uVar17 + 1;
  }
  if ((uVar17 & 3) != 0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_4;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulong *)(param_3 + uVar17 * 8);
    Var1 = (unkuint9)SUB168(auVar4 * auVar11,0) + (unkuint9)uVar18 + (unkuint9)bVar19;
    Var2 = (unkuint9)(ulong)Var1 + (unkuint9)*(ulong *)(param_2 + uVar17 * 8) + (unkuint9)0;
    *(long *)(param_2 + uVar17 * 8) = (long)Var2;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_4;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulong *)(param_3 + 8 + uVar17 * 8);
    uVar18 = SUB168(auVar5 * auVar12,8);
    Var1 = (unkuint9)SUB168(auVar5 * auVar12,0) + (unkuint9)SUB168(auVar4 * auVar11,8) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    bVar19 = (char)((unkuint9)Var1 >> 0x40) != '\0';
    Var1 = (unkuint9)(ulong)Var1 + (unkuint9)*(ulong *)(param_2 + 8 + uVar17 * 8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    bVar20 = (char)((unkuint9)Var1 >> 0x40) != '\0';
    *(long *)(param_2 + 8 + uVar17 * 8) = (long)Var1;
    uVar17 = uVar17 + 2;
  }
  for (; uVar17 != 0; uVar17 = uVar17 + 4) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_4;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(ulong *)(param_3 + uVar17 * 8);
    Var1 = (unkuint9)SUB168(auVar6 * auVar13,0) + (unkuint9)uVar18 + (unkuint9)bVar19;
    Var2 = (unkuint9)(ulong)Var1 + (unkuint9)*(ulong *)(param_2 + uVar17 * 8) + (unkuint9)bVar20;
    *(long *)(param_2 + uVar17 * 8) = (long)Var2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_4;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *(ulong *)(param_3 + 8 + uVar17 * 8);
    Var1 = (unkuint9)SUB168(auVar7 * auVar14,0) + (unkuint9)SUB168(auVar6 * auVar13,8) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var2 = (unkuint9)(ulong)Var1 + (unkuint9)*(ulong *)(param_2 + 8 + uVar17 * 8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    *(long *)(param_2 + 8 + uVar17 * 8) = (long)Var2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_4;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *(ulong *)(param_3 + 0x10 + uVar17 * 8);
    Var1 = (unkuint9)SUB168(auVar8 * auVar15,0) + (unkuint9)SUB168(auVar7 * auVar14,8) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var2 = (unkuint9)(ulong)Var1 + (unkuint9)*(ulong *)(param_2 + 0x10 + uVar17 * 8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    *(long *)(param_2 + 0x10 + uVar17 * 8) = (long)Var2;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_4;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulong *)(param_3 + 0x18 + uVar17 * 8);
    uVar18 = SUB168(auVar9 * auVar16,8);
    Var1 = (unkuint9)SUB168(auVar9 * auVar16,0) + (unkuint9)SUB168(auVar8 * auVar15,8) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    bVar19 = (char)((unkuint9)Var1 >> 0x40) != '\0';
    Var1 = (unkuint9)(ulong)Var1 + (unkuint9)*(ulong *)(param_2 + 0x18 + uVar17 * 8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    bVar20 = (char)((unkuint9)Var1 >> 0x40) != '\0';
    *(long *)(param_2 + 0x18 + uVar17 * 8) = (long)Var1;
  }
  return uVar18 + bVar19 + (ulong)bVar20;
}

