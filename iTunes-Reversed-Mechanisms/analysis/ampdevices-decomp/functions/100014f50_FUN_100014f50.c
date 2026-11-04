// name: FUN_100014f50
// address: 100014f50

/* WARNING: Instruction at (ram,0x000100019e46) overlaps instruction at (ram,0x000100019e45)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_100014f50(uint param_1)

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
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  int7 iVar23;
  undefined **UNRECOVERED_JUMPTABLE_18;
  long lVar18;
  undefined7 uVar24;
  long lVar19;
  char *pcVar20;
  undefined8 uVar21;
  long *plVar22;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  int iVar29;
  undefined **UNRECOVERED_JUMPTABLE_13;
  char *pcVar30;
  byte bVar34;
  uint extraout_EDX;
  uint uVar31;
  uint uVar32;
  long lVar33;
  undefined **UNRECOVERED_JUMPTABLE;
  code cVar41;
  int iVar36;
  uint uVar37;
  undefined **UNRECOVERED_JUMPTABLE_12;
  undefined *puVar40;
  uint *puVar42;
  uint *puVar43;
  uint *puVar44;
  uint *puVar45;
  uint *puVar46;
  uint *puVar47;
  uint *puVar48;
  uint *puVar49;
  uint *puVar50;
  uint *puVar51;
  uint *puVar52;
  uint *puVar53;
  undefined8 *puVar54;
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
  uint *puVar83;
  uint *puVar84;
  uint *puVar85;
  uint *puVar86;
  uint *puVar87;
  uint uVar88;
  undefined **ppuVar89;
  byte bVar90;
  uint uVar91;
  undefined **ppuVar93;
  ulong uVar94;
  bool bVar95;
  undefined **ppuVar96;
  code *UNRECOVERED_JUMPTABLE_19;
  uint uVar97;
  uint uVar98;
  undefined **ppuVar99;
  uint *puVar100;
  uint *puVar101;
  uint uVar102;
  undefined **ppuVar103;
  uint *puVar104;
  uint uVar105;
  int iVar106;
  uint uVar107;
  undefined **ppuVar108;
  uint uVar109;
  undefined **ppuVar110;
  uint *in_GS_OFFSET;
  bool bVar111;
  bool bVar112;
  bool bVar113;
  char in_AF;
  bool bVar114;
  bool bVar115;
  bool bVar116;
  byte bVar117;
  longdouble in_ST0;
  undefined1 in_XMM14 [16];
  undefined1 auVar118 [16];
  undefined8 auStack_1b0 [48];
  undefined6 uVar25;
  int7 iVar35;
  uint uVar38;
  undefined **ppuVar39;
  uint uVar92;
  
  bVar117 = 0;
  puVar61 = (uint *)&stack0xfffffffffffffff8;
  puVar42 = (uint *)(auStack_1b0 + 1);
  ppuVar108 = (undefined **)(ulong)param_1;
  UNRECOVERED_JUMPTABLE_18 =
       *(undefined ***)
        CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,(uint)PTR____stack_chk_guard_10082cb58);
switchD_10001997c_caseD_14f71:
  *(undefined ***)((long)puVar61 + -0x30) = UNRECOVERED_JUMPTABLE_18;
  uVar12 = (ulong)((long)puVar61 + -0x1a0) ^ _DAT_10088e778 ^ DAT_10088e7f8;
  _DAT_10088e778 = uVar12 * 0x79f54c43 + 0xd8ccc078b33194d;
  DAT_10088e7f8 = (uVar12 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
  uVar9 = ((uint)_DAT_10088e778 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
  ppuVar103 = &PTR__bootstrap_look_up_10082e9f0;
  ppuVar110 = (undefined **)
              (&PTR__bootstrap_look_up_10082e9f0)
              [(byte)((byte)uVar9 ^ (&DAT_1006d2c00)[(byte)(&DAT_1006d1c30)[uVar9 & 0xff] ^ 0xe]) +
               1];
  *(undefined8 *)((long)puVar42 + 0xfffffffffffffff8) = 0x100014ffa;
  puVar13 = (uint *)(*(code *)ppuVar110)(0x18);
  ppuVar89 = (undefined **)((long)puVar13 + 0x1ce67bd8e8191850);
  puVar49 = puVar42;
  puVar50 = puVar42;
  puVar71 = puVar61;
  puVar69 = puVar61;
  switch((code *)puVar13 == (code *)0x0) {
  case false:
code_r0x0001000199dd:
    *(undefined ***)((long)puVar71 + -0x88) = ppuVar89;
    UNRECOVERED_JUMPTABLE_12 = (undefined **)0x6;
    *(undefined8 *)puVar13 = 0;
    *(undefined8 *)((long)puVar13 + 8) = 0x6d011ee84dd29bf2;
    *(undefined4 *)((long)puVar13 + 0x10) = 0;
    *(undefined ***)((long)puVar71 + -0x80) = ppuVar110;
    *(undefined8 *)((long)puVar49 + -8) = 0x100019a1f;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)ppuVar110)(0x1000);
    puVar50 = puVar49;
    puVar69 = puVar71;
    puVar101 = &switchD_100019e65::switchdataD_1006d1710;
    ppuVar110 = (undefined **)0x12;
switchD_10001997c_caseD_19a26:
    *(undefined ***)puVar13 = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE = (undefined **)ppuVar103[(int)UNRECOVERED_JUMPTABLE_12 + 0x1a];
    puVar58 = puVar50;
    switch(switchD_10001503e::caseD_0 +
           *(int *)((long)puVar101 +
                   (ulong)((UNRECOVERED_JUMPTABLE_18 == (undefined **)0x0) + 6) * 4)) {
    case (code *)0x100019dcf:
switchD_100019a4b_caseD_19dcf:
      *(undefined ***)((long)puVar69 + -0x198) = ppuVar108;
      *(undefined ***)((long)puVar69 + -0x60) = UNRECOVERED_JUMPTABLE;
      iVar106 = (int)ppuVar110;
      uVar9 = iVar106 - 0x12;
      ppuVar110 = (undefined **)(ulong)uVar9;
      iVar106 = iVar106 + 0xa5;
      *(undefined4 *)((long)puVar13 + 8) = 0x4dd2abf2;
      iVar36 = *(int *)((long)puVar101 + (long)(int)(uVar9 + ((code *)puVar13 == (code *)0x0)) * 4);
      *(undefined **)((long)puVar69 + -0x110) = ppuVar103[(int)(uVar9 ^ 0xd)] + -1;
      iVar29 = 0;
      *(undefined ***)((long)puVar69 + -0xe8) = ppuVar89;
      *(undefined ***)((long)puVar69 + -0xc0) = ppuVar89;
      *(undefined ***)((long)puVar69 + -0xa0) = ppuVar89;
      *(undefined ***)((long)puVar69 + -0xb8) = ppuVar89;
      *(undefined ***)((long)puVar69 + -0xb0) = ppuVar89;
      *(undefined ***)((long)puVar69 + -0xd0) = ppuVar89;
      *(undefined8 *)((long)puVar69 + -0x48) = 0x7f31ac3dd4da00c4;
      *(uint **)((long)puVar69 + -0x90) = puVar13;
      switch((long)iVar36 + 0x100019dcf) {
      case 0x10001a6ec:
code_r0x00010001a6ec:
        uVar88 = (uint)ppuVar110;
        uVar9 = uVar88 ^ 2;
        ppuVar110 = (undefined **)(ulong)uVar9;
        UNRECOVERED_JUMPTABLE_12 = ppuVar110;
        break;
      case 0x10001b330:
switchD_100019e65_caseD_1b330:
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(long)(iVar29 + iVar106);
switchD_10001a75e_caseD_1b34c:
                    /* WARNING: Could not recover jumptable at 0x00010001b35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)*(int *)((long)puVar101 + (long)UNRECOVERED_JUMPTABLE_18 * 4) +
                       0x10001b330))();
        return UNRECOVERED_JUMPTABLE_18;
      }
switchD_10001a75e_caseD_1a6f3:
      ppuVar39 = UNRECOVERED_JUMPTABLE_12;
      uVar38 = (uint)ppuVar39;
      uVar37 = uVar38 ^ 8;
      UNRECOVERED_JUMPTABLE_12 = (undefined **)(ulong)uVar37;
      uVar28 = uVar9 + 2;
      UNRECOVERED_JUMPTABLE_13 = (undefined **)(ulong)uVar28;
      ppuVar99 = (undefined **)((long)puVar13 + 0xc);
      uVar107 = *(uint *)((long)puVar13 + 8);
      ppuVar108 = (undefined **)(ulong)uVar107;
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)*(uint *)((long)puVar13 + 0xc);
      uVar31 = uVar37 + *(uint *)((long)puVar13 + 0xc) + 0x16f1d983;
      UNRECOVERED_JUMPTABLE = (undefined **)(ulong)uVar31;
      ppuVar89 = (undefined **)(ulong)(uVar107 + 0x36205c7f);
      bVar111 = uVar31 < 0x83f2f871;
      ppuVar93 = (undefined **)(ulong)bVar111;
      uVar5 = (uint3)((uVar28 ^ 0x83f2f875) >> 8);
      bVar95 = uVar107 + 0x36205c7f < (uVar28 ^ 0x83f2f875) != bVar111;
      uVar31 = CONCAT31(uVar5,bVar95);
      ppuVar96 = (undefined **)(ulong)uVar31;
code_r0x00010001a736:
      puVar16 = PTR__xpc_release_10082eb00;
      uVar12 = (ulong)((uint)ppuVar89 < (uint)UNRECOVERED_JUMPTABLE);
      uVar109 = (uint)bVar111;
      if (bVar95) {
        uVar12 = (ulong)uVar109;
      }
code_r0x00010001a746:
      bVar115 = SUB81(uVar12,0);
      uVar91 = (uint)uVar12;
      uVar32 = *(uint *)((long)puVar101 + (long)(int)(uVar91 + uVar9) * 4);
      UNRECOVERED_JUMPTABLE = (undefined **)(long)(int)uVar32;
      bVar112 = (undefined **)0xfffffffefffe5913 < UNRECOVERED_JUMPTABLE;
      ppuVar89 = (undefined **)((long)UNRECOVERED_JUMPTABLE + 0x10001a6ec);
      bVar116 = (long)ppuVar89 < 0;
      bVar114 = ppuVar89 == (undefined **)0x0;
      bVar113 = (POPCOUNT((ulong)ppuVar89 & 0xff) & 1U) == 0;
      bVar90 = (byte)UNRECOVERED_JUMPTABLE_18;
      uVar10 = (uint)UNRECOVERED_JUMPTABLE_18;
      uVar24 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_18 >> 8);
      uVar25 = (undefined6)((ulong)UNRECOVERED_JUMPTABLE_18 >> 0x10);
      cVar8 = (char)uVar32;
      bVar34 = (byte)(uVar32 >> 8);
      bVar27 = (byte)uVar28;
      cVar41 = SUB81((ulong)ppuVar39 >> 8,0);
      uVar105 = (uint)puVar13;
      uVar92 = (uint)ppuVar89;
      uVar102 = (uint)ppuVar103;
      iVar35 = (int7)(int3)(uVar32 >> 8);
      uVar97 = (uint)puVar69;
      uVar98 = (uint)ppuVar99;
      iVar36 = (int)puVar101;
      puVar100 = (uint *)UNRECOVERED_JUMPTABLE_18;
      puVar45 = puVar58;
      puVar46 = puVar58;
      puVar55 = puVar58;
      puVar53 = puVar58;
      puVar42 = puVar69;
      puVar76 = puVar69;
      puVar79 = puVar69;
      puVar65 = puVar69;
      puVar64 = puVar69;
      puVar78 = puVar69;
      puVar83 = puVar69;
      puVar67 = puVar69;
      puVar81 = puVar69;
      puVar57 = puVar58;
      puVar74 = puVar69;
      puVar82 = puVar69;
      puVar73 = puVar69;
      puVar104 = (uint *)ppuVar103;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(ppuVar89) {
      case (undefined **)0x100013ad7:
        out(0xd9,bVar90);
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (long)UNRECOVERED_JUMPTABLE) = (code)0x9;
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar10 + 0xafd9e784)) = (code)0x6f;
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar10 + 0xafd9e785)) = (code)0xe6;
        *(undefined ***)((long)puVar69 + -0x158) = ppuVar89;
        *(int *)ppuVar89 = *(int *)ppuVar89 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100013b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)[(int)(uVar9 + 1)] +
                       0x100013b10))
                       (*(undefined8 *)((long)puVar69 + -0x58),ppuVar89,(ulong)(uVar10 + 0xafd9e784)
                        ,(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                             [(int)(uVar9 + 1)] + 0x100013b10));
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
                       *(int *)((long)puVar13 + (long)(int)(uVar107 + bVar112) * 4)))
                       (ppuVar93,ppuVar89,
                        &DAT_100015351 +
                        *(int *)((long)puVar13 + (long)(int)(uVar107 + bVar112) * 4));
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100015655:
        *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar90;
        *(char *)((long)puVar69 + -0x67b73ebd) = *(char *)((long)puVar69 + -0x67b73ebd) + bVar27;
        uVar11 = *(undefined4 *)
                  ((&PTR__bootstrap_look_up_10082e9f0)[(long)UNRECOVERED_JUMPTABLE_18] + -2);
        puVar16 = *ppuVar96;
        iVar36 = *(int *)((long)ppuVar96 + 0xc);
        puVar40 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar37 - 0x4e)];
        *(undefined8 *)((long)puVar58 + -8) = 0x100015693;
        uVar9 = (*(code *)(puVar40 + -3))
                          (uVar11,puVar16,iVar36 + -0x72613787,(undefined8 *)((long)puVar69 + -0xf8)
                           ,(undefined1 *)((long)puVar69 + -0x7c));
                    /* WARNING: Could not recover jumptable at 0x0001000156c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_100015634 +
                       (int)*(uint *)((long)ppuVar103 +
                                     (long)(int)(((uVar9 ^ 0xcaefb7f7) + (uVar9 & 0xcaefb7f7) * 2 +
                                                  0x7ffddf5f == uVar107 + 0xd39b3612) + uVar37) * 4)
                       ))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100015c27:
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100016579:
        *(undefined8 *)((long)puVar58 + -8) = 0x10001657f;
        func_0x000139d3972c(ppuVar93,UNRECOVERED_JUMPTABLE + (0x200034de - (ulong)bVar117));
        unaff_00084f00 = '\x02';
        puVar43 = (uint *)((long)puVar58 + -8);
        unaff_0008ae00 = (undefined8 *)((long)puVar58 + -8);
        puVar14 = (undefined8 *)((long)puVar58 + -8);
        *(uint **)((long)puVar58 + -8) = puVar69;
        cVar8 = '\x01';
        do {
          puVar69 = (uint *)((long)puVar69 + -8);
          puVar14 = puVar14 + -1;
          *puVar14 = *(undefined8 *)puVar69;
          cVar8 = cVar8 + -1;
          ppuVar96 = UNRECOVERED_JUMPTABLE_12;
          uVar9 = extraout_EDX;
        } while ('\0' < cVar8);
        goto code_r0x00010001657f;
      case (undefined **)0x10001658c:
        uVar12 = (ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_18 + -0x73);
        ppuVar96 = UNRECOVERED_JUMPTABLE_12;
        goto code_r0x000100016594;
      case (undefined **)0x1000165d2:
                    /* WARNING: Could not recover jumptable at 0x0001000165e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)ppuVar89 + (long)UNRECOVERED_JUMPTABLE_13))
                       (ppuVar93,(code *)((long)ppuVar89 + (long)UNRECOVERED_JUMPTABLE_13));
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100016610:
        *(uint *)(UNRECOVERED_JUMPTABLE_13 + 0x1a107a) =
             *(uint *)(UNRECOVERED_JUMPTABLE_13 + 0x1a107a) + uVar28;
        iVar36 = *(int *)((long)puVar13 + (long)(int)uVar10 * 4);
        *(ulong *)((long)puVar69 + -0xd0) = (ulong)ppuVar89 & 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x000100016640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_1000165e8 + iVar36))
                       (*(undefined8 *)((long)puVar69 + -0x68),ppuVar89,UNRECOVERED_JUMPTABLE,0,
                        puVar101,0x3165f9b3);
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
        *(byte *)(ppuVar93 + 0x200) = *(byte *)(ppuVar93 + 0x200) + (char)cVar41;
        *(undefined8 *)((long)puVar58 + -8) = 0x100016956;
        puVar16 = (undefined *)(*(code *)puVar13)();
        *ppuVar108 = puVar16;
                    /* WARNING: Could not recover jumptable at 0x000100016976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001691c +
                       (int)*(uint *)((long)ppuVar103 +
                                     (long)(int)(uVar9 + (puVar16 == (undefined *)0x0)) * 4)))
                       (ppuVar103);
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
                       *(int *)((long)ppuVar96 +
                               (long)(int)(uVar102 + ((undefined **)puVar101 == (undefined **)0x0))
                               * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100016d5c:
        *(uint *)((long)puVar69 + -0x60) = uVar10;
        *(undefined8 *)((long)puVar69 + -0x88) = *(undefined8 *)((long)puVar69 + -0xa8);
        *(undefined8 *)((long)puVar69 + -0xa0) = *(undefined8 *)((long)puVar69 + -0xb8);
        uVar15 = *(undefined8 *)((long)puVar69 + -0x78);
        *(undefined8 *)((long)puVar69 + -0xe8) = uVar15;
        UNRECOVERED_JUMPTABLE_12 = (undefined **)(ulong)(uVar37 + 0xd4b899a & 0xf2b475ff);
        goto code_r0x000100016d68;
      case (undefined **)0x100016d66:
        uVar15 = CONCAT62(uVar25,CONCAT11(0xf2,bVar90));
code_r0x000100016d68:
        *(undefined8 *)((long)puVar69 + -0x78) = uVar15;
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             switchD_100020322::caseD_1b465
                       (ppuVar93,((ulong)UNRECOVERED_JUMPTABLE_12 ^ 0xfffffff1) & (ulong)ppuVar110,
                        *(undefined8 *)((long)puVar69 + -0x138),&LAB_100017a4d);
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100016e46:
        uVar9 = *(uint *)((long)ppuVar103 +
                         (long)(int)((int)CONCAT71(iVar35,uVar109 == uVar10) + uVar107) * 4);
        *(undefined4 *)((long)puVar69 + -0x50) = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x000100016e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(switchD_100017cdc::caseD_16e2f + (int)uVar9))
                       (ppuVar93,switchD_100017cdc::caseD_16e2f + (int)uVar9);
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100016ea8:
        uVar9 = uVar97 + *(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 100);
        uVar12 = (ulong)(uVar9 + bVar112);
        *(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) =
             (code)(((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) - bVar27) -
                   (CARRY4(uVar97,*(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 100)) ||
                   CARRY4(uVar9,(uint)bVar112)));
        *(ulong *)(uVar12 - 0xf0) = (ulong)*(uint *)(uVar12 - 0x68);
        UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_100015e19();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100016f7e:
        *(undefined **)((long)puVar69 + -0x30) = *UNRECOVERED_JUMPTABLE_18;
        _DAT_10088e7f0 =
             ((ulong)((long)puVar69 + -0x1a8) ^ 0xa7a004eac7f8732f ^ DAT_10088e7f8 - _DAT_10088e7f0)
             * 0x79f54c43;
        uVar9 = ((int)_DAT_10088e7f0 * 2 ^ 0xc7f8732fU) * 0x79f54c43;
        ppuVar103 = (undefined **)
                    (&PTR__bootstrap_look_up_10082e9f0)
                    [(int)((byte)((byte)uVar9 ^
                                 (&DAT_1006d0d70)[(byte)(&DAT_1006cfe50)[uVar9 & 0xff] ^ 0x2c]) -
                          0xa5)];
        *(undefined8 *)((long)puVar58 + -8) = 0x100017001;
        DAT_10088e7f8 = _DAT_10088e7f0;
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)ppuVar103)(0x18);
        puVar13 = (uint *)&DAT_1006d13e0;
        puVar48 = puVar58;
        puVar70 = puVar69;
        ppuVar110 = (undefined **)0x3165f9b2;
        switch(UNRECOVERED_JUMPTABLE_18 == (undefined **)0x0) {
        case false:
          *(code **)((long)puVar69 + -0xa0) =
               (code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x3cd24ee3f7b6c2e5);
          *(undefined ***)((long)puVar69 + -0x1a0) = UNRECOVERED_JUMPTABLE_12;
          *UNRECOVERED_JUMPTABLE_18 = (undefined *)0x0;
          UNRECOVERED_JUMPTABLE_18[1] = (undefined *)0x4a01cb8754795f16;
          puVar51 = puVar58;
          break;
        case true:
          goto switchD_100017043_caseD_1;
        }
        goto code_r0x000100019e96;
      case (undefined **)0x100017104:
        UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x44a55c0f);
        *(uint *)UNRECOVERED_JUMPTABLE_19 =
             *(uint *)UNRECOVERED_JUMPTABLE_19 << 0x15 | *(uint *)UNRECOVERED_JUMPTABLE_19 >> 0xb;
        puVar62 = puVar69;
        goto switchD_10001997c_caseD_1710b;
      case (undefined **)0x100017261:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x1000173c7:
        iVar36 = *(int *)((long)puVar101 +
                         (long)(int)((UNRECOVERED_JUMPTABLE_18 == (undefined **)0x0) + 0x6d1710) * 4
                         );
        *(undefined8 *)((long)puVar69 + -0x120) = 0;
                    /* WARNING: Could not emulate address calculation at 0x0001000173d7 */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_1000173a2 + iVar36))
                       (ppuVar93,ppuVar89,&DAT_1000173a2 + iVar36,0,0x3165f9b2);
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100017408:
        uVar37 = uVar10 - 0x8b830d | 0xc;
        UNRECOVERED_JUMPTABLE = (undefined **)&DAT_10001a242;
        ppuVar96 = (undefined **)(ulong)(uVar28 < 0x7b5226d2);
        break;
      case (undefined **)0x10001741b:
        *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar90;
        *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar90;
        UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x5226d2f9);
        cVar41 = *UNRECOVERED_JUMPTABLE_19;
        *UNRECOVERED_JUMPTABLE_19 = (code)((char)*UNRECOVERED_JUMPTABLE_19 + bVar90);
        if ((POPCOUNT(*UNRECOVERED_JUMPTABLE_19) & 1U) == 0) {
          UNRECOVERED_JUMPTABLE_18 = (undefined **)CONCAT71(uVar24,CARRY1((byte)cVar41,bVar90));
        }
        else {
          pbVar1 = (byte *)((long)puVar69 + 0x31);
          *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
        }
        break;
      case (undefined **)0x100017445:
        if (!bVar112 && !bVar114) {
          puVar2 = (undefined1 *)((long)puVar69 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 0xd);
          *puVar2 = *puVar2;
          UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -1);
          bRam01498104634f006b = bVar90;
          *UNRECOVERED_JUMPTABLE_19 =
               (code)((char)*UNRECOVERED_JUMPTABLE_19 << 1 | (char)*UNRECOVERED_JUMPTABLE_19 < '\0')
          ;
          if ((code *)((long)UNRECOVERED_JUMPTABLE_13 + -1) != (code *)0x0 && !bVar114) {
            puVar16 = ppuVar110[uVar37 & 0x299e558c];
            *(undefined ***)((long)puVar69 + -200) = ppuVar93;
            *(undefined **)((long)puVar58 + -8) = &UNK_100017509;
            (*(code *)(CONCAT71(uVar24,bVar90 - 0x39) + -3))(ppuVar93,puVar16 + -3);
            puVar16 = ppuVar110[(int)(uVar37 - 0x55)];
            *(undefined8 *)((long)puVar69 + -0x78) = 0;
            uVar15 = *(undefined8 *)((long)puVar69 + -0x110);
            *(undefined **)((long)puVar58 + -8) = &UNK_100017527;
            lVar19 = (*(code *)(puVar16 + -2))(uVar15,0);
                    /* WARNING: Could not recover jumptable at 0x000100017556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            UNRECOVERED_JUMPTABLE_18 =
                 (undefined **)
                 (*(code *)(&UNK_1000174a8 +
                           (int)(&switchD_100019e65::switchdataD_1006d1710)
                                [(int)(uVar37 + (lVar19 == 0))]))();
            return UNRECOVERED_JUMPTABLE_18;
          }
          iVar36 = *(int *)((long)puVar69 + -0xa0);
          uVar9 = uVar31 * 2 + 0x5499cac0;
          uVar88 = uVar9 ^ 0x7fbf3fa7;
          uVar9 = uVar9 & 0xffbf3fa6;
          *(ulong *)((long)puVar69 + -0xa0) = (ulong)(uVar88 + uVar9 * 2 + uVar92);
          uVar9 = uVar88 + uVar9 * 2 + 0x6d4db16a;
          bVar95 = uVar32 < uVar9;
          if (0x12f30eee < (uint)(code *)((long)UNRECOVERED_JUMPTABLE_13 + -1) != uVar9 < 0xed0cf111
             ) {
            bVar95 = uVar9 < 0xed0cf111;
          }
                    /* WARNING: Could not recover jumptable at 0x0001000187b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          UNRECOVERED_JUMPTABLE_18 =
               (undefined **)
               (*(code *)((long)ppuVar93 +
                         (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                                    [(int)((uint)bVar95 + iVar36)]))();
          return UNRECOVERED_JUMPTABLE_18;
        }
        break;
      case (undefined **)0x100017475:
        pbVar1 = (byte *)((long)puVar69 + 0xf);
        *pbVar1 = *pbVar1 << 5 | *pbVar1 >> 3;
        UNRECOVERED_JUMPTABLE =
             (undefined **)CONCAT62((int6)(short)(uVar32 >> 0x10),CONCAT11(0xc3,cVar8));
        goto code_r0x00010001747e;
      case (undefined **)0x100017665:
        *(int *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) =
             *(int *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x1000176a0:
        *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar90;
        pcVar20 = (char *)((long)UNRECOVERED_JUMPTABLE_13 * 5 + -0x5b);
        *pcVar20 = *pcVar20 + bVar27;
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
        *(int *)((long)ppuVar93 + -0x2dfe2226) = *(int *)((long)ppuVar93 + -0x2dfe2226) + 1;
        UNLOCK();
        uVar9 = (uVar32 & uVar92) + uVar31 + 0x787c5669;
        bVar95 = uVar10 < uVar9;
        if (bVar115 != uVar9 < 0x5656f668) {
          bVar95 = uVar9 < 0x5656f668;
        }
                    /* WARNING: Could not recover jumptable at 0x000100017c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)ppuVar93 +
                       (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                                  [(int)(bVar95 + uVar107)]))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100017d14:
        puVar100 = puVar101;
        goto code_r0x000100017d2a;
      case (undefined **)0x100017dfa:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100017e19:
        if (-0x10001a6ed < (long)UNRECOVERED_JUMPTABLE) {
          switch(&UNK_100017dda +
                 (int)*(uint *)((long)ppuVar103 +
                               (long)(int)((ppuVar96 == (undefined **)0x0) - 0xa4) * 4)) {
          case (undefined *)0x100017ddb:
            return (undefined **)
                   (&UNK_100017dda +
                   (int)*(uint *)((long)ppuVar103 +
                                 (long)(int)((ppuVar96 == (undefined **)0x0) - 0xa4) * 4));
          case (undefined *)0x1006e6416:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        uVar9 = ((~(uint)bVar111 & 0x538875e) - (~(uint)bVar111 | 0x538875f) ^ 0xdc5804ee) *
                0x65773fe7;
        UNRECOVERED_JUMPTABLE_13 = (undefined **)(ulong)uVar9;
        *(uint *)((long)puVar69 + -0x3c) = uVar10 + uVar9 + uVar37 + 0x55e3d6d;
        puVar44 = puVar58;
        puVar63 = puVar69;
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
                       (int)*(uint *)((long)ppuVar103 +
                                     (long)(int)((uVar105 & 0x8f73f96f) + 0x78ad9ee3 +
                                                (uint)(*ppuVar96 == (undefined *)0x0)) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100017ed9:
        goto switchD_10001a75e_caseD_17ed9;
      case (undefined **)0x100017f7a:
        goto code_r0x000100017f5f;
      case (undefined **)0x100017f85:
        *(undefined ***)((long)puVar69 + -0xe8) = UNRECOVERED_JUMPTABLE_13;
        *(undefined ***)((long)puVar69 + -0xc0) = UNRECOVERED_JUMPTABLE_13;
        *(undefined ***)((long)puVar69 + -0xa0) = UNRECOVERED_JUMPTABLE_13;
        *(undefined ***)((long)puVar69 + -0xb8) = UNRECOVERED_JUMPTABLE_13;
        *(undefined ***)((long)puVar69 + -0xb0) = UNRECOVERED_JUMPTABLE_13;
        *(undefined ***)((long)puVar69 + -0xd0) = UNRECOVERED_JUMPTABLE_13;
        *(undefined8 *)((long)puVar69 + -0x48) = 0x7f31ac3dd4da00c4;
        goto LAB_10001b2e9;
      case (undefined **)0x100018263:
        goto switchD_10001a75e_caseD_18263;
      case (undefined **)0x1000183d8:
        out(0xff,uVar10);
        UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7f);
        *(uint *)UNRECOVERED_JUMPTABLE_19 =
             *(uint *)UNRECOVERED_JUMPTABLE_19 << (bVar27 & 0x1f) |
             *(uint *)UNRECOVERED_JUMPTABLE_19 >> 0x20 - (bVar27 & 0x1f);
        bVar95 = (uVar28 & 0x1f) == 0;
        uVar88 = in(0x8f);
        pcVar20 = (char *)(ulong)uVar88;
        uVar9 = *(uint *)((long)ppuVar93 * 5);
        *pcVar20 = (*pcVar20 - (char)uVar88) -
                   (bVar95 * bVar112 | !bVar95 * ((*(uint *)UNRECOVERED_JUMPTABLE_19 & 1) != 0));
        *pcVar20 = *pcVar20 + (char)uVar88;
        UNRECOVERED_JUMPTABLE_19 = *(code **)((ulong)uVar9 - 0x80);
        *(undefined8 *)((long)puVar58 + -8) = 0x1000183f1;
        lVar19 = (*UNRECOVERED_JUMPTABLE_19)();
        iVar36 = *(int *)((long)puVar101 + (long)(int)(uVar102 + (lVar19 == 0)) * 4);
        *(undefined4 *)((ulong)uVar9 - 0x58) = 0x3165f9b2;
                    /* WARNING: Could not emulate address calculation at 0x000100018400 */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_1000183cf + iVar36))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100018430:
                    /* WARNING: Could not recover jumptable at 0x000100018464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001842a +
                       *(int *)((long)puVar101 +
                               (long)(int)((ppuVar99 == (undefined **)0x7f31ac3dd4da00c4) + uVar37)
                               * 4)))
                       (ppuVar93,ppuVar89,
                        &DAT_10001842a +
                        *(int *)((long)puVar101 +
                                (long)(int)((ppuVar99 == (undefined **)0x7f31ac3dd4da00c4) + uVar37)
                                * 4));
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100018469:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001848f:
        uVar88 = uVar32 + uVar10 + 0x5ce313a4;
        uVar9 = (uint)*(undefined8 *)puVar58;
        bVar95 = uVar9 < 0xaab5b043;
        if (uVar88 < uVar107 + 0xaab5afa7 == uVar9 < 0xaab5b043) {
          bVar95 = uVar88 < uVar9;
        }
                    /* WARNING: Could not recover jumptable at 0x0001000184eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_100018467 +
                       (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)(bVar95 + uVar92)]))
                       (&DAT_100018467 +
                        (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)(bVar95 + uVar92)]);
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x1000184ea:
        out(0x59,(int)((long)((ulong)uVar32 << 0x20 | (ulong)UNRECOVERED_JUMPTABLE_18) /
                      (long)(int)uVar109));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100018517:
        uVar9 = (uint)*(byte *)((long)ppuVar93 + (ulong)(uVar92 + uVar28 + 0x825b8c91)) |
                (uint)*(byte *)((long)ppuVar93 + (ulong)(uVar92 + 0x825b8cc7)) << 8 |
                (uint)*(byte *)((long)ppuVar93 + (ulong)(uVar92 + 0x825b8cc6)) << 0x10 |
                (uint)*(byte *)((long)ppuVar93 + (ulong)(uVar92 + uVar98 + 0x825b8c88)) << 0x18;
        iVar36 = (uVar9 ^ 0xb7efa97f) + (uVar9 & 0x37efa97f) * 2 + 0x7976fffe;
        *(uint *)UNRECOVERED_JUMPTABLE = uVar92 + 4;
        *(int *)((long)puVar69 + -0x50) = iVar36;
                    /* WARNING: Could not recover jumptable at 0x0001000185a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_1000184ef +
                       (int)*(uint *)((long)ppuVar103 +
                                     (long)(int)((iVar36 == 0x3166a97d) + uVar91) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x1000185b5:
        goto switchD_10001a75e_caseD_185b5;
      case (undefined **)0x10001866b:
        UNRECOVERED_JUMPTABLE_13 =
             (undefined **)
             (long)(int)*(uint *)((long)ppuVar103 + (long)(int)(uVar107 + (uVar10 == 0)) * 4);
        puVar16 = &DAT_100018640;
        goto code_r0x000100018682;
      case (undefined **)0x10001867c:
        puVar16 = (undefined *)0x18640;
code_r0x000100018682:
        *(undefined8 *)((long)puVar69 + -0x118) = 0;
        *(undefined8 *)((long)puVar69 + -0x60) = 0x5a793496016ebe8;
        *(undefined8 *)((long)puVar69 + -0xd0) = 0x5a793496016ebe8;
        *(undefined8 *)((long)puVar69 + -200) = 0x5a793496016ebe8;
        *(undefined8 *)((long)puVar69 + -0xc0) = 0x5a793496016ebe8;
        *(undefined8 *)((long)puVar69 + -0xb0) = 0x5a793496016ebe8;
                    /* WARNING: Could not recover jumptable at 0x0001000186c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)UNRECOVERED_JUMPTABLE_13 + (long)puVar16))
                       (ppuVar93,ppuVar89,(code *)((long)UNRECOVERED_JUMPTABLE_13 + (long)puVar16),0
                        ,*(undefined8 *)((long)puVar69 + -0x48),0x3165f9b2);
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
        puVar66 = puVar69;
        goto code_r0x000100018b86;
      case (undefined **)0x100018bdc:
        goto switchD_10001a75e_caseD_18bdc;
      case (undefined **)0x100018ce1:
        UNRECOVERED_JUMPTABLE_12 = UNRECOVERED_JUMPTABLE_12 + -0xcf6ffe6;
        *(char *)UNRECOVERED_JUMPTABLE_12 =
             (char)*(code *)UNRECOVERED_JUMPTABLE_12 << 1 |
             (char)*(code *)UNRECOVERED_JUMPTABLE_12 < '\0';
        iVar36 = *(int *)((long)puVar101 + (long)UNRECOVERED_JUMPTABLE_18 * 4);
        *(undefined ***)((long)puVar69 + -0xb8) = ppuVar93;
                    /* WARNING: Could not recover jumptable at 0x000100018d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&LAB_100018cc2 + iVar36))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100018dac:
                    /* WARNING: Could not recover jumptable at 0x000100018db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)((long)ppuVar96 + 0x100018d74))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100018dd4:
        iVar36 = (int)CONCAT62(uVar25,CONCAT11(bVar116 << 7 | bVar114 << 6 | in_AF << 4 |
                                               bVar113 << 2 | 2U | bVar112,bVar90));
        goto code_r0x000100018ddb;
      case (undefined **)0x100018e6f:
        uVar9 = *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + (long)UNRECOVERED_JUMPTABLE_18 * 2 + 0xf)
        ;
        puVar69 = (uint *)((long)puVar69 + 0x30);
        *puVar69 = *puVar69 << 1 | *puVar69 >> 0x1f;
        if (bVar115 == false) {
          uVar31 = (uint)(uVar109 < (uVar28 | uVar9));
        }
        lVar19 = (long)*(int *)((long)puVar101 + (long)(int)((uVar31 & 0xff) + uVar102) * 4);
                    /* WARNING: Could not emulate address calculation at 0x000100018e92 */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(switchD_10001b5d5::caseD_0 + lVar19))
                       (switchD_10001b5d5::caseD_0 + lVar19,ppuVar89,UNRECOVERED_JUMPTABLE_18,lVar19
                        ,0x3165f993);
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100018f9c:
        goto switchD_10001a75e_caseD_18f9c;
      case (undefined **)0x100019089:
        goto switchD_10001a75e_caseD_19089;
      case (undefined **)0x100019494:
        pbVar1 = (byte *)(uVar12 + (long)ppuVar89 * 4);
        *pbVar1 = *pbVar1 | (byte)uVar37;
        uVar10 = uVar10 + 0xf588163d;
        *(char *)(ulong)uVar10 = *(char *)(ulong)uVar10 + (char)uVar10;
        goto code_r0x0001000194a1;
      case (undefined **)0x10001952a:
        goto switchD_10001a75e_caseD_1952a;
      case (undefined **)0x1000195a2:
        uVar9 = 0x3165f9b3;
        puVar68 = puVar69;
        goto code_r0x0001000195a7;
      case (undefined **)0x1000195fc:
        *(undefined ***)((long)puVar69 + -0xe8) = ppuVar108;
        *(undefined ***)((long)puVar69 + -0x140) = ppuVar99;
        *(code **)((long)puVar69 + -0x170) = (code *)((long)puVar13 + 8);
        bVar95 = (code *)puVar13 == (code *)0x0;
        puVar100 = puVar101;
        goto code_r0x000100019629;
      case (undefined **)0x10001961a:
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x77) =
             (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x77) + bVar90);
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7f) = (code)0xf6;
        bVar95 = uVar97 == 0;
        puVar100 = puVar101;
        goto code_r0x000100019629;
      case (undefined **)0x10001971e:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100019789:
        out((short)uVar32,bVar90);
        uVar9 = *(uint *)(UNRECOVERED_JUMPTABLE_13 + 7);
        iVar36 = (bVar111 - uVar92) + -0x63cb7209;
        *(byte *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar10 + 0x92fee118)) =
             (byte)((uint)iVar36 >> 0x18) ^ 0x9c;
        *(byte *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar10 + 0x92fee119)) =
             (byte)((uint)iVar36 >> 0x10) ^ 0x34;
        *(byte *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar10 + 0x92fee11a)) =
             (byte)((uint)iVar36 >> 8) ^ 0x8d;
        *(byte *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar10 + 0x92fee11b)) = (byte)iVar36 ^ 0xf7;
        *(undefined ***)((ulong)((uVar97 - uVar9) - (uint)bVar112) - 0x150) = ppuVar96;
        *(int *)ppuVar96 = *(int *)ppuVar96 + 4;
        uVar28 = 1;
      case (undefined **)0x1000197fb:
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar28 & 1);
switchD_10001a75e_caseD_19801:
                    /* WARNING: Could not recover jumptable at 0x000100019814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&LAB_1000197ef +
                       *(int *)((long)puVar101 +
                               (long)(int)((int)UNRECOVERED_JUMPTABLE_18 + uVar102) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100019801:
        goto switchD_10001a75e_caseD_19801;
      case (undefined **)0x100019830:
        puVar100 = puVar101;
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
             (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x73) | bVar95);
        UNRECOVERED_JUMPTABLE_18 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_18 ^ 0xc);
        puVar72 = puVar69;
        goto code_r0x000100019bab;
      case (undefined **)0x100019cf7:
        cVar8 = *(char *)((long)puVar69 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 0x73);
        UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d);
        *UNRECOVERED_JUMPTABLE_19 =
             (code)((byte)*UNRECOVERED_JUMPTABLE_19 >> 1 | (char)*UNRECOVERED_JUMPTABLE_19 << 7);
        *(uint *)(UNRECOVERED_JUMPTABLE_13 + 0x1a107b) =
             *(uint *)(UNRECOVERED_JUMPTABLE_13 + 0x1a107b) + uVar28;
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (&DAT_100019cf2 +
             *(int *)((long)ppuVar96 + (long)(int)CONCAT71(uVar24,(bVar90 - cVar8) - bVar112) * 4));
switchD_10001a75e_caseD_19d1d:
                    /* WARNING: Could not recover jumptable at 0x000100019d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100019d1d:
        goto switchD_10001a75e_caseD_19d1d;
      case (undefined **)0x100019e46:
        *(uint *)((long)puVar69 + -0xb8) = uVar92;
        goto switchD_100019a4b_caseD_19dcf;
      case (undefined **)0x100019e8b:
        puVar52 = (uint *)((long)puVar58 + 8);
        if (!bVar116) goto LAB_100019ee2;
        *(uint *)(UNRECOVERED_JUMPTABLE + 9) = *(int *)(UNRECOVERED_JUMPTABLE + 9) + uVar37;
        *(uint *)(UNRECOVERED_JUMPTABLE_18 + 1) = uVar37;
        puVar51 = (uint *)((long)puVar58 + 8);
        goto code_r0x000100019e96;
      case (undefined **)0x100019eed:
        puVar52 = puVar58;
        goto LAB_100019ee2;
      case (undefined **)0x100019f56:
        puVar52 = (uint *)((long)puVar58 + 8);
        puVar74 = (uint *)*(undefined8 **)puVar58;
        goto LAB_100019ee2;
      case (undefined **)0x10001a0a2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001a0ba:
        uVar9 = (&switchD_100019e65::switchdataD_1006d1710)[(int)(uVar37 + (uVar10 == 0))];
        *(undefined8 *)((long)puVar69 + -0x128) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001a0e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001a08f + (int)uVar9))
                       (ppuVar93,ppuVar89,&DAT_10001a08f + (int)uVar9,0,0x3165f9b2);
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001a101:
        *(undefined4 *)ppuVar93 = 0;
        ppuVar93[1] = (undefined *)0x4d14149255b31aa0;
        *(undefined8 *)((long)puVar58 + -8) = 0x10001a11a;
        (*(code *)ppuVar110)();
        *(undefined8 *)((long)puVar69 + -0x48) = 0x7f31ac3dd4da00c4;
        ppuVar89 = *(undefined ***)((long)puVar69 + -0x50);
        *(undefined ***)((long)puVar69 + -0xf0) = ppuVar89;
        ppuVar110 = *(undefined ***)((long)puVar69 + -200);
        puVar75 = puVar69;
        goto switchD_10001997c_caseD_1a13a;
      case (undefined **)0x10001a2a2:
        out(0xf9,bVar90);
                    /* WARNING: Could not recover jumptable at 0x00010001a2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001a24a +
                       *(int *)((long)puVar101 +
                               (long)(int)((int)CONCAT71(uVar24,bVar114) + uVar105) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001a370:
        goto switchD_10001a75e_caseD_1a370;
      case (undefined **)0x10001a436:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001a44f:
        *(uint *)(ppuVar93 + 9) = *(uint *)(ppuVar93 + 9) ^ uVar109;
        *(uint *)((long)puVar69 + -0x48) = uVar28;
        goto code_r0x00010001a456;
      case (undefined **)0x10001a462:
                    /* WARNING: Could not recover jumptable at 0x00010001a4a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001a45d +
                       *(int *)((long)puVar13 +
                               (long)(int)((uint)((uVar98 + uVar31 + 1 & 3) == 0) + iVar36) * 4)))()
        ;
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001a4db:
        goto switchD_10001a75e_caseD_1a4db;
      case (undefined **)0x10001a4dd:
        UNRECOVERED_JUMPTABLE_13 =
             (undefined **)
             (ulong)CONCAT22((short)(uVar28 >> 0x10),CONCAT11((char)(uVar28 >> 8) >> 1,bVar27));
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar10 & uVar92);
        goto switchD_10001a75e_caseD_1a4db;
      case (undefined **)0x10001a5ab:
                    /* WARNING: Could not recover jumptable at 0x00010001a5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001a55e +
                       *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                               (long)(int)(((uVar105 + 0x66ffff94 &
                                            uVar10 << (((byte)ppuVar103 ^ 0x62) & 0x1f)) +
                                            (uVar32 ^ 0x337ffffd) == 0x337ffffd) + uVar102) * 4)))()
        ;
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001a62b:
                    /* WARNING: Could not recover jumptable at 0x00010001a65b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001a629 +
                       *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                               (long)(int)(uVar10 + (*(long *)((long)puVar13 + -0x7f31ac3dd4da00b8)
                                                    == 0)) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001a6ec:
        goto code_r0x00010001a6ec;
      case (undefined **)0x10001a6ee:
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x73) =
             (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x73) | bVar90);
        puVar54 = (undefined8 *)((long)puVar58 + -8);
        puVar58 = (uint *)((long)puVar58 + -8);
        *puVar54 = puVar69;
      case (undefined **)0x10001a6f3:
        goto switchD_10001a75e_caseD_1a6f3;
      case (undefined **)0x10001a70a:
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001a712:
        if (!bVar114 && -0x10001a6ed < (long)UNRECOVERED_JUMPTABLE) {
          return UNRECOVERED_JUMPTABLE_18;
        }
        *(byte *)ppuVar89 = (byte)*(code *)ppuVar89 & bVar34;
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
        *(uint *)UNRECOVERED_JUMPTABLE_18 = *(int *)UNRECOVERED_JUMPTABLE_18 + uVar10;
        *(byte *)((long)ppuVar93 + 0x4c) =
             *(byte *)((long)ppuVar93 + 0x4c) + (char)((ulong)UNRECOVERED_JUMPTABLE_18 >> 8);
        UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar69 + -0x68);
        *(undefined8 *)((long)puVar58 + -8) = 0x10001a789;
        (*UNRECOVERED_JUMPTABLE_19)((ulong)puVar58 & 0xffffffff);
        uVar31 = *(uint *)((long)puVar69 + -0x58);
        UNRECOVERED_JUMPTABLE_13 = *(undefined ***)((long)puVar69 + -0x50);
        puVar101 = &switchD_100019e65::switchdataD_1006d1710;
      case (undefined **)0x10001a797:
        pcVar20 = (char *)((long)UNRECOVERED_JUMPTABLE_13 * 5 + -0x18);
        *pcVar20 = *pcVar20 + (char)UNRECOVERED_JUMPTABLE_13;
        *(uint **)((long)puVar69 + -0x78) = puVar13;
        *(undefined ***)((long)puVar69 + -0x98) = UNRECOVERED_JUMPTABLE_12;
        *(undefined ***)((long)puVar69 + -0x50) = UNRECOVERED_JUMPTABLE_13;
        *(undefined ***)((long)puVar69 + -0xd8) = ppuVar103;
                    /* WARNING: Could not recover jumptable at 0x00010001a7f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)*(int *)((long)puVar101 +
                                      (long)(int)((uint)((int)uVar31 <
                                                        (int)((uVar107 ^ 0x8b8344) + 0x93ddd82a &
                                                              0x6c2227bd ^ 0x3166a94c)) +
                                                 (uVar107 ^ 0x8b8344)) * 4) + 0x10001a7ad))();
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
                       (0,ppuVar89,(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x10001aa9f),
                        UNRECOVERED_JUMPTABLE_13,0x3165f9b2,*(undefined8 *)((long)puVar69 + -0x58));
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001aade:
        *(uint *)UNRECOVERED_JUMPTABLE_13 = *(uint *)UNRECOVERED_JUMPTABLE_13 ^ uVar92;
        UNRECOVERED_JUMPTABLE_19 =
             (code *)((long)UNRECOVERED_JUMPTABLE_12 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 0x4d);
        *(int *)UNRECOVERED_JUMPTABLE_19 = *(int *)UNRECOVERED_JUMPTABLE_19 + -1;
        uVar9 = uVar32;
        if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x1) {
          uVar9 = uVar32 + 4;
          ppuVar93 = (undefined **)
                     (ulong)(*(int *)((long)puVar101 + 0xc) + uVar9 + -7 +
                            ((uVar32 - 3 | 4) ^ 0xabd9f59d));
          ppuVar89 = (undefined **)(ulong)(*(int *)((long)puVar101 + 8) + 0xa1626206);
        }
        bVar95 = (uint)ppuVar93 < 0xf5dbc11c;
        uVar31 = (uint)bVar95;
        uVar12 = (ulong)((uint)ppuVar89 < 0xf5dbc11c != bVar95);
        goto code_r0x00010001ab33;
      case (undefined **)0x10001ab31:
        uVar9 = 0;
code_r0x00010001ab33:
        uVar88 = (uint)((uint)ppuVar89 < (uint)ppuVar93);
        if ((char)uVar12 != '\0') {
          uVar88 = uVar31;
        }
                    /* WARNING: Could not recover jumptable at 0x00010001ab55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001aae8 +
                       *(int *)((long)puVar13 + (ulong)((uVar88 & 0xff) + uVar9) * 4)))
                       (ppuVar93,&DAT_10001aae8 +
                                 *(int *)((long)puVar13 + (ulong)((uVar88 & 0xff) + uVar9) * 4));
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001ab93:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001ac18:
        lVar19 = *(long *)((long)puVar13 + (long)(int)(uVar92 ^ 0x90) * 8);
        *(undefined ***)((long)puVar69 + -0xe0) = ppuVar110;
        iVar36 = *(int *)(&DAT_1006d13e0 +
                         (long)(int)((ppuVar110 == (undefined **)(lVar19 + -1) &&
                                     (uVar91 ^ 0xffffff70) + uVar10 != (uVar38 ^ 0xa44ed133)) +
                                    uVar92) * 4);
        *(undefined8 *)((long)puVar69 + -0x68) = 0x18646b13513134f3;
                    /* WARNING: Could not recover jumptable at 0x00010001ac88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001abf6 + iVar36))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001ac89:
        UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -1);
        if (UNRECOVERED_JUMPTABLE_19 == (code *)0x0 || bVar114) {
          if (bVar116) goto code_r0x00010001acce;
          lVar19 = *(long *)((long)puVar13 + (long)(int)(uVar107 ^ 0x5a) * 8);
          *(undefined ***)((long)puVar69 + -0xe0) = ppuVar110;
          uVar15 = *(undefined8 *)((long)puVar69 + -0x58);
          *(undefined **)((long)puVar58 + -8) = &UNK_10001acba;
          lVar19 = (*(code *)(lVar19 + -1))(ppuVar110,uVar15,(undefined8 *)((long)puVar69 + -0xf8));
          bVar95 = lVar19 == 0;
          UNRECOVERED_JUMPTABLE_19 = (code *)(ulong)uVar107;
        }
        else {
          puVar42 = (uint *)((long)UNRECOVERED_JUMPTABLE_19 * 5 + -0xf);
          bVar95 = CARRY4(*puVar42,uVar10);
          *puVar42 = *puVar42 + uVar10;
        }
        UNRECOVERED_JUMPTABLE_19 = (code *)(long)(int)((int)UNRECOVERED_JUMPTABLE_19 + (uint)bVar95)
        ;
        puVar13 = (uint *)&DAT_1006d13e0;
code_r0x00010001acce:
        iVar36 = *(int *)((long)puVar13 + (long)UNRECOVERED_JUMPTABLE_19 * 4);
        *(undefined8 *)((long)puVar69 + -0x148) = 0;
        *(undefined8 *)((long)puVar69 + -0x68) = 0x18646b13513134f3;
        *(undefined8 *)((long)puVar69 + -0x50) = 0x18646b13513134f3;
                    /* WARNING: Could not recover jumptable at 0x00010001acfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&UNK_10001ac8c + iVar36))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001ad39:
        *(char *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + cVar8;
        *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar90;
        *(undefined ***)((long)puVar69 + -0x58) = UNRECOVERED_JUMPTABLE;
        UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar69 + -0x98);
        *(undefined8 *)((long)puVar58 + -8) = 0x10001ad47;
        lVar19 = (*UNRECOVERED_JUMPTABLE_19)();
        **(long **)((long)puVar69 + -0x58) = lVar19;
                    /* WARNING: Could not recover jumptable at 0x00010001ad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001ad01 +
                       *(int *)((long)puVar13 + (long)(int)(uVar102 + (lVar19 == 0)) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001ad7c:
        *(undefined ***)((long)puVar58 + -8) = UNRECOVERED_JUMPTABLE_13;
        *(byte *)UNRECOVERED_JUMPTABLE_13 =
             ((char)*(code *)UNRECOVERED_JUMPTABLE_13 - bVar34) -
             CARRY4(uVar97,*(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 100));
                    /* WARNING: Could not recover jumptable at 0x00010001ada0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001ad6b +
                       *(int *)((long)puVar13 +
                               (long)(int)(CONCAT31((int3)(uVar28 >> 8),
                                                    ppuVar99 ==
                                                    (undefined **)
                                                    ((ulong)UNRECOVERED_JUMPTABLE_18 ^ 0x31)) +
                                          uVar9) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001aeb5:
        goto switchD_10001a75e_caseD_1aeb5;
      case (undefined **)0x10001af1d:
        puVar77 = puVar69;
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
             *(int *)((long)UNRECOVERED_JUMPTABLE_12 + 0x634800d3) + uVar10;
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001b292:
        *(undefined8 *)((long)puVar69 + -0x130) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001b2a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001b2b4:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001b2d6:
        *(uint *)UNRECOVERED_JUMPTABLE_13 = uVar10;
        ppuVar99 = *(undefined ***)((long)puVar69 + -0x140);
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)*(uint *)ppuVar99;
        puVar101 = &switchD_100019e65::switchdataD_1006d1710;
LAB_10001b2e9:
        lVar19 = *(long *)puVar13;
        iVar36 = (int)UNRECOVERED_JUMPTABLE_18;
        *(undefined1 *)(lVar19 + (ulong)(iVar36 + 0x92fee118)) = 0;
        *(undefined1 *)(lVar19 + (ulong)(iVar36 + 0x92fee119)) = 0;
        *(undefined1 *)(lVar19 + (ulong)(iVar36 + 0x92fee11a)) = 0;
        *(undefined1 *)(lVar19 + (ulong)(iVar36 + uVar37 + 0x92fee111)) = 1;
        *(undefined ***)((long)puVar69 + -0x140) = ppuVar99;
        *(uint *)ppuVar99 = *(uint *)ppuVar99 + 4;
        iVar106 = uVar37 + 0xad;
        iVar29 = 1;
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
                       *(int *)((long)puVar13 +
                               (long)(int)((0x5ae90ade < uVar10 || bVar111 + 0xae11ca83 < uVar28) +
                                          uVar102) * 4)))
                       (ppuVar93,ppuVar89,
                        &DAT_10001b4b7 +
                        *(int *)((long)puVar13 +
                                (long)(int)((0x5ae90ade < uVar10 || bVar111 + 0xae11ca83 < uVar28) +
                                           uVar102) * 4));
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001b53d:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001b65b:
        if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x1 ||
            ((uVar10 | *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x73)) & 0x4000) == 0) {
          ppuVar89 = UNRECOVERED_JUMPTABLE + (0x200034de - (ulong)bVar117);
        }
      case (undefined **)0x10001b65d:
        iVar36 = *(int *)((long)puVar13 +
                         (long)(int)(uVar107 + (ppuVar110 == (undefined **)0x0)) * 4);
        *(undefined8 *)((long)puVar69 + -0x60) = 0x5a793496016ebe8;
                    /* WARNING: Could not recover jumptable at 0x00010001b69e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001b658 + iVar36))
                       (0x3165f9b2,ppuVar89,*(undefined8 *)((long)puVar69 + -0x78));
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001b6a0:
        *(uint **)((long)puVar58 + -8) = puVar69;
        return (undefined **)0x0;
      case (undefined **)0x10001ba42:
        pbVar1 = (byte *)((long)puVar69 + -0x73);
        *pbVar1 = *pbVar1 >> (bVar27 & 7) | *pbVar1 << 8 - (bVar27 & 7);
        *(uint **)puVar58 = puVar69;
        uVar9 = *(int *)((long)puVar13 + 0xc) + 0xc086690c;
        uVar88 = (uVar38 ^ 0xdfb4eb9c) + *(int *)((long)puVar69 + 8);
        uVar28 = uVar107 ^ 0x2d878768;
        uVar31 = (uint)(uVar9 < uVar28);
        ppuVar93 = (undefined **)
                   (ulong)CONCAT31((int3)(uVar28 >> 8),uVar88 < 0x2d8787f0 != uVar9 < uVar28);
        uVar12 = (ulong)(uVar88 < uVar9);
        goto switchD_10001997c_caseD_1ba88;
      case (undefined **)0x10001bb25:
        uVar28 = *(uint *)ppuVar103;
        puVar13 = &switchD_1000183ca::switchdataD_1006d0f70;
        *(undefined ***)((long)puVar69 + -0x98) = ppuVar108;
        goto switchD_10001997c_caseD_1bb37;
      case (undefined **)0x10001bb68:
        goto switchD_10001a75e_caseD_1bb68;
      case (undefined **)0x10001bbb3:
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001bc7e:
        *(code *)((long)UNRECOVERED_JUMPTABLE_12 + -0x72b78c0f) =
             (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_12 + -0x72b78c0f) | bVar90);
        return (undefined **)
               (ulong)CONCAT31((int3)(uVar10 + 0x6b5ea7 >> 8),
                               (byte)(uVar10 + 0x6b5ea7) ^
                               (byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                                              (long)UNRECOVERED_JUMPTABLE));
      case (undefined **)0x10001bcdf:
        return (undefined **)CONCAT71(uVar24,bVar90 ^ (&DAT_1006d0d70)[uVar28 ^ 0x2c]);
      case (undefined **)0x10001bf16:
        UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x47);
        *UNRECOVERED_JUMPTABLE_19 =
             (code)((char)*UNRECOVERED_JUMPTABLE_19 << 1 | (char)*UNRECOVERED_JUMPTABLE_19 < '\0');
        puVar13 = (uint *)(ulong)(uVar105 + 0x56053a2c | 0xa100000c);
        ppuVar93 = (undefined **)(ulong)*(uint *)ppuVar110;
        puVar16 = *(undefined **)puVar101;
        puVar100 = puVar101;
        goto code_r0x00010001bf35;
      case (undefined **)0x10001bf24:
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x493f8b41) =
             (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x493f8b41) +
                   (char)((uint)((int)CONCAT71(uVar24,bVar90 - 0x3a) + -0x327ebeaa) >> 8));
        puVar16 = (undefined *)(ulong)*(uint *)UNRECOVERED_JUMPTABLE_12;
        puVar100 = puVar101;
        goto code_r0x00010001bf35;
      case (undefined **)0x10001bf8e:
        *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 99) =
             (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 99) | bVar27);
        UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + 99);
        *UNRECOVERED_JUMPTABLE_19 =
             (code)((byte)*UNRECOVERED_JUMPTABLE_19 >> (bVar27 & 7) |
                   (char)*UNRECOVERED_JUMPTABLE_19 << 8 - (bVar27 & 7));
        ppuVar96 = ppuVar108;
        goto code_r0x00010001bf97;
      case (undefined **)0x10001bfbe:
        *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar90;
        *(char *)((long)puVar69 + -0x72b217a2) = *(char *)((long)puVar69 + -0x72b217a2) + bVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001c0ae:
        lVar19 = 0x18af4;
        goto code_r0x00010001c0ba;
      case (undefined **)0x10001c0c2:
        *(undefined ***)((long)puVar69 + -0x150) = ppuVar99;
        *(code **)((long)puVar69 + -0x178) = (code *)((long)puVar13 + 8);
        iVar36 = *(int *)((long)puVar101 +
                         (long)(int)((uVar107 ^ 0xb) + (uint)((code *)puVar13 == (code *)0x0)) * 4);
        *(ulong *)((long)puVar69 + -0xc0) = (ulong)uVar32;
                    /* WARNING: Could not recover jumptable at 0x00010001c10d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)((long)iVar36 + 0x10001c0c2))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001c13b:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001c289:
        *(undefined8 *)((long)puVar58 + -8) = 0xfffffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001c35a:
        *(undefined8 *)puVar58 = 0x4cffffff;
        iVar29 = (int)*(undefined8 *)((long)puVar69 + -0x58);
        puVar16 = ppuVar110[iVar29 + -0x72];
        *(undefined **)((long)puVar69 + -0xd8) = (undefined *)((ulong)puVar58 & 0xffffffff);
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (&UNK_10001c358 +
             *(int *)((long)ppuVar96 +
                     (long)(int)((uint)((undefined *)((ulong)puVar58 & 0xffffffff) == puVar16 + -1
                                       && iVar36 + iVar29 + 0x8b8281 +
                                          ((iVar29 - 2U | 4) ^ 0xff747c7c) != 0x5565d56) + iVar29) *
                     4));
        ppuVar93 = (undefined **)0x3165f9b1;
        ppuVar89 = (undefined **)0x7f31ac3dd4da00c4;
        goto switchD_10001997c_caseD_1c3d4;
      case (undefined **)0x10001c420:
                    /* WARNING: Could not recover jumptable at 0x00010001c434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001c3e0 +
                       (int)*(uint *)((long)ppuVar103 + (long)(int)(uVar91 + uVar31) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001c52a:
        goto switchD_10001a75e_caseD_1c52a;
      case (undefined **)0x10001c73c:
        UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar69 + -0x90);
        *(undefined8 *)((long)puVar58 + -8) = 0x10001c74a;
        lVar19 = (*UNRECOVERED_JUMPTABLE_19)(uVar109 + 0x4989c387);
        iVar36 = *(int *)((long)puVar13 + (long)(int)(uVar107 + (lVar19 == 0)) * 4);
        *(undefined8 *)((long)puVar69 + -0x128) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001c77f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001c720 + iVar36))(*(undefined8 *)((long)puVar69 + -0x68));
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001c8eb:
        *(undefined8 *)((long)puVar69 + -0x100) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001c92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001c8dd +
                       *(int *)((long)puVar101 +
                               (long)(int)(uVar37 + ((code *)puVar13 == (code *)0x0)) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001ca7e:
        LOCK();
        uVar88 = *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d);
        *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) = uVar28;
        pcVar20 = (char *)(ulong)uVar88;
        UNLOCK();
        *pcVar20 = *pcVar20 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x00010001caaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001ca7c + *(int *)((long)ppuVar93 + (long)(int)uVar9 * 4)))
                       (ppuVar93,ppuVar89,*(undefined8 *)((long)puVar69 + -0x58),
                        &DAT_10001ca7c + *(int *)((long)ppuVar93 + (long)(int)uVar9 * 4));
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
                       (ppuVar93,ppuVar89,*(undefined4 *)((long)puVar69 + -0x48));
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001cd32:
                    /* WARNING: Could not recover jumptable at 0x00010001cd32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_12)();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001ce4f:
        puVar16 = *ppuVar96;
        uVar9 = *(uint *)((long)puVar58 + (long)UNRECOVERED_JUMPTABLE_13 * 4);
        *(undefined8 *)((long)puVar69 + -0x180) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001ce74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001ce18 + uVar9))
                       (0x3165f9b2,ppuVar89,0,&DAT_10001ce18 + uVar9,(long)puVar16 * 0x49);
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001d0aa:
        *(uint *)UNRECOVERED_JUMPTABLE_13 = uVar28;
                    /* WARNING: Could not emulate address calculation at 0x00010001d0c4 */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001d07e +
                       (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                            [(int)((uint)(ppuVar89 == ppuVar108) + iVar36)]))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001d1ff:
        *(undefined ***)((long)puVar69 + -0x60) = UNRECOVERED_JUMPTABLE;
        *(undefined8 *)((long)puVar69 + -0xb8) = *(undefined8 *)((long)puVar69 + -0x98);
        *(undefined8 *)((long)puVar69 + -0xd0) = *(undefined8 *)((long)puVar69 + -0xa8);
        *(undefined8 *)((long)puVar69 + -0xf8) = 0x2e3fe4cf;
        *(uint *)((long)puVar69 + -0x70) = uVar91;
        *(undefined ***)((long)puVar69 + -0x78) = UNRECOVERED_JUMPTABLE;
        lVar19 = *(long *)((long)puVar69 + -0x118);
        puVar40 = &DAT_1006d1e30;
        uVar15 = *(undefined8 *)((long)puVar69 + -0xb8);
        *(undefined8 *)((long)puVar58 + -8) = 0x10001d26f;
        (*(code *)PTR__xpc_release_10082eb00)(uVar15);
        uVar15 = *(undefined8 *)((long)puVar69 + -0xd0);
        *(undefined **)((long)puVar69 + -0x80) = puVar16;
        *(undefined8 *)((long)puVar58 + -8) = 0x10001d27d;
        (*(code *)puVar16)(uVar15);
        puVar86 = puVar69;
        switch(lVar19 == 0) {
        case false:
          UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar69 + -0x80);
          *(undefined8 *)((long)puVar58 + -8) = 0x1000207fa;
          (*UNRECOVERED_JUMPTABLE_19)(lVar19);
          iVar36 = *(int *)(&DAT_1006d1e30 +
                           (long)(int)((int)*(undefined8 *)((long)puVar69 + -0xf8) + -0x2e3fe4a8 +
                                      (uint)(*(long *)((long)puVar69 + -0x58) == 0)) * 4);
          *(undefined8 *)((long)puVar69 + -0x98) = *(undefined8 *)((long)puVar69 + -0xb8);
          *(undefined8 *)((long)puVar69 + -0xa8) = *(undefined8 *)((long)puVar69 + -0xd0);
                    /* WARNING: Could not recover jumptable at 0x000100020852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          UNRECOVERED_JUMPTABLE_18 =
               (undefined **)(*(code *)(&switchD_10001d28e::caseD_1 + iVar36))();
          return UNRECOVERED_JUMPTABLE_18;
        }
        goto code_r0x00010001e9af;
      case (undefined **)0x10001d30e:
        uVar98 = uVar98 + 0x9a06ffb2;
        bVar95 = uVar28 < uVar98;
        if (bVar115 != uVar98 < uVar92) {
          bVar95 = uVar98 < uVar92;
        }
                    /* WARNING: Could not recover jumptable at 0x00010001d34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)ppuVar93 +
                       (long)*(int *)(&DAT_1006d1e30 + (long)(int)(bVar95 + uVar10) * 4)))
                       (ppuVar93,ppuVar89,uVar10 + uVar32 * 2,UNRECOVERED_JUMPTABLE_13,ppuVar96,
                        (code *)((long)ppuVar93 +
                                (long)*(int *)(&DAT_1006d1e30 + (long)(int)(bVar95 + uVar10) * 4)));
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001d534:
        uVar9 = *(uint *)((long)puVar69 + -0x238);
        uVar15 = *(undefined8 *)((ulong)uVar9 + 0x93899e7048db8440);
        UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar69 + -0x50);
        *(undefined8 *)((long)puVar58 + -8) = 0x10001d54b;
        (*UNRECOVERED_JUMPTABLE_19)(uVar15);
        *(undefined8 *)((ulong)uVar9 + 0x93899e7048db8440) = *(undefined8 *)((long)puVar69 + -0x248)
        ;
        **(undefined4 **)((long)puVar69 + -0x240) = *(undefined4 *)((long)puVar69 + -0xb8);
        *(undefined4 *)((long)puVar69 + -200) = 0x3166a97d;
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
             (*(code *)((long)*(int *)((long)puVar101 + (long)(int)((uVar10 & 1) + uVar37) * 4) +
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
        *(char *)ppuVar89 = (char)*(code *)ppuVar89 >> (bVar27 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001dec1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001dec6:
        UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x7f7afbf1);
        *(uint *)UNRECOVERED_JUMPTABLE_19 =
             *(uint *)UNRECOVERED_JUMPTABLE_19 << 0x1d | *(uint *)UNRECOVERED_JUMPTABLE_19 >> 3;
        lVar19 = *(long *)((long)puVar69 + -0xf0);
        *(uint *)(lVar19 + -0x6c76618fb7247bb8) = uVar28 + (uVar10 & 0xfd7f7afb) * 2 + -0x1231200;
        *(undefined4 *)(lVar19 + -0x6c76618fb7247bb4) = 0x21493b80;
        *(long *)((long)puVar69 + -0xa0) = lVar19;
        uVar15 = *(undefined8 *)((long)puVar69 + -0x208);
        *(undefined8 *)((long)puVar69 + -0x78) = *(undefined8 *)((long)puVar69 + -0x210);
        uVar107 = 0xb7eafb74;
        *(undefined8 *)((long)puVar69 + -0x48) = *(undefined8 *)((long)puVar69 + -0x200);
        puVar84 = puVar69;
        goto LAB_10001df31;
      case (undefined **)0x10001defd:
        *(ulong *)((long)ppuVar96 + -0x77) =
             *(ulong *)((long)ppuVar96 + -0x77) & (ulong)UNRECOVERED_JUMPTABLE_13;
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
        uVar9 = uVar107 - 7;
        uVar28 = 1;
LAB_10001e013:
                    /* WARNING: Could not recover jumptable at 0x00010001e033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)*(int *)((long)puVar101 + (long)(int)((uVar28 & 1) + uVar9) * 4) +
                       0x10001e013))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001e00e:
        goto LAB_10001e013;
      case (undefined **)0x10001e102:
        if (!bVar113) {
          UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)((uVar102 ^ 0xe4) * 10);
          uVar107 = uVar102 - 0xb07817 & 0xb077f9;
          *(undefined ***)((long)puVar69 + -0x1b0) = UNRECOVERED_JUMPTABLE_12 + -0xb07fd466211e579;
          ppuVar89 = (undefined **)(ulong)*(uint *)(UNRECOVERED_JUMPTABLE_12 + -0xb07fd466211e579);
          ppuVar110 = (undefined **)0xa7c015ccef70d434;
        }
        uVar9 = (int)ppuVar89 + 0xad4a3a59;
        uVar88 = *(int *)((long)UNRECOVERED_JUMPTABLE_12 + (long)ppuVar110) + 0xce8d1b20;
        bVar95 = uVar9 < ((uint)UNRECOVERED_JUMPTABLE_18 ^ 0xb44460b) + uVar107;
        if (uVar88 < 0xb4447d1 == bVar95) {
          bVar95 = uVar88 < uVar9;
        }
                    /* WARNING: Could not emulate address calculation at 0x00010001e19d */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                   [(int)(bVar95 + uVar102)] + 0x10001e103))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001e24b:
        *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar90;
        *(char *)((long)puVar69 + -0x77) = *(char *)((long)puVar69 + -0x77) + bVar90;
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) =
             (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) + '\x01');
        *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_12 + 0x24) = 0x50a01b4b;
        *UNRECOVERED_JUMPTABLE_12 = *(undefined **)((long)puVar69 + -0x80);
                    /* WARNING: Could not recover jumptable at 0x00010001e284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&LAB_100023b0a +
                       *(int *)((long)puVar101 +
                               (long)(int)(uVar9 + (UNRECOVERED_JUMPTABLE_12[6] == (undefined *)0x0)
                                          ) * 4)))
                       (UNRECOVERED_JUMPTABLE_12[6],ppuVar89,
                        &LAB_100023b0a +
                        *(int *)((long)puVar101 +
                                (long)(int)(uVar9 + (UNRECOVERED_JUMPTABLE_12[6] == (undefined *)0x0
                                                    )) * 4),bVar111 + '\x02');
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001e3b9:
                    /* WARNING: Could not emulate address calculation at 0x00010001e3c5 */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_10001e369 +
                       *(int *)((long)puVar101 + (long)(int)(uVar102 + (uVar10 == 0)) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001e589:
        uVar9 = *(uint *)((long)ppuVar103 +
                         (long)(int)((int)CONCAT71(uVar24,ppuVar99 ==
                                                          (undefined **)0x7ec08e5aeb2a8122) + uVar32
                                    ) * 4);
        *(undefined ***)((long)puVar69 + -200) = ppuVar93;
                    /* WARNING: Could not recover jumptable at 0x00010001e5c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001e570 + (int)uVar9))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x10001e849:
        ppuVar89 = (undefined **)(ulong)(uVar92 << 0x1e);
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + ((ulong)UNRECOVERED_JUMPTABLE_18 | 0x44)) =
             cVar41;
        puVar101 = (uint *)(ulong)((iVar36 + uVar91) - 0x23);
        UNRECOVERED_JUMPTABLE_13 = (undefined **)0x0;
        goto code_r0x00010001e860;
      case (undefined **)0x10001e85f:
code_r0x00010001e860:
                    /* WARNING: Could not recover jumptable at 0x00010001e873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)((long)puVar13 +
                       (long)*(int *)((long)UNRECOVERED_JUMPTABLE +
                                     (ulong)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_13 >>
                                                                 8),(uint)puVar101 == uVar98) +
                                            uVar91) * 4)))
                       (ppuVar93,ppuVar89,UNRECOVERED_JUMPTABLE,uVar107);
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
        if (bVar114 || (long)UNRECOVERED_JUMPTABLE < -0x10001a6ec) {
          *(uint *)UNRECOVERED_JUMPTABLE_12 = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010001f0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          UNRECOVERED_JUMPTABLE_18 =
               (undefined **)
               (*(switchD_100024103::caseD_1f059 +
                 *(int *)((long)puVar101 +
                         (long)(int)(uVar9 + (UNRECOVERED_JUMPTABLE_18 == (undefined **)0x0)) * 4)))
                         ();
          return UNRECOVERED_JUMPTABLE_18;
        }
        if (SCARRY1(bVar90,-0x5b) == SCARRY1(bVar90 + 0xa5,bVar112)) {
          UNRECOVERED_JUMPTABLE_13 = (undefined **)0x230f4;
        }
        *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x77) =
             *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x77) | 0x148b48db;
        uVar12 = (ulong)(uint)((int)UNRECOVERED_JUMPTABLE_13 + **(int **)((long)puVar69 + -0x160));
        uVar94 = uVar12 * 2 & 0x1e2846e84;
        *(ulong *)((long)puVar69 + -0x138) = CONCAT71(uVar24,bVar90 + 0xa5 + bVar112);
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             switchD_100020322::caseD_2214a
                       (uVar94,(code *)((long)puVar13 + (uVar12 - uVar94) + -0x141622680ebdc8cd),
                        UNRECOVERED_JUMPTABLE,&DAT_1000230f4);
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100020667:
                    /* WARNING: Could not recover jumptable at 0x000100020682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(code *)(&DAT_100020648 +
                       *(int *)((long)ppuVar96 + (long)(int)(uVar105 + (uVar10 < 300)) * 4)))();
        return UNRECOVERED_JUMPTABLE_18;
      case (undefined **)0x100020aed:
        *(undefined ***)((long)puVar69 + -0x1b0) = UNRECOVERED_JUMPTABLE_12 + 1;
        *(undefined8 *)((long)puVar69 + -0xa0) = 0x5dd9ea22;
        UNRECOVERED_JUMPTABLE_19 =
             (code *)((long)(int)*(uint *)((long)ppuVar103 +
                                          (long)(int)(uVar32 + (UNRECOVERED_JUMPTABLE_12 ==
                                                               (undefined **)0x0)) * 4) +
                     0x100020aee);
                    /* WARNING: Could not recover jumptable at 0x000100020b31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)(*UNRECOVERED_JUMPTABLE_19)(0x3165f9b3,UNRECOVERED_JUMPTABLE_19,0);
        return UNRECOVERED_JUMPTABLE_18;
      }
      uVar9 = uVar107 * 2 + 0x645ac81c;
      uVar9 = (uVar37 ^ uVar9 ^ 0x6df2fffa) + (uVar9 & 0xedf2fff6) * 2 + 0xd5f26dc;
      bVar95 = uVar28 < uVar9;
      if (SUB81(ppuVar96,0) != uVar9 < 0x7b5226d2) {
        bVar95 = uVar9 < 0x7b5226d2;
      }
      uVar31 = (uint)bVar95;
code_r0x00010001747e:
                    /* WARNING: Could not recover jumptable at 0x000100017497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)((long)UNRECOVERED_JUMPTABLE +
                     (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                                [(int)((int)UNRECOVERED_JUMPTABLE_18 + -0x8b82ff + uVar31)]))();
      return UNRECOVERED_JUMPTABLE_18;
    case (code *)0x10001b839:
      switch((long)*(int *)((long)puVar101 +
                           (ulong)((int)ppuVar110 * 0xb + (uint)((code *)puVar13 == (code *)0x0)) *
                           4) + 0x10001b839) {
      case 0x1000176d9:
        *(undefined8 *)((long)puVar50 + -8) = 0x1000176de;
        (*(code *)UNRECOVERED_JUMPTABLE)(puVar13);
        UNRECOVERED_JUMPTABLE_18 = (undefined **)switchD_10001503e::caseD_1();
        return UNRECOVERED_JUMPTABLE_18;
      }
    }
  }
  if (*(long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                        (uint)PTR____stack_chk_guard_10082cb58) != *(long *)((long)puVar69 + -0x30))
  {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)puVar50 + -8) = switchD_10001b5d5::caseD_0;
    ___stack_chk_fail();
  }
  return (undefined **)0xffff5035;
switchD_10001a75e_caseD_18263:
  do {
  } while( true );
switchD_10001a75e_caseD_1a756:
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar10 ^ 0xffffff91);
  goto code_r0x00010001a746;
switchD_10001997c_caseD_19932:
  *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar27;
  puVar100 = (uint *)UNRECOVERED_JUMPTABLE_18;
  puVar46 = puVar46 + -0x6a;
  puVar42 = puVar47;
  goto switchD_10001a75e_caseD_1990f;
switchD_10001a75e_caseD_1a732:
  *(code *)(UNRECOVERED_JUMPTABLE_13 + 6) = *(code *)(UNRECOVERED_JUMPTABLE_13 + 6);
  goto code_r0x00010001a736;
switchD_10001997c_caseD_17e47:
  *(uint *)((long)puVar63 + -0x38) = (int)UNRECOVERED_JUMPTABLE_13 + uVar37 + -0x53;
  *(undefined8 *)((long)puVar44 + -8) = 0x100017e55;
  FUN_100014c30();
  uVar9 = *(uint *)((long)ppuVar103 +
                   (long)(int)((*(int *)((long)puVar63 + -0x34) == uVar37 + 0x52e88cfd) + uVar37) *
                   4);
  *(undefined8 *)((long)puVar63 + -0x60) = 0x5a793496016ebe8;
                    /* WARNING: Could not recover jumptable at 0x000100017e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_100017e0f + (int)uVar9))();
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1710b:
  lVar19 = *(long *)((long)puVar62 + -0x68);
  *(uint *)(lVar19 + -0x7f31ac3dd4da00bc) =
       (int)UNRECOVERED_JUMPTABLE_13 + ((uint)UNRECOVERED_JUMPTABLE_18 & 0xd5bb5aa3) * 2 + -0x84003;
  *(undefined4 *)(lVar19 + -0x7f31ac3dd4da00b8) = 0x4d141492;
  *(undefined4 *)((long)puVar62 + -0x58) = 0x3166a97d;
  UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_10001aa0e();
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1c3d4:
                    /* WARNING: Could not recover jumptable at 0x00010001c3db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)(ppuVar93,ppuVar89);
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1ba88:
  uVar9 = (uint)uVar12;
  if ((char)ppuVar93 != '\0') {
    uVar9 = uVar31;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001baa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 =
       (undefined **)
       (*(code *)(&DAT_10001ba32 +
                 *(int *)((long)puVar101 + (long)(int)((uVar9 & 0xff) + uVar107) * 4)))
                 (ppuVar93,&DAT_10001ba32 +
                           *(int *)((long)puVar101 + (long)(int)((uVar9 & 0xff) + uVar107) * 4));
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1b52c:
  while( true ) {
    out(0x3f,uVar28);
    if (bVar95 || bVar111) {
      *(uint *)((long)puVar80 + -0x38) = uVar91 + uVar37 + -0x4f;
      *(uint *)((long)puVar80 + -0x3c) = uVar28 + uVar91 + 0x55e3dc1;
      *(undefined **)((long)puVar56 + -8) = &UNK_10001b548;
      FUN_100014c30();
      uVar9 = (&switchD_100019e65::switchdataD_1006d1710)
              [(int)((*(int *)((long)puVar80 + -0x34) == uVar9 + 0x52e88d2b) + uVar37)];
      *(undefined8 *)((long)puVar80 + -0x48) = 0x7f31ac3dd4da00c4;
                    /* WARNING: Could not recover jumptable at 0x00010001b585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&UNK_10001b50d + (int)uVar9))();
      return UNRECOVERED_JUMPTABLE_18;
    }
    if (bVar112 != bVar115) break;
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x27);
    bVar95 = false;
    bVar112 = false;
    *(uint *)UNRECOVERED_JUMPTABLE_19 = *(uint *)UNRECOVERED_JUMPTABLE_19 & 0x69;
    bVar115 = (int)*(uint *)UNRECOVERED_JUMPTABLE_19 < 0;
    bVar111 = *(uint *)UNRECOVERED_JUMPTABLE_19 == 0;
    puVar56 = (uint *)((long)puVar80 + 8);
    puVar80 = (uint *)*(undefined8 **)puVar80;
  }
  UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_100016e87();
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1bb37:
  lVar19 = *(long *)((long)ppuVar108 + (long)ppuVar110);
  *(undefined1 *)(lVar19 + (ulong)(uVar28 + 0x8d9ec879)) = 0x38;
  *(undefined1 *)(lVar19 + (ulong)(uVar28 + 0x8d9ec87a)) = 0x5b;
  UNRECOVERED_JUMPTABLE = (undefined **)(ulong)(uVar37 + uVar28 + 0x8d9ec7cf);
  *(code *)((long)UNRECOVERED_JUMPTABLE + lVar19) = (code)0x2c;
  *(undefined1 *)(lVar19 + (ulong)(uVar28 + 0x8d9ec87c)) = 0xe8;
  *(uint **)((long)puVar81 + -0x160) = puVar104;
  *puVar104 = *puVar104 + 4;
switchD_10001a75e_caseD_1bb68:
                    /* WARNING: Could not recover jumptable at 0x00010001bba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 =
       (undefined **)
       (*(code *)((long)*(int *)((long)puVar13 + (long)(int)(uVar37 + 2) * 4) + 0x10001bb87))
                 (*(undefined8 *)((long)puVar81 + -0x68),ppuVar89,UNRECOVERED_JUMPTABLE,
                  (code *)((long)*(int *)((long)puVar13 + (long)(int)(uVar37 + 2) * 4) + 0x10001bb87
                          ),*(undefined8 *)((long)puVar81 + -0x48),0x3166a97d);
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001a75e_caseD_1a370:
  uVar88 = *(uint *)((long)puVar76 + (long)UNRECOVERED_JUMPTABLE * 4);
code_r0x00010001a377:
                    /* WARNING: Could not recover jumptable at 0x00010001a37a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 =
       (undefined **)(*(code *)((long)ppuVar99 + (long)ppuVar93))(ppuVar93,ppuVar89,uVar88);
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001997c_caseD_1a13a:
  uVar11 = SUB84(puVar104,0);
  puVar67 = puVar75;
LAB_1000190e1:
  *(undefined4 *)((long)puVar67 + -0x58) = uVar11;
  *(undefined ***)((long)puVar67 + -0x50) = ppuVar89;
  UNRECOVERED_JUMPTABLE_19 = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar107 ^ 0x8b832f)];
  uVar15 = *(undefined8 *)((long)puVar67 + -0xa8);
  *(undefined8 *)((long)puVar53 + -8) = 0x100019118;
  (*UNRECOVERED_JUMPTABLE_19)(uVar15);
  uVar15 = *(undefined8 *)((long)puVar67 + -0xe0);
  *(undefined8 *)((long)puVar53 + -8) = 0x100019125;
  (*UNRECOVERED_JUMPTABLE_19)(uVar15);
  uVar9 = (&switchD_100019e65::switchdataD_1006d1710)
          [(int)((uVar107 - 0x8b82d1) + (uint)(ppuVar110 == (undefined **)0x0))];
  *(undefined ***)((long)puVar67 + -200) = ppuVar110;
  *(code **)((long)puVar67 + -0x68) = UNRECOVERED_JUMPTABLE_19;
                    /* WARNING: Could not recover jumptable at 0x000100019148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&LAB_1000190e1 + (int)uVar9))();
  return UNRECOVERED_JUMPTABLE_18;
switchD_10001a75e_caseD_1990f:
  ppuVar93 = (undefined **)((long)ppuVar93 + (ulong)bVar117 * -8 + 4);
  ppuVar89 = (undefined **)((long)ppuVar89 + (ulong)bVar117 * -8 + 4);
  puVar63 = puVar46 + -2;
  puVar64 = puVar46 + -2;
  puVar66 = puVar46 + -2;
  puVar68 = puVar46 + -2;
  puVar47 = puVar46 + -2;
  puVar69 = puVar46 + -2;
  puVar72 = puVar46 + -2;
  puVar73 = puVar46 + -2;
  puVar76 = puVar46 + -2;
  puVar77 = puVar46 + -2;
  puVar78 = puVar46 + -2;
  puVar79 = puVar46 + -2;
  puVar82 = puVar46 + -2;
  puVar84 = puVar46 + -2;
  puVar85 = puVar46 + -2;
  puVar86 = puVar46 + -2;
  puVar87 = puVar46 + -2;
  puVar61 = puVar46 + -2;
  puVar65 = puVar46 + -2;
  puVar67 = puVar46 + -2;
  puVar70 = puVar46 + -2;
  puVar71 = puVar46 + -2;
  puVar83 = puVar46 + -2;
  puVar74 = puVar46 + -2;
  *(uint **)(puVar46 + -2) = puVar42;
  *(undefined ***)(puVar46 + -4) = ppuVar110;
  *(undefined ***)(puVar46 + -6) = ppuVar108;
  *(uint **)(puVar46 + -8) = puVar13;
  *(undefined ***)(puVar46 + -10) = ppuVar103;
  *(undefined ***)(puVar46 + -0xc) = UNRECOVERED_JUMPTABLE_12;
  puVar56 = puVar46 + -0x6a;
  puVar59 = puVar46 + -0x6a;
  puVar50 = puVar46 + -0x6a;
  puVar42 = puVar46 + -0x6a;
  puVar44 = puVar46 + -0x6a;
  puVar57 = puVar46 + -0x6a;
  puVar55 = puVar46 + -0x6a;
  puVar51 = puVar46 + -0x6a;
  puVar49 = puVar46 + -0x6a;
  puVar52 = puVar46 + -0x6a;
  puVar43 = puVar46 + -0x6a;
  puVar45 = puVar46 + -0x6a;
  puVar48 = puVar46 + -0x6a;
  puVar58 = puVar46 + -0x6a;
  *(undefined8 *)(puVar46 + -0xe) =
       *(undefined8 *)
        CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,(uint)PTR____stack_chk_guard_10082cb58);
  UNRECOVERED_JUMPTABLE_18 =
       (undefined **)
       (ulong)((byte)((byte)((ulong)(-0x11 - (long)ppuVar93) >> 0x38) &
                     (byte)((ulong)ppuVar93 >> 0x38)) >> 7 & ppuVar89 != (undefined **)0x0);
switchD_10001997c_caseD_1995b:
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(((uint)UNRECOVERED_JUMPTABLE_18 & 0xff) + 7);
switchD_10001997c_caseD_19961:
  puVar104 = &switchD_1000183ca::switchdataD_1006d0f70;
  uVar28 = (&switchD_1000183ca::switchdataD_1006d0f70)[(long)UNRECOVERED_JUMPTABLE_18];
  UNRECOVERED_JUMPTABLE_18 = (undefined **)(long)(int)uVar28;
  bVar95 = (undefined **)0xfffffffefffe66a4 < UNRECOVERED_JUMPTABLE_18;
  bVar112 = SCARRY8((long)UNRECOVERED_JUMPTABLE_18,0x10001995b);
  UNRECOVERED_JUMPTABLE_13 = (undefined **)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001995b);
  bVar115 = (long)UNRECOVERED_JUMPTABLE_13 < 0;
  bVar111 = UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0;
  uVar12 = 0x3165f9b4;
  bVar90 = (byte)ppuVar93;
  uVar92 = (uint)ppuVar93;
  iVar23 = (int7)(int3)(uVar28 >> 8);
  uVar97 = (uint)ppuVar89;
  bVar26 = (byte)UNRECOVERED_JUMPTABLE_13;
  uVar91 = (uint)UNRECOVERED_JUMPTABLE_13;
  bVar27 = (byte)uVar28;
  uVar10 = (uint)(puVar46 + -2);
  cVar6 = (char)uVar107;
  ppuVar17 = UNRECOVERED_JUMPTABLE_18;
  puVar60 = puVar46 + -0x6a;
  puVar53 = puVar46 + -0x6a;
  puVar80 = puVar46 + -2;
  puVar62 = puVar46 + -2;
  puVar81 = puVar46 + -2;
  puVar75 = puVar46 + -2;
  puVar101 = puVar100;
  ppuVar103 = (undefined **)puVar104;
  uVar109 = uVar9;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(UNRECOVERED_JUMPTABLE_13) {
  case (undefined **)0x10000c612:
                    /* WARNING: Could not recover jumptable at 0x00010000c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                               [(int)(uVar107 + (UNRECOVERED_JUMPTABLE_18 < ppuVar89))] +
                   0x10000c612))
                   ((uVar92 - (uVar9 << ((cVar6 - 2U ^ 0x15) & 0x3f) &
                              ((uVar107 + 0x34 | 0x81) ^ 0xe2846e4f))) + -0xebdc8be,ppuVar89,
                    UNRECOVERED_JUMPTABLE,
                    (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                        [(int)(uVar107 + (UNRECOVERED_JUMPTABLE_18 < ppuVar89))] +
                            0x10000c612));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100012957:
    uVar11 = *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_12 + (long)ppuVar93);
    puVar46[-0x6a] = 0x12960;
    puVar46[-0x69] = 1;
    (**(code **)(puVar46 + -0x14))(uVar11);
    *(undefined8 *)((long)UNRECOVERED_JUMPTABLE_12 + (long)ppuVar110) =
         *(undefined8 *)(puVar46 + -0x52);
    **(undefined4 **)(puVar46 + -0x62) = (int)*(undefined8 *)(puVar46 + -0x38);
    piVar4 = *(int **)(puVar46 + -0x1e);
    iVar36 = *piVar4;
    *(undefined ***)(puVar46 + -0x2c) = UNRECOVERED_JUMPTABLE_12;
    lVar19 = *(long *)((long)UNRECOVERED_JUMPTABLE_12 + (long)ppuVar110);
    lVar33 = (*(long *)(puVar46 + -0x6a) -
             (*(long *)(puVar46 + -0x6a) << ((cVar6 + 8U ^ 0x88) & 0x3f) & 0x681f333462e1d3ccU)) +
             -0x4bf06665ce8f161a;
    lVar18 = ((ulong)(iVar36 + 0xa8756e6cU) ^ 0x7effbe781dfebded) +
             (ulong)(iVar36 + 0xa8756e6cU & 0x1dfebded) * 2 + -0x7effbe781dfebded;
    *(byte *)(lVar19 + lVar18) = (byte)((ulong)lVar33 >> 0x38) ^ 0xb4;
    *(byte *)(lVar19 + 1 + lVar18) = (byte)((ulong)lVar33 >> 0x30) ^ 0xf;
    *(byte *)(lVar19 + 2 + lVar18) = (byte)((ulong)lVar33 >> 0x28) ^ 0x99;
    *(byte *)(lVar19 + 3 + lVar18) = (byte)((ulong)lVar33 >> 0x20) ^ 0x9a;
    *(byte *)(lVar19 + 4 + lVar18) = (byte)((ulong)lVar33 >> 0x18) ^ 0x31;
    *(byte *)(lVar19 + 5 + lVar18) = (byte)((ulong)lVar33 >> 0x10) ^ 0x70;
    *(byte *)(lVar19 + 6 + lVar18) = (byte)((ulong)lVar33 >> 8) ^ 0xe9;
    *(byte *)(lVar19 + 7 + lVar18) = (byte)lVar33 ^ 0xe6;
    *(int **)(puVar46 + -0x1e) = piVar4;
    *piVar4 = *piVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x000100012a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)puVar13 + (long)(int)(uVar107 + 9) * 4) + 0x100012a6d))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100012f03:
                    /* WARNING: Could not recover jumptable at 0x000100012f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100012e9e +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)[(long)ppuVar89]))
                   (&DAT_100012e9e +
                    (int)(&switchD_100013a5e::switchdataD_1006d0050)[(long)ppuVar89],
                    0x2d8eb0431bcfd253);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000131f0:
                    /* WARNING: Could not recover jumptable at 0x0001000131f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100013a12:
    puVar46[-0x27] = 0x3166a97d;
    *(undefined ***)(puVar46 + -0x1a) = UNRECOVERED_JUMPTABLE;
    *(undefined ***)(puVar46 + -0x32) = UNRECOVERED_JUMPTABLE_13;
    *(undefined ***)(puVar46 + -0x36) = UNRECOVERED_JUMPTABLE_13;
    *(undefined ***)(puVar46 + -0x30) = UNRECOVERED_JUMPTABLE_13;
    *(undefined ***)(puVar46 + -0x3e) = UNRECOVERED_JUMPTABLE_13;
    *(undefined ***)(puVar46 + -0x24) = UNRECOVERED_JUMPTABLE_13;
    puVar46[-0x2a] = 0x3165f9b4;
    puVar46[-0x29] = 0;
    *(undefined ***)(puVar46 + -0x1c) = ppuVar89;
                    /* WARNING: Could not recover jumptable at 0x000100013a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100013bc5:
    lVar19 = *(long *)(puVar46 + -2);
    *(undefined ***)(lVar19 + -0xd0) = UNRECOVERED_JUMPTABLE;
    *(undefined ***)(lVar19 + -0xe0) = UNRECOVERED_JUMPTABLE;
    *(undefined ***)(lVar19 + -0xd8) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)(lVar19 + -0x50) = 0x742c45ff88570c30;
    *(undefined8 *)(lVar19 + -0x90) = 0x742c45ff88570c30;
                    /* WARNING: Could not recover jumptable at 0x000100013bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100013fa6:
    *(byte *)ppuVar93 = bVar27;
    *(int *)UNRECOVERED_JUMPTABLE_18 = *(int *)UNRECOVERED_JUMPTABLE_18 + -0x3efb74b8;
    ppuVar93 = (undefined **)(ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_18 + -3);
    ppuVar89 = *(undefined ***)(puVar46 + -0x44);
    UNRECOVERED_JUMPTABLE = (undefined **)(ulong)puVar46[-0x23];
    uVar28 = 0x407df22c;
switchD_10001997c_caseD_13fc5:
    puVar16 = UNRECOVERED_JUMPTABLE_13[(int)uVar28];
    puVar46[-0x6c] = 0x13fd7;
    puVar46[-0x6b] = 1;
    (*(code *)(puVar16 + -2))(ppuVar93,ppuVar89,UNRECOVERED_JUMPTABLE);
    iVar36 = *(int *)((long)(int)((puVar46[-0x1c] == (uVar88 ^ 0x3166a95a)) + 0x407df224) * 4 +
                     0x3165f9b4);
    *(undefined ***)(puVar46 + -0x16) = ppuVar96;
                    /* WARNING: Could not emulate address calculation at 0x000100013ff8 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(FUN_100013f83 + iVar36))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100013fbb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100013fc5:
    goto switchD_10001997c_caseD_13fc5;
  case (undefined **)0x100014021:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000198de) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000198de) + uVar28;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100014282:
    uVar9 = uVar97 + uVar32 * 2 + 0xd4d50b2f;
    bVar95 = uVar28 < uVar9;
    if ((bool)bVar90 != uVar9 < 0x52d0fa9e) {
      bVar95 = uVar9 < 0x52d0fa9e;
    }
                    /* WARNING: Could not recover jumptable at 0x0001000142cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                   (long)*(int *)((long)puVar13 + (long)(int)(bVar95 + uVar107) * 4)))
                   ((code *)((long)UNRECOVERED_JUMPTABLE_13 +
                            (long)*(int *)((long)puVar13 + (long)(int)(bVar95 + uVar107) * 4)));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100014439:
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) ^ uVar97;
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77);
    *UNRECOVERED_JUMPTABLE_19 =
         (code)((byte)*UNRECOVERED_JUMPTABLE_19 >> (bVar26 & 7) |
               (char)*UNRECOVERED_JUMPTABLE_19 << 8 - (bVar26 & 7));
    do {
    } while ((bool)(((bVar26 & 0x1f) == 1) *
                   ((((ulong)UNRECOVERED_JUMPTABLE_13 & 0x1f) != 0) *
                    ((char)*UNRECOVERED_JUMPTABLE_19 < '\0') ^
                   (char)((char)*UNRECOVERED_JUMPTABLE_19 << 1) < '\0')));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000144ca:
    iVar36 = ((uVar92 & 0xffec6de8) + ((uVar32 | 0x139214) - uVar92) ^ 0xd97311a5) * 0x65773fe7;
    puVar46[-0x10] = (uVar91 + iVar36) - 0x71;
    puVar46[-0x11] = uVar28 + iVar36 + uVar9 + 0x55e3d84;
    puVar46[-0x6c] = 0x14505;
    puVar46[-0x6b] = 1;
    FUN_100014c30();
    uVar88 = 0x3165f9b4;
    if (puVar46[-0xf] == 0x52e88d51) {
      uVar88 = 0x3165f9a5;
    }
    uVar9 = uVar9 - 0x27 | 0x29;
    puVar46[-0x26] = 0x814565b9;
    puVar46[-0x25] = 0x4469798c;
    puVar46[-0x1a] = 0x814565b9;
    puVar46[-0x19] = 0x4469798c;
                    /* WARNING: Could not recover jumptable at 0x000100012754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_10000bc87 +
                   (int)(&switchD_100013a5e::switchdataD_1006d0050)
                        [(int)((uVar88 == ((uVar9 ^ 10) + 0xe ^ 0x3166a93e)) + uVar9)]))
                   (*(undefined8 *)(puVar46 + -0x18));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000145ec:
    *ppuVar96 = *ppuVar96 + -(long)(puVar46 + -0x6a);
    uVar9 = uVar97 + 4 + (uint)bVar117 * -8;
    bVar95 = uVar31 < 0xced166b5;
    if (uVar9 < uVar105 + 0xced16684 == uVar31 < 0xced166b5) {
      bVar95 = uVar9 < uVar31;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001463d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000145c8 + *(int *)((long)ppuVar108 + (long)(int)(bVar95 + uVar91) * 4)))
                   ((byte *)((long)ppuVar93 + (ulong)bVar117 * -8 + 4),
                    &DAT_1000145c8 + *(int *)((long)ppuVar108 + (long)(int)(bVar95 + uVar91) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100014676:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000149cc:
                    /* WARNING: Could not recover jumptable at 0x0001000149e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100014991 + *(int *)((long)puVar13 + (long)(int)uVar37 * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100014c6a:
                    /* WARNING: Could not recover jumptable at 0x000100014c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)(int)(&UINT_1006d12b0)[(int)uVar32] + 0x100014c62))
                   (ppuVar93,(code *)((long)(int)(&UINT_1006d12b0)[(int)uVar32] + 0x100014c62));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100014f71:
    goto switchD_10001997c_caseD_14f71;
  case (undefined **)0x1000155e4:
    *(char *)UNRECOVERED_JUMPTABLE_13 = (char)*(code *)UNRECOVERED_JUMPTABLE_13 + '\x01';
    lVar19 = *(long *)(puVar46 + -2);
    *(undefined ***)(lVar19 + -0x88) = UNRECOVERED_JUMPTABLE_13;
    uVar15 = *(undefined8 *)(lVar19 + -0x110);
    puVar46[-2] = 0x155f9;
    puVar46[-1] = 1;
    lVar19 = (*(code *)UNRECOVERED_JUMPTABLE_18)(uVar15,0);
                    /* WARNING: Could not recover jumptable at 0x000100015630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100015557 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar9 + (lVar19 == 0))]))
                   (&switchD_1000183ca::switchdataD_1006d0f70);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000156e4:
    iVar36 = (uVar28 == uVar32) + uVar91;
    lVar19 = (long)*(int *)((long)ppuVar93 + (long)iVar36 * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000156cc + lVar19))
                   (ppuVar93,iVar36,&DAT_1000156cc + lVar19,lVar19,ppuVar93);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000157d6:
                    /* WARNING: Could not recover jumptable at 0x0001000157f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000157cb + *(int *)((long)puVar13 + (long)(int)uVar28 * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100015ae6:
    *(ulong *)(puVar46 + -0x16) = (ulong)(uVar97 - 0x20);
    puVar46[-0x6c] = 0x15b01;
    puVar46[-0x6b] = 1;
    uVar15 = (*(code *)ppuVar96)(*(undefined8 *)(puVar46 + -0x30),*(undefined8 *)(puVar46 + -0x44));
    puVar46[-0x6c] = 0x15b0d;
    puVar46[-0x6b] = 1;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(**(code **)(puVar46 + -0x2a))(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000100015b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100015ad1 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)((UNRECOVERED_JUMPTABLE_18 == ppuVar89) + uVar37)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100015b40:
    *(undefined4 *)ppuVar89 = 0;
    puVar16 = PTR__malloc_10082ea28;
    puVar46[-0x6c] = 0x15b6d;
    puVar46[-0x6b] = 1;
    puVar14 = (undefined8 *)(*(code *)PTR__malloc_10082ea28)(0x18);
    uVar12 = 0x3165f9b2;
    switch(puVar14 == (undefined8 *)0x0) {
    case false:
      *puVar14 = 0;
      puVar14[1] = 0x7261378736103bda;
      *(undefined4 *)(puVar14 + 2) = 0;
      *(undefined8 **)(puVar46 + -0x14) = puVar14;
      *(undefined **)(puVar46 + -0x26) = puVar16;
      puVar46[-0x6c] = 0x1839c;
      puVar46[-0x6b] = 1;
      puVar16 = (undefined *)(*(code *)puVar16)(0x1000);
      ppuVar96 = *(undefined ***)(puVar46 + -0x14);
      *ppuVar96 = puVar16;
      switch(puVar16 == (undefined *)0x0) {
      case false:
        *(undefined ***)(puVar46 + -0x6a) = ppuVar93;
        *(undefined ***)(puVar46 + -0x60) = ppuVar89;
        *(undefined **)(puVar46 + -0x1e) = PTR__free_10082eaf0;
        *(code **)(puVar46 + -0x28) = (code *)((long)ppuVar96 + 0xa8b2fd12c86b103);
        uVar32 = 2;
        uVar107 = 0xc3;
        *(undefined4 *)(ppuVar96 + 1) = 0x36104bda;
        *(undefined **)(puVar46 + -0x46) = PTR_s_om_apple_adid_1006d0b54_1_10082ea58 + -1;
        puVar46[-0x1a] = 0x6016ebe8;
        puVar46[-0x19] = 0x5a79349;
        puVar46[-0x36] = 0x6016ebe8;
        puVar46[-0x35] = 0x5a79349;
        puVar46[-0x38] = 0x6016ebe8;
        puVar46[-0x37] = 0x5a79349;
        puVar46[-0x34] = 0x6016ebe8;
        puVar46[-0x33] = 0x5a79349;
        puVar46[-0x32] = 0x6016ebe8;
        puVar46[-0x31] = 0x5a79349;
        puVar46[-0x2e] = 0x6016ebe8;
        puVar46[-0x2d] = 0x5a79349;
        switch(ppuVar96 == (undefined **)0x0) {
        case false:
          goto code_r0x000100018dbe;
        case true:
          iVar36 = 0;
        }
        goto switchD_10001df6e_caseD_1c526;
      case true:
        uVar12 = 0x3165f9b2;
        switch(ppuVar96 == (undefined **)0x0) {
        case false:
          puVar46[-0x6c] = 0x198c3;
          puVar46[-0x6b] = 1;
          (*(code *)PTR__free_10082eaf0)(ppuVar96);
          UNRECOVERED_JUMPTABLE_18 = (undefined **)switchD_10001997c::caseD_17daa();
          return UNRECOVERED_JUMPTABLE_18;
        }
      }
    }
code_r0x000100017daa:
    if (*(long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                          (uint)PTR____stack_chk_guard_10082cb58) != *(long *)(puVar46 + -0xe)) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar46 + -0x6c) = &UNK_100018fd5;
      ___stack_chk_fail();
    }
    return (undefined **)(ulong)((int)uVar12 + 0xce995683);
  case (undefined **)0x100015bb7:
    *(undefined4 *)((ulong)uVar28 - 0x73) = 0x884c5d14;
    *(short *)((long)UNRECOVERED_JUMPTABLE_12 + 0x31fe8944) = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015bcf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015c6a:
    uVar91 = (byte)*(code *)((long)ppuVar93 + (long)UNRECOVERED_JUMPTABLE_18) | uVar91;
    *(uint *)UNRECOVERED_JUMPTABLE = uVar97 + 8;
    **(int **)(puVar46 + -0x60) = (uVar91 ^ 0xb7efa97f) + (uVar91 & 0x37efa97f) * 2 + 0x48105681;
    puVar46[-0x16] = 0x3166a97d;
                    /* WARNING: Could not emulate address calculation at 0x000100015cba */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                               [(int)((ppuVar110 == UNRECOVERED_JUMPTABLE_18) + 0x3165f9b4)] +
                   0x100015c9f))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100015dbe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015e78:
    *(undefined ***)(puVar46 + -0x6c) = UNRECOVERED_JUMPTABLE;
    LOCK();
    uVar88 = *(uint *)(ppuVar93 + 3);
    *(uint *)(ppuVar93 + 3) = uVar92;
    UNLOCK();
    puVar46[-0x6e] = 0x15e89;
    puVar46[-0x6d] = 1;
    lVar19 = (**(code **)(puVar46 + -0x26))(CONCAT44((int)((ulong)ppuVar93 >> 0x20),uVar88));
    uVar9 = (&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar9 + (lVar19 == 0))];
    puVar46[-0x16] = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x000100015eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_100015e73 + (int)uVar9))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100015eb5:
    *(byte **)(puVar46 + -0x1c) = (byte *)((long)ppuVar93 + (ulong)bVar117 * -8 + 4);
    uVar88 = uVar37 - 2 ^ 0x95;
    uVar9 = *(int *)((long)ppuVar96 + 0xc) + 0x3a1dc8ce;
    uVar28 = *(int *)(ppuVar96 + 1) + uVar88 * 2 + 0x766ec405;
    bVar95 = uVar9 < uVar88 + 0xac7f0016;
    if (uVar28 < 0xac7f004d == bVar95) {
      bVar95 = uVar28 < uVar9;
    }
                    /* WARNING: Could not recover jumptable at 0x000100015f2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&UNK_100015ebb +
                   *(int *)((long)puVar13 + (long)(int)((uint)bVar95 + (uVar37 - 2)) * 4)))
                   (&UNK_100015ebb +
                    *(int *)((long)puVar13 + (long)(int)((uint)bVar95 + (uVar37 - 2)) * 4));
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
         (*(code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)uVar32] +
                   0x1000163e3))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001641a:
    *(byte **)(puVar46 + -0x1c) = (byte *)((long)ppuVar93 + (ulong)bVar117 * -8 + 4);
    iVar36 = (uVar38 ^ 0xf6) * 3;
    uVar9 = *(int *)((long)ppuVar96 + 0xc) + (iVar36 + 0xdea0a43fU & 0x215f5baf) + 0xb3131a49;
    uVar88 = *(int *)(ppuVar96 + 1) + 0xef64169e;
    bVar95 = uVar88 < uVar9;
    if (uVar88 < 0x25745278 != uVar9 < 0x25745278) {
      bVar95 = uVar9 < 0x25745278;
    }
                    /* WARNING: Could not recover jumptable at 0x000100016494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)puVar13 + (long)(int)((uint)bVar95 + iVar36) * 4) +
                   0x10001641b))
                   (uVar88,(code *)((long)*(int *)((long)puVar13 +
                                                  (long)(int)((uint)bVar95 + iVar36) * 4) +
                                   0x10001641b));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000164fe:
    puVar46[-0x42] = 0;
    puVar46[-0x41] = 0;
    puVar46[-0x21] = 0;
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar105 ^ 0x5c)];
    *(undefined **)(puVar46 + -0x1a) = puVar16;
    uVar11 = *(undefined4 *)(puVar16 + -2);
    puVar16 = *(undefined **)puVar100;
    iVar36 = *(int *)((long)puVar100 + 0xc);
    puVar40 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar105 - 0x4b)];
    *(undefined **)(puVar46 + -0x18) = puVar40 + -3;
    puVar46[-0x6c] = 0x1655a;
    puVar46[-0x6b] = 1;
    uVar88 = (*(code *)(puVar40 + -3))
                       (uVar11,puVar16,iVar36 + -0x4a01cb87,puVar46 + -0x42,puVar46 + -0x21);
    uVar9 = (uint)((uVar9 + 0x4f5b068b ^ uVar88) + (uVar88 & 0xceedf77e) * 2 + 0xfbff9fd8 ==
                  (uVar107 ^ 0xade8adc7));
code_r0x00010001657f:
    *(undefined8 **)((long)puVar43 + (ulong)(byte)(unaff_00084f00 - 1) * -8 + -8) = unaff_0008ae00;
    uVar12 = (ulong)*(int *)((long)ppuVar96 + (long)(int)(uVar9 + uVar105) * 4);
    UNRECOVERED_JUMPTABLE = (undefined **)&DAT_1000164e4;
code_r0x000100016594:
                    /* WARNING: Could not recover jumptable at 0x00010001659a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE + uVar12))(ppuVar96);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000168b5:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 0x634800d3) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_12 + 0x634800d3) + uVar28;
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000169d6:
                    /* WARNING: Could not recover jumptable at 0x0001000169d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar89 + (long)UNRECOVERED_JUMPTABLE))
                   (ppuVar93,(code *)((long)ppuVar89 + (long)UNRECOVERED_JUMPTABLE));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100016ae5:
    *(code **)(puVar46 + -0x48) = (code *)((long)puVar100 + 0xc);
    uVar28 = *(int *)((long)puVar100 + 0xc) + 0x9e17caa5;
    uVar9 = (uVar32 & 0x81e21fef) + *(int *)((long)puVar100 + 8) + 0x93a0366a;
    ppuVar93 = (undefined **)(ulong)uVar9;
    uVar31 = (uint)(uVar28 < 0xe8199628);
    bVar112 = uVar9 < (uVar38 ^ 0x7e1de028) + 0xe8199590;
switchD_10001a75e_caseD_16b2a:
    if (bVar112 == SUB41(uVar31,0)) {
      uVar31 = (uint)((uint)ppuVar93 < uVar28);
    }
                    /* WARNING: Could not recover jumptable at 0x000100016b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100016acd +
                   *(int *)((long)puVar13 + (long)(int)((uVar31 & 0xff) + (int)ppuVar103) * 4)))
                   (&DAT_100016acd +
                    *(int *)((long)puVar13 + (long)(int)((uVar31 & 0xff) + (int)ppuVar103) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100016dda:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001710b:
    goto switchD_10001997c_caseD_1710b;
  case (undefined **)0x100017830:
  case (undefined **)0x100017802:
    *(undefined ***)(puVar46 + -0x16) = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         switchD_100020322::caseD_18d74
                   (uVar92 ^ 0x76,((ulong)ppuVar110 ^ 0xffffffee) & 0x1006d0f70,
                    *(undefined8 *)(puVar46 + -0x50),0xe2846de5,CONCAT71((uint7)uVar5,0x41));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001785b:
                    /* WARNING: Could not recover jumptable at 0x00010001786b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100017840 + *(int *)((long)puVar100 + (ulong)uVar32 * 4)))
                   (ppuVar93,ppuVar89,&DAT_100017840 + *(int *)((long)puVar100 + (ulong)uVar32 * 4))
    ;
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000178d9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100017a36:
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_18 * 2 + 0x10001993b) = 0x48;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uint)(int)(short)uVar28;
  case (undefined **)0x100017a3c:
                    /* WARNING: Could not recover jumptable at 0x000100017a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000179d6 + *(int *)((long)puVar100 + (long)UNRECOVERED_JUMPTABLE_18 * 4)))
                   (ppuVar93,ppuVar89,
                    &DAT_1000179d6 + *(int *)((long)puVar100 + (long)UNRECOVERED_JUMPTABLE_18 * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100017ba7:
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) ^ uVar97;
    lVar19 = *(long *)(puVar46 + -2);
    *(undefined ***)(lVar19 + -0x130) = UNRECOVERED_JUMPTABLE_13;
                    /* WARNING: Could not recover jumptable at 0x000100017bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)UNRECOVERED_JUMPTABLE)
                   (*(undefined8 *)(lVar19 + -0x68),ppuVar89,UNRECOVERED_JUMPTABLE,0,
                    *(undefined8 *)(lVar19 + -0x48));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100017cdf:
    puVar46[-0x6c] = 0x17ce4;
    puVar46[-0x6b] = 1;
    auVar118 = func_0x00011cf50005();
    UNRECOVERED_JUMPTABLE_18 = auVar118._0_8_;
    UNRECOVERED_JUMPTABLE = (undefined **)((long)ppuVar108 + auVar118._8_8_);
    uVar37 = uVar37 + 0xc;
code_r0x000100017d2a:
    *(int *)UNRECOVERED_JUMPTABLE = (int)ppuVar89 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100017d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)puVar100 +
                                  (long)(int)((ppuVar108 == UNRECOVERED_JUMPTABLE_18) + uVar37) * 4)
                   + 0x100017d59))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100017d23:
    pbVar1 = (byte *)((ulong)(uVar91 + (int)(puVar46 + -0x6a)) * 2 + -0x3f);
    *pbVar1 = *pbVar1 | bVar27;
    goto code_r0x000100017d2a;
  case (undefined **)0x100017daa:
    goto code_r0x000100017daa;
  case (undefined **)0x100017e47:
    goto switchD_10001997c_caseD_17e47;
  case (undefined **)0x100017f0e:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x41e63944) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x41e63944) + cVar8);
switchD_10001a75e_caseD_17ed9:
    ppuVar96 = (undefined **)&DAT_10001a3ba;
    uVar9 = (0x2000 << (((char)UNRECOVERED_JUMPTABLE_18 + 6U ^ 0x61) & 0x1f) & 0xff663754U) +
            0x8bfadbb2;
    uVar37 = (uint)((int)UNRECOVERED_JUMPTABLE_13 + 0x8bfacbb2U < uVar9);
    if ((int)ppuVar103 + 0x740543f1U < (int)UNRECOVERED_JUMPTABLE_13 + 0x1000U != uVar9 < 0x8bfabbb2
       ) {
      uVar37 = (uint)(uVar9 < 0x8bfabbb2);
    }
code_r0x000100017f5f:
                    /* WARNING: Could not recover jumptable at 0x000100017f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar96 +
                   (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                              [(int)((uVar37 & 0xff) + (int)UNRECOVERED_JUMPTABLE_18)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100017ffe:
                    /* WARNING: Could not recover jumptable at 0x000100018015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100017fdf +
                   *(int *)((long)ppuVar110 + (long)(int)(uVar92 + (uVar31 < uVar98)) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000180a2:
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         FUN_10001c312(ppuVar93,ppuVar89,(uVar38 ^ 0xfb643c85) + (uVar91 ^ 0x4efdd7d6));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000181a8:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x76ba6263) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x76ba6263) + bVar27);
    out(0x41,uVar28);
    iVar36 = *(int *)((long)puVar13 + 8);
    uVar15 = *(undefined8 *)puVar13;
    *(undefined ***)(puVar46 + -0x4c) = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         switchD_100020322::caseD_18d74
                   (uVar92 ^ 0xa0,iVar36 + -0x4dbf9431,uVar15,UNRECOVERED_JUMPTABLE_18);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001826e:
    puVar42 = (uint *)((long)UNRECOVERED_JUMPTABLE_13 * 5 + -0x10);
    uVar9 = *puVar42;
    *puVar42 = *puVar42 + uVar28;
                    /* WARNING: Could not recover jumptable at 0x00010001828d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001825d +
                   *(int *)((long)puVar100 + (long)(int)(uVar28 + CARRY4(uVar9,uVar28)) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000185c3:
switchD_10001a75e_caseD_185b5:
                    /* WARNING: Could not emulate address calculation at 0x0001000185c4 */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000185a8 +
                   *(int *)((long)puVar101 + (long)(int)(((int)puVar64 == 0) + 0x4913681e) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000185e8:
                    /* WARNING: Could not recover jumptable at 0x00010001863b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000185de +
                   *(int *)((long)puVar100 +
                           (long)(int)(((uVar92 + 0xac6b660b & uVar97 * 2 ^ (uVar98 | 0x10) ^
                                        0xa0006611) + (uVar97 ^ 0xa777844d) == 0x5635b30f) + uVar92)
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
    *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar27;
    ppuVar108 = &PTR__bootstrap_look_up_10082e9f0;
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar105 - 0x6c)];
    puVar40 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar105 ^ 0x5c)];
    puVar46[-0x6c] = 0x187f7;
    puVar46[-0x6b] = 1;
    (*(code *)(puVar16 + -1))(ppuVar110,puVar40 + -2);
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)((&PTR__bootstrap_look_up_10082e9f0)[uVar105 & 0x54ad4595] + -1);
    ppuVar93 = ppuVar110;
    goto switchD_10001a75e_caseD_18809;
  case (undefined **)0x100018851:
    puVar45 = puVar46 + -0x6a;
    puVar65 = puVar46 + -2;
switchD_10001a75e_caseD_18809:
    *(undefined8 *)((long)puVar45 + -8) = 0x10001880b;
    (*(code *)UNRECOVERED_JUMPTABLE_18)(ppuVar93);
    puVar16 = ppuVar108[(int)(uVar105 ^ 0x6b)];
    *(undefined ***)((long)puVar65 + -0xb8) = ppuVar110;
    uVar15 = *(undefined8 *)((long)puVar65 + -0x108);
    *(undefined **)((long)puVar65 + -0x88) = puVar16 + -2;
    *(undefined8 *)((long)puVar45 + -8) = 0x100018835;
    uVar15 = (*(code *)(puVar16 + -2))(ppuVar110,uVar15);
    UNRECOVERED_JUMPTABLE_19 = (code *)ppuVar108[(int)(uVar105 ^ 0x5b)];
    *(code **)((long)puVar65 + -0xa0) = UNRECOVERED_JUMPTABLE_19;
    *(undefined8 *)((long)puVar45 + -8) = 0x100018850;
    puVar16 = (undefined *)(*UNRECOVERED_JUMPTABLE_19)(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010001888d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000187b7 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)((puVar16 == ppuVar108[(int)(uVar105 & 0xeb29af86)] + -0xe) + uVar105)
                        ]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001897b:
    ppuVar17 = (undefined **)(ulong)puVar46[-0x14];
  case (undefined **)0x100018883:
    *(int *)((long)ppuVar17 + 1U) = *(int *)((long)ppuVar17 + 1U) + -1;
    UNRECOVERED_JUMPTABLE_18 = UNRECOVERED_JUMPTABLE_18 + 0x20003323;
    *(uint *)UNRECOVERED_JUMPTABLE_18 =
         *(uint *)UNRECOVERED_JUMPTABLE_18 << 0x10 | *(uint *)UNRECOVERED_JUMPTABLE_18 >> 0x10;
    *(uint **)(puVar46 + -0x18) = puVar13;
    lVar19 = *(long *)(puVar46 + -0x28);
    uVar15 = *(undefined8 *)(lVar19 + -0xa8b2fd12c86b103);
    *(undefined **)(puVar46 + -0x6c) = &UNK_1000188b2;
    (**(code **)(puVar46 + -0x1e))(uVar15);
    *(undefined8 *)(lVar19 + -0xa8b2fd12c86b103) = *(undefined8 *)(puVar46 + -0x4a);
    **(undefined4 **)(puVar46 + -0x62) = (int)*(undefined8 *)(puVar46 + -0x36);
    piVar4 = *(int **)(puVar46 + -0x56);
    iVar36 = *piVar4;
    *(long *)(puVar46 + -0x28) = lVar19;
    lVar19 = *(long *)(lVar19 + -0xa8b2fd12c86b103);
    uVar94 = (*(long *)(puVar46 + -0x6a) - (*(long *)(puVar46 + -0x6a) * 2 & 0x681f333462e1d3ccU)) +
             0xb40f999a3170e9e6;
    lVar18 = (ulong)((iVar36 + 0x8d9ec879U) * 2 & 0xb7ed7a7a) +
             ((ulong)(iVar36 + 0x8d9ec879U) ^ 0xbfbbdfea5bf6bd3d) + 0x40442015a40942c3;
    *(undefined4 *)(lVar19 + lVar18) = 0xffffffff;
    *(undefined2 *)(lVar19 + 4 + lVar18) = 0xffff;
    uVar12 = uVar94 >> 8 & 0xffffff ^ 0xe9;
    *(char *)(lVar19 + 6 + lVar18) = (char)uVar12;
    *(byte *)(lVar19 + 7 + lVar18) = (byte)uVar94 ^ 0xe6;
    *(int **)(puVar46 + -0x56) = piVar4;
    *piVar4 = *piVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x0001000189ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_100018982 + (int)UINT_1006d1134))
                   (*(undefined8 *)(puVar46 + -0x1c),0xb40f999a3170e9e6,uVar12,
                    &LAB_100018982 + (int)UINT_1006d1134,*(undefined8 *)(puVar46 + -0x14),0x3166a97d
                   );
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000189c2:
    uVar9 = puVar46[(long)((long)UNRECOVERED_JUMPTABLE_18 + -0x6a)];
    *(undefined8 *)(puVar46 + -0x24) = *(undefined8 *)(puVar46 + -0x2c);
    *(undefined8 *)(puVar46 + -0x2a) = *(undefined8 *)(puVar46 + -0x30);
                    /* WARNING: Could not recover jumptable at 0x000100018a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((ulong)uVar9 + 0x1000189b0))
                   (ppuVar93,ppuVar89,*(undefined8 *)(puVar46 + -0x18),
                    *(undefined8 *)(puVar46 + -0x20),*(undefined8 *)(puVar46 + -0x14),puVar46[-0x16]
                   );
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018a78:
    uVar9 = uVar98 * 2 + 0x93df884c;
    uVar88 = uVar9 ^ 0x365a7ffa;
    uVar9 = uVar9 & 0x365a7ffa;
    UNRECOVERED_JUMPTABLE = (undefined **)(ulong)(uVar88 + uVar9 * 2);
    uVar9 = uVar88 + uVar9 * 2 + 0x52720170;
    ppuVar93 = (undefined **)(ulong)uVar9;
    uVar12 = (ulong)((uVar28 | 0xfffffc6d) < uVar9);
    if ((uVar28 | 0xfffffc6d) < 0x88cc816a != uVar9 < 0x88cc816a) {
      uVar12 = (ulong)(uVar9 < 0x88cc816a);
    }
code_r0x000100018ada:
                    /* WARNING: Could not recover jumptable at 0x000100018af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                   (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                              [(int)(((uint)uVar12 & 0xff) + uVar37 + 0x78ad9ecb)]))
                   (ppuVar93,(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                                     (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                                                [(int)(((uint)uVar12 & 0xff) + uVar37 + 0x78ad9ecb)]
                                     ),UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018aee:
    goto code_r0x000100018ada;
  case (undefined **)0x100018b58:
    puVar46[-0x6c] = 0x18b60;
    puVar46[-0x6b] = 1;
    lVar19 = (**(code **)(puVar46 + -0x26))(uVar92 + uVar28);
    UNRECOVERED_JUMPTABLE_13 =
         (undefined **)
         (&DAT_100018b37 +
         (int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar105 + (lVar19 == 0))]);
code_r0x000100018b86:
    *(undefined8 *)((long)puVar66 + -0x148) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100018b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_13)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018bac:
    *(ulong *)(puVar46 + -0x1c) = (ulong)(uVar28 + uVar97);
    *ppuVar108 = (undefined *)0x0;
    ppuVar108[1] = (undefined *)0x4d14149255b31aa0;
    *(undefined4 *)(ppuVar108 + 2) = 0;
    goto code_r0x000100018bd4;
  case (undefined **)0x100018bd0:
    *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar27;
    *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar27;
code_r0x000100018bd4:
    puVar46[-0x6c] = 0x18bdc;
    puVar46[-0x6b] = 1;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)ppuVar110)(0x1000);
switchD_10001a75e_caseD_18bdc:
    *ppuVar108 = (undefined *)UNRECOVERED_JUMPTABLE_18;
                    /* WARNING: Could not recover jumptable at 0x000100018bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100018b98 +
                   *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                           (long)(int)((int)ppuVar103 +
                                      (uint)(UNRECOVERED_JUMPTABLE_18 == (undefined **)0x0)) * 4)))
                   ();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018c1b:
    if (!bVar112) goto LAB_100018c65;
    UNRECOVERED_JUMPTABLE_13 = (undefined **)0x1a4a3;
    ppuVar96 = (undefined **)(ulong)(uVar28 < 0x8a775cb9);
    ppuVar89 = (undefined **)(ulong)(uVar92 * 2 + 0x645ac81c);
    break;
  case (undefined **)0x100018c2c:
    *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar27;
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x775cb93d) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x775cb93d) + cVar8);
    cVar41 = *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001996a);
    puVar42 = puVar46 + -0xdf8e8b5;
    *(byte *)puVar42 = (byte)*puVar42 >> 2 | (byte)*puVar42 << 6;
    uVar28 = uVar32;
    uVar32 = (uint)CONCAT71(iVar23,cVar41);
    break;
  case (undefined **)0x100018c41:
    uVar9 = uVar92;
    break;
  case (undefined **)0x100018db5:
    *(int *)((long)puVar46 + -7) = *(int *)((long)puVar46 + -7) + -1;
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001995a);
    *(uint *)UNRECOVERED_JUMPTABLE_19 =
         *(uint *)UNRECOVERED_JUMPTABLE_19 << 1 | *(uint *)UNRECOVERED_JUMPTABLE_19 >> 0x1f;
    in(99);
code_r0x000100018dbe:
    uVar107 = *(uint *)(ppuVar96 + 1);
    iVar36 = *(int *)((long)ppuVar96 + 0xc);
    uVar28 = uVar32 + 0x8129e39c & 0x27 ^ 0x9fffaab9;
code_r0x000100018ddb:
    bVar111 = uVar28 + iVar36 < 0x1260e242;
    bVar95 = uVar107 + 0xdc50a668 < uVar28 + iVar36;
    if (uVar107 + 0xdc50a668 < 0x1260e242 != bVar111) {
      bVar95 = bVar111;
    }
                    /* WARNING: Could not recover jumptable at 0x000100018e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(switchD_10001cb4f::caseD_0 +
           (int)*(uint *)((long)ppuVar103 + (ulong)(bVar95 + uVar32) * 4)))
                   (bVar111,switchD_10001cb4f::caseD_0 +
                            (int)*(uint *)((long)ppuVar103 + (ulong)(bVar95 + uVar32) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018ecc:
    bVar117 = 0xb4;
    if (uVar98 < uVar92 + 0xf9ba9d2b == true) {
      bVar117 = uVar98 < uVar31;
    }
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + (long)puVar100) =
         *(code *)((long)UNRECOVERED_JUMPTABLE + (long)puVar100);
                    /* WARNING: Could not recover jumptable at 0x000100018f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100018eaf +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(bVar117 + uVar92)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100018fa8:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + ((ulong)(puVar46 + -0x6a) & 0xffffffff) + 0x100019929
             ) = (code)0x48;
switchD_10001a75e_caseD_18f9c:
                    /* WARNING: Could not recover jumptable at 0x000100018fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100018f50 +
                   *(int *)((long)ppuVar110 +
                           (long)(int)((uint)((int)ppuVar93 == 0x46258109) + (int)uVar12) * 4)))
                   (ppuVar93,(ulong)ppuVar93 & 0xffffffff,UNRECOVERED_JUMPTABLE,
                    UNRECOVERED_JUMPTABLE_13,
                    &DAT_100018f50 +
                    *(int *)((long)ppuVar110 +
                            (long)(int)((uint)((int)ppuVar93 == 0x46258109) + (int)uVar12) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019065:
    *(int *)((long)UNRECOVERED_JUMPTABLE_18 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_18 + 1) + -1
    ;
    puVar42 = (uint *)((long)UNRECOVERED_JUMPTABLE_13 * 5 + -0x25);
    *puVar42 = *puVar42 >> 0xc | *puVar42 << 0x14;
                    /* WARNING: Could not recover jumptable at 0x000100019070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_13)(ppuVar93,ppuVar89,puVar46[-0x1c]);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019099:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x75) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x75) | 0x75);
    UNRECOVERED_JUMPTABLE_18 = (undefined **)CONCAT71(iVar23,0x97);
    puVar53 = puVar46 + -0x6a;
    goto switchD_10001a75e_caseD_19089;
  case (undefined **)0x1000190d4:
    puVar46[-0x3a] = uVar28;
    puVar53 = puVar46 + -0x6a;
    puVar67 = puVar46 + -2;
switchD_10001a75e_caseD_19089:
    ppuVar89 = *(undefined ***)((long)puVar67 + -0x50);
    *(int *)((long)ppuVar89 + -0x7f31ac3dd4da00bc) =
         (int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_18 >> 8),
                       (char)UNRECOVERED_JUMPTABLE_18 + 'A') + 0x77bb7eff;
    *(undefined4 *)(ppuVar89 + -0xfe63587ba9b4017) = 0x4d141492;
    uVar11 = 0x3166a97d;
    uVar107 = 0x8b830d;
    *(undefined ***)((long)puVar67 + -0x48) = ppuVar89;
    *(undefined8 *)((long)puVar67 + -0xa8) = *(undefined8 *)((long)puVar67 + -0x78);
    *(undefined8 *)((long)puVar67 + -0xe0) = *(undefined8 *)((long)puVar67 + -0x98);
    ppuVar110 = *(undefined ***)((long)puVar67 + -200);
    goto LAB_1000190e1;
  case (undefined **)0x10001910d:
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x75);
    *(uint *)UNRECOVERED_JUMPTABLE_19 =
         *(uint *)UNRECOVERED_JUMPTABLE_19 >> 0x1d | *(uint *)UNRECOVERED_JUMPTABLE_19 << 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100019167:
    *(ulong *)(puVar46 + -0x16) = (ulong)((uVar97 ^ 0x75) * 0x1f);
    puVar16 = ppuVar110[uVar107 & 0x132cbf99];
    puVar40 = ppuVar110[uVar107 & 0x7d24ea2d];
    puVar46[-0x6c] = 0x191a2;
    puVar46[-0x6b] = 1;
    (*(code *)(puVar16 + -1))(UNRECOVERED_JUMPTABLE_18,puVar40 + -2);
    puVar16 = ppuVar110[(int)(uVar107 ^ 100)];
    puVar46[-0x6c] = 0x191b6;
    puVar46[-0x6b] = 1;
    (*(code *)(puVar16 + -1))(UNRECOVERED_JUMPTABLE_18);
    puVar16 = ppuVar110[(int)(uVar107 - 0x5b)];
    *(undefined ***)(puVar46 + -0x3a) = UNRECOVERED_JUMPTABLE_18;
    puVar46[-0x6c] = 0x191d8;
    puVar46[-0x6b] = 1;
    uVar15 = (*(code *)(puVar16 + -2))(UNRECOVERED_JUMPTABLE_18,*(undefined8 *)(puVar46 + -0x34));
    UNRECOVERED_JUMPTABLE_19 = (code *)ppuVar110[(int)(uVar107 - 0x4b)];
    puVar46[-0x6c] = 0x191ea;
    puVar46[-0x6b] = 1;
    puVar16 = (undefined *)(*UNRECOVERED_JUMPTABLE_19)(uVar15);
    lVar19 = (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                        [(int)((puVar16 == ppuVar110[(int)(uVar107 - 0x6d)] + -0xe) + uVar107)];
    puVar16 = &DAT_10001914c;
code_r0x000100019219:
                    /* WARNING: Could not recover jumptable at 0x000100019222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(puVar16 + lVar19))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019231:
    cVar8 = bVar27 + (char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x97072bc);
    lVar19 = CONCAT71(iVar23,cVar8);
    if (cVar8 == '\0' ||
        SCARRY1(bVar27,(char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x97072bc)) != cVar8 < '\0'
       ) {
      puVar16 = (undefined *)0x1914c;
      goto code_r0x000100019219;
    }
code_r0x000100019239:
    lVar19 = CONCAT71((int7)((ulong)lVar19 >> 8),
                      ((byte)lVar19 | (byte)*(code *)(ppuVar89 + -0xf)) + 8);
    *(code *)(lVar19 + (ulong)(uVar92 + 0xb9da7ef5)) =
         *(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar92 + 0xb9da7ef5));
    *(code *)(lVar19 + (ulong)(uVar92 + 0xb9da7ef4)) =
         *(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar92 + 0xb9da7ef4));
    *(code *)(lVar19 + (ulong)(uVar92 + 0xb9da7ef3)) =
         *(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar92 + 0xb9da7ef3));
                    /* WARNING: Could not recover jumptable at 0x00010001929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_100019226 +
                   (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                        [(int)((uVar92 - 4 == uVar97 + 0xbed31fc2) + uVar31)]))
                   (uVar92 - 4,
                    (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                               [(int)((uVar92 - 4 == uVar97 + 0xbed31fc2) + uVar31)],
                    UNRECOVERED_JUMPTABLE,0x14b60f46);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001924d:
    lVar19 = CONCAT71(iVar23,bVar27 + 10 + bVar95);
    goto code_r0x000100019239;
  case (undefined **)0x100019259:
    lVar19 = CONCAT71(iVar23,(bVar27 | (byte)*(code *)(ppuVar89 + -0xf)) + 8);
    goto code_r0x000100019239;
  case (undefined **)0x100019314:
    in(1);
    puVar42 = (uint *)((long)puVar46 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + -0x81);
    *puVar42 = *puVar42 << 7 | *puVar42 >> 0x19;
    uVar9 = (uint)(uVar31 < uVar91);
    if (uVar31 < 0x51892099 != uVar91 < 0x51892099) {
      uVar9 = (uint)CONCAT71(0x3165f9,uVar91 < 0x51892099);
    }
                    /* WARNING: Could not recover jumptable at 0x000100019368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_1000192f4 +
                   (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)((uVar9 & 0xff) + uVar97)])
         )(ppuVar93,&DAT_1000192f4 +
                    (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)((uVar9 & 0xff) + uVar97)]
          );
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001932a:
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000198dc);
    *(uint *)UNRECOVERED_JUMPTABLE_19 =
         *(uint *)UNRECOVERED_JUMPTABLE_19 << 0x18 | *(uint *)UNRECOVERED_JUMPTABLE_19 >> 8;
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x9210daac) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x9210daac) & bVar26);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019443:
    uVar9 = (uVar37 ^ (uint)DAT_10088e7f8) * 0x79f54c43;
                    /* WARNING: Could not recover jumptable at 0x000100019486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)ppuVar108[(int)((byte)((byte)uVar9 ^
                                         (&DAT_1006d1a30)[(byte)(&DAT_1006d0b70)[uVar9 & 0xff] ^ 99]
                                         ) - 0x32)])((uVar28 - 0x875328) - (uint)bVar95);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000194fa:
code_r0x0001000194a1:
    ppuVar89 = (undefined **)((long)ppuVar89 + (long)puVar104);
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar88 ^ 9);
    uVar12 = (ulong)*(byte *)(*(long *)((long)puVar104 + -0x18646b13513134f3) +
                             (ulong)((int)ppuVar93 + 0xa66ae930)) << 0x18;
    uVar9 = (int)ppuVar93 + 0xb;
    ppuVar93 = (undefined **)(ulong)uVar9;
    *(uint *)ppuVar89 = uVar9;
    ppuVar103 = (undefined **)puVar104;
switchD_10001a75e_caseD_1952a:
    lVar19 = (long)*(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                           (long)(int)((uint)(ppuVar103 == UNRECOVERED_JUMPTABLE) +
                                      (int)UNRECOVERED_JUMPTABLE_18) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001954c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_100019526 + lVar19))
                   (ppuVar93,ppuVar89,&LAB_100019526 + lVar19,lVar19,UNRECOVERED_JUMPTABLE_12,uVar12
                   );
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001954f:
    puVar46[-0x1e] = uVar32;
    ppuVar89 = (undefined **)0x18646b13513134f3;
    uVar9 = uVar107 ^ 10;
    DAT_48ffffff68a5894c = bVar27;
    *(undefined4 *)((long)puVar100 + 8) = 0x54796f16;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (&caseD_1954f_1 +
         *(int *)((long)puVar13 +
                 (ulong)(uVar107 + ((undefined **)puVar100 == (undefined **)0x0)) * 4));
    *(undefined **)(puVar46 + -0x4a) = ppuVar110[uVar107 | 4] + -1;
code_r0x0001000195a7:
    *(undefined ***)((long)puVar68 + -0xe8) = ppuVar93;
    *(undefined ***)((long)puVar68 + -0xb8) = ppuVar93;
    *(undefined ***)((long)puVar68 + -0xd0) = ppuVar93;
    *(undefined ***)((long)puVar68 + -0xd8) = ppuVar93;
    *(undefined ***)((long)puVar68 + -200) = ppuVar93;
    *(undefined ***)((long)puVar68 + -0xc0) = ppuVar93;
    *(undefined ***)((long)puVar68 + -0x50) = ppuVar89;
                    /* WARNING: Could not recover jumptable at 0x0001000195d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)(ppuVar93,ppuVar89,uVar9,0);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000195f1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001962b:
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + 99);
    bVar95 = CARRY1((byte)*UNRECOVERED_JUMPTABLE_19,bVar26);
    *UNRECOVERED_JUMPTABLE_19 = (code)((char)*UNRECOVERED_JUMPTABLE_19 + bVar26);
    puVar69 = *(uint **)(puVar46 + -2);
code_r0x000100019629:
    UNRECOVERED_JUMPTABLE_19 =
         (code *)((long)*(int *)((long)puVar100 +
                                (long)(int)((int)UNRECOVERED_JUMPTABLE_13 + (uint)bVar95) * 4) +
                 0x1000195fc);
    *(undefined ***)((long)puVar69 + -0xc0) = ppuVar89;
    *(undefined ***)((long)puVar69 + -0xa0) = ppuVar89;
    *(undefined ***)((long)puVar69 + -0xb8) = ppuVar89;
    *(undefined ***)((long)puVar69 + -0xb0) = ppuVar89;
    *(undefined ***)((long)puVar69 + -0xd0) = ppuVar89;
    *(undefined8 *)((long)puVar69 + -0x48) = 0x7f31ac3dd4da00c4;
                    /* WARNING: Could not recover jumptable at 0x000100019676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE_19)
                   (ppuVar93,0x7f31ac3dd4da00c4,UNRECOVERED_JUMPTABLE_19,0,0x3165f9b3);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000196a4:
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019834:
code_r0x000100019838:
    uVar37 = uVar38 ^ 10;
    ppuVar89 = (undefined **)&DAT_10001c439;
    uVar28 = (uint)UNRECOVERED_JUMPTABLE_18;
    bVar95 = uVar28 < 0x882ec917;
    uVar9 = uVar32;
code_r0x000100019855:
    uVar9 = uVar9 * 2 + 0x645ac81c;
    uVar9 = (uVar9 << ((char)uVar37 + 0x5fU & 0x1f) & 0xfbef3fec) + (uVar9 ^ 0x7df79ff6) + 0xa372921
    ;
    ppuVar99 = (undefined **)(ulong)(uVar28 < uVar9);
    if (bVar95 != uVar9 < 0x882ec917) {
      ppuVar99 = (undefined **)(ulong)(uVar9 < 0x882ec917);
    }
code_r0x0001000198a8:
                    /* WARNING: Could not recover jumptable at 0x0001000198b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar89 +
                   (long)*(int *)((long)puVar100 +
                                 (long)(int)(((uint)ppuVar99 & 0xff) + uVar107) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001984f:
    bVar95 = CARRY1(bRam000000008830616c,(byte)cVar41);
    bRam000000008830616c = bRam000000008830616c + (char)cVar41;
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
    *(undefined ***)(puVar46 + -0x6c) = UNRECOVERED_JUMPTABLE_13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001999d:
    *(uint *)((long)UNRECOVERED_JUMPTABLE + 0x49) =
         *(int *)((long)UNRECOVERED_JUMPTABLE + 0x49) + uVar37;
    *(uint *)((code *)((ulong)UNRECOVERED_JUMPTABLE_13 & 0xffffffff) + 8) = uVar28;
    puVar46[-0x6c] = 0x199aa;
    puVar46[-0x6b] = 1;
    (*(code *)((ulong)UNRECOVERED_JUMPTABLE_13 & 0xffffffff))(puVar100);
    goto switchD_100017043_caseD_1;
  case (undefined **)0x1000199b8:
    puVar48 = puVar46 + -0x6a;
    puVar70 = puVar46 + -2;
    ppuVar110 = ppuVar99;
switchD_100017043_caseD_1:
    ppuVar99 = ppuVar110;
    if (*(long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                          (uint)PTR____stack_chk_guard_10082cb58) !=
        *(long *)((long)puVar70 + -0x30)) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)((long)puVar48 + -8) = &UNK_1000160b2;
      ___stack_chk_fail();
    }
code_r0x0001000199c1:
    return (undefined **)(ulong)((int)ppuVar99 + 0xce995683);
  case (undefined **)0x1000199c9:
    goto code_r0x0001000199c1;
  case (undefined **)0x1000199d6:
    goto code_r0x0001000199c1;
  case (undefined **)0x1000199f3:
    puVar49 = puVar46 + -0x6a;
    puVar71 = puVar46 + -2;
    goto code_r0x0001000199dd;
  case (undefined **)0x100019a26:
    goto switchD_10001997c_caseD_19a26;
  case (undefined **)0x100019a4c:
    if (UNRECOVERED_JUMPTABLE_13 != (undefined **)0x0) {
      bVar90 = in((short)uVar32);
      *(byte *)ppuVar93 = bVar90;
                    /* WARNING: Could not recover jumptable at 0x000100019a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&UNK_100019a4f +
                     *(int *)((long)ppuVar96 +
                             (long)(int)((uVar37 - 0x9e | 0xa0) +
                                        (uint)((undefined **)puVar100 == (undefined **)0x0)) * 4)))
                     ((byte *)((long)ppuVar93 + (ulong)bVar117 * -2 + 1),ppuVar89,
                      UNRECOVERED_JUMPTABLE,0);
      return UNRECOVERED_JUMPTABLE_18;
    }
    *(int *)((long)puVar46 + 0x41) = *(int *)((long)puVar46 + 0x41) + uVar10;
    *puVar46 = uVar28;
    goto code_r0x0001000199dd;
  case (undefined **)0x100019b27:
    UNRECOVERED_JUMPTABLE_19 = (code *)swi(1);
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*UNRECOVERED_JUMPTABLE_19)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019b87:
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar28 & 0xce53c22b);
    *(int *)((long)ppuVar93 + -0x4d) = *(int *)((long)ppuVar93 + -0x4d) + 1;
    ppuVar103 = (undefined **)0x6d0f23;
    UNRECOVERED_JUMPTABLE = (undefined **)*ppuVar108;
    ppuVar89 = (undefined **)(ulong)(*(int *)(ppuVar108 + 1) + 0x6d0f23);
code_r0x000100019bab:
    uVar88 = (int)ppuVar89 + 0xf4661287;
    ppuVar93 = (undefined **)(ulong)uVar88;
    uVar9 = (uint)ppuVar103;
    *(undefined ***)((long)puVar72 + -0x158) = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE_13 = (undefined **)&DAT_100015786;
    ppuVar89 = (undefined **)(ulong)(uVar88 * 2);
    uVar12 = 0xe2846e74;
    uVar31 = uVar9 + 0xe2846e74;
switchD_10001a75e_caseD_1a4db:
    UNRECOVERED_JUMPTABLE_19 =
         (code *)((long)*(int *)((long)puVar13 +
                                (long)(int)(uVar9 + (UNRECOVERED_JUMPTABLE_18 <
                                                    UNRECOVERED_JUMPTABLE)) * 4) + 0x10001a4cf);
                    /* WARNING: Could not recover jumptable at 0x00010001a509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE_19)
                   ((((int)ppuVar93 + (int)uVar12) - (uVar31 - 3 & (uint)ppuVar89)) + 0xebdc8ce,
                    (long)*(int *)((long)puVar13 +
                                  (long)(int)(uVar9 + (UNRECOVERED_JUMPTABLE_18 <
                                                      UNRECOVERED_JUMPTABLE)) * 4),
                    UNRECOVERED_JUMPTABLE,UNRECOVERED_JUMPTABLE_13,UNRECOVERED_JUMPTABLE_19);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019cdf:
                    /* WARNING: Could not recover jumptable at 0x000100019ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(ulong)(uVar32 + uVar91))
                   (*(undefined8 *)(puVar46 + -0x44),ppuVar89,(code *)(ulong)(uVar32 + uVar91));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019d80:
    ppuVar99 = (undefined **)(ulong)(uVar31 + uVar92 * 2);
code_r0x000100019d8f:
    ppuVar99 = (undefined **)(ulong)((int)ppuVar99 + 0x940762b6);
code_r0x000100019d96:
    uVar9 = (uint)ppuVar99;
    bVar95 = uVar32 < uVar9;
    if (uVar9 < 0xfc7622d != true) {
      bVar95 = uVar9 < 0xfc7622d;
    }
                    /* WARNING: Could not recover jumptable at 0x000100019dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar89 +
                   (long)*(int *)((long)puVar13 + (long)(int)(bVar95 + uVar28) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019d8a:
    *(undefined8 *)((long)puVar46 + -0x7b) = *(undefined8 *)(puVar46 + -0x6a);
    uVar28 = (uint)CONCAT71(iVar23,bVar27 + 0x78 + bVar95);
    goto code_r0x000100019d8f;
  case (undefined **)0x100019d8e:
    if (bVar115) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar32 = uVar32 + 0x940762b6;
    goto code_r0x000100019d96;
  case (undefined **)0x100019ebb:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000199be) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000199be) + bVar26);
code_r0x000100019e96:
    *(undefined4 *)(UNRECOVERED_JUMPTABLE_18 + 2) = 0;
    *(undefined ***)((long)puVar73 + -0x48) = UNRECOVERED_JUMPTABLE_18;
    *(undefined8 *)((long)puVar51 + -8) = 0x100019ea9;
    lVar19 = (*(code *)ppuVar103)(0x1000);
    **(long **)((long)puVar73 + -0x48) = lVar19;
                    /* WARNING: Could not recover jumptable at 0x000100019ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(switchD_100017043::caseD_0 + *(int *)((long)puVar13 + (ulong)((lVar19 == 0) + 2) * 4)))
                   ();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100019f74:
    puVar52 = puVar46 + -0x6a;
    puVar74 = puVar46 + -2;
LAB_100019ee2:
    uVar15 = *(undefined8 *)((long)UNRECOVERED_JUMPTABLE_12 + -0x3cd24ee3f7b6c2e5);
    UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar74 + -0x70);
    *(undefined8 *)((long)puVar52 + -8) = 0x100019ef3;
    (*UNRECOVERED_JUMPTABLE_19)(uVar15);
    *(undefined8 *)((long)UNRECOVERED_JUMPTABLE_12 + -0x3cd24ee3f7b6c2e5) =
         *(undefined8 *)((long)puVar74 + -0x130);
    **(undefined4 **)((long)puVar74 + -0x180) = (int)*(undefined8 *)((long)puVar74 + -0xc0);
    uVar88 = *(uint *)ppuVar103;
    uVar9 = uVar9 - 0x67 | 0x68;
    *(undefined ***)((long)puVar74 + -0xa0) = UNRECOVERED_JUMPTABLE_12;
    lVar19 = *(long *)((long)UNRECOVERED_JUMPTABLE_12 + -0x3cd24ee3f7b6c2e5);
    lVar18 = (*(long *)((long)puVar74 + -0x1a0) -
             (*(long *)((long)puVar74 + -0x1a0) * 2 & 0x681f333462e1d3ccU)) + (ulong)uVar9 +
             -0x4bf06665ce8f1685;
    lVar33 = ((ulong)(uVar88 + 0xb5fe3479) * 2 & 0x13fbffd7a) +
             ((ulong)(uVar88 + 0xb5fe3479) ^ 0x2efa9f7d9fdffebd) + 0xd105608260200143;
    *(byte *)(lVar19 + lVar33) = (byte)((ulong)lVar18 >> 0x38) ^ 0xb4;
    *(byte *)(lVar19 + 1 + lVar33) = (byte)((ulong)lVar18 >> 0x30) ^ 0xf;
    *(byte *)(lVar19 + 2 + lVar33) = (byte)((ulong)lVar18 >> 0x28) ^ 0x99;
    *(byte *)(lVar19 + 3 + lVar33) = (byte)((ulong)lVar18 >> 0x20) ^ 0x9a;
    *(byte *)(lVar19 + 4 + lVar33) = (byte)((ulong)lVar18 >> 0x18) ^ 0x31;
    *(byte *)(lVar19 + 5 + lVar33) = (byte)((ulong)lVar18 >> 0x10) ^ 0x70;
    *(byte *)(lVar19 + 6 + lVar33) = (byte)((ulong)lVar18 >> 8) ^ 0xe9;
    *(byte *)(lVar19 + 7 + lVar33) = (byte)lVar18 ^ 0xe6;
    *(undefined ***)((long)puVar74 + -0x78) = ppuVar103;
    *(uint *)ppuVar103 = *(uint *)ppuVar103 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010001a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)puVar13 + (long)(int)(uVar9 + 1) * 4) + 0x10001a00b))();
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
    uVar11 = *(undefined4 *)ppuVar89;
    puVar46[-0x6c] = 0x1a154;
    puVar46[-0x6b] = 1;
    (**(code **)(puVar46 + -0x1e))(uVar11);
    *ppuVar108 = *(undefined **)(puVar46 + -0x4c);
    **(undefined4 **)(puVar46 + -0x60) = (int)*(undefined8 *)(puVar46 + -0x3c);
    piVar4 = *(int **)(puVar46 + -0x56);
    iVar36 = *piVar4;
    *(uint **)(puVar46 + -0x20) = &switchD_1000183ca::switchdataD_1006d0f70;
    uVar9 = uVar37 + 0x2c | 0x81;
    puVar16 = *ppuVar108;
    puVar16[iVar36 + 0xb5fe3479] = 0;
    puVar16[iVar36 + 0xb5fe347a] = 0;
    puVar16[iVar36 + 0xb5fe347b] = 0;
    puVar16[iVar36 + 0xb5fe347c] = 1;
    *(int **)(puVar46 + -0x56) = piVar4;
    *piVar4 = *piVar4 + (uVar9 ^ 0xb5);
                    /* WARNING: Could not recover jumptable at 0x00010001a1ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)puVar13 + (long)(int)(uVar9 + 1) * 4) + 0x10001a1cb))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001a2f0:
  case (undefined **)0x10001a2d1:
    uVar88 = uVar9 + 0xba46da9b;
    uVar28 = (uVar9 + 0x8a025b22 & 0x75fda4df) + 0x45b924aa;
    ppuVar89 = (undefined **)(ulong)uVar28;
    ppuVar93 = (undefined **)&DAT_100016bc9;
    bVar95 = uVar91 + 0x45b93508 < 0x45b94508;
    if (uVar88 < uVar91 + 0x1000 != 0x45b94508 < uVar28) {
      bVar95 = 0x45b94508 < uVar28;
    }
    ppuVar99 = (undefined **)(long)*(int *)(&DAT_1006d13e0 + (long)(int)(bVar95 + uVar9) * 4);
    goto code_r0x00010001a377;
  case (undefined **)0x10001a370:
    goto switchD_10001a75e_caseD_1a370;
  case (undefined **)0x10001a404:
    *(code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x6b) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_12 + 0x6b) | bVar34);
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000199be) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000199be) + bVar26);
    uVar28 = (uint)CONCAT71(iVar23,bVar27) | 0x8b;
  case (undefined **)0x10001a3ea:
    puVar46[-0x6c] = 0x1a3f7;
    puVar46[-0x6b] = 1;
    lVar19 = (**(code **)(puVar46 + -0x22))(uVar107 + uVar28 + -0x6df300b8);
    UNRECOVERED_JUMPTABLE =
         (undefined **)
         (&DAT_10001a3c1 +
         (int)(&switchD_100019e65::switchdataD_1006d1710)[(int)(uVar37 + (lVar19 == 0))]);
    puVar46[-0x48] = 0;
    puVar46[-0x47] = 0;
    puVar46[-0x32] = 0;
    puVar46[-0x31] = 0;
    puVar46[-0x2a] = 0;
    puVar46[-0x29] = 0;
    puVar46[-0x30] = 0;
    puVar46[-0x2f] = 0;
    puVar46[-0x2e] = 0;
    puVar46[-0x2d] = 0;
    puVar46[-0x36] = 0;
    puVar46[-0x35] = 0;
    puVar46[-0x14] = 0xd4da00c4;
    puVar46[-0x13] = 0x7f31ac3d;
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
    uVar94 = (ulong)((int)uVar12 + (int)ppuVar89 + 0xb9da7edf);
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + uVar94) =
         *(code *)((long)UNRECOVERED_JUMPTABLE + uVar94);
                    /* WARNING: Could not recover jumptable at 0x00010001a869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001a831 +
                   *(int *)((long)ppuVar110 +
                           (long)(int)((uint)(uVar98 + 1 == (int)puVar101) + (int)uVar12) * 4)))
                   (ppuVar93,(int)ppuVar89 + -1);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001a8a7:
    UNRECOVERED_JUMPTABLE_18 = (undefined **)CONCAT71(iVar23,bVar95);
switchD_10001a75e_caseD_1a86b:
    out(0x7f,(char)UNRECOVERED_JUMPTABLE_18);
    uVar88 = (int)UNRECOVERED_JUMPTABLE_18 + 0x701f5920U & 0x8fe0a6eb;
    uVar28 = uVar32 + uVar88 + 0x1fa8ea52;
    uVar9 = uVar32 * 2 + 0x570d41d4;
    uVar9 = ((uVar88 - 0xa2 | 0x9e) ^ uVar9 ^ 0xddf95f89) + (uVar9 & 0xddf95f16) * 2 + 0x9628eaed;
    bVar95 = uVar28 < uVar9;
    if (uVar28 < 0x74224a03 != uVar9 < 0x74224a03) {
      bVar95 = uVar9 < 0x74224a03;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001a90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&UNK_10001659d + *(int *)((long)puVar13 + (long)(int)(bVar95 + uVar88) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001a8d6:
    *(code *)((long)ppuVar89 + 0x41d23145) =
         (code)((char)*(code *)((long)ppuVar89 + 0x41d23145) - cVar8);
    goto switchD_10001a75e_caseD_1a86b;
  case (undefined **)0x10001a9a3:
                    /* WARNING: Could not recover jumptable at 0x00010001a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001a9a2 +
                   *(int *)((long)puVar13 + (long)(int)((uVar91 & 1) + uVar37) * 4)))
                   (ppuVar93,uVar37 + 0xb2303125,UNRECOVERED_JUMPTABLE,
                    &DAT_10001a9a2 +
                    *(int *)((long)puVar13 + (long)(int)((uVar91 & 1) + uVar37) * 4),puVar13);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ab9b:
    uVar9 = (uVar28 & 0xfffabeac) + (uVar97 ^ 0xfffd5f56) + 0xdb4d4f3c;
    bVar95 = uVar92 < uVar9;
    if (uVar9 < 0xdb4aae92 != true) {
      bVar95 = uVar9 < 0xdb4aae92;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001abf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar96 +
                   (long)*(int *)((long)puVar13 + (long)(int)(bVar95 + uVar32 + 0x8fac61e) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ad4d:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_18 + -0x7d) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_18 + -0x7d) + uVar91;
    *(uint *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000198de) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_18 + 0x1000198de) + uVar28;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ae88:
    puVar46[-0x6c] = 0x1ae9a;
    puVar46[-0x6b] = 1;
    uVar9 = FUN_1006d0f6d();
    puVar101 = &switchD_100019e65::switchdataD_1006d1710;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(ulong)(uVar9 & 0xfefdbf77);
    uVar32 = (uVar38 ^ 0x4befd794) + (uVar9 ^ 0xfefdbf77);
switchD_10001a75e_caseD_1aeb5:
                    /* WARNING: Could not recover jumptable at 0x00010001aedb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001ae3e +
                   *(int *)((long)puVar101 +
                           (ulong)((uVar32 + (int)UNRECOVERED_JUMPTABLE_18 * 2 ==
                                   (uVar105 ^ 0x5aed973a)) + uVar37) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001aefa:
    puVar46[-0x6c] = 0x1af09;
    puVar46[-0x6b] = 1;
    lVar19 = (**(code **)(puVar46 + -0x22))((uVar92 ^ uVar37 ^ 0x804ce42a) + uVar32);
    UNRECOVERED_JUMPTABLE_13 = (undefined **)(long)(int)(uVar105 + (lVar19 == 0));
    puVar100 = &switchD_100019e65::switchdataD_1006d1710;
switchD_10001997c_caseD_1af1b:
    UNRECOVERED_JUMPTABLE =
         (undefined **)(long)*(int *)((long)puVar100 + (long)UNRECOVERED_JUMPTABLE_13 * 4);
code_r0x00010001af1f:
    *(undefined8 *)((long)puVar77 + -0x148) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010001af3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(UNRECOVERED_JUMPTABLE + 0x200035dc))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001af1b:
    goto switchD_10001997c_caseD_1af1b;
  case (undefined **)0x10001b239:
switchD_10001a75e_caseD_1b212:
    *(undefined8 *)((ulong)*(uint *)((long)puVar78 + -0x98) - 8) = 0x10001b21e;
    lVar19 = (*(code *)ppuVar103)();
    iVar36 = *(int *)((long)ppuVar96 + (long)(int)(uVar9 + (lVar19 == 0)) * 4);
    *(undefined4 *)((long)puVar78 + -0x58) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x00010001b24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001b201 + iVar36))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001b3bc:
    UNRECOVERED_JUMPTABLE_13 = &PTR__bootstrap_look_up_10082e9f0;
    ppuVar93 = (undefined **)
               (ulong)*(uint *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar38 ^ 0xf7053a95)] + -3
                               );
    ppuVar89 = *(undefined ***)(puVar46 + -0x42);
switchD_10001a75e_caseD_1b3dc:
    uVar11 = *(undefined4 *)((long)puVar79 + -0x7c);
    puVar16 = UNRECOVERED_JUMPTABLE_13[(int)(uVar37 + 0x8fac585)];
    *(undefined8 *)((long)puVar55 + -8) = 0x10001b3f4;
    (*(code *)(puVar16 + -2))(ppuVar93,ppuVar89,uVar11);
    iVar36 = *(int *)((long)puVar13 +
                     (long)(int)(uVar37 + 0x8fac58a +
                                (uint)(*(uint *)((long)puVar79 + -0x58) == (uVar88 ^ 0x3166a951))) *
                     4);
    *(undefined ***)((long)puVar79 + -0x50) = ppuVar99;
                    /* WARNING: Could not recover jumptable at 0x00010001b42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001b3a6 + iVar36))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001b52c:
    goto switchD_10001997c_caseD_1b52c;
  case (undefined **)0x10001b957:
    uVar9 = *(int *)((long)puVar100 + 0xc) + 0x3e7352de;
    uVar88 = (uVar32 | 0x94) + *(int *)((long)puVar100 + 8) + 0x33fbbe8d;
    bVar95 = uVar9 < 0x88751e61;
    if (uVar88 < uVar37 + 0x88751da0 == uVar9 < 0x88751e61) {
      bVar95 = uVar88 < uVar9;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001b9be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&caseD_1b944_1 + *(int *)((long)puVar13 + (long)(int)(bVar95 + uVar37) * 4)))
                   (&caseD_1b944_1 + *(int *)((long)puVar13 + (long)(int)(bVar95 + uVar37) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ba88:
    goto switchD_10001997c_caseD_1ba88;
  case (undefined **)0x10001babb:
    iVar36 = *(int *)(ppuVar96 + 1);
    puVar16 = *ppuVar96;
    *(undefined ***)(*(long *)(puVar46 + -2) + -0x130) = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         switchD_100020322::caseD_1b465
                   (UNRECOVERED_JUMPTABLE_18,uVar9 + iVar36,puVar16,&DAT_10001bae2);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001bb37:
    goto switchD_10001997c_caseD_1bb37;
  case (undefined **)0x10001bbc5:
    *(undefined ***)(puVar46 + -0x6c) = UNRECOVERED_JUMPTABLE_13;
    uVar9 = uVar10 + *(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 100);
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) =
         (code)(((char)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x77) - bVar26) -
               (CARRY4(uVar10,*(uint *)((long)UNRECOVERED_JUMPTABLE_12 + 100)) ||
               CARRY4(uVar9,(uint)bVar95)));
    *(ulong *)((ulong)(uVar9 + bVar95) - 0x50) = (ulong)(uint)(int)(short)uVar28;
    UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_100015e19();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001bc2e:
                    /* WARNING: Could not recover jumptable at 0x00010001bc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar28 | 0xffffffe9)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001bcf5:
    return (undefined **)
           CONCAT71(iVar23,bVar27 ^ (&DAT_1006cff50)
                                    [bVar90 ^ (byte)*(code *)(UNRECOVERED_JUMPTABLE_18 + 0xda560)]);
  case (undefined **)0x10001bd4a:
    lVar18 = *(long *)(puVar46 + -2);
    lVar19 = *(long *)((long)puVar13 + (long)UNRECOVERED_JUMPTABLE_13 * 8);
    puVar46[-2] = 0x1bd5c;
    puVar46[-1] = 1;
    (*(code *)UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE_18,lVar19 + -2);
    lVar19 = *(long *)((long)puVar13 + 0x36878a0);
    puVar46[-2] = 0x1bd71;
    puVar46[-1] = 1;
    (*(code *)(lVar19 + -1))(UNRECOVERED_JUMPTABLE_18);
    lVar19 = *(long *)((long)puVar13 + 0x36878a8);
    *(undefined ***)(lVar18 + -0x88) = UNRECOVERED_JUMPTABLE_18;
    uVar15 = *(undefined8 *)(lVar18 + -0x110);
    *(code **)(lVar18 + -0x90) = (code *)(lVar19 + -2);
    puVar46[-2] = 0x1bd9b;
    puVar46[-1] = 1;
    uVar15 = (*(code *)(lVar19 + -2))(UNRECOVERED_JUMPTABLE_18,uVar15);
    UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar13 + 0x3687938);
    puVar46[-2] = 0x1bdb0;
    puVar46[-1] = 1;
    lVar19 = (*UNRECOVERED_JUMPTABLE_19)(uVar15);
    UNRECOVERED_JUMPTABLE_13 = (undefined **)0x0;
    bVar111 = lVar19 == *(long *)((long)puVar13 + 0x3687818) + -0xe;
  case (undefined **)0x10001bdc6:
                    /* WARNING: Could not recover jumptable at 0x00010001bdea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001bd0e +
                   *(int *)(&DAT_1006d13e0 +
                           (long)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_13 >> 8),bVar111
                                               ) + 0x6d0f70) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001bdeb:
    if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return (undefined **)
           (ulong)(bVar90 ^ (&DAT_1006cff50)[(byte)(&DAT_1006d2b00)[(ulong)ppuVar93 & 0xff] ^ 0x5e])
    ;
  case (undefined **)0x10001bf46:
    puVar16 = (undefined *)(ulong)uVar28;
code_r0x00010001bf35:
    iVar36 = *(int *)((long)puVar100 + 0xc);
    UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar82 + -0x58);
    *(undefined8 *)((long)puVar57 + -8) = 0x10001bf4f;
    uVar9 = (*UNRECOVERED_JUMPTABLE_19)
                      (ppuVar93,puVar16,iVar36 + -0x4a01cb87,(undefined8 *)((long)puVar82 + -0x100),
                       (undefined1 *)((long)puVar82 + -0x7c));
    uVar88 = (uint)puVar13;
    UNRECOVERED_JUMPTABLE =
         (undefined **)
         (long)*(int *)((long)ppuVar96 +
                       (long)(int)(uVar88 + 0x8fac5aa +
                                  (uint)((int)((uVar88 ^ uVar9 ^ 0x9deaed48) +
                                               (uVar9 & 0xeaefd7d6) * 2 + -0x20024080) <
                                        (int)((uVar88 + 0x8fac5a6 | 2) ^ 0x5aed971f))) * 4);
code_r0x00010001bf97:
                    /* WARNING: Could not recover jumptable at 0x00010001bfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE + 0x100019a91))
                   (ppuVar96,(code *)((long)UNRECOVERED_JUMPTABLE + 0x100019a91));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001c09a:
    ppuVar89 = (undefined **)
               (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                          [(int)(uVar107 + 0x78ad9f11 + (uint)((int)uVar28 < (int)(uVar97 ^ uVar91))
                                )];
    lVar19 = 0x100018af4;
code_r0x00010001c0ba:
                    /* WARNING: Could not recover jumptable at 0x00010001c0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(*(code *)((long)ppuVar89 + lVar19))((code *)((long)ppuVar89 + lVar19));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001c17d:
    *(uint *)(ppuVar93 + 9) = *(uint *)(ppuVar93 + 9) ^ uVar92;
    *(undefined ***)(puVar46 + -0x14) = UNRECOVERED_JUMPTABLE_13;
                    /* WARNING: Could not recover jumptable at 0x00010001c186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)UNRECOVERED_JUMPTABLE_18)(ppuVar93,(ulong)UNRECOVERED_JUMPTABLE_13 & 0xffffffff);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001c3d4:
    goto switchD_10001997c_caseD_1c3d4;
  case (undefined **)0x10001ca03:
    iVar36 = *(int *)((long)puVar100 +
                     (long)(int)((uVar107 - 0x8b82cc) + (uint)(*(long *)(puVar46 + -0x38) == 0)) * 4
                     );
    *(undefined8 *)(puVar46 + -0x20) = *(undefined8 *)(puVar46 + -0x2c);
    *(undefined ***)(puVar46 + -0x28) = UNRECOVERED_JUMPTABLE_12;
                    /* WARNING: Could not recover jumptable at 0x00010001ca46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)((long)iVar36 + 0x10001ca03))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001cadc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001cb65:
    *(undefined ***)(puVar46 + -0x4a) = UNRECOVERED_JUMPTABLE_18;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         switchD_100020322::caseD_1b465
                   (UNRECOVERED_JUMPTABLE_18,uVar9 + 0xc9efc418,UNRECOVERED_JUMPTABLE,&DAT_100018890
                   );
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001cbf8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ce1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d0da:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001995a) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_18 + 0x10001995a) ^ uVar28;
    if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0) {
      return UNRECOVERED_JUMPTABLE_18;
    }
    uVar28 = in(0xa2);
    uVar88 = uVar37 * 2 + 0x80a88ee0;
    uVar9 = (uVar88 << ((char)uVar9 + 0x2eU & 0x1f) & 0x7f577ba4) + (uVar88 ^ 0xbfabbdd2) +
            0xdb5e2ca8;
    puVar100 = (uint *)(ulong)(uVar97 < uVar9);
    if (uVar97 < 0x9b09ea7a != uVar9 < 0x9b09ea7a) {
      puVar100 = (uint *)(ulong)(uVar9 < 0x9b09ea7a);
    }
switchD_100020322_caseD_1dd6b:
                    /* WARNING: Could not recover jumptable at 0x00010001dd81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar93 +
                   (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                              [(int)(((uint)puVar100 & 0xff) + uVar28 + -0x2e3fe402)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001d76b:
                    /* WARNING: Could not recover jumptable at 0x00010001d786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001d73e + *(int *)((long)puVar100 + (long)(int)(uVar107 + bVar95) * 4)))
                   (&DAT_10001d73e + *(int *)((long)puVar100 + (long)(int)(uVar107 + bVar95) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001d830:
    if (bVar115) {
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
                            (ulong)(uint)(*(int *)CONCAT71(iVar23,uVar7) * 0x48) * 4)))
                   (UNRECOVERED_JUMPTABLE,ppuVar89,UNRECOVERED_JUMPTABLE,
                    &LAB_10001d7f2_1 +
                    *(uint *)((long)UNRECOVERED_JUMPTABLE +
                             (ulong)(uint)(*(int *)CONCAT71(iVar23,uVar7) * 0x48) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001d8a2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d97d:
    *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar27;
    *(char *)UNRECOVERED_JUMPTABLE_13 = (char)*(code *)UNRECOVERED_JUMPTABLE_13 + (char)cVar41;
    puVar83 = puVar46 + -2;
switchD_10001a75e_caseD_1d93b:
    *(undefined ***)((long)puVar83 + -0x48) = ppuVar93;
    uVar9 = ((int)UNRECOVERED_JUMPTABLE_18 + 0xfa925bfdU & 0x56da3ff) - 0xcb | 0xd3;
    uVar88 = (int)UNRECOVERED_JUMPTABLE_13 + 0x5ac3245d;
    uVar28 = (int)UNRECOVERED_JUMPTABLE_13 * 2 + 0x8691a69e;
    uVar28 = (uVar28 * 2 & ((uVar9 - 0x6f | 0x68) ^ 0xfdff7b04)) + (uVar28 ^ 0xfeffbdff) +
             0x987a930b;
    bVar95 = uVar88 < uVar28;
    if (uVar88 < uVar9 + 0x977a500b != uVar28 < 0x977a510a) {
      bVar95 = uVar28 < 0x977a510a;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001d9eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001d354 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar95 + uVar9)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001d9b2:
    goto switchD_10001a75e_caseD_1d93b;
  case (undefined **)0x10001da0d:
    *(undefined ***)(puVar46 + -0x6c) = ppuVar89;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001da82:
    *(undefined ***)(puVar46 + -0x6c) = UNRECOVERED_JUMPTABLE_13;
    uVar28 = uVar28 + 0x9f520035;
    bVar95 = uVar28 < 0xc09b3bad;
    if ((int)*(undefined8 *)(puVar46 + -0x14) + 0x443ed2b2U < (uVar98 | 7) + 0xc09b3b66 ==
        uVar28 < 0xc09b3bad) {
      bVar95 = (int)*(undefined8 *)(puVar46 + -0x14) + 0x443ed2b2U < uVar28;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001daf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001da80 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar95 + uVar91)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001dc19:
    out(0xff,bVar27);
    if (UNRECOVERED_JUMPTABLE_13 != (undefined **)0x1) {
      bVar111 = uVar32 < uVar31 + 0xb2b15a47;
      bVar95 = uVar98 < uVar32;
      if (uVar98 < 0xb2b15a9d != bVar111) {
        bVar95 = bVar111;
      }
                    /* WARNING: Could not recover jumptable at 0x00010001dc1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (*(code *)(&DAT_10001db6c +
                     (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                          [(int)((uint)bVar95 + (int)puVar100)]))
                     (*(undefined8 *)(puVar46 + -0x1e),
                      &DAT_10001db6c +
                      (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                           [(int)((uint)bVar95 + (int)puVar100)],
                      (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                 [(int)((uint)bVar95 + (int)puVar100)],ppuVar110);
      return UNRECOVERED_JUMPTABLE_18;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001dc3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)UNRECOVERED_JUMPTABLE +
                                  (long)(int)(uVar107 + 0x4815049c +
                                             (uint)(ppuVar110[8] == (undefined *)0x0)) * 4) +
                   0x10001dc1f))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001dcc3:
    *(int *)((code *)((long)UNRECOVERED_JUMPTABLE_18 + 0x100019951) + (long)ppuVar93) = (int)in_ST0;
                    /* WARNING: Could not recover jumptable at 0x00010001dceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001dc44 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)(CONCAT31((int3)((ulong)ppuVar39 >> 8),bVar111) + uVar98)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001dd79:
    goto switchD_100020322_caseD_1dd6b;
  case (undefined **)0x10001e2eb:
    goto switchD_10001997c_caseD_1e2eb;
  case (undefined **)0x10001e33c:
    uVar9 = (uint)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_13 >> 8),
                           bVar26 | *(byte *)((long)puVar46 + -0x3e76f0c5));
    goto code_r0x00010001e342;
  case (undefined **)0x10001e3e2:
    vpsubusw_avx(in_XMM14,*(undefined1 (*) [16])
                           ((ulong)((uVar28 + 0xfeb65c06) - (uint)bVar95) - 0x45));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001e541:
    if ((POPCOUNT((ulong)UNRECOVERED_JUMPTABLE_13 & 0xff) & 1U) != 0) {
      *(uint *)UNRECOVERED_JUMPTABLE_18 = *(int *)UNRECOVERED_JUMPTABLE_18 + uVar28;
      *(byte *)UNRECOVERED_JUMPTABLE_18 = (char)*(code *)UNRECOVERED_JUMPTABLE_18 + bVar27;
    }
    puVar46[-0x18] = puVar46[-0x2c] + 0xce995683;
    *(undefined8 *)(puVar46 + -0x20) = *(undefined8 *)(puVar46 + -0x50);
    *(ulong *)(puVar46 + -0x14) = (ulong)(puVar46[-0x27] + 0xce995683);
    UNRECOVERED_JUMPTABLE_19 =
         (code *)((long)*(int *)((long)puVar100 +
                                (long)(int)((uVar107 + 0xdc871091 & 0x2378ef76) +
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
    if ((char)ppuVar99 == '\0') {
      bVar90 = uVar31 < uVar97;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001e634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)puVar13 +
                   (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar90 + uVar91)]))
                   ((code *)((long)puVar13 +
                            (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                       [(int)(bVar90 + uVar91)]));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001e679:
    *(uint **)(puVar46 + -0x6c) = puVar46 + -2;
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0xb849a35f) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + 0xb849a35f) | 0x8e);
    puVar59 = puVar46 + -0x6e;
    *(undefined ***)(puVar46 + -0x6e) = UNRECOVERED_JUMPTABLE_13;
    puVar46[-0x70] = 0x3165f9b4;
    puVar46[-0x6f] = 0;
    UNRECOVERED_JUMPTABLE_12 = *(undefined ***)(puVar46 + -0x70);
    uVar28 = uVar28 + 0xfb385c06;
    cVar8 = (char)uVar28 + *(char *)((ulong)uVar28 - 0x389ba5fc);
    ppuVar96 = (undefined **)(ulong)CONCAT31((int3)(uVar28 >> 8),cVar8);
    if (SCARRY1((char)uVar28,*(char *)((ulong)uVar28 - 0x389ba5fc)) != cVar8 < '\0') {
      *(ushort *)((long)UNRECOVERED_JUMPTABLE_18 + 0x100019917) =
           *(ushort *)((long)UNRECOVERED_JUMPTABLE_18 + 0x100019917) ^ (ushort)uVar31;
      return (undefined **)(ulong)uVar31;
    }
    puVar85 = (uint *)(ulong)(uVar10 | (uint)(puVar46 + -0x6e));
    in(0xfd);
    *(char *)UNRECOVERED_JUMPTABLE = -(char)*(code *)UNRECOVERED_JUMPTABLE;
    uVar109 = uVar9 - 7;
    *(undefined ***)((long)puVar85 + -0xe0) = UNRECOVERED_JUMPTABLE_12;
    uVar107 = uVar9 - 0x1b;
    UNRECOVERED_JUMPTABLE_13 = &PTR__bootstrap_look_up_10082e9f0;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar109 ^ 0x8a)];
switchD_10001997c_caseD_1e2eb:
    uVar11 = *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_18 + -3);
    uVar15 = *(undefined8 *)((long)puVar85 + -0xf8);
    uVar3 = *(undefined4 *)((long)puVar85 + -100);
    puVar16 = UNRECOVERED_JUMPTABLE_13[(int)(uVar109 - 0x66)];
    *(undefined8 *)((long)puVar59 + -8) = 0x10001e309;
    (*(code *)(puVar16 + -2))(uVar11,uVar15,uVar3,UNRECOVERED_JUMPTABLE_13,ppuVar96);
    puVar100 = &switchD_10001f9d9::switchdataD_1006d2190;
    uVar107 = uVar107 - 0x4d | 0x10;
    if (uVar105 != uVar107 + 0x3166a945) {
      UNRECOVERED_JUMPTABLE_12 = (undefined **)0x6c76618fb7247bc0;
    }
    *(undefined ***)((long)puVar85 + -0xa0) = UNRECOVERED_JUMPTABLE_12;
    uVar9 = (uVar107 ^ 10) + 0xf;
code_r0x00010001e342:
                    /* WARNING: Could not recover jumptable at 0x00010001e364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_10001eaf5 +
                   *(int *)((long)puVar100 +
                           (long)(int)((uVar105 == (uVar9 ^ 0x3166a93c)) + uVar107) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001e9ab:
    if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x1) {
      puVar40 = (undefined *)0x7d8b4822;
code_r0x00010001e9af:
      UNRECOVERED_JUMPTABLE_18 =
           (undefined **)
           (&switchD_10001d28e::caseD_1 +
           *(int *)(puVar40 +
                   (long)(int)((int)*(undefined8 *)((long)puVar86 + -0xf8) + -0x2e3fe4a8 +
                              (uint)(*(long *)((long)puVar86 + -0x58) == 0)) * 4));
      *(undefined8 *)((long)puVar86 + -0x98) = *(undefined8 *)((long)puVar86 + -0xb8);
      *(undefined8 *)((long)puVar86 + -0xa8) = *(undefined8 *)((long)puVar86 + -0xd0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010001ea08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_18)();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ea18:
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)uVar28];
    *(undefined ***)(puVar46 + -0x14) = ppuVar99;
    puVar46[-0x6c] = 0x1ea2f;
    puVar46[-0x6b] = 1;
    uVar21 = (*(code *)(puVar16 + -3))();
    uVar15 = *(undefined8 *)(*(long *)(puVar46 + -0x14) + -0x7ec08e5aeb2a8122);
    iVar36 = *(int *)(*(long *)(puVar46 + -0x14) + -0x7ec08e5aeb2a8116);
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar105 ^ 0x67)];
    puVar40 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar105 - 0x59)];
    *(undefined8 *)(puVar46 + -0x48) = uVar21;
    *(undefined **)(puVar46 + -0x20) = puVar40 + -3;
    puVar46[-0x6c] = 0x1ea8a;
    puVar46[-0x6b] = 1;
    (*(code *)(puVar16 + -3))(uVar21,puVar40 + -3,uVar15,iVar36 + -0x5269705a);
    puVar16 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar105 ^ 0x7d)];
    puVar40 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar105 ^ 0x68)];
    puVar46[-0x28] = 0;
    puVar46[-0x27] = 0;
    puVar46[-0x6c] = 0x1eaba;
    puVar46[-0x6b] = 1;
    lVar19 = (*(code *)(puVar16 + -2))(puVar40 + -1,0);
                    /* WARNING: Could not recover jumptable at 0x00010001eaf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001ea0d +
                   *(int *)(&DAT_1006d1e30 + (long)(int)(uVar105 + (lVar19 == 0)) * 4)))
                   (*(undefined8 *)(puVar46 + -0x18));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ebc6:
  case (undefined **)0x10001ebc9:
    puVar46[-0x6c] = 0x1ebcc;
    puVar46[-0x6b] = 1;
    (*(code *)&switchD_1000183ca::switchdataD_1006d0f70)();
    ppuVar110[6] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010001ec02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&LAB_100023f98 +
                   *(int *)((long)ppuVar108 +
                           (long)(int)(uVar37 + (ppuVar110[8] == (undefined *)0x0)) * 4)))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001ed2c:
    if (!bVar115) {
      *(undefined ***)(puVar46 + -0x2e) = ppuVar99;
      uVar9 = uVar31 + uVar92 * 2 + 0x764b767d;
      bVar95 = uVar28 < uVar9;
      if (uVar9 < 0xf64955a7 != true) {
        bVar95 = uVar9 < 0xf64955a7;
      }
      uVar12 = (ulong)((uint)bVar95 + uVar32 + 0xdddbfaf8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010001ed79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                   (long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)uVar12]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001f10e:
    UNRECOVERED_JUMPTABLE_19 =
         (code *)((long)UNRECOVERED_JUMPTABLE_12 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 0x45);
    *(uint *)UNRECOVERED_JUMPTABLE_19 =
         *(uint *)UNRECOVERED_JUMPTABLE_19 >> (bVar26 & 0x1f) |
         *(uint *)UNRECOVERED_JUMPTABLE_19 << 0x20 - (bVar26 & 0x1f);
    *ppuVar96 = (undefined *)0x0;
    ppuVar96[1] = (undefined *)0x21493b807c5c68fb;
    puVar46[-0x6c] = 0x1f12f;
    puVar46[-0x6b] = 1;
    (*(code *)UNRECOVERED_JUMPTABLE_12)(ppuVar96);
    puVar101 = &switchD_10001f9d9::switchdataD_1006d2190;
    uVar15 = *(undefined8 *)(puVar46 + -0x18);
LAB_10001df31:
    lVar19 = *(long *)((long)puVar84 + -0x48);
    puVar104 = (uint *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar107 + 0x481504ae)];
    *(undefined8 *)((long)puVar58 + -8) = 0x10001df56;
    (*(code *)puVar104)(uVar15);
    uVar15 = *(undefined8 *)((long)puVar84 + -0x78);
    *(undefined8 *)((long)puVar58 + -8) = 0x10001df5d;
    (*(code *)puVar104)(uVar15);
    iVar36 = *(int *)((long)puVar101 + (long)(int)(uVar107 + 0x481504b4 + (uint)(lVar19 == 0)) * 4);
    pcVar20 = (char *)(long)iVar36;
    pcVar30 = pcVar20 + 0x10001df31;
    switch(pcVar30) {
    case "":
      *pcVar20 = *pcVar20 + (char)iVar36;
      *(undefined4 *)((long)puVar84 + -0x94) = 0x3166a97d;
      *(undefined ***)((long)puVar84 + -0x128) = ppuVar96;
      *(ulong *)((long)puVar84 + -0x130) = uVar12;
      uVar107 = 0x3165f9b4;
      switch(ppuVar89 == (undefined **)0x0 ||
             (uVar12 == 0 || (ppuVar96 == (undefined **)0x0 || pcVar30 == (char *)0x0))) {
      case false:
        pcVar30[0] = '\0';
        pcVar30[1] = '\0';
        pcVar30[2] = '\0';
        pcVar30[3] = '\0';
        pcVar30[4] = '\0';
        pcVar30[5] = '\0';
        pcVar30[6] = '\0';
        pcVar30[7] = '\0';
        **(undefined4 **)((long)puVar84 + -0x128) = 0;
        **(undefined8 **)((long)puVar84 + -0x130) = 0;
        *(undefined4 *)ppuVar89 = 0;
        lVar19 = *(long *)(PTR_DAT_10088e798_3_10082ea48 + -3);
        uVar9 = (&switchD_10001f9d9::switchdataD_1006d2190)[(lVar19 == 0) + 8];
        *(char **)((long)puVar84 + -0x160) = pcVar30;
                    /* WARNING: Could not recover jumptable at 0x000100025805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE_18 =
             (undefined **)
             (*(switchD_10001f9d9::caseD_0 + (int)uVar9))
                       (lVar19,switchD_10001f9d9::caseD_0 + (int)uVar9);
        return UNRECOVERED_JUMPTABLE_18;
      case true:
        plVar22 = (long *)CONCAT44(PTR____stack_chk_guard_10082cb58._4_4_,
                                   (uint)PTR____stack_chk_guard_10082cb58);
      }
code_r0x00010001f8e1:
      if (*plVar22 != *(long *)((long)puVar84 + -0x30)) {
                    /* WARNING: Subroutine does not return */
        *(code **)((long)puVar58 + -8) = switchD_100024103::caseD_1f059;
        ___stack_chk_fail();
      }
      return (undefined **)(ulong)(uVar107 + 0xce995683);
    }
switchD_10001df6e_caseD_1c526:
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(long)(int)(iVar36 + uVar107);
    ppuVar103 = (undefined **)puVar104;
switchD_10001a75e_caseD_1c52a:
                    /* WARNING: Could not recover jumptable at 0x00010001c538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)(int)*(uint *)((long)ppuVar103 + (long)UNRECOVERED_JUMPTABLE_18 * 4) +
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
    uVar12 = CONCAT71(iVar23,bVar27) & 0xffffffffffffffd2;
    if ((POPCOUNT((byte)uVar12 & 0x70) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0) {
      *(undefined4 *)ppuVar93 = *(undefined4 *)ppuVar89;
      *in_GS_OFFSET = *in_GS_OFFSET ^ uVar97 + 4 + (uint)bVar117 * -8;
      *(undefined1 *)(uVar12 - 0x77) = *(undefined1 *)(uVar12 - 0x77);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined ***)(puVar46 + -0x6c) = ppuVar89;
    *(undefined8 *)((byte *)((long)ppuVar93 + -0x1f7c3d4a) + (long)UNRECOVERED_JUMPTABLE_13) =
         *(undefined8 *)(puVar46 + -0x6c);
    UNRECOVERED_JUMPTABLE_19 = (code *)((long)UNRECOVERED_JUMPTABLE_18 + uVar12 + 0x10001993b);
    *(int *)UNRECOVERED_JUMPTABLE_19 = *(int *)UNRECOVERED_JUMPTABLE_19 + (int)uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010001f34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)*(int *)((long)puVar100 + (long)(int)uVar12 * 4) + 0x10001f327))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001f50b:
    *(undefined ***)(puVar46 + -0x18) = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_19 = (code *)UNRECOVERED_JUMPTABLE_13[(int)uVar28];
    puVar46[-0x6c] = 0x1f51b;
    puVar46[-0x6b] = 1;
    uVar9 = (*UNRECOVERED_JUMPTABLE_19)(ppuVar93,*(undefined8 *)(puVar46 + -0x44));
                    /* WARNING: Could not recover jumptable at 0x00010001f569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001f4d3 +
                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [(int)(((uVar9 ^ 0x7b7ea97f) +
                                ((uVar88 ^ 0xf6fd5270) & uVar9 << (cVar6 + 0x97U & 0x1f)) ==
                               0x7b7ea97f) + uVar37)]))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001f6e9:
                    /* WARNING: Could not recover jumptable at 0x00010001f714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001f6c8 +
                   *(int *)((long)puVar100 +
                           (long)(int)((UNRECOVERED_JUMPTABLE_12 == (undefined **)0x583fea33108f2bd4
                                       ) + uVar28) * 4)))
                   (ppuVar93,&DAT_10001f6c8 +
                             *(int *)((long)puVar100 +
                                     (long)(int)((UNRECOVERED_JUMPTABLE_12 ==
                                                 (undefined **)0x583fea33108f2bd4) + uVar28) * 4));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001f818:
    if (bVar26 == 0) {
      uVar31 = uVar98;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001f83e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)(&DAT_10001f7b1 +
                   *(int *)((long)puVar13 + (long)(int)((uVar31 & 0xff) + uVar9) * 4)))
                   (&DAT_10001f7b1 +
                    *(int *)((long)puVar13 + (long)(int)((uVar31 & 0xff) + uVar9) * 4),
                    (undefined **)((long)puVar100 + 0x1006d0f70));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001f8db:
    plVar22 = (long *)(ulong)(uint)PTR____stack_chk_guard_10082cb58;
    puVar58 = puVar46 + -0x6a;
    puVar84 = puVar46 + -2;
    goto code_r0x00010001f8e1;
  case (undefined **)0x10001fa34:
    UNRECOVERED_JUMPTABLE = (undefined **)CONCAT71(iVar35,0xf9);
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_13) ^ uVar97;
    puVar87 = *(uint **)(puVar46 + -2);
    puVar60 = puVar46;
  case (undefined **)0x10001f9e6:
    UNRECOVERED_JUMPTABLE_19 = (code *)swi(0x50);
    uVar11 = (*UNRECOVERED_JUMPTABLE_19)(ppuVar93,ppuVar89,UNRECOVERED_JUMPTABLE);
    *(undefined4 *)((long)puVar87 + -0x1c0) = uVar11;
    UNRECOVERED_JUMPTABLE_19 = *(code **)((long)puVar87 + -0x108);
    *(undefined8 *)puVar60 = 0x10001fa05;
    lVar19 = (*UNRECOVERED_JUMPTABLE_19)((int)ppuVar93 + uVar107 + uVar105 + -0x68ffe600);
    *(long *)((long)puVar87 + -0x300) = lVar19;
    iVar36 = *(int *)(&DAT_1006d2600 + (long)(int)(uVar107 + (lVar19 == 0)) * 4);
    *(undefined4 *)((long)puVar87 + -0xe8) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x00010001fa3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001f9dd + iVar36))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001fabb:
    uVar9 = *(uint *)((long)ppuVar89 +
                     (ulong)(uint)(*(int *)(ulong)CONCAT31((int3)((uint)*(undefined4 *)ppuVar89 >> 8
                                                                 ),uRam358d489848fffffc) * 0x48) * 4
                     + (ulong)bVar117 * -8 + 4);
    puVar46[-0x3c] = 0x3165f9a5;
                    /* WARNING: Could not recover jumptable at 0x00010001fae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 = (undefined **)(*(code *)(&DAT_10001fa6d + uVar9))();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001fb40:
    UNRECOVERED_JUMPTABLE_18 = (undefined **)FUN_1000253ca();
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x10001fd07:
    uVar9 = uVar31 * 2 + 0x444c4bbc;
    uVar97 = uVar9 ^ uVar97;
    uVar9 = uVar9 & 0xfdfbfb2e;
    *(ulong *)(puVar46 + -0x2a) = (ulong)(uVar97 + uVar9 * 2 + 0x5fdddef4);
    uVar9 = uVar97 + uVar9 * 2 + 0x899b936c;
    bVar111 = uVar91 < uVar9;
    if ((bool)(char)ppuVar99 != uVar9 < 0x87978e9a) {
      bVar111 = uVar9 < 0x87978e9a;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001fd76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)ppuVar93 +
                   (long)*(int *)(&DAT_1006d1e30 + (long)(int)(bVar111 + uVar28) * 4)))
                   (ppuVar93,ppuVar89,CONCAT71(iVar35,!bVar95));
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x100020183:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000202ad:
    *(long *)(puVar46 + -0xc4) = *(long *)(puVar46 + -0x56);
    UNRECOVERED_JUMPTABLE_19 =
         (code *)((long)*(int *)((long)puVar100 +
                                (long)(int)((uint)(*(long *)(puVar46 + -0x56) == 0x3a5a9c416583c527)
                                           + (uVar97 | 0x4b)) * 4) + 0x1000202ad);
    puVar46[-0x3c] = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x0001000202fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*UNRECOVERED_JUMPTABLE_19)(ppuVar93,uVar97 | 0x4b,0,UNRECOVERED_JUMPTABLE_19);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000204f9:
    *(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x73) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_18 + -0x73) | bVar26);
    uVar12 = (ulong)((long)puVar13 + 0x1e2846e75) & (ulong)UNRECOVERED_JUMPTABLE_13;
    *(ulong *)(puVar46 + -0x2a) = uVar12;
    *(ulong *)(puVar46 + -0x2e) = uVar12;
    *(ulong *)(puVar46 + -0x34) = uVar12;
    *(ulong *)(puVar46 + -0x3a) = uVar12;
    puVar46[-0x1a] = 0xaeb6ae7e;
    puVar46[-0x19] = 0x5c05e2a4;
    puVar46[-0x32] = 0xaeb6ae7e;
    puVar46[-0x31] = 0x5c05e2a4;
    puVar46[-0x38] = 0xaeb6ae7e;
    puVar46[-0x37] = 0x5c05e2a4;
    *(ulong *)(puVar46 + -0x4e) = CONCAT71(iVar23,bVar27) | 0x36;
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         switchD_100020322::caseD_2214a
                   (0x5c05e2a4aeb6ae7e,(code *)((long)ppuVar89 + (-0x141622680ebdc8be - uVar12)),
                    UNRECOVERED_JUMPTABLE,&DAT_10001f177);
    return UNRECOVERED_JUMPTABLE_18;
  case (undefined **)0x1000207d5:
    *(undefined ***)(puVar46 + -0x4a) = UNRECOVERED_JUMPTABLE_18;
    *(undefined ***)(puVar46 + -0x4e) = UNRECOVERED_JUMPTABLE_18;
                    /* WARNING: Could not recover jumptable at 0x0001000207eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_18 =
         (undefined **)
         (*(code *)((long)UNRECOVERED_JUMPTABLE + (long)UNRECOVERED_JUMPTABLE_18))
                   (ppuVar93,ppuVar89,
                    (code *)((long)UNRECOVERED_JUMPTABLE + (long)UNRECOVERED_JUMPTABLE_18),
                    0x3166043b);
    return UNRECOVERED_JUMPTABLE_18;
  }
  uVar12 = (ulong)((uVar9 ^ (uint)ppuVar89 ^ 0x4df3bf4c) + ((uint)ppuVar89 & 0xcdf3bff6) * 2 +
                  0x3c839cc2);
LAB_100018c65:
  uVar9 = (uint)uVar12;
  bVar95 = uVar28 < uVar9;
  if (SUB81(ppuVar96,0) != uVar9 < 0x8a775cb9) {
    bVar95 = uVar9 < 0x8a775cb9;
  }
                    /* WARNING: Could not recover jumptable at 0x000100018ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_18 =
       (undefined **)
       (*(code *)((long)UNRECOVERED_JUMPTABLE_13 +
                 (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                            [(int)((uVar32 - 0x8b824a) + (uint)bVar95)]))();
  return UNRECOVERED_JUMPTABLE_18;
}

