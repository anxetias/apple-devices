// name: FUN_100010ac0
// address: 100010ac0

/* WARNING: Instruction at (ram,0x00010000e2bf) overlaps instruction at (ram,0x00010000e2b9)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_100010ac0(undefined8 param_1,undefined **param_2,ulong param_3,undefined **param_4,ulong param_5
             )

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined3 uVar5;
  undefined3 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  code *pcVar9;
  byte bVar10;
  code cVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  code cVar18;
  uint uVar19;
  code *UNRECOVERED_JUMPTABLE_04;
  ulong uVar20;
  byte bVar21;
  int iVar22;
  code *UNRECOVERED_JUMPTABLE_03;
  undefined7 uVar24;
  byte bVar26;
  code cVar29;
  undefined **ppuVar28;
  undefined6 uVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined8 *puVar36;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *unaff_RBP;
  bool bVar41;
  uint uVar42;
  undefined *puVar43;
  undefined **ppuVar44;
  undefined8 uVar45;
  undefined **ppuVar46;
  uint uVar47;
  uint *puVar48;
  bool bVar49;
  undefined **ppuVar50;
  uint uVar51;
  uint *puVar52;
  uint uVar53;
  uint uVar54;
  undefined **ppuVar55;
  undefined **ppuVar56;
  undefined **ppuVar57;
  uint uVar58;
  code *UNRECOVERED_JUMPTABLE_07;
  long in_GS_OFFSET;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  char cVar62;
  char cVar63;
  undefined1 auVar64 [16];
  undefined8 in_stack_00000020;
  undefined1 auStack_257 [55];
  undefined *apuStack_220 [4];
  int local_200 [2];
  undefined8 local_1f8;
  undefined4 *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined **local_1d8;
  undefined **ppuStack_1d0;
  int *piStack_1c8;
  undefined **ppuStack_1c0;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b0;
  int *piStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined4 *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  int *piStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **UNRECOVERED_JUMPTABLE;
  undefined8 uStack_138;
  undefined **appuStack_130 [3];
  int *piStack_118;
  ulong local_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  long local_38;
  uint uVar23;
  undefined6 uVar25;
  uint uVar27;
  undefined8 *puVar37;
  undefined8 *puVar38;
  
  bVar10 = 0;
  puVar36 = (undefined8 *)&stack0xfffffffffffffff8;
  puVar39 = &stack0xfffffffffffffff8;
  puVar37 = (undefined8 *)&stack0xfffffffffffffff8;
  puVar38 = (undefined8 *)&stack0xfffffffffffffff8;
  puVar40 = &stack0xfffffffffffffff8;
  ppuVar31 = apuStack_220 + 3;
  ppuVar34 = apuStack_220 + 3;
  ppuVar35 = apuStack_220 + 3;
  ppuVar32 = apuStack_220 + 3;
  ppuVar16 = apuStack_220 + 3;
  UNRECOVERED_JUMPTABLE_07 = (code *)(param_5 & 0xffffffff);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar20 = (ulong)local_200 ^ DAT_10088e7f8 - _DAT_10088e808;
  _DAT_10088e808 = uVar20 * 0x79f54c43 + 0x585ffb1538078cd1;
  DAT_10088e7f8 = (uVar20 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
  uVar13 = ((uint)_DAT_10088e808 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
  ppuVar57 = &PTR__bootstrap_look_up_10082e9f0;
  local_88 = (code *)(&PTR__bootstrap_look_up_10082e9f0)
                     [(int)((byte)((byte)uVar13 ^
                                  (&DAT_1006d1d30)[(byte)(&DAT_1006d0e70)[uVar13 & 0xff] ^ 0xb7]) -
                           0xac)];
  apuStack_220[2] = (undefined1 *)0x100010b89;
  local_1f8 = param_1;
  local_1d8 = param_2;
  local_110 = param_3;
  ppuVar17 = (undefined **)(*local_88)(0x18);
  iVar22 = 0x3165f9b2;
  ppuVar33 = apuStack_220 + 3;
  ppuVar44 = ppuVar17 + 0x78c2de9d403eed6;
  switch(ppuVar17 == (undefined **)0x0) {
  case false:
switchD_100010bcf_caseD_0:
    ppuVar33 = param_4;
    *ppuVar17 = (undefined *)0x0;
    ppuVar17[1] = (undefined *)0xa9403683677ab7f;
    *(uint *)(ppuVar17 + 2) = 0;
    apuStack_220[2] = (undefined1 *)0x10000d1f6;
    ppuStack_50 = ppuVar44;
    puVar15 = (undefined *)(*local_88)(0x1000);
    ppuVar55 = ppuStack_50;
    puVar4 = apuStack_220[3];
    *ppuVar17 = puVar15;
    puVar43 = PTR__free_10082eaf0;
    UNRECOVERED_JUMPTABLE_03 = (code *)PTR__free_10082eaf0;
    switch(puVar15 == (undefined *)0x0) {
    case false:
      ppuStack_108 = (undefined **)UNRECOVERED_JUMPTABLE_07;
      uStack_70 = (code *)PTR__free_10082eaf0;
      UNRECOVERED_JUMPTABLE_07 = (code *)0x2;
      uVar13 = 0xdf;
      param_4 = (undefined **)0xdf;
      *(uint *)(ppuVar17 + 1) = 0x3677bb7f;
      pcVar9 = _UNK_10082faf0;
      iVar22 = 0;
      ppuStack_e8 = ppuVar44;
      ppuStack_e0 = ppuVar44;
      ppuStack_f8 = ppuVar44;
      ppuStack_68 = (undefined **)0x650a959f740c42c3;
      uStack_f0 = 0x650a959f740c42c3;
      uStack_d0 = 0x650a959f740c42c3;
      pcStack_a8 = (code *)0x650a959f740c42c3;
      uStack_d8 = 0x650a959f740c42c3;
      uStack_c8 = 0x650a959f740c42c3;
      ppuStack_1d0 = ppuVar33;
      switch(ppuVar17 == (undefined **)0x0) {
      case true:
switchD_10000f016_caseD_1:
                    /* WARNING: Could not recover jumptable at 0x0001000102d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar16 = (undefined **)
                   (*(code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)[iVar22 + 0xdf]
                             + 0x1000102aa))();
        return ppuVar16;
      }
code_r0x00010000e269:
      uVar58 = (uint)UNRECOVERED_JUMPTABLE_07 | 4;
      UNRECOVERED_JUMPTABLE_07 = (code *)(ulong)uVar58;
      puVar52 = (uint *)((long)ppuVar17 + 0xc);
      uVar47 = *(uint *)(ppuVar17 + 1);
      ppuVar56 = (undefined **)(ulong)uVar47;
      uVar12 = *(uint *)((long)ppuVar17 + 0xc);
      UNRECOVERED_JUMPTABLE = (undefined **)(ulong)uVar12;
      uVar42 = uVar58 + 0xf9307918;
      bVar59 = uVar12 + 0xee9c75ba < uVar42;
      puVar48 = (uint *)(ulong)bVar59;
      uVar5 = (undefined3)(uVar42 >> 8);
      bVar41 = uVar47 + 0xc2b8cd9f < uVar42 != bVar59;
      uVar42 = CONCAT31(uVar5,bVar41);
      ppuVar46 = (undefined **)(ulong)uVar42;
      ppuVar50 = (undefined **)(ulong)(uVar47 + 0xc2b8cd9f < uVar12 + 0xee9c75ba);
      bVar61 = !bVar41;
      goto switchD_10000e2c3_caseD_e2a9;
    case true:
switchD_10000d217_caseD_1:
      iVar22 = 0x3165f9b2;
      ppuVar33 = apuStack_220 + 3;
      switch(ppuVar17 == (undefined **)0x0) {
      case false:
        apuStack_220[2] = (undefined *)0x10000dd19;
        (*UNRECOVERED_JUMPTABLE_03)(ppuVar17);
        ppuVar16 = (undefined **)switchD_100010bcf::caseD_1();
        return ppuVar16;
      }
    }
  }
code_r0x00010000f06f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (undefined **)(ulong)(iVar22 + 0xce995683);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppuVar33 + -8) = &UNK_1000104a2;
  ___stack_chk_fail();
switchD_10000e2c3_caseD_c377:
                    /* WARNING: Could not recover jumptable at 0x00010000c390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar16 = (undefined **)
             (*(code *)((long)UNRECOVERED_JUMPTABLE_03 +
                       (long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                  [(int)(uVar58 + 0xe7443798 + (int)ppuVar50)]))();
  return ppuVar16;
switchD_10000e2c3_caseD_e2a9:
  uVar53 = (uint)bVar59;
  if (!bVar61) {
    ppuVar50 = (undefined **)(ulong)uVar53;
  }
  bVar49 = SUB81(ppuVar50,0);
  uVar7 = (uint)ppuVar50;
  uVar19 = (&switchD_10000d217::switchdataD_1006d07b0)[uVar7 + uVar58];
  UNRECOVERED_JUMPTABLE_04 = (code *)(long)(int)uVar19;
  UNRECOVERED_JUMPTABLE_03 = switchD_10000f016::caseD_0;
switchD_10000e2c3_caseD_e2c0:
  bVar60 = CARRY8((ulong)UNRECOVERED_JUMPTABLE_03,(ulong)UNRECOVERED_JUMPTABLE_04);
  cVar63 = SCARRY8((long)UNRECOVERED_JUMPTABLE_03,(long)UNRECOVERED_JUMPTABLE_04);
  UNRECOVERED_JUMPTABLE_03 =
       (code *)((long)UNRECOVERED_JUMPTABLE_03 + (long)UNRECOVERED_JUMPTABLE_04);
  auVar8._8_8_ = UNRECOVERED_JUMPTABLE_03;
  auVar8._0_8_ = lRam00000000000000df;
  auVar64._8_8_ = UNRECOVERED_JUMPTABLE_03;
  auVar64._0_8_ = lRam00000000000000df;
  cVar62 = (long)UNRECOVERED_JUMPTABLE_03 < 0;
  bVar61 = (undefined **)UNRECOVERED_JUMPTABLE_03 == (undefined **)0x0;
  cVar11 = SUB41(uVar12,0);
  uVar6 = (undefined3)(uVar12 >> 8);
  bVar26 = (byte)ppuVar17;
  cVar29 = SUB81((ulong)ppuVar17 >> 8,0);
  uVar27 = (uint)ppuVar17;
  uVar30 = (undefined6)((ulong)ppuVar17 >> 0x10);
  cVar18 = SUB41(uVar19,0);
  uVar54 = (uint)ppuStack_50;
  bVar21 = (byte)UNRECOVERED_JUMPTABLE_03;
  uVar23 = (uint)UNRECOVERED_JUMPTABLE_03;
  uVar25 = (undefined6)((ulong)UNRECOVERED_JUMPTABLE_03 >> 0x10);
  uVar24 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_03 >> 8);
  uVar51 = (uint)puVar52;
  ppuVar28 = ppuVar17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(UNRECOVERED_JUMPTABLE_03) {
  case (code *)0xe6817fae:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100009987:
    uStack_d0 = CONCAT44(0x650a959f,uVar12);
    apuStack_220[2] = (undefined *)(ulong)((uVar53 - (uVar42 * 2 & 0xe2846fcc)) + 0xf1423742);
    appuStack_130[0] = UNRECOVERED_JUMPTABLE;
    ppuStack_e0 = ppuVar50;
    ppuStack_c0 = ppuVar50;
    switch(UNRECOVERED_JUMPTABLE < ppuVar17) {
    case false:
      apuStack_220[2] = (undefined *)0x100009a57;
      uVar13 = (*(code *)&switchD_10000d217::switchdataD_1006d07b0)();
                    /* WARNING: Could not recover jumptable at 0x000100009aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar16 = (undefined **)
                 (*(code *)(&DAT_10000a3e2 +
                           *(int *)(UNRECOVERED_JUMPTABLE_07 +
                                   (long)(int)(uVar27 + 0x81818f52 +
                                              (uint)((int)((uVar13 ^ 0xefefdfdf) +
                                                           (uint)(UNRECOVERED_JUMPTABLE < ppuVar17)
                                                           + (uVar13 & 0xefefdfdf) * 2 + 0x5afdb7d2)
                                                    < (int)(uVar27 + 0x81818f58 ^ 0x5aed972d))) * 4)
                           ))(&DAT_10000a3e2 +
                              *(int *)(UNRECOVERED_JUMPTABLE_07 +
                                      (long)(int)(uVar27 + 0x81818f52 +
                                                 (uint)((int)((uVar13 ^ 0xefefdfdf) +
                                                              (uint)(UNRECOVERED_JUMPTABLE <
                                                                    ppuVar17) +
                                                              (uVar13 & 0xefefdfdf) * 2 + 0x5afdb7d2
                                                             ) < (int)(uVar27 + 0x81818f58 ^
                                                                      0x5aed972d))) * 4),
                              (long)*(int *)(UNRECOVERED_JUMPTABLE_07 +
                                            (long)(int)(uVar27 + 0x81818f52 +
                                                       (uint)((int)((uVar13 ^ 0xefefdfdf) +
                                                                    (uint)(UNRECOVERED_JUMPTABLE <
                                                                          ppuVar17) +
                                                                    (uVar13 & 0xefefdfdf) * 2 +
                                                                   0x5afdb7d2) <
                                                             (int)(uVar27 + 0x81818f58 ^ 0x5aed972d)
                                                             )) * 4),uVar27 + 0x81818f58 ^ 6);
      return ppuVar16;
    case true:
      puVar4 = *(undefined **)((long)UNRECOVERED_JUMPTABLE_03 + 0x3683800);
      *(undefined8 *)((ulong)CONCAT31(uVar6,(char)cVar11 + 0x10) - 8) = 0x10000ad03;
      uStack_100 = ppuVar17;
      lVar14 = (*(code *)(puVar4 + -1))(ppuVar17,puVar43,appuStack_130,puVar52);
      ppuStack_1a0 = (undefined **)0x0;
      puStack_60 = (undefined *)0x6d94841a1ee4c12e;
                    /* WARNING: Could not emulate address calculation at 0x00010000ad0e */
                    /* WARNING: Treating indirect jump as call */
      ppuVar16 = (undefined **)
                 (*(code *)(&DAT_10000acca +
                           *(int *)((long)(int)((lVar14 == 0) + 0x6d07b0) * 4 + 0x155)))(0x3165f9a5)
      ;
      return ppuVar16;
    }
  case (code *)0x100009e41:
    uStack_c8 = CONCAT44(0x650a959f,uVar42);
    uVar58 = 0x740c42c3;
    apuStack_220[2] = (undefined *)0x100009e5d;
    ppuStack_180 = UNRECOVERED_JUMPTABLE;
    ppuStack_50 = (undefined **)
                  (*(code *)UNRECOVERED_JUMPTABLE)
                            (&PTR__bootstrap_look_up_10082e9f0,0x650a959f740c42c3);
    ppuVar56 = (undefined **)ppuVar17[0x65];
    apuStack_220[2] = (undefined1 *)0x100009e75;
    auVar64 = (*(code *)ppuVar56)();
    puVar43 = ppuVar17[0x47] + -0xe;
    bVar41 = auVar64._0_8_ == puVar43;
    uStack_158 = (ulong)*(int *)(&DAT_1006cf2d0 + (long)(int)(bVar41 + 0xdf) * 4);
    switch(bVar41) {
    case false:
      UNRECOVERED_JUMPTABLE =
           (undefined **)
           (ulong)(*(int *)(&DAT_1006cf2d0 + (long)(int)(bVar41 + 0xdf) * 4) + 0x7b6 +
                  (uint)(0xfffffffeffff6240 < uStack_158));
      ppuVar55 = (undefined **)&DAT_1006cf2d0;
      puVar52 = (uint *)0xe2846d99;
      puVar48 = (uint *)0xb4804515;
      ppuVar28 = (undefined **)((long)ppuVar17 << 3);
      uVar19 = 0x5690afbe;
      break;
    case true:
      ppuVar16 = (undefined **)FUN_10000fad1(0x2164ae80,puVar43,auVar64._8_8_,uStack_158);
      return ppuVar16;
    }
    goto code_r0x00010000aca0;
  case (code *)0x10000a4eb:
    uVar20 = (ulong)(apuStack_220 + 3) & 0xffffffff;
    if ((POPCOUNT((ulong)UNRECOVERED_JUMPTABLE_03 & 0xff) & 1U) != 0) {
      ppuStack_f8 = &PTR__bootstrap_look_up_10082e9f0;
      UNRECOVERED_JUMPTABLE[-1] = (undefined *)0x10000a523;
      lVar14 = (*(code *)0xdf)((uVar27 + 0x14d2d810 & 0xeb2d27df) +
                               (int)apuStack_220 + uVar42 + (uVar27 + 0xe72b361e & 0x18d4c9df) +
                               -0x7a7ffc75);
      puStack_190 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010000a557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar16 = (undefined **)
                 (*(code *)((long)(int)(&switchD_100005882::switchdataD_1006cfa50)
                                       [(int)(uVar27 + (lVar14 == 0))] + 0x10000a4ee))();
      return ppuVar16;
    }
    LOCK();
    UNRECOVERED_JUMPTABLE_03 = (code *)((long)UNRECOVERED_JUMPTABLE_03 + uVar20 * 4);
    cVar11 = *UNRECOVERED_JUMPTABLE_03;
    *UNRECOVERED_JUMPTABLE_03 = SUB81(uVar20,0);
    UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00010000a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000a55b +
                         *(int *)((long)ppuStack_50 +
                                 (long)(int)((*(long *)(*(long *)(UNRECOVERED_JUMPTABLE_04 +
                                                                 CONCAT71((int7)(uVar20 >> 8),cVar11
                                                                         ) * 8) + -3) == 0) +
                                            0x6d07b0) * 4)))();
    return ppuVar16;
  case (code *)0x10000a5fe:
    UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_04 + 99;
    *(uint *)UNRECOVERED_JUMPTABLE_04 =
         *(uint *)UNRECOVERED_JUMPTABLE_04 >> 4 | *(uint *)UNRECOVERED_JUMPTABLE_04 << 0x1c;
    LOCK();
    uVar13 = *(uint *)((long)UNRECOVERED_JUMPTABLE + -0x73);
    *(uint *)((long)UNRECOVERED_JUMPTABLE + -0x73) = uVar19;
    UNLOCK();
    puStack_60 = (undefined *)0x365cb05a40fa504d;
                    /* WARNING: Could not recover jumptable at 0x00010000a621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(CONCAT44((int)uVar19 >> 0x1f,uVar13) + (ulong)(uVar12 | 0xffffff8a)))();
    return ppuVar16;
  case (code *)0x10000a857:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000a909:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000aa7c:
                    /* WARNING: Could not recover jumptable at 0x00010000aa86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE + 0x10000aa5f))();
    return ppuVar16;
  case (code *)0x10000ab76:
    puStack_60 = (undefined *)0x365cb05a40fa504d;
    uStack_90 = 0x365cb05a40fa504d;
                    /* WARNING: Could not recover jumptable at 0x00010000ab9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000ab3b +
                         *(uint *)(&stack0xfffffffffffffff8 + (long)UNRECOVERED_JUMPTABLE * 4)))();
    return ppuVar16;
  case (code *)0x10000ac9d:
    uVar19 = uVar12 + uVar19;
    ppuVar17 = ppuVar46;
code_r0x00010000aca0:
                    /* WARNING: Could not recover jumptable at 0x00010000acc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)ppuVar56 +
                                              (long)(int)(uVar58 + (UNRECOVERED_JUMPTABLE < ppuVar55
                                                                   )) * 4) + 0x10000ac7d))
                         (puVar48,(((int)ppuVar17 + (int)puVar52) - ((uint)ppuVar28 & uVar19)) +
                                  0xebdc9a9);
    return ppuVar16;
  case (code *)0x10000acc4:
    ppuVar17 = ppuVar46;
    goto code_r0x00010000aca0;
  case (code *)0x10000acf4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000afc4:
    *(int *)((long)UNRECOVERED_JUMPTABLE + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE + 1) + -1;
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000b419:
                    /* WARNING: Could not recover jumptable at 0x00010000b420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*(UNRECOVERED_JUMPTABLE_04 + (long)UNRECOVERED_JUMPTABLE))();
    return ppuVar16;
  case (code *)0x10000b448:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000b751:
    ppuVar46[1] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010000b787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&LAB_100009052 +
                         (int)*(uint *)((long)ppuVar56 +
                                       (long)(int)(uVar27 + 0x4364332b +
                                                  (uint)(ppuVar46[3] == (undefined *)0x0)) * 4)))
                         (ppuVar46[3],ppuVar46,
                          &LAB_100009052 +
                          (int)*(uint *)((long)ppuVar56 +
                                        (long)(int)(uVar27 + 0x4364332b +
                                                   (uint)(ppuVar46[3] == (undefined *)0x0)) * 4),
                          uVar27 ^ 0xbc9bcdc7);
    return ppuVar16;
  case (code *)0x10000b83f:
                    /* WARNING: Could not recover jumptable at 0x00010000b849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(UNRECOVERED_JUMPTABLE_04 + 0x100007c57))
                         (puVar48,ppuVar46,UNRECOVERED_JUMPTABLE_04 + 0x100007c57);
    return ppuVar16;
  case (code *)0x10000b84e:
    apuStack_220[2] = (undefined *)0x10000b869;
    (*pcStack_80)(ppuStack_50[-0xaf03ac4c128336e]);
    ppuVar55[-0xaf03ac4c128336e] = (undefined *)appuStack_130[0];
    *piStack_1a8 = (int)ppuStack_e8;
    iVar22 = *piStack_118;
    puVar43 = ppuVar55[-0xaf03ac4c128336e];
    puVar43[iVar22 + 0xee6010c4] = 0;
    puVar43[iVar22 + 0xee6010c5] = 0;
    puVar43[iVar22 + 0xee6010c6] = 0;
    puVar43[iVar22 + 0xee6010c7] = 1;
    *piStack_118 = *piStack_118 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000b905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)iRam00000000000003f3 + 0x10000b8df))
                         (ppuStack_58,piStack_118,(ulong)(iVar22 + 0xee6010c7),
                          (code *)((long)iRam00000000000003f3 + 0x10000b8df),0x3166a97d);
    return ppuVar16;
  case (code *)0x10000b9a6:
                    /* WARNING: Could not recover jumptable at 0x00010000b9bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)puVar48 +
                         (long)(int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)(uVar54 + uVar12)]))(puVar48,ppuVar46,(char)(uVar12 >> 8))
    ;
    return ppuVar16;
  case (code *)0x10000baac:
                    /* WARNING: Could not recover jumptable at 0x00010000baba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*(UNRECOVERED_JUMPTABLE_04 + (uVar12 | 0xffffffe2)))();
    return ppuVar16;
  case (code *)0x10000bb6e:
    puVar48 = (uint *)((long)UNRECOVERED_JUMPTABLE_04 * 5 + -0x18);
    uVar13 = *puVar48;
    *puVar48 = *puVar48 + uVar12;
    UNRECOVERED_JUMPTABLE_04 =
         (code *)(long)(int)*(uint *)((long)puVar52 +
                                     (long)(int)(uVar12 + CARRY4(uVar13,uVar12)) * 4);
  case (code *)0x10000bb7b:
    ppuStack_68 = (undefined **)0x650a959f740c42c3;
    uStack_100 = ppuStack_78;
                    /* WARNING: Could not recover jumptable at 0x00010000bba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*(UNRECOVERED_JUMPTABLE_04 + 0x10000bb56))();
    return ppuVar16;
  case caseD_bde4:
    ppuStack_68 = (undefined **)0x650a959f740c42c3;
    uStack_f0 = 0x650a959f740c42c3;
    uStack_d0 = 0x650a959f740c42c3;
    pcStack_a8 = (code *)0x650a959f740c42c3;
    uStack_d8 = 0x650a959f740c42c3;
    uStack_c8 = 0x650a959f740c42c3;
    ppuStack_f8 = (undefined **)UNRECOVERED_JUMPTABLE_04;
    ppuStack_e8 = (undefined **)UNRECOVERED_JUMPTABLE_04;
    ppuStack_e0 = (undefined **)UNRECOVERED_JUMPTABLE_04;
    ppuVar16 = (undefined **)FUN_10001024f();
    return ppuVar16;
  case (code *)0x10000be73:
    *(int *)((long)UNRECOVERED_JUMPTABLE + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE + 1) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000beba:
    ppuStack_198 = (undefined **)((ulong)puStack_60 & 0xffffffff);
    uVar13 = 0xdf;
    ppuStack_1c0 = UNRECOVERED_JUMPTABLE;
switchD_10000a6ae_caseD_bec4:
    ppuStack_68 = (undefined **)0x650a959f740c42c3;
    goto LAB_10000de3e;
  case (code *)0x10000c008:
  case (code *)0x10000bfe6:
                    /* WARNING: Could not recover jumptable at 0x00010000c00f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000bfce +
                         (int)*(uint *)((long)ppuVar56 +
                                       (long)(int)((int)CONCAT71(uVar24,uVar23 == uVar42) + uVar12)
                                       * 4)))();
    return ppuVar16;
  case (code *)0x10000c01e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000c0f7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000c197:
    uVar13 = (0x4b8adf04 << ((char)(uVar42 - 5) + 0xb8U & 0x1f) & 0xbd7ff7bcU) + 0x13c494f0;
    bVar41 = uVar42 + uVar19 + 0x314da49 < uVar13;
    if (0xa2b0940b < uVar12 != uVar13 < 0x5d4f6bf4) {
      bVar41 = uVar13 < 0x5d4f6bf4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000c21d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000de88 +
                         (int)(&switchD_10000d217::switchdataD_1006d07b0)
                              [(int)((uint)bVar41 + (uVar42 - 5))]))();
    return ppuVar16;
  case (code *)0x10000c2f4:
    ppuVar16 = apuStack_220 + 2;
    cVar62 = '\v';
    do {
      puVar36 = puVar36 + -1;
      ppuVar16 = ppuVar16 + -1;
      *ppuVar16 = (undefined *)*puVar36;
      cVar62 = cVar62 + -1;
    } while ('\0' < cVar62);
    uVar12 = 0xd36bba85;
    UNRECOVERED_JUMPTABLE_04 = (code *)(ulong)(uVar58 ^ 0x8bab617a);
    UNRECOVERED_JUMPTABLE_03 = (code *)0x10000e263;
    apuStack_220[2] = &stack0xfffffffffffffff8;
LAB_10000c320:
    ppuVar50 = (undefined **)(ulong)(uVar12 < 0x9607c10);
    uVar42 = (int)UNRECOVERED_JUMPTABLE_04 + 0x105d3e0;
    UNRECOVERED_JUMPTABLE_07 = (code *)(ulong)(uVar42 ^ 0x7777abff);
    uVar42 = uVar42 & 0xf777abfe;
code_r0x00010000c33b:
    uVar13 = (int)UNRECOVERED_JUMPTABLE_07 + uVar42 * 2 + 0x91e8d011;
    bVar41 = uVar12 < uVar13;
    if (SUB81(ppuVar50,0) != uVar13 < 0x9607c10) {
      bVar41 = uVar13 < 0x9607c10;
    }
    ppuVar50 = (undefined **)(ulong)bVar41;
    goto switchD_10000e2c3_caseD_c377;
  case (code *)0x10000c2f6:
    UNRECOVERED_JUMPTABLE_07 = (code *)((long)ppuVar17 + (long)UNRECOVERED_JUMPTABLE_04 * 4 + -0x4b)
    ;
    *UNRECOVERED_JUMPTABLE_07 = (code)(((char)*UNRECOVERED_JUMPTABLE_07 - (char)cVar18) - bVar60);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000c328:
    UNRECOVERED_JUMPTABLE_07 = (code *)((long)UNRECOVERED_JUMPTABLE_03 + -0x73);
    *UNRECOVERED_JUMPTABLE_07 =
         (code)((char)*UNRECOVERED_JUMPTABLE_07 << 4 | (byte)*UNRECOVERED_JUMPTABLE_07 >> 4);
    if (!(bool)cVar63) {
      bVar41 = uVar53 < 0x3b484f7f;
switchD_10000c44d_caseD_1:
      uVar13 = (uint)((uint)puVar48 < uVar19);
      if (bVar41 != (bool)(char)puVar52) {
        uVar13 = (uint)puVar52;
      }
                    /* WARNING: Could not recover jumptable at 0x00010000c2eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar16 = (undefined **)
                 (*(code *)(&DAT_10000c262 +
                           *(int *)((long)(int)((uVar13 & 0xff) + uVar27) * 4 + 0xdf)))
                           (&DAT_10000c262 +
                            *(int *)((long)(int)((uVar13 & 0xff) + uVar27) * 4 + 0xdf));
      return ppuVar16;
    }
    uVar13 = *(uint *)(UNRECOVERED_JUMPTABLE_04 + 0x77abfff7);
    UNRECOVERED_JUMPTABLE_07 = (code *)((long)puVar48 + (ulong)bVar10 * -8 + 4);
    *puVar48 = uVar12;
    if ((uVar13 & 0xfee68177) != 0) {
      *(uint *)UNRECOVERED_JUMPTABLE_07 = uVar12;
      apuStack_220[2] = &UNK_10000c3b1;
      func_0x000170ae4cfd();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x00010000c33b;
  case (code *)0x10000c377:
    goto switchD_10000e2c3_caseD_c377;
  case (code *)0x10000c3ed:
    puVar48 = (uint *)0x49006c43;
  case (code *)0x10000c3c9:
                    /* WARNING: Could not recover jumptable at 0x00010000c3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000c3c5 +
                         (int)(&switchD_10000d217::switchdataD_1006d07b0)
                              [(int)((uVar7 < uVar58 + (uVar58 ^ 0x13) + 0x3166a922) + uVar58)]))
                         (puVar48,ppuVar46,
                          &DAT_10000c3c5 +
                          (int)(&switchD_10000d217::switchdataD_1006d07b0)
                               [(int)((uVar7 < uVar58 + (uVar58 ^ 0x13) + 0x3166a922) + uVar58)]);
    return ppuVar16;
  case (code *)0x10000c416:
    apuStack_220[2] = (undefined1 *)0x10000c423;
    ppuVar16 = ppuStack_50;
    lVar14 = (*local_88)();
    puVar52 = &switchD_10000d217::switchdataD_1006d07b0;
    uVar19 = (&switchD_10000d217::switchdataD_1006d07b0)[(int)((lVar14 == 0) + 0xdf)];
    bVar41 = false;
    puVar48 = (uint *)0x0;
    switch(lVar14 == 0) {
    case false:
      bVar41 = uVar19 + 0xc402 < uVar47;
      if ((bool)(char)ppuVar16 != uVar47 < 0xd49945ea) {
        bVar41 = uVar47 < 0xd49945ea;
      }
                    /* WARNING: Could not recover jumptable at 0x00010000b07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar16 = (undefined **)
                 (*(code *)((long)(int)(&switchD_100005882::switchdataD_1006cfa50)
                                       [(int)((uint)bVar41 + (int)lVar14)] + 0x3165f9b2))();
      return ppuVar16;
    }
    goto switchD_10000c44d_caseD_1;
  case (code *)0x10000c43e:
    *(int *)((long)UNRECOVERED_JUMPTABLE + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE + 1) + -1;
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000c4fa:
                    /* WARNING: Could not recover jumptable at 0x00010000c50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)puVar48 +
                         (long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                    [(int)(uVar51 + 0xe744386b)]))();
    return ppuVar16;
  case (code *)0x10000c5ea:
    ppuVar16 = ppuStack_58 + 1;
    ppuVar33 = (undefined **)*ppuStack_58;
    ppuStack_68 = (undefined **)0xdf;
    pcStack_b0 = (code *)0x650a959f740c42c3;
    ppuStack_58 = (undefined **)0xb;
                    /* WARNING: Could not emulate address calculation at 0x00010000c656 */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                     [(int)((UNRECOVERED_JUMPTABLE < ppuVar33) + 0x9030f6)] +
                         0x10000c612))
                         (*(uint *)ppuVar16 + 0xca0e627b,ppuVar33,&UNK_100012f30,
                          (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                              [(int)((UNRECOVERED_JUMPTABLE < ppuVar33) + 0x9030f6)]
                                  + 0x10000c612));
    return ppuVar16;
  case (code *)0x10000c6ef:
    uVar20 = (ulong)((uVar12 - 0x8222fc) - (uint)bVar60);
    uVar12 = 0x6d07b0;
code_r0x00010000c6f4:
    apuStack_220[2] = (undefined *)0x10000c70f;
    (*(code *)(ppuVar17[uVar20] + -1))(ppuVar57,ppuVar17[(int)(uVar12 - 0x48)] + -2);
    apuStack_220[2] = (undefined *)0x10000c723;
    (*(code *)(ppuVar17[(int)(uVar12 ^ 0x7c)] + -1))(ppuVar57);
    apuStack_220[2] = (undefined *)0x10000c745;
    ppuStack_c0 = ppuVar57;
    ppuStack_58 = (undefined **)
                  (*(code *)(ppuVar17[(int)(uVar12 - 0x53)] + -2))(ppuVar57,uStack_138);
    apuStack_220[2] = (undefined *)0x10000c75b;
    puVar43 = (undefined *)(*(code *)ppuVar17[(int)(uVar12 ^ 0x4f)])();
                    /* WARNING: Could not emulate address calculation at 0x00010000c781 */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000c6c9 +
                         (int)(&switchD_10000d217::switchdataD_1006d07b0)
                              [(int)((puVar43 == ppuVar17[(int)(uVar12 ^ 0x6d)] + -0xe) + uVar12)]))
                         ();
    return ppuVar16;
  case (code *)0x10000c797:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000c8d1:
    *puStack_1f0 = 0x740c42c3;
    puVar48 = (uint *)0x3166a97d;
    uVar13 = 1;
code_r0x00010000c8fb:
                    /* WARNING: Could not emulate address calculation at 0x00010000c903 */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                     [(int)((uVar13 & 1) + 0x82e9f0)] + 0x10000c8ea))
                         (puVar48,ppuVar46,pcStack_b8,
                          (code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                              [(int)((uVar13 & 1) + 0x82e9f0)] + 0x10000c8ea));
    return ppuVar16;
  case (code *)0x10000c8d9:
    *(int *)((long)UNRECOVERED_JUMPTABLE + -0x75) =
         *(int *)((long)UNRECOVERED_JUMPTABLE + -0x75) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000c8f3:
    in(0xf8);
    bVar10 = in((short)UNRECOVERED_JUMPTABLE_03);
    uVar13 = (uint)bVar10;
    goto code_r0x00010000c8fb;
  case (code *)0x10000ca8b:
    *(code *)puVar48 = cVar11;
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    UNRECOVERED_JUMPTABLE_04[0x5e2c1ca] =
         (code)((char)UNRECOVERED_JUMPTABLE_04[0x5e2c1ca] + (char)cVar18);
    apuStack_220[2] = (undefined *)0x10000cab0;
    lVar14 = (*pcStack_80)(uVar12 + (uVar58 - 0x26 | 0x22) + uVar23 + uVar19 * 2 + -0x6fbf8084);
                    /* WARNING: Could not recover jumptable at 0x00010000cae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000ca82 +
                         (int)(&switchD_100013a5e::switchdataD_1006d0050)
                              [(int)(uVar58 + (lVar14 == 0))]))
                         (0x3165f9b2,0,
                          &DAT_10000ca82 +
                          (int)(&switchD_100013a5e::switchdataD_1006d0050)
                               [(int)(uVar58 + (lVar14 == 0))]);
    return ppuVar16;
  case (code *)0x10000cad1:
    *(uint *)(UNRECOVERED_JUMPTABLE_04 + in_GS_OFFSET) =
         *(uint *)(UNRECOVERED_JUMPTABLE_04 + in_GS_OFFSET) ^ uVar42;
    UNRECOVERED_JUMPTABLE_07 =
         (code *)((long)ppuVar17 + in_GS_OFFSET + (long)puVar48 * 2 + -0x1d00bb8b);
    *(uint *)UNRECOVERED_JUMPTABLE_07 = *(uint *)UNRECOVERED_JUMPTABLE_07 | 0x4c1f4b59;
    uVar13 = uVar51 * 2 + 0x4b8add46;
    uVar53 = uVar13 ^ uVar53;
    uVar13 = uVar13 & 0xfa3f91dc;
    uVar47 = uVar53 + uVar13 * 2 + 0x37afb2c0;
    bVar41 = (uint)CONCAT71(uVar24,0xf9) < uVar47;
    if (uVar12 < uVar42 != uVar47 < 0xb1ef449d) {
      bVar41 = uVar47 < 0xb1ef449d;
    }
    pcStack_a8 = (code *)(ulong)(uVar53 + uVar13 * 2 + 0xdffaff80);
                    /* WARNING: Could not recover jumptable at 0x00010000cb95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)ppuVar50 +
                         (long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                    [(int)(bVar41 + 0x740c42c3)]))();
    return ppuVar16;
  case (code *)0x10000cadd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000cae0:
                    /* WARNING: Could not recover jumptable at 0x00010000cae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*UNRECOVERED_JUMPTABLE_03)();
    return ppuVar16;
  case (code *)0x10000cbec:
    ppuVar16 = (undefined **)(ulong)(uVar53 < uVar19);
    if (uVar53 < uVar23 + 0x9760401a != bVar49) {
      ppuVar16 = ppuVar50;
    }
    ppuStack_148 = (undefined **)((long)ppuStack_50 + (long)ppuVar17);
                    /* WARNING: Could not recover jumptable at 0x00010000cc3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000cb99 +
                         (int)(&switchD_10000d217::switchdataD_1006d07b0)
                              [(int)((int)ppuVar16 + uVar23)]))
                         (&DAT_10000cb99 +
                          (int)(&switchD_10000d217::switchdataD_1006d07b0)
                               [(int)((int)ppuVar16 + uVar23)]);
    return ppuVar16;
  case (code *)0x10000cd23:
    *(undefined8 *)UNRECOVERED_JUMPTABLE_07 = 0;
    *(undefined8 *)(UNRECOVERED_JUMPTABLE_07 + 8) = 0x7eca45de27b13d27;
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_07 + 0x10) = 0;
    apuStack_220[2] = (undefined *)0x10000cd48;
    lVar14 = (*pcStack_80)(0x1000);
    *(long *)UNRECOVERED_JUMPTABLE_07 = lVar14;
                    /* WARNING: Could not emulate address calculation at 0x00010000cd5e */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000cd08 +
                         (int)(&switchD_100013a5e::switchdataD_1006d0050)
                              [(int)((lVar14 == 0) + 0x6d07b0)]))();
    return ppuVar16;
  case (code *)0x10000ce15:
                    /* WARNING: Could not recover jumptable at 0x00010000ce3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10001361a +
                         (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)(uVar58 + 0xdf)]))();
    return ppuVar16;
  case (code *)0x10000cf1e:
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulong)(uVar23 + uVar19);
  case (code *)0x10000cea3:
    ppuStack_58 = (undefined **)(*(long *)((long)(int)(uVar27 - 0x89) * 8 + 0xdf) + -3);
    apuStack_220[2] = (undefined *)0x10000cec7;
    ppuStack_150 = (undefined **)puVar48;
    (*(code *)((ulong)CONCAT31(uVar6,(char)cVar11 - 0x3c) - 3))
              (puVar48,ppuStack_58,UNRECOVERED_JUMPTABLE_03);
    pcStack_b0 = (code *)0x0;
    apuStack_220[2] = (undefined *)0x10000cef6;
    lVar14 = (*(code *)(*(long *)((long)(int)(uVar27 ^ 0x8d) * 8 + 0xdf) + -2))(uStack_168,0);
                    /* WARNING: Could not recover jumptable at 0x00010000cf29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000ce3f +
                         (int)(&switchD_100013a5e::switchdataD_1006d0050)
                              [(int)(uVar27 + (lVar14 == 0))]))
                         (puStack_60,0x4469798c814565b9,
                          &DAT_10000ce3f +
                          (int)(&switchD_100013a5e::switchdataD_1006d0050)
                               [(int)(uVar27 + (lVar14 == 0))],
                          (long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                     [(int)(uVar27 + (lVar14 == 0))],ppuStack_50,
                          UNRECOVERED_JUMPTABLE_07);
    return ppuVar16;
  case (code *)0x10000cf54:
    uVar13 = *(int *)((long)UNRECOVERED_JUMPTABLE_03 + (long)UNRECOVERED_JUMPTABLE) + 0xd41f29f1;
    uVar47 = uVar27 + 0xdeb32c8c;
    bVar59 = *(int *)(ppuStack_50 + -0x78c2de9d403eed5) + 0xa83b81d6U < uVar47 != uVar13 < uVar47;
    bVar41 = uVar13 < uVar47;
    if (!bVar59) {
      bVar41 = *(int *)(ppuStack_50 + -0x78c2de9d403eed5) + 0xa83b81d6U < uVar13;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000cfb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000cf35 +
                         (int)(&switchD_10000d217::switchdataD_1006d07b0)[(int)(bVar41 + uVar27)]))
                         (CONCAT31((int3)(uVar47 >> 8),bVar59),
                          &DAT_10000cf35 +
                          (int)(&switchD_10000d217::switchdataD_1006d07b0)[(int)(bVar41 + uVar27)]);
    return ppuVar16;
  case (code *)0x10000cf64:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000d067:
    *(char *)((long)UNRECOVERED_JUMPTABLE_04 * 2) = (char)((ulong)UNRECOVERED_JUMPTABLE_03 >> 8);
  case (code *)0x10000d017:
    iVar22 = (uVar51 - ((uVar58 ^ 0x38691b4e) & uVar51 * 2)) + -0x63cb7209;
    UNRECOVERED_JUMPTABLE_04[uVar12 + 0xf56bfc98] = (code)((byte)((uint)iVar22 >> 0x18) ^ 0x9c);
    UNRECOVERED_JUMPTABLE_04[uVar12 + 0xf56bfc99] = (code)((byte)((uint)iVar22 >> 0x10) ^ 0x34);
    UNRECOVERED_JUMPTABLE_04[uVar12 + 0xf56bfc9a] = (code)((byte)((uint)iVar22 >> 8) ^ 0x8d);
    UNRECOVERED_JUMPTABLE_04[uVar12 + 0xf56bfc9b] = (code)((byte)iVar22 ^ 0xf7);
    *(uint *)ppuVar50 = *(uint *)ppuVar50 + 4;
    UNRECOVERED_JUMPTABLE = ppuVar50;
                    /* WARNING: Could not recover jumptable at 0x00010000d0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)[(int)(uVar58 + 1)]
                         + 0x10000d08c))();
    return ppuVar16;
  case (code *)0x10000d0fc:
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_07 + 8) = 0x27b14d27;
                    /* WARNING: Could not recover jumptable at 0x00010000d146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000d0f5 +
                         *(int *)((ulong)(uVar27 - 0x20) +
                                 (long)(int)((0x5839f2c1 < local_88._4_4_ + 0x58bccc39 ||
                                             0xa7c61d3e < local_88._4_4_) + uVar27) * 4)))
                         (ppuStack_148,(ulong)(uVar27 - 0x20),
                          &DAT_10000d0f5 +
                          *(int *)((ulong)(uVar27 - 0x20) +
                                  (long)(int)((0x5839f2c1 < local_88._4_4_ + 0x58bccc39 ||
                                              0xa7c61d3e < local_88._4_4_) + uVar27) * 4));
    return ppuVar16;
  case (code *)0x10000d121:
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000d14a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000d1a4:
    ppuStack_58 = (undefined **)puVar48;
                    /* WARNING: Could not recover jumptable at 0x00010000d1cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000d187 +
                         (int)*(uint *)((long)ppuVar50 +
                                       (long)(int)(uVar12 + ((undefined **)puVar48 ==
                                                            (undefined **)0x0)) * 4)))
                         (0x3165f9b3,ppuVar46,
                          &DAT_10000d187 +
                          (int)*(uint *)((long)ppuVar50 +
                                        (long)(int)(uVar12 + ((undefined **)puVar48 ==
                                                             (undefined **)0x0)) * 4));
    return ppuVar16;
  case (code *)0x10000d209:
    *(int *)((long)UNRECOVERED_JUMPTABLE + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE + 1) + -1;
    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE_04 + -0x75;
    *(uint *)UNRECOVERED_JUMPTABLE_03 =
         *(uint *)UNRECOVERED_JUMPTABLE_03 >> 0x16 | *(uint *)UNRECOVERED_JUMPTABLE_03 << 10;
    *UNRECOVERED_JUMPTABLE_04 = (code)((char)*UNRECOVERED_JUMPTABLE_04 + (char)cVar11);
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    ppuVar44 = ppuVar46;
    goto switchD_100010bcf_caseD_0;
  case (code *)0x10000d24d:
    uVar12 = uVar12 ^ 0x8135ba62;
    uVar13 = (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_03 + (ulong)(uVar12 + 0x8135ba25)) |
             (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_03 + (ulong)(uVar12 + 0x8135ba24)) <<
             8 | (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_03 + (ulong)(uVar12 + 0x8135ba23)
                                      ) << 0x10 |
                 (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_03 + (ulong)(uVar7 + uVar12)) <<
                 0x18;
    ppuStack_58 = ppuStack_50;
    *(uint *)ppuStack_50 = uVar12 + 4;
    ppuVar50 = (undefined **)
               (ulong)((uVar19 ^ uVar13 ^ 0xb7efa938) + (uVar13 & 0x37efa97f) * 2 == -0x48105681);
switchD_10000e2c3_caseD_d2cc:
                    /* WARNING: Could not recover jumptable at 0x00010000d2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000d21b +
                         *(int *)((long)&PTR__bootstrap_look_up_10082e9f0 +
                                 (long)(int)((int)ppuVar50 + uVar53) * 4)))();
    return ppuVar16;
  case (code *)0x10000d2cc:
    goto switchD_10000e2c3_caseD_d2cc;
  case (code *)0x10000d450:
                    /* WARNING: Could not recover jumptable at 0x00010000d45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(UNRECOVERED_JUMPTABLE_04 + 0x10000d422))
                         (puVar48,ppuVar46,UNRECOVERED_JUMPTABLE_04 + 0x10000d422);
    return ppuVar16;
  case (code *)0x10000d475:
    apuStack_220[2] = (undefined *)0x10000d496;
    lVar14 = (*(code *)(ppuVar17[(int)auStack_257] + -1))(ppuStack_58,ppuStack_78,&piStack_118);
    ppuStack_198 = (undefined **)0x0;
    ppuStack_68 = (undefined **)0x650a959f740c42c3;
                    /* WARNING: Could not recover jumptable at 0x00010000d4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000d462 +
                         (int)*(uint *)((long)puVar52 + (long)(int)((lVar14 == 0) + 0xdf) * 4)))();
    return ppuVar16;
  case (code *)0x10000d569:
    *UNRECOVERED_JUMPTABLE_04 = (code)((char)*UNRECOVERED_JUMPTABLE_04 + '\x01');
    iVar22 = (uVar42 - uVar23 ^ 0xd8e123c4) * 0x65773fe7;
    iStack_40 = iVar22 + uVar58 + -0x3a;
    iStack_44 = uVar19 + iVar22 + uVar58 + -0x1b + uVar12;
    apuStack_220[2] = (undefined *)0x10000d599;
    FUN_100014c30();
    ppuStack_68 = (undefined **)0x650a959f740c42c3;
                    /* WARNING: Could not recover jumptable at 0x00010000d5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000d548 +
                         (int)*(uint *)((long)ppuVar56 +
                                       (long)(int)((iStack_3c == 0x52e88d51) + uVar58) * 4)))();
    return ppuVar16;
  case (code *)0x10000d5e9:
    PTR__bootstrap_look_up_10082e9f0 = (undefined *)ppuStack_1a0;
    *(int *)ppuVar33 = (int)ppuVar44;
    puVar43 = PTR__bootstrap_look_up_10082e9f0;
    iVar22 = *piStack_1a8;
    PTR__bootstrap_look_up_10082e9f0[(uVar27 ^ 0xdb) + iVar22 + 0xafd9e6af] = 0;
    puVar43[iVar22 + 0xafd9e783] = 0;
    puVar43[iVar22 + 0xafd9e784] = 0;
    puVar43[iVar22 + 0xafd9e785] = 1;
    *piStack_1a8 = *piStack_1a8 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000d687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)*(int *)(UNRECOVERED_JUMPTABLE_07 +
                                        (long)(int)((uVar27 ^ 0xdb) + 1) * 4) + 0x10000d664))
                         (puStack_60,ppuVar46,(ulong)(iVar22 + 0xafd9e784),
                          (code *)((long)*(int *)(UNRECOVERED_JUMPTABLE_07 +
                                                 (long)(int)((uVar27 ^ 0xdb) + 1) * 4) + 0x10000d664
                                  ),ppuStack_50,&PTR__bootstrap_look_up_10082e9f0);
    return ppuVar16;
  case (code *)0x10000d64c:
    piVar1 = (int *)((ulong)CONCAT31(uVar6,(char)cVar11 + 1) - 0x75);
    *piVar1 = *piVar1 + uVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000d6a7:
    ppuStack_68 = (undefined **)0x650a959f740c42c3;
                    /* WARNING: Could not emulate address calculation at 0x00010000d6b6 */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000d68a +
                         *(int *)((long)&PTR__bootstrap_look_up_10082e9f0 +
                                 (long)(int)((UNRECOVERED_JUMPTABLE == (undefined **)0x0) + 0x6d07b0
                                            ) * 4)))
                         (puVar48,ppuVar46,0x650a959f740c42c3,0x650a959f740c42c3,0x3165f9b2);
    return ppuVar16;
  case (code *)0x10000d77a:
    UNRECOVERED_JUMPTABLE_04[uVar12 + 0xf56bfc9a] = (code)(bVar41 ^ 0x8d);
    UNRECOVERED_JUMPTABLE_04[uVar12 + 0xf56bfc9b] = (code)(bVar21 ^ 0xf7);
    uVar47 = *puVar52;
    *puVar52 = uVar47 + 4;
    UNRECOVERED_JUMPTABLE = (undefined **)(ppuStack_50[0x20105d3e] + (uVar47 + 0xf56bfc9c));
    UNRECOVERED_JUMPTABLE_04 = (code *)&DAT_10000d3fe;
    UNRECOVERED_JUMPTABLE_03 = (code *)ppuVar50;
    puVar48 = (uint *)ppuVar50;
    appuStack_130[0] = (undefined **)puVar52;
  case (code *)0x10000d7c3:
switchD_10000e2c3_caseD_d7c3:
    ppuStack_198 = local_1d8;
LAB_10000de3e:
    uVar47 = 0xe2846e43;
    ppuVar50 = (undefined **)(ulong)(uVar13 * 9);
    ppuVar46 = ppuStack_198;
switchD_10000e2c3_caseD_de42:
    iVar22 = (uVar13 ^ 0xd) * 3;
    UNRECOVERED_JUMPTABLE_07 =
         (code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                             [(int)(uVar13 + (UNRECOVERED_JUMPTABLE < ppuVar46))] + 0x10000de3e);
                    /* WARNING: Could not recover jumptable at 0x00010000de82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*UNRECOVERED_JUMPTABLE_07)
                         ((((int)puVar48 + uVar47) -
                          ((iVar22 + uVar47 ^ uVar13 + (int)ppuVar50 * 2) &
                          (int)UNRECOVERED_JUMPTABLE_03 * 2)) + 0xebdc8ff,ppuVar46,
                          (long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                     [(int)(uVar13 + (UNRECOVERED_JUMPTABLE < ppuVar46))],
                          UNRECOVERED_JUMPTABLE_04,iVar22,UNRECOVERED_JUMPTABLE_07);
    return ppuVar16;
  case (code *)0x10000d7bb:
    UNRECOVERED_JUMPTABLE = (undefined **)(ulong)(uVar12 | 0xfffffc3e);
    puVar48 = (uint *)UNRECOVERED_JUMPTABLE_03;
    goto switchD_10000e2c3_caseD_d7c3;
  case (code *)0x10000d903:
    *(int *)((long)UNRECOVERED_JUMPTABLE + -0x77) =
         *(int *)((long)UNRECOVERED_JUMPTABLE + -0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000d92d:
    out(uRam00000000a01f76b0,(short)UNRECOVERED_JUMPTABLE_03);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000d9bd:
                    /* WARNING: Could not recover jumptable at 0x00010000d9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000d9ae +
                         (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)uVar12]))();
    return ppuVar16;
  case (code *)0x10000d9fe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000da30:
    apuStack_220[2] = (undefined1 *)0x10000da72;
    (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar58 + 0xe74437ab)] + -2))
              (*(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar58 ^ 0x18bbc87b)] + -3)
               ,ppuStack_150,uStack_90._4_4_);
    UNRECOVERED_JUMPTABLE =
         (undefined **)(long)(int)(uVar58 + 0xe74437e4 + (uint)((int)pcStack_80 == 0x31694a7b));
    param_4 = (undefined **)UNRECOVERED_JUMPTABLE_03;
    break;
  case (code *)0x10000da8e:
    UNRECOVERED_JUMPTABLE = (undefined **)(ulong)(uint)(int)(short)(ushort)uVar12;
    break;
  case (code *)0x10000da90:
    UNRECOVERED_JUMPTABLE =
         (undefined **)(ulong)*(uint *)(&stack0xfffffffffffffff8 + (long)UNRECOVERED_JUMPTABLE * 4);
    break;
  case (code *)0x10000daa3:
    break;
  case (code *)0x10000dac9:
                    /* WARNING: Could not recover jumptable at 0x00010000dae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000daae +
                         *(uint *)(&stack0xfffffffffffffff8 + (long)UNRECOVERED_JUMPTABLE * 4)))();
    return ppuVar16;
  case (code *)0x10000db6f:
    ppuStack_180 = UNRECOVERED_JUMPTABLE;
    ppuVar16 = (undefined **)FUN_10000ea96((ulong)UNRECOVERED_JUMPTABLE_03 & 0xffffffff);
    return ppuVar16;
  case (code *)0x10000db85:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000dbdd:
                    /* WARNING: Could not recover jumptable at 0x00010000dbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((ulong)ppuStack_50 & 0xffffffff))
                         (ppuStack_58,ppuVar46,(code *)((ulong)ppuStack_50 & 0xffffffff));
    return ppuVar16;
  case (code *)0x10000dc8f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000dc90:
    ppuVar16 = (undefined **)FUN_100013d14(ppuStack_50);
    return ppuVar16;
  case (code *)0x10000dc9c:
    pcStack_80 = (code *)(ulong)((bVar59 ^ 0x86) * 0x22);
    *(undefined8 *)((ulong)(bVar59 - 0xf) - 8) = 0x10000dcd0;
    ppuStack_a0 = (undefined **)puVar48;
    ppuStack_58 = (undefined **)(*(code *)ppuStack_50)(ppuStack_c0,uStack_138);
    *(undefined8 *)((ulong)(bVar59 - 0xf) - 8) = 0x10000dce1;
    ppuVar16 = (undefined **)(*pcStack_98)(ppuStack_58);
    UNRECOVERED_JUMPTABLE =
         (undefined **)(long)(int)((uint)(ppuVar16 == ppuVar46) + (int)ppuStack_a0);
    puVar52 = &switchD_10000d217::switchdataD_1006d07b0;
    goto code_r0x00010000dcfc;
  case (code *)0x10000dcf6:
code_r0x00010000dcfc:
                    /* WARNING: Could not recover jumptable at 0x00010000dd11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000dc9b +
                         (int)*(uint *)((long)puVar52 + (long)UNRECOVERED_JUMPTABLE * 4)))();
    return ppuVar16;
  case (code *)0x10000dd48:
    return (undefined **)((ulong)local_200 & 0xffffffff);
  case (code *)0x10000dddd:
    ppuStack_198 = (undefined **)
                   (ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_03 + (long)UNRECOVERED_JUMPTABLE_04)
    ;
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulong)(*piStack_178 + 0xc9885555);
    goto code_r0x00010000ddf3;
  case (code *)0x10000ddf2:
    puVar39 = unaff_RBP;
    ppuStack_198 = ppuVar46;
code_r0x00010000ddf3:
    UNRECOVERED_JUMPTABLE_04 = (code *)&DAT_10000d6e0;
    *(undefined ***)(puVar39 + -0x160) = UNRECOVERED_JUMPTABLE;
    puVar48 = (uint *)UNRECOVERED_JUMPTABLE_03;
    goto LAB_10000de3e;
  case (code *)0x10000de42:
    goto switchD_10000e2c3_caseD_de42;
  case (code *)0x10000dee3:
    apuStack_220[2] = (undefined *)0x10000def2;
    (*(code *)ppuStack_50)();
    PTR_LAB_1000020a1_2_10082e9f8 = (undefined *)0x0;
    lVar14 = (long)*(int *)((long)(int)((uVar27 - 3) + (uint)(PTR_DAT_10082ea08 == (undefined *)0x0)
                                       ) * 4 + 0xdf);
                    /* WARNING: Could not recover jumptable at 0x00010000df21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&LAB_10000e68d + lVar14))
                         (PTR_DAT_10082ea08,&LAB_10000e68d + lVar14,lVar14,
                          (uVar27 - 3 ^ 0x5b) * 0x2b);
    return ppuVar16;
  case (code *)0x10000dfd1:
    UNRECOVERED_JUMPTABLE_07 = (code *)swi(3);
    ppuVar16 = (undefined **)(*UNRECOVERED_JUMPTABLE_07)();
    return ppuVar16;
  case (code *)0x10000e058:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000e0b2:
    *(int *)(UNRECOVERED_JUMPTABLE_04 + -0x73) = *(int *)(UNRECOVERED_JUMPTABLE_04 + -0x73) + 1;
    apuStack_220[2] = (undefined *)0x10000e0e5;
    lVar14 = (*local_88)(uVar53 + 0x8f637fe6);
    uStack_160 = 0;
                    /* WARNING: Could not emulate address calculation at 0x00010000e0f0 */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000e0ac +
                         (int)(&switchD_10000d217::switchdataD_1006d07b0)
                              [(int)((lVar14 == 0) + 0x82e9f0)]))(ppuStack_58);
    return ppuVar16;
  case (code *)0x10000e127:
    UNRECOVERED_JUMPTABLE_07 = (code *)swi(1);
    ppuVar16 = (undefined **)(*UNRECOVERED_JUMPTABLE_07)();
    return ppuVar16;
  case (code *)0x10000e12f:
    UNRECOVERED_JUMPTABLE = (undefined **)(local_110 & 0xffffffff);
  case (code *)0x10000e124:
    *UNRECOVERED_JUMPTABLE_04 =
         (code)((char)*UNRECOVERED_JUMPTABLE_04 + (char)UNRECOVERED_JUMPTABLE);
    uVar12 = (int)*(undefined8 *)(unaff_RBP + -0x108) + uVar23 + 0xb591b9d3;
    puVar48 = (uint *)&DAT_10000d8b8;
    ppuVar50 = (undefined **)(ulong)(uVar12 < 0xec09654e);
    uVar13 = uVar23 * 2 + 0x9310a902;
    puVar52 = (uint *)(ulong)((uVar13 ^ 0x3e7febff) + (uVar13 & 0x3e7febfe) * 2 +
                             (uVar19 ^ 0xad8979e1));
switchD_10000e2c3_caseD_e197:
    bVar41 = (uint)puVar52 < 0xec09654e;
    ppuVar55 = (undefined **)(ulong)bVar41;
    ppuVar50 = (undefined **)(ulong)(byte)((byte)ppuVar50 ^ bVar41);
switchD_10000e2c3_caseD_e1a5:
    uVar47 = (uint)(uVar12 < (uint)puVar52);
    if ((char)ppuVar50 != '\0') {
      uVar47 = (uint)ppuVar55;
    }
code_r0x00010000e1b6:
                    /* WARNING: Could not recover jumptable at 0x00010000e1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)puVar48 +
                         (long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                    [(int)((uVar47 & 0xff) + uVar19)]))();
    return ppuVar16;
  case (code *)0x10000e18f:
  case (code *)0x10000e197:
    goto switchD_10000e2c3_caseD_e197;
  case (code *)0x10000e1a5:
    goto switchD_10000e2c3_caseD_e1a5;
  case (code *)0x10000e1b5:
    goto code_r0x00010000e1b6;
  case (code *)0x10000e25e:
    UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_04 + -1;
    if (UNRECOVERED_JUMPTABLE_04 != (code *)0x0 && !bVar61) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto LAB_10000c320;
  case caseD_0:
    goto code_r0x00010000e269;
  case caseD_0:
  case (code *)0x10000e272:
    ppuVar17 = (undefined **)(ulong)*(uint *)(ppuVar17 + 1);
    goto code_r0x00010000e269;
  case (code *)0x10000e28d:
    *(int *)UNRECOVERED_JUMPTABLE_04 = *(int *)UNRECOVERED_JUMPTABLE_04 + 1;
    UNRECOVERED_JUMPTABLE_07 = (code *)swi(1);
    ppuVar16 = (undefined **)(*UNRECOVERED_JUMPTABLE_07)();
    return ppuVar16;
  case (code *)0x10000e291:
    ppuVar17 = (undefined **)CONCAT62(uVar30,CONCAT11(bVar60,bVar26));
    goto code_r0x00010000e269;
  case (code *)0x10000e292:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000e2a9:
    goto switchD_10000e2c3_caseD_e2a9;
  case (code *)0x10000e2bf:
    *(int *)((long)UNRECOVERED_JUMPTABLE + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE + 1) + -1;
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000e2c0:
    goto switchD_10000e2c3_caseD_e2c0;
  case (code *)0x10000e2d5:
    lRam00000000000000df = 0;
    UNRECOVERED_JUMPTABLE = (undefined **)0x578a91945daaea27;
  case (code *)0x10000e2e7:
    ppuRam00000000000000e7 = UNRECOVERED_JUMPTABLE;
code_r0x00010000e2ec:
    uRam00000000000000ef = 0;
    puVar48 = (uint *)0x1000;
    ppuVar32 = ppuVar31;
    goto code_r0x00010000e2fa;
  case (code *)0x10000e2e3:
    ppuVar31 = (undefined **)(ulong)uVar12;
    UNRECOVERED_JUMPTABLE_04 = (code *)((ulong)(apuStack_220 + 3) & 0xffffffff);
    UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT71(uVar24,*(code *)((long)puVar48 + 0x49));
    *(uint *)((long)ppuVar31 + 8) = uVar19;
    goto code_r0x00010000e2ec;
  case (code *)0x10000e2f4:
    *(char *)((long)puVar48 + 0x1000) = (char)*(code *)((long)puVar48 + 0x1000) + (char)cVar29;
    goto code_r0x00010000e2fa;
  case (code *)0x10000e300:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000e327:
    ppuVar32 = apuStack_220 + 3;
code_r0x00010000e2fa:
    pcStack_a8 = UNRECOVERED_JUMPTABLE_04;
    *(undefined8 *)((long)ppuVar32 + -8) = 0x10000e303;
    auVar64 = (*UNRECOVERED_JUMPTABLE_04)(puVar48,ppuVar46,UNRECOVERED_JUMPTABLE_03);
    UNRECOVERED_JUMPTABLE_03 = uStack_70;
    lRam00000000000000df = auVar64._0_8_;
    UNRECOVERED_JUMPTABLE_04 =
         switchD_10000baba::caseD_0 +
         (int)(&switchD_10000d217::switchdataD_1006d07b0)[(lRam00000000000000df == 0) + 7];
    ppuVar16 = *(undefined ***)(UNRECOVERED_JUMPTABLE_07 + (ulong)(uVar27 + 0x19) * 8);
    ppuStack_50 = ppuVar16;
    switch(lRam00000000000000df == 0) {
    case false:
      *(undefined1 **)((long)ppuVar32 + -8) = &stack0xfffffffffffffff8;
      UNRECOVERED_JUMPTABLE =
           (undefined **)CONCAT71((int7)((ulong)ppuVar16 >> 8),uRam48ffffff18958948);
      break;
    case true:
      *ppuStack_58 = (undefined *)0x0;
      ppuStack_58[1] = (undefined *)ppuVar17;
      *(undefined8 *)((long)ppuVar32 + -8) = 0x10000c07a;
      (*UNRECOVERED_JUMPTABLE_03)();
      ppuStack_68 = (undefined **)0xdf;
      ppuStack_108 = ppuStack_78;
      ppuVar16 = (undefined **)FUN_1000134a9(UNRECOVERED_JUMPTABLE_07);
      return ppuVar16;
    }
switchD_10000e2c3_caseD_e58f:
    ppuStack_e8 = auVar64._8_8_;
    lRam00000000000000df = auVar64._0_8_;
    ppuStack_68 = (undefined **)0x650a959f740c42c3;
    uStack_f0 = 0x650a959f740c42c3;
    uStack_d0 = 0x650a959f740c42c3;
    pcStack_a8 = (code *)0x650a959f740c42c3;
    uStack_d8 = 0x650a959f740c42c3;
    uStack_c8 = 0x650a959f740c42c3;
    ppuStack_e0 = ppuStack_e8;
                    /* WARNING: Could not recover jumptable at 0x00010000e5d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE + (long)UNRECOVERED_JUMPTABLE_04))();
    return ppuVar16;
  case (code *)0x10000e3d0:
    apuStack_220[2] = (undefined *)0x10000e3d2;
    (*(code *)UNRECOVERED_JUMPTABLE)();
    pcStack_98 = (code *)0x0;
    apuStack_220[2] = (undefined *)0x10000e400;
    lVar14 = (*(code *)(ppuVar17[0x6d075d] + -2))(ppuVar17[0x6d07d6] + -1,0);
                    /* WARNING: Could not emulate address calculation at 0x00010000e41a */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000e331 +
                         (int)(&switchD_10000d217::switchdataD_1006d07b0)
                              [(int)((lVar14 == 0) + 0x6d07b0)]))(ppuStack_58);
    return ppuVar16;
  case (code *)0x10000e3f4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000e423:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000e43b:
    in(0xa2);
    apuStack_220[2] = (undefined1 *)0x10000e460;
    lVar14 = (*(code *)0x650a959f740c42c3)
                       ((uVar27 - 3 ^ uVar27 - 0x39 ^ 0x4c0189b1) + uVar7 + (uint)bVar59 * 2);
    UNRECOVERED_JUMPTABLE_04 =
         (code *)((long)*(int *)(&DAT_1006d03f0 + (long)(int)(uVar27 + (lVar14 == 0)) * 4) +
                 0x10000e43d);
    uStack_70 = (code *)CONCAT44(uStack_70._4_4_,0x3165f9b2);
    uStack_168 = 0;
    goto code_r0x00010000e492;
  case (code *)0x10000e48c:
    uStack_168 = CONCAT44(uStack_168._4_4_,uVar23);
    goto code_r0x00010000e492;
  case (code *)0x10000e48e:
code_r0x00010000e497:
    *(code *)((long)ppuVar17 + (long)UNRECOVERED_JUMPTABLE_04 * 4 + 0x5d) = cVar18;
code_r0x00010000e492:
                    /* WARNING: Could not recover jumptable at 0x00010000e4a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*UNRECOVERED_JUMPTABLE_04)();
    return ppuVar16;
  case (code *)0x10000e491:
    apuStack_220[2] = *(undefined **)UNRECOVERED_JUMPTABLE_04;
    UNRECOVERED_JUMPTABLE_07 = (code *)((long)ppuVar17 + (long)UNRECOVERED_JUMPTABLE_04 * 4 + 0x65);
    *UNRECOVERED_JUMPTABLE_07 =
         (code)((byte)*UNRECOVERED_JUMPTABLE_07 >> ((byte)cVar18 & 7) |
               (char)*UNRECOVERED_JUMPTABLE_07 << 8 - ((byte)cVar18 & 7));
    goto code_r0x00010000e497;
  case (code *)0x10000e4e1:
    uVar19 = uVar19 + uVar58 * 2;
    uVar13 = (uVar19 ^ 0x7faeeaff) + (uVar19 & 0xffaeeafe) * 2 + 0xfc2028b9;
    bVar41 = (uint)CONCAT71(0x417bcf,bVar60) < uVar13;
    if (bVar49 != uVar13 < 0x7bcf13b8) {
      bVar41 = uVar13 < 0x7bcf13b8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000e54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_03 +
                         (long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                    [(int)(bVar41 + 0x4093cc95)]))();
    return ppuVar16;
  case (code *)0x10000e521:
    UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_04 + 0xf;
    *(uint *)UNRECOVERED_JUMPTABLE_04 =
         *(uint *)UNRECOVERED_JUMPTABLE_04 << 0x17 | *(uint *)UNRECOVERED_JUMPTABLE_04 >> 9;
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000e551:
    ppuStack_1e8 = ppuVar17 + 1;
    UNRECOVERED_JUMPTABLE_04 =
         (code *)(long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                            [uVar58 + 2 + (uint)(ppuVar17 == (undefined **)0x0)];
    UNRECOVERED_JUMPTABLE = (undefined **)0x10000e551;
    ppuStack_1a0 = (undefined **)puVar52;
    ppuStack_f8 = ppuVar56;
    auVar64 = auVar8;
    goto switchD_10000e2c3_caseD_e58f;
  case (code *)0x10000e56a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000e58f:
    goto switchD_10000e2c3_caseD_e58f;
  case (code *)0x10000e878:
    *UNRECOVERED_JUMPTABLE_04 = (code)((char)*UNRECOVERED_JUMPTABLE_04 + '\x01');
                    /* WARNING: Could not recover jumptable at 0x00010000e89a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000e868 +
                         (int)*(uint *)((long)ppuVar50 + (long)(int)(uVar58 + bVar60) * 4)))();
    return ppuVar16;
  case (code *)0x10000eb06:
                    /* WARNING: Could not recover jumptable at 0x00010000eb06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*UNRECOVERED_JUMPTABLE_04)();
    return ppuVar16;
  case (code *)0x10000eb86:
    uStack_100 = (undefined **)CONCAT44(uVar42,(undefined4)uStack_100);
                    /* WARNING: Could not recover jumptable at 0x00010000eb9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(UNRECOVERED_JUMPTABLE_04 + 0x10000eb61))
                         (uVar42,ppuVar46,UNRECOVERED_JUMPTABLE_03,0);
    return ppuVar16;
  case (code *)0x10000ec0c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000ec2d:
    UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT62(uVar25,CONCAT11(bVar61,bVar21));
code_r0x00010000ec39:
    ppuStack_e8 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_03 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010000ec62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000ec06 +
                         (int)(&switchD_10000d217::switchdataD_1006d07b0)[(int)(uVar42 + uVar19)]))
                         (ppuStack_58,
                          &DAT_10000ec06 +
                          (int)(&switchD_10000d217::switchdataD_1006d07b0)[(int)(uVar42 + uVar19)],
                          UNRECOVERED_JUMPTABLE_03,0,0x3165f9b3);
    return ppuVar16;
  case (code *)0x10000ec35:
    uVar42 = CONCAT31(uVar5,bVar61);
    goto code_r0x00010000ec39;
  case (code *)0x10000ec47:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000ed27:
    uVar13 = 0x10b;
    UNRECOVERED_JUMPTABLE = *(undefined ***)((long)ppuStack_78 + -0x650a959f740c42c3);
    puVar48 = (uint *)((ulong)UNRECOVERED_JUMPTABLE_03 & 0xffffffff);
    UNRECOVERED_JUMPTABLE_04 = (code *)&DAT_10000f6ec;
    goto switchD_10000a6ae_caseD_bec4;
  case (code *)0x10000ed6e:
    UNRECOVERED_JUMPTABLE_04 =
         (code *)(long)(int)*(uint *)((long)ppuVar50 +
                                     (long)(int)((puStack_60 == ppuVar17[(int)(uVar42 - 0x98)] + -1
                                                 & (byte)((uVar42 + 0x4c7622e0 |
                                                          0x82e9ef - (uVar42 + 0x4cf90ccf)) >>
                                                         (((byte)ppuStack_50 ^ 0xaf) & 0x1f))) +
                                                uVar42) * 4);
    UNRECOVERED_JUMPTABLE_07 = UNRECOVERED_JUMPTABLE_04 + 0x10000ed53;
    puVar48 = (uint *)0x3165f9b1;
    ppuVar50 = (undefined **)0x742c45ff88570c30;
    uVar45 = 0x650a959f740c42c3;
    goto code_r0x00010000edd5;
  case (code *)0x10000edc5:
    UNRECOVERED_JUMPTABLE_07 = (code *)0x88570c30;
    if (in_stack_00000020._4_4_ == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar45 = 0x740c42c3;
code_r0x00010000edd5:
                    /* WARNING: Could not recover jumptable at 0x00010000edd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*UNRECOVERED_JUMPTABLE_07)
                         (puVar48,uVar45,UNRECOVERED_JUMPTABLE_03,UNRECOVERED_JUMPTABLE_04,ppuVar50)
    ;
    return ppuVar16;
  case (code *)0x10000eed4:
    apuStack_220[2] = (undefined *)0x10000eed6;
    (*(code *)(apuStack_220 + 3))();
                    /* WARNING: Could not emulate address calculation at 0x00010000eefb */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                     [(int)((UNRECOVERED_JUMPTABLE_07 == (code *)0x3c616f4ea01f76b0)
                                           + 0x82e9f0)] + 0x10000eee4))();
    return ppuVar16;
  case (code *)0x10000eef2:
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000ef60:
                    /* WARNING: Could not emulate address calculation at 0x00010000ef72 */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000f0ba +
                         *(int *)((long)(int)(((undefined **)puVar48 == (undefined **)0x0) +
                                             0x82e9f0) * 4 + 0xdf)))
                         (puVar48,ppuVar46,
                          &DAT_10000f0ba +
                          *(int *)((long)(int)(((undefined **)puVar48 == (undefined **)0x0) +
                                              0x82e9f0) * 4 + 0xdf));
    return ppuVar16;
  case (code *)0x10000ef6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000f002:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000f017:
    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x1 || bVar61) goto switchD_10000d217_caseD_1;
    if (UNRECOVERED_JUMPTABLE_04 + -2 == (code *)0x0) {
      ppuVar33 = (undefined **)local_200;
      apuStack_220[3] = &UNK_10000f044;
      (*UNRECOVERED_JUMPTABLE_07)(0,ppuVar46,puVar4);
      *ppuVar17 = (undefined *)0x0;
      ppuVar55[-0x78c2de9d403eed5] = (undefined *)0xa9403683677ab7f;
      apuStack_220[3] = &UNK_10000f06c;
      (*UNRECOVERED_JUMPTABLE_07)(ppuVar17);
      iVar22 = 0xdf;
      goto code_r0x00010000f06f;
    }
    UNRECOVERED_JUMPTABLE_04[0x61] =
         (code)((char)UNRECOVERED_JUMPTABLE_04[0x61] + (char)(UNRECOVERED_JUMPTABLE_04 + -2));
    goto switchD_10000d217_caseD_1;
  case (code *)0x10000f054:
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000f114:
    PTR_s_id_midchangedV1_5_1006cf9fc_0xc_10082ea18 =
         (undefined *)
         (ulong)CONCAT31(uVar6,((char)cVar11 + 0x7eU + bVar60 + -0x61) -
                               (0x81 < (byte)cVar11 || CARRY1((char)cVar11 + 0x7eU,bVar60)));
    ppuVar17 = &PTR__bootstrap_look_up_10082e9f0;
    puVar48 = (uint *)(ulong)*(uint *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar58 - 0x57)] +
                                      -2);
    ppuVar46 = *(undefined ***)pcStack_80;
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulong)(*(int *)(pcStack_80 + 0xc) + 0xa8756e6c);
    UNRECOVERED_JUMPTABLE = (undefined **)0x0;
    goto code_r0x00010000f148;
  case (code *)0x10000f144:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_03 + 5) =
         (*(int *)((long)UNRECOVERED_JUMPTABLE_03 + 5) - uVar42) - (uint)bVar60;
    ppuVar34 = apuStack_220 + 2;
    apuStack_220[2] = (undefined *)(apuStack_220 + 3);
code_r0x00010000f148:
    puVar43 = ppuVar17[(long)UNRECOVERED_JUMPTABLE];
    *(undefined8 *)((long)ppuVar34 + -8) = 0x10000f161;
    uVar13 = (*(code *)(puVar43 + -3))
                       (puVar48,ppuVar46,UNRECOVERED_JUMPTABLE_03,&local_110,(long)&uStack_90 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010000f1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000f0f9 +
                         *(int *)(&DAT_1006d03f0 +
                                 (long)(int)(((uVar13 ^ 0x6befdffe) + (uVar13 * 2 & 0x17f0a374) ==
                                             0x7befe001) + uVar58) * 4)))();
    return ppuVar16;
  case (code *)0x10000f29b:
    if (bVar61 || cVar63 != cVar62) {
                    /* WARNING: Could not recover jumptable at 0x00010000f2cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar16 = (undefined **)
                 (*(code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                       [(int)(uVar19 + (ppuVar33 == (undefined **)0x0))] +
                           0x10000f29d))();
      return ppuVar16;
    }
    ppuVar16 = apuStack_220 + 1;
    cVar62 = '\a';
    do {
      puVar37 = puVar37 + -1;
      ppuVar16 = ppuVar16 + -1;
      *ppuVar16 = (undefined *)*puVar37;
      cVar62 = cVar62 + -1;
    } while ('\0' < cVar62);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000f3d8:
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000f409:
    apuStack_220[2] = (undefined *)0x10000f40e;
    func_0xefe6754f();
    if (!bVar61 && cVar63 == cVar62) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000f4ad:
                    /* WARNING: Could not recover jumptable at 0x00010000f4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*UNRECOVERED_JUMPTABLE_03)();
    return ppuVar16;
  case (code *)0x10000f518:
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + 1;
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    uVar3 = *(undefined4 *)
             ((&PTR__bootstrap_look_up_10082e9f0)[(long)UNRECOVERED_JUMPTABLE_04] + -2);
    puVar43 = ppuStack_50[-0x78c2de9d403eed6];
    *(undefined ***)(unaff_RBP + -0x48) = ppuStack_50;
    uVar13 = (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar12 ^ 0x3b)] + -3))
                       (uVar3,puVar43,*(int *)((long)ppuStack_50 + -0x3c616f4ea01f76a4) + -0xa940368
                        ,unaff_RBP + -0x148,unaff_RBP + -0x84);
    uVar47 = (uint)CONCAT62(uVar30,CONCAT11((char)cVar29 + (char)cVar11,bVar26));
    puVar48 = &switchD_10000d217::switchdataD_1006d07b0;
    UNRECOVERED_JUMPTABLE_03 =
         (code *)(long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                            [(int)(((int)(((uVar47 ^ 0xf7fbafc3) & uVar13 * 2) +
                                         (uVar13 ^ 0xfbfdd7fe)) <
                                   (int)((uVar47 - 0x22 | 0x20) ^ 0xbfdd83c)) + uVar47)];
    ppuVar46 = (undefined **)0x10000f597;
  case (code *)0x10000f5c4:
                    /* WARNING: Could not recover jumptable at 0x00010000f5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)ppuVar46 + (long)UNRECOVERED_JUMPTABLE_03))
                         (puVar48,(code *)((long)ppuVar46 + (long)UNRECOVERED_JUMPTABLE_03));
    return ppuVar16;
  case (code *)0x10000f644:
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000f64f:
    ppuVar17[0x20105d3e] = (undefined *)puStack_190;
    *puStack_1b8 = (int)ppuVar44;
    uVar13 = *(uint *)ppuStack_148;
    uVar58 = uVar58 - 0x42 | 0x43;
    puVar43 = ppuStack_50[0x20105d3e];
    puVar43[uVar13 + 0xf56bfc98] = 0xb;
    puVar43[uVar13 + 0xf56bfc99] = 0x2b;
    UNRECOVERED_JUMPTABLE_03 = (code *)(ulong)(uVar13 + 0xf56bfc9a);
    *(code *)((long)UNRECOVERED_JUMPTABLE_03 + (long)puVar43) = (code)0x31;
    puVar43[uVar13 + uVar58 + 0xf56bfbd4] = 0x96;
    *(uint *)ppuStack_148 = *(uint *)ppuStack_148 + 4;
    ppuVar50 = (undefined **)0x3166a97d;
    uVar12 = 1;
    goto code_r0x00010000f6d0;
  case (code *)0x10000f6cc:
    UNRECOVERED_JUMPTABLE_03 = (code *)CONCAT62(uVar25,CONCAT11(0xc1,bVar21));
    ppuStack_148 = ppuVar46;
    ppuStack_58 = (undefined **)puVar48;
code_r0x00010000f6d0:
    uVar12 = (uVar12 & 1) + uVar58;
    ppuVar46 = ppuStack_148;
    puVar48 = (uint *)ppuStack_58;
LAB_10000f6d6:
                    /* WARNING: Could not recover jumptable at 0x00010000f6ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)[(int)uVar12] +
                         0x10000f6bf))
                         (puVar48,ppuVar46,UNRECOVERED_JUMPTABLE_03,
                          (code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                              [(int)uVar12] + 0x10000f6bf),ppuVar50);
    return ppuVar16;
  case (code *)0x10000f72b:
    if (cVar63 != cVar62) {
      UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_04 + -0x41;
      *(ushort *)UNRECOVERED_JUMPTABLE_04 = *(ushort *)UNRECOVERED_JUMPTABLE_04 ^ (ushort)uVar12;
      if ((short)*(ushort *)UNRECOVERED_JUMPTABLE_04 < 0) {
        ppuVar35 = (undefined **)&local_1f8;
        *(uint *)((long)ppuStack_78 + -0x650a959f740c42bb) = uVar19 + uVar12 * 2 + 0x5f3ef3fe;
        *(undefined4 *)((long)ppuStack_78 + -0x650a959f740c42b7) = 0x696c206b;
        ppuVar50 = (undefined **)0x3166a97d;
        uVar58 = 0x18bbc878;
        ppuStack_68 = ppuStack_78;
        pcStack_b0 = pcStack_98;
      }
      else {
        pcStack_b0 = (code *)CONCAT44(pcStack_b0._4_4_,CONCAT31(uVar6,DAT_48ffffff70858b48));
        ppuStack_78 = (undefined **)UNRECOVERED_JUMPTABLE_03;
      }
      ppuStack_c0 = ppuStack_a0;
      ppuVar16 = ppuVar35;
      puVar40 = &stack0xfffffffffffffff8;
      ppuVar57 = (undefined **)&switchD_10000d217::switchdataD_1006d07b0;
      goto LAB_10000f758;
    }
    goto LAB_10000f6d6;
  case (code *)0x10000f78e:
    puVar40 = (undefined1 *)0xffffff58;
    ppuStack_78 = (undefined **)UNRECOVERED_JUMPTABLE_03;
    ppuVar16 = apuStack_220 + 3;
    goto LAB_10000f758;
  case (code *)0x10000f83a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000f857:
    apuStack_220[2] = (undefined *)0x10000f86f;
    (*(code *)ppuStack_50)(*(undefined8 *)(pcStack_b0 + -0x4fa7d679e7137a48));
    *(undefined ***)(pcStack_b0 + -0x4fa7d679e7137a48) = ppuStack_150;
    *puStack_190 = uStack_100._4_4_;
    uVar13 = *(uint *)appuStack_130[0];
    lVar14 = *(long *)(pcStack_b0 + -0x4fa7d679e7137a48);
    *(undefined1 *)(lVar14 + (ulong)(uVar13 + 0xa8756e6c)) = 0;
    *(undefined1 *)(lVar14 + (ulong)((uVar58 ^ 0xa8756ed2) + uVar13)) = 0;
    *(undefined1 *)(lVar14 + (ulong)(uVar13 + 0xa8756e6e)) = 0;
    *(undefined1 *)(lVar14 + (ulong)(uVar13 + 0xa8756e6f)) = 1;
    *(uint *)appuStack_130[0] = *(uint *)appuStack_130[0] + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000f90f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)*(int *)(&DAT_1006d03f0 + (long)(int)((uVar58 ^ 0x7f) + 1) * 4) +
                         0x10000f8ef))();
    return ppuVar16;
  case (code *)0x10000f894:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000f931:
    apuStack_220[2] = (undefined *)0x10000f945;
    lVar14 = (*(code *)UNRECOVERED_JUMPTABLE)(puStack_60,puVar43,&piStack_118);
    uStack_160 = 0;
    ppuStack_58 = (undefined **)0x742c45ff88570c30;
                    /* WARNING: Could not recover jumptable at 0x00010000f988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000f914 +
                         (int)*(uint *)((long)ppuVar50 + (long)(int)((lVar14 == 0) + 0xdf) * 4)))
                         (0x3165f9a5,uStack_f0,0x742c45ff88570c30,
                          &DAT_10000f914 +
                          (int)*(uint *)((long)ppuVar50 + (long)(int)((lVar14 == 0) + 0xdf) * 4),
                          0x742c45ff88570c30);
    return ppuVar16;
  case (code *)0x10000f993:
    *puVar48 = *(uint *)ppuVar46;
    *(byte *)UNRECOVERED_JUMPTABLE =
         (char)*(code *)UNRECOVERED_JUMPTABLE << ((byte)cVar18 & 7) |
         (byte)*(code *)UNRECOVERED_JUMPTABLE >> 8 - ((byte)cVar18 & 7);
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    apuStack_220[2] = (undefined *)0x10000f9ba;
    lVar14 = (*local_88)(uVar12 + 0x899a5ccc,(code *)((long)ppuVar46 + (ulong)bVar10 * -8 + 4));
    uStack_158 = 0;
    ppuStack_e8 = (undefined **)0x0;
    ppuStack_e0 = (undefined **)0x0;
    ppuStack_68 = (undefined **)0x650a959f740c42c3;
    uStack_f0 = 0x650a959f740c42c3;
    uStack_d0 = 0x650a959f740c42c3;
    pcStack_a8 = (code *)0x650a959f740c42c3;
    uStack_d8 = 0x650a959f740c42c3;
    uStack_c8 = 0x650a959f740c42c3;
                    /* WARNING: Could not emulate address calculation at 0x00010000f9c9 */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000f98d +
                         (int)(&switchD_10000d217::switchdataD_1006d07b0)[(lVar14 == 0) + 0x6d07b0])
               )();
    return ppuVar16;
  case (code *)0x10000f9f2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000fa46:
    uVar13 = ppuRam00000000000000e7._4_4_ + 0xb8e94ff8;
    uVar47 = local_200[0] + 0xb24a1e58;
    bVar41 = uVar13 < 0x1073e188;
    if (uVar47 < 0x1073e188 == uVar13 < 0x1073e188) {
      bVar41 = uVar47 < uVar13;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000faa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000fa30 +
                         *(int *)((long)ppuStack_50 + (long)(int)(bVar41 + uVar23) * 4)))
                         (uVar47,local_200[0],
                          &DAT_10000fa30 +
                          *(int *)((long)ppuStack_50 + (long)(int)(bVar41 + uVar23) * 4));
    return ppuVar16;
  case (code *)0x10000fb5f:
    *(uint *)UNRECOVERED_JUMPTABLE_03 = uVar42 + 4;
    UNRECOVERED_JUMPTABLE_07 =
         (code *)((long)*(int *)((long)(int)((UNRECOVERED_JUMPTABLE_04 ==
                                             (code *)&switchD_10000d217::switchdataD_1006d07b0) +
                                            uVar12) * 4 + 0xdf) + 0x10000fb64);
                    /* WARNING: Could not recover jumptable at 0x00010000fb8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*UNRECOVERED_JUMPTABLE_07)(puVar48,uVar42 + 4,UNRECOVERED_JUMPTABLE_07);
    return ppuVar16;
  case (code *)0x10000fc05:
    ppuStack_e8 = (undefined **)(ulong)uVar42;
                    /* WARNING: Could not recover jumptable at 0x00010000fc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000fbd4 +
                         *(int *)(UNRECOVERED_JUMPTABLE_04 + (long)UNRECOVERED_JUMPTABLE * 4)))();
    return ppuVar16;
  case (code *)0x10000fc0e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000fc69:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000fd2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x10000fda8:
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    uVar13 = uVar27 * 2 + 0x9310a902;
    uVar42 = (uVar13 ^ 0x777fbf7f) + (uVar13 & 0xf77fbf7e) * 2 + uVar42;
    bVar41 = uVar19 < uVar42;
    if (uVar19 < 0x2f96cbd5 != uVar42 < 0x2f96cbd5) {
      bVar41 = uVar42 < 0x2f96cbd5;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000fe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)puVar48 +
                         (long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                    [(int)(bVar41 + uVar12 + -0x18bbc7bd)]))();
    return ppuVar16;
  case (code *)0x10000febe:
    *(int *)UNRECOVERED_JUMPTABLE_04 = *(int *)UNRECOVERED_JUMPTABLE_04 + 1;
                    /* WARNING: Could not recover jumptable at 0x00010000fed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000fea6 + *(int *)((long)(int)(uVar19 + bVar60) * 4 + 0xdf)))
                         (puVar48,ppuVar46,
                          &DAT_10000fea6 + *(int *)((long)(int)(uVar19 + bVar60) * 4 + 0xdf));
    return ppuVar16;
  case (code *)0x10000fee4:
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    (&stack0x00000034)[(long)UNRECOVERED_JUMPTABLE_04 * 4] =
         (&stack0x00000034)[(long)UNRECOVERED_JUMPTABLE_04 * 4] + (char)cVar11;
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
                    /* WARNING: Could not recover jumptable at 0x00010000ff21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000fedc +
                         (int)*(uint *)((long)ppuVar56 +
                                       (long)(int)((ppuStack_50 == (undefined **)0x3c616f4ea01f76b0)
                                                  + uVar27) * 4)))();
    return ppuVar16;
  case (code *)0x10000ff61:
    out(0xf6,cVar11);
    UNRECOVERED_JUMPTABLE =
         (undefined **)
         (long)(int)((uint)(uVar19 == (uVar27 - 0x3b | 0x41) + 0xfbfdd7b9) + uVar27 + 4);
  case (code *)0x10000ff85:
    UNRECOVERED_JUMPTABLE_07 =
         (code *)((long)(int)*(uint *)((long)puVar48 + (long)UNRECOVERED_JUMPTABLE * 4) +
                 0x10000ff63);
                    /* WARNING: Could not recover jumptable at 0x00010000ff96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*UNRECOVERED_JUMPTABLE_07)(puVar48,ppuVar46,UNRECOVERED_JUMPTABLE_07);
    return ppuVar16;
  case (code *)0x10000ff74:
    LOCK();
    UNRECOVERED_JUMPTABLE_04[0x31fbfdd7] = cVar29;
    UNLOCK();
    *UNRECOVERED_JUMPTABLE_04 = (code)((char)*UNRECOVERED_JUMPTABLE_04 >> ((byte)cVar18 & 0x1f));
    *puVar48 = *puVar48 >> 0x14 | *puVar48 << 0xc;
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000ff81:
    return UNRECOVERED_JUMPTABLE;
  case (code *)0x10000ffc2:
                    /* WARNING: Could not recover jumptable at 0x00010000ffda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_10000ffa0 + *(int *)(&DAT_1006d03f0 + (long)(int)uVar19 * 4)))
                         (puVar48,&DAT_1006d03f0,
                          &DAT_10000ffa0 + *(int *)(&DAT_1006d03f0 + (long)(int)uVar19 * 4));
    return ppuVar16;
  case (code *)0x100010013:
    ppuStack_108 = (undefined **)0x4c;
    uStack_70._4_4_ = (undefined4)((ulong)puVar43 >> 0x20);
    uStack_70 = (code *)CONCAT44(uStack_70._4_4_,0x82e9f0);
    apuStack_220[2] = (undefined *)0x10001380f;
    ppuStack_68 = ppuStack_108;
    (*_UNK_10082faf0)(0x650a959f740c42c3);
    apuStack_220[2] = (undefined *)0x10001381c;
    (*pcVar9)(ppuStack_f8);
    uStack_f0 = 0x650a959f740c42c3;
    pcStack_b8 = pcVar9;
                    /* WARNING: Could not recover jumptable at 0x000100013842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*(code *)(&LAB_1000137db + iRam000000020264ae38))();
    return ppuVar16;
  case (code *)0x1000101a5:
                    /* WARNING: Could not recover jumptable at 0x0001000101aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
    return ppuVar16;
  case (code *)0x1000101dc:
    apuStack_220[2] = (undefined1 *)0x1000101e1;
    (*(code *)&PTR__bootstrap_look_up_10082e9f0)((ulong)ppuVar17 & 0xffffffff);
    ppuStack_68 = (undefined **)0x650a959f740c42c3;
    uStack_100 = ppuStack_78;
    ppuVar50 = (undefined **)0xdf;
    ppuVar57 = (undefined **)&switchD_10000d217::switchdataD_1006d07b0;
    goto LAB_10000f758;
  case (code *)0x100010214:
    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x1 || bVar61) {
      return (undefined **)0x8950be49;
    }
    cRam00000000f56cff22 = cRam00000000f56cff22 + 'Z';
    UNRECOVERED_JUMPTABLE_04[0x8950be59] = (code)0x1;
    uVar13 = *puVar52;
    *(uint **)(apuStack_220[3] + -0x198) = puVar52;
    *puVar52 = (uVar13 + uVar58) - 6;
    iVar22 = 1;
    goto switchD_10000f016_caseD_1;
  case (code *)0x100010337:
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    uVar13 = (0x82e9f0 << ((bVar26 ^ 0xd4) & 0x1f)) + 0x44aa2bb2;
    uVar13 = (uVar13 ^ 0x7dabfa37) + (uVar13 & 0xfdabfa36) * 2 + 0x5659db2f;
    bVar41 = uVar12 < uVar13;
    if (uVar12 < 0xd405d566 != uVar13 < 0xd405d566) {
      bVar41 = uVar13 < 0xd405d566;
    }
                    /* WARNING: Could not recover jumptable at 0x0001000103bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)puVar48 +
                         (long)*(int *)((long)(int)(bVar41 + uVar23 + 0x4010e36c) * 4 + 0xdf)))();
    return ppuVar16;
  case (code *)0x100010558:
    ppuVar50 = (undefined **)0x3165f9b2;
switchD_10000e2c3_caseD_1055f:
    ppuStack_68 = (undefined **)0x650a959f740c42c3;
    ppuStack_78 = (undefined **)0x650a959f740c42c3;
    ppuVar16 = apuStack_220 + 3;
    puVar40 = &stack0xfffffffffffffff8;
    uVar58 = uVar13;
LAB_10000f758:
    *(undefined ***)(puVar40 + -0x70) = ppuStack_78;
    *(int *)(puVar40 + -0x78) = (int)ppuVar50;
    lVar14 = *(long *)(puVar40 + -0x130);
    UNRECOVERED_JUMPTABLE_07 =
         (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar58 + 0xe74437aa)];
    uVar45 = *(undefined8 *)(puVar40 + -0xa8);
    *(undefined8 *)((long)ppuVar16 + -8) = 0x10000f795;
    (*UNRECOVERED_JUMPTABLE_07)(uVar45);
    uVar45 = *(undefined8 *)(puVar40 + -0xb8);
    *(undefined8 *)((long)ppuVar16 + -8) = 0x10000f79e;
    (*UNRECOVERED_JUMPTABLE_07)(uVar45);
                    /* WARNING: Could not recover jumptable at 0x00010000f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)ppuVar57 +
                                              (long)(int)(uVar58 + 0xe74437a6 + (uint)(lVar14 == 0))
                                              * 4) + 0x10000f758))();
    return ppuVar16;
  case (code *)0x10001055f:
    goto switchD_10000e2c3_caseD_1055f;
  case (code *)0x10001060e:
    UNRECOVERED_JUMPTABLE = ppuStack_188;
  case (code *)0x100010617:
    *(undefined ***)(UNRECOVERED_JUMPTABLE_07 + 0x10082e9f0) = UNRECOVERED_JUMPTABLE;
    *puStack_1b0 = 0x740c42c3;
    iVar22 = *piStack_1c8;
    lVar14 = *(long *)((long)ppuStack_50 + (long)UNRECOVERED_JUMPTABLE_07);
    *(undefined1 *)(lVar14 + (ulong)(iVar22 + 0xf56bfc98)) = 0;
    *(undefined1 *)(lVar14 + (ulong)(iVar22 + 0xf56bfc99)) = 0;
    *(undefined1 *)(lVar14 + (ulong)(iVar22 + 0xf56bfc9a)) = 0;
    *(undefined1 *)(lVar14 + (ulong)(iVar22 + (uVar27 ^ 3) + 0xf56bfbe4)) = 1;
    *piStack_1c8 = *piStack_1c8 + 4;
                    /* WARNING: Could not recover jumptable at 0x0001000106a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                     [(int)((uVar27 ^ 3) + 1)] + 0x10001067c))
                         (ppuStack_58,ppuVar46,(ulong)(iVar22 + 0xf56bfc9a),
                          (code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                              [(int)((uVar27 ^ 3) + 1)] + 0x10001067c),0x3166a97d);
    return ppuVar16;
  case (code *)0x1000106f9:
                    /* WARNING: Could not recover jumptable at 0x0001000106f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
    return ppuVar16;
  case (code *)0x100010a69:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100010d11:
    return (undefined **)puVar48;
  case (code *)0x100010d31:
                    /* WARNING: Could not recover jumptable at 0x000100010d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*(UNRECOVERED_JUMPTABLE_04 + (long)ppuVar46))();
    return ppuVar16;
  case (code *)0x100010dd5:
    *(code *)((ulong)uVar12 - 0x7d) = cVar18;
    *(uint *)(UNRECOVERED_JUMPTABLE_04 + -0x7d) =
         *(int *)(UNRECOVERED_JUMPTABLE_04 + -0x7d) + uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100010e59:
    *puVar52 = uVar42;
    *(undefined **)((long)(ppuVar50 + 3) + (long)UNRECOVERED_JUMPTABLE_04) =
         *(undefined **)puVar48 + ((uVar12 ^ 0x8135ba6b) + uVar42);
    if (uVar54 + 0xbd9ab824 < 0x34e8970 == (bool)(byte)ppuStack_50) {
      uVar54 = (uint)(uVar54 + 0xbd9ab824 < uVar58);
    }
    *puVar52 = *puVar52 + *(uint *)ppuVar56;
    ppuVar57 = (undefined **)
               (&DAT_100010e1a +
               (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)((uVar54 & 0xff) + 0xdf)]);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar54 & 0xff) {
    case 0:
      piVar1 = (int *)(&UNK_100010e1b +
                      (int)(&switchD_100013a5e::switchdataD_1006d0050)
                           [(int)((uVar54 & 0xff) + 0xdf)]);
      iVar22 = *piVar1;
      *piVar1 = *piVar1 + -1;
      ppuVar16 = apuStack_220 + 2;
      cVar62 = '\f';
      do {
        puVar38 = puVar38 + -1;
        ppuVar16 = ppuVar16 + -1;
        *ppuVar16 = (undefined *)*puVar38;
        cVar62 = cVar62 + -1;
      } while ('\0' < cVar62);
      if (!SBORROW4(iVar22,1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
      pcStack_80 = (code *)(ulong)((uint)&stack0x0315e66b & 0xfcea19ab);
      uVar20 = (ulong)(int)(uVar12 ^ 0x78);
      ppuVar17 = &PTR__bootstrap_look_up_10082e9f0;
    }
    goto code_r0x00010000c6f4;
  case (code *)0x100010fcd:
    uVar12 = *(uint *)(UNRECOVERED_JUMPTABLE_04 + (long)UNRECOVERED_JUMPTABLE * 4);
    UNRECOVERED_JUMPTABLE_04 = (code *)&DAT_100010fac;
    goto code_r0x000100010fd7;
  case (code *)0x100010fd2:
    uVar12 = uVar12 | 0xffffffd5;
code_r0x000100010fd7:
                    /* WARNING: Could not recover jumptable at 0x000100010fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)(*(UNRECOVERED_JUMPTABLE_04 + uVar12))();
    return ppuVar16;
  case (code *)0x100011000:
    *(undefined ***)((long)UNRECOVERED_JUMPTABLE_03 + ((long)UNRECOVERED_JUMPTABLE_04 * 4 + 3) * 8)
         = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x00010001102b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)*(int *)(UNRECOVERED_JUMPTABLE_07 +
                                        (ulong)((*(long *)(*ppuVar46 +
                                                          (long)UNRECOVERED_JUMPTABLE_04 * 0x20 +
                                                          0x18) == 0) + 0x20) * 4) + 0x100010fde))()
    ;
    return ppuVar16;
  case (code *)0x100011113:
    bVar41 = uVar23 < uVar51;
    if (bVar49 != uVar51 < 0x73c25e02) {
      bVar41 = uVar51 < 0x73c25e02;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)((long)ppuVar46 + (long)*(int *)((long)(int)(bVar41 + uVar12) * 4 + 0xdf)))
                         ();
    return ppuVar16;
  case (code *)0x100011482:
    if ((code *)((long)UNRECOVERED_JUMPTABLE + (long)ppuVar46) + 0x741a7786 <
        (undefined **)0x741a7774 == bVar59) {
      puVar48 = (uint *)(ulong)((code *)((long)UNRECOVERED_JUMPTABLE + (long)ppuVar46) + 0x741a7786
                               < UNRECOVERED_JUMPTABLE_03);
    }
    *(code *)((long)ppuVar17 + (long)((long)ppuVar46 + ((ulong)UNRECOVERED_JUMPTABLE ^ 0x1006d07b0))
             ) = (code)0x0;
    lVar14 = (long)*(int *)((long)&PTR__bootstrap_look_up_10082e9f0 +
                           (long)(int)((int)puVar48 + uVar19) * 4);
                    /* WARNING: Could not recover jumptable at 0x0001000114dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_100011470 + lVar14))
                         (lVar14,(code *)((long)ppuVar46 + 1),UNRECOVERED_JUMPTABLE_03,
                          UNRECOVERED_JUMPTABLE_04,&DAT_100011470 + lVar14);
    return ppuVar16;
  case (code *)0x1000114af:
    UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_04 + 0xf;
    *(uint *)UNRECOVERED_JUMPTABLE_04 =
         *(uint *)UNRECOVERED_JUMPTABLE_04 << 1 | (uint)((int)*(uint *)UNRECOVERED_JUMPTABLE_04 < 0)
    ;
    return (undefined **)((ulong)UNRECOVERED_JUMPTABLE_03 & 0xffffffff);
  case (code *)0x100011538:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x1000115f6:
    out(0x4c,uVar12);
    puVar48 = (uint *)0x0;
    bVar60 = true;
    goto code_r0x000100011602;
  case (code *)0x1000115ff:
    bVar60 = uVar53 == 0;
code_r0x000100011602:
    pcStack_b0 = (code *)0x650a959f740c42c3;
    ppuStack_e0 = ppuVar17;
                    /* WARNING: Could not recover jumptable at 0x00010001164b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&LAB_1000115f8_2 +
                         *(int *)(UNRECOVERED_JUMPTABLE_07 + (long)(int)(bVar60 + 0x1014e860) * 4)))
                         (puVar48,ppuStack_78,UNRECOVERED_JUMPTABLE_03,ppuVar17,ppuStack_50,
                          0x650a959f740c42c3);
    return ppuVar16;
  case (code *)0x10001163d:
    UNRECOVERED_JUMPTABLE_03 = (code *)puVar48;
    goto code_r0x000100011602;
  case (code *)0x100011649:
    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x1 || bVar61) {
      *(undefined ***)(apuStack_220[3] + -0x1a0) = &PTR__bootstrap_look_up_10082e9f0;
      uVar47 = uVar27 - 7 | 1;
      ppuRam00000000000000e7 = (undefined **)CONCAT44(ppuRam00000000000000e7._4_4_,0x5daafa27);
      uVar13 = (&switchD_10000d217::switchdataD_1006d07b0)[(int)uVar47];
      *(long *)(apuStack_220[3] + -200) =
           *(long *)(UNRECOVERED_JUMPTABLE_07 + (long)(int)(uVar27 - 7 | 0xb) * 8) + -0xb;
      *(long *)(apuStack_220[3] + -0x130) =
           *(long *)(UNRECOVERED_JUMPTABLE_07 + (long)(int)(uVar47 + 0xc) * 8) + -1;
      *(uint **)(apuStack_220[3] + -0xd0) = puVar48;
      *(uint **)(apuStack_220[3] + -0x80) = puVar48;
      *(uint **)(apuStack_220[3] + -0xe0) = puVar48;
      *(uint **)(apuStack_220[3] + -0xd8) = puVar48;
      *(undefined8 *)(apuStack_220[3] + -0x50) = 0x742c45ff88570c30;
      *(undefined8 *)(apuStack_220[3] + -0x90) = 0x742c45ff88570c30;
      *(undefined8 *)(apuStack_220[3] + -0x78) = 0xdf;
                    /* WARNING: Could not recover jumptable at 0x0001000116f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar16 = (undefined **)
                 (*(FUN_10001164e + (int)uVar13))(puVar48,0x742c45ff88570c30,uVar47 + 0xc09a63de,0);
      return ppuVar16;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100011673:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100011bbc:
                    /* WARNING: Could not recover jumptable at 0x000100011bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_100011bb6 +
                         *(int *)((long)ppuStack_50 +
                                 (long)((int)&stack0xfffffffffffffff8 * 0x21cd8341) * 4)))
                         (puVar48,ppuVar46,
                          &DAT_100011bb6 +
                          *(int *)((long)ppuStack_50 +
                                  (long)((int)&stack0xfffffffffffffff8 * 0x21cd8341) * 4));
    return ppuVar16;
  case (code *)0x100011e6b:
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + (char)cVar11;
    pcVar2 = (char *)((long)UNRECOVERED_JUMPTABLE_04 * 5 + -8);
    *pcVar2 = *pcVar2 + (char)cVar11;
    ppuStack_58 = (undefined **)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar58 ^ 0x72)] + -3);
    apuStack_220[2] = (undefined1 *)0x100011eb4;
    uVar12 = (*(code *)ppuStack_58)
                       (*(undefined4 *)
                         ((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar12 & 0xbb73221c)] + -2),
                        *(undefined **)puVar52,*(uint *)(ppuVar17 + 3) + 0xafd9e782,&uStack_138,
                        (long)&local_88 + 4);
    UNRECOVERED_JUMPTABLE_04 = (code *)(ulong)(uVar12 ^ 0xfbefd777);
  case (code *)0x100011eb5:
    UNRECOVERED_JUMPTABLE_07 = UNRECOVERED_JUMPTABLE_04 + -0x1028880f;
    *(uint *)UNRECOVERED_JUMPTABLE_07 =
         *(uint *)UNRECOVERED_JUMPTABLE_07 << 0x1b | *(uint *)UNRECOVERED_JUMPTABLE_07 >> 5;
                    /* WARNING: Could not recover jumptable at 0x000100011ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_100011e3e +
                         *(int *)((long)(int)(((int)UNRECOVERED_JUMPTABLE_04 +
                                               (uVar12 * 2 & 0xf84cb60f) == 0xbefd77a) + uVar58) * 4
                                 + 0xdf)))();
    return ppuVar16;
  case (code *)0x100011f35:
    *(code *)((long)UNRECOVERED_JUMPTABLE + -0x7d) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE + -0x7d) ^ (byte)cVar18);
    *(int *)UNRECOVERED_JUMPTABLE_04 = *(int *)UNRECOVERED_JUMPTABLE_04 + 1;
                    /* WARNING: Could not recover jumptable at 0x000100011f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar16 = (undefined **)
               (*(code *)(&DAT_100010d70 +
                         (int)(&switchD_10000d217::switchdataD_1006d07b0)[(int)uVar58]))
                         (puVar48,ppuVar46,
                          &DAT_100010d70 +
                          (int)(&switchD_10000d217::switchdataD_1006d07b0)[(int)uVar58]);
    return ppuVar16;
  case (code *)0x10001272f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x100012ca9:
    *(code *)puVar48 = cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  ppuStack_68 = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010000daa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar16 = (undefined **)
             (*(code *)(&DAT_10000da22 +
                       (int)(&switchD_10000d217::switchdataD_1006d07b0)[(long)UNRECOVERED_JUMPTABLE]
                       ))();
  return ppuVar16;
}

