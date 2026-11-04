// name: FUN_100019920
// address: 100019920

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00010001e33c) overlaps instruction at (ram,0x00010001e33a)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_100019920(byte *param_1,undefined **param_2,code *UNRECOVERED_JUMPTABLE_04,undefined8 param_4,
             code *param_5)

{
  byte *pbVar1;
  code cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined **UNRECOVERED_JUMPTABLE_11;
  int7 iVar20;
  code *UNRECOVERED_JUMPTABLE_07;
  long lVar18;
  undefined8 uVar19;
  byte bVar21;
  uint uVar22;
  long lVar23;
  undefined **UNRECOVERED_JUMPTABLE;
  char cVar24;
  int iVar25;
  byte bVar27;
  code *unaff_RBX;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  uint uVar33;
  uint *unaff_RBP;
  uint *puVar34;
  uint *puVar35;
  uint *puVar36;
  byte bVar37;
  uint uVar39;
  ulong uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  char cVar44;
  code *in_R10;
  uint *in_R11;
  uint uVar46;
  uint *unaff_R12;
  undefined8 *unaff_R13;
  uint uVar47;
  uint uVar49;
  undefined **unaff_R14;
  uint uVar50;
  undefined **unaff_R15;
  uint *in_GS_OFFSET;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  longdouble in_ST0;
  undefined1 in_XMM14 [16];
  undefined1 auVar55 [16];
  short sVar9;
  uint uVar10;
  uint uVar26;
  undefined7 uVar28;
  uint uVar38;
  uint uVar45;
  uint uVar48;
  
code_r0x000100019920:
  puVar29 = (uint *)((long)register0x00000020 + -8);
  puVar35 = (uint *)((long)register0x00000020 + -8);
  puVar36 = (uint *)((long)register0x00000020 + -8);
  *(uint **)((long)register0x00000020 + -8) = unaff_RBP;
  *(undefined ***)((long)register0x00000020 + -0x10) = unaff_R15;
  *(undefined ***)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
  *(uint **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(code **)((long)register0x00000020 + -0x30) = unaff_RBX;
  puVar30 = (uint *)((long)register0x00000020 + -0x1a8);
  puVar31 = (uint *)((long)register0x00000020 + -0x1a8);
  *(undefined8 *)((long)register0x00000020 + -0x38) =
       *(undefined8 *)
        CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,(uint)PTR____stack_chk_guard_10082cb58);
  UNRECOVERED_JUMPTABLE_11 =
       (undefined **)
       (ulong)((byte)((byte)((ulong)(-0x11 - (long)param_1) >> 0x38) &
                     (byte)((ulong)param_1 >> 0x38)) >> 7 & param_2 != (undefined **)0x0);
switchD_10001997c_caseD_1995b:
  UNRECOVERED_JUMPTABLE_11 = (undefined **)(ulong)(((uint)UNRECOVERED_JUMPTABLE_11 & 0xff) + 7);
switchD_10001997c_caseD_19961:
  unaff_R12 = &switchD_1000183ca::switchdataD_1006d0f70;
  uVar49 = (&switchD_1000183ca::switchdataD_1006d0f70)[(long)UNRECOVERED_JUMPTABLE_11];
  UNRECOVERED_JUMPTABLE_11 = (undefined **)(long)(int)uVar49;
  bVar51 = (undefined **)0xfffffffefffe66a4 < UNRECOVERED_JUMPTABLE_11;
  bVar54 = SCARRY8((long)UNRECOVERED_JUMPTABLE_11,0x10001995b);
  UNRECOVERED_JUMPTABLE = (undefined **)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995b);
  bVar53 = (long)UNRECOVERED_JUMPTABLE < 0;
  bVar52 = UNRECOVERED_JUMPTABLE == (undefined **)0x0;
  uVar42 = 0x3165f9b4;
  uVar41 = 0x3165f9b4;
  uVar47 = (uint)unaff_R14;
  bVar37 = (byte)param_1;
  uVar38 = (uint)param_1;
  uVar50 = (uint)unaff_R15;
  bVar6 = (byte)uVar49;
  sVar9 = (short)uVar49;
  iVar20 = (int7)(int3)(uVar49 >> 8);
  cVar24 = (char)UNRECOVERED_JUMPTABLE_04;
  bVar21 = (byte)UNRECOVERED_JUMPTABLE;
  uVar28 = (undefined7)((ulong)unaff_RBX >> 8);
  uVar43 = (uint)param_2;
  uVar46 = 0x6d0f70;
  bVar27 = (byte)((ulong)unaff_RBX >> 8);
  cVar44 = (char)in_R10;
  uVar33 = (uint)(uint *)((long)register0x00000020 + -8);
  uVar45 = (uint)in_R10;
  uVar26 = (uint)UNRECOVERED_JUMPTABLE_04;
  cVar8 = (char)unaff_R14;
  uVar10 = (uint)unaff_R13;
  uVar22 = (uint)UNRECOVERED_JUMPTABLE;
  uVar48 = (uint)unaff_RBX;
  uVar39 = (uint)param_5;
  ppuVar15 = UNRECOVERED_JUMPTABLE_11;
  puVar32 = (uint *)((long)register0x00000020 + -0x1a8);
  puVar34 = (uint *)((long)register0x00000020 + -8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(UNRECOVERED_JUMPTABLE) {
  case (undefined **)0x10000c612:
                    /* WARNING: Could not recover jumptable at 0x00010000c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                               [(int)(uVar47 + (UNRECOVERED_JUMPTABLE_11 < param_2))] + 0x10000c612)
         )((uVar38 - ((uint)((long)unaff_R15 << ((cVar8 - 2U ^ 0x15) & 0x3f)) &
                     ((uVar47 + 0x34 | 0x81) ^ 0xe2846e4f))) + -0xebdc8be,param_2,
           UNRECOVERED_JUMPTABLE_04,
           (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                               [(int)(uVar47 + (UNRECOVERED_JUMPTABLE_11 < param_2))] + 0x10000c612)
          );
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100012957:
    uVar11 = *(undefined4 *)(unaff_RBX + (long)param_1);
    *(uint *)((long)register0x00000020 + -0x1a8) = 0x12960;
    *(uint *)((long)register0x00000020 + -0x1a4) = 1;
    (**(code **)((long)register0x00000020 + -0x50))(uVar11);
    *(undefined8 *)(unaff_RBX + (long)unaff_R15) =
         *(undefined8 *)((long)register0x00000020 + -0x148);
    **(undefined4 **)((long)register0x00000020 + -0x188) =
         (int)*(undefined8 *)((long)register0x00000020 + -0xe0);
    piVar4 = *(int **)((long)register0x00000020 + -0x78);
    iVar25 = *piVar4;
    *(code **)((long)register0x00000020 + -0xb0) = unaff_RBX;
    lVar18 = *(long *)(unaff_RBX + (long)unaff_R15);
    lVar23 = (*(long *)((long)register0x00000020 + -0x1a8) -
             (*(long *)((long)register0x00000020 + -0x1a8) << ((cVar8 + 8U ^ 0x88) & 0x3f) &
             0x681f333462e1d3ccU)) + -0x4bf06665ce8f161a;
    lVar12 = ((ulong)(iVar25 + 0xa8756e6cU) ^ 0x7effbe781dfebded) +
             (ulong)(iVar25 + 0xa8756e6cU & 0x1dfebded) * 2 + -0x7effbe781dfebded;
    *(byte *)(lVar18 + lVar12) = (byte)((ulong)lVar23 >> 0x38) ^ 0xb4;
    *(byte *)(lVar18 + 1 + lVar12) = (byte)((ulong)lVar23 >> 0x30) ^ 0xf;
    *(byte *)(lVar18 + 2 + lVar12) = (byte)((ulong)lVar23 >> 0x28) ^ 0x99;
    *(byte *)(lVar18 + 3 + lVar12) = (byte)((ulong)lVar23 >> 0x20) ^ 0x9a;
    *(byte *)(lVar18 + 4 + lVar12) = (byte)((ulong)lVar23 >> 0x18) ^ 0x31;
    *(byte *)(lVar18 + 5 + lVar12) = (byte)((ulong)lVar23 >> 0x10) ^ 0x70;
    *(byte *)(lVar18 + 6 + lVar12) = (byte)((ulong)lVar23 >> 8) ^ 0xe9;
    *(byte *)(lVar18 + 7 + lVar12) = (byte)lVar23 ^ 0xe6;
    *(int **)((long)register0x00000020 + -0x78) = piVar4;
    *piVar4 = *piVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x000100012a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)*(int *)((long)unaff_R13 + (long)(int)(uVar47 + 9) * 4) + 0x100012a6d))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100012f03:
                    /* WARNING: Could not recover jumptable at 0x000100012f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100012e9e + (int)(&switchD_100013a5e::switchdataD_1006d0050)[(long)param_2]
                   ))(&DAT_100012e9e +
                      (int)(&switchD_100013a5e::switchdataD_1006d0050)[(long)param_2],
                      0x2d8eb0431bcfd253);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000131f0:
                    /* WARNING: Could not recover jumptable at 0x0001000131f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*UNRECOVERED_JUMPTABLE_04)();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100013a12:
    *(uint *)((long)register0x00000020 + -0x9c) = 0x3166a97d;
    *(code **)((long)register0x00000020 + -0x68) = UNRECOVERED_JUMPTABLE_04;
    *(undefined ***)((long)register0x00000020 + -200) = UNRECOVERED_JUMPTABLE;
    *(undefined ***)((long)register0x00000020 + -0xd8) = UNRECOVERED_JUMPTABLE;
    *(undefined ***)((long)register0x00000020 + -0xc0) = UNRECOVERED_JUMPTABLE;
    *(undefined ***)((long)register0x00000020 + -0xf8) = UNRECOVERED_JUMPTABLE;
    *(undefined ***)((long)register0x00000020 + -0x90) = UNRECOVERED_JUMPTABLE;
    *(uint *)((long)register0x00000020 + -0xa8) = 0x3165f9b4;
    *(uint *)((long)register0x00000020 + -0xa4) = 0;
    *(undefined ***)((long)register0x00000020 + -0x70) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100013a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_11)();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100013bc5:
    lVar18 = *(long *)((long)register0x00000020 + -8);
    *(code **)(lVar18 + -0xd0) = UNRECOVERED_JUMPTABLE_04;
    *(code **)(lVar18 + -0xe0) = UNRECOVERED_JUMPTABLE_04;
    *(code **)(lVar18 + -0xd8) = UNRECOVERED_JUMPTABLE_04;
    *(undefined8 *)(lVar18 + -0x50) = 0x742c45ff88570c30;
    *(undefined8 *)(lVar18 + -0x90) = 0x742c45ff88570c30;
                    /* WARNING: Could not recover jumptable at 0x000100013bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_11)();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100013fa6:
    *param_1 = bVar6;
    *(int *)UNRECOVERED_JUMPTABLE_11 = *(int *)UNRECOVERED_JUMPTABLE_11 + -0x3efb74b8;
    param_1 = (byte *)(ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_11 + -3);
    param_2 = *(undefined ***)((long)register0x00000020 + -0x110);
    UNRECOVERED_JUMPTABLE_04 = (code *)(ulong)*(uint *)((long)register0x00000020 + -0x8c);
    uVar49 = 0x407df22c;
    goto switchD_10001997c_caseD_13fc5;
  case (undefined **)0x100013fbb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100013fc5:
    goto switchD_10001997c_caseD_13fc5;
  case (undefined **)0x100014021:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_11 + 0x1000198de) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_11 + 0x1000198de) + uVar49;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100014282:
    uVar22 = uVar43 + uVar26 * 2 + 0xd4d50b2f;
    bVar51 = uVar49 < uVar22;
    if ((bool)bVar37 != uVar22 < 0x52d0fa9e) {
      bVar51 = uVar22 < 0x52d0fa9e;
    }
    UNRECOVERED_JUMPTABLE_07 =
         (code *)((long)UNRECOVERED_JUMPTABLE +
                 (long)*(int *)((long)unaff_R13 + (long)(int)(bVar51 + uVar47) * 4));
                    /* WARNING: Could not recover jumptable at 0x0001000142cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*UNRECOVERED_JUMPTABLE_07)(UNRECOVERED_JUMPTABLE_07);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100014439:
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE) ^ uVar43;
    UNRECOVERED_JUMPTABLE_07 = (code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x77);
    *UNRECOVERED_JUMPTABLE_07 =
         (code)((byte)*UNRECOVERED_JUMPTABLE_07 >> (bVar21 & 7) |
               (char)*UNRECOVERED_JUMPTABLE_07 << 8 - (bVar21 & 7));
    do {
    } while ((bool)(((bVar21 & 0x1f) == 1) *
                   ((((ulong)UNRECOVERED_JUMPTABLE & 0x1f) != 0) *
                    ((char)*UNRECOVERED_JUMPTABLE_07 < '\0') ^
                   (char)((char)*UNRECOVERED_JUMPTABLE_07 << 1) < '\0')));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000144ca:
    iVar25 = ((uVar38 & 0xffec6de8) + ((uVar26 | 0x139214) - uVar38) ^ 0xd97311a5) * 0x65773fe7;
    *(uint *)((long)register0x00000020 + -0x40) = (uVar22 + iVar25) - 0x71;
    *(uint *)((long)register0x00000020 + -0x44) = uVar49 + iVar25 + uVar50 + 0x55e3d84;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x14505;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    FUN_100014c30();
    uVar49 = 0x3165f9b4;
    if (*(uint *)((long)register0x00000020 + -0x3c) == 0x52e88d51) {
      uVar49 = 0x3165f9a5;
    }
    uVar22 = uVar50 - 0x27 | 0x29;
    *(uint *)((long)register0x00000020 + -0x98) = 0x814565b9;
    *(uint *)((long)register0x00000020 + -0x94) = 0x4469798c;
    *(uint *)((long)register0x00000020 + -0x68) = 0x814565b9;
    *(uint *)((long)register0x00000020 + -100) = 0x4469798c;
                    /* WARNING: Could not recover jumptable at 0x000100012754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&LAB_10000bc87 +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)
                        [(int)((uVar49 == ((uVar22 ^ 10) + 0xe ^ 0x3166a93e)) + uVar22)]))
                   (*(undefined8 *)((long)register0x00000020 + -0x60));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000145ec:
    *(long *)param_5 = *(long *)param_5 - (long)((long)register0x00000020 + -0x1a8);
    bVar51 = uVar39 < 0xced166b5;
    if (uVar43 + 4 < uVar10 + 0xced16684 == uVar39 < 0xced166b5) {
      bVar51 = uVar43 + 4 < uVar39;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001463d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_1000145c8 + *(int *)((long)unaff_R14 + (long)(int)(bVar51 + uVar22) * 4)))
                   (param_1 + 4,
                    &DAT_1000145c8 + *(int *)((long)unaff_R14 + (long)(int)(bVar51 + uVar22) * 4));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100014676:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000149cc:
                    /* WARNING: Could not recover jumptable at 0x0001000149e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100014991 + *(int *)((long)unaff_R13 + (long)(int)uVar48 * 4)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100014c6a:
                    /* WARNING: Could not recover jumptable at 0x000100014c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)(&UINT_1006d12b0)[(int)uVar26] + 0x100014c62))
                   (param_1,(code *)((long)(int)(&UINT_1006d12b0)[(int)uVar26] + 0x100014c62));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100014f71:
    *(undefined ***)((long)register0x00000020 + -0x38) = UNRECOVERED_JUMPTABLE_11;
    uVar13 = (ulong)((long)register0x00000020 + -0x1a8) ^ _DAT_10088e778;
    _DAT_10088e778 = (uVar13 ^ DAT_10088e7f8) * 0x79f54c43 + 0xd8ccc078b33194d;
    DAT_10088e7f8 = (uVar13 ^ DAT_10088e7f8 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
    uVar49 = ((uint)_DAT_10088e778 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
    UNRECOVERED_JUMPTABLE =
         (undefined **)
         (&PTR__bootstrap_look_up_10082e9f0)
         [(byte)((byte)uVar49 ^ (&DAT_1006d2c00)[(byte)(&DAT_1006d1c30)[uVar49 & 0xff] ^ 0xe]) + 1];
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x14ffa;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    unaff_R13 = (undefined8 *)(*(code *)UNRECOVERED_JUMPTABLE)(0x18);
    switch(unaff_R13 == (undefined8 *)0x0) {
    case false:
      *(undefined8 **)((long)register0x00000020 + -0x90) = unaff_R13 + 0x39ccf7b1d03230a;
      break;
    case true:
      if (*(long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                            (uint)PTR____stack_chk_guard_10082cb58) ==
          *(long *)((long)register0x00000020 + -0x38)) {
        return (undefined **)0xffff5035;
      }
                    /* WARNING: Subroutine does not return */
      *(code **)((long)register0x00000020 + -0x1b0) = switchD_10001b5d5::caseD_0;
      ___stack_chk_fail();
    }
code_r0x0001000199f6:
    *unaff_R13 = 0;
    unaff_R13[1] = 0x6d011ee84dd29bf2;
    *(undefined4 *)(unaff_R13 + 2) = 0;
    *(undefined ***)((long)register0x00000020 + -0x88) = UNRECOVERED_JUMPTABLE;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x19a1f;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)(0x1000);
    in_R11 = &switchD_100019e65::switchdataD_1006d1710;
switchD_10001997c_caseD_19a26:
    *unaff_R13 = UNRECOVERED_JUMPTABLE_11;
                    /* WARNING: Could not recover jumptable at 0x000100019a4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(switchD_10001503e::caseD_0 +
           (int)in_R11[(UNRECOVERED_JUMPTABLE_11 == (undefined **)0x0) + 6]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000155e4:
    *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + '\x01';
    lVar18 = *(long *)((long)register0x00000020 + -8);
    *(undefined ***)(lVar18 + -0x88) = UNRECOVERED_JUMPTABLE;
    uVar17 = *(undefined8 *)(lVar18 + -0x110);
    *(uint *)((long)register0x00000020 + -8) = 0x155f9;
    *(uint *)((long)register0x00000020 + -4) = 1;
    lVar18 = (*(code *)UNRECOVERED_JUMPTABLE_11)(uVar17,0);
                    /* WARNING: Could not recover jumptable at 0x000100015630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100015557 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar50 + (lVar18 == 0))]))
                   (&switchD_1000183ca::switchdataD_1006d0f70);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000156e4:
    iVar25 = (uVar49 == uVar26) + uVar22;
                    /* WARNING: Could not recover jumptable at 0x00010001570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_1000156cc + *(int *)(param_1 + (long)iVar25 * 4)))
                   (param_1,iVar25,&DAT_1000156cc + *(int *)(param_1 + (long)iVar25 * 4),
                    (long)*(int *)(param_1 + (long)iVar25 * 4),param_1);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000157d6:
                    /* WARNING: Could not recover jumptable at 0x0001000157f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_1000157cb + *(int *)((long)unaff_R13 + (long)(int)uVar49 * 4)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100015ae6:
    *(ulong *)((long)register0x00000020 + -0x58) = (ulong)(uVar43 - 0x20);
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x15b01;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    uVar17 = (*param_5)(*(undefined8 *)((long)register0x00000020 + -0xc0),
                        *(undefined8 *)((long)register0x00000020 + -0x110));
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x15b0d;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(**(code **)((long)register0x00000020 + -0xa8))(uVar17)
    ;
                    /* WARNING: Could not recover jumptable at 0x000100015b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100015ad1 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)((UNRECOVERED_JUMPTABLE_11 == param_2) + uVar48)]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100015b40:
    *(undefined4 *)param_2 = 0;
    puVar16 = PTR__malloc_10082ea28;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x15b6d;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    puVar14 = (undefined8 *)(*(code *)PTR__malloc_10082ea28)(0x18);
    uVar41 = 0x3165f9b2;
    switch(puVar14 == (undefined8 *)0x0) {
    case false:
      *puVar14 = 0;
      puVar14[1] = 0x7261378736103bda;
      *(undefined4 *)(puVar14 + 2) = 0;
      *(undefined8 **)((long)register0x00000020 + -0x50) = puVar14;
      *(undefined **)((long)register0x00000020 + -0x98) = puVar16;
      *(uint *)((long)register0x00000020 + -0x1b0) = 0x1839c;
      *(uint *)((long)register0x00000020 + -0x1ac) = 1;
      lVar18 = (*(code *)puVar16)(0x1000);
      param_5 = *(code **)((long)register0x00000020 + -0x50);
      *(long *)param_5 = lVar18;
      switch(lVar18 == 0) {
      case false:
        *(byte **)((long)register0x00000020 + -0x1a8) = param_1;
        *(undefined ***)((long)register0x00000020 + -0x180) = param_2;
        *(undefined **)((long)register0x00000020 + -0x78) = PTR__free_10082eaf0;
        *(code **)((long)register0x00000020 + -0xa0) = param_5 + 0xa8b2fd12c86b103;
        UNRECOVERED_JUMPTABLE_04 = (code *)0x2;
        *(undefined4 *)(param_5 + 8) = 0x36104bda;
        *(undefined **)((long)register0x00000020 + -0x118) =
             PTR_s_om_apple_adid_1006d0b54_1_10082ea58 + -1;
        *(uint *)((long)register0x00000020 + -0x68) = 0x6016ebe8;
        *(uint *)((long)register0x00000020 + -100) = 0x5a79349;
        *(uint *)((long)register0x00000020 + -0xd8) = 0x6016ebe8;
        *(uint *)((long)register0x00000020 + -0xd4) = 0x5a79349;
        *(uint *)((long)register0x00000020 + -0xe0) = 0x6016ebe8;
        *(uint *)((long)register0x00000020 + -0xdc) = 0x5a79349;
        *(uint *)((long)register0x00000020 + -0xd0) = 0x6016ebe8;
        *(uint *)((long)register0x00000020 + -0xcc) = 0x5a79349;
        *(uint *)((long)register0x00000020 + -200) = 0x6016ebe8;
        *(uint *)((long)register0x00000020 + -0xc4) = 0x5a79349;
        *(uint *)((long)register0x00000020 + -0xb8) = 0x6016ebe8;
        *(uint *)((long)register0x00000020 + -0xb4) = 0x5a79349;
        switch(param_5 == (code *)0x0) {
        case true:
                    /* WARNING: Could not recover jumptable at 0x00010001c538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          UNRECOVERED_JUMPTABLE_11 =
               (undefined **)(*(code *)((long)(int)UINT_1006d127c + 0x10001c515))();
          return UNRECOVERED_JUMPTABLE_11;
        }
        goto code_r0x000100018dbe;
      case true:
        uVar41 = 0x3165f9b2;
        switch(param_5 == (code *)0x0) {
        case false:
          *(uint *)((long)register0x00000020 + -0x1b0) = 0x198c3;
          *(uint *)((long)register0x00000020 + -0x1ac) = 1;
          (*(code *)PTR__free_10082eaf0)(param_5);
          UNRECOVERED_JUMPTABLE_11 = (undefined **)switchD_10001997c::caseD_17daa();
          return UNRECOVERED_JUMPTABLE_11;
        }
      }
    }
    goto code_r0x000100017daa;
  case (undefined **)0x100015bb7:
    *(undefined4 *)((ulong)uVar49 - 0x73) = 0x884c5d14;
    *(short *)(unaff_RBX + 0x31fe8944) = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015bcf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015c6a:
    bVar37 = param_1[(long)UNRECOVERED_JUMPTABLE_11];
    *(uint *)UNRECOVERED_JUMPTABLE_04 = uVar43 + 8;
    **(int **)((long)register0x00000020 + -0x180) =
         ((bVar37 | uVar22) ^ 0xb7efa97f) + ((bVar37 | uVar22) & 0x37efa97f) * 2 + 0x48105681;
    *(uint *)((long)register0x00000020 + -0x58) = 0x3166a97d;
                    /* WARNING: Could not emulate address calculation at 0x000100015cba */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                               [(int)((unaff_R15 == UNRECOVERED_JUMPTABLE_11) + 0x3165f9b4)] +
                   0x100015c9f))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100015dbe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015e78:
    *(code **)((long)register0x00000020 + -0x1b0) = UNRECOVERED_JUMPTABLE_04;
    LOCK();
    uVar49 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar38;
    UNLOCK();
    *(uint *)((long)register0x00000020 + -0x1b8) = 0x15e89;
    *(uint *)((long)register0x00000020 + -0x1b4) = 1;
    lVar18 = (**(code **)((long)register0x00000020 + -0x98))(uVar49);
    uVar49 = (&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar50 + (lVar18 == 0))];
    *(uint *)((long)register0x00000020 + -0x58) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x000100015eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(&DAT_100015e73 + (int)uVar49))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100015eb5:
    *(byte **)((long)register0x00000020 + -0x70) = param_1 + 4;
    uVar22 = uVar48 - 2 ^ 0x95;
    uVar49 = *(int *)(param_5 + 0xc) + 0x3a1dc8ce;
    uVar39 = *(int *)(param_5 + 8) + uVar22 * 2 + 0x766ec405;
    bVar51 = uVar49 < uVar22 + 0xac7f0016;
    if (uVar39 < 0xac7f004d == bVar51) {
      bVar51 = uVar39 < uVar49;
    }
                    /* WARNING: Could not recover jumptable at 0x000100015f2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&UNK_100015ebb +
                   *(int *)((long)unaff_R13 + (long)(int)((uint)bVar51 + (uVar48 - 2)) * 4)))
                   (&UNK_100015ebb +
                    *(int *)((long)unaff_R13 + (long)(int)((uint)bVar51 + (uVar48 - 2)) * 4));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000161e6:
                    /* WARNING: Could not recover jumptable at 0x0001000161ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_11)();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100016405:
                    /* WARNING: Could not recover jumptable at 0x000100016416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)uVar26] +
                   0x1000163e3))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001641a:
    *(byte **)((long)register0x00000020 + -0x70) = param_1 + 4;
    iVar25 = (uVar48 ^ 0xfe) * 3;
    uVar49 = *(int *)(param_5 + 0xc) + (iVar25 + 0xdea0a43fU & 0x215f5baf) + 0xb3131a49;
    uVar22 = *(int *)(param_5 + 8) + 0xef64169e;
    bVar51 = uVar22 < uVar49;
    if (uVar22 < 0x25745278 != uVar49 < 0x25745278) {
      bVar51 = uVar49 < 0x25745278;
    }
    UNRECOVERED_JUMPTABLE_07 =
         (code *)((long)*(int *)((long)unaff_R13 + (long)(int)((uint)bVar51 + iVar25) * 4) +
                 0x10001641b);
                    /* WARNING: Could not recover jumptable at 0x000100016494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)(*UNRECOVERED_JUMPTABLE_07)(uVar22,UNRECOVERED_JUMPTABLE_07);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000164fe:
    *(uint *)((long)register0x00000020 + -0x108) = 0;
    *(uint *)((long)register0x00000020 + -0x104) = 0;
    *(uint *)((long)register0x00000020 + -0x84) = 0;
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar10 ^ 0x5c)];
    *(undefined **)((long)register0x00000020 + -0x68) = puVar16;
    uVar11 = *(undefined4 *)(puVar16 + -2);
    uVar17 = *(undefined8 *)in_R11;
    uVar49 = in_R11[3];
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar10 - 0x4b)];
    *(undefined **)((long)register0x00000020 + -0x60) = puVar16 + -3;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1655a;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    uVar49 = (*(code *)(puVar16 + -3))
                       (uVar11,uVar17,uVar49 + 0xb5fe3479,
                        (uint *)((long)register0x00000020 + -0x108),
                        (uint *)((long)register0x00000020 + -0x84));
                    /* WARNING: Could not recover jumptable at 0x00010001659a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_1000164e4 +
                   *(int *)(param_5 +
                           (long)(int)(((uVar50 + 0x4f5b068b ^ uVar49) + (uVar49 & 0xceedf77e) * 2 +
                                        0xfbff9fd8 == (uVar47 ^ 0xade8adc7)) + uVar10) * 4)))
                   (param_5);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000168b5:
    *(uint *)(unaff_RBX + 0x634800d3) = *(int *)(unaff_RBX + 0x634800d3) + uVar49;
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000169d6:
                    /* WARNING: Could not recover jumptable at 0x0001000169d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)param_2 + (long)UNRECOVERED_JUMPTABLE_04))
                   (param_1,(code *)((long)param_2 + (long)UNRECOVERED_JUMPTABLE_04));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100016ae5:
    *(uint **)((long)register0x00000020 + -0x120) = in_R11 + 3;
    uVar49 = in_R11[3] + 0x9e17caa5;
    uVar22 = (uVar26 & 0x81e21fef) + in_R11[2] + 0x93a0366a;
    bVar51 = uVar49 < 0xe8199628;
    if (uVar22 < (uVar48 ^ 0x7e1de020) + 0xe8199590 == uVar49 < 0xe8199628) {
      bVar51 = uVar22 < uVar49;
    }
                    /* WARNING: Could not recover jumptable at 0x000100016b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100016acd + *(int *)((long)unaff_R13 + (long)(int)(bVar51 + 0x6d0f70) * 4))
         )(&DAT_100016acd + *(int *)((long)unaff_R13 + (long)(int)(bVar51 + 0x6d0f70) * 4));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100016dda:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001710b:
    lVar18 = *(long *)((long)register0x00000020 + -0x70);
    *(uint *)(lVar18 + -0x7f31ac3dd4da00bc) = uVar22 + (uVar49 & 0xd5bb5aa3) * 2 + -0x84003;
    *(undefined4 *)(lVar18 + -0x7f31ac3dd4da00b8) = 0x4d141492;
    *(uint *)((long)register0x00000020 + -0x60) = 0x3166a97d;
    UNRECOVERED_JUMPTABLE_11 = (undefined **)FUN_10001aa0e();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100017830:
  case (undefined **)0x100017802:
    *(undefined ***)((long)register0x00000020 + -0x58) = UNRECOVERED_JUMPTABLE_11;
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         switchD_100020322::caseD_18d74
                   (uVar38 ^ 0x76,((ulong)unaff_R15 ^ 0xffffffee) & 0x1006d0f70,
                    *(undefined8 *)((long)register0x00000020 + -0x140),0xe2846de5,0x41);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001785b:
                    /* WARNING: Could not recover jumptable at 0x00010001786b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100017840 + (int)in_R11[(ulong)UNRECOVERED_JUMPTABLE_04 & 0xffffffff]))
                   (param_1,param_2,
                    &DAT_100017840 + (int)in_R11[(ulong)UNRECOVERED_JUMPTABLE_04 & 0xffffffff]);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000178d9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100017a36:
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_11 * 2 + 0x10001993b) = 0x48;
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(ulong)(uint)(int)sVar9;
  case (undefined **)0x100017a3c:
                    /* WARNING: Could not recover jumptable at 0x000100017a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_1000179d6 + (int)in_R11[(long)UNRECOVERED_JUMPTABLE_11]))
                   (param_1,param_2,&DAT_1000179d6 + (int)in_R11[(long)UNRECOVERED_JUMPTABLE_11]);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100017ba7:
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE) ^ uVar43;
    lVar18 = *(long *)((long)register0x00000020 + -8);
    *(undefined ***)(lVar18 + -0x130) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x000100017bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE_04)
                   (*(undefined8 *)(lVar18 + -0x68),param_2,UNRECOVERED_JUMPTABLE_04,0,
                    *(undefined8 *)(lVar18 + -0x48));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100017cdf:
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x17ce4;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    auVar55 = func_0x00011cf50005();
    UNRECOVERED_JUMPTABLE_11 = auVar55._0_8_;
    UNRECOVERED_JUMPTABLE_04 = (code *)((long)unaff_R14 + auVar55._8_8_);
    unaff_RBX = (code *)(ulong)(uVar48 + 0xc);
code_r0x000100017d2a:
    *(int *)UNRECOVERED_JUMPTABLE_04 = (int)param_2 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100017d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)in_R11[(int)((uint)(unaff_R14 == UNRECOVERED_JUMPTABLE_11) +
                                           (int)unaff_RBX)] + 0x100017d59))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100017d23:
    pbVar1 = (byte *)((ulong)(uVar22 + (int)(uint *)((long)register0x00000020 + -0x1a8)) * 2 + -0x3f
                     );
    *pbVar1 = *pbVar1 | bVar6;
    goto code_r0x000100017d2a;
  case (undefined **)0x100017daa:
    goto code_r0x000100017daa;
  case (undefined **)0x100017e47:
    *(uint *)((long)register0x00000020 + -0x40) = (uVar22 + uVar48) - 0x53;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x17e55;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    FUN_100014c30();
    uVar49 = (&switchD_1000183ca::switchdataD_1006d0f70)
             [(int)((*(uint *)((long)register0x00000020 + -0x3c) == uVar48 + 0x52e88cfd) + uVar48)];
    *(uint *)((long)register0x00000020 + -0x68) = 0x6016ebe8;
    *(uint *)((long)register0x00000020 + -100) = 0x5a79349;
                    /* WARNING: Could not recover jumptable at 0x000100017e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(&DAT_100017e0f + (int)uVar49))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100017f0e:
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x41e63944) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x41e63944) + cVar24);
    uVar22 = (int)in_R11 * 2 + 0x5499cac0;
    uVar22 = (uVar22 << (((byte)unaff_R13 ^ 0x61) & 0x1f) & 0xff663754) + (uVar22 ^ 0x7fb31baa) +
             0xc47a008;
    bVar51 = uVar38 < uVar22;
    if ((bool)cVar44 != uVar22 < 0x8bfabbb2) {
      bVar51 = uVar22 < 0x8bfabbb2;
    }
                    /* WARNING: Could not recover jumptable at 0x000100017f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(param_5 + (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)(bVar51 + uVar49)]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100017ffe:
                    /* WARNING: Could not recover jumptable at 0x000100018015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100017fdf +
                   *(int *)((long)unaff_R15 + (long)(int)(uVar38 + (uVar39 < uVar45)) * 4)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000180a2:
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)FUN_10001c312(param_1,param_2,(uVar48 ^ 0xfb643c8d) + (uVar22 ^ 0x4efdd7d6));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000181a8:
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x76ba6263) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x76ba6263) + bVar6);
    out(0x41,uVar49);
    iVar25 = *(int *)(unaff_R13 + 1);
    uVar17 = *unaff_R13;
    *(undefined ***)((long)register0x00000020 + -0x130) = UNRECOVERED_JUMPTABLE_11;
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         switchD_100020322::caseD_18d74
                   (uVar38 ^ 0xa0,iVar25 + -0x4dbf9431,uVar17,UNRECOVERED_JUMPTABLE_11);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001826e:
    puVar35 = (uint *)((long)UNRECOVERED_JUMPTABLE * 5 + -0x10);
    uVar22 = *puVar35;
    *puVar35 = *puVar35 + uVar49;
                    /* WARNING: Could not recover jumptable at 0x00010001828d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001825d + (int)in_R11[(int)(uVar49 + CARRY4(uVar22,uVar49))]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000185c3:
                    /* WARNING: Could not recover jumptable at 0x0001000185da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)(*(code *)(&DAT_1000185a8 + (int)in_R11[(uint)(int)sVar9]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000185e8:
                    /* WARNING: Could not recover jumptable at 0x00010001863b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_1000185de +
                   (int)in_R11[(int)(((uVar38 + 0xac6b660b & uVar43 * 2 ^ (uVar45 | 0x10) ^
                                      0xa0006611) + (uVar43 ^ 0xa777844d) == 0x5635b30f) + uVar38)])
         )();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000186c2:
    if (UNRECOVERED_JUMPTABLE == (undefined **)0x1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000187cb:
    *(byte *)UNRECOVERED_JUMPTABLE_11 = (char)*(code *)UNRECOVERED_JUMPTABLE_11 + bVar6;
    unaff_R14 = &PTR__bootstrap_look_up_10082e9f0;
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar10 - 0x6c)];
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x187f7;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*(code *)(puVar16 + -1))();
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[uVar10 & 0x54ad4595];
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1880b;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*(code *)(puVar16 + -1))();
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar10 ^ 0x6b)];
    *(undefined ***)((long)register0x00000020 + -0xc0) = unaff_R15;
    *(undefined **)((long)register0x00000020 + -0x90) = puVar16 + -2;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x18835;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    uVar17 = (*(code *)(puVar16 + -2))();
    UNRECOVERED_JUMPTABLE_07 = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar10 ^ 0x5b)];
    *(code **)((long)register0x00000020 + -0xa8) = UNRECOVERED_JUMPTABLE_07;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x18850;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*UNRECOVERED_JUMPTABLE_07)(uVar17);
    uVar33 = uVar10;
    goto code_r0x000100018853;
  case (undefined **)0x100018851:
code_r0x000100018853:
                    /* WARNING: Could not recover jumptable at 0x00010001888d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_1000187b7 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)((UNRECOVERED_JUMPTABLE_11 ==
                               (undefined **)(unaff_R14[(int)(uVar33 & 0xeb29af86)] + -0xe)) +
                              uVar10)]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001897b:
    ppuVar15 = (undefined **)(ulong)*(uint *)((long)register0x00000020 + -0x50);
  case (undefined **)0x100018883:
    *(int *)((long)ppuVar15 + 1U) = *(int *)((long)ppuVar15 + 1U) + -1;
    UNRECOVERED_JUMPTABLE_11 = UNRECOVERED_JUMPTABLE_11 + 0x20003323;
    *(uint *)UNRECOVERED_JUMPTABLE_11 =
         *(uint *)UNRECOVERED_JUMPTABLE_11 << 0x10 | *(uint *)UNRECOVERED_JUMPTABLE_11 >> 0x10;
    *(undefined8 **)((long)register0x00000020 + -0x60) = unaff_R13;
    lVar18 = *(long *)((long)register0x00000020 + -0xa0);
    uVar17 = *(undefined8 *)(lVar18 + -0xa8b2fd12c86b103);
    *(undefined **)((long)register0x00000020 + -0x1b0) = &UNK_1000188b2;
    (**(code **)((long)register0x00000020 + -0x78))(uVar17);
    *(undefined8 *)(lVar18 + -0xa8b2fd12c86b103) =
         *(undefined8 *)((long)register0x00000020 + -0x128);
    **(undefined4 **)((long)register0x00000020 + -0x188) =
         (int)*(undefined8 *)((long)register0x00000020 + -0xd8);
    piVar4 = *(int **)((long)register0x00000020 + -0x158);
    iVar25 = *piVar4;
    *(long *)((long)register0x00000020 + -0xa0) = lVar18;
    lVar18 = *(long *)(lVar18 + -0xa8b2fd12c86b103);
    uVar40 = (*(long *)((long)register0x00000020 + -0x1a8) -
             (*(long *)((long)register0x00000020 + -0x1a8) * 2 & 0x681f333462e1d3ccU)) +
             0xb40f999a3170e9e6;
    lVar12 = (ulong)((iVar25 + 0x8d9ec879U) * 2 & 0xb7ed7a7a) +
             ((ulong)(iVar25 + 0x8d9ec879U) ^ 0xbfbbdfea5bf6bd3d) + 0x40442015a40942c3;
    *(undefined4 *)(lVar18 + lVar12) = 0xffffffff;
    *(undefined2 *)(lVar18 + 4 + lVar12) = 0xffff;
    uVar13 = uVar40 >> 8 & 0xffffff ^ 0xe9;
    *(char *)(lVar18 + 6 + lVar12) = (char)uVar13;
    *(byte *)(lVar18 + 7 + lVar12) = (byte)uVar40 ^ 0xe6;
    *(int **)((long)register0x00000020 + -0x158) = piVar4;
    *piVar4 = *piVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x0001000189ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&LAB_100018982 + (int)UINT_1006d1134))
                   (*(undefined8 *)((long)register0x00000020 + -0x70),0xb40f999a3170e9e6,uVar13,
                    &LAB_100018982 + (int)UINT_1006d1134,
                    *(undefined8 *)((long)register0x00000020 + -0x50),0x3166a97d);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000189c2:
    uVar49 = *(uint *)((long)register0x00000020 +
                      (code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x6a) * 4);
    *(undefined8 *)((long)register0x00000020 + -0x90) =
         *(undefined8 *)((long)register0x00000020 + -0xb0);
    *(undefined8 *)((long)register0x00000020 + -0xa8) =
         *(undefined8 *)((long)register0x00000020 + -0xc0);
                    /* WARNING: Could not recover jumptable at 0x000100018a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((ulong)uVar49 + 0x1000189b0))
                   (param_1,param_2,*(undefined8 *)((long)register0x00000020 + -0x60),
                    *(undefined8 *)((long)register0x00000020 + -0x80),
                    *(undefined8 *)((long)register0x00000020 + -0x50),
                    *(uint *)((long)register0x00000020 + -0x58));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100018a78:
    uVar22 = uVar45 * 2 + 0x93df884c;
    uVar39 = uVar22 ^ 0x365a7ffa;
    uVar22 = uVar22 & 0x365a7ffa;
    UNRECOVERED_JUMPTABLE_04 = (code *)(ulong)(uVar39 + uVar22 * 2);
    uVar22 = uVar39 + uVar22 * 2 + 0x52720170;
    param_1 = (byte *)(ulong)uVar22;
    uVar41 = (uint)((uVar49 | 0xfffffc6d) < uVar22);
    if ((uVar49 | 0xfffffc6d) < 0x88cc816a != uVar22 < 0x88cc816a) {
      uVar41 = (uint)(uVar22 < 0x88cc816a);
    }
code_r0x000100018ada:
                    /* WARNING: Could not recover jumptable at 0x000100018af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE +
                   (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                              [(int)((uVar41 & 0xff) + uVar48 + 0x78ad9ecb)]))
                   (param_1,(code *)((long)UNRECOVERED_JUMPTABLE +
                                    (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                                               [(int)((uVar41 & 0xff) + uVar48 + 0x78ad9ecb)]),
                    UNRECOVERED_JUMPTABLE_04);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100018aee:
    goto code_r0x000100018ada;
  case (undefined **)0x100018b58:
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x18b60;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    lVar18 = (**(code **)((long)register0x00000020 + -0x98))(uVar38 + uVar49);
    uVar49 = (&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar10 + (lVar18 == 0))];
    *(uint *)((long)register0x00000020 + -0x150) = 0;
    *(uint *)((long)register0x00000020 + -0x14c) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100018b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(&DAT_100018b37 + (int)uVar49))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100018bac:
    *(ulong *)((long)register0x00000020 + -0x70) = (ulong)(uVar49 + uVar43);
    *unaff_R14 = (undefined *)0x0;
    unaff_R14[1] = (undefined *)0x4d14149255b31aa0;
    *(undefined4 *)(unaff_R14 + 2) = 0;
    goto code_r0x000100018bd4;
  case (undefined **)0x100018bd0:
    *(byte *)UNRECOVERED_JUMPTABLE_11 = (char)*(code *)UNRECOVERED_JUMPTABLE_11 + bVar6;
    *(byte *)UNRECOVERED_JUMPTABLE_11 = (char)*(code *)UNRECOVERED_JUMPTABLE_11 + bVar6;
code_r0x000100018bd4:
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x18bdc;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    puVar16 = (undefined *)(*(code *)unaff_R15)(0x1000);
    *unaff_R14 = puVar16;
                    /* WARNING: Could not recover jumptable at 0x000100018bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100018b98 +
                   *(int *)(unaff_RBX + (long)(int)((puVar16 == (undefined *)0x0) + 0x6d0f70) * 4)))
                   ();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100018c1b:
    if (!bVar54) goto LAB_100018c65;
    UNRECOVERED_JUMPTABLE = (undefined **)0x1a4a3;
    param_5 = (code *)(ulong)(uVar49 < 0x8a775cb9);
    param_2 = (undefined **)(ulong)(uVar38 * 2 + 0x645ac81c);
    break;
  case (undefined **)0x100018c2c:
    *(byte *)UNRECOVERED_JUMPTABLE_11 = (char)*(code *)UNRECOVERED_JUMPTABLE_11 + bVar6;
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x775cb93d) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x775cb93d) + cVar24);
    UNRECOVERED_JUMPTABLE_04 =
         (code *)(CONCAT71(iVar20,*(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001996a)) &
                 0xffffffff);
    puVar35 = (uint *)((long)register0x00000020 + -0x37e3a2d4);
    *(byte *)puVar35 = (byte)*puVar35 >> 2 | (byte)*puVar35 << 6;
    uVar49 = uVar26;
    break;
  case (undefined **)0x100018c41:
    uVar50 = uVar38;
    break;
  case (undefined **)0x100018db5:
    *(int *)((long)register0x00000020 + -7) = *(int *)((long)register0x00000020 + -7) + -1;
    UNRECOVERED_JUMPTABLE_07 = (code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995a);
    *(uint *)UNRECOVERED_JUMPTABLE_07 =
         *(uint *)UNRECOVERED_JUMPTABLE_07 << 1 | *(uint *)UNRECOVERED_JUMPTABLE_07 >> 0x1f;
    in(99);
code_r0x000100018dbe:
    uVar49 = ((int)UNRECOVERED_JUMPTABLE_04 + 0x8129e39cU & 0x27 ^ 0x9fffaab9) +
             *(int *)(param_5 + 0xc);
    bVar52 = uVar49 < 0x1260e242;
    bVar51 = *(int *)(param_5 + 8) + 0xdc50a668U < uVar49;
    if (*(int *)(param_5 + 8) + 0xdc50a668U < 0x1260e242 != bVar52) {
      bVar51 = bVar52;
    }
                    /* WARNING: Could not recover jumptable at 0x000100018e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(switchD_10001cb4f::caseD_0 +
           (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                [(uint)bVar51 + (int)UNRECOVERED_JUMPTABLE_04]))
                   (bVar52,switchD_10001cb4f::caseD_0 +
                           (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                                [(uint)bVar51 + (int)UNRECOVERED_JUMPTABLE_04]);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100018ecc:
    bVar37 = 0xb4;
    if (uVar45 < uVar38 + 0xf9ba9d2b == true) {
      bVar37 = uVar45 < uVar39;
    }
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + (long)in_R11) =
         UNRECOVERED_JUMPTABLE_04[(long)in_R11];
                    /* WARNING: Could not recover jumptable at 0x000100018f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100018eaf +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(bVar37 + uVar38)]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100018fa8:
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 +
             ((ulong)((long)register0x00000020 + -0x1a8) & 0xffffffff) + 0x100019929) = (code)0x48;
                    /* WARNING: Could not recover jumptable at 0x000100018fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100018f50 + *(int *)((long)unaff_R15 + ((ulong)param_2 & 0xffffffff) * 4)))
                   (param_1,(ulong)param_1 & 0xffffffff,UNRECOVERED_JUMPTABLE_04,
                    UNRECOVERED_JUMPTABLE,
                    &DAT_100018f50 + *(int *)((long)unaff_R15 + ((ulong)param_2 & 0xffffffff) * 4));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100019065:
    *(int *)((long)UNRECOVERED_JUMPTABLE_11 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_11 + 1) + -1
    ;
    puVar35 = (uint *)((long)UNRECOVERED_JUMPTABLE * 5 + -0x25);
    *puVar35 = *puVar35 >> 0xc | *puVar35 << 0x14;
                    /* WARNING: Could not recover jumptable at 0x000100019070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)UNRECOVERED_JUMPTABLE)
                   (param_1,param_2,*(uint *)((long)register0x00000020 + -0x70));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100019099:
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x75) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x75) | 0x75);
    *(undefined4 *)(param_2 + -0xfe63587ba9b4017) = 0x4d141492;
    param_1 = (byte *)0x3166a97d;
    unaff_R14 = (undefined **)0x8b830d;
    *(undefined ***)((long)register0x00000020 + -0x50) = param_2;
    *(undefined8 *)((long)register0x00000020 + -0xb0) =
         *(undefined8 *)((long)register0x00000020 + -0x80);
    *(undefined8 *)((long)register0x00000020 + -0xe8) =
         *(undefined8 *)((long)register0x00000020 + -0xa0);
    goto code_r0x0001000190da;
  case (undefined **)0x1000190d4:
    *(uint *)((long)register0x00000020 + -0xe8) = uVar49;
code_r0x0001000190da:
    uVar46 = (uint)param_1;
    unaff_R15 = *(undefined ***)((long)register0x00000020 + -0xd0);
LAB_1000190e1:
    *(uint *)((long)register0x00000020 + -0x60) = uVar46;
    *(undefined ***)((long)register0x00000020 + -0x58) = param_2;
    UNRECOVERED_JUMPTABLE_07 =
         (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)((uint)unaff_R14 ^ 0x8b832f)];
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x19118;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*UNRECOVERED_JUMPTABLE_07)(*(undefined8 *)((long)register0x00000020 + -0xb0));
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x19125;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*UNRECOVERED_JUMPTABLE_07)(*(undefined8 *)((long)register0x00000020 + -0xe8));
    uVar49 = (&switchD_100019e65::switchdataD_1006d1710)
             [(int)(((uint)unaff_R14 - 0x8b82d1) + (uint)(unaff_R15 == (undefined **)0x0))];
    *(undefined ***)((long)register0x00000020 + -0xd0) = unaff_R15;
    *(code **)((long)register0x00000020 + -0x70) = UNRECOVERED_JUMPTABLE_07;
                    /* WARNING: Could not recover jumptable at 0x000100019148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(&LAB_1000190e1 + (int)uVar49))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001910d:
    UNRECOVERED_JUMPTABLE_07 = (code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x75);
    *(uint *)UNRECOVERED_JUMPTABLE_07 =
         *(uint *)UNRECOVERED_JUMPTABLE_07 >> 0x1d | *(uint *)UNRECOVERED_JUMPTABLE_07 << 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100019167:
    *(ulong *)((long)register0x00000020 + -0x58) = (ulong)((uVar43 ^ 0x75) * 0x1f);
    puVar16 = unaff_R15[uVar47 & 0x132cbf99];
    puVar5 = unaff_R15[uVar47 & 0x7d24ea2d];
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x191a2;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*(code *)(puVar16 + -1))(UNRECOVERED_JUMPTABLE_11,puVar5 + -2);
    puVar16 = unaff_R15[(int)(uVar47 ^ 100)];
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x191b6;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*(code *)(puVar16 + -1))(UNRECOVERED_JUMPTABLE_11);
    puVar16 = unaff_R15[(int)(uVar47 - 0x5b)];
    *(undefined ***)((long)register0x00000020 + -0xe8) = UNRECOVERED_JUMPTABLE_11;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x191d8;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    uVar17 = (*(code *)(puVar16 + -2))
                       (UNRECOVERED_JUMPTABLE_11,*(undefined8 *)((long)register0x00000020 + -0xd0));
    UNRECOVERED_JUMPTABLE_07 = (code *)unaff_R15[(int)(uVar47 - 0x4b)];
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x191ea;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    puVar16 = (undefined *)(*UNRECOVERED_JUMPTABLE_07)(uVar17);
    lVar18 = (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                        [(int)((puVar16 == unaff_R15[(int)(uVar47 - 0x6d)] + -0xe) + uVar47)];
    puVar16 = &DAT_10001914c;
code_r0x000100019219:
                    /* WARNING: Could not recover jumptable at 0x000100019222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(puVar16 + lVar18))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100019231:
    cVar8 = bVar6 + (char)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x97072bc);
    lVar18 = CONCAT71(iVar20,cVar8);
    if (cVar8 == '\0' ||
        SCARRY1(bVar6,(char)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x97072bc)) != cVar8 < '\0')
    {
      puVar16 = (undefined *)0x1914c;
      goto code_r0x000100019219;
    }
code_r0x000100019239:
    lVar18 = CONCAT71((int7)((ulong)lVar18 >> 8),
                      ((byte)lVar18 | (byte)*(code *)(param_2 + -0xf)) + 8);
    *(code *)(lVar18 + (ulong)(uVar38 + 0xb9da7ef5)) = UNRECOVERED_JUMPTABLE_04[uVar38 + 0xb9da7ef5]
    ;
    *(code *)(lVar18 + (ulong)(uVar38 + 0xb9da7ef4)) = UNRECOVERED_JUMPTABLE_04[uVar38 + 0xb9da7ef4]
    ;
    *(code *)(lVar18 + (ulong)(uVar38 + 0xb9da7ef3)) = UNRECOVERED_JUMPTABLE_04[uVar38 + 0xb9da7ef3]
    ;
                    /* WARNING: Could not recover jumptable at 0x00010001929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_100019226 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)((uVar38 - 4 == uVar43 + 0xbed31fc2) + uVar39)]))
                   (uVar38 - 4,
                    (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                               [(int)((uVar38 - 4 == uVar43 + 0xbed31fc2) + uVar39)],
                    UNRECOVERED_JUMPTABLE_04,0x14b60f46);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001924d:
    lVar18 = CONCAT71(iVar20,bVar6 + 10 + bVar51);
    goto code_r0x000100019239;
  case (undefined **)0x100019259:
    lVar18 = CONCAT71(iVar20,(bVar6 | (byte)*(code *)(param_2 + -0xf)) + 8);
    goto code_r0x000100019239;
  case (undefined **)0x100019314:
    in(1);
    puVar35 = (uint *)((long)register0x00000020 + (long)UNRECOVERED_JUMPTABLE * 4 + -0x81);
    *puVar35 = *puVar35 << 7 | *puVar35 >> 0x19;
    uVar49 = (uint)(uVar39 < uVar22);
    if (uVar39 < 0x51892099 != uVar22 < 0x51892099) {
      uVar49 = (uint)CONCAT71(0x3165f9,uVar22 < 0x51892099);
    }
                    /* WARNING: Could not recover jumptable at 0x000100019368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_1000192f4 +
                   (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)((uVar49 & 0xff) + uVar43)]
                   ))(param_1,&DAT_1000192f4 +
                              (int)(&switchD_100019e65::switchdataD_1006d1710)
                                   [(int)((uVar49 & 0xff) + uVar43)]);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001932a:
    UNRECOVERED_JUMPTABLE_07 = (code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x1000198dc);
    *(uint *)UNRECOVERED_JUMPTABLE_07 =
         *(uint *)UNRECOVERED_JUMPTABLE_07 << 0x18 | *(uint *)UNRECOVERED_JUMPTABLE_07 >> 8;
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x9210daac) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x9210daac) & bVar21);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100019443:
    uVar22 = (uVar48 ^ (uint)DAT_10088e7f8) * 0x79f54c43;
                    /* WARNING: Could not recover jumptable at 0x000100019486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)unaff_R14[(int)((byte)((byte)uVar22 ^
                                         (&DAT_1006d1a30)
                                         [(byte)(&DAT_1006d0b70)[uVar22 & 0xff] ^ 99]) - 0x32)])
                   ((uVar49 - 0x875328) - (uint)bVar51);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000194fa:
    *(uint *)param_2 = uVar38 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010001954c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&LAB_100019526 +
                   *(int *)(unaff_RBX +
                           (long)(int)((uint)(UNRECOVERED_JUMPTABLE_04 ==
                                             (code *)&switchD_1000183ca::switchdataD_1006d0f70) +
                                      (uVar49 | 8)) * 4)))
                   (uVar38 + 4,param_2,
                    &LAB_100019526 +
                    *(int *)(unaff_RBX +
                            (long)(int)((uint)(UNRECOVERED_JUMPTABLE_04 ==
                                              (code *)&switchD_1000183ca::switchdataD_1006d0f70) +
                                       (uVar49 | 8)) * 4));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001954f:
    *(uint *)((long)register0x00000020 + -0x78) = uVar26;
    DAT_48ffffff68a5894c = bVar6;
    in_R11[2] = 0x54796f16;
    iVar25 = *(int *)((long)unaff_R13 + (ulong)(uVar47 + (in_R11 == (uint *)0x0)) * 4);
    *(undefined **)((long)register0x00000020 + -0x128) = unaff_R15[uVar47 | 4] + -1;
    *(byte **)((long)register0x00000020 + -0xf0) = param_1;
    *(byte **)((long)register0x00000020 + -0xc0) = param_1;
    *(byte **)((long)register0x00000020 + -0xd8) = param_1;
    *(byte **)((long)register0x00000020 + -0xe0) = param_1;
    *(byte **)((long)register0x00000020 + -0xd0) = param_1;
    *(byte **)((long)register0x00000020 + -200) = param_1;
    *(uint *)((long)register0x00000020 + -0x58) = 0x513134f3;
    *(uint *)((long)register0x00000020 + -0x54) = 0x18646b13;
                    /* WARNING: Could not recover jumptable at 0x0001000195d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&caseD_1954f_1 + iVar25))(param_1,0x18646b13513134f3,uVar47 ^ 10,0);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000195f1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001962b:
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + 99) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + 99) + bVar21);
    lVar18 = *(long *)((long)register0x00000020 + -8);
    uVar49 = in_R11[(long)UNRECOVERED_JUMPTABLE];
    *(undefined ***)(lVar18 + -0xc0) = param_2;
    *(undefined ***)(lVar18 + -0xa0) = param_2;
    *(undefined ***)(lVar18 + -0xb8) = param_2;
    *(undefined ***)(lVar18 + -0xb0) = param_2;
    *(undefined ***)(lVar18 + -0xd0) = param_2;
    *(undefined8 *)(lVar18 + -0x48) = 0x7f31ac3dd4da00c4;
                    /* WARNING: Could not recover jumptable at 0x000100019676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)uVar49 + 0x1000195fc))
                   (param_1,0x7f31ac3dd4da00c4,(code *)((long)(int)uVar49 + 0x1000195fc),0,
                    0x3165f9b3);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000196a4:
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100019834:
    unaff_RBX = (code *)(ulong)(uVar48 ^ 2);
    param_2 = (undefined **)&DAT_10001c439;
    unaff_R15 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_04 & 0xffffffff);
    bVar51 = uVar49 < 0x882ec917;
code_r0x000100019855:
    uVar22 = (int)unaff_R15 * 2 + 0x645ac81c;
    uVar22 = (uVar22 << ((char)unaff_RBX + 0x5fU & 0x1f) & 0xfbef3fec) + (uVar22 ^ 0x7df79ff6) +
             0xa372921;
    in_R10 = (code *)(ulong)(uVar49 < uVar22);
    if (bVar51 != uVar22 < 0x882ec917) {
      in_R10 = (code *)(ulong)(uVar22 < 0x882ec917);
    }
code_r0x0001000198a8:
                    /* WARNING: Could not recover jumptable at 0x0001000198b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)param_2 + (long)(int)in_R11[(int)(((uint)in_R10 & 0xff) + uVar47)]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001984f:
    bVar51 = CARRY1(bRam000000008830616c,bVar27);
    bRam000000008830616c = bRam000000008830616c + bVar27;
    goto code_r0x000100019855;
  case (undefined **)0x10001985c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000198b1:
    goto code_r0x0001000198a8;
  case (undefined **)0x100019932:
    goto switchD_10001997c_caseD_19932;
  case (undefined **)0x10001995b:
    goto switchD_10001997c_caseD_1995b;
  case (undefined **)0x100019961:
    goto switchD_10001997c_caseD_19961;
  case (undefined **)0x100019981:
    *(undefined ***)((long)register0x00000020 + -0x1b0) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001999d:
    *(uint *)(UNRECOVERED_JUMPTABLE_04 + 0x49) = *(int *)(UNRECOVERED_JUMPTABLE_04 + 0x49) + uVar48;
    *(uint *)((code *)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff) + 8) = uVar49;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x199aa;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*(code *)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff))();
    in_R10 = (code *)((ulong)unaff_R15 & 0xffffffff);
    bVar51 = *(long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                               (uint)PTR____stack_chk_guard_10082cb58) ==
             *(long *)((long)register0x00000020 + -0x38);
    goto code_r0x0001000199bb;
  case (undefined **)0x1000199b8:
    bVar51 = uVar49 == *(uint *)((long)register0x00000020 + -0x38);
code_r0x0001000199bb:
    if (!bVar51) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)((long)register0x00000020 + -0x1b0) = &UNK_1000160b2;
      ___stack_chk_fail();
    }
code_r0x0001000199c1:
    return (undefined **)(ulong)((int)in_R10 + 0xce995683);
  case (undefined **)0x1000199c9:
    goto code_r0x0001000199c1;
  case (undefined **)0x1000199d6:
    goto code_r0x0001000199c1;
  case (undefined **)0x1000199f3:
    goto code_r0x0001000199f6;
  case (undefined **)0x100019a26:
    goto switchD_10001997c_caseD_19a26;
  case (undefined **)0x100019a4c:
    UNRECOVERED_JUMPTABLE = (undefined **)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995a);
    if (UNRECOVERED_JUMPTABLE == (undefined **)0x0 || !bVar52) {
      bVar37 = in((short)UNRECOVERED_JUMPTABLE_04);
      *param_1 = bVar37;
                    /* WARNING: Could not recover jumptable at 0x000100019a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_11 =
           (undefined **)
           (*(code *)(&UNK_100019a4f +
                     *(int *)(param_5 +
                             (long)(int)((uVar48 - 0x9e | 0xa0) + (uint)(in_R11 == (uint *)0x0)) * 4
                             )))(param_1 + 1,param_2,UNRECOVERED_JUMPTABLE_04,0);
      return UNRECOVERED_JUMPTABLE_11;
    }
    *(int *)((long)register0x00000020 + 0x41) = *(int *)((long)register0x00000020 + 0x41) + uVar33;
    *(uint *)register0x00000020 = uVar49;
    goto code_r0x0001000199f6;
  case (undefined **)0x100019b27:
    UNRECOVERED_JUMPTABLE_07 = (code *)swi(1);
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*UNRECOVERED_JUMPTABLE_07)();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100019b87:
    *(int *)(param_1 + -0x4d) = *(int *)(param_1 + -0x4d) + 1;
    puVar16 = *unaff_R14;
    iVar25 = *(int *)(unaff_R14 + 1);
    *(undefined **)((long)register0x00000020 + -0x160) = (undefined *)(ulong)(uVar49 & 0xce53c22b);
    lVar18 = (long)*(int *)((long)unaff_R13 +
                           (long)(int)(((undefined *)(ulong)(uVar49 & 0xce53c22b) < puVar16) +
                                      0x6d0f23) * 4);
    UNRECOVERED_JUMPTABLE_07 = (code *)(lVar18 + 0x10001a4cf);
                    /* WARNING: Could not recover jumptable at 0x00010001a509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE_07)
                   (((iVar25 + -0xb2cde56) - ((iVar25 + -0xb2cde56) * 2 & 0xe2f17d94U)) + -0xebdc8be
                    ,lVar18,puVar16,&DAT_100015786,UNRECOVERED_JUMPTABLE_07);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100019cdf:
                    /* WARNING: Could not recover jumptable at 0x000100019ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(ulong)(uVar26 + uVar22))
                   (*(undefined8 *)((long)register0x00000020 + -0x110),param_2,
                    (code *)(ulong)(uVar26 + uVar22));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100019d80:
    in_R10 = (code *)(ulong)(uVar39 + uVar38 * 2);
code_r0x000100019d8f:
    in_R10 = (code *)(ulong)((int)in_R10 + 0x940762b6);
code_r0x000100019d96:
    uVar22 = (uint)in_R10;
    bVar51 = (uint)UNRECOVERED_JUMPTABLE_04 < uVar22;
    if (uVar22 < 0xfc7622d != true) {
      bVar51 = uVar22 < 0xfc7622d;
    }
                    /* WARNING: Could not recover jumptable at 0x000100019dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)param_2 +
                   (long)*(int *)((long)unaff_R13 + (long)(int)(bVar51 + uVar49) * 4)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100019d8a:
    *(undefined8 *)((long)register0x00000020 + -0x7b) =
         *(undefined8 *)((long)register0x00000020 + -0x1a8);
    uVar49 = (uint)CONCAT71(iVar20,bVar6 + 0x78 + bVar51);
    goto code_r0x000100019d8f;
  case (undefined **)0x100019d8e:
    if (bVar53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    UNRECOVERED_JUMPTABLE_04 = (code *)(ulong)(uVar26 + 0x940762b6);
    goto code_r0x000100019d96;
  case (undefined **)0x100019ebb:
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x1000199be) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x1000199be) + bVar21);
                    /* WARNING: Could not recover jumptable at 0x000100019ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x100019e6a))
                   (param_1,param_2,unaff_R15[uVar48 ^ 0x22],
                    (code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x100019e6a));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100019fbf:
    UNRECOVERED_JUMPTABLE_04 = (code *)((ulong)UNRECOVERED_JUMPTABLE_04 ^ 0x9a00);
  case (undefined **)0x100019f74:
    UNRECOVERED_JUMPTABLE_07 = param_5 + (long)unaff_R15 + -0x4bf06665ce8f1685;
    UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_04 + (long)param_2;
    *(byte *)((long)UNRECOVERED_JUMPTABLE + (long)UNRECOVERED_JUMPTABLE_04) =
         (byte)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x38) ^ 0xb4;
    ((code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995c))[(long)UNRECOVERED_JUMPTABLE_04] =
         (code)((byte)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x30) ^ 0xf);
    ((code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995d))[(long)UNRECOVERED_JUMPTABLE_04] =
         (code)((byte)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x28) ^ 0x99);
    ((code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995e))[(long)UNRECOVERED_JUMPTABLE_04] =
         (code)((byte)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x20) ^ 0x9a);
    ((code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995f))[(long)UNRECOVERED_JUMPTABLE_04] =
         (code)((byte)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x18) ^ 0x31);
    *(byte *)((long)(UNRECOVERED_JUMPTABLE_11 + 0x2000332c) + (long)UNRECOVERED_JUMPTABLE_04) =
         (byte)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x10) ^ 0x70;
    ((code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x100019961))[(long)UNRECOVERED_JUMPTABLE_04] =
         (code)((byte)((ulong)UNRECOVERED_JUMPTABLE_07 >> 8) ^ 0xe9);
    ((code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x100019962))[(long)UNRECOVERED_JUMPTABLE_04] =
         (code)((byte)UNRECOVERED_JUMPTABLE_07 ^ 0xe6);
    *(uint **)((long)register0x00000020 + -0x80) = &switchD_1000183ca::switchdataD_1006d0f70;
    switchD_1000183ca::switchdataD_1006d0f70 = switchD_1000183ca::switchdataD_1006d0f70 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010001a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)*(int *)((long)unaff_R13 + (long)(int)(uVar50 + 1) * 4) + 0x10001a00b))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001a088:
    *(int *)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995c) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995c) + -1;
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)0x3165f9b4)();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001a13a:
    goto LAB_1000190e1;
  case (undefined **)0x10001a14f:
    uVar11 = *(undefined4 *)param_2;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1a154;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (**(code **)((long)register0x00000020 + -0x78))(uVar11);
    *unaff_R14 = *(undefined **)((long)register0x00000020 + -0x130);
    **(undefined4 **)((long)register0x00000020 + -0x180) =
         (int)*(undefined8 *)((long)register0x00000020 + -0xf0);
    piVar4 = *(int **)((long)register0x00000020 + -0x158);
    iVar25 = *piVar4;
    *(uint **)((long)register0x00000020 + -0x80) = &switchD_1000183ca::switchdataD_1006d0f70;
    uVar49 = uVar48 + 0x2c | 0x81;
    puVar16 = *unaff_R14;
    puVar16[iVar25 + 0xb5fe3479] = 0;
    puVar16[iVar25 + 0xb5fe347a] = 0;
    puVar16[iVar25 + 0xb5fe347b] = 0;
    puVar16[iVar25 + 0xb5fe347c] = 1;
    *(int **)((long)register0x00000020 + -0x158) = piVar4;
    *piVar4 = *piVar4 + (uVar49 ^ 0xb5);
                    /* WARNING: Could not recover jumptable at 0x00010001a1ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)*(int *)((long)unaff_R13 + (long)(int)(uVar49 + 1) * 4) + 0x10001a1cb))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001a2f0:
  case (undefined **)0x10001a2d1:
    uVar49 = uVar50 + 0xba46da9b;
    uVar39 = (uVar50 + 0x8a025b22 & 0x75fda4df) + 0x45b924aa;
    param_2 = (undefined **)(ulong)uVar39;
    param_1 = &DAT_100016bc9;
    bVar51 = uVar22 + 0x45b93508 < 0x45b94508;
    if (uVar49 < uVar22 + 0x1000 != 0x45b94508 < uVar39) {
      bVar51 = 0x45b94508 < uVar39;
    }
    in_R10 = (code *)(long)*(int *)(&DAT_1006d13e0 + (long)(int)(bVar51 + uVar50) * 4);
code_r0x00010001a377:
                    /* WARNING: Could not recover jumptable at 0x00010001a37a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(in_R10 + (long)param_1))(param_1,param_2,uVar49);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001a370:
    uVar49 = *(uint *)((long)register0x00000020 + (UNRECOVERED_JUMPTABLE_04 + -2) * 4);
    goto code_r0x00010001a377;
  case (undefined **)0x10001a404:
    unaff_RBX[0x6b] = (code)((byte)unaff_RBX[0x6b] | (byte)((ulong)UNRECOVERED_JUMPTABLE_04 >> 8));
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x1000199be) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x1000199be) + bVar21);
    uVar49 = (uint)CONCAT71(iVar20,bVar6) | 0x8b;
  case (undefined **)0x10001a3ea:
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1a3f7;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    lVar18 = (**(code **)((long)register0x00000020 + -0x88))(uVar47 + uVar49 + -0x6df300b8);
    uVar49 = (&switchD_100019e65::switchdataD_1006d1710)[(int)(uVar48 + (lVar18 == 0))];
    *(uint *)((long)register0x00000020 + -0x120) = 0;
    *(uint *)((long)register0x00000020 + -0x11c) = 0;
    *(uint *)((long)register0x00000020 + -200) = 0;
    *(uint *)((long)register0x00000020 + -0xc4) = 0;
    *(uint *)((long)register0x00000020 + -0xa8) = 0;
    *(uint *)((long)register0x00000020 + -0xa4) = 0;
    *(uint *)((long)register0x00000020 + -0xc0) = 0;
    *(uint *)((long)register0x00000020 + -0xbc) = 0;
    *(uint *)((long)register0x00000020 + -0xb8) = 0;
    *(uint *)((long)register0x00000020 + -0xb4) = 0;
    *(uint *)((long)register0x00000020 + -0xd8) = 0;
    *(uint *)((long)register0x00000020 + -0xd4) = 0;
    *(uint *)((long)register0x00000020 + -0x50) = 0xd4da00c4;
    *(uint *)((long)register0x00000020 + -0x4c) = 0x7f31ac3d;
                    /* WARNING: Could not recover jumptable at 0x00010001a458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(&DAT_10001a3c1 + (int)uVar49))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001a4a6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001a503:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001a850:
                    /* WARNING: Could not recover jumptable at 0x00010001a869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001a831 +
                   *(int *)((long)unaff_R15 +
                           (long)((int)CONCAT71(uVar28,uVar26 == uVar48) + 0x3165f9b4) * 4)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001a8d6:
    *(code *)((long)param_2 + 0x41d23145) =
         (code)((char)*(code *)((long)param_2 + 0x41d23145) - cVar24);
    bVar51 = uVar22 < 0x74224a03;
  case (undefined **)0x10001a8a7:
    uVar49 = uVar47 * 2 + 0x570d41d4;
    uVar49 = (uVar48 ^ uVar49 ^ 0xddf95f89) + (uVar49 & 0xddf95f16) * 2 + 0x9628eaed;
    bVar52 = uVar22 < uVar49;
    if ((bool)(char)param_5 != uVar49 < 0x74224a03) {
      bVar52 = uVar49 < 0x74224a03;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001a90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)param_2 +
                   (long)*(int *)((long)unaff_R13 +
                                 (long)(int)((uint)bVar52 + (int)CONCAT71(iVar20,bVar51)) * 4)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001a9a3:
                    /* WARNING: Could not recover jumptable at 0x00010001a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001a9a2 +
                   *(int *)((long)unaff_R13 + (long)(int)((uVar22 & 1) + uVar48) * 4)))
                   (param_1,uVar48 + 0xb2303125,UNRECOVERED_JUMPTABLE_04,
                    &DAT_10001a9a2 +
                    *(int *)((long)unaff_R13 + (long)(int)((uVar22 & 1) + uVar48) * 4));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001ab9b:
    uVar49 = (uVar49 & 0xfffabeac) + (uVar43 ^ 0xfffd5f56) + 0xdb4d4f3c;
    bVar51 = uVar38 < uVar49;
    if (uVar49 < 0xdb4aae92 != true) {
      bVar51 = uVar49 < 0xdb4aae92;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001abf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(param_5 + *(int *)((long)unaff_R13 + (long)(int)(bVar51 + uVar26 + 0x8fac61e) * 4)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001ad4d:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_11 + -0x7d) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_11 + -0x7d) + uVar22;
    *(uint *)((long)UNRECOVERED_JUMPTABLE_11 + 0x1000198de) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_11 + 0x1000198de) + uVar49;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ae88:
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1ae9a;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    uVar49 = FUN_1006d0f6d();
                    /* WARNING: Could not recover jumptable at 0x00010001aedb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001ae3e +
                   (int)(&switchD_100019e65::switchdataD_1006d1710)
                        [((uVar48 ^ 0x4befd79c) + (uVar49 ^ 0xfefdbf77) + (uVar49 & 0xfefdbf77) * 2
                         == (uVar10 ^ 0x5aed973a)) + uVar48]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001aefa:
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1af09;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    lVar18 = (**(code **)((long)register0x00000020 + -0x88))
                       ((uVar38 ^ uVar48 ^ 0x804ce42a) + uVar26);
    UNRECOVERED_JUMPTABLE = (undefined **)(long)(int)(uVar10 + (lVar18 == 0));
    in_R11 = &switchD_100019e65::switchdataD_1006d1710;
  case (undefined **)0x10001af1b:
    goto switchD_10001997c_caseD_1af1b;
  case (undefined **)0x10001b239:
    *(uint *)((long)register0x00000020 + -0x60) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x00010001b24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(ulong)(uVar22 + uVar49))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001b3bc:
    uVar11 = *(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar48 ^ 0xf7053a9d)] + -3);
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar48 + 0x8fac585)];
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1b3f4;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*(code *)(puVar16 + -2))
              (uVar11,*(undefined8 *)((long)register0x00000020 + -0x108),
               *(uint *)((long)register0x00000020 + -0x84));
    iVar25 = *(int *)((long)unaff_R13 +
                     (long)(int)(uVar48 + 0x8fac58a +
                                (uint)(*(uint *)((long)register0x00000020 + -0x60) ==
                                      (uVar50 ^ 0x3166a953))) * 4);
    *(code **)((long)register0x00000020 + -0x58) = in_R10;
                    /* WARNING: Could not recover jumptable at 0x00010001b42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(&DAT_10001b3a6 + iVar25))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001b52c:
    goto switchD_10001997c_caseD_1b52c;
  case (undefined **)0x10001b957:
    uVar49 = in_R11[3] + 0x3e7352de;
    uVar22 = (uVar26 | 0x94) + in_R11[2] + 0x33fbbe8d;
    bVar51 = uVar49 < 0x88751e61;
    if (uVar22 < uVar48 + 0x88751da0 == uVar49 < 0x88751e61) {
      bVar51 = uVar22 < uVar49;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001b9be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&caseD_1b944_1 + *(int *)((long)unaff_R13 + (long)(int)(bVar51 + uVar48) * 4)))
                   (&caseD_1b944_1 + *(int *)((long)unaff_R13 + (long)(int)(bVar51 + uVar48) * 4));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001ba88:
    uVar49 = 0x3165f9b4;
    if (bVar37 != 0) {
      uVar49 = uVar39;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001baa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001ba32 + (int)in_R11[(int)((uVar49 & 0xff) + uVar47)]))
                   (param_1,&DAT_10001ba32 + (int)in_R11[(int)((uVar49 & 0xff) + uVar47)]);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001babb:
    iVar25 = *(int *)(param_5 + 8);
    uVar17 = *(undefined8 *)param_5;
    *(undefined ***)(*(long *)((long)register0x00000020 + -8) + -0x130) = UNRECOVERED_JUMPTABLE_11;
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         switchD_100020322::caseD_1b465
                   (UNRECOVERED_JUMPTABLE_11,uVar50 + iVar25,uVar17,&DAT_10001bae2);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001bb37:
    lVar18 = *(long *)((long)unaff_R14 + (long)unaff_R15);
    *(undefined1 *)(lVar18 + (ulong)(uVar49 + 0x8d9ec879)) = 0x38;
    *(undefined1 *)(lVar18 + (ulong)(uVar49 + 0x8d9ec87a)) = 0x5b;
    uVar13 = (ulong)(uVar48 + uVar49 + 0x8d9ec7cf);
    *(undefined1 *)(lVar18 + uVar13) = 0x2c;
    *(undefined1 *)(lVar18 + (ulong)(uVar49 + 0x8d9ec87c)) = 0xe8;
    *(uint **)((long)register0x00000020 + -0x168) = &switchD_1000183ca::switchdataD_1006d0f70;
    switchD_1000183ca::switchdataD_1006d0f70 = switchD_1000183ca::switchdataD_1006d0f70 + 4;
    UNRECOVERED_JUMPTABLE_07 =
         (code *)((long)*(int *)((long)unaff_R13 + (long)(int)(uVar48 + 2) * 4) + 0x10001bb87);
                    /* WARNING: Could not recover jumptable at 0x00010001bba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE_07)
                   (*(undefined8 *)((long)register0x00000020 + -0x70),param_2,uVar13,
                    UNRECOVERED_JUMPTABLE_07,*(undefined8 *)((long)register0x00000020 + -0x50),
                    0x3166a97d);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001bbc5:
    *(undefined ***)((long)register0x00000020 + -0x1b0) = UNRECOVERED_JUMPTABLE;
    uVar49 = uVar33 + *(uint *)(unaff_RBX + 100);
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x77) =
         (code)(((char)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x77) - bVar21) -
               (CARRY4(uVar33,*(uint *)(unaff_RBX + 100)) || CARRY4(uVar49,(uint)bVar51)));
    *(ulong *)((ulong)(uVar49 + bVar51) - 0x50) = (ulong)(uint)(int)sVar9;
    UNRECOVERED_JUMPTABLE_11 = (undefined **)FUN_100015e19();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001bc2e:
                    /* WARNING: Could not recover jumptable at 0x00010001bc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar49 | 0xffffffe9)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001bcf5:
    return (undefined **)
           CONCAT71(iVar20,bVar6 ^ (&DAT_1006cff50)
                                   [bVar37 ^ (byte)*(code *)(UNRECOVERED_JUMPTABLE_11 + 0xda560)]);
  case (undefined **)0x10001bd4a:
    lVar12 = *(long *)((long)register0x00000020 + -8);
    lVar18 = unaff_R13[(long)UNRECOVERED_JUMPTABLE];
    *(uint *)((long)register0x00000020 + -8) = 0x1bd5c;
    *(uint *)((long)register0x00000020 + -4) = 1;
    (*UNRECOVERED_JUMPTABLE_04)(UNRECOVERED_JUMPTABLE_11,lVar18 + -2);
    lVar18 = unaff_R13[0x6d0f14];
    *(uint *)((long)register0x00000020 + -8) = 0x1bd71;
    *(uint *)((long)register0x00000020 + -4) = 1;
    (*(code *)(lVar18 + -1))(UNRECOVERED_JUMPTABLE_11);
    lVar18 = unaff_R13[0x6d0f15];
    *(undefined ***)(lVar12 + -0x88) = UNRECOVERED_JUMPTABLE_11;
    uVar17 = *(undefined8 *)(lVar12 + -0x110);
    *(code **)(lVar12 + -0x90) = (code *)(lVar18 + -2);
    *(uint *)((long)register0x00000020 + -8) = 0x1bd9b;
    *(uint *)((long)register0x00000020 + -4) = 1;
    uVar17 = (*(code *)(lVar18 + -2))(UNRECOVERED_JUMPTABLE_11,uVar17);
    UNRECOVERED_JUMPTABLE_07 = (code *)unaff_R13[0x6d0f27];
    *(uint *)((long)register0x00000020 + -8) = 0x1bdb0;
    *(uint *)((long)register0x00000020 + -4) = 1;
    lVar18 = (*UNRECOVERED_JUMPTABLE_07)(uVar17);
    UNRECOVERED_JUMPTABLE = (undefined **)0x0;
    bVar52 = lVar18 == unaff_R13[0x6d0f03] + -0xe;
  case (undefined **)0x10001bdc6:
                    /* WARNING: Could not recover jumptable at 0x00010001bdea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001bd0e +
                   *(int *)(&DAT_1006d13e0 +
                           (long)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE >> 8),bVar52) +
                                 0x6d0f70) * 4)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001bdeb:
    if (UNRECOVERED_JUMPTABLE != (undefined **)0x0) {
      return (undefined **)
             (ulong)(bVar37 ^ (&DAT_1006cff50)[(byte)(&DAT_1006d2b00)[(ulong)param_1 & 0xff] ^ 0x5e]
                    );
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001bf46:
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1bf4f;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    uVar49 = (**(code **)((long)register0x00000020 + -0x60))
                       (param_1,uVar49,UNRECOVERED_JUMPTABLE_04,UNRECOVERED_JUMPTABLE,
                        (uint *)((long)register0x00000020 + -0x84));
                    /* WARNING: Could not recover jumptable at 0x00010001bfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&LAB_100019a91 +
                   *(int *)((long)unaff_R14 +
                           (long)(int)(uVar10 + 0x8fac5aa +
                                      (uint)((int)((uVar10 ^ uVar49 ^ 0x9deaed48) +
                                                   (uVar49 & 0xeaefd7d6) * 2 + -0x20024080) <
                                            (int)((uVar10 + 0x8fac5a6 | 2) ^ 0x5aed971f))) * 4)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001c09a:
                    /* WARNING: Could not recover jumptable at 0x00010001c0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                               [(int)(uVar47 + 0x78ad9f11 +
                                     (uint)((int)uVar49 < (int)(uVar43 ^ uVar22)))] + 0x100018af4))
                   ((code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                                        [(int)(uVar47 + 0x78ad9f11 +
                                              (uint)((int)uVar49 < (int)(uVar43 ^ uVar22)))] +
                            0x100018af4));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001c17d:
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) ^ uVar38;
    *(undefined ***)((long)register0x00000020 + -0x50) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x00010001c186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)UNRECOVERED_JUMPTABLE_11)(param_1,(ulong)UNRECOVERED_JUMPTABLE & 0xffffffff);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001c3d4:
                    /* WARNING: Could not recover jumptable at 0x00010001c3db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_11)();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001ca03:
    uVar49 = in_R11[(int)((uVar47 - 0x8b82cc) +
                         (uint)(*(long *)((long)register0x00000020 + -0xe0) == 0))];
    *(undefined8 *)((long)register0x00000020 + -0x80) =
         *(undefined8 *)((long)register0x00000020 + -0xb0);
    *(code **)((long)register0x00000020 + -0xa0) = unaff_RBX;
                    /* WARNING: Could not recover jumptable at 0x00010001ca46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)((long)(int)uVar49 + 0x10001ca03))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001cadc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001cb65:
    *(undefined ***)((long)register0x00000020 + -0x128) = UNRECOVERED_JUMPTABLE_11;
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         switchD_100020322::caseD_1b465
                   (UNRECOVERED_JUMPTABLE_11,uVar50 + 0xc9efc418,UNRECOVERED_JUMPTABLE_04,
                    &DAT_100018890);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001cbf8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ce1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d0da:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995a) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_11 + 0x10001995a) ^ uVar49;
    if (UNRECOVERED_JUMPTABLE == (undefined **)0x0) {
      return UNRECOVERED_JUMPTABLE_11;
    }
    uVar49 = in(0xa2);
    uVar22 = uVar48 * 2 + 0x80a88ee0;
    uVar22 = (uVar22 << ((char)unaff_R15 + 0x2eU & 0x1f) & 0x7f577ba4) + (uVar22 ^ 0xbfabbdd2) +
             0xdb5e2ca8;
    in_R11 = (uint *)(ulong)(uVar43 < uVar22);
    if (uVar43 < 0x9b09ea7a != uVar22 < 0x9b09ea7a) {
      in_R11 = (uint *)(ulong)(uVar22 < 0x9b09ea7a);
    }
switchD_100020322_caseD_1dd6b:
                    /* WARNING: Could not recover jumptable at 0x00010001dd81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(param_1 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)(((uint)in_R11 & 0xff) + uVar49 + -0x2e3fe402)]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001d76b:
                    /* WARNING: Could not recover jumptable at 0x00010001d786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001d73e + (int)in_R11[(int)(uVar47 + bVar51)]))
                   (&DAT_10001d73e + (int)in_R11[(int)(uVar47 + bVar51)]);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001d830:
    if (!bVar53) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d848:
    uVar7 = in(0x45);
                    /* WARNING: Could not recover jumptable at 0x00010001d85d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&LAB_10001d7f2_1 +
                   *(uint *)(UNRECOVERED_JUMPTABLE_04 +
                            (ulong)(uint)(*(int *)CONCAT71(iVar20,uVar7) * 0x48) * 4)))
                   (UNRECOVERED_JUMPTABLE_04,param_2,UNRECOVERED_JUMPTABLE_04,
                    &LAB_10001d7f2_1 +
                    *(uint *)(UNRECOVERED_JUMPTABLE_04 +
                             (ulong)(uint)(*(int *)CONCAT71(iVar20,uVar7) * 0x48) * 4));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001d8a2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d9b2:
  case (undefined **)0x10001d97d:
    *(byte *)UNRECOVERED_JUMPTABLE_11 = (char)*(code *)UNRECOVERED_JUMPTABLE_11 + bVar6;
    cVar2 = *(code *)UNRECOVERED_JUMPTABLE;
    *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar27;
    uVar22 = uVar22 * 2 + 0x8691a69e;
    uVar22 = (uVar22 * 2 & uVar39) + (uVar22 ^ 0xfeffbdff) + 0x987a930b;
    bVar51 = uVar26 < uVar22;
    if (CARRY1((byte)cVar2,bVar27) != uVar22 < 0x977a510a) {
      bVar51 = uVar22 < 0x977a510a;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001d9eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar51 + uVar49)] +
                   0x3165f9b4))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001da0d:
    *(undefined ***)((long)register0x00000020 + -0x1b0) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001da82:
    *(undefined ***)((long)register0x00000020 + -0x1b0) = UNRECOVERED_JUMPTABLE;
    uVar49 = uVar49 + 0x9f520035;
    bVar51 = uVar49 < 0xc09b3bad;
    if ((int)*(undefined8 *)((long)register0x00000020 + -0x50) + 0x443ed2b2U <
        (uVar45 | 7) + 0xc09b3b66 == uVar49 < 0xc09b3bad) {
      bVar51 = (int)*(undefined8 *)((long)register0x00000020 + -0x50) + 0x443ed2b2U < uVar49;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001daf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001da80 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar51 + uVar22)]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001dc19:
    out(0xff,bVar6);
    if (UNRECOVERED_JUMPTABLE == (undefined **)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00010001dc3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_11 =
           (undefined **)
           (*(code *)((long)*(int *)(UNRECOVERED_JUMPTABLE_04 +
                                    (long)(int)(uVar47 + 0x4815049c +
                                               (uint)(unaff_R15[8] == (undefined *)0x0)) * 4) +
                     0x10001dc1f))();
      return UNRECOVERED_JUMPTABLE_11;
    }
    bVar52 = uVar26 < uVar39 + 0xb2b15a47;
    bVar51 = uVar45 < uVar26;
    if (uVar45 < 0xb2b15a9d != bVar52) {
      bVar51 = bVar52;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001dc1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001db6c +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)((uint)bVar51 + (int)in_R11)]))
                   (*(undefined8 *)((long)register0x00000020 + -0x78),
                    &DAT_10001db6c +
                    (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                         [(int)((uint)bVar51 + (int)in_R11)]);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001dcc3:
    *(int *)((code *)((long)UNRECOVERED_JUMPTABLE_11 + 0x100019951) + (long)param_1) = (int)in_ST0;
                    /* WARNING: Could not recover jumptable at 0x00010001dceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001dc44 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)((int)CONCAT71(uVar28,bVar52) + uVar45)]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001dd79:
    goto switchD_100020322_caseD_1dd6b;
  case (undefined **)0x10001df31:
    UNRECOVERED_JUMPTABLE_07 = unaff_RBX + (long)UNRECOVERED_JUMPTABLE * 4 + 0x45;
    *(uint *)UNRECOVERED_JUMPTABLE_07 =
         *(uint *)UNRECOVERED_JUMPTABLE_07 >> (bVar21 & 0x1f) |
         *(uint *)UNRECOVERED_JUMPTABLE_07 << 0x20 - (bVar21 & 0x1f);
    *(undefined8 *)param_5 = 0;
    *(undefined8 *)(param_5 + 8) = 0x21493b807c5c68fb;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1f12f;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*unaff_RBX)(param_5);
    lVar18 = *(long *)((long)register0x00000020 + -0x50);
    UNRECOVERED_JUMPTABLE_07 =
         (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar47 + 0x481504ae)];
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1df56;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*UNRECOVERED_JUMPTABLE_07)(*(undefined8 *)((long)register0x00000020 + -0x60));
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1df5d;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*UNRECOVERED_JUMPTABLE_07)(*(undefined8 *)((long)register0x00000020 + -0x80));
                    /* WARNING: Could not recover jumptable at 0x00010001df6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&LAB_10001df31 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)(uVar47 + 0x481504b4 + (uint)(lVar18 == 0))]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001e2eb:
    goto switchD_10001997c_caseD_1e2eb;
  case (undefined **)0x10001e33c:
    uVar49 = (uint)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE >> 8),
                            bVar21 | *(byte *)((long)register0x00000020 + -0x3e76f0c5));
    goto code_r0x00010001e342;
  case (undefined **)0x10001e3e2:
    vpsubusw_avx(in_XMM14,*(undefined1 (*) [16])
                           ((ulong)((uVar49 + 0xfeb65c06) - (uint)bVar51) - 0x45));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001e541:
    if ((POPCOUNT((ulong)UNRECOVERED_JUMPTABLE & 0xff) & 1U) != 0) {
      *(uint *)UNRECOVERED_JUMPTABLE_11 = *(int *)UNRECOVERED_JUMPTABLE_11 + uVar49;
      *(byte *)UNRECOVERED_JUMPTABLE_11 = (char)*(code *)UNRECOVERED_JUMPTABLE_11 + bVar6;
    }
    *(uint *)((long)register0x00000020 + -0x60) =
         *(uint *)((long)register0x00000020 + -0xb0) + 0xce995683;
    *(undefined8 *)((long)register0x00000020 + -0x80) =
         *(undefined8 *)((long)register0x00000020 + -0x140);
    *(ulong *)((long)register0x00000020 + -0x50) =
         (ulong)(*(uint *)((long)register0x00000020 + -0x9c) + 0xce995683);
                    /* WARNING: Could not recover jumptable at 0x000100024383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)in_R11[(int)((uVar47 + 0xdc871091 & 0x2378ef76) +
                                           (uint)(UNRECOVERED_JUMPTABLE_11 <
                                                 &switchD_1000183ca::switchdataD_1006d0f70))] +
                   0x100024370))
                   (0xebe9dd97f1423742,0x100024370,&UNK_10001ddff,
                    (code *)((long)(int)in_R11[(int)((uVar47 + 0xdc871091 & 0x2378ef76) +
                                                    (uint)(UNRECOVERED_JUMPTABLE_11 <
                                                          &switchD_1000183ca::switchdataD_1006d0f70)
                                                    )] + 0x100024370),0x1e2846e84);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001e609:
    if (cVar44 == '\0') {
      bVar37 = uVar39 < uVar43;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001e634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar37 + uVar22)] +
                   (long)unaff_R13))
                   ((code *)((long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                        [(int)(bVar37 + uVar22)] + (long)unaff_R13));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001e679:
    *(uint **)((long)register0x00000020 + -0x1b0) = (uint *)((long)register0x00000020 + -8);
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0xb849a35f) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + 0xb849a35f) | 0x8e);
    puVar31 = (uint *)((long)register0x00000020 + -0x1b8);
    *(undefined ***)((long)register0x00000020 + -0x1b8) = UNRECOVERED_JUMPTABLE;
    *(uint *)((long)register0x00000020 + -0x1c0) = 0x3165f9b4;
    *(uint *)((long)register0x00000020 + -0x1bc) = 0;
    unaff_RBX = *(code **)((long)register0x00000020 + -0x1c0);
    uVar49 = uVar49 + 0xfb385c06;
    cVar8 = (char)uVar49 + *(char *)((ulong)uVar49 - 0x389ba5fc);
    UNRECOVERED_JUMPTABLE = (undefined **)((ulong)param_5 & 0xffffffff);
    param_5 = (code *)(ulong)CONCAT31((int3)(uVar49 >> 8),cVar8);
    if (SCARRY1((char)uVar49,*(char *)((ulong)uVar49 - 0x389ba5fc)) != cVar8 < '\0') {
      *(ushort *)((long)UNRECOVERED_JUMPTABLE_11 + 0x100019917) =
           *(ushort *)((long)UNRECOVERED_JUMPTABLE_11 + 0x100019917) ^ (ushort)UNRECOVERED_JUMPTABLE
      ;
      return UNRECOVERED_JUMPTABLE;
    }
    puVar35 = (uint *)(ulong)(uVar33 | (uint)(uint *)((long)register0x00000020 + -0x1b8));
    in(0xfd);
    *UNRECOVERED_JUMPTABLE_04 = (code)-(char)*UNRECOVERED_JUMPTABLE_04;
    unaff_R15 = (undefined **)(ulong)(uVar50 - 7);
    *(code **)((long)puVar35 + -0xe0) = unaff_RBX;
    unaff_R14 = (undefined **)(ulong)(uVar50 - 0x1b);
    UNRECOVERED_JUMPTABLE = &PTR__bootstrap_look_up_10082e9f0;
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar50 - 7 ^ 0x8a)];
    goto switchD_10001997c_caseD_1e2eb;
  case (undefined **)0x10001e9ab:
    if (UNRECOVERED_JUMPTABLE == (undefined **)0x1) {
      UNRECOVERED_JUMPTABLE_11 =
           (undefined **)
           (&switchD_10001d28e::caseD_1 +
           *(int *)((long)(int)((int)*(undefined8 *)((long)register0x00000020 + -0x100) +
                                -0x2e3fe4a8 + (uint)(uVar38 == 0)) * 4 + 0x7d8b4822));
      *(undefined8 *)((long)register0x00000020 + -0xa0) =
           *(undefined8 *)((long)register0x00000020 + -0xc0);
      *(undefined8 *)((long)register0x00000020 + -0xb0) =
           *(undefined8 *)((long)register0x00000020 + -0xd8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010001ea08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)UNRECOVERED_JUMPTABLE_11)
                   (param_1,param_2,*(undefined8 *)((long)register0x00000020 + -0x88),
                    *(undefined8 *)((long)register0x00000020 + -0x80),param_5,
                    *(uint *)((long)register0x00000020 + -0x78));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001ea18:
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)uVar49];
    *(code **)((long)register0x00000020 + -0x50) = in_R10;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1ea2f;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    uVar19 = (*(code *)(puVar16 + -3))();
    uVar17 = *(undefined8 *)(*(long *)((long)register0x00000020 + -0x50) + -0x7ec08e5aeb2a8122);
    iVar25 = *(int *)(*(long *)((long)register0x00000020 + -0x50) + -0x7ec08e5aeb2a8116);
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar10 ^ 0x67)];
    puVar5 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar10 - 0x59)];
    *(undefined8 *)((long)register0x00000020 + -0x120) = uVar19;
    *(undefined **)((long)register0x00000020 + -0x80) = puVar5 + -3;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1ea8a;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*(code *)(puVar16 + -3))(uVar19,puVar5 + -3,uVar17,iVar25 + -0x5269705a);
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar10 ^ 0x7d)];
    puVar5 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar10 ^ 0x68)];
    *(uint *)((long)register0x00000020 + -0xa0) = 0;
    *(uint *)((long)register0x00000020 + -0x9c) = 0;
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1eaba;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    lVar18 = (*(code *)(puVar16 + -2))(puVar5 + -1,0);
                    /* WARNING: Could not recover jumptable at 0x00010001eaf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001ea0d +
                   *(int *)(&DAT_1006d1e30 + (long)(int)(uVar10 + (lVar18 == 0)) * 4)))
                   (*(undefined8 *)((long)register0x00000020 + -0x60));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001ebc6:
  case (undefined **)0x10001ebc9:
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1ebcc;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    (*(code *)&switchD_1000183ca::switchdataD_1006d0f70)();
    unaff_R15[6] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010001ec02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&LAB_100023f98 +
                   *(int *)((long)unaff_R14 +
                           (long)(int)(uVar48 + (unaff_R15[8] == (undefined *)0x0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001ed2c:
    if (!bVar53) {
      *(code **)((long)register0x00000020 + -0xb8) = in_R10;
      uVar22 = uVar39 + uVar38 * 2 + 0x764b767d;
      bVar51 = uVar49 < uVar22;
      if (uVar22 < 0xf64955a7 != true) {
        bVar51 = uVar22 < 0xf64955a7;
      }
      uVar42 = (uint)bVar51 + uVar26 + 0xdddbfaf8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001ed79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE +
                   (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)uVar42]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001f17f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f197:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f1ee:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f32a:
    uVar13 = CONCAT71(iVar20,bVar6) & 0xffffffffffffffd2;
    if ((POPCOUNT((byte)uVar13 & 0x70) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (UNRECOVERED_JUMPTABLE != (undefined **)0x0) {
      *(undefined ***)((long)register0x00000020 + -0x1b0) = param_2;
      *(undefined8 *)(param_1 + -0x1f7c3d4a + (long)UNRECOVERED_JUMPTABLE) =
           *(undefined8 *)((long)register0x00000020 + -0x1b0);
      UNRECOVERED_JUMPTABLE_07 = (code *)((long)UNRECOVERED_JUMPTABLE_11 + uVar13 + 0x10001993b);
      *(int *)UNRECOVERED_JUMPTABLE_07 = *(int *)UNRECOVERED_JUMPTABLE_07 + (int)uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010001f34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_11 =
           (undefined **)(*(code *)((long)(int)in_R11[(int)uVar13] + 0x10001f327))();
      return UNRECOVERED_JUMPTABLE_11;
    }
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *in_GS_OFFSET = *in_GS_OFFSET ^ uVar43 + 4;
    *(undefined1 *)(uVar13 - 0x77) = *(undefined1 *)(uVar13 - 0x77);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f50b:
    *(code **)((long)register0x00000020 + -0x60) = UNRECOVERED_JUMPTABLE_04;
    UNRECOVERED_JUMPTABLE_07 = (code *)UNRECOVERED_JUMPTABLE[(int)uVar49];
    *(uint *)((long)register0x00000020 + -0x1b0) = 0x1f51b;
    *(uint *)((long)register0x00000020 + -0x1ac) = 1;
    uVar49 = (*UNRECOVERED_JUMPTABLE_07)(param_1,*(undefined8 *)((long)register0x00000020 + -0x110))
    ;
                    /* WARNING: Could not recover jumptable at 0x00010001f569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001f4d3 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)(((uVar49 ^ 0x7b7ea97f) +
                                ((uVar50 ^ 0xf6fd5272) & uVar49 << (cVar8 + 0x97U & 0x1f)) ==
                               0x7b7ea97f) + uVar48)]))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001f6e9:
                    /* WARNING: Could not recover jumptable at 0x00010001f714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001f6c8 +
                   (int)in_R11[(int)((unaff_RBX == (code *)0x583fea33108f2bd4) + uVar49)]))
                   (param_1,&DAT_10001f6c8 +
                            (int)in_R11[(int)((unaff_RBX == (code *)0x583fea33108f2bd4) + uVar49)]);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001f818:
    if (bVar21 == 0) {
      param_5 = in_R10;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001f83e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(&DAT_10001f7b1 +
                   *(int *)((long)unaff_R13 + (long)(int)(((uint)param_5 & 0xff) + uVar50) * 4)))
                   (&DAT_10001f7b1 +
                    *(int *)((long)unaff_R13 + (long)(int)(((uint)param_5 & 0xff) + uVar50) * 4),
                    in_R11 + 0x401b43dc);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001f8db:
    if (*(long *)(ulong)(uint)PTR____stack_chk_guard_10082cb58 ==
        *(long *)((long)register0x00000020 + -0x38)) {
      return (undefined **)(ulong)(uVar47 + 0xce995683);
    }
                    /* WARNING: Subroutine does not return */
    *(code **)((long)register0x00000020 + -0x1b0) = switchD_100024103::caseD_1f059;
    ___stack_chk_fail();
  case (undefined **)0x10001fa34:
    UNRECOVERED_JUMPTABLE_04 = (code *)0xf9;
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE) ^ uVar43;
    puVar36 = *(uint **)((long)register0x00000020 + -8);
    puVar32 = (uint *)register0x00000020;
  case (undefined **)0x10001f9e6:
    UNRECOVERED_JUMPTABLE_07 = (code *)swi(0x50);
    uVar11 = (*UNRECOVERED_JUMPTABLE_07)(param_1,param_2,UNRECOVERED_JUMPTABLE_04);
    *(undefined4 *)((long)puVar36 + -0x1c0) = uVar11;
    UNRECOVERED_JUMPTABLE_07 = *(code **)((long)puVar36 + -0x108);
    *(undefined8 *)puVar32 = 0x10001fa05;
    lVar18 = (*UNRECOVERED_JUMPTABLE_07)((int)param_1 + uVar47 + uVar10 + -0x68ffe600);
    *(long *)((long)puVar36 + -0x300) = lVar18;
    iVar25 = *(int *)(&DAT_1006d2600 + (long)(int)(uVar47 + (lVar18 == 0)) * 4);
    *(undefined4 *)((long)puVar36 + -0xe8) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x00010001fa3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(&DAT_10001f9dd + iVar25))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001fabb:
    uVar49 = *(uint *)((long)param_2 +
                      (ulong)(uint)(*(int *)(ulong)CONCAT31((int3)((uint)*(undefined4 *)param_2 >> 8
                                                                  ),uRam358d489848fffffc) * 0x48) *
                      4 + 4);
    *(uint *)((long)register0x00000020 + -0xf0) = 0x3165f9a5;
                    /* WARNING: Could not recover jumptable at 0x00010001fae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(&DAT_10001fa6d + uVar49))();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001fb40:
    UNRECOVERED_JUMPTABLE_11 = (undefined **)FUN_1000253ca();
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x10001fd07:
    uVar39 = uVar39 * 2 + 0x444c4bbc;
    uVar43 = uVar39 ^ uVar43;
    uVar39 = uVar39 & 0xfdfbfb2e;
    *(ulong *)((long)register0x00000020 + -0xa8) = (ulong)(uVar43 + uVar39 * 2 + 0x5fdddef4);
    uVar39 = uVar43 + uVar39 * 2 + 0x899b936c;
    bVar52 = uVar22 < uVar39;
    if ((bool)cVar44 != uVar39 < 0x87978e9a) {
      bVar52 = uVar39 < 0x87978e9a;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001fd76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)(param_1 + *(int *)(&DAT_1006d1e30 + (long)(int)(bVar52 + uVar49) * 4)))
                   (param_1,param_2,!bVar51);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x100020183:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000202ad:
    *(long *)((long)register0x00000020 + -0x310) = *(long *)((long)register0x00000020 + -0x158);
    uVar49 = in_R11[(int)((uint)(*(long *)((long)register0x00000020 + -0x158) == 0x3a5a9c416583c527)
                         + (uVar43 | 0x4b))];
    *(uint *)((long)register0x00000020 + -0xf0) = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x0001000202fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(code *)((long)(int)uVar49 + 0x1000202ad))
                   (param_1,uVar43 | 0x4b,0,(code *)((long)(int)uVar49 + 0x1000202ad));
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000204f9:
    *(code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x73) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x73) | bVar21);
    uVar13 = (long)unaff_R13 + 0x1e2846e75U & (ulong)UNRECOVERED_JUMPTABLE;
    *(ulong *)((long)register0x00000020 + -0xa8) = uVar13;
    *(ulong *)((long)register0x00000020 + -0xb8) = uVar13;
    *(ulong *)((long)register0x00000020 + -0xd0) = uVar13;
    *(ulong *)((long)register0x00000020 + -0xe8) = uVar13;
    *(uint *)((long)register0x00000020 + -0x68) = 0xaeb6ae7e;
    *(uint *)((long)register0x00000020 + -100) = 0x5c05e2a4;
    *(uint *)((long)register0x00000020 + -200) = 0xaeb6ae7e;
    *(uint *)((long)register0x00000020 + -0xc4) = 0x5c05e2a4;
    *(uint *)((long)register0x00000020 + -0xe0) = 0xaeb6ae7e;
    *(uint *)((long)register0x00000020 + -0xdc) = 0x5c05e2a4;
    *(ulong *)((long)register0x00000020 + -0x138) = CONCAT71(iVar20,bVar6) | 0x36;
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         switchD_100020322::caseD_2214a
                   (0x5c05e2a4aeb6ae7e,(code *)((long)param_2 + (-0x141622680ebdc8be - uVar13)),
                    UNRECOVERED_JUMPTABLE_04,&DAT_10001f177);
    return UNRECOVERED_JUMPTABLE_11;
  case (undefined **)0x1000207d5:
    *(undefined ***)((long)register0x00000020 + -0x128) = UNRECOVERED_JUMPTABLE_11;
    *(undefined ***)((long)register0x00000020 + -0x138) = UNRECOVERED_JUMPTABLE_11;
                    /* WARNING: Could not recover jumptable at 0x0001000207eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_11 =
         (undefined **)
         (*(UNRECOVERED_JUMPTABLE_04 + (long)UNRECOVERED_JUMPTABLE_11))
                   (param_1,param_2,UNRECOVERED_JUMPTABLE_04 + (long)UNRECOVERED_JUMPTABLE_11,
                    0x3166043b);
    return UNRECOVERED_JUMPTABLE_11;
  }
  uVar42 = (uVar50 ^ (uint)param_2 ^ 0x4df3bf4c) + ((uint)param_2 & 0xcdf3bff6) * 2 + 0x3c839cc2;
LAB_100018c65:
  bVar51 = uVar49 < uVar42;
  if ((bool)(char)param_5 != uVar42 < 0x8a775cb9) {
    bVar51 = uVar42 < 0x8a775cb9;
  }
                    /* WARNING: Could not recover jumptable at 0x000100018ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_11 =
       (undefined **)
       (*(code *)((long)UNRECOVERED_JUMPTABLE +
                 (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                            [(int)((int)UNRECOVERED_JUMPTABLE_04 + -0x8b824a + (uint)bVar51)]))();
  return UNRECOVERED_JUMPTABLE_11;
switchD_10001997c_caseD_19932:
  *(byte *)UNRECOVERED_JUMPTABLE_11 = (char)*(code *)UNRECOVERED_JUMPTABLE_11 + bVar6;
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x1a8);
  unaff_RBP = puVar29;
  goto code_r0x000100019920;
switchD_10001997c_caseD_1af1b:
  uVar49 = in_R11[(long)UNRECOVERED_JUMPTABLE];
  *(uint *)((long)register0x00000020 + -0x150) = 0;
  *(uint *)((long)register0x00000020 + -0x14c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001af3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(&DAT_10001aee0 + (int)uVar49))();
  return UNRECOVERED_JUMPTABLE_11;
switchD_10001997c_caseD_13fc5:
  puVar16 = UNRECOVERED_JUMPTABLE[(int)uVar49];
  *(uint *)((long)register0x00000020 + -0x1b0) = 0x13fd7;
  *(uint *)((long)register0x00000020 + -0x1ac) = 1;
  (*(code *)(puVar16 + -2))(param_1,param_2,UNRECOVERED_JUMPTABLE_04);
  iVar25 = *(int *)((long)(int)((*(uint *)((long)register0x00000020 + -0x70) ==
                                (uVar50 ^ 0x3166a958)) + 0x407df224) * 4 + 0x3165f9b4);
  *(code **)((long)register0x00000020 + -0x58) = param_5;
                    /* WARNING: Could not emulate address calculation at 0x000100013ff8 */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(FUN_100013f83 + iVar25))();
  return UNRECOVERED_JUMPTABLE_11;
switchD_10001997c_caseD_1b52c:
  while( true ) {
    out(0x3f,uVar49);
    if (bVar51 || bVar52) {
      *(uint *)((long)puVar34 + -0x38) = uVar22 + uVar48 + -0x4f;
      *(uint *)((long)puVar34 + -0x3c) = uVar49 + uVar22 + 0x55e3dc1;
      *(undefined **)((long)puVar30 + -8) = &UNK_10001b548;
      FUN_100014c30();
      uVar49 = (&switchD_100019e65::switchdataD_1006d1710)
               [(int)((*(int *)((long)puVar34 + -0x34) == uVar50 + 0x52e88d2b) + uVar48)];
      *(undefined8 *)((long)puVar34 + -0x48) = 0x7f31ac3dd4da00c4;
                    /* WARNING: Could not recover jumptable at 0x00010001b585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_11 = (undefined **)(*(code *)(&UNK_10001b50d + (int)uVar49))();
      return UNRECOVERED_JUMPTABLE_11;
    }
    if (bVar54 != bVar53) break;
    UNRECOVERED_JUMPTABLE_07 = (code *)((long)UNRECOVERED_JUMPTABLE_11 + -0x27);
    bVar51 = false;
    bVar54 = false;
    *(uint *)UNRECOVERED_JUMPTABLE_07 = *(uint *)UNRECOVERED_JUMPTABLE_07 & 0x69;
    bVar53 = (int)*(uint *)UNRECOVERED_JUMPTABLE_07 < 0;
    bVar52 = *(uint *)UNRECOVERED_JUMPTABLE_07 == 0;
    puVar30 = (uint *)((long)puVar34 + 8);
    puVar34 = (uint *)*(undefined8 **)puVar34;
  }
  UNRECOVERED_JUMPTABLE_11 = (undefined **)FUN_100016e87();
  return UNRECOVERED_JUMPTABLE_11;
code_r0x000100017daa:
  if (*(long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                        (uint)PTR____stack_chk_guard_10082cb58) ==
      *(long *)((long)register0x00000020 + -0x38)) {
    return (undefined **)(ulong)(uVar41 + 0xce995683);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)register0x00000020 + -0x1b0) = &UNK_100018fd5;
  ___stack_chk_fail();
switchD_10001997c_caseD_1e2eb:
  uVar11 = *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_11 + -3);
  uVar17 = *(undefined8 *)((long)puVar35 + -0xf8);
  uVar3 = *(undefined4 *)((long)puVar35 + -100);
  puVar16 = UNRECOVERED_JUMPTABLE[(int)unaff_R15 + -0x66];
  *(undefined8 *)((long)puVar31 + -8) = 0x10001e309;
  (*(code *)(puVar16 + -2))(uVar11,uVar17,uVar3,UNRECOVERED_JUMPTABLE,param_5);
  in_R11 = &switchD_10001f9d9::switchdataD_1006d2190;
  uVar49 = (int)unaff_R14 - 0x4dU | 0x10;
  unaff_R14 = (undefined **)(ulong)uVar49;
  if (uVar10 != uVar49 + 0x3166a945) {
    unaff_RBX = (code *)0x6c76618fb7247bc0;
  }
  *(code **)((long)puVar35 + -0xa0) = unaff_RBX;
  uVar49 = (uVar49 ^ 10) + 0xf;
code_r0x00010001e342:
                    /* WARNING: Could not recover jumptable at 0x00010001e364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_11 =
       (undefined **)
       (*(code *)(&LAB_10001eaf5 +
                 (int)in_R11[(int)((uint)(uVar10 == (uVar49 ^ 0x3166a93c)) + (int)unaff_R14)]))();
  return UNRECOVERED_JUMPTABLE_11;
}

