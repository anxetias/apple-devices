// rea decompile_all
// name: _ccn_mulmod_p224
// address: 0x8c70
// body: available
// range: 0x8c70-0x8ef8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccn_mulmod_p224(long *param_1,ulong *param_2,ulong *param_3)

{
  unkint9 Var1;
  unkint9 Var2;
  unkint9 Var3;
  unkint9 Var4;
  unkint9 Var5;
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
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
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
  
  uVar39 = *param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar39;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_3;
  uVar50 = SUB168(auVar6 * auVar22,0);
  uVar42 = SUB168(auVar6 * auVar22,8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar39;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_3[1];
  uVar46 = SUB168(auVar7 * auVar23,0);
  uVar45 = SUB168(auVar7 * auVar23,8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar39;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_3[2];
  uVar43 = SUB168(auVar8 * auVar24,0);
  uVar49 = SUB168(auVar8 * auVar24,8);
  uVar53 = (ulong)CARRY8(uVar42,uVar46);
  uVar51 = uVar45 + uVar43;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar39;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_3[3];
  uVar52 = SUB168(auVar9 * auVar25,0);
  uVar43 = (ulong)(CARRY8(uVar45,uVar43) || CARRY8(uVar51,uVar53));
  uVar45 = uVar49 + uVar52;
  uVar39 = param_2[1];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar39;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = *param_3;
  Var2 = (unkuint9)(uVar42 + uVar46) + (unkuint9)SUB168(auVar10 * auVar26,0) + (unkuint9)0;
  uVar46 = (ulong)Var2;
  Var1 = (unkuint9)(uVar51 + uVar53) + (unkuint9)SUB168(auVar10 * auVar26,8) + (unkuint9)0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar39;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_3[1];
  Var2 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar11 * auVar27,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var1 = (unkuint9)(uVar45 + uVar43) + (unkuint9)SUB168(auVar11 * auVar27,8) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar39;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_3[2];
  Var3 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar12 * auVar28,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var1 = (unkuint9)
         (SUB168(auVar9 * auVar25,8) + (ulong)(CARRY8(uVar49,uVar52) || CARRY8(uVar45,uVar43))) +
         (unkuint9)SUB168(auVar12 * auVar28,8) + (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar39;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_3[3];
  Var4 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar13 * auVar29,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar39 = param_2[2];
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar39;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = *param_3;
  Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar14 * auVar30,0) + (unkuint9)0;
  uVar53 = (ulong)Var5;
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar14 * auVar30,8) + (unkuint9)0;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar39;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_3[1];
  Var3 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar15 * auVar31,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar15 * auVar31,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar39;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_3[2];
  Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar16 * auVar32,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  Var1 = (unkuint9)
         (SUB168(auVar13 * auVar29,8) + (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0') +
         (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0')) + (unkuint9)SUB168(auVar16 * auVar32,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar39;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_3[3];
  Var4 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar17 * auVar33,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar39 = param_2[3];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar39;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = *param_3;
  Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar18 * auVar34,0) + (unkuint9)0;
  uVar45 = (ulong)Var3;
  Var2 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar18 * auVar34,8) + (unkuint9)0;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar39;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_3[1];
  Var3 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar19 * auVar35,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar52 = (ulong)Var3;
  Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar19 * auVar35,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar39;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_3[2];
  Var3 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar20 * auVar36,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar42 = (ulong)Var3;
  Var1 = (unkuint9)
         (SUB168(auVar17 * auVar33,8) + (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0') +
         (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0')) + (unkuint9)SUB168(auVar20 * auVar36,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar39;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_3[3];
  Var2 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar21 * auVar37,0) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar49 = (ulong)Var2;
  uVar39 = -uVar50;
  uVar40 = uVar39 >> 0x20;
  uVar38 = uVar39 << 0x20;
  uVar39 = (ulong)CARRY8(uVar50,uVar39);
  uVar43 = uVar46 + uVar39;
  uVar39 = (ulong)CARRY8(uVar46,uVar39);
  uVar46 = uVar53 + uVar39;
  uVar39 = (ulong)CARRY8(uVar53,uVar39);
  uVar53 = uVar45 + uVar38;
  uVar50 = uVar53 + uVar39;
  uVar44 = uVar43 - uVar38;
  uVar43 = (ulong)(uVar43 < uVar38);
  uVar51 = uVar46 - uVar40;
  uVar47 = uVar51 - uVar43;
  uVar43 = (ulong)(uVar46 < uVar40 || uVar51 < uVar43);
  uVar51 = uVar50 - uVar43;
  uVar50 = (uVar40 + (CARRY8(uVar45,uVar38) || CARRY8(uVar53,uVar39))) - (ulong)(uVar50 < uVar43);
  uVar39 = -uVar44;
  uVar46 = uVar39 >> 0x20;
  uVar45 = uVar39 << 0x20;
  uVar39 = (ulong)CARRY8(uVar44,uVar39);
  uVar43 = uVar47 + uVar39;
  uVar39 = (ulong)CARRY8(uVar47,uVar39);
  uVar38 = uVar51 + uVar39;
  uVar39 = (ulong)CARRY8(uVar51,uVar39);
  uVar53 = uVar52 + uVar45;
  uVar47 = uVar53 + uVar39;
  uVar40 = uVar43 - uVar45;
  uVar43 = (ulong)(uVar43 < uVar45);
  uVar51 = uVar38 - uVar46;
  uVar44 = uVar51 - uVar43;
  uVar43 = (ulong)(uVar38 < uVar46 || uVar51 < uVar43);
  uVar51 = uVar47 - uVar43;
  uVar38 = (uVar46 + (CARRY8(uVar52,uVar45) || CARRY8(uVar53,uVar39))) - (ulong)(uVar47 < uVar43);
  uVar39 = -uVar40;
  uVar46 = uVar39 >> 0x20;
  uVar45 = uVar39 << 0x20;
  uVar39 = (ulong)CARRY8(uVar40,uVar39);
  uVar43 = uVar44 + uVar39;
  uVar39 = (ulong)CARRY8(uVar44,uVar39);
  uVar52 = uVar51 + uVar39;
  uVar39 = (ulong)CARRY8(uVar51,uVar39);
  uVar53 = uVar42 + uVar45;
  uVar40 = uVar53 + uVar39;
  uVar44 = uVar43 - uVar45;
  uVar43 = (ulong)(uVar43 < uVar45);
  uVar51 = uVar52 - uVar46;
  uVar47 = uVar51 - uVar43;
  uVar43 = (ulong)(uVar52 < uVar46 || uVar51 < uVar43);
  uVar51 = uVar40 - uVar43;
  uVar40 = (uVar46 + (CARRY8(uVar42,uVar45) || CARRY8(uVar53,uVar39))) - (ulong)(uVar40 < uVar43);
  uVar39 = -uVar44;
  uVar52 = uVar39 >> 0x20;
  uVar46 = uVar39 << 0x20;
  uVar39 = (ulong)CARRY8(uVar44,uVar39);
  uVar53 = uVar47 + uVar39;
  uVar39 = (ulong)CARRY8(uVar47,uVar39);
  uVar45 = uVar51 + uVar39;
  uVar39 = (ulong)CARRY8(uVar51,uVar39);
  uVar43 = uVar49 + uVar46;
  uVar47 = uVar43 + uVar39;
  uVar42 = uVar53 - uVar46;
  uVar53 = (ulong)(uVar53 < uVar46);
  uVar51 = uVar45 - uVar52;
  uVar44 = uVar51 - uVar53;
  uVar45 = (ulong)(uVar45 < uVar52 || uVar51 < uVar53);
  uVar54 = uVar47 - uVar45;
  lVar41 = uVar50 + uVar42;
  uVar53 = (ulong)CARRY8(uVar50,uVar42);
  uVar51 = uVar38 + uVar44;
  uVar42 = uVar51 + uVar53;
  uVar53 = (ulong)(CARRY8(uVar38,uVar44) || CARRY8(uVar51,uVar53));
  uVar51 = uVar40 + uVar54;
  lVar48 = uVar51 + uVar53;
  uVar43 = ((uVar52 + (CARRY8(uVar49,uVar46) || CARRY8(uVar43,uVar39))) - (ulong)(uVar47 < uVar45))
           + SUB168(auVar21 * auVar37,8) + (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0') +
             (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0') +
           (ulong)(CARRY8(uVar40,uVar54) || CARRY8(uVar51,uVar53));
  uVar49 = lVar41 - 1;
  uVar39 = (ulong)(lVar41 == 0);
  uVar53 = uVar42 + 0x100000000;
  uVar51 = uVar53 - uVar39;
  uVar39 = (ulong)(uVar42 < 0xffffffff00000000 || uVar53 < uVar39);
  uVar53 = lVar48 + 1;
  uVar50 = uVar53 - uVar39;
  uVar45 = (ulong)(lVar48 != -1 || uVar53 < uVar39);
  uVar52 = uVar43 - 0xffffffff;
  uVar46 = (ulong)(uVar43 < 0xffffffff || uVar52 < uVar45);
  uVar42 = -uVar46;
  uVar39 = (ulong)CARRY8(uVar49,uVar46);
  uVar43 = uVar51 + (uVar42 & 0xffffffff00000000);
  uVar53 = (ulong)(CARRY8(uVar51,uVar42 & 0xffffffff00000000) || CARRY8(uVar43,uVar39));
  uVar51 = uVar50 + uVar42;
  *param_1 = uVar49 + uVar46;
  param_1[1] = uVar43 + uVar39;
  param_1[2] = uVar51 + uVar53;
  param_1[3] = (uVar52 - uVar45) + (uVar42 & 0xffffffff) +
               (ulong)(CARRY8(uVar50,uVar42) || CARRY8(uVar51,uVar53));
  return;
}

