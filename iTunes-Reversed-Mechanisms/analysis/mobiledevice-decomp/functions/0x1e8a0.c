// rea decompile_all
// name: _ccn_mulmod_p256
// address: 0x1e8a0
// body: available
// range: 0x1e8a0-0x1eb08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_mulmod_p256(long *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  unkint9 Var4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  
  uVar1 = *param_2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *param_3;
  uVar47 = SUB168(auVar9 * auVar25,0);
  uVar49 = SUB168(auVar9 * auVar25,8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_3[1];
  uVar46 = SUB168(auVar10 * auVar26,0);
  uVar51 = SUB168(auVar10 * auVar26,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_3[2];
  uVar3 = SUB168(auVar11 * auVar27,0);
  uVar54 = SUB168(auVar11 * auVar27,8);
  uVar2 = (ulong)CARRY8(uVar49,uVar46);
  uVar45 = uVar51 + uVar3;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_3[3];
  uVar56 = SUB168(auVar12 * auVar28,0);
  uVar3 = (ulong)(CARRY8(uVar51,uVar3) || CARRY8(uVar45,uVar2));
  uVar51 = uVar54 + uVar56;
  uVar1 = param_2[1];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = *param_3;
  Var5 = (unkuint9)(uVar49 + uVar46) + (unkuint9)SUB168(auVar13 * auVar29,0) + (unkuint9)0;
  uVar49 = (ulong)Var5;
  Var4 = (unkuint9)(uVar45 + uVar2) + (unkuint9)SUB168(auVar13 * auVar29,8) + (unkuint9)0;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar1;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_3[1];
  Var5 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar14 * auVar30,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var4 = (unkuint9)(uVar51 + uVar3) + (unkuint9)SUB168(auVar14 * auVar30,8) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar1;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_3[2];
  Var6 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar15 * auVar31,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var4 = (unkuint9)
         (SUB168(auVar12 * auVar28,8) + (ulong)(CARRY8(uVar54,uVar56) || CARRY8(uVar51,uVar3))) +
         (unkuint9)SUB168(auVar15 * auVar31,8) + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_3[3];
  Var7 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar16 * auVar32,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar1 = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar1;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = *param_3;
  Var8 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar17 * auVar33,0) + (unkuint9)0;
  uVar3 = (ulong)Var8;
  Var5 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar17 * auVar33,8) + (unkuint9)0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar1;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_3[1];
  Var6 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar18 * auVar34,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar18 * auVar34,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar1;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_3[2];
  Var8 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar19 * auVar35,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var4 = (unkuint9)
         (SUB168(auVar16 * auVar32,8) + (ulong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
         (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0')) + (unkuint9)SUB168(auVar19 * auVar35,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar1;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_3[3];
  Var7 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar20 * auVar36,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  uVar1 = param_2[3];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar1;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *param_3;
  Var6 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar21 * auVar37,0) + (unkuint9)0;
  uVar45 = (ulong)Var6;
  Var5 = (unkuint9)(ulong)Var8 + (unkuint9)SUB168(auVar21 * auVar37,8) + (unkuint9)0;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_3[1];
  Var6 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar22 * auVar38,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar51 = (ulong)Var6;
  Var5 = (unkuint9)(ulong)Var7 + (unkuint9)SUB168(auVar22 * auVar38,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar1;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_3[2];
  Var6 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar23 * auVar39,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar56 = (ulong)Var6;
  Var4 = (unkuint9)
         (SUB168(auVar20 * auVar36,8) + (ulong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
         (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0')) + (unkuint9)SUB168(auVar23 * auVar39,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar1;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_3[3];
  Var5 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar24 * auVar40,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar54 = (ulong)Var5;
  uVar46 = SUB168(auVar24 * auVar40,8) + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
           (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar47;
  uVar53 = SUB168(ZEXT816(0xffffffff00000001) * auVar41,0);
  uVar50 = uVar49 + (uVar47 << 0x20);
  uVar1 = (ulong)CARRY8(uVar49,uVar47 << 0x20);
  uVar2 = uVar3 + (uVar47 >> 0x20);
  uVar52 = uVar2 + uVar1;
  uVar1 = (ulong)(CARRY8(uVar3,uVar47 >> 0x20) || CARRY8(uVar2,uVar1));
  uVar2 = uVar45 + uVar53;
  uVar55 = uVar2 + uVar1;
  uVar47 = SUB168(ZEXT816(0xffffffff00000001) * auVar41,8) +
           (ulong)(CARRY8(uVar45,uVar53) || CARRY8(uVar2,uVar1));
  uVar45 = uVar50 >> 0x20;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar50;
  uVar3 = SUB168(ZEXT816(0xffffffff00000001) * auVar42,0);
  uVar53 = uVar52 + (uVar49 << 0x20);
  uVar1 = (ulong)CARRY8(uVar52,uVar49 << 0x20);
  uVar2 = uVar55 + uVar45;
  uVar50 = uVar2 + uVar1;
  uVar1 = (ulong)(CARRY8(uVar55,uVar45) || CARRY8(uVar2,uVar1));
  uVar2 = uVar51 + uVar3;
  uVar49 = uVar2 + uVar1;
  uVar51 = SUB168(ZEXT816(0xffffffff00000001) * auVar42,8) +
           (ulong)(CARRY8(uVar51,uVar3) || CARRY8(uVar2,uVar1));
  uVar45 = uVar53 >> 0x20;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar53;
  uVar3 = SUB168(ZEXT816(0xffffffff00000001) * auVar43,0);
  uVar53 = uVar50 + (uVar52 << 0x20);
  uVar1 = (ulong)CARRY8(uVar50,uVar52 << 0x20);
  uVar2 = uVar49 + uVar45;
  uVar52 = uVar2 + uVar1;
  uVar1 = (ulong)(CARRY8(uVar49,uVar45) || CARRY8(uVar2,uVar1));
  uVar2 = uVar56 + uVar3;
  uVar55 = uVar2 + uVar1;
  uVar49 = SUB168(ZEXT816(0xffffffff00000001) * auVar43,8) +
           (ulong)(CARRY8(uVar56,uVar3) || CARRY8(uVar2,uVar1));
  uVar45 = uVar53 >> 0x20;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar53;
  uVar3 = SUB168(ZEXT816(0xffffffff00000001) * auVar44,0);
  uVar56 = uVar52 + (uVar50 << 0x20);
  uVar1 = (ulong)CARRY8(uVar52,uVar50 << 0x20);
  uVar2 = uVar55 + uVar45;
  uVar50 = uVar2 + uVar1;
  uVar1 = (ulong)(CARRY8(uVar55,uVar45) || CARRY8(uVar2,uVar1));
  uVar2 = uVar54 + uVar3;
  uVar45 = uVar2 + uVar1;
  uVar53 = SUB168(ZEXT816(0xffffffff00000001) * auVar44,8) +
           (ulong)(CARRY8(uVar54,uVar3) || CARRY8(uVar2,uVar1));
  lVar48 = uVar47 + uVar56;
  uVar1 = (ulong)CARRY8(uVar47,uVar56);
  uVar2 = uVar51 + uVar50;
  uVar56 = uVar2 + uVar1;
  uVar1 = (ulong)(CARRY8(uVar51,uVar50) || CARRY8(uVar2,uVar1));
  uVar2 = uVar49 + uVar45;
  uVar51 = uVar2 + uVar1;
  uVar1 = (ulong)(CARRY8(uVar49,uVar45) || CARRY8(uVar2,uVar1));
  uVar2 = uVar53 + uVar46;
  uVar47 = uVar2 + uVar1;
  uVar49 = lVar48 + 1;
  uVar3 = (ulong)(lVar48 != -1);
  uVar45 = uVar56 - 0xffffffff;
  uVar54 = uVar45 - uVar3;
  uVar3 = (ulong)(uVar56 < 0xffffffff || uVar45 < uVar3);
  uVar56 = uVar51 - uVar3;
  uVar45 = (ulong)(uVar51 < uVar3);
  uVar51 = uVar47 + 0xffffffff;
  uVar46 = (ulong)(CARRY8(uVar53,uVar46) || CARRY8(uVar2,uVar1)) -
           (ulong)(uVar47 < 0xffffffff00000001 || uVar51 < uVar45);
  uVar1 = (ulong)CARRY8(uVar49,uVar46);
  uVar3 = uVar54 + (uVar46 & 0xffffffff);
  uVar2 = (ulong)(CARRY8(uVar54,uVar46 & 0xffffffff) || CARRY8(uVar3,uVar1));
  *param_1 = uVar49 + uVar46;
  param_1[1] = uVar3 + uVar1;
  param_1[2] = uVar56 + uVar2;
  param_1[3] = (uVar51 - uVar45) + (uVar46 & 0xffffffff00000001) + (ulong)CARRY8(uVar56,uVar2);
  return;
}

