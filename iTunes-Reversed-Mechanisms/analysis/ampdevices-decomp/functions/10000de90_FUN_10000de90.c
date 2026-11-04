// name: FUN_10000de90
// address: 10000de90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000100012045) overlaps instruction at (ram,0x000100012044)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10000de90(code *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined *puVar4;
  uint5 uVar5;
  undefined3 uVar6;
  undefined3 uVar7;
  uint uVar8;
  char cVar9;
  code cVar10;
  code *UNRECOVERED_JUMPTABLE_05;
  code *pcVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined7 uVar19;
  code *UNRECOVERED_JUMPTABLE_08;
  char *pcVar16;
  long lVar17;
  long lVar18;
  code cVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  undefined8 uVar26;
  undefined **UNRECOVERED_JUMPTABLE_07;
  undefined *puVar27;
  undefined2 extraout_DX;
  uint uVar28;
  int7 iVar30;
  undefined **UNRECOVERED_JUMPTABLE_04;
  long lVar29;
  uint uVar31;
  uint uVar32;
  code *pcVar33;
  undefined8 *puVar34;
  code *pcVar35;
  undefined8 *puVar36;
  undefined4 **ppuVar37;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  code *pcVar43;
  bool bVar44;
  uint uVar45;
  undefined8 uVar46;
  code *pcVar48;
  uint uVar49;
  code *pcVar50;
  uint *puVar51;
  uint uVar52;
  undefined **ppuVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint *puVar57;
  uint uVar58;
  long in_GS_OFFSET;
  byte bVar59;
  code cVar60;
  bool bVar61;
  byte bVar62;
  char in_AF;
  bool bVar63;
  undefined4 *apuStack_1d8 [43];
  undefined *puStack_80;
  long local_38;
  ushort uVar11;
  uint uVar12;
  code *pcVar38;
  undefined **ppuVar47;
  
  bVar59 = 0;
  UNRECOVERED_JUMPTABLE_05 = (code *)&stack0xfffffffffffffff8;
  ppuVar37 = apuStack_1d8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar42 = 0x3165f9b4;
  switch(param_2 == (undefined4 *)0x0 || param_1 == (code *)0x0) {
  case false:
    *(long *)param_1 = 0;
    *param_2 = 0;
    puVar27 = PTR__malloc_10082ea28;
    pcVar13 = (code *)(*(code *)PTR__malloc_10082ea28)(0x18);
    iVar42 = 0x3165f9b2;
    switch(pcVar13 == (code *)0x0) {
    case false:
      puVar57 = (uint *)0x6;
      *(ulong *)pcVar13 = 0;
      *(ulong *)(pcVar13 + 8) = 0x5026187e5543df60;
      *(int *)(pcVar13 + 0x10) = 0;
      puStack_80 = puVar27;
      apuStack_1d8[0] = param_2;
      uVar15 = (*(code *)puVar27)(0x1000);
      puVar51 = &switchD_100013a5e::switchdataD_1006d0050;
      *(ulong *)pcVar13 = uVar15;
      ppuVar53 = &PTR__bootstrap_look_up_10082e9f0;
      pcVar43 = (code *)PTR__free_10082eaf0;
      pcVar48 = pcVar13;
      switch(uVar15 == 0) {
      case false:
code_r0x0001000139a6:
        *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x120) = param_1;
        *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x110) = pcVar48 + 0x765f31d61552acd;
        uVar56 = (int)puVar57 + 0xa3685611U & 0x28;
        puVar57 = (uint *)(ulong)uVar56;
        UNRECOVERED_JUMPTABLE_04 = (undefined **)0x4469798c814565b9;
        uVar31 = uVar56 + 0x8ff2abdf;
        uVar32 = uVar31 & 0x4f3;
        param_1 = (code *)(ulong)uVar32;
        *(int *)(pcVar48 + 8) = 0x5543ef60;
        UNRECOVERED_JUMPTABLE_08 =
             switchD_1000111b7::caseD_0 +
             *(int *)((long)puVar51 + (ulong)(uVar56 + (pcVar48 == (code *)0x0)) * 4);
        UNRECOVERED_JUMPTABLE_07 = (undefined **)(ulong)uVar56;
        pcVar50 = (code *)puVar51;
code_r0x000100013a06:
        puVar27 = ppuVar53[(uint)UNRECOVERED_JUMPTABLE_07 ^ 0xd] + -1;
        *(undefined **)(UNRECOVERED_JUMPTABLE_05 + -0x160) = puVar27;
        uVar24 = 0x3165f9b3;
        uVar40 = 0x3165f9b3;
        *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x94) = 0x3166a97d;
        *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x60) = UNRECOVERED_JUMPTABLE_04;
        *(undefined **)(UNRECOVERED_JUMPTABLE_05 + -0xc0) = puVar27;
        *(undefined **)(UNRECOVERED_JUMPTABLE_05 + -0xd0) = puVar27;
        *(undefined **)(UNRECOVERED_JUMPTABLE_05 + -0xb8) = puVar27;
        *(undefined **)(UNRECOVERED_JUMPTABLE_05 + -0xf0) = puVar27;
        *(undefined **)(UNRECOVERED_JUMPTABLE_05 + -0x88) = puVar27;
        iVar42 = 0;
        *(code **)(UNRECOVERED_JUMPTABLE_05 + -0xa0) = pcVar48;
        *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x68) = pcVar43;
        puVar51 = (uint *)pcVar50;
        switch(UNRECOVERED_JUMPTABLE_08) {
        case (code *)0x10000d664:
switchD_100013a5e_caseD_d664:
                    /* WARNING: Could not recover jumptable at 0x00010000d687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          UNRECOVERED_JUMPTABLE_05 =
               (code *)(*(code *)((long)*(int *)(pcVar50 + (long)(int)(iVar42 + uVar32) * 4) +
                                 0x10000d664))();
          return UNRECOVERED_JUMPTABLE_05;
        }
code_r0x000100013923:
        ppuVar53 = UNRECOVERED_JUMPTABLE_04;
        goto switchD_1000139a1_caseD_13926;
      case true:
        iVar42 = 0x3165f9b2;
        switch(pcVar13 == (code *)0x0) {
        case false:
          (*(code *)PTR__free_10082eaf0)(pcVar13);
          iVar42 = 0x3165f9b2;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (code *)(ulong)(iVar42 + 0xce995683);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
switchD_1000139a1_caseD_13926:
  iVar42 = (int)puVar57;
  uVar55 = iVar42 + 2;
  puVar57 = (uint *)(ulong)uVar55;
  uVar23 = iVar42 + 0xd;
  UNRECOVERED_JUMPTABLE_07 = (undefined **)(ulong)uVar23;
  *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x1a0) = pcVar48 + 0xc;
  ppuVar47 = (undefined **)(ulong)*(uint *)(pcVar48 + 8);
  UNRECOVERED_JUMPTABLE_08 = (code *)(ulong)*(uint *)(pcVar48 + 0xc);
switchD_1000139a1_caseD_13941:
  UNRECOVERED_JUMPTABLE_04 = (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_08 + 0x104537a3);
  pcVar43 = (code *)(ulong)(uVar23 ^ 0xb2770b0);
  *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xf0) = ppuVar47;
  goto switchD_1000139a1_caseD_13956;
switchD_1000139a1_caseD_139ec:
  *(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x39) =
       (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x39) + (char)cVar10);
  pcVar33[-0x11] = (code)((byte)pcVar33[-0x11] | (byte)ppuVar37);
  puVar36 = ppuVar37 + -1;
  ppuVar37 = ppuVar37 + -1;
  *puVar36 = pcVar13;
  goto code_r0x0001000139a6;
switchD_1000139a1_caseD_13a13:
  *(int *)(UNRECOVERED_JUMPTABLE_05 + -0x57) = *(int *)(UNRECOVERED_JUMPTABLE_05 + -0x57) + 1;
  *(ushort *)(UNRECOVERED_JUMPTABLE_05 + 0x31) =
       *(ushort *)(UNRECOVERED_JUMPTABLE_05 + 0x31) ^ (ushort)CONCAT71(uVar19,uRam65f9b3bb41fffffe);
  pbVar1 = (byte *)(CONCAT71(uVar19,uRam65f9b3bb41fffffe) + -0x77);
  *pbVar1 = *pbVar1 >> 5 | *pbVar1 << 3;
  UNRECOVERED_JUMPTABLE_08 = (code *)CONCAT71(uVar19,uRam48ffffff408d8948);
  *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0xd0) = uVar23;
  pcVar50 = (code *)puVar51;
  goto code_r0x000100013a06;
switchD_1000139a1_caseD_1398b:
  puVar34 = ppuVar37 + -1;
  pcVar35 = (code *)(ppuVar37 + -1);
  ppuVar37[-1] = (undefined4 *)UNRECOVERED_JUMPTABLE_05;
  cVar9 = '\x15';
  do {
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_05 + -8;
    puVar34 = puVar34 + -1;
    *puVar34 = *(undefined8 *)UNRECOVERED_JUMPTABLE_05;
    cVar9 = cVar9 + -1;
  } while ('\0' < cVar9);
  ppuVar37[-0x17] = (undefined4 *)(ppuVar37 + -1);
  ppuVar37 = (undefined4 **)((long)ppuVar37 + -0xff9);
  UNRECOVERED_JUMPTABLE_05 =
       (code *)((long)UNRECOVERED_JUMPTABLE_07 + -0xe) + (long)UNRECOVERED_JUMPTABLE_08;
  *(uint *)UNRECOVERED_JUMPTABLE_05 =
       *(uint *)UNRECOVERED_JUMPTABLE_05 << 1 | (uint)((int)*(uint *)UNRECOVERED_JUMPTABLE_05 < 0);
  UNRECOVERED_JUMPTABLE_05 = pcVar35;
  goto code_r0x000100013993;
switchD_1000139a1_caseD_1394a:
  UNRECOVERED_JUMPTABLE_08 =
       (code *)CONCAT62((int6)((ulong)UNRECOVERED_JUMPTABLE_08 >> 0x10),
                        CONCAT11((char)(uVar11 % (ushort)(byte)UNRECOVERED_JUMPTABLE_08[0x480b2770])
                                 ,(char)(uVar11 / (byte)UNRECOVERED_JUMPTABLE_08[0x480b2770])));
  *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0xf0) = uVar41;
  goto switchD_1000139a1_caseD_13956;
switchD_1000139a1_caseD_1a58f:
  do {
  } while ((long)pcVar43 < 0);
  uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x120);
  UNRECOVERED_JUMPTABLE_05 = (code *)UNRECOVERED_JUMPTABLE_07[uVar52 & 0xba86284];
  ppuVar37[-1] = (undefined4 *)0x10001a5a6;
  uVar31 = (*UNRECOVERED_JUMPTABLE_05)(ppuVar47,uVar14,pcVar50);
                    /* WARNING: Could not recover jumptable at 0x00010001a5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_05 =
       (code *)(*(code *)(&DAT_10001a55e +
                         *(int *)(param_1 +
                                 (long)(int)(((uVar54 + 0x66ffff94 &
                                              uVar31 << (((byte)ppuVar53 ^ 0x62) & 0x1f)) +
                                              (uVar31 ^ 0x337ffffd) == 0x337ffffd) + uVar52) * 4)))
                         ();
  return UNRECOVERED_JUMPTABLE_05;
switchD_1000139a1_caseD_13956:
  pcVar50 = (code *)puVar51;
  puVar51 = (uint *)pcVar48;
  uVar41 = (int)pcVar43 + (int)ppuVar47;
  pcVar43 = (code *)(ulong)uVar41;
  uVar45 = uVar55 * 4 + 0x606b5015;
  cVar60 = (code)((uint)UNRECOVERED_JUMPTABLE_04 < uVar45);
  pcVar33 = (code *)(ulong)(byte)cVar60;
  uVar6 = (undefined3)(uVar45 >> 8);
  bVar44 = (code)(uVar41 < 0x606b501d) != cVar60;
  uVar41 = CONCAT31(uVar6,bVar44);
  ppuVar47 = (undefined **)(ulong)uVar41;
switchD_1000139a1_caseD_1397c:
  pcVar48 = (code *)(ulong)((uint)pcVar43 < (uint)UNRECOVERED_JUMPTABLE_04);
  uVar45 = (uint)(byte)cVar60;
  if (bVar44) {
    pcVar48 = (code *)(ulong)uVar45;
  }
  uVar8 = (uint)pcVar48;
  UNRECOVERED_JUMPTABLE_04 = (undefined **)(ulong)(uVar8 + uVar55);
code_r0x000100013993:
  uVar28 = *(uint *)(pcVar50 + (long)UNRECOVERED_JUMPTABLE_04 * 4);
  UNRECOVERED_JUMPTABLE_04 = (undefined **)(long)(int)uVar28;
  bVar61 = (undefined **)0xfffffffefffec6dc < UNRECOVERED_JUMPTABLE_04;
  pcVar43 = (code *)((long)UNRECOVERED_JUMPTABLE_04 + 0x100013923);
  bVar63 = pcVar43 == (code *)0x0;
  iVar30 = (int7)(int3)(uVar28 >> 8);
  cVar10 = SUB81(UNRECOVERED_JUMPTABLE_08,0);
  uVar11 = (ushort)UNRECOVERED_JUMPTABLE_08;
  uVar12 = (uint)UNRECOVERED_JUMPTABLE_08;
  uVar19 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_08 >> 8);
  uVar21 = (uint)pcVar43;
  uVar7 = (undefined3)(uVar23 >> 8);
  cVar20 = SUB41(uVar23,0);
  bVar62 = (byte)(uVar32 >> 8);
  cVar9 = (char)puVar51;
  uVar49 = (uint)puVar51;
  uVar52 = (uint)ppuVar53;
  uVar54 = (uint)pcVar13;
  uVar39 = (uint)UNRECOVERED_JUMPTABLE_05;
  uVar58 = (uint)pcVar50;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(pcVar43) {
  case (code *)0x10000b5b8:
    iVar42 = *(int *)((long)UNRECOVERED_JUMPTABLE_07 * 4 + 0x3165f9b3);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x180) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010000b5db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000b580 + iVar42))
                           (ppuVar47,pcVar43,&DAT_10000b580 + iVar42,0,pcVar33,
                            *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x48));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000b8b6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000b8c0:
    *(code *)((long)UNRECOVERED_JUMPTABLE_07 + (ulong)((uVar28 ^ 0xee601003) + uVar12)) = (code)0x1;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x110) = pcVar43;
    *(uint *)pcVar43 = *(uint *)pcVar43 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000b905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)((long)ppuVar53 + (long)(int)(uVar58 + 1) * 4) +
                           0x10000b8df))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000bab4:
                    /* WARNING: Could not recover jumptable at 0x00010000baba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)UNRECOVERED_JUMPTABLE_07)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000bbf2:
    uVar31 = uVar21 + uVar28 * 2 + 0xe708fff0;
    bVar61 = uVar12 < uVar31;
    if (bVar44 != uVar31 < 0xdd80ffef) {
      bVar61 = uVar31 < 0xdd80ffef;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000bc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)UNRECOVERED_JUMPTABLE_07 +
                           (long)*(int *)(pcVar13 +
                                         (long)(int)((uint)bVar61 + uVar21 + uVar28 * 2 +
                                                    -0x18bbc7a4) * 4)))
                           ((code *)((long)UNRECOVERED_JUMPTABLE_07 +
                                    (long)*(int *)(pcVar13 +
                                                  (long)(int)((uint)bVar61 + uVar21 + uVar28 * 2 +
                                                             -0x18bbc7a4) * 4)));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000be0a:
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -200) = uVar23;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xa0) = UNRECOVERED_JUMPTABLE_07;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xd0) = UNRECOVERED_JUMPTABLE_07;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xc0) = UNRECOVERED_JUMPTABLE_07;
    UNRECOVERED_JUMPTABLE_05 = (code *)FUN_10001024f();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000bec4:
    puVar27 = &UNK_10000ecdb;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x60) = 0x650a959f740c42c3;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x90) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xa8);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x98) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xb8);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xf8) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x70);
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x118) = UNRECOVERED_JUMPTABLE_08;
    goto LAB_10000de3e;
  case (code *)0x10000bf37:
                    /* WARNING: Could not recover jumptable at 0x00010000bf43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)UNRECOVERED_JUMPTABLE_04 + 0x10000bed2))
                           (ppuVar47,pcVar43,ppuVar47,UNRECOVERED_JUMPTABLE_07,
                            (code *)((long)UNRECOVERED_JUMPTABLE_04 + 0x10000bed2));
    return UNRECOVERED_JUMPTABLE_05;
  case caseD_c221:
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x94) = 0x3166a97d;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x60) = ppuVar53;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xc0) = UNRECOVERED_JUMPTABLE_07;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xd0) = UNRECOVERED_JUMPTABLE_07;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xb8) = UNRECOVERED_JUMPTABLE_07;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xf0) = UNRECOVERED_JUMPTABLE_07;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x88) = UNRECOVERED_JUMPTABLE_07;
    uVar32 = uVar55 * 4 ^ 0xdb;
    uVar15 = *(ulong *)pcVar13;
    *(undefined1 *)(uVar15 + (uVar32 + uVar12 + 0xafd9e6af)) = 0;
    *(undefined1 *)(uVar15 + (uVar12 + 0xafd9e783)) = 0;
    *(undefined1 *)(uVar15 + (uVar12 + 0xafd9e784)) = 0;
    *(undefined1 *)(uVar15 + (uVar12 + 0xafd9e785)) = 1;
    **(int **)(UNRECOVERED_JUMPTABLE_05 + -0x1a0) =
         **(int **)(UNRECOVERED_JUMPTABLE_05 + -0x1a0) + 4;
    iVar42 = 1;
    goto switchD_100013a5e_caseD_d664;
  case (code *)0x10000c2b1:
    bVar44 = uVar41 < uVar23;
    if (uVar41 < 0x3b484f7f != uVar23 < uVar12) {
      bVar44 = uVar23 < uVar12;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000c2eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000c262 +
                           *(int *)((long)ppuVar53 + (long)(int)(bVar44 + uVar32) * 4)))
                           (&DAT_10000c262 +
                            *(int *)((long)ppuVar53 + (long)(int)(bVar44 + uVar32) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000c5f9:
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x50) = 0xb;
    goto switchD_10001997c_caseD_c612;
  case (code *)0x10000c7e5:
    UNRECOVERED_JUMPTABLE_05 = (code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x47);
    *(uint *)UNRECOVERED_JUMPTABLE_05 =
         *(uint *)UNRECOVERED_JUMPTABLE_05 << 1 | (uint)((int)*(uint *)UNRECOVERED_JUMPTABLE_05 < 0)
    ;
    *(uint *)((long)UNRECOVERED_JUMPTABLE_07 + in_GS_OFFSET) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_07 + in_GS_OFFSET) ^ uVar21;
    UNRECOVERED_JUMPTABLE_08 = UNRECOVERED_JUMPTABLE_08 + -0x77;
    *UNRECOVERED_JUMPTABLE_08 =
         (code)((byte)*UNRECOVERED_JUMPTABLE_08 >> ((byte)cVar20 & 7) |
               (char)*UNRECOVERED_JUMPTABLE_08 << 8 - ((byte)cVar20 & 7));
    *(uint *)(param_1 + (long)UNRECOVERED_JUMPTABLE_07 * 4 + 0x55) =
         *(uint *)(param_1 + (long)UNRECOVERED_JUMPTABLE_07 * 4 + 0x55) ^ uVar23;
                    /* WARNING: Could not recover jumptable at 0x00010000c803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)UNRECOVERED_JUMPTABLE_07)(ppuVar47,pcVar43,CONCAT71(iVar30,0xf9));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000c9fd:
    return UNRECOVERED_JUMPTABLE_08;
  case (code *)0x10000cac7:
                    /* WARNING: Could not recover jumptable at 0x00010000cae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0xca82))
                           (0x3165f9b2,0,(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0xca82));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000cae3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000ccb4:
    cVar60 = UNRECOVERED_JUMPTABLE_08[-0x7d];
    piVar25 = (int *)(ulong)CONCAT31(uVar7,(char)cVar20 + (char)UNRECOVERED_JUMPTABLE_08[-0x7d]);
    *piVar25 = *piVar25 + 1;
                    /* WARNING: Could not recover jumptable at 0x00010000ccce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000cc99 +
                           *(int *)((long)(int)(uVar55 + CARRY1((byte)cVar20,(byte)cVar60)) * 4 +
                                   0x3165f9b3)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000cdec:
    bVar44 = uVar23 < 0x3165f9b3;
    if (uVar49 < 0x3fea2a59 == uVar23 < 0x3165f9b3) {
      bVar44 = uVar49 < uVar23;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000ce3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10001361a +
                           (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)(bVar44 + uVar58)])
                 )();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d323:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000d373:
    *(long *)param_1 = 0;
    *(long *)(param_1 + 8) = 0x696c206b5a3a915d;
    *(int *)(param_1 + 0x10) = 0;
    ppuVar37[-1] = (undefined4 *)0x10000d399;
    lVar17 = (*(code *)ppuVar53)(0x1000);
    *(long *)param_1 = lVar17;
                    /* WARNING: Could not recover jumptable at 0x00010000d3b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000d347 +
                           *(int *)(pcVar13 + (long)(int)(uVar58 + (lVar17 == 0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d44c:
                    /* WARNING: Could not recover jumptable at 0x00010000d45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000d422 +
                           *(uint *)(UNRECOVERED_JUMPTABLE_05 + (long)UNRECOVERED_JUMPTABLE_07 * 4))
                 )(ppuVar47,pcVar43,
                   &DAT_10000d422 +
                   *(uint *)(UNRECOVERED_JUMPTABLE_05 + (long)UNRECOVERED_JUMPTABLE_07 * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d4e6:
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0xa8) = pcVar13;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0xd8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010000d545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&LAB_10000d501 +
                           *(int *)((long)puVar51 +
                                   (long)(int)(iVar42 + 0xf91fe75 +
                                              (uint)((uVar55 ^ 0xf06e01cc) +
                                                     (iVar42 + 0x504d7702U & 0xbf44877f) == 0xb4)) *
                                   4)))
                           (*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x58),pcVar43,
                            &LAB_10000d501 +
                            *(int *)((long)puVar51 +
                                    (long)(int)(iVar42 + 0xf91fe75 +
                                               (uint)((uVar55 ^ 0xf06e01cc) +
                                                      (iVar42 + 0x504d7702U & 0xbf44877f) == 0xb4))
                                    * 4),
                            (long)*(int *)((long)puVar51 +
                                          (long)(int)(iVar42 + 0xf91fe75 +
                                                     (uint)((uVar55 ^ 0xf06e01cc) +
                                                            (iVar42 + 0x504d7702U & 0xbf44877f) ==
                                                           0xb4)) * 4),0x90758b48);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d78d:
    iVar42 = *(int *)pcVar48;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x128) = pcVar48;
    *(int *)pcVar48 = iVar42 + 4;
    *(uint **)(UNRECOVERED_JUMPTABLE_05 + -0x48) = puVar51;
    UNRECOVERED_JUMPTABLE_08 =
         (code *)((ulong)(iVar42 + 0xf56bfc9c) + *(long *)((long)puVar51 + (long)puVar57));
    uVar28 = (uint)(byte)cVar60;
    puVar27 = &DAT_10000d3fe;
    pcVar43 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x1d0);
    pcVar48 = pcVar13;
LAB_10000de3e:
    iVar42 = (uVar52 ^ 0xd) * 3;
    UNRECOVERED_JUMPTABLE_05 =
         (code *)((long)*(int *)(pcVar48 +
                                (long)(int)(uVar52 + (UNRECOVERED_JUMPTABLE_08 < pcVar43)) * 4) +
                 0x10000de3e);
                    /* WARNING: Could not recover jumptable at 0x00010000de82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*UNRECOVERED_JUMPTABLE_05)
                           ((uVar28 - ((iVar42 + 0xe2846e43U ^ uVar52 * 0x13) & uVar28 * 2)) +
                            -0xebdc8be,pcVar43,
                            (long)*(int *)(pcVar48 +
                                          (long)(int)(uVar52 + (UNRECOVERED_JUMPTABLE_08 < pcVar43))
                                          * 4),puVar27,iVar42,UNRECOVERED_JUMPTABLE_05);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000d810:
    bVar59 = uVar32 + 0xc38fcf99 < uVar45;
    if (uVar32 + 0xc38fcf99 < 0xf9ba9dea != true) {
      bVar59 = 0xb3;
    }
    UNRECOVERED_JUMPTABLE_08[(long)puVar57] = pcVar43[(long)puVar57];
                    /* WARNING: Could not recover jumptable at 0x00010000d862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000d7f0 +
                           *(int *)(pcVar13 + (long)(int)((uint)bVar59 + (uVar28 ^ 0x18bbc879)) * 4)
                           ))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000dc34:
    uVar23 = uVar23 ^ 7;
    *(int *)(param_1 + 8) = 0x5a3aa15d;
                    /* WARNING: Could not recover jumptable at 0x00010000dc7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000dc31 +
                           *(int *)(pcVar13 +
                                   (long)(int)(uVar23 + ((ulong)(((uVar23 - 0x55 | 0x43) ^
                                                                 0xa5c56efc) + 0x5a3aa15d) <
                                                        *(ulong *)(UNRECOVERED_JUMPTABLE_05 + -0x110
                                                                  ))) * 4)))
                           (*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x118),uVar23,
                            *(ulong *)(UNRECOVERED_JUMPTABLE_05 + -0x110),
                            &DAT_10000dc31 +
                            *(int *)(pcVar13 +
                                    (long)(int)(uVar23 + ((ulong)(((uVar23 - 0x55 | 0x43) ^
                                                                  0xa5c56efc) + 0x5a3aa15d) <
                                                         *(ulong *)(UNRECOVERED_JUMPTABLE_05 +
                                                                   -0x110))) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000dc7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000de1f:
    ppuVar37[-1] = (undefined4 *)UNRECOVERED_JUMPTABLE_08;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000e0d7:
    pcVar43 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x80);
    ppuVar37[-1] = (undefined4 *)0x10000e0e5;
    lVar17 = (*pcVar43)(uVar41 + uVar32 + ((uint)ppuVar37 ^ 0x81003f06));
    iVar42 = *(int *)(pcVar13 + (long)(int)(uVar55 + (lVar17 == 0)) * 4);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x158) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010000e120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000e0ac + iVar42))
                           (*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x50));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000e3d6:
    lVar17 = *(long *)(param_1 + (long)(int)uVar12 * 8);
    lVar18 = *(long *)(param_1 + (long)(int)(uVar54 ^ 0x66) * 8);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x90) = 0;
    ppuVar37[-1] = (undefined4 *)0x10000e400;
    UNRECOVERED_JUMPTABLE_08 = (code *)(*(code *)(lVar17 + -2))(lVar18 + -1,0);
  case (code *)0x10000e400:
                    /* WARNING: Could not recover jumptable at 0x00010000e438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000e331 +
                           (int)(&switchD_10000d217::switchdataD_1006d07b0)
                                [(int)(uVar54 + (UNRECOVERED_JUMPTABLE_08 == (code *)0x0))]))
                           (*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x50));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000e5a9:
    uVar15 = (ulong)UNRECOVERED_JUMPTABLE_05 & 0xffffffff;
    *(uint *)(UNRECOVERED_JUMPTABLE_08 + -0x60) = uVar28;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_08 + -0xe8) = UNRECOVERED_JUMPTABLE_04;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_08 + -200) = UNRECOVERED_JUMPTABLE_04;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_08 + -0xa0) = UNRECOVERED_JUMPTABLE_04;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_08 + -0xd0) = UNRECOVERED_JUMPTABLE_04;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_08 + -0xc0) = UNRECOVERED_JUMPTABLE_04;
                    /* WARNING: Could not recover jumptable at 0x00010000e5d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)CONCAT62((int6)(uVar15 >> 0x10),
                                    CONCAT11((byte)(uVar15 >> 8) |
                                             (byte)UNRECOVERED_JUMPTABLE_08[0x48],(char)uVar15)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000e74d:
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_08 + -0x75;
    *(uint *)UNRECOVERED_JUMPTABLE_05 =
         *(uint *)UNRECOVERED_JUMPTABLE_05 >> 0x15 | *(uint *)UNRECOVERED_JUMPTABLE_05 << 0xb;
    ppuVar37[-1] = (undefined4 *)UNRECOVERED_JUMPTABLE_08;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000e9bb:
    uVar15 = (ulong)(uVar12 + 0x28fb + (uint)bVar61);
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + -0x150) = uVar15;
    UNRECOVERED_JUMPTABLE_05 =
         (code *)FUN_10000fad1(pcVar13,pcVar43,UNRECOVERED_JUMPTABLE_04,uVar15);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000eeac:
    *(int *)param_1 = 0;
    *(undefined8 *)(pcVar13 + -0x650a959f740c42bb) = 0x696c206b5a3a915d;
    ppuVar37[-1] = (undefined4 *)0x10000eed6;
    (*(code *)ppuVar53)(param_1,pcVar43,0x48e74437);
                    /* WARNING: Could not recover jumptable at 0x00010000ef0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                       [(int)((pcVar50 == (code *)0x3c616f4ea01f76b0) + uVar55)] +
                           0x10000eee4))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000ef2d:
    *(undefined4 *)(*(long *)(UNRECOVERED_JUMPTABLE_05 + -200) + 0x24) = 0x50a01b4b;
    **(undefined8 **)(UNRECOVERED_JUMPTABLE_05 + -200) = 0x611c7e149b50062b;
                    /* WARNING: Could not recover jumptable at 0x00010000ef80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10000f0ba +
                           *(int *)((long)ppuVar53 +
                                   (long)(int)(uVar55 + (*(long *)(*(long *)(
                                                  UNRECOVERED_JUMPTABLE_05 + -200) + 0x30) == 0)) *
                                   4)))
                           (*(long *)(*(long *)(UNRECOVERED_JUMPTABLE_05 + -200) + 0x30),pcVar43,
                            &DAT_10000f0ba +
                            *(int *)((long)ppuVar53 +
                                    (long)(int)(uVar55 + (*(long *)(*(long *)(
                                                  UNRECOVERED_JUMPTABLE_05 + -200) + 0x30) == 0)) *
                                    4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000f00f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000f1d3:
    UNRECOVERED_JUMPTABLE_08[-0x77] = (code)((char)UNRECOVERED_JUMPTABLE_08[-0x77] + (char)cVar20);
    iVar42 = (int)CONCAT71(uVar19,DAT_48ff8949a85d8948);
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x80) = 0xed448d43;
    goto code_r0x00010000f1e8;
  case (code *)0x10000f393:
    *(int *)(UNRECOVERED_JUMPTABLE_08 + 1) = *(int *)(UNRECOVERED_JUMPTABLE_08 + 1) + -1;
    piVar25 = *(int **)(UNRECOVERED_JUMPTABLE_05 + -0x140);
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x50);
    uVar31 = uVar58 - 0x42 | 0x43;
    uVar15 = *(ulong *)((long)puVar51 + -0x3c616f4ea01f76b0);
    *(undefined1 *)(uVar15 + (uVar12 + 0xf56bfc98)) = 0xb;
    *(undefined1 *)(uVar15 + (uVar12 + 0xf56bfc99)) = 0x2b;
    *(undefined1 *)(uVar15 + (uVar12 + 0xf56bfc9a)) = 0x31;
    *(undefined1 *)(uVar15 + (uVar12 + uVar31 + 0xf56bfbd4)) = 0x96;
    *(int **)(UNRECOVERED_JUMPTABLE_05 + -0x140) = piVar25;
    *piVar25 = *piVar25 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000f6ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(pcVar13 + (long)(int)(uVar31 + 1) * 4) + 0x10000f6bf))
                           (uVar14,piVar25,(ulong)(uVar12 + 0xf56bfc9a),
                            (code *)((long)*(int *)(pcVar13 + (long)(int)(uVar31 + 1) * 4) +
                                    0x10000f6bf),0x3166a97d);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000f82a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000f853:
    uVar15 = (ulong)*(uint *)(UNRECOVERED_JUMPTABLE_05 + -0xa8);
    uVar14 = *(undefined8 *)(uVar15 + 0xb058298618ec85b8);
    pcVar13 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x48);
    ppuVar37[-1] = (undefined4 *)0x10000f86f;
    (*pcVar13)(uVar14);
    *(undefined8 *)(uVar15 + 0xb058298618ec85b8) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x148);
    **(uint **)(UNRECOVERED_JUMPTABLE_05 + -0x188) = *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0xf4);
    puVar51 = *(uint **)(UNRECOVERED_JUMPTABLE_05 + -0x128);
    UNRECOVERED_JUMPTABLE_08 = (code *)(ulong)*puVar51;
LAB_10000f895:
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + -0xa8) = uVar15;
    lVar17 = *(long *)(uVar15 + 0xb058298618ec85b8);
    iVar42 = (int)UNRECOVERED_JUMPTABLE_08;
    *(undefined1 *)(lVar17 + (ulong)(iVar42 + 0xa8756e6c)) = 0;
    *(undefined1 *)(lVar17 + (ulong)((uVar58 ^ 0xa8756ed2) + iVar42)) = 0;
    *(undefined1 *)(lVar17 + (ulong)(iVar42 + 0xa8756e6e)) = 0;
    *(undefined1 *)(lVar17 + (ulong)(iVar42 + 0xa8756e6f)) = 1;
    *(uint **)(UNRECOVERED_JUMPTABLE_05 + -0x128) = puVar51;
    *puVar51 = *puVar51 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000f90f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(&DAT_1006d03f0 + (long)(int)((uVar58 ^ 0x7f) + 1) * 4) +
                           0x10000f8ef))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10000fbbf:
                    /* WARNING: Could not recover jumptable at 0x00010000fbcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)UNRECOVERED_JUMPTABLE_04 + 0xfb8f))
                           (0x3165f9b3,(code *)((long)UNRECOVERED_JUMPTABLE_04 + 0xfb8f),0);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000101c3:
    pcVar50 = (code *)((ulong)pcVar13 & 0xffffffff);
    *(long *)param_1 = 0;
    *(long *)(param_1 + 8) = 0x696c206b5a3a915d;
    ppuVar37[-1] = (undefined4 *)0x1000101e1;
    (*(code *)puVar57)(param_1);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x60) = 0x650a959f740c42c3;
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x70);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xf8) = uVar14;
    puVar57 = &switchD_10000d217::switchdataD_1006d07b0;
    pcVar33 = (code *)((ulong)ppuVar53 & 0xffffffff);
    goto LAB_10000f758;
  case (code *)0x10001055e:
    pcVar13 = UNRECOVERED_JUMPTABLE_05 + -0x77;
    *(uint *)pcVar13 = *(uint *)pcVar13 ^ uVar12;
    out(0x48,uVar12);
    uVar15 = (ulong)UNRECOVERED_JUMPTABLE_05 & 0xffffffff;
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(ulong)((uint)CONCAT62(0x740c,CONCAT11(((int)*(uint *)pcVar13 < 0) << 7 |
                                                        (*(uint *)pcVar13 == 0) << 6 | in_AF << 4 |
                                                        ((POPCOUNT(*(uint *)pcVar13 & 0xff) & 1U) ==
                                                        0) << 2,0xc3)) | 0x200);
    uVar14 = CONCAT62((int6)(uVar15 >> 0x10),
                      CONCAT11((byte)(uVar15 >> 8) | (byte)UNRECOVERED_JUMPTABLE_05[0x48],
                               (char)uVar15));
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x60) = (uint)uVar14;
LAB_10000f758:
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x70) = uVar14;
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x78) = (uint)pcVar33;
    lVar17 = *(long *)(UNRECOVERED_JUMPTABLE_05 + -0x130);
    pcVar13 = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)pcVar50 + -0x18bbc856];
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xa8);
    ppuVar37[-1] = (undefined4 *)0x10000f795;
    (*pcVar13)(uVar14);
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xb8);
    ppuVar37[-1] = (undefined4 *)0x10000f79e;
    (*pcVar13)(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010000f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)((long)puVar57 +
                                          (long)(int)((int)pcVar50 + -0x18bbc85a +
                                                     (uint)(lVar17 == 0)) * 4) + 0x10000f758))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001094f:
    pcVar50 = (code *)(ulong)(uVar21 < 0x3165f9b3);
    if (cVar9 != '\0') {
      pcVar50 = param_1;
    }
    goto code_r0x000100010960;
  case (code *)0x100010958:
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x7c) = 0x450f44d2;
code_r0x000100010960:
                    /* WARNING: Could not recover jumptable at 0x000100010972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar33 + *(int *)(pcVar13 + (long)(int)(((uint)pcVar50 & 0xff) + uVar23) * 4)))
                           ();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100010b40:
    *(char *)UNRECOVERED_JUMPTABLE_07 =
         (char)*(code *)UNRECOVERED_JUMPTABLE_07 + (char)(uVar28 >> 8);
    return UNRECOVERED_JUMPTABLE_08;
  case (code *)0x100010d16:
    UNRECOVERED_JUMPTABLE_05 = (code *)((ulong)puVar51 & 0xffffffff);
    if (!bVar63) {
      UNRECOVERED_JUMPTABLE_05 = pcVar48;
    }
                    /* WARNING: Could not recover jumptable at 0x000100010d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar43 +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)
                        [(int)(uVar32 + 0xf91fe1e + ((uint)UNRECOVERED_JUMPTABLE_05 & 0xff))]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100010d8c:
    uVar31 = *(uint *)pcVar43;
    uVar32 = uVar12 - *(uint *)pcVar43;
    ppuVar37[-1] = (undefined4 *)(ulong)uVar32;
    bVar59 = (byte)uVar32 + 0x7e;
    *ppuVar53 = (undefined *)UNRECOVERED_JUMPTABLE_04;
                    /* WARNING: Could not recover jumptable at 0x000100010dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100010d70 +
                           *(int *)(pcVar13 +
                                   (long)(int)(CONCAT31((int3)(uVar32 >> 8),
                                                        (bVar59 + (uVar12 < uVar31) + -0x61) -
                                                        (0x81 < (byte)uVar32 ||
                                                        CARRY1(bVar59,uVar12 < uVar31))) +
                                              (uint)(ppuVar53[6] == (undefined *)0x0)) * 4)))
                           (ppuVar53[6],pcVar43,
                            &DAT_100010d70 +
                            *(int *)(pcVar13 +
                                    (long)(int)(CONCAT31((int3)(uVar32 >> 8),
                                                         (bVar59 + (uVar12 < uVar31) + -0x61) -
                                                         (0x81 < (byte)uVar32 ||
                                                         CARRY1(bVar59,uVar12 < uVar31))) +
                                               (uint)(ppuVar53[6] == (undefined *)0x0)) * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100010ddd:
    ppuVar37[-1] = (undefined4 *)UNRECOVERED_JUMPTABLE_05;
    UNRECOVERED_JUMPTABLE_08[-0x7d] = cVar20;
    *(uint *)((long)UNRECOVERED_JUMPTABLE_07 + -0x7d) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_07 + -0x7d) + uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100010ecc:
    pcVar50 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x110);
    uVar14 = *(undefined8 *)(pcVar50 + -0x765f31d61552acd);
    pcVar13 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x68);
    ppuVar37[-1] = (undefined4 *)0x100010ee4;
    (*pcVar13)(uVar14);
    *(undefined8 *)(pcVar50 + -0x765f31d61552acd) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x180);
    **(undefined4 **)(UNRECOVERED_JUMPTABLE_05 + -0x1b8) =
         (int)*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xd0);
    piVar25 = *(int **)(UNRECOVERED_JUMPTABLE_05 + -0x150);
    iVar42 = *piVar25;
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xa0);
    uVar26 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xe8);
    lVar17 = *(long *)(*(long *)(UNRECOVERED_JUMPTABLE_05 + -0x110) + -0x765f31d61552acd);
    *(undefined1 *)(lVar17 + (ulong)(iVar42 + 0xafd9e782)) = 0;
    *(undefined1 *)(lVar17 + (ulong)(iVar42 + 0xafd9e783)) = 0;
    *(undefined1 *)(lVar17 + (long)(ulong)(iVar42 + 0xafd9e784)) = 0;
    *(undefined1 *)(lVar17 + (ulong)(iVar42 + uVar32 + 0xafd9e6f1)) = 1;
    *(int **)(UNRECOVERED_JUMPTABLE_05 + -0x150) = piVar25;
    *piVar25 = *piVar25 + 4;
    ppuVar47 = *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x58);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xe8) = uVar26;
    uVar55 = uVar32 - 0x5f;
    uVar31 = (&switchD_100013a5e::switchdataD_1006d0050)[(int)(uVar32 + 7)];
    pcVar13 = (code *)(long)(int)uVar31;
    uVar40 = (uint)piVar25;
    switch(uVar56) {
    case 0:
      uVar31 = *(uint *)(UNRECOVERED_JUMPTABLE_05 + (long)(pcVar13 + 0x100010f82) * 4);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x188) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(code *)(&DAT_10000db80 + uVar31))
                             (*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x50),piVar25,
                              &DAT_10000db80 + uVar31,0,0x3165f9b2);
      return UNRECOVERED_JUMPTABLE_05;
    default:
      cVar9 = ((char)uVar31 + ';') - ((code *)0xfffffffefffef07d < pcVar13);
      pcVar16 = (char *)CONCAT71((int7)(int3)(uVar31 >> 8),cVar9);
      *pcVar16 = *pcVar16 + cVar9;
      *pcVar16 = *pcVar16 + cVar9;
      uVar15 = (ulong)((uVar32 + 0xeb5e25bc ^ (uVar32 + 6) - (int)pcVar16) + (int)uVar14);
      *(ulong *)(UNRECOVERED_JUMPTABLE_05 + -0x178) = uVar15;
      ppuVar53 = (undefined **)(uVar15 * 0x20);
      pcVar13 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x120);
      *(undefined **)((long)ppuVar53 + *(ulong *)pcVar13) = ppuVar47[uVar15 * 4];
      *(uint *)((long)ppuVar53 + *(ulong *)pcVar13 + 8) = *(uint *)(ppuVar47 + 1 + uVar15 * 4);
      *(undefined4 *)((long)ppuVar53 + *(ulong *)pcVar13 + 0xc) =
           *(undefined4 *)((code *)((long)ppuVar47 + 0xc) + (long)ppuVar53);
      uVar15 = *(ulong *)pcVar13;
      break;
    case 0x18:
    case 0x20:
      uVar31 = (uint)(byte)*(code *)((long)ppuVar47 + (ulong)(uVar40 + 0x825b8ccc)) |
               (uint)(byte)*(code *)((long)ppuVar47 + (ulong)(uVar40 + 0x825b8ccb)) << 8 | 0x6d0050;
      *(uint *)(ulong)(iVar42 + 0xafd9e784) = uVar40 + 8;
      **(int **)(UNRECOVERED_JUMPTABLE_05 + -0x178) =
           (uVar31 ^ 0xb7efa97f) + (uVar31 & 0x37efa97f) * 2 + 0x48105681;
      *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x50) = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x000100015cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(code *)((long)*(int *)((long)(int)((uint)(pcVar50 == pcVar13) + (int)uVar14) *
                                             4 + 0x4469798c814565b9) + 0x100015c9f))();
      return UNRECOVERED_JUMPTABLE_05;
    case 0x28:
    case 0x30:
      return pcVar13;
    case 0x38:
      uVar24 = (uint)(pcVar13 + 0x100010f82);
      uVar56 = (uVar40 ^ 6) * 2 + 0x93df884c;
      uVar56 = (uVar56 ^ 0xb7b4bffb) + (uVar56 & 0x37b4bffa) * 2 + 0xb1f873a5;
      bVar61 = uVar56 < uVar32 + 0x69ad32a1;
      bVar44 = uVar24 < uVar56;
      if (uVar24 < 0x69ad33a0 != bVar61) {
        bVar44 = bVar61;
      }
                    /* WARNING: Could not recover jumptable at 0x000100016056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(code *)(&DAT_100018422 +
                             (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                  [(int)(bVar44 + uVar31)]))();
      return UNRECOVERED_JUMPTABLE_05;
    }
code_r0x000100012bf9:
    *(undefined8 *)((long)ppuVar53 + uVar15 + 0x10) = 0;
    *(undefined8 *)((long)ppuVar53 + *(ulong *)pcVar13 + 0x18) = 0;
    uVar2 = *(undefined4 *)((long)(ppuVar47 + 1) + (long)ppuVar53);
    UNRECOVERED_JUMPTABLE_05 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x78);
    ppuVar37[-1] = (undefined4 *)0x100012c17;
    uVar14 = (*UNRECOVERED_JUMPTABLE_05)(uVar2);
    *(undefined8 *)((long)ppuVar53 + *(ulong *)pcVar13 + 0x10) = uVar14;
                    /* WARNING: Could not recover jumptable at 0x000100012c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100012b9f +
                           *(int *)(pcVar50 +
                                   (long)(int)(uVar55 + (*(long *)((long)ppuVar53 +
                                                                  *(ulong *)pcVar13 + 0x10) == 0)) *
                                   4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100010fdc:
    iRam000000003165f9d6 = iRam000000003165f9d6 - uVar58;
    uVar2 = **(undefined4 **)(UNRECOVERED_JUMPTABLE_05 + -0x170);
    pcVar13 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x78);
    ppuVar37[-1] = (undefined4 *)0x100010fef;
    uVar14 = (*pcVar13)(uVar2);
    plVar3 = *(long **)(UNRECOVERED_JUMPTABLE_05 + -0x120);
    lVar17 = *(long *)(UNRECOVERED_JUMPTABLE_05 + -0x178);
    *(undefined8 *)(*plVar3 + 0x18 + lVar17 * 0x20) = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00010001102b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(pcVar50 +
                                          (ulong)((*(long *)(*plVar3 + 0x18 + lVar17 * 0x20) == 0) +
                                                 0x20) * 4) + 0x100010fde))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100010fe8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000111d2:
    *(code *)((long)UNRECOVERED_JUMPTABLE_04 + -0x74b7742d) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_04 + -0x74b7742d) + bVar62);
                    /* WARNING: Could not recover jumptable at 0x0001000111fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000111ba +
                           *(int *)((long)puVar51 +
                                   (long)(int)(uVar54 + (*(long *)((long)UNRECOVERED_JUMPTABLE_07 +
                                                                  (long)UNRECOVERED_JUMPTABLE_08) ==
                                                        0)) * 4)))
                           (*(long *)((long)UNRECOVERED_JUMPTABLE_07 +
                                     (long)UNRECOVERED_JUMPTABLE_08),uVar23 + uVar12,
                            UNRECOVERED_JUMPTABLE_04,
                            &DAT_1000111ba +
                            *(int *)((long)puVar51 +
                                    (long)(int)(uVar54 + (*(long *)((long)UNRECOVERED_JUMPTABLE_07 +
                                                                   (long)UNRECOVERED_JUMPTABLE_08)
                                                         == 0)) * 4),0x4c);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011319:
    out(*pcVar43,(short)uVar28);
    if (bVar63) {
      *(code *)((long)UNRECOVERED_JUMPTABLE_07 + (long)UNRECOVERED_JUMPTABLE_04) = (code)0x77;
      *(code *)((long)UNRECOVERED_JUMPTABLE_07 + (ulong)(uVar12 + 0xa8756e6d)) = (code)0x15;
      uVar15 = (ulong)(uVar12 + uVar55 + 0xa8756da2);
      *(code *)((long)UNRECOVERED_JUMPTABLE_07 + uVar15) = (code)0x48;
      *(code *)((long)UNRECOVERED_JUMPTABLE_07 + (ulong)(uVar12 + 0xa8756e6f)) = (code)0x8c;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x168) = 0x3165f9b3;
      iRam000000003165f9b3 = iRam000000003165f9b3 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100011382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(code *)((long)*(int *)(&DAT_1006d03f0 + (long)(iVar42 + 3) * 4) + 0x10001135e)
                   )(ppuVar47,(code *)((long)UNRECOVERED_JUMPTABLE_04 +
                                      (ulong)bVar59 * -2 + 0x100013924),uVar15,
                     (code *)((long)*(int *)(&DAT_1006d03f0 + (long)(iVar42 + 3) * 4) + 0x10001135e)
                    );
      return UNRECOVERED_JUMPTABLE_05;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100011604:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100011647:
                    /* WARNING: Could not recover jumptable at 0x00010001164b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_08)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011a74:
    uVar5 = CONCAT14(bVar61,uVar28) >> 5;
    out((short)uVar5,uVar12);
    lVar17 = *(long *)(pcVar50 + (long)(int)((long)ppuVar37 + -0x93) * 8);
    lVar18 = *(long *)(pcVar50 + (long)(int)(uVar52 ^ 0x99) * 8);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xe8) = 0x410c4e03;
    *(long *)(UNRECOVERED_JUMPTABLE_05 + -0x68) = lVar18 + -3;
    ppuVar37[-1] = (undefined4 *)0x100011aaf;
    (*(code *)(lVar17 + -3))(0x410c4e03,lVar18 + -3,uVar28 << 0x1c | (uint)uVar5);
    lVar17 = *(long *)(pcVar50 + (long)(int)(uVar52 - 0x7d) * 8);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x98) = 0;
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x130);
    ppuVar37[-1] = (undefined4 *)0x100011ad2;
    lVar17 = (*(code *)(lVar17 + -2))(uVar14,0);
                    /* WARNING: Could not recover jumptable at 0x000100011b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100011a21 +
                           *(int *)(&DAT_1006d03f0 + (long)(int)(uVar52 + (lVar17 == 0)) * 4)))
                           (*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x80));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011c90:
    uVar31 = (uint)(uVar12 < uVar8);
    if ((char)pcVar43 != '\0') {
      uVar31 = uVar49;
    }
    UNRECOVERED_JUMPTABLE_05 =
         (code *)((long)ppuVar47 +
                 (long)*(int *)((long)ppuVar53 +
                               (long)(int)((uVar31 & 0xff) + uVar28 + 0xf91fee8) * 4));
    _DAT_d63044c2920f4178 = uVar12;
                    /* WARNING: Could not recover jumptable at 0x000100011d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*UNRECOVERED_JUMPTABLE_05)(ppuVar47,UNRECOVERED_JUMPTABLE_05);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100011e3d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100011ef5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012005:
    uVar21 = (byte)*(code *)((long)UNRECOVERED_JUMPTABLE_04 +
                            (ulong)((uVar23 ^ 0x8135ba64) + uVar12)) | uVar21;
    uVar31 = uVar21 & 0x37efa97f;
    UNRECOVERED_JUMPTABLE_07 = (undefined **)(ulong)uVar31;
    uVar31 = (uVar21 ^ 0xb7efa97f) + uVar31 * 2 + 0x7976fffe;
    **(int **)(UNRECOVERED_JUMPTABLE_05 + -0x50) = uVar12 + 8;
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x94) = uVar31;
    UNRECOVERED_JUMPTABLE_08 = (code *)(ulong)((uVar31 == 0x3166a97d) + uVar41);
  case (code *)0x100012044:
    *(code *)UNRECOVERED_JUMPTABLE_07 = *(code *)UNRECOVERED_JUMPTABLE_07;
                    /* WARNING: Could not recover jumptable at 0x000100012057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100011fbe +
                           *(int *)((long)puVar57 + (long)(int)UNRECOVERED_JUMPTABLE_08 * 4)))
                           (ppuVar47,&DAT_100011fbe +
                                     *(int *)((long)puVar57 +
                                             (long)(int)UNRECOVERED_JUMPTABLE_08 * 4));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001205a:
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x1c8) = (code *)((long)puVar51 + 8);
    lVar17 = (long)*(int *)(pcVar50 + (ulong)(uVar23 + ((code *)puVar51 == (code *)0x0)) * 4);
    UNRECOVERED_JUMPTABLE_08 = (code *)(lVar17 + 0x10001205a);
    pcVar33 = (code *)0x0;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x60) = ppuVar53;
    *(long *)(UNRECOVERED_JUMPTABLE_05 + -0xc0) = lVar17;
    *(long *)(UNRECOVERED_JUMPTABLE_05 + -0xd0) = lVar17;
    *(long *)(UNRECOVERED_JUMPTABLE_05 + -0xb8) = lVar17;
    *(long *)(UNRECOVERED_JUMPTABLE_05 + -0x88) = lVar17;
    UNRECOVERED_JUMPTABLE_07 = (undefined **)0x0;
    break;
  case (code *)0x1000120a2:
    ppuVar37[-1] = (undefined4 *)*UNRECOVERED_JUMPTABLE_07;
    break;
  case (code *)0x1000120a7:
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_05 + -0x77;
    *(uint *)UNRECOVERED_JUMPTABLE_05 =
         *(uint *)UNRECOVERED_JUMPTABLE_05 >> 1 |
         (uint)((*(uint *)UNRECOVERED_JUMPTABLE_05 & 1) != 0) << 0x1f;
    puVar51 = (uint *)pcVar48;
    break;
  case (code *)0x1000120a9:
    UNRECOVERED_JUMPTABLE_04 = ppuVar47;
    puVar51 = (uint *)pcVar48;
    break;
  case (code *)0x100012183:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012267:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012458:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012489:
    *(uint *)(pcVar33 + 0xc + (long)UNRECOVERED_JUMPTABLE_07) =
         (uVar21 ^ 0xb7efa97f) + (uVar21 & 0x37efa97f) * 2 + 0x48105681;
    iVar42 = *(int *)pcVar48;
    *(int *)pcVar48 = iVar42 + 4;
    iVar42 = iVar42 + *(int *)(pcVar33 + 8 + (long)UNRECOVERED_JUMPTABLE_07);
    bVar61 = 0xd19f6332 <
             (uint)(*(int *)(pcVar33 + 0xc + (long)UNRECOVERED_JUMPTABLE_07) + -0x7eca45da + iVar42)
    ;
    bVar44 = *(int *)UNRECOVERED_JUMPTABLE_04 + 0x6af5fa6U <
             *(int *)(pcVar33 + 0xc + (long)UNRECOVERED_JUMPTABLE_07) + iVar42 + 0xaf9656f3U;
    if (*(int *)UNRECOVERED_JUMPTABLE_04 + 0x6af5fa6U < 0x2e609ccd != bVar61) {
      bVar44 = bVar61;
    }
                    /* WARNING: Could not recover jumptable at 0x000100012529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000122e5 +
                           (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)(bVar44 + uVar58)])
                 )();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001252f:
    return UNRECOVERED_JUMPTABLE_08;
  case (code *)0x10001255b:
    puVar34 = ppuVar37 + -1;
    ppuVar37[-1] = (undefined4 *)UNRECOVERED_JUMPTABLE_05;
    cVar9 = '\x1b';
    do {
      UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_05 + -8;
      puVar34 = puVar34 + -1;
      *puVar34 = *(undefined8 *)UNRECOVERED_JUMPTABLE_05;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    ppuVar37[-0x1d] = (undefined4 *)(ppuVar37 + -1);
    iVar42 = ((uVar23 - uVar41) + 0x21fd4c9c ^ 0x76230d5) * 0x65773fe7;
    *(uint *)(ppuVar37 + -8) = iVar42 + uVar32 + -0x6a;
    *(uint *)((long)ppuVar37 + -0x44) = uVar12 + iVar42 + 0x55e3dc1;
    *(undefined8 *)((long)ppuVar37 + -0x656) = 0x10001258e;
    FUN_100014c30();
    UNRECOVERED_JUMPTABLE_07 =
         (undefined **)
         (&DAT_100012540 +
         *(int *)((long)puVar51 +
                 (long)(int)((*(uint *)((long)ppuVar37 + -0x3c) == (uVar55 ^ 0x52e88d76)) + uVar32)
                 * 4));
    ppuVar37[-0xb] = (undefined4 *)0x742c45ff88570c30;
code_r0x0001000125c9:
                    /* WARNING: Could not recover jumptable at 0x0001000125c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)UNRECOVERED_JUMPTABLE_07)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001256c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000125ee:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012611:
    if ((long)UNRECOVERED_JUMPTABLE_04 < -0x100013923) {
      *(ushort *)(param_1 + -0x6c72e60d) = *(ushort *)(param_1 + -0x6c72e60d) ^ uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar42 = -0x77a8f3d0;
    pcVar13 = UNRECOVERED_JUMPTABLE_05 + 0x2c;
    *(uint *)pcVar13 = *(uint *)pcVar13 + 1;
    if (*(uint *)pcVar13 == 0) {
code_r0x00010001260e:
                    /* WARNING: Could not recover jumptable at 0x00010001264e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                         [(int)((uint)(iVar42 < (int)((uVar32 ^ 0x19) + 0xbfa13792 &
                                                                      0x405ec871 ^ 0x5aed9729)) +
                                               (uVar32 ^ 0x19))] + 0x100012618))
                             (ppuVar47,(code *)((long)(int)(&switchD_100013a5e::
                                                             switchdataD_1006d0050)
                                                           [(int)((uint)(iVar42 < (int)((uVar32 ^ 
                                                  0x19) + 0xbfa13792 & 0x405ec871 ^ 0x5aed9729)) +
                                                  (uVar32 ^ 0x19))] + 0x100012618));
      return UNRECOVERED_JUMPTABLE_05;
    }
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x50) = 0x88570c30;
    goto code_r0x0001000125c9;
  case (code *)0x10001263a:
    iVar42 = 0x6d0050;
    goto code_r0x00010001260e;
  case (code *)0x10001275e:
    uVar21 = uVar21 * 0x3b;
    pcVar48 = (code *)0x27b14d27;
    uVar28 = iVar42 + 0x100d;
    pcVar43 = (code *)(ulong)(iVar42 + 0x27b14d34);
    goto code_r0x000100012778;
  case (code *)0x1000127ba:
    if ((long)UNRECOVERED_JUMPTABLE_04 < -0x100013923) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar21 = uVar12 ^ 9;
code_r0x000100012778:
    uVar32 = ((int)pcVar48 << (((byte)uVar21 ^ 0x75) * '-' + 0x7a & 0x1f)) + 0xb09d85b2;
    uVar31 = uVar32 ^ 0xb7b77daf;
    uVar32 = uVar32 & 0x37b77dae;
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + -0xc0) = (ulong)(uVar31 + uVar32 * 2 + 0x6ff9bf78);
    uVar31 = uVar31 + uVar32 * 2 + 0x9db45962;
    bVar44 = (int)pcVar43 + 0x2dba99eaU < uVar31;
    if (0xaa9428ee < uVar28 != uVar31 < 0x556bd711) {
      bVar44 = uVar31 < 0x556bd711;
    }
                    /* WARNING: Could not recover jumptable at 0x000100012812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100011549 +
                           (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)(bVar44 + uVar21)])
                 )();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000129d9:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_04 + 0x48b40f99) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_04 + 0x48b40f99) ^ uVar32;
    iVar22 = uVar23 + uVar21;
    UNRECOVERED_JUMPTABLE_08 = UNRECOVERED_JUMPTABLE_08 + -0x7effbe781dfebded;
    *(code *)((long)UNRECOVERED_JUMPTABLE_04 + (long)UNRECOVERED_JUMPTABLE_08) = (code)0xb4;
    ((code *)((long)UNRECOVERED_JUMPTABLE_04 + 1))[(long)UNRECOVERED_JUMPTABLE_08] = (code)0xf;
    ((code *)((long)UNRECOVERED_JUMPTABLE_04 + 2))[(long)UNRECOVERED_JUMPTABLE_08] = (code)0x99;
    ((code *)((long)UNRECOVERED_JUMPTABLE_04 + 3))[(long)UNRECOVERED_JUMPTABLE_08] = (code)0x9a;
    ((code *)((long)UNRECOVERED_JUMPTABLE_04 + 4))[(long)UNRECOVERED_JUMPTABLE_08] =
         (code)((byte)((uint)iVar22 >> 0x18) ^ 0x31);
    ((code *)((long)UNRECOVERED_JUMPTABLE_04 + 5))[(long)UNRECOVERED_JUMPTABLE_08] =
         (code)((byte)((uint)iVar22 >> 0x10) ^ 0x70);
    ((code *)((long)UNRECOVERED_JUMPTABLE_04 + 6))[(long)UNRECOVERED_JUMPTABLE_08] =
         (code)((byte)((uint)iVar22 >> 8) ^ 0xe9);
    ((code *)((long)UNRECOVERED_JUMPTABLE_04 + 7))[(long)UNRECOVERED_JUMPTABLE_08] =
         (code)((byte)iVar22 ^ 0xe6);
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x70) = param_1;
    *(int *)param_1 = *(int *)param_1 + 8;
                    /* WARNING: Could not recover jumptable at 0x000100012a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(pcVar13 + (long)(iVar42 + 3) * 4) + 0x100012a6d))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100012ab3:
                    /* WARNING: Could not recover jumptable at 0x000100012ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)UNRECOVERED_JUMPTABLE_07[-0xf96ca0e])();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100012bef:
    *(code *)((long)UNRECOVERED_JUMPTABLE_04 + -0x77) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_04 + -0x77) + (char)cVar10);
    *(uint *)((long)UNRECOVERED_JUMPTABLE_07 * 3) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_07 * 3) & uVar8;
    uVar15 = (ulong)*(uint *)UNRECOVERED_JUMPTABLE_05;
    goto code_r0x000100012bf9;
  case (code *)0x100012d64:
    uVar31 = (uVar31 & 0xf3) + uVar49 * 2 + 0xdf07129d;
    uVar31 = (uVar31 ^ 0xb3fe7675) + (uVar31 & 0x33fe7674) * 2 + 0xa4f48910;
    bVar44 = uVar23 < uVar31;
    if ((uint)*ppuVar37 < (uVar12 + *(int *)UNRECOVERED_JUMPTABLE_08 | 0x9f8d41a7) !=
        uVar31 < 0x58f2ff85) {
      bVar44 = uVar31 < 0x58f2ff85;
    }
                    /* WARNING: Could not recover jumptable at 0x000100012dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100010545 +
                           (int)*(uint *)((long)ppuVar47 + (long)(int)(bVar44 + uVar58) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100012f64:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012ff7:
    puVar27 = (&PTR__bootstrap_look_up_10082e9f0)[(long)UNRECOVERED_JUMPTABLE_07];
    puVar4 = (&PTR__bootstrap_look_up_10082e9f0)[iVar42 + -0x7e];
    ppuVar37[-1] = (undefined4 *)0x10001301c;
    (*(code *)(puVar27 + -1))(UNRECOVERED_JUMPTABLE_08,puVar4 + -2);
    puVar27 = (&PTR__bootstrap_look_up_10082e9f0)[iVar42 + -0x8a];
    ppuVar37[-1] = (undefined4 *)0x100013031;
    (*(code *)(puVar27 + -1))(UNRECOVERED_JUMPTABLE_08);
    puVar27 = (&PTR__bootstrap_look_up_10082e9f0)[iVar42 + -0x89];
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0xf0) = UNRECOVERED_JUMPTABLE_08;
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xe8);
    ppuVar37[-1] = (undefined4 *)0x100013056;
    uVar14 = (*(code *)(puVar27 + -2))(UNRECOVERED_JUMPTABLE_08,uVar14);
    pcVar13 = (code *)(&PTR__bootstrap_look_up_10082e9f0)[iVar42 + -0x79];
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x58) = uVar14;
    ppuVar37[-1] = (undefined4 *)0x10001306a;
    puVar27 = (undefined *)(*pcVar13)();
                    /* WARNING: Could not recover jumptable at 0x0001000130a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100012fc5 +
                           *(int *)(&DAT_1006d03f0 +
                                   (long)(int)((puVar27 ==
                                               (&PTR__bootstrap_look_up_10082e9f0)[iVar42 + -0x9b] +
                                               -0xe) + uVar55) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000130f0:
    UNRECOVERED_JUMPTABLE_08 =
         (code *)(long)*(int *)((long)puVar51 +
                               (long)(int)(uVar58 + (ppuVar53 == (undefined **)0x0)) * 4);
  case (code *)0x100013109:
                    /* WARNING: Could not recover jumptable at 0x000100013113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(UNRECOVERED_JUMPTABLE_08 + 0x1000130f9))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001315b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001315e:
    pcVar43 = (code *)(ulong)*(uint *)UNRECOVERED_JUMPTABLE_07;
    uVar41 = **(uint **)(UNRECOVERED_JUMPTABLE_05 + -0x168);
    pcVar50 = (code *)(ulong)uVar41;
    UNRECOVERED_JUMPTABLE_04 = (undefined **)&DAT_10000dc81;
switchD_10001997c_caseD_c612:
                    /* WARNING: Could not recover jumptable at 0x00010000c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                       [(int)(uVar55 + (UNRECOVERED_JUMPTABLE_08 < pcVar43))] +
                           0x10000c612))
                           ((uVar41 - ((uint)((long)pcVar50 << (((char)uVar55 - 2U ^ 0x15) & 0x3f))
                                      & ((iVar42 + 0x36U | 0x81) ^ 0xe2846e4f))) + -0xebdc8be,
                            pcVar43,UNRECOVERED_JUMPTABLE_04,
                            (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                                [(int)(uVar55 + (UNRECOVERED_JUMPTABLE_08 < pcVar43)
                                                      )] + 0x10000c612));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013163:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001319e:
    pcVar50 = (code *)(ulong)(uVar32 ^ 6);
switchD_1000139a1_caseD_131a7:
    pcVar43 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0xa0);
    ppuVar37[-1] = (undefined4 *)0x1000131c8;
    lVar17 = (*pcVar43)(uVar41 + (int)pcVar50 + (uVar32 + 0x5181200b & 0xae7edfbb ^ 0x82040f44));
    iVar42 = *(int *)(pcVar13 + (long)(int)(uVar32 + (lVar17 == 0)) * 4);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x140) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001000131f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_100013196 + iVar42))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000131a7:
    goto switchD_1000139a1_caseD_131a7;
  case (code *)0x10001324b:
    *(uint *)UNRECOVERED_JUMPTABLE_08 = *(int *)UNRECOVERED_JUMPTABLE_08 + uVar12 + (uint)bVar61;
    *(code *)((long)UNRECOVERED_JUMPTABLE_07 + (ulong)(uVar12 + 0xa8756e6e)) = (code)0x0;
    *(code *)((long)UNRECOVERED_JUMPTABLE_07 + (ulong)(uVar12 + 0xa8756e6f)) = (code)0x1;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x120) = pcVar43;
    *(uint *)pcVar43 = *(uint *)pcVar43 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010001329c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(pcVar13 + (long)(iVar42 + 3) * 4) + 0x100013272))
                           (ppuVar47,pcVar43,uVar55 ^ 8,
                            (code *)((long)*(int *)(pcVar13 + (long)(iVar42 + 3) * 4) + 0x100013272)
                           );
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001339c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000133da:
    if (!bVar61 && !bVar63) {
                    /* WARNING: Could not recover jumptable at 0x00010001337c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)UNRECOVERED_JUMPTABLE_04)();
      return UNRECOVERED_JUMPTABLE_05;
    }
    pcVar13 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x68);
    ppuVar37[-1] = (undefined4 *)0x1000133e3;
    (*pcVar13)();
    **(int **)(UNRECOVERED_JUMPTABLE_05 + -0x1d0) =
         (uVar54 - 0x2b ^ 0xce9956b2) + *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x94);
    UNRECOVERED_JUMPTABLE_04 =
         (undefined **)
         ((long)*(int *)(pcVar50 +
                        (long)(int)((uint)(*(long *)(UNRECOVERED_JUMPTABLE_05 + -0x60) ==
                                          0x4469798c814565b9) + (uVar54 - 0x2b)) * 4) + 0x100013403)
    ;
    goto code_r0x00010001343e;
  case (code *)0x100013438:
code_r0x00010001343e:
                    /* WARNING: Could not recover jumptable at 0x00010001343e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)UNRECOVERED_JUMPTABLE_04)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013481:
    *(ushort *)((long)UNRECOVERED_JUMPTABLE_07 + -0x42) =
         *(ushort *)((long)UNRECOVERED_JUMPTABLE_07 + -0x42) ^ uVar11;
    *(uint *)((long)UNRECOVERED_JUMPTABLE_04 + 0x100013913) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_04 + 0x100013913) + uVar39;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x60) = UNRECOVERED_JUMPTABLE_04;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -200) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xa8);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xe0) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xd8);
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x70) = UNRECOVERED_JUMPTABLE_04;
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x50) = uVar41;
    lVar17 = *(long *)(UNRECOVERED_JUMPTABLE_05 + -0x148);
    pcVar13 = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar55 ^ 0xf06e01d1)];
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -200);
    ppuVar37[-1] = (undefined4 *)0x1000134e4;
    (*pcVar13)(uVar14);
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xe0);
    ppuVar37[-1] = (undefined4 *)0x1000134f1;
    (*pcVar13)(uVar14);
    UNRECOVERED_JUMPTABLE_07 =
         (undefined **)
         (FUN_1000134a9 +
         (int)(&switchD_100013a5e::switchdataD_1006d0050)
              [(int)(iVar42 + 0xf91fe78 + (uint)(lVar17 == 0))]);
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x1b0) = pcVar13;
    goto code_r0x000100013510;
  case (code *)0x100013499:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001350a:
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x1b0) = uVar39;
code_r0x000100013510:
                    /* WARNING: Could not recover jumptable at 0x000100013510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)UNRECOVERED_JUMPTABLE_07)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013547:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000135e7:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case (code *)0x100013707:
    UNRECOVERED_JUMPTABLE_05 = (code *)((ulong)ppuVar37 & 0xffffffff);
    uVar15 = *(ulong *)(UNRECOVERED_JUMPTABLE_05 + -0xa8);
    puVar51 = *(uint **)(UNRECOVERED_JUMPTABLE_05 + -0x128);
    goto LAB_10000f895;
  case (code *)0x100013810:
    ppuVar37 = (undefined4 **)(ulong)*(uint *)(UNRECOVERED_JUMPTABLE_05 + -0xf0);
  case (code *)0x100013787:
    *(code *)((long)UNRECOVERED_JUMPTABLE_04 + -0x74b3742d) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_04 + -0x74b3742d) + bVar62);
    *(code *)((long)UNRECOVERED_JUMPTABLE_04 + -0x38be742d) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_04 + -0x38be742d) + bVar62);
    puVar27 = PTR__xpc_release_10082eb00;
    pcVar13 = (code *)0xbfef1d67;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x50) = pcVar33;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xc0) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x98);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xf0) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xb8);
    lVar17 = *(long *)(UNRECOVERED_JUMPTABLE_05 + -0xe8);
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x60) = pcVar33;
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x68) = uVar41;
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xc0);
    *(undefined8 *)((long)ppuVar37 + -8) = 0x10001380f;
    (*(code *)PTR__xpc_release_10082eb00)(uVar14);
    ppuVar53 = *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xf0);
    *(undefined8 *)((long)ppuVar37 + -8) = 0x10001381c;
    (*(code *)puVar27)(ppuVar53);
    *(long *)(UNRECOVERED_JUMPTABLE_05 + -0xe8) = lVar17;
    *(undefined **)(UNRECOVERED_JUMPTABLE_05 + -0xb0) = puVar27;
    switch(lVar17 == 0) {
    case false:
      puVar57 = (uint *)&DAT_1006d03f0;
      *(undefined **)((long)ppuVar37 + -8) = &UNK_100014ac8;
      (*(code *)puVar27)(lVar17);
      param_1 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x58);
      break;
    case true:
      lVar17 = *(long *)(UNRECOVERED_JUMPTABLE_05 + -0x58);
      uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xc0);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x98) = uVar14;
      *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xb8) = ppuVar53;
      uVar26 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x60);
      uVar40 = *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x68);
      uVar46 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x80);
      switch(lVar17 == 0) {
      case false:
        pcVar13 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0xb0);
        *(undefined **)((long)ppuVar37 + -8) = &UNK_10000f1b0;
        (*pcVar13)(lVar17);
        uVar46 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x80);
        uVar40 = *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x68);
        uVar26 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x60);
        *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x98) = uVar14;
        *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xb8) = ppuVar53;
      }
      iVar42 = 0x51;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x60) = uVar26;
      *(long *)(UNRECOVERED_JUMPTABLE_05 + -0x58) = lVar17;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x80) = uVar46;
code_r0x00010000f1e8:
                    /* WARNING: Could not recover jumptable at 0x00010000f223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_05 =
           (code *)(*(code *)((long)*(int *)(&DAT_1006d03f0 +
                                            (long)(int)((uint)((int)uVar40 <
                                                              (int)((iVar42 + 0x49f228eeU &
                                                                    0xb60dd6e7) + 0x3166a956)) +
                                                       iVar42) * 4) + 0x10000f1d9))();
      return UNRECOVERED_JUMPTABLE_05;
    }
switchD_1000139a1_caseD_14acc:
    iVar42 = *(int *)((long)puVar57 +
                     (long)(int)((int)pcVar13 + 0x4010e2e6 + (uint)(param_1 == (code *)0x0)) * 4);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x98) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xc0);
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xb8) = ppuVar53;
                    /* WARNING: Could not recover jumptable at 0x000100014b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100011768 + iVar42))
                           (*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x80));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001389b:
switchD_1000139a1_caseD_1389c:
    puVar51 = (uint *)((long)UNRECOVERED_JUMPTABLE_07 * 5 + -0xf);
    uVar31 = *puVar51;
    *puVar51 = *puVar51 + uVar12;
    iVar42 = *(int *)(&DAT_1006d03f0 + (long)(int)(uVar23 + CARRY4(uVar31,uVar12)) * 4);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x98) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xc0);
                    /* WARNING: Could not recover jumptable at 0x0001000138d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100013846 + iVar42))
                           (ppuVar47,&DAT_100013846 + iVar42,
                            *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xc0),0x742c45ff88570c30);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001389c:
    goto switchD_1000139a1_caseD_1389c;
  case (code *)0x1000138a4:
    goto switchD_1000139a1_caseD_1389c;
  case (code *)0x1000138b6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case caseD_13923:
    goto code_r0x000100013923;
  case (code *)0x100013926:
    goto switchD_1000139a1_caseD_13926;
  case (code *)0x10001392c:
    pcVar48 = (code *)((ulong)pcVar48 | *(ulong *)((long)UNRECOVERED_JUMPTABLE_07 + -0x73));
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x1a0) = uVar12 | 0x48;
    goto switchD_1000139a1_caseD_13926;
  case (code *)0x100013941:
    goto switchD_1000139a1_caseD_13941;
  case (code *)0x10001394a:
    goto switchD_1000139a1_caseD_1394a;
  case (code *)0x10001394b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100013956:
    goto switchD_1000139a1_caseD_13956;
  case (code *)0x10001396c:
    ppuVar37[-1] = (undefined4 *)UNRECOVERED_JUMPTABLE_08;
    ppuVar37 = (undefined4 **)(ulong)(uint)(*(int *)(UNRECOVERED_JUMPTABLE_08 + 0x40) * 0xf);
    UNRECOVERED_JUMPTABLE_08 = (code *)(ulong)uVar28;
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_08 + -0x39 + (long)pcVar43) = 0x4dd7894d;
    UNRECOVERED_JUMPTABLE_04 = (undefined **)(ulong)uVar23;
    goto switchD_1000139a1_caseD_1397c;
  case (code *)0x10001396e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001397c:
    goto switchD_1000139a1_caseD_1397c;
  case (code *)0x10001398b:
    goto switchD_1000139a1_caseD_1398b;
  case (code *)0x1000139ec:
    goto switchD_1000139a1_caseD_139ec;
  case (code *)0x1000139ff:
    *(int *)(UNRECOVERED_JUMPTABLE_08 + 1) = *(int *)(UNRECOVERED_JUMPTABLE_08 + 1) + -1;
    puVar34 = ppuVar37 + -1;
    pcVar38 = (code *)(ppuVar37 + -1);
    ppuVar37[-1] = (undefined4 *)UNRECOVERED_JUMPTABLE_05;
    cVar9 = '\x10';
    do {
      UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_05 + -8;
      puVar34 = puVar34 + -1;
      *puVar34 = *(undefined8 *)UNRECOVERED_JUMPTABLE_05;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    ppuVar37[-0x12] = (undefined4 *)(ppuVar37 + -1);
    ppuVar37 = (undefined4 **)((long)ppuVar37 + -0x89d4);
    UNRECOVERED_JUMPTABLE_05 = pcVar38;
    pcVar50 = (code *)puVar51;
    goto code_r0x000100013a06;
  case (code *)0x100013a13:
    goto switchD_1000139a1_caseD_13a13;
  case (code *)0x100013aa9:
    pcVar33 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x48);
    uVar31 = uVar58 - 0x17 | 0x1a;
    pcVar50 = (code *)(ulong)uVar31;
    lVar17 = *(long *)(*(long *)(UNRECOVERED_JUMPTABLE_05 + -0x110) + -0x765f31d61552acd);
    *(undefined1 *)(lVar17 + (ulong)(uVar12 + 0xafd9e782)) = 0x72;
    *(undefined1 *)(lVar17 + (ulong)(uVar12 + 0xafd9e6c4 + uVar31)) = 9;
    UNRECOVERED_JUMPTABLE_04 = (undefined **)(ulong)(uVar12 + 0xafd9e784);
    *(code *)((long)UNRECOVERED_JUMPTABLE_04 + lVar17) = (code)0x6f;
    *(undefined1 *)(lVar17 + (ulong)(uVar12 + 0xafd9e785)) = 0xe6;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x158) = pcVar43;
    goto code_r0x000100013afa;
  case (code *)0x100013af4:
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x158) = uVar21;
code_r0x000100013afa:
    *(uint *)pcVar43 = *(uint *)pcVar43 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100013b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)pcVar50 + 1]
                           + 0x100013b10))
                           (*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x58),pcVar43,
                            UNRECOVERED_JUMPTABLE_04,
                            (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                                [(int)pcVar50 + 1] + 0x100013b10),pcVar33);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013b71:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100013be8:
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x90) = uVar28;
                    /* WARNING: Could not recover jumptable at 0x000100013bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)CONCAT71(uVar19,0x48))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013cd9:
    iVar42 = *(int *)(pcVar33 +
                     (long)(int)(uVar54 + (*(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x50) == 0)) * 4);
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x60) = ppuVar53;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x100) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x70);
                    /* WARNING: Could not recover jumptable at 0x000100013d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_100013cc3 + iVar42))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013e28:
    if (!SCARRY8((long)UNRECOVERED_JUMPTABLE_04,0x100013923)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100013e88:
    UNRECOVERED_JUMPTABLE_08[(long)ppuVar47] = cVar60;
    UNRECOVERED_JUMPTABLE_08[iVar42 + 0xb9da7f00U] = pcVar43[iVar42 + 0xb9da7f00U];
                    /* WARNING: Could not recover jumptable at 0x000100013ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_100013e5e +
                           *(int *)(pcVar13 + (long)(int)((iVar42 == 0x46258100) + uVar8) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013f95:
    out(0x6d,uVar12);
    bVar44 = !SCARRY8((long)UNRECOVERED_JUMPTABLE_04,0x100013923);
    if (bVar44) {
      pcVar48 = (code *)&DAT_1006d03f0;
      pcVar50 = (code *)(ulong)(uVar52 + 0x2f2d7150 & 0x10e3716d);
      UNRECOVERED_JUMPTABLE_08 = (code *)((ulong)ppuVar53 & 0xffffffff);
    }
    pcVar16 = (char *)((long)UNRECOVERED_JUMPTABLE_07 * 5 + -0x20);
    *pcVar16 = *pcVar16 + (char)UNRECOVERED_JUMPTABLE_08 + (!bVar44 && bVar61);
    ppuVar47 = (undefined **)
               (ulong)*(uint *)((&PTR__bootstrap_look_up_10082e9f0)
                                [(uint)UNRECOVERED_JUMPTABLE_08 & 0x4010a293] + -3);
    pcVar43 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x108);
    UNRECOVERED_JUMPTABLE_04 = (undefined **)(ulong)*(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x84);
    UNRECOVERED_JUMPTABLE_08 =
         (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar52 + 0x4010e2bc)];
  case (code *)0x100013fcb:
    ppuVar37[-1] = (undefined4 *)0x100013fd7;
    (*(UNRECOVERED_JUMPTABLE_08 + -2))(ppuVar47,pcVar43,UNRECOVERED_JUMPTABLE_04);
    UNRECOVERED_JUMPTABLE_08 = (code *)(ulong)((uint)pcVar50 ^ 0x3166a958);
    UNRECOVERED_JUMPTABLE_07 = (undefined **)0x0;
    uVar24 = *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x68);
code_r0x000100013fe8:
    iVar42 = *(int *)(pcVar48 +
                     (long)(int)(uVar52 + 0x4010e2b4 +
                                (int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_07 >> 8),
                                              uVar24 == (uint)UNRECOVERED_JUMPTABLE_08)) * 4);
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x50) = pcVar33;
                    /* WARNING: Could not recover jumptable at 0x00010001400f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(FUN_100013f83 + iVar42))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100013fe5:
    pcVar33 = (code *)(ulong)*(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x68);
    pcVar48 = pcVar13;
    goto code_r0x000100013fe8;
  case (code *)0x100014046:
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + -0x70) = (ulong)(uVar8 - 5);
    uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xe0);
    uVar26 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x148);
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x58) = pcVar48;
    pcVar13 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0xa8);
    ppuVar37[-1] = (undefined4 *)0x10001406e;
    uVar14 = (*pcVar13)(uVar14,uVar26);
    ppuVar37[-1] = (undefined4 *)0x100014077;
    pcVar13 = (code *)(*pcVar50)(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001000140a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10001403d +
                           (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                [(int)((uint)(pcVar13 == pcVar43) +
                                      *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x58))]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000140ab:
    *(int *)(param_1 + 0x24) = 0x50a01b4b;
    *(long *)param_1 = 0x611c7e149b50062b;
                    /* WARNING: Could not recover jumptable at 0x0001000140ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000140a9 +
                           *(int *)((long)ppuVar53 +
                                   (long)(int)(uVar12 + (*(long *)(param_1 + 0x30) == 0)) * 4)))
                           (*(long *)(param_1 + 0x30),pcVar43,
                            &DAT_1000140a9 +
                            *(int *)((long)ppuVar53 +
                                    (long)(int)(uVar12 + (*(long *)(param_1 + 0x30) == 0)) * 4),
                            uVar12 + 0x4f605f51 & 0xb09fa0b7);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000140fa:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000141da:
                    /* WARNING: Could not recover jumptable at 0x000100014221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000141ba +
                           *(int *)(pcVar13 +
                                   (long)(int)(((uVar41 << (cVar9 - 0x14U & 0x1f) & 0xac6b661e ^
                                                0xa0006604) + 0x2155c7ad == uVar58 + 0x462580fb) +
                                              uVar58) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001425e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100014421:
    iVar42 = *(int *)(pcVar50 + (long)(int)(uVar32 + bVar61) * 4);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -400) = 0;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x60) = 0x4469798c814565b9;
                    /* WARNING: Could not recover jumptable at 0x000100014456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000143f3 + iVar42))
                           (0x3165f9a5,pcVar43,0x4469798c814565b9,&DAT_1000143f3 + iVar42);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000144b1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000144dc:
    iVar42 = (uVar21 ^ 0xd97311a5) * 0x65773fe7;
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x38) = (uVar23 + iVar42) - 0x71;
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x3c) = uVar12 + iVar42 + uVar58 + 0x55e3d84;
    ppuVar37[-1] = (undefined4 *)0x100014505;
    FUN_100014c30();
    if (*(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x34) == 0x52e88d51) {
      pcVar48 = (code *)0x3165f9a5;
    }
    uVar40 = (uint)pcVar48;
    UNRECOVERED_JUMPTABLE_07 = (undefined **)0x4469798c814565b9;
    puVar51 = &switchD_100013a5e::switchdataD_1006d0050;
    ppuVar47 = *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x58);
    uVar31 = uVar58 - 0x27 | 0x29;
    pcVar50 = (code *)(ulong)uVar31;
    UNRECOVERED_JUMPTABLE_08 = (code *)(ulong)(uVar31 ^ 0x3166a942);
    ppuVar53 = UNRECOVERED_JUMPTABLE_07;
  case (code *)0x100012714:
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x90) = UNRECOVERED_JUMPTABLE_07;
    if (uVar40 == (uint)UNRECOVERED_JUMPTABLE_08) {
      ppuVar53 = UNRECOVERED_JUMPTABLE_07;
    }
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x60) = ppuVar53;
                    /* WARNING: Could not recover jumptable at 0x000100012754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&LAB_10000bc87 +
                           *(int *)((long)puVar51 +
                                   (long)(int)((uint)(uVar40 ==
                                                     (((uint)pcVar50 ^ 10) + 0xe ^ 0x3166a93e)) +
                                              (uint)pcVar50) * 4)))(ppuVar47);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100014591:
    UNRECOVERED_JUMPTABLE_08 = (code *)CONCAT71(uVar19,(char)cVar10 + 0x41);
    param_1 = (code *)(ulong)((int)UNRECOVERED_JUMPTABLE_08 + uVar23 + 0xb9da7ed9);
switchD_1000139a1_caseD_1459c:
    UNRECOVERED_JUMPTABLE_08[(long)param_1] = pcVar43[(long)param_1];
                    /* WARNING: Could not recover jumptable at 0x0001000145c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10001458b +
                           *(int *)(pcVar13 + (ulong)((uVar49 == 0x3165f9b2) + uVar8) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001459c:
    goto switchD_1000139a1_caseD_1459c;
  case (code *)0x100014acc:
    goto switchD_1000139a1_caseD_14acc;
  case (code *)0x100014aff:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100014cc9:
                    /* WARNING: Could not recover jumptable at 0x000100014cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0x14c87))
                           (0x3165f9b2,0,(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0x14c87));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100014d66:
    pcVar43 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x98);
    ppuVar37[-1] = (undefined4 *)0x100014d92;
    lVar17 = (*pcVar43)(((uVar23 ^ 0xd4) * 7 ^ uVar58 ^ 0x2a0cb) + uVar12);
    iVar42 = *(int *)(pcVar13 + (long)(int)(uVar32 + (lVar17 == 0)) * 4);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x140) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100014dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_100014d57 + iVar42))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100014d68:
    *(uint *)UNRECOVERED_JUMPTABLE_08 = *(int *)UNRECOVERED_JUMPTABLE_08 + uVar12;
    *(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x2b0e7e27) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x2b0e7e27) + (char)cVar20);
    *UNRECOVERED_JUMPTABLE_08 = (code)((char)*UNRECOVERED_JUMPTABLE_08 + (char)cVar10);
    UNRECOVERED_JUMPTABLE_05[(long)UNRECOVERED_JUMPTABLE_07 * 4 + 0x24] =
         (code)((char)UNRECOVERED_JUMPTABLE_05[(long)UNRECOVERED_JUMPTABLE_07 * 4 + 0x24] +
               (char)cVar10);
    UNRECOVERED_JUMPTABLE_05 = (code *)swi(0);
    pcVar16 = (char *)(*UNRECOVERED_JUMPTABLE_05)();
    *pcVar16 = *pcVar16 + (char)pcVar16;
    *(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0x29) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0x29) + (char)pcVar16);
    UNRECOVERED_JUMPTABLE_05 = (code *)swi(3);
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_05)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100015170:
    pcVar48 = (code *)((long)UNRECOVERED_JUMPTABLE_04 + (long)UNRECOVERED_JUMPTABLE_07 * 2 + 0x48);
    *(uint *)pcVar48 = *(uint *)pcVar48 & uVar21;
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0xe8) = uVar23;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xb8) = UNRECOVERED_JUMPTABLE_07;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xd0) = UNRECOVERED_JUMPTABLE_07;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xd8) = UNRECOVERED_JUMPTABLE_07;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -200) = UNRECOVERED_JUMPTABLE_07;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0xc0) = UNRECOVERED_JUMPTABLE_07;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x50) = 0x18646b13513134f3;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x78) = ppuVar53;
    uVar32 = uVar32 + 0x2c | 0x81;
    lVar17 = CONCAT44(uRam000000003165f9b7,iRam000000003165f9b3);
    *(undefined1 *)(lVar17 + (ulong)(uVar12 + 0xb5fe3479)) = 0;
    *(undefined1 *)(lVar17 + (ulong)(uVar12 + 0xb5fe347a)) = 0;
    UNRECOVERED_JUMPTABLE_04 = (undefined **)(ulong)(uVar12 + 0xb5fe347b);
    *(code *)((long)UNRECOVERED_JUMPTABLE_04 + lVar17) = (code)0x0;
    *(undefined1 *)(lVar17 + (ulong)(uVar12 + 0xb5fe347c)) = 1;
    *(uint **)(UNRECOVERED_JUMPTABLE_05 + -0x150) = puVar57;
    *puVar57 = *puVar57 + (uVar32 ^ 0xb5);
    uVar23 = 1;
    goto code_r0x00010001a1d2;
  case (code *)0x1000151be:
    *(int *)((long)UNRECOVERED_JUMPTABLE_07 + -0x73) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_07 + -0x73) + -1;
    pcVar33[-0x77] = (code)((byte)pcVar33[-0x77] | (byte)cVar20);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000151f7:
    *(int *)(UNRECOVERED_JUMPTABLE_08 + -0x77) = *(int *)(UNRECOVERED_JUMPTABLE_08 + -0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100015328:
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xa8) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x88);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xf0) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x68);
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x108) = UNRECOVERED_JUMPTABLE_08;
    UNRECOVERED_JUMPTABLE_05 = (code *)FUN_10001c9f5();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100015348:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000154e6:
    *(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x77) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x77) + (char)cVar10);
  case (code *)0x1000154e9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000154f9:
    uVar31 = (uVar28 ^ 0xb6763bde) + (uVar28 & 0x36763bde) * 2 + 0x8597453e;
    bVar61 = uVar31 < CONCAT31(uVar6,0xb3);
    bVar44 = uVar23 < uVar31;
    if ((bool)cVar9 != bVar61) {
      bVar44 = bVar61;
    }
                    /* WARNING: Could not recover jumptable at 0x000100015552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar33 + *(int *)(pcVar13 + (long)(int)(bVar44 + uVar32) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000156d6:
    iVar42 = ((int)CONCAT71(uVar19,(char)cVar10 + 0x76U + (uVar12 < *(uint *)(param_1 + -0x73))) ==
             uVar28 + 0x5aed9720) + uVar23;
    lVar17 = (long)(int)*(uint *)((long)ppuVar47 + (long)iVar42 * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000156cc + lVar17))
                           (ppuVar47,iVar42,&DAT_1000156cc + lVar17,lVar17,ppuVar47);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100015890:
                    /* WARNING: Could not recover jumptable at 0x0001000158ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)ppuVar47 +
                           (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                                      [(int)((uVar31 & 0xf3) + uVar12)]))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000158b6:
    iVar42 = *(int *)(*(undefined8 **)(UNRECOVERED_JUMPTABLE_05 + -0x50) + 1);
    uVar14 = **(undefined8 **)(UNRECOVERED_JUMPTABLE_05 + -0x50);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x60) = 0x5a793496016ebe8;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x88) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xa8);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xa0) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xb8);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xe8) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x78);
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x100) = UNRECOVERED_JUMPTABLE_08;
    UNRECOVERED_JUMPTABLE_05 =
         (code *)switchD_100020322::caseD_1b465
                           (*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x78),
                            (uVar58 ^ 0xdfed26c6) + iVar42,uVar14,&DAT_100016d19);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100015a8e:
                    /* WARNING: Could not recover jumptable at 0x000100015a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(ulong)(uVar23 + uVar12))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100015d5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100015f2a:
    *(int *)(UNRECOVERED_JUMPTABLE_08 + 1) = *(int *)(UNRECOVERED_JUMPTABLE_08 + 1) + -1;
    return UNRECOVERED_JUMPTABLE_08;
  case (code *)0x100016123:
    uVar21 = uVar21 + 0x93d6b280;
    bVar44 = uVar21 < uVar8 + 0x117b257c;
    uVar24 = (uint)bVar44;
    if (*(int *)(pcVar50 + (long)UNRECOVERED_JUMPTABLE_07) + 0xf1684c0cU < 0x117b25b7 == bVar44) {
      uVar24 = (uint)(*(int *)(pcVar50 + (long)UNRECOVERED_JUMPTABLE_07) + 0xf1684c0cU < uVar21);
    }
code_r0x000100016161:
    iVar42 = *(int *)((long)ppuVar53 + (long)(int)((uVar24 & 0xff) + uVar55) * 4);
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x50) = 0x3165f993;
                    /* WARNING: Could not recover jumptable at 0x000100016184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(switchD_100016e66::caseD_16100 + iVar42))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016179:
    *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 1) + -1
    ;
    goto code_r0x000100016161;
  case (code *)0x100016188:
    UNRECOVERED_JUMPTABLE_05[-0x7f] = (code)((byte)UNRECOVERED_JUMPTABLE_05[-0x7f] ^ bVar62);
    return UNRECOVERED_JUMPTABLE_08;
  case (code *)0x10001626a:
    uVar31 = uVar39 + *(uint *)(param_1 + 100);
    uVar15 = (ulong)(uVar31 + bVar61);
    UNRECOVERED_JUMPTABLE_08[-0x77] =
         (code)(((char)UNRECOVERED_JUMPTABLE_08[-0x77] + '\r') -
               (CARRY4(uVar39,*(uint *)(param_1 + 100)) || CARRY4(uVar31,(uint)bVar61)));
    *(ulong *)(uVar15 - 0xf0) = (ulong)*(uint *)(uVar15 - 0x68);
                    /* WARNING: Could not recover jumptable at 0x000100016282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_08)();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016671:
                    /* WARNING: Could not recover jumptable at 0x0001000166a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10001666c +
                           *(int *)(pcVar33 +
                                   (long)(int)(uVar12 + (*(long *)(*(long *)(
                                                  UNRECOVERED_JUMPTABLE_05 + -0x50) +
                                                  -0x18646b13513134f3) == 0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000166b1:
                    /* WARNING: Could not recover jumptable at 0x0001000166eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000166ab +
                           *(int *)((long)ppuVar53 +
                                   (long)(int)(uVar32 * 7 +
                                              (uint)(UNRECOVERED_JUMPTABLE_04[-0xb4f2692c02dd7d] ==
                                                    (undefined *)0x0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000167e6:
    UNRECOVERED_JUMPTABLE_08 = UNRECOVERED_JUMPTABLE_08 + -0x73;
    cVar60 = *UNRECOVERED_JUMPTABLE_08;
    *UNRECOVERED_JUMPTABLE_08 = (code)((char)*UNRECOVERED_JUMPTABLE_08 + (char)cVar20);
    UNRECOVERED_JUMPTABLE_08 =
         (code *)(ulong)((uVar12 - 0x48) + (uint)CARRY1((byte)cVar60,(byte)cVar20));
  case (code *)0x1000167b5:
    *UNRECOVERED_JUMPTABLE_08 =
         (code)((char)*UNRECOVERED_JUMPTABLE_08 + (char)UNRECOVERED_JUMPTABLE_08);
    *UNRECOVERED_JUMPTABLE_08 =
         (code)((char)*UNRECOVERED_JUMPTABLE_08 + (char)UNRECOVERED_JUMPTABLE_08);
    pcVar43 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x90);
    ppuVar37[-1] = (undefined4 *)0x1000167d7;
    lVar17 = (*pcVar43)((iVar42 + 0x11U ^ uVar58 ^ 0x570 ^ 0x484b40da) +
                        (int)UNRECOVERED_JUMPTABLE_08);
    iVar42 = *(int *)(pcVar13 + (long)(int)(uVar55 + (lVar17 == 0)) * 4);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x120) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001680a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000167a6 + iVar42))
                           (*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x68));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016a8d:
    uVar31 = uVar39 + *(uint *)(param_1 + 100);
    pcVar16 = (char *)((ulong)(uVar31 + bVar61) - 0x77);
    *pcVar16 = (*pcVar16 - (char)cVar20) -
               (CARRY4(uVar39,*(uint *)(param_1 + 100)) || CARRY4(uVar31,(uint)bVar61));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100016c37:
    *(uint *)((long)ppuVar37 + (long)UNRECOVERED_JUMPTABLE_08) = uVar23;
    ppuVar37[-1] = (undefined4 *)0x100016c40;
    (*pcVar50)(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100016c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(&DAT_1006d13e0 +
                                          (long)(int)(uVar55 + (*(long *)(UNRECOVERED_JUMPTABLE_05 +
                                                                         -0x48) == 0)) * 4) +
                           0x100016c4e))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100016f8f:
    if ((long)pcVar43 >= 0) {
      UNRECOVERED_JUMPTABLE_08[-0x73] = (code)((char)UNRECOVERED_JUMPTABLE_08[-0x73] + (char)cVar20)
      ;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100017021:
                    /* WARNING: Could not recover jumptable at 0x000100017043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(&DAT_1006d13e0 +
                                          (ulong)((int)CONCAT71(iVar30,bVar63) + 5) * 4) +
                           0x10001701c))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000171cc:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_07 + in_GS_OFFSET) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_07 + in_GS_OFFSET) ^ uVar21;
                    /* WARNING: Could not recover jumptable at 0x0001000171d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*UNRECOVERED_JUMPTABLE_08)();
    return UNRECOVERED_JUMPTABLE_05;
  case FUN_10001780a:
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x50) = UNRECOVERED_JUMPTABLE_08;
    UNRECOVERED_JUMPTABLE_05 =
         (code *)switchD_100020322::caseD_18d74
                           (uVar41 ^ 0x76,((ulong)pcVar50 ^ 0xffffffee) & (ulong)ppuVar53,
                            *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x138));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100017e72:
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x60) = 0x5a793496016ebe8;
                    /* WARNING: Could not recover jumptable at 0x000100017e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)UNRECOVERED_JUMPTABLE_07 + (ulong)(uVar12 | 0xffffff98)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000181b5:
    *(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x7f) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x7f) + (char)cVar10);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case (code *)0x100018260:
                    /* WARNING: Could not recover jumptable at 0x00010001828d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10001825d +
                           *(int *)((long)(int)(uVar55 + (pcVar13 == (code *)0x0)) * 4 + 0x3165f9b3)
                           ))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001827a:
    *(uint *)(UNRECOVERED_JUMPTABLE_08 + -0x73) = *(uint *)(UNRECOVERED_JUMPTABLE_08 + -0x73) | 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001833b:
    UNRECOVERED_JUMPTABLE_07 =
         (undefined **)(ulong)*(uint *)((long)ppuVar37 + (long)UNRECOVERED_JUMPTABLE_08 * 4);
    puVar27 = &DAT_100018309;
    goto code_r0x000100018345;
  case (code *)0x10001833f:
    puVar27 = (undefined *)0x18309;
code_r0x000100018345:
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x60) = 0x5a793496016ebe8;
                    /* WARNING: Could not recover jumptable at 0x00010001835e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)UNRECOVERED_JUMPTABLE_07 + (long)puVar27))
                           (0x3165f9b2,pcVar43,0x5a793496016ebe8);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100018455:
                    /* WARNING: Could not recover jumptable at 0x000100018464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0x10001842a))
                           (ppuVar47,pcVar43,(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0x10001842a))
    ;
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000185e9:
                    /* WARNING: Could not recover jumptable at 0x00010001863b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_1000185de +
                           *(int *)((long)(int)(((uVar41 + 0xac6b660b & uVar21 * 2 ^ (uVar49 | 0x10)
                                                 ^ 0xa0006611) + (uVar21 ^ 0xa777844d) == 0x5635b30f
                                                ) + uVar41) * 4 + 0x3165f9b3)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100018923:
    if (UNRECOVERED_JUMPTABLE_07 == (undefined **)0x1 || !bVar63) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar62 = uVar12 < *(uint *)ppuVar47;
    UNRECOVERED_JUMPTABLE_05 = (code *)swi(0x40);
    iVar42 = (*UNRECOVERED_JUMPTABLE_05)((code *)((long)ppuVar47 + (ulong)bVar59 * -8 + 4));
    iVar42 = iVar42 + -0x1a7ebe38 + (uint)bVar62;
    out(extraout_DX,iVar42);
    param_1 = param_1 + 0x14401e0;
    *(uint *)param_1 = *(uint *)param_1 << 0x18 | *(uint *)param_1 >> 8;
                    /* WARNING: Could not recover jumptable at 0x0001000189ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&LAB_100018982 + *(int *)((long)ppuVar53 + (long)iVar42 * 4)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100018b4d:
    pcVar13 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x90);
    ppuVar37[-1] = (undefined4 *)0x100018b60;
    lVar17 = (*pcVar13)((uVar58 ^ uVar32 ^ 0xd450648) + uVar12);
    uVar31 = (&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar54 + (lVar17 == 0))];
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x148) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100018b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_100018b37 + (int)uVar31))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100018bb9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100018cc1:
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x160) = ppuVar53;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x188) = pcVar13 + 8;
    iVar42 = *(int *)((long)(int)(uVar28 + (pcVar13 == (code *)0x0)) * 4 + 0x3165f9b3);
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + -0xb8) = (ulong)uVar41;
                    /* WARNING: Could not recover jumptable at 0x000100018d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&LAB_100018cc2 + iVar42))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x1000191c6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100019456:
                    /* WARNING: Could not recover jumptable at 0x000100019486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(**(code **)((long)puVar57 +
                             (long)(int)(((byte)cVar20 ^
                                         (&DAT_1006d1a30)
                                         [(byte)*(code *)(UNRECOVERED_JUMPTABLE_07 + 0x200da16e) ^
                                          99]) - 0x32) * 8))(UNRECOVERED_JUMPTABLE_08);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100019848:
    *UNRECOVERED_JUMPTABLE_08 = (code)((char)*UNRECOVERED_JUMPTABLE_08 + (char)cVar10);
    *UNRECOVERED_JUMPTABLE_08 = (code)((char)*UNRECOVERED_JUMPTABLE_08 + (char)cVar10);
    uVar31 = uVar58 * 2 + 0x645ac81c;
    uVar31 = (uVar31 << ((char)uVar32 + 0x5fU & 0x1f) & 0xfbef3fec) + (uVar31 ^ 0x7df79ff6) +
             0xa372921;
    bVar44 = uVar12 < uVar31;
    if (uVar12 < 0x882ec917 != uVar31 < 0x882ec917) {
      bVar44 = uVar31 < 0x882ec917;
    }
                    /* WARNING: Could not recover jumptable at 0x0001000198b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(pcVar43 + *(int *)((long)(int)(bVar44 + uVar55) * 4 + 0x3165f9b3)))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100019852:
    *(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0xf) = cVar10;
    param_1 = param_1 + -0x73;
    *param_1 = (code)((char)*param_1 << 4 | (byte)*param_1 >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000199aa:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)(UNRECOVERED_JUMPTABLE_05 + -0x30)) {
      return (code *)(ulong)(uVar58 + 0xce995683);
    }
                    /* WARNING: Subroutine does not return */
    ppuVar37[-1] = (undefined4 *)&UNK_1000160b2;
    ___stack_chk_fail();
  case (code *)0x100019b0b:
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x68) = pcVar50;
    UNRECOVERED_JUMPTABLE_05 =
         (code *)((long)*(int *)(pcVar13 +
                                (long)(int)(((int)uVar49 <
                                            (int)((uVar52 ^ 0x3166a970) +
                                                 (uVar52 + 0x20b5d007 & 0xdf4a2fff))) + uVar52) * 4)
                 + 0x100019b0b);
                    /* WARNING: Could not recover jumptable at 0x000100019b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*UNRECOVERED_JUMPTABLE_05)
                           (ppuVar47,pcVar43,UNRECOVERED_JUMPTABLE_05,
                            (long)*(int *)(pcVar13 +
                                          (long)(int)(((int)uVar49 <
                                                      (int)((uVar52 ^ 0x3166a970) +
                                                           (uVar52 + 0x20b5d007 & 0xdf4a2fff))) +
                                                     uVar52) * 4),pcVar13);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100019ea0:
    *UNRECOVERED_JUMPTABLE_08 = (code)((char)*UNRECOVERED_JUMPTABLE_08 + (char)cVar10);
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x48) = UNRECOVERED_JUMPTABLE_08;
    ppuVar37[-1] = (undefined4 *)0x100019ea9;
    lVar17 = (*(code *)ppuVar53)();
    **(long **)(UNRECOVERED_JUMPTABLE_05 + -0x48) = lVar17;
                    /* WARNING: Could not recover jumptable at 0x000100019ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(switchD_100017043::caseD_0 + *(int *)(pcVar13 + (ulong)((lVar17 == 0) + 2) * 4))
                 )();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x100019f5b:
  case (code *)0x100019ef9:
    *(int *)((long)UNRECOVERED_JUMPTABLE_04 + -0x77) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_04 + -0x77) + -1;
    **(undefined4 **)(UNRECOVERED_JUMPTABLE_05 + -0x180) =
         (int)*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xc0);
    iVar42 = *(int *)ppuVar53;
    uVar31 = uVar58 - 0x67 | 0x68;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0xa0) = param_1;
    lVar17 = *(long *)(param_1 + (long)puVar57);
    lVar18 = (*(long *)(UNRECOVERED_JUMPTABLE_05 + -0x1a0) -
             (*(long *)(UNRECOVERED_JUMPTABLE_05 + -0x1a0) * 2 & 0x681f333462e1d3ccU)) +
             (ulong)uVar31 + -0x4bf06665ce8f1685;
    lVar29 = ((ulong)(iVar42 + 0xb5fe3479) * 2 & 0x13fbffd7a) +
             ((ulong)(iVar42 + 0xb5fe3479) ^ 0x2efa9f7d9fdffebd) + 0xd105608260200143;
    *(byte *)(lVar17 + lVar29) = (byte)((ulong)lVar18 >> 0x38) ^ 0xb4;
    *(byte *)(lVar17 + 1 + lVar29) = (byte)((ulong)lVar18 >> 0x30) ^ 0xf;
    *(byte *)(lVar17 + 2 + lVar29) = (byte)((ulong)lVar18 >> 0x28) ^ 0x99;
    *(byte *)(lVar17 + 3 + lVar29) = (byte)((ulong)lVar18 >> 0x20) ^ 0x9a;
    *(byte *)(lVar17 + 4 + lVar29) = (byte)((ulong)lVar18 >> 0x18) ^ 0x31;
    *(byte *)(lVar17 + 5 + lVar29) = (byte)((ulong)lVar18 >> 0x10) ^ 0x70;
    *(byte *)(lVar17 + 6 + lVar29) = (byte)((ulong)lVar18 >> 8) ^ 0xe9;
    *(byte *)(lVar17 + 7 + lVar29) = (byte)lVar18 ^ 0xe6;
    *(undefined ***)(UNRECOVERED_JUMPTABLE_05 + -0x78) = ppuVar53;
    *(int *)ppuVar53 = *(int *)ppuVar53 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010001a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(pcVar13 + (long)(int)(uVar31 + 1) * 4) + 0x10001a00b))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001a054:
                    /* WARNING: Could not recover jumptable at 0x00010001a08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&UNK_10001a031 +
                           *(int *)(pcVar13 +
                                   (long)(int)(((uVar49 & uVar41 ^ uVar58 ^ 0xa0006614) +
                                                (uint)(byte)cVar60 == 0x5635b30f) + uVar58) * 4)))()
    ;
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001a0ad:
    out(0x81,uVar12);
    uVar31 = *(uint *)(UNRECOVERED_JUMPTABLE_08 + 0x1222560);
    pcVar13 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x80);
    ppuVar37[-1] = (undefined4 *)&UNK_10001a0b9;
    lVar17 = (*pcVar13)(ppuVar47,pcVar43,
                        ((ulong)uVar28 << 0x20 | (ulong)UNRECOVERED_JUMPTABLE_08) % (ulong)uVar31);
    uVar31 = (&switchD_100019e65::switchdataD_1006d1710)[(int)(uVar32 + (lVar17 == 0))];
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x128) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001a0e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_10001a08f + (int)uVar31))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001a1cc:
    pcVar43 = (code *)(ulong)(uVar32 - 0x8b);
code_r0x00010001a1d2:
                    /* WARNING: Could not recover jumptable at 0x00010001a1ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)((long)*(int *)(pcVar13 + (long)(int)((uVar23 & 1) + uVar32) * 4) +
                           0x10001a1cb))
                           (ppuVar47,pcVar43,UNRECOVERED_JUMPTABLE_04,
                            (code *)((long)*(int *)(pcVar13 + (long)(int)((uVar23 & 1) + uVar32) * 4
                                                   ) + 0x10001a1cb),pcVar13);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001a45f:
    if ((POPCOUNT((ulong)pcVar43 & 0xff) & 1U) != 0) {
      ppuVar47 = (undefined **)(ulong)(uVar32 - 3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010001a4a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&DAT_10001a45d +
                           *(int *)(pcVar13 +
                                   (long)(int)(((uVar49 + uVar45 + 1 & 3) == 0) + 0x3165f9b3) * 4)))
                           (ppuVar47);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001a58f:
    goto switchD_1000139a1_caseD_1a58f;
  case (code *)0x10001ab64:
    LOCK();
    cVar60 = UNRECOVERED_JUMPTABLE_05[-0x1e81a266];
    UNRECOVERED_JUMPTABLE_05[-0x1e81a266] = cVar20;
    UNLOCK();
    pbVar1 = (byte *)((ulong)CONCAT31(uVar7,cVar60) + 0x1947c7e3);
    *pbVar1 = *pbVar1 ^ (byte)cVar10;
    ppuVar37[-1] = (undefined4 *)0xffffffffffffffc2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001ac95:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001aef4:
    pcVar13 = *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x80);
    ppuVar37[-1] = (undefined4 *)0x10001af09;
    lVar17 = (*pcVar13)((uVar58 ^ uVar12 * 10 ^ 0x804ce42a) + uVar28);
    uVar31 = (&switchD_100019e65::switchdataD_1006d1710)[(int)(uVar54 + (lVar17 == 0))];
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x148) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001af3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_10001aee0 + (int)uVar31))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001b0bb:
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x78) = uVar23;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x98) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xe0);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0xf0) =
         *(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + -0x50);
    *(code **)(UNRECOVERED_JUMPTABLE_05 + -0x108) = UNRECOVERED_JUMPTABLE_08;
    UNRECOVERED_JUMPTABLE_05 = (code *)switchD_100020322::caseD_18d74();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001b123:
    *(uint *)(UNRECOVERED_JUMPTABLE_08 + -0x73) = *(uint *)(UNRECOVERED_JUMPTABLE_08 + -0x73) | 0xd;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001b219:
    ppuVar37[-1] = (undefined4 *)0x10001b21e;
    lVar17 = (*(code *)ppuVar53)();
    bVar61 = lVar17 == 0;
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_08;
switchD_100020322_caseD_1b225:
    iVar42 = *(int *)(pcVar13 + (long)(int)(uVar58 + bVar61) * 4);
    *(uint *)(UNRECOVERED_JUMPTABLE_05 + -0x58) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x00010001b24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_10001b201 + iVar42))();
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001b225:
    goto switchD_100020322_caseD_1b225;
  case (code *)0x10001b750:
    cVar60 = *(code *)(UNRECOVERED_JUMPTABLE_07 + 0x916980);
    pcVar13 = (code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x7d);
    *(uint *)pcVar13 = *(uint *)pcVar13 >> 1 | (uint)((*(uint *)pcVar13 & 1) != 0) << 0x1f;
    lVar18 = *(long *)UNRECOVERED_JUMPTABLE_05;
    *(undefined ***)(lVar18 + -0xa0) = UNRECOVERED_JUMPTABLE_07;
    uVar14 = *(undefined8 *)(lVar18 + -0x110);
    *(ulong *)(lVar18 + -0xa8) = CONCAT71(uVar19,(byte)cVar10 ^ (byte)cVar60);
    uVar26 = *(undefined8 *)(lVar18 + -0xa8);
    *(undefined8 *)UNRECOVERED_JUMPTABLE_05 = 0x10001b77e;
    lVar17 = (*pcVar33)(uVar14,uVar26,0);
    uVar31 = (&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar54 + (lVar17 == 0))];
    *(undefined8 *)(lVar18 + -0x88) = *(undefined8 *)(lVar18 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010001b7c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 = (code *)(*(code *)(&DAT_10001b73c + (int)uVar31))(ppuVar53);
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001b76a:
    *(int *)(UNRECOVERED_JUMPTABLE_08 + -0x77) = *(int *)(UNRECOVERED_JUMPTABLE_08 + -0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001b850:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10001b9e7:
                    /* WARNING: Could not recover jumptable at 0x00010001ba02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_05 =
         (code *)(*(code *)(&LAB_10001b9c2_1 +
                           *(int *)((long)(int)(uVar12 + bVar61) * 4 + 0x3165f9b3)))
                           (0x3165f9b3,pcVar43,
                            &LAB_10001b9c2_1 +
                            *(int *)((long)(int)(uVar12 + bVar61) * 4 + 0x3165f9b3));
    return UNRECOVERED_JUMPTABLE_05;
  case (code *)0x10001bc9e:
    UNRECOVERED_JUMPTABLE_08[0xf] = (code)((byte)UNRECOVERED_JUMPTABLE_08[0xf] | (byte)cVar10);
    return (code *)CONCAT71(uVar19,(byte)cVar10 ^
                                   (byte)*(code *)(UNRECOVERED_JUMPTABLE_07 + 0x200da1ae));
  case (code *)0x10001bcce:
    *UNRECOVERED_JUMPTABLE_08 = (code)((char)*UNRECOVERED_JUMPTABLE_08 + (char)cVar10);
    return (code *)(ulong)(byte)(bVar44 ^ (&DAT_1006d0d70)[(byte)(&DAT_1006cfe50)[bVar44] ^ 0x2c]);
  case (code *)0x10001bd90:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x0001000120ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_05 =
       (code *)(*UNRECOVERED_JUMPTABLE_08)
                         (ppuVar47,pcVar43,UNRECOVERED_JUMPTABLE_04,UNRECOVERED_JUMPTABLE_07,pcVar33
                          ,puVar51);
  return UNRECOVERED_JUMPTABLE_05;
}

