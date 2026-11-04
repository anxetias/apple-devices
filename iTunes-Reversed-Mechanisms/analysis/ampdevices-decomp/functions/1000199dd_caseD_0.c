// name: caseD_0
// address: 1000199dd

/* WARNING: Instruction at (ram,0x000100019e46) overlaps instruction at (ram,0x000100019e45)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** switchD_10001503e::caseD_0(undefined8 param_1,undefined **param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char unaff_00084f00;
  undefined8 *unaff_0008ae00;
  uint3 uVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  int7 iVar20;
  undefined **UNRECOVERED_JUMPTABLE_18;
  long lVar15;
  undefined7 uVar21;
  long lVar16;
  char *pcVar17;
  undefined8 uVar18;
  long *plVar19;
  byte bVar23;
  byte bVar24;
  uint uVar25;
  int iVar26;
  undefined **UNRECOVERED_JUMPTABLE_13;
  char *pcVar27;
  byte bVar31;
  uint extraout_EDX;
  uint uVar28;
  uint uVar29;
  long lVar30;
  undefined **UNRECOVERED_JUMPTABLE;
  code cVar38;
  int iVar33;
  uint uVar34;
  undefined **UNRECOVERED_JUMPTABLE_12;
  undefined *puVar37;
  uint *puVar39;
  uint *puVar40;
  uint *puVar41;
  uint *puVar42;
  uint *puVar43;
  uint *puVar44;
  uint *puVar45;
  uint *puVar46;
  uint *puVar47;
  undefined8 *puVar48;
  uint *puVar49;
  uint *puVar50;
  uint *puVar51;
  uint *puVar52;
  uint *puVar53;
  uint *puVar54;
  uint *puVar55;
  uint *puVar56;
  uint *puVar57;
  uint *puVar58;
  uint *puVar59;
  uint *puVar60;
  uint *puVar61;
  uint *puVar62;
  uint *puVar63;
  uint *puVar64;
  uint *puVar65;
  uint *unaff_RBP;
  uint *puVar66;
  uint *puVar67;
  uint *puVar68;
  uint *puVar69;
  uint *puVar70;
  uint *puVar71;
  uint *puVar72;
  uint *puVar73;
  uint *puVar74;
  uint *puVar75;
  uint *puVar76;
  uint *puVar77;
  uint *puVar78;
  uint *puVar79;
  uint *puVar80;
  uint *puVar81;
  uint *puVar82;
  uint uVar83;
  byte bVar84;
  uint uVar85;
  undefined **ppuVar87;
  ulong uVar88;
  bool bVar89;
  undefined **ppuVar90;
  code *UNRECOVERED_JUMPTABLE_19;
  uint uVar91;
  ulong uVar92;
  uint uVar93;
  undefined **ppuVar94;
  uint *puVar95;
  uint *puVar96;
  uint uVar97;
  uint *puVar98;
  undefined **unaff_R12;
  uint uVar99;
  uint *unaff_R13;
  int iVar100;
  uint uVar101;
  undefined **unaff_R14;
  uint uVar102;
  uint uVar103;
  undefined **unaff_R15;
  uint *in_GS_OFFSET;
  bool bVar104;
  bool bVar105;
  bool bVar106;
  char in_AF;
  bool bVar107;
  bool bVar108;
  bool bVar109;
  byte bVar110;
  longdouble in_ST0;
  undefined1 in_XMM14 [16];
  undefined1 auVar111 [16];
  undefined6 uVar22;
  int7 iVar32;
  uint uVar35;
  undefined **ppuVar36;
  uint uVar86;
  
  bVar110 = 0;
code_r0x0001000199dd:
  *(undefined ***)((long)unaff_RBP + -0x88) = param_2;
  UNRECOVERED_JUMPTABLE_12 = (undefined **)0x6;
  *(undefined8 *)unaff_R13 = 0;
  *(undefined8 *)((long)unaff_R13 + 8) = 0x6d011ee84dd29bf2;
  *(undefined4 *)((long)unaff_R13 + 0x10) = 0;
  *(undefined ***)((long)unaff_RBP + -0x80) = unaff_R15;
  *(undefined8 *)((long)register0x00000020 + -8) = 0x100019a1f;
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)unaff_R15)(0x1000);
  puVar64 = (uint *)register0x00000020;
  puVar63 = unaff_RBP;
  puVar96 = &switchD_100019e65::switchdataD_1006d1710;
  unaff_R15 = (undefined **)0x12;
switchD_10001997c_caseD_19a26:
  puVar49 = puVar64;
  *(undefined ***)unaff_R13 = UNRECOVERED_JUMPTABLE_18;
  UNRECOVERED_JUMPTABLE = (undefined **)unaff_R12[(int)UNRECOVERED_JUMPTABLE_12 + 0x1a];
  puVar53 = puVar49;
  switch(caseD_0 + *(int *)((long)puVar96 +
                           (ulong)((UNRECOVERED_JUMPTABLE_18 == (undefined **)0x0) + 6) * 4)) {
  case (code *)0x100019dcf:
switchD_100019a4b_caseD_19dcf:
    *(undefined ***)((long)puVar63 + -0x198) = unaff_R14;
    *(undefined ***)((long)puVar63 + -0x60) = UNRECOVERED_JUMPTABLE;
    iVar100 = (int)unaff_R15;
    uVar102 = iVar100 - 0x12;
    unaff_R15 = (undefined **)(ulong)uVar102;
    iVar100 = iVar100 + 0xa5;
    *(undefined4 *)((long)unaff_R13 + 8) = 0x4dd2abf2;
    iVar33 = *(int *)((long)puVar96 + (long)(int)(uVar102 + ((code *)unaff_R13 == (code *)0x0)) * 4)
    ;
    *(undefined **)((long)puVar63 + -0x110) = unaff_R12[(int)(uVar102 ^ 0xd)] + -1;
    iVar26 = 0;
    *(undefined ***)((long)puVar63 + -0xe8) = param_2;
    *(undefined ***)((long)puVar63 + -0xc0) = param_2;
    *(undefined ***)((long)puVar63 + -0xa0) = param_2;
    *(undefined ***)((long)puVar63 + -0xb8) = param_2;
    *(undefined ***)((long)puVar63 + -0xb0) = param_2;
    *(undefined ***)((long)puVar63 + -0xd0) = param_2;
    *(undefined8 *)((long)puVar63 + -0x48) = 0x7f31ac3dd4da00c4;
    *(uint **)((long)puVar63 + -0x90) = unaff_R13;
    switch((long)iVar33 + 0x100019dcf) {
    case 0x10001a6ec:
code_r0x00010001a6ec:
      uVar83 = (uint)unaff_R15;
      uVar102 = uVar83 ^ 2;
      unaff_R15 = (undefined **)(ulong)uVar102;
      UNRECOVERED_JUMPTABLE_12 = unaff_R15;
      break;
    case 0x10001b330:
switchD_100019e65_caseD_1b330:
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(long)(iVar26 + iVar100);
switchD_10001a75e_caseD_1b34c:
                    /* WARNING: Could not recover jumptable at 0x00010001b35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)*(int *)((long)puVar96 + (long)UNRECOVERED_JUMPTABLE_18 * 4) +
                     0x10001b330))();
      return UNRECOVERED_JUMPTABLE_18;
    }
switchD_10001a75e_caseD_1a6f3:
    ppuVar36 = UNRECOVERED_JUMPTABLE_12;
    uVar35 = (uint)ppuVar36;
    uVar34 = uVar35 ^ 8;
    UNRECOVERED_JUMPTABLE_12 = (undefined **)(ulong)uVar34;
    uVar25 = uVar102 + 2;
    UNRECOVERED_JUMPTABLE_13 = (undefined **)(ulong)uVar25;
    ppuVar94 = (undefined **)((long)unaff_R13 + 0xc);
    uVar101 = *(uint *)((long)unaff_R13 + 8);
    unaff_R14 = (undefined **)(ulong)uVar101;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)*(uint *)((long)unaff_R13 + 0xc);
    uVar28 = uVar34 + *(uint *)((long)unaff_R13 + 0xc) + 0x16f1d983;
    UNRECOVERED_JUMPTABLE = (undefined **)(ulong)uVar28;
    param_2 = (undefined **)(ulong)(uVar101 + 0x36205c7f);
    bVar104 = uVar28 < 0x83f2f871;
    ppuVar87 = (undefined **)(ulong)bVar104;
    uVar5 = (uint3)((uVar25 ^ 0x83f2f875) >> 8);
    bVar89 = uVar101 + 0x36205c7f < (uVar25 ^ 0x83f2f875) != bVar104;
    uVar28 = CONCAT31(uVar5,bVar89);
    ppuVar90 = (undefined **)(ulong)uVar28;
code_r0x00010001a736:
    puVar13 = PTR__xpc_release_10082eb00;
    uVar92 = (ulong)((uint)param_2 < (uint)UNRECOVERED_JUMPTABLE);
    uVar103 = (uint)bVar104;
    if (bVar89) {
      uVar92 = (ulong)uVar103;
    }
code_r0x00010001a746:
    bVar108 = SUB81(uVar92,0);
    uVar85 = (uint)uVar92;
    uVar29 = *(uint *)((long)puVar96 + (long)(int)(uVar85 + uVar102) * 4);
    UNRECOVERED_JUMPTABLE = (undefined **)(long)(int)uVar29;
    bVar105 = (undefined **)0xfffffffefffe5913 < UNRECOVERED_JUMPTABLE;
    param_2 = (undefined **)((long)UNRECOVERED_JUMPTABLE + 0x10001a6ec);
    bVar109 = (long)param_2 < 0;
    bVar107 = param_2 == (undefined **)0x0;
    bVar106 = (POPCOUNT((ulong)param_2 & 0xff) & 1U) == 0;
    bVar84 = (byte)UNRECOVERED_JUMPTABLE_18;
    uVar9 = (uint)UNRECOVERED_JUMPTABLE_18;
    uVar21 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_18 >> 8);
    uVar22 = (undefined6)((ulong)UNRECOVERED_JUMPTABLE_18 >> 0x10);
    cVar8 = (char)uVar29;
    bVar31 = (byte)(uVar29 >> 8);
    uVar99 = (uint)unaff_R13;
    bVar24 = (byte)uVar25;
    cVar38 = SUB81((ulong)ppuVar36 >> 8,0);
    uVar86 = (uint)param_2;
    uVar97 = (uint)unaff_R12;
    iVar32 = (int7)(int3)(uVar29 >> 8);
    uVar91 = (uint)puVar63;
    uVar93 = (uint)ppuVar94;
    iVar33 = (int)puVar96;
    puVar95 = (uint *)UNRECOVERED_JUMPTABLE_18;
    puVar41 = puVar53;
    puVar42 = puVar53;
    puVar50 = puVar53;
    puVar47 = puVar53;
    puVar64 = puVar63;
    puVar70 = puVar63;
    puVar74 = puVar63;
    puVar59 = puVar63;
    puVar58 = puVar63;
    puVar73 = puVar63;
    puVar78 = puVar63;
    puVar61 = puVar63;
    puVar76 = puVar63;
    puVar52 = puVar53;
    puVar68 = puVar63;
    puVar77 = puVar63;
    puVar67 = puVar63;
    puVar98 = (uint *)unaff_R12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_2) {
    case (undefined **)0x100013ad7:
      out(0xd9,bVar84);
      *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (long)UNRECOVERED_JUMPTABLE) = (code)0x9;
      *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar9 + 0xafd9e784)) = (code)0x6f;
      *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar9 + 0xafd9e785)) = (code)0xe6;
      *(undefined ***)((long)puVar63 + -0x158) = param_2;
      *(int *)param_2 = *(int *)param_2 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100013b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)(uVar102 + 1)] +
                     0x100013b10))
                     (*(undefined8 *)((long)puVar63 + -0x58),param_2,(ulong)(uVar9 + 0xafd9e784),
                      (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                          [(int)(uVar102 + 1)] + 0x100013b10));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x1000152b7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000153ef:
                    /* WARNING: Could not recover jumptable at 0x000100015415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_100015351 +
                     *(int *)((long)unaff_R13 + (long)(int)(uVar101 + bVar105) * 4)))
                     (ppuVar87,param_2,
                      &DAT_100015351 +
                      *(int *)((long)unaff_R13 + (long)(int)(uVar101 + bVar105) * 4));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100015655:
      *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar84;
      *(char *)((long)puVar63 + -0x67b73ebd) = *(char *)((long)puVar63 + -0x67b73ebd) + bVar24;
      uVar10 = *(undefined4 *)
                ((&PTR__bootstrap_look_up_10082e9f0)[(long)UNRECOVERED_JUMPTABLE_18] + -2);
      puVar13 = *ppuVar90;
      iVar33 = *(int *)((long)ppuVar90 + 0xc);
      puVar37 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar34 - 0x4e)];
      *(undefined8 *)((long)puVar53 + -8) = 0x100015693;
      uVar102 = (*(code *)(puVar37 + -3))
                          (uVar10,puVar13,iVar33 + -0x72613787,(undefined8 *)((long)puVar63 + -0xf8)
                           ,(undefined1 *)((long)puVar63 + -0x7c));
                    /* WARNING: Could not recover jumptable at 0x0001000156c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_100015634 +
                     (int)*(uint *)((long)unaff_R12 +
                                   (long)(int)(((uVar102 ^ 0xcaefb7f7) + (uVar102 & 0xcaefb7f7) * 2
                                                + 0x7ffddf5f == uVar101 + 0xd39b3612) + uVar34) * 4)
                     ))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100015c27:
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100016579:
      *(undefined8 *)((long)puVar53 + -8) = 0x10001657f;
      func_0x000139d3972c(ppuVar87,UNRECOVERED_JUMPTABLE + (0x200034de - (ulong)bVar110));
      unaff_00084f00 = '\x02';
      puVar39 = (uint *)((long)puVar53 + -8);
      unaff_0008ae00 = (undefined8 *)((long)puVar53 + -8);
      puVar11 = (undefined8 *)((long)puVar53 + -8);
      *(uint **)((long)puVar53 + -8) = puVar63;
      cVar8 = '\x01';
      do {
        puVar63 = (uint *)((long)puVar63 + -8);
        puVar11 = puVar11 + -1;
        *puVar11 = *(undefined8 *)puVar63;
        cVar8 = cVar8 + -1;
        ppuVar90 = UNRECOVERED_JUMPTABLE_12;
        uVar102 = extraout_EDX;
      } while ('\0' < cVar8);
      goto code_r0x00010001657f;
    case (undefined **)0x10001658c:
      uVar92 = (ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_18 + -0x73);
      ppuVar90 = UNRECOVERED_JUMPTABLE_12;
      goto code_r0x000100016594;
    case (undefined **)0x1000165d2:
                    /* WARNING: Could not recover jumptable at 0x0001000165e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)param_2 + (long)UNRECOVERED_JUMPTABLE_13))
                     (ppuVar87,(code *)((long)param_2 + (long)UNRECOVERED_JUMPTABLE_13));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100016610:
      *(uint *)(UNRECOVERED_JUMPTABLE_13 + 0x1a107a) =
           *(uint *)(UNRECOVERED_JUMPTABLE_13 + 0x1a107a) + uVar25;
      iVar33 = *(int *)((long)unaff_R13 + (long)(int)uVar9 * 4);
      *(ulong *)((long)puVar63 + -0xd0) = (ulong)param_2 & 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x000100016640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_1000165e8 + iVar33))
                     (*(undefined8 *)((long)puVar63 + -0x68),param_2,UNRECOVERED_JUMPTABLE,0,puVar96
                      ,0x3165f9b3);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x1000168e0:
      UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x75);
      *(int *)UNRECOVERED_JUMPTABLE_19 = *(int *)UNRECOVERED_JUMPTABLE_19 + -1;
      if (*(int *)UNRECOVERED_JUMPTABLE_19 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001694d:
      *(byte *)(ppuVar87 + 0x200) = *(byte *)(ppuVar87 + 0x200) + (char)cVar38;
      *(undefined8 *)((long)puVar53 + -8) = 0x100016956;
      puVar13 = (undefined *)(*(code *)unaff_R13)();
      *unaff_R14 = puVar13;
                    /* WARNING: Could not recover jumptable at 0x000100016976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001691c +
                     (int)*(uint *)((long)unaff_R12 +
                                   (long)(int)(uVar102 + (puVar13 == (undefined *)0x0)) * 4)))
                     (unaff_R12);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100016b2a:
      goto switchD_10001a75e_caseD_16b2a;
    case (undefined **)0x100016c7f:
      UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_10001a4ad();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100016cee:
                    /* WARNING: Could not recover jumptable at 0x000100016d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_100016ce4 +
                     *(int *)((long)ppuVar90 +
                             (long)(int)(uVar97 + ((undefined **)puVar96 == (undefined **)0x0)) * 4)
                     ))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100016d5c:
      *(uint *)((long)puVar63 + -0x60) = uVar9;
      *(undefined8 *)((long)puVar63 + -0x88) = *(undefined8 *)((long)puVar63 + -0xa8);
      *(undefined8 *)((long)puVar63 + -0xa0) = *(undefined8 *)((long)puVar63 + -0xb8);
      uVar12 = *(undefined8 *)((long)puVar63 + -0x78);
      *(undefined8 *)((long)puVar63 + -0xe8) = uVar12;
      UNRECOVERED_JUMPTABLE_12 = (undefined **)(ulong)(uVar34 + 0xd4b899a & 0xf2b475ff);
      goto code_r0x000100016d68;
    case (undefined **)0x100016d66:
      uVar12 = CONCAT62(uVar22,CONCAT11(0xf2,bVar84));
code_r0x000100016d68:
      *(undefined8 *)((long)puVar63 + -0x78) = uVar12;
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           switchD_100020322::caseD_1b465
                     (ppuVar87,((ulong)UNRECOVERED_JUMPTABLE_12 ^ 0xfffffff1) & (ulong)unaff_R15,
                      *(undefined8 *)((long)puVar63 + -0x138),&LAB_100017a4d);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100016e46:
      uVar102 = *(uint *)((long)unaff_R12 +
                         (long)(int)((int)CONCAT71(iVar32,uVar103 == uVar9) + uVar101) * 4);
      *(undefined4 *)((long)puVar63 + -0x50) = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x000100016e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(switchD_100017cdc::caseD_16e2f + (int)uVar102))
                     (ppuVar87,switchD_100017cdc::caseD_16e2f + (int)uVar102);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100016ea8:
      uVar102 = uVar91 + *(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 100);
      uVar92 = (ulong)(uVar102 + bVar105);
      *(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) =
           (code)(((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) - bVar24) -
                 (CARRY4(uVar91,*(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 100)) ||
                 CARRY4(uVar102,(uint)bVar105)));
      *(ulong *)(uVar92 - 0xf0) = (ulong)*(uint *)(uVar92 - 0x68);
      UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_100015e19();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100016f7e:
      *(undefined **)((long)puVar63 + -0x30) = *UNRECOVERED_JUMPTABLE_18;
      _DAT_10088e7f0 =
           ((ulong)((long)puVar63 + -0x1a8) ^ 0xa7a004eac7f8732f ^ DAT_10088e7f8 - _DAT_10088e7f0) *
           0x79f54c43;
      uVar102 = ((int)_DAT_10088e7f0 * 2 ^ 0xc7f8732fU) * 0x79f54c43;
      unaff_R12 = (undefined **)
                  (&PTR__bootstrap_look_up_10082e9f0)
                  [(int)((byte)((byte)uVar102 ^
                               (&DAT_1006d0d70)[(byte)(&DAT_1006cfe50)[uVar102 & 0xff] ^ 0x2c]) -
                        0xa5)];
      *(undefined8 *)((long)puVar53 + -8) = 0x100017001;
      DAT_10088e7f8 = _DAT_10088e7f0;
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)unaff_R12)(0x18);
      unaff_R13 = (uint *)&DAT_1006d13e0;
      puVar44 = puVar53;
      puVar65 = puVar63;
      unaff_R15 = (undefined **)0x3165f9b2;
      switch(UNRECOVERED_JUMPTABLE_18 == (undefined **)0x0) {
      case false:
        *(code **)((long)puVar63 + -0xa0) =
             (code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x3cd24ee3f7b6c2e5);
        *(undefined ***)((long)puVar63 + -0x1a0) = UNRECOVERED_JUMPTABLE_12;
        *UNRECOVERED_JUMPTABLE_18 = (undefined *)0x0;
        UNRECOVERED_JUMPTABLE_18[1] = (undefined *)0x4a01cb8754795f16;
        puVar45 = puVar53;
        break;
      case true:
        goto switchD_100017043_caseD_1;
      }
      goto code_r0x000100019e96;
    case (undefined **)0x100017104:
      UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x44a55c0f);
      *(uint *)UNRECOVERED_JUMPTABLE_19 =
           *(uint *)UNRECOVERED_JUMPTABLE_19 << 0x15 | *(uint *)UNRECOVERED_JUMPTABLE_19 >> 0xb;
      puVar56 = puVar63;
      goto switchD_10001997c_caseD_1710b;
    case (undefined **)0x100017261:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000173c7:
      iVar33 = *(int *)((long)puVar96 +
                       (long)(int)((UNRECOVERED_JUMPTABLE_18 == (undefined **)0x0) + 0x6d1710) * 4);
      *(undefined8 *)((long)puVar63 + -0x120) = 0;
                    /* WARNING: Could not emulate address calculation at 0x0001000173d7 */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_1000173a2 + iVar33))
                     (ppuVar87,param_2,&DAT_1000173a2 + iVar33,0,0x3165f9b2);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100017408:
      uVar34 = uVar9 - 0x8b830d | 0xc;
      UNRECOVERED_JUMPTABLE = (undefined **)&DAT_10001a242;
      ppuVar90 = (undefined **)(ulong)(uVar25 < 0x7b5226d2);
      break;
    case (undefined **)0x10001741b:
      *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar84;
      *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar84;
      UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x5226d2f9);
      cVar38 = *UNRECOVERED_JUMPTABLE_19;
      *UNRECOVERED_JUMPTABLE_19 = (code)((char)*UNRECOVERED_JUMPTABLE_19 + bVar84);
      if ((POPCOUNT(*UNRECOVERED_JUMPTABLE_19) & 1U) == 0) {
        UNRECOVERED_JUMPTABLE_18 = (undefined **)CONCAT71(uVar21,CARRY1((byte)cVar38,bVar84));
      }
      else {
        pbVar1 = (byte *)((long)puVar63 + 0x31);
        *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
      }
      break;
    case (undefined **)0x100017445:
      if (!bVar105 && !bVar107) {
        puVar2 = (undefined1 *)((long)puVar63 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 0xd);
        *puVar2 = *puVar2;
        UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -1);
        bRam01498104634f006b = bVar84;
        *UNRECOVERED_JUMPTABLE_19 =
             (code)((char)*UNRECOVERED_JUMPTABLE_19 << 1 | (char)*UNRECOVERED_JUMPTABLE_19 < '\0');
        if ((code *)((long)UNRECOVERED_JUMPTABLE_13 + -1) != (code *)0x0 && !bVar107) {
          puVar13 = unaff_R15[uVar34 & 0x299e558c];
          *(undefined ***)((long)puVar63 + -200) = ppuVar87;
          *(undefined **)((long)puVar53 + -8) = &UNK_100017509;
          (*(code *)(CONCAT71(uVar21,bVar84 - 0x39) + -3))(ppuVar87,puVar13 + -3);
          puVar13 = unaff_R15[(int)(uVar34 - 0x55)];
          *(undefined8 *)((long)puVar63 + -0x78) = 0;
          uVar12 = *(undefined8 *)((long)puVar63 + -0x110);
          *(undefined **)((long)puVar53 + -8) = &UNK_100017527;
          lVar16 = (*(code *)(puVar13 + -2))(uVar12,0);
                    /* WARNING: Could not recover jumptable at 0x000100017556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          UNRECOVERED_JUMPTABLE_18 =
               (undefined **)
               (*(code *)(&UNK_1000174a8 +
                         (int)(&switchD_100019e65::switchdataD_1006d1710)
                              [(int)(uVar34 + (lVar16 == 0))]))();
          return UNRECOVERED_JUMPTABLE_18;
        }
        iVar33 = *(int *)((long)puVar63 + -0xa0);
        uVar102 = uVar28 * 2 + 0x5499cac0;
        uVar83 = uVar102 ^ 0x7fbf3fa7;
        uVar102 = uVar102 & 0xffbf3fa6;
        *(ulong *)((long)puVar63 + -0xa0) = (ulong)(uVar83 + uVar102 * 2 + uVar86);
        uVar102 = uVar83 + uVar102 * 2 + 0x6d4db16a;
        bVar89 = uVar29 < uVar102;
        if (0x12f30eee < (uint)(code *)((long)UNRECOVERED_JUMPTABLE_13 + -1) != uVar102 < 0xed0cf111
           ) {
          bVar89 = uVar102 < 0xed0cf111;
        }
                    /* WARNING: Could not recover jumptable at 0x0001000187b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)ppuVar87 +
                       (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                                  [(int)((uint)bVar89 + iVar33)]))();
        return UNRECOVERED_JUMPTABLE_18;
      }
      break;
    case (undefined **)0x100017475:
      pbVar1 = (byte *)((long)puVar63 + 0xf);
      *pbVar1 = *pbVar1 << 5 | *pbVar1 >> 3;
      UNRECOVERED_JUMPTABLE =
           (undefined **)CONCAT62((int6)(short)(uVar29 >> 0x10),CONCAT11(0xc3,cVar8));
      goto code_r0x00010001747e;
    case (undefined **)0x100017665:
      *(int *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000176a0:
      *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar84;
      pcVar17 = (char *)((long)UNRECOVERED_JUMPTABLE_13 * 5 + -0x5b);
      *pcVar17 = *pcVar17 + bVar24;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000178ce:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001794f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100017c10:
      UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7f);
      *UNRECOVERED_JUMPTABLE_19 =
           (code)((char)*UNRECOVERED_JUMPTABLE_19 << 1 | (char)*UNRECOVERED_JUMPTABLE_19 < '\0');
      LOCK();
      *(int *)((long)ppuVar87 + -0x2dfe2226) = *(int *)((long)ppuVar87 + -0x2dfe2226) + 1;
      UNLOCK();
      uVar102 = (uVar29 & uVar86) + uVar28 + 0x787c5669;
      bVar89 = uVar9 < uVar102;
      if (bVar108 != uVar102 < 0x5656f668) {
        bVar89 = uVar102 < 0x5656f668;
      }
                    /* WARNING: Could not recover jumptable at 0x000100017c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)ppuVar87 +
                     (long)(int)(&switchD_100019e65::switchdataD_1006d1710)[(int)(bVar89 + uVar101)]
                     ))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100017d14:
      puVar95 = puVar96;
      goto code_r0x000100017d2a;
    case (undefined **)0x100017dfa:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100017e19:
      if (-0x10001a6ed < (long)UNRECOVERED_JUMPTABLE) {
                    /* WARNING: Could not recover jumptable at 0x000100017e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&UNK_100017dda +
                       (int)*(uint *)((long)unaff_R12 +
                                     (long)(int)((ppuVar90 == (undefined **)0x0) - 0xa4) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      }
      uVar102 = ((~(uint)bVar104 & 0x538875e) - (~(uint)bVar104 | 0x538875f) ^ 0xdc5804ee) *
                0x65773fe7;
      UNRECOVERED_JUMPTABLE_13 = (undefined **)(ulong)uVar102;
      *(uint *)((long)puVar63 + -0x3c) = uVar9 + uVar102 + uVar34 + 0x55e3d6d;
      puVar40 = puVar53;
      puVar57 = puVar63;
      goto switchD_10001997c_caseD_17e47;
    case (undefined **)0x100017e41:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100017e9a:
                    /* WARNING: Could not recover jumptable at 0x000100017ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_100017e93 +
                     (int)*(uint *)((long)unaff_R12 +
                                   (long)(int)((uVar99 & 0x8f73f96f) + 0x78ad9ee3 +
                                              (uint)(*ppuVar90 == (undefined *)0x0)) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100017ed9:
      goto switchD_10001a75e_caseD_17ed9;
    case (undefined **)0x100017f7a:
      goto code_r0x000100017f5f;
    case (undefined **)0x100017f85:
      *(undefined ***)((long)puVar63 + -0xe8) = UNRECOVERED_JUMPTABLE_13;
      *(undefined ***)((long)puVar63 + -0xc0) = UNRECOVERED_JUMPTABLE_13;
      *(undefined ***)((long)puVar63 + -0xa0) = UNRECOVERED_JUMPTABLE_13;
      *(undefined ***)((long)puVar63 + -0xb8) = UNRECOVERED_JUMPTABLE_13;
      *(undefined ***)((long)puVar63 + -0xb0) = UNRECOVERED_JUMPTABLE_13;
      *(undefined ***)((long)puVar63 + -0xd0) = UNRECOVERED_JUMPTABLE_13;
      *(undefined8 *)((long)puVar63 + -0x48) = 0x7f31ac3dd4da00c4;
      goto LAB_10001b2e9;
    case (undefined **)0x100018263:
      goto switchD_10001a75e_caseD_18263;
    case (undefined **)0x1000183d8:
      out(0xff,uVar9);
      UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7f);
      *(uint *)UNRECOVERED_JUMPTABLE_19 =
           *(uint *)UNRECOVERED_JUMPTABLE_19 << (bVar24 & 0x1f) |
           *(uint *)UNRECOVERED_JUMPTABLE_19 >> 0x20 - (bVar24 & 0x1f);
      bVar89 = (uVar25 & 0x1f) == 0;
      uVar83 = in(0x8f);
      pcVar17 = (char *)(ulong)uVar83;
      uVar102 = *(uint *)((long)ppuVar87 * 5);
      *pcVar17 = (*pcVar17 - (char)uVar83) -
                 (bVar89 * bVar105 | !bVar89 * ((*(uint *)UNRECOVERED_JUMPTABLE_19 & 1) != 0));
      *pcVar17 = *pcVar17 + (char)uVar83;
      UNRECOVERED_JUMPTABLE_19 = *(code **)((ulong)uVar102 - 0x80);
      *(undefined8 *)((long)puVar53 + -8) = 0x1000183f1;
      lVar16 = (*UNRECOVERED_JUMPTABLE_19)();
      iVar33 = *(int *)((long)puVar96 + (long)(int)(uVar97 + (lVar16 == 0)) * 4);
      *(undefined4 *)((ulong)uVar102 - 0x58) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x00010001841f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_1000183cf + iVar33))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100018430:
                    /* WARNING: Could not recover jumptable at 0x000100018464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001842a +
                     *(int *)((long)puVar96 +
                             (long)(int)((ppuVar94 == (undefined **)0x7f31ac3dd4da00c4) + uVar34) *
                             4)))
                     (ppuVar87,param_2,
                      &DAT_10001842a +
                      *(int *)((long)puVar96 +
                              (long)(int)((ppuVar94 == (undefined **)0x7f31ac3dd4da00c4) + uVar34) *
                              4));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100018469:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001848f:
      uVar83 = uVar29 + uVar9 + 0x5ce313a4;
      uVar102 = (uint)*(undefined8 *)puVar53;
      bVar89 = uVar102 < 0xaab5b043;
      if (uVar83 < uVar101 + 0xaab5afa7 == uVar102 < 0xaab5b043) {
        bVar89 = uVar83 < uVar102;
      }
                    /* WARNING: Could not recover jumptable at 0x0001000184eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_100018467 +
                     (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)(bVar89 + uVar86)]))
                     (&DAT_100018467 +
                      (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)(bVar89 + uVar86)]);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x1000184ea:
      out(0x59,(int)((long)((ulong)uVar29 << 0x20 | (ulong)UNRECOVERED_JUMPTABLE_18) /
                    (long)(int)uVar103));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100018517:
      uVar102 = (uint)*(byte *)((long)ppuVar87 + (ulong)(uVar86 + uVar25 + 0x825b8c91)) |
                (uint)*(byte *)((long)ppuVar87 + (ulong)(uVar86 + 0x825b8cc7)) << 8 |
                (uint)*(byte *)((long)ppuVar87 + (ulong)(uVar86 + 0x825b8cc6)) << 0x10 |
                (uint)*(byte *)((long)ppuVar87 + (ulong)(uVar86 + uVar93 + 0x825b8c88)) << 0x18;
      iVar33 = (uVar102 ^ 0xb7efa97f) + (uVar102 & 0x37efa97f) * 2 + 0x7976fffe;
      *(uint *)UNRECOVERED_JUMPTABLE = uVar86 + 4;
      *(int *)((long)puVar63 + -0x50) = iVar33;
                    /* WARNING: Could not recover jumptable at 0x0001000185a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_1000184ef +
                     (int)*(uint *)((long)unaff_R12 +
                                   (long)(int)((iVar33 == 0x3166a97d) + uVar85) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x1000185b5:
      goto switchD_10001a75e_caseD_185b5;
    case (undefined **)0x10001866b:
      UNRECOVERED_JUMPTABLE_13 =
           (undefined **)
           (long)(int)*(uint *)((long)unaff_R12 + (long)(int)(uVar101 + (uVar9 == 0)) * 4);
      puVar13 = &DAT_100018640;
      goto code_r0x000100018682;
    case (undefined **)0x10001867c:
      puVar13 = (undefined *)0x18640;
code_r0x000100018682:
      *(undefined8 *)((long)puVar63 + -0x118) = 0;
      *(undefined8 *)((long)puVar63 + -0x60) = 0x5a793496016ebe8;
      *(undefined8 *)((long)puVar63 + -0xd0) = 0x5a793496016ebe8;
      *(undefined8 *)((long)puVar63 + -200) = 0x5a793496016ebe8;
      *(undefined8 *)((long)puVar63 + -0xc0) = 0x5a793496016ebe8;
      *(undefined8 *)((long)puVar63 + -0xb0) = 0x5a793496016ebe8;
                    /* WARNING: Could not recover jumptable at 0x0001000186c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)UNRECOVERED_JUMPTABLE_13 + (long)puVar13))
                     (ppuVar87,param_2,(code *)((long)UNRECOVERED_JUMPTABLE_13 + (long)puVar13),0,
                      *(undefined8 *)((long)puVar63 + -0x48),0x3165f9b2);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100018809:
      goto switchD_10001a75e_caseD_18809;
    case (undefined **)0x100018831:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100018a5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100018afa:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100018b81:
      puVar60 = puVar63;
      goto code_r0x000100018b86;
    case (undefined **)0x100018bdc:
      goto switchD_10001a75e_caseD_18bdc;
    case (undefined **)0x100018ce1:
      UNRECOVERED_JUMPTABLE_12 = UNRECOVERED_JUMPTABLE_12 + -0xcf6ffe6;
      *(char *)UNRECOVERED_JUMPTABLE_12 =
           (char)*(code *)UNRECOVERED_JUMPTABLE_12 << 1 |
           (char)*(code *)UNRECOVERED_JUMPTABLE_12 < '\0';
      iVar33 = *(int *)((long)puVar96 + (long)UNRECOVERED_JUMPTABLE_18 * 4);
      *(undefined ***)((long)puVar63 + -0xb8) = ppuVar87;
                    /* WARNING: Could not recover jumptable at 0x000100018d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&LAB_100018cc2 + iVar33))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100018dac:
                    /* WARNING: Could not recover jumptable at 0x000100018db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)((long)ppuVar90 + 0x100018d74))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100018dd4:
      iVar33 = (int)CONCAT62(uVar22,CONCAT11(bVar109 << 7 | bVar107 << 6 | in_AF << 4 | bVar106 << 2
                                             | 2U | bVar105,bVar84));
      goto code_r0x000100018ddb;
    case (undefined **)0x100018e6f:
      uVar102 = *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + (long)UNRECOVERED_JUMPTABLE_18 * 2 + 0xf)
      ;
      puVar63 = (uint *)((long)puVar63 + 0x30);
      *puVar63 = *puVar63 << 1 | *puVar63 >> 0x1f;
      if (bVar108 == false) {
        uVar28 = (uint)(uVar103 < (uVar25 | uVar102));
      }
      lVar16 = (long)*(int *)((long)puVar96 + (long)(int)((uVar28 & 0xff) + uVar97) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100018ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(switchD_10001b5d5::caseD_0 + lVar16))
                     (switchD_10001b5d5::caseD_0 + lVar16,param_2,UNRECOVERED_JUMPTABLE_18,lVar16,
                      0x3165f993);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100018f9c:
      goto switchD_10001a75e_caseD_18f9c;
    case (undefined **)0x100019089:
      goto switchD_10001a75e_caseD_19089;
    case (undefined **)0x100019494:
      pbVar1 = (byte *)(uVar92 + (long)param_2 * 4);
      *pbVar1 = *pbVar1 | (byte)uVar34;
      uVar9 = uVar9 + 0xf588163d;
      *(char *)(ulong)uVar9 = *(char *)(ulong)uVar9 + (char)uVar9;
      goto code_r0x0001000194a1;
    case (undefined **)0x10001952a:
      goto switchD_10001a75e_caseD_1952a;
    case (undefined **)0x1000195a2:
      uVar102 = 0x3165f9b3;
      puVar62 = puVar63;
      goto code_r0x0001000195a7;
    case (undefined **)0x1000195fc:
      *(undefined ***)((long)puVar63 + -0xe8) = unaff_R14;
      *(undefined ***)((long)puVar63 + -0x140) = ppuVar94;
      *(code **)((long)puVar63 + -0x170) = (code *)((long)unaff_R13 + 8);
      bVar89 = (code *)unaff_R13 == (code *)0x0;
      puVar95 = puVar96;
      goto code_r0x000100019629;
    case (undefined **)0x10001961a:
      *(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x77) =
           (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x77) + bVar84);
      *(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7f) = (code)0xf6;
      bVar89 = uVar91 == 0;
      puVar95 = puVar96;
      goto code_r0x000100019629;
    case (undefined **)0x10001971e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100019789:
      out((short)uVar29,bVar84);
      uVar102 = *(uint *)(UNRECOVERED_JUMPTABLE_13 + 7);
      iVar33 = (bVar104 - uVar86) + -0x63cb7209;
      *(byte *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar9 + 0x92fee118)) =
           (byte)((uint)iVar33 >> 0x18) ^ 0x9c;
      *(byte *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar9 + 0x92fee119)) =
           (byte)((uint)iVar33 >> 0x10) ^ 0x34;
      *(byte *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar9 + 0x92fee11a)) =
           (byte)((uint)iVar33 >> 8) ^ 0x8d;
      *(byte *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar9 + 0x92fee11b)) = (byte)iVar33 ^ 0xf7;
      *(undefined ***)((ulong)((uVar91 - uVar102) - (uint)bVar105) - 0x150) = ppuVar90;
      *(int *)ppuVar90 = *(int *)ppuVar90 + 4;
      uVar25 = 1;
    case (undefined **)0x1000197fb:
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar25 & 1);
switchD_10001a75e_caseD_19801:
                    /* WARNING: Could not recover jumptable at 0x000100019814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&LAB_1000197ef +
                     *(int *)((long)puVar96 +
                             (long)(int)((int)UNRECOVERED_JUMPTABLE_18 + uVar97) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100019801:
      goto switchD_10001a75e_caseD_19801;
    case (undefined **)0x100019830:
      puVar95 = puVar96;
      goto code_r0x000100019838;
    case (undefined **)0x10001990f:
      goto switchD_10001a75e_caseD_1990f;
    case (undefined **)0x100019af8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100019b8d:
      UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_10001780a();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100019ba5:
      *(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x73) =
           (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x73) | bVar89);
      UNRECOVERED_JUMPTABLE_18 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_18 ^ 0xc);
      puVar66 = puVar63;
      goto code_r0x000100019bab;
    case (undefined **)0x100019cf7:
      cVar8 = *(char *)((long)puVar63 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 0x73);
      UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d);
      *UNRECOVERED_JUMPTABLE_19 =
           (code)((byte)*UNRECOVERED_JUMPTABLE_19 >> 1 | (char)*UNRECOVERED_JUMPTABLE_19 << 7);
      *(uint *)(UNRECOVERED_JUMPTABLE_13 + 0x1a107b) =
           *(uint *)(UNRECOVERED_JUMPTABLE_13 + 0x1a107b) + uVar25;
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (&DAT_100019cf2 +
           *(int *)((long)ppuVar90 + (long)(int)CONCAT71(uVar21,(bVar84 - cVar8) - bVar105) * 4));
switchD_10001a75e_caseD_19d1d:
                    /* WARNING: Could not recover jumptable at 0x000100019d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100019d1d:
      goto switchD_10001a75e_caseD_19d1d;
    case (undefined **)0x100019e46:
      *(uint *)((long)puVar63 + -0xb8) = uVar86;
      goto switchD_100019a4b_caseD_19dcf;
    case (undefined **)0x100019e8b:
      puVar46 = (uint *)((long)puVar53 + 8);
      if (!bVar109) goto LAB_100019ee2;
      *(uint *)(UNRECOVERED_JUMPTABLE + 9) = *(int *)(UNRECOVERED_JUMPTABLE + 9) + uVar34;
      *(uint *)(UNRECOVERED_JUMPTABLE_18 + 1) = uVar34;
      puVar45 = (uint *)((long)puVar53 + 8);
      goto code_r0x000100019e96;
    case (undefined **)0x100019eed:
      puVar46 = puVar53;
      goto LAB_100019ee2;
    case (undefined **)0x100019f56:
      puVar46 = (uint *)((long)puVar53 + 8);
      puVar68 = (uint *)*(undefined8 **)puVar53;
      goto LAB_100019ee2;
    case (undefined **)0x10001a0a2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001a0ba:
      uVar102 = (&switchD_100019e65::switchdataD_1006d1710)[(int)(uVar34 + (uVar9 == 0))];
      *(undefined8 *)((long)puVar63 + -0x128) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001a0e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001a08f + (int)uVar102))
                     (ppuVar87,param_2,&DAT_10001a08f + (int)uVar102,0,0x3165f9b2);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001a101:
      *(undefined4 *)ppuVar87 = 0;
      ppuVar87[1] = (undefined *)0x4d14149255b31aa0;
      *(undefined8 *)((long)puVar53 + -8) = 0x10001a11a;
      (*(code *)unaff_R15)();
      *(undefined8 *)((long)puVar63 + -0x48) = 0x7f31ac3dd4da00c4;
      param_2 = *(undefined ***)((long)puVar63 + -0x50);
      *(undefined ***)((long)puVar63 + -0xf0) = param_2;
      unaff_R15 = *(undefined ***)((long)puVar63 + -200);
      puVar69 = puVar63;
      goto switchD_10001997c_caseD_1a13a;
    case (undefined **)0x10001a2a2:
      out(0xf9,bVar84);
                    /* WARNING: Could not recover jumptable at 0x00010001a2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001a24a +
                     *(int *)((long)puVar96 +
                             (long)(int)((int)CONCAT71(uVar21,bVar107) + uVar99) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001a370:
      goto switchD_10001a75e_caseD_1a370;
    case (undefined **)0x10001a436:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001a44f:
      *(uint *)(ppuVar87 + 9) = *(uint *)(ppuVar87 + 9) ^ uVar103;
      *(uint *)((long)puVar63 + -0x48) = uVar25;
      goto code_r0x00010001a456;
    case (undefined **)0x10001a462:
                    /* WARNING: Could not recover jumptable at 0x00010001a4a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001a45d +
                     *(int *)((long)unaff_R13 +
                             (long)(int)((uint)((uVar93 + uVar28 + 1 & 3) == 0) + iVar33) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001a4db:
      goto switchD_10001a75e_caseD_1a4db;
    case (undefined **)0x10001a4dd:
      UNRECOVERED_JUMPTABLE_13 =
           (undefined **)
           (ulong)CONCAT22((short)(uVar25 >> 0x10),CONCAT11((char)(uVar25 >> 8) >> 1,bVar24));
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar9 & uVar86);
      goto switchD_10001a75e_caseD_1a4db;
    case (undefined **)0x10001a5ab:
                    /* WARNING: Could not recover jumptable at 0x00010001a5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001a55e +
                     *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                             (long)(int)(((uVar99 + 0x66ffff94 &
                                          uVar9 << (((byte)unaff_R12 ^ 0x62) & 0x1f)) +
                                          (uVar29 ^ 0x337ffffd) == 0x337ffffd) + uVar97) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001a62b:
                    /* WARNING: Could not recover jumptable at 0x00010001a65b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001a629 +
                     *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                             (long)(int)(uVar9 + (*(long *)((long)unaff_R13 + -0x7f31ac3dd4da00b8)
                                                 == 0)) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001a6ec:
      goto code_r0x00010001a6ec;
    case (undefined **)0x10001a6ee:
      *(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x73) =
           (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x73) | bVar84);
      puVar48 = (undefined8 *)((long)puVar53 + -8);
      puVar53 = (uint *)((long)puVar53 + -8);
      *puVar48 = puVar63;
    case (undefined **)0x10001a6f3:
      goto switchD_10001a75e_caseD_1a6f3;
    case (undefined **)0x10001a70a:
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001a712:
      if (!bVar107 && -0x10001a6ed < (long)UNRECOVERED_JUMPTABLE) {
        return UNRECOVERED_JUMPTABLE_18;
      }
      *(byte *)param_2 = (byte)*(code *)param_2 & bVar31;
      goto switchD_10001a75e_caseD_1a6f3;
    case (undefined **)0x10001a732:
      goto switchD_10001a75e_caseD_1a732;
    case (undefined **)0x10001a748:
      goto code_r0x00010001a746;
    case (undefined **)0x10001a756:
      goto switchD_10001a75e_caseD_1a756;
    case (undefined **)0x10001a758:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001a764:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001a77c:
      *(uint *)UNRECOVERED_JUMPTABLE_18 = *(int *)UNRECOVERED_JUMPTABLE_18 + uVar9;
      *(byte *)((long)ppuVar87 + 0x4c) =
           *(byte *)((long)ppuVar87 + 0x4c) + (char)((ulong)UNRECOVERED_JUMPTABLE_18 >> 8);
      UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar63 + -0x68);
      *(undefined8 *)((long)puVar53 + -8) = 0x10001a789;
      (*UNRECOVERED_JUMPTABLE_19)((ulong)puVar53 & 0xffffffff);
      uVar28 = *(uint *)((long)puVar63 + -0x58);
      UNRECOVERED_JUMPTABLE_13 = *(undefined ***)((long)puVar63 + -0x50);
      puVar96 = &switchD_100019e65::switchdataD_1006d1710;
    case (undefined **)0x10001a797:
      pcVar17 = (char *)((long)UNRECOVERED_JUMPTABLE_13 * 5 + -0x18);
      *pcVar17 = *pcVar17 + (char)UNRECOVERED_JUMPTABLE_13;
      *(uint **)((long)puVar63 + -0x78) = unaff_R13;
      *(undefined ***)((long)puVar63 + -0x98) = UNRECOVERED_JUMPTABLE_12;
      *(undefined ***)((long)puVar63 + -0x50) = UNRECOVERED_JUMPTABLE_13;
      *(undefined ***)((long)puVar63 + -0xd8) = unaff_R12;
                    /* WARNING: Could not recover jumptable at 0x00010001a7f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)*(int *)((long)puVar96 +
                                    (long)(int)((uint)((int)uVar28 <
                                                      (int)((uVar101 ^ 0x8b8344) + 0x93ddd82a &
                                                            0x6c2227bd ^ 0x3166a94c)) +
                                               (uVar101 ^ 0x8b8344)) * 4) + 0x10001a7ad))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001a7a3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001a827:
                    /* WARNING: Could not recover jumptable at 0x00010001a82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001a835:
      goto switchD_10001a75e_caseD_1a835;
    case (undefined **)0x10001a86b:
      goto switchD_10001a75e_caseD_1a86b;
    case (undefined **)0x10001aa94:
      if (SCARRY8((long)UNRECOVERED_JUMPTABLE,0x10001a6ec)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001aacc:
                    /* WARNING: Could not recover jumptable at 0x00010001aae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x10001aa9f))
                     (0,param_2,(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x10001aa9f),
                      UNRECOVERED_JUMPTABLE_13,0x3165f9b2,*(undefined8 *)((long)puVar63 + -0x58));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001aade:
      *(uint *)UNRECOVERED_JUMPTABLE_13 = *(uint *)UNRECOVERED_JUMPTABLE_13 ^ uVar86;
      UNRECOVERED_JUMPTABLE_19 =
           (code *)((long)UNRECOVERED_JUMPTABLE_12 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 0x4d);
      *(int *)UNRECOVERED_JUMPTABLE_19 = *(int *)UNRECOVERED_JUMPTABLE_19 + -1;
      uVar102 = uVar29;
      if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x1) {
        uVar102 = uVar29 + 4;
        ppuVar87 = (undefined **)
                   (ulong)(*(int *)((long)puVar96 + 0xc) + uVar102 + -7 +
                          ((uVar29 - 3 | 4) ^ 0xabd9f59d));
        param_2 = (undefined **)(ulong)(*(int *)((long)puVar96 + 8) + 0xa1626206);
      }
      bVar89 = (uint)ppuVar87 < 0xf5dbc11c;
      uVar28 = (uint)bVar89;
      uVar92 = (ulong)((uint)param_2 < 0xf5dbc11c != bVar89);
      goto code_r0x00010001ab33;
    case (undefined **)0x10001ab31:
      uVar102 = 0;
code_r0x00010001ab33:
      uVar83 = (uint)((uint)param_2 < (uint)ppuVar87);
      if ((char)uVar92 != '\0') {
        uVar83 = uVar28;
      }
                    /* WARNING: Could not recover jumptable at 0x00010001ab55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001aae8 +
                     *(int *)((long)unaff_R13 + (ulong)((uVar83 & 0xff) + uVar102) * 4)))
                     (ppuVar87,&DAT_10001aae8 +
                               *(int *)((long)unaff_R13 + (ulong)((uVar83 & 0xff) + uVar102) * 4));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001ab93:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001ac18:
      lVar16 = *(long *)((long)unaff_R13 + (long)(int)(uVar86 ^ 0x90) * 8);
      *(undefined ***)((long)puVar63 + -0xe0) = unaff_R15;
      iVar33 = *(int *)(&DAT_1006d13e0 +
                       (long)(int)((unaff_R15 == (undefined **)(lVar16 + -1) &&
                                   (uVar85 ^ 0xffffff70) + uVar9 != (uVar35 ^ 0xa44ed133)) + uVar86)
                       * 4);
      *(undefined8 *)((long)puVar63 + -0x68) = 0x18646b13513134f3;
                    /* WARNING: Could not recover jumptable at 0x00010001ac88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001abf6 + iVar33))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001ac89:
      UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -1);
      if (UNRECOVERED_JUMPTABLE_19 == (code *)0x0 || bVar107) {
        if (bVar109) goto code_r0x00010001acce;
        lVar16 = *(long *)((long)unaff_R13 + (long)(int)(uVar101 ^ 0x5a) * 8);
        *(undefined ***)((long)puVar63 + -0xe0) = unaff_R15;
        uVar12 = *(undefined8 *)((long)puVar63 + -0x58);
        *(undefined **)((long)puVar53 + -8) = &UNK_10001acba;
        lVar16 = (*(code *)(lVar16 + -1))(unaff_R15,uVar12,(undefined8 *)((long)puVar63 + -0xf8));
        bVar89 = lVar16 == 0;
        UNRECOVERED_JUMPTABLE_19 = (code *)(ulong)uVar101;
      }
      else {
        puVar64 = (uint *)((long)UNRECOVERED_JUMPTABLE_19 * 5 + -0xf);
        bVar89 = CARRY4(*puVar64,uVar9);
        *puVar64 = *puVar64 + uVar9;
      }
      UNRECOVERED_JUMPTABLE_19 = (code *)(long)(int)((int)UNRECOVERED_JUMPTABLE_19 + (uint)bVar89);
      unaff_R13 = (uint *)&DAT_1006d13e0;
code_r0x00010001acce:
      iVar33 = *(int *)((long)unaff_R13 + (long)UNRECOVERED_JUMPTABLE_19 * 4);
      *(undefined8 *)((long)puVar63 + -0x148) = 0;
      *(undefined8 *)((long)puVar63 + -0x68) = 0x18646b13513134f3;
      *(undefined8 *)((long)puVar63 + -0x50) = 0x18646b13513134f3;
                    /* WARNING: Could not recover jumptable at 0x00010001acfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&UNK_10001ac8c + iVar33))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001ad39:
      *(char *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + cVar8;
      *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar84;
      *(undefined ***)((long)puVar63 + -0x58) = UNRECOVERED_JUMPTABLE;
      UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar63 + -0x98);
      *(undefined8 *)((long)puVar53 + -8) = 0x10001ad47;
      lVar16 = (*UNRECOVERED_JUMPTABLE_19)();
      **(long **)((long)puVar63 + -0x58) = lVar16;
                    /* WARNING: Could not recover jumptable at 0x00010001ad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001ad01 +
                     *(int *)((long)unaff_R13 + (long)(int)(uVar97 + (lVar16 == 0)) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001ad7c:
      *(undefined ***)((long)puVar53 + -8) = UNRECOVERED_JUMPTABLE_13;
      *(byte *)UNRECOVERED_JUMPTABLE_13 =
           ((char)*(code *)UNRECOVERED_JUMPTABLE_13 - bVar31) -
           CARRY4(uVar91,*(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 100));
                    /* WARNING: Could not recover jumptable at 0x00010001ada0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001ad6b +
                     *(int *)((long)unaff_R13 +
                             (long)(int)(CONCAT31((int3)(uVar25 >> 8),
                                                  ppuVar94 ==
                                                  (undefined **)
                                                  ((ulong)UNRECOVERED_JUMPTABLE_18 ^ 0x31)) +
                                        uVar102) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001aeb5:
      goto switchD_10001a75e_caseD_1aeb5;
    case (undefined **)0x10001af1d:
      puVar71 = puVar63;
      goto code_r0x00010001af1f;
    case (undefined **)0x10001b033:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001b212:
      goto switchD_10001a75e_caseD_1b212;
    case (undefined **)0x10001b274:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001b27b:
      *(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 0x634800d3) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_12 + 0x634800d3) + uVar9;
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001b292:
      *(undefined8 *)((long)puVar63 + -0x130) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001b2a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001b2b4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001b2d6:
      *(uint *)UNRECOVERED_JUMPTABLE_13 = uVar9;
      ppuVar94 = *(undefined ***)((long)puVar63 + -0x140);
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)*(uint *)ppuVar94;
      puVar96 = &switchD_100019e65::switchdataD_1006d1710;
LAB_10001b2e9:
      lVar16 = *(long *)unaff_R13;
      iVar33 = (int)UNRECOVERED_JUMPTABLE_18;
      *(undefined1 *)(lVar16 + (ulong)(iVar33 + 0x92fee118)) = 0;
      *(undefined1 *)(lVar16 + (ulong)(iVar33 + 0x92fee119)) = 0;
      *(undefined1 *)(lVar16 + (ulong)(iVar33 + 0x92fee11a)) = 0;
      *(undefined1 *)(lVar16 + (ulong)(iVar33 + uVar34 + 0x92fee111)) = 1;
      *(undefined ***)((long)puVar63 + -0x140) = ppuVar94;
      *(uint *)ppuVar94 = *(uint *)ppuVar94 + 4;
      iVar100 = uVar34 + 0xad;
      iVar26 = 1;
      goto switchD_100019e65_caseD_1b330;
    case (undefined **)0x10001b34c:
      goto switchD_10001a75e_caseD_1b34c;
    case (undefined **)0x10001b3dc:
      goto switchD_10001a75e_caseD_1b3dc;
    case (undefined **)0x10001b404:
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001b4dc:
                    /* WARNING: Could not recover jumptable at 0x00010001b508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001b4b7 +
                     *(int *)((long)unaff_R13 +
                             (long)(int)((0x5ae90ade < uVar9 || bVar104 + 0xae11ca83 < uVar25) +
                                        uVar97) * 4)))
                     (ppuVar87,param_2,
                      &DAT_10001b4b7 +
                      *(int *)((long)unaff_R13 +
                              (long)(int)((0x5ae90ade < uVar9 || bVar104 + 0xae11ca83 < uVar25) +
                                         uVar97) * 4));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001b53d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001b65b:
      if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x1 ||
          ((uVar9 | *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x73)) & 0x4000) == 0) {
        param_2 = UNRECOVERED_JUMPTABLE + (0x200034de - (ulong)bVar110);
      }
    case (undefined **)0x10001b65d:
      iVar33 = *(int *)((long)unaff_R13 +
                       (long)(int)(uVar101 + (unaff_R15 == (undefined **)0x0)) * 4);
      *(undefined8 *)((long)puVar63 + -0x60) = 0x5a793496016ebe8;
                    /* WARNING: Could not recover jumptable at 0x00010001b69e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001b658 + iVar33))
                     (0x3165f9b2,param_2,*(undefined8 *)((long)puVar63 + -0x78));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001b6a0:
      *(uint **)((long)puVar53 + -8) = puVar63;
      return (undefined **)0x0;
    case (undefined **)0x10001ba42:
      pbVar1 = (byte *)((long)puVar63 + -0x73);
      *pbVar1 = *pbVar1 >> (bVar24 & 7) | *pbVar1 << 8 - (bVar24 & 7);
      *(uint **)puVar53 = puVar63;
      uVar102 = *(int *)((long)unaff_R13 + 0xc) + 0xc086690c;
      uVar83 = (uVar35 ^ 0xdfb4eb9c) + *(int *)((long)puVar63 + 8);
      uVar25 = uVar101 ^ 0x2d878768;
      uVar28 = (uint)(uVar102 < uVar25);
      ppuVar87 = (undefined **)
                 (ulong)CONCAT31((int3)(uVar25 >> 8),uVar83 < 0x2d8787f0 != uVar102 < uVar25);
      uVar92 = (ulong)(uVar83 < uVar102);
      goto switchD_10001997c_caseD_1ba88;
    case (undefined **)0x10001bb25:
      uVar25 = *(uint *)unaff_R12;
      unaff_R13 = &switchD_1000183ca::switchdataD_1006d0f70;
      *(undefined ***)((long)puVar63 + -0x98) = unaff_R14;
      goto switchD_10001997c_caseD_1bb37;
    case (undefined **)0x10001bb68:
      goto switchD_10001a75e_caseD_1bb68;
    case (undefined **)0x10001bbb3:
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001bc7e:
      *(code *)((long)UNRECOVERED_JUMPTABLE_12 + -0x72b78c0f) =
           (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_12 + -0x72b78c0f) | bVar84);
      return (undefined **)
             (ulong)CONCAT31((int3)(uVar9 + 0x6b5ea7 >> 8),
                             (byte)(uVar9 + 0x6b5ea7) ^
                             (byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                                            (long)UNRECOVERED_JUMPTABLE));
    case (undefined **)0x10001bcdf:
      return (undefined **)CONCAT71(uVar21,bVar84 ^ (&DAT_1006d0d70)[uVar25 ^ 0x2c]);
    case (undefined **)0x10001bf16:
      UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x47);
      *UNRECOVERED_JUMPTABLE_19 =
           (code)((char)*UNRECOVERED_JUMPTABLE_19 << 1 | (char)*UNRECOVERED_JUMPTABLE_19 < '\0');
      unaff_R13 = (uint *)(ulong)(uVar99 + 0x56053a2c | 0xa100000c);
      ppuVar87 = (undefined **)(ulong)*(uint *)unaff_R15;
      puVar13 = *(undefined **)puVar96;
      puVar95 = puVar96;
      goto code_r0x00010001bf35;
    case (undefined **)0x10001bf24:
      *(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x493f8b41) =
           (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x493f8b41) +
                 (char)((uint)((int)CONCAT71(uVar21,bVar84 - 0x3a) + -0x327ebeaa) >> 8));
      puVar13 = (undefined *)(ulong)*(uint *)UNRECOVERED_JUMPTABLE_12;
      puVar95 = puVar96;
      goto code_r0x00010001bf35;
    case (undefined **)0x10001bf8e:
      *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 99) =
           (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 99) | bVar24);
      UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + 99);
      *UNRECOVERED_JUMPTABLE_19 =
           (code)((byte)*UNRECOVERED_JUMPTABLE_19 >> (bVar24 & 7) |
                 (char)*UNRECOVERED_JUMPTABLE_19 << 8 - (bVar24 & 7));
      ppuVar90 = unaff_R14;
      goto code_r0x00010001bf97;
    case (undefined **)0x10001bfbe:
      *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar84;
      *(char *)((long)puVar63 + -0x72b217a2) = *(char *)((long)puVar63 + -0x72b217a2) + bVar24;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001c0ae:
      lVar16 = 0x18af4;
      goto code_r0x00010001c0ba;
    case (undefined **)0x10001c0c2:
      *(undefined ***)((long)puVar63 + -0x150) = ppuVar94;
      *(code **)((long)puVar63 + -0x178) = (code *)((long)unaff_R13 + 8);
      iVar33 = *(int *)((long)puVar96 +
                       (long)(int)((uVar101 ^ 0xb) + (uint)((code *)unaff_R13 == (code *)0x0)) * 4);
      *(ulong *)((long)puVar63 + -0xc0) = (ulong)uVar29;
                    /* WARNING: Could not recover jumptable at 0x00010001c10d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)((long)iVar33 + 0x10001c0c2))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001c13b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001c289:
      *(undefined8 *)((long)puVar53 + -8) = 0xfffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001c35a:
      *(undefined8 *)puVar53 = 0x4cffffff;
      iVar26 = (int)*(undefined8 *)((long)puVar63 + -0x58);
      puVar13 = unaff_R15[iVar26 + -0x72];
      *(undefined **)((long)puVar63 + -0xd8) = (undefined *)((ulong)puVar53 & 0xffffffff);
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (&UNK_10001c358 +
           *(int *)((long)ppuVar90 +
                   (long)(int)((uint)((undefined *)((ulong)puVar53 & 0xffffffff) == puVar13 + -1 &&
                                     iVar33 + iVar26 + 0x8b8281 + ((iVar26 - 2U | 4) ^ 0xff747c7c)
                                     != 0x5565d56) + iVar26) * 4));
      ppuVar87 = (undefined **)0x3165f9b1;
      param_2 = (undefined **)0x7f31ac3dd4da00c4;
      goto switchD_10001997c_caseD_1c3d4;
    case (undefined **)0x10001c420:
                    /* WARNING: Could not recover jumptable at 0x00010001c434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001c3e0 +
                     (int)*(uint *)((long)unaff_R12 + (long)(int)(uVar85 + uVar28) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001c52a:
      goto switchD_10001a75e_caseD_1c52a;
    case (undefined **)0x10001c73c:
      UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar63 + -0x90);
      *(undefined8 *)((long)puVar53 + -8) = 0x10001c74a;
      lVar16 = (*UNRECOVERED_JUMPTABLE_19)(uVar103 + 0x4989c387);
      iVar33 = *(int *)((long)unaff_R13 + (long)(int)(uVar101 + (lVar16 == 0)) * 4);
      *(undefined8 *)((long)puVar63 + -0x128) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001c77f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001c720 + iVar33))(*(undefined8 *)((long)puVar63 + -0x68));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001c8eb:
      *(undefined8 *)((long)puVar63 + -0x100) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001c92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001c8dd +
                     *(int *)((long)puVar96 +
                             (long)(int)(uVar34 + ((code *)unaff_R13 == (code *)0x0)) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001ca7e:
      LOCK();
      uVar83 = *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d);
      *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) = uVar25;
      pcVar17 = (char *)(ulong)uVar83;
      UNLOCK();
      *pcVar17 = *pcVar17 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x00010001caaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001ca7c + *(int *)((long)ppuVar87 + (long)(int)uVar102 * 4)))
                     (ppuVar87,param_2,*(undefined8 *)((long)puVar63 + -0x58),
                      &DAT_10001ca7c + *(int *)((long)ppuVar87 + (long)(int)uVar102 * 4));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001cb39:
      *(int *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001cbda:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001ccd7:
                    /* WARNING: Could not recover jumptable at 0x00010001ccdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)UNRECOVERED_JUMPTABLE_18)
                     (ppuVar87,param_2,*(undefined4 *)((long)puVar63 + -0x48));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001cd32:
                    /* WARNING: Could not recover jumptable at 0x00010001cd32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_12)();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001ce4f:
      puVar13 = *ppuVar90;
      uVar102 = *(uint *)((long)puVar53 + (long)UNRECOVERED_JUMPTABLE_13 * 4);
      *(undefined8 *)((long)puVar63 + -0x180) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001ce74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001ce18 + uVar102))
                     (0x3165f9b2,param_2,0,&DAT_10001ce18 + uVar102,(long)puVar13 * 0x49);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001d0aa:
      *(uint *)UNRECOVERED_JUMPTABLE_13 = uVar25;
                    /* WARNING: Could not emulate address calculation at 0x00010001d0c4 */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001d07e +
                     (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                          [(int)((uint)(param_2 == unaff_R14) + iVar33)]))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001d1ff:
      *(undefined ***)((long)puVar63 + -0x60) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)((long)puVar63 + -0xb8) = *(undefined8 *)((long)puVar63 + -0x98);
      *(undefined8 *)((long)puVar63 + -0xd0) = *(undefined8 *)((long)puVar63 + -0xa8);
      *(undefined8 *)((long)puVar63 + -0xf8) = 0x2e3fe4cf;
      *(uint *)((long)puVar63 + -0x70) = uVar85;
      *(undefined ***)((long)puVar63 + -0x78) = UNRECOVERED_JUMPTABLE;
      lVar16 = *(long *)((long)puVar63 + -0x118);
      puVar37 = &DAT_1006d1e30;
      uVar12 = *(undefined8 *)((long)puVar63 + -0xb8);
      *(undefined8 *)((long)puVar53 + -8) = 0x10001d26f;
      (*(code *)PTR__xpc_release_10082eb00)(uVar12);
      uVar12 = *(undefined8 *)((long)puVar63 + -0xd0);
      *(undefined **)((long)puVar63 + -0x80) = puVar13;
      *(undefined8 *)((long)puVar53 + -8) = 0x10001d27d;
      (*(code *)puVar13)(uVar12);
      puVar81 = puVar63;
      switch(lVar16 == 0) {
      case false:
        UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar63 + -0x80);
        *(undefined8 *)((long)puVar53 + -8) = 0x1000207fa;
        (*UNRECOVERED_JUMPTABLE_19)(lVar16);
        iVar33 = *(int *)(&DAT_1006d1e30 +
                         (long)(int)((int)*(undefined8 *)((long)puVar63 + -0xf8) + -0x2e3fe4a8 +
                                    (uint)(*(long *)((long)puVar63 + -0x58) == 0)) * 4);
        *(undefined8 *)((long)puVar63 + -0x98) = *(undefined8 *)((long)puVar63 + -0xb8);
        *(undefined8 *)((long)puVar63 + -0xa8) = *(undefined8 *)((long)puVar63 + -0xd0);
                    /* WARNING: Could not recover jumptable at 0x000100020852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&switchD_10001d28e::caseD_1 + iVar33))()
        ;
        return UNRECOVERED_JUMPTABLE_18;
      }
      goto code_r0x00010001e9af;
    case (undefined **)0x10001d30e:
      uVar93 = uVar93 + 0x9a06ffb2;
      bVar89 = uVar25 < uVar93;
      if (bVar108 != uVar93 < uVar86) {
        bVar89 = uVar93 < uVar86;
      }
                    /* WARNING: Could not recover jumptable at 0x00010001d34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)ppuVar87 +
                     (long)*(int *)(&DAT_1006d1e30 + (long)(int)(bVar89 + uVar9) * 4)))
                     (ppuVar87,param_2,uVar9 + uVar29 * 2,UNRECOVERED_JUMPTABLE_13,ppuVar90,
                      (code *)((long)ppuVar87 +
                              (long)*(int *)(&DAT_1006d1e30 + (long)(int)(bVar89 + uVar9) * 4)));
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001d534:
      uVar102 = *(uint *)((long)puVar63 + -0x238);
      uVar12 = *(undefined8 *)((ulong)uVar102 + 0x93899e7048db8440);
      UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar63 + -0x50);
      *(undefined8 *)((long)puVar53 + -8) = 0x10001d54b;
      (*UNRECOVERED_JUMPTABLE_19)(uVar12);
      *(undefined8 *)((ulong)uVar102 + 0x93899e7048db8440) = *(undefined8 *)((long)puVar63 + -0x248)
      ;
      **(undefined4 **)((long)puVar63 + -0x240) = *(undefined4 *)((long)puVar63 + -0xb8);
      *(undefined4 *)((long)puVar63 + -200) = 0x3166a97d;
      UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_10002431a(0xebe9dd97f1423742);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001d7da:
                    /* WARNING: Could not recover jumptable at 0x00010001d7e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001d8f8:
                    /* WARNING: Could not recover jumptable at 0x00010001d90d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)*(int *)((long)puVar96 + (long)(int)((uVar9 & 1) + uVar34) * 4) +
                     0x10001d8f1))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001d93b:
      goto switchD_10001a75e_caseD_1d93b;
    case (undefined **)0x10001d956:
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)((ulong)UNRECOVERED_JUMPTABLE_18 & 0xffffffffffffffc3);
      goto switchD_10001a75e_caseD_1d93b;
    case (undefined **)0x10001d9ea:
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001da97:
      *(char *)param_2 = (char)*(code *)param_2 >> (bVar24 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001dec1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001dec6:
      UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x7f7afbf1);
      *(uint *)UNRECOVERED_JUMPTABLE_19 =
           *(uint *)UNRECOVERED_JUMPTABLE_19 << 0x1d | *(uint *)UNRECOVERED_JUMPTABLE_19 >> 3;
      lVar16 = *(long *)((long)puVar63 + -0xf0);
      *(uint *)(lVar16 + -0x6c76618fb7247bb8) = uVar25 + (uVar9 & 0xfd7f7afb) * 2 + -0x1231200;
      *(undefined4 *)(lVar16 + -0x6c76618fb7247bb4) = 0x21493b80;
      *(long *)((long)puVar63 + -0xa0) = lVar16;
      uVar12 = *(undefined8 *)((long)puVar63 + -0x208);
      *(undefined8 *)((long)puVar63 + -0x78) = *(undefined8 *)((long)puVar63 + -0x210);
      uVar101 = 0xb7eafb74;
      *(undefined8 *)((long)puVar63 + -0x48) = *(undefined8 *)((long)puVar63 + -0x200);
      puVar79 = puVar63;
      goto LAB_10001df31;
    case (undefined **)0x10001defd:
      *(ulong *)((long)ppuVar90 + -0x77) =
           *(ulong *)((long)ppuVar90 + -0x77) & (ulong)UNRECOVERED_JUMPTABLE_13;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001df11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001dfa6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001e001:
      *(uint *)UNRECOVERED_JUMPTABLE_13 = *(uint *)UNRECOVERED_JUMPTABLE_13 + 4;
      uVar102 = uVar101 - 7;
      uVar25 = 1;
LAB_10001e013:
                    /* WARNING: Could not recover jumptable at 0x00010001e033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)*(int *)((long)puVar96 + (long)(int)((uVar25 & 1) + uVar102) * 4) +
                     0x10001e013))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001e00e:
      goto LAB_10001e013;
    case (undefined **)0x10001e102:
      if (!bVar106) {
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)((uVar97 ^ 0xe4) * 10);
        uVar101 = uVar97 - 0xb07817 & 0xb077f9;
        *(undefined ***)((long)puVar63 + -0x1b0) = UNRECOVERED_JUMPTABLE_12 + -0xb07fd466211e579;
        param_2 = (undefined **)(ulong)*(uint *)(UNRECOVERED_JUMPTABLE_12 + -0xb07fd466211e579);
        unaff_R15 = (undefined **)0xa7c015ccef70d434;
      }
      uVar102 = (int)param_2 + 0xad4a3a59;
      uVar83 = *(int *)((long)UNRECOVERED_JUMPTABLE_12 + (long)unaff_R15) + 0xce8d1b20;
      bVar89 = uVar102 < ((uint)UNRECOVERED_JUMPTABLE_18 ^ 0xb44460b) + uVar101;
      if (uVar83 < 0xb4447d1 == bVar89) {
        bVar89 = uVar83 < uVar102;
      }
                    /* WARNING: Could not recover jumptable at 0x00010001e1ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar89 + uVar97)]
                     + 0x10001e103))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001e24b:
      *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar84;
      *(char *)((long)puVar63 + -0x77) = *(char *)((long)puVar63 + -0x77) + bVar84;
      *(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) =
           (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) + '\x01');
      *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_12 + 0x24) = 0x50a01b4b;
      *UNRECOVERED_JUMPTABLE_12 = *(undefined **)((long)puVar63 + -0x80);
                    /* WARNING: Could not recover jumptable at 0x00010001e284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&LAB_100023b0a +
                     *(int *)((long)puVar96 +
                             (long)(int)(uVar102 + (UNRECOVERED_JUMPTABLE_12[6] == (undefined *)0x0)
                                        ) * 4)))
                     (UNRECOVERED_JUMPTABLE_12[6],param_2,
                      &LAB_100023b0a +
                      *(int *)((long)puVar96 +
                              (long)(int)(uVar102 +
                                         (UNRECOVERED_JUMPTABLE_12[6] == (undefined *)0x0)) * 4),
                      bVar104 + '\x02');
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001e3b9:
                    /* WARNING: Could not recover jumptable at 0x00010001e3d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001e369 +
                     *(int *)((long)puVar96 + (long)(int)(uVar97 + (uVar9 == 0)) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001e589:
      uVar102 = *(uint *)((long)unaff_R12 +
                         (long)(int)((int)CONCAT71(uVar21,ppuVar94 ==
                                                          (undefined **)0x7ec08e5aeb2a8122) + uVar29
                                    ) * 4);
      *(undefined ***)((long)puVar63 + -200) = ppuVar87;
                    /* WARNING: Could not recover jumptable at 0x00010001e5c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001e570 + (int)uVar102))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001e849:
      param_2 = (undefined **)(ulong)(uVar86 << 0x1e);
      *(code *)((long)UNRECOVERED_JUMPTABLE_13 + ((ulong)UNRECOVERED_JUMPTABLE_18 | 0x44)) = cVar38;
      puVar96 = (uint *)(ulong)((iVar33 + uVar85) - 0x23);
      UNRECOVERED_JUMPTABLE_13 = (undefined **)0x0;
      goto code_r0x00010001e860;
    case (undefined **)0x10001e85f:
code_r0x00010001e860:
                    /* WARNING: Could not recover jumptable at 0x00010001e873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)unaff_R13 +
                     (long)*(int *)((long)UNRECOVERED_JUMPTABLE +
                                   (ulong)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_13 >> 8
                                                               ),(uint)puVar96 == uVar93) + uVar85)
                                   * 4)))(ppuVar87,param_2,UNRECOVERED_JUMPTABLE,uVar101);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x10001e97c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001e9dc:
      *(int *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001f0b1:
      if (bVar107 || (long)UNRECOVERED_JUMPTABLE < -0x10001a6ec) {
        *(uint *)UNRECOVERED_JUMPTABLE_12 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010001f0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(switchD_100024103::caseD_1f059 +
               *(int *)((long)puVar96 +
                       (long)(int)(uVar102 + (UNRECOVERED_JUMPTABLE_18 == (undefined **)0x0)) * 4)))
                       ();
        return UNRECOVERED_JUMPTABLE_18;
      }
      if (SCARRY1(bVar84,-0x5b) == SCARRY1(bVar84 + 0xa5,bVar105)) {
        UNRECOVERED_JUMPTABLE_13 = (undefined **)0x230f4;
      }
      *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x77) =
           *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x77) | 0x148b48db;
      uVar92 = (ulong)(uint)((int)UNRECOVERED_JUMPTABLE_13 + **(int **)((long)puVar63 + -0x160));
      uVar88 = uVar92 * 2 & 0x1e2846e84;
      *(ulong *)((long)puVar63 + -0x138) = CONCAT71(uVar21,bVar84 + 0xa5 + bVar105);
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           switchD_100020322::caseD_2214a
                     (uVar88,(code *)((long)unaff_R13 + (uVar92 - uVar88) + -0x141622680ebdc8cd),
                      UNRECOVERED_JUMPTABLE,&DAT_1000230f4);
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100020667:
                    /* WARNING: Could not recover jumptable at 0x000100020682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_100020648 +
                     *(int *)((long)ppuVar90 + (long)(int)(uVar99 + (uVar9 < 300)) * 4)))();
      return UNRECOVERED_JUMPTABLE_18;
    case (undefined **)0x100020aed:
      *(undefined ***)((long)puVar63 + -0x1b0) = UNRECOVERED_JUMPTABLE_12 + 1;
      *(undefined8 *)((long)puVar63 + -0xa0) = 0x5dd9ea22;
      UNRECOVERED_JUMPTABLE_19 =
           (code *)((long)(int)*(uint *)((long)unaff_R12 +
                                        (long)(int)(uVar29 + (UNRECOVERED_JUMPTABLE_12 ==
                                                             (undefined **)0x0)) * 4) + 0x100020aee)
      ;
                    /* WARNING: Could not recover jumptable at 0x000100020b31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)(*UNRECOVERED_JUMPTABLE_19)(0x3165f9b3,UNRECOVERED_JUMPTABLE_19,0);
      return UNRECOVERED_JUMPTABLE_18;
    }
    uVar102 = uVar101 * 2 + 0x645ac81c;
    uVar102 = (uVar34 ^ uVar102 ^ 0x6df2fffa) + (uVar102 & 0xedf2fff6) * 2 + 0xd5f26dc;
    bVar89 = uVar25 < uVar102;
    if (SUB81(ppuVar90,0) != uVar102 < 0x7b5226d2) {
      bVar89 = uVar102 < 0x7b5226d2;
    }
    uVar28 = (uint)bVar89;
code_r0x00010001747e:
                    /* WARNING: Could not recover jumptable at 0x000100017497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE +
                   (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                              [(int)((int)UNRECOVERED_JUMPTABLE_18 + -0x8b82ff + uVar28)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (code *)0x10001b839:
    puVar72 = puVar63;
    switch((long)*(int *)((long)puVar96 +
                         (ulong)((int)unaff_R15 * 0xb + (uint)((code *)unaff_R13 == (code *)0x0)) *
                         4) + 0x10001b839) {
    case 0x1000176d9:
      *(undefined8 *)((long)puVar49 + -8) = 0x1000176de;
      (*(code *)UNRECOVERED_JUMPTABLE)(unaff_R13);
      UNRECOVERED_JUMPTABLE_18 = (undefined **)caseD_1();
      return UNRECOVERED_JUMPTABLE_18;
    }
  }
code_r0x00010001af93:
  if (*(long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                        (uint)PTR____stack_chk_guard_10082cb58) != *(long *)((long)puVar72 + -0x30))
  {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)puVar49 + -8) = switchD_10001b5d5::caseD_0;
    ___stack_chk_fail();
  }
  return (undefined **)0xffff5035;
switchD_10001a75e_caseD_18263:
  do {
  } while( true );
switchD_10001a75e_caseD_1a756:
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar9 ^ 0xffffff91);
  goto code_r0x00010001a746;
switchD_10001997c_caseD_19932:
  *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar24;
  puVar95 = (uint *)UNRECOVERED_JUMPTABLE_18;
  puVar42 = puVar42 + -0x6a;
  puVar64 = puVar43;
  goto switchD_10001a75e_caseD_1990f;
switchD_10001a75e_caseD_1a732:
  *(code *)(UNRECOVERED_JUMPTABLE_13 + 6) = *(code *)(UNRECOVERED_JUMPTABLE_13 + 6);
  goto code_r0x00010001a736;
switchD_10001997c_caseD_17e47:
  *(uint *)((long)puVar57 + -0x38) = (int)UNRECOVERED_JUMPTABLE_13 + uVar34 + -0x53;
  *(undefined8 *)((long)puVar40 + -8) = 0x100017e55;
  FUN_100014c30();
  uVar102 = *(uint *)((long)unaff_R12 +
                     (long)(int)((*(int *)((long)puVar57 + -0x34) == uVar34 + 0x52e88cfd) + uVar34)
                     * 4);
  *(undefined8 *)((long)puVar57 + -0x60) = 0x5a793496016ebe8;
                    /* WARNING: Could not recover jumptable at 0x000100017e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_100017e0f + (int)uVar102))();
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1710b:
  lVar16 = *(long *)((long)puVar56 + -0x68);
  *(uint *)(lVar16 + -0x7f31ac3dd4da00bc) =
       (int)UNRECOVERED_JUMPTABLE_13 + ((uint)UNRECOVERED_JUMPTABLE_18 & 0xd5bb5aa3) * 2 + -0x84003;
  *(undefined4 *)(lVar16 + -0x7f31ac3dd4da00b8) = 0x4d141492;
  *(undefined4 *)((long)puVar56 + -0x58) = 0x3166a97d;
  UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_10001aa0e();
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1c3d4:
                    /* WARNING: Could not recover jumptable at 0x00010001c3db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)(ppuVar87,param_2);
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1ba88:
  uVar102 = (uint)uVar92;
  if ((char)ppuVar87 != '\0') {
    uVar102 = uVar28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001baa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 =
       (undefined **)
       (*(code *)(&DAT_10001ba32 +
                 *(int *)((long)puVar96 + (long)(int)((uVar102 & 0xff) + uVar101) * 4)))
                 (ppuVar87,&DAT_10001ba32 +
                           *(int *)((long)puVar96 + (long)(int)((uVar102 & 0xff) + uVar101) * 4));
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1b52c:
  while( true ) {
    out(0x3f,uVar25);
    if (bVar89 || bVar104) {
      *(uint *)((long)puVar75 + -0x38) = uVar85 + uVar34 + -0x4f;
      *(uint *)((long)puVar75 + -0x3c) = uVar25 + uVar85 + 0x55e3dc1;
      *(undefined **)((long)puVar51 + -8) = &UNK_10001b548;
      FUN_100014c30();
      uVar102 = (&switchD_100019e65::switchdataD_1006d1710)
                [(int)((*(int *)((long)puVar75 + -0x34) == uVar102 + 0x52e88d2b) + uVar34)];
      *(undefined8 *)((long)puVar75 + -0x48) = 0x7f31ac3dd4da00c4;
                    /* WARNING: Could not recover jumptable at 0x00010001b585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&UNK_10001b50d + (int)uVar102))();
      return UNRECOVERED_JUMPTABLE_18;
    }
    if (bVar105 != bVar108) break;
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x27);
    bVar89 = false;
    bVar105 = false;
    *(uint *)UNRECOVERED_JUMPTABLE_19 = *(uint *)UNRECOVERED_JUMPTABLE_19 & 0x69;
    bVar108 = (int)*(uint *)UNRECOVERED_JUMPTABLE_19 < 0;
    bVar104 = *(uint *)UNRECOVERED_JUMPTABLE_19 == 0;
    puVar51 = (uint *)((long)puVar75 + 8);
    puVar75 = (uint *)*(undefined8 **)puVar75;
  }
  UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_100016e87();
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1bb37:
  lVar16 = *(long *)((long)unaff_R14 + (long)unaff_R15);
  *(undefined1 *)(lVar16 + (ulong)(uVar25 + 0x8d9ec879)) = 0x38;
  *(undefined1 *)(lVar16 + (ulong)(uVar25 + 0x8d9ec87a)) = 0x5b;
  UNRECOVERED_JUMPTABLE = (undefined **)(ulong)(uVar34 + uVar25 + 0x8d9ec7cf);
  *(code *)((long)UNRECOVERED_JUMPTABLE + lVar16) = (code)0x2c;
  *(undefined1 *)(lVar16 + (ulong)(uVar25 + 0x8d9ec87c)) = 0xe8;
  *(uint **)((long)puVar76 + -0x160) = puVar98;
  *puVar98 = *puVar98 + 4;
switchD_10001a75e_caseD_1bb68:
                    /* WARNING: Could not recover jumptable at 0x00010001bba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 =
       (undefined **)
       (*(code *)((long)*(int *)((long)unaff_R13 + (long)(int)(uVar34 + 2) * 4) + 0x10001bb87))
                 (*(undefined8 *)((long)puVar76 + -0x68),param_2,UNRECOVERED_JUMPTABLE,
                  (code *)((long)*(int *)((long)unaff_R13 + (long)(int)(uVar34 + 2) * 4) +
                          0x10001bb87),*(undefined8 *)((long)puVar76 + -0x48),0x3166a97d);
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001a75e_caseD_1a370:
  uVar83 = *(uint *)((long)puVar70 + (long)UNRECOVERED_JUMPTABLE * 4);
code_r0x00010001a377:
                    /* WARNING: Could not recover jumptable at 0x00010001a37a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 =
       (undefined **)(*(code *)((long)ppuVar94 + (long)ppuVar87))(ppuVar87,param_2,uVar83);
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1a13a:
  uVar10 = SUB84(puVar98,0);
  puVar61 = puVar69;
LAB_1000190e1:
  *(undefined4 *)((long)puVar61 + -0x58) = uVar10;
  *(undefined ***)((long)puVar61 + -0x50) = param_2;
  UNRECOVERED_JUMPTABLE_19 = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar101 ^ 0x8b832f)];
  uVar12 = *(undefined8 *)((long)puVar61 + -0xa8);
  *(undefined8 *)((long)puVar47 + -8) = 0x100019118;
  (*UNRECOVERED_JUMPTABLE_19)(uVar12);
  uVar12 = *(undefined8 *)((long)puVar61 + -0xe0);
  *(undefined8 *)((long)puVar47 + -8) = 0x100019125;
  (*UNRECOVERED_JUMPTABLE_19)(uVar12);
  uVar102 = (&switchD_100019e65::switchdataD_1006d1710)
            [(int)((uVar101 - 0x8b82d1) + (uint)(unaff_R15 == (undefined **)0x0))];
  *(undefined ***)((long)puVar61 + -200) = unaff_R15;
  *(code **)((long)puVar61 + -0x68) = UNRECOVERED_JUMPTABLE_19;
                    /* WARNING: Could not recover jumptable at 0x000100019148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&LAB_1000190e1 + (int)uVar102))();
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001a75e_caseD_1990f:
  ppuVar87 = (undefined **)((long)ppuVar87 + (ulong)bVar110 * -8 + 4);
  param_2 = (undefined **)((long)param_2 + (ulong)bVar110 * -8 + 4);
  puVar57 = puVar42 + -2;
  puVar58 = puVar42 + -2;
  puVar60 = puVar42 + -2;
  puVar62 = puVar42 + -2;
  puVar43 = puVar42 + -2;
  puVar63 = puVar42 + -2;
  puVar66 = puVar42 + -2;
  puVar67 = puVar42 + -2;
  puVar70 = puVar42 + -2;
  puVar71 = puVar42 + -2;
  puVar72 = puVar42 + -2;
  puVar73 = puVar42 + -2;
  puVar74 = puVar42 + -2;
  puVar77 = puVar42 + -2;
  puVar79 = puVar42 + -2;
  puVar80 = puVar42 + -2;
  puVar81 = puVar42 + -2;
  puVar82 = puVar42 + -2;
  puVar59 = puVar42 + -2;
  puVar61 = puVar42 + -2;
  puVar65 = puVar42 + -2;
  puVar78 = puVar42 + -2;
  unaff_RBP = puVar42 + -2;
  puVar68 = puVar42 + -2;
  *(uint **)(puVar42 + -2) = puVar64;
  *(undefined ***)(puVar42 + -4) = unaff_R15;
  *(undefined ***)(puVar42 + -6) = unaff_R14;
  *(uint **)(puVar42 + -8) = unaff_R13;
  *(undefined ***)(puVar42 + -10) = unaff_R12;
  *(undefined ***)(puVar42 + -0xc) = UNRECOVERED_JUMPTABLE_12;
  puVar51 = puVar42 + -0x6a;
  puVar54 = puVar42 + -0x6a;
  puVar40 = puVar42 + -0x6a;
  puVar52 = puVar42 + -0x6a;
  puVar50 = puVar42 + -0x6a;
  puVar45 = puVar42 + -0x6a;
  puVar46 = puVar42 + -0x6a;
  puVar39 = puVar42 + -0x6a;
  puVar41 = puVar42 + -0x6a;
  register0x00000020 = (BADSPACEBASE *)(puVar42 + -0x6a);
  puVar49 = puVar42 + -0x6a;
  puVar44 = puVar42 + -0x6a;
  puVar53 = puVar42 + -0x6a;
  *(undefined8 *)(puVar42 + -0xe) =
       *(undefined8 *)
        CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,(uint)PTR____stack_chk_guard_10082cb58);
  UNRECOVERED_JUMPTABLE_18 =
       (undefined **)
       (ulong)((byte)((byte)((ulong)(-0x11 - (long)ppuVar87) >> 0x38) &
                     (byte)((ulong)ppuVar87 >> 0x38)) >> 7 & param_2 != (undefined **)0x0);
switchD_10001997c_caseD_1995b:
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(((uint)UNRECOVERED_JUMPTABLE_18 & 0xff) + 7);
switchD_10001997c_caseD_19961:
  puVar98 = &switchD_1000183ca::switchdataD_1006d0f70;
  uVar25 = (&switchD_1000183ca::switchdataD_1006d0f70)[(long)UNRECOVERED_JUMPTABLE_18];
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(long)(int)uVar25;
  bVar89 = (undefined **)0xfffffffefffe66a4 < UNRECOVERED_JUMPTABLE_18;
  bVar105 = SCARRY8((long)UNRECOVERED_JUMPTABLE_18,0x10001995b);
  UNRECOVERED_JUMPTABLE_13 = (undefined **)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001995b);
  bVar108 = (long)UNRECOVERED_JUMPTABLE_13 < 0;
  bVar104 = UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0;
  uVar92 = 0x3165f9b4;
  bVar84 = (byte)ppuVar87;
  uVar86 = (uint)ppuVar87;
  iVar20 = (int7)(int3)(uVar25 >> 8);
  uVar91 = (uint)param_2;
  bVar23 = (byte)UNRECOVERED_JUMPTABLE_13;
  uVar85 = (uint)UNRECOVERED_JUMPTABLE_13;
  bVar24 = (byte)uVar25;
  uVar9 = (uint)(puVar42 + -2);
  cVar6 = (char)uVar101;
  ppuVar14 = UNRECOVERED_JUMPTABLE_18;
  puVar55 = puVar42 + -0x6a;
  puVar47 = puVar42 + -0x6a;
  puVar64 = puVar42 + -0x6a;
  puVar75 = puVar42 + -2;
  puVar56 = puVar42 + -2;
  puVar76 = puVar42 + -2;
  puVar69 = puVar42 + -2;
  puVar96 = puVar95;
  unaff_R12 = (undefined **)puVar98;
  uVar103 = uVar102;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(UNRECOVERED_JUMPTABLE_13) {
  case (undefined **)0x10000c612:
                    /* WARNING: Could not recover jumptable at 0x00010000c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                               [(int)(uVar101 + (UNRECOVERED_JUMPTABLE_18 < param_2))] + 0x10000c612
                   ))((uVar86 - (uVar102 << ((cVar6 - 2U ^ 0x15) & 0x3f) &
                                ((uVar101 + 0x34 | 0x81) ^ 0xe2846e4f))) + -0xebdc8be,param_2,
                      UNRECOVERED_JUMPTABLE,
                      (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                          [(int)(uVar101 + (UNRECOVERED_JUMPTABLE_18 < param_2))] +
                              0x10000c612));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100012957:
    uVar10 = *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_12 + (long)ppuVar87);
    puVar42[-0x6a] = 0x12960;
    puVar42[-0x69] = 1;
    (**(code **)(puVar42 + -0x14))(uVar10);
    *(undefined8 *)((long)UNRECOVERED_JUMPTABLE_12 + (long)unaff_R15) =
         *(undefined8 *)(puVar42 + -0x52);
    **(undefined4 **)(puVar42 + -0x62) = (int)*(undefined8 *)(puVar42 + -0x38);
    piVar4 = *(int **)(puVar42 + -0x1e);
    iVar33 = *piVar4;
    *(undefined ***)(puVar42 + -0x2c) = UNRECOVERED_JUMPTABLE_12;
    lVar16 = *(long *)((long)UNRECOVERED_JUMPTABLE_12 + (long)unaff_R15);
    lVar30 = (*(long *)(puVar42 + -0x6a) -
             (*(long *)(puVar42 + -0x6a) << ((cVar6 + 8U ^ 0x88) & 0x3f) & 0x681f333462e1d3ccU)) +
             -0x4bf06665ce8f161a;
    lVar15 = ((ulong)(iVar33 + 0xa8756e6cU) ^ 0x7effbe781dfebded) +
             (ulong)(iVar33 + 0xa8756e6cU & 0x1dfebded) * 2 + -0x7effbe781dfebded;
    *(byte *)(lVar16 + lVar15) = (byte)((ulong)lVar30 >> 0x38) ^ 0xb4;
    *(byte *)(lVar16 + 1 + lVar15) = (byte)((ulong)lVar30 >> 0x30) ^ 0xf;
    *(byte *)(lVar16 + 2 + lVar15) = (byte)((ulong)lVar30 >> 0x28) ^ 0x99;
    *(byte *)(lVar16 + 3 + lVar15) = (byte)((ulong)lVar30 >> 0x20) ^ 0x9a;
    *(byte *)(lVar16 + 4 + lVar15) = (byte)((ulong)lVar30 >> 0x18) ^ 0x31;
    *(byte *)(lVar16 + 5 + lVar15) = (byte)((ulong)lVar30 >> 0x10) ^ 0x70;
    *(byte *)(lVar16 + 6 + lVar15) = (byte)((ulong)lVar30 >> 8) ^ 0xe9;
    *(byte *)(lVar16 + 7 + lVar15) = (byte)lVar30 ^ 0xe6;
    *(int **)(puVar42 + -0x1e) = piVar4;
    *piVar4 = *piVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x000100012a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)unaff_R13 + (long)(int)(uVar101 + 9) * 4) + 0x100012a6d))()
    ;
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100012f03:
                    /* WARNING: Could not recover jumptable at 0x000100012f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100012e9e + (int)(&switchD_100013a5e::switchdataD_1006d0050)[(long)param_2]
                   ))(&DAT_100012e9e +
                      (int)(&switchD_100013a5e::switchdataD_1006d0050)[(long)param_2],
                      0x2d8eb0431bcfd253);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000131f0:
                    /* WARNING: Could not recover jumptable at 0x0001000131f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100013a12:
    puVar42[-0x27] = 0x3166a97d;
    *(undefined ***)(puVar42 + -0x1a) = UNRECOVERED_JUMPTABLE;
    *(undefined ***)(puVar42 + -0x32) = UNRECOVERED_JUMPTABLE_13;
    *(undefined ***)(puVar42 + -0x36) = UNRECOVERED_JUMPTABLE_13;
    *(undefined ***)(puVar42 + -0x30) = UNRECOVERED_JUMPTABLE_13;
    *(undefined ***)(puVar42 + -0x3e) = UNRECOVERED_JUMPTABLE_13;
    *(undefined ***)(puVar42 + -0x24) = UNRECOVERED_JUMPTABLE_13;
    puVar42[-0x2a] = 0x3165f9b4;
    puVar42[-0x29] = 0;
    *(undefined ***)(puVar42 + -0x1c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100013a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100013bc5:
    lVar16 = *(long *)(puVar42 + -2);
    *(undefined ***)(lVar16 + -0xd0) = UNRECOVERED_JUMPTABLE;
    *(undefined ***)(lVar16 + -0xe0) = UNRECOVERED_JUMPTABLE;
    *(undefined ***)(lVar16 + -0xd8) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)(lVar16 + -0x50) = 0x742c45ff88570c30;
    *(undefined8 *)(lVar16 + -0x90) = 0x742c45ff88570c30;
                    /* WARNING: Could not recover jumptable at 0x000100013bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100013fa6:
    *(byte *)ppuVar87 = bVar24;
    *(int *)UNRECOVERED_JUMPTABLE_18 = *(int *)UNRECOVERED_JUMPTABLE_18 + -0x3efb74b8;
    ppuVar87 = (undefined **)(ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_18 + -3);
    param_2 = *(undefined ***)(puVar42 + -0x44);
    UNRECOVERED_JUMPTABLE = (undefined **)(ulong)puVar42[-0x23];
    uVar25 = 0x407df22c;
switchD_10001997c_caseD_13fc5:
    puVar13 = UNRECOVERED_JUMPTABLE_13[(int)uVar25];
    puVar42[-0x6c] = 0x13fd7;
    puVar42[-0x6b] = 1;
    (*(code *)(puVar13 + -2))(ppuVar87,param_2,UNRECOVERED_JUMPTABLE);
    iVar33 = *(int *)((long)(int)((puVar42[-0x1c] == (uVar83 ^ 0x3166a95a)) + 0x407df224) * 4 +
                     0x3165f9b4);
    *(undefined ***)(puVar42 + -0x16) = ppuVar90;
                    /* WARNING: Could not emulate address calculation at 0x000100013ff8 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(FUN_100013f83 + iVar33))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100013fbb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100013fc5:
    goto switchD_10001997c_caseD_13fc5;
  case (undefined **)0x100014021:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000198de) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000198de) + uVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100014282:
    uVar102 = uVar91 + uVar29 * 2 + 0xd4d50b2f;
    bVar89 = uVar25 < uVar102;
    if ((bool)bVar84 != uVar102 < 0x52d0fa9e) {
      bVar89 = uVar102 < 0x52d0fa9e;
    }
                    /* WARNING: Could not recover jumptable at 0x0001000142cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                   (long)*(int *)((long)unaff_R13 + (long)(int)(bVar89 + uVar101) * 4)))
                   ((code *)((long)UNRECOVERED_JUMPTABLE_13 +
                            (long)*(int *)((long)unaff_R13 + (long)(int)(bVar89 + uVar101) * 4)));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100014439:
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) ^ uVar91;
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77);
    *UNRECOVERED_JUMPTABLE_19 =
         (code)((byte)*UNRECOVERED_JUMPTABLE_19 >> (bVar23 & 7) |
               (char)*UNRECOVERED_JUMPTABLE_19 << 8 - (bVar23 & 7));
    do {
    } while ((bool)(((bVar23 & 0x1f) == 1) *
                   ((((ulong)UNRECOVERED_JUMPTABLE_13 & 0x1f) != 0) *
                    ((char)*UNRECOVERED_JUMPTABLE_19 < '\0') ^
                   (char)((char)*UNRECOVERED_JUMPTABLE_19 << 1) < '\0')));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000144ca:
    iVar33 = ((uVar86 & 0xffec6de8) + ((uVar29 | 0x139214) - uVar86) ^ 0xd97311a5) * 0x65773fe7;
    puVar42[-0x10] = (uVar85 + iVar33) - 0x71;
    puVar42[-0x11] = uVar25 + iVar33 + uVar102 + 0x55e3d84;
    puVar42[-0x6c] = 0x14505;
    puVar42[-0x6b] = 1;
    FUN_100014c30();
    uVar83 = 0x3165f9b4;
    if (puVar42[-0xf] == 0x52e88d51) {
      uVar83 = 0x3165f9a5;
    }
    uVar102 = uVar102 - 0x27 | 0x29;
    puVar42[-0x26] = 0x814565b9;
    puVar42[-0x25] = 0x4469798c;
    puVar42[-0x1a] = 0x814565b9;
    puVar42[-0x19] = 0x4469798c;
                    /* WARNING: Could not recover jumptable at 0x000100012754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_10000bc87 +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)
                        [(int)((uVar83 == ((uVar102 ^ 10) + 0xe ^ 0x3166a93e)) + uVar102)]))
                   (*(undefined8 *)(puVar42 + -0x18));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000145ec:
    *ppuVar90 = *ppuVar90 + -(long)(puVar42 + -0x6a);
    uVar102 = uVar91 + 4 + (uint)bVar110 * -8;
    bVar89 = uVar28 < 0xced166b5;
    if (uVar102 < uVar99 + 0xced16684 == uVar28 < 0xced166b5) {
      bVar89 = uVar102 < uVar28;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001463d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000145c8 + *(int *)((long)unaff_R14 + (long)(int)(bVar89 + uVar85) * 4)))
                   ((byte *)((long)ppuVar87 + (ulong)bVar110 * -8 + 4),
                    &DAT_1000145c8 + *(int *)((long)unaff_R14 + (long)(int)(bVar89 + uVar85) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100014676:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000149cc:
                    /* WARNING: Could not recover jumptable at 0x0001000149e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100014991 + *(int *)((long)unaff_R13 + (long)(int)uVar34 * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100014c6a:
                    /* WARNING: Could not recover jumptable at 0x000100014c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)(int)(&UINT_1006d12b0)[(int)uVar29] + 0x100014c62))
                   (ppuVar87,(code *)((long)(int)(&UINT_1006d12b0)[(int)uVar29] + 0x100014c62));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100014f71:
    *(undefined ***)(puVar42 + -0xe) = UNRECOVERED_JUMPTABLE_18;
    uVar92 = (ulong)(puVar42 + -0x6a) ^ _DAT_10088e778;
    _DAT_10088e778 = (uVar92 ^ DAT_10088e7f8) * 0x79f54c43 + 0xd8ccc078b33194d;
    DAT_10088e7f8 = (uVar92 ^ DAT_10088e7f8 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
    uVar102 = ((uint)_DAT_10088e778 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
    unaff_R12 = &PTR__bootstrap_look_up_10082e9f0;
    unaff_R15 = (undefined **)
                (&PTR__bootstrap_look_up_10082e9f0)
                [(byte)((byte)uVar102 ^
                       (&DAT_1006d2c00)[(byte)(&DAT_1006d1c30)[uVar102 & 0xff] ^ 0xe]) + 1];
    puVar42[-0x6c] = 0x14ffa;
    puVar42[-0x6b] = 1;
    unaff_R13 = (uint *)(*(code *)unaff_R15)(0x18);
    param_2 = (undefined **)((long)unaff_R13 + 0x1ce67bd8e8191850);
    register0x00000020 = (BADSPACEBASE *)(puVar42 + -0x6a);
    unaff_RBP = puVar42 + -2;
    switch((code *)unaff_R13 == (code *)0x0) {
    case false:
      goto code_r0x0001000199dd;
    }
    goto code_r0x00010001af93;
  case (undefined **)0x1000155e4:
    *(char *)UNRECOVERED_JUMPTABLE_13 = (char)*(code *)UNRECOVERED_JUMPTABLE_13 + '\x01';
    lVar16 = *(long *)(puVar42 + -2);
    *(undefined ***)(lVar16 + -0x88) = UNRECOVERED_JUMPTABLE_13;
    uVar12 = *(undefined8 *)(lVar16 + -0x110);
    puVar42[-2] = 0x155f9;
    puVar42[-1] = 1;
    lVar16 = (*(code *)UNRECOVERED_JUMPTABLE_18)(uVar12,0);
                    /* WARNING: Could not recover jumptable at 0x000100015630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100015557 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar102 + (lVar16 == 0))])
         )(&switchD_1000183ca::switchdataD_1006d0f70);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000156e4:
    iVar33 = (uVar25 == uVar29) + uVar85;
    lVar16 = (long)*(int *)((long)ppuVar87 + (long)iVar33 * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000156cc + lVar16))
                   (ppuVar87,iVar33,&DAT_1000156cc + lVar16,lVar16,ppuVar87);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000157d6:
                    /* WARNING: Could not recover jumptable at 0x0001000157f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000157cb + *(int *)((long)unaff_R13 + (long)(int)uVar25 * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100015ae6:
    *(ulong *)(puVar42 + -0x16) = (ulong)(uVar91 - 0x20);
    puVar42[-0x6c] = 0x15b01;
    puVar42[-0x6b] = 1;
    uVar12 = (*(code *)ppuVar90)(*(undefined8 *)(puVar42 + -0x30),*(undefined8 *)(puVar42 + -0x44));
    puVar42[-0x6c] = 0x15b0d;
    puVar42[-0x6b] = 1;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(**(code **)(puVar42 + -0x2a))(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000100015b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100015ad1 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)((UNRECOVERED_JUMPTABLE_18 == param_2) + uVar34)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100015b40:
    *(undefined4 *)param_2 = 0;
    puVar13 = PTR__malloc_10082ea28;
    puVar42[-0x6c] = 0x15b6d;
    puVar42[-0x6b] = 1;
    puVar11 = (undefined8 *)(*(code *)PTR__malloc_10082ea28)(0x18);
    uVar92 = 0x3165f9b2;
    switch(puVar11 == (undefined8 *)0x0) {
    case false:
      *puVar11 = 0;
      puVar11[1] = 0x7261378736103bda;
      *(undefined4 *)(puVar11 + 2) = 0;
      *(undefined8 **)(puVar42 + -0x14) = puVar11;
      *(undefined **)(puVar42 + -0x26) = puVar13;
      puVar42[-0x6c] = 0x1839c;
      puVar42[-0x6b] = 1;
      puVar13 = (undefined *)(*(code *)puVar13)(0x1000);
      ppuVar90 = *(undefined ***)(puVar42 + -0x14);
      *ppuVar90 = puVar13;
      switch(puVar13 == (undefined *)0x0) {
      case false:
        *(undefined ***)(puVar42 + -0x6a) = ppuVar87;
        *(undefined ***)(puVar42 + -0x60) = param_2;
        *(undefined **)(puVar42 + -0x1e) = PTR__free_10082eaf0;
        *(code **)(puVar42 + -0x28) = (code *)((long)ppuVar90 + 0xa8b2fd12c86b103);
        uVar29 = 2;
        uVar101 = 0xc3;
        *(undefined4 *)(ppuVar90 + 1) = 0x36104bda;
        *(undefined **)(puVar42 + -0x46) = PTR_s_om_apple_adid_1006d0b54_1_10082ea58 + -1;
        puVar42[-0x1a] = 0x6016ebe8;
        puVar42[-0x19] = 0x5a79349;
        puVar42[-0x36] = 0x6016ebe8;
        puVar42[-0x35] = 0x5a79349;
        puVar42[-0x38] = 0x6016ebe8;
        puVar42[-0x37] = 0x5a79349;
        puVar42[-0x34] = 0x6016ebe8;
        puVar42[-0x33] = 0x5a79349;
        puVar42[-0x32] = 0x6016ebe8;
        puVar42[-0x31] = 0x5a79349;
        puVar42[-0x2e] = 0x6016ebe8;
        puVar42[-0x2d] = 0x5a79349;
        switch(ppuVar90 == (undefined **)0x0) {
        case false:
          goto code_r0x000100018dbe;
        case true:
          iVar33 = 0;
        }
        goto switchD_10001df6e_caseD_1c526;
      case true:
        uVar92 = 0x3165f9b2;
        switch(ppuVar90 == (undefined **)0x0) {
        case false:
          puVar42[-0x6c] = 0x198c3;
          puVar42[-0x6b] = 1;
          (*(code *)PTR__free_10082eaf0)(ppuVar90);
          UNRECOVERED_JUMPTABLE_18 = (undefined **)switchD_10001997c::caseD_17daa();
          return UNRECOVERED_JUMPTABLE_18;
        }
      }
    }
code_r0x000100017daa:
    if (*(long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                          (uint)PTR____stack_chk_guard_10082cb58) != *(long *)(puVar42 + -0xe)) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar42 + -0x6c) = &UNK_100018fd5;
      ___stack_chk_fail();
    }
    return (undefined **)(ulong)((int)uVar92 + 0xce995683);
  case (undefined **)0x100015bb7:
    *(undefined4 *)((ulong)uVar25 - 0x73) = 0x884c5d14;
    *(short *)((long)UNRECOVERED_JUMPTABLE_12 + 0x31fe8944) = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015bcf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015c6a:
    uVar85 = (byte)*(code *)((long)ppuVar87 + (long)UNRECOVERED_JUMPTABLE_18) | uVar85;
    *(uint *)UNRECOVERED_JUMPTABLE = uVar91 + 8;
    **(int **)(puVar42 + -0x60) = (uVar85 ^ 0xb7efa97f) + (uVar85 & 0x37efa97f) * 2 + 0x48105681;
    puVar42[-0x16] = 0x3166a97d;
                    /* WARNING: Could not emulate address calculation at 0x000100015cba */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                               [(int)((unaff_R15 == UNRECOVERED_JUMPTABLE_18) + 0x3165f9b4)] +
                   0x100015c9f))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100015dbe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015e78:
    *(undefined ***)(puVar42 + -0x6c) = UNRECOVERED_JUMPTABLE;
    LOCK();
    uVar83 = *(uint *)(ppuVar87 + 3);
    *(uint *)(ppuVar87 + 3) = uVar86;
    UNLOCK();
    puVar42[-0x6e] = 0x15e89;
    puVar42[-0x6d] = 1;
    lVar16 = (**(code **)(puVar42 + -0x26))(CONCAT44((int)((ulong)ppuVar87 >> 0x20),uVar83));
    uVar102 = (&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar102 + (lVar16 == 0))];
    puVar42[-0x16] = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x000100015eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_100015e73 + (int)uVar102))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100015eb5:
    *(byte **)(puVar42 + -0x1c) = (byte *)((long)ppuVar87 + (ulong)bVar110 * -8 + 4);
    uVar83 = uVar34 - 2 ^ 0x95;
    uVar102 = *(int *)((long)ppuVar90 + 0xc) + 0x3a1dc8ce;
    uVar25 = *(int *)(ppuVar90 + 1) + uVar83 * 2 + 0x766ec405;
    bVar89 = uVar102 < uVar83 + 0xac7f0016;
    if (uVar25 < 0xac7f004d == bVar89) {
      bVar89 = uVar25 < uVar102;
    }
                    /* WARNING: Could not recover jumptable at 0x000100015f2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&UNK_100015ebb +
                   *(int *)((long)unaff_R13 + (long)(int)((uint)bVar89 + (uVar34 - 2)) * 4)))
                   (&UNK_100015ebb +
                    *(int *)((long)unaff_R13 + (long)(int)((uint)bVar89 + (uVar34 - 2)) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000161e6:
                    /* WARNING: Could not recover jumptable at 0x0001000161ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100016405:
                    /* WARNING: Could not recover jumptable at 0x000100016416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)uVar29] +
                   0x1000163e3))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001641a:
    *(byte **)(puVar42 + -0x1c) = (byte *)((long)ppuVar87 + (ulong)bVar110 * -8 + 4);
    iVar33 = (uVar35 ^ 0xf6) * 3;
    uVar102 = *(int *)((long)ppuVar90 + 0xc) + (iVar33 + 0xdea0a43fU & 0x215f5baf) + 0xb3131a49;
    uVar83 = *(int *)(ppuVar90 + 1) + 0xef64169e;
    bVar89 = uVar83 < uVar102;
    if (uVar83 < 0x25745278 != uVar102 < 0x25745278) {
      bVar89 = uVar102 < 0x25745278;
    }
                    /* WARNING: Could not recover jumptable at 0x000100016494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)unaff_R13 + (long)(int)((uint)bVar89 + iVar33) * 4) +
                   0x10001641b))
                   (uVar83,(code *)((long)*(int *)((long)unaff_R13 +
                                                  (long)(int)((uint)bVar89 + iVar33) * 4) +
                                   0x10001641b));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000164fe:
    puVar42[-0x42] = 0;
    puVar42[-0x41] = 0;
    puVar42[-0x21] = 0;
    puVar13 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar99 ^ 0x5c)];
    *(undefined **)(puVar42 + -0x1a) = puVar13;
    uVar10 = *(undefined4 *)(puVar13 + -2);
    puVar13 = *(undefined **)puVar95;
    iVar33 = *(int *)((long)puVar95 + 0xc);
    puVar37 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar99 - 0x4b)];
    *(undefined **)(puVar42 + -0x18) = puVar37 + -3;
    puVar42[-0x6c] = 0x1655a;
    puVar42[-0x6b] = 1;
    uVar83 = (*(code *)(puVar37 + -3))
                       (uVar10,puVar13,iVar33 + -0x4a01cb87,puVar42 + -0x42,puVar42 + -0x21);
    uVar102 = (uint)((uVar102 + 0x4f5b068b ^ uVar83) + (uVar83 & 0xceedf77e) * 2 + 0xfbff9fd8 ==
                    (uVar101 ^ 0xade8adc7));
code_r0x00010001657f:
    *(undefined8 **)((long)puVar39 + (ulong)(byte)(unaff_00084f00 - 1) * -8 + -8) = unaff_0008ae00;
    uVar92 = (ulong)*(int *)((long)ppuVar90 + (long)(int)(uVar102 + uVar99) * 4);
    UNRECOVERED_JUMPTABLE = (undefined **)&DAT_1000164e4;
code_r0x000100016594:
                    /* WARNING: Could not recover jumptable at 0x00010001659a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE + uVar92))(ppuVar90);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000168b5:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 0x634800d3) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_12 + 0x634800d3) + uVar25;
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000169d6:
                    /* WARNING: Could not recover jumptable at 0x0001000169d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)param_2 + (long)UNRECOVERED_JUMPTABLE))
                   (ppuVar87,(code *)((long)param_2 + (long)UNRECOVERED_JUMPTABLE));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100016ae5:
    *(code **)(puVar42 + -0x48) = (code *)((long)puVar95 + 0xc);
    uVar25 = *(int *)((long)puVar95 + 0xc) + 0x9e17caa5;
    uVar102 = (uVar29 & 0x81e21fef) + *(int *)((long)puVar95 + 8) + 0x93a0366a;
    ppuVar87 = (undefined **)(ulong)uVar102;
    uVar28 = (uint)(uVar25 < 0xe8199628);
    bVar105 = uVar102 < (uVar35 ^ 0x7e1de028) + 0xe8199590;
switchD_10001a75e_caseD_16b2a:
    if (bVar105 == SUB41(uVar28,0)) {
      uVar28 = (uint)((uint)ppuVar87 < uVar25);
    }
                    /* WARNING: Could not recover jumptable at 0x000100016b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100016acd +
                   *(int *)((long)unaff_R13 + (long)(int)((uVar28 & 0xff) + (int)unaff_R12) * 4)))
                   (&DAT_100016acd +
                    *(int *)((long)unaff_R13 + (long)(int)((uVar28 & 0xff) + (int)unaff_R12) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100016dda:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001710b:
    goto switchD_10001997c_caseD_1710b;
  case (undefined **)0x100017830:
  case (undefined **)0x100017802:
    *(undefined ***)(puVar42 + -0x16) = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         switchD_100020322::caseD_18d74
                   (uVar86 ^ 0x76,((ulong)unaff_R15 ^ 0xffffffee) & 0x1006d0f70,
                    *(undefined8 *)(puVar42 + -0x50),0xe2846de5,CONCAT71((uint7)uVar5,0x41));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001785b:
                    /* WARNING: Could not recover jumptable at 0x00010001786b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100017840 + *(int *)((long)puVar95 + (ulong)uVar29 * 4)))
                   (ppuVar87,param_2,&DAT_100017840 + *(int *)((long)puVar95 + (ulong)uVar29 * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000178d9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100017a36:
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_18 * 2 + 0x10001993b) = 0x48;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uint)(int)(short)uVar25;
  case (undefined **)0x100017a3c:
                    /* WARNING: Could not recover jumptable at 0x000100017a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000179d6 + *(int *)((long)puVar95 + (long)UNRECOVERED_JUMPTABLE_18 * 4)))
                   (ppuVar87,param_2,
                    &DAT_1000179d6 + *(int *)((long)puVar95 + (long)UNRECOVERED_JUMPTABLE_18 * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100017ba7:
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) ^ uVar91;
    lVar16 = *(long *)(puVar42 + -2);
    *(undefined ***)(lVar16 + -0x130) = UNRECOVERED_JUMPTABLE_13;
                    /* WARNING: Could not recover jumptable at 0x000100017bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)UNRECOVERED_JUMPTABLE)
                   (*(undefined8 *)(lVar16 + -0x68),param_2,UNRECOVERED_JUMPTABLE,0,
                    *(undefined8 *)(lVar16 + -0x48));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100017cdf:
    puVar42[-0x6c] = 0x17ce4;
    puVar42[-0x6b] = 1;
    auVar111 = func_0x00011cf50005();
    UNRECOVERED_JUMPTABLE_18 = auVar111._0_8_;
    UNRECOVERED_JUMPTABLE = (undefined **)((long)unaff_R14 + auVar111._8_8_);
    uVar34 = uVar34 + 0xc;
code_r0x000100017d2a:
    *(int *)UNRECOVERED_JUMPTABLE = (int)param_2 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100017d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)puVar95 +
                                  (long)(int)((unaff_R14 == UNRECOVERED_JUMPTABLE_18) + uVar34) * 4)
                   + 0x100017d59))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100017d23:
    pbVar1 = (byte *)((ulong)(uVar85 + (int)(puVar42 + -0x6a)) * 2 + -0x3f);
    *pbVar1 = *pbVar1 | bVar24;
    goto code_r0x000100017d2a;
  case (undefined **)0x100017daa:
    goto code_r0x000100017daa;
  case (undefined **)0x100017e47:
    goto switchD_10001997c_caseD_17e47;
  case (undefined **)0x100017f0e:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x41e63944) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x41e63944) + cVar8);
switchD_10001a75e_caseD_17ed9:
    ppuVar90 = (undefined **)&DAT_10001a3ba;
    uVar102 = (0x2000 << (((char)UNRECOVERED_JUMPTABLE_18 + 6U ^ 0x61) & 0x1f) & 0xff663754U) +
              0x8bfadbb2;
    uVar34 = (uint)((int)UNRECOVERED_JUMPTABLE_13 + 0x8bfacbb2U < uVar102);
    if ((int)unaff_R12 + 0x740543f1U < (int)UNRECOVERED_JUMPTABLE_13 + 0x1000U !=
        uVar102 < 0x8bfabbb2) {
      uVar34 = (uint)(uVar102 < 0x8bfabbb2);
    }
code_r0x000100017f5f:
                    /* WARNING: Could not recover jumptable at 0x000100017f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar90 +
                   (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                              [(int)((uVar34 & 0xff) + (int)UNRECOVERED_JUMPTABLE_18)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100017ffe:
                    /* WARNING: Could not recover jumptable at 0x000100018015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100017fdf +
                   *(int *)((long)unaff_R15 + (long)(int)(uVar86 + (uVar28 < uVar93)) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000180a2:
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)FUN_10001c312(ppuVar87,param_2,(uVar35 ^ 0xfb643c85) + (uVar85 ^ 0x4efdd7d6))
    ;
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000181a8:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x76ba6263) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x76ba6263) + bVar24);
    out(0x41,uVar25);
    iVar33 = *(int *)((long)unaff_R13 + 8);
    uVar12 = *(undefined8 *)unaff_R13;
    *(undefined ***)(puVar42 + -0x4c) = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         switchD_100020322::caseD_18d74
                   (uVar86 ^ 0xa0,iVar33 + -0x4dbf9431,uVar12,UNRECOVERED_JUMPTABLE_18);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001826e:
    puVar63 = (uint *)((long)UNRECOVERED_JUMPTABLE_13 * 5 + -0x10);
    uVar102 = *puVar63;
    *puVar63 = *puVar63 + uVar25;
                    /* WARNING: Could not recover jumptable at 0x00010001828d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001825d +
                   *(int *)((long)puVar95 + (long)(int)(uVar25 + CARRY4(uVar102,uVar25)) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000185c3:
switchD_10001a75e_caseD_185b5:
                    /* WARNING: Could not emulate address calculation at 0x0001000185c4 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000185a8 +
                   *(int *)((long)puVar96 + (long)(int)(((int)puVar58 == 0) + 0x4913681e) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000185e8:
                    /* WARNING: Could not recover jumptable at 0x00010001863b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000185de +
                   *(int *)((long)puVar95 +
                           (long)(int)(((uVar86 + 0xac6b660b & uVar91 * 2 ^ (uVar93 | 0x10) ^
                                        0xa0006611) + (uVar91 ^ 0xa777844d) == 0x5635b30f) + uVar86)
                           * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000186c2:
    if (UNRECOVERED_JUMPTABLE_13 != (undefined **)0x1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000187cb:
    *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar24;
    unaff_R14 = &PTR__bootstrap_look_up_10082e9f0;
    puVar13 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar99 - 0x6c)];
    puVar37 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar99 ^ 0x5c)];
    puVar42[-0x6c] = 0x187f7;
    puVar42[-0x6b] = 1;
    (*(code *)(puVar13 + -1))(unaff_R15,puVar37 + -2);
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)((&PTR__bootstrap_look_up_10082e9f0)[uVar99 & 0x54ad4595] + -1);
    ppuVar87 = unaff_R15;
    goto switchD_10001a75e_caseD_18809;
  case (undefined **)0x100018851:
    puVar41 = puVar42 + -0x6a;
    puVar59 = puVar42 + -2;
switchD_10001a75e_caseD_18809:
    *(undefined8 *)((long)puVar41 + -8) = 0x10001880b;
    (*(code *)UNRECOVERED_JUMPTABLE_18)(ppuVar87);
    puVar13 = unaff_R14[(int)(uVar99 ^ 0x6b)];
    *(undefined ***)((long)puVar59 + -0xb8) = unaff_R15;
    uVar12 = *(undefined8 *)((long)puVar59 + -0x108);
    *(undefined **)((long)puVar59 + -0x88) = puVar13 + -2;
    *(undefined8 *)((long)puVar41 + -8) = 0x100018835;
    uVar12 = (*(code *)(puVar13 + -2))(unaff_R15,uVar12);
    UNRECOVERED_JUMPTABLE_19 = (code *)unaff_R14[(int)(uVar99 ^ 0x5b)];
    *(code **)((long)puVar59 + -0xa0) = UNRECOVERED_JUMPTABLE_19;
    *(undefined8 *)((long)puVar41 + -8) = 0x100018850;
    puVar13 = (undefined *)(*UNRECOVERED_JUMPTABLE_19)(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010001888d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000187b7 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)((puVar13 == unaff_R14[(int)(uVar99 & 0xeb29af86)] + -0xe) + uVar99)])
         )();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001897b:
    ppuVar14 = (undefined **)(ulong)puVar42[-0x14];
  case (undefined **)0x100018883:
    *(int *)((long)ppuVar14 + 1U) = *(int *)((long)ppuVar14 + 1U) + -1;
    UNRECOVERED_JUMPTABLE_18 = UNRECOVERED_JUMPTABLE_18 + 0x20003323;
    *(uint *)UNRECOVERED_JUMPTABLE_18 =
         *(uint *)UNRECOVERED_JUMPTABLE_18 << 0x10 | *(uint *)UNRECOVERED_JUMPTABLE_18 >> 0x10;
    *(uint **)(puVar42 + -0x18) = unaff_R13;
    lVar16 = *(long *)(puVar42 + -0x28);
    uVar12 = *(undefined8 *)(lVar16 + -0xa8b2fd12c86b103);
    *(undefined **)(puVar42 + -0x6c) = &UNK_1000188b2;
    (**(code **)(puVar42 + -0x1e))(uVar12);
    *(undefined8 *)(lVar16 + -0xa8b2fd12c86b103) = *(undefined8 *)(puVar42 + -0x4a);
    **(undefined4 **)(puVar42 + -0x62) = (int)*(undefined8 *)(puVar42 + -0x36);
    piVar4 = *(int **)(puVar42 + -0x56);
    iVar33 = *piVar4;
    *(long *)(puVar42 + -0x28) = lVar16;
    lVar16 = *(long *)(lVar16 + -0xa8b2fd12c86b103);
    uVar88 = (*(long *)(puVar42 + -0x6a) - (*(long *)(puVar42 + -0x6a) * 2 & 0x681f333462e1d3ccU)) +
             0xb40f999a3170e9e6;
    lVar15 = (ulong)((iVar33 + 0x8d9ec879U) * 2 & 0xb7ed7a7a) +
             ((ulong)(iVar33 + 0x8d9ec879U) ^ 0xbfbbdfea5bf6bd3d) + 0x40442015a40942c3;
    *(undefined4 *)(lVar16 + lVar15) = 0xffffffff;
    *(undefined2 *)(lVar16 + 4 + lVar15) = 0xffff;
    uVar92 = uVar88 >> 8 & 0xffffff ^ 0xe9;
    *(char *)(lVar16 + 6 + lVar15) = (char)uVar92;
    *(byte *)(lVar16 + 7 + lVar15) = (byte)uVar88 ^ 0xe6;
    *(int **)(puVar42 + -0x56) = piVar4;
    *piVar4 = *piVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x0001000189ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_100018982 + (int)UINT_1006d1134))
                   (*(undefined8 *)(puVar42 + -0x1c),0xb40f999a3170e9e6,uVar92,
                    &LAB_100018982 + (int)UINT_1006d1134,*(undefined8 *)(puVar42 + -0x14),0x3166a97d
                   );
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000189c2:
    uVar102 = puVar42[(long)((long)UNRECOVERED_JUMPTABLE_18 + -0x6a)];
    *(undefined8 *)(puVar42 + -0x24) = *(undefined8 *)(puVar42 + -0x2c);
    *(undefined8 *)(puVar42 + -0x2a) = *(undefined8 *)(puVar42 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x000100018a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((ulong)uVar102 + 0x1000189b0))
                   (ppuVar87,param_2,*(undefined8 *)(puVar42 + -0x18),
                    *(undefined8 *)(puVar42 + -0x20),*(undefined8 *)(puVar42 + -0x14),puVar42[-0x16]
                   );
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018a78:
    uVar102 = uVar93 * 2 + 0x93df884c;
    uVar83 = uVar102 ^ 0x365a7ffa;
    uVar102 = uVar102 & 0x365a7ffa;
    UNRECOVERED_JUMPTABLE = (undefined **)(ulong)(uVar83 + uVar102 * 2);
    uVar102 = uVar83 + uVar102 * 2 + 0x52720170;
    ppuVar87 = (undefined **)(ulong)uVar102;
    uVar92 = (ulong)((uVar25 | 0xfffffc6d) < uVar102);
    if ((uVar25 | 0xfffffc6d) < 0x88cc816a != uVar102 < 0x88cc816a) {
      uVar92 = (ulong)(uVar102 < 0x88cc816a);
    }
code_r0x000100018ada:
                    /* WARNING: Could not recover jumptable at 0x000100018af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                   (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                              [(int)(((uint)uVar92 & 0xff) + uVar34 + 0x78ad9ecb)]))
                   (ppuVar87,(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                                     (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                                                [(int)(((uint)uVar92 & 0xff) + uVar34 + 0x78ad9ecb)]
                                     ),UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018aee:
    goto code_r0x000100018ada;
  case (undefined **)0x100018b58:
    puVar42[-0x6c] = 0x18b60;
    puVar42[-0x6b] = 1;
    lVar16 = (**(code **)(puVar42 + -0x26))(uVar86 + uVar25);
    UNRECOVERED_JUMPTABLE_13 =
         (undefined **)
         (&DAT_100018b37 +
         (int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar99 + (lVar16 == 0))]);
code_r0x000100018b86:
    *(undefined8 *)((long)puVar60 + -0x148) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100018b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_13)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018bac:
    *(ulong *)(puVar42 + -0x1c) = (ulong)(uVar25 + uVar91);
    *unaff_R14 = (undefined *)0x0;
    unaff_R14[1] = (undefined *)0x4d14149255b31aa0;
    *(undefined4 *)(unaff_R14 + 2) = 0;
    goto code_r0x000100018bd4;
  case (undefined **)0x100018bd0:
    *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar24;
    *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar24;
code_r0x000100018bd4:
    puVar42[-0x6c] = 0x18bdc;
    puVar42[-0x6b] = 1;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)unaff_R15)(0x1000);
switchD_10001a75e_caseD_18bdc:
    *unaff_R14 = (undefined *)UNRECOVERED_JUMPTABLE_18;
                    /* WARNING: Could not recover jumptable at 0x000100018bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100018b98 +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                           (long)(int)((int)unaff_R12 +
                                      (uint)(UNRECOVERED_JUMPTABLE_18 == (undefined **)0x0)) * 4)))
                   ();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018c1b:
    if (!bVar105) goto LAB_100018c65;
    UNRECOVERED_JUMPTABLE_13 = (undefined **)0x1a4a3;
    ppuVar90 = (undefined **)(ulong)(uVar25 < 0x8a775cb9);
    param_2 = (undefined **)(ulong)(uVar86 * 2 + 0x645ac81c);
    break;
  case (undefined **)0x100018c2c:
    *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar24;
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x775cb93d) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x775cb93d) + cVar8);
    cVar38 = *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001996a);
    puVar63 = puVar42 + -0xdf8e8b5;
    *(byte *)puVar63 = (byte)*puVar63 >> 2 | (byte)*puVar63 << 6;
    uVar25 = uVar29;
    uVar29 = (uint)CONCAT71(iVar20,cVar38);
    break;
  case (undefined **)0x100018c41:
    uVar102 = uVar86;
    break;
  case (undefined **)0x100018db5:
    *(int *)((long)puVar42 + -7) = *(int *)((long)puVar42 + -7) + -1;
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001995a);
    *(uint *)UNRECOVERED_JUMPTABLE_19 =
         *(uint *)UNRECOVERED_JUMPTABLE_19 << 1 | *(uint *)UNRECOVERED_JUMPTABLE_19 >> 0x1f;
    in(99);
code_r0x000100018dbe:
    uVar101 = *(uint *)(ppuVar90 + 1);
    iVar33 = *(int *)((long)ppuVar90 + 0xc);
    uVar25 = uVar29 + 0x8129e39c & 0x27 ^ 0x9fffaab9;
code_r0x000100018ddb:
    bVar104 = uVar25 + iVar33 < 0x1260e242;
    bVar89 = uVar101 + 0xdc50a668 < uVar25 + iVar33;
    if (uVar101 + 0xdc50a668 < 0x1260e242 != bVar104) {
      bVar89 = bVar104;
    }
                    /* WARNING: Could not recover jumptable at 0x000100018e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(switchD_10001cb4f::caseD_0 +
           (int)*(uint *)((long)unaff_R12 + (ulong)(bVar89 + uVar29) * 4)))
                   (bVar104,switchD_10001cb4f::caseD_0 +
                            (int)*(uint *)((long)unaff_R12 + (ulong)(bVar89 + uVar29) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018ecc:
    bVar110 = 0xb4;
    if (uVar93 < uVar86 + 0xf9ba9d2b == true) {
      bVar110 = uVar93 < uVar28;
    }
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + (long)puVar95) =
         *(code *)((long)UNRECOVERED_JUMPTABLE + (long)puVar95);
                    /* WARNING: Could not recover jumptable at 0x000100018f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100018eaf +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(bVar110 + uVar86)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018fa8:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + ((ulong)(puVar42 + -0x6a) & 0xffffffff) + 0x100019929
             ) = (code)0x48;
switchD_10001a75e_caseD_18f9c:
                    /* WARNING: Could not recover jumptable at 0x000100018fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100018f50 +
                   *(int *)((long)unaff_R15 +
                           (long)(int)((uint)((int)ppuVar87 == 0x46258109) + (int)uVar92) * 4)))
                   (ppuVar87,(ulong)ppuVar87 & 0xffffffff,UNRECOVERED_JUMPTABLE,
                    UNRECOVERED_JUMPTABLE_13,
                    &DAT_100018f50 +
                    *(int *)((long)unaff_R15 +
                            (long)(int)((uint)((int)ppuVar87 == 0x46258109) + (int)uVar92) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019065:
    *(int *)((long)UNRECOVERED_JUMPTABLE_18 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_18 + 1) + -1
    ;
    puVar63 = (uint *)((long)UNRECOVERED_JUMPTABLE_13 * 5 + -0x25);
    *puVar63 = *puVar63 >> 0xc | *puVar63 << 0x14;
                    /* WARNING: Could not recover jumptable at 0x000100019070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_13)(ppuVar87,param_2,puVar42[-0x1c]);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019099:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x75) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x75) | 0x75);
    UNRECOVERED_JUMPTABLE_18 = (undefined **)CONCAT71(iVar20,0x97);
    puVar47 = puVar42 + -0x6a;
    goto switchD_10001a75e_caseD_19089;
  case (undefined **)0x1000190d4:
    puVar42[-0x3a] = uVar25;
    puVar47 = puVar42 + -0x6a;
    puVar61 = puVar42 + -2;
switchD_10001a75e_caseD_19089:
    param_2 = *(undefined ***)((long)puVar61 + -0x50);
    *(int *)((long)param_2 + -0x7f31ac3dd4da00bc) =
         (int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_18 >> 8),
                       (char)UNRECOVERED_JUMPTABLE_18 + 'A') + 0x77bb7eff;
    *(undefined4 *)(param_2 + -0xfe63587ba9b4017) = 0x4d141492;
    uVar10 = 0x3166a97d;
    uVar101 = 0x8b830d;
    *(undefined ***)((long)puVar61 + -0x48) = param_2;
    *(undefined8 *)((long)puVar61 + -0xa8) = *(undefined8 *)((long)puVar61 + -0x78);
    *(undefined8 *)((long)puVar61 + -0xe0) = *(undefined8 *)((long)puVar61 + -0x98);
    unaff_R15 = *(undefined ***)((long)puVar61 + -200);
    goto LAB_1000190e1;
  case (undefined **)0x10001910d:
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x75);
    *(uint *)UNRECOVERED_JUMPTABLE_19 =
         *(uint *)UNRECOVERED_JUMPTABLE_19 >> 0x1d | *(uint *)UNRECOVERED_JUMPTABLE_19 << 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100019167:
    *(ulong *)(puVar42 + -0x16) = (ulong)((uVar91 ^ 0x75) * 0x1f);
    puVar13 = unaff_R15[uVar101 & 0x132cbf99];
    puVar37 = unaff_R15[uVar101 & 0x7d24ea2d];
    puVar42[-0x6c] = 0x191a2;
    puVar42[-0x6b] = 1;
    (*(code *)(puVar13 + -1))(UNRECOVERED_JUMPTABLE_18,puVar37 + -2);
    puVar13 = unaff_R15[(int)(uVar101 ^ 100)];
    puVar42[-0x6c] = 0x191b6;
    puVar42[-0x6b] = 1;
    (*(code *)(puVar13 + -1))(UNRECOVERED_JUMPTABLE_18);
    puVar13 = unaff_R15[(int)(uVar101 - 0x5b)];
    *(undefined ***)(puVar42 + -0x3a) = UNRECOVERED_JUMPTABLE_18;
    puVar42[-0x6c] = 0x191d8;
    puVar42[-0x6b] = 1;
    uVar12 = (*(code *)(puVar13 + -2))(UNRECOVERED_JUMPTABLE_18,*(undefined8 *)(puVar42 + -0x34));
    UNRECOVERED_JUMPTABLE_19 = (code *)unaff_R15[(int)(uVar101 - 0x4b)];
    puVar42[-0x6c] = 0x191ea;
    puVar42[-0x6b] = 1;
    puVar13 = (undefined *)(*UNRECOVERED_JUMPTABLE_19)(uVar12);
    lVar16 = (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                        [(int)((puVar13 == unaff_R15[(int)(uVar101 - 0x6d)] + -0xe) + uVar101)];
    puVar13 = &DAT_10001914c;
code_r0x000100019219:
                    /* WARNING: Could not recover jumptable at 0x000100019222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(puVar13 + lVar16))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019231:
    cVar8 = bVar24 + (char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x97072bc);
    lVar16 = CONCAT71(iVar20,cVar8);
    if (cVar8 == '\0' ||
        SCARRY1(bVar24,(char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x97072bc)) != cVar8 < '\0'
       ) {
      puVar13 = (undefined *)0x1914c;
      goto code_r0x000100019219;
    }
code_r0x000100019239:
    lVar16 = CONCAT71((int7)((ulong)lVar16 >> 8),
                      ((byte)lVar16 | (byte)*(code *)(param_2 + -0xf)) + 8);
    *(code *)(lVar16 + (ulong)(uVar86 + 0xb9da7ef5)) =
         *(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar86 + 0xb9da7ef5));
    *(code *)(lVar16 + (ulong)(uVar86 + 0xb9da7ef4)) =
         *(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar86 + 0xb9da7ef4));
    *(code *)(lVar16 + (ulong)(uVar86 + 0xb9da7ef3)) =
         *(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar86 + 0xb9da7ef3));
                    /* WARNING: Could not recover jumptable at 0x00010001929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100019226 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)((uVar86 - 4 == uVar91 + 0xbed31fc2) + uVar28)]))
                   (uVar86 - 4,
                    (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                               [(int)((uVar86 - 4 == uVar91 + 0xbed31fc2) + uVar28)],
                    UNRECOVERED_JUMPTABLE,0x14b60f46);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001924d:
    lVar16 = CONCAT71(iVar20,bVar24 + 10 + bVar89);
    goto code_r0x000100019239;
  case (undefined **)0x100019259:
    lVar16 = CONCAT71(iVar20,(bVar24 | (byte)*(code *)(param_2 + -0xf)) + 8);
    goto code_r0x000100019239;
  case (undefined **)0x100019314:
    in(1);
    puVar63 = (uint *)((long)puVar42 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + -0x81);
    *puVar63 = *puVar63 << 7 | *puVar63 >> 0x19;
    uVar102 = (uint)(uVar28 < uVar85);
    if (uVar28 < 0x51892099 != uVar85 < 0x51892099) {
      uVar102 = (uint)CONCAT71(0x3165f9,uVar85 < 0x51892099);
    }
                    /* WARNING: Could not recover jumptable at 0x000100019368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000192f4 +
                   (int)(&switchD_100019e65::switchdataD_1006d1710)
                        [(int)((uVar102 & 0xff) + uVar91)]))
                   (ppuVar87,&DAT_1000192f4 +
                             (int)(&switchD_100019e65::switchdataD_1006d1710)
                                  [(int)((uVar102 & 0xff) + uVar91)]);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001932a:
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000198dc);
    *(uint *)UNRECOVERED_JUMPTABLE_19 =
         *(uint *)UNRECOVERED_JUMPTABLE_19 << 0x18 | *(uint *)UNRECOVERED_JUMPTABLE_19 >> 8;
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x9210daac) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x9210daac) & bVar23);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019443:
    uVar102 = (uVar34 ^ (uint)DAT_10088e7f8) * 0x79f54c43;
                    /* WARNING: Could not recover jumptable at 0x000100019486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)unaff_R14[(int)((byte)((byte)uVar102 ^
                                         (&DAT_1006d1a30)
                                         [(byte)(&DAT_1006d0b70)[uVar102 & 0xff] ^ 99]) - 0x32)])
                   ((uVar25 - 0x875328) - (uint)bVar89);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000194fa:
code_r0x0001000194a1:
    param_2 = (undefined **)((long)param_2 + (long)puVar98);
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar83 ^ 9);
    uVar92 = (ulong)*(byte *)(*(long *)((long)puVar98 + -0x18646b13513134f3) +
                             (ulong)((int)ppuVar87 + 0xa66ae930)) << 0x18;
    uVar102 = (int)ppuVar87 + 0xb;
    ppuVar87 = (undefined **)(ulong)uVar102;
    *(uint *)param_2 = uVar102;
    unaff_R12 = (undefined **)puVar98;
switchD_10001a75e_caseD_1952a:
    lVar16 = (long)*(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                           (long)(int)((uint)(unaff_R12 == UNRECOVERED_JUMPTABLE) +
                                      (int)UNRECOVERED_JUMPTABLE_18) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001954c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_100019526 + lVar16))
                   (ppuVar87,param_2,&LAB_100019526 + lVar16,lVar16,UNRECOVERED_JUMPTABLE_12,uVar92)
    ;
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001954f:
    puVar42[-0x1e] = uVar29;
    param_2 = (undefined **)0x18646b13513134f3;
    uVar102 = uVar101 ^ 10;
    DAT_48ffffff68a5894c = bVar24;
    *(undefined4 *)((long)puVar95 + 8) = 0x54796f16;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (&caseD_1954f_1 +
         *(int *)((long)unaff_R13 +
                 (ulong)(uVar101 + ((undefined **)puVar95 == (undefined **)0x0)) * 4));
    *(undefined **)(puVar42 + -0x4a) = unaff_R15[uVar101 | 4] + -1;
code_r0x0001000195a7:
    *(undefined ***)((long)puVar62 + -0xe8) = ppuVar87;
    *(undefined ***)((long)puVar62 + -0xb8) = ppuVar87;
    *(undefined ***)((long)puVar62 + -0xd0) = ppuVar87;
    *(undefined ***)((long)puVar62 + -0xd8) = ppuVar87;
    *(undefined ***)((long)puVar62 + -200) = ppuVar87;
    *(undefined ***)((long)puVar62 + -0xc0) = ppuVar87;
    *(undefined ***)((long)puVar62 + -0x50) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001000195d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)(ppuVar87,param_2,uVar102,0);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000195f1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001962b:
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + 99);
    bVar89 = CARRY1((byte)*UNRECOVERED_JUMPTABLE_19,bVar23);
    *UNRECOVERED_JUMPTABLE_19 = (code)((char)*UNRECOVERED_JUMPTABLE_19 + bVar23);
    puVar63 = *(uint **)(puVar42 + -2);
code_r0x000100019629:
    UNRECOVERED_JUMPTABLE_19 =
         (code *)((long)*(int *)((long)puVar95 +
                                (long)(int)((int)UNRECOVERED_JUMPTABLE_13 + (uint)bVar89) * 4) +
                 0x1000195fc);
    *(undefined ***)((long)puVar63 + -0xc0) = param_2;
    *(undefined ***)((long)puVar63 + -0xa0) = param_2;
    *(undefined ***)((long)puVar63 + -0xb8) = param_2;
    *(undefined ***)((long)puVar63 + -0xb0) = param_2;
    *(undefined ***)((long)puVar63 + -0xd0) = param_2;
    *(undefined8 *)((long)puVar63 + -0x48) = 0x7f31ac3dd4da00c4;
                    /* WARNING: Could not recover jumptable at 0x000100019676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE_19)
                   (ppuVar87,0x7f31ac3dd4da00c4,UNRECOVERED_JUMPTABLE_19,0,0x3165f9b3);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000196a4:
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019834:
code_r0x000100019838:
    uVar34 = uVar35 ^ 10;
    param_2 = (undefined **)&DAT_10001c439;
    uVar25 = (uint)UNRECOVERED_JUMPTABLE_18;
    bVar89 = uVar25 < 0x882ec917;
    uVar102 = uVar29;
code_r0x000100019855:
    uVar102 = uVar102 * 2 + 0x645ac81c;
    uVar102 = (uVar102 << ((char)uVar34 + 0x5fU & 0x1f) & 0xfbef3fec) + (uVar102 ^ 0x7df79ff6) +
              0xa372921;
    ppuVar94 = (undefined **)(ulong)(uVar25 < uVar102);
    if (bVar89 != uVar102 < 0x882ec917) {
      ppuVar94 = (undefined **)(ulong)(uVar102 < 0x882ec917);
    }
code_r0x0001000198a8:
                    /* WARNING: Could not recover jumptable at 0x0001000198b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)param_2 +
                   (long)*(int *)((long)puVar95 + (long)(int)(((uint)ppuVar94 & 0xff) + uVar101) * 4
                                 )))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001984f:
    bVar89 = CARRY1(bRam000000008830616c,(byte)cVar38);
    bRam000000008830616c = bRam000000008830616c + (char)cVar38;
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
    *(undefined ***)(puVar42 + -0x6c) = UNRECOVERED_JUMPTABLE_13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001999d:
    *(uint *)((long)UNRECOVERED_JUMPTABLE + 0x49) =
         *(int *)((long)UNRECOVERED_JUMPTABLE + 0x49) + uVar34;
    *(uint *)((code *)((ulong)UNRECOVERED_JUMPTABLE_13 & 0xffffffff) + 8) = uVar25;
    puVar42[-0x6c] = 0x199aa;
    puVar42[-0x6b] = 1;
    (*(code *)((ulong)UNRECOVERED_JUMPTABLE_13 & 0xffffffff))(puVar95);
    goto switchD_100017043_caseD_1;
  case (undefined **)0x1000199b8:
    puVar44 = puVar42 + -0x6a;
    puVar65 = puVar42 + -2;
    unaff_R15 = ppuVar94;
switchD_100017043_caseD_1:
    ppuVar94 = unaff_R15;
    if (*(long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                          (uint)PTR____stack_chk_guard_10082cb58) !=
        *(long *)((long)puVar65 + -0x30)) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)((long)puVar44 + -8) = &UNK_1000160b2;
      ___stack_chk_fail();
    }
code_r0x0001000199c1:
    return (undefined **)(ulong)((int)ppuVar94 + 0xce995683);
  case (undefined **)0x1000199c9:
    goto code_r0x0001000199c1;
  case (undefined **)0x1000199d6:
    goto code_r0x0001000199c1;
  case (undefined **)0x1000199f3:
    register0x00000020 = (BADSPACEBASE *)(puVar42 + -0x6a);
    unaff_RBP = puVar42 + -2;
    goto code_r0x0001000199dd;
  case (undefined **)0x100019a26:
    goto switchD_10001997c_caseD_19a26;
  case (undefined **)0x100019a4c:
    if (UNRECOVERED_JUMPTABLE_13 != (undefined **)0x0) {
      bVar84 = in((short)uVar29);
      *(byte *)ppuVar87 = bVar84;
                    /* WARNING: Could not recover jumptable at 0x000100019a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&UNK_100019a4f +
                     *(int *)((long)ppuVar90 +
                             (long)(int)((uVar34 - 0x9e | 0xa0) +
                                        (uint)((undefined **)puVar95 == (undefined **)0x0)) * 4)))
                     ((byte *)((long)ppuVar87 + (ulong)bVar110 * -2 + 1),param_2,
                      UNRECOVERED_JUMPTABLE,0);
      return UNRECOVERED_JUMPTABLE_18;
    }
    *(int *)((long)puVar42 + 0x41) = *(int *)((long)puVar42 + 0x41) + uVar9;
    *puVar42 = uVar25;
    goto code_r0x0001000199dd;
  case (undefined **)0x100019b27:
    UNRECOVERED_JUMPTABLE_19 = (code *)swi(1);
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*UNRECOVERED_JUMPTABLE_19)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019b87:
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar25 & 0xce53c22b);
    *(int *)((long)ppuVar87 + -0x4d) = *(int *)((long)ppuVar87 + -0x4d) + 1;
    unaff_R12 = (undefined **)0x6d0f23;
    UNRECOVERED_JUMPTABLE = (undefined **)*unaff_R14;
    param_2 = (undefined **)(ulong)(*(int *)(unaff_R14 + 1) + 0x6d0f23);
code_r0x000100019bab:
    uVar83 = (int)param_2 + 0xf4661287;
    ppuVar87 = (undefined **)(ulong)uVar83;
    uVar102 = (uint)unaff_R12;
    *(undefined ***)((long)puVar66 + -0x158) = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE_13 = (undefined **)&DAT_100015786;
    param_2 = (undefined **)(ulong)(uVar83 * 2);
    uVar92 = 0xe2846e74;
    uVar28 = uVar102 + 0xe2846e74;
switchD_10001a75e_caseD_1a4db:
    UNRECOVERED_JUMPTABLE_19 =
         (code *)((long)*(int *)((long)unaff_R13 +
                                (long)(int)(uVar102 +
                                           (UNRECOVERED_JUMPTABLE_18 < UNRECOVERED_JUMPTABLE)) * 4)
                 + 0x10001a4cf);
                    /* WARNING: Could not recover jumptable at 0x00010001a509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE_19)
                   ((((int)ppuVar87 + (int)uVar92) - (uVar28 - 3 & (uint)param_2)) + 0xebdc8ce,
                    (long)*(int *)((long)unaff_R13 +
                                  (long)(int)(uVar102 +
                                             (UNRECOVERED_JUMPTABLE_18 < UNRECOVERED_JUMPTABLE)) * 4
                                  ),UNRECOVERED_JUMPTABLE,UNRECOVERED_JUMPTABLE_13,
                    UNRECOVERED_JUMPTABLE_19);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019cdf:
                    /* WARNING: Could not recover jumptable at 0x000100019ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(ulong)(uVar29 + uVar85))
                   (*(undefined8 *)(puVar42 + -0x44),param_2,(code *)(ulong)(uVar29 + uVar85));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019d80:
    ppuVar94 = (undefined **)(ulong)(uVar28 + uVar86 * 2);
code_r0x000100019d8f:
    ppuVar94 = (undefined **)(ulong)((int)ppuVar94 + 0x940762b6);
code_r0x000100019d96:
    uVar102 = (uint)ppuVar94;
    bVar89 = uVar29 < uVar102;
    if (uVar102 < 0xfc7622d != true) {
      bVar89 = uVar102 < 0xfc7622d;
    }
                    /* WARNING: Could not recover jumptable at 0x000100019dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)param_2 +
                   (long)*(int *)((long)unaff_R13 + (long)(int)(bVar89 + uVar25) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019d8a:
    *(undefined8 *)((long)puVar42 + -0x7b) = *(undefined8 *)(puVar42 + -0x6a);
    uVar25 = (uint)CONCAT71(iVar20,bVar24 + 0x78 + bVar89);
    goto code_r0x000100019d8f;
  case (undefined **)0x100019d8e:
    if (bVar108) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar29 = uVar29 + 0x940762b6;
    goto code_r0x000100019d96;
  case (undefined **)0x100019ebb:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000199be) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000199be) + bVar23);
code_r0x000100019e96:
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_18 + 2) = 0;
    *(undefined ***)((long)puVar67 + -0x48) = UNRECOVERED_JUMPTABLE_18;
    *(undefined8 *)((long)puVar45 + -8) = 0x100019ea9;
    lVar16 = (*(code *)unaff_R12)(0x1000);
    **(long **)((long)puVar67 + -0x48) = lVar16;
                    /* WARNING: Could not recover jumptable at 0x000100019ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(switchD_100017043::caseD_0 + *(int *)((long)unaff_R13 + (ulong)((lVar16 == 0) + 2) * 4))
         )();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019f74:
    puVar46 = puVar42 + -0x6a;
    puVar68 = puVar42 + -2;
LAB_100019ee2:
    uVar12 = *(undefined8 *)((long)UNRECOVERED_JUMPTABLE_12 + -0x3cd24ee3f7b6c2e5);
    UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar68 + -0x70);
    *(undefined8 *)((long)puVar46 + -8) = 0x100019ef3;
    (*UNRECOVERED_JUMPTABLE_19)(uVar12);
    *(undefined8 *)((long)UNRECOVERED_JUMPTABLE_12 + -0x3cd24ee3f7b6c2e5) =
         *(undefined8 *)((long)puVar68 + -0x130);
    **(undefined4 **)((long)puVar68 + -0x180) = (int)*(undefined8 *)((long)puVar68 + -0xc0);
    uVar83 = *(uint *)unaff_R12;
    uVar102 = uVar102 - 0x67 | 0x68;
    *(undefined ***)((long)puVar68 + -0xa0) = UNRECOVERED_JUMPTABLE_12;
    lVar16 = *(long *)((long)UNRECOVERED_JUMPTABLE_12 + -0x3cd24ee3f7b6c2e5);
    lVar15 = (*(long *)((long)puVar68 + -0x1a0) -
             (*(long *)((long)puVar68 + -0x1a0) * 2 & 0x681f333462e1d3ccU)) + (ulong)uVar102 +
             -0x4bf06665ce8f1685;
    lVar30 = ((ulong)(uVar83 + 0xb5fe3479) * 2 & 0x13fbffd7a) +
             ((ulong)(uVar83 + 0xb5fe3479) ^ 0x2efa9f7d9fdffebd) + 0xd105608260200143;
    *(byte *)(lVar16 + lVar30) = (byte)((ulong)lVar15 >> 0x38) ^ 0xb4;
    *(byte *)(lVar16 + 1 + lVar30) = (byte)((ulong)lVar15 >> 0x30) ^ 0xf;
    *(byte *)(lVar16 + 2 + lVar30) = (byte)((ulong)lVar15 >> 0x28) ^ 0x99;
    *(byte *)(lVar16 + 3 + lVar30) = (byte)((ulong)lVar15 >> 0x20) ^ 0x9a;
    *(byte *)(lVar16 + 4 + lVar30) = (byte)((ulong)lVar15 >> 0x18) ^ 0x31;
    *(byte *)(lVar16 + 5 + lVar30) = (byte)((ulong)lVar15 >> 0x10) ^ 0x70;
    *(byte *)(lVar16 + 6 + lVar30) = (byte)((ulong)lVar15 >> 8) ^ 0xe9;
    *(byte *)(lVar16 + 7 + lVar30) = (byte)lVar15 ^ 0xe6;
    *(undefined ***)((long)puVar68 + -0x78) = unaff_R12;
    *(uint *)unaff_R12 = *(uint *)unaff_R12 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010001a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)unaff_R13 + (long)(int)(uVar102 + 1) * 4) + 0x10001a00b))()
    ;
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019fbf:
    goto LAB_100019ee2;
  case (undefined **)0x10001a088:
    *(int *)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001995c) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001995c) + -1;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)0x3165f9b4)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001a13a:
    goto switchD_10001997c_caseD_1a13a;
  case (undefined **)0x10001a14f:
    uVar10 = *(undefined4 *)param_2;
    puVar42[-0x6c] = 0x1a154;
    puVar42[-0x6b] = 1;
    (**(code **)(puVar42 + -0x1e))(uVar10);
    *unaff_R14 = *(undefined **)(puVar42 + -0x4c);
    **(undefined4 **)(puVar42 + -0x60) = (int)*(undefined8 *)(puVar42 + -0x3c);
    piVar4 = *(int **)(puVar42 + -0x56);
    iVar33 = *piVar4;
    *(uint **)(puVar42 + -0x20) = &switchD_1000183ca::switchdataD_1006d0f70;
    uVar102 = uVar34 + 0x2c | 0x81;
    puVar13 = *unaff_R14;
    puVar13[iVar33 + 0xb5fe3479] = 0;
    puVar13[iVar33 + 0xb5fe347a] = 0;
    puVar13[iVar33 + 0xb5fe347b] = 0;
    puVar13[iVar33 + 0xb5fe347c] = 1;
    *(int **)(puVar42 + -0x56) = piVar4;
    *piVar4 = *piVar4 + (uVar102 ^ 0xb5);
                    /* WARNING: Could not recover jumptable at 0x00010001a1ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)unaff_R13 + (long)(int)(uVar102 + 1) * 4) + 0x10001a1cb))()
    ;
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001a2f0:
  case (undefined **)0x10001a2d1:
    uVar83 = uVar102 + 0xba46da9b;
    uVar25 = (uVar102 + 0x8a025b22 & 0x75fda4df) + 0x45b924aa;
    param_2 = (undefined **)(ulong)uVar25;
    ppuVar87 = (undefined **)&DAT_100016bc9;
    bVar89 = uVar85 + 0x45b93508 < 0x45b94508;
    if (uVar83 < uVar85 + 0x1000 != 0x45b94508 < uVar25) {
      bVar89 = 0x45b94508 < uVar25;
    }
    ppuVar94 = (undefined **)(long)*(int *)(&DAT_1006d13e0 + (long)(int)(bVar89 + uVar102) * 4);
    goto code_r0x00010001a377;
  case (undefined **)0x10001a370:
    goto switchD_10001a75e_caseD_1a370;
  case (undefined **)0x10001a404:
    *(code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x6b) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x6b) | bVar31);
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000199be) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000199be) + bVar23);
    uVar25 = (uint)CONCAT71(iVar20,bVar24) | 0x8b;
  case (undefined **)0x10001a3ea:
    puVar42[-0x6c] = 0x1a3f7;
    puVar42[-0x6b] = 1;
    lVar16 = (**(code **)(puVar42 + -0x22))(uVar101 + uVar25 + -0x6df300b8);
    UNRECOVERED_JUMPTABLE =
         (undefined **)
         (&DAT_10001a3c1 +
         (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)(uVar34 + (lVar16 == 0))]);
    puVar42[-0x48] = 0;
    puVar42[-0x47] = 0;
    puVar42[-0x32] = 0;
    puVar42[-0x31] = 0;
    puVar42[-0x2a] = 0;
    puVar42[-0x29] = 0;
    puVar42[-0x30] = 0;
    puVar42[-0x2f] = 0;
    puVar42[-0x2e] = 0;
    puVar42[-0x2d] = 0;
    puVar42[-0x36] = 0;
    puVar42[-0x35] = 0;
    puVar42[-0x14] = 0xd4da00c4;
    puVar42[-0x13] = 0x7f31ac3d;
code_r0x00010001a456:
                    /* WARNING: Could not recover jumptable at 0x00010001a458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001a4a6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001a503:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001a850:
switchD_10001a75e_caseD_1a835:
    uVar88 = (ulong)((int)uVar92 + (int)param_2 + 0xb9da7edf);
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + uVar88) =
         *(code *)((long)UNRECOVERED_JUMPTABLE + uVar88);
                    /* WARNING: Could not recover jumptable at 0x00010001a869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001a831 +
                   *(int *)((long)unaff_R15 +
                           (long)(int)((uint)(uVar93 + 1 == (int)puVar96) + (int)uVar92) * 4)))
                   (ppuVar87,(int)param_2 + -1);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001a8a7:
    UNRECOVERED_JUMPTABLE_18 = (undefined **)CONCAT71(iVar20,bVar89);
switchD_10001a75e_caseD_1a86b:
    out(0x7f,(char)UNRECOVERED_JUMPTABLE_18);
    uVar83 = (int)UNRECOVERED_JUMPTABLE_18 + 0x701f5920U & 0x8fe0a6eb;
    uVar25 = uVar29 + uVar83 + 0x1fa8ea52;
    uVar102 = uVar29 * 2 + 0x570d41d4;
    uVar102 = ((uVar83 - 0xa2 | 0x9e) ^ uVar102 ^ 0xddf95f89) + (uVar102 & 0xddf95f16) * 2 +
              0x9628eaed;
    bVar89 = uVar25 < uVar102;
    if (uVar25 < 0x74224a03 != uVar102 < 0x74224a03) {
      bVar89 = uVar102 < 0x74224a03;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001a90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&UNK_10001659d + *(int *)((long)unaff_R13 + (long)(int)(bVar89 + uVar83) * 4)))
                   ();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001a8d6:
    *(code *)((long)param_2 + 0x41d23145) =
         (code)((char)*(code *)((long)param_2 + 0x41d23145) - cVar8);
    goto switchD_10001a75e_caseD_1a86b;
  case (undefined **)0x10001a9a3:
                    /* WARNING: Could not recover jumptable at 0x00010001a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001a9a2 +
                   *(int *)((long)unaff_R13 + (long)(int)((uVar85 & 1) + uVar34) * 4)))
                   (ppuVar87,uVar34 + 0xb2303125,UNRECOVERED_JUMPTABLE,
                    &DAT_10001a9a2 +
                    *(int *)((long)unaff_R13 + (long)(int)((uVar85 & 1) + uVar34) * 4),unaff_R13);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ab9b:
    uVar102 = (uVar25 & 0xfffabeac) + (uVar91 ^ 0xfffd5f56) + 0xdb4d4f3c;
    bVar89 = uVar86 < uVar102;
    if (uVar102 < 0xdb4aae92 != true) {
      bVar89 = uVar102 < 0xdb4aae92;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001abf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar90 +
                   (long)*(int *)((long)unaff_R13 + (long)(int)(bVar89 + uVar29 + 0x8fac61e) * 4)))
                   ();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ad4d:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_18 + -0x7d) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_18 + -0x7d) + uVar85;
    *(uint *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000198de) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000198de) + uVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ae88:
    puVar42[-0x6c] = 0x1ae9a;
    puVar42[-0x6b] = 1;
    uVar102 = FUN_1006d0f6d();
    puVar96 = &switchD_100019e65::switchdataD_1006d1710;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar102 & 0xfefdbf77);
    uVar29 = (uVar35 ^ 0x4befd794) + (uVar102 ^ 0xfefdbf77);
switchD_10001a75e_caseD_1aeb5:
                    /* WARNING: Could not recover jumptable at 0x00010001aedb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001ae3e +
                   *(int *)((long)puVar96 +
                           (ulong)((uVar29 + (int)UNRECOVERED_JUMPTABLE_18 * 2 ==
                                   (uVar99 ^ 0x5aed973a)) + uVar34) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001aefa:
    puVar42[-0x6c] = 0x1af09;
    puVar42[-0x6b] = 1;
    lVar16 = (**(code **)(puVar42 + -0x22))((uVar86 ^ uVar34 ^ 0x804ce42a) + uVar29);
    UNRECOVERED_JUMPTABLE_13 = (undefined **)(long)(int)(uVar99 + (lVar16 == 0));
    puVar95 = &switchD_100019e65::switchdataD_1006d1710;
switchD_10001997c_caseD_1af1b:
    UNRECOVERED_JUMPTABLE =
         (undefined **)(long)*(int *)((long)puVar95 + (long)UNRECOVERED_JUMPTABLE_13 * 4);
code_r0x00010001af1f:
    *(undefined8 *)((long)puVar71 + -0x148) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001af3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(UNRECOVERED_JUMPTABLE + 0x200035dc))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001af1b:
    goto switchD_10001997c_caseD_1af1b;
  case (undefined **)0x10001b239:
switchD_10001a75e_caseD_1b212:
    *(undefined8 *)((ulong)*(uint *)((long)puVar73 + -0x98) - 8) = 0x10001b21e;
    lVar16 = (*(code *)unaff_R12)();
    iVar33 = *(int *)((long)ppuVar90 + (long)(int)(uVar102 + (lVar16 == 0)) * 4);
    *(undefined4 *)((long)puVar73 + -0x58) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x00010001b24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001b201 + iVar33))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001b3bc:
    UNRECOVERED_JUMPTABLE_13 = &PTR__bootstrap_look_up_10082e9f0;
    ppuVar87 = (undefined **)
               (ulong)*(uint *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar35 ^ 0xf7053a95)] + -3
                               );
    param_2 = *(undefined ***)(puVar42 + -0x42);
switchD_10001a75e_caseD_1b3dc:
    uVar10 = *(undefined4 *)((long)puVar74 + -0x7c);
    puVar13 = UNRECOVERED_JUMPTABLE_13[(int)(uVar34 + 0x8fac585)];
    *(undefined8 *)((long)puVar50 + -8) = 0x10001b3f4;
    (*(code *)(puVar13 + -2))(ppuVar87,param_2,uVar10);
    iVar33 = *(int *)((long)unaff_R13 +
                     (long)(int)(uVar34 + 0x8fac58a +
                                (uint)(*(uint *)((long)puVar74 + -0x58) == (uVar83 ^ 0x3166a951))) *
                     4);
    *(undefined ***)((long)puVar74 + -0x50) = ppuVar94;
                    /* WARNING: Could not recover jumptable at 0x00010001b42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001b3a6 + iVar33))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001b52c:
    goto switchD_10001997c_caseD_1b52c;
  case (undefined **)0x10001b957:
    uVar102 = *(int *)((long)puVar95 + 0xc) + 0x3e7352de;
    uVar83 = (uVar29 | 0x94) + *(int *)((long)puVar95 + 8) + 0x33fbbe8d;
    bVar89 = uVar102 < 0x88751e61;
    if (uVar83 < uVar34 + 0x88751da0 == uVar102 < 0x88751e61) {
      bVar89 = uVar83 < uVar102;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001b9be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&caseD_1b944_1 + *(int *)((long)unaff_R13 + (long)(int)(bVar89 + uVar34) * 4)))
                   (&caseD_1b944_1 + *(int *)((long)unaff_R13 + (long)(int)(bVar89 + uVar34) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ba88:
    goto switchD_10001997c_caseD_1ba88;
  case (undefined **)0x10001babb:
    iVar33 = *(int *)(ppuVar90 + 1);
    puVar13 = *ppuVar90;
    *(undefined ***)(*(long *)(puVar42 + -2) + -0x130) = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         switchD_100020322::caseD_1b465
                   (UNRECOVERED_JUMPTABLE_18,uVar102 + iVar33,puVar13,&DAT_10001bae2);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001bb37:
    goto switchD_10001997c_caseD_1bb37;
  case (undefined **)0x10001bbc5:
    *(undefined ***)(puVar42 + -0x6c) = UNRECOVERED_JUMPTABLE_13;
    uVar102 = uVar9 + *(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 100);
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) =
         (code)(((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) - bVar23) -
               (CARRY4(uVar9,*(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 100)) ||
               CARRY4(uVar102,(uint)bVar89)));
    *(ulong *)((ulong)(uVar102 + bVar89) - 0x50) = (ulong)(uint)(int)(short)uVar25;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_100015e19();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001bc2e:
                    /* WARNING: Could not recover jumptable at 0x00010001bc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar25 | 0xffffffe9)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001bcf5:
    return (undefined **)
           CONCAT71(iVar20,bVar24 ^ (&DAT_1006cff50)
                                    [bVar84 ^ (byte)*(code *)(UNRECOVERED_JUMPTABLE_18 + 0xda560)]);
  case (undefined **)0x10001bd4a:
    lVar15 = *(long *)(puVar42 + -2);
    lVar16 = *(long *)((long)unaff_R13 + (long)UNRECOVERED_JUMPTABLE_13 * 8);
    puVar42[-2] = 0x1bd5c;
    puVar42[-1] = 1;
    (*(code *)UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE_18,lVar16 + -2);
    lVar16 = *(long *)((long)unaff_R13 + 0x36878a0);
    puVar42[-2] = 0x1bd71;
    puVar42[-1] = 1;
    (*(code *)(lVar16 + -1))(UNRECOVERED_JUMPTABLE_18);
    lVar16 = *(long *)((long)unaff_R13 + 0x36878a8);
    *(undefined ***)(lVar15 + -0x88) = UNRECOVERED_JUMPTABLE_18;
    uVar12 = *(undefined8 *)(lVar15 + -0x110);
    *(code **)(lVar15 + -0x90) = (code *)(lVar16 + -2);
    puVar42[-2] = 0x1bd9b;
    puVar42[-1] = 1;
    uVar12 = (*(code *)(lVar16 + -2))(UNRECOVERED_JUMPTABLE_18,uVar12);
    UNRECOVERED_JUMPTABLE_19 = *(code **)((long)unaff_R13 + 0x3687938);
    puVar42[-2] = 0x1bdb0;
    puVar42[-1] = 1;
    lVar16 = (*UNRECOVERED_JUMPTABLE_19)(uVar12);
    UNRECOVERED_JUMPTABLE_13 = (undefined **)0x0;
    bVar104 = lVar16 == *(long *)((long)unaff_R13 + 0x3687818) + -0xe;
  case (undefined **)0x10001bdc6:
                    /* WARNING: Could not recover jumptable at 0x00010001bdea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001bd0e +
                   *(int *)(&DAT_1006d13e0 +
                           (long)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_13 >> 8),bVar104
                                               ) + 0x6d0f70) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001bdeb:
    if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return (undefined **)
           (ulong)(bVar84 ^ (&DAT_1006cff50)[(byte)(&DAT_1006d2b00)[(ulong)ppuVar87 & 0xff] ^ 0x5e])
    ;
  case (undefined **)0x10001bf46:
    puVar13 = (undefined *)(ulong)uVar25;
code_r0x00010001bf35:
    iVar33 = *(int *)((long)puVar95 + 0xc);
    UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar77 + -0x58);
    *(undefined8 *)((long)puVar52 + -8) = 0x10001bf4f;
    uVar102 = (*UNRECOVERED_JUMPTABLE_19)
                        (ppuVar87,puVar13,iVar33 + -0x4a01cb87,
                         (undefined8 *)((long)puVar77 + -0x100),
                         (undefined1 *)((long)puVar77 + -0x7c));
    uVar83 = (uint)unaff_R13;
    UNRECOVERED_JUMPTABLE =
         (undefined **)
         (long)*(int *)((long)ppuVar90 +
                       (long)(int)(uVar83 + 0x8fac5aa +
                                  (uint)((int)((uVar83 ^ uVar102 ^ 0x9deaed48) +
                                               (uVar102 & 0xeaefd7d6) * 2 + -0x20024080) <
                                        (int)((uVar83 + 0x8fac5a6 | 2) ^ 0x5aed971f))) * 4);
code_r0x00010001bf97:
                    /* WARNING: Could not recover jumptable at 0x00010001bfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE + 0x100019a91))
                   (ppuVar90,(code *)((long)UNRECOVERED_JUMPTABLE + 0x100019a91));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001c09a:
    param_2 = (undefined **)
              (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                         [(int)(uVar101 + 0x78ad9f11 + (uint)((int)uVar25 < (int)(uVar91 ^ uVar85)))
                         ];
    lVar16 = 0x100018af4;
code_r0x00010001c0ba:
                    /* WARNING: Could not recover jumptable at 0x00010001c0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(*(code *)((long)param_2 + lVar16))((code *)((long)param_2 + lVar16));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001c17d:
    *(uint *)(ppuVar87 + 9) = *(uint *)(ppuVar87 + 9) ^ uVar86;
    *(undefined ***)(puVar42 + -0x14) = UNRECOVERED_JUMPTABLE_13;
                    /* WARNING: Could not recover jumptable at 0x00010001c186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)UNRECOVERED_JUMPTABLE_18)(ppuVar87,(ulong)UNRECOVERED_JUMPTABLE_13 & 0xffffffff);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001c3d4:
    goto switchD_10001997c_caseD_1c3d4;
  case (undefined **)0x10001ca03:
    iVar33 = *(int *)((long)puVar95 +
                     (long)(int)((uVar101 - 0x8b82cc) + (uint)(*(long *)(puVar42 + -0x38) == 0)) * 4
                     );
    *(undefined8 *)(puVar42 + -0x20) = *(undefined8 *)(puVar42 + -0x2c);
    *(undefined ***)(puVar42 + -0x28) = UNRECOVERED_JUMPTABLE_12;
                    /* WARNING: Could not recover jumptable at 0x00010001ca46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)((long)iVar33 + 0x10001ca03))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001cadc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001cb65:
    *(undefined ***)(puVar42 + -0x4a) = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         switchD_100020322::caseD_1b465
                   (UNRECOVERED_JUMPTABLE_18,uVar102 + 0xc9efc418,UNRECOVERED_JUMPTABLE,
                    &DAT_100018890);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001cbf8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ce1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d0da:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001995a) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001995a) ^ uVar25;
    if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0) {
      return UNRECOVERED_JUMPTABLE_18;
    }
    uVar25 = in(0xa2);
    uVar83 = uVar34 * 2 + 0x80a88ee0;
    uVar102 = (uVar83 << ((char)uVar102 + 0x2eU & 0x1f) & 0x7f577ba4) + (uVar83 ^ 0xbfabbdd2) +
              0xdb5e2ca8;
    puVar95 = (uint *)(ulong)(uVar91 < uVar102);
    if (uVar91 < 0x9b09ea7a != uVar102 < 0x9b09ea7a) {
      puVar95 = (uint *)(ulong)(uVar102 < 0x9b09ea7a);
    }
switchD_100020322_caseD_1dd6b:
                    /* WARNING: Could not recover jumptable at 0x00010001dd81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar87 +
                   (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                              [(int)(((uint)puVar95 & 0xff) + uVar25 + -0x2e3fe402)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001d76b:
                    /* WARNING: Could not recover jumptable at 0x00010001d786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001d73e + *(int *)((long)puVar95 + (long)(int)(uVar101 + bVar89) * 4)))
                   (&DAT_10001d73e + *(int *)((long)puVar95 + (long)(int)(uVar101 + bVar89) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001d830:
    if (bVar108) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d848:
    uVar7 = in(0x45);
                    /* WARNING: Could not recover jumptable at 0x00010001d85d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_10001d7f2_1 +
                   *(uint *)((long)UNRECOVERED_JUMPTABLE +
                            (ulong)(uint)(*(int *)CONCAT71(iVar20,uVar7) * 0x48) * 4)))
                   (UNRECOVERED_JUMPTABLE,param_2,UNRECOVERED_JUMPTABLE,
                    &LAB_10001d7f2_1 +
                    *(uint *)((long)UNRECOVERED_JUMPTABLE +
                             (ulong)(uint)(*(int *)CONCAT71(iVar20,uVar7) * 0x48) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001d8a2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d97d:
    *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar24;
    *(char *)UNRECOVERED_JUMPTABLE_13 = (char)*(code *)UNRECOVERED_JUMPTABLE_13 + (char)cVar38;
    puVar78 = puVar42 + -2;
switchD_10001a75e_caseD_1d93b:
    *(undefined ***)((long)puVar78 + -0x48) = ppuVar87;
    uVar102 = ((int)UNRECOVERED_JUMPTABLE_18 + 0xfa925bfdU & 0x56da3ff) - 0xcb | 0xd3;
    uVar83 = (int)UNRECOVERED_JUMPTABLE_13 + 0x5ac3245d;
    uVar25 = (int)UNRECOVERED_JUMPTABLE_13 * 2 + 0x8691a69e;
    uVar25 = (uVar25 * 2 & ((uVar102 - 0x6f | 0x68) ^ 0xfdff7b04)) + (uVar25 ^ 0xfeffbdff) +
             0x987a930b;
    bVar89 = uVar83 < uVar25;
    if (uVar83 < uVar102 + 0x977a500b != uVar25 < 0x977a510a) {
      bVar89 = uVar25 < 0x977a510a;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001d9eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001d354 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar89 + uVar102)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001d9b2:
    goto switchD_10001a75e_caseD_1d93b;
  case (undefined **)0x10001da0d:
    *(undefined ***)(puVar42 + -0x6c) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001da82:
    *(undefined ***)(puVar42 + -0x6c) = UNRECOVERED_JUMPTABLE_13;
    uVar25 = uVar25 + 0x9f520035;
    bVar89 = uVar25 < 0xc09b3bad;
    if ((int)*(undefined8 *)(puVar42 + -0x14) + 0x443ed2b2U < (uVar93 | 7) + 0xc09b3b66 ==
        uVar25 < 0xc09b3bad) {
      bVar89 = (int)*(undefined8 *)(puVar42 + -0x14) + 0x443ed2b2U < uVar25;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001daf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001da80 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar89 + uVar85)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001dc19:
    out(0xff,bVar24);
    if (UNRECOVERED_JUMPTABLE_13 != (undefined **)0x1) {
      bVar104 = uVar29 < uVar28 + 0xb2b15a47;
      bVar89 = uVar93 < uVar29;
      if (uVar93 < 0xb2b15a9d != bVar104) {
        bVar89 = bVar104;
      }
                    /* WARNING: Could not recover jumptable at 0x00010001dc1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001db6c +
                     (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                          [(int)((uint)bVar89 + (int)puVar95)]))
                     (*(undefined8 *)(puVar42 + -0x1e),
                      &DAT_10001db6c +
                      (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                           [(int)((uint)bVar89 + (int)puVar95)],
                      (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                 [(int)((uint)bVar89 + (int)puVar95)],unaff_R15);
      return UNRECOVERED_JUMPTABLE_18;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001dc3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)UNRECOVERED_JUMPTABLE +
                                  (long)(int)(uVar101 + 0x4815049c +
                                             (uint)(unaff_R15[8] == (undefined *)0x0)) * 4) +
                   0x10001dc1f))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001dcc3:
    *(int *)((code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x100019951) + (long)ppuVar87) = (int)in_ST0;
                    /* WARNING: Could not recover jumptable at 0x00010001dceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001dc44 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)(CONCAT31((int3)((ulong)ppuVar36 >> 8),bVar104) + uVar93)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001dd79:
    goto switchD_100020322_caseD_1dd6b;
  case (undefined **)0x10001e2eb:
    goto switchD_10001997c_caseD_1e2eb;
  case (undefined **)0x10001e33c:
    uVar102 = (uint)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_13 >> 8),
                             bVar23 | *(byte *)((long)puVar42 + -0x3e76f0c5));
    goto code_r0x00010001e342;
  case (undefined **)0x10001e3e2:
    vpsubusw_avx(in_XMM14,*(undefined1 (*) [16])
                           ((ulong)((uVar25 + 0xfeb65c06) - (uint)bVar89) - 0x45));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001e541:
    if ((POPCOUNT((ulong)UNRECOVERED_JUMPTABLE_13 & 0xff) & 1U) != 0) {
      *(uint *)UNRECOVERED_JUMPTABLE_18 = *(int *)UNRECOVERED_JUMPTABLE_18 + uVar25;
      *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar24;
    }
    puVar42[-0x18] = puVar42[-0x2c] + 0xce995683;
    *(undefined8 *)(puVar42 + -0x20) = *(undefined8 *)(puVar42 + -0x50);
    *(ulong *)(puVar42 + -0x14) = (ulong)(puVar42[-0x27] + 0xce995683);
    UNRECOVERED_JUMPTABLE_19 =
         (code *)((long)*(int *)((long)puVar95 +
                                (long)(int)((uVar101 + 0xdc871091 & 0x2378ef76) +
                                           (uint)(UNRECOVERED_JUMPTABLE_18 <
                                                 &switchD_1000183ca::switchdataD_1006d0f70)) * 4) +
                 0x100024370);
                    /* WARNING: Could not recover jumptable at 0x000100024383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE_19)
                   (0xebe9dd97f1423742,0x100024370,&UNK_10001ddff,UNRECOVERED_JUMPTABLE_19,
                    0x1e2846e84);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001e609:
    if ((char)ppuVar94 == '\0') {
      bVar84 = uVar28 < uVar91;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001e634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)unaff_R13 +
                   (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar84 + uVar85)]))
                   ((code *)((long)unaff_R13 +
                            (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                       [(int)(bVar84 + uVar85)]));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001e679:
    *(uint **)(puVar42 + -0x6c) = puVar42 + -2;
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0xb849a35f) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0xb849a35f) | 0x8e);
    puVar54 = puVar42 + -0x6e;
    *(undefined ***)(puVar42 + -0x6e) = UNRECOVERED_JUMPTABLE_13;
    puVar42[-0x70] = 0x3165f9b4;
    puVar42[-0x6f] = 0;
    UNRECOVERED_JUMPTABLE_12 = *(undefined ***)(puVar42 + -0x70);
    uVar25 = uVar25 + 0xfb385c06;
    cVar8 = (char)uVar25 + *(char *)((ulong)uVar25 - 0x389ba5fc);
    ppuVar90 = (undefined **)(ulong)CONCAT31((int3)(uVar25 >> 8),cVar8);
    if (SCARRY1((char)uVar25,*(char *)((ulong)uVar25 - 0x389ba5fc)) != cVar8 < '\0') {
      *(ushort *)((long)UNRECOVERED_JUMPTABLE_18 + 0x100019917) =
           *(ushort *)((long)UNRECOVERED_JUMPTABLE_18 + 0x100019917) ^ (ushort)uVar28;
      return (undefined **)(ulong)uVar28;
    }
    puVar80 = (uint *)(ulong)(uVar9 | (uint)(puVar42 + -0x6e));
    in(0xfd);
    *(char *)UNRECOVERED_JUMPTABLE = -(char)*(code *)UNRECOVERED_JUMPTABLE;
    uVar103 = uVar102 - 7;
    *(undefined ***)((long)puVar80 + -0xe0) = UNRECOVERED_JUMPTABLE_12;
    uVar101 = uVar102 - 0x1b;
    UNRECOVERED_JUMPTABLE_13 = &PTR__bootstrap_look_up_10082e9f0;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar103 ^ 0x8a)];
switchD_10001997c_caseD_1e2eb:
    uVar10 = *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_18 + -3);
    uVar12 = *(undefined8 *)((long)puVar80 + -0xf8);
    uVar3 = *(undefined4 *)((long)puVar80 + -100);
    puVar13 = UNRECOVERED_JUMPTABLE_13[(int)(uVar103 - 0x66)];
    *(undefined8 *)((long)puVar54 + -8) = 0x10001e309;
    (*(code *)(puVar13 + -2))(uVar10,uVar12,uVar3,UNRECOVERED_JUMPTABLE_13,ppuVar90);
    puVar95 = &switchD_10001f9d9::switchdataD_1006d2190;
    uVar101 = uVar101 - 0x4d | 0x10;
    if (uVar99 != uVar101 + 0x3166a945) {
      UNRECOVERED_JUMPTABLE_12 = (undefined **)0x6c76618fb7247bc0;
    }
    *(undefined ***)((long)puVar80 + -0xa0) = UNRECOVERED_JUMPTABLE_12;
    uVar102 = (uVar101 ^ 10) + 0xf;
code_r0x00010001e342:
                    /* WARNING: Could not recover jumptable at 0x00010001e364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_10001eaf5 +
                   *(int *)((long)puVar95 +
                           (long)(int)((uVar99 == (uVar102 ^ 0x3166a93c)) + uVar101) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001e9ab:
    if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x1) {
      puVar37 = (undefined *)0x7d8b4822;
code_r0x00010001e9af:
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (&switchD_10001d28e::caseD_1 +
           *(int *)(puVar37 +
                   (long)(int)((int)*(undefined8 *)((long)puVar81 + -0xf8) + -0x2e3fe4a8 +
                              (uint)(*(long *)((long)puVar81 + -0x58) == 0)) * 4));
      *(undefined8 *)((long)puVar81 + -0x98) = *(undefined8 *)((long)puVar81 + -0xb8);
      *(undefined8 *)((long)puVar81 + -0xa8) = *(undefined8 *)((long)puVar81 + -0xd0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010001ea08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ea18:
    puVar13 = (&PTR__bootstrap_look_up_10082e9f0)[(int)uVar25];
    *(undefined ***)(puVar42 + -0x14) = ppuVar94;
    puVar42[-0x6c] = 0x1ea2f;
    puVar42[-0x6b] = 1;
    uVar18 = (*(code *)(puVar13 + -3))();
    uVar12 = *(undefined8 *)(*(long *)(puVar42 + -0x14) + -0x7ec08e5aeb2a8122);
    iVar33 = *(int *)(*(long *)(puVar42 + -0x14) + -0x7ec08e5aeb2a8116);
    puVar13 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar99 ^ 0x67)];
    puVar37 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar99 - 0x59)];
    *(undefined8 *)(puVar42 + -0x48) = uVar18;
    *(undefined **)(puVar42 + -0x20) = puVar37 + -3;
    puVar42[-0x6c] = 0x1ea8a;
    puVar42[-0x6b] = 1;
    (*(code *)(puVar13 + -3))(uVar18,puVar37 + -3,uVar12,iVar33 + -0x5269705a);
    puVar13 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar99 ^ 0x7d)];
    puVar37 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar99 ^ 0x68)];
    puVar42[-0x28] = 0;
    puVar42[-0x27] = 0;
    puVar42[-0x6c] = 0x1eaba;
    puVar42[-0x6b] = 1;
    lVar16 = (*(code *)(puVar13 + -2))(puVar37 + -1,0);
                    /* WARNING: Could not recover jumptable at 0x00010001eaf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001ea0d +
                   *(int *)(&DAT_1006d1e30 + (long)(int)(uVar99 + (lVar16 == 0)) * 4)))
                   (*(undefined8 *)(puVar42 + -0x18));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ebc6:
  case (undefined **)0x10001ebc9:
    puVar42[-0x6c] = 0x1ebcc;
    puVar42[-0x6b] = 1;
    (*(code *)&switchD_1000183ca::switchdataD_1006d0f70)();
    unaff_R15[6] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010001ec02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_100023f98 +
                   *(int *)((long)unaff_R14 +
                           (long)(int)(uVar34 + (unaff_R15[8] == (undefined *)0x0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ed2c:
    if (!bVar108) {
      *(undefined ***)(puVar42 + -0x2e) = ppuVar94;
      uVar102 = uVar28 + uVar86 * 2 + 0x764b767d;
      bVar89 = uVar25 < uVar102;
      if (uVar102 < 0xf64955a7 != true) {
        bVar89 = uVar102 < 0xf64955a7;
      }
      uVar92 = (ulong)((uint)bVar89 + uVar29 + 0xdddbfaf8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010001ed79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                   (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)uVar92]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001f10e:
    UNRECOVERED_JUMPTABLE_19 =
         (code *)((long)UNRECOVERED_JUMPTABLE_12 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 0x45);
    *(uint *)UNRECOVERED_JUMPTABLE_19 =
         *(uint *)UNRECOVERED_JUMPTABLE_19 >> (bVar23 & 0x1f) |
         *(uint *)UNRECOVERED_JUMPTABLE_19 << 0x20 - (bVar23 & 0x1f);
    *ppuVar90 = (undefined *)0x0;
    ppuVar90[1] = (undefined *)0x21493b807c5c68fb;
    puVar42[-0x6c] = 0x1f12f;
    puVar42[-0x6b] = 1;
    (*(code *)UNRECOVERED_JUMPTABLE_12)(ppuVar90);
    puVar96 = &switchD_10001f9d9::switchdataD_1006d2190;
    uVar12 = *(undefined8 *)(puVar42 + -0x18);
LAB_10001df31:
    lVar16 = *(long *)((long)puVar79 + -0x48);
    puVar98 = (uint *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar101 + 0x481504ae)];
    *(undefined8 *)((long)puVar53 + -8) = 0x10001df56;
    (*(code *)puVar98)(uVar12);
    uVar12 = *(undefined8 *)((long)puVar79 + -0x78);
    *(undefined8 *)((long)puVar53 + -8) = 0x10001df5d;
    (*(code *)puVar98)(uVar12);
    iVar33 = *(int *)((long)puVar96 + (long)(int)(uVar101 + 0x481504b4 + (uint)(lVar16 == 0)) * 4);
    pcVar17 = (char *)(long)iVar33;
    pcVar27 = pcVar17 + 0x10001df31;
    switch(pcVar27) {
    case "":
      *pcVar17 = *pcVar17 + (char)iVar33;
      *(undefined4 *)((long)puVar79 + -0x94) = 0x3166a97d;
      *(undefined ***)((long)puVar79 + -0x128) = ppuVar90;
      *(ulong *)((long)puVar79 + -0x130) = uVar92;
      uVar101 = 0x3165f9b4;
      switch(param_2 == (undefined **)0x0 ||
             (uVar92 == 0 || (ppuVar90 == (undefined **)0x0 || pcVar27 == (char *)0x0))) {
      case false:
        pcVar27[0] = '\0';
        pcVar27[1] = '\0';
        pcVar27[2] = '\0';
        pcVar27[3] = '\0';
        pcVar27[4] = '\0';
        pcVar27[5] = '\0';
        pcVar27[6] = '\0';
        pcVar27[7] = '\0';
        **(undefined4 **)((long)puVar79 + -0x128) = 0;
        **(undefined8 **)((long)puVar79 + -0x130) = 0;
        *(undefined4 *)param_2 = 0;
        lVar16 = *(long *)(PTR_DAT_10088e798_3_10082ea48 + -3);
        uVar102 = (&switchD_10001f9d9::switchdataD_1006d2190)[(lVar16 == 0) + 8];
        *(char **)((long)puVar79 + -0x160) = pcVar27;
                    /* WARNING: Could not recover jumptable at 0x000100025805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(switchD_10001f9d9::caseD_0 + (int)uVar102))
                       (lVar16,switchD_10001f9d9::caseD_0 + (int)uVar102);
        return UNRECOVERED_JUMPTABLE_18;
      case true:
        plVar19 = (long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                                   (uint)PTR____stack_chk_guard_10082cb58);
      }
code_r0x00010001f8e1:
      if (*plVar19 != *(long *)((long)puVar79 + -0x30)) {
                    /* WARNING: Subroutine does not return */
        *(code **)((long)puVar53 + -8) = switchD_100024103::caseD_1f059;
        ___stack_chk_fail();
      }
      return (undefined **)(ulong)(uVar101 + 0xce995683);
    }
switchD_10001df6e_caseD_1c526:
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(long)(int)(iVar33 + uVar101);
    unaff_R12 = (undefined **)puVar98;
switchD_10001a75e_caseD_1c52a:
                    /* WARNING: Could not recover jumptable at 0x00010001c538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)(int)*(uint *)((long)unaff_R12 + (long)UNRECOVERED_JUMPTABLE_18 * 4) +
                   0x10001c515))();
    return UNRECOVERED_JUMPTABLE_18;
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
    uVar92 = CONCAT71(iVar20,bVar24) & 0xffffffffffffffd2;
    if ((POPCOUNT((byte)uVar92 & 0x70) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0) {
      *(undefined4 *)ppuVar87 = *(undefined4 *)param_2;
      *in_GS_OFFSET = *in_GS_OFFSET ^ uVar91 + 4 + (uint)bVar110 * -8;
      *(undefined1 *)(uVar92 - 0x77) = *(undefined1 *)(uVar92 - 0x77);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined ***)(puVar42 + -0x6c) = param_2;
    *(undefined8 *)((byte *)((long)ppuVar87 + -0x1f7c3d4a) + (long)UNRECOVERED_JUMPTABLE_13) =
         *(undefined8 *)(puVar42 + -0x6c);
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + uVar92 + 0x10001993b);
    *(int *)UNRECOVERED_JUMPTABLE_19 = *(int *)UNRECOVERED_JUMPTABLE_19 + (int)uVar92;
                    /* WARNING: Could not recover jumptable at 0x00010001f34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)puVar95 + (long)(int)uVar92 * 4) + 0x10001f327))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001f50b:
    *(undefined ***)(puVar42 + -0x18) = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_19 = (code *)UNRECOVERED_JUMPTABLE_13[(int)uVar25];
    puVar42[-0x6c] = 0x1f51b;
    puVar42[-0x6b] = 1;
    uVar102 = (*UNRECOVERED_JUMPTABLE_19)(ppuVar87,*(undefined8 *)(puVar42 + -0x44));
                    /* WARNING: Could not recover jumptable at 0x00010001f569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001f4d3 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)(((uVar102 ^ 0x7b7ea97f) +
                                ((uVar83 ^ 0xf6fd5270) & uVar102 << (cVar6 + 0x97U & 0x1f)) ==
                               0x7b7ea97f) + uVar34)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001f6e9:
                    /* WARNING: Could not recover jumptable at 0x00010001f714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001f6c8 +
                   *(int *)((long)puVar95 +
                           (long)(int)((UNRECOVERED_JUMPTABLE_12 == (undefined **)0x583fea33108f2bd4
                                       ) + uVar25) * 4)))
                   (ppuVar87,&DAT_10001f6c8 +
                             *(int *)((long)puVar95 +
                                     (long)(int)((UNRECOVERED_JUMPTABLE_12 ==
                                                 (undefined **)0x583fea33108f2bd4) + uVar25) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001f818:
    if (bVar23 == 0) {
      uVar28 = uVar93;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001f83e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001f7b1 +
                   *(int *)((long)unaff_R13 + (long)(int)((uVar28 & 0xff) + uVar102) * 4)))
                   (&DAT_10001f7b1 +
                    *(int *)((long)unaff_R13 + (long)(int)((uVar28 & 0xff) + uVar102) * 4),
                    (undefined **)((long)puVar95 + 0x1006d0f70));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001f8db:
    plVar19 = (long *)(ulong)(uint)PTR____stack_chk_guard_10082cb58;
    puVar53 = puVar42 + -0x6a;
    puVar79 = puVar42 + -2;
    goto code_r0x00010001f8e1;
  case (undefined **)0x10001fa34:
    UNRECOVERED_JUMPTABLE = (undefined **)CONCAT71(iVar32,0xf9);
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) ^ uVar91;
    puVar82 = *(uint **)(puVar42 + -2);
    puVar55 = puVar42;
  case (undefined **)0x10001f9e6:
    UNRECOVERED_JUMPTABLE_19 = (code *)swi(0x50);
    uVar10 = (*UNRECOVERED_JUMPTABLE_19)(ppuVar87,param_2,UNRECOVERED_JUMPTABLE);
    *(undefined4 *)((long)puVar82 + -0x1c0) = uVar10;
    UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar82 + -0x108);
    *(undefined8 *)puVar55 = 0x10001fa05;
    lVar16 = (*UNRECOVERED_JUMPTABLE_19)((int)ppuVar87 + uVar101 + uVar99 + -0x68ffe600);
    *(long *)((long)puVar82 + -0x300) = lVar16;
    iVar33 = *(int *)(&DAT_1006d2600 + (long)(int)(uVar101 + (lVar16 == 0)) * 4);
    *(undefined4 *)((long)puVar82 + -0xe8) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x00010001fa3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001f9dd + iVar33))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001fabb:
    uVar102 = *(uint *)((long)param_2 +
                       (ulong)(uint)(*(int *)(ulong)CONCAT31((int3)((uint)*(undefined4 *)param_2 >>
                                                                   8),uRam358d489848fffffc) * 0x48)
                       * 4 + (ulong)bVar110 * -8 + 4);
    puVar42[-0x3c] = 0x3165f9a5;
                    /* WARNING: Could not recover jumptable at 0x00010001fae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001fa6d + uVar102))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001fb40:
    UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_1000253ca();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001fd07:
    uVar102 = uVar28 * 2 + 0x444c4bbc;
    uVar91 = uVar102 ^ uVar91;
    uVar102 = uVar102 & 0xfdfbfb2e;
    *(ulong *)(puVar42 + -0x2a) = (ulong)(uVar91 + uVar102 * 2 + 0x5fdddef4);
    uVar102 = uVar91 + uVar102 * 2 + 0x899b936c;
    bVar104 = uVar85 < uVar102;
    if ((bool)(char)ppuVar94 != uVar102 < 0x87978e9a) {
      bVar104 = uVar102 < 0x87978e9a;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001fd76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar87 +
                   (long)*(int *)(&DAT_1006d1e30 + (long)(int)(bVar104 + uVar25) * 4)))
                   (ppuVar87,param_2,CONCAT71(iVar32,!bVar89));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100020183:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000202ad:
    *(long *)(puVar42 + -0xc4) = *(long *)(puVar42 + -0x56);
    UNRECOVERED_JUMPTABLE_19 =
         (code *)((long)*(int *)((long)puVar95 +
                                (long)(int)((uint)(*(long *)(puVar42 + -0x56) == 0x3a5a9c416583c527)
                                           + (uVar91 | 0x4b)) * 4) + 0x1000202ad);
    puVar42[-0x3c] = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x0001000202fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE_19)(ppuVar87,uVar91 | 0x4b,0,UNRECOVERED_JUMPTABLE_19);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000204f9:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x73) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x73) | bVar23);
    uVar92 = (ulong)((long)unaff_R13 + 0x1e2846e75) & (ulong)UNRECOVERED_JUMPTABLE_13;
    *(ulong *)(puVar42 + -0x2a) = uVar92;
    *(ulong *)(puVar42 + -0x2e) = uVar92;
    *(ulong *)(puVar42 + -0x34) = uVar92;
    *(ulong *)(puVar42 + -0x3a) = uVar92;
    puVar42[-0x1a] = 0xaeb6ae7e;
    puVar42[-0x19] = 0x5c05e2a4;
    puVar42[-0x32] = 0xaeb6ae7e;
    puVar42[-0x31] = 0x5c05e2a4;
    puVar42[-0x38] = 0xaeb6ae7e;
    puVar42[-0x37] = 0x5c05e2a4;
    *(ulong *)(puVar42 + -0x4e) = CONCAT71(iVar20,bVar24) | 0x36;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         switchD_100020322::caseD_2214a
                   (0x5c05e2a4aeb6ae7e,(code *)((long)param_2 + (-0x141622680ebdc8be - uVar92)),
                    UNRECOVERED_JUMPTABLE,&DAT_10001f177);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000207d5:
    *(undefined ***)(puVar42 + -0x4a) = UNRECOVERED_JUMPTABLE_18;
    *(undefined ***)(puVar42 + -0x4e) = UNRECOVERED_JUMPTABLE_18;
                    /* WARNING: Could not recover jumptable at 0x0001000207eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE + (long)UNRECOVERED_JUMPTABLE_18))
                   (ppuVar87,param_2,
                    (code *)((long)UNRECOVERED_JUMPTABLE + (long)UNRECOVERED_JUMPTABLE_18),
                    0x3166043b);
    return UNRECOVERED_JUMPTABLE_18;
  }
  uVar92 = (ulong)((uVar102 ^ (uint)param_2 ^ 0x4df3bf4c) + ((uint)param_2 & 0xcdf3bff6) * 2 +
                  0x3c839cc2);
LAB_100018c65:
  uVar102 = (uint)uVar92;
  bVar89 = uVar25 < uVar102;
  if (SUB81(ppuVar90,0) != uVar102 < 0x8a775cb9) {
    bVar89 = uVar102 < 0x8a775cb9;
  }
                    /* WARNING: Could not recover jumptable at 0x000100018ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 =
       (undefined **)
       (*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                 (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                            [(int)((uVar29 - 0x8b824a) + (uint)bVar89)]))();
  return UNRECOVERED_JUMPTABLE_18;
}

