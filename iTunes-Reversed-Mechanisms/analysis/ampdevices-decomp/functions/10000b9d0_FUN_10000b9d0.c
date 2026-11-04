// name: FUN_10000b9d0
// address: 10000b9d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000100012212) overlaps instruction at (ram,0x000100012211)
    */
/* WARNING: Removing unreachable block (ram,0x000100012438) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10000b9d0(undefined *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  ushort uVar6;
  undefined3 uVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  uint uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  code *UNRECOVERED_JUMPTABLE_06;
  char *pcVar17;
  undefined7 uVar20;
  code *pcVar18;
  code *UNRECOVERED_JUMPTABLE_05;
  undefined8 uVar19;
  code cVar22;
  undefined7 uVar24;
  ulong uVar23;
  byte bVar25;
  uint uVar27;
  byte bVar28;
  code *UNRECOVERED_JUMPTABLE_01;
  uint uVar29;
  uint uVar30;
  code cVar32;
  code *pcVar31;
  long *plVar33;
  code **ppcVar34;
  uint uVar35;
  code cVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  code *pcVar40;
  byte bVar41;
  uint uVar42;
  code *pcVar43;
  uint uVar44;
  uint uVar45;
  code *pcVar46;
  byte bVar47;
  uint uVar48;
  code *UNRECOVERED_JUMPTABLE_04;
  uint *puVar49;
  uint uVar50;
  code *pcVar51;
  uint uVar52;
  code *pcVar53;
  uint uVar54;
  undefined **ppuVar55;
  uint *UNRECOVERED_JUMPTABLE_03;
  undefined **ppuVar56;
  undefined2 in_ES;
  long in_GS_OFFSET;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  longdouble in_ST0;
  code *pcStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  uint auStack_1b8 [66];
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_50;
  undefined8 local_38;
  ushort uVar11;
  undefined6 uVar21;
  undefined2 uVar26;
  
  bVar41 = 0;
  UNRECOVERED_JUMPTABLE_04 = (code *)&stack0xfffffffffffffff8;
  ppcVar34 = (code **)auStack_1b8;
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar13 = (ulong)(auStack_1b8 + 2) ^ _DAT_10088e7e0 ^ DAT_10088e7f8;
  _DAT_10088e7e0 = uVar13 * 0x79f54c43 ^ 0xa7a004eac7f8732f;
  DAT_10088e7f8 = (uVar13 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
  uVar12 = ((int)DAT_10088e7f8 + (int)_DAT_10088e7e0 ^ 0xc7f8732fU) * 0x79f54c43;
  ppuVar56 = &PTR__bootstrap_look_up_10082e9f0;
  UNRECOVERED_JUMPTABLE_05 =
       (code *)(&PTR__bootstrap_look_up_10082e9f0)
               [(int)((byte)((byte)uVar12 ^
                            (&DAT_1006cff50)[(byte)(&DAT_1006d2b00)[uVar12 & 0xff] ^ 0x5e]) - 0x52)]
  ;
  lStack_1c0 = 0x10000ba75;
  ppuVar14 = (undefined **)(*UNRECOVERED_JUMPTABLE_05)(0x18);
  UNRECOVERED_JUMPTABLE_03 = (uint *)&DAT_1006d03f0;
  uVar12 = 0x3165f9b2;
  pcVar31 = (code *)&stack0xfffffffffffffff8;
  switch(ppuVar14 == (undefined **)0x0) {
  case false:
    pcVar31 = (code *)0x7;
    *ppuVar14 = (undefined *)0x0;
    ppuVar14[1] = (undefined *)0x578a91945daaea27;
    *(undefined4 *)(ppuVar14 + 2) = 0;
    pcVar43 = (code *)0x1000;
    lStack_1c0 = 0x10000e303;
    ppuStack_b0 = ppuVar14 + 0x9f4facf3ce26f49;
    pcStack_a8 = UNRECOVERED_JUMPTABLE_05;
    puVar16 = (undefined *)(*UNRECOVERED_JUMPTABLE_05)();
    *ppuVar14 = puVar16;
    puStack_50 = PTR__free_10082eaf0;
    switch(puVar16 == (undefined *)0x0) {
    case false:
code_r0x00010001164e:
      *(undefined **)(UNRECOVERED_JUMPTABLE_04 + -0x1a0) = param_1;
      uVar29 = (int)pcVar31 - 7;
      uVar30 = uVar29 | 1;
      UNRECOVERED_JUMPTABLE_01 = (code *)(ulong)(uVar30 + 0xc09a63de);
      uVar12 = uVar30 + 0xc09a63de & 0x3f659cf7;
      param_1 = (undefined *)(ulong)uVar12;
      *(undefined4 *)(ppuVar14 + 1) = 0x5daafa27;
      iVar38 = *(int *)(&DAT_1006d03f0 + (long)(int)(uVar30 + (ppuVar14 == (undefined **)0x0)) * 4);
      *(undefined **)(UNRECOVERED_JUMPTABLE_04 + -200) =
           (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar29 | 0xb)] + -0xb;
      uVar29 = uVar30 + 0xc;
      pcVar31 = (code *)(ulong)uVar29;
      *(undefined **)(UNRECOVERED_JUMPTABLE_04 + -0x130) =
           (&PTR__bootstrap_look_up_10082e9f0)[(int)uVar29] + -1;
      UNRECOVERED_JUMPTABLE_05 = (code *)0x0;
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = pcVar43;
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x80) = pcVar43;
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xe0) = pcVar43;
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd8) = pcVar43;
      *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = 0x742c45ff88570c30;
      *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x90) = 0x742c45ff88570c30;
      *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x78) = ppuVar14;
      switch(FUN_10001164e + iVar38) {
      case (code *)0x100013272:
switchD_1000116f3_caseD_13272:
                    /* WARNING: Could not recover jumptable at 0x00010001329c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_05 =
             (code *)(*(code *)((long)*(int *)(&DAT_1006d03f0 +
                                              (long)(int)(((uint)UNRECOVERED_JUMPTABLE_05 & 1) +
                                                         uVar12) * 4) + 0x100013272))();
        return UNRECOVERED_JUMPTABLE_05;
      }
code_r0x000100011577:
      uVar27 = (uint)UNRECOVERED_JUMPTABLE_01 ^ 0xc09a63da;
      UNRECOVERED_JUMPTABLE_01 = (code *)(ulong)uVar27;
      UNRECOVERED_JUMPTABLE_05 = (code *)(ulong)(uVar27 + 0x509a625a);
      goto code_r0x000100011583;
    case true:
      uVar12 = 0x3165f9b2;
      pcVar31 = (code *)&stack0xfffffffffffffff8;
      switch(ppuVar14 == (undefined **)0x0) {
      case false:
        lStack_1c0 = 0x100013efe;
        (*(code *)PTR__free_10082eaf0)(ppuVar14);
        UNRECOVERED_JUMPTABLE_05 = (code *)switchD_10000baba::caseD_1();
        return UNRECOVERED_JUMPTABLE_05;
      }
    }
  }
code_r0x000100010bf7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)(pcVar31 + -0x30)) {
    return (code *)(ulong)(uVar12 + 0xce995683);
  }
                    /* WARNING: Subroutine does not return */
  lStack_1c0 = (long)&UNK_1000104f1;
  ___stack_chk_fail();
code_r0x0001000115ea:
  UNRECOVERED_JUMPTABLE_06[-0x73] = (code)((char)UNRECOVERED_JUMPTABLE_06[-0x73] + (char)cVar22);
  goto code_r0x0001000115dd;
code_r0x0001000115ae:
  UNRECOVERED_JUMPTABLE_06 = (code *)CONCAT71(uVar20,bVar10 ^ (byte)UNRECOVERED_JUMPTABLE_04[0x31]);
  pcVar51 = UNRECOVERED_JUMPTABLE_05 + 0x6a783bfe;
  *pcVar51 = *pcVar51;
  bVar57 = ((byte)*pcVar51 & 1) != 0;
  goto code_r0x0001000115b8;
code_r0x00010000edbf:
                    /* WARNING: Could not recover jumptable at 0x00010000edd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_05 =
       (code *)(*UNRECOVERED_JUMPTABLE_06)
                         (0x3165f9b1,*(long *)(UNRECOVERED_JUMPTABLE_04 + -0xe8),
                          UNRECOVERED_JUMPTABLE_01,UNRECOVERED_JUMPTABLE_05,0x742c45ff88570c30);
  return UNRECOVERED_JUMPTABLE_05;
code_r0x0001000107a9:
  if ((char)pcVar43 == '\0') {
    uVar39 = (uint)pcVar46;
  }
  uVar13 = (ulong)*(int *)(&DAT_1006d03f0 + (long)(int)((uVar39 & 0xff) + uVar12) * 4);
  pcVar40 = (code *)&UNK_100010751;
code_r0x0001000107c5:
                    /* WARNING: Could not recover jumptable at 0x0001000107c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_05 = (code *)(*(pcVar40 + uVar13))(pcVar43,pcVar40 + uVar13);
  return UNRECOVERED_JUMPTABLE_05;
code_r0x00010001543e:
  *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xb8) = pcVar46;
  *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = pcVar46;
  *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd8) = pcVar46;
  *(code **)(UNRECOVERED_JUMPTABLE_04 + -200) = pcVar46;
  *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xc0) = pcVar46;
  *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = 0x18646b13513134f3;
  *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x128) = UNRECOVERED_JUMPTABLE_06;
  uVar12 = uVar39;
LAB_10001a4cf:
  UNRECOVERED_JUMPTABLE_05 =
       (code *)((long)*(int *)(&DAT_1006d03f0 +
                              (long)(int)((UNRECOVERED_JUMPTABLE_06 < UNRECOVERED_JUMPTABLE_01) +
                                         0x82e9f0) * 4) + 0x10001a4cf);
                    /* WARNING: Could not emulate address calculation at 0x00010001a4fa */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_05 =
       (code *)(*UNRECOVERED_JUMPTABLE_05)
                         ((uVar12 - (uVar39 * 2 & 0xe3075861)) + -0xebdc8be,
                          (long)*(int *)(&DAT_1006d03f0 +
                                        (long)(int)((UNRECOVERED_JUMPTABLE_06 <
                                                    UNRECOVERED_JUMPTABLE_01) + 0x82e9f0) * 4),
                          UNRECOVERED_JUMPTABLE_01,puVar49,UNRECOVERED_JUMPTABLE_05);
  return UNRECOVERED_JUMPTABLE_05;
code_r0x000100011722:
  UNRECOVERED_JUMPTABLE_05[-0x570e7e07] = UNRECOVERED_JUMPTABLE_05[-0x570e7e07];
  *pcVar18 = (code)((char)*pcVar18 + (char)pcVar18);
code_r0x00010001171d:
  lVar15 = *(long *)(UNRECOVERED_JUMPTABLE_01 + (long)(int)(uVar42 ^ 0xa8) * 8);
  *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x58) = ppuVar14;
                    /* WARNING: Could not recover jumptable at 0x000100011765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_05 =
       (code *)(*(code *)(&UNK_1000116f6 +
                         *(int *)(pcVar46 +
                                 (long)(int)((ppuVar14 == (undefined **)(lVar15 + -1) &&
                                             (int)pcVar18 != 0x6d03f0) + uVar42) * 4)))
                         (0x3165f9b1,pcVar40,0x4469798c814565b9);
  return UNRECOVERED_JUMPTABLE_05;
code_r0x0001000129b4:
  uVar23 = (*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x1a0) -
           (*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x1a0) << ((byte)UNRECOVERED_JUMPTABLE_05 & 0x3f)
           & 0x681f333462e1d3ccU)) + 0xb40f999a3170e9e6;
  uVar13 = 0x81004187e2014213;
  pcVar18 = pcVar18 + -0x7effbe781dfebded;
  UNRECOVERED_JUMPTABLE_01[(long)pcVar18] = (code)((byte)(uVar23 >> 0x38) ^ 0xb4);
  (UNRECOVERED_JUMPTABLE_01 + 1)[(long)pcVar18] = (code)((byte)(uVar23 >> 0x30) ^ 0xf);
  (UNRECOVERED_JUMPTABLE_01 + 2)[(long)pcVar18] = (code)((byte)(uVar23 >> 0x28) ^ 0x99);
  (UNRECOVERED_JUMPTABLE_01 + 3)[(long)pcVar18] = (code)((byte)(uVar23 >> 0x20) ^ 0x9a);
  (UNRECOVERED_JUMPTABLE_01 + 4)[(long)pcVar18] = (code)((byte)(uVar23 >> 0x18) ^ 0x31);
  (UNRECOVERED_JUMPTABLE_01 + 5)[(long)pcVar18] = (code)((byte)(uVar23 >> 0x10) ^ 0x70);
  pcVar40 = (code *)(uVar23 >> 8 & 0xffffff ^ 0xe9);
  (UNRECOVERED_JUMPTABLE_01 + 6)[(long)pcVar18] = SUB81(pcVar40,0);
  (UNRECOVERED_JUMPTABLE_01 + 7)[(long)pcVar18] = (code)((byte)uVar23 ^ 0xe6);
  *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x70) = pcVar31;
  *(int *)pcVar31 = *(int *)pcVar31 + 8;
  UNRECOVERED_JUMPTABLE_05 = (code *)0x1;
code_r0x000100012a70:
                    /* WARNING: Could not recover jumptable at 0x000100012a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_05 =
       (code *)(*(code *)((long)*(int *)(&DAT_1006d03f0 +
                                        (long)(int)(((uint)UNRECOVERED_JUMPTABLE_05 & 1) + uVar12) *
                                        4) + 0x100012a6d))
                         (uVar13,pcVar40,UNRECOVERED_JUMPTABLE_01,
                          (code *)((long)*(int *)(&DAT_1006d03f0 +
                                                 (long)(int)(((uint)UNRECOVERED_JUMPTABLE_05 & 1) +
                                                            uVar12) * 4) + 0x100012a6d));
  return UNRECOVERED_JUMPTABLE_05;
code_r0x000100011583:
  UNRECOVERED_JUMPTABLE_05 = (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_05 & 0xaf659da3);
  *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x120) = (code *)((long)ppuVar14 + 0xc);
  uVar52 = *(uint *)(ppuVar14 + 1);
  pcVar53 = (code *)(ulong)uVar52;
  UNRECOVERED_JUMPTABLE_06 = (code *)(ulong)*(uint *)((long)ppuVar14 + 0xc);
code_r0x00010001159f:
  uVar37 = uVar27 + (int)UNRECOVERED_JUMPTABLE_06 + 0x38dfe6a6;
  pcVar40 = (code *)(ulong)uVar37;
  pcVar43 = (code *)(ulong)(uVar52 + 0x32bf8e14);
  bVar57 = uVar37 < 0x906a783b;
code_r0x0001000115b8:
  pcVar46 = (code *)(ulong)bVar57;
  uVar37 = (uint)UNRECOVERED_JUMPTABLE_05;
  uVar7 = (undefined3)(uVar37 + 0x906a7838 >> 8);
  bVar47 = (uint)pcVar43 < uVar37 + 0x906a7838 ^ bVar57;
  uVar48 = CONCAT31(uVar7,bVar47);
  puVar49 = (uint *)(ulong)uVar48;
  uVar44 = (uint)bVar57;
  pcVar51 = (code *)(ulong)((uint)pcVar43 < (uint)pcVar40);
  if ((bool)bVar47 != false) {
    pcVar51 = pcVar46;
  }
code_r0x0001000115dd:
  uVar50 = (uint)pcVar51;
  uVar39 = *(uint *)(&DAT_1006d03f0 + (long)(int)(uVar50 + uVar27) * 4);
  pcVar40 = (code *)(long)(int)uVar39;
  bVar58 = (code *)0xfffffffefffeea88 < pcVar40;
  pcVar43 = pcVar40 + 0x100011577;
  bVar59 = pcVar43 == (code *)0x0;
  uVar42 = (uint)pcVar43;
  bVar25 = (byte)uVar27;
  uVar26 = (undefined2)uVar27;
  uVar11 = (ushort)UNRECOVERED_JUMPTABLE_06;
  uVar20 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_06 >> 8);
  cVar36 = SUB41(uVar39,0);
  uVar24 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_05 >> 8);
  bVar10 = (byte)UNRECOVERED_JUMPTABLE_06;
  uVar45 = (uint)UNRECOVERED_JUMPTABLE_06;
  cVar32 = SUB41(uVar29 >> 8,0);
  uVar35 = (uint)UNRECOVERED_JUMPTABLE_04;
  cVar22 = SUB81(UNRECOVERED_JUMPTABLE_05,0);
  uVar54 = (uint)ppuVar14;
  uVar21 = (undefined6)((ulong)UNRECOVERED_JUMPTABLE_06 >> 0x10);
  bVar28 = (byte)(uVar27 >> 8);
  bVar8 = (byte)(uVar27 >> 0x10);
  pcVar18 = UNRECOVERED_JUMPTABLE_06;
  ppuVar55 = ppuVar14;
  switch(pcVar43) {
  case (code *)0x10000b5e5:
    *(byte *)((long)puVar49 + -0x74b767bb) = bVar47;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000bf46:
    *(int *)(UNRECOVERED_JUMPTABLE_04 + -0xe8) = (int)auStack_1b8;
    lStack_1c0 = (long)&UNK_10000bf69;
    lVar15 = (**(code **)(UNRECOVERED_JUMPTABLE_04 + -0x80))(uVar42 + uVar48 + 0x21c2edc4);
    iVar38 = *(int *)(&DAT_1006d03f0 + (long)(int)((lVar15 == 0) + 0x82e9f0) * 4);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x1b8) = 0;
                    /* WARNING: Could not emulate address calculation at 0x00010000bf74 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&UNK_10000bf47 + iVar38))(0x3165f9b2);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000bfa8:
    UNRECOVERED_JUMPTABLE_05[-0x3f] = (code)((char)UNRECOVERED_JUMPTABLE_05[-0x3f] + -1);
    iVar38 = in(5);
                    /* WARNING: Could not recover jumptable at 0x00010000bfc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10000bf96 +
                           *(int *)((long)ppuVar14 +
                                   (long)(int)(iVar38 + (uint)(lRam0000000200efedf0 == 0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000c01f:
                    /* WARNING: Could not recover jumptable at 0x00010000c057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10000c013 +
                           *(int *)(&DAT_1006d03f0 +
                                   (long)(int)(uVar50 + (uVar42 == 0xf1423742)) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000c0ca:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000c1b0:
    pcVar51 = (code *)(ulong)(0xa2b0940b < uVar45);
    uVar12 = uVar54 * 2 + 0x4b8add46;
    uVar48 = uVar12 ^ 0xdebffbdf;
    pcVar43 = (code *)(ulong)((uVar12 & 0x2f5ffde) << 6);
    goto code_r0x00010000c1d6;
  case (code *)0x10000c22b:
    if ((long)pcVar40 < -0x100011577) {
      *(ushort *)(UNRECOVERED_JUMPTABLE_04 + 0x31) =
           *(ushort *)(UNRECOVERED_JUMPTABLE_04 + 0x31) ^ uVar11;
      pbVar1 = (byte *)((long)UNRECOVERED_JUMPTABLE_05 * 5 + -0xd);
      *pbVar1 = *pbVar1 << 4 | *pbVar1 >> 4;
      lVar15 = _DAT_1006d03f0;
      *(int *)(UNRECOVERED_JUMPTABLE_04 + -0x60) = (int)auStack_1b8;
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xc0) = UNRECOVERED_JUMPTABLE_05;
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = UNRECOVERED_JUMPTABLE_05;
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xb8) = UNRECOVERED_JUMPTABLE_05;
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xf0) = UNRECOVERED_JUMPTABLE_05;
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x88) = UNRECOVERED_JUMPTABLE_05;
      *(undefined1 *)(_DAT_1006d03f0 + (ulong)((uVar29 ^ 0xdb) + uVar45 + 0xafd9e6af)) = 0;
      *(undefined1 *)(lVar15 + (ulong)(uVar45 + 0xafd9e783)) = 0;
      *(undefined1 *)(lVar15 + (ulong)(uVar45 + 0xafd9e784)) = 0;
      *(undefined1 *)(lVar15 + (ulong)(uVar45 + 0xafd9e785)) = 1;
      **(int **)(UNRECOVERED_JUMPTABLE_04 + -0x1a0) =
           **(int **)(UNRECOVERED_JUMPTABLE_04 + -0x1a0) + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000d687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(code *)((long)*(int *)((long)&PTR__bootstrap_look_up_10082e9f0 +
                                            (long)(int)((uVar29 ^ 0xdb) + 1) * 4) + 0x10000d664))();
      return UNRECOVERED_JUMPTABLE_05;
    }
code_r0x00010000c1d6:
    uVar12 = (int)pcVar43 + uVar48 + 0x7e8f7015;
    bVar57 = uVar27 < uVar12;
    if (SUB81(pcVar51,0) != uVar12 < 0x5d4f6bf4) {
      bVar57 = uVar12 < 0x5d4f6bf4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000c21d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar46 + *(int *)(&DAT_1006d03f0 + (long)(int)(bVar57 + uVar39) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000c2d9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000c3ce:
                    /* WARNING: Could not emulate address calculation at 0x00010000c3f1 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000c3c5 +
                           (int)(&switchD_10000d217::switchdataD_1006d07b0)
                                [(int)(((int)uVar44 < (int)(uVar37 + 0x31e99312)) + 0x82e9f0)]))
                           (CONCAT44(auStack_1b8[1],auStack_1b8[0]),pcVar40,
                            &DAT_10000c3c5 +
                            (int)(&switchD_10000d217::switchdataD_1006d07b0)
                                 [(int)(((int)uVar44 < (int)(uVar37 + 0x31e99312)) + 0x82e9f0)]);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000c579:
                    /* WARNING: Could not recover jumptable at 0x00010000c59a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10000c512 + (int)puVar49[(long)UNRECOVERED_JUMPTABLE_06]))
                           (pcVar43,pcVar40,0x650a959f740c42c3,
                            (long)(int)puVar49[(long)UNRECOVERED_JUMPTABLE_06],0x3165f9b1);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000c5e7:
    uVar29 = *(uint *)(UNRECOVERED_JUMPTABLE_04 + -0x90);
    *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0x90) = (ulong)uVar29;
    UNRECOVERED_JUMPTABLE_05 = *(code **)(pcVar31 + uVar29);
    pcVar40 = *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x130);
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0xac) = 0x3166a97d;
    UNRECOVERED_JUMPTABLE_01 = (code *)&UNK_100012651;
    uVar12 = (uVar12 ^ 0x70) + 0xee4d4706 & 0x11b2b8ff;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = 0xb;
    pcVar43 = (code *)(ulong)((uVar37 - (uVar37 << (((char)uVar12 - 2U ^ 0x15) & 0x3f) &
                                        ((uVar12 + 0x34 | 0x81) ^ 0xe2846e4f))) + 0xf1423742);
    uVar12 = uVar12 + (UNRECOVERED_JUMPTABLE_05 < pcVar40);
  case (code *)0x10000c64c:
                    /* WARNING: Could not recover jumptable at 0x00010000c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)uVar12] +
                           0x10000c612))
                           (pcVar43,pcVar40,UNRECOVERED_JUMPTABLE_01,
                            (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                                [(int)uVar12] + 0x10000c612));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000cb16:
    uVar12 = uVar48 * 2 + 0x4b8add46;
    uVar29 = uVar12 ^ uVar37 + 0x7a3f9161;
    uVar12 = uVar12 & 0xfa3f91dc;
    uVar30 = uVar29 + uVar12 * 2 + 0x37afb2c0;
    bVar57 = uVar27 < uVar30;
    if (uVar45 < uVar39 != uVar30 < 0xb1ef449d) {
      bVar57 = uVar30 < 0xb1ef449d;
    }
    *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0xa0) = (ulong)(uVar29 + uVar12 * 2 + 0xdffaff80);
                    /* WARNING: Could not recover jumptable at 0x00010000cb95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10000cae6 +
                           (int)(&switchD_10000d217::switchdataD_1006d07b0)[(int)(bVar57 + uVar37)])
                 )();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000cd42:
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10 + bVar58);
    UNRECOVERED_JUMPTABLE_05[-0x77] = cVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000cefe:
                    /* WARNING: Could not recover jumptable at 0x00010000cf29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000ce3f +
                           *(int *)(pcVar51 +
                                   (long)(int)(uVar29 + (UNRECOVERED_JUMPTABLE_06 == (code *)0x0)) *
                                   4)))
                           (*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x58),ppuVar14,
                            &DAT_10000ce3f +
                            *(int *)(pcVar51 +
                                    (long)(int)(uVar29 + (UNRECOVERED_JUMPTABLE_06 == (code *)0x0))
                                    * 4),
                            (long)*(int *)(pcVar51 +
                                          (long)(int)(uVar29 + (UNRECOVERED_JUMPTABLE_06 ==
                                                               (code *)0x0)) * 4),
                            *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x48));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000cfa6:
    UNRECOVERED_JUMPTABLE_06[-0x73] = (code)((char)UNRECOVERED_JUMPTABLE_06[-0x73] + (char)cVar22);
                    /* WARNING: Could not recover jumptable at 0x00010000cfb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar40 + (long)UNRECOVERED_JUMPTABLE_05))
                           (pcVar43,pcVar40 + (long)UNRECOVERED_JUMPTABLE_05);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d043:
    *(byte *)((long)UNRECOVERED_JUMPTABLE_05 * 2) = bVar28;
    UNRECOVERED_JUMPTABLE_05[uVar45 + 0xf56bfc99] = (code)(bVar8 ^ 0x34);
    UNRECOVERED_JUMPTABLE_05[uVar45 + 0xf56bfc9a] = (code)(bVar28 ^ 0x8d);
    UNRECOVERED_JUMPTABLE_05[uVar45 + 0xf56bfc9b] = (code)(bVar25 ^ 0xf7);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x138) = pcVar46;
    *(int *)pcVar46 = *(int *)pcVar46 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000d0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)((long)iRam000000010278abb4 + 0x10000d08c))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d305:
    UNRECOVERED_JUMPTABLE_05[-0x7800cb39] =
         (code)((byte)UNRECOVERED_JUMPTABLE_05[-0x7800cb39] & bVar10);
    UNRECOVERED_JUMPTABLE_06[-0x7d] = (code)((byte)UNRECOVERED_JUMPTABLE_06[-0x7d] | 0xf8);
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x7d) =
         *(int *)(UNRECOVERED_JUMPTABLE_05 + -0x7d) + uVar45;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000d374:
    return UNRECOVERED_JUMPTABLE_06;
  case (code *)0x10000d3ac:
                    /* WARNING: Could not recover jumptable at 0x00010000d3b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(UNRECOVERED_JUMPTABLE_06 + 0x10000d347))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d42d:
                    /* WARNING: Could not recover jumptable at 0x00010000d45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000d422 +
                           *(int *)(&DAT_1006d03f0 +
                                   (long)(int)((uVar44 == uVar45 * 0xb + 0x3166a946) + uVar29) * 4))
                 )(pcVar43,pcVar40,
                   &DAT_10000d422 +
                   *(int *)(&DAT_1006d03f0 +
                           (long)(int)((uVar44 == uVar45 * 0xb + 0x3166a946) + uVar29) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d6c5:
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x60) = 0x650a959f740c42c3;
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)0x3165f9b2)(pcVar43,pcVar40,0x650a959f740c42c3);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d789:
    UNRECOVERED_JUMPTABLE_06 = (code *)(ulong)*(uint *)UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d760:
    uVar12 = (uint)UNRECOVERED_JUMPTABLE_06 ^ 0x39;
    UNRECOVERED_JUMPTABLE_05[uVar12 + 0xf56bfc99] = (code)(bVar8 ^ 0x34);
    UNRECOVERED_JUMPTABLE_05[uVar12 + 0xf56bfc9a] = (code)(bVar28 ^ 0x8d);
    UNRECOVERED_JUMPTABLE_05[uVar12 + 0xf56bfc9b] = (code)(bVar25 ^ 0xf7);
    uVar12 = *puVar49;
    UNRECOVERED_JUMPTABLE_06 = (code *)(ulong)uVar12;
    *(uint **)(UNRECOVERED_JUMPTABLE_04 + -0x128) = puVar49;
    *puVar49 = uVar12 + 4;
code_r0x00010000d7a3:
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x48) = pcVar51;
    UNRECOVERED_JUMPTABLE_06 =
         (code *)((ulong)((int)UNRECOVERED_JUMPTABLE_06 + 0xf56bfc9c) +
                 *(long *)(pcVar51 + (long)param_1));
    UNRECOVERED_JUMPTABLE_05 = (code *)&DAT_10000d3fe;
    UNRECOVERED_JUMPTABLE_04 = *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x1d0);
    uVar52 = 0xe2846e43;
    pcVar43 = pcVar46;
    uVar27 = uVar44;
    goto LAB_10000de3e;
  case (code *)0x10000d7a3:
    goto code_r0x00010000d7a3;
  case (code *)0x10000da22:
    ppuVar14 = *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0xb0);
    *(uint *)((long)ppuVar14 + -0x650a959f740c42bb) = uVar37 + uVar45 * 2 + -0x4002222;
    *(undefined4 *)((long)ppuVar14 + -0x650a959f740c42b7) = 0x696c206b;
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0x78) = 0x3166a97d;
    lStack_1c0 = 0x10000da72;
    (*(code *)(PTR_DAT_10082eb08 + -2))
              (*(undefined4 *)(PTR_DAT_10082ea08 + -3),*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x148),
               *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0x84));
    uVar13 = (ulong)*(int *)(&DAT_1006d03f0 +
                            (long)(int)((*(int *)(UNRECOVERED_JUMPTABLE_04 + -0x78) == 0x3166a97d) +
                                       0x5c) * 4);
    goto code_r0x00010000da94;
  case (code *)0x10000da90:
    uVar13 = (ulong)*(uint *)(UNRECOVERED_JUMPTABLE_04 + (long)UNRECOVERED_JUMPTABLE_06 * 4);
code_r0x00010000da94:
    *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x60) = ppuVar14;
                    /* WARNING: Could not recover jumptable at 0x00010000daa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_10000da22 + uVar13))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000db9d:
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10);
    lStack_1c0 = (long)&UNK_10000dbb1;
    lVar15 = (*(code *)ppuVar14)((uVar29 * 2 ^ 0x888004e3) + uVar45);
    iVar38 = *(int *)(&DAT_1006d03f0 + (long)(int)(uVar12 + (lVar15 == 0)) * 4);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x188) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000db80 + iVar38))(*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x50));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000de11:
    if (-0x100011578 < (long)pcVar40) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000de5a:
    goto code_r0x00010000de5a;
  case (code *)0x10000de80:
    UNRECOVERED_JUMPTABLE_05 = (code *)(ulong)(uVar37 + uVar27);
    goto code_r0x00010000de5a;
  case (code *)0x10000dec6:
                    /* WARNING: Could not recover jumptable at 0x00010000dee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                       [(long)UNRECOVERED_JUMPTABLE_06] + 0x10000dec0))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000deee:
    *(undefined4 *)(pcVar40 + 8) = 0;
    lVar15 = (long)*(int *)((long)ppuVar14 +
                           (long)(int)(uVar29 + (*(long *)(param_1 + 0x18) == 0)) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010000df21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&LAB_10000e68d + lVar15))
                           (*(long *)(param_1 + 0x18),&LAB_10000e68d + lVar15,lVar15,
                            (uVar29 ^ 0x5b) * 0x2b);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000df59:
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = UNRECOVERED_JUMPTABLE_05;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x80) = UNRECOVERED_JUMPTABLE_05;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xe0) = UNRECOVERED_JUMPTABLE_05;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd8) = UNRECOVERED_JUMPTABLE_05;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = 0x742c45ff88570c30;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x90) = 0x742c45ff88570c30;
    piVar5 = *(int **)(UNRECOVERED_JUMPTABLE_04 + -0x120);
    uVar12 = uVar27 + 0x7032aed2 & 0x8fcd51ff;
    puVar16 = *ppuVar14;
    puVar16[(uVar12 ^ 0xa8756ebb) + uVar45] = 0;
    puVar16[uVar45 + 0xa8756e6d] = 0;
    puVar16[uVar45 + 0xa8756e6e] = 0;
    puVar16[uVar45 + 0xa8756e6f] = 1;
    *(int **)(UNRECOVERED_JUMPTABLE_04 + -0x120) = piVar5;
    *piVar5 = *piVar5 + 4;
    UNRECOVERED_JUMPTABLE_05 = (code *)0x1;
    goto switchD_1000116f3_caseD_13272;
  case (code *)0x10000e196:
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_05 + -0x7f;
    *UNRECOVERED_JUMPTABLE_05 =
         (code)((char)*UNRECOVERED_JUMPTABLE_05 << ((byte)cVar22 & 7) |
               (byte)*UNRECOVERED_JUMPTABLE_05 >> 8 - ((byte)cVar22 & 7));
    halt_baddata();
  case (code *)0x10000e19a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000e220:
    out(0x48,uVar45);
    iVar38 = *(int *)(&DAT_1006d03f0 + (ulong)(uint)(int)(short)uVar11 * 4);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x90) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xa8);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x98) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010000e260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&UNK_10000e211 + iVar38))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000e276:
    UNRECOVERED_JUMPTABLE_01[0x41ee9c75] = cVar32;
    bVar59 = uVar37 < 0xf9b36308;
    bVar58 = uVar30 + 0xc2b8cdab < 0xf9b36308 != bVar59;
    bVar57 = uVar30 + 0xc2b8cdab < uVar37;
    if (bVar58) {
      bVar57 = bVar59;
    }
                    /* WARNING: Could not emulate address calculation at 0x00010000e2b4 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(switchD_10000f016::caseD_0 +
                   *(int *)(&DAT_1006d03f0 + (ulong)(bVar57 + 0x82e9f0) * 4)))
                           (bVar59,CONCAT31(0xf9b363,bVar58),
                            switchD_10000f016::caseD_0 +
                            *(int *)(&DAT_1006d03f0 + (ulong)(bVar57 + 0x82e9f0) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000e3c5:
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x130) = pcVar43;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x70) = pcVar40;
    lStack_1c0 = 0x10000e3d2;
    (*UNRECOVERED_JUMPTABLE_06)();
    lVar15 = *(long *)(pcVar31 + 0x3681ce8);
    lVar3 = *(long *)(pcVar31 + 0x3681cb0);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x90) = 0;
    lStack_1c0 = 0x10000e400;
    lVar15 = (*(code *)(lVar15 + -2))(lVar3 + -1,0);
                    /* WARNING: Could not emulate address calculation at 0x00010000e41a */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000e331 +
                           (int)(&switchD_10000d217::switchdataD_1006d07b0)
                                [(int)((lVar15 == 0) + 0x6d03f0)]))
                           (*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x50));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000e423:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000e56f:
    iVar38 = *(int *)(&DAT_1006d03f0 + (ulong)((pcVar31 == (code *)0x0) + 0x82e9f0) * 4);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xe0) = UNRECOVERED_JUMPTABLE_01;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd8) = UNRECOVERED_JUMPTABLE_01;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x60) = 0x650a959f740c42c3;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xe8) = 0x650a959f740c42c3;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -200) = 0x650a959f740c42c3;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xa0) = 0x650a959f740c42c3;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = 0x650a959f740c42c3;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xc0) = 0x650a959f740c42c3;
                    /* WARNING: Could not emulate address calculation at 0x00010000e583 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)((long)iVar38 + 0x10000e551))();
    return UNRECOVERED_JUMPTABLE_05;
  case FUN_10000ea96:
    UNRECOVERED_JUMPTABLE_04 = pcVar40 + (ulong)bVar41 * -2 + 1;
    out(*pcVar40,uVar26);
    goto LAB_10000de3e;
  case (code *)0x10000ed06:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000ed23:
    ppuVar14 = (undefined **)(ulong)(uVar54 + 0x729dd47c & 0x8d622b2f);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x70) = UNRECOVERED_JUMPTABLE_06;
    UNRECOVERED_JUMPTABLE_06 = *(code **)(UNRECOVERED_JUMPTABLE_06 + (long)pcVar31);
    pcVar31 = (code *)&DAT_10000f6ec;
    pcVar40 = *(code **)(UNRECOVERED_JUMPTABLE_04 + -400);
    break;
  case (code *)0x10000ed8b:
    UNRECOVERED_JUMPTABLE_04 = (code *)(ulong)(uVar35 + 0xbfef1d65);
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(long)*(int *)(pcVar46 +
                               (long)(int)((*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x58) ==
                                            *(long *)(pcVar31 + (long)(int)(uVar39 - 0x98) * 8) + -1
                                           & bVar10) + uVar39) * 4);
    UNRECOVERED_JUMPTABLE_06 = UNRECOVERED_JUMPTABLE_05 + 0x10000ed53;
  case (code *)0x10000edbf:
    goto code_r0x00010000edbf;
  case (code *)0x10000ee57:
    pcVar31 = UNRECOVERED_JUMPTABLE_05 + -1;
    if (pcVar31 == (code *)0x0 || bVar59) {
      *(undefined2 *)(UNRECOVERED_JUMPTABLE_05 + -0x80) = in_ES;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x158) = UNRECOVERED_JUMPTABLE_06;
    break;
  case (code *)0x10000efb6:
    *UNRECOVERED_JUMPTABLE_06 =
         (code)((char)*UNRECOVERED_JUMPTABLE_06 << 1 | (char)*UNRECOVERED_JUMPTABLE_06 < '\0');
    goto code_r0x00010000efb8;
  case (code *)0x10000efdc:
    *(int *)(UNRECOVERED_JUMPTABLE_06 + -0x77) = *(int *)(UNRECOVERED_JUMPTABLE_06 + -0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case caseD_1:
    UNRECOVERED_JUMPTABLE_06[-0x75] = (code)((char)UNRECOVERED_JUMPTABLE_06[-0x75] + (char)cVar22);
    UNRECOVERED_JUMPTABLE_06[0x3b] = (code)((char)UNRECOVERED_JUMPTABLE_06[0x3b] + (char)cVar22);
    PTR__bootstrap_look_up_10082e9f0._0_4_ =
         CONCAT31(PTR__bootstrap_look_up_10082e9f0._1_3_,
                  (byte)PTR__bootstrap_look_up_10082e9f0 >> 1 |
                  (byte)PTR__bootstrap_look_up_10082e9f0 << 7);
    UNRECOVERED_JUMPTABLE_05[-0x7f] = (code)((char)UNRECOVERED_JUMPTABLE_05[-0x7f] + bVar10);
    pcVar31 = pcVar31 + 0x44ce9956;
    *pcVar31 = (code)((char)*pcVar31 << 1 | (byte)*pcVar31 >> 7);
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_06 + -0x7f;
    *UNRECOVERED_JUMPTABLE_05 =
         (code)((byte)*UNRECOVERED_JUMPTABLE_05 >> 4 | (char)*UNRECOVERED_JUMPTABLE_05 << 4);
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10);
    return UNRECOVERED_JUMPTABLE_06;
  case (code *)0x10000f0f2:
                    /* WARNING: Could not recover jumptable at 0x00010000f0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(ulong)(uVar27 + uVar37))
                           (pcVar43,pcVar40,(code *)(ulong)(uVar27 + uVar37));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000f316:
                    /* WARNING: Could not recover jumptable at 0x00010000f333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000f2d3 +
                           *(int *)(&DAT_1006d03f0 + (long)(int)(uVar12 + bVar58) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000f37a:
    *(ushort *)UNRECOVERED_JUMPTABLE_05 = *(ushort *)UNRECOVERED_JUMPTABLE_05 ^ (ushort)uVar39;
                    /* WARNING: Could not recover jumptable at 0x00010000f397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10000f35b +
                           *(int *)(pcVar53 +
                                   (long)(int)((int)CONCAT71(uVar24,uVar44 == uVar45) + uVar29) * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000f46f:
    UNRECOVERED_JUMPTABLE_05 = (code *)0x830001;
    *(undefined4 *)(pcVar31 + 0x24) = 0x50a01b4b;
    *(undefined8 *)pcVar31 = 0x611c7e149b50062b;
    pcVar43 = *(code **)(pcVar31 + 0x30);
    uVar13 = (ulong)*(int *)((long)ppuVar14 + (long)(int)((pcVar43 == (code *)0x0) + 0x82e9f0) * 4);
    UNRECOVERED_JUMPTABLE_01 = (code *)&DAT_1000140a9;
    goto code_r0x00010000f4aa;
  case (code *)0x10000f4a5:
    uVar13 = (ulong)(uVar45 + 0x4bff + (uint)bVar58);
code_r0x00010000f4aa:
                    /* WARNING: Could not recover jumptable at 0x00010000f4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(UNRECOVERED_JUMPTABLE_01 + uVar13))
                           (pcVar43,pcVar40,UNRECOVERED_JUMPTABLE_01 + uVar13,
                            UNRECOVERED_JUMPTABLE_05);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000f504:
    uVar12 = 0xfffb8949;
    if (UNRECOVERED_JUMPTABLE_05 == (code *)0x1) {
      *(uint *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = uVar42;
      uVar12 = 0xfffb8991;
      uVar29 = 0xfffb8972;
    }
    uVar29 = uVar29 | 0x24;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x148) = 0;
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0x84) = 0;
    uVar2 = *(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar12 - 0x2a)] + -2);
    uVar19 = *(undefined8 *)(pcVar51 + -0x3c616f4ea01f76b0);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x48) = pcVar51;
    lStack_1c0 = 0x10000f581;
    uVar12 = (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar12 ^ 0x3b)] + -3))
                       (uVar2,uVar19,*(int *)(pcVar51 + -0x3c616f4ea01f76a4) + -0xa940368,
                        UNRECOVERED_JUMPTABLE_04 + -0x148,UNRECOVERED_JUMPTABLE_04 + -0x84);
                    /* WARNING: Could not recover jumptable at 0x00010000f5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                       [(int)(((int)(((uVar29 ^ 0xf7fbafc3) & uVar12 * 2) +
                                                    (uVar12 ^ 0xfbfdd7fe)) <
                                              (int)((uVar29 - 0x22 | 0x20) ^ 0xbfdd83c)) + uVar29)]
                           + 0x10000f597))
                           (&switchD_10000d217::switchdataD_1006d07b0,
                            (code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                                [(int)(((int)(((uVar29 ^ 0xf7fbafc3) & uVar12 * 2) +
                                                             (uVar12 ^ 0xfbfdd7fe)) <
                                                       (int)((uVar29 - 0x22 | 0x20) ^ 0xbfdd83c)) +
                                                      uVar29)] + 0x10000f597));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000f6be:
    *(uint *)(UNRECOVERED_JUMPTABLE_04 + -0x73) =
         *(int *)(UNRECOVERED_JUMPTABLE_04 + -0x73) + uVar45;
                    /* WARNING: Could not emulate address calculation at 0x00010000f6d8 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(&DAT_1006d03f0 + (long)(int)((uVar37 & 1) + 0x82e9f0) * 4
                                          ) + 0x10000f6bf))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000f74c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000f897:
    UNRECOVERED_JUMPTABLE_06[-0x77] = (code)((char)UNRECOVERED_JUMPTABLE_06[-0x77] + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000fa3e:
    if (!bVar58) {
      uVar29 = *(int *)((long)ppuVar14 + 0xc) + 0xb8e94ff8;
      uVar12 = (uVar12 ^ 0xb2c8f7a8) + *(int *)(ppuVar14 + 1);
      bVar57 = uVar29 < 0x1073e188;
      if (uVar12 < 0x1073e188 == uVar29 < 0x1073e188) {
        bVar57 = uVar12 < uVar29;
      }
                    /* WARNING: Could not recover jumptable at 0x00010000faa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(code *)(&DAT_10000fa30 + *(int *)(pcVar51 + (long)(int)(bVar57 + uVar27) * 4))
                   )(uVar12,*(int *)(ppuVar14 + 1),
                     &DAT_10000fa30 + *(int *)(pcVar51 + (long)(int)(bVar57 + uVar27) * 4));
      return UNRECOVERED_JUMPTABLE_05;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000fa2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_01)();
    return UNRECOVERED_JUMPTABLE_05;
  case FUN_10000fad1:
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xb8) = UNRECOVERED_JUMPTABLE_05;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x100) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x60);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x118) = UNRECOVERED_JUMPTABLE_06;
    UNRECOVERED_JUMPTABLE_05 = (code *)switchD_1000139a1::caseD_e8da();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000fc67:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000fc72:
    bVar57 = uVar44 < 0x229514cf;
    if (uVar48 < (uVar42 ^ 0x229514e6) == uVar44 < 0x229514cf) {
      bVar57 = uVar48 < uVar44;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000fcc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10000fc28 +
                           *(int *)((long)ppuVar14 + (long)(int)(bVar57 + uVar29) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000fd4f:
    iVar38 = *(int *)(&DAT_1006d03f0 + (long)(int)(uVar42 + uVar39) * 4);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x138) = pcVar51 + 0x10082e9f0;
                    /* WARNING: Could not recover jumptable at 0x00010000fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_10000fccb + iVar38))(&DAT_10000fccb + iVar38)
    ;
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000fe8d:
    *(uint *)(UNRECOVERED_JUMPTABLE_06 + -0x48) =
         *(uint *)(UNRECOVERED_JUMPTABLE_06 + -0x48) ^ uVar37;
    pcVar43[(long)UNRECOVERED_JUMPTABLE_01 * 2] =
         (code)((byte)pcVar43[(long)UNRECOVERED_JUMPTABLE_01 * 2] ^ (byte)cVar22);
    UNRECOVERED_JUMPTABLE_05 = _UNK_10082faf0;
    lVar15 = CONCAT71(uVar20,bVar10 + 0x8c);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = lVar15;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x60) = lVar15;
    *(uint *)(UNRECOVERED_JUMPTABLE_04 + -0x68) = uVar42;
    lStack_1c0 = 0x10001380f;
    (*_UNK_10082faf0)(*(long *)(UNRECOVERED_JUMPTABLE_04 + -0xc0));
    lStack_1c0 = 0x10001381c;
    (*UNRECOVERED_JUMPTABLE_05)(*(long *)(UNRECOVERED_JUMPTABLE_04 + -0xf0));
    iVar38 = *(int *)(&DAT_1006d03f0 + (long)(int)((pcVar40 == (code *)0x0) + 0x407de6d2) * 4);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xe8) = pcVar40;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xb0) = UNRECOVERED_JUMPTABLE_05;
                    /* WARNING: Could not emulate address calculation at 0x000100013826 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&LAB_1000137db + iVar38))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000fee3:
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10);
    UNRECOVERED_JUMPTABLE_04[(long)UNRECOVERED_JUMPTABLE_05 * 4 + 0x3c] =
         (code)((char)UNRECOVERED_JUMPTABLE_04[(long)UNRECOVERED_JUMPTABLE_05 * 4 + 0x3c] + bVar10);
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10);
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10);
                    /* WARNING: Could not recover jumptable at 0x00010000ff21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000fedc +
                           *(int *)(pcVar53 +
                                   (long)(int)((pcVar51 == (code *)0x3c616f4ea01f76b0) + uVar29) * 4
                                   )))
                           (pcVar40 + (ulong)bVar41 * -8 + 0x10001157b,
                            pcVar40 + (ulong)bVar41 * -8 + 4,UNRECOVERED_JUMPTABLE_01,0,0x3165f9b3);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000ffa0:
    uVar12 = uVar45 - (uVar30 + 0x9afe79fe);
                    /* WARNING: Could not recover jumptable at 0x00010000ffda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000ffa0 +
                           *(int *)(&DAT_1006d03f0 +
                                   (long)(int)((uVar29 - ((int)((uVar30 + 0x9afe79fe ^ uVar45) &
                                                                (uVar12 ^ uVar45) ^ uVar12) >> 0x1f)
                                               ) + 0x4010e2f8) * 4)))
                           (pcVar43,&DAT_1006d03f0,
                            &DAT_10000ffa0 +
                            *(int *)(&DAT_1006d03f0 +
                                    (long)(int)((uVar29 - ((int)((uVar30 + 0x9afe79fe ^ uVar45) &
                                                                 (uVar12 ^ uVar45) ^ uVar12) >> 0x1f
                                                          )) + 0x4010e2f8) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000100b3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001037e:
    *(int *)(UNRECOVERED_JUMPTABLE_05 + 0x56) = (int)ROUND(in_ST0);
    bVar58 = uVar45 < uVar48;
    if (bVar57 != uVar48 < 0xd405d566) {
      bVar58 = uVar48 < 0xd405d566;
    }
    pcVar46 = (code *)(ulong)(bVar58 + uVar27);
  case (code *)0x1000103aa:
                    /* WARNING: Could not recover jumptable at 0x0001000103bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar43 + *(int *)((long)ppuVar14 + (long)((int)pcVar46 + 0x4010e36c) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000103f0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000103f8:
    return UNRECOVERED_JUMPTABLE_06;
  case (code *)0x10001045e:
    auStack_1b8[2] = 0;
  case (code *)0x100010460:
    bRam000000002444c749 = (bRam000000002444c749 | 0x49) + 0x49;
    pcVar17 = (char *)((long)UNRECOVERED_JUMPTABLE_05 * 5 + -0x10);
    *pcVar17 = *pcVar17 + 'I';
    lStack_1c0 = (long)UNRECOVERED_JUMPTABLE_04;
                    /* WARNING: Could not recover jumptable at 0x000100010499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_1000135e1 +
                           *(int *)(&DAT_1006d03f0 +
                                   (long)(int)(uVar12 + 0x4010e31f +
                                              (uint)(ppuVar14[3] == (undefined *)0x0)) * 4)))
                           (ppuVar14[3],pcVar40,
                            &UNK_1000135e1 +
                            *(int *)(&DAT_1006d03f0 +
                                    (long)(int)(uVar12 + 0x4010e31f +
                                               (uint)(ppuVar14[3] == (undefined *)0x0)) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000104b0:
                    /* WARNING: Could not recover jumptable at 0x0001000104e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_1000104aa +
                           *(int *)(pcVar53 +
                                   (long)(int)((pcVar51 == (code *)0x3c616f4ea01f76b0) + 0x82e9f0) *
                                   4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100010517:
    uVar12 = puVar49[(int)((uVar45 == 0) + 0x6d03f0)];
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0x68) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x000100010541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&UNK_1000104f1 + (int)uVar12))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000105a8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000106da:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000106ed:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100010736:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100010781:
    uVar13 = (ulong)UNRECOVERED_JUMPTABLE_06 | 0x54;
    if ((bVar10 | 0x54) != 0) goto code_r0x0001000107c5;
    uVar29 = CONCAT22((short)(uVar27 >> 0x10),CONCAT11(1,bVar25)) ^ 0x88abf350;
    pcVar43 = (code *)(ulong)CONCAT31((int3)(uVar29 >> 8),0x88ac031f < uVar29 ^ (byte)cVar36);
    pcVar46 = (code *)(ulong)(0x88ac031f < (uint)uVar13);
  case (code *)0x1000107a9:
    goto code_r0x0001000107a9;
  case (code *)0x10001085d:
    UNRECOVERED_JUMPTABLE_06[-0x80] =
         (code)((char)UNRECOVERED_JUMPTABLE_06[-0x80] + bVar10 + bVar58);
    uVar6 = (ushort)*(byte *)((long)UNRECOVERED_JUMPTABLE_05 * 4 + 0x6bfc99b8);
    UNRECOVERED_JUMPTABLE_05[(long)pcVar43] = cVar36;
    iVar38 = (int)CONCAT62(uVar21,CONCAT11((char)(uVar11 % uVar6),(char)(uVar11 / uVar6)));
    UNRECOVERED_JUMPTABLE_05[iVar38 + 0xf56bfc9a] = (code)(bVar28 ^ 0x8d);
    UNRECOVERED_JUMPTABLE_05[iVar38 + 0xf56bfc9b] = (code)(bVar25 ^ 0xf7);
    uVar12 = *puVar49;
    *(uint **)(UNRECOVERED_JUMPTABLE_04 + -0x120) = puVar49;
    *puVar49 = uVar12 + 4;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x48) = pcVar51;
    UNRECOVERED_JUMPTABLE_06 =
         (code *)((ulong)(uVar12 + 0xf56bfc9c) + *(long *)(pcVar51 + (long)param_1));
    pcVar31 = (code *)&UNK_10000f337;
    pcVar40 = *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x1c8);
    UNRECOVERED_JUMPTABLE_01 = pcVar46;
    break;
  case (code *)0x100010910:
    uVar12 = uVar54 * 2 + 0x9310a902;
    uVar12 = (uVar12 ^ uVar42) + (uVar12 & 0xfeffbffe) * 2 + 0xdef546c6;
    bVar57 = uVar39 < uVar12;
    if (uVar39 < uVar45 != uVar12 < 0x5df506c5) {
      bVar57 = uVar12 < 0x5df506c5;
    }
                    /* WARNING: Could not recover jumptable at 0x000100010972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar46 + *(int *)(&DAT_1006d03f0 + (long)(int)(bVar57 + uVar37) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100010983:
    cVar22 = (code)in(uVar26);
    *pcVar43 = cVar22;
    UNRECOVERED_JUMPTABLE_06 = (code *)CONCAT62(uVar21,CONCAT11(0x31,bVar10));
    pcVar43 = pcVar40 + (ulong)bVar41 * -2 + 0x100011578;
    goto code_r0x000100010980;
  case (code *)0x10001098c:
    UNRECOVERED_JUMPTABLE_06 = (code *)((ulong)UNRECOVERED_JUMPTABLE_06 & 0xffffffffffffff08);
  case (code *)0x100010980:
code_r0x000100010980:
                    /* WARNING: Could not recover jumptable at 0x0001000109be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100010978 +
                           *(int *)(pcVar40 +
                                   (ulong)(((int)UNRECOVERED_JUMPTABLE_06 ==
                                           (uVar54 + 8 ^ 0x4aed969a) + uVar54 + 2) + uVar54) * 4)))
                           (pcVar43,pcVar40,
                            &UNK_100010978 +
                            *(int *)(pcVar40 +
                                    (ulong)(((int)UNRECOVERED_JUMPTABLE_06 ==
                                            (uVar54 + 8 ^ 0x4aed969a) + uVar54 + 2) + uVar54) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000109e8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100010a43:
    UNRECOVERED_JUMPTABLE_03 = (uint *)0x42;
    lVar15 = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xb0);
    lStack_1c0 = (long)&UNK_100010a67;
    (**(code **)(UNRECOVERED_JUMPTABLE_04 + -0x48))(*(undefined8 *)(lVar15 + -0x742c45ff88570c30));
    pcVar43 = (code *)&DAT_1006d03f0;
    *(long *)(lVar15 + -0x742c45ff88570c30) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x160);
    **(undefined4 **)(UNRECOVERED_JUMPTABLE_04 + -0x198) =
         (int)*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x90);
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0x68) = 0x3166a97d;
    uVar27 = 1;
    goto code_r0x000100010a96;
  case (code *)0x100010a88:
    if ((SCARRY1((char)cVar32,bVar10) != SCARRY1((char)cVar32 + bVar10,bVar58)) ==
        (char)((char)cVar32 + bVar10 + bVar58) < '\0') {
      *(uint *)(UNRECOVERED_JUMPTABLE_04 + -0x90) = uVar37;
                    /* WARNING: Could not recover jumptable at 0x000100010a41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_01)();
      return UNRECOVERED_JUMPTABLE_05;
    }
    *(ushort *)(UNRECOVERED_JUMPTABLE_01 + 0x5d8b4c01) =
         *(ushort *)(UNRECOVERED_JUMPTABLE_01 + 0x5d8b4c01) ^ (ushort)uVar39;
code_r0x000100010a96:
                    /* WARNING: Could not recover jumptable at 0x000100010abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&LAB_100010a9a +
                           *(int *)(pcVar43 +
                                   (long)(int)((uVar27 & 1) + (int)UNRECOVERED_JUMPTABLE_03) * 4)))
                           ();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100010b4d:
    UNRECOVERED_JUMPTABLE_06 = UNRECOVERED_JUMPTABLE_06 + -0x73;
    *UNRECOVERED_JUMPTABLE_06 =
         (code)((byte)*UNRECOVERED_JUMPTABLE_06 >> 5 | (char)*UNRECOVERED_JUMPTABLE_06 << 3);
    uVar12 = (uVar45 - *(int *)pcVar31) - (uint)((char)*UNRECOVERED_JUMPTABLE_06 < '\0');
    cVar32 = (code)in(uVar26);
    *pcVar43 = cVar32;
    pcVar40[(ulong)bVar41 * -2 + 0x100011578] =
         (code)((char)pcVar40[(ulong)bVar41 * -2 + 0x100011578] + (char)cVar22);
    UNRECOVERED_JUMPTABLE_05[0xb7f1] = (code)((byte)UNRECOVERED_JUMPTABLE_05[0xb7f1] | (byte)uVar12)
    ;
    pbVar1 = (byte *)((ulong)uVar12 - 0x73);
    bVar41 = *pbVar1;
    *pbVar1 = *pbVar1 + (char)cVar22;
    UNRECOVERED_JUMPTABLE_06 =
         (code *)(ulong)(uVar12 + 0x6c11ca + (uint)CARRY1(bVar41,(byte)cVar22));
  case (code *)0x100010b1c:
    _DAT_10088e808 = UNRECOVERED_JUMPTABLE_06 + 0x585ffb1538078cd1;
    DAT_10088e7f8 = ((ulong)UNRECOVERED_JUMPTABLE_05 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
    uVar12 = ((uint)_DAT_10088e808 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(&PTR__bootstrap_look_up_10082e9f0)
                 [(int)((byte)((byte)uVar12 ^
                              (&DAT_1006d1d30)[(byte)(&DAT_1006d0e70)[uVar12 & 0xff] ^ 0xb7]) - 0xac
                       )];
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x80) = UNRECOVERED_JUMPTABLE_05;
    lStack_1c0 = 0x100010b89;
    pcVar31 = (code *)(*UNRECOVERED_JUMPTABLE_05)(0x18);
    pcVar40 = pcVar31 + 0x3c616f4ea01f76b0;
    UNRECOVERED_JUMPTABLE_03 = &switchD_10000d217::switchdataD_1006d07b0;
    switch(pcVar31 == (code *)0x0) {
    case false:
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x48) = pcVar40;
      *(long *)pcVar31 = 0;
      *(long *)(pcVar31 + 8) = 0xa9403683677ab7f;
      *(undefined4 *)(pcVar31 + 0x10) = 0;
      lStack_1c0 = 0x10000d1f6;
      lVar15 = (**(code **)(UNRECOVERED_JUMPTABLE_04 + -0x80))(0x1000);
      *(long *)pcVar31 = lVar15;
      switch(lVar15 == 0) {
      case false:
        *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x1c8) = ppuVar14;
        *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x100) = &PTR__bootstrap_look_up_10082e9f0;
        *(undefined **)(UNRECOVERED_JUMPTABLE_04 + -0x68) = PTR__free_10082eaf0;
        UNRECOVERED_JUMPTABLE_01 = (code *)0x650a959f740c42c3;
        UNRECOVERED_JUMPTABLE_06 = (code *)(ulong)((pcVar31 == (code *)0x0) + 2);
code_r0x00010000efb8:
        *(undefined4 *)(pcVar31 + 8) = 0x3677bb7f;
        iVar38 = *(int *)((long)UNRECOVERED_JUMPTABLE_03 + (long)UNRECOVERED_JUMPTABLE_06 * 4);
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xe0) = pcVar40;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd8) = pcVar40;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xf0) = pcVar40;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x60) = UNRECOVERED_JUMPTABLE_01;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xe8) = UNRECOVERED_JUMPTABLE_01;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -200) = UNRECOVERED_JUMPTABLE_01;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xa0) = UNRECOVERED_JUMPTABLE_01;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = UNRECOVERED_JUMPTABLE_01;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xc0) = UNRECOVERED_JUMPTABLE_01;
                    /* WARNING: Could not recover jumptable at 0x00010000f016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_05 = (code *)(*(switchD_10000d217::caseD_0 + iVar38))();
        return UNRECOVERED_JUMPTABLE_05;
      case true:
        switch(pcVar31 == (code *)0x0) {
        case false:
          lStack_1c0 = 0x10000dd19;
          (*(code *)PTR__free_10082eaf0)(pcVar31);
          UNRECOVERED_JUMPTABLE_05 = (code *)switchD_100010bcf::caseD_1();
          return UNRECOVERED_JUMPTABLE_05;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x30)) {
      return (code *)0xffff5035;
    }
                    /* WARNING: Subroutine does not return */
    lStack_1c0 = (long)&UNK_1000104a2;
    ___stack_chk_fail();
  case (code *)0x100010be4:
    cVar9 = bVar10 + 0x24;
    pcVar17 = (char *)CONCAT71(uVar20,cVar9);
    *pcVar17 = *pcVar17 + cVar9;
    *pcVar17 = *pcVar17 + cVar9;
    ppuVar14[1] = pcVar17;
    lStack_1c0 = (long)&UNK_100010bf4;
    (*pcVar31)(ppuVar14);
    pcVar31 = UNRECOVERED_JUMPTABLE_04;
    goto code_r0x000100010bf7;
  case (code *)0x100010cf6:
    if (!bVar59) {
      bVar58 = uVar45 < uVar37;
      if (bVar57 != uVar37 < 0x733c3e52) {
        bVar58 = uVar37 < 0x733c3e52;
      }
                    /* WARNING: Could not recover jumptable at 0x000100010d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(pcVar40 +
                     (int)(&switchD_100013a5e::switchdataD_1006d0050)
                          [(int)(uVar30 + 0xf91fe2a + (uint)bVar58)]))();
      return UNRECOVERED_JUMPTABLE_05;
    }
    cVar9 = (bVar10 - 0x2e) - bVar58;
    pcVar17 = (char *)CONCAT71(uVar20,cVar9);
    *pcVar17 = *pcVar17 + cVar9;
    uRam8b4cf06e0120f381 = (int)pcVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100010d95:
    auStack_1b8[0] = uVar27;
                    /* WARNING: Could not recover jumptable at 0x000100010dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100010d70 +
                           *(int *)(&DAT_1006d03f0 +
                                   (long)(int)(uVar45 + (ppuVar14[6] == (undefined *)0x0)) * 4)))
                           (ppuVar14[6],pcVar40,
                            &DAT_100010d70 +
                            *(int *)(&DAT_1006d03f0 +
                                    (long)(int)(uVar45 + (ppuVar14[6] == (undefined *)0x0)) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100010e4e:
    *(undefined **)(pcVar46 + 0x10 + (long)UNRECOVERED_JUMPTABLE_05) = &DAT_1006d03f0;
    uVar12 = *puVar49;
    *puVar49 = uVar39 + uVar12;
    *(ulong *)(pcVar46 + 0x18 + (long)UNRECOVERED_JUMPTABLE_05) =
         (ulong)((uVar45 & 0xfffffff8 ^ 0x8135ba6b) + uVar39 + uVar12) + *(long *)pcVar43;
    uVar12 = (int)*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x48) + 0xbd9ab824;
    if (uVar12 < 0x34e8970 == SUB81(pcVar51,0)) {
      pcVar51 = (code *)(ulong)(uVar12 < 0x82e9f0);
    }
    *puVar49 = *puVar49 + *(int *)pcVar53;
                    /* WARNING: Could not recover jumptable at 0x000100010ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100010e1a +
                           (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                [(int)((int)pcVar51 + uVar54)]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100010ef5:
    *(int *)(UNRECOVERED_JUMPTABLE_06 + -0x75) = *(int *)(UNRECOVERED_JUMPTABLE_06 + -0x75) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000110b9:
    uVar29 = (uVar45 | 0x2f) + 0x53cf444e;
    bVar57 = 0x6435d56e < uVar29;
    if (uVar12 + 0x8c3da14f < uVar37 + 0xef83898c != uVar29 < 0x73c25e02) {
      bVar57 = uVar29 < 0x73c25e02;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10001124f +
                           *(int *)(pcVar46 + (long)(int)((uint)bVar57 + (uVar45 | 0x2f)) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000110f0:
    return UNRECOVERED_JUMPTABLE_06;
  case (code *)0x100011171:
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10 + bVar58);
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10);
    pcVar40[0x100012577] = (code)((char)pcVar40[0x100012577] + (char)cVar32);
    goto code_r0x00010001117c;
  case (code *)0x100011178:
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar25);
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10);
code_r0x00010001117c:
    *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x78) = &PTR__bootstrap_look_up_10082e9f0;
    lStack_1c0 = 0x100011186;
    lVar15 = (*(code *)&PTR__bootstrap_look_up_10082e9f0)();
    *(long *)UNRECOVERED_JUMPTABLE_06 = lVar15;
                    /* WARNING: Could not recover jumptable at 0x0001000111b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(switchD_10000db39::caseD_0 +
                   *(int *)((long)ppuVar14 + (ulong)(uVar12 + (lVar15 == 0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000111ea:
    *UNRECOVERED_JUMPTABLE_06 =
         (code)((char)*UNRECOVERED_JUMPTABLE_06 << 1 | (char)*UNRECOVERED_JUMPTABLE_06 < '\0');
                    /* WARNING: Could not recover jumptable at 0x0001000111fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000111ba + *(int *)(pcVar51 + (long)(int)uVar45 * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001133a:
    pcVar31 = pcVar40 + (ulong)bVar41 * -2 + 1;
    out(*pcVar40,uVar26);
    pcVar40 = pcVar31;
    if (!bVar59) {
      **(undefined4 **)(UNRECOVERED_JUMPTABLE_04 + -400) =
           (int)*(long *)(UNRECOVERED_JUMPTABLE_04 + -0xe0);
      pcVar53 = *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x168);
      iVar38 = *(int *)pcVar53;
      uVar12 = uVar12 * 2 ^ 0x15e;
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xa8) = UNRECOVERED_JUMPTABLE_05;
      UNRECOVERED_JUMPTABLE_05 = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x10082e9f0);
      UNRECOVERED_JUMPTABLE_05[iVar38 + 0xa8756e6c] = (code)0x77;
      UNRECOVERED_JUMPTABLE_05[iVar38 + 0xa8756e6d] = (code)0x15;
      UNRECOVERED_JUMPTABLE_01 = (code *)(ulong)(iVar38 + uVar12 + 0xa8756da2);
      UNRECOVERED_JUMPTABLE_05[(long)UNRECOVERED_JUMPTABLE_01] = (code)0x48;
      UNRECOVERED_JUMPTABLE_06 = (code *)(ulong)(iVar38 + 0xa8756e6f);
    }
code_r0x00010001133d:
    UNRECOVERED_JUMPTABLE_05[(long)UNRECOVERED_JUMPTABLE_06] = (code)0x8c;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x168) = pcVar53;
    *(int *)pcVar53 = *(int *)pcVar53 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100011382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(&DAT_1006d03f0 + (long)(int)(uVar12 + 1) * 4) +
                           0x10001135e))
                           (pcVar43,pcVar40,UNRECOVERED_JUMPTABLE_01,
                            (code *)((long)*(int *)(&DAT_1006d03f0 + (long)(int)(uVar12 + 1) * 4) +
                                    0x10001135e));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011347:
    *(int *)(UNRECOVERED_JUMPTABLE_05 + -0x7d) = *(int *)(UNRECOVERED_JUMPTABLE_05 + -0x7d) + 1;
    UNRECOVERED_JUMPTABLE_06 =
         (code *)(ulong)(uVar45 + *(int *)(UNRECOVERED_JUMPTABLE_05 +
                                          (long)UNRECOVERED_JUMPTABLE_06 * 2));
    goto code_r0x00010001133d;
  case (code *)0x1000113f4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100011418:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000114b6:
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_05 + 0xf;
    *UNRECOVERED_JUMPTABLE_05 =
         (code)((char)*UNRECOVERED_JUMPTABLE_05 << ((byte)cVar22 & 7) |
               (byte)*UNRECOVERED_JUMPTABLE_05 >> 8 - ((byte)cVar22 & 7));
    pcVar31[(long)pcVar46] = (code)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001000114dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100011470 +
                           *(int *)(param_1 + (long)(int)((uVar42 & 0xff) + uVar37) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000114f0:
    uVar12 = (int)*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x88) + 0x3fac5837;
    *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0x88) = (ulong)uVar12;
    *(uint *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = (uVar35 ^ 0x25) * 5 ^ 0x544e31cd;
                    /* WARNING: Could not recover jumptable at 0x000100011544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_1000114e3 +
                           (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                [(int)((uVar12 == 0x544e31e5) + uVar29)]))
                           (pcVar43,pcVar40,
                            &UNK_1000114e3 +
                            (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                 [(int)((uVar12 == 0x544e31e5) + uVar29)]);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001154c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100011562:
    *(undefined8 *)(pcVar31 + 0x40) = 0;
code_r0x00010001281a:
    *(undefined4 *)(pcVar31 + 0x4c) = 0x50a01b4b;
    *(undefined8 *)(pcVar31 + 0x28) = 0x611c7e149b50062b;
    pcVar51 = (code *)&DAT_1006d03f0;
    uVar13 = 0x6d03ea;
code_r0x000100012862:
                    /* WARNING: Could not recover jumptable at 0x000100012870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10001284e + *(int *)(pcVar51 + uVar13 * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case caseD_11577:
    goto code_r0x000100011577;
  case (code *)0x100011583:
    goto code_r0x000100011583;
  case (code *)0x10001159d:
    UNRECOVERED_JUMPTABLE_06 = (code *)((ulong)UNRECOVERED_JUMPTABLE_06 & 0xffffffffffffff0c);
    goto code_r0x00010001159f;
  case (code *)0x1000115ac:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000115ae:
    goto code_r0x0001000115ae;
  case (code *)0x1000115cb:
    bVar57 = false;
    UNRECOVERED_JUMPTABLE_05 = (code *)CONCAT71(uVar24,(byte)cVar22 ^ bVar10);
    goto code_r0x0001000115b8;
  case (code *)0x1000115e8:
    if (!bVar59) goto code_r0x0001000115ea;
    goto code_r0x00010001159f;
  case FUN_10001164e:
    *(uint *)(UNRECOVERED_JUMPTABLE_04 + -0x1a0) = uVar39;
    goto code_r0x00010001164e;
  case (code *)0x1000116cd:
    UNRECOVERED_JUMPTABLE_04 = (code *)&DAT_ffffff30;
    goto code_r0x00010001164e;
  case (code *)0x10001171b:
    if (!bVar58 && !bVar59) {
      iVar38 = *(int *)(UNRECOVERED_JUMPTABLE_01 + (long)(int)((uVar29 == 0) + 0x407de6d6) * 4);
      *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x98) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xc0);
      *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0xb8) = ppuVar14;
                    /* WARNING: Could not recover jumptable at 0x0001000117af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(code *)(&DAT_100011768 + iVar38))
                             (*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x80),pcVar40,
                              UNRECOVERED_JUMPTABLE_01,*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x60));
      return UNRECOVERED_JUMPTABLE_05;
    }
    goto code_r0x00010001171d;
  case (code *)0x100011721:
    pcVar18 = (code *)((ulong)UNRECOVERED_JUMPTABLE_04 & 0xffffffff);
    UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_06;
  case (code *)0x100011722:
    goto code_r0x000100011722;
  case (code *)0x10001183e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001185f:
                    /* WARNING: Could not recover jumptable at 0x00010001186d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*UNRECOVERED_JUMPTABLE_06)
                           (pcVar43,*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x70),
                            (ulong)pcVar43 & 0xffffffff,UNRECOVERED_JUMPTABLE_05,
                            *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x48));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001199a:
    uVar39 = uVar45 + 0xaef453fe;
    pcVar43 = (code *)&UNK_100013dbb;
    uVar12 = uVar27;
  case (code *)0x1000119b0:
    uVar12 = uVar12 * 2 + 0x55784140;
    uVar12 = (uVar12 ^ 0xdfe3df71) + (uVar12 & 0xdfe3df70) * 2 + 0xcf107554;
    bVar57 = uVar37 < uVar12;
    if (uVar37 < 0xaef454c5 != uVar12 < uVar39) {
      bVar57 = uVar12 < uVar39;
    }
                    /* WARNING: Could not recover jumptable at 0x000100011a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar43 +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)(bVar57 + uVar45)]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011b8c:
    if (bVar25 != 0) {
      uVar52 = uVar48;
    }
                    /* WARNING: Could not recover jumptable at 0x000100011bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100011b2f +
                           *(int *)(param_1 + (long)(int)((uVar52 & 0xff) + uVar37) * 4)))
                           (pcVar43,pcVar40,
                            &DAT_100011b2f +
                            *(int *)(param_1 + (long)(int)((uVar52 & 0xff) + uVar37) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011bbb:
                    /* WARNING: Could not recover jumptable at 0x000100011bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100011bb6 +
                           *(int *)(pcVar51 +
                                   (long)(int)((*(long *)((ulong)(uVar37 - 0x33) - 0x60) ==
                                               0x4469798c814565b9) + uVar37) * 4)))
                           (pcVar43,pcVar40,
                            &DAT_100011bb6 +
                            *(int *)(pcVar51 +
                                    (long)(int)((*(long *)((ulong)(uVar37 - 0x33) - 0x60) ==
                                                0x4469798c814565b9) + uVar37) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011c04:
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10);
    UNRECOVERED_JUMPTABLE_05[0xd635d8] =
         (code)((char)UNRECOVERED_JUMPTABLE_05[0xd635d8] + (char)cVar22);
    lStack_1c0 = 0x100011c1a;
    UNRECOVERED_JUMPTABLE_06 =
         (code *)(**(code **)(UNRECOVERED_JUMPTABLE_04 + -0x78))(uVar27 + 0x82e9f4 + uVar45);
  case (code *)0x100011c13:
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_05 + (long)UNRECOVERED_JUMPTABLE_06) = 0x8855ffc7;
    lVar15 = (long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                        [(int)((UNRECOVERED_JUMPTABLE_06 == (code *)0x0) + 0x82e9f0)];
    *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x60) = ppuVar14;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xc0) = lVar15;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = lVar15;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xb8) = lVar15;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x198) = 0;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x88) = 0;
                    /* WARNING: Could not emulate address calculation at 0x000100011c2e */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_100011bf4 + lVar15))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011c90:
    pcVar53 = (code *)(ulong)(uVar45 < uVar48);
    _DAT_d63044c2920f4178 = uVar45;
    if (cVar36 != (code)0x0) {
      pcVar53 = pcVar51;
    }
code_r0x000100011d0c:
                    /* WARNING: Could not recover jumptable at 0x000100011d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar43 +
                   *(int *)((long)ppuVar14 +
                           (long)(int)(((uint)pcVar53 & 0xff) + uVar27 + 0xf91fee8) * 4)))
                           (pcVar43,pcVar43 + *(int *)((long)ppuVar14 +
                                                      (long)(int)(((uint)pcVar53 & 0xff) + uVar27 +
                                                                 0xf91fee8) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011d1e:
    goto code_r0x000100011d0c;
  case (code *)0x100011d4e:
    uVar29 = uVar39 * 2 + 0x44aa2bb2;
    uVar29 = ((uVar39 + 0x4010e31d | 0x62) ^ uVar29 ^ 0xffbffad9) + (uVar29 & 0xffbffa3e) * 2 +
             0x1253052c;
    bVar57 = uVar45 < uVar29;
    if (uVar45 < 0x1212ff6b != uVar29 < 0x1212ff6b) {
      bVar57 = uVar29 < 0x1212ff6b;
    }
                    /* WARNING: Could not recover jumptable at 0x000100011de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10001494e +
                           *(int *)(pcVar51 + (long)(int)(bVar57 + uVar12 + 0x4010e381) * 4)))
                           (&UNK_10001494e +
                            *(int *)(pcVar51 + (long)(int)(bVar57 + uVar12 + 0x4010e381) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011dd3:
    if (UNRECOVERED_JUMPTABLE_05 == (code *)0x0) {
      UNRECOVERED_JUMPTABLE_04 = (code *)&DAT_ffffff30;
      param_1 = (undefined *)(ulong)(uVar30 + 0xe);
      ppuVar56 = (undefined **)(ulong)((uVar29 ^ 0x9e) * 3);
      goto code_r0x000100011df9;
    }
code_r0x000100011dd5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100011dd5:
    goto code_r0x000100011dd5;
  case (code *)0x100011e22:
    UNRECOVERED_JUMPTABLE_04 = (code *)0x48ffffff;
    UNRECOVERED_JUMPTABLE_01 = (code *)(ulong)(uVar27 + uVar37);
  case (code *)0x100011df9:
code_r0x000100011df9:
    lStack_1c0 = (long)&UNK_100011e0e;
    lVar15 = (**(code **)(UNRECOVERED_JUMPTABLE_04 + -0xa0))
                       (uVar42 + uVar29 + 2 + ((uint)ppuVar56 ^ 0x2c8207f3),pcVar40,
                        UNRECOVERED_JUMPTABLE_01);
    lVar15 = (long)*(int *)((long)ppuVar14 + (long)(int)(uVar29 + (lVar15 == 0)) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100011e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100011de3 + lVar15))
                           (0x3165f9b2,0,&UNK_100011de3 + lVar15,lVar15,ppuVar14,param_1);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011e94:
    lVar15 = *(long *)(UNRECOVERED_JUMPTABLE_05 + (long)(int)(uVar42 ^ 0x72) * 8);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x50) = (code *)(lVar15 + -3);
    lStack_1c0 = 0x100011eb4;
    uVar12 = (*(code *)(lVar15 + -3))();
                    /* WARNING: Could not recover jumptable at 0x000100011ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100011e3e +
                           *(int *)((long)ppuVar14 +
                                   (long)(int)(((uVar12 ^ 0xfbefd777) + (uVar12 * 2 & 0xf84cb24f) ==
                                               0xbefd77a) + 0x82e9f0) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011f4f:
    return UNRECOVERED_JUMPTABLE_06;
  case (code *)0x100011fa4:
    *(uint *)UNRECOVERED_JUMPTABLE_05 = *(uint *)UNRECOVERED_JUMPTABLE_05 ^ uVar39;
    UNRECOVERED_JUMPTABLE_04 = pcVar31 + (long)UNRECOVERED_JUMPTABLE_05 * 4 + 0x65;
    *UNRECOVERED_JUMPTABLE_04 =
         (code)((byte)*UNRECOVERED_JUMPTABLE_04 >> ((byte)cVar22 & 7) |
               (char)*UNRECOVERED_JUMPTABLE_04 << 8 - ((byte)cVar22 & 7));
    pcVar31[(long)UNRECOVERED_JUMPTABLE_05 * 4 + 0x5d] = cVar22;
                    /* WARNING: Could not recover jumptable at 0x000100011fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_06)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011fd2:
    uVar12 = uVar45 ^ 0xb60f4481 | 10;
    uVar29 = (uint)(byte)UNRECOVERED_JUMPTABLE_01[(uVar39 + uVar44 * 2 ^ 0x8135ba64) + uVar12] |
             (uint)(byte)UNRECOVERED_JUMPTABLE_01[uVar12 + 0x8135ba28] << 8 |
             (uint)(byte)UNRECOVERED_JUMPTABLE_01[uVar12 + 0x8135ba27] << 0x10 | uVar48 << 0x17;
    iVar38 = (uVar29 ^ 0xb7efa97f) + (uVar29 & 0x37efa97f) * 2 + 0x7976fffe;
    **(int **)(UNRECOVERED_JUMPTABLE_04 + -0x50) = uVar12 + 8;
    *(int *)(UNRECOVERED_JUMPTABLE_04 + -0x94) = iVar38;
                    /* WARNING: Could not recover jumptable at 0x000100012057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100011fbe +
                           *(int *)(param_1 + (long)(int)((iVar38 == 0x3166a97d) + uVar42) * 4)))
                           (pcVar43,&DAT_100011fbe +
                                    *(int *)(param_1 +
                                            (long)(int)((iVar38 == 0x3166a97d) + uVar42) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001210b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012130:
    UNRECOVERED_JUMPTABLE_05 = (code *)(ulong)((uVar37 ^ 0xd4aa972f) + uVar45);
    uVar39 = uVar27 + 0xcf8cd106;
    goto code_r0x00010001213f;
  case (code *)0x10001213d:
code_r0x00010001213f:
    pcVar43 = (code *)(ulong)(uVar30 + 0x24d0afde);
    pcVar46 = (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_05 < uVar30 + 0x24d0afde);
    bVar57 = uVar39 < 0x24d0b066;
code_r0x000100012154:
    uVar12 = (uint)pcVar46;
    bVar41 = bVar57 ^ (byte)pcVar46;
    if (bVar41 == 0) {
      uVar12 = (uint)(uVar39 < (uint)UNRECOVERED_JUMPTABLE_05);
    }
                    /* WARNING: Could not recover jumptable at 0x000100012184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_1000120f8 +
                           *(int *)(&DAT_1006d03f0 + (ulong)(uVar12 + 0x82e9f0) * 4)))
                           (CONCAT71((int7)((ulong)pcVar43 >> 8),bVar41),
                            &UNK_1000120f8 +
                            *(int *)(&DAT_1006d03f0 + (ulong)(uVar12 + 0x82e9f0) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001214d:
    UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_05 + -0x2f4f9902;
    *UNRECOVERED_JUMPTABLE_04 =
         (code)((char)*UNRECOVERED_JUMPTABLE_04 << 4 | (byte)*UNRECOVERED_JUMPTABLE_04 >> 4);
    bVar57 = ((byte)*UNRECOVERED_JUMPTABLE_04 & 1) != 0;
    goto code_r0x000100012154;
  case (code *)0x1000121e2:
    if (UNRECOVERED_JUMPTABLE_05 + -1 == (code *)0x0 || bVar59) {
      if (bVar59 || (long)pcVar40 < -0x100011577) {
        out(uVar26,uVar45);
      }
      else {
        uVar27 = uVar27 + (uVar39 ^ 0xe3df9495) + 0xd84ec2d9;
        uVar39 = uVar45 + 0xe3df938b;
        pcVar43 = (code *)&UNK_1000140f4;
        pcVar51 = (code *)(ulong)(0x1c206bc7 < (uint)(UNRECOVERED_JUMPTABLE_05 + -1));
        uVar12 = uVar44 * 2 + 0xb09d85b2;
        uVar48 = uVar12 ^ 0x6fbf7f2f;
        pcVar46 = (code *)(ulong)(uVar12 & 0xefbf7f2e);
      }
    }
    *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0xb8) = (ulong)(uVar48 + (int)pcVar46 * 2 + 0xb7f1bdf8);
    uVar12 = uVar48 + (int)pcVar46 * 2 + 0x74201509;
    ppuVar14 = (undefined **)(ulong)(uVar27 < uVar12);
    if (SUB81(pcVar51,0) != uVar12 < uVar39) {
      ppuVar14 = (undefined **)(ulong)(uVar12 < uVar39);
    }
code_r0x000100012222:
                    /* WARNING: Could not recover jumptable at 0x00010001223a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar43 +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)
                        [(int)(((uint)ppuVar14 & 0xff) + uVar45)]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100012239:
    goto code_r0x000100012222;
  case (code *)0x1000122e2:
    *UNRECOVERED_JUMPTABLE_06 = (code)((char)*UNRECOVERED_JUMPTABLE_06 + bVar10);
    uVar29 = 0xc3d1e49a;
  case (code *)0x1000122f0:
    uVar12 = (uVar29 & 0x3cb1055f) - 0xe;
    UNRECOVERED_JUMPTABLE_03 = (uint *)*ppuVar14;
    pcVar40 = (code *)((ulong)((uVar39 + 0x8135ba22) * 2 & 0xe8fd7fbe) +
                      ((ulong)(uVar39 + 0x8135ba22) ^ 0x3f7ab7b7747ebfdf) + 0xc08548488b814021);
    pcVar51 = (code *)((ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_03 + (long)pcVar40) <<
                      0x38);
    cVar22 = ((code *)((long)UNRECOVERED_JUMPTABLE_03 + 1))[(long)pcVar40];
    *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0x88) = (ulong)uVar12;
    pcVar53 = (code *)((ulong)(byte)cVar22 << (((byte)uVar12 ^ 0x61) & 0x3f));
code_r0x00010001234a:
    uVar13 = (ulong)(byte)((code *)((long)UNRECOVERED_JUMPTABLE_03 + 7))[(long)pcVar40] |
             (ulong)(byte)((code *)((long)UNRECOVERED_JUMPTABLE_03 + 6))[(long)pcVar40] << 8 |
             (ulong)(byte)((code *)((long)UNRECOVERED_JUMPTABLE_03 + 5))[(long)pcVar40] << 0x10 |
             (ulong)(byte)((code *)((long)UNRECOVERED_JUMPTABLE_03 + 4))[(long)pcVar40] << 0x18 |
             (ulong)(byte)((code *)((long)UNRECOVERED_JUMPTABLE_03 + 3))[(long)pcVar40] << 0x20 |
             (ulong)(byte)((code *)((long)UNRECOVERED_JUMPTABLE_03 + 2))[(long)pcVar40] << 0x28 |
             (ulong)pcVar51 | (ulong)pcVar53;
    UNRECOVERED_JUMPTABLE_06 = (code *)0xfebfb2c2307463a;
    pcVar40 = (code *)((uVar13 + 0xfebfb2c2307463a) - (uVar13 * 2 & 0x1fd7f658460e8c74));
    UNRECOVERED_JUMPTABLE_05 =
         (code *)((ulong)((int)*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x48) + 0xba4c2eb3) << 5);
code_r0x0001000123c6:
    *(ulong *)(pcVar46 + (long)UNRECOVERED_JUMPTABLE_05) =
         (ulong)pcVar40 ^ (ulong)UNRECOVERED_JUMPTABLE_06;
    uVar12 = *puVar49;
    *puVar49 = uVar12 + 8;
    puVar16 = *ppuVar14;
    uVar12 = (uint)(byte)puVar16[uVar12 + 0x8135ba2d] |
             (uint)(byte)puVar16[uVar12 + 0x8135ba2c] << 8 |
             (uint)(byte)puVar16[uVar12 + 0x8135ba2b] << 0x10 |
             (uint)(byte)puVar16[uVar12 + 0x8135ba2a] << 0x18;
    *(uint *)(pcVar46 + 8 + (long)UNRECOVERED_JUMPTABLE_05) =
         (uVar12 ^ 0xb7efa97f) + (uVar12 & 0x37efa97f) * 2 + 0x48105681;
    uVar39 = *puVar49;
    *puVar49 = uVar39 + 4;
code_r0x000100012442:
    puVar16 = *ppuVar14;
    uVar12 = (uint)(byte)puVar16[uVar39 + 0x8135ba29] |
             (uint)(byte)puVar16[uVar39 + 0x8135ba28] << 8 |
             (uint)(byte)puVar16[uVar39 + 0x8135ba27] << 0x10 |
             (uint)(byte)puVar16[uVar39 + 0x8135ba26] << 0x18;
    *(uint *)(pcVar46 + 0xc + (long)UNRECOVERED_JUMPTABLE_05) =
         (uVar12 ^ 0xb7efa97f) + (uVar12 & 0x37efa97f) * 2 + 0x48105681;
    uVar12 = *puVar49;
    *puVar49 = uVar12 + 4;
    iVar38 = uVar12 + *(int *)(pcVar46 + 8 + (long)UNRECOVERED_JUMPTABLE_05);
    bVar58 = 0xd19f6332 <
             (uint)(*(int *)(pcVar46 + 0xc + (long)UNRECOVERED_JUMPTABLE_05) + -0x7eca45da + iVar38)
    ;
    bVar57 = *(int *)UNRECOVERED_JUMPTABLE_01 + 0x6af5fa6U <
             *(int *)(pcVar46 + 0xc + (long)UNRECOVERED_JUMPTABLE_05) + iVar38 + 0xaf9656f3U;
    if (*(int *)UNRECOVERED_JUMPTABLE_01 + 0x6af5fa6U < 0x2e609ccd != bVar58) {
      bVar57 = bVar58;
    }
                    /* WARNING: Could not emulate address calculation at 0x00010001251b */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000122e5 +
                           (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                [(int)(bVar57 + 0x82e9f0)]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100012305:
    UNRECOVERED_JUMPTABLE_05 = (code *)swi(1);
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_05)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001234a:
    goto code_r0x00010001234a;
  case (code *)0x1000123a7:
    UNRECOVERED_JUMPTABLE_06 = UNRECOVERED_JUMPTABLE_06 + -0x48;
    *(uint *)UNRECOVERED_JUMPTABLE_06 =
         *(uint *)UNRECOVERED_JUMPTABLE_06 >> 0x1a | *(uint *)UNRECOVERED_JUMPTABLE_06 << 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001241e:
    if (((ulong)UNRECOVERED_JUMPTABLE_06 & 0x348d37ef) == 0) {
      UNRECOVERED_JUMPTABLE_05[0x41481056] = (code)0x89;
      *(uint *)UNRECOVERED_JUMPTABLE_05 = uVar42;
      goto code_r0x000100012442;
    }
    UNRECOVERED_JUMPTABLE_01 = (code *)0x5e1c148;
    goto code_r0x0001000123c6;
  case (code *)0x1000125e2:
    lStack_1c0 = (long)&UNK_1000125f7;
    uVar12 = (**(code **)(UNRECOVERED_JUMPTABLE_04 + -0x50))
                       (pcVar43,pcVar40,
                        (long)UNRECOVERED_JUMPTABLE_06 * ((ulong)pcVar43 & 0xffffffff) >> 0x20,
                        uVar35 - 0x130,UNRECOVERED_JUMPTABLE_04 + -0x7c);
                    /* WARNING: Could not emulate address calculation at 0x000100012640 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                       [(int)(((int)((uVar12 ^ 0xdeedffd7) +
                                                     (uVar12 & 0xdeedffd7) * 2 + 0x6bff977f) <
                                              0x1ae99758) + 0x82e9e9)] + 0x100012618))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000126c0:
    lStack_1c0 = 0x1000126e0;
    (*(code *)(*(long *)(UNRECOVERED_JUMPTABLE_05 + (long)(int)(uVar12 ^ 0x1d) * 8) + -2))
              (*(undefined4 *)(CONCAT71(uVar20,bVar10 - 0x3f) + -3),
               *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x130),
               *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0x7c));
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0xac) = 0x6d03f0;
    ppuVar56 = *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x90);
    *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x90) = ppuVar56;
    if (*(int *)(UNRECOVERED_JUMPTABLE_04 + -0x50) == 0x31e440ab) {
      ppuVar14 = ppuVar56;
    }
    *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x60) = ppuVar14;
                    /* WARNING: Could not emulate address calculation at 0x000100012746 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&LAB_10000bc87 +
                           (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                [(int)((*(int *)(UNRECOVERED_JUMPTABLE_04 + -0x50) == 0x31e440cf) +
                                      0x82e9e9)]))(*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x58));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100012832:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012838:
    pcVar31 = (code *)0x3166a97d;
    goto code_r0x00010001281a;
  case (code *)0x10001285b:
    UNRECOVERED_JUMPTABLE_05[((ulong)auStack_1b8 & 0xffffffff) - 0x18] =
         UNRECOVERED_JUMPTABLE_05[((ulong)auStack_1b8 & 0xffffffff) - 0x18];
    uVar13 = (ulong)(uint)(int)(short)((ulong)auStack_1b8 & 0xffffffff);
    goto code_r0x000100012862;
  case (code *)0x10001289e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000128f6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012977:
    *(int *)(UNRECOVERED_JUMPTABLE_05 + 0x5d8b4802) =
         *(int *)(UNRECOVERED_JUMPTABLE_05 + 0x5d8b4802) + -1;
    iVar38 = *(int *)pcVar31;
    uVar12 = uVar12 + 8;
    *(code **)(UNRECOVERED_JUMPTABLE_06 + -0xa8) = UNRECOVERED_JUMPTABLE_05;
    UNRECOVERED_JUMPTABLE_01 = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x10082e9f0);
    pcVar18 = (code *)(((ulong)(iVar38 + 0xa8756e6cU) ^ 0x7effbe781dfebded) +
                      (ulong)(iVar38 + 0xa8756e6cU & 0x1dfebded) * 2);
    UNRECOVERED_JUMPTABLE_05 = (code *)(ulong)(byte)((byte)uVar12 ^ 0x88);
    UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_06;
  case (code *)0x1000129b4:
    goto code_r0x0001000129b4;
  case (code *)0x100012a6e:
    uVar13 = (ulong)uVar39;
    goto code_r0x000100012a70;
  case (code *)0x100012c27:
                    /* WARNING: Could not recover jumptable at 0x000100012c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100012b9f +
                           *(int *)(UNRECOVERED_JUMPTABLE_01 +
                                   (long)(int)(uVar12 + (ppuVar14[0x20105d40] == (undefined *)0x0))
                                   * 4)))
                           (pcVar43,pcVar40,
                            &DAT_100012b9f +
                            *(int *)(UNRECOVERED_JUMPTABLE_01 +
                                    (long)(int)(uVar12 + (ppuVar14[0x20105d40] == (undefined *)0x0))
                                    * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100012ca1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012d01:
    UNRECOVERED_JUMPTABLE_05 = (code *)(ulong)(uVar42 < uVar37);
    if ((bool)bVar47 != false) {
      UNRECOVERED_JUMPTABLE_05 = pcVar46;
    }
                    /* WARNING: Could not recover jumptable at 0x000100012d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(pcVar51 +
                                          (long)((int)UNRECOVERED_JUMPTABLE_05 + 0x6d03f0) * 4) +
                           0x100012cab))
                           ((code *)((long)*(int *)(pcVar51 +
                                                   (long)((int)UNRECOVERED_JUMPTABLE_05 + 0x6d03f0)
                                                   * 4) + 0x100012cab));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100012d1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012d8e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012d9f:
    uVar50 = uVar50 + 0xa4f48910;
    bVar57 = uVar37 < uVar50;
    if ((bool)bVar47 != uVar50 < 0x58f2ff85) {
      bVar57 = uVar50 < 0x58f2ff85;
    }
                    /* WARNING: Could not recover jumptable at 0x000100012dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar40 + *(int *)(&DAT_1006d03f0 + (long)(int)(bVar57 + 0x82e9f0) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013016:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001302d:
  case (code *)0x100013023:
    lStack_1c0 = 0x100013031;
    (*(code *)(*(long *)(pcVar31 + (long)(int)uVar45 * 8) + -1))(&PTR__bootstrap_look_up_10082e9f0);
    lVar15 = *(long *)(pcVar31 + (long)(int)(uVar12 - 0x8b) * 8);
    *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0xf0) = &PTR__bootstrap_look_up_10082e9f0;
    lStack_1c0 = 0x100013056;
    lVar15 = (*(code *)(lVar15 + -2))
                       (&PTR__bootstrap_look_up_10082e9f0,
                        *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xe8));
    UNRECOVERED_JUMPTABLE_05 = *(code **)(pcVar31 + (long)(int)(uVar12 - 0x7b) * 8);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x58) = lVar15;
    lStack_1c0 = 0x10001306a;
    lVar15 = (*UNRECOVERED_JUMPTABLE_05)();
    UNRECOVERED_JUMPTABLE_05 = (code *)0x0;
    bVar59 = lVar15 == *(long *)(pcVar31 + (long)(int)(uVar12 - 0x9d) * 8) + -0xe;
code_r0x000100013081:
                    /* WARNING: Could not recover jumptable at 0x0001000130a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100012fc5 +
                           *(int *)(&DAT_1006d03f0 +
                                   (long)(int)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_05
                                                                   >> 8),bVar59) + uVar12) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013081:
    goto code_r0x000100013081;
  case (code *)0x10001313f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000131cc:
    iVar38 = *(int *)(&DAT_1006d03f0 + (long)(int)(uVar29 + bVar58) * 4);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x140) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001000131f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100013196 + iVar38))(pcVar43,pcVar40,&DAT_100013196 + iVar38,0);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013273:
    goto switchD_1000116f3_caseD_13272;
  case (code *)0x1000132bf:
    iVar38 = *(int *)(&DAT_1006d03f0 + (ulong)((uVar39 == 0) + 0x82e9f0) * 4);
    *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = (ulong)uVar27;
                    /* WARNING: Could not emulate address calculation at 0x0001000132c8 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_1000132a1 + iVar38))
                           (*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x58),(ulong)uVar27,
                            UNRECOVERED_JUMPTABLE_01,0,*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x48),
                            param_1);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000132d0:
    UNRECOVERED_JUMPTABLE_05 = (code *)swi(0xff);
    (*UNRECOVERED_JUMPTABLE_05)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100013312:
    lStack_1c0 = (long)UNRECOVERED_JUMPTABLE_04;
                    /* WARNING: Could not recover jumptable at 0x000100013333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_1000132f0 +
                           *(int *)(pcVar51 +
                                   (long)(int)((int)CONCAT71(uVar20,uRam0a3c8b480a1c8d48) +
                                              (uint)(pcVar43 == (code *)0x0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001332c:
    *(int *)(UNRECOVERED_JUMPTABLE_06 + 1) = *(int *)(UNRECOVERED_JUMPTABLE_06 + 1) + -1;
    bRam414010e2f9c48141 = bVar10;
                    /* WARNING: Could not recover jumptable at 0x00010001337c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100013336 +
                           *(int *)(pcVar40 +
                                   (long)(int)((uVar45 == ((uVar54 ^ 10) - 0x46 ^ 0x5aed977c)) +
                                              uVar54) * 4)))
                           ((int)uVar42 >> 1,pcVar40,
                            &UNK_100013336 +
                            *(int *)(pcVar40 +
                                    (long)(int)((uVar45 == ((uVar54 ^ 10) - 0x46 ^ 0x5aed977c)) +
                                               uVar54) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001339c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001343a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100013465:
    *(uint *)(UNRECOVERED_JUMPTABLE_01 + (long)UNRECOVERED_JUMPTABLE_05) = uVar45;
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_01 + -0x4469798c814565ad) = 0x7eca45de;
    UNRECOVERED_JUMPTABLE_03 = (uint *)PTR__xpc_release_10082eb00;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x60) = UNRECOVERED_JUMPTABLE_01;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -200) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xa8);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xe0) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xd8);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x70) = UNRECOVERED_JUMPTABLE_01;
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = 0x3166a97d;
    lVar15 = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x148);
    lStack_1c0 = 0x1000134e4;
    (*(code *)PTR__xpc_release_10082eb00)(*(long *)(UNRECOVERED_JUMPTABLE_04 + -200));
    lStack_1c0 = 0x1000134f1;
    (*(code *)UNRECOVERED_JUMPTABLE_03)(*(long *)(UNRECOVERED_JUMPTABLE_04 + -0xe0));
    UNRECOVERED_JUMPTABLE_06 =
         (code *)(long)(int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)((lVar15 == 0) + 0x69)]
    ;
    UNRECOVERED_JUMPTABLE_05 = FUN_1000134a9;
    goto code_r0x000100013506;
  case (code *)0x1000134df:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000134ea:
    *(int *)(UNRECOVERED_JUMPTABLE_06 + -0x77) = *(int *)(UNRECOVERED_JUMPTABLE_06 + -0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100013500:
    UNRECOVERED_JUMPTABLE_05 = (code *)0x134a9;
code_r0x000100013506:
    *(uint **)(UNRECOVERED_JUMPTABLE_04 + -0x1b0) = UNRECOVERED_JUMPTABLE_03;
                    /* WARNING: Could not recover jumptable at 0x000100013510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(UNRECOVERED_JUMPTABLE_06 + (long)UNRECOVERED_JUMPTABLE_05))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001353d:
    *(int *)(pcVar31 + (long)UNRECOVERED_JUMPTABLE_05 * 4 + 0x6d) =
         *(int *)(pcVar31 + (long)UNRECOVERED_JUMPTABLE_05 * 4 + 0x6d) + -1;
    lStack_1c0 = (long)&UNK_100013545;
    (*(code *)&DAT_1006d03f0)();
    *(undefined8 *)pcVar31 = 0;
    *(undefined8 *)(*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x60) + -0x4469798c814565b1) =
         0x7eca45de27b13d27;
    lStack_1c0 = (long)&UNK_10001357c;
    (*(code *)&DAT_1006d03f0)(pcVar31);
                    /* WARNING: Could not recover jumptable at 0x0001000135a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100013589 +
                           (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                [(int)((uVar12 + 0x790468ca & 0x968d9577) +
                                      (uint)(ppuVar14 == (undefined **)0x0))]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000136c2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000136e3:
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + 0xd083d8) =
         *(int *)(UNRECOVERED_JUMPTABLE_05 + 0xd083d8) + uVar37;
                    /* WARNING: Could not recover jumptable at 0x000100013701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_1000136a5 +
                           (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)uVar45]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013a31:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100013b8d:
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x80) = pcVar53;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x178) = ppuVar14 + 1;
    UNRECOVERED_JUMPTABLE_06 =
         (code *)(&UNK_100013b8d +
                 *(int *)(&DAT_1006d03f0 + (long)(int)(uVar37 + (ppuVar14 == (undefined **)0x0)) * 4
                         ));
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = UNRECOVERED_JUMPTABLE_01;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xe0) = UNRECOVERED_JUMPTABLE_01;
  case (code *)0x100013bd4:
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd8) = UNRECOVERED_JUMPTABLE_01;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = 0x742c45ff88570c30;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x90) = 0x742c45ff88570c30;
                    /* WARNING: Could not recover jumptable at 0x000100013bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_06)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013c81:
                    /* WARNING: Could not recover jumptable at 0x000100013c81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_06)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013d60:
    iVar38 = *(int *)((long)&PTR__bootstrap_look_up_10082e9f0 +
                     (long)(int)(uVar30 + 0xf91fe6c + (uint)bVar57) * 4);
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x48) = pcVar43;
    *(uint **)(UNRECOVERED_JUMPTABLE_04 + -0x88) = puVar49;
                    /* WARNING: Could not recover jumptable at 0x000100013d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_100013d08 + iVar38))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013daa:
                    /* WARNING: Could not recover jumptable at 0x000100013db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100013d8c +
                           *(uint *)(UNRECOVERED_JUMPTABLE_05 + (long)UNRECOVERED_JUMPTABLE_06 * 4))
                 )();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013dc9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100013ee8:
                    /* WARNING: Could not recover jumptable at 0x000100013ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100013ec7 +
                           *(uint *)(UNRECOVERED_JUMPTABLE_01 + (long)UNRECOVERED_JUMPTABLE_06 * 4))
                 )();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013f7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100014178:
    param_1 = (undefined *)(ulong)(byte)((byte)uVar12 ^ bVar47);
    ppuVar56 = (undefined **)(ulong)(uVar50 < uVar44);
    goto code_r0x000100014188;
  case (code *)0x100014185:
code_r0x000100014188:
    if ((char)param_1 == '\0') {
      bVar47 = (byte)ppuVar56;
    }
    UNRECOVERED_JUMPTABLE_06[(long)pcVar53] = pcVar40[(long)pcVar53];
                    /* WARNING: Could not recover jumptable at 0x0001000141b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100014140 +
                           *(int *)(&DAT_1006d03f0 + (long)(int)(bVar47 + uVar37) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100014204:
                    /* WARNING: Could not recover jumptable at 0x000100014221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000141ba +
                           *(int *)(&DAT_1006d03f0 +
                                   (long)(CONCAT31(uVar7,uVar37 == uVar44) + 0x82e9f0) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000142ba:
                    /* WARNING: Could not recover jumptable at 0x0001000142cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(UNRECOVERED_JUMPTABLE_05 +
                   *(int *)(&DAT_1006d03f0 + (long)(int)((uVar27 & 0xff) + uVar12) * 4)))
                           (UNRECOVERED_JUMPTABLE_05 +
                            *(int *)(&DAT_1006d03f0 + (long)(int)((uVar27 & 0xff) + uVar12) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100014333:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001453d:
                    /* WARNING: Could not recover jumptable at 0x000100014587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10001453f +
                           *(int *)((long)&PTR__bootstrap_look_up_10082e9f0 +
                                   (long)(int)(uVar48 + (uVar42 == 0xf1423742)) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000145db:
    uVar45 = uVar45 + 0x500720df;
    uVar12 = uVar39 + (uVar42 | 0x44) + 0xa7202949;
    bVar57 = uVar45 < 0xced166b5;
    if (uVar12 < 0xcf3e6a74 == uVar45 < 0xced166b5) {
      bVar57 = uVar12 < uVar45;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001463d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000145c8 + *(int *)(param_1 + (long)(int)(bVar57 + uVar37) * 4)))
                           (uVar42 | 0x44,
                            &DAT_1000145c8 + *(int *)(param_1 + (long)(int)(bVar57 + uVar37) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100014700:
    pcVar31 = UNRECOVERED_JUMPTABLE_06 + -0x75;
    iVar38 = *(int *)pcVar31;
    *(int *)pcVar31 = *(int *)pcVar31 + -1;
    if (SBORROW4(iVar38,1) != *(int *)pcVar31 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010001470c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_06)();
      return UNRECOVERED_JUMPTABLE_05;
    }
    uVar12 = *(uint *)(UNRECOVERED_JUMPTABLE_01 + (long)UNRECOVERED_JUMPTABLE_05 * 4);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xa8) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -200);
                    /* WARNING: Could not recover jumptable at 0x0001000146cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10001463f + uVar12))(pcVar43,ppuVar14,&UNK_10001463f + uVar12);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000148ff:
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x50) = UNRECOVERED_JUMPTABLE_05;
                    /* WARNING: Could not recover jumptable at 0x000100014905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_05)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001490d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000149af:
                    /* WARNING: Could not recover jumptable at 0x0001000149e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100014991 +
                           *(int *)(&DAT_1006d03f0 +
                                   (long)(int)(((uVar44 - 0x1a & uVar12 + 1) == 0) + uVar50) * 4)))
                           ((uVar48 ^ 0xa9ca4ce9) + uVar29);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100014a9f:
    if (!bVar59 && -0x100011578 < (long)pcVar40) {
                    /* WARNING: Could not recover jumptable at 0x000100014aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(code *)(&DAT_100011385 +
                             *(int *)(&DAT_1006d03f0 +
                                     (long)(int)(uVar29 + (pcVar43 == (code *)0x0)) * 4)))
                             (pcVar43,pcVar40,
                              &DAT_100011385 +
                              *(int *)(&DAT_1006d03f0 +
                                      (long)(int)(uVar29 + (pcVar43 == (code *)0x0)) * 4));
      return UNRECOVERED_JUMPTABLE_05;
    }
    *(int *)(UNRECOVERED_JUMPTABLE_06 + 1) = *(int *)(UNRECOVERED_JUMPTABLE_06 + 1) + -1;
    plVar33 = (long *)0xfffffff7;
    cVar9 = '\x1c';
    pcRam00000000fffffff7 = UNRECOVERED_JUMPTABLE_04;
    do {
      UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_04 + -8;
      plVar33 = plVar33 + -1;
      *plVar33 = *(long *)UNRECOVERED_JUMPTABLE_04;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    uRam00000000ffffff0f = 0xfffffff7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100014d7f:
    pcVar43 = (code *)((ulong)auStack_1b8 & 0xffffffff);
  case (code *)0x100014d81:
    lStack_1c0 = 0x100014d92;
    lVar15 = (**(code **)(UNRECOVERED_JUMPTABLE_04 + -0x98))(((uint)pcVar43 ^ 0x80493b) + uVar45);
    iVar38 = *(int *)(&DAT_1006d03f0 + (long)(int)(uVar29 + (lVar15 == 0)) * 4);
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x140) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100014dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_100014d57 + iVar38))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100014e17:
    pcStack_1c8 = (code *)&DAT_1006d03f0;
    ppcVar34 = &pcStack_1e0;
    uVar13 = (_DAT_10088e780 - (long)(UNRECOVERED_JUMPTABLE_04 + -0x30)) + DAT_10088e7f8;
    uVar29 = 0xc7f8732f;
    _DAT_10088e780 = uVar13 * 0x79f54c43 + 0x585ffb1538078cd1;
    DAT_10088e7f8 = (uVar13 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
    uVar12 = ((uint)DAT_10088e7f8 - (uint)_DAT_10088e780 ^ 0xc7f8732f) * 0x79f54c43;
    ppuVar56 = (undefined **)&DAT_1006d1c30;
    param_1 = &DAT_1006d2c00;
    pcVar43 = (code *)(ulong)*(uint *)((&PTR__bootstrap_look_up_10082e9f0)
                                       [(int)((byte)((byte)uVar12 ^
                                                    (&DAT_1006d2c00)
                                                    [(byte)(&DAT_1006d1c30)[uVar12 & 0xff] ^ 0x3c])
                                             - 0x5f)] + -3);
    uVar12 = ((uint)_DAT_10088e780 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
    UNRECOVERED_JUMPTABLE_05 =
         (code *)((&PTR__bootstrap_look_up_10082e9f0)
                  [(byte)((byte)uVar12 ^
                         (&DAT_1006d1a30)[(byte)(&DAT_1006d0b70)[uVar12 & 0xff] ^ 0x38]) + 1] + -3);
    ppuVar55 = &PTR__bootstrap_look_up_10082e9f0;
    UNRECOVERED_JUMPTABLE_03 = (uint *)UNRECOVERED_JUMPTABLE_05;
    pcStack_1e0 = UNRECOVERED_JUMPTABLE_06;
    pcStack_1d8 = pcVar31;
    ppuStack_1d0 = ppuVar14;
    lStack_1c0 = (long)pcVar40;
    goto code_r0x000100014ed4;
  case (code *)0x100014ed2:
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_06;
    ppcVar34 = (code **)auStack_1b8;
code_r0x000100014ed4:
    *(undefined8 *)((long)ppcVar34 + -8) = 0x100014ed6;
    (*UNRECOVERED_JUMPTABLE_05)(pcVar43);
    uVar12 = (DAT_10088e780 ^ uVar29 ^ (uint)DAT_10088e7f8) * 0x79f54c43;
    uVar2 = *(undefined4 *)
             (ppuVar55[(int)((byte)((byte)uVar12 ^
                                   param_1[*(byte *)((ulong)(uVar12 & 0xff) + (long)ppuVar56) ^ 0x46
                                          ]) - 0xa1)] + -1);
    *(undefined8 *)((long)ppcVar34 + -8) = 0x100014f0d;
    (*(code *)UNRECOVERED_JUMPTABLE_03)(uVar2);
    uVar12 = (uVar29 ^ DAT_10088e780 ^ (uint)DAT_10088e7f8) * 0x79f54c43;
                    /* WARNING: Could not recover jumptable at 0x000100014f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)UNRECOVERED_JUMPTABLE_03)
                           (*(undefined4 *)
                             (ppuVar55[(int)((byte)((byte)uVar12 ^
                                                   param_1[*(byte *)((ulong)(uVar12 & 0xff) +
                                                                    (long)ppuVar56) ^ 0x10]) - 2)] +
                             -3));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100014f24:
    UNRECOVERED_JUMPTABLE_05 = (code *)CONCAT71(uVar20,bVar10 + 0x31);
    goto code_r0x000100014ed4;
  case (code *)0x100014feb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100015009:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100015015:
    switch((code *)(ulong)(uVar45 + uVar35) == UNRECOVERED_JUMPTABLE_06) {
    case false:
      *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x88) = pcVar40;
      _DAT_1006d03f0 = 0;
      _switchdataD_1006d03f8 = 0x6d011ee84dd29bf2;
      _UNK_1006d0400 = 0;
      *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x80) = &PTR__bootstrap_look_up_10082e9f0;
      lStack_1c0 = 0x100019a1f;
      _DAT_1006d03f0 = (*(code *)&PTR__bootstrap_look_up_10082e9f0)(0x1000);
      puVar16 = ppuVar14[0x20];
      switch(_DAT_1006d03f0 == 0) {
      case false:
        *(undefined **)(UNRECOVERED_JUMPTABLE_04 + -0x198) = param_1;
        *(undefined **)(UNRECOVERED_JUMPTABLE_04 + -0x60) = puVar16;
        _switchdataD_1006d03f8 = CONCAT44(switchD_100010fa9::switchdataD_1006d03f8_4,0x4dd2abf2);
        *(undefined **)(UNRECOVERED_JUMPTABLE_04 + -0x110) = ppuVar14[0xd] + -1;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xe8) = pcVar40;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xc0) = pcVar40;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xa0) = pcVar40;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xb8) = pcVar40;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xb0) = pcVar40;
        *(code **)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = pcVar40;
        *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x48) = 0x7f31ac3dd4da00c4;
        *(undefined **)(UNRECOVERED_JUMPTABLE_04 + -0x90) = &DAT_1006d03f0;
                    /* WARNING: Could not recover jumptable at 0x000100019e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_05 =
             (code *)(*(code *)((long)(int)switchD_100019e65::switchdataD_1006d1710 + 0x100019dcf))
                               ();
        return UNRECOVERED_JUMPTABLE_05;
      case true:
                    /* WARNING: Could not recover jumptable at 0x00010001b85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_05 =
             (code *)(*(code *)((long)(int)switchD_10001b85c::switchdataD_1006d1a28 + 0x10001b839))
                               ();
        return UNRECOVERED_JUMPTABLE_05;
      }
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x30)) {
      return (code *)0xffff5035;
    }
                    /* WARNING: Subroutine does not return */
    lStack_1c0 = (long)switchD_10001b5d5::caseD_0;
    ___stack_chk_fail();
  case (code *)0x100015283:
    if (bVar59) {
      *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x75) =
           *(int *)(UNRECOVERED_JUMPTABLE_05 + -0x75) + uVar45 + (uint)bVar58;
      *(byte *)((long)puVar49 + -0x73) = *(byte *)((long)puVar49 + -0x73) | bVar10;
      *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = 0x18646b13513134f3;
      *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x90) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xb0);
      *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xa8) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x88);
      *(long *)(UNRECOVERED_JUMPTABLE_04 + -0xf0) = *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x68);
      *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0x108) = (ulong)UNRECOVERED_JUMPTABLE_06 ^ 0xf;
      UNRECOVERED_JUMPTABLE_05 =
           (code *)FUN_10001c9f5(uVar39 + 0xf4661287,uVar39 + 0xf4661287,UNRECOVERED_JUMPTABLE_01,
                                 &UNK_10001522c);
      return UNRECOVERED_JUMPTABLE_05;
    }
    uVar12 = uVar37 + 0x1dfe7b68 & uVar39;
    puVar49 = (uint *)&UNK_100015dad;
    UNRECOVERED_JUMPTABLE_01 = *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x148);
    goto LAB_10001a4cf;
  case (code *)0x10001538a:
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar12 - 0x6b)];
    puVar4 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar12 - 0x61)];
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x110) = pcVar43;
    *(undefined **)(UNRECOVERED_JUMPTABLE_04 + -0x58) = puVar4 + -3;
    lStack_1c0 = (long)&UNK_1000153c3;
    (*(code *)(puVar16 + -3))();
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar12 ^ 0x75)];
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x90) = 0;
    lStack_1c0 = (long)&UNK_1000153e7;
    lVar15 = (*(code *)(puVar16 + -2))(*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x120),0);
                    /* WARNING: Could not recover jumptable at 0x000100015415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100015351 +
                           *(int *)(&DAT_1006d03f0 + (long)(int)(uVar12 + (lVar15 == 0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001542f:
    UNRECOVERED_JUMPTABLE_06 = (code *)((ulong)UNRECOVERED_JUMPTABLE_06 ^ 0xf);
    uVar39 = uVar39 + 0xab86a0d7;
    puVar49 = (uint *)&UNK_10001a145;
  case (code *)0x10001543e:
    goto code_r0x00010001543e;
  case (code *)0x1000157e8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100015997:
    bVar57 = uVar37 < uVar50;
    if ((bool)bVar47 != uVar50 < 0xf8248b01) {
      bVar57 = uVar50 < 0xf8248b01;
    }
                    /* WARNING: Could not recover jumptable at 0x0001000159c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar43 + *(int *)(&DAT_1006d03f0 + (long)(int)(bVar57 + uVar45) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100015a3e:
    if ((POPCOUNT((ulong)pcVar43 & 0xff) & 1U) == 0) {
      UNRECOVERED_JUMPTABLE_06 = (code *)((ulong)UNRECOVERED_JUMPTABLE_06 & 0xffffffffffffff85);
    }
    UNRECOVERED_JUMPTABLE_04[-0x12eefb3a] =
         (code)((char)UNRECOVERED_JUMPTABLE_04[-0x12eefb3a] + '\x01');
    UNRECOVERED_JUMPTABLE_05[(uVar54 ^ 0xb5fe34da) + (int)UNRECOVERED_JUMPTABLE_06] = (code)0xa7;
    UNRECOVERED_JUMPTABLE_05[(int)UNRECOVERED_JUMPTABLE_06 + 0xb5fe347c] = (code)0xaf;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_04 + -0x160) = &PTR__bootstrap_look_up_10082e9f0;
    PTR__bootstrap_look_up_10082e9f0._0_4_ = (int)PTR__bootstrap_look_up_10082e9f0 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100015a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100015a71 + *(int *)(&DAT_1006d03f0 + (long)(int)(uVar54 + 1) * 4))
                 )();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100015aea:
    *(uint *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = uVar45;
    lStack_1c0 = 0x100015b01;
    uVar19 = (*pcVar46)(*(long *)(UNRECOVERED_JUMPTABLE_04 + -0xb8),
                        *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x108));
    lStack_1c0 = 0x100015b0d;
    UNRECOVERED_JUMPTABLE_05 = (code *)(**(code **)(UNRECOVERED_JUMPTABLE_04 + -0xa0))(uVar19);
                    /* WARNING: Could not recover jumptable at 0x000100015b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100015ad1 +
                           (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                                [(int)((UNRECOVERED_JUMPTABLE_05 == pcVar40) + uVar29)]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100015e2c:
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar30 + 0x8fac590)];
    lStack_1c0 = 0x100015e4f;
    (*UNRECOVERED_JUMPTABLE_05)(*(long *)(UNRECOVERED_JUMPTABLE_04 + -0xb0));
    lStack_1c0 = 0x100015e59;
    (*UNRECOVERED_JUMPTABLE_05)(*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x88));
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x60) = UNRECOVERED_JUMPTABLE_05;
                    /* WARNING: Could not recover jumptable at 0x000100015e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(FUN_100015e19 + iRam000000010278abb0))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100015f3d:
    uVar12 = *(int *)(pcVar53 + 0xc) + 0xa41c0264;
    bVar57 = uVar12 < 0xee1dcde3;
    if (*(int *)(pcVar53 + 8) + 0x99a46ecdU < 0xee9f2479 == uVar12 < 0xee1dcde3) {
      bVar57 = *(int *)(pcVar53 + 8) + 0x99a46ecdU < uVar12;
    }
                    /* WARNING: Could not recover jumptable at 0x000100015f99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100015f32 +
                           *(int *)(&DAT_1006d03f0 + (long)(int)(bVar57 + uVar29) * 4)))
                           (bVar57,&UNK_100015f32 +
                                   *(int *)(&DAT_1006d03f0 + (long)(int)(bVar57 + uVar29) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100015fff:
    uVar12 = (uVar39 ^ 0xb7b4bffb) + (uVar39 & 0x37b4bffa) * 2 + 0xb1f873a5;
    bVar57 = uVar37 < uVar12;
    if ((bool)bVar47 != uVar12 < uVar27) {
      bVar57 = uVar12 < uVar27;
    }
                    /* WARNING: Could not recover jumptable at 0x000100016056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar43 +
                   *(int *)(&DAT_1006d03f0 +
                           (long)(int)((uint)bVar57 +
                                      CONCAT22((short)(uVar29 >> 0x10),
                                               CONCAT11((char)uVar29,(char)uVar29))) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000161cf:
    if (-1 < (long)pcVar43) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100016247:
    UNRECOVERED_JUMPTABLE_06 =
         (code *)(&UNK_100016240 +
                 *(int *)(&DAT_1006d03f0 + (long)(int)(uVar12 + (puVar49 == (uint *)0x0)) * 4));
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = 0x18646b13513134f3;
    uVar13 = *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0x68);
    goto code_r0x00010001627b;
  case (code *)0x100016265:
    *(int *)(UNRECOVERED_JUMPTABLE_06 + 1) = *(int *)(UNRECOVERED_JUMPTABLE_06 + 1) + -1;
    plVar33 = &lStack_1c0;
    lStack_1c0 = (long)UNRECOVERED_JUMPTABLE_04;
    cVar9 = '\x12';
    do {
      UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_04 + -8;
      plVar33 = plVar33 + -1;
      *plVar33 = *(long *)UNRECOVERED_JUMPTABLE_04;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    UNRECOVERED_JUMPTABLE_06 = (code *)((ulong)UNRECOVERED_JUMPTABLE_06 ^ 0x31);
    UNRECOVERED_JUMPTABLE_04 = (code *)(ulong)((uint)&lStack_1c0 + *(uint *)(pcVar31 + 100));
    UNRECOVERED_JUMPTABLE_06[-0x77] =
         (code)(((char)UNRECOVERED_JUMPTABLE_06[-0x77] - (char)cVar22) -
               CARRY4((uint)&lStack_1c0,*(uint *)(pcVar31 + 100)));
    uVar13 = (ulong)*(uint *)(UNRECOVERED_JUMPTABLE_04 + -0x68);
code_r0x00010001627b:
    *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0xf0) = uVar13;
                    /* WARNING: Could not recover jumptable at 0x000100016282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_06)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016505:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000165f8:
    cRam000000010001669e = cRam000000010001669e << 1;
    iVar38 = *(int *)(&DAT_1006d03f0 + (long)(int)(uVar27 + (pcVar53 == (code *)0x0)) * 4);
    *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0xd0) = (ulong)uVar39;
                    /* WARNING: Could not recover jumptable at 0x000100016640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000165e8 + iVar38))
                           (*(long *)(UNRECOVERED_JUMPTABLE_04 + -0x68),pcVar40,
                            UNRECOVERED_JUMPTABLE_01,0,pcVar53,0x3165f9b3);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000166db:
                    /* WARNING: Could not recover jumptable at 0x0001000166eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000166ab + auStack_1b8[(long)UNRECOVERED_JUMPTABLE_06]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016829:
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0xf + (long)pcVar40 + in_GS_OFFSET) =
         *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0xf + (long)pcVar40 + in_GS_OFFSET) ^ uVar45;
                    /* WARNING: Could not recover jumptable at 0x00010001684a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10001680d +
                           *(int *)(pcVar46 + (long)(int)((uVar50 == uVar37) + uVar45) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016b16:
    bVar57 = uVar37 < 0xe8199628;
    if (uVar42 < uVar30 + 0xe819959c == uVar37 < 0xe8199628) {
      bVar57 = uVar42 < uVar37;
    }
                    /* WARNING: Could not recover jumptable at 0x000100016b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100016acd +
                           *(int *)(&DAT_1006d03f0 + (long)(int)(bVar57 + uVar54) * 4)))
                           (&DAT_100016acd +
                            *(int *)(&DAT_1006d03f0 + (long)(int)(bVar57 + uVar54) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016be5:
    iVar38 = (uVar45 == uVar37) + uVar27;
    lVar15 = (long)*(int *)((long)ppuVar14 + (long)iVar38 * 4);
                    /* WARNING: Could not recover jumptable at 0x000100016c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100016bcf + lVar15))
                           (pcVar43,iVar38,&UNK_100016bcf + lVar15,lVar15,
                            *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x48),0x3165f9a4);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016c92:
    UNRECOVERED_JUMPTABLE_05 = *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x98);
    *(undefined **)(CONCAT44(auStack_1b8[1],auStack_1b8[0]) + -8) = &UNK_100016caf;
    lVar15 = (*UNRECOVERED_JUMPTABLE_05)
                       (uVar54 + (uVar45 & 0xffffffa2) + -4 + ((uVar29 | 0x17) ^ 0xf05fffd7));
    iVar38 = *(int *)(&DAT_1006d03f0 + (long)(int)(uVar54 + (lVar15 == 0)) * 4);
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0x58) = 0x3165f9b2;
    *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x158) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100016ce1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&UNK_100016c85 + iVar38))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016dc4:
    iVar38 = *(int *)(&DAT_1006d03f0 + (long)UNRECOVERED_JUMPTABLE_05 * 4);
    *(ulong *)(UNRECOVERED_JUMPTABLE_04 + -0xc0) = (ulong)uVar27;
                    /* WARNING: Could not recover jumptable at 0x000100016dde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_100016d98 + iVar38))
                           ((ulong)uVar27,&UNK_100016d98 + iVar38,UNRECOVERED_JUMPTABLE_01,0);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016e57:
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_04 + -0x50) = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x000100016e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar40 + (long)UNRECOVERED_JUMPTABLE_01))
                           (pcVar43,pcVar40 + (long)UNRECOVERED_JUMPTABLE_01);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100017474:
    if (bVar10 != 0) {
      uVar52 = uVar50;
    }
                    /* WARNING: Could not recover jumptable at 0x000100017497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(UNRECOVERED_JUMPTABLE_01 +
                   (int)(&switchD_100019e65::switchdataD_1006d1710)
                        [(int)((uVar45 - 0x8b82ff) + (uVar52 & 0xff))]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001763d:
    **(undefined4 **)(UNRECOVERED_JUMPTABLE_04 + -0x180) =
         (int)*(long *)(UNRECOVERED_JUMPTABLE_04 + -0xb0);
    piVar5 = *(int **)(UNRECOVERED_JUMPTABLE_04 + -0x158);
    iVar38 = *piVar5;
    *(code **)(UNRECOVERED_JUMPTABLE_04 + -0x88) = pcVar31;
    lVar15 = *(long *)(pcVar31 + 0x10082e9f0);
    *(undefined1 *)(lVar15 + (ulong)(iVar38 + 0x92fee118)) = 0;
    *(undefined1 *)(lVar15 + (ulong)(iVar38 + 0x92fee119)) = 0;
    *(undefined1 *)(lVar15 + (ulong)(iVar38 + 0x92fee11a)) = 0;
    *(undefined1 *)(lVar15 + (ulong)(iVar38 + 0x92fee11b)) = 1;
    *(int **)(UNRECOVERED_JUMPTABLE_04 + -0x158) = piVar5;
    *piVar5 = *piVar5 + (uVar12 - 2 ^ 0x9e);
                    /* WARNING: Could not recover jumptable at 0x0001000176d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_1000176b7 +
                           (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)(uVar12 - 1)]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100017d8e:
    *(undefined4 *)UNRECOVERED_JUMPTABLE_06 = 0;
    *(undefined8 *)(pcVar46 + 8) = 0x7261378736103bda;
    lStack_1c0 = (long)&UNK_100017da7;
    (*pcVar31)(pcVar46);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)(UNRECOVERED_JUMPTABLE_04 + -0x30)) {
      return (code *)(ulong)(uVar12 + 0xce995683);
    }
                    /* WARNING: Subroutine does not return */
    lStack_1c0 = (long)&UNK_100018fd5;
    ___stack_chk_fail();
  }
  uVar52 = 0xe2846e43;
  UNRECOVERED_JUMPTABLE_05 = pcVar31;
  UNRECOVERED_JUMPTABLE_04 = pcVar40;
  pcVar43 = UNRECOVERED_JUMPTABLE_01;
  uVar27 = (uint)UNRECOVERED_JUMPTABLE_01;
LAB_10000de3e:
  uVar12 = ((uint)ppuVar14 ^ 0xd) * 3;
  pcVar46 = (code *)(ulong)uVar12;
  uVar27 = uVar27 * 2;
  uVar48 = uVar12 + uVar52 ^ (uint)ppuVar14 * 0x13;
  pcVar40 = UNRECOVERED_JUMPTABLE_04;
code_r0x00010000de5a:
  UNRECOVERED_JUMPTABLE_04 =
       (code *)((long)*(int *)(&DAT_1006d03f0 +
                              (long)(int)((int)ppuVar14 + (uint)(UNRECOVERED_JUMPTABLE_06 < pcVar40)
                                         ) * 4) + 0x10000de3e);
                    /* WARNING: Could not recover jumptable at 0x00010000de82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_05 =
       (code *)(*UNRECOVERED_JUMPTABLE_04)
                         ((((int)pcVar43 + uVar52) - (uVar48 & uVar27)) + 0xebdc8ff,pcVar40,
                          (long)*(int *)(&DAT_1006d03f0 +
                                        (long)(int)((int)ppuVar14 +
                                                   (uint)(UNRECOVERED_JUMPTABLE_06 < pcVar40)) * 4),
                          UNRECOVERED_JUMPTABLE_05,pcVar46,UNRECOVERED_JUMPTABLE_04);
  return UNRECOVERED_JUMPTABLE_05;
}

