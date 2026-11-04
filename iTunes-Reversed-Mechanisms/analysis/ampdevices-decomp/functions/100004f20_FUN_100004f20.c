// name: FUN_100004f20
// address: 100004f20

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000100008246) overlaps instruction at (ram,0x000100008245)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000100005555) */
/* WARNING: Type propagation algorithm not settling */

undefined **
FUN_100004f20(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
             undefined **param_5)

{
  code *pcVar1;
  int *piVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  char cVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  byte bVar9;
  undefined4 uVar10;
  ID IVar11;
  long *plVar12;
  undefined **UNRECOVERED_JUMPTABLE_08;
  undefined **ppuVar13;
  ulong uVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined7 uVar18;
  undefined **self;
  byte bVar19;
  undefined **UNRECOVERED_JUMPTABLE_12;
  int7 iVar20;
  byte bVar21;
  undefined **UNRECOVERED_JUMPTABLE_11;
  undefined **UNRECOVERED_JUMPTABLE_13;
  undefined7 uVar23;
  byte bVar24;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int *piVar28;
  undefined8 *puVar29;
  undefined1 *unaff_RBP;
  undefined **ppuVar30;
  undefined1 *puVar31;
  undefined **ppuVar32;
  byte bVar33;
  int iVar34;
  long lVar36;
  byte bVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  code cVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined **in_R10;
  uint uVar45;
  uint *UNRECOVERED_JUMPTABLE_07;
  int iVar46;
  uint uVar47;
  undefined **ppuVar48;
  uint uVar49;
  uint uVar50;
  undefined **ppuVar51;
  undefined **ppuVar52;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_R15;
  long in_GS_OFFSET;
  byte bVar53;
  code cVar54;
  bool bVar55;
  char in_AF;
  bool bVar56;
  undefined1 auVar57 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  int in_stack_401b3caa8;
  undefined1 auStack_250 [64];
  undefined **ppuStack_210;
  undefined4 *puStack_1f0;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1c0;
  uint uStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 *puStack_1a8;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  int *piStack_170;
  int *piStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  undefined ***pppuStack_60;
  undefined **appuStack_58 [2];
  undefined4 local_48;
  int iStack_44;
  int iStack_40;
  uint local_3c;
  code *local_38;
  undefined2 uVar22;
  uint uVar25;
  uint uVar35;
  
  bVar37 = 0;
  puVar27 = (undefined8 *)&stack0xfffffffffffffff8;
  ppuVar30 = (undefined **)&stack0xfffffffffffffff8;
  ppuVar32 = (undefined **)&stack0xfffffffffffffff8;
  piVar28 = &stack0xffffffffffffffb8;
  puVar26 = (undefined8 *)&stack0xffffffffffffffb8;
  local_3c = (int)param_2 + 0xb63b2b94;
  UNRECOVERED_JUMPTABLE_08 = (undefined **)0x8;
  ppuVar48 = (undefined **)0x13789ab;
  local_38 = (code *)PTR__free_10082eaf0;
  _local_48 = param_2;
  switch((int)param_2 == 0) {
  case true:
    switch(param_1 == (undefined **)0x0) {
    case true:
      return (undefined **)0x0;
    }
code_r0x000100008d1b:
    appuStack_58[1] = (undefined **)&UNK_100008d21;
    (*local_38)(param_1);
    return (undefined **)0x0;
  }
code_r0x0001000092b0:
  iVar46 = (int)UNRECOVERED_JUMPTABLE_08;
  uVar49 = iVar46 + 0x72e59b4aU & 0x8d1a64af;
  ppuVar51 = (undefined **)(ulong)uVar49;
  uVar14 = (ulong)((int)ppuVar48 + iVar46 + -4 + (uVar49 ^ 0xfec87653));
  ppuVar52 = (undefined **)(uVar14 * 0x20);
  switch(&UNK_1000092b0 +
         *(int *)(&DAT_1006cf290 +
                 (long)(int)(iVar46 + (uint)((param_1 + 2)[uVar14 * 4] == (undefined *)0x0)) * 4)) {
  case (undefined *)0x1000067d3:
    UNRECOVERED_JUMPTABLE_12 = (undefined **)(ulong)(iVar46 + 0x3811177fU & 0xc7eee878);
    uVar42 = iVar46 - 7;
    switch(&LAB_1000067d3 +
           *(int *)(&DAT_1006cf290 +
                   (long)(int)(iVar46 + -4 + (uint)((param_1 + 3)[uVar14 * 4] == (undefined *)0x0))
                   * 4)) {
    case (undefined1 *)0x100007c57:
      goto DAT_100007c57;
    }
    break;
  case (undefined *)0x100008510:
    uVar49 = uVar49 ^ 6;
    appuStack_58[1] = (undefined **)&UNK_100008517;
    (*local_38)();
    UNRECOVERED_JUMPTABLE_12 = (undefined **)(ulong)(uVar49 + 0x38111783 & 0xc7eee878);
    uVar42 = uVar49 - 3;
    uVar49 = uVar49 + ((param_1 + 3)[uVar14 * 4] == (undefined *)0x0);
    ppuVar51 = (undefined **)(ulong)uVar49;
    switch(&LAB_1000067d3 + *(int *)(&DAT_1006cf290 + (long)(int)uVar49 * 4)) {
    case (undefined1 *)0x100007c57:
      goto DAT_100007c57;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)(ulong)((uVar42 | 2) ^ 3);
  appuStack_58[1] = (undefined **)&UNK_10000748e;
  (*local_38)();
code_r0x000100007c5a:
  ppuVar8 = _local_48;
  ppuVar7 = appuStack_58[1];
  puVar15 = &DAT_1006cf290;
  UNRECOVERED_JUMPTABLE_08 = _local_48;
code_r0x000100007c60:
  UNRECOVERED_JUMPTABLE_13 = (undefined **)(ulong)(0x49c4d46b < (uint)UNRECOVERED_JUMPTABLE_08);
  uVar49 = (uint)UNRECOVERED_JUMPTABLE;
  UNRECOVERED_JUMPTABLE_08 = (undefined **)(ulong)(uVar49 + 8);
  self = (undefined **)(ulong)((int)ppuVar48 + 0xb503a1ea);
  UNRECOVERED_JUMPTABLE_11 = (undefined **)(ulong)(uVar49 + 8);
code_r0x000100007c76:
  UNRECOVERED_JUMPTABLE_11 = (undefined **)(ulong)((uint)UNRECOVERED_JUMPTABLE_11 ^ 0xb63b2b9c);
code_r0x000100007c7c:
  cVar41 = (code)((uint)self < (uint)UNRECOVERED_JUMPTABLE_11 ^ (byte)UNRECOVERED_JUMPTABLE_13);
  param_5 = (undefined **)CONCAT71((int7)((ulong)param_5 >> 8),cVar41);
  UNRECOVERED_JUMPTABLE_12 = UNRECOVERED_JUMPTABLE_08;
code_r0x000100007c85:
  UNRECOVERED_JUMPTABLE_08 = UNRECOVERED_JUMPTABLE_12;
  UNRECOVERED_JUMPTABLE_11 = (undefined **)0x0;
  bVar53 = (uint)self < local_3c;
  self = (undefined **)CONCAT71((int7)((ulong)self >> 8),bVar53);
  if (cVar41 == (code)0x0) {
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(ulong)bVar53;
    bVar9 = bVar53;
  }
  else {
    bVar9 = (byte)UNRECOVERED_JUMPTABLE_13;
  }
  iVar46 = (int)ppuVar48 + (uVar49 | 10);
  uVar47 = iVar46 - 9;
  ppuVar48 = (undefined **)(ulong)uVar47;
  uVar42 = *(uint *)(&DAT_1006cf290 + (long)(int)(bVar9 + uVar49) * 4);
  UNRECOVERED_JUMPTABLE_12 = (undefined **)(long)(int)uVar42;
  cVar54 = (code)((undefined **)0xfffffffeffff83a8 < UNRECOVERED_JUMPTABLE_12);
  UNRECOVERED_JUMPTABLE_13 = (undefined **)((long)UNRECOVERED_JUMPTABLE_12 + 0x100007c57);
  bVar56 = UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0;
  bVar55 = (POPCOUNT((ulong)UNRECOVERED_JUMPTABLE_13 & 0xff) & 1U) == 0;
  bVar9 = (byte)UNRECOVERED_JUMPTABLE_08;
  uVar38 = (uint)UNRECOVERED_JUMPTABLE_08;
  uVar18 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_08 >> 8);
  bVar21 = (byte)UNRECOVERED_JUMPTABLE_13;
  uVar22 = SUB82(UNRECOVERED_JUMPTABLE_13,0);
  uStack_ec = (uint)UNRECOVERED_JUMPTABLE_13;
  uVar23 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_13 >> 8);
  bVar24 = (byte)param_1;
  uVar25 = (uint)param_1;
  uVar39 = (uint)ppuVar52;
  bVar19 = (byte)uVar42;
  iVar20 = (int7)(int3)(uVar42 >> 8);
  uVar50 = (uint)ppuVar51;
  bVar33 = (byte)UNRECOVERED_JUMPTABLE_11;
  uVar35 = (uint)UNRECOVERED_JUMPTABLE_11;
  uVar43 = (uint)param_5;
  uVar40 = (uint)self;
  uVar45 = (uint)UNRECOVERED_JUMPTABLE_07;
  uVar44 = (uint)in_R10;
  puVar29 = (undefined8 *)&stack0xffffffffffffffb8;
  puVar31 = &stack0xfffffffffffffff8;
  ppuVar13 = UNRECOVERED_JUMPTABLE_08;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(UNRECOVERED_JUMPTABLE_13) {
  case (undefined **)0x8d44f637:
    appuStack_58[1] = (undefined **)&UNK_100008efc;
    uVar10 = (*(code *)&stack0xfffffffffffffff8)();
    uRam153abb8d44ce0144 = (char)uVar10;
    out(0xbf,uVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10000222b:
    appuStack_58[1] = (undefined **)0x100002236;
    IVar11 = NSProcessInfo::processInfo((ID)self,(SEL)param_1);
    appuStack_58[1] = (undefined **)0x100002243;
    IVar11 = NSProcessInfo::operatingSystem(IVar11,PTR_s_operatingSystem_10088bad0);
    if (IVar11 == 5) {
      appuStack_58[1] = (undefined **)0x100002256;
      IVar11 = NSProcessInfo::processInfo
                         ((ID)PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,(SEL)param_1);
      local_38 = (code *)0x0;
      iStack_40 = 0xd;
      local_3c = 0;
      _local_48 = (undefined **)0xa;
      appuStack_58[1] = (undefined **)0x10000228c;
      IVar11 = NSProcessInfo::isOperatingSystemAtLeastVersion_
                         (IVar11,PTR_s_isOperatingSystemAtLeastVersion__10088bac8);
      bVar37 = (byte)IVar11;
    }
    else {
      bVar37 = 0;
    }
    return (undefined **)(ulong)bVar37;
  case (undefined **)0x1000028b6:
    out(0xdb,bVar9);
    cVar41 = (code)in(uVar22);
    *(code *)self = cVar41;
    UNRECOVERED_JUMPTABLE = (code *)0xb085906243d7467d;
    UNRECOVERED_JUMPTABLE_13 = (undefined **)(ulong)uRamb085906344443909;
    iVar46 = iRamb08590634444390d;
    goto code_r0x0001000028de;
  case (undefined **)0x1000028dc:
    iVar46 = (int)CONCAT71(uVar18,bVar9 + 0x11 + (char)cVar54);
code_r0x0001000028de:
    uVar49 = iVar46 + 0x39395ea5;
    uVar42 = (uVar25 ^ 0xd451fe9c) + (int)UNRECOVERED_JUMPTABLE_13;
    appuStack_58[1] = (undefined **)&DAT_1006cf290;
    bVar55 = uVar49 < 0x3ebfe928;
    if (uVar42 < 0x3ebfe928 == uVar49 < 0x3ebfe928) {
      bVar55 = uVar42 < uVar49;
    }
    self = (undefined **)(ulong)bVar55;
    UNRECOVERED_JUMPTABLE_12 =
         (undefined **)(long)*(int *)((long)UNRECOVERED_JUMPTABLE_07 + (ulong)(bVar55 + uVar39) * 4)
    ;
    UNRECOVERED_JUMPTABLE_11 = UNRECOVERED_JUMPTABLE_12 + 0x20000516;
    param_5 = (undefined **)(UNRECOVERED_JUMPTABLE + 0x1006cf290);
code_r0x000100002938:
                    /* WARNING: Could not recover jumptable at 0x000100002938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)UNRECOVERED_JUMPTABLE_11)
                   (self,UNRECOVERED_JUMPTABLE_11,UNRECOVERED_JUMPTABLE_13,UNRECOVERED_JUMPTABLE_12,
                    param_5);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100002938:
    goto code_r0x000100002938;
  case (undefined **)0x100002980:
    *(byte *)UNRECOVERED_JUMPTABLE_08 = (char)*(code *)UNRECOVERED_JUMPTABLE_08 + bVar9;
    iVar46 = (uVar38 == (uVar42 ^ uStack_ec + 0x36455e09 & 0xc9baa1ff ^ 0x5aed9758)) + uStack_ec;
                    /* WARNING: Could not recover jumptable at 0x0001000029b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100002984 + *(int *)((long)UNRECOVERED_JUMPTABLE_07 + (long)iVar46 * 4)))
                   (iVar46,&UNK_100002984 +
                           *(int *)((long)UNRECOVERED_JUMPTABLE_07 + (long)iVar46 * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100002a04:
                    /* WARNING: Could not recover jumptable at 0x000100002a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_08)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100002a47:
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100002bb7:
    UNRECOVERED_JUMPTABLE_11[5] =
         (undefined *)CONCAT71(0x9b5006,((char)cVar54 + 'H') - (0x56 < (byte)cVar54));
    appuStack_58[1] = (undefined **)&UNK_100002bd8;
    lStack_d8 = (*(code *)(param_1[(int)(uVar47 ^ 0x8f)] + -3))();
    puVar27 = (undefined8 *)((long)appuStack_58[1] + -0x4f7a6f9dbc28b98f);
    pcStack_70 = (code *)(param_1[iVar46 + -0x86] + -3);
    appuStack_58[1] = (undefined **)&UNK_100002c38;
    (*(code *)(param_1[iVar46 + -0x90] + -3))(lStack_d8,pcStack_70,*puVar27);
    ppuStack_a8 = (undefined **)0x0;
    appuStack_58[1] = (undefined **)&UNK_100002c5e;
    lVar36 = (*(code *)(param_1[(int)(uVar47 ^ 0x91)] + -2))(piStack_168,0);
                    /* WARNING: Could not recover jumptable at 0x000100002c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_100002b92 +
                   (int)(&switchD_100005882::switchdataD_1006cfa50)[(int)(uVar47 + (lVar36 == 0))]))
                   (0x6d94841a1ee4c12e);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100002d88:
    appuStack_58[1] = (undefined **)&UNK_100004211;
    (*UNRECOVERED_JUMPTABLE)((ulong)ppuStack_68 & 0xffffffff);
    *(undefined8 *)pcStack_70 = 0;
    *(undefined8 *)(pcStack_70 + 8) = 0x58dc301c3fe66e74;
    appuStack_58[1] = (undefined **)&UNK_100004233;
    (*UNRECOVERED_JUMPTABLE)(pcStack_70);
    pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,uVar47);
    UNRECOVERED_JUMPTABLE = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar25 + 0x436432cb)];
    appuStack_58[1] = (undefined **)&UNK_100002dbb;
    pppuStack_60 = (undefined ***)ppuVar51;
    (*UNRECOVERED_JUMPTABLE)(ppuStack_c0);
    appuStack_58[1] = (undefined **)&UNK_100002dd2;
    ppuStack_1c0 = (undefined **)UNRECOVERED_JUMPTABLE;
    (*UNRECOVERED_JUMPTABLE)(ppuStack_108);
                    /* WARNING: Could not recover jumptable at 0x000100002df1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100002d88 +
                   (int)(&switchD_100005882::switchdataD_1006cfa50)
                        [(int)(uVar25 + 0x436432ca + (uint)(lStack_d8 == 0))]))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100002e25:
    if (UNRECOVERED_JUMPTABLE_12 != (undefined **)0x1) {
      ppuStack_120 = uStack_98;
                    /* WARNING: Could not recover jumptable at 0x000100002e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)
           (*(code *)(&UNK_100002e56 +
                     *(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                             (long)(int)(uVar50 + (byte)cVar54) * 4)))
                     (self,UNRECOVERED_JUMPTABLE_11,ppuVar51);
      return UNRECOVERED_JUMPTABLE_08;
    }
    plVar12 = (long *)(ulong)(uint)PTR____stack_chk_guard_10082cb58;
code_r0x000100002e2d:
    if ((code *)*plVar12 == local_38) {
      return (undefined **)(ulong)((int)in_R10 + 0xce995683);
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)puVar26 + -8) = &UNK_100009867;
    ___stack_chk_fail();
  case (undefined **)0x100002f55:
    UNRECOVERED_JUMPTABLE_13 =
         (undefined **)(long)*(int *)((long)ppuVar52 + (long)(int)(uStack_ec + 0x6cf290) * 4);
code_r0x000100002f5f:
                    /* WARNING: Could not recover jumptable at 0x000100002f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x100002f31))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100002f5f:
    goto code_r0x000100002f5f;
  case (undefined **)0x100002f72:
    uVar14 = (long)*(int *)((long)UNRECOVERED_JUMPTABLE_12 * 5 + -0x3a) * -0x32b1097f;
    lVar36 = CONCAT62((int6)((uVar14 & 0xffffffff) >> 0x10),
                      CONCAT11(((long)UNRECOVERED_JUMPTABLE_13 < 0) << 7 | bVar56 << 6 | in_AF << 4
                               | bVar55 << 2 | 2U | (long)(int)uVar14 != uVar14,
                               (char)(uVar14 & 0xffffffff)));
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + lVar36) =
         UNRECOVERED_JUMPTABLE[(long)UNRECOVERED_JUMPTABLE_11];
    iVar46 = (int)CONCAT71(iVar20,0x3e);
    *(code *)(lVar36 + (ulong)(iVar46 + 0xb9da7ef5)) = UNRECOVERED_JUMPTABLE[iVar46 + 0xb9da7ef5];
    *(code *)(lVar36 + (ulong)(iVar46 + 0xb9da7ef4)) = UNRECOVERED_JUMPTABLE[iVar46 + 0xb9da7ef4];
    iVar34 = iVar46 + -4;
    *(code *)(lVar36 + (ulong)(iVar46 + 0xb9da7ef3)) = UNRECOVERED_JUMPTABLE[iVar46 + 0xb9da7ef3];
                    /* WARNING: Could not recover jumptable at 0x000100002fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100002f73 +
                   *(int *)((long)ppuVar52 +
                           (long)(int)((-1 < (int)((uVar43 + 0x462580f0) - iVar34 |
                                                  iVar34 - (uVar43 + 0x462580f0))) + uVar43) * 4)))
                   (&UNK_100002f73 +
                    *(int *)((long)ppuVar52 +
                            (long)(int)((-1 < (int)((uVar43 + 0x462580f0) - iVar34 |
                                                   iVar34 - (uVar43 + 0x462580f0))) + uVar43) * 4),
                    iVar34,UNRECOVERED_JUMPTABLE_13,iVar34);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100003190:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000032da:
    appuStack_58[1] = (undefined **)&DAT_1006cf290;
                    /* WARNING: Could not recover jumptable at 0x0001000032ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000032b6 +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_07 + (long)UNRECOVERED_JUMPTABLE_08 * 4)))()
    ;
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100003471:
    ppuStack_108 = (undefined **)
                   (ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_13 + (long)UNRECOVERED_JUMPTABLE_12)
    ;
    ppuVar51 = (undefined **)(ulong)(uVar25 - 0xa3);
    uVar39 = uVar25 + *piStack_170 + 0xa49d7c22;
    ppuVar52 = (undefined **)(ulong)uVar39;
    puVar15 = &UNK_100007ae5;
    ppuStack_148 = UNRECOVERED_JUMPTABLE_08;
    break;
  case (undefined **)0x1000034f9:
                    /* WARNING: Could not recover jumptable at 0x0001000034f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)(ulong)*(uint *)((long)self + 0x7e))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000368b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100003761:
                    /* WARNING: Could not recover jumptable at 0x00010000377f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100003745 +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                           (long)(int)((int)CONCAT71(uVar18,bVar56) + uStack_ec) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000378a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000037a9:
    pppuStack_60 = (undefined ***)0x6b2f40ca1a2ef23;
                    /* WARNING: Could not recover jumptable at 0x0001000037cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_12 + (ulong)(uVar38 - 0x27)))
                   (0x3165f9b2,ppuStack_a0);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000038a8:
    uStack_80 = (undefined **)CONCAT44(uStack_80._4_4_,(int)(short)UNRECOVERED_JUMPTABLE_08);
    uVar47 = uStack_b0._4_4_;
code_r0x0001000038b7:
    uVar49 = uVar39 + 0x4364330c;
    appuStack_58[1] = (undefined **)&UNK_1000038f2;
    (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar39 + 0x436432cc)] + -2))
              (*(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[uVar39 & 0x36410a3] + -3),
               ppuStack_138,(ulong)uStack_88 & 0xffffffff);
    uStack_b0 = (code *)CONCAT44(uVar47,(undefined4)uStack_b0);
    pppuStack_60 = (undefined ***)(undefined **)0x6d94841a1ee4c12e;
    if (uVar47 == (uVar49 ^ 0x3166a91e)) {
      pppuStack_60 = (undefined ***)uStack_98;
    }
    pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,(undefined4)uStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010000396c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&LAB_100003c73 +
                   (int)(&switchD_100005882::switchdataD_1006cfa50)
                        [(int)((uint)(uVar47 == ((uVar49 ^ 0x45) + 7 ^ uVar49 ^ 0x49 ^ 0x3166a97a))
                              + (uVar49 ^ 0x45))]))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000038e1:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100003933:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_08 + -0x77);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE >> 1 |
         (uint)((*(uint *)UNRECOVERED_JUMPTABLE & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000039fb:
    appuStack_58[1] = (undefined **)&UNK_100003a07;
    uVar17 = (*(code *)ppuVar51)((ulong)param_1 & 0xffffffff,ppuStack_a0);
    uStack_b0 = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar49 - 0x46)];
    appuStack_58[1] = (undefined **)&UNK_100003a27;
    puVar15 = (undefined *)(*uStack_b0)(uVar17);
    iVar46 = (puVar15 == (&PTR__bootstrap_look_up_10082e9f0)[uVar49 & 0x7a931b96] + -0xe) + uVar49;
    goto code_r0x000100003a46;
  case (undefined **)0x100003a44:
    iVar46 = uVar42 + uVar40;
code_r0x000100003a46:
                    /* WARNING: Could not recover jumptable at 0x000100003a5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)(*(code *)(&UNK_100003984 + *(int *)((long)ppuVar48 + (long)iVar46 * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100003a93:
    *(code *)((long)UNRECOVERED_JUMPTABLE_08 + 0x4c) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_08 + 0x4c) + bVar19 + (char)cVar54);
    *(uint *)in_R10 = uVar40;
    appuStack_58[1] = UNRECOVERED_JUMPTABLE_11;
                    /* WARNING: Could not recover jumptable at 0x000100003ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_100003a62 + *(int *)((long)ppuVar52 + (long)(int)uVar38 * 4)))
                   (self,UNRECOVERED_JUMPTABLE_11,(ulong)uStack_80 & 0xffffffff);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100003d6b:
    UNRECOVERED_JUMPTABLE =
         (code *)((long)UNRECOVERED_JUMPTABLE_08 +
                 *(long *)((long)in_R10 + (long)UNRECOVERED_JUMPTABLE));
    goto code_r0x000100003d6f;
  case (undefined **)0x100003d6c:
    UNRECOVERED_JUMPTABLE =
         (code *)(ulong)(uVar38 + *(int *)((long)UNRECOVERED_JUMPTABLE_13 + (long)self));
code_r0x000100003d6f:
    UNRECOVERED_JUMPTABLE[0x1006503e6200243] = (code)(bVar33 ^ 0xb4);
    bVar37 = (byte)((int)uVar42 >> 0x1f);
    UNRECOVERED_JUMPTABLE[0x1006503e6200244] = (code)(bVar37 ^ 0xf);
    UNRECOVERED_JUMPTABLE[0x1006503e6200245] = (code)(bVar37 ^ 0x99);
    UNRECOVERED_JUMPTABLE[0x1006503e6200246] = (code)(bVar37 ^ 0x9a);
    UNRECOVERED_JUMPTABLE[0x1006503e6200247] = (code)((byte)(uVar42 >> 0x18) ^ 0x31);
    UNRECOVERED_JUMPTABLE[0x1006503e6200248] = (code)((byte)(uVar42 >> 0x10) ^ 0x70);
    uVar49 = uVar42 >> 8 ^ 0xe9;
    UNRECOVERED_JUMPTABLE[0x1006503e6200249] = SUB41(uVar49,0);
    UNRECOVERED_JUMPTABLE[0x1006503e620024a] = (code)(bVar19 ^ 0xe6);
    *(int *)param_5 = *(int *)param_5 + 8;
    ppuStack_190 = param_5;
                    /* WARNING: Could not recover jumptable at 0x000100003e1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100003df9 + *(int *)((long)ppuVar48 + (long)(int)(uVar25 + 1) * 4)))
                   (appuStack_58[0],uVar49,0x1006503e6200243,
                    &UNK_100003df9 + *(int *)((long)ppuVar48 + (long)(int)(uVar25 + 1) * 4),
                    0x3166a97d);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100003ea1:
    ppuStack_1d8 = (undefined **)UNRECOVERED_JUMPTABLE_12[0x200d9e52];
    UNRECOVERED_JUMPTABLE_13 = (undefined **)&UNK_100005682;
    goto code_r0x000100003c62;
  case (undefined **)0x100003ea4:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_08 + -0x73) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_08 + -0x73) | uVar42;
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(ulong)(uVar38 + 0x17d6);
    ppuStack_1d8 = in_R10;
code_r0x000100003c62:
    iVar46 = -0x1d7b9267;
    ppuVar32 = param_1;
    ppuStack_198 = UNRECOVERED_JUMPTABLE_08;
code_r0x00010000ac7d:
    uVar49 = (uint)UNRECOVERED_JUMPTABLE;
    uVar42 = uVar49 + 0x4077ba72 & 0xbf884597;
    lVar36 = (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_07 +
                                 (long)(int)(uVar49 + (UNRECOVERED_JUMPTABLE_08 < ppuStack_1d8)) * 4
                                 );
    UNRECOVERED_JUMPTABLE = (code *)(lVar36 + 0x10000ac7d);
                    /* WARNING: Could not recover jumptable at 0x00010000acc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE)
                   (uVar42,(((int)ppuVar32 + iVar46) -
                           ((uint)((long)ppuVar32 << (((byte)uVar42 ^ 0x16) & 0x3f)) &
                           (uVar49 ^ 0xe6) + iVar46)) + 0xebdc9a9,UNRECOVERED_JUMPTABLE_13,lVar36,
                    uVar49 ^ 0xe6,UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100003fdb:
    uVar49 = uVar42 * 2 + 0x2b242a4e;
    uVar49 = (uVar49 << ((bVar21 ^ 0xc4) & 0x1f) & 0xdddfdfb4) + (uVar49 ^ 0xeeefefdb) + 0x5403dbc2;
    bVar55 = uVar38 + uVar35 < uVar49;
    if (uVar38 + uVar35 < 0x42f3cb9d != uVar49 < 0x42f3cb9d) {
      bVar55 = uVar49 < 0x42f3cb9d;
    }
                    /* WARNING: Could not recover jumptable at 0x000100004062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_100005882::switchdataD_1006cfa50)
                               [(int)(bVar55 + uStack_ec)] + 0x100008dd7))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000040bc:
                    /* WARNING: Could not recover jumptable at 0x0001000040f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000040bc +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                           (long)(int)((uint)(in_R10 == (undefined **)0x5781d62609419b70) +
                                      (uVar25 ^ 10)) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100004154:
    appuStack_58[1] = (undefined **)&UNK_10000415d;
    lVar36 = (*pcStack_90)();
    uStack_98 = (undefined **)0x6d94841a1ee4c12e;
                    /* WARNING: Could not recover jumptable at 0x000100004198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100004139 +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_07 + (long)(int)(uVar47 + (lVar36 == 0)) * 4
                           )))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000041c3:
    appuStack_58[1] = (undefined **)&UNK_1000041cb;
    (*UNRECOVERED_JUMPTABLE)(param_1);
    if (*(code **)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                           (uint)PTR____stack_chk_guard_10082cb58) == local_38) {
      return (undefined **)(ulong)(iVar46 + 0xce99567a);
    }
                    /* WARNING: Subroutine does not return */
    appuStack_58[1] = (undefined **)&UNK_1000046c0;
    ___stack_chk_fail();
  case (undefined **)0x10000444f:
                    /* WARNING: Could not recover jumptable at 0x00010000445c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100004436 +
                   *(uint *)((long)UNRECOVERED_JUMPTABLE_12 + (long)UNRECOVERED_JUMPTABLE_08 * 4)))
                   ();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100004618:
    uVar17 = CONCAT62((int6)((ulong)UNRECOVERED_JUMPTABLE_13 >> 0x10),CONCAT11(0xcb,bVar21));
    uVar14 = (ulong)(int)((int)uVar17 + 0x43643390 + uVar42);
    goto code_r0x000100004628;
  case (undefined **)0x100004620:
    uVar17 = CONCAT71(uVar23,bVar21 | (byte)*(code *)((long)UNRECOVERED_JUMPTABLE_08 + 0x48436433));
    uVar14 = (ulong)uVar42;
code_r0x000100004628:
                    /* WARNING: Could not recover jumptable at 0x000100004636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)param_5 + (long)(int)(&switchD_100005882::switchdataD_1006cfa50)[uVar14]))
                   (self,UNRECOVERED_JUMPTABLE_11,uVar17,
                    (code *)((long)param_5 +
                            (long)(int)(&switchD_100005882::switchdataD_1006cfa50)[uVar14]));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000476c:
    pcStack_90 = (code *)(ppuVar52[(int)(uVar50 - 0x66)] + -3);
    appuStack_58[1] = (undefined **)0x1000047c3;
    ppuStack_a0 = self;
    (*(code *)(ppuVar52[(int)(uVar50 ^ 0x70)] + -3))
              (self,pcStack_90,
               *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_08 + (long)UNRECOVERED_JUMPTABLE_12));
    uStack_98 = (undefined **)0x0;
    appuStack_58[1] = (undefined **)0x1000047e5;
    lVar36 = (*(code *)(ppuVar52[(int)(uVar50 - 0x5a)] + -2))(ppuStack_128,0);
                    /* WARNING: Could not recover jumptable at 0x000100004816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_100004725 +
                   *(int *)((long)ppuVar48 + (long)(int)(uVar50 + (lVar36 == 0)) * 4)))
                   (appuStack_58[0]);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100004882:
    *(byte *)UNRECOVERED_JUMPTABLE_08 = (char)*(code *)UNRECOVERED_JUMPTABLE_08 + bVar9;
    appuStack_58[1] = (undefined **)&UNK_10000488c;
    puVar15 = (undefined *)(*(code *)ppuVar51)(0x1000);
    *param_1 = puVar15;
                    /* WARNING: Could not recover jumptable at 0x0001000048a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100004850 +
                   *(int *)((long)ppuVar48 + (long)(int)(uVar49 + (puVar15 == (undefined *)0x0)) * 4
                           )))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000048db:
    *(int *)self = *(int *)self + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100004946:
                    /* WARNING: Could not recover jumptable at 0x00010000494f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)self + (long)*(int *)((long)ppuVar48 + (long)param_5 * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100004a22:
    *(uint *)(UNRECOVERED_JUMPTABLE_11 + -0xb) = *(int *)(UNRECOVERED_JUMPTABLE_11 + -0xb) - uVar40;
    uVar14 = (ulong)*(uint *)(in_R10 + -0xaf03ac4c128336d);
    uVar42 = *(int *)((long)in_R10 + (long)UNRECOVERED_JUMPTABLE) + 0x767b4833;
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)(ulong)(*(uint *)(in_R10 + -0xaf03ac4c128336d) + 0x2cb8b44a);
    bVar55 = uVar42 < (uVar25 ^ 0x881b37d2);
code_r0x000100004a52:
    bVar37 = (uint)UNRECOVERED_JUMPTABLE_11 < uVar39 + 0x881b36cb ^ bVar55;
    if (bVar37 == 0) {
      bVar55 = (uint)UNRECOVERED_JUMPTABLE_11 < uVar42;
    }
    ppuStack_120 = (undefined **)((long)in_R10 + (long)UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000100004a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_100004a0f + *(int *)((long)ppuVar48 + (long)(int)(bVar55 + uVar25) * 4)))
                   (CONCAT31((int3)(uVar39 + 0x881b36cb >> 8),bVar37),
                    &DAT_100004a0f + *(int *)((long)ppuVar48 + (long)(int)(bVar55 + uVar25) * 4),
                    uVar14);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100004a3e:
    if ((bool)cVar54 || bVar56) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar14 = CONCAT71(uVar23,0x4a);
    in_stack_00000028._1_1_ = bVar9 + 0x77;
    cVar41 = *(code *)UNRECOVERED_JUMPTABLE_12;
    *(char *)UNRECOVERED_JUMPTABLE_12 = (char)*(code *)UNRECOVERED_JUMPTABLE_12 >> 0x19;
    bVar55 = ((char)cVar41 >> 0x18 & 1U) != 0;
    goto code_r0x000100004a52;
  case (undefined **)0x100004bea:
    iVar46 = *(int *)UNRECOVERED_JUMPTABLE_11;
    uVar49 = uVar25 + 0xd6d51a45 & 0x292ae5bb;
    lVar36 = *(long *)((long)in_R10 + (long)UNRECOVERED_JUMPTABLE);
    *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xee6010c4)) = 99;
    *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xee6010c5)) = 0x2b;
    *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xee6010c6)) = 0x8d;
    *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xee6010c7)) = 0x6e;
    *(uint *)UNRECOVERED_JUMPTABLE_11 = *(int *)UNRECOVERED_JUMPTABLE_11 + (uVar49 ^ 0xb7);
    ppuStack_198 = UNRECOVERED_JUMPTABLE_11;
                    /* WARNING: Could not recover jumptable at 0x000100004c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&LAB_100004c3f + *(int *)((long)ppuVar48 + (long)(int)(uVar49 + 1) * 4)))
                   (appuStack_58[0],UNRECOVERED_JUMPTABLE_11,(ulong)(iVar46 + 0xee6010c6),
                    &LAB_100004c3f + *(int *)((long)ppuVar48 + (long)(int)(uVar49 + 1) * 4),
                    0x3166a97d);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100004de6:
    out(uVar22,uVar38);
    bRam302ee906b2f40ca1 = bVar9;
    *(byte *)UNRECOVERED_JUMPTABLE_08 = (char)*(code *)UNRECOVERED_JUMPTABLE_08 + bVar9;
    ppuStack_1b0 = param_1 + 0x200d9e52;
    ppuStack_f8 = UNRECOVERED_JUMPTABLE_11;
                    /* WARNING: Could not recover jumptable at 0x000100004e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100004df2 +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_07 + (long)(int)uStack_ec * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100005108:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100005136:
    uVar49 = (uint)(uVar40 < uVar42);
    if (uVar40 < 0xda362cd3 != uVar42 < uVar38) {
      uVar49 = (uint)CONCAT71(0x1006cf2,uVar42 < uVar38);
    }
                    /* WARNING: Could not recover jumptable at 0x000100005171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000050f0 +
                   *(int *)((long)ppuVar51 + (long)(int)((uVar49 & 0xff) + uVar35) * 4)))
                   (self,&UNK_1000050f0 +
                         *(int *)((long)ppuVar51 + (long)(int)((uVar49 & 0xff) + uVar35) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000517b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000051f6:
    UNRECOVERED_JUMPTABLE =
         (code *)((long)self +
                 (long)*(int *)((long)ppuVar51 +
                               (long)(int)((bVar33 == 0 && (uVar38 | 0x41) < 0xaf13c84f) + uStack_ec
                                          ) * 4));
                    /* WARNING: Could not recover jumptable at 0x000100005232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*UNRECOVERED_JUMPTABLE)(self,UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100005302:
    self = (undefined **)(ulong)(uVar40 ^ 0x6b);
code_r0x0001000052cd:
    appuStack_58[1] = (undefined **)&UNK_1000052d2;
    (*(code *)ppuStack_68)(self);
    *(undefined ***)((long)ppuVar52 + (long)param_1) = ppuStack_148;
    *puStack_1f0 = (undefined4)uStack_d0;
    UNRECOVERED_JUMPTABLE_07 = &switchD_100005882::switchdataD_1006cfa50;
    puVar15 = (undefined *)0xe2846d99;
    UNRECOVERED_JUMPTABLE = (code *)(ulong)(uVar49 ^ 0x6b);
    UNRECOVERED_JUMPTABLE_08 = *(undefined ***)((long)uStack_98 + (long)param_1);
    param_1 = (undefined **)((ulong)uStack_88 & 0xffffffff);
    uStack_b0 = (code *)CONCAT44(0x3166a97d,(undefined4)uStack_b0);
    UNRECOVERED_JUMPTABLE_13 = (undefined **)&UNK_100003864;
    ppuStack_1d8 = ppuStack_138;
    goto code_r0x00010000532d;
  case (undefined **)0x100005322:
    if (-0x100007c58 < (long)UNRECOVERED_JUMPTABLE_12) goto code_r0x0001000052cd;
    *(ushort *)((long)UNRECOVERED_JUMPTABLE_08 + -0x73) =
         *(ushort *)((long)UNRECOVERED_JUMPTABLE_08 + -0x73) ^ (ushort)uVar42;
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(ulong)(uVar38 - 0x1ac9);
    ppuStack_1d8 = in_R10;
code_r0x00010000532d:
    iVar46 = (int)puVar15;
    ppuVar32 = param_1;
    goto code_r0x00010000ac7d;
  case (undefined **)0x1000053d4:
                    /* WARNING: Could not recover jumptable at 0x000100005414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000053d4 +
                   *(int *)((long)in_R10 +
                           (long)(int)(((uVar40 - 5 ^ 0xb7efa977) + (uVar40 - 0x21 | 0x24) ==
                                       0x6cf290) + uVar40) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000551d:
    *(int *)((long)UNRECOVERED_JUMPTABLE_12 + -0x46) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_12 + -0x46) + 1;
    appuStack_58[1] = (undefined **)&UNK_10000552e;
    (*UNRECOVERED_JUMPTABLE)();
    ppuStack_a0[3] = (undefined *)0x0;
    *(int *)((long)ppuStack_a0 + 0x24) = 0x50a01b4b;
                    /* WARNING: Bad instruction - Truncating control flow here */
    *ppuStack_a0 = (undefined *)0x611c7e149b50062b;
                    /* WARNING: Could not recover jumptable at 0x000100005584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000044da +
                   (int)(&switchD_100005882::switchdataD_1006cfa50)
                        [(int)((uVar39 - 2) + (uint)(ppuStack_a0[6] == (undefined *)0x0))]))
                   (ppuStack_a0[6],ppuStack_a0,
                    &UNK_1000044da +
                    (int)(&switchD_100005882::switchdataD_1006cfa50)
                         [(int)((uVar39 - 2) + (uint)(ppuStack_a0[6] == (undefined *)0x0))]);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000055d7:
                    /* WARNING: Could not recover jumptable at 0x0001000055f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_08 + (long)UNRECOVERED_JUMPTABLE_12))
                   (0x3165f9b1,ppuStack_a0);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100005674:
    ppuRam1e6be9987d8b4cc9 = UNRECOVERED_JUMPTABLE_08;
    *(byte *)UNRECOVERED_JUMPTABLE_08 = (char)*(code *)UNRECOVERED_JUMPTABLE_08 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100005711:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000057dc:
    *(byte *)UNRECOVERED_JUMPTABLE_08 =
         ((char)*(code *)UNRECOVERED_JUMPTABLE_08 - bVar9) - (char)cVar54;
    *(byte *)UNRECOVERED_JUMPTABLE_08 = (char)*(code *)UNRECOVERED_JUMPTABLE_08 + bVar9;
    appuStack_58[1] = (undefined **)0x1000057e3;
    lVar36 = (*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Could not recover jumptable at 0x000100005806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(switchD_10000aaa3::caseD_0 +
           *(int *)((long)ppuVar51 + (long)(int)(uVar25 + (lVar36 == 0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100005816:
    puVar26 = (undefined8 *)auStack_250;
    local_38 = *(code **)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                                  (uint)PTR____stack_chk_guard_10082cb58);
    in_R10 = (undefined **)0x3165f9b4;
    ppuStack_210 = self;
    ppuStack_1e0 = UNRECOVERED_JUMPTABLE_12;
    ppuStack_1d8 = UNRECOVERED_JUMPTABLE_11;
    ppuStack_128 = UNRECOVERED_JUMPTABLE_13;
    ppuStack_68 = param_1;
    pppuStack_60 = (undefined ***)ppuVar48;
    appuStack_58[0] = ppuVar51;
    appuStack_58[1] = ppuVar52;
    switch(param_5 == (undefined **)0x0 || UNRECOVERED_JUMPTABLE_12 == (undefined **)0x0) {
    case false:
      *UNRECOVERED_JUMPTABLE_12 = (undefined *)0x0;
      *(int *)param_5 = 0;
      puVar15 = PTR__malloc_10082ea28;
      ppuVar51 = &PTR__bootstrap_look_up_10082e9f0;
      UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)PTR__malloc_10082ea28)(0x18);
      in_R10 = (undefined **)0x3165f9b2;
      switch(UNRECOVERED_JUMPTABLE_08 == (undefined **)0x0) {
      case false:
        param_1 = (undefined **)0x9;
        *UNRECOVERED_JUMPTABLE_08 = (undefined *)0x0;
        UNRECOVERED_JUMPTABLE_08[1] = (undefined *)0x5868a8b6a6dead9;
        *(int *)(UNRECOVERED_JUMPTABLE_08 + 2) = 0;
        pcStack_90 = (code *)puVar15;
        appuStack_58[0] = UNRECOVERED_JUMPTABLE_08;
        UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)puVar15)(0x1000);
        self = appuStack_58[0];
        goto code_r0x000100008190;
      }
    }
    plVar12 = (long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                               (uint)PTR____stack_chk_guard_10082cb58);
    goto code_r0x000100002e2d;
  case (undefined **)0x100005950:
    appuStack_58[1] = (undefined **)&UNK_100005968;
    uVar42 = (*(code *)((long)ppuVar51 + -3))();
                    /* WARNING: Could not recover jumptable at 0x0001000059a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000058eb +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                           (long)(int)(((iVar46 + 0x4f614ae3U ^ uVar42) +
                                        (uVar49 + 0xbdff3ec7 & uVar42 * 2) == -0x1100607e) + uVar49)
                           * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100005aa5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100005ce9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100005df1:
    uStack_b0 = (code *)ppuStack_c0;
    ppuStack_f8 = (undefined **)pcStack_90;
    ppuVar51 = (undefined **)(ulong)(uVar50 ^ 0x72);
    uVar39 = (uVar50 ^ 0x72) - 0x1b & uVar39;
    puVar15 = &UNK_10000680b;
    ppuVar13 = *(undefined ***)(pcStack_90 + -0x6b2f40ca1a2ef23);
    ppuStack_108 = ppuStack_158;
    uStack_98 = UNRECOVERED_JUMPTABLE_08;
    break;
  case (undefined **)0x100005e51:
    uVar38 = uVar38 + 0xfae7f6bd;
    bVar55 = uVar38 < (uVar42 ^ uVar25 ^ 0xc87e58d);
    if (uStack_ec + 0xb12562d4 < 0xc87e5f5 == bVar55) {
      bVar55 = uStack_ec + 0xb12562d4 < uVar38;
    }
                    /* WARNING: Could not recover jumptable at 0x000100005eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100005e26 + *(int *)((long)ppuVar48 + (long)(int)(bVar55 + uVar35) * 4)))
                   (&UNK_100005e26 + *(int *)((long)ppuVar48 + (long)(int)(bVar55 + uVar35) * 4),
                    (code *)((long)in_R10 + (long)UNRECOVERED_JUMPTABLE));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100005f1a:
                    /* WARNING: Could not recover jumptable at 0x000100005f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_13)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006005:
    *(byte *)UNRECOVERED_JUMPTABLE_08 = (char)*(code *)UNRECOVERED_JUMPTABLE_08 + bVar9;
                    /* WARNING: Could not recover jumptable at 0x00010000602f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100005fee +
                   *(int *)((long)in_R10 + (long)(int)(uVar40 + (pcStack_70 == (code *)0x0)) * 4)))
                   ();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000611e:
    UNRECOVERED_JUMPTABLE =
         (code *)((long)UNRECOVERED_JUMPTABLE_12 + -0x17) + (long)UNRECOVERED_JUMPTABLE_08;
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE << 8 | *(uint *)UNRECOVERED_JUMPTABLE >> 0x18;
                    /* WARNING: Could not recover jumptable at 0x000100006133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)(*(code *)(&UNK_1000060fb + *(int *)((long)ppuVar48 + (ulong)uVar42 * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006180:
    if (!bVar55) {
      bRamafb3b848fec48341 = bVar9;
                    /* WARNING: Could not recover jumptable at 0x0001000061b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)
           (*(code *)(&UNK_100006183 +
                     *(int *)(&DAT_1006cf290 +
                             (long)(int)(uVar47 + (*(long *)((long)param_5 +
                                                            (ulong)(uVar38 + 0xa34fa5bf)) == 0)) * 4
                             )))();
      return UNRECOVERED_JUMPTABLE_08;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000061ac:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000061fd:
    *UNRECOVERED_JUMPTABLE_08 = (undefined *)0x0;
    UNRECOVERED_JUMPTABLE_08[1] = (undefined *)0x119fef3c5b628321;
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_08 + 2) = 0;
    appuStack_58[1] = (undefined **)&UNK_10000622c;
    ppuStack_a8 = ppuVar48;
    appuStack_58[0] = UNRECOVERED_JUMPTABLE_08;
    puVar15 = (undefined *)(*(code *)ppuVar48)(0x1000);
    *appuStack_58[0] = puVar15;
                    /* WARNING: Could not recover jumptable at 0x00010000625c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000061ef +
                   *(int *)((long)param_1 + (long)(int)(uVar39 + (puVar15 == (undefined *)0x0)) * 4)
                   ))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006397:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100006450:
    appuStack_58[1] = (undefined **)0x100006453;
    (*(code *)ppuVar52)();
    param_1[6] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100006479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)*(int *)((long)ppuVar51 +
                                  (long)(int)(uVar49 + (param_1[8] == (undefined *)0x0)) * 4) +
                   0x1000067b3))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000649f:
    pppuStack_60 = (undefined ***)0x365cb05a40fa504d;
                    /* WARNING: Could not recover jumptable at 0x0001000064b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_08 + (long)UNRECOVERED_JUMPTABLE_12))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000650f:
    ppuVar51 = (undefined **)(ulong)(uVar50 * 0xd);
    ppuVar52 = (undefined **)(ulong)uVar42;
    puVar15 = &UNK_100004fbf;
    ppuVar13 = *(undefined ***)((long)UNRECOVERED_JUMPTABLE_07 + (long)UNRECOVERED_JUMPTABLE_13);
    uVar39 = uVar42;
    appuStack_58[1] = param_1;
    break;
  case (undefined **)0x1000065b0:
    appuStack_58[1] = (undefined **)&UNK_1000065bf;
    uStack_b0 = UNRECOVERED_JUMPTABLE;
    puVar15 = (undefined *)(*UNRECOVERED_JUMPTABLE)(0x1000);
    *ppuVar52 = puVar15;
                    /* WARNING: Could not recover jumptable at 0x0001000065ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100006587 +
                   *(int *)((long)ppuVar51 + (long)(int)(uVar25 + (puVar15 == (undefined *)0x0)) * 4
                           )))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000671f:
  case (undefined **)0x10000667a:
    lVar36 = ((ulong)uStack_1b8 - ((ulong)uStack_1b8 * 2 & 0x681f333462e1d3cc)) +
             -0x4bf06665ce8f161a;
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_08 + 0x11402483c4090245);
    *(byte *)((long)UNRECOVERED_JUMPTABLE_12 + (long)UNRECOVERED_JUMPTABLE) =
         (byte)((ulong)lVar36 >> 0x38) ^ 0xb4;
    ((code *)((long)UNRECOVERED_JUMPTABLE_12 + 1))[(long)UNRECOVERED_JUMPTABLE] =
         (code)((byte)((ulong)lVar36 >> 0x30) ^ 0xf);
    ((code *)((long)UNRECOVERED_JUMPTABLE_12 + 2))[(long)UNRECOVERED_JUMPTABLE] =
         (code)((byte)((ulong)lVar36 >> 0x28) ^ 0x99);
    ((code *)((long)UNRECOVERED_JUMPTABLE_12 + 3))[(long)UNRECOVERED_JUMPTABLE] =
         (code)((byte)((ulong)lVar36 >> 0x20) ^ 0x9a);
    ((code *)((long)UNRECOVERED_JUMPTABLE_12 + 4))[(long)UNRECOVERED_JUMPTABLE] =
         (code)((byte)((ulong)lVar36 >> 0x18) ^ 0x31);
    ((code *)((long)UNRECOVERED_JUMPTABLE_12 + 5))[(long)UNRECOVERED_JUMPTABLE] =
         (code)((byte)((ulong)lVar36 >> 0x10) ^ 0x70);
    ((code *)((long)UNRECOVERED_JUMPTABLE_12 + 6))[(long)UNRECOVERED_JUMPTABLE] =
         (code)((byte)((ulong)lVar36 >> 8) ^ 0xe9);
    ((code *)((long)UNRECOVERED_JUMPTABLE_12 + 7))[(long)UNRECOVERED_JUMPTABLE] =
         (code)((byte)lVar36 ^ 0xe6);
    *(int *)param_5 = *(int *)param_5 + 8;
    ppuStack_120 = param_5;
                    /* WARNING: Could not recover jumptable at 0x000100006750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&LAB_100006731 + *(int *)((long)ppuVar51 + (long)(int)(uVar25 + 1) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006761:
    ppuStack_a0 = ppuStack_78;
    ppuStack_a8 = (undefined **)uStack_c8;
                    /* WARNING: Could not recover jumptable at 0x0001000067a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000a8a7 +
                   *(int *)((long)ppuVar51 +
                           (long)(int)(uVar38 + 0x81818f42 + (uint)(byte)cVar54) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000067a0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000067cf:
                    /* WARNING: Could not recover jumptable at 0x0001000067cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_12)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000682b:
    piVar28 = &iStack_40;
    *(uint *)(pcStack_90 + (uVar42 | (uint)((ulong)unaff_R15 >> 8))) = uVar38;
    *(undefined4 *)(pcStack_90 + -0x6b2f40ca1a2ef17) = 0x13af2ab3;
    uVar49 = 0x3166a97d;
    uVar25 = 0x8f9e5493;
    pppuStack_60 = (undefined ***)pcStack_90;
    ppuStack_78 = uStack_98;
    ppuStack_c0 = (undefined **)uStack_b0;
    ppuVar51 = &PTR__bootstrap_look_up_10082e9f0;
    goto code_r0x000100006882;
  case (undefined **)0x100006904:
                    /* WARNING: Could not recover jumptable at 0x00010000691a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000068dd + *(int *)((long)param_1 + (ulong)(uStack_ec + uVar42) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006a07:
    appuStack_58[1] = (undefined **)&UNK_100006a0c;
    lStack_d8 = (*(code *)(ulong)(uVar38 - 3))();
    uStack_88 = (undefined **)(ppuVar52[(int)(uVar49 - 0x7c)] + -3);
    appuStack_58[1] = (undefined **)&UNK_100006a4c;
    (*(code *)(ppuVar52[(int)(uVar49 - 0x86)] + -3))(lStack_d8,uStack_88,*ppuVar51);
    ppuStack_a0 = (undefined **)0x0;
    appuStack_58[1] = (undefined **)&UNK_100006a72;
    lVar36 = (*(code *)(ppuVar52[(int)(uVar49 ^ 0x90)] + -2))(ppuStack_128,0);
    UNRECOVERED_JUMPTABLE = (code *)(ulong)(uVar49 + (lVar36 == 0));
code_r0x000100006a7a:
                    /* WARNING: Could not recover jumptable at 0x000100006aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000069d2 + *(int *)(&DAT_1006cf2d0 + (long)(int)UNRECOVERED_JUMPTABLE * 4)
                   ))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006a7a:
    goto code_r0x000100006a7a;
  case (undefined **)0x100006ac9:
    uStack_130 = 0;
    pppuStack_60 = (undefined ***)0x365cb05a40fa504d;
    uStack_d0 = 0x365cb05a40fa504d;
    ppuStack_c0 = (undefined **)0x365cb05a40fa504d;
    appuStack_58[0] = (undefined **)0x365cb05a40fa504d;
    ppuStack_e0 = (undefined **)0x365cb05a40fa504d;
                    /* WARNING: Could not recover jumptable at 0x000100006b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100006aa6 +
                   *(int *)((long)ppuVar51 + (long)(int)(uVar25 + (uVar38 == 0)) * 4)))
                   (self,UNRECOVERED_JUMPTABLE_11,
                    &UNK_100006aa6 +
                    *(int *)((long)ppuVar51 + (long)(int)(uVar25 + (uVar38 == 0)) * 4),0,param_5,
                    0x3165f9b2);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006d1c:
    uVar47 = uVar49 - 0x87;
    uVar42 = uVar49 + uVar42 + 0xa299c27c;
    pppuStack_60 = (undefined ***)0x365cb05a40fa504d;
    ppuStack_a0 = ppuStack_78;
    ppuStack_a8 = (undefined **)uStack_c8;
    ppuStack_f8 = (undefined **)pcStack_90;
    puVar15 = &UNK_10000749b;
    ppuStack_100 = param_1;
    ppuStack_110 = UNRECOVERED_JUMPTABLE_08;
    goto LAB_10000ae19;
  case (undefined **)0x100006d9c:
    appuStack_58[1] = (undefined **)&UNK_100006db1;
    lVar36 = (*uStack_b0)(uVar49 + uVar35 + uVar25 + -0x7de7812c);
                    /* WARNING: Could not recover jumptable at 0x000100006de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100006d87 +
                   *(int *)(&DAT_1006cf2d0 + (long)(int)(uVar39 + (lVar36 == 0)) * 4)))(0);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006e49:
    uVar49 = uStack_ec * 2 + 0x493af9be;
    uVar49 = (uVar49 ^ (uVar25 ^ 0x8f9e5444) - 0x8d159c) + (uVar49 & 0xff72eb3a) * 2 + 0xada24ce2;
    bVar55 = uVar38 < uVar49;
    if (uVar38 < 0xad15381d != uVar49 < 0xad15381d) {
      bVar55 = uVar49 < 0xad15381d;
    }
                    /* WARNING: Could not recover jumptable at 0x000100006edb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100004067 +
                   *(int *)((long)ppuVar48 + (long)(int)(bVar55 + uVar25 + 0x7061ac40) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006e63:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100006eb7:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_12 + 0xf);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE << 0x17 | *(uint *)UNRECOVERED_JUMPTABLE >> 9;
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006f19:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x100007be4);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE << 0x14 | *(uint *)UNRECOVERED_JUMPTABLE >> 0xc;
    if ((long)UNRECOVERED_JUMPTABLE_12 < -0x100007c57) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar49 = uStack_ec * 2 + 0xb42e07cc;
    uVar49 = (uVar49 ^ 0xf5effdfa) + (uVar49 & 0xf5effdfa) * 2 + 0x9343ad78;
    bVar56 = uVar49 < (uVar39 ^ 0x8933abce);
    bVar55 = uVar42 < uVar49;
    if (uVar42 < 0x8933ab72 != bVar56) {
      bVar55 = bVar56;
    }
                    /* WARNING: Could not recover jumptable at 0x000100006f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100006de5 +
                   *(int *)((long)ppuVar51 + (long)(int)((uint)bVar55 + in_stack_401b3caa8) * 4)))()
    ;
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100006f56:
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000072d7:
                    /* WARNING: Could not recover jumptable at 0x0001000072e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x100007267))
                   (self,(code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x100007267));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000074ee:
    pcVar16 = (char *)((ulong)&stack0xffffffffffffffb8 & 0xffffffff);
    *pcVar16 = *pcVar16 + (char)pcVar16;
    pcVar16[-0x75] = pcVar16[-0x75] + bVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100007613:
    puVar3 = (uint *)(CONCAT62((int6)(short)(uVar42 >> 0x10),
                               CONCAT11((char)(uVar42 >> 8) -
                                        (char)*(code *)((long)self + 0x47894813),bVar19)) * 5 + -0xd
                     );
    *puVar3 = *puVar3 << (bVar19 & 0x1f) | *puVar3 >> 0x20 - (bVar19 & 0x1f);
    pppuStack_60 = (undefined ***)0x6b2f40ca1a2ef23;
code_r0x000100006882:
    pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,uVar49);
    UNRECOVERED_JUMPTABLE = (code *)ppuVar51[(int)(uVar25 ^ 0x8f9e54b1)];
    *(undefined **)((long)piVar28 + -8) = &UNK_1000068b2;
    (*UNRECOVERED_JUMPTABLE)(ppuStack_78);
    *(undefined **)((long)piVar28 + -8) = &UNK_1000068bc;
    (*UNRECOVERED_JUMPTABLE)(ppuStack_c0);
    ppuStack_68 = (undefined **)UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x0001000068d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100006882 +
                   *(int *)((long)ppuVar48 +
                           (long)(int)(uVar25 + 0x7061ab8d +
                                      (uint)(ppuStack_a0 == (undefined **)0x0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007631:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10000765c:
    *(code *)((long)param_5 + -0x77) = (code)0x90;
    UNK_1006cf249 = UNK_1006cf249 - bVar9;
    if (-1 < UNK_1006cf249) {
      *(uint *)(&stack0x0000000d + in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_12 * 4) =
           *(uint *)(&stack0x0000000d + in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_12 * 4) ^ uVar42;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)(param_1 + 5) = uVar38;
    in_R10 = (undefined **)&DAT_1006cf2d0;
code_r0x00010000766f:
    UNRECOVERED_JUMPTABLE_08 = (undefined **)0x0;
    bVar55 = pppuStack_60 == (undefined ***)0x365cb05a40fa504d;
code_r0x000100007683:
    uVar14 = (ulong)(int)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_08 >> 8),bVar55) +
                         uVar39);
code_r0x00010000768b:
                    /* WARNING: Could not recover jumptable at 0x000100007699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)(*(code *)(&UNK_10000766f + *(int *)((long)in_R10 + uVar14 * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000766c:
    if (-0x100007c58 < (long)UNRECOVERED_JUMPTABLE_12) {
      *(code *)((long)UNRECOVERED_JUMPTABLE_12 + -0x73) =
           (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_12 + -0x73) + bVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x0001000076da:
    *(code *)((long)UNRECOVERED_JUMPTABLE_08 + (long)param_5) =
         *(code *)((long)UNRECOVERED_JUMPTABLE_11 + (long)param_5);
                    /* WARNING: Could not recover jumptable at 0x000100007704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000769c +
                   *(int *)((long)ppuVar48 + (long)(int)((uVar42 == 0x46258109) + uVar40) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000767e:
    bVar55 = pppuStack_60 == (undefined ***)UNRECOVERED_JUMPTABLE_12;
    goto code_r0x000100007683;
  case (undefined **)0x100007681:
    UNRECOVERED_JUMPTABLE =
         (code *)((long)UNRECOVERED_JUMPTABLE_12 +
                 (((ulong)&stack0xffffffffffffffb8 & 0xffffffff) - 0x10));
    *UNRECOVERED_JUMPTABLE = *UNRECOVERED_JUMPTABLE;
    uVar14 = (ulong)(uint)(int)(short)((ulong)&stack0xffffffffffffffb8 & 0xffffffff);
    goto code_r0x00010000768b;
  case (undefined **)0x1000076b3:
    *(code *)((long)UNRECOVERED_JUMPTABLE_08 + (long)param_5) =
         *(code *)((long)UNRECOVERED_JUMPTABLE_11 + (long)param_5);
    *(code *)((long)UNRECOVERED_JUMPTABLE_08 + (ulong)(uVar42 + 0xb9da7ef4)) =
         *(code *)((long)UNRECOVERED_JUMPTABLE_11 + (ulong)(uVar42 + 0xb9da7ef4));
    param_5 = (undefined **)(ulong)(uVar40 + uVar42 + 0xb9da7ece);
    uVar42 = uVar42 - 4;
    goto code_r0x0001000076da;
  case (undefined **)0x1000077c9:
    *(int *)UNRECOVERED_JUMPTABLE_12 = *(int *)UNRECOVERED_JUMPTABLE_12 + 1;
    *(byte *)UNRECOVERED_JUMPTABLE_08 = (char)*(code *)UNRECOVERED_JUMPTABLE_08 + bVar9;
    *(code *)((long)UNRECOVERED_JUMPTABLE_08 + 0x21) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_08 + 0x21) + bVar19);
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000077e6:
    uVar14 = (ulong)(uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                    uVar42 << 0x18);
    *(uint *)UNRECOVERED_JUMPTABLE = uVar38 + 0xc;
    *ppuStack_190 =
         (undefined *)
         ((uVar14 - (uVar14 * 2 & 0x1fd7f658460e8c74)) + 0xfebfb2c2307463a ^ 0xfebfb2c2307463a);
    goto code_r0x00010000766f;
  case (undefined **)0x1000078c3:
    uStack_e8 = uStack_ec;
    ppuStack_e0 = UNRECOVERED_JUMPTABLE_13;
    ppuStack_c0 = UNRECOVERED_JUMPTABLE_13;
    appuStack_58[0] = UNRECOVERED_JUMPTABLE_13;
                    /* WARNING: Could not recover jumptable at 0x0001000078db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_08)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007988:
                    /* WARNING: Could not recover jumptable at 0x00010000798e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_07)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007a0e:
    if (bVar56 || (long)UNRECOVERED_JUMPTABLE_12 < -0x100007c57) {
                    /* WARNING: Could not recover jumptable at 0x0001000079ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)
           (*(code *)(&UNK_100007993 +
                     *(int *)((long)ppuVar48 + (long)(int)((in_R10 == self) + 0xf6be6490) * 4)))
                     (appuStack_58[0],
                      &UNK_100007993 +
                      *(int *)((long)ppuVar48 + (long)(int)((in_R10 == self) + 0xf6be6490) * 4),
                      UNRECOVERED_JUMPTABLE_13,0,0x3165f9b3);
      return UNRECOVERED_JUMPTABLE_08;
    }
    ppuStack_108 = (undefined **)in_R10[0x1ed7cc92];
    puVar15 = &UNK_100007122;
    ppuStack_138 = UNRECOVERED_JUMPTABLE_08;
    break;
  case (undefined **)0x100007a1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100007a53:
    uVar42 = uVar42 + 0xedd696f5;
    UNRECOVERED_JUMPTABLE_13 = (undefined **)(ulong)(uStack_ec + 0xf);
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(ulong)(uStack_ec + 0xf ^ 0x5f37aad8);
    self = (undefined **)&DAT_100007ef3;
    in_R10 = (undefined **)(ulong)(0xa0c855a2 < (uVar38 | 0x32));
    uVar49 = uVar43 * 2 + 0x1d3dda1c;
    param_5 = (undefined **)(ulong)uVar49;
    puVar15 = (undefined *)(ulong)uVar49;
  case (undefined **)0x100007a83:
    uVar47 = (uint)puVar15 ^ 0xf365d7fa;
    uVar49 = (uint)param_5 & 0xf365d7fa;
    ppuStack_b8 = (undefined **)(ulong)(uVar47 + uVar49 * 2 + 0x7dfb3af8);
    uVar49 = uVar47 + uVar49 * 2 + 0x6bd1d263;
    bVar56 = uVar49 < (uint)UNRECOVERED_JUMPTABLE_11;
    bVar55 = uVar42 < uVar49;
    if ((bool)(char)in_R10 != bVar56) {
      bVar55 = bVar56;
    }
                    /* WARNING: Could not recover jumptable at 0x000100007ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)self +
                   (long)*(int *)((long)ppuVar48 +
                                 (long)(int)((uint)bVar55 + (int)UNRECOVERED_JUMPTABLE_13) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007aa6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100007b26:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100007b61:
  case (undefined **)0x100007b5b:
    *(uint *)UNRECOVERED_JUMPTABLE_11 = uVar38 - 0x9c;
    param_5 = (undefined **)0x3166a97d;
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)(long)*(int *)((long)ppuVar48 + (long)(int)(uVar49 + 1) * 4);
    UNRECOVERED_JUMPTABLE_12 = (undefined **)&LAB_100007b75;
    self = appuStack_58[0];
    ppuStack_120 = UNRECOVERED_JUMPTABLE_11;
code_r0x000100007b97:
                    /* WARNING: Could not recover jumptable at 0x000100007b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_12 + (long)UNRECOVERED_JUMPTABLE_08))
                   (self,UNRECOVERED_JUMPTABLE_11,UNRECOVERED_JUMPTABLE_13,
                    (code *)((long)UNRECOVERED_JUMPTABLE_12 + (long)UNRECOVERED_JUMPTABLE_08),
                    param_5);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007b97:
    goto code_r0x000100007b97;
  case (undefined **)0x100007be5:
                    /* WARNING: Could not recover jumptable at 0x000100007c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100007bd4 +
                   *(int *)((long)ppuVar48 +
                           (long)(int)(((int)uVar43 < (int)(uVar38 ^ 0x3166a94c)) + uVar25) * 4)))()
    ;
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007c57:
    goto DAT_100007c57;
  case (undefined **)0x100007c5a:
    goto code_r0x000100007c5a;
  case (undefined **)0x100007c5d:
    *(code *)UNRECOVERED_JUMPTABLE_12 = (code)0x0;
    goto code_r0x000100007c60;
  case (undefined **)0x100007c62:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100007c75:
    goto code_r0x000100007c75;
  case (undefined **)0x100007c76:
    goto code_r0x000100007c76;
  case (undefined **)0x100007c7a:
    goto code_r0x000100007c7a;
  case (undefined **)0x100007c9e:
    goto code_r0x000100007c9e;
  case (undefined **)0x100007ccb:
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)(&UNK_100007cac + *(int *)((long)ppuVar51 + (long)(int)uVar38 * 4));
code_r0x000100007cdc:
    uStack_ec = uVar35;
                    /* WARNING: Could not recover jumptable at 0x000100007cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)UNRECOVERED_JUMPTABLE_08)
                   (UNRECOVERED_JUMPTABLE_11,UNRECOVERED_JUMPTABLE_11,UNRECOVERED_JUMPTABLE_13,0,
                    param_5,0x3165f9b3);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007cdc:
    goto code_r0x000100007cdc;
  case (undefined **)0x100007dba:
    UNRECOVERED_JUMPTABLE =
         (code *)((long)UNRECOVERED_JUMPTABLE_12 + -0x27) + (long)UNRECOVERED_JUMPTABLE_08;
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE << 8 | *(uint *)UNRECOVERED_JUMPTABLE >> 0x18;
                    /* WARNING: Could not recover jumptable at 0x000100007dd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)(*(code *)(&UNK_100007d95 + *(int *)((long)ppuVar48 + (ulong)uVar42 * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007de8:
    appuStack_58[1] = (undefined **)0x100007dee;
    (*(code *)ppuVar52)();
    *param_1 = (undefined *)0x0;
    *(undefined8 *)((long)UNRECOVERED_JUMPTABLE_07 + -0x6b2f40ca1a2ef1b) = 0x13af2ab3716112f2;
    ppuStack_78 = ppuVar51;
    goto code_r0x000100007e17;
  case (undefined **)0x100007e15:
    param_1 = (undefined **)((ulong)param_1 & 0xffffffff);
code_r0x000100007e17:
    appuStack_58[1] = (undefined **)0x100007e1d;
    (*(code *)ppuVar52)(param_1);
    uVar49 = (uint)ppuStack_78;
    appuStack_58[1] = (undefined **)0x100007e79;
    (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar49 ^ 0x8f9e54b0)] + -2))
              (*(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar49 ^ 0x8f9e5490)] + -3)
               ,ppuStack_108,uStack_88._4_4_);
                    /* WARNING: Could not recover jumptable at 0x000100007eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&LAB_100007e20 +
                   *(int *)((long)ppuVar48 +
                           (long)(int)(uVar49 + 0x7061abcd +
                                      (uint)((int)pcStack_70 ==
                                            (uVar49 + 0xb89c746c & 0xb7c53739 ^ 0x3166a975) +
                                            (uVar49 + 0x7e06e026 & 0xf25acb77))) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007e1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100007ea2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100007ed9:
    *(code *)((long)UNRECOVERED_JUMPTABLE_12 + 99) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_12 + 99) + bVar19);
    param_5 = UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007edf:
                    /* WARNING: Could not recover jumptable at 0x000100007eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x100007eb7))
                   (self,UNRECOVERED_JUMPTABLE_11,
                    (code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x100007eb7),UNRECOVERED_JUMPTABLE_12,
                    param_5,0x3165f9b3);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100007eff:
    *(int *)((long)UNRECOVERED_JUMPTABLE_12 + -0x7d) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_12 + -0x7d) + -0x76ba073a;
    ppuVar51 = (undefined **)(ulong)(uVar50 ^ 0x48);
    uVar39 = (uVar39 ^ 0x8e9eed5c) + *(int *)(param_1 + 1);
    ppuVar52 = (undefined **)(ulong)uVar39;
    ppuStack_108 = (undefined **)*param_1;
    puVar15 = &UNK_100007f79;
    ppuStack_180 = UNRECOVERED_JUMPTABLE_08;
    break;
  case (undefined **)0x100007f66:
                    /* WARNING: Could not recover jumptable at 0x000100007f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100007f41 +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_07 + (long)UNRECOVERED_JUMPTABLE_11 * 4)))()
    ;
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000805f:
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000815b:
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008190:
code_r0x000100008190:
    *self = (undefined *)UNRECOVERED_JUMPTABLE_08;
    ppuStack_68 = (undefined **)ppuVar51[(int)param_1 + 0x17];
                    /* WARNING: Could not recover jumptable at 0x0001000081bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(switchD_1000086da::caseD_0 +
           (int)(&switchD_100005882::switchdataD_1006cfa50)
                [(int)param_1 + (uint)(UNRECOVERED_JUMPTABLE_08 == (undefined **)0x0)]))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000081ee:
    uVar49 = (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar38 + 0x858c41d5)) |
             (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                                  (ulong)(uVar35 + uVar38 + 0x858c41a5)) << 8 |
             (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar38 + 0x858c41d3)) <<
             0x10 | uVar40 << 0x18;
    puVar15 = (undefined *)(ulong)((uVar49 ^ 0xb7efa97f) + (uVar49 & 0x37efa97f) * 2);
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(ulong)(uVar38 + 4);
    goto code_r0x000100008242;
  case (undefined **)0x10000823a:
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008240:
code_r0x000100008242:
    *(int *)UNRECOVERED_JUMPTABLE = (int)UNRECOVERED_JUMPTABLE_11;
                    /* WARNING: Could not recover jumptable at 0x000100008276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&LAB_100008245 +
                   *(int *)(&DAT_1006cf2d0 +
                           (long)(int)(((int)puVar15 < (int)(uVar43 + 0xc ^ 0xb7efa946)) + uVar43) *
                           4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008357:
    if ((long)UNRECOVERED_JUMPTABLE_12 < -0x100007c57) {
                    /* WARNING: Could not recover jumptable at 0x000100008359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_13)();
      return UNRECOVERED_JUMPTABLE_08;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100008427:
  case (undefined **)0x100008411:
    uVar49 = *(int *)((long)pppuStack_60 + -0x365cb05a40fa5041) + 0x3f4b81eb;
    uVar42 = *(int *)((long)pppuStack_60 + -0x365cb05a40fa5045) + 0x5c59032f;
    puVar15 = (undefined *)(ulong)(uVar49 < 0xb9bf4015);
    ppuVar52 = in_R10;
    if (uVar42 < (uStack_ec - 0xb ^ 0xb9bf3fc1) + uVar35 == uVar49 < 0xb9bf4015) {
      puVar15 = (undefined *)(ulong)(uVar42 < uVar49);
    }
code_r0x000100008482:
                    /* WARNING: Could not recover jumptable at 0x00010000849f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_100008409 +
                   *(int *)((long)ppuVar52 + (long)(int)(((uint)puVar15 & 0xff) + uStack_ec) * 4)))
                   (&DAT_100008409 +
                    *(int *)((long)ppuVar52 + (long)(int)(((uint)puVar15 & 0xff) + uStack_ec) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008491:
    goto code_r0x000100008482;
  case (undefined **)0x100008613:
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000873d:
    if (!bVar55) {
                    /* WARNING: Could not recover jumptable at 0x000100008766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)
           (*(code *)(&UNK_10000871c +
                     *(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                             (long)(int)((int)CONCAT71(0x6f9dbc,UNRECOVERED_JUMPTABLE_13 ==
                                                                (undefined **)&DAT_1006cf290) +
                                        uVar38) * 4)))(ppuVar51);
      return UNRECOVERED_JUMPTABLE_08;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100008789:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10000882d:
    pcStack_90 = (code *)0x365cb05a40fa504d;
                    /* WARNING: Could not recover jumptable at 0x000100008861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000087e2 +
                   *(int *)((long)ppuVar51 + (long)(int)((uVar35 == uVar42 & bVar9) + uStack_ec) * 4
                           )))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000890b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100008a2c:
    if (-0x100007c58 < (long)UNRECOVERED_JUMPTABLE_12) {
                    /* WARNING: Could not recover jumptable at 0x000100008a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)
           (*(code *)((long)*(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                                    (ulong)((uVar25 ^ 0x15) * 9 + (uint)(self == (undefined **)0x0))
                                    * 4) + 0x1000089f2))();
      return UNRECOVERED_JUMPTABLE_08;
    }
    UNRECOVERED_JUMPTABLE_13 = (undefined **)(ulong)((uVar40 ^ 0x81000 | 0xf287aebe) ^ 0xfffffffe);
    goto code_r0x000100008a3f;
  case (undefined **)0x100008a89:
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(ulong)(uint)(int)(short)UNRECOVERED_JUMPTABLE_08;
    ppuVar32 = (undefined **)&stack0xfffffffffffffff8;
code_r0x000100008a3f:
    iVar46 = ((int)UNRECOVERED_JUMPTABLE_13 - (uVar40 ^ 0x6087228e | 0xd785141) ^ 0x46104ec0) *
             0x65773fe7;
    *(uint *)(ppuVar32 + -7) = iVar46 + uVar25 + -0x41;
    *(int *)((long)ppuVar32 + -0x3c) =
         (int)UNRECOVERED_JUMPTABLE_08 + iVar46 + (int)UNRECOVERED_JUMPTABLE_12;
    appuStack_58[1] = (undefined **)&UNK_100008a73;
    FUN_100014c30();
    iVar46 = *(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                     (long)(int)((*(int *)((long)ppuVar32 + -0x34) == 0x52e88d51) + uVar25) * 4);
    ppuVar32[-0xb] = (undefined *)0x6b2f40ca1a2ef23;
                    /* WARNING: Could not recover jumptable at 0x000100008aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)(&UNK_100008a16 + iVar46))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008a9c:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_08 + in_GS_OFFSET + -0x48);
    *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE ^ uVar42;
    ppuVar30 = (undefined **)(ulong)((uint)&stack0xfffffffffffffff8 & uVar40);
    UNRECOVERED_JUMPTABLE_12 = (undefined **)((long)UNRECOVERED_JUMPTABLE_12 + -1);
    ppuVar32 = ppuVar30;
    bRam45894806b2f40ca1 = bVar9;
    if (UNRECOVERED_JUMPTABLE_12 != (undefined **)0x0 && bVar9 == 0) goto code_r0x000100008a3f;
code_r0x000100008ab0:
    lVar36 = (long)*(int *)(&DAT_1006cf2c4 + (ulong)((self == (undefined **)0x0) + 1) * 4);
    appuStack_58[1] = ppuVar30;
code_r0x000100008ac8:
                    /* WARNING: Could not recover jumptable at 0x000100008ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(FUN_100008ab0 + lVar36))
                   (self,UNRECOVERED_JUMPTABLE_11,UNRECOVERED_JUMPTABLE_13,FUN_100008ab0 + lVar36);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008ab8:
    *(int *)UNRECOVERED_JUMPTABLE_12 = *(int *)UNRECOVERED_JUMPTABLE_12 + 1;
    goto code_r0x000100008ab0;
  case (undefined **)0x100008ac2:
    cVar41 = (code)in(uVar22);
    *(code *)self = cVar41;
    *(code *)((long)UNRECOVERED_JUMPTABLE_08 + 99) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_08 + 99) + bVar19);
    lVar36 = CONCAT71(uVar18,bVar9 + 0x81);
    self = (undefined **)((long)self + (ulong)bVar37 * -2 + 1);
    goto code_r0x000100008ac8;
  case (undefined **)0x100008b01:
    *(int *)UNRECOVERED_JUMPTABLE_12 = *(int *)UNRECOVERED_JUMPTABLE_12 + 1;
                    /* WARNING: Could not recover jumptable at 0x000100008b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100008ad6 +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_07 + (long)(int)(uVar42 + (byte)cVar54) * 4)
                   ))(self,UNRECOVERED_JUMPTABLE_11,
                      &UNK_100008ad6 +
                      *(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                              (long)(int)(uVar42 + (byte)cVar54) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008b40:
    *(int *)((long)param_1 + 0x24) = 0x50a01b4b;
    *param_1 = (undefined *)UNRECOVERED_JUMPTABLE_12;
    uStack_80 = UNRECOVERED_JUMPTABLE_12;
                    /* WARNING: Could not recover jumptable at 0x000100008b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000a1be +
                   *(int *)((long)in_R10 +
                           (long)(int)(uVar39 + (param_1[6] == (undefined *)0x0)) * 4)))
                   (param_1[6],UNRECOVERED_JUMPTABLE_11,
                    &UNK_10000a1be +
                    *(int *)((long)in_R10 +
                            (long)(int)(uVar39 + (param_1[6] == (undefined *)0x0)) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008cb7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100008d1b:
    goto code_r0x000100008d1b;
  case (undefined **)0x100008dd5:
    if (!(bool)cVar54 && !bVar56) {
      UNRECOVERED_JUMPTABLE_08 = (undefined **)FUN_100003ff0();
      return UNRECOVERED_JUMPTABLE_08;
    }
                    /* WARNING: Could not recover jumptable at 0x000100008d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_100008d54 +
                   *(int *)((long)in_R10 +
                           (long)(int)(uVar50 + (param_1[3] == (undefined *)0x0)) * 4)))
                   (param_1[3],
                    &DAT_100008d54 +
                    *(int *)((long)in_R10 +
                            (long)(int)(uVar50 + (param_1[3] == (undefined *)0x0)) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008e04:
    iVar46 = ((uVar43 & 0xe5759ae0) + uVar35 ^ 0xc3eae6ac) * 0x65773fe7;
    _local_48 = (undefined **)CONCAT44(uVar38 + uStack_ec + iVar46,local_48);
    iStack_40 = iVar46 + uVar42 + -0x61;
    appuStack_58[1] = (undefined **)&UNK_100008e34;
    FUN_100014c30();
    UNRECOVERED_JUMPTABLE_08 = (undefined **)FUN_100003918();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008e79:
                    /* WARNING: Could not recover jumptable at 0x000100008ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100008e65 +
                   *(int *)((long)ppuVar52 +
                           (long)(int)(uVar40 + (uVar35 < (uVar43 & 0x49cc5199 ^ 0x43d12553))) * 4))
         )(&UNK_100008e65 +
           *(int *)((long)ppuVar52 +
                   (long)(int)(uVar40 + (uVar35 < (uVar43 & 0x49cc5199 ^ 0x43d12553))) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100008fa9:
    UNRECOVERED_JUMPTABLE_08 = (undefined **)((long)UNRECOVERED_JUMPTABLE_12 + 0x100008f56);
    UNRECOVERED_JUMPTABLE = (code *)0x3165f9b1;
    UNRECOVERED_JUMPTABLE_13 = (undefined **)0x6d94841a1ee4c12e;
    goto code_r0x000100008fc4;
  case (undefined **)0x100008fc3:
    UNRECOVERED_JUMPTABLE = (code *)((long)self + (ulong)bVar37 * -8 + 4);
    iVar46 = in(uVar22);
    *(int *)self = iVar46;
code_r0x000100008fc4:
                    /* WARNING: Could not recover jumptable at 0x000100008fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)UNRECOVERED_JUMPTABLE_08)
                   (UNRECOVERED_JUMPTABLE,UNRECOVERED_JUMPTABLE_11,UNRECOVERED_JUMPTABLE_13);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100009020:
    if (cVar54 == cVar41) {
      uVar43 = (uint)(uVar40 < uVar35);
    }
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(ulong)((uVar43 & 0xff) + uVar47);
  case (undefined **)0x10000903e:
                    /* WARNING: Could not recover jumptable at 0x00010000904d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_100008fd0 + *(int *)((long)ppuVar51 + (long)UNRECOVERED_JUMPTABLE_11 * 4)))
                   (&DAT_100008fd0 + *(int *)((long)ppuVar51 + (long)UNRECOVERED_JUMPTABLE_11 * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000090c1:
                    /* WARNING: Could not recover jumptable at 0x0001000090d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_12 + (ulong)(uVar38 - 0x38)))
                   ((ulong)pcStack_70 & 0xffffffff);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000090db:
    in_stack_00000038._1_4_ = (uVar38 & 0xcdadbf) - 0x23 | 0x21;
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(ulong)(uVar35 + 0x496246db);
    param_5 = (undefined **)(ulong)(in_stack_00000038._1_4_ ^ 0xfbceff79);
    puVar15 = &DAT_1000067a4;
    UNRECOVERED_JUMPTABLE_07 =
         (uint *)(ulong)(in_stack_00000038._1_4_ + 0xb69dc87f < uVar35 + 0x1000);
    UNRECOVERED_JUMPTABLE_08 = (undefined **)0x2000;
    in_R10 = (undefined **)0x2000;
    appuStack_58[1] = UNRECOVERED_JUMPTABLE_13;
    goto code_r0x000100009132;
  case (undefined **)0x100009129:
    in_stack_00000038._1_4_ = uVar38 ^ 0xd3 ^ in_stack_00000038._1_4_;
    UNRECOVERED_JUMPTABLE_08 = UNRECOVERED_JUMPTABLE_11;
code_r0x000100009132:
    uVar47 = (uint)in_R10 ^ 0x7de77fef;
    uVar42 = (int)UNRECOVERED_JUMPTABLE_08 * 2 & (uint)param_5;
    uVar49 = uVar42 + uVar47 + 0xcb7ab6ec;
    bVar55 = (uint)UNRECOVERED_JUMPTABLE_11 < uVar49;
    if ((bool)(char)UNRECOVERED_JUMPTABLE_07 != uVar49 < 0x496236db) {
      bVar55 = uVar49 < 0x496236db;
    }
    ppuStack_c0 = (undefined **)(ulong)(uVar42 + uVar47 + 0xdf7ebcf7);
                    /* WARNING: Could not recover jumptable at 0x000100009192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(puVar15 +
                   *(int *)(&DAT_1006cf2d0 + (long)(int)(bVar55 + in_stack_00000038._1_4_) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100009197:
    appuStack_58[1] = (undefined **)&UNK_1000091a1;
    uStack_80 = param_5;
    (*(code *)ppuStack_68)();
    ppuVar32 = uStack_80;
    *ppuVar52 = (undefined *)0x0;
    *(undefined8 *)((long)uStack_80 + -0x365cb05a40fa5045) = 0x7a73be2e5d663ce6;
    appuStack_58[1] = (undefined **)0x1000091d3;
    (*(code *)ppuStack_68)(ppuVar52);
    appuStack_58[1] = (undefined **)0x100009236;
    ppuStack_78 = (undefined **)(ulong)(iVar46 + 0x7e7e70c1);
    (*(code *)(ppuVar51[iVar46 + -0x38] + -2))
              (*(undefined4 *)(ppuVar51[iVar46 + -0x58] + -3),ppuStack_100,uStack_98._4_4_);
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (long)*(int *)(&DAT_1006cf2d0 +
                       (long)(int)(iVar46 + -0x39 +
                                  (uint)((int)uStack_88 ==
                                        (iVar46 + 0xe5283dd8U & 0x1ad7c1fc) + 0x3166a94d)) * 4);
    ppuVar51 = ppuVar32;
code_r0x00010000925a:
    UNRECOVERED_JUMPTABLE_12 = (undefined **)&LAB_1000091e1;
code_r0x000100009261:
    pppuStack_60 = (undefined ***)ppuVar51;
                    /* WARNING: Could not recover jumptable at 0x000100009268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_12 + (long)UNRECOVERED_JUMPTABLE_08))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100009253:
    *(uint *)(UNRECOVERED_JUMPTABLE_08 + -0xd) =
         *(uint *)(UNRECOVERED_JUMPTABLE_08 + -0xd) | 0x87046349;
    goto code_r0x00010000925a;
  case (undefined **)0x10000925c:
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(ulong)(uVar38 | 0xffffff80);
    goto code_r0x000100009261;
  case (undefined **)0x1000092b0:
    goto code_r0x0001000092b0;
  case (undefined **)0x1000092b2:
    uVar49 = in(0x72);
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(ulong)uVar49;
    goto code_r0x0001000092b0;
  case (undefined **)0x1000092fa:
    *(code *)((long)UNRECOVERED_JUMPTABLE_08 + -0x77) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_08 + -0x77) | 0x90);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100009341:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000095f2:
    *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (long)UNRECOVERED_JUMPTABLE_12) = cVar41;
    *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar38 + 0xfa797577)) = (code)0x8d;
    *(byte *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar38 + 0xfa797578)) = bVar33 ^ 0xf7;
    iVar46 = *(int *)param_1;
    *(int *)param_1 = iVar46 + 4;
    appuStack_58[1] = (undefined **)&DAT_1006cf290;
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(ppuVar52[0x200d9e52] + (iVar46 + 0xfa797579));
    pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,0x3166a97d);
    UNRECOVERED_JUMPTABLE_13 = (undefined **)&DAT_100009cf4;
    iVar46 = -0x1d7b9267;
    ppuVar32 = (undefined **)((ulong)in_R10 & 0xffffffff);
    ppuStack_150 = param_1;
    goto code_r0x00010000ac7d;
  case (undefined **)0x1000096ba:
    pcStack_90 = (code *)((long)_local_48 + CONCAT71(uVar18,0x5c));
    *_local_48 = (undefined *)0x0;
    _local_48[1] = (undefined *)0x7a73be2e5d663ce6;
    *(undefined4 *)(_local_48 + 2) = 0;
    uStack_88 = _local_48;
    _local_48 = (undefined **)&UNK_1000096f5;
    puVar15 = (undefined *)(*uStack_b0)(0x1000);
    *uStack_88 = puVar15;
                    /* WARNING: Could not recover jumptable at 0x000100009716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000096b3 +
                   *(int *)((long)ppuVar51 + (long)(int)(uVar25 + (puVar15 == (undefined *)0x0)) * 4
                           )))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100009775:
    bVar37 = uStack_88._4_1_ << 5;
    bVar9 = uStack_88._4_1_ >> 3;
    uStack_88._0_5_ = CONCAT14(bVar37 | bVar9,(int)uStack_88);
    if (!bVar56) {
      bVar53 = (byte)UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000979a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000971b + *(int *)((long)ppuVar52 + (long)(int)(bVar53 + uVar45) * 4)))
                   (&UNK_10000971b + *(int *)((long)ppuVar52 + (long)(int)(bVar53 + uVar45) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100009804:
    appuStack_58[1] = (undefined **)&UNK_10000981e;
    lVar36 = (*(code *)((long)UNRECOVERED_JUMPTABLE_08 + -1))(ppuVar7,uStack_88,&ppuStack_108);
    ppuStack_150 = (undefined **)0x0;
    pppuStack_60 = (undefined ***)0x365cb05a40fa504d;
    pcStack_90 = (code *)0x365cb05a40fa504d;
                    /* WARNING: Could not recover jumptable at 0x00010000985d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000097e9 +
                   *(int *)((long)ppuVar51 + (long)(int)(uVar42 + (lVar36 == 0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000986d:
    *(int *)((long)(UNRECOVERED_JUMPTABLE_12 + -8) + (long)UNRECOVERED_JUMPTABLE_08) =
         *(int *)((long)(UNRECOVERED_JUMPTABLE_12 + -8) + (long)UNRECOVERED_JUMPTABLE_08) + 1;
    appuStack_58[1] = (undefined **)&UNK_10000989b;
    lVar36 = (*uStack_b0)(((uVar47 ^ 0x6f) * 7 + 0x80987fcb ^ (uVar47 ^ 0x56) * 2) + uVar38);
    UNRECOVERED_JUMPTABLE_12 =
         (undefined **)
         (&UNK_100009867 + *(int *)((long)ppuVar51 + (long)(int)(uVar47 + (lVar36 == 0)) * 4));
code_r0x0001000098ba:
    ppuStack_158 = (undefined **)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001000098cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_12)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x1000098b4:
    *(int *)((long)UNRECOVERED_JUMPTABLE_11 + 0x3165f9b2) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_11 + 0x3165f9b2) >> 1;
  case (undefined **)0x1000098ba:
    goto code_r0x0001000098ba;
  case (undefined **)0x1000099d6:
    *(undefined ***)((long)ppuVar52 + (long)param_1) = ppuStack_158;
    *(int *)ppuStack_1b0 = (int)ppuStack_e0;
                    /* WARNING: Could not recover jumptable at 0x000100009a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_1000099f8 + *(int *)((long)ppuVar51 + (long)(iVar46 + -8) * 4)))
                   (self,0x3166a97d,UNRECOVERED_JUMPTABLE,
                    &UNK_1000099f8 + *(int *)((long)ppuVar51 + (long)(iVar46 + -8) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100009bf9:
    if (-0x100007c58 < (long)UNRECOVERED_JUMPTABLE_12) {
      _local_48 = (undefined **)&UNK_100009bb8;
      lVar36 = (*(code *)ppuVar48)(uStack_ec + (uVar38 ^ 0xd4) * 0x53 + -0x6a6ffbd4,ppuVar8);
      ppuStack_198 = (undefined **)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100009bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)
           (*(code *)(&UNK_100009b92 +
                     (int)(&switchD_100005882::switchdataD_1006cfa50)[(int)(uVar39 + (lVar36 == 0))]
                     ))();
      return UNRECOVERED_JUMPTABLE_08;
    }
    *param_1 = (undefined *)0x0;
    param_1[1] = (undefined *)0x58dc301c3fe66e74;
    appuStack_58[1] = (undefined **)&UNK_100002cff;
    (*UNRECOVERED_JUMPTABLE)(param_1);
    ppuStack_120 = uStack_98;
    goto code_r0x0001000038b7;
  case (undefined **)0x100009c21:
    ppuStack_78 = (undefined **)CONCAT71(uVar18,bVar9 - 0x2f);
    ppuStack_a8 = (undefined **)0x0;
    appuStack_58[1] = (undefined **)&UNK_100009c44;
    lVar36 = (*(code *)((long)param_5 + -2))(ppuStack_128,ppuStack_78,0);
    ppuStack_a0 = ppuStack_78;
                    /* WARNING: Could not recover jumptable at 0x000100009c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_100009c01 +
                   *(int *)(&DAT_1006cf2d0 + (long)(int)(uVar25 + (lVar36 == 0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100009ddb:
    puVar29 = (undefined8 *)register0x00000020;
    puVar31 = unaff_RBP;
  case (undefined **)0x100009ddc:
    pcVar16 = (char *)CONCAT71(uVar18,*(code *)UNRECOVERED_JUMPTABLE_08);
    *pcVar16 = *pcVar16 + (char)*(code *)UNRECOVERED_JUMPTABLE_08;
    *(undefined ***)(puVar31 + -0xa0) = UNRECOVERED_JUMPTABLE_12;
    puVar15 = (&PTR__bootstrap_look_up_10082e9f0)[iVar46 + -0x94];
    puVar4 = (&PTR__bootstrap_look_up_10082e9f0)[iVar46 + -0x84];
    *(undefined8 *)((long)puVar29 + -8) = 0x100009e18;
    (*(code *)(puVar15 + -1))(pcVar16,puVar4 + -2);
    puVar15 = (&PTR__bootstrap_look_up_10082e9f0)[iVar46 + -0x90];
    *(undefined8 *)((long)puVar29 + -8) = 0x100009e2e;
    (*(code *)(puVar15 + -1))(pcVar16);
    puVar15 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar47 ^ 0x8a)];
    *(char **)(puVar31 + -0xc0) = pcVar16;
    uVar17 = *(undefined8 *)(puVar31 + -0xd0);
    *(undefined **)(puVar31 + -0x178) = puVar15 + -2;
    *(undefined8 *)((long)puVar29 + -8) = 0x100009e5d;
    uVar17 = (*(code *)(puVar15 + -2))(pcVar16,uVar17);
    UNRECOVERED_JUMPTABLE = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar47 ^ 0xba)];
    *(undefined8 *)(puVar31 + -0x48) = uVar17;
    *(undefined8 *)((long)puVar29 + -8) = 0x100009e75;
    auVar57 = (*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Could not recover jumptable at 0x000100009eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_100009dbf +
                   *(int *)(&DAT_1006cf2d0 +
                           (long)(int)((auVar57._0_8_ ==
                                       (&PTR__bootstrap_look_up_10082e9f0)[iVar46 + -0xa1] + -0xe) +
                                      uVar47) * 4)))
                   (0x2164ae80,(&PTR__bootstrap_look_up_10082e9f0)[iVar46 + -0xa1] + -0xe,
                    auVar57._8_8_,
                    &DAT_100009dbf +
                    *(int *)(&DAT_1006cf2d0 +
                            (long)(int)((auVar57._0_8_ ==
                                        (&PTR__bootstrap_look_up_10082e9f0)[iVar46 + -0xa1] + -0xe)
                                       + uVar47) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x100009ef2:
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)(ulong)((uVar42 ^ 0xbbeefbff) + (uVar38 & 0x3beefbff) * 2);
    UNRECOVERED_JUMPTABLE_12 = (undefined **)((ulong)param_1 & 0xffffffff);
  case (undefined **)0x100009eef:
    pcVar1 = (code *)((long)UNRECOVERED_JUMPTABLE_12 - 0xe7e3f);
    *(uint *)pcVar1 = *(uint *)pcVar1 >> 0x1b | *(uint *)pcVar1 << 5;
    out(uVar22,(char)UNRECOVERED_JUMPTABLE_08);
                    /* WARNING: Could not recover jumptable at 0x000100009f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_100009eb4 +
                   *(int *)(UNRECOVERED_JUMPTABLE +
                           (long)(int)(((uint)UNRECOVERED_JUMPTABLE_08 ==
                                       ((uint)UNRECOVERED_JUMPTABLE_12 ^ 0xbbeefbd8)) + uVar47) * 4)
                   ))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000a469:
    *(int *)((long)UNRECOVERED_JUMPTABLE_12 + -0x75) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_12 + -0x75) + 1;
    lVar36 = *(long *)((long)ppuVar52 + (long)UNRECOVERED_JUMPTABLE);
    iVar46 = (int)CONCAT71(uVar18,bVar9 + 0x24);
    *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xd953facd)) = 0;
    *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xd953face)) = 0;
    *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xd953facf)) = 0;
    *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xd953fad0)) = 1;
    *(int *)ppuVar48 = *(int *)ppuVar48 + 4;
    ppuStack_160 = ppuVar48;
    ppuStack_b8 = ppuVar52;
                    /* WARNING: Could not recover jumptable at 0x00010000a4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&LAB_10000a4be +
                   *(int *)((long)ppuVar51 + (long)(int)((uVar25 ^ 0xb3) * 0x3d + 1) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000a610:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_08 + in_GS_OFFSET + -0x48);
    *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE ^ uVar42;
    pppuStack_60 = (undefined ***)CONCAT71(uVar18,0x5c);
    appuStack_58[1] = param_5;
    goto code_r0x00010000a621;
  case (undefined **)0x10000a61e:
    pppuStack_60 = (undefined ***)CONCAT44(pppuStack_60._4_4_,uVar38);
    param_5 = UNRECOVERED_JUMPTABLE_13;
code_r0x00010000a621:
                    /* WARNING: Could not recover jumptable at 0x00010000a621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_12)(self,UNRECOVERED_JUMPTABLE_11,param_5);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000a6b8:
    uVar49 = uStack_ec * 2 + 0x2b242a4e;
    uVar49 = (uVar38 ^ 0x3c9bcd4e) * 10 + (uVar49 ^ 0x6a6ffadb) + (uVar49 & 0xea6ffada) * 2 +
             0x118d5ff1;
    bVar55 = uStack_ec + 0x118f70f1 < uVar49;
    if (uStack_ec + 0x118f70f1 < 0x7bfd5bc6 != uVar49 < 0x7bfd5bc6) {
      bVar55 = uVar49 < 0x7bfd5bc6;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000a754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000b3e3 +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                           (long)(int)(bVar55 + uVar38 + 0x4364339e) * 4)))
                   (&UNK_10000b3e3 +
                    *(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                            (long)(int)(bVar55 + uVar38 + 0x4364339e) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000aaf8:
    piVar2 = (int *)(CONCAT71(uVar18,bVar9 ^ (byte)*(code *)UNRECOVERED_JUMPTABLE_13) + -0x6a0038ff)
    ;
    *piVar2 = *piVar2 + uStack_ec;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10000ab97:
    pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,uVar42);
                    /* WARNING: Could not recover jumptable at 0x00010000ab9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_08)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000ac6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10000ae02:
    puVar15 = &UNK_100009652;
    appuStack_58[0] = UNRECOVERED_JUMPTABLE_13;
LAB_10000ae19:
    lVar36 = (long)*(int *)((long)ppuVar51 +
                           (long)(int)(uVar47 + (UNRECOVERED_JUMPTABLE_08 < ppuStack_100)) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010000ae61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(FUN_10000ae15 + lVar36 + 4))
                   ((uVar42 - ((uVar47 + 0xbd ^ 0xe2846e50) & uVar42 * 2)) + -0xebdc8be,lVar36,
                    appuStack_58[0],puVar15,uVar47 + 0xbd ^ 0xc9,FUN_10000ae15 + lVar36 + 4);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000ae86:
    uStack_d0 = (ulong)UNRECOVERED_JUMPTABLE_13 & 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00010000aea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000ae65 + *(int *)((long)ppuVar51 + (long)UNRECOVERED_JUMPTABLE_08 * 4)))
                   ();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000afc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10000b0b9:
    uVar49 = (uint)CONCAT71(0x1006cf2,cVar54);
    if ((code)(uVar43 < (uStack_ec ^ 0xfd8fc815)) == cVar54) {
      uVar49 = (uint)(uVar43 < uVar42);
    }
                    /* WARNING: Could not recover jumptable at 0x00010000b0fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000b081 +
                   *(int *)((long)ppuVar51 + (long)(int)((uVar49 & 0xff) + uVar40) * 4)))
                   (&UNK_10000b081 +
                    *(int *)((long)ppuVar51 + (long)(int)((uVar49 & 0xff) + uVar40) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000b267:
    *(int *)((long)UNRECOVERED_JUMPTABLE_12 + -0x77) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_12 + -0x77) + -1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case (undefined **)0x10000b2d1:
    if (bVar56) {
      appuStack_58[1] = (undefined **)&UNK_10000b2f4;
      appuStack_58[0] = UNRECOVERED_JUMPTABLE_13;
      (*(code *)ppuStack_68)(*(undefined8 *)((long)ppuStack_b8 + -0x669f112c1c206035));
      *(undefined ***)((long)ppuStack_b8 + -0x669f112c1c206035) = ppuStack_148;
      *puStack_1a8 = (undefined4)uStack_d0;
      iVar46 = *piStack_168;
      lVar36 = *(long *)((long)ppuStack_b8 + -0x669f112c1c206035);
      *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xd953facd)) = 0x85;
      *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xd953face)) = 0xfe;
      *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xd953facf)) = 99;
      *(undefined1 *)(lVar36 + (ulong)(iVar46 + 0xd953fad0)) = 0xb0;
      *piStack_168 = *piStack_168 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000b38f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)(*(code *)((long)*(int *)(ppuVar51 + 0x62) + 0x10000b369))();
      return UNRECOVERED_JUMPTABLE_08;
    }
    out(0x31,bVar9);
    iVar46 = *(int *)(&DAT_1006cf2d0 +
                     (long)(int)((int)CONCAT71(iVar20,UNRECOVERED_JUMPTABLE_08 == ppuVar48) + uVar25
                                ) * 4);
    *(code **)(unaff_RBP + -0x98) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x00010000b2cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)(&UNK_10000b243 + iVar46))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000b46b:
    UNRECOVERED_JUMPTABLE =
         (code *)((long)UNRECOVERED_JUMPTABLE_12 +
                 (((ulong)&stack0xffffffffffffffb8 & 0xffffffff) - 0x1f));
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE << 8 | *(uint *)UNRECOVERED_JUMPTABLE >> 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010000b495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)(*(code *)(&UNK_10000b45b + *(int *)((long)ppuVar52 + (ulong)uVar42 * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000b58a:
    *(undefined **)((ulong)(uVar40 - 0x18) - 8) = &UNK_10000b5a4;
    lVar36 = (*pcStack_90)(uVar49 + uStack_ec + -0x18 + (uVar49 ^ 0x818fffbd));
    uStack_188 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010000b5db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_10000b580 +
                   (int)(&switchD_100005882::switchdataD_1006cfa50)[(int)(uVar49 + (lVar36 == 0))]))
                   ();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000b648:
    bVar55 = uVar40 < 0x6cf290;
    if (uVar43 < uVar25 + 0x3317011c == uVar40 < 0x6cf290) {
      bVar55 = uVar43 < uVar40;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000b6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000b60a +
                   (int)(&switchD_100005882::switchdataD_1006cfa50)[(int)(bVar55 + uVar35)]))
                   (&UNK_10000b60a +
                    (int)(&switchD_100005882::switchdataD_1006cfa50)[(int)(bVar55 + uVar35)],
                    (code *)((long)appuStack_58[1] + (long)UNRECOVERED_JUMPTABLE),
                    UNRECOVERED_JUMPTABLE_13,uVar42 + 0x331700fb);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000b7df:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10000bd5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10000bdaa:
    uStack_188 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010000bde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(UNRECOVERED_JUMPTABLE_12 + 0x17ab))
                   (pppuStack_60,UNRECOVERED_JUMPTABLE_11,UNRECOVERED_JUMPTABLE_12 + 0x17ab,0,
                    appuStack_58[1],ppuVar48);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000be90:
                    /* WARNING: Could not recover jumptable at 0x00010000be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_08)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000beb5:
    ppuStack_1d8 = UNRECOVERED_JUMPTABLE_11;
    ppuStack_1c0 = UNRECOVERED_JUMPTABLE_08;
LAB_10000de3e:
    iVar46 = (uVar47 ^ 0xd) * 3;
    lVar36 = (long)*(int *)((long)ppuVar51 +
                           (long)(int)(uVar47 + (UNRECOVERED_JUMPTABLE_08 < ppuStack_1d8)) * 4);
    UNRECOVERED_JUMPTABLE = (code *)(lVar36 + 0x10000de3e);
                    /* WARNING: Could not recover jumptable at 0x00010000de82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE)
                   (((int)self -
                    ((iVar46 + 0xe2846e43U ^ uVar47 * 0x13) & (int)UNRECOVERED_JUMPTABLE_13 * 2)) +
                    -0xebdc8be,ppuStack_1d8,lVar36,UNRECOVERED_JUMPTABLE_12,iVar46,
                    UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000bfcd:
    UNRECOVERED_JUMPTABLE =
         (code *)(&DAT_10000bfce +
                 *(int *)((long)UNRECOVERED_JUMPTABLE_07 +
                         (long)(int)((uint)(in_R10 == (undefined **)0x3c616f4ea01f76b0) +
                                    (int)&stack0xffffffffffffffb8 + 0x8c) * 4));
    goto code_r0x00010000c006;
  case (undefined **)0x10000c001:
    UNRECOVERED_JUMPTABLE = (code *)0x3165f9b3;
code_r0x00010000c006:
                    /* WARNING: Could not recover jumptable at 0x00010000c00f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000c127:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10000c140:
    iVar46 = (uVar38 == (uStack_ec ^ 2 ^ uVar47 ^ 0x4aed975a)) + uStack_ec;
    bRam4140604e8ea28d44 = bVar9;
                    /* WARNING: Could not recover jumptable at 0x00010000c17a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000c141 + *(int *)((long)param_5 + (long)iVar46 * 4)))
                   (iVar46,&UNK_10000c141 + *(int *)((long)param_5 + (long)iVar46 * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000c1b8:
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000c36d:
    if (bVar9 != 0) {
      UNRECOVERED_JUMPTABLE_07 = (uint *)in_R10;
    }
                    /* WARNING: Could not recover jumptable at 0x00010000c390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                   (long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                              [(int)(uVar49 + 0xe7443798 + ((uint)UNRECOVERED_JUMPTABLE_07 & 0xff))]
                   ))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000c3cc:
                    /* WARNING: Could not recover jumptable at 0x00010000c3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_10000c3c5 +
                   (int)(&switchD_10000d217::switchdataD_1006d07b0)
                        [(int)(((int)uVar43 < (int)(uVar49 + (uVar42 ^ 0x13) + 0x3166a922)) + uVar49
                              )]))
                   (self,UNRECOVERED_JUMPTABLE_11,
                    &DAT_10000c3c5 +
                    (int)(&switchD_10000d217::switchdataD_1006d07b0)
                         [(int)(((int)uVar43 < (int)(uVar49 + (uVar42 ^ 0x13) + 0x3166a922)) +
                               uVar49)]);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000c5ea:
    iVar46 = uStack_80._1_4_ + 1;
    uStack_80._0_5_ = CONCAT41(iVar46,(undefined1)uStack_80);
    uVar42 = uVar39 + 0xee4d4706 & 0x11b2b8ff;
    appuStack_58[0] = (undefined **)0xb;
    ppuStack_140 = UNRECOVERED_JUMPTABLE_08;
    ppuStack_68 = ppuVar48;
                    /* WARNING: Could not recover jumptable at 0x00010000c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                               [(int)(uVar42 + (UNRECOVERED_JUMPTABLE_08 < *UNRECOVERED_JUMPTABLE_12
                                               ))] + 0x10000c612))
                   ((uVar49 - ((uint)((long)UNRECOVERED_JUMPTABLE <<
                                     (((char)uVar42 - 2U ^ 0x15) & 0x3f)) &
                              ((uVar42 + 0x34 | 0x81) ^ 0xe2846e4f))) + -0xebdc8be,
                    *UNRECOVERED_JUMPTABLE_12,&UNK_100012f30,
                    (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                        [(int)(uVar42 + (UNRECOVERED_JUMPTABLE_08 <
                                                        *UNRECOVERED_JUMPTABLE_12))] + 0x10000c612))
    ;
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000c831:
    pcVar1 = (code *)((long)UNRECOVERED_JUMPTABLE_12 + -9) + (long)self;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x00010000c856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000c80d +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)
                        [(int)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE >> 8),
                                             *(int *)pcVar1 == 0) + uVar25)]))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000c85b:
                    /* WARNING: Could not recover jumptable at 0x00010000c87f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000c85b +
                   *(int *)((long)ppuVar52 +
                           (long)(int)(uVar50 + 4 + (uint)(*param_1 == (undefined *)0x0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000c8ba:
    appuStack_58[1] = (undefined **)&UNK_10000c8c8;
    (*pcStack_70)(*(undefined8 *)((long)param_1 + (long)ppuStack_b8));
    *(undefined ***)((long)param_1 + (long)ppuStack_b8) = ppuStack_1c0;
    *puStack_1f0 = uStack_f0;
                    /* WARNING: Could not recover jumptable at 0x00010000c92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)((long)*(int *)((long)ppuVar51 + (long)(int)(uVar39 + 1) * 4) + 0x10000c8ea))
                   (0x3166a97d);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000c993:
    *(uint *)((long)self + -0x73) = uVar38;
    goto code_r0x00010000c980;
  case (undefined **)0x10000c9b9:
    *(int *)((long)UNRECOVERED_JUMPTABLE_12 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_12 + 1) + -1
    ;
    goto code_r0x00010000c980;
  case (undefined **)0x10000c9bf:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_12 + -1);
    ppuVar32 = (undefined **)&stack0xfffffffffffffff8;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0 || bVar56) {
      *param_1 = (undefined *)0x0;
      param_1[1] = (undefined *)0x696c206b5a3a915d;
      appuStack_58[1] = (undefined **)0x1000101e1;
      (*pcStack_70)(param_1);
      ppuStack_68 = (undefined **)0x650a959f740c42c3;
      uStack_80 = (undefined **)CONCAT44(uStack_80._4_4_,uVar47);
      UNRECOVERED_JUMPTABLE =
           (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)((uVar50 ^ 0x18bbc806) + 0xe74437aa)];
      appuStack_58[1] = (undefined **)0x10000f795;
      (*UNRECOVERED_JUMPTABLE)(uStack_b0);
      appuStack_58[1] = (undefined **)0x10000f79e;
      (*UNRECOVERED_JUMPTABLE)(ppuStack_c0);
                    /* WARNING: Could not recover jumptable at 0x00010000f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)
           (*(code *)((long)(int)(&switchD_10000d217::switchdataD_1006d07b0)
                                 [(int)((uVar50 ^ 0x18bbc806) + 0xe74437a6 +
                                       (uint)(ppuStack_138 == (undefined **)0x0))] + 0x10000f758))()
      ;
      return UNRECOVERED_JUMPTABLE_08;
    }
    while( true ) {
      ppuVar30 = UNRECOVERED_JUMPTABLE_08;
      uVar14 = (ulong)ppuVar32 & 0xffffffff;
      bVar37 = (byte)(uVar14 >> 8) | (byte)*(code *)((long)ppuVar30 + -1);
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + -1;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0 || bVar37 == 0) break;
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)CONCAT62((int6)(uVar14 >> 0x10),CONCAT11(bVar37,(char)uVar14));
      ppuVar32 = ppuVar30;
      if (bVar37 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
code_r0x00010000c980:
                    /* WARNING: Could not recover jumptable at 0x00010000c9bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000c980 +
                   *(int *)((long)ppuVar51 +
                           (long)(int)(uVar43 + (uVar40 < (((uVar43 + 0x1011c02e | 0x8aa0830) ^
                                                           0x18bbc87a) * 0xb ^ 0x15))) * 4)))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000c9fb:
    if ((code *)((long)UNRECOVERED_JUMPTABLE_12 + -1) == (code *)0x0 || bVar56) {
      return UNRECOVERED_JUMPTABLE_08;
    }
    if (!bVar56) {
      uVar45 = 0x6cf290;
    }
    lVar36 = (long)*(int *)((long)ppuVar51 +
                           (long)(int)((uVar45 & 0xff) +
                                      (int)(code *)((long)UNRECOVERED_JUMPTABLE_12 + -1)) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010000ca7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_10000c9da + lVar36))
                   (&DAT_10000c9da + lVar36,UNRECOVERED_JUMPTABLE_11,
                    (ulong)appuStack_58[1] & 0xffffffff,lVar36,param_5,in_R10 + uVar14 * 4);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000ccea:
                    /* WARNING: Could not recover jumptable at 0x00010000cd03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000ccd2 + *(int *)((long)ppuVar52 + (long)(int)(uVar40 + uVar42) * 4)))()
    ;
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000cdf6:
    if (uVar44 < 0x3fea2a59 == (bool)(char)uVar47) {
      uVar47 = (uint)(uVar44 < uVar42);
    }
                    /* WARNING: Could not recover jumptable at 0x00010000ce3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_10001361a +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)((uVar47 & 0xff) + uVar49)]
                   ))();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000ce7e:
    appuStack_58[1] = (undefined **)&UNK_10000ce82;
    self = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_08)(uVar42);
    UNRECOVERED_JUMPTABLE_13 = *(undefined ***)UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_08 = (undefined **)(ulong)(uVar25 ^ 0x97);
code_r0x00010000ce9f:
    appuStack_58[0] = (undefined **)(ppuVar48[(int)(uVar25 - 0x89)] + -3);
    appuStack_58[1] = (undefined **)0x10000cec7;
    ppuStack_150 = self;
    (*(code *)(ppuVar48[(int)UNRECOVERED_JUMPTABLE_08] + -3))
              (self,appuStack_58[0],UNRECOVERED_JUMPTABLE_13);
    uStack_b0 = (code *)0x0;
    appuStack_58[1] = (undefined **)0x10000cef6;
    lVar36 = (*(code *)(ppuVar48[(int)(uVar25 ^ 0x8d)] + -2))(piStack_168,0);
                    /* WARNING: Could not recover jumptable at 0x00010000cf29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_10000ce3f +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)(uVar25 + (lVar36 == 0))]))
                   (pppuStack_60,0x4469798c814565b9,
                    &DAT_10000ce3f +
                    (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)(uVar25 + (lVar36 == 0))],
                    (long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                               [(int)(uVar25 + (lVar36 == 0))],appuStack_58[1],UNRECOVERED_JUMPTABLE
                   );
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000ce99:
    goto code_r0x00010000ce9f;
  case (undefined **)0x10000cebf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10000d3e8:
                    /* WARNING: Could not recover jumptable at 0x00010000d3fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000d3ba +
                   *(uint *)((long)UNRECOVERED_JUMPTABLE_11 + (long)UNRECOVERED_JUMPTABLE_08 * 4)))
                   (self,UNRECOVERED_JUMPTABLE_11,
                    &UNK_10000d3ba +
                    *(uint *)((long)UNRECOVERED_JUMPTABLE_11 + (long)UNRECOVERED_JUMPTABLE_08 * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000d43c:
    *(ushort *)UNRECOVERED_JUMPTABLE_12 =
         *(ushort *)UNRECOVERED_JUMPTABLE_12 ^ (ushort)UNRECOVERED_JUMPTABLE_11;
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x39);
    *UNRECOVERED_JUMPTABLE =
         (code)((char)*UNRECOVERED_JUMPTABLE << (bVar19 & 7) |
               (byte)*UNRECOVERED_JUMPTABLE >> 8 - (bVar19 & 7));
    pppuStack_60 = appuStack_58 + 1;
    pppuVar5 = appuStack_58 + 1;
    appuStack_58[1] = (undefined **)&stack0xfffffffffffffff8;
    cVar6 = '\x01';
    do {
      puVar27 = puVar27 + -1;
      pppuVar5 = pppuVar5 + -1;
      *pppuVar5 = (undefined **)*puVar27;
      cVar6 = cVar6 + -1;
    } while ('\0' < cVar6);
                    /* WARNING: Could not recover jumptable at 0x00010000d45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_10000d422 + *(int *)((long)ppuVar51 + (long)(int)(uStack_ec + uVar25) * 4))
         )(self,UNRECOVERED_JUMPTABLE_11,
           &DAT_10000d422 + *(int *)((long)ppuVar51 + (long)(int)(uStack_ec + uVar25) * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000d7b0:
    UNRECOVERED_JUMPTABLE_13 = (undefined **)((ulong)param_5 & 0xffffffff);
    UNRECOVERED_JUMPTABLE_12 = (undefined **)&DAT_10000d3fe;
    self = UNRECOVERED_JUMPTABLE_13;
    goto LAB_10000de3e;
  case (undefined **)0x10000d891:
    *(byte *)(UNRECOVERED_JUMPTABLE_08 + -0xd) =
         (char)*(code *)(UNRECOVERED_JUMPTABLE_08 + -0xd) + bVar19;
    uStack_80 = (undefined **)CONCAT44(uStack_80._4_4_,0x3165f9b2);
                    /* WARNING: Could not recover jumptable at 0x00010000d8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_10000d868 + *(int *)((long)ppuVar51 + (long)UNRECOVERED_JUMPTABLE_08 * 4)))
                   (self,UNRECOVERED_JUMPTABLE_11,0x650a959f740c42c3,
                    &DAT_10000d868 + *(int *)((long)ppuVar51 + (long)UNRECOVERED_JUMPTABLE_08 * 4));
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000d9b8:
                    /* WARNING: Could not recover jumptable at 0x00010000d9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&DAT_10000d9ae +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)(uVar25 + (byte)cVar54)]))
                   ();
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10000ee22:
    appuStack_58[0] = (undefined **)0x742c45ff88570c30;
                    /* WARNING: Could not recover jumptable at 0x00010000ee56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_08 =
         (undefined **)
         (*(code *)(&UNK_10000ee15 +
                   *(int *)((long)param_5 + (long)(int)(uVar39 + (byte)cVar54) * 4)))
                   (0x3165f9b2,UNRECOVERED_JUMPTABLE,UNRECOVERED_JUMPTABLE_13,0x742c45ff88570c30,
                    ppuStack_68);
    return UNRECOVERED_JUMPTABLE_08;
  case (undefined **)0x10001111f:
    pcVar1 = (code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x3e);
    if (CARRY1(bVar24,(byte)*pcVar1)) {
      uVar49 = (uint)((uint)CONCAT71(uVar23,1) < 0x6cf290);
      if (cVar41 != SUB81(in_R10,0)) {
        uVar49 = uVar44;
      }
                    /* WARNING: Could not recover jumptable at 0x00010001114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)
           (*(code *)((long)UNRECOVERED_JUMPTABLE_11 +
                     (long)*(int *)((long)ppuVar48 + (long)(int)((uVar49 & 0xff) + uVar38) * 4)))();
      return UNRECOVERED_JUMPTABLE_08;
    }
    if ((byte)(bVar24 + (char)*pcVar1) != '\0' &&
        SCARRY1(bVar24,(char)*pcVar1) == (char)(bVar24 + (char)*pcVar1) < '\0') {
      UNRECOVERED_JUMPTABLE_08[1] = (undefined *)UNRECOVERED_JUMPTABLE_12;
      *(undefined4 *)(UNRECOVERED_JUMPTABLE_08 + 2) = 0;
      appuStack_58[0] = (undefined **)0x100011186;
      uStack_80 = (undefined **)UNRECOVERED_JUMPTABLE;
      appuStack_58[1] = UNRECOVERED_JUMPTABLE_08;
      puVar15 = (undefined *)(*UNRECOVERED_JUMPTABLE)(0x1000);
      *UNRECOVERED_JUMPTABLE_08 = puVar15;
                    /* WARNING: Could not recover jumptable at 0x0001000111b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_08 =
           (undefined **)
           (*(switchD_10000db39::caseD_0 +
             *(int *)((long)ppuVar48 + (ulong)(uVar39 + (puVar15 == (undefined *)0x0)) * 4)))();
      return UNRECOVERED_JUMPTABLE_08;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar46 = (int)ppuVar51;
  uVar49 = iVar46 + 0xbf0a3ce2U & 0x40f5c31b;
  lVar36 = (long)*(int *)((long)ppuVar48 + (long)(int)(iVar46 + (uint)(ppuVar13 < ppuStack_108)) * 4
                         );
                    /* WARNING: Could not recover jumptable at 0x000100006582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_08 =
       (undefined **)
       (*(FUN_100006533 + lVar36))
                 ((uVar39 + (iVar46 + 0x18652e2U & 0xfe79adcf) + 0xf1423676) -
                  ((uint)((long)ppuVar52 << ((char)uVar49 - 0x17U & 0x3f)) & 0xe2846e84),
                  ppuStack_108,puVar15,lVar36,uVar49,FUN_100006533 + lVar36);
  return UNRECOVERED_JUMPTABLE_08;
code_r0x000100007c9e:
  do {
  } while( true );
code_r0x000100007c7a:
  *(code *)(UNRECOVERED_JUMPTABLE_12 + 6) = *(code *)(UNRECOVERED_JUMPTABLE_12 + 6);
  UNRECOVERED_JUMPTABLE_12 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_13 & 0xffffffff);
  UNRECOVERED_JUMPTABLE_13 = UNRECOVERED_JUMPTABLE_08;
  goto code_r0x000100007c85;
code_r0x000100007c75:
  *(code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x3b2b9cf6) = (code)0xb6;
  goto code_r0x000100007c7c;
DAT_100007c57:
  UNRECOVERED_JUMPTABLE = (code *)((ulong)UNRECOVERED_JUMPTABLE_12 & 0xffffffff);
  goto code_r0x000100007c5a;
}

