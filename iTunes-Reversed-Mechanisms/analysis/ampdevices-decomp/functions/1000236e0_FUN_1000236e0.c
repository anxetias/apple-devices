// name: FUN_1000236e0
// address: 1000236e0

/* WARNING: Instruction at (ram,0x000100022859) overlaps instruction at (ram,0x000100022858)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00010001eef3) */
/* WARNING: Removing unreachable block (ram,0x000100027131) */
/* WARNING: Removing unreachable block (ram,0x0001000212c9) */
/* WARNING: Switch with 1 destination removed at 0x000100023f12 */
/* WARNING: Problems distributing in pointer arithmetic at 0x00010001a76e */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1000236e0(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char unaff_00084f00;
  undefined **unaff_0008ae00;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined3 uVar7;
  undefined3 uVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  char *pcVar16;
  undefined7 uVar24;
  undefined *puVar17;
  int *piVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **UNRECOVERED_JUMPTABLE_41;
  undefined *puVar21;
  ulong uVar22;
  undefined1 *puVar23;
  code cVar26;
  byte bVar27;
  uint uVar28;
  int7 iVar30;
  undefined **UNRECOVERED_JUMPTABLE_47;
  long lVar29;
  code cVar31;
  char cVar36;
  undefined2 uVar33;
  uint uVar34;
  long lVar35;
  undefined7 uVar37;
  undefined **extraout_RDX;
  undefined **UNRECOVERED_JUMPTABLE_46;
  undefined7 uVar38;
  code *UNRECOVERED_JUMPTABLE;
  undefined **extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  byte bVar39;
  undefined **unaff_RBX;
  uint uVar40;
  long *plVar41;
  undefined **ppuVar42;
  long *plVar43;
  long *plVar44;
  long *plVar45;
  long *plVar46;
  undefined1 *puVar47;
  undefined8 *puVar48;
  uint uVar49;
  undefined8 *puVar50;
  undefined **ppuVar51;
  undefined **ppuVar52;
  uint uVar53;
  uint uVar54;
  undefined **ppuVar55;
  undefined **UNRECOVERED_JUMPTABLE_45;
  undefined **ppuVar56;
  int iVar57;
  uint uVar58;
  int iVar59;
  undefined **UNRECOVERED_JUMPTABLE_37;
  ulong uVar60;
  undefined **ppuVar61;
  byte bVar62;
  code cVar63;
  uint uVar64;
  undefined **ppuVar65;
  undefined **ppuVar66;
  uint uVar67;
  uint uVar68;
  undefined **ppuVar69;
  uint *puVar70;
  uint *UNRECOVERED_JUMPTABLE_44;
  undefined **ppuVar71;
  uint uVar72;
  uint *unaff_R12;
  undefined **ppuVar73;
  uint uVar74;
  uint *puVar75;
  undefined **ppuVar76;
  uint uVar77;
  uint *puVar78;
  undefined2 in_CS;
  ushort in_SS;
  uint *in_GS_OFFSET;
  bool bVar79;
  bool bVar80;
  bool bVar81;
  byte in_AF;
  bool bVar82;
  bool bVar83;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  longdouble in_ST0;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar84 [16];
  undefined1 extraout_var [56];
  undefined1 auVar85 [64];
  undefined1 in_XMM3 [16];
  undefined8 in_XMM8_Qa;
  undefined8 in_XMM8_Qb;
  int in_XMM10_Da;
  int in_XMM10_Db;
  int in_XMM10_Dc;
  int in_XMM10_Dd;
  undefined1 in_XMM12 [16];
  undefined1 in_XMM14 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined6 uVar25;
  undefined2 uVar32;
  
  bVar27 = 0;
  ppuVar19 = (undefined **)&stack0xfffffffffffffff8;
  ppuVar42 = (undefined **)&stack0xffffffffffffffe0;
code_r0x0001000236ea:
  *(uint **)((long)ppuVar42 + -8) = unaff_R12;
  *(undefined ***)((long)ppuVar42 + -0x10) = unaff_RBX;
  ppuVar42 = (undefined **)((long)ppuVar42 + -0x1a8);
  ppuVar19[-6] = *(undefined **)PTR____stack_chk_guard_10082cb58;
  UNRECOVERED_JUMPTABLE_47 =
       (undefined **)((ulong)(ppuVar19 + -0x37) ^ DAT_10088e7f8 - (long)_DAT_10088e800);
  UNRECOVERED_JUMPTABLE_41 = (undefined **)((long)UNRECOVERED_JUMPTABLE_47 * 0x79f54c43);
  ppuVar51 = ppuVar19;
code_r0x000100023721:
  _DAT_10088e800 = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x585ffb1538078cd1);
  DAT_10088e7f8 = ((ulong)UNRECOVERED_JUMPTABLE_47 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
  UNRECOVERED_JUMPTABLE_46 =
       (undefined **)(ulong)((int)DAT_10088e7f8 + (int)_DAT_10088e800 ^ 0xc7f8732f);
code_r0x00010002374a:
  uVar14 = (int)UNRECOVERED_JUMPTABLE_46 * 0x79f54c43;
  UNRECOVERED_JUMPTABLE_41 = &PTR__bootstrap_look_up_10082e9f0;
  UNRECOVERED_JUMPTABLE =
       (code *)(&PTR__bootstrap_look_up_10082e9f0)
               [(int)((byte)((byte)uVar14 ^
                            (&DAT_1006d1b30)[(byte)(&DAT_1006d0c70)[uVar14 & 0xff] ^ 0x73]) - 0xf8)]
  ;
  ppuVar51[-0x11] = UNRECOVERED_JUMPTABLE;
  *(undefined8 *)((long)ppuVar42 + -8) = 0x10002378e;
  unaff_RBX = (undefined **)(*UNRECOVERED_JUMPTABLE)(0x18);
  uVar14 = 0x3165f9b2;
  switch(unaff_RBX == (undefined **)0x0) {
  case false:
    ppuVar51[-9] = (code *)((long)unaff_RBX + 0x7ec08e5aeb2a8122);
    puVar75 = (uint *)0x7;
    *unaff_RBX = (undefined *)0x0;
    unaff_RBX[1] = (undefined *)0x7c3b9be73fabb890;
    *(uint *)(unaff_RBX + 2) = 0;
    UNRECOVERED_JUMPTABLE_37 = (undefined **)0x1000;
    ppuVar19 = ppuVar51;
    UNRECOVERED_JUMPTABLE_44 = (uint *)&DAT_1006d1e30;
    break;
  case true:
code_r0x000100020def:
    if (*(undefined **)PTR____stack_chk_guard_10082cb58 == ppuVar51[-6]) {
      return (undefined **)(ulong)(uVar14 + 0xce995683);
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)ppuVar42 + -8) = &UNK_100021e7d;
    ___stack_chk_fail();
  }
code_r0x00010001ec7a:
  UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0x11];
  *(undefined8 *)((long)ppuVar42 + -8) = 0x10001ec80;
  puVar17 = (undefined *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE_37);
  auVar85._8_56_ = extraout_var;
  auVar85._0_8_ = extraout_XMM1_Qa;
  auVar86._8_8_ = extraout_XMM0_Qb;
  auVar86._0_8_ = extraout_XMM0_Qa;
  *unaff_RBX = puVar17;
  uVar14 = *(uint *)((long)UNRECOVERED_JUMPTABLE_44 + (ulong)((puVar17 == (undefined *)0x0) + 7) * 4
                    );
  ppuVar19[-0xd] = UNRECOVERED_JUMPTABLE_41[0x20];
  uVar68 = (uint)puVar75;
  ppuVar51 = ppuVar19;
  switch(&DAT_10001ec4f + (int)uVar14) {
  case (undefined *)0x10001cc59:
    ppuVar56 = (undefined **)(ulong)(uVar68 + 2);
    uVar14 = uVar68 + 2 ^ 0xcd;
    unaff_R12 = (uint *)(ulong)uVar14;
    *(uint *)(unaff_RBX + 1) = 0x3fabc890;
    puVar17 = (undefined *)
              (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                  (long)(int)((uVar68 - 7) + (uint)(unaff_RBX == (undefined **)0x0))
                                  * 4);
    ppuVar76 = (undefined **)0x0;
    ppuVar19[-0x14] = puVar17;
    ppuVar19[-0x16] = puVar17;
    ppuVar19[-0x19] = puVar17;
    ppuVar19[-0x1c] = puVar17;
    ppuVar19[-0xc] = (undefined *)0x5c05e2a4aeb6ae7e;
    ppuVar19[-0x1d] = puVar17;
    ppuVar19[-0x18] = puVar17;
    ppuVar19[-0x1b] = puVar17;
    iVar57 = 0;
    puVar75 = (uint *)unaff_RBX;
    switch(&UNK_10001cc59 + (long)puVar17) {
    case (undefined *)0x10001f207:
LAB_10001f207:
                    /* WARNING: Could not recover jumptable at 0x00010001f22a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)((long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                                (long)(int)(iVar57 + uVar14) * 4) + 0x10001f207))();
      return ppuVar19;
    case (undefined *)0x1000227e7:
code_r0x0001000227e7:
      UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)((int)ppuVar56 - 9U | 3);
code_r0x0001000227ee:
      UNRECOVERED_JUMPTABLE_41 = (undefined **)((long)puVar75 + 0xc);
    }
code_r0x0001000227f2:
    auVar84 = auVar85._0_16_;
    ppuVar51[-0x22] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    ppuVar69 = (undefined **)(ulong)*(uint *)((long)puVar75 + 8);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)*(uint *)((long)puVar75 + 0xc);
code_r0x000100022800:
    uVar68 = (uint)UNRECOVERED_JUMPTABLE_47;
    uVar14 = (int)UNRECOVERED_JUMPTABLE_41 + uVar68 + 0x75fc0255;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)uVar14;
    uVar54 = (uint)ppuVar69;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uVar54 + 0xb28be5ab);
    UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)(uVar14 < 0xf2379e3b);
code_r0x00010002281c:
    uVar64 = (uint)ppuVar56;
    cVar63 = (code)((uint)UNRECOVERED_JUMPTABLE_45 < uVar64 + 0xf2379e32 ^
                   (byte)UNRECOVERED_JUMPTABLE_37);
    uVar28 = CONCAT31((int3)(uVar64 + 0xf2379e32 >> 8),cVar63);
    ppuVar65 = (undefined **)(ulong)uVar28;
    uVar58 = (uint)UNRECOVERED_JUMPTABLE_37;
    ppuVar66 = (undefined **)
               (ulong)((uint)UNRECOVERED_JUMPTABLE_45 < (uint)UNRECOVERED_JUMPTABLE_46);
    if (cVar63 != (code)0x0) {
      ppuVar66 = UNRECOVERED_JUMPTABLE_37;
    }
code_r0x00010002283d:
    uVar53 = (uint)ppuVar66;
    uVar34 = *(uint *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar53 + uVar64) * 4);
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(long)(int)uVar34;
    bVar80 = (undefined **)0xfffffffefffdd818 < UNRECOVERED_JUMPTABLE_46;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)((long)UNRECOVERED_JUMPTABLE_46 + 0x1000227e7);
    bVar83 = UNRECOVERED_JUMPTABLE_45 == (undefined **)0x0;
    bVar81 = (POPCOUNT((ulong)UNRECOVERED_JUMPTABLE_45 & 0xff) & 1U) == 0;
    uVar14 = (uint)UNRECOVERED_JUMPTABLE_44;
    uVar72 = (uint)unaff_R12;
    cVar31 = SUB41(uVar34,0);
    uVar32 = (undefined2)uVar34;
    iVar30 = (int7)(int3)(uVar34 >> 8);
    uVar77 = (uint)puVar75;
    bVar39 = (byte)((ulong)puVar75 >> 8);
    uVar40 = (uint)ppuVar42;
    bVar11 = (byte)UNRECOVERED_JUMPTABLE_47;
    uVar13 = (uint)UNRECOVERED_JUMPTABLE_41;
    uVar24 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8);
    cVar26 = SUB81(UNRECOVERED_JUMPTABLE_41,0);
    uVar49 = (uint)UNRECOVERED_JUMPTABLE_45;
    uVar74 = (uint)ppuVar76;
    uVar67 = (uint)ppuVar51;
    ppuVar20 = UNRECOVERED_JUMPTABLE_41;
    ppuVar71 = (undefined **)puVar75;
    unaff_RBX = (undefined **)puVar75;
    ppuVar19 = ppuVar51;
    ppuVar52 = ppuVar51;
    ppuVar55 = UNRECOVERED_JUMPTABLE_45;
    ppuVar61 = UNRECOVERED_JUMPTABLE_37;
    puVar70 = UNRECOVERED_JUMPTABLE_44;
    ppuVar73 = (undefined **)UNRECOVERED_JUMPTABLE_44;
    puVar78 = (uint *)ppuVar56;
    bVar79 = bVar80;
    switch(UNRECOVERED_JUMPTABLE_45) {
    case (undefined **)0x100018739:
      in(uVar32);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001969d:
      UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)*(uint *)UNRECOVERED_JUMPTABLE_41;
      ppuVar71 = (undefined **)(ulong)(uVar77 + 0xc38fcf99);
      ppuVar56 = (undefined **)
                 (ulong)(byte)(uVar77 + 0xc38fcf99 < 0xf9ba9dea ^ (byte)UNRECOVERED_JUMPTABLE_44);
      goto code_r0x0001000196b5;
    case (undefined **)0x100019ecd:
                    /* WARNING: Could not recover jumptable at 0x000100019ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_47 >> 8),
                                    bVar11 & (byte)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75)
                                   ))();
      return ppuVar19;
    case (undefined **)0x10001a3b7:
      return UNRECOVERED_JUMPTABLE_41;
    case (undefined **)0x10001a977:
      *(code *)((long)ppuVar51 + -0x3d7efcec) =
           (code)((char)*(code *)((long)ppuVar51 + -0x3d7efcec) + bVar11);
      if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x0) {
        ppuVar19 = (undefined **)((long)puVar75 + -0x27fefe20);
        *(uint *)ppuVar19 = *(uint *)ppuVar19 << 8 | *(uint *)ppuVar19 >> 0x18;
        UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uint)(int)(short)UNRECOVERED_JUMPTABLE_41;
      }
      *(code *)((long)ppuVar51 + 0x1104c6) = (code)((char)*(code *)((long)ppuVar51 + 0x1104c6) + 1);
      *(code *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)((int)UNRECOVERED_JUMPTABLE_41 + 0xb5fe347c)
               ) = (code)0x1;
      ppuVar51[-0x23] = (undefined *)UNRECOVERED_JUMPTABLE_45;
      *(uint *)UNRECOVERED_JUMPTABLE_45 = *(uint *)UNRECOVERED_JUMPTABLE_45 + 4;
      UNRECOVERED_JUMPTABLE_47 =
           (undefined **)
           (&DAT_10001a9a2 + *(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar77 + 2) * 4))
      ;
      goto code_r0x00010001a9cc;
    case (undefined **)0x10001aa5f:
      goto code_r0x00010001aa5f;
    case (undefined **)0x10001b3f4:
      goto code_r0x00010001b3f4;
    case (undefined **)0x10001b6cd:
      goto code_r0x00010001b6cd;
    case (undefined **)0x10001b937:
      *(uint *)(ppuVar51 + -0x26) = uVar13;
      goto code_r0x00010001c9f2;
    case (undefined **)0x10001ba87:
      goto code_r0x00010001ba87;
    case (undefined **)0x10001bbb5:
      ppuVar42[-1] = (undefined *)ppuVar51;
      ppuVar51[-0xd] = (undefined *)0x18646b13513134f3;
      ppuVar51[-10] = (undefined *)0x18646b13513134f3;
      ppuVar19 = (undefined **)FUN_100015e19();
      return ppuVar19;
    case (undefined **)0x10001be12:
      *(undefined4 *)((long)unaff_R12 + 8) = 0x55b32aa0;
                    /* WARNING: Could not recover jumptable at 0x00010001be55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_10001be0d +
                           *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                   (long)(int)(uVar77 + ((undefined *)
                                                         (ulong)((uVar77 - 0x7a | 99) + uVar13 * 2 +
                                                                0xf23) < ppuVar51[-0x20])) * 4)))
                           (unaff_R12,ppuVar51[-0x21],
                            &UNK_10001be0d +
                            *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                    (long)(int)(uVar77 + ((undefined *)
                                                          (ulong)((uVar77 - 0x7a | 99) + uVar13 * 2
                                                                 + 0xf23) < ppuVar51[-0x20])) * 4));
      return ppuVar19;
    case (undefined **)0x10001be5e:
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar26;
      UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_45 & 0xff);
      UNRECOVERED_JUMPTABLE_37 =
           (undefined **)
           (ulong)(byte)((byte)UNRECOVERED_JUMPTABLE_37 ^
                        (byte)*(code *)(UNRECOVERED_JUMPTABLE_41 + 0x200da386));
    case (undefined **)0x10001be6f:
      return (undefined **)
             CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8),
                      (byte)UNRECOVERED_JUMPTABLE_41 ^
                      (byte)*(code *)(UNRECOVERED_JUMPTABLE_37 + 0x200da580));
    case (undefined **)0x10001c1de:
      uVar14 = (&switchD_100019e65::switchdataD_1006d1710)[(int)(uVar74 + bVar80)];
      UNRECOVERED_JUMPTABLE_41 = (undefined **)(&DAT_10001c189 + (int)uVar14);
      switch(UNRECOVERED_JUMPTABLE_41) {
      case (undefined **)0x10001caa6:
                    /* WARNING: Could not recover jumptable at 0x00010001caaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_41)();
        return ppuVar19;
      case (undefined **)0x10001d6ea:
        plVar46 = (long *)(ppuVar42 + -1);
        ppuVar42[-1] = (undefined *)ppuVar42;
        uVar22 = (ulong)-(uint)(0xfffffffefffe3e76 < (ulong)(long)(int)uVar14);
        UNRECOVERED_JUMPTABLE_44 = (uint *)(uVar22 - 0x68);
        *UNRECOVERED_JUMPTABLE_44 =
             *UNRECOVERED_JUMPTABLE_44 >> 1 | (uint)((*UNRECOVERED_JUMPTABLE_44 & 1) != 0) << 0x1f;
      }
      goto code_r0x00010001d6f0;
    case (undefined **)0x10001c76c:
      ppuVar51[-0x25] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010001c77f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)UNRECOVERED_JUMPTABLE_46)
                           (ppuVar51[-0xd],UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,0,
                            ppuVar51[-9]);
      return ppuVar19;
    case (undefined **)0x10001c9b9:
      return (undefined **)
             CONCAT71(uVar24,(byte)cVar26 ^
                             (byte)*(code *)((long)UNRECOVERED_JUMPTABLE_47 +
                                            (long)UNRECOVERED_JUMPTABLE_46));
    case (undefined **)0x10001c9e8:
      ppuVar51[-0x27] = (undefined *)UNRECOVERED_JUMPTABLE_41;
code_r0x00010001c9f2:
      unaff_R12 = (uint *)ppuVar51[-0xf];
      goto LAB_10001a4cf;
    case (undefined **)0x10001cb30:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001cbbb:
      if (!bVar80 && !bVar83) {
        return UNRECOVERED_JUMPTABLE_41;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001cd46:
      *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) =
           (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) | 0x43);
      *(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x73) =
           (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x73) - (char)cVar26);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001cf8b:
      ppuVar76 = (undefined **)(ulong)(uVar74 + 0xb7eafa68);
      UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar13 + 0xeb2ccd91);
      uVar34 = uVar74 + 0xb7eafa68 ^ 0x4895a210;
      UNRECOVERED_JUMPTABLE_37 = (undefined **)&UNK_10002428c;
code_r0x00010001cfc0:
      uVar14 = uVar13 * 2 + 0x8691a69e;
      uVar14 = (uVar14 * 2 & uVar34) + (uVar14 ^ 0xffbfacb3) + 0x28244d8b;
      bVar80 = (uint)UNRECOVERED_JUMPTABLE_47 < uVar14;
      if ((uint)UNRECOVERED_JUMPTABLE_47 < 0x27e3fa3e != uVar14 < 0x27e3fa3e) {
        bVar80 = uVar14 < 0x27e3fa3e;
      }
                    /* WARNING: Could not recover jumptable at 0x00010001d032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)((long)UNRECOVERED_JUMPTABLE_37 +
                           (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                      [(int)((int)ppuVar76 + 0x481505a0 + (uint)bVar80)]))();
      return ppuVar19;
    case (undefined **)0x10001d242:
      goto code_r0x00010001d242;
    case (undefined **)0x10001d2a5:
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar26;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001d37f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001d79c:
      UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar51 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x3c);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)cVar26);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001d7e1:
      goto code_r0x00010001d7e2;
    case (undefined **)0x10001d877:
      goto code_r0x00010001d879;
    case (undefined **)0x10001da9e:
      UNRECOVERED_JUMPTABLE_44 = (uint *)(ulong)(uVar13 < 0xc09b3bad);
      if (uVar53 < uVar54 + 0xc09b3b66 == uVar13 < 0xc09b3bad) {
        UNRECOVERED_JUMPTABLE_44 = (uint *)(ulong)(uVar53 < uVar28);
      }
      goto code_r0x00010001dac8;
    case (undefined **)0x10001daf9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001dbe8:
      ppuVar19 = (undefined **)UNRECOVERED_JUMPTABLE_44;
      if ((long)UNRECOVERED_JUMPTABLE_46 < -0x1000227e7) goto code_r0x00010001dbea;
      goto code_r0x00010001db7a;
    case (undefined **)0x10001dce8:
      UNRECOVERED_JUMPTABLE_37 = (undefined **)0x0;
code_r0x00010001dcec:
      if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x0) goto code_r0x00010001dcee;
      cVar9 = (char)cVar26 + cRamfffffffffffabec3;
      UNRECOVERED_JUMPTABLE_41 = (undefined **)CONCAT71(uVar24,cVar9);
      if (cVar9 == '\0' || SCARRY1((char)cVar26,cRamfffffffffffabec3) != cVar9 < '\0') {
code_r0x00010001dcee:
        uVar68 = (uint)UNRECOVERED_JUMPTABLE_46;
        *(uint *)(ppuVar51 + -9) = uVar68;
        uVar14 = uVar68 * 2 + 0x80a88ee0;
        uVar14 = (uVar14 << ((char)UNRECOVERED_JUMPTABLE_41 + 0x32U & 0x1f) & 0x7f577ba4) +
                 (uVar14 ^ 0xbfabbdd2) + 0xdb5e2ca8;
        bVar80 = uVar68 + 0x5b5e31ee < uVar14;
        if (uVar68 + 0x5b5e31ee < 0x9b09ea7a != uVar14 < 0x9b09ea7a) {
          bVar80 = uVar14 < 0x9b09ea7a;
        }
                    /* WARNING: Could not recover jumptable at 0x00010001dd81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar19 = (undefined **)
                   (*(code *)(&DAT_10001d0e1 +
                             (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                           (long)(int)((uint)bVar80 + (int)UNRECOVERED_JUMPTABLE_41
                                                      + -0x2e3fe402) * 4)))();
        return ppuVar19;
      }
      bVar80 = uVar28 + 0xc38fcf99 < uVar53;
      if (uVar28 + 0xc38fcf99 < (int)UNRECOVERED_JUMPTABLE_37 + 0xf9ba9d28U != uVar54 < uVar49) {
        bVar80 = uVar54 < uVar49;
      }
      *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(uVar28 + 0xc9d531ae)) =
           *(code *)((long)UNRECOVERED_JUMPTABLE_46 + (ulong)(uVar28 + 0xc9d531ae));
      UNRECOVERED_JUMPTABLE_44 =
           (uint *)(&UNK_10001dd90 +
                   *(int *)(&DAT_1006d1e30 +
                           (long)(int)((uint)bVar80 + (int)UNRECOVERED_JUMPTABLE_37) * 4));
      goto code_r0x00010001ddfa;
    case (undefined **)0x10001dcec:
      goto code_r0x00010001dcec;
    case (undefined **)0x10001de0d:
      *(code *)((long)UNRECOVERED_JUMPTABLE_37 + -0xf4274b4) = (code)0x0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001de74:
      cRamf287c281003004c6 = (char)cVar26 + -0x5e;
      *(code *)((long)ppuVar51 + 0x5f286b2) =
           (code)((char)*(code *)((long)ppuVar51 + 0x5f286b2) + bVar11);
      uVar13 = uVar13 + 0x40098d44;
      UNRECOVERED_JUMPTABLE = (code *)((long)puVar75 + -0x42befbff);
      uVar14 = *(uint *)UNRECOVERED_JUMPTABLE;
      uVar68 = *(uint *)UNRECOVERED_JUMPTABLE;
      *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE + uVar13;
      if (SCARRY4(uVar68,uVar13) == (int)*(uint *)UNRECOVERED_JUMPTABLE < 0) {
        *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7f) =
             *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7f) + uVar13 + (uint)CARRY4(uVar14,uVar13)
        ;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x00010001de97;
    case (undefined **)0x10001df13:
      UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77);
      iVar59 = *(int *)UNRECOVERED_JUMPTABLE;
      *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + -1;
      iVar57 = *(int *)UNRECOVERED_JUMPTABLE;
      *(code *)((long)ppuVar66 + -0x43) = cVar63;
      if (SBORROW4(iVar59,1) != iVar57 < 0) goto code_r0x00010001df1c;
      goto code_r0x00010001dec5;
    case (undefined **)0x10001df72:
      UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uint)(int)(short)UNRECOVERED_JUMPTABLE_41;
      ppuVar56 = (undefined **)(ulong)(uVar64 - 0x14);
      goto code_r0x00010002186d;
    case (undefined **)0x10001dfc8:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
      return ppuVar19;
    case (undefined **)0x10001e01d:
      goto code_r0x00010001e01d;
    case (undefined **)0x10001e197:
      goto code_r0x00010001e197;
    case (undefined **)0x10001e700:
      *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001ea7f:
      ppuVar19 = (undefined **)0xfffffee8;
      ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
      goto code_r0x00010001ea84;
    case (undefined **)0x10001ebc7:
      ppuVar42[-1] = (undefined *)0x10001ebcc;
      (*(code *)unaff_R12)();
      ppuVar56[6] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010001ec02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&LAB_100023f98 +
                           (int)*(uint *)((long)ppuVar76 +
                                         (long)(int)(uVar77 + (ppuVar56[8] == (undefined *)0x0)) * 4
                                         )))();
      return ppuVar19;
    case (undefined **)0x10001edbc:
      UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)(uVar58 + 0x27e2fda);
      ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
code_r0x00010001edc4:
      bVar80 = (uint)UNRECOVERED_JUMPTABLE_45 < 0x4229e900;
      goto code_r0x00010001edcd;
    case (undefined **)0x10001ee55:
      cVar63 = (code)in(uVar32);
      *(code *)UNRECOVERED_JUMPTABLE_37 = cVar63;
      goto code_r0x00010001ee56;
    case (undefined **)0x10001eec2:
      ppuVar42[-1] = (undefined *)(ulong)(uVar13 - *(uint *)UNRECOVERED_JUMPTABLE_45);
      ppuVar42[-2] = (undefined *)0x10001eecd;
      (*(code *)unaff_R12)();
      ppuVar56[3] = (undefined *)0x0;
      UNRECOVERED_JUMPTABLE_37 = (undefined **)ppuVar56[6];
      UNRECOVERED_JUMPTABLE_46 = (undefined **)&switchD_10001f9d9::switchdataD_1006d2190;
      goto code_r0x00010001eee0;
    case (undefined **)0x10001eede:
      if (!bVar83 && -0x1000227e8 < (long)UNRECOVERED_JUMPTABLE_46) {
        ppuVar61 = (undefined **)(ulong)*(uint *)(ppuVar51 + -0xb);
        UNRECOVERED_JUMPTABLE_41 = UNRECOVERED_JUMPTABLE_46;
        goto code_r0x00010001f159;
      }
code_r0x00010001eee0:
      uVar13 = uVar74 + 0x4815048e + (uint)(UNRECOVERED_JUMPTABLE_37 == (undefined **)0x0);
      *(undefined4 *)((long)ppuVar56 + 0x24) = 0x50a01b4b;
      ppuVar51[-0x10] = (undefined *)puVar75;
      *ppuVar56 = (undefined *)puVar75;
      goto code_r0x00010001eefb;
    case (undefined **)0x10001ef2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001ef5f:
      UNRECOVERED_JUMPTABLE_47 = (undefined **)((long)UNRECOVERED_JUMPTABLE_47 + -1);
      UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uVar49 + uVar54);
      ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
code_r0x00010001ef68:
      unaff_R12 = (uint *)(ulong)((int)ppuVar56 - 0x94);
      UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
code_r0x00010001ef6f:
      *(uint *)((long)ppuVar19 + -0xb4) = (uint)UNRECOVERED_JUMPTABLE_47;
      UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0xc];
      *(undefined8 *)((long)ppuVar42 + -8) = 0x10001ef9b;
      puVar17 = (undefined *)
                (*UNRECOVERED_JUMPTABLE)
                          ((((uint)unaff_R12 | 0x88) ^
                            ((int)UNRECOVERED_JUMPTABLE_44 - 0x8cU | 0x90) ^ 0x1004211) +
                           (int)UNRECOVERED_JUMPTABLE_45);
      ppuVar19[-0x38] = puVar17;
                    /* WARNING: Could not emulate address calculation at 0x00010001efb4 */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&LAB_10001ef65 +
                           (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                [(int)((int)UNRECOVERED_JUMPTABLE_44 +
                                      (uint)(puVar17 == (undefined *)0x0))]))
                           (ppuVar19[-9],
                            &LAB_10001ef65 +
                            (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                 [(int)((int)UNRECOVERED_JUMPTABLE_44 +
                                       (uint)(puVar17 == (undefined *)0x0))],0);
      return ppuVar19;
    case (undefined **)0x10001ef6f:
      goto code_r0x00010001ef6f;
    case (undefined **)0x10001f0b3:
      if (SCARRY1((char)cVar26,-0x5b) == SCARRY1((char)cVar26 + -0x5b,bVar80)) {
        UNRECOVERED_JUMPTABLE_47 = (undefined **)0x230f4;
      }
      *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x77) =
           *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x77) | 0x148b48db;
      uVar22 = (ulong)(uint)((int)UNRECOVERED_JUMPTABLE_47 + *(int *)ppuVar51[-0x2c]);
      uVar60 = uVar22 * 2 & 0x1e2846e84;
      ppuVar51[-0x27] = (undefined *)CONCAT71(uVar24,(char)cVar26 + -0x5b + bVar80);
      ppuVar19 = (undefined **)
                 switchD_100020322::caseD_2214a
                           (uVar60,(long)UNRECOVERED_JUMPTABLE_44 +
                                   (uVar22 - uVar60) + -0x141622680ebdc8cd,UNRECOVERED_JUMPTABLE_46,
                            &DAT_1000230f4);
      return ppuVar19;
    case (undefined **)0x10001f1bd:
      puVar78 = (uint *)(ulong)(uVar64 - 7);
      ppuVar51[-0x14] = (undefined *)UNRECOVERED_JUMPTABLE_47;
      ppuVar51[-0x16] = (undefined *)UNRECOVERED_JUMPTABLE_47;
      ppuVar51[-0x19] = (undefined *)UNRECOVERED_JUMPTABLE_47;
      ppuVar51[-0x1c] = (undefined *)UNRECOVERED_JUMPTABLE_47;
      ppuVar51[-0xc] = (undefined *)0x5c05e2a4aeb6ae7e;
      ppuVar51[-0x1d] = (undefined *)0x5c05e2a4aeb6ae7e;
      ppuVar51[-0x18] = (undefined *)0x5c05e2a4aeb6ae7e;
      ppuVar51[-0x1b] = (undefined *)0x5c05e2a4aeb6ae7e;
      UNRECOVERED_JUMPTABLE_45 = (undefined **)ppuVar51[-0x22];
      UNRECOVERED_JUMPTABLE_47 = *(undefined ***)(ppuVar51[-9] + -0x7ec08e5aeb2a8122);
      goto LAB_10001f1c1;
    case (undefined **)0x10001f366:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001f463:
      *(code *)((long)puVar75 + -0xab7b) = (code)((char)*(code *)((long)puVar75 + -0xab7b) - 1);
      *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001f4fd:
      goto code_r0x00010001f4fd;
    case (undefined **)0x10001f575:
      goto code_r0x00010001f575;
    case (undefined **)0x10001f73f:
      *(int *)((long)UNRECOVERED_JUMPTABLE_47 + 0x48481504) =
           (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_47 + 0x48481504) >> (bVar11 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x00010001f755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&DAT_1000261ca +
                           *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                   ((ulong)puVar75 & 0xffffffff) * 4)))();
      return ppuVar19;
    case (undefined **)0x10001f8d5:
      ppuVar42[-1] = (undefined *)0x10001f8da;
      (*(code *)ppuVar56)((ulong)puVar75 & 0xffffffff);
      puVar75 = (uint *)ppuVar76;
      if (*(undefined **)PTR____stack_chk_guard_10082cb58 != ppuVar51[-6]) {
                    /* WARNING: Subroutine does not return */
        ppuVar42[-1] = switchD_100024103::caseD_1f059;
        ___stack_chk_fail();
      }
code_r0x00010001f8ee:
      return (undefined **)(ulong)((int)puVar75 + 0xce995683);
    case (undefined **)0x10001fb4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001fb90:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10001fcd5:
      return UNRECOVERED_JUMPTABLE_41;
    case (undefined **)0x10001fe90:
      *(uint *)((long)UNRECOVERED_JUMPTABLE_46 + 0x1f73144) =
           *(uint *)((long)UNRECOVERED_JUMPTABLE_46 + 0x1f73144) | uVar34;
      return UNRECOVERED_JUMPTABLE_41;
    case (undefined **)0x10002003c:
      uVar22 = (ulong)(uVar34 * 2);
code_r0x00010002003f:
      UNRECOVERED_JUMPTABLE_47 = (undefined **)~(uVar22 & 0x1e2846e84);
code_r0x00010002004f:
      ppuVar19[-0x26] = (undefined *)((ulong)UNRECOVERED_JUMPTABLE_45 & 0xffffffff);
      ppuVar19 = (undefined **)
                 FUN_100025f10(ppuVar19[-0x20],UNRECOVERED_JUMPTABLE_45,
                               (code *)((long)UNRECOVERED_JUMPTABLE_46 + (long)ppuVar65) +
                               (long)UNRECOVERED_JUMPTABLE_47,0xf4ef00436de991f2);
      return ppuVar19;
    case (undefined **)0x1000200e8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10002025f:
      ppuVar51[-0x4e] =
           (code *)((long)UNRECOVERED_JUMPTABLE_45 +
                   (long)UNRECOVERED_JUMPTABLE_44 * 8 + 0xb10ffbc92166e26);
                    /* WARNING: Could not recover jumptable at 0x0001000202a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&DAT_10002025b +
                           *(int *)(&DAT_1006d2600 +
                                   (long)(int)(uVar34 + (*(long *)((long)UNRECOVERED_JUMPTABLE_46 +
                                                                  (long)(&UNK_1000227ff +
                                                                        (long)
                                                  UNRECOVERED_JUMPTABLE_44 * 8)) == 0)) * 4)))
                           (*(long *)((long)UNRECOVERED_JUMPTABLE_46 +
                                     (long)(&UNK_1000227ff + (long)UNRECOVERED_JUMPTABLE_44 * 8)),
                            &DAT_10002025b,
                            &DAT_10002025b +
                            *(int *)(&DAT_1006d2600 +
                                    (long)(int)(uVar34 + (*(long *)((long)UNRECOVERED_JUMPTABLE_46 +
                                                                   (long)(&UNK_1000227ff +
                                                                         (long)
                                                  UNRECOVERED_JUMPTABLE_44 * 8)) == 0)) * 4));
      return ppuVar19;
    case (undefined **)0x1000202e2:
      goto code_r0x0001000202e2;
    case (undefined **)0x10002037b:
      uVar14 = (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)(uVar54 + 0x8d60152f))
               | (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)(uVar54 + 0x8d60152e)
                                      ) << (((char)puVar75 + 0x2dU | 8) + 0x5c & 0x1f) |
               (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)(uVar54 + 0x8d60152d))
               << 0x10 | (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_37 +
                                              (ulong)(uVar54 + 0x8d60152c)) <<
                         (((byte)UNRECOVERED_JUMPTABLE_44 ^ 0x6d) & 0x1f);
      *(uint *)((ulong)(uVar67 & 0x9807d6fd) - 0x1a4) =
           (uVar14 ^ 0xb7efa97f) + (uVar14 & 0x37efa97f) * 2 + 0x7976fffe;
      **(int **)((ulong)(uVar67 & 0x9807d6fd) - 0xf0) = uVar54 + 4;
      ppuVar65 = (undefined **)0x0;
      bVar80 = ppuVar76 == UNRECOVERED_JUMPTABLE_45;
      goto code_r0x000100020407;
    case (undefined **)0x100020410:
      UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_37 + 99);
      *UNRECOVERED_JUMPTABLE =
           (code)((byte)*UNRECOVERED_JUMPTABLE >> 4 | (char)*UNRECOVERED_JUMPTABLE << 4);
      goto code_r0x00010002041c;
    case (undefined **)0x10002046a:
      UNRECOVERED_JUMPTABLE = (code *)((long)in_GS_OFFSET + (long)((long)ppuVar51 + -0x77));
      *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE ^ uVar13;
      uVar14 = in(0x49);
      ppuVar61 = (undefined **)0x2f9fc832;
      if (*(uint *)UNRECOVERED_JUMPTABLE != 0) {
        return (undefined **)(ulong)uVar14;
      }
      UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar51 + 0x31);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)uVar14);
      bVar80 = *UNRECOVERED_JUMPTABLE == (code)0x0;
      goto switchD_100025d1a_caseD_20403;
    case (undefined **)0x10002052f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000205b6:
                    /* WARNING: Could not recover jumptable at 0x0001000205c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_100020572 + *(int *)((long)unaff_R12 + (long)(int)uVar74 * 4)))();
      return ppuVar19;
    case (undefined **)0x100020608:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000206bb:
      goto code_r0x0001000206bb;
    case (undefined **)0x100020855:
                    /* WARNING: Could not recover jumptable at 0x00010002086f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)((long)(int)*(uint *)((long)ppuVar76 +
                                                (long)(int)(uVar77 + (UNRECOVERED_JUMPTABLE_37 ==
                                                                     (undefined **)0x0)) * 4) +
                           0x100020855))();
      return ppuVar19;
    case (undefined **)0x100020881:
      cVar9 = (char)cVar26 + (char)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7f);
      UNRECOVERED_JUMPTABLE_41 = (undefined **)CONCAT71(uVar24,cVar9);
      UNRECOVERED_JUMPTABLE_47 = (undefined **)((long)UNRECOVERED_JUMPTABLE_47 + -1);
      ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
      if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x0) goto code_r0x000100020886;
      *(byte *)UNRECOVERED_JUMPTABLE_41 =
           (byte)*(code *)UNRECOVERED_JUMPTABLE_41 | (byte)UNRECOVERED_JUMPTABLE_47;
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + cVar9;
      goto code_r0x000100020908;
    case (undefined **)0x10002092a:
      in(0x3f);
                    /* WARNING: Could not recover jumptable at 0x00010002094d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_100020915 +
                           *(int *)((long)UNRECOVERED_JUMPTABLE_46 +
                                   (long)(int)(uVar64 + ((undefined **)puVar75 == (undefined **)0x0)
                                              ) * 4)))
                           (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,ppuVar51[-0x10],
                            &UNK_100020915 +
                            *(int *)((long)UNRECOVERED_JUMPTABLE_46 +
                                    (long)(int)(uVar64 + ((undefined **)puVar75 == (undefined **)0x0
                                                         )) * 4),UNRECOVERED_JUMPTABLE_46);
      return ppuVar19;
    case (undefined **)0x10002094e:
      UNRECOVERED_JUMPTABLE_41 = ppuVar51;
      if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x1 && bVar83) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x000100020950;
    case (undefined **)0x1000209a6:
      goto code_r0x0001000209a6;
    case (undefined **)0x100020a38:
                    /* WARNING: Could not recover jumptable at 0x000100020a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&DAT_100021c75 +
                           *(int *)(&DAT_1006d2600 +
                                   (long)(int)(uVar13 + 0x58e83459 +
                                              (uint)((long)UNRECOVERED_JUMPTABLE_37
                                                           [(long)(int)(uVar77 + 0xabf54577) * 5] -
                                                     (long)unaff_R12 ==
                                                    ((ulong)(uVar74 & 0x96c8783f) ^
                                                    (ulong)ppuVar51[-0x1e]))) * 4)))();
      return ppuVar19;
    case (undefined **)0x100020af0:
      *(code *)((long)ppuVar65 + -0x77) = (code)((byte)*(code *)((long)ppuVar65 + -0x77) | bVar11);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100020b03:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100020bec:
      cVar9 = (char)(uVar34 >> 8);
      cVar36 = cVar9 + bVar11;
      UNRECOVERED_JUMPTABLE_46 =
           (undefined **)CONCAT62((int6)(short)(uVar34 >> 0x10),CONCAT11(cVar36,cVar31));
      if (cVar36 == '\0' || SCARRY1(cVar9,bVar11) != cVar36 < '\0') {
        return UNRECOVERED_JUMPTABLE_41;
      }
      UNRECOVERED_JUMPTABLE_45 = (undefined **)0x41f98941;
      bVar27 = 0x32;
code_r0x000100020bf8:
      uVar14 = ((int)UNRECOVERED_JUMPTABLE_37 << (bVar27 & 0x1f) & 0xd1ffc7fcU) +
               ((uint)ppuVar66 ^ 0x68ffe3ff) + 0x6641edd7;
      UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)uVar14;
      ppuVar71 = (undefined **)(ulong)(uVar14 < 0xcf41d1d6);
code_r0x000100020c27:
      ppuVar56 = (undefined **)
                 (ulong)((uint)UNRECOVERED_JUMPTABLE_45 < (uint)UNRECOVERED_JUMPTABLE_47);
      if ((char)ppuVar69 != (char)ppuVar71) {
        ppuVar56 = ppuVar71;
      }
      goto code_r0x000100020c3a;
    case (undefined **)0x100020c98:
      goto code_r0x000100020c98;
    case (undefined **)0x100020cf0:
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar26;
      UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)((uVar64 ^ 1) + uVar77);
      UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar64 ^ 0x80000002);
      UNRECOVERED_JUMPTABLE_45 =
           (undefined **)(ulong)((uVar64 + 0x850656db & 0x7af9a92f) - 0xc ^ uVar77 + 0x2bf54578);
      UNRECOVERED_JUMPTABLE_37 = (undefined **)UNRECOVERED_JUMPTABLE_44;
code_r0x000100020d18:
                    /* WARNING: Could not recover jumptable at 0x000100020d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_100020cf0 +
                           (int)*(uint *)((long)ppuVar65 +
                                         (long)((int)((ulong)((long)UNRECOVERED_JUMPTABLE_46 +
                                                             (long)UNRECOVERED_JUMPTABLE_45) >> 0x20
                                                     ) + (int)puVar78) * 4)))
                           (UNRECOVERED_JUMPTABLE_37,&UNK_100020cf0,
                            &UNK_100020cf0 +
                            (int)*(uint *)((long)ppuVar65 +
                                          (long)((int)((ulong)((long)UNRECOVERED_JUMPTABLE_46 +
                                                              (long)UNRECOVERED_JUMPTABLE_45) >>
                                                      0x20) + (int)puVar78) * 4),
                            UNRECOVERED_JUMPTABLE_47);
      return ppuVar19;
    case (undefined **)0x100020d38:
      ppuVar51[-0x1d] = (undefined *)ppuVar69;
      ppuVar51[-0x35] = (undefined *)((long)puVar75 + 8);
      puVar17 = (undefined *)
                (long)*(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                              (long)(int)(uVar68 + ((undefined **)puVar75 == (undefined **)0x0)) * 4
                              );
      ppuVar51[-0x14] = puVar17;
      ppuVar51[-0x16] = puVar17;
      ppuVar51[-0x19] = puVar17;
      ppuVar51[-0x1c] = puVar17;
      ppuVar51[-0xc] = (undefined *)0x5c05e2a4aeb6ae7e;
      ppuVar51[-0x18] = (undefined *)0x5c05e2a4aeb6ae7e;
      ppuVar51[-0x1b] = (undefined *)0x5c05e2a4aeb6ae7e;
                    /* WARNING: Could not recover jumptable at 0x000100020dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_100020d38 + (long)puVar17))
                           (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                            &UNK_100020d38 + (long)puVar17,0,ppuVar65,0x3165f9b3);
      return ppuVar19;
    case (undefined **)0x100020de6:
      ppuVar42[-1] = &UNK_100020dec;
      (*(code *)unaff_R12)(puVar75);
      goto code_r0x000100020def;
    case (undefined **)0x100020f10:
      ppuVar42[-1] = (undefined *)0x48efbfdb;
      UNRECOVERED_JUMPTABLE_46 =
           (undefined **)
           (ppuVar51[-0x29] +
           (-0x4bf06665ce8f161a - ((long)ppuVar51[-0x29] * 2 & 0x681f333462e1d3ccU)));
      UNRECOVERED_JUMPTABLE_47 =
           (undefined **)
           (((long)UNRECOVERED_JUMPTABLE_45 << ((char)puVar75 + 0x4fU & 0x3f) & 0x1fbfffc52U) +
            (ulong)(uVar34 ^ uVar49) + *(long *)((long)ppuVar56 + -0x3a5a9c416583c527));
      UNRECOVERED_JUMPTABLE_45 = (undefined **)0x10402497020001d7;
      *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + 0x10402497020001d7) =
           (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x38) ^ 0xb4;
      *(byte *)(UNRECOVERED_JUMPTABLE_47 + 0x2080492e040003b) =
           (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x30) ^ 0xf;
      *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + 0x10402497020001d9) =
           (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x28) ^ 0x99;
      *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + 0x10402497020001da) =
           (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x20) ^ 0x9a;
      UNRECOVERED_JUMPTABLE_37 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x18 & 0xff);
    case (undefined **)0x100020fa9:
      out((short)UNRECOVERED_JUMPTABLE_46,uVar13);
      *(byte *)(UNRECOVERED_JUMPTABLE_41 + -0x10) =
           (byte)*(code *)(UNRECOVERED_JUMPTABLE_41 + -0x10) & (byte)cVar26;
      *(int *)(UNRECOVERED_JUMPTABLE_46 + 0x1cf9108) =
           -*(int *)(UNRECOVERED_JUMPTABLE_46 + 0x1cf9108);
      uVar22 = (ulong)(uint)((int)UNRECOVERED_JUMPTABLE_47 +
                            *(int *)((long)UNRECOVERED_JUMPTABLE_47 + 0x18efc1d7));
      *(byte *)((long)UNRECOVERED_JUMPTABLE_45 + uVar22 + 4) = (byte)UNRECOVERED_JUMPTABLE_37 ^ 0x31
      ;
      *(byte *)((long)UNRECOVERED_JUMPTABLE_45 + uVar22 + 5) =
           (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x10) ^ 0x70;
      *(byte *)((long)UNRECOVERED_JUMPTABLE_45 + uVar22 + 6) =
           (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 8) ^ 0xe9;
      *(byte *)((long)UNRECOVERED_JUMPTABLE_45 + uVar22 + 7) = (byte)UNRECOVERED_JUMPTABLE_46 ^ 0xe6
      ;
      *(int *)UNRECOVERED_JUMPTABLE_41 = *(int *)UNRECOVERED_JUMPTABLE_41 + 8;
      *(uint *)(ppuVar51 + -0x1d) = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x000100021023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_100020ffc + *(int *)(&DAT_1006d2600 + (long)(int)(uVar77 + 1) * 4))
                 )();
      return ppuVar19;
    case (undefined **)0x10002108a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000210bd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000211e4:
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar26;
      ppuVar42[-1] = &UNK_1000211e9;
      puVar17 = (undefined *)(*(code *)UNRECOVERED_JUMPTABLE_44)();
      *(undefined **)puVar75 = puVar17;
      bVar79 = puVar17 == (undefined *)0x0;
      UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)unaff_R12 & 0xffffffff);
code_r0x0001000211f3:
                    /* WARNING: Could not emulate address calculation at 0x0001000211f8 */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_1000211b7 +
                           (int)*(uint *)((long)ppuVar76 +
                                         (long)(int)((int)UNRECOVERED_JUMPTABLE_41 + (uint)bVar79) *
                                         4)))();
      return ppuVar19;
    case (undefined **)0x100021295:
      *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x4c70bb39) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x4c70bb39) + 1;
      bVar27 = (byte)*(code *)((long)ppuVar51 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + -0x77) & 0xa4;
      if ((char)bVar27 < '\0') {
        UNRECOVERED_JUMPTABLE_47 = (undefined **)((long)UNRECOVERED_JUMPTABLE_47 + -1);
        if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x0 && bVar27 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar14 = *(uint *)((long)UNRECOVERED_JUMPTABLE_44 + -0x2cc289762f9fc82a);
        uVar34 = ((int)UNRECOVERED_JUMPTABLE_47 + 4U ^ 0xe91b8e50) +
                 *(int *)((long)UNRECOVERED_JUMPTABLE_44 + -0x2cc289762f9fc826);
        ppuVar51[-0x1d] = (undefined *)(ulong)uVar14;
        UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)(uVar14 + 0xf6b38f44);
        ppuVar66 = (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_47 + 0x5bbb78a4);
      }
      uVar28 = (uint)UNRECOVERED_JUMPTABLE_47;
      bVar80 = uVar34 < (uint)ppuVar66;
      if ((uint)UNRECOVERED_JUMPTABLE_37 < 0x5bbb790f == bVar80) {
        bVar80 = (uint)UNRECOVERED_JUMPTABLE_37 < uVar34;
      }
      ppuVar69 = (undefined **)(ulong)bVar80;
      goto code_r0x0001000212d1;
    case (undefined **)0x1000212f6:
      goto code_r0x0001000212f6;
    case (undefined **)0x100021369:
      ppuVar51[-0x20] = (undefined *)0x0;
      goto code_r0x00010002137d;
    case (undefined **)0x1000213b1:
      goto switchD_100025d1a_caseD_21394;
    case (undefined **)0x1000213bf:
      uVar13 = uVar13 - 0x62;
      UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar13 ^ 0x60);
      uVar14 = uVar13 | 0x52;
      uVar13 = uVar13 ^ 0x3166a923;
      goto code_r0x0001000213d3;
    case (undefined **)0x1000213d6:
      goto code_r0x0001000213d6;
    case (undefined **)0x10002140e:
      goto code_r0x000100021415;
    case (undefined **)0x100021427:
      pbVar1 = (byte *)((long)UNRECOVERED_JUMPTABLE_47 * 5 + -7);
      *pbVar1 = *pbVar1 << 1 | *pbVar1 >> 7;
      UNRECOVERED_JUMPTABLE = (code *)swi(1);
      ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
      return ppuVar19;
    case (undefined **)0x100021434:
      ppuVar52 = (undefined **)*ppuVar51;
      goto code_r0x000100021435;
    case (undefined **)0x100021489:
                    /* WARNING: Could not recover jumptable at 0x0001000214b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_10002146b +
                           *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                   (long)(int)(((uVar14 & uVar77) == 0) + uVar54) * 4)))();
      return ppuVar19;
    case (undefined **)0x10002151d:
      ppuVar73 = (undefined **)((ulong)puVar75 & 0xffffffff);
      unaff_R12 = UNRECOVERED_JUMPTABLE_44;
    case (undefined **)0x100021523:
      UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x11];
      ppuVar42[-1] = &UNK_100021541;
      lVar29 = (*UNRECOVERED_JUMPTABLE)
                         ((((uint)ppuVar73 ^ 0x1f2c0bc4) + 0xc000029b ^ uVar77 & 0xe0d3f4ff) +
                          uVar68);
      iVar57 = *(int *)((long)unaff_R12 + (long)(int)(uVar64 + (lVar29 == 0)) * 4);
      ppuVar51[-0x27] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010002157a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)(*(code *)(&UNK_100021513 + iVar57))(uVar77 & 0xe0d3f4ff);
      return ppuVar19;
    case (undefined **)0x1000215b1:
      goto code_r0x0001000215b1;
    case (undefined **)0x1000216df:
      goto code_r0x0001000216e2;
    case (undefined **)0x10002177d:
      bVar80 = false;
      bVar79 = true;
code_r0x00010002177f:
      uVar13 = (uint)UNRECOVERED_JUMPTABLE_41;
      UNRECOVERED_JUMPTABLE_44 = (uint *)(ulong)(!bVar80 && !bVar79);
      ppuVar56 = (undefined **)puVar78;
      if ((char)ppuVar65 != '\0') {
        UNRECOVERED_JUMPTABLE_44 = (uint *)((ulong)ppuVar69 & 0xffffffff);
      }
code_r0x00010002178a:
                    /* WARNING: Could not recover jumptable at 0x0001000217a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)((long)UNRECOVERED_JUMPTABLE_46 +
                           (long)*(int *)((long)ppuVar56 +
                                         (long)(int)(((uint)UNRECOVERED_JUMPTABLE_44 & 0xff) +
                                                     uVar13 + -0x2e3fe4c4) * 4)))();
      return ppuVar19;
    case (undefined **)0x100021799:
      goto code_r0x00010002178a;
    case (undefined **)0x100021838:
      if (!bVar83 && -0x1000227e8 < (long)UNRECOVERED_JUMPTABLE_46) goto code_r0x00010002183a;
      uVar28 = uVar68 * 2;
      goto code_r0x000100021811;
    case (undefined **)0x10002187d:
      goto code_r0x00010002187d;
    case (undefined **)0x100021946:
      goto code_r0x000100021946;
    case (undefined **)0x1000219b0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000219b7:
      ppuVar51 = (undefined **)0x28c766bc;
      ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
      goto code_r0x0001000219ca;
    case (undefined **)0x100021a24:
      goto code_r0x000100021a24;
    case (undefined **)0x100021a25:
      goto code_r0x000100021a24;
    case (undefined **)0x100021a3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100021b0d:
      *(int *)ppuVar51[-0x2f] = (int)ppuVar51[-0x1c];
      piVar18 = (int *)ppuVar51[-0x32];
      iVar57 = *piVar18;
      lVar29 = *(long *)((long)ppuVar69 + (long)unaff_R12);
      *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x83c46419)) = 0x76;
      *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x83c4641a)) = 0xe8;
      UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar64 + iVar57 + 0x83c4636a);
      *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_46 + lVar29) = 0x92;
      *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x83c4641c)) = 0x10;
      ppuVar51[-0x32] = (undefined *)piVar18;
      *piVar18 = *piVar18 + 4;
      puVar75 = (uint *)(ulong)(uVar64 + 7);
      ppuVar66 = (undefined **)0x3166a97d;
      UNRECOVERED_JUMPTABLE_47 = (undefined **)0x1;
    case (undefined **)0x100021b68:
      ppuVar65 = (undefined **)ppuVar51[-0xb];
      UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)((int)puVar75 - 0xa8);
      UNRECOVERED_JUMPTABLE_41 =
           (undefined **)(long)(int)(((uint)UNRECOVERED_JUMPTABLE_47 & 1) + (int)puVar75);
      UNRECOVERED_JUMPTABLE_44 = (uint *)&DAT_1006d1e30;
code_r0x000100021b8f:
                    /* WARNING: Could not recover jumptable at 0x000100021b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_100021b78 +
                           (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                         (long)UNRECOVERED_JUMPTABLE_41 * 4)))
                           (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                            UNRECOVERED_JUMPTABLE_46,
                            &UNK_100021b78 +
                            (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                          (long)UNRECOVERED_JUMPTABLE_41 * 4),ppuVar65,ppuVar66);
      return ppuVar19;
    case (undefined **)0x100021b16:
      *(uint *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) + uVar13 + 0x89fffffe;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100021b2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100021b8f:
      goto code_r0x000100021b8f;
    case (undefined **)0x100021bc5:
      puVar17 = (undefined *)(ulong)*(uint *)(ppuVar51 + -0x2a);
      ppuVar71 = (undefined **)UNRECOVERED_JUMPTABLE_44;
code_r0x000100021bcb:
      ppuVar51[-0x5d] = puVar17;
      uVar14 = *(uint *)((long)ppuVar71 +
                        (long)(int)((uint)(puVar17 == (undefined *)0x3a5a9c416583c527) +
                                   (int)puVar78) * 4);
      *(uint *)(ppuVar51 + -0x1d) = 0x3165f9b3;
      switch(&UNK_100021bb2 + (int)uVar14) {
      case (undefined *)0x10001f5c4:
        UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x11];
        *(undefined8 *)((long)ppuVar42 + -8) = 0x10001f5ca;
        lVar29 = (*UNRECOVERED_JUMPTABLE)();
        iVar57 = *(int *)(&DAT_1006d1e30 + (long)(int)((int)puVar78 + (uint)(lVar29 == 0)) * 4);
        ppuVar51[-0xc] = (undefined *)0x5c05e2a4aeb6ae7e;
                    /* WARNING: Could not recover jumptable at 0x00010001f605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar19 = (undefined **)(*(code *)(&DAT_10001f5a2 + iVar57))();
        return ppuVar19;
      case (undefined *)0x100020103:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    case (undefined **)0x100021bdb:
      ppuVar42[-1] = (undefined *)
                     ((ulong)(in_NT & 1) * 0x4000 |
                      (ulong)SCARRY8((long)UNRECOVERED_JUMPTABLE_46,0x1000227e7) * 0x800 |
                      (ulong)(bVar27 & 1) * 0x400 | (ulong)(in_IF & 1) * 0x200 |
                      (ulong)(in_TF & 1) * 0x100 |
                      (ulong)((long)UNRECOVERED_JUMPTABLE_45 < 0) * 0x80 | (ulong)bVar83 * 0x40 |
                      (ulong)(in_AF & 1) * 0x10 | (ulong)bVar81 * 4 | (ulong)bVar80 |
                      (ulong)(in_ID & 1) * 0x200000 | (ulong)(in_VIP & 1) * 0x100000 |
                      (ulong)(in_VIF & 1) * 0x80000 | (ulong)(in_AC & 1) * 0x40000);
      return UNRECOVERED_JUMPTABLE_41;
    case (undefined **)0x100021d60:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100021e6f:
                    /* WARNING: Could not recover jumptable at 0x000100021e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_41)();
      return ppuVar19;
    case (undefined **)0x10002206d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000220f3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100022337:
      ppuVar71 = (undefined **)UNRECOVERED_JUMPTABLE_44;
      puVar75 = (uint *)ppuVar76;
      goto code_r0x000100022339;
    case (undefined **)0x100022424:
      UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x47);
      iVar57 = *(int *)UNRECOVERED_JUMPTABLE;
      *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + -1;
      iVar59 = *(int *)UNRECOVERED_JUMPTABLE;
      *(undefined2 *)UNRECOVERED_JUMPTABLE_46 = in_FPUControlWord;
      if (SBORROW4(iVar57,1) != iVar59 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      ppuVar19 = (undefined **)(ulong)*(uint *)((long)puVar75 + (long)UNRECOVERED_JUMPTABLE_47);
      puVar75 = (uint *)ppuVar76;
      goto switchD_100025d1a_caseD_22447;
    case (undefined **)0x100022499:
      ppuVar69 = (undefined **)
                 ((long)UNRECOVERED_JUMPTABLE_47 +
                 ((long)ppuVar56 + (long)UNRECOVERED_JUMPTABLE_46 & (ulong)UNRECOVERED_JUMPTABLE_41)
                 );
      *(uint *)(ppuVar51 + -0x22) = 0x3166a97d;
      UNRECOVERED_JUMPTABLE_45 = (undefined **)ppuVar51[-0x20];
      break;
    case (undefined **)0x1000225e1:
      uVar22 = (ulong)(uVar13 - 0x7a);
      goto code_r0x0001000225e6;
    case (undefined **)0x10002265f:
      goto code_r0x00010002265f;
    case (undefined **)0x100022673:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000226da:
      UNRECOVERED_JUMPTABLE = (code *)swi(1);
      ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
      return ppuVar19;
    case (undefined **)0x1000226ff:
      out(0x17,cVar26);
code_r0x000100022706:
      ppuVar56 = (undefined **)(ulong)(uVar77 + 0x44974920);
      goto code_r0x00010002270d;
    case (undefined **)0x100022706:
      goto code_r0x000100022706;
    case (undefined **)0x100022755:
      uVar13 = *(uint *)((long)UNRECOVERED_JUMPTABLE_41 * 5);
      goto code_r0x000100022736;
    case (undefined **)0x1000227be:
      *(uint *)UNRECOVERED_JUMPTABLE_37 =
           *(uint *)UNRECOVERED_JUMPTABLE_37 >> 0x16 | *(uint *)UNRECOVERED_JUMPTABLE_37 << 10;
      *(uint *)UNRECOVERED_JUMPTABLE_47 =
           *(uint *)UNRECOVERED_JUMPTABLE_47 << 0x10 | *(uint *)UNRECOVERED_JUMPTABLE_47 >> 0x10;
      lVar29 = (long)(int)*(uint *)((long)ppuVar65 + (long)(int)uVar13 * 4);
                    /* WARNING: Could not recover jumptable at 0x0001000227e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&DAT_100022767 + lVar29))
                           (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,0x5c05e2a4aeb6ae7e,
                            lVar29,ppuVar65,0x3165f9b1);
      return ppuVar19;
    case (undefined **)0x1000227e7:
      goto code_r0x0001000227e7;
    case (undefined **)0x1000227ed:
      UNRECOVERED_JUMPTABLE_47 =
           (undefined **)(ulong)(uVar68 + *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x73));
      ppuVar71 = (undefined **)UNRECOVERED_JUMPTABLE_44;
      goto code_r0x0001000227f0;
    case (undefined **)0x1000227ee:
      goto code_r0x0001000227ee;
    case (undefined **)0x1000227f2:
      goto code_r0x0001000227f2;
    case (undefined **)0x10002280d:
      uVar14 = in(0x8b);
      UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
    case (undefined **)0x10002280f:
      UNRECOVERED_JUMPTABLE_46 = (undefined **)CONCAT71(iVar30,0x31);
      *(int *)((long)UNRECOVERED_JUMPTABLE_47 + 0x379e3bfa) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_47 + 0x379e3bfa) + 1;
      UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)bVar80;
      goto code_r0x00010002281c;
    case (undefined **)0x10002282b:
      goto code_r0x00010002282b;
    case (undefined **)0x10002283d:
      goto code_r0x00010002283d;
    case (undefined **)0x100022850:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100022854:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100022859:
      goto code_r0x000100022859;
    case (undefined **)0x10002286f:
      goto code_r0x00010002286f;
    case (undefined **)0x1000228a4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000228ac:
      goto code_r0x0001000228ac;
    case (undefined **)0x1000229c4:
      goto code_r0x0001000229c4;
    case (undefined **)0x100022a38:
      return UNRECOVERED_JUMPTABLE_41;
    case (undefined **)0x100022b77:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100022bc5:
      goto code_r0x000100022bc5;
    case (undefined **)0x100022d2a:
      goto code_r0x000100022d2a;
    case (undefined **)0x100022d7f:
      ppuVar51[-0x49] = (undefined *)UNRECOVERED_JUMPTABLE_46;
      ppuVar51[-0x40] = ppuVar51[-0x27];
      puVar17 = ppuVar51[-0x31];
      ppuVar51[-0x4a] = puVar17;
      ppuVar51[-0x24] = puVar17;
      ppuVar51[-0x26] = puVar17;
      goto code_r0x000100026276;
    case (undefined **)0x100022fba:
      goto code_r0x000100022fba;
    case (undefined **)0x1000231c9:
                    /* WARNING: Could not recover jumptable at 0x0001000231fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_1000231c1 +
                           *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                   (long)(int)(uVar28 + (uVar49 < ((uVar53 | 8) + 0x2e3fe4b0 ^
                                                                  uVar54 & 0xaeffecef))) * 4)))();
      return ppuVar19;
    case (undefined **)0x10002333a:
    case (undefined **)0x10002332f:
      uVar14 = *(uint *)(UNRECOVERED_JUMPTABLE_47 + (long)UNRECOVERED_JUMPTABLE_41);
      ppuVar42[-1] = (undefined *)0x100023344;
      (*(code *)((ulong)uVar14 - 3))(FUN_100014e10);
      *puRam0000000048007e7e = 1;
      ppuVar52 = (undefined **)0x480080b6;
      puVar78 = (uint *)(ulong)((uVar74 ^ 0xa717cbae) * 0x2c);
      goto switchD_100025d1a_caseD_2335a;
    case (undefined **)0x100023368:
      goto switchD_100025d1a_caseD_2335a;
    case (undefined **)0x1000233b2:
      goto switchD_100025d1a_caseD_2335a;
    case (undefined **)0x1000233b3:
      unaff_00084f00 = '\f';
      plVar41 = (long *)(ppuVar42 + -1);
      unaff_0008ae00 = ppuVar42 + -1;
      plVar46 = (long *)(ppuVar42 + -1);
      ppuVar42[-1] = (undefined *)ppuVar51;
      cVar9 = '\v';
      do {
        ppuVar51 = ppuVar51 + -1;
        plVar46 = plVar46 + -1;
        *plVar46 = (long)*ppuVar51;
        cVar9 = cVar9 + -1;
        ppuVar42 = (undefined **)plVar41;
      } while ('\0' < cVar9);
      goto code_r0x0001000233b3;
    case (undefined **)0x1000233df:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100023556:
      *(uint *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) =
           *(uint *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) ^ uVar68;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10002355f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100023588:
      puVar17 = UNRECOVERED_JUMPTABLE_47[uVar13 | 0x80b463];
      puVar21 = ppuVar51[-0x43];
      UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x1d];
      ppuVar42[-1] = &UNK_1000235a2;
      uVar14 = (*UNRECOVERED_JUMPTABLE)(puVar17 + -0xc,puVar21);
                    /* WARNING: Could not recover jumptable at 0x0001000235dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_10002356a +
                           *(int *)(&DAT_1006d2600 +
                                   (long)(int)(((uVar14 << ((char)ppuVar56 + 0xa9U & 0x1f) &
                                                0xfe57f340) + (uVar74 + 0x7f2bf975 ^ uVar14) ==
                                               0x7f2bf9a0) + uVar77) * 4)))();
      return ppuVar19;
    case (undefined **)0x100023721:
      goto code_r0x000100023721;
    case (undefined **)0x10002374a:
      goto code_r0x00010002374a;
    case (undefined **)0x100023869:
      goto code_r0x000100023869;
    case (undefined **)0x100023895:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100023943:
      out(0x45,uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010002396e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_1000238fe +
                           (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                [(int)((uVar72 & 0xff) + uVar14)]))();
      return ppuVar19;
    case (undefined **)0x100023acc:
      if (bVar83) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Could not recover jumptable at 0x000100023a7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_100023a57 +
                           CONCAT62((int6)((ulong)UNRECOVERED_JUMPTABLE_41 >> 0x10),
                                    (short)(char)cVar26 * (short)(char)bVar11)))();
      return ppuVar19;
    case (undefined **)0x100023af0:
      goto code_r0x000100023af0;
    case (undefined **)0x100023b26:
                    /* WARNING: Could not recover jumptable at 0x000100023b3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&LAB_100023b0a +
                           *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                   (long)(int)(uVar13 + (UNRECOVERED_JUMPTABLE_37 ==
                                                        (undefined **)0x0)) * 4)))
                           (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                            &LAB_100023b0a +
                            *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                    (long)(int)(uVar13 + (UNRECOVERED_JUMPTABLE_37 ==
                                                         (undefined **)0x0)) * 4));
      return ppuVar19;
    case (undefined **)0x100023c36:
      goto code_r0x000100023c36;
    case (undefined **)0x100023ef7:
      pcVar16 = (char *)((ulong)puVar75 & 0xffffffff);
      do {
        UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7d);
        *(uint *)UNRECOVERED_JUMPTABLE =
             *(uint *)UNRECOVERED_JUMPTABLE << (bVar11 & 0x1f) |
             *(uint *)UNRECOVERED_JUMPTABLE >> 0x20 - (bVar11 & 0x1f);
        uVar14 = (uint)pcVar16 & 0xdd048d46;
        pcVar16 = (char *)(ulong)uVar14;
        cVar9 = (char)uVar14;
        *pcVar16 = *pcVar16 + cVar9;
        *pcVar16 = *pcVar16 + cVar9;
      } while( true );
    case (undefined **)0x100023f10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100023f71:
      goto code_r0x000100023f71;
    case (undefined **)0x100023f7b:
      ppuVar61 = (undefined **)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)bVar27 * -2 + 1);
      *(code *)UNRECOVERED_JUMPTABLE_37 = cVar26;
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + 'H';
      puVar17 = (undefined *)
                (ulong)*(uint *)(UNRECOVERED_JUMPTABLE_46 + (long)UNRECOVERED_JUMPTABLE_41);
      goto code_r0x000100023f82;
    case (undefined **)0x100023fcd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000241bf:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000241c5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10002428c:
      goto code_r0x00010001cfc0;
    case (undefined **)0x1000243f2:
      ppuVar42[-1] = (undefined *)UNRECOVERED_JUMPTABLE_47;
      if (!bVar81) goto code_r0x0001000243f7;
      goto code_r0x00010002438c;
    case (undefined **)0x100024402:
      *(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0xf) =
           (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0xf) + 1);
      return UNRECOVERED_JUMPTABLE_37;
    case (undefined **)0x100024453:
      out(*(code *)UNRECOVERED_JUMPTABLE_45,uVar32);
      *(uint *)UNRECOVERED_JUMPTABLE_41 = *(int *)UNRECOVERED_JUMPTABLE_41 + uVar13;
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar26;
      UNRECOVERED_JUMPTABLE_46 = (undefined **)&UNK_10001df7f;
      goto code_r0x00010002431a;
    case (undefined **)0x1000244d1:
                    /* WARNING: Could not recover jumptable at 0x0001000244e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&LAB_1000244a2 +
                           *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                   (ulong)(uVar13 + 0x98484815) * 4)))();
      return ppuVar19;
    case (undefined **)0x10002453d:
      goto code_r0x00010002453f;
    case (undefined **)0x100024577:
      UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)*(uint *)UNRECOVERED_JUMPTABLE_41;
      UNRECOVERED_JUMPTABLE_47 = (undefined **)ppuVar51[-0x31];
      goto code_r0x000100024580;
    case (undefined **)0x100024830:
      goto code_r0x000100024830;
    case (undefined **)0x10002489f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100024bb7:
      goto code_r0x000100024bb7;
    case (undefined **)0x100024c2d:
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar26;
      UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x148ad206);
      *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)cVar26);
      bVar80 = *UNRECOVERED_JUMPTABLE == (code)0x0;
      uVar14 = *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + 0xf);
      UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar51 + -0x5961bac4);
      *(uint *)UNRECOVERED_JUMPTABLE =
           *(uint *)UNRECOVERED_JUMPTABLE >> 0x11 | *(uint *)UNRECOVERED_JUMPTABLE << 0xf;
      LOCK();
      *(code *)((long)ppuVar51 + -0x77) = cVar31;
      UNLOCK();
      if ((code *)((long)UNRECOVERED_JUMPTABLE_47 + -1) == (code *)0x0 || bVar80) {
        uVar68 = (uVar28 ^ 0xbcbf3fe1) + 0xa72c3536;
        UNRECOVERED_JUMPTABLE_44 = (uint *)(ulong)(uVar68 < 0x63eb752d);
        ppuVar76 = (undefined **)(ulong)(uVar14 < uVar68);
        bVar80 = SUB81(ppuVar66,0) == uVar68 < 0x63eb752d;
      }
      uVar14 = (uint)ppuVar76;
      if (!bVar80) {
        uVar14 = (uint)UNRECOVERED_JUMPTABLE_44;
      }
                    /* WARNING: Could not recover jumptable at 0x000100024ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)((long)UNRECOVERED_JUMPTABLE_45 +
                           (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                      [(int)((int)(code *)((long)UNRECOVERED_JUMPTABLE_47 + -1) +
                                             0x481504a6 + (uVar14 & 0xff))]))();
      return ppuVar19;
    case (undefined **)0x100024cbe:
      ppuVar61 = (undefined **)0xebe9dd97f1423742;
      goto switchD_100025d1a_caseD_24cc8;
    case (undefined **)0x100025192:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100025253:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100025276:
      out(0x48,uVar13);
      *(uint *)(ppuVar51 + -0x24) = uVar68;
      goto code_r0x00010002527e;
    case (undefined **)0x1000253a3:
      unaff_00084f00 = '\x18';
      plVar45 = (long *)(ppuVar42 + -1);
      unaff_0008ae00 = ppuVar42 + -1;
      plVar46 = (long *)(ppuVar42 + -1);
      ppuVar42[-1] = (undefined *)ppuVar51;
      cVar9 = '\x17';
      do {
        ppuVar51 = ppuVar51 + -1;
        plVar46 = plVar46 + -1;
        *plVar46 = (long)*ppuVar51;
        cVar9 = cVar9 + -1;
        ppuVar42 = (undefined **)plVar45;
      } while ('\0' < cVar9);
      goto code_r0x0001000253a3;
    case (undefined **)0x1000253de:
      goto code_r0x0001000253de;
    case (undefined **)0x10002553e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x10002567c:
      *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(uVar68 + 0xb9da7ef6)) =
           *(code *)((long)UNRECOVERED_JUMPTABLE_44 + (ulong)(uVar68 + 0xb9da7ef6));
      ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
      goto code_r0x00010002568d;
    case (undefined **)0x10002588a:
      ppuVar42 = (undefined **)(ulong)*(uint *)((long)ppuVar51 + -0x3efeb73b);
      UNRECOVERED_JUMPTABLE_41 = (undefined **)ppuVar51[-0x1e];
      UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)(uVar14 + 0x811342d8 | 0x26048824);
      goto code_r0x0001000258a5;
    case (undefined **)0x100025be5:
      goto code_r0x000100025be5;
    case (undefined **)0x100025cce:
      goto switchD_100025d1a_caseD_25cce;
    case (undefined **)0x100025db2:
      puVar17 = (undefined *)CONCAT71(uVar24,(char)cVar26 + -0x3c);
      UNRECOVERED_JUMPTABLE_37 = (undefined **)UNRECOVERED_JUMPTABLE_44;
      goto code_r0x000100025db4;
    case (undefined **)0x100025dd3:
      goto code_r0x000100025dd3;
    case (undefined **)0x10002601b:
      goto code_r0x00010002601b;
    case (undefined **)0x100026139:
      UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)*(uint *)(UNRECOVERED_JUMPTABLE_37 + 3);
      goto code_r0x00010002613c;
    case (undefined **)0x1000262c0:
      goto code_r0x0001000262c4;
    case (undefined **)0x1000262fd:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100026346:
      uVar22 = 0x48fffffe;
      ppuVar19 = (undefined **)(ulong)uVar34;
      goto code_r0x00010002634d;
    case (undefined **)0x10002642e:
      ppuVar51 = (undefined **)(ulong)(uVar68 * -0x223b);
      cVar9 = in(0);
      *(char *)CONCAT71(uVar24,cVar9) = *(char *)CONCAT71(uVar24,cVar9) + cVar9;
      puVar75 = (uint *)ppuVar51[-0x61];
      uVar15 = *(undefined8 *)((long)puVar75 + -0x3a5a9c416583c527);
      UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x1f];
      ppuVar42[-1] = &UNK_100026456;
      (*UNRECOVERED_JUMPTABLE)(uVar15);
      *(undefined **)((long)puVar75 + -0x3a5a9c416583c527) = ppuVar51[-100];
      *(uint *)ppuVar51[-99] = *(uint *)((long)ppuVar51 + -0x1bc);
      UNRECOVERED_JUMPTABLE_46 = (undefined **)ppuVar51[-0x62];
      ppuVar61 = (undefined **)(ulong)*(uint *)UNRECOVERED_JUMPTABLE_46;
      goto code_r0x000100026479;
    case (undefined **)0x100026649:
      puVar17 = (undefined *)(ulong)*(uint *)(ppuVar51 + -0x3c);
      goto code_r0x00010002664f;
    case (undefined **)0x100026897:
      UNRECOVERED_JUMPTABLE = (code *)swi(1);
      ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
      return ppuVar19;
    case (undefined **)0x1000269ed:
      UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)uVar34;
      goto code_r0x0001000269fe;
    case (undefined **)0x100026f4d:
                    /* WARNING: Could not recover jumptable at 0x000100026f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)((long)*(int *)((long)UNRECOVERED_JUMPTABLE_46 +
                                          (long)(int)(uVar74 + 0x48150491 + (uint)bVar80) * 4) +
                           0x10001ce77))();
      return ppuVar19;
    case (undefined **)0x1000272de:
      *(char *)UNRECOVERED_JUMPTABLE_45 =
           ((char)*(code *)UNRECOVERED_JUMPTABLE_45 - (char)cVar31) - bVar80;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100027429:
      goto code_r0x000100027429;
    case (undefined **)0x1000276a4:
      return UNRECOVERED_JUMPTABLE_41;
    case (undefined **)0x1000278fc:
      UNRECOVERED_JUMPTABLE = (code *)((long)puVar75 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x65);
      *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE | uVar68;
      ppuVar42[-1] = (undefined *)ppuVar51;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x100027ce0:
      goto code_r0x000100027ce0;
    case (undefined **)0x100028043:
      if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1) {
        iVar57 = (int)CONCAT71(iVar30,uVar13 == 0);
                    /* WARNING: Could not recover jumptable at 0x000100028079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar19 = (undefined **)
                   (*(code *)(&UNK_100028046 +
                             *(int *)(&DAT_1006d6ce0 + (long)(int)(uVar49 + iVar57) * 4)))
                             (UNRECOVERED_JUMPTABLE_37,
                              &UNK_100028046 +
                              *(int *)(&DAT_1006d6ce0 + (long)(int)(uVar49 + iVar57) * 4),
                              (uint)(uVar13 != 0) * 4 + iVar57 * 6 + uVar49);
        return ppuVar19;
      }
      goto code_r0x00010002802d;
    case (undefined **)0x100028083:
      UNRECOVERED_JUMPTABLE_44 = (uint *)((ulong)(uVar13 | 0x9d0f6880) + 0xf);
      *UNRECOVERED_JUMPTABLE_44 = *UNRECOVERED_JUMPTABLE_44 << 0x1c | *UNRECOVERED_JUMPTABLE_44 >> 4
      ;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000280b5:
      goto code_r0x0001000280b5;
    case (undefined **)0x100028123:
      goto code_r0x000100028123;
    case (undefined **)0x1000285bd:
      cVar63 = (code)(uVar49 < 0x236c);
      if (cVar31 == (code)(uVar49 < 0x236c)) {
        cVar63 = (code)((ushort)UNRECOVERED_JUMPTABLE_44 < (ushort)UNRECOVERED_JUMPTABLE_45);
      }
                    /* WARNING: Could not recover jumptable at 0x00010002860a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_10002859f +
                           *(int *)(&DAT_1006d7a20 + (long)(int)((byte)cVar63 + uVar68) * 4)))
                           (UNRECOVERED_JUMPTABLE_37,
                            (uint)((byte)cVar63 ^ 1) * 0xe9adb9c + uVar68 +
                            (uint)(byte)cVar63 + (uint)(byte)cVar63 * 2,(byte)cVar63 ^ 1,
                            &UNK_10002859f +
                            *(int *)(&DAT_1006d7a20 + (long)(int)((byte)cVar63 + uVar68) * 4));
      return ppuVar19;
    case (undefined **)0x1000285d3:
      pbVar1 = (byte *)((long)UNRECOVERED_JUMPTABLE_46 * 9 + 0xfd8440f);
      *pbVar1 = *pbVar1 << 6 | *pbVar1 >> 2;
      return UNRECOVERED_JUMPTABLE_41;
    case (undefined **)0x1000285eb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000286db:
      iVar57 = uVar34 * -0x45e78a47 + uVar64 + uVar68 * -4;
      uVar22 = (ulong)((long)ppuVar51 +
                      ((ulong)ppuVar76 & 0x61068319a2edc23e) * -2 + 0x61068319a2edc1f6) ^
               0x3a3ff3d335b118bc;
      ppuVar51[-7] = (undefined *)(ppuVar51 + -0x1a);
      *(uint *)(ppuVar51 + -8) = (int)uVar22 * 0x295bb3 + iVar57 + 0x926a3030;
      ppuVar51[-9] = (undefined *)
                     (((ulong)unaff_R12 ^ 0x3fadedff76ab97d6) +
                      ((ulong)unaff_R12 & 0x3fadedff76ab97d6) * 2 + uVar22 * -0x295bb3 +
                     -0x221a86c32010080);
      ppuVar42[-1] = &UNK_10002876a;
      FUN_1000a30e0(ppuVar76);
      bVar80 = *(uint *)((long)ppuVar51 + -0x3c) == 0x3a3402de;
      lVar29 = (long)*(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                             (long)(int)((uint)bVar80 + iVar57) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100028795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_1000286dc + lVar29))
                           (lVar29,&UNK_1000286dc + lVar29,0,bVar80,!bVar80);
      return ppuVar19;
    case (undefined **)0x100028c61:
      ppuVar42[-1] = (undefined *)UNRECOVERED_JUMPTABLE_37;
      *puVar75 = *puVar75 + 0x4cd00148;
      goto code_r0x000100028c68;
    case (undefined **)0x100028c66:
      goto code_r0x000100028c68;
    case (undefined **)0x100028c6c:
      goto code_r0x000100028c68;
    case (undefined **)0x100029874:
      UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + 99);
      *(uint *)UNRECOVERED_JUMPTABLE =
           *(uint *)UNRECOVERED_JUMPTABLE >> 1 |
           (uint)((*(uint *)UNRECOVERED_JUMPTABLE & 1) != 0) << 0x1f;
                    /* WARNING: Could not recover jumptable at 0x000100029888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_100029852 +
                           *(int *)((long)unaff_R12 + (long)UNRECOVERED_JUMPTABLE_47 * 4)))
                           (UNRECOVERED_JUMPTABLE_37,
                            &UNK_100029852 +
                            *(int *)((long)unaff_R12 + (long)UNRECOVERED_JUMPTABLE_47 * 4),
                            (ulong)puVar75 & 0xffffffff);
      return ppuVar19;
    case (undefined **)0x10002aa80:
      *(uint *)UNRECOVERED_JUMPTABLE_37 =
           *(uint *)UNRECOVERED_JUMPTABLE_37 >> 0x14 | *(uint *)UNRECOVERED_JUMPTABLE_37 << 0xc;
      return (undefined **)((ulong)ppuVar51 & 0xffffffff);
    case (undefined **)0x10002b7c1:
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar26;
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar26;
                    /* WARNING: Could not recover jumptable at 0x00010002b7da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)((long)UNRECOVERED_JUMPTABLE_44 +
                           (long)*(int *)(&DAT_1006d8470 + (long)(int)(uVar68 + uVar77) * 4)))();
      return ppuVar19;
    }
code_r0x0001000224b7:
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar51[-0x1d];
    uVar14 = uVar64 ^ 0x117;
    ppuVar76 = (undefined **)(ulong)uVar14;
    auVar87 = SEXT816((long)((long)ppuVar69 + -0x51861bf27a116f3)) * ZEXT816(0x8888888888888889);
    uVar68 = (int)(auVar87._8_8_ >> 4) - (auVar87._12_4_ >> 0x1f);
    uVar28 = (uVar68 ^ 0xae95affb) + (uVar68 & 0x2e95affb) * 2;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)CONCAT44(0,uVar28);
    uVar13 = *(uint *)((long)UNRECOVERED_JUMPTABLE_45 + (long)UNRECOVERED_JUMPTABLE_44 * 8 + 0x24);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)CONCAT44(0,uVar13);
    uVar68 = uVar14 + uVar13 + 0xb293d44f;
    uVar54 = (uVar64 ^ 0x549e40b4) + uVar28;
    bVar80 = uVar68 < 0x333f0b4 != uVar54 < 0x333f0b4;
    ppuVar61 = (undefined **)(ulong)bVar80;
    cVar63 = (code)(uVar68 < uVar54);
    if (bVar80) {
      cVar63 = (code)(uVar54 < 0x333f0b4);
    }
    break;
  case (undefined *)0x10001fc93:
    UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0xd];
    uVar14 = 0x3165f9b2;
    switch(&DAT_10001fc93 +
           (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                         (ulong)((uVar68 | 200) + (uint)(unaff_RBX == (undefined **)0x0)) * 4)) {
    case (undefined *)0x10001e098:
      *(undefined **)((long)ppuVar42 + -8) = &UNK_10001e09d;
      (*UNRECOVERED_JUMPTABLE)(unaff_RBX);
      uVar14 = 0x3165f9b2;
    }
    goto code_r0x000100020def;
  }
  ppuVar66 = (undefined **)(ulong)(byte)cVar63;
  ppuVar65 = (undefined **)&DAT_1006d2600;
  uVar22 = (ulong)*(int *)(&DAT_1006d2600 + (long)(int)((byte)cVar63 + uVar64) * 4);
  UNRECOVERED_JUMPTABLE_45 = (undefined **)DAT_100023fcc;
  bVar79 = 0xfffffffefffdc033 < uVar22;
  UNRECOVERED_JUMPTABLE_46 = (undefined **)(DAT_100023fcc + uVar22);
  bVar82 = (long)UNRECOVERED_JUMPTABLE_46 < 0;
  bVar81 = UNRECOVERED_JUMPTABLE_46 == (undefined **)0x0;
  bVar83 = (POPCOUNT((ulong)UNRECOVERED_JUMPTABLE_46 & 0xff) & 1U) == 0;
  bVar11 = (byte)uVar13;
  uVar32 = (undefined2)(uVar13 >> 0x10);
  uVar7 = (undefined3)(uVar13 >> 8);
  cVar31 = SUB81(UNRECOVERED_JUMPTABLE_46,0);
  bVar62 = (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 8);
  uVar33 = SUB82(UNRECOVERED_JUMPTABLE_46,0);
  uVar68 = (uint)UNRECOVERED_JUMPTABLE_46;
  uVar24 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_46 >> 8);
  cVar26 = SUB41(uVar28,0);
  uVar8 = (undefined3)(uVar28 >> 8);
  uVar54 = (uint)bVar80;
  uVar58 = (uint)(byte)cVar63;
  puVar70 = puVar75;
  plVar46 = (long *)ppuVar42;
  UNRECOVERED_JUMPTABLE_37 = ppuVar61;
  ppuVar71 = (undefined **)UNRECOVERED_JUMPTABLE_44;
  ppuVar20 = ppuVar56;
  switch(UNRECOVERED_JUMPTABLE_46) {
  case (undefined **)0x84ba3e80:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001cbd4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d442:
    return (undefined **)
           (ulong)CONCAT31(uVar7,bVar11 + *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x77) + bVar79
                          );
  case (undefined **)0x10001d75a:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uVar64 + 0xf9ba9dea);
    UNRECOVERED_JUMPTABLE_37 =
         (undefined **)
         (&DAT_10001d73e +
         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar14 + (uVar64 == 0)) * 4));
    goto code_r0x00010001d77c;
  case (undefined **)0x10001db6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001db80:
    UNRECOVERED_JUMPTABLE = (code *)swi(0x41);
    (*UNRECOVERED_JUMPTABLE)();
code_r0x00010001db7a:
    ppuVar65 = (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_44 + 0xcd07fc34U & 0x32f803d6);
    UNRECOVERED_JUMPTABLE_46 =
         (undefined **)
         (ulong)((uVar77 & 0xab4b335d ^ 0x600175f5) + (int)UNRECOVERED_JUMPTABLE_47 + uVar64);
    ppuVar51[-0xe] = (undefined *)ppuVar61;
  case (undefined **)0x10001db9f:
    goto code_r0x00010001db9f;
  case (undefined **)0x10001dca6:
    out(uVar33,uVar13);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001de9b:
    goto switchD_100023f94_caseD_1de9b;
  case (undefined **)0x10001e065:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001e659:
    UNRECOVERED_JUMPTABLE_44 = (uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x420940f);
    *UNRECOVERED_JUMPTABLE_44 = *UNRECOVERED_JUMPTABLE_44 << 0x1d | *UNRECOVERED_JUMPTABLE_44 >> 3;
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(ulong)(uVar28 + (uVar13 & 0xfdfbdf6b) * 2 + 0xdfddfab7);
code_r0x00010001e66d:
    ppuVar65 = ppuVar56;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)ppuVar19[-0x10];
    *(int *)((long)UNRECOVERED_JUMPTABLE_46 + -0x5c05e2a4aeb6ae76) = (int)UNRECOVERED_JUMPTABLE_41;
    *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_46 + -0x5c05e2a4aeb6ae72) = 0x645a0480;
    *(uint *)(ppuVar19 + -0xe) = 0x3166a97d;
    unaff_R12 = (uint *)0x2e3fe4cf;
    plVar46 = (long *)ppuVar42;
    goto LAB_10001d6a3;
  case (undefined **)0x10001e7c4:
    uVar14 = (int)ppuVar51[-9] + 0x38c7144e;
    bVar80 = uVar28 < (uVar13 ^ 0xb4b657f3);
    ppuVar51[-0xf] = DAT_100023fcc;
    if (uVar14 < 0xb4b657a2 == bVar80) {
      bVar80 = uVar14 < uVar28;
    }
    UNRECOVERED_JUMPTABLE_45 = (undefined **)ppuVar51[-0xf];
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar80 + uVar64)];
    goto code_r0x00010001e81f;
  case (undefined **)0x10001ea48:
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return ppuVar19;
  case (undefined **)0x10001ecbe:
    goto code_r0x00010001ecbe;
  case (undefined **)0x10001eda1:
    UNRECOVERED_JUMPTABLE_37 = (undefined **)((long)ppuVar61 + (ulong)bVar27 * -8 + 4);
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(&UNK_100023fd0 + (ulong)bVar27 * -8);
    *(uint *)ppuVar61 = _DAT_100023fcc;
code_r0x00010001eda0:
    cVar9 = (char)UNRECOVERED_JUMPTABLE_41 + -0x5b;
    bVar27 = cVar9 + bVar79;
    if (SCARRY1((char)UNRECOVERED_JUMPTABLE_41,-0x5b) != SCARRY1(cVar9,bVar79)) {
      *(int *)((long)UNRECOVERED_JUMPTABLE_46 + -0x75) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_46 + -0x75) + 0x28be3b0c;
      out((short)UNRECOVERED_JUMPTABLE_46,bVar27);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar80 = false;
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_47 >> 8),
                  (byte)UNRECOVERED_JUMPTABLE_47 ^ bVar27);
code_r0x00010001edcd:
    ppuVar61 = UNRECOVERED_JUMPTABLE_37;
    ppuVar65 = (undefined **)(ulong)bVar80;
    if ((uint)UNRECOVERED_JUMPTABLE_37 < ((uint)ppuVar56 ^ 0x4229e988) == bVar80) {
      ppuVar65 = (undefined **)
                 (ulong)((uint)UNRECOVERED_JUMPTABLE_37 < (uint)UNRECOVERED_JUMPTABLE_45);
    }
    goto code_r0x00010001edf5;
  case (undefined **)0x10001ee8d:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)0x6d1e30;
    UNRECOVERED_JUMPTABLE =
         (code *)(&UNK_10001ee59 + *(int *)((long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x6d1e30));
    ppuVar66 = (undefined **)0x3165f9b2;
    ppuVar51[-0x28] = (undefined *)0x0;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0x0;
code_r0x00010001eeb2:
                    /* WARNING: Could not recover jumptable at 0x00010001eebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*UNRECOVERED_JUMPTABLE)
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE,
                          UNRECOVERED_JUMPTABLE_47,ppuVar51[-0xb],ppuVar66);
    return ppuVar19;
  case (undefined **)0x10001eef1:
    *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + -0x77) =
         *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + -0x77) | 0x1f;
code_r0x00010001eefb:
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(long)*(int *)((long)UNRECOVERED_JUMPTABLE_46 + (long)(int)uVar13 * 4);
    lVar29 = 0x10001da42;
    goto code_r0x00010001ef08;
  case (undefined **)0x10001f159:
    goto code_r0x00010001f159;
  case (undefined **)0x10001f391:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + 99) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + 99) + (char)cVar26);
    ppuVar19 = (undefined **)*ppuVar51;
    ppuVar42 = ppuVar51 + 1;
    goto code_r0x00010001f384;
  case (undefined **)0x10001f4e6:
    puVar78 = (uint *)(ulong)(uVar64 | 4);
    ppuVar76 = (undefined **)(ulong)(uVar14 & 0x7ee9677b);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(long)(int)(uVar77 - 0x69);
    UNRECOVERED_JUMPTABLE_47 = &PTR__bootstrap_look_up_10082e9f0;
code_r0x00010001f4fd:
    UNRECOVERED_JUMPTABLE_37 =
         (undefined **)
         (ulong)*(uint *)(UNRECOVERED_JUMPTABLE_47[(long)UNRECOVERED_JUMPTABLE_41] + -2);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)((uint)unaff_RBX ^ 0x8e);
    puVar75 = (uint *)ppuVar76;
    goto switchD_10001997c_caseD_1f50b;
  case (undefined **)0x10001f610:
                    /* WARNING: Could not recover jumptable at 0x00010001f630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001f608 +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                              [(int)(uVar72 + (uVar54 == 0))]))();
    return ppuVar19;
  case (undefined **)0x10001f638:
    ppuVar51[-9] = (undefined *)UNRECOVERED_JUMPTABLE_44;
                    /* WARNING: Could not recover jumptable at 0x00010001f677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001f635 +
                         *(int *)(&DAT_1006d1e30 +
                                 (long)(int)((uint)(UNRECOVERED_JUMPTABLE_46 ==
                                                   (undefined **)0x5c05e2a4aeb6ae7e) + uVar64 + 2) *
                                 4)))();
    return ppuVar19;
  case (undefined **)0x10001f68d:
    goto code_r0x00010001f679;
  case (undefined **)0x10001fa7a:
    *(uint *)(UNRECOVERED_JUMPTABLE_41 + -9) = *(uint *)(UNRECOVERED_JUMPTABLE_41 + -9) - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001fb5d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001fbbb:
    *(code *)((long)ppuVar51 + -0x7c) = (code)0xdb;
    goto code_r0x00010001fbbf;
  case (undefined **)0x10001fbea:
    ppuVar51[-9] = (undefined *)ppuVar69;
    puVar78 = UNRECOVERED_JUMPTABLE_44;
code_r0x00010001fbf1:
    puVar75 = (uint *)unaff_RBX;
    UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x11];
    *(undefined **)((long)ppuVar42 + -8) = &UNK_10001fbf7;
    ppuVar76 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    UNRECOVERED_JUMPTABLE_45 = (undefined **)&UNK_10001d659;
    ppuVar65 = (undefined **)0x0;
    ppuVar61 = (undefined **)0x528bf684;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)((int)puVar75 + 0xd1c01bc0);
    unaff_R12 = (uint *)&PTR__bootstrap_look_up_10082e9f0;
    goto code_r0x00010001fc2b;
  case (undefined **)0x10001fde0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001fe66:
    goto code_r0x00010001fe66;
  case (undefined **)0x10001ff41:
                    /* WARNING: Could not recover jumptable at 0x00010001ff44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_47)();
    return ppuVar19;
  case (undefined **)0x100020409:
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_47 + 1) =
         *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_47 + 1);
    goto switchD_100020322_caseD_2040e;
  case (undefined **)0x1000204aa:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100020648:
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)
         (long)(int)((uVar64 ^ 0x1c) +
                    (uint)((uVar13 - uVar28) +
                           ((uVar64 ^ 0x1c) + 0xa3d49fed & 0x5c2b611b ^ 0x5df595aa) < 300));
    goto code_r0x000100020674;
  case (undefined **)0x100020771:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) + -1
    ;
    UNRECOVERED_JUMPTABLE_44 = (uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x43);
    *UNRECOVERED_JUMPTABLE_44 = *UNRECOVERED_JUMPTABLE_44 << 9 | *UNRECOVERED_JUMPTABLE_44 >> 0x17;
    ppuVar20 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff);
    *(uint *)UNRECOVERED_JUMPTABLE_47 = *(uint *)UNRECOVERED_JUMPTABLE_47 & uVar54;
    UNRECOVERED_JUMPTABLE_46 = UNRECOVERED_JUMPTABLE_41;
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
code_r0x0001000206bb:
    ppuVar51[-0x13] = (undefined *)ppuVar20;
    uVar14 = (uint)UNRECOVERED_JUMPTABLE_44;
    ppuVar51[-0xe] = (undefined *)(ulong)(uVar14 - 0x28 | 0x2a);
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 - 0x58)];
    puVar21 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 ^ 0x48)];
    ppuVar42[-1] = (undefined *)0x1000206f7;
    (*(code *)(puVar17 + -1))(ppuVar56,puVar21 + -2,UNRECOVERED_JUMPTABLE_46);
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 - 0x54)];
    ppuVar42[-1] = (undefined *)0x100020709;
    (*(code *)(puVar17 + -1))(ppuVar56);
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 - 0x53)];
    ppuVar51[-0x1a] = (undefined *)ppuVar56;
    puVar21 = ppuVar51[-0x23];
    ppuVar42[-1] = (undefined *)0x10002072b;
    puVar17 = (undefined *)(*(code *)(puVar17 + -2))(ppuVar56,puVar21);
    UNRECOVERED_JUMPTABLE = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 ^ 0x4f)];
    ppuVar51[-0xb] = puVar17;
    ppuVar42[-1] = (undefined *)0x100020741;
    puVar17 = (undefined *)(*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Could not emulate address calculation at 0x000100020767 */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000206af +
                         *(int *)(&DAT_1006d1e30 +
                                 (long)(int)((puVar17 ==
                                             (&PTR__bootstrap_look_up_10082e9f0)
                                             [(int)(uVar14 ^ 0x6d)] + -0xe) + uVar14) * 4)))();
    return ppuVar19;
  case (undefined **)0x100020787:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002084d:
    ppuVar19 = (undefined **)
               (*(code *)&DAT_1006d2600)
                         (ppuVar61,DAT_100023fcc,ppuVar56,UNRECOVERED_JUMPTABLE_47,
                          UNRECOVERED_JUMPTABLE_41);
    return ppuVar19;
  case (undefined **)0x10002086e:
    iVar57 = 0;
    ppuVar19 = ppuVar56;
    if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1) {
      puVar75 = (uint *)CONCAT71((int7)((ulong)puVar75 >> 8),0x44);
      *(uint *)((long)ppuVar51 + -0x4c) = uVar68;
      ppuVar51[-9] = (undefined *)UNRECOVERED_JUMPTABLE_44;
      ppuVar69 = (undefined **)0x815212;
      UNRECOVERED_JUMPTABLE_37 = (undefined **)0x2ead0ac2;
code_r0x000100020886:
      ppuVar42[-1] = (undefined *)puVar75;
      uRam2e3fe4c2b88d41fd = SUB84(UNRECOVERED_JUMPTABLE_41,0);
      ppuVar71 = (undefined **)(ulong)((uint)UNRECOVERED_JUMPTABLE_45 ^ 0xa777844d);
code_r0x00010002089a:
      UNRECOVERED_JUMPTABLE_45 =
           (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_45 * 2 & 0xac6b661eU ^ 0xa0006604);
      ppuVar61 = UNRECOVERED_JUMPTABLE_37;
      puVar70 = (uint *)ppuVar71;
      goto code_r0x0001000208a8;
    }
    goto code_r0x0001000208be;
  case (undefined **)0x10002096e:
code_r0x000100020950:
    *(uint *)(UNRECOVERED_JUMPTABLE_41 + -0x34) = (uint)UNRECOVERED_JUMPTABLE_46;
    UNRECOVERED_JUMPTABLE = (code *)UNRECOVERED_JUMPTABLE_41[-0x21];
    ppuVar42[-1] = (undefined *)0x100020981;
    puVar17 = (undefined *)
              (*UNRECOVERED_JUMPTABLE)
                        ((uVar72 * 2 ^ 0x17e ^ (uVar72 - 0x26 | 0x29) ^ 0xd401261e) + (int)ppuVar65)
    ;
    UNRECOVERED_JUMPTABLE_41[-0x68] = puVar17;
    uVar14 = *(uint *)((long)puVar75 + (long)(int)(uVar72 + (puVar17 == (undefined *)0x0)) * 4);
    *(uint *)(UNRECOVERED_JUMPTABLE_41 + -0x1d) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x0001000209b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&DAT_100020950 + (int)uVar14))();
    return ppuVar19;
  case (undefined **)0x1000209a6:
    goto code_r0x0001000209a6;
  case (undefined **)0x100020a8b:
    if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1 || bVar81) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(float *)(ppuVar51 + 9) = (float)in_ST0;
code_r0x000100020aff:
    *(uint *)(ppuVar51 + -0x14) = (uint)UNRECOVERED_JUMPTABLE_41;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)*(uint *)((long)unaff_R12 +
                                      (long)(int)((int)UNRECOVERED_JUMPTABLE_46 +
                                                 (uint)(unaff_RBX == (undefined **)0x0)) * 4) +
                 0x100020aee);
                    /* WARNING: Could not recover jumptable at 0x000100020b31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)(0x3165f9b3,UNRECOVERED_JUMPTABLE,0);
    return ppuVar19;
  case (undefined **)0x100020c35:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar51 + 0xf);
    *UNRECOVERED_JUMPTABLE =
         (code)((char)*UNRECOVERED_JUMPTABLE << ((byte)cVar26 & 7) |
               (byte)*UNRECOVERED_JUMPTABLE >> 8 - ((byte)cVar26 & 7));
code_r0x000100020c3a:
                    /* WARNING: Could not recover jumptable at 0x000100020c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)ppuVar65 +
                         (long)*(int *)(&DAT_1006d2600 +
                                       (long)(int)((int)UNRECOVERED_JUMPTABLE_46 + 0x58e83557 +
                                                  ((uint)ppuVar56 & 0xff)) * 4)))();
    return ppuVar19;
  case (undefined **)0x100021007:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100021080:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002109b:
    uVar28 = CONCAT31(uVar8,(char)(CONCAT11(bVar79,cVar26) >> 1));
    iVar57 = *(int *)UNRECOVERED_JUMPTABLE_46;
    *(int *)UNRECOVERED_JUMPTABLE_46 = *(int *)UNRECOVERED_JUMPTABLE_46 + 0x3f71a515;
    if (*(int *)UNRECOVERED_JUMPTABLE_46 == 0 ||
        SBORROW4(iVar57,-0x3f71a515) != *(int *)UNRECOVERED_JUMPTABLE_46 < 0) {
      iVar57 = (int)CONCAT71(0x100023f,uVar58 == uVar68) + uVar28;
                    /* WARNING: Could not recover jumptable at 0x00010002110d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&DAT_1000210dc +
                           (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 + (long)iVar57 * 4)))
                           (ppuVar61,iVar57,
                            &DAT_1000210dc +
                            (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 + (long)iVar57 * 4));
      return ppuVar19;
    }
  case (undefined **)0x100021072:
    *(uint *)(ppuVar51 + -0x32) = 0x23fcc;
    ppuVar51[-0x2f] = (code *)((long)ppuVar69 + -0x7ec08e5aeb2a811a);
    uVar14 = *(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                      (long)(int)((CONCAT31(0x23f,ppuVar69 == (undefined **)0x7ec08e5aeb2a8122) ^
                                  0x23f00) + uVar28) * 4);
    ppuVar51[-0x1c] = (undefined *)((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001000210d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100021071 + (int)uVar14))
                         ((undefined *)((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff),
                          &UNK_100021071 + (int)uVar14,UNRECOVERED_JUMPTABLE_46,0,ppuVar51[-0xb],
                          0x3165f9b3);
    return ppuVar19;
  case (undefined **)0x1000212d1:
    goto code_r0x0001000212d1;
  case (undefined **)0x100021351:
    goto code_r0x0001000212f6;
  case (undefined **)0x100021385:
    if (bVar81 || (long)uVar22 < -0x100023fcc) {
code_r0x0001000213d3:
      uVar28 = (uint)ppuVar65;
      UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uVar13 + uVar14);
code_r0x0001000213d6:
      *(uint *)(ppuVar51 + -0x1d) = uVar64;
                    /* WARNING: Could not recover jumptable at 0x0001000213fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&DAT_1000213b7 +
                           (int)*(uint *)((long)puVar75 +
                                         (long)(int)((uVar64 == (uint)UNRECOVERED_JUMPTABLE_41) +
                                                    uVar28) * 4)))
                           (ppuVar61,UNRECOVERED_JUMPTABLE_45,
                            &DAT_1000213b7 +
                            (int)*(uint *)((long)puVar75 +
                                          (long)(int)((uVar64 == (uint)UNRECOVERED_JUMPTABLE_41) +
                                                     uVar28) * 4),UNRECOVERED_JUMPTABLE_47);
      return ppuVar19;
    }
    goto code_r0x00010002137d;
  case (undefined **)0x10002147a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000214b9:
    iVar59 = uVar14 + 0x10;
    *(uint *)((long)ppuVar51 + -0x154) = uVar77;
    *(uint *)(ppuVar51 + -0x2b) = *(uint *)(ppuVar51 + -0x22);
    ppuVar51[-0x49] = ppuVar51[-0x28];
    ppuVar51[-0x40] = ppuVar51[-0x27];
    puVar17 = ppuVar51[-0x31];
    ppuVar51[-0x4a] = puVar17;
    ppuVar51[-0x24] = puVar17;
    ppuVar51[-0x26] = puVar17;
    puVar75 = (uint *)ppuVar65;
    iVar57 = 0x3166a97c;
    goto switchD_100023ebf_caseD_1;
  case (undefined **)0x10002160e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000216ac:
    *(byte *)UNRECOVERED_JUMPTABLE_46 =
         *(char *)UNRECOVERED_JUMPTABLE_46 << 2 |
         (byte)(CONCAT11(bVar79,*(char *)UNRECOVERED_JUMPTABLE_46) >> 7);
    ppuVar66 = (undefined **)
               (ulong)((uVar64 * 2 & 0xac6b661e ^ uVar28 ^ 0x717ada8) + (uVar64 ^ 0xa777844d) ==
                      0x5635b30f);
code_r0x0001000216e2:
                    /* WARNING: Could not recover jumptable at 0x0001000216f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100021690 +
                         (int)*(uint *)((long)puVar75 + (long)((int)ppuVar66 + (int)ppuVar65) * 4)))
                         ();
    return ppuVar19;
  case (undefined **)0x100021767:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000217e9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000217f5:
    cVar9 = *(char *)UNRECOVERED_JUMPTABLE_47;
    *(char *)UNRECOVERED_JUMPTABLE_47 = *(char *)UNRECOVERED_JUMPTABLE_47 >> 0x11;
    bVar79 = (cVar9 >> 0x10 & 1U) != 0;
    bVar80 = *(char *)UNRECOVERED_JUMPTABLE_47 == '\0';
code_r0x0001000217f8:
    uVar68 = (uint)(!bVar79 && !bVar80);
    if ((char)ppuVar56 != '\0') {
      uVar68 = uVar14;
    }
    uVar28 = (uVar68 & 0xff) + (int)ppuVar66;
    goto code_r0x000100021811;
  case (undefined **)0x1000218ff:
    goto code_r0x000100026479;
  case (undefined **)0x100021925:
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
    goto code_r0x00010002192b;
  case (undefined **)0x10002194a:
    goto code_r0x000100021946;
  case (undefined **)0x1000219c9:
code_r0x0001000219ca:
    *(uint *)(unaff_RBX + 1) = 0x20e4d099;
    ppuVar51[-0x2a] = (undefined *)unaff_R12;
    ppuVar51[-0x59] = (undefined *)unaff_R12;
    uVar14 = *(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                      (long)(int)((int)ppuVar56 + (uint)(unaff_RBX == (undefined **)0x0)) * 4);
    *(uint *)(ppuVar51 + -0x1d) = 0x3165f9b3;
                    /* WARNING: Could not emulate address calculation at 0x0001000219eb */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000219ae + (int)uVar14))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,&DAT_1000219ae + (int)uVar14,0);
    return ppuVar19;
  case (undefined **)0x100021a37:
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(ulong)*(uint *)((long)puVar75 + (long)UNRECOVERED_JUMPTABLE_41 * 4);
code_r0x000100021a24:
                    /* WARNING: Could not recover jumptable at 0x000100021a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100021a12 +
                         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                       (long)(int)((int)ppuVar65 + 0x58e834e3 +
                                                  (uint)(uVar64 == (uint)UNRECOVERED_JUMPTABLE_41))
                                       * 4)))();
    return ppuVar19;
  case (undefined **)0x100021c0a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100021c98:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100021d90:
    UNRECOVERED_JUMPTABLE_41 = UNRECOVERED_JUMPTABLE_46;
    goto code_r0x000100021dba;
  case (undefined **)0x100021dd1:
    UNRECOVERED_JUMPTABLE_41 = UNRECOVERED_JUMPTABLE_46;
    goto code_r0x000100021dba;
  case (undefined **)0x100021df6:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(&UNK_100023fcd + (ulong)bVar27 * -2);
    *(code *)((long)ppuVar61 + (ulong)bVar27 * -2 + 1) = DAT_100023fcc;
    if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1) {
      UNRECOVERED_JUMPTABLE_41 =
           (undefined **)
           CONCAT62((int6)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x10),CONCAT11(0xae,cVar31));
    }
code_r0x000100021dba:
    *unaff_R12 = (int)UNRECOVERED_JUMPTABLE_45 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100021e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100021d69 +
                         *(int *)(&DAT_1006d1e30 +
                                 (long)(int)((uint)(ppuVar69 == (undefined **)0x5c05e2a4aeb6ae7e) +
                                            (int)UNRECOVERED_JUMPTABLE_41) * 4)))();
    return ppuVar19;
  case (undefined **)0x100021e50:
    *(int *)((long)UNRECOVERED_JUMPTABLE_47 + 0x39) = (int)in_ST0;
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100021f98:
    goto code_r0x000100021f98;
  case (undefined **)0x100022115:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100022159:
    goto code_r0x00010002214a;
  case (undefined **)0x1000222b3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002231e:
    goto code_r0x000100022321;
  case (undefined **)0x1000224de:
    *(code *)(UNRECOVERED_JUMPTABLE_41 + 0x9111111) = cVar26;
    goto code_r0x0001000224b7;
  case (undefined **)0x100022517:
    goto code_r0x000100022517;
  case (undefined **)0x1000225cd:
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)(long)*(int *)(&DAT_1006d1e30 + (long)(int)(uVar67 + bVar79) * 4);
    uVar22 = 0x10002256c;
code_r0x0001000225e6:
    ppuVar51[-0x13] = ppuVar51[-0x17];
                    /* WARNING: Could not recover jumptable at 0x000100022601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE_47 + uVar22))();
    return ppuVar19;
  case (undefined **)0x10002267d:
    *(uint *)UNRECOVERED_JUMPTABLE_41 =
         *(uint *)UNRECOVERED_JUMPTABLE_41 << 1 | (uint)((int)*(uint *)UNRECOVERED_JUMPTABLE_41 < 0)
    ;
code_r0x00010002265f:
    UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x21];
    ppuVar42[-1] = &UNK_10002266e;
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(*UNRECOVERED_JUMPTABLE)((int)UNRECOVERED_JUMPTABLE_41 + uVar77 + 0x10c80349)
    ;
    ppuVar51[-0x6f] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)&DAT_1006d2600;
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         (long)*(int *)(&DAT_1006d2600 +
                       (long)(int)(uVar64 + (UNRECOVERED_JUMPTABLE_41 == (undefined **)0x0)) * 4);
    UNRECOVERED_JUMPTABLE_46 = UNRECOVERED_JUMPTABLE_47 + 0x200044c9;
    *(uint *)(ppuVar51 + -0x1d) = 0x3165f9b2;
    ppuVar65 = (undefined **)ppuVar51[-0x1e];
    switch(UNRECOVERED_JUMPTABLE_46) {
    case (undefined **)0x100022d3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (undefined **)0x1000257dc:
      *(byte *)UNRECOVERED_JUMPTABLE_41 =
           (byte)*(code *)UNRECOVERED_JUMPTABLE_41 | (byte)UNRECOVERED_JUMPTABLE_41;
      *(byte *)UNRECOVERED_JUMPTABLE_41 =
           (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (byte)UNRECOVERED_JUMPTABLE_41;
    }
    goto switchD_100025d1a_caseD_25790;
  case (undefined **)0x10002270d:
    goto code_r0x00010002270d;
  case (undefined **)0x100022729:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar51 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 5);
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + -1;
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100022736:
    goto code_r0x000100022736;
  case (undefined **)0x100022800:
    goto code_r0x000100022800;
  case (undefined **)0x10002286d:
    goto code_r0x00010002286d;
  case (undefined **)0x1000228f5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100022938:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar28 + 0x6fecf6a6);
    goto switchD_100025d1a_caseD_2013e;
  case (undefined **)0x100022995:
    goto code_r0x000100022995;
  case (undefined **)0x100022a7d:
    ppuVar61 = (undefined **)
               (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                   (long)(int)((uVar54 < uVar58 && 0x6d2600 < uVar54) + uVar72) * 4)
    ;
    ppuVar65 = (undefined **)&DAT_100022a16;
code_r0x000100022abb:
                    /* WARNING: Could not recover jumptable at 0x000100022abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)((long)ppuVar65 + (long)ppuVar61))();
    return ppuVar19;
  case (undefined **)0x100022ade:
    if (bVar81 || (long)uVar22 < -0x100023fcc) goto code_r0x000100022abb;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)CONCAT31(uVar7,bVar11 + 0xa5 + bVar79);
    if (SCARRY1(bVar11,-0x5b) == SCARRY1(bVar11 + 0xa5,bVar79)) {
      UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)*(uint *)((long)ppuVar51 + -0x4c);
    }
code_r0x000100022ae4:
    *(uint *)((long)ppuVar51 + -0x77) = *(uint *)((long)ppuVar51 + -0x77) | 0x148b49d3;
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x73);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_41 | 0x36);
    UNRECOVERED_JUMPTABLE_45 =
         (undefined **)
         (-0x141622670ebb88f2 -
         ((long)ppuVar56 + 0x1e2846e75U &
         (ulong)CONCAT31(uVar8,(byte)cVar26 | (byte)*UNRECOVERED_JUMPTABLE)));
    UNRECOVERED_JUMPTABLE_47 = (undefined **)&UNK_10001d862;
    ppuVar51[-0x29] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    goto code_r0x00010002214a;
  case (undefined **)0x100022af6:
    *(uint *)UNRECOVERED_JUMPTABLE_41 = *(uint *)UNRECOVERED_JUMPTABLE_41 + uVar13;
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    goto code_r0x000100022ae4;
  case (undefined **)0x100022b8f:
    if (!SCARRY8(uVar22,0x100023fcc)) {
      uVar13 = uVar28;
    }
    if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x1 && bVar81) {
      uVar13 = CONCAT22((short)(uVar13 >> 0x10),
                        CONCAT11(bVar82 << 7 | bVar81 << 6 | in_AF << 4 | bVar83 << 2 | 2 | bVar79,
                                 (char)uVar13));
    }
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar13;
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         (ulong)((uint)(byte)*(code *)((long)ppuVar61 + (ulong)(uVar13 + 0x8d60152f)) |
                 (uint)(byte)*(code *)((long)ppuVar61 + (ulong)(uVar13 + 0x8d60152d)) << 0x10 |
                 uVar58 | (uint)(byte)*(code *)((long)ppuVar61 + (ulong)(uVar13 + 0x8d60152e)) <<
                          ((char)cVar31 + 0x9fU & 0x1f));
code_r0x000100022bc5:
    UNRECOVERED_JUMPTABLE_44 = (uint *)((long)UNRECOVERED_JUMPTABLE_47 * 2 + -0x27);
    *UNRECOVERED_JUMPTABLE_44 =
         *UNRECOVERED_JUMPTABLE_44 << 1 | (uint)((int)*UNRECOVERED_JUMPTABLE_44 < 0);
    ppuVar51[-0x1e] = (undefined *)puVar75;
    *puVar75 = (int)UNRECOVERED_JUMPTABLE_41 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100022c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100022b57 +
                         *(int *)((long)unaff_R12 +
                                 (long)(int)((uint)(((uint)UNRECOVERED_JUMPTABLE_47 ^ 0xb7efa97f) +
                                                    ((uint)UNRECOVERED_JUMPTABLE_47 & 0x37efa97f) *
                                                    2 == -0x48105681) + (int)ppuVar65) * 4)))();
    return ppuVar19;
  case (undefined **)0x100022c23:
    uVar13 = uVar13 ^ 0x894458e8;
    out(uVar33,(char)uVar13);
    UNRECOVERED_JUMPTABLE_37 = (undefined **)&UNK_1000265c0;
    uVar14 = uVar28 * 2 + 0xbe367ece;
    uVar54 = (uVar14 ^ 0xa9f6d0bf) + (uVar14 & 0x29f6d0be) * 2 + 0x2ef9ba22;
    UNRECOVERED_JUMPTABLE_44 = (uint *)(ulong)uVar54;
    uVar14 = (uint)(uVar54 < 0xd8f2b5d4);
    ppuVar69 = (undefined **)(ulong)(uVar68 < 0xd8f08ae1 != uVar54 < 0xd8f2b5d4);
    goto code_r0x000100022c88;
  case (undefined **)0x100022c86:
code_r0x000100022c88:
    uVar68 = (uint)(uVar68 < (uint)UNRECOVERED_JUMPTABLE_44);
    if ((char)ppuVar69 != '\0') {
      uVar68 = uVar14;
    }
    ppuVar69 = (undefined **)(long)(int)(uVar13 + 0x58e83550 + (uVar68 & 0xff));
    ppuVar71 = (undefined **)&DAT_1006d2600;
code_r0x000100022cac:
                    /* WARNING: Could not recover jumptable at 0x000100022cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_37 +
                         (long)(int)*(uint *)((long)ppuVar71 + (long)ppuVar69 * 4)))();
    return ppuVar19;
  case (undefined **)0x100022dec:
    uVar68 = (uVar28 ^ 0x51a99a8a) + *(int *)((long)ppuVar61 + (long)UNRECOVERED_JUMPTABLE_41);
    uVar14 = 1;
    if (uVar68 < uVar64 + 0xaf837492) {
      uVar14 = (uint)(uVar68 < 0x4b2bb013);
    }
                    /* WARNING: Could not recover jumptable at 0x000100022e53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100022db7 +
                         *(int *)(&DAT_1006d1e30 + (long)(int)(uVar14 + uVar77) * 4)))
                         (&UNK_100022db7 +
                          *(int *)(&DAT_1006d1e30 + (long)(int)(uVar14 + uVar77) * 4));
    return ppuVar19;
  case (undefined **)0x100022f66:
    uVar22 = (ulong)*(uint *)((long)puVar75 + (long)UNRECOVERED_JUMPTABLE_47 * 4);
                    /* WARNING: Could not recover jumptable at 0x000100022f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100022f3f + uVar22))
                         (ppuVar61,DAT_100023fcc,&DAT_100022f3f + uVar22,uVar22,&DAT_1006d2600,
                          0x3165f9b3);
    return ppuVar19;
  case (undefined **)0x100022f76:
    if ((long)UNRECOVERED_JUMPTABLE_47 + -1 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + -1 + (long)ppuVar69);
      ppuVar51[-0x2e] = (undefined *)ppuVar66;
      ppuVar51[-0x30] = (undefined *)UNRECOVERED_JUMPTABLE_44;
                    /* WARNING: Could not recover jumptable at 0x000100022f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*UNRECOVERED_JUMPTABLE)(0,DAT_100023fcc,0x20613,UNRECOVERED_JUMPTABLE);
      return ppuVar19;
    }
    out(0x4a,uVar13);
    ppuVar51[-0x2c] = (undefined *)((ulong)puVar75 & 0xffffffff);
    ppuVar69 = (undefined **)(ulong)(uVar13 - 0x3c);
    UNRECOVERED_JUMPTABLE_46 =
         (undefined **)
         (&UNK_100022f83 +
         *(int *)((long)unaff_R12 +
                 (long)(int)(((undefined **)puVar75 == (undefined **)0x7ec08e5aeb2a8122) + uVar13) *
                 4));
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0x0;
    bRam894c006aba7fe85f = bVar11;
code_r0x000100022fba:
    ppuVar51[-0x18] = (undefined *)((ulong)UNRECOVERED_JUMPTABLE_47 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x000100022fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)UNRECOVERED_JUMPTABLE_46)
                         (ppuVar69,(undefined *)((ulong)UNRECOVERED_JUMPTABLE_47 & 0xffffffff),
                          UNRECOVERED_JUMPTABLE_46,UNRECOVERED_JUMPTABLE_47,0x3165f9b3,0x3165f9b3);
    return ppuVar19;
  case (undefined **)0x10002312d:
    uVar14 = *(uint *)UNRECOVERED_JUMPTABLE_41;
    *(char *)(ulong)uVar14 = *(char *)(ulong)uVar14 + (char)uVar14;
    ppuVar56 = (undefined **)(ulong)(uVar64 * 5);
    UNRECOVERED_JUMPTABLE_46 = ppuVar76;
code_r0x000100023136:
    lVar29 = *(long *)((long)unaff_RBX + -0x7ec08e5aeb2a8122);
    puVar17 = ppuVar51[-0x33];
    iVar57 = *(int *)(puVar17 + -0x402ed59bbf59a0a7);
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x83c46419)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x83c4641a)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x83c4641b)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x83c4641c)) = 0xb;
    iVar57 = *(int *)(puVar17 + -0x402ed59bbf59a0a7);
    *(int *)(puVar17 + -0x402ed59bbf59a0a7) = iVar57 + 4;
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)
         ((ulong)(iVar57 + (int)ppuVar56 + 0x83c4640e) +
         *(long *)((long)unaff_RBX + -0x7ec08e5aeb2a8122));
    UNRECOVERED_JUMPTABLE_45 = (undefined **)0xebe9dd97f1423749;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)&UNK_10002329a;
    goto code_r0x00010002214a;
  case (undefined **)0x100023183:
    UNRECOVERED_JUMPTABLE_46 = ppuVar76;
    goto code_r0x000100023136;
  case (undefined **)0x1000231c4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000231ea:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000231ef:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar51 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 5);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)cVar26);
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x1000231f5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023412:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023535:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023599:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023766:
    goto code_r0x000100023766;
  case (undefined **)0x10002376f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000237ae:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x39);
    *UNRECOVERED_JUMPTABLE =
         (code)((byte)*UNRECOVERED_JUMPTABLE >> ((byte)cVar26 & 7) |
               (char)*UNRECOVERED_JUMPTABLE << 8 - ((byte)cVar26 & 7));
    *(uint *)ppuVar61 = *(uint *)ppuVar61 >> 0x14 | *(uint *)ppuVar61 << 0xc;
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x1000237c1:
    goto code_r0x0001000237c1;
  case (undefined **)0x100023867:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar28 + 0x23fcc);
code_r0x000100023869:
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                      (long)(int)UNRECOVERED_JUMPTABLE_47 * 4) + 0x100023838);
                    /* WARNING: Could not recover jumptable at 0x00010002387c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*UNRECOVERED_JUMPTABLE)(ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE,0);
    return ppuVar19;
  case (undefined **)0x100023971:
    uVar28 = uVar28 ^ 0x28207c2;
    uVar14 = iRam93899e7148ddc418 + 0xbc57eb0d;
    ppuVar51[-9] = (undefined *)(ulong)uRam93899e7148ddc414;
    uVar68 = uRam93899e7148ddc414 + 0x6144bd8e;
    bVar80 = uVar14 < uVar28 + 0xdda1264a;
    if (uVar68 < (uVar28 + 0xf44b4c40 & 0xbb4b3bd) + 0xdda1264c == bVar80) {
      bVar80 = uVar68 < uVar14;
    }
                    /* WARNING: Could not recover jumptable at 0x000100023a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100023971 +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar80 + uVar28)]))
                         (uVar68,DAT_100023fcc,
                          &UNK_100023971 +
                          (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(bVar80 + uVar28)],
                          (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                     [(int)(bVar80 + uVar28)],uVar28 + 0x1a);
    return ppuVar19;
  case (undefined **)0x1000239ff:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) + -1
    ;
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100023a3d:
    *(int *)UNRECOVERED_JUMPTABLE_47 = *(int *)UNRECOVERED_JUMPTABLE_47 + 1;
    goto code_r0x000100023a3f;
  case (undefined **)0x100023ad4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023b5b:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)0xe2846e84;
    iVar57 = iRam00000000e2846e84 + -0x1d7b917c;
    iRam00000000e2846e84._0_1_ = (char)iVar57;
    iRam00000000e2846e84 = CONCAT31((int3)((uint)iVar57 >> 8),(char)iRam00000000e2846e84 + -0x7c);
  case (undefined **)0x100023b44:
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)
         CONCAT62((int6)((ulong)UNRECOVERED_JUMPTABLE_41 >> 0x10),
                  (ushort)(byte)UNRECOVERED_JUMPTABLE_41 *
                  (ushort)(byte)*(code *)(ppuVar61 + 0x9a00000));
    ppuVar65 = (undefined **)0x1e2846e84;
code_r0x000100023b67:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)0x10001f431;
    goto code_r0x00010002431a;
  case (undefined **)0x100023b65:
    goto code_r0x000100023b67;
  case (undefined **)0x100023bcd:
    bVar80 = uVar28 < uVar68;
    uVar68 = uVar13 * 2 + 0xbe367ece;
    uVar54 = uVar72 ^ uVar68 ^ 0x6df6c0a0;
    uVar68 = uVar68 & 0xedf6c198;
    goto code_r0x000100024a10;
  case (undefined **)0x100023c14:
    if (-0x100023fcd < (long)uVar22) {
      uVar14 = uVar13 + 0x358d4848 + (uint)bVar79;
      UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
      bVar81 = uVar14 == 0;
    }
    if (bVar81) {
      *(char *)UNRECOVERED_JUMPTABLE_41 =
           (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)UNRECOVERED_JUMPTABLE_41;
      ppuVar66 = (undefined **)(ulong)(uVar68 < 0xe5e90103);
      uVar28 = (int)UNRECOVERED_JUMPTABLE_41 + uVar28 * 2 + 0xcea6ab2a;
      UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)uVar28;
code_r0x000100023c36:
      cVar63 = SUB81(ppuVar66,0);
      ppuVar69 = (undefined **)
                 (ulong)((uVar28 ^ 0x7dbf7ef5) + ((uint)UNRECOVERED_JUMPTABLE_37 & 0xfdbf7ef4) * 2);
    }
    else {
      UNRECOVERED_JUMPTABLE_45 = (undefined **)0x78148d45;
    }
    uVar14 = (int)ppuVar69 + 0x6829820e;
    puVar70 = (uint *)(ulong)(uVar14 < 0xe5e90103);
    ppuVar66 = (undefined **)(ulong)((byte)cVar63 ^ uVar14 < 0xe5e90103);
    bVar79 = uVar14 < (uint)UNRECOVERED_JUMPTABLE_46;
    bVar80 = uVar14 == (uint)UNRECOVERED_JUMPTABLE_46;
    goto switchD_100025d1a_caseD_23c6f;
  case (undefined **)0x100023d0f:
    *(char *)((long)UNRECOVERED_JUMPTABLE_47 + 0xf) =
         (*(char *)((long)UNRECOVERED_JUMPTABLE_47 + 0xf) - bVar11) - bVar79;
    return (undefined **)((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff);
  case (undefined **)0x100023eab:
    *(uint *)(ppuVar51 + -0x26) = 0x23fcc;
    UNRECOVERED_JUMPTABLE_37 = (undefined **)unaff_R12;
    ppuVar65 = ppuVar56;
    goto code_r0x000100023eb1;
  case (undefined **)0x100023ebe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023f07:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100023f52:
    ppuVar51[-0x11] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         (switchD_10001f0a4::caseD_23f16 +
         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                       (ulong)(uVar64 + ((undefined **)puVar75 == (undefined **)0x0)) * 4));
code_r0x000100023f71:
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[uVar64 ^ 0x1f];
code_r0x000100023f82:
    ppuVar51[-0x21] = puVar17 + -1;
                    /* WARNING: Could not recover jumptable at 0x000100023f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)UNRECOVERED_JUMPTABLE_47)
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,0,UNRECOVERED_JUMPTABLE_47);
    return ppuVar19;
  case (undefined **)0x100023fb7:
    *(char *)(UNRECOVERED_JUMPTABLE_41 + -0xd) =
         (char)*(code *)(UNRECOVERED_JUMPTABLE_41 + -0xd) + (char)cVar26;
                    /* WARNING: Could not recover jumptable at 0x000100023fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&LAB_100023f98 +
                         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                       (long)UNRECOVERED_JUMPTABLE_41 * 4)))
                         (ppuVar61,DAT_100023fcc,
                          &LAB_100023f98 +
                          (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                        (long)UNRECOVERED_JUMPTABLE_41 * 4));
    return ppuVar19;
  case (undefined **)0x100023fcc:
    *(uint *)(ppuVar51 + -0x22) = 0x3165f986;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)ppuVar51[-0x20];
    ppuVar69 = (undefined **)ppuVar51[-0x25];
  case (undefined **)0x100023fe4:
    goto code_r0x0001000224b7;
  case (undefined **)0x100023fd0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023fd4:
    UNRECOVERED_JUMPTABLE =
         (code *)((long)in_GS_OFFSET + (long)((long)UNRECOVERED_JUMPTABLE_41 + -0x75));
    *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE ^ uVar28;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023ff6:
    *(code *)ppuVar61 = DAT_100023fcc;
    uVar14 = uVar72 + uVar28 * 8;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar68 + 0x28bba6d5);
    UNRECOVERED_JUMPTABLE_37 = (undefined **)&UNK_100023ad5;
    ppuVar69 = (undefined **)(ulong)(uVar68 + 0x28bba6d5 < uVar72 + uVar28 * 8 + 0x28bb965a);
    ppuVar66 = (undefined **)0x7ffcdbff;
    ppuVar65 = (undefined **)(ulong)(0x2000 << (((byte)uVar14 ^ 6) + 0x84 & 0x1f) & 0xfff9f7fc);
    goto code_r0x00010002404e;
  case (undefined **)0x100024026:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002404a:
    cVar63 = (code)in(uVar33);
    *(code *)ppuVar61 = cVar63;
    UNRECOVERED_JUMPTABLE_37 = (undefined **)*ppuVar42;
code_r0x00010002404e:
    ppuVar71 = (undefined **)(ulong)((int)ppuVar65 + (int)ppuVar66 + 0xa8be9ad6);
code_r0x000100024059:
    uVar14 = (uint)ppuVar71;
    bVar80 = (uint)UNRECOVERED_JUMPTABLE_46 < uVar14;
    if ((bool)(char)ppuVar69 != uVar14 < 0x28bb96d5) {
      bVar80 = uVar14 < 0x28bb96d5;
    }
                    /* WARNING: Could not recover jumptable at 0x000100024093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_37 +
                         (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                    [(int)((uint)bVar80 + (int)UNRECOVERED_JUMPTABLE_41)]))();
    return ppuVar19;
  case (undefined **)0x100024056:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002405e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000240da:
    uVar22 = (ulong)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                         [(int)(uVar14 + 0x48150497 +
                               (uint)(UNRECOVERED_JUMPTABLE_41 == (undefined **)0x0))];
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0x1000240a4;
    goto code_r0x0001000240fa;
  case (undefined **)0x100024196:
                    /* WARNING: Could not recover jumptable at 0x0001000241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10002418a +
                         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)uVar72 * 4)))();
    return ppuVar19;
  case (undefined **)0x100024399:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x46) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x46) + (char)cVar26);
    *(code *)((long)ppuVar61 + -0x178580a9) = cVar31;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)uVar13 | 0xb9);
code_r0x00010002438c:
    *(char *)((long)UNRECOVERED_JUMPTABLE_46 + 0x44) =
         *(char *)((long)UNRECOVERED_JUMPTABLE_46 + 0x44) +
         (char)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8);
    ppuVar51[-0x28] = (undefined *)((long)puVar75 + -0x46f3178580a86878);
    uVar14 = *(uint *)((long)puVar75 + -0x583fea33108f2bc8) + (int)ppuVar51[-0x1b] + 0x37803879;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)uVar14;
    uVar68 = *(uint *)((long)puVar75 + -0x583fea33108f2bcc) + 0x58c31940;
    UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)uVar68;
    ppuVar66 = (undefined **)(ulong)(uVar14 < ((uint)ppuVar76 | 0xca) + 0x957a4526);
    bVar80 = uVar68 < 0x957a45f1;
code_r0x0001000243f7:
    uVar14 = (uint)((uint)UNRECOVERED_JUMPTABLE_37 < (uint)UNRECOVERED_JUMPTABLE_45);
    if (bVar80 != SUB81(ppuVar66,0)) {
      uVar14 = (uint)ppuVar66;
    }
                    /* WARNING: Could not recover jumptable at 0x000100024425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10002438e +
                         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                       (long)(int)(uVar14 + (int)UNRECOVERED_JUMPTABLE_41) * 4)))
                         (&UNK_10002438e +
                          (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                        (long)(int)(uVar14 + (int)UNRECOVERED_JUMPTABLE_41) * 4));
    return ppuVar19;
  case (undefined **)0x10002441f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000244f5:
    out(0x1d,uVar13);
    uVar68 = in(uVar33);
    *(uint *)ppuVar61 = uVar68;
    *(uint *)((long)ppuVar51 + -0xac) = uVar28;
    ppuVar61 = (undefined **)(ulong)(uVar54 + 4 + (uint)bVar27 * -8 + uVar14);
code_r0x000100024505:
    UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0xc];
    ppuVar42[-1] = &UNK_10002450e;
    puVar17 = (undefined *)
              (*UNRECOVERED_JUMPTABLE)
                        ((int)ppuVar61 + 0x120ff48,DAT_100023fcc,UNRECOVERED_JUMPTABLE_46);
    ppuVar51[-0x46] = puVar17;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(long)(int)(uVar64 + (puVar17 == (undefined *)0x0));
code_r0x000100024520:
    UNRECOVERED_JUMPTABLE_46 =
         (undefined **)
         (&UNK_1000244e7 +
         (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(long)UNRECOVERED_JUMPTABLE_47]);
code_r0x00010002453f:
                    /* WARNING: Could not recover jumptable at 0x00010002453f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_46)();
    return ppuVar19;
  case (undefined **)0x1000244fd:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)((long)ppuVar61 * 9 - 1U & 0xffffffff);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)UNRECOVERED_JUMPTABLE_47 + -9 + (long)UNRECOVERED_JUMPTABLE_41);
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + 1;
    goto code_r0x000100024505;
  case (undefined **)0x100024520:
    goto code_r0x000100024520;
  case (undefined **)0x100024580:
    goto code_r0x000100024580;
  case (undefined **)0x1000245b4:
    goto code_r0x000100024580;
  case (undefined **)0x10002463c:
    ppuVar19 = (undefined **)
               FUN_10002431a(0xebe9dd97f1423742,DAT_100023fcc,&DAT_10001f288,
                             (ulong)UNRECOVERED_JUMPTABLE_47 & 0x1e2846e84);
    return ppuVar19;
  case (undefined **)0x100024678:
    ppuVar51[-0x32] = (undefined *)((long)puVar75 + -0x583fea33108f2bc8);
    ppuVar61 = (undefined **)(ulong)(*(uint *)((long)puVar75 + -0x583fea33108f2bc8) + 0xf601fc54);
    ppuVar65 = (undefined **)(ulong)(*(uint *)((long)puVar75 + -0x583fea33108f2bcc) + 0x1744dd1b);
    ppuVar66 = (undefined **)
               (ulong)(*(uint *)((long)puVar75 + -0x583fea33108f2bc8) + 0xf601fc54 < 0x53fc09cc);
    ppuVar69 = (undefined **)(ulong)(uVar64 ^ 0x53fc082e);
code_r0x0001000246c2:
    uVar14 = (uint)ppuVar66;
    if ((uint)ppuVar65 < (uint)ppuVar69 == SUB81(ppuVar66,0)) {
      uVar14 = (uint)((uint)ppuVar65 < (uint)ppuVar61);
    }
                    /* WARNING: Could not recover jumptable at 0x0001000246fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100024671 +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(uVar14 + 0x23fcc)]))
                         (&UNK_100024671 +
                          (int)(&switchD_10001f9d9::switchdataD_1006d2190)[(int)(uVar14 + 0x23fcc)])
    ;
    return ppuVar19;
  case (undefined **)0x1000246c2:
    goto code_r0x0001000246c2;
  case (undefined **)0x100024718:
    plVar44 = (long *)(ppuVar42 + -1);
    ppuVar42 = ppuVar42 + -1;
    *plVar44 = (long)ppuVar51;
  case (undefined **)0x100024711:
    piVar18 = (int *)((long)UNRECOVERED_JUMPTABLE_47 * 5 + -9);
    *piVar18 = *piVar18 + 1;
    UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0xc];
    *(undefined **)((long)ppuVar42 + -8) = &UNK_100024724;
    puVar17 = (undefined *)(*UNRECOVERED_JUMPTABLE)((uVar54 ^ 0x405240) + 0x23fcc);
    ppuVar51[-0x34] = puVar17;
    uVar22 = (ulong)(int)(uVar72 + (puVar17 == (undefined *)0x0));
code_r0x000100024736:
                    /* WARNING: Could not recover jumptable at 0x000100024757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000246ff + (int)(&switchD_10001f9d9::switchdataD_1006d2190)[uVar22])
               )();
    return ppuVar19;
  case (undefined **)0x1000247fc:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100024839:
code_r0x000100024830:
                    /* WARNING: Could not recover jumptable at 0x00010002483e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 +
                         (ulong)((uint)UNRECOVERED_JUMPTABLE_41 | 0xffffffcd)))();
    return ppuVar19;
  case (undefined **)0x100024889:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000248c6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000248ce:
    goto LAB_10002513c;
  case (undefined **)0x1000249a4:
    UNRECOVERED_JUMPTABLE_44 = (uint *)((long)UNRECOVERED_JUMPTABLE_47 * 5 + -0x40);
    bVar80 = CARRY4(*UNRECOVERED_JUMPTABLE_44,uVar13);
    *UNRECOVERED_JUMPTABLE_44 = *UNRECOVERED_JUMPTABLE_44 + uVar13;
    goto code_r0x0001000249a8;
  case (undefined **)0x100024a0d:
    goto code_r0x000100024a0d;
  case (undefined **)0x100024b68:
    if (!bVar82) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(0xf6,bVar11);
    if (!bVar79 && !bVar81) goto code_r0x000100024b74;
    if (!bVar82) {
      *(uint *)(ppuVar51 + -0x18) = uVar28;
      ppuVar61 = (undefined **)
                 (ulong)(CONCAT22(uVar32,CONCAT11(0x24,bVar11)) + (uVar72 + 0xe713890f & 0x18ec76f6)
                        );
    }
    break;
  case (undefined **)0x100024b98:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)((ulong)ppuVar42 & 0xffffffff);
    break;
  case (undefined **)0x100024bb1:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)CONCAT71(uVar24,0xf9);
    in_GS_OFFSET = (uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_47);
    *in_GS_OFFSET = *in_GS_OFFSET ^ 0x23fcc;
    uVar14 = *in_GS_OFFSET;
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75);
    *UNRECOVERED_JUMPTABLE =
         (code)((byte)*UNRECOVERED_JUMPTABLE >> ((byte)cVar26 & 7) |
               (char)*UNRECOVERED_JUMPTABLE << 8 - ((byte)cVar26 & 7));
    bVar79 = (bool)(((uVar28 & 0x1f) != 0) * ((char)*UNRECOVERED_JUMPTABLE < '\0'));
    if ((bool)((((byte)cVar26 & 0x1f) == 1) *
              (bVar79 ^ (char)((char)*UNRECOVERED_JUMPTABLE << 1) < '\0')) != (int)uVar14 < 0)
    goto code_r0x000100024bbb;
    in((short)UNRECOVERED_JUMPTABLE_46);
code_r0x000100024b74:
    *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0xbf73) =
         (*(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0xbf73) - (char)cVar26) - bVar79;
    *(int *)((long)UNRECOVERED_JUMPTABLE_46 + -0x73) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_46 + -0x73) + 1;
    break;
  case (undefined **)0x100024be5:
                    /* WARNING: Could not recover jumptable at 0x000100024c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100024bbf +
                         (int)*(uint *)((long)ppuVar76 +
                                       (long)(int)((ppuVar56 == (undefined **)0x3a5a9c416583c527) +
                                                  uVar28) * 4)))
                         (&UNK_100024bbf +
                          (int)*(uint *)((long)ppuVar76 +
                                        (long)(int)((ppuVar56 == (undefined **)0x3a5a9c416583c527) +
                                                   uVar28) * 4),0);
    return ppuVar19;
  case (undefined **)0x100024ca8:
                    /* WARNING: Could not recover jumptable at 0x000100024ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_47)();
    return ppuVar19;
  case (undefined **)0x100024d96:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100024dc0:
    if (cVar63 == (code)0x0) {
      ppuVar66 = (undefined **)(ulong)(uVar68 < uVar28);
    }
                    /* WARNING: Could not recover jumptable at 0x000100024df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100024d83 +
                         *(int *)((long)unaff_R12 + (long)(int)((int)ppuVar66 + uVar64) * 4)))
                         (ppuVar61,DAT_100023fcc,
                          &DAT_100024d83 +
                          *(int *)((long)unaff_R12 + (long)(int)((int)ppuVar66 + uVar64) * 4));
    return ppuVar19;
  case (undefined **)0x100024e3d:
    UNRECOVERED_JUMPTABLE = (code *)((long)puVar75 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + -0x43);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)cVar26);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100024eda:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    ppuVar51[-0x3f] = (undefined *)0x2cc289762f9fc832;
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar64 - 0x7c)];
    ppuVar51[-0x1e] = puVar17;
    ppuVar61 = (undefined **)(ulong)*(uint *)(puVar17 + -2);
    UNRECOVERED_JUMPTABLE_45 = *(undefined ***)(uVar22 + 0xc5a563bf9a7e7aa5);
    ppuVar51[-0x25] = (undefined *)UNRECOVERED_JUMPTABLE_46;
    UNRECOVERED_JUMPTABLE_46 =
         (undefined **)(ulong)(uVar64 + 0xf8802178 + *(int *)(uVar22 + 0xc5a563bf9a7e7ab1));
    unaff_R12 = (uint *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar64 - 0x8b)] + -3);
    goto code_r0x000100024f45;
  case (undefined **)0x100024f42:
    ppuVar42 = (undefined **)(ulong)(uVar40 - 3);
code_r0x000100024f45:
    *(undefined **)((long)ppuVar42 + -8) = &UNK_100024f56;
    uVar68 = (*(code *)unaff_R12)
                       (ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,ppuVar51 + -0x3e,
                        (code *)((long)ppuVar51 + -0x114));
    uVar14 = *(uint *)((long)puVar75 +
                      (long)(int)(((uVar68 ^ 0x6afff75e) + uVar14 + (uVar68 & 0xeafff75e) * 2 ==
                                  0x2217c30d) + uVar64) * 4);
    *(uint *)(ppuVar51 + -0x1d) = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x000100024f99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&UNK_100024eac + (int)uVar14))();
    return ppuVar19;
  case (undefined **)0x100025047:
    LOCK();
    *(uint *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) = uVar28;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000250c0:
    ppuVar52 = (undefined **)(ulong)(uVar67 + 0xe6484988);
    uVar14 = (int)ppuVar52[-0x27] + 0xa75ed4a2U & 0x58a12aff;
    puVar75 = (uint *)(ulong)uVar14;
    ppuVar52[-0x50] = (code *)((long)ppuVar61 + (ulong)((uVar14 ^ 0x8d60152d) + (int)ppuVar69));
    *(uint *)ppuVar52[-0x1e] = uVar28 + uVar68 + -0x3166a97d;
    *(uint *)((long)ppuVar52 + -0x1cc) = 0x3166a97d;
    UNRECOVERED_JUMPTABLE = (code *)ppuVar52[-0x21];
    ppuVar42[-1] = &UNK_100025121;
    uVar15 = (*UNRECOVERED_JUMPTABLE)
                       ((int)UNRECOVERED_JUMPTABLE_44 + (uint)(byte)cVar63 + -0x3166a9fa);
    *(undefined8 *)ppuVar52[-0x2d] = uVar15;
    goto switchD_100025d1a_caseD_25132;
  case (undefined **)0x1000250c3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100025227:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)*(uint *)(ppuVar51 + -0x28);
    ppuVar51[-0x49] = (undefined *)UNRECOVERED_JUMPTABLE_47;
    ppuVar51[-0x40] = ppuVar51[-0x27];
    ppuVar51[-0x4a] = ppuVar51[-0x31];
    ppuVar51[-0x24] = (undefined *)UNRECOVERED_JUMPTABLE_47;
code_r0x00010002527e:
    ppuVar51[-0x26] = (undefined *)UNRECOVERED_JUMPTABLE_47;
    puVar75 = (uint *)UNRECOVERED_JUMPTABLE_46;
    goto LAB_10002513c;
  case (undefined **)0x100025454:
    *(ushort *)((long)(UNRECOVERED_JUMPTABLE_47 + -2) + (long)UNRECOVERED_JUMPTABLE_41) =
         *(ushort *)((long)(UNRECOVERED_JUMPTABLE_47 + -2) + (long)UNRECOVERED_JUMPTABLE_41) ^
         (ushort)uVar13;
    goto code_r0x000100025459;
  case (undefined **)0x1000254c8:
    goto code_r0x0001000254c8;
  case (undefined **)0x1000254ec:
    UNRECOVERED_JUMPTABLE_44 = (uint *)((long)UNRECOVERED_JUMPTABLE_47 + 0xf);
    *UNRECOVERED_JUMPTABLE_44 = *UNRECOVERED_JUMPTABLE_44 << 0x17 | *UNRECOVERED_JUMPTABLE_44 >> 9;
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x1000255ee:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002568c:
    *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x324aa609) =
         *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x324aa609) + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002568d:
    goto code_r0x00010002568d;
  case (undefined **)0x10002569e:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0x44b60f45;
    if ((char)*(code *)((long)ppuVar51 + -0x3e7e0387) < 'F') {
      UNRECOVERED_JUMPTABLE = (code *)swi(0x1e);
      auVar87 = (*UNRECOVERED_JUMPTABLE)();
    }
    else {
      UNRECOVERED_JUMPTABLE_47 = (undefined **)0x44b60f45;
      auVar87._4_4_ = 0;
      auVar87._0_4_ = uVar13 | 0x4884400;
      auVar87._8_8_ = UNRECOVERED_JUMPTABLE_46;
      bRam0000000044b60f45 = bRam0000000044b60f45 | bVar62;
    }
    goto code_r0x000100025693;
  case (undefined **)0x1000257eb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000258cd:
    goto code_r0x0001000258cd;
  case (undefined **)0x1000259ea:
    ppuVar51 = (undefined **)0xfffffe20;
  case (undefined **)0x1000259d9:
    *(char *)((long)puVar75 + -0x40) = (char)*(code *)((long)puVar75 + -0x40) + (char)(uVar28 >> 8);
    switchD_10001cc54::switchdataD_1006d2608 = 0x6507f9cb;
    ppuVar51[-0x3c] = (undefined *)ppuVar56;
    ppuVar51[-0x6d] = (undefined *)ppuVar56;
                    /* WARNING: Could not recover jumptable at 0x000100025a21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000259d0 +
                         *(int *)(DAT_100023fcc +
                                 (long)(int)(uVar77 + ((undefined *)
                                                       (((ulong)UNRECOVERED_JUMPTABLE_41 ^ 0xf98) +
                                                       (ulong)(uVar77 - 0x1a)) < ppuVar51[-0x3d])) *
                                 4)))
                         ((ulong)(uVar77 - 0x1a),DAT_100023fcc,
                          &UNK_1000259d0 +
                          *(int *)(DAT_100023fcc +
                                  (long)(int)(uVar77 + ((undefined *)
                                                        (((ulong)UNRECOVERED_JUMPTABLE_41 ^ 0xf98) +
                                                        (ulong)(uVar77 - 0x1a)) < ppuVar51[-0x3d]))
                                  * 4));
    return ppuVar19;
  case (undefined **)0x100025afc:
    ppuVar61 = (undefined **)(ulong)((uVar64 ^ 0xf1423742) + 0xf9ba9dea);
    UNRECOVERED_JUMPTABLE_45 = (undefined **)0x5f2fd635;
    ppuVar65 = (undefined **)(ulong)(((uVar64 ^ 0xf1423742) == 0) + 0x6d2600);
    goto code_r0x000100025b18;
  case (undefined **)0x100025b38:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    ppuVar51[-0x39] = ppuVar51[-0x11];
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                      (long)(int)((ppuVar51[-0x11] ==
                                                  (undefined *)0x583fea33108f2bd4) + uVar72) * 4) +
                 0x100025b35);
                    /* WARNING: Could not recover jumptable at 0x000100025b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*UNRECOVERED_JUMPTABLE)(ppuVar61,DAT_100023fcc,0,UNRECOVERED_JUMPTABLE);
    return ppuVar19;
  case (undefined **)0x100025b4a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100025d10:
    goto code_r0x000100025d10;
  case (undefined **)0x100025d23:
    ppuVar51[-0x14] = (undefined *)0x6c76618fb7247bc0;
    goto code_r0x000100025d34;
  case (undefined **)0x100025d7d:
    goto code_r0x000100025d71;
  case (undefined **)0x100026066:
    ppuVar61 = (undefined **)(ulong)in_SS;
    goto switchD_100025d1a_caseD_26068;
  case (undefined **)0x100026125:
    if (!bVar81 && -0x100023fcd < (long)uVar22) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000100026177;
  case (undefined **)0x100026175:
    if (!bVar79 && !bVar81) {
      UNRECOVERED_JUMPTABLE_47 = (undefined **)((ulong)puVar75 & 0xffffffff);
    }
    goto code_r0x000100026177;
  case (undefined **)0x100026237:
                    /* WARNING: Could not recover jumptable at 0x000100026247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100026201 +
                         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                       (long)UNRECOVERED_JUMPTABLE_46 * 4)))
                         (ppuVar61,&UNK_100026201 +
                                   (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                                 (long)UNRECOVERED_JUMPTABLE_46 * 4),0);
    return ppuVar19;
  case (undefined **)0x100026246:
    goto switchD_100025d1a_caseD_26246;
  case (undefined **)0x100026258:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0xc) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0xc) | bVar39);
    goto code_r0x00010002625e;
  case (undefined **)0x1000262f2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000263f5:
                    /* WARNING: Could not recover jumptable at 0x00010002641a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)unaff_R12 +
                         (long)(int)*(uint *)((long)puVar75 +
                                             (long)(int)(((char)ppuVar69 == '\0' && uVar58 < uVar54)
                                                        + uVar28) * 4)))();
    return ppuVar19;
  case (undefined **)0x10002645a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002663d:
    ppuVar42[-1] = (undefined *)ppuVar51;
    puVar75 = (uint *)0x6d2190;
    puVar17 = ppuVar51[-0x3c];
code_r0x00010002664f:
    *(undefined **)((long)puVar75 + (long)ppuVar76) = puVar17;
    *(uint *)ppuVar51[-0x3b] = *(uint *)(ppuVar51 + -0x18);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)ppuVar51[-0x3a];
    uVar14 = uVar64 + 0xdcc30333 & 0x233cfccf;
    ppuVar65 = (undefined **)ppuVar51[-0x2d];
    ppuVar61 = (undefined **)((long)ppuVar65 << (((byte)uVar14 ^ 0xcc) & 0x3f));
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         (((ulong)(*(int *)UNRECOVERED_JUMPTABLE_41 + 0xa205f284U) ^ 0xfebe9b7939ffbf7b) +
         (ulong)(*(int *)UNRECOVERED_JUMPTABLE_41 + 0xa205f284U & 0x39ffbf7b) * 2);
    UNRECOVERED_JUMPTABLE_46 = (undefined **)0x681f333462e1d3cc;
    puVar78 = (uint *)(ulong)uVar14;
    goto switchD_100025d1a_caseD_266b3;
  case (undefined **)0x1000266bb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000266e5:
    LOCK();
    puVar23 = (undefined1 *)
              ((long)UNRECOVERED_JUMPTABLE_47 + (long)UNRECOVERED_JUMPTABLE_41 * 2 + 1);
    uVar10 = *puVar23;
    *puVar23 = (char)(uVar13 >> 8);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)CONCAT22(uVar32,CONCAT11(uVar10,bVar11));
    UNLOCK();
    goto switchD_100025d1a_caseD_266b3;
  case (undefined **)0x100026732:
    *(byte *)(UNRECOVERED_JUMPTABLE_41 + -0x10) =
         (char)*(code *)(UNRECOVERED_JUMPTABLE_41 + -0x10) + bVar11 + bVar79;
    ppuVar19 = UNRECOVERED_JUMPTABLE_41 + 8;
    uVar22 = (long)UNRECOVERED_JUMPTABLE_46 << 0x20 | (ulong)uVar13;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(uVar22 / *(uint *)ppuVar19 & 0xffffffff);
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(uVar22 % (ulong)*(uint *)ppuVar19);
    *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + 0x100023fd1) = bVar39;
    goto switchD_100025d1a_caseD_266b3;
  case (undefined **)0x1000267ff:
    uVar68 = (uVar68 << ((byte)cVar26 & 0x1f)) + 0x35f02c6a;
    uVar14 = uVar68 ^ 0xef37fbeb;
    uVar68 = uVar68 & 0xef37fbea;
    uVar54 = uVar14 + uVar68 * 2 + 0x2c463ba4;
    cVar26 = (code)(uVar72 < uVar54);
    if (cVar63 != (code)(uVar54 < 0x1b7e378f)) {
      cVar26 = (code)(uVar54 < 0x1b7e378f);
    }
                    /* WARNING: Could not recover jumptable at 0x000100026865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)ppuVar61 +
                         (long)*(int *)(&DAT_1006d2600 + (long)(int)((byte)cVar26 + uVar13) * 4)))
                         (ppuVar61,DAT_100023fcc,uVar14 + uVar68 * 2 + 0x75cfede0,uVar14,uVar68,
                          (code *)((long)ppuVar61 +
                                  (long)*(int *)(&DAT_1006d2600 +
                                                (long)(int)((byte)cVar26 + uVar13) * 4)));
    return ppuVar19;
  case (undefined **)0x10002695c:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    *(uint *)((long)ppuVar51 + -0xc4) = 0x3166a97d;
    UNRECOVERED_JUMPTABLE_41 = *(undefined ***)((long)puVar75 + -0x583fea33108f2bd4);
    UNRECOVERED_JUMPTABLE_45 = (undefined **)0xeeb32d5270193cb0;
    uVar68 = *(uint *)(uVar22 + 0xeeb32d53701b7c7c);
    ppuVar61 = (undefined **)(ulong)uVar68;
    puVar78 = (uint *)ppuVar51[-0x1b];
    uVar54 = ((int)puVar78 - ((int)puVar78 * 2 & 0x38691beeU)) + 0x9c348df7;
    ppuVar65 = (undefined **)(ulong)uVar54;
    *(byte *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(uVar68 + 0xa205f284)) =
         (byte)(uVar54 >> 0x18) ^ 0x9c;
    ppuVar69 = (undefined **)(ulong)(byte)((char)uVar14 + 0x16U ^ (byte)(uVar54 >> 0x10));
    ppuVar66 = (undefined **)(ulong)(uVar68 + 0xa205f285);
    goto code_r0x0001000269cd;
  case (undefined **)0x100026a33:
    goto code_r0x000100026a39;
  case (undefined **)0x100026a6c:
                    /* WARNING: Could not recover jumptable at 0x000100026a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100026a40 +
                         *(int *)((long)ppuVar56 + (long)UNRECOVERED_JUMPTABLE_41 * 4)))();
    return ppuVar19;
  case (undefined **)0x100026c24:
    ppuVar42[-1] = (undefined *)
                   ((ulong)(in_NT & 1) * 0x4000 | (ulong)SCARRY8(uVar22,0x100023fcc) * 0x800 |
                    (ulong)(bVar27 & 1) * 0x400 | (ulong)(in_IF & 1) * 0x200 |
                    (ulong)(in_TF & 1) * 0x100 | (ulong)bVar82 * 0x80 | (ulong)bVar81 * 0x40 |
                    (ulong)(in_AF & 1) * 0x10 | (ulong)bVar83 * 4 | (ulong)bVar79 |
                    (ulong)(in_ID & 1) * 0x200000 | (ulong)(in_VIP & 1) * 0x100000 |
                    (ulong)(in_VIF & 1) * 0x80000 | (ulong)(in_AC & 1) * 0x40000);
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100026cf4:
    ppuVar51[-0x6a] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    UNRECOVERED_JUMPTABLE =
         (code *)(&UNK_100026c3d +
                 (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                               (long)(int)(uVar14 + (UNRECOVERED_JUMPTABLE_41 == (undefined **)0x0))
                               * 4));
    goto code_r0x000100026d1a;
  case (undefined **)0x100026dd3:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)ppuVar51[-0x22];
    goto code_r0x0001000245bd;
  case (undefined **)0x10002700e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100027038:
    *(uint *)(ppuVar51 + -0x45) = uVar28;
    *(uint *)((long)ppuVar51 + -0xac) = 0x7c5c78fb;
                    /* WARNING: Could not recover jumptable at 0x00010002706a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100027032 +
                         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                       (long)(int)(uVar13 | 0x48) * 4)))
                         (ppuVar61,&UNK_100027032 +
                                   (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                                 (long)(int)(uVar13 | 0x48) * 4));
    return ppuVar19;
  case (undefined **)0x100027160:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0x2706d;
code_r0x0001000270da:
    *(char *)UNRECOVERED_JUMPTABLE_41 =
         (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)UNRECOVERED_JUMPTABLE_41;
    *(char *)(UNRECOVERED_JUMPTABLE_41 + -0xd) =
         (char)*(code *)(UNRECOVERED_JUMPTABLE_41 + -0xd) + (char)UNRECOVERED_JUMPTABLE_47;
    puVar17 = ppuVar56[(long)UNRECOVERED_JUMPTABLE_41];
    *(undefined **)((long)ppuVar42 + -8) = &UNK_1000270ec;
    (*(code *)(puVar17 + -1))(puVar78);
    iVar57 = (int)unaff_R12;
    puVar17 = ppuVar56[iVar57 + -0x94];
    ppuVar51[-0xf] = (undefined *)puVar78;
    puVar21 = ppuVar51[-9];
    *(undefined **)((long)ppuVar42 + -8) = &UNK_10002710c;
    puVar17 = (undefined *)(*(code *)(puVar17 + -2))(puVar78,puVar21);
    ppuVar51[-0x20] = puVar17;
    UNRECOVERED_JUMPTABLE = (code *)ppuVar56[iVar57 + -0x84];
    ppuVar51[-0xe] = puVar17;
    ppuVar51[-0x2a] = UNRECOVERED_JUMPTABLE;
    *(undefined **)((long)ppuVar42 + -8) = &UNK_100027132;
    puVar17 = (undefined *)(*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Could not recover jumptable at 0x00010002716f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10002706d +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                              [(int)((uint)(puVar17 == ppuVar56[iVar57 + -0xa6] + -0xe) + iVar57)]))
                         ();
    return ppuVar19;
  case (undefined **)0x10002718e:
    goto code_r0x000100027193;
  case (undefined **)0x1000272b1:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100027466:
    ppuVar51[-0x12] = (undefined *)(ulong)(uVar13 + uVar68);
    puVar75 = (uint *)(ulong)(uVar14 + 0xc);
    *UNRECOVERED_JUMPTABLE_46 = (undefined *)0x0;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)0x21493b807c5c68fb;
    *(undefined8 *)(&UNK_100023fd4 + uVar22) = 0x21493b807c5c68fb;
    *(undefined4 *)(&UNK_100023fdc + uVar22) = 0;
    ppuVar61 = (undefined **)0x1000;
    goto switchD_100025d1a_caseD_2748c;
  case (undefined **)0x1000274e9:
    out(uVar33,bVar11);
    goto switchD_100025d1a_caseD_274c1;
  case (undefined **)0x100027504:
    pbVar1 = (byte *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7f);
    *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100027870:
    plVar46 = (long *)(ppuVar42 + -1);
    ppuVar19 = ppuVar42 + -1;
    ppuVar52 = ppuVar42 + -1;
    ppuVar42[-1] = (undefined *)ppuVar51;
    cVar9 = '\b';
    do {
      ppuVar51 = ppuVar51 + -1;
      plVar46 = plVar46 + -1;
      *plVar46 = (long)*ppuVar51;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    ppuVar42[-10] = (undefined *)(ppuVar42 + -1);
    puVar23 = (undefined1 *)((long)ppuVar42 + -0x768d);
    ppuVar42 = (undefined **)((long)ppuVar42 + -0x768d);
    ppuVar20 = (undefined **)unaff_R12;
    UNRECOVERED_JUMPTABLE_37 = ppuVar56;
    if (bVar79 || bVar81) goto code_r0x0001000278df;
    do {
      iVar57 = (int)unaff_R12;
      ppuVar52 = ppuVar19;
      UNRECOVERED_JUMPTABLE_46 = ppuVar56;
      if ((!bVar81) && ((int)UNRECOVERED_JUMPTABLE_41 != 0x70726976)) {
        UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar65 + ((ulong)unaff_R12 & 0xffffffff));
        if ((int)UNRECOVERED_JUMPTABLE_41 == 0x6b657920) {
          *(undefined8 *)(puVar23 + -8) = 0x1000278a9;
          _memcpy((code *)((long)ppuVar61 + (long)UNRECOVERED_JUMPTABLE_45),UNRECOVERED_JUMPTABLE,
                  (size_t)puVar78);
          ppuVar42 = (undefined **)puVar23;
          UNRECOVERED_JUMPTABLE_37 = ppuVar61;
code_r0x0001000278ac:
          ppuVar65 = (undefined **)ppuVar52[-0xc];
          UNRECOVERED_JUMPTABLE_45 = (undefined **)ppuVar52[-7];
          *(code *)((long)UNRECOVERED_JUMPTABLE_45 + (ulong)((int)UNRECOVERED_JUMPTABLE_37 + 4)) =
               (code)0x63;
          *(code *)((long)UNRECOVERED_JUMPTABLE_45 + (ulong)((int)UNRECOVERED_JUMPTABLE_37 + 5)) =
               (code)0x65;
          puVar23 = (undefined1 *)ppuVar42;
          ppuVar19 = ppuVar52;
switchD_100025d1a_caseD_278b7:
          iVar57 = (int)unaff_R12;
          iVar59 = (int)ppuVar61;
          *(code *)((long)UNRECOVERED_JUMPTABLE_45 + (ulong)((int)UNRECOVERED_JUMPTABLE_37 + 6)) =
               (code)0x72;
          *(code *)((long)UNRECOVERED_JUMPTABLE_45 + (ulong)((int)UNRECOVERED_JUMPTABLE_37 + 7)) =
               (code)0x74;
        }
        else {
          *(undefined8 *)(puVar23 + -8) = 0x1000277d9;
          _memcpy((code *)((long)ppuVar61 + (long)UNRECOVERED_JUMPTABLE_45),UNRECOVERED_JUMPTABLE,
                  (size_t)puVar78);
          iVar59 = (int)ppuVar61;
          ppuVar65 = (undefined **)ppuVar19[-0xc];
          UNRECOVERED_JUMPTABLE_45 = (undefined **)ppuVar19[-7];
        }
        ppuVar61 = (undefined **)(ulong)(uint)(iVar59 + (int)puVar78);
        ppuVar52 = ppuVar19;
        UNRECOVERED_JUMPTABLE_46 = (undefined **)ppuVar19[-0xb];
      }
      uVar14 = iVar57 + (int)puVar78;
      unaff_R12 = (uint *)(ulong)uVar14;
      ppuVar19 = ppuVar52;
      UNRECOVERED_JUMPTABLE_41 = UNRECOVERED_JUMPTABLE_45;
      if ((uint)UNRECOVERED_JUMPTABLE_46 <= uVar14) {
        ppuVar20 = (undefined **)ppuVar52[-10];
        UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)*(uint *)((long)ppuVar52 + -0x2c);
        ppuVar51 = (undefined **)0x0;
        goto LAB_100027906;
      }
LAB_1000277f7:
      UNRECOVERED_JUMPTABLE_45 = UNRECOVERED_JUMPTABLE_41;
      iVar57 = (int)unaff_R12;
      iVar59 = (int)ppuVar76;
      uVar14 = iVar57 + iVar59;
      puVar78 = (uint *)((ulong)(byte)*(code *)((long)puVar75 + (ulong)(iVar57 + iVar59 + 3)) |
                        (ulong)(byte)*(code *)((long)puVar75 + (ulong)(iVar57 + iVar59 + 2)) << 8 |
                        (ulong)(byte)*(code *)((long)puVar75 + (ulong)(iVar57 + iVar59 + 1)) << 0x10
                        | (ulong)(byte)*(code *)((long)puVar75 + (ulong)uVar14) << 0x18);
      UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)*(uint *)((long)ppuVar19 + -0x2c);
      if (*(uint *)((long)ppuVar19 + -0x2c) - uVar14 < (uint)puVar78) {
        ppuVar51 = (undefined **)0xffff5bdf;
        ppuVar20 = (undefined **)ppuVar19[-10];
        ppuVar52 = ppuVar19;
        UNRECOVERED_JUMPTABLE_41 = UNRECOVERED_JUMPTABLE_45;
LAB_100027906:
        puVar78 = (uint *)(ulong)(uint)((int)ppuVar61 - (int)ppuVar20);
        ppuVar42 = (undefined **)puVar23;
        UNRECOVERED_JUMPTABLE_37 = UNRECOVERED_JUMPTABLE_46;
        do {
          uVar14 = (uint)UNRECOVERED_JUMPTABLE_47;
          ppuVar20 = ppuVar61;
          if ((int)ppuVar51 != 0) {
LAB_10002791f:
            ppuVar76 = (undefined **)ppuVar52[-9];
            unaff_R12 = (uint *)ppuVar52[-8];
            puVar75 = (uint *)UNRECOVERED_JUMPTABLE_41;
            if ((int)ppuVar51 != 0) goto LAB_100027a19;
            goto LAB_10002793d;
          }
code_r0x000100027913:
          uVar68 = (int)ppuVar76 + (int)UNRECOVERED_JUMPTABLE_37;
          ppuVar76 = (undefined **)(ulong)uVar68;
          uVar14 = (uint)UNRECOVERED_JUMPTABLE_47;
          if (uVar14 <= uVar68) goto LAB_10002791f;
          UNRECOVERED_JUMPTABLE_46 =
               (undefined **)
               ((ulong)(byte)*(code *)((long)puVar75 + (ulong)(uVar68 + 3)) |
               (ulong)(byte)*(code *)((long)puVar75 + (ulong)(uVar68 + 2)) << 8 |
               (ulong)(byte)((code *)((long)puVar75 + 1))[(long)ppuVar76] << 0x10 |
               (ulong)(byte)*(code *)((long)puVar75 + (long)ppuVar76) << 0x18);
          if (uVar14 - uVar68 < (uint)UNRECOVERED_JUMPTABLE_46) {
            ppuVar51 = (undefined **)0xffff5bdf;
            ppuVar76 = (undefined **)ppuVar52[-9];
            unaff_R12 = (uint *)ppuVar52[-8];
            goto LAB_100027a19;
          }
          UNRECOVERED_JUMPTABLE_45 = (undefined **)((long)ppuVar76 + (long)puVar75);
          ppuVar61 = (undefined **)((long)UNRECOVERED_JUMPTABLE_41 + ((ulong)ppuVar20 & 0xffffffff))
          ;
          UNRECOVERED_JUMPTABLE_37 = UNRECOVERED_JUMPTABLE_46;
          if (((uint)(byte)*(code *)((long)puVar75 + (ulong)(uVar68 + 7)) |
              (uint)(byte)*(code *)((long)puVar75 + (ulong)(uVar68 + 6)) << 8 |
              (uint)(byte)*(code *)((long)puVar75 + (ulong)(uVar68 + 4)) << 0x18 |
              (uint)(byte)*(code *)((long)puVar75 + (ulong)(uVar68 + 5)) << 0x10) == 0x73636869)
          goto code_r0x0001000277a6;
code_r0x0001000278df:
          *(undefined8 *)((long)ppuVar42 + -8) = 0x1000278e4;
          _memcpy(ppuVar61,UNRECOVERED_JUMPTABLE_45,(size_t)UNRECOVERED_JUMPTABLE_46);
          UNRECOVERED_JUMPTABLE_41 = (undefined **)ppuVar52[-7];
          UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)*(uint *)((long)ppuVar52 + -0x2c);
          ppuVar61 = (undefined **)(ulong)(uint)((int)ppuVar20 + (int)UNRECOVERED_JUMPTABLE_37);
          ppuVar51 = (undefined **)0x0;
        } while( true );
      }
      uVar14 = (uint)(byte)*(code *)((long)puVar75 + (ulong)(uVar14 + 7)) |
               (uint)(byte)*(code *)((long)puVar75 + (ulong)(uVar14 + 6)) << 8 |
               (uint)(byte)*(code *)((long)puVar75 + (ulong)(uVar14 + 4)) << 0x18 |
               (uint)(byte)*(code *)((long)puVar75 + (ulong)(uVar14 + 5)) << 0x10;
      UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
      bVar81 = uVar14 == 0x69766976;
      ppuVar56 = UNRECOVERED_JUMPTABLE_46;
    } while( true );
  case (undefined **)0x100027939:
    *(code *)((long)ppuVar51 + 0x31) = (code)((char)*(code *)((long)ppuVar51 + 0x31) + bVar11);
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) + -1;
    ppuVar69 = ppuVar56;
    goto code_r0x000100027943;
  case (undefined **)0x100027976:
    goto code_r0x000100027976;
  case (undefined **)0x100027a53:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) + (char)cVar26);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100027b03:
    goto code_r0x000100027b03;
  case (undefined **)0x100027bf7:
                    /* WARNING: Could not recover jumptable at 0x000100027c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100027bc6 +
                         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                       (long)UNRECOVERED_JUMPTABLE_46 * 4)))
                         (ppuVar61,uVar28,
                          &UNK_100027bc6 +
                          (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                        (long)UNRECOVERED_JUMPTABLE_46 * 4));
    return ppuVar19;
  case (undefined **)0x100027c3a:
    *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x37) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x37) + -0xca815c1;
    *(uint *)((long)ppuVar51 + -0x3c) = uVar28 ^ uVar13;
    ppuVar51[-9] = (undefined *)(ppuVar51 + -0x90);
    ppuVar51[-7] = (undefined *)ppuVar76;
    UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x92];
    ppuVar42[-1] = &UNK_100027c5f;
    (*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Could not recover jumptable at 0x000100027ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100027c18 +
                         *(int *)(&DAT_1006da160 +
                                 (long)(int)((0xb2ba7bf <
                                             (int)(*(uint *)(ppuVar51 + -8) + 0xf52994b6)) + uVar64)
                                 * 4)))();
    return ppuVar19;
  case (undefined **)0x100027cf7:
    sVar12 = (short)(uVar13 << 9);
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)
         (ulong)CONCAT22((short)((uVar13 << 9) >> 0x10),
                         CONCAT11((char)(sVar12 % (short)(char)bVar62),
                                  (char)(sVar12 / (short)(char)bVar62)));
    ppuVar73 = ppuVar56;
    goto code_r0x000100027ce0;
  case (undefined **)0x100027e0e:
    uVar22 = (ulong)uVar13 | 0x46;
    goto code_r0x000100027dfc;
  case (undefined **)0x10002802e:
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
code_r0x00010002802d:
                    /* WARNING: Could not recover jumptable at 0x000100028042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100028001 +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                 (long)(int)UNRECOVERED_JUMPTABLE_37 * 4)))
                         (UNRECOVERED_JUMPTABLE_37,&UNK_100028001,
                          &UNK_100028001 +
                          *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                  (long)(int)UNRECOVERED_JUMPTABLE_37 * 4),
                          (int)UNRECOVERED_JUMPTABLE_37 + 0xd);
    return ppuVar19;
  case (undefined **)0x10002830f:
                    /* WARNING: Could not recover jumptable at 0x000100028314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_46)();
    return ppuVar19;
  case (undefined **)0x1000284b1:
    *(code *)((long)ppuVar51 + 0xa446d83) =
         (code)((char)*(code *)((long)ppuVar51 + 0xa446d83) + (char)cVar26);
    uVar28 = (uVar14 + 0x1c7e2416 ^ 0xc5d51372) * 0x34a356b1;
    *(uint *)(ppuVar51 + -9) = uVar13 ^ uVar28;
    goto code_r0x0001000284df;
  case (undefined **)0x1000284d9:
    plVar46 = (long *)(ppuVar42 + -1);
    ppuVar19 = ppuVar42 + -1;
    ppuVar42[-1] = (undefined *)ppuVar51;
    cVar9 = '\x17';
    do {
      ppuVar51 = ppuVar51 + -1;
      plVar46 = plVar46 + -1;
      *plVar46 = (long)*ppuVar51;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    ppuVar42[-0x19] = (undefined *)(ppuVar42 + -1);
    ppuVar42 = (undefined **)((long)ppuVar42 + -0x4651);
code_r0x0001000284df:
    *(uint *)((long)ppuVar19 + -0x44) = 0x66c5a1b7 - uVar28;
    *(undefined **)((long)ppuVar42 + -8) = &UNK_1000284f1;
    FUN_1000bfcb0(ppuVar76);
    uVar14 = (uint)(-1 < (char)*(code *)(ppuVar19 + -0x1a));
    lVar29 = (long)*(int *)((long)unaff_R12 + (long)(int)(uVar14 + uVar77) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010002852a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10002846d + lVar29))
                         (&UNK_10002846d + lVar29,lVar29,extraout_RDX_02,
                          (((byte)*(code *)(ppuVar19 + -0x1a) >> 7) + uVar14) * -0x36c0dce5 + uVar77
                         );
    return ppuVar19;
  case (undefined **)0x1000285b9:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100028a02:
    in(0x83);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100028a8c:
    uVar22 = (ulong)((code *)((long)ppuVar51 +
                             ((ulong)unaff_R12 & (ulong)UNRECOVERED_JUMPTABLE_47) * -2 + -0x48) +
                    (long)UNRECOVERED_JUMPTABLE_47) ^ 0x5a82ebab24a5be55;
    *(uint *)(ppuVar51 + -8) = (int)uVar22 * 0x295bb3 + uVar64 + 0x926a302c;
    ppuVar51[-7] = (undefined *)ppuVar76;
    ppuVar51[-9] = (code *)((long)UNRECOVERED_JUMPTABLE_41 +
                           uVar22 * -0x295bb3 + -0x40320060a2400888);
    ppuVar42[-1] = &UNK_100028ae3;
    FUN_1000a30e0(unaff_R12);
    UNRECOVERED_JUMPTABLE_46 = (undefined **)0x0;
    UNRECOVERED_JUMPTABLE_45 =
         (undefined **)
         (long)*(int *)((long)ppuVar56 +
                       (long)(int)((*(uint *)((long)ppuVar51 + -0x3c) == 0x3a3402de) + uVar64) * 4);
    goto code_r0x000100028b04;
  case (undefined **)0x100028afe:
code_r0x000100028b04:
                    /* WARNING: Could not recover jumptable at 0x000100028b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_45 + 0x100028a4e))
                         ((code *)((long)UNRECOVERED_JUMPTABLE_45 + 0x100028a4e),
                          UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46);
    return ppuVar19;
  case (undefined **)0x100028b39:
    uVar22 = ((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff) - 0x6dfb6ada;
    uVar60 = 0x38;
    if (0x38 < uVar22) {
      uVar60 = uVar22;
    }
    bVar79 = (uVar60 - ((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff)) + 0x6dfb6adb < 8;
    bVar80 = !bVar79;
    uVar14 = (uint)bVar79;
    iVar57 = uVar54 + uVar14;
                    /* WARNING: Could not recover jumptable at 0x000100028b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100028b39 + *(int *)((long)unaff_R12 + (long)iVar57 * 4)))
                         (iVar57,&UNK_100028b39 + *(int *)((long)unaff_R12 + (long)iVar57 * 4),
                          UNRECOVERED_JUMPTABLE_46,
                          (uint)bVar80 + (uint)bVar80 * -8 + uVar14 * 0x57eab9a8 + uVar54);
    return ppuVar19;
  case (undefined **)0x100028ba5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100028be3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100028cc6:
    goto code_r0x000100028c68;
  case (undefined **)0x100028eca:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = UNRECOVERED_JUMPTABLE_41;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = UNRECOVERED_JUMPTABLE_47;
    ppuVar51[-0x76] =
         (undefined *)((long)((long)ppuVar61 + (SUB168(auVar4 * auVar5,8) >> 3) * -9) * 0x10);
    UNRECOVERED_JUMPTABLE_46 = (undefined **)0x0;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0x0;
    ppuVar51[-0x69] = (undefined *)(ulong)_UNK_100023fd0;
    bVar81 = _UNK_100023fd0 == 0xf0e3c17;
code_r0x000100028efa:
                    /* WARNING: Could not recover jumptable at 0x000100028f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)*(int *)(&DAT_1006d8bc0 +
                                        (ulong)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_47
                                                                    >> 8),bVar81) + 6) * 4) +
                         0x100028ee7))
                         ((code *)((long)*(int *)(&DAT_1006d8bc0 +
                                                 (ulong)((int)CONCAT71((int7)((ulong)
                                                  UNRECOVERED_JUMPTABLE_47 >> 8),bVar81) + 6) * 4) +
                                  0x100028ee7),DAT_100023fcc,UNRECOVERED_JUMPTABLE_46);
    return ppuVar19;
  case (undefined **)0x100028efa:
    goto code_r0x000100028efa;
  case (undefined **)0x1000291fc:
    iVar59 = uVar54 + 1 + (uint)bVar27 * -2;
    cVar63 = (code)in(uVar33);
    *(code *)ppuVar61 = cVar63;
    *(undefined1 *)UNRECOVERED_JUMPTABLE_47 = 0;
    uVar14 = (uint)(uVar13 == 0x19ab17c0);
    iVar57 = CONCAT31(uVar8,uVar13 != 0x19ab17c0) * -0x1c + iVar59 + uVar14 * -2;
    iVar59 = uVar14 + iVar59;
                    /* WARNING: Could not recover jumptable at 0x000100029237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000291ed + (int)*(uint *)((long)ppuVar76 + (long)iVar59 * 4)))
                         (iVar57,iVar59,iVar57,
                          &UNK_1000291ed + (int)*(uint *)((long)ppuVar76 + (long)iVar59 * 4));
    return ppuVar19;
  case (undefined **)0x100029246:
    cVar63 = *(code *)ppuVar61;
    pbVar1 = (byte *)(((ulong)puVar75 & 0xffffffff) - 0x3f);
    *pbVar1 = *pbVar1 >> 3 | *pbVar1 << 5;
    pbVar1 = (byte *)(((ulong)uVar13 - 0x4b) +
                     (ulong)CONCAT31(uVar8,(byte)cVar26 | (byte)cVar63) * 4);
    *pbVar1 = *pbVar1 & ((byte)cVar26 | (byte)cVar63);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100029295:
    *(code **)((long)ppuVar66 + -0x7f) =
         (code *)((long)UNRECOVERED_JUMPTABLE_41 + *(long *)((long)ppuVar66 + -0x7f));
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x1000294c8:
    *(byte *)ppuVar61 = (byte)*(code *)ppuVar61 >> 2 | (char)*(code *)ppuVar61 << 6;
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar51 + -0x3ffe76e4);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE >> 9 | *(uint *)UNRECOVERED_JUMPTABLE << 0x17;
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x1000296f4:
    auVar86 = auVar86 | in_XMM3;
    auVar84._4_4_ = auVar86._4_4_ * 2;
    auVar84._0_4_ = auVar86._0_4_ * 2;
    auVar84._8_4_ = auVar86._8_4_ * 2;
    auVar84._12_4_ = auVar86._12_4_ * 2;
    auVar84 = auVar84 & in_XMM12;
    goto code_r0x000100029709;
  case (undefined **)0x100029705:
code_r0x000100029709:
    *(int *)(ppuVar69 + 6) = (auVar86._0_4_ - auVar84._0_4_) + in_XMM10_Da;
    *(int *)((long)ppuVar69 + 0x34) = (auVar86._4_4_ - auVar84._4_4_) + in_XMM10_Db;
    *(int *)(ppuVar69 + 7) = (auVar86._8_4_ - auVar84._8_4_) + in_XMM10_Dc;
    *(int *)((long)ppuVar69 + 0x3c) = (auVar86._12_4_ - auVar84._12_4_) + in_XMM10_Dd;
                    /* WARNING: Could not recover jumptable at 0x000100029749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000294f4 + *(int *)((long)ppuVar56 + (long)(int)uVar13 * 4)))
                         (*(uint *)(ppuVar51 + -0x67),*(uint *)(ppuVar51 + -0x66),
                          *(uint *)(ppuVar51 + -0x66),*(uint *)((long)ppuVar51 + -0x32c),0x595dd279)
    ;
    return ppuVar19;
  case (undefined **)0x1000298d6:
    *(undefined1 *)(((ulong)puVar75 & 0xffffffff) + 0xf) = 0x92;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100029b5f:
    ppuVar42[-1] = *UNRECOVERED_JUMPTABLE_47;
    *(char *)UNRECOVERED_JUMPTABLE_47 = *(char *)UNRECOVERED_JUMPTABLE_47 << ((byte)cVar26 & 0x1f);
    uVar15 = CONCAT71(uVar24,ppuVar61 >= (undefined **)0xe);
    iVar57 = CONCAT31(uVar8,ppuVar61 < (undefined **)0xe);
    iVar59 = iVar57 * 5;
                    /* WARNING: Could not recover jumptable at 0x000100029b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100029acf +
                         (int)*(uint *)((long)ppuVar69 + (long)(int)(iVar57 + uVar13) * 4)))
                         ((int)uVar15 * 0x6fe2d781 + uVar13 + iVar59,iVar59,uVar15,
                          &UNK_100029acf +
                          (int)*(uint *)((long)ppuVar69 + (long)(int)(iVar57 + uVar13) * 4));
    return ppuVar19;
  case (undefined **)0x100029d1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100029ee4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100029fdf:
    *(char *)(UNRECOVERED_JUMPTABLE_41 + 0x42902d4) =
         (char)*(code *)(UNRECOVERED_JUMPTABLE_41 + 0x42902d4) + (char)cVar31;
    plVar46 = (long *)(ppuVar42 + -1);
    ppuVar42[-1] = (undefined *)ppuVar51;
    cVar9 = '\x0f';
    do {
      ppuVar51 = ppuVar51 + -1;
      plVar46 = plVar46 + -1;
      *plVar46 = (long)*ppuVar51;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    ppuVar42[-0x11] = (undefined *)(ppuVar42 + -1);
    uVar22 = (long)ppuVar42 + ((ulong)ppuVar56 & 0x5ec86280888d5caa) * -2 + 0x5ec86280888d5c5a ^
             0x5f1124a1fd18628;
    ppuVar42[-10] =
         (code *)((long)UNRECOVERED_JUMPTABLE_41 + uVar22 * -0x295bb3 + -0x501840bb516880);
    ppuVar42[-8] = (undefined *)(ppuVar42 + -0x1b);
    *(uint *)(ppuVar42 + -9) = (int)uVar22 * 0x295bb3 + uVar77 + -0x6d95d01d;
    ppuVar42[-0x3b] = &UNK_10002a04f;
    FUN_1000a30e0(ppuVar56);
                    /* WARNING: Could not recover jumptable at 0x00010002a06d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100029fb9 +
                         (int)(&switchD_10004ec34::switchdataD_1006d6e20)[(int)uVar77]))();
    return ppuVar19;
  case (undefined **)0x10002a1f1:
    if (bVar81) {
      ppuVar61 = (undefined **)(ulong)uVar13;
    }
    uVar14 = (uint)ppuVar61 & 0xff;
                    /* WARNING: Could not recover jumptable at 0x00010002a222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10002a1b9 +
                         *(int *)((long)ppuVar56 + (long)(int)(uVar14 + 0x23fcc) * 4)))
                         (ppuVar61,DAT_100023fcc,
                          (uint)(byte)((byte)ppuVar61 ^ 1) * 0x1695b97d + 0x23fcc + uVar14 * 6,
                          &UNK_10002a1b9 +
                          *(int *)((long)ppuVar56 + (long)(int)(uVar14 + 0x23fcc) * 4));
    return ppuVar19;
  case (undefined **)0x10002a30c:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    *(char *)(uVar22 + 0x100023f59) = *(char *)(uVar22 + 0x100023f59) + bVar11;
    *(byte *)((long)UNRECOVERED_JUMPTABLE_44 + 0x100023f66) = ((char)cVar26 + 'f') * (bVar11 | 0x2a)
    ;
    bVar80 = UNRECOVERED_JUMPTABLE_46 == (undefined **)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010002a341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1006d2600 +
                         (int)*(uint *)((long)ppuVar69 + (long)(int)(bVar80 + uVar54) * 4)))
                         (ppuVar61,&UNK_100023fca,&UNK_100023fce + uVar22,
                          (uint)bVar80 + (uint)bVar80 * 0xc + uVar54);
    return ppuVar19;
  case (undefined **)0x10002a629:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002aeec:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10002af53:
                    /* WARNING: Could not recover jumptable at 0x00010002af81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10002af0d +
                         *(int *)(&DAT_1006d7a20 + (long)(int)(uVar13 + uVar54) * 4)))
                         ((uint)(bVar11 ^ 1) * 0x20 + uVar54 + uVar13 * 6,
                          &UNK_10002af0d +
                          *(int *)(&DAT_1006d7a20 + (long)(int)(uVar13 + uVar54) * 4));
    return ppuVar19;
  }
  UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0xc];
  ppuVar42[-1] = &UNK_100024b88;
  puVar17 = (undefined *)
            (*UNRECOVERED_JUMPTABLE)
                      ((int)ppuVar61 + -0x7dbf7feb,DAT_100023fcc,UNRECOVERED_JUMPTABLE_46,
                       UNRECOVERED_JUMPTABLE_47);
  ppuVar51[-0x3c] = puVar17;
  UNRECOVERED_JUMPTABLE_45 =
       (undefined **)
       (&UNK_100024b5d +
       (int)(&switchD_10001f9d9::switchdataD_1006d2190)
            [(int)(uVar72 + (puVar17 == (undefined *)0x0))]);
  UNRECOVERED_JUMPTABLE_46 = (undefined **)0x0;
code_r0x000100024bb7:
  ppuVar61 = (undefined **)ppuVar51[-9];
code_r0x000100024bbb:
                    /* WARNING: Could not recover jumptable at 0x000100024bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)UNRECOVERED_JUMPTABLE_45)
                       (ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46);
  return ppuVar19;
code_r0x00010001ba9f:
  UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uVar13 ^ 0xffffff8e);
  goto code_r0x00010001ba8f;
code_r0x00010001ba39:
  uVar68 = (uint)ppuVar76 & 0xe90ecd9a;
  ppuVar76 = (undefined **)(ulong)uVar68;
  uVar68 = uVar68 - 0x2e;
  ppuVar71 = (undefined **)(ulong)uVar68;
  ppuVar69 = (undefined **)((long)UNRECOVERED_JUMPTABLE_44 + 0xc);
  UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 + 8);
  UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 + 0xc);
  uVar28 = *(uint *)((long)UNRECOVERED_JUMPTABLE_44 + 0xc) + 0xc086690c;
  UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)uVar68;
code_r0x00010001ba58:
  uVar68 = ((uint)UNRECOVERED_JUMPTABLE_45 ^ 0xdfb4eb94) + (int)UNRECOVERED_JUMPTABLE_46;
  UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)uVar68;
  uVar54 = (uint)ppuVar76 ^ 0x2d878768;
  ppuVar65 = (undefined **)(ulong)(uVar28 < uVar54);
  UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)CONCAT31((int3)(uVar54 >> 8),uVar68 < 0x2d8787f0);
code_r0x00010001ba7c:
  UNRECOVERED_JUMPTABLE_37 =
       (undefined **)
       CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_37 >> 8),
                (byte)UNRECOVERED_JUMPTABLE_37 ^ (byte)ppuVar65);
  ppuVar66 = (undefined **)(ulong)((uint)UNRECOVERED_JUMPTABLE_45 < uVar28);
switchD_10001997c_caseD_1ba88:
  bVar83 = (char)UNRECOVERED_JUMPTABLE_37 == '\0';
  goto code_r0x00010001ba87;
code_r0x00010002282b:
  UNRECOVERED_JUMPTABLE_41 = (undefined **)CONCAT71(uVar24,(byte)cVar26 ^ bVar39);
  goto code_r0x00010002281c;
code_r0x000100025d10:
  UNRECOVERED_JUMPTABLE_37 = ppuVar56;
  puVar70 = UNRECOVERED_JUMPTABLE_44;
  bVar79 = (undefined **)0xfffffffefffda359 < ppuVar61;
  bVar82 = SCARRY8((long)ppuVar61,0x100025ca6);
  ppuVar65 = (undefined **)((long)ppuVar61 + 0x100025ca6);
  bVar83 = (long)ppuVar65 < 0;
  bVar80 = ppuVar65 == (undefined **)0x0;
  bVar81 = (POPCOUNT((ulong)ppuVar65 & 0xff) & 1U) == 0;
switchD_100025d1a_switchD:
  auVar87._8_8_ = UNRECOVERED_JUMPTABLE_46;
  auVar87._0_8_ = (ulong)UNRECOVERED_JUMPTABLE_41;
  uVar14 = (uint)UNRECOVERED_JUMPTABLE_41;
  uVar24 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8);
  cVar63 = SUB81(UNRECOVERED_JUMPTABLE_41,0);
  uVar37 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_47 >> 8);
  bVar11 = (byte)UNRECOVERED_JUMPTABLE_47;
  uVar40 = (uint)ppuVar76;
  cVar9 = (char)puVar75;
  cVar26 = SUB81((ulong)puVar75 >> 8,0);
  uVar49 = (uint)puVar70;
  iVar57 = (int)ppuVar66;
  uVar38 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_46 >> 8);
  uVar32 = SUB82(UNRECOVERED_JUMPTABLE_46,0);
  iVar59 = (int)ppuVar69;
  uVar53 = (uint)UNRECOVERED_JUMPTABLE_37;
  uVar13 = (uint)ppuVar52;
  uVar28 = (uint)UNRECOVERED_JUMPTABLE_46;
  uVar64 = (uint)puVar75;
  uVar34 = (uint)ppuVar61;
  uVar68 = (uint)UNRECOVERED_JUMPTABLE_47;
  uVar54 = (uint)UNRECOVERED_JUMPTABLE_45;
  uVar58 = (uint)puVar78;
  unaff_RBX = (undefined **)puVar75;
  puVar23 = (undefined1 *)ppuVar42;
  ppuVar19 = ppuVar52;
  ppuVar51 = ppuVar52;
  UNRECOVERED_JUMPTABLE_44 = puVar70;
  ppuVar73 = UNRECOVERED_JUMPTABLE_37;
  ppuVar56 = UNRECOVERED_JUMPTABLE_37;
  switch(ppuVar65) {
  case (undefined **)0xb8c28348:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001bf55:
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return ppuVar19;
  case (undefined **)0x10001c3a4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001c470:
                    /* WARNING: Could not recover jumptable at 0x00010001c486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001c441 +
                         *(int *)((long)unaff_R12 + (ulong)(uVar14 & 0x6b4afb) * 4)))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_37,
                          &DAT_10001c441 +
                          *(int *)((long)unaff_R12 + (ulong)(uVar14 & 0x6b4afb) * 4));
    return ppuVar19;
  case (undefined **)0x10001c4af:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) + -1;
  case (undefined **)0x10001c4b2:
    UNRECOVERED_JUMPTABLE = (code *)((long)puVar75 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + -99);
    *(uint *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + uVar68;
    *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) + 1;
    if (SCARRY4(uVar68,*(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75)) ==
        (int)(uVar68 + *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75)) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x00010001c4c7:
    puVar17 = *ppuVar65;
    iVar57 = (int)UNRECOVERED_JUMPTABLE_41;
    puVar17[iVar57 + 0x8d9ec879] = 0;
    puVar17[((int)unaff_RBX + 0xbdU ^ 0x8d9ec8b9) + iVar57] = 0;
    puVar17[iVar57 + 0x8d9ec87b] = 0;
    puVar17[iVar57 + 0x8d9ec87c] = 1;
    ppuVar52[-0x28] = (undefined *)puVar70;
    *puVar70 = *puVar70 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010001c538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                                     [(int)unaff_RBX + 0xbe] + 0x10001c515))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,(ulong)(iVar57 + 0x8d9ec87b),
                          (code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                                              [(int)unaff_RBX + 0xbe] + 0x10001c515),ppuVar65,
                          0x3166a97d);
    return ppuVar19;
  case (undefined **)0x10001cafd:
    iVar57 = *(int *)((long)unaff_R12 + (ulong)(uVar14 + bVar79) * 4);
    ppuVar52[-0x22] = ppuVar61[uVar40 ^ 9] + -1;
    ppuVar52[-0xc] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar52[-0x1a] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar52[-0x1b] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar52[-0x19] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar52[-0x18] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar52[-0x16] = (undefined *)UNRECOVERED_JUMPTABLE_45;
                    /* WARNING: Could not recover jumptable at 0x00010001cb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(switchD_1000183ca::caseD_0 + iVar57))();
    return ppuVar19;
  case (undefined **)0x10001cb5c:
    *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) =
         *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) + (char)cVar63 + bVar79;
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar52 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x3c);
    *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE | (byte)cVar63);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001cc02:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77);
    *UNRECOVERED_JUMPTABLE =
         (code)((byte)*UNRECOVERED_JUMPTABLE >> 5 | (char)*UNRECOVERED_JUMPTABLE << 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001cf2b:
    puVar17 = ppuVar52[-0x1a];
    puVar21 = ppuVar52[-0x23];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001cf42;
    puVar17 = (undefined *)(*(code *)ppuVar69)(puVar17,puVar21);
    ppuVar52[-0xb] = puVar17;
    UNRECOVERED_JUMPTABLE = (code *)ppuVar52[-0x15];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001cf53;
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)(puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010001cf83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001cf0b +
                         *(int *)(&DAT_1006d1e30 +
                                 (long)(int)((uint)(ppuVar19 == UNRECOVERED_JUMPTABLE_45) +
                                            *(uint *)(ppuVar52 + -0x1f)) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001cf95:
    UNRECOVERED_JUMPTABLE = (code *)swi(0x2c);
    (*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001cfd9:
    halt_baddata();
  case (undefined **)0x10001d08d:
    *(code *)((long)puVar75 + 0x43) = (code)((char)*(code *)((long)puVar75 + 0x43) + cVar9 + bVar79)
    ;
    *(uint *)ppuVar52[-0xb] = iVar57 + (uVar58 ^ 0xce9956ca) + uVar68;
                    /* WARNING: Could not recover jumptable at 0x00010001d0db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001d07e +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                              [(int)((UNRECOVERED_JUMPTABLE_45 == ppuVar76) + uVar49)]))();
    return ppuVar19;
  case (undefined **)0x10001d144:
    goto switchD_100025d1a_caseD_1d144;
  case (undefined **)0x10001d197:
    goto switchD_100025d1a_caseD_1d144;
  case (undefined **)0x10001d38c:
                    /* WARNING: Could not recover jumptable at 0x00010001d38e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_41)();
    return ppuVar19;
  case (undefined **)0x10001d3e0:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_47 & 0xffffffff);
code_r0x00010001d3e3:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10001d83d:
                    /* WARNING: Could not recover jumptable at 0x00010001d85d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&LAB_10001d7f2_1 +
                         *(int *)(&DAT_1006d1e30 + (long)(int)(uVar58 + bVar79) * 4)))
                         (&DAT_1006d1e30,UNRECOVERED_JUMPTABLE_45,&DAT_1006d1e30,
                          &LAB_10001d7f2_1 +
                          *(int *)(&DAT_1006d1e30 + (long)(int)(uVar58 + bVar79) * 4));
    return ppuVar19;
  case (undefined **)0x10001d876:
    UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)*(uint *)ppuVar61;
    goto code_r0x00010001d879;
  case (undefined **)0x10001d8f6:
    UNRECOVERED_JUMPTABLE_37 = ppuVar61;
code_r0x00010001d879:
    UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0xd];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001d87c;
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE_37);
    *(undefined **)((long)puVar78 + (long)unaff_R12) = ppuVar19[-0x29];
    *(int *)ppuVar19[-0x2e] = (int)ppuVar19[-0x19];
    piVar18 = (int *)ppuVar19[-0x24];
    iVar57 = *piVar18;
    lVar29 = *(long *)((long)puVar78 + (long)unaff_R12);
    *(undefined1 *)(lVar29 + (ulong)((int)unaff_RBX + iVar57 + 0x83c46376)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x83c4641a)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x83c4641b)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x83c4641c)) = 1;
    ppuVar19[-0x24] = (undefined *)piVar18;
    *piVar18 = *piVar18 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010001d90d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)*(int *)(&DAT_1006d1e30 + (long)((int)unaff_RBX + -1) * 4) +
                         0x10001d8f1))();
    return ppuVar19;
  case (undefined **)0x10001d94e:
    uVar14 = uVar14 | 0xd3;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar68 + 0x5ac3245d);
    uVar68 = uVar14 + 0x977a500b;
    ppuVar65 = (undefined **)(ulong)((uVar14 - 0x6f | 0x68) ^ 0xfdff7b04);
code_r0x00010001d971:
    ppuVar66 = (undefined **)&DAT_10001d354;
code_r0x00010001d980:
    uVar14 = (int)UNRECOVERED_JUMPTABLE_47 * 2 + 0x8691a69e;
    uVar14 = (uVar14 * 2 & (uint)ppuVar65) + (uVar14 ^ 0xfeffbdff) + 0x987a930b;
    puVar78 = (uint *)(ulong)((uint)UNRECOVERED_JUMPTABLE_46 < uVar14);
    if ((uint)UNRECOVERED_JUMPTABLE_46 < uVar68 != uVar14 < 0x977a510a) {
      puVar78 = (uint *)(ulong)(uVar14 < 0x977a510a);
    }
code_r0x00010001d9d3:
                    /* WARNING: Could not recover jumptable at 0x00010001d9eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)ppuVar66 +
                         (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                    [(int)(((uint)puVar78 & 0xff) + (int)UNRECOVERED_JUMPTABLE_41)])
               )();
    return ppuVar19;
  case (undefined **)0x10001d957:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10001dc52:
    uVar14 = uVar14 | 0xf;
    uVar68 = (uint)(byte)*(code *)((long)ppuVar61 + (ulong)(uVar14 + 0xdeb6c487)) |
             (uint)(byte)*(code *)((long)ppuVar61 + (ulong)(uVar14 + 0xdeb6c485)) << 0x10 |
             iVar57 << ((byte)puVar70 - 0x35 & 0x1f) |
             (uint)(byte)*(code *)((long)ppuVar61 + (ulong)(((uint)ppuVar65 ^ 0xdeb6c4df) + uVar14))
             << 8;
    *(uint *)(ppuVar52 + -0x15) = (uVar68 ^ 0xb7efa97f) + (uVar68 & 0x37efa97f) * 2 + 0x7976fffe;
    *(uint *)ppuVar52[-0xb] = uVar14 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010001dceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001dc44 +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                              [(int)((uint)(UNRECOVERED_JUMPTABLE_45 == ppuVar76) + iVar59)]))();
    return ppuVar19;
  case (undefined **)0x10001de36:
    *(uint *)(ulong)*(uint *)(ppuVar52 + -0x2f) = uVar14;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)ppuVar52[-0x2e];
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)*(uint *)UNRECOVERED_JUMPTABLE_47;
LAB_10001de47:
    uVar14 = (int)ppuVar76 + 0xf2;
    ppuVar76 = (undefined **)(ulong)uVar14;
    UNRECOVERED_JUMPTABLE_41 = *(undefined ***)(ppuVar52[-0x22] + -0x583fea33108f2bd4);
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 +
             (ulong)((uVar14 ^ 0xa205f38e) + (int)UNRECOVERED_JUMPTABLE_46)) = (code)0x0;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_46 + 0xa205f285);
    goto code_r0x00010001de78;
  case (undefined **)0x10001deb8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ded7:
    goto switchD_100025d1a_caseD_1ded7;
  case (undefined **)0x10001df1e:
    goto switchD_100025d1a_caseD_1df1e;
  case (undefined **)0x10001df2c:
    goto LAB_10001df31;
  case (undefined **)0x10001dfc2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001e039:
    ppuVar52[-0x1d] = (undefined *)0x0;
    ppuVar52[-0x1e] = (undefined *)0x6c76618fb7247bc0;
                    /* WARNING: Could not recover jumptable at 0x00010001e093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001e037 +
                         (int)*(uint *)((long)puVar70 +
                                       (long)(int)((ppuVar52[-0x11] ==
                                                   (undefined *)0x583fea33108f2bd4) + uVar40) * 4)))
                         (ppuVar61,0xbc25112e,ppuVar52[-0x11],
                          &DAT_10001e037 +
                          (int)*(uint *)((long)puVar70 +
                                        (long)(int)((ppuVar52[-0x11] ==
                                                    (undefined *)0x583fea33108f2bd4) + uVar40) * 4))
    ;
    return ppuVar19;
  case (undefined **)0x10001e2fd:
    goto code_r0x00010001e2d2;
  case (undefined **)0x10001e819:
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         (ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_46 + (long)UNRECOVERED_JUMPTABLE_47 * 4);
code_r0x00010001e81f:
                    /* WARNING: Could not recover jumptable at 0x00010001e82f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x10001e7a9U))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,
                          (code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x10001e7a9U));
    return ppuVar19;
  case (undefined **)0x10001e821:
    goto code_r0x00010001e81f;
  case (undefined **)0x10001e846:
    if (!bVar82) {
      *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x2581093f) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x2581093f) + 1;
      UNRECOVERED_JUMPTABLE_47 = (undefined **)0x3cb60f45;
      UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_41 | 0x44);
      *(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x3cb60f45) = cVar26;
    }
    uVar22 = (ulong)((int)UNRECOVERED_JUMPTABLE_47 + 0xb9da7ef6);
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + uVar22) = *(code *)((long)unaff_R12 + uVar22);
    puVar70 = (uint *)(ulong)((uVar49 + iVar57) - 0x23);
code_r0x00010001e85e:
                    /* WARNING: Could not recover jumptable at 0x00010001e873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_37 +
                         (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_46 +
                                             (ulong)((uint)((int)puVar70 == iVar59) + iVar57) * 4)))
                         ();
    return ppuVar19;
  case (undefined **)0x10001e8b3:
    if (bVar82 == bVar83) goto code_r0x00010001e85e;
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_46 + 0x5d8b4c01);
    *(ushort *)UNRECOVERED_JUMPTABLE =
         *(ushort *)UNRECOVERED_JUMPTABLE ^ (ushort)UNRECOVERED_JUMPTABLE_45;
    iVar57 = -0x7c3d49f1;
    if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x1 && *(ushort *)UNRECOVERED_JUMPTABLE != 0) {
      iVar57 = uVar13 + 0x83c2b60f;
    }
    uVar22 = (ulong)(int)(iVar57 + uVar53);
    UNRECOVERED_JUMPTABLE_37 = ppuVar61;
    goto code_r0x00010001e8c8;
  case (undefined **)0x10001edcc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001edf6:
code_r0x00010001edf5:
    lVar29 = (long)(int)*(uint *)((long)unaff_R12 +
                                 (long)(int)(((uint)ppuVar65 & 0xff) + (int)UNRECOVERED_JUMPTABLE_46
                                            ) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001ee0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001ed7d + lVar29))
                         (ppuVar61,&DAT_10001ed7d + lVar29,lVar29,UNRECOVERED_JUMPTABLE_47);
    return ppuVar19;
  case (undefined **)0x10001ee0d:
    out(0x67,cVar63);
    ppuVar19 = (undefined **)FUN_100024c30();
    return ppuVar19;
  case (undefined **)0x10001ef46:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) + -1
    ;
    puVar50 = (undefined8 *)((long)ppuVar42 + -8);
    *(undefined ***)((long)ppuVar42 + -8) = ppuVar52;
    cVar9 = '\x1d';
    do {
      ppuVar52 = ppuVar52 + -1;
      puVar50 = puVar50 + -1;
      *puVar50 = *ppuVar52;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    *(undefined1 **)((long)ppuVar42 + -0xf8) = (undefined1 *)((long)ppuVar42 + -8);
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar61 + (ulong)bVar27 * -2 + 1);
    *UNRECOVERED_JUMPTABLE = *(code *)UNRECOVERED_JUMPTABLE_45;
    if ((long)UNRECOVERED_JUMPTABLE_47 + -1 == 0) {
      *(undefined8 *)((long)ppuVar42 + -0x68) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001ef62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)UNRECOVERED_JUMPTABLE_41)
                         (UNRECOVERED_JUMPTABLE + (ulong)bVar27 * -2 + 1,
                          (code *)((long)UNRECOVERED_JUMPTABLE_45 + (ulong)bVar27 * -2 + 1),
                          *(undefined8 *)((long)ppuVar42 + -0x80),
                          (long)UNRECOVERED_JUMPTABLE_47 + -1,ppuVar65,0x3165f9b2);
    return ppuVar19;
  case (undefined **)0x10001f074:
    *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar63;
    *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar63;
code_r0x00010001f078:
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001f080;
    puVar17 = (undefined *)
              (*(code *)UNRECOVERED_JUMPTABLE_37)
                        (0x1000,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                         UNRECOVERED_JUMPTABLE_47);
    *(undefined **)puVar75 = puVar17;
                    /* WARNING: Could not recover jumptable at 0x00010001f0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(switchD_100024103::caseD_1f059 +
                 (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                      [(int)((int)puVar78 + (uint)(puVar17 == (undefined *)0x0))]))();
    return ppuVar19;
  case (undefined **)0x10001f153:
    UNRECOVERED_JUMPTABLE_44 = (uint *)UNRECOVERED_JUMPTABLE_37;
    if (!bVar79 && !bVar80) {
      ppuVar61 = (undefined **)ppuVar52[-0xb];
code_r0x00010001f159:
      puVar75 = (uint *)ppuVar76;
      ppuVar52[-0x1e] = (undefined *)UNRECOVERED_JUMPTABLE_41;
      puVar78 = &switchD_10001f9d9::switchdataD_1006d2190;
      goto LAB_10001df31;
    }
LAB_10001f1c1:
    iVar57 = (int)UNRECOVERED_JUMPTABLE_41;
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)(iVar57 + 0x83c46419)) = 0;
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)(iVar57 + 0x83c4641a)) = 0;
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)(iVar57 + 0x83c4641b)) = 0;
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)(iVar57 + (int)puVar78 + 0x83c4641a)) =
         1;
    ppuVar52[-0x22] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    *(uint *)UNRECOVERED_JUMPTABLE_45 = *(uint *)UNRECOVERED_JUMPTABLE_45 + 4;
    uVar14 = (int)puVar78 + 0xc2;
    iVar57 = 1;
    goto LAB_10001f207;
  case (undefined **)0x10001f31d:
    ppuVar52 = (undefined **)0x3166a97d;
  case (undefined **)0x10001f2eb:
    uVar68 = uVar68 + *(int *)((long)ppuVar52 + 0x5f2848e);
    uVar14 = uVar14 + 0x804c6a2;
    pcVar16 = (char *)((ulong)uVar68 * 5 + -0xf);
    DAT_f2858e8d000804c6 = cVar63;
    *pcVar16 = *pcVar16 + (char)uVar14;
    *(undefined1 *)((ulong)uVar14 + (ulong)((uVar68 ^ 0xa205f26a) + uVar54)) = 0;
    *(undefined1 *)((ulong)uVar14 + (ulong)(uVar54 + 0xa205f287)) = 1;
    *(uint *)UNRECOVERED_JUMPTABLE_46 = *(uint *)UNRECOVERED_JUMPTABLE_46 + 4;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uVar40 + 1);
code_r0x00010001f33e:
                    /* WARNING: Could not recover jumptable at 0x00010001f34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)puVar70 +
                                              (long)(int)UNRECOVERED_JUMPTABLE_41 * 4) + 0x10001f327
                         ))();
    return ppuVar19;
  case (undefined **)0x10001f32e:
    if (!bVar81) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x0) {
      *(uint *)ppuVar61 = *(uint *)UNRECOVERED_JUMPTABLE_45;
      *in_GS_OFFSET = *in_GS_OFFSET ^ uVar54 + 4 + (uint)bVar27 * -8;
      *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) =
           *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined ***)((long)ppuVar42 + -8) = UNRECOVERED_JUMPTABLE_45;
    *(undefined8 *)((code *)((long)ppuVar61 + -0x1f7c3d4a) + (long)UNRECOVERED_JUMPTABLE_47) =
         *(undefined8 *)((long)ppuVar42 + -8);
    *(uint *)((long)(UNRECOVERED_JUMPTABLE_47 + -4) + (long)UNRECOVERED_JUMPTABLE_41) =
         *(int *)((long)(UNRECOVERED_JUMPTABLE_47 + -4) + (long)UNRECOVERED_JUMPTABLE_41) + uVar14;
    goto code_r0x00010001f33e;
  case (undefined **)0x10001f426:
    UNRECOVERED_JUMPTABLE =
         (code *)((long)in_GS_OFFSET +
                 (long)((long)puVar75 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x55));
    *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE ^ uVar68;
    puVar17 = ppuVar52[-0x44];
    uVar15 = *(undefined8 *)(puVar17 + -0x6c76618fb7247bc0);
    UNRECOVERED_JUMPTABLE = (code *)ppuVar52[-10];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001f44f;
    (*UNRECOVERED_JUMPTABLE)(uVar15);
    *(undefined **)(puVar17 + -0x6c76618fb7247bc0) = ppuVar52[-0x46];
    *(uint *)ppuVar52[-0x45] = *(uint *)((long)ppuVar52 + -0xac);
    ppuVar19 = (undefined **)
               FUN_10002431a(0xebe9dd97f1423742,0x93899e7048db8440,&DAT_10001debf,0xffffffff,
                             0x1e2846e84);
    return ppuVar19;
  case (undefined **)0x10001f536:
    *(undefined ***)((long)ppuVar42 + -8) = UNRECOVERED_JUMPTABLE_46;
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar52 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x2c);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE << 10 | *(uint *)UNRECOVERED_JUMPTABLE >> 0x16;
    ppuVar71 = (undefined **)puVar75;
    goto code_r0x00010001f53f;
  case (undefined **)0x10001f83b:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)((ulong)puVar75 & 0xffffffff);
code_r0x00010001f825:
                    /* WARNING: Could not recover jumptable at 0x00010001f83e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001f7b1 +
                         (int)*(uint *)((long)ppuVar56 +
                                       (long)((int)UNRECOVERED_JUMPTABLE_45 + (int)puVar78) * 4)))
                         (&DAT_10001f7b1 +
                          (int)*(uint *)((long)ppuVar56 +
                                        (long)((int)UNRECOVERED_JUMPTABLE_45 + (int)puVar78) * 4),
                          (code *)((long)puVar70 + (long)unaff_R12),UNRECOVERED_JUMPTABLE_46);
    return ppuVar19;
  case (undefined **)0x10001fa34:
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_47) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_47) ^ uVar54;
    ppuVar19 = (undefined **)*ppuVar52;
code_r0x00010001fa25:
    *(uint *)(ppuVar19 + -0x1d) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x00010001fa3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x1f9dd))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,
                          (code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x1f9dd),0);
    return ppuVar19;
  case (undefined **)0x10001fc2b:
    goto code_r0x00010001fc2b;
  case (undefined **)0x10001fdee:
    goto switchD_100025d1a_caseD_1fdee;
  case (undefined **)0x10001fea7:
    *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7d) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7d) + uVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002007a:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case (undefined **)0x100020403:
    goto switchD_100025d1a_caseD_20403;
  case (undefined **)0x100020476:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000204ce:
    goto LAB_100026371;
  case (undefined **)0x1000204f8:
    if (!bVar79) {
      *(uint *)UNRECOVERED_JUMPTABLE_41 = *(int *)UNRECOVERED_JUMPTABLE_41 + uVar14;
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar63;
    }
code_r0x0001000204fa:
    UNRECOVERED_JUMPTABLE_37 =
         (undefined **)
         ((ulong)((long)UNRECOVERED_JUMPTABLE_37 + 0x1e2846e75) & (long)UNRECOVERED_JUMPTABLE_45 * 2
         );
    UNRECOVERED_JUMPTABLE_45 =
         (undefined **)
         ((long)UNRECOVERED_JUMPTABLE_45 + (-0x141622680ebdc8be - (long)UNRECOVERED_JUMPTABLE_37));
    UNRECOVERED_JUMPTABLE_47 = (undefined **)&DAT_10001f177;
    goto code_r0x000100020529;
  case (undefined **)0x1000206b5:
    *(undefined8 *)((long)ppuVar42 + -8) = 0x1000206ba;
    lVar29 = FUN_10002f0ef();
    *(char *)(lVar29 + -0x77) = *(char *)(lVar29 + -0x77) + (char)UNRECOVERED_JUMPTABLE_47;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000208a0:
code_r0x0001000208a8:
    iVar57 = ((uint)ppuVar61 ^ 0xc1d02935) + (int)UNRECOVERED_JUMPTABLE_45 + (int)puVar70;
    ppuVar66 = (undefined **)(ulong)((int)ppuVar69 + 0x462580eb);
    ppuVar19 = (undefined **)0x0;
code_r0x0001000208be:
                    /* WARNING: Could not recover jumptable at 0x0001000208da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100020873 +
                         (int)*(uint *)((long)ppuVar56 +
                                       (long)((int)CONCAT71((int7)((ulong)ppuVar19 >> 8),
                                                            iVar57 == (int)ppuVar66) + (int)ppuVar65
                                             ) * 4)))();
    return ppuVar19;
  case (undefined **)0x100020b84:
    goto switchD_100025d1a_caseD_20b84;
  case (undefined **)0x100020c5b:
    goto DAT_100020c5b;
  case (undefined **)0x100020fe0:
    out(0x88,cVar63);
    *(undefined ***)((long)ppuVar42 + -8) = ppuVar42;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100021124:
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100021129;
    lVar29 = func_0x0001499a5981();
                    /* WARNING: Could not recover jumptable at 0x00010002113d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100021110 + *(uint *)((long)UNRECOVERED_JUMPTABLE_45 + lVar29 * 4)))
                         ();
    return ppuVar19;
  case (undefined **)0x10002115e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100021394:
    goto switchD_100025d1a_caseD_21394;
  case (undefined **)0x100021400:
    *(uint *)(ppuVar52 + -0x22) = uVar13;
    UNRECOVERED_JUMPTABLE_37 = (undefined **)ppuVar52[-0x25];
code_r0x000100021415:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)((int)ppuVar66 + uVar58 * 2 != 0x4cd2b3f3);
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(long)(int)((uint)puVar78 ^ 0xc2);
code_r0x000100021435:
                    /* WARNING: Could not recover jumptable at 0x000100021468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000213ff +
                         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_45 +
                                       (long)(int)((uint)(ppuVar52[-0x1e] ==
                                                          (&PTR__bootstrap_look_up_10082e9f0)
                                                          [(long)UNRECOVERED_JUMPTABLE_47] + -1 &
                                                         (byte)UNRECOVERED_JUMPTABLE_41) +
                                                  (int)puVar78) * 4)))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                          &PTR__bootstrap_look_up_10082e9f0,
                          &DAT_1000213ff +
                          (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_45 +
                                        (long)(int)((uint)(ppuVar52[-0x1e] ==
                                                           (&PTR__bootstrap_look_up_10082e9f0)
                                                           [(long)UNRECOVERED_JUMPTABLE_47] + -1 &
                                                          (byte)UNRECOVERED_JUMPTABLE_41) +
                                                   (int)puVar78) * 4));
    return ppuVar19;
  case (undefined **)0x1000214dc:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000222b0:
    puVar17 = (undefined *)(ulong)(uVar14 | 0xfffff576);
    goto code_r0x000100022276;
  case (undefined **)0x10002293e:
    in(uVar32);
    out(*(uint *)UNRECOVERED_JUMPTABLE_45,uVar32);
switchD_100025d1a_caseD_2013e:
    iVar57 = (int)puVar75;
    uVar14 = (uint)((uint)UNRECOVERED_JUMPTABLE_47 ==
                   (iVar57 + 9U ^ (iVar57 + 0xa6154763U | 0x1028328) ^ 0x83f30dc0)) + iVar57;
    puVar17 = (undefined *)(ulong)uVar14;
    iVar57 = *(int *)(&DAT_1006d2600 + (long)(int)uVar14 * 4);
    ppuVar51[-0x24] = puVar17;
    ppuVar51[-0x26] = puVar17;
                    /* WARNING: Could not recover jumptable at 0x00010002018d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)iVar57 + 0x10002013e))
                         (ppuVar61,puVar17,(code *)((long)iVar57 + 0x10002013e),0x3166a97b);
    return ppuVar19;
  case (undefined **)0x100022cd4:
    ppuVar61 = (undefined **)ppuVar52[-0x20];
    goto LAB_100025146;
  case (undefined **)0x10002319e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002335a:
    goto switchD_100025d1a_caseD_2335a;
  case (undefined **)0x1000233d5:
code_r0x0001000233b3:
    *(undefined ***)((long)ppuVar42 + (ulong)(byte)(unaff_00084f00 - 1) * -8 + -8) = unaff_0008ae00;
    puVar75 = (uint *)(ulong)((int)ppuVar76 - 0xfcU | 9);
    ppuVar19 = unaff_0008ae00;
switchD_100025d1a_caseD_22447:
    ppuVar61 = (undefined **)ppuVar19[-0x20];
    ppuVar51 = ppuVar19;
LAB_10002513c:
    ppuVar76 = (undefined **)0x1e2846e84;
    ppuVar52 = ppuVar51;
LAB_100025146:
    puVar17 = (undefined *)(ulong)((int)puVar75 + *(uint *)((long)ppuVar52 + -0x1a4) + 0xce995666);
    ppuVar52[-0x54] = (undefined *)(-0x511907350d1feab6 - (long)ppuVar52[-0x29]);
    *(uint *)(ppuVar52 + -0x25) = *(uint *)((long)ppuVar52 + -0x1ac) + 0xce995683;
    ppuVar52[-0x22] = ppuVar52[-0x50];
    ppuVar52[-0x1e] = puVar17;
    ppuVar52[-0x28] = puVar17 + (-0x141622680ebdc8be - ((long)puVar17 * 2 & (ulong)ppuVar76));
    ppuVar52[-0x27] = ppuVar52[-0x49];
    ppuVar52[-0x31] = ppuVar52[-0x4a];
    ppuVar52[-0x58] = ppuVar52[-0x40];
    ppuVar19 = (undefined **)
               FUN_100025f10(ppuVar61,*(uint *)((long)ppuVar52 + -0x1a4),
                             puVar17 + (-0x141622680ebdc8be - ((long)puVar17 * 2 & (ulong)ppuVar76))
                             ,0xf4ef00436de991f2);
    return ppuVar19;
  case (undefined **)0x100023685:
    goto switchD_100025d1a_caseD_23685;
  case (undefined **)0x10002371d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023804:
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100023807;
    (*(code *)ppuVar76)();
    plVar46 = (long *)ppuVar42;
    goto switchD_10001cc54_caseD_1;
  case (undefined **)0x1000238cf:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar52 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 5);
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + -1;
    *(undefined8 *)((long)ppuVar42 + -8) = 0;
    *puRamfffffffffffffe70 = UNRECOVERED_JUMPTABLE_41;
                    /* WARNING: Could not recover jumptable at 0x0001000238fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100023898 +
                         (int)*(uint *)((long)ppuVar65 +
                                       (long)(int)(uVar40 + (UNRECOVERED_JUMPTABLE_41 ==
                                                            (undefined **)0x0)) * 4)))();
    return ppuVar19;
  case (undefined **)0x100023a59:
    if (!bVar82) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023ac7:
    ppuVar76 = (undefined **)(ulong)(uVar54 ^ 0xc);
    goto LAB_10001de47;
  case (undefined **)0x100023c6f:
    goto switchD_100025d1a_caseD_23c6f;
  case (undefined **)0x100023d30:
                    /* WARNING: Could not recover jumptable at 0x000100023d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)ppuVar61 +
                         (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)[(long)ppuVar66]))();
    return ppuVar19;
  case (undefined **)0x100023dc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000240f5:
    uVar22 = (ulong)(uVar14 | 0xffffffaa);
code_r0x0001000240fa:
                    /* WARNING: Could not recover jumptable at 0x000100024103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE_47 + uVar22))();
    return ppuVar19;
  case (undefined **)0x100024157:
    *(uint *)UNRECOVERED_JUMPTABLE_47 = *(uint *)UNRECOVERED_JUMPTABLE_47 >> 0x11;
code_r0x00010002415f:
                    /* WARNING: Could not recover jumptable at 0x000100024186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100024106 +
                         (int)*(uint *)((long)ppuVar65 +
                                       (long)(int)(((byte)~(byte)(((int)UNRECOVERED_JUMPTABLE_46 -
                                                                   (int)UNRECOVERED_JUMPTABLE_41 |
                                                                  (uint)UNRECOVERED_JUMPTABLE_47) >>
                                                                 (((byte)puVar78 ^ 0x47) & 0x1f)) &
                                                   1) + (int)ppuVar76) * 4)))();
    return ppuVar19;
  case (undefined **)0x10002459a:
    *(uint *)UNRECOVERED_JUMPTABLE_41 = *(int *)UNRECOVERED_JUMPTABLE_41 + uVar14;
    *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar63;
code_r0x000100024580:
    uVar14 = (uint)ppuVar76;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)*UNRECOVERED_JUMPTABLE_47;
    ppuVar69 = (undefined **)0x10002624b;
code_r0x0001000245bd:
    uVar14 = uVar14 - 0x3a;
    goto LAB_1000245c1;
  case (undefined **)0x1000247f8:
    goto switchD_100020322_caseD_247e5;
  case (undefined **)0x100024812:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002485d:
    ppuVar52[-0x3c] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    puVar75 = (uint *)&DAT_1006d2600;
LAB_10002496b:
    puVar17 = ppuVar52[-0x6a];
    uVar13 = (uint)puVar78;
    UNRECOVERED_JUMPTABLE = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar13 + 0x58e83476)];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10002498e;
    (*UNRECOVERED_JUMPTABLE)(puVar17);
    puVar17 = ppuVar52[-0x6b];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100024997;
    (*UNRECOVERED_JUMPTABLE)(puVar17);
    bVar80 = ppuVar52[-0x69] == (undefined *)0x0;
    ppuVar76 = (undefined **)puVar75;
code_r0x0001000249a8:
                    /* WARNING: Could not recover jumptable at 0x0001000249bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)ppuVar76 +
                                              (long)(int)(uVar13 + 0x58e834d3 + (uint)bVar80) * 4) +
                         0x10002496b))();
    return ppuVar19;
  case (undefined **)0x10002490c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100024958:
    *(uint *)(ppuVar52 + -0x1d) = 0x3166a97d;
    puVar78 = (uint *)0xa717cbac;
    goto LAB_10002496b;
  case (undefined **)0x100024b9e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100024cc8:
    goto switchD_100025d1a_caseD_24cc8;
  case (undefined **)0x100024d26:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) + -1
    ;
    ppuVar52[-0x5b] = (undefined *)((long)puVar75 + 8);
    *(uint *)(ppuVar52 + -0x36) = uVar14 ^ 0x40c68341;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)*(uint *)((long)puVar70 +
                                      (long)(int)(uVar40 + ((undefined **)puVar75 ==
                                                           (undefined **)0x0)) * 4) + 0x100024d2d);
                    /* WARNING: Could not recover jumptable at 0x000100024d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*UNRECOVERED_JUMPTABLE)
                         ((int)uVar34 >> 1,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE,0);
    return ppuVar19;
  case (undefined **)0x100024d71:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100024e6d:
                    /* WARNING: Could not recover jumptable at 0x000100024eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)ppuVar65 +
                                              (long)(int)(((undefined **)unaff_R12 ==
                                                          (undefined **)
                                                          ((ulong)((uVar14 - 0x111 | 0x118) ^
                                                                  (uVar14 ^ 0x17a) * 3) ^
                                                          0xffffffffffffffc6)) + uVar14) * 4) +
                         0x100024e6d))();
    return ppuVar19;
  case (undefined **)0x100024f1f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100024f49:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100024f9e:
    uVar22 = (ulong)UNRECOVERED_JUMPTABLE_45 & 0xffffffff;
    *(code **)(uVar22 - 0x370) = (code *)((long)ppuVar61 + 0x100025cae);
    *(undefined4 *)(uVar22 - 0x19c) = 0x6507f9cb;
    uVar14 = *(uint *)((long)UNRECOVERED_JUMPTABLE_45 +
                      (long)(int)(uVar14 + (ppuVar65 == (undefined **)0x0)) * 4);
    *(undefined4 *)(uVar22 - 0xe8) = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x000100024fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100024f9d + (int)uVar14))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,&DAT_100024f9d + (int)uVar14);
    return ppuVar19;
  case (undefined **)0x10002504e:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100025161:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) + -1;
    *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x66a9993e) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x66a9993e) ^ uVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002516c:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100025301:
    pbVar1 = (byte *)(((ulong)ppuVar42 & 0xffffffff) - 0x75);
    *pbVar1 = *pbVar1 >> 5 | *pbVar1 << 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100025315:
    *(int *)(ulong)*(uint *)(ppuVar52 + -0x4d) = (int)ppuVar52[-0x1e];
    lVar29 = *(long *)ppuVar52[-0x2d];
    uVar14 = *(uint *)ppuVar52[-0x3b];
    ppuVar52[-0x24] = (undefined *)(ulong)uVar14;
    puVar17 = *(undefined **)ppuVar52[-0x32];
    ppuVar52[-0x55] = puVar17;
    *(uint *)((long)ppuVar52 + -0x25c) = 0;
    *(uint *)(ppuVar52 + -0x4b) = 0;
    *(uint *)((long)ppuVar52 + -0x254) = 0;
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)
         (&DAT_1000252f6 +
         (int)*(uint *)((long)puVar75 +
                       (ulong)((byte)((puVar17 == (undefined *)0x0 ||
                                      (undefined *)(ulong)uVar14 == (undefined *)0x0) |
                                      lVar29 == 0 | bVar11 | (byte)cVar63) + 0x2f) * 4));
code_r0x0001000253a3:
    *(undefined ***)((long)ppuVar42 + (ulong)(byte)(unaff_00084f00 - 1) * -8 + -8) = unaff_0008ae00;
                    /* WARNING: Could not recover jumptable at 0x0001000253a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_41)();
    return ppuVar19;
  case (undefined **)0x10002540c:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar52 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x1d);
    *UNRECOVERED_JUMPTABLE =
         (code)((byte)*UNRECOVERED_JUMPTABLE >> 1 | (char)*UNRECOVERED_JUMPTABLE << 7);
    uVar10 = in(uVar32);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)CONCAT71(uVar24,uVar10);
    *(uint *)UNRECOVERED_JUMPTABLE_46 = *(uint *)UNRECOVERED_JUMPTABLE_46 >> 1;
    UNRECOVERED_JUMPTABLE_44 = (uint *)UNRECOVERED_JUMPTABLE_37;
code_r0x0001000253de:
    uVar2 = *(undefined4 *)
             ((&PTR__bootstrap_look_up_10082e9f0)[(long)UNRECOVERED_JUMPTABLE_41] + -3);
    puVar17 = ppuVar52[-0x3e];
    uVar14 = *(uint *)((long)ppuVar52 + -0x114);
    puVar21 = (&PTR__bootstrap_look_up_10082e9f0)[(int)UNRECOVERED_JUMPTABLE_44 + 0x58e83477];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10002540d;
    (*(code *)(puVar21 + -2))(uVar2,puVar17,uVar14);
    uVar14 = (int)puVar75 + 0xbd1cca9eU & 0x42e33567;
    puVar75 = (uint *)(ulong)uVar14;
    if ((uint)ppuVar76 != (uVar14 ^ 0x3166a91a)) {
      puVar78 = (uint *)0x2cc289762f9fc832;
    }
    ppuVar52[-0x33] = (undefined *)puVar78;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)((ulong)ppuVar76 & 0xffffffff);
    uVar13 = (uVar14 - 0x62 ^ 0x3166a923) + (uVar14 - 0x62 | 0x52);
    ppuVar51 = ppuVar52;
    UNRECOVERED_JUMPTABLE_44 = (uint *)&DAT_1006d2600;
code_r0x000100025459:
    *(uint *)(ppuVar51 + -0x1d) = (uint)UNRECOVERED_JUMPTABLE_45;
                    /* WARNING: Could not recover jumptable at 0x000100025479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000213b7 +
                         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                       (long)(int)((uint)((uint)UNRECOVERED_JUMPTABLE_45 == uVar13)
                                                  + (int)puVar75) * 4)))();
    return ppuVar19;
  case (undefined **)0x10002546d:
    uVar13 = (uint)CONCAT71(uVar24,(char)cVar63 + 0x83);
    goto code_r0x000100025459;
  case (undefined **)0x10002548f:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)&DAT_100026158;
    bVar80 = uVar14 < 0x5a337570;
    uVar14 = uVar28 * 2 + 0xbe367ece;
    uVar68 = uVar14 ^ 0x2bfed9bb;
    uVar14 = uVar14 & 0x2bfed9ba;
    ppuVar65 = (undefined **)(ulong)(uVar68 + uVar14 * 2);
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar68 + uVar14 * 2);
code_r0x0001000254c8:
    uVar14 = uVar72 + (int)ppuVar65 + 0x2e349acf;
    bVar79 = (uint)UNRECOVERED_JUMPTABLE_41 < uVar14;
    if (bVar80 != uVar14 < 0x5a337570) {
      bVar79 = uVar14 < 0x5a337570;
    }
    UNRECOVERED_JUMPTABLE =
         (code *)((long)UNRECOVERED_JUMPTABLE_45 +
                 (long)(int)*(uint *)((long)puVar70 +
                                     (long)(int)((uint)bVar79 + (int)UNRECOVERED_JUMPTABLE_47 +
                                                0x58e83541) * 4));
                    /* WARNING: Could not recover jumptable at 0x000100025511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*UNRECOVERED_JUMPTABLE)
                         (UNRECOVERED_JUMPTABLE,UNRECOVERED_JUMPTABLE_45,
                          (int)UNRECOVERED_JUMPTABLE_46 + -0xb1a1922);
    return ppuVar19;
  case (undefined **)0x10002552d:
    uVar14 = (uint)(byte)*(code *)((long)ppuVar61 + (ulong)(iVar57 + 0xdeb6c483)) |
             (uint)(byte)*(code *)((long)ppuVar61 + (ulong)(iVar57 + 0xdeb6c481)) << 0x10 |
             (uint)(byte)*(code *)((long)ppuVar61 + (long)UNRECOVERED_JUMPTABLE_47) << 0x18 |
             (uint)(byte)*(code *)((long)ppuVar61 + (ulong)((uVar49 ^ 0x987f4f5c) + iVar57)) <<
             ((char)ppuVar65 + 0xb2U & 0x1f);
    *(uint *)((long)ppuVar52 + -0x94) =
         (uVar14 ^ 0xb7efa97f) + (uVar14 & 0x37efa97f) * 2 + 0x7976fffe;
    *(int *)ppuVar52[-0xb] = iVar57 + 4;
                    /* WARNING: Could not recover jumptable at 0x0001000255bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100025515 +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                              [(int)((UNRECOVERED_JUMPTABLE_45 == ppuVar76) + uVar64)]))
                         (ppuVar61,&DAT_100025515 +
                                   (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                        [(int)((UNRECOVERED_JUMPTABLE_45 == ppuVar76) + uVar64)]);
    return ppuVar19;
  case (undefined **)0x1000255cb:
    if (bVar79 || bVar80) {
      uVar14 = *(uint *)UNRECOVERED_JUMPTABLE_45;
      UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
      UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar14 ^ 0xad4e6779);
      uVar54 = uVar14 + 2 ^ 0xf5efef48;
      UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)uVar54;
      ppuVar61 = (undefined **)&DAT_1000211af;
      ppuVar69 = (undefined **)(ulong)(uVar68 < (uVar14 ^ 0xad4e6779));
      ppuVar65 = (undefined **)(ulong)(uVar54 + 0x6f1819df);
      puVar70 = (uint *)0x6f1819df;
    }
    uVar14 = (int)puVar70 + 0x3e366dfc;
    bVar80 = uVar68 < uVar14;
    if ((bool)(char)ppuVar69 != uVar14 < 0xad4e67db) {
      bVar80 = uVar14 < 0xad4e67db;
    }
    ppuVar69 = (undefined **)
               (long)*(int *)(&DAT_1006d2600 +
                             (long)(int)((uint)bVar80 + (int)UNRECOVERED_JUMPTABLE_41) * 4);
    goto code_r0x000100025659;
  case (undefined **)0x10002562e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100025656:
    UNRECOVERED_JUMPTABLE_46 =
         (undefined **)(ulong)*(uint *)((long)puVar75 + (long)UNRECOVERED_JUMPTABLE_46 * 4);
code_r0x000100025659:
                    /* WARNING: Could not recover jumptable at 0x00010002565c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)ppuVar69 + (long)ppuVar61))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                          UNRECOVERED_JUMPTABLE_47,ppuVar65);
    return ppuVar19;
  case (undefined **)0x1000256bf:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (long)UNRECOVERED_JUMPTABLE_47) = cVar63;
    goto code_r0x000100025693;
  case (undefined **)0x100025749:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100025772:
code_r0x00010002576d:
                    /* WARNING: Could not recover jumptable at 0x00010002578c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000256e1 +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                              [(int)(((uint)puVar70 & 0xff) + (int)unaff_R12)]))();
    return ppuVar19;
  case (undefined **)0x100025790:
    goto switchD_100025d1a_caseD_25790;
  case (undefined **)0x1000257f6:
    goto switchD_100025d1a_caseD_257f6;
  case (undefined **)0x100025852:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + 99) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + 99) + bVar11);
                    /* WARNING: Could not recover jumptable at 0x00010002586a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002583c +
                         (int)*(uint *)((long)puVar70 + (long)UNRECOVERED_JUMPTABLE_47 * 4)))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,
                          &DAT_10002583c +
                          (int)*(uint *)((long)puVar70 + (long)UNRECOVERED_JUMPTABLE_47 * 4));
    return ppuVar19;
  case (undefined **)0x1000258ba:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000258c3:
code_r0x0001000258a5:
    uVar2 = *(undefined4 *)UNRECOVERED_JUMPTABLE_41;
    puVar17 = *UNRECOVERED_JUMPTABLE_46;
    uVar14 = *(uint *)UNRECOVERED_JUMPTABLE_47;
    *(undefined **)((long)ppuVar42 + -8) = &UNK_1000258c2;
    uVar13 = (*(code *)unaff_R12)
                       (uVar2,puVar17,uVar14 + 0xf880221e,ppuVar52 + -0x3e,
                        (code *)((long)ppuVar52 + -0x114));
    uVar28 = uVar13 ^ 0xfbefbf7e;
    ppuVar51 = ppuVar52;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)puVar75;
    ppuVar56 = UNRECOVERED_JUMPTABLE_37;
code_r0x0001000258cd:
    uVar14 = (uint)ppuVar56;
    *(uint *)(ppuVar51 + -0x1d) = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x00010002591e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_45 +
                                              (long)(int)(uVar14 + 0x58e834de +
                                                         (uint)((int)((uVar14 ^ 0xe9ea1c74) + uVar28
                                                                     + (uVar13 & 0xfbefbf7e) * 2) <
                                                               (int)((uVar14 ^ 0xa717cb3d) +
                                                                    0x5aed96c8))) * 4) + 0x1000258ed
                         ))();
    return ppuVar19;
  case (undefined **)0x10002593f:
    iVar57 = ((uVar28 | uVar54) ^ 0x5f9e4565) * 0x65773fe7;
    *(uint *)((long)ppuVar52 + -0x3c) = uVar14 + iVar57 + uVar40 + 0x55e3d4c;
    *(uint *)(ppuVar52 + -7) = (iVar57 + uVar68) - 0x73;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100025969;
    FUN_100014c30();
    if (*(uint *)((long)ppuVar52 + -0x34) == 0x52e88d51) {
      uVar53 = 0x3165f9a5;
    }
    puVar75 = (uint *)0x6c76618fb7247bc0;
    goto LAB_10001e31a;
  case (undefined **)0x1000259a2:
                    /* WARNING: Could not recover jumptable at 0x0001000259cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100025994 + *(int *)((long)ppuVar76 + (long)(int)uVar68 * 4)))
                         (ppuVar61,ppuVar52[-0x46],UNRECOVERED_JUMPTABLE_46,
                          &DAT_100025994 + *(int *)((long)ppuVar76 + (long)(int)uVar68 * 4),
                          0xebe9dd97f1423742);
    return ppuVar19;
  case (undefined **)0x100025a70:
    *(code *)ppuVar61 = *(code *)UNRECOVERED_JUMPTABLE_45;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100025a78;
    func_0x000159d15a77((code *)((long)ppuVar61 + (ulong)bVar27 * -2 + 1),
                        (code *)((long)UNRECOVERED_JUMPTABLE_45 + (ulong)bVar27 * -2 + 1),
                        UNRECOVERED_JUMPTABLE_46,
                        CONCAT71(uVar37,bVar11 + (char)((ulong)UNRECOVERED_JUMPTABLE_47 >> 8)));
    uVar14 = uVar40 + 0x927d0689 & 0x6d82f972;
                    /* WARNING: Could not recover jumptable at 0x000100025adb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)puVar70 +
                                              (long)(int)(((uVar58 << ((char)uVar14 * '\x02' - 3U &
                                                                      0x1f) & 0xac6b661e ^
                                                           0xa0006604) + (uVar58 ^ 0xa777844d) ==
                                                          0x5635b30f) + uVar14) * 4) + 0x100025a80))
                         ();
    return ppuVar19;
  case (undefined **)0x100025b19:
code_r0x000100025b18:
                    /* WARNING: Could not recover jumptable at 0x000100025b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100025ae1 + (int)*(uint *)((long)unaff_RBX + (long)(int)ppuVar65 * 4)
                         ))(ppuVar61,UNRECOVERED_JUMPTABLE_45,&DAT_100025ae1,
                            UNRECOVERED_JUMPTABLE_47,
                            &DAT_100025ae1 +
                            (int)*(uint *)((long)unaff_RBX + (long)(int)ppuVar65 * 4),0x362ace52);
    return ppuVar19;
  case (undefined **)0x100025ba8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100025bb8:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)*(uint *)(ppuVar52 + -0x5f);
switchD_100025d1a_caseD_25bbe:
    *(uint *)UNRECOVERED_JUMPTABLE_47 = uVar14;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)ppuVar52[-0x5e];
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)*(uint *)UNRECOVERED_JUMPTABLE_47;
    UNRECOVERED_JUMPTABLE_41 = *(undefined ***)((long)puVar75 + -0x3a5a9c416583c527);
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 +
             (ulong)(uVar58 + *(uint *)UNRECOVERED_JUMPTABLE_47 + 0xf8802126)) = (code)0xcf;
code_r0x000100025be5:
    iVar57 = (int)UNRECOVERED_JUMPTABLE_46;
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(iVar57 + 0xf880221f)) = (code)0xe0;
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(iVar57 + 0xf8802220)) = (code)0xb4;
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(iVar57 + 0xf8802221)) = (code)0x6a;
    *(uint *)UNRECOVERED_JUMPTABLE_47 = *(uint *)UNRECOVERED_JUMPTABLE_47 + 4;
    *(uint *)(ppuVar52 + -0x1d) = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x000100025c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)*(int *)(&DAT_1006d2600 + (long)((int)puVar78 + -6) * 4) +
                         0x100025c20))
                         (ppuVar61,(int)puVar78 + -0x54,(ulong)(iVar57 + 0xf8802221),
                          (code *)((long)*(int *)(&DAT_1006d2600 + (long)((int)puVar78 + -6) * 4) +
                                  0x100025c20));
    return ppuVar19;
  case (undefined **)0x100025bbe:
    goto switchD_100025d1a_caseD_25bbe;
  case (undefined **)0x100025c38:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uint)(int)(short)UNRECOVERED_JUMPTABLE_41;
    goto code_r0x000100025be5;
  case (undefined **)0x100025ca0:
    puVar75 = (uint *)CONCAT62((int6)((ulong)puVar75 >> 0x10),CONCAT11((char)cVar26 * '\x02',cVar9))
    ;
    out(0xf7,cVar63);
    break;
  case (undefined **)0x100025ca6:
switchD_100023f94_caseD_25ca6:
    puVar78 = (uint *)(ulong)(uVar58 + 10);
    break;
  case (undefined **)0x100025ca9:
    if (cVar63 != (code)0x0 || *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x73) != '\0')
    goto switchD_100023f94_caseD_25ca6;
    goto code_r0x000100025cae;
  case (undefined **)0x100025cb1:
    goto code_r0x000100025cb1;
  case (undefined **)0x100025cb7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100025cbf:
    goto switchD_100025d1a_caseD_25cbf;
  case (undefined **)0x100025ccb:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uint)(*(int *)((long)ppuVar52 + 0x31) * -0x37);
    goto code_r0x000100025ccf;
  case (undefined **)0x100025cce:
    goto switchD_100025d1a_caseD_25cce;
  case (undefined **)0x100025cf0:
    goto switchD_100025d1a_caseD_25cf0;
  case (undefined **)0x100025cfc:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100025d18:
    bVar79 = CARRY4(uVar14,uVar34);
    bVar82 = SCARRY4(uVar14,uVar34);
    uVar14 = uVar14 + uVar34;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
    bVar83 = (int)uVar14 < 0;
    bVar80 = uVar14 == 0;
    bVar81 = (POPCOUNT(uVar14 & 0xff) & 1U) == 0;
    goto switchD_100025d1a_switchD;
  case (undefined **)0x100025d19:
    goto switchD_100025d1a_caseD_25d19;
  case (undefined **)0x100025d2e:
    *(uint *)(ppuVar52 + -0x14) = uVar14;
code_r0x000100025d34:
    puVar17 = ppuVar51[-0x12];
    puVar21 = ppuVar56[(uint)puVar17 & 0x400100ae];
    puVar3 = ppuVar51[-0x2b];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100025d5a;
    puVar21 = (undefined *)(*(code *)(puVar21 + -1))(ppuVar61,puVar3,ppuVar51 + -0x1d);
    ppuVar51[-0x43] = puVar21;
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(long)(int)((uint)puVar17 + 0x48150538 + (uint)(puVar21 == (undefined *)0x0))
    ;
code_r0x000100025d71:
                    /* WARNING: Could not recover jumptable at 0x000100025d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100025d1f +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                              [(long)UNRECOVERED_JUMPTABLE_41]))(ppuVar51[-0xb]);
    return ppuVar19;
  case (undefined **)0x100025dab:
    puVar17 = *(undefined **)((long)unaff_R12 + (ulong)(uVar14 & 0x808c40) * 8);
code_r0x000100025db4:
    puVar21 = *(undefined **)((long)unaff_R12 + (long)(int)((uint)ppuVar76 ^ 0x94) * 8);
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100025dd0;
    (*(code *)(puVar17 + -1))(UNRECOVERED_JUMPTABLE_37,puVar21 + -2);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)ppuVar76 & 0xffffffff);
    UNRECOVERED_JUMPTABLE_44 = (uint *)UNRECOVERED_JUMPTABLE_37;
code_r0x000100025dd3:
    puVar17 = *(undefined **)
               ((long)unaff_R12 + (long)(int)((uint)UNRECOVERED_JUMPTABLE_41 & 0xf0528f1f) * 8);
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100025de6;
    (*(code *)(puVar17 + -1))(UNRECOVERED_JUMPTABLE_44);
    uVar14 = (uint)ppuVar76;
    puVar17 = *(undefined **)((long)unaff_R12 + (long)(int)(uVar14 - 0x9f) * 8);
    puVar21 = ppuVar52[-0x1d];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100025e04;
    ppuVar61 = (undefined **)(*(code *)(puVar17 + -2))(UNRECOVERED_JUMPTABLE_44,puVar21);
    ppuVar52[-0x25] = (undefined *)UNRECOVERED_JUMPTABLE_44;
    ppuVar52[-0x41] = (undefined *)ppuVar61;
    ppuVar56 = (undefined **)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 - 0x8f)];
    ppuVar52[-0x1e] = (undefined *)ppuVar61;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100025e33;
    ppuVar19 = (undefined **)(*(code *)ppuVar56)();
    UNRECOVERED_JUMPTABLE_45 = (undefined **)&DAT_1006d2600;
    UNRECOVERED_JUMPTABLE_46 = &PTR__bootstrap_look_up_10082e9f0;
    ppuVar65 = (undefined **)((&PTR__bootstrap_look_up_10082e9f0)[uVar14 & 0x64238204] + -0xe);
    uVar22 = (ulong)*(int *)(&DAT_1006d2600 + (long)(int)((ppuVar19 == ppuVar65) + uVar14) * 4);
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(&DAT_100025d93 + uVar22);
    switch(UNRECOVERED_JUMPTABLE_47) {
    case (undefined **)0x100026d18:
      UNRECOVERED_JUMPTABLE = (code *)(ulong)((int)UNRECOVERED_JUMPTABLE_47 + 0x82e9f0);
      break;
    case (undefined **)0x100027dfc:
code_r0x000100027dfc:
      *(char *)UNRECOVERED_JUMPTABLE_46 = ((char)uVar22 - (char)UNRECOVERED_JUMPTABLE_45) + '\x16';
                    /* WARNING: Could not recover jumptable at 0x000100027e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)((long)ppuVar56 +
                           (long)(int)*(uint *)((long)puVar78 +
                                               (long)(int)(((undefined **)puVar75 ==
                                                           (undefined **)0xffffffffffffffc2) +
                                                          uVar14) * 4)))
                           ((int)ppuVar61 + 2,UNRECOVERED_JUMPTABLE_45,
                            (char *)((long)UNRECOVERED_JUMPTABLE_46 + 2),
                            (int)UNRECOVERED_JUMPTABLE_47 + 2,ppuVar65,
                            uVar14 + (uint)((undefined **)puVar75 ==
                                           (undefined **)0xffffffffffffffc2) * 2);
      return ppuVar19;
    }
code_r0x000100026d1a:
                    /* WARNING: Could not recover jumptable at 0x000100026d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return ppuVar19;
  case (undefined **)0x100025e6a:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) + -1
    ;
    UNRECOVERED_JUMPTABLE_44 = (uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x47);
    *UNRECOVERED_JUMPTABLE_44 = *UNRECOVERED_JUMPTABLE_44 << 7 | *UNRECOVERED_JUMPTABLE_44 >> 0x19;
                    /* WARNING: Could not recover jumptable at 0x000100025e73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)UNRECOVERED_JUMPTABLE_47)
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,CONCAT71(uVar38,0xd2));
    return ppuVar19;
  case (undefined **)0x100025e96:
    uVar68 = (uint)(byte)*(code *)((long)ppuVar61 + (ulong)(uVar14 + 0x8d601533)) |
             uVar28 << 0x10 | uVar68 |
             (uint)(byte)*(code *)((long)ppuVar61 + (ulong)(uVar14 + 0x8d601532)) <<
             ((char)ppuVar66 + 0x97U & 0x1f);
    *(uint *)((long)ppuVar52 + -0x1ac) =
         (uVar68 ^ 0xb7efa97f) + (uVar68 & 0x37efa97f) * 2 + 0x7976fffe;
    *(uint *)ppuVar52[-0x1e] = uVar14 + 8;
                    /* WARNING: Could not recover jumptable at 0x000100025f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100025e77 +
                         *(int *)((long)unaff_R12 +
                                 (long)(int)((uint)(UNRECOVERED_JUMPTABLE_37 ==
                                                   UNRECOVERED_JUMPTABLE_45) + iVar59) * 4)))();
    return ppuVar19;
  case (undefined **)0x100026006:
    if (bVar81) {
      *(code *)ppuVar61 = *(code *)UNRECOVERED_JUMPTABLE_45;
      out(uVar32,uVar14);
      DAT_83e28944e9000015 = cVar63;
    }
    bVar80 = UNRECOVERED_JUMPTABLE_37[(long)(ppuVar52[-0x1d] + 1)] == (undefined *)0x0;
code_r0x00010002601b:
                    /* WARNING: Could not recover jumptable at 0x00010002603e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)ppuVar65 + (long)(int)(uVar72 + bVar80) * 4) +
                         0x100025ffe))(UNRECOVERED_JUMPTABLE_37);
    return ppuVar19;
  case (undefined **)0x100026068:
    goto switchD_100025d1a_caseD_26068;
  case (undefined **)0x100026130:
    if (!bVar82) {
      UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uVar68 - 3);
    }
    UNRECOVERED_JUMPTABLE_37 = *(undefined ***)((long)puVar78 + 0x18);
code_r0x00010002613c:
    UNRECOVERED_JUMPTABLE_46 =
         (undefined **)
         ((long)(int)*(uint *)((long)puVar70 +
                              (long)(int)((int)puVar75 +
                                         (uint)(UNRECOVERED_JUMPTABLE_37 == (undefined **)0x0)) * 4)
         + 0x100026123);
code_r0x000100026154:
                    /* WARNING: Could not recover jumptable at 0x000100026154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)UNRECOVERED_JUMPTABLE_46)
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46
                         );
    return ppuVar19;
  case (undefined **)0x100026165:
    puVar75 = (uint *)(ulong)((uVar64 & 0x19865c4b) + 0x6885084 & 0x3977af7d);
code_r0x000100026177:
    UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x1f];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100026184;
    (*UNRECOVERED_JUMPTABLE)
              (UNRECOVERED_JUMPTABLE_41,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
               UNRECOVERED_JUMPTABLE_47);
    *(undefined8 *)(ppuVar51[-0x2e] + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001000261c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&LAB_100023add +
                         *(int *)(&DAT_1006d2600 +
                                 (long)(int)((int)puVar75 + (uint)(*(long *)ppuVar51[-0x2f] == 0)) *
                                 4)))();
    return ppuVar19;
  case (undefined **)0x1000261ef:
                    /* WARNING: Could not recover jumptable at 0x0001000261fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000261ca +
                         (int)*(uint *)((long)puVar70 + (long)UNRECOVERED_JUMPTABLE_41 * 4)))();
    return ppuVar19;
  case (undefined **)0x100026246:
    goto switchD_100025d1a_caseD_26246;
  case (undefined **)0x10002627c:
    cRam0000000131690bf3 = cRam0000000131690bf3 + (char)cVar63;
    goto code_r0x000100026282;
  case (undefined **)0x1000262a9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000262f4:
    puVar17 = ppuVar52[-0x53];
    *(uint *)(UNRECOVERED_JUMPTABLE_46 + (long)(puVar17 + 4)) = (uint)ppuVar52[-0x26];
    uVar14 = ((uint)ppuVar52[-0x42] ^ 0x793ec7dc) / 0x1e;
    *(uint *)((long)UNRECOVERED_JUMPTABLE_46 + (long)puVar17 * 8 + 0x24) =
         (uVar14 ^ 0x5dfb3b6f) + (uVar14 & 0xdfb3b6f) * 2 + -0xd5b2024;
    uVar22 = 0xe53d7e14fb57feef;
    ppuVar19 = (undefined **)ppuVar52[-0x29];
    UNRECOVERED_JUMPTABLE_46 = ppuVar19;
code_r0x00010002634d:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_46 & uVar22);
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         (((ulong)ppuVar19 ^ uVar22) + (long)UNRECOVERED_JUMPTABLE_46 * 2 + 0x7bdeffff9ff8073c);
    *(undefined ***)ppuVar52[-0x2e] = UNRECOVERED_JUMPTABLE_47;
    ppuVar65 = (undefined **)puVar75;
LAB_100026371:
    ppuVar19 = (undefined **)
               FUN_10001ff10(ppuVar61,0x2cc289762f9fc832,UNRECOVERED_JUMPTABLE_46,
                             UNRECOVERED_JUMPTABLE_47,ppuVar65);
    return ppuVar19;
  case (undefined **)0x100026369:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002647e:
code_r0x000100026479:
    lVar29 = *(long *)((long)puVar75 + -0x3a5a9c416583c527);
    iVar57 = (int)ppuVar61;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0xf880221e)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0xf880221f)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0xf8802220)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0xf8802221)) = 1;
    *(uint *)UNRECOVERED_JUMPTABLE_46 = (*(uint *)UNRECOVERED_JUMPTABLE_46 + (uVar72 ^ 5)) - 0xdd;
    *(uint *)(ppuVar51 + -0x1d) = 0x3166a97d;
    puVar70 = (uint *)&DAT_1006d2600;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)((uVar72 ^ 5) + 1);
code_r0x0001000264e3:
                    /* WARNING: Could not recover jumptable at 0x0001000264f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)puVar70 +
                                              (long)(int)UNRECOVERED_JUMPTABLE_41 * 4) + 0x1000264d2
                         ))();
    return ppuVar19;
  case (undefined **)0x1000264df:
    *(uint *)((long)(UNRECOVERED_JUMPTABLE_47 + -4) + (long)UNRECOVERED_JUMPTABLE_41) =
         *(int *)((long)(UNRECOVERED_JUMPTABLE_47 + -4) + (long)UNRECOVERED_JUMPTABLE_41) + uVar14;
    goto code_r0x0001000264e3;
  case (undefined **)0x10002652e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000266b3:
    goto switchD_100025d1a_caseD_266b3;
  case (undefined **)0x1000267ee:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000268cd:
    *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x77) =
         *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x77) + (char)cVar63;
                    /* WARNING: Could not recover jumptable at 0x00010002690e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000268cb +
                         (int)*(uint *)((long)puVar70 +
                                       (long)(int)((ppuVar69 == (undefined **)0x7ec08e5aeb2a8122) +
                                                  uVar64) * 4)))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,
                          (long)((long)UNRECOVERED_JUMPTABLE_46 << 0x20 |
                                (ulong)UNRECOVERED_JUMPTABLE_41) %
                          (long)(int)*(uint *)UNRECOVERED_JUMPTABLE_46 & 0xffffffff,0,ppuVar65,
                          0x3165f9b3);
    return ppuVar19;
  case (undefined **)0x1000269c7:
code_r0x0001000269cd:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (long)ppuVar66) = SUB81(ppuVar69,0);
    ppuVar66 = (undefined **)((ulong)ppuVar65 & 0xffffffff);
code_r0x0001000269d4:
    *(byte *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)((int)ppuVar61 + 0xa205f286)) =
         (byte)((ulong)ppuVar66 >> 8) ^ 0x8d;
    *(byte *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)((int)ppuVar61 + 0xa205f287)) =
         (byte)ppuVar65 ^ 0xf7;
    *(int *)((long)UNRECOVERED_JUMPTABLE_46 + (long)UNRECOVERED_JUMPTABLE_45) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_46 + (long)UNRECOVERED_JUMPTABLE_45) + 4;
code_r0x0001000269fe:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(((ulong)puVar78 & 0xffffffff) * 2 & 0x1e2846e84);
    ppuVar61 = (undefined **)0xebe9dd97f1423742;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)&LAB_10002447a;
code_r0x000100026a39:
    ppuVar19 = (undefined **)
               FUN_10002431a(ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                             UNRECOVERED_JUMPTABLE_47);
    return ppuVar19;
  case (undefined **)0x1000269d2:
    goto code_r0x0001000269d4;
  case (undefined **)0x100026aed:
    *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x410e7e3f) =
         *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x410e7e3f) + bVar11;
    out(uVar32,uVar14);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100026b38:
    unaff_R12 = (uint *)(ulong)(uVar72 - 1);
    uVar14 = (uVar40 - 0xc2 | 0xc6) ^ 0x570b3d87;
code_r0x000100026b55:
                    /* WARNING: Could not recover jumptable at 0x000100026b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)puVar78 +
                                              (long)(int)((uint)(ppuVar52[-0xe] ==
                                                                 UNRECOVERED_JUMPTABLE_37
                                                                 [(int)((uint)ppuVar76 ^ 0xd8)] + -1
                                                                && (uint)unaff_R12 != uVar14) +
                                                         (uint)ppuVar76) * 4) + 0x100026b39))();
    return ppuVar19;
  case (undefined **)0x100026baa:
    uVar2 = *(undefined4 *)ppuVar52[-0xb];
    puVar17 = *UNRECOVERED_JUMPTABLE_46;
    iVar57 = *(int *)(UNRECOVERED_JUMPTABLE_47 + -0xb07fd466211e579);
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100026be2;
    uVar14 = (*(code *)unaff_R12)
                       (uVar2,puVar17,iVar57 + -0x5dfa0d7c,ppuVar52 + -0x1f,
                        (code *)((long)ppuVar52 + -100));
    uVar68 = (uVar58 * 2 ^ 0x172) - 4;
                    /* WARNING: Could not recover jumptable at 0x000100026c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                     [(int)(((int)((uVar14 << (((byte)(uVar58 * 2) ^ 0x19) & 0x1f) &
                                                   0xd7ff2efc) + (uVar14 ^ 0x6bff977e) + -0x21120028
                                                  ) < (int)((uVar68 ^ 8) + 0x5aed96eb)) + uVar68)] +
                         0x100026c10))();
    return ppuVar19;
  case (undefined **)0x100026cc0:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x7d) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x7d) + bVar11);
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100026cf6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100026d81:
                    /* WARNING: Could not recover jumptable at 0x000100026d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&DAT_100026d5f + CONCAT71(uVar24,(char)cVar63 + 0x83)))();
    return ppuVar19;
  case (undefined **)0x100026fd9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100026fe5:
    ppuVar52[-0x2f] = (undefined *)((long)puVar75 + 8);
    *(uint *)(ppuVar52 + -0x16) = uVar14;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)*(uint *)((long)puVar70 +
                                      (long)(int)(uVar54 + ((undefined **)puVar75 ==
                                                           (undefined **)0x0)) * 4) + 0x100026fe5);
                    /* WARNING: Could not recover jumptable at 0x000100027023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*UNRECOVERED_JUMPTABLE)
                         (ppuVar61,UNRECOVERED_JUMPTABLE,0,uVar54 + 0xb7ffff69 & 0xffeafbf6);
    return ppuVar19;
  case (undefined **)0x10002713d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002718f:
    goto switchD_100025d1a_caseD_2718f;
  case (undefined **)0x1000271d1:
    goto switchD_100025d1a_caseD_271d1;
  case (undefined **)0x1000272db:
switchD_100025d1a_caseD_25132:
    ppuVar61 = (undefined **)ppuVar52[-0x20];
    ppuVar51 = ppuVar52;
    goto LAB_10002513c;
  case (undefined **)0x10002735b:
    goto code_r0x000100027363;
  case (undefined **)0x10002735e:
code_r0x000100027363:
                    /* WARNING: Could not recover jumptable at 0x00010002736c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)((long)ppuVar65 + (long)UNRECOVERED_JUMPTABLE_45))();
    return ppuVar19;
  case (undefined **)0x1000273b6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000273d1:
    *(code **)((ulong)(uVar13 + 3) - 0x2d0) = (code *)((long)puVar75 + 0xc);
    uVar14 = *(uint *)((long)puVar75 + 0xc) + 0x866b7ec0;
    bVar80 = uVar14 < (uVar53 + 0x792ea7c7 & 0x86d157ff) + 0x8deb5ba3;
    ppuVar66 = (undefined **)(ulong)bVar80;
    ppuVar65 = (undefined **)
               (ulong)(*(uint *)((long)puVar75 + 8) + 0x6d069c05 < 0x8deb5c9e != bVar80);
    ppuVar69 = (undefined **)(ulong)(*(uint *)((long)puVar75 + 8) + 0x6d069c05 < uVar14);
    UNRECOVERED_JUMPTABLE_44 = (uint *)UNRECOVERED_JUMPTABLE_37;
code_r0x000100027429:
    uVar14 = (uint)ppuVar69;
    if ((char)ppuVar65 != '\0') {
      uVar14 = (uint)ppuVar66;
    }
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)*(uint *)((long)puVar70 +
                                      (long)(int)((uVar14 & 0xff) + (int)UNRECOVERED_JUMPTABLE_44) *
                                      4) + 0x1000273d3);
                    /* WARNING: Could not emulate address calculation at 0x00010002743a */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return ppuVar19;
  case (undefined **)0x10002748c:
    goto switchD_100025d1a_caseD_2748c;
  case (undefined **)0x1000274c1:
    goto switchD_100025d1a_caseD_274c1;
  case (undefined **)0x10002783f:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x1000278a5:
    if (!bVar80) {
      pcVar16 = (char *)((long)UNRECOVERED_JUMPTABLE_47 * 5 + -0x11);
      *pcVar16 = *pcVar16 + bVar11;
      goto code_r0x0001000278ac;
    }
    ppuVar51 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_41 | 0x45);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uVar54 + uVar13);
    UNRECOVERED_JUMPTABLE_47 = UNRECOVERED_JUMPTABLE_46;
    ppuVar20 = (undefined **)unaff_R12;
    goto code_r0x000100027913;
  case (undefined **)0x1000278b7:
    goto switchD_100025d1a_caseD_278b7;
  case (undefined **)0x10002792f:
    *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar63;
    *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x43) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x43) | uVar14;
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (byte)*(code *)UNRECOVERED_JUMPTABLE_41 | (byte)cVar63;
    *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar63;
    puVar78 = (uint *)0x0;
    puVar75 = (uint *)UNRECOVERED_JUMPTABLE_45;
    ppuVar20 = UNRECOVERED_JUMPTABLE_37;
LAB_10002793d:
    ppuVar56 = (undefined **)((ulong)ppuVar20 & 0xffffffff);
    ppuVar69 = (undefined **)puVar78;
code_r0x000100027943:
    uVar14 = (uint)ppuVar20;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10002794b;
    UNRECOVERED_JUMPTABLE_41 = _realloc(puVar75,(size_t)ppuVar56);
    if (UNRECOVERED_JUMPTABLE_41 == (undefined **)0x0) {
      *(undefined8 *)((long)ppuVar42 + -8) = 0x100027a2d;
      _free(puVar75);
      ppuVar51 = (undefined **)0xffff5bd4;
    }
    else {
      *(uint *)UNRECOVERED_JUMPTABLE_41 =
           uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      if (8 < uVar14) {
        ppuVar65 = (undefined **)((ulong)ppuVar69 >> 0x18);
        cVar63 = SUB81((ulong)ppuVar69 >> 0x10,0);
        ppuVar56 = ppuVar69;
code_r0x000100027976:
        uVar14 = (uint)ppuVar20;
        uVar68 = 8;
        do {
          while( true ) {
            uVar22 = (ulong)uVar68;
            if (((uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(uVar68 + 7)) |
                (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(uVar68 + 6)) << 8 |
                (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(uVar68 + 5)) << 0x10
                | (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(uVar68 + 4)) <<
                  0x18) == 0x73636869) break;
            uVar68 = uVar68 + ((uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 +
                                                    (ulong)(uVar68 + 3)) |
                              (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 +
                                                   (ulong)(uVar68 + 2)) << 8 |
                              (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + uVar22 + 1) <<
                              0x10 | (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + uVar22)
                                     << 0x18);
            if (uVar14 <= uVar68) goto LAB_100027a02;
          }
          *(code *)((long)UNRECOVERED_JUMPTABLE_41 + uVar22) = SUB81(ppuVar65,0);
          *(code *)((long)UNRECOVERED_JUMPTABLE_41 + uVar22 + 1) = cVar63;
          *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(uVar68 + 2)) =
               SUB81((ulong)ppuVar69 >> 8,0);
          *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)(uVar68 + 3)) = SUB81(ppuVar56,0);
          uVar68 = uVar68 + (int)ppuVar56;
        } while (uVar68 < uVar14);
      }
LAB_100027a02:
      ppuVar51 = (undefined **)0x0;
LAB_100027a19:
      *(undefined ***)unaff_R12 = UNRECOVERED_JUMPTABLE_41;
      *(uint *)ppuVar76 = uVar14;
    }
    return ppuVar51;
  case (undefined **)0x100027a36:
    UNRECOVERED_JUMPTABLE = (code *)UNRECOVERED_JUMPTABLE_41[-0xdededee];
    *(undefined **)((long)ppuVar42 + -8) = &UNK_100027a3c;
    (*UNRECOVERED_JUMPTABLE)();
    ppuVar51 = (undefined **)((long)ppuVar42 + -8);
    *(undefined ***)((long)ppuVar42 + -8) = ppuVar52;
    *(uint **)((long)ppuVar42 + -0x10) = puVar78;
    *(undefined ***)((long)ppuVar42 + -0x18) = ppuVar76;
    *(undefined ***)((long)ppuVar42 + -0x20) = UNRECOVERED_JUMPTABLE_37;
    *(uint **)((long)ppuVar42 + -0x28) = unaff_R12;
    *(uint **)((long)ppuVar42 + -0x30) = puVar75;
    plVar46 = (long *)((long)ppuVar42 + -0xe8);
    *(undefined8 *)((long)ppuVar42 + -0xe0) = extraout_RDX_01;
    *(undefined ***)((long)ppuVar42 + -0xe8) = UNRECOVERED_JUMPTABLE_45;
    ppuVar56 = (undefined **)((ulong)ppuVar61 & 0xffffffff);
    *(undefined8 *)((long)ppuVar42 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
    ppuVar76 = (undefined **)((long)ppuVar42 + -0xd8);
    *(undefined8 *)((long)ppuVar42 + -0xf0) = 0x100027a89;
    FUN_1000cb740(ppuVar76,0,0x80);
    unaff_R12 = (uint *)((long)ppuVar42 + -0x50);
    *(undefined ***)((long)ppuVar42 + -0x50) = ppuVar76;
    uVar14 = (uint)(((ulong)((long)ppuVar42 +
                            ((ulong)unaff_R12 & 0x2de17c3fef3b2f9) * -2 + 0x2de17c3fef3b2a9) ^
                    0xc5f151cf37ceea0) * 0x3df53769);
    *(uint *)((long)ppuVar42 + -0x44) = uVar14 + 0x4fac264b;
    *(uint *)((long)ppuVar42 + -0x48) = uVar14 ^ 8;
    bVar27 = (char)(((ulong)((long)ppuVar42 +
                            ((ulong)unaff_R12 & 0x2de17c3fef3b2f9) * -2 + 0x2de17c3fef3b2a9) ^
                    0xc5f151cf37ceea0) * 0x3df53769) >> 5 | 3;
    cVar9 = (char)((uint)((char)bVar27 * -0x77) >> 8) + bVar27;
    cVar9 = bVar27 + ((cVar9 >> 3) - (cVar9 >> 7)) * -0xf;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(byte)((char)(cVar9 * cVar9 * -0x80) >> 6);
code_r0x000100027b03:
    puVar17 = (&PTR_DAT_10082ee00)[(int)(((char)UNRECOVERED_JUMPTABLE_41 - 0xbU & 0xfe) - 0xe8)];
    *(undefined8 *)((long)plVar46 + -8) = 0x100027b25;
    (*(code *)(puVar17 + -2))(unaff_R12);
    uVar22 = (ulong)((long)ppuVar51 +
                    ((ulong)unaff_R12 & 0x10c75795e1208700) * -2 + 0x10c75795e12086b8) ^
             0x4bfe275f767c5d82;
    ppuVar51[-9] = (undefined *)(uVar22 * -0x295bb3 + 0x3d8c459344aa9757);
    *(uint *)(ppuVar51 + -8) = (int)uVar22 * 0x295bb3 + 0x926a3036;
    ppuVar51[-7] = (undefined *)ppuVar76;
    *(undefined8 *)((long)plVar46 + -8) = 0x100027b7e;
    FUN_1000a30e0(unaff_R12);
    bVar80 = *(uint *)((long)ppuVar51 + -0x3c) == 0x3a3402de;
    iVar57 = *(int *)(&DAT_1006d4690 + (ulong)(bVar80 + 2) * 4);
    switch(bVar80) {
    case true:
      iVar57 = (uint)!bVar80 * 0x1695b9a7 + (uint)bVar80 * -2 + 2;
      uVar22 = (ulong)((long)ppuVar51 +
                      ((ulong)unaff_R12 & 0x74a50af538bdfde2) * -2 + 0x74a50af538bdfd9a) ^
               0x2f9c7a3fafe12760;
      ppuVar51[-7] = (undefined *)ppuVar76;
      ppuVar51[-9] = (undefined *)
                     (((ulong)ppuVar56 ^ 0xbfecef9fdffef75e) +
                      (ulong)((uint)ppuVar56 & 0xdffef75e) * 2 + uVar22 * -0x295bb3 +
                     0x7d9f55f364ab9ff8);
      *(uint *)(ppuVar51 + -8) = (int)uVar22 * 0x295bb3 + iVar57 + 0x926a3036;
      *(undefined8 *)((long)plVar46 + -8) = 0x10002f264;
      FUN_1000a30e0(unaff_R12);
      bVar80 = *(uint *)((long)ppuVar51 + -0x3c) == 0x3a3402de;
      UNRECOVERED_JUMPTABLE =
           (code *)((long)*(int *)(&DAT_1006d4690 + (long)(int)((uint)bVar80 + iVar57) * 4) +
                   0x10002f1d6);
                    /* WARNING: Could not recover jumptable at 0x00010002f28f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*UNRECOVERED_JUMPTABLE)
                           (UNRECOVERED_JUMPTABLE,
                            (long)*(int *)(&DAT_1006d4690 + (long)(int)((uint)bVar80 + iVar57) * 4),
                            bVar80,0);
      return ppuVar19;
    }
    if (*(undefined **)PTR____stack_chk_guard_10082cb58 == ppuVar51[-6]) {
      return (undefined **)(ulong)(*(uint *)((long)ppuVar51 + -0x3c) ^ 0x3a3402de);
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)plVar46 + -8) = &UNK_10005c97d;
    ___stack_chk_fail((long)iVar57 + 0x100027b81,(long)iVar57,0);
  case (undefined **)0x100027d34:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_41 ^ 0x3a);
code_r0x000100027ce0:
    *(uint *)(ppuVar51 + -9) = (uint)UNRECOVERED_JUMPTABLE_47 ^ (uint)UNRECOVERED_JUMPTABLE_46;
    ppuVar51[-0xb] = (undefined *)0x0;
    *(uint *)(ppuVar51 + -7) = ((int)ppuVar51[-0x2a8] - (uint)UNRECOVERED_JUMPTABLE_46) + 0xfef6a9e0
    ;
    ppuVar51[-0xd] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    ppuVar51[-0xf] = (undefined *)UNRECOVERED_JUMPTABLE_44;
    ppuVar51[-0xe] = (undefined *)0x7aef05deffe51d42;
    ppuVar51[-8] = (code *)((long)ppuVar51 + -0x17ac);
    ppuVar51[-10] = (undefined *)ppuVar69;
    ppuVar51[-0xc] = (undefined *)ppuVar65;
    UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x2a3];
    *(undefined **)((long)ppuVar42 + -8) = &UNK_100027d2e;
    (*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Could not recover jumptable at 0x000100027d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100027ca5 +
                         (int)*(uint *)((long)ppuVar73 +
                                       (long)(int)((uint)(*(uint *)(ppuVar51 + -0x10) == 0x3a3402de)
                                                   + (int)puVar75 + 0x15b) * 4)))
                         ((uint)(*(uint *)(ppuVar51 + -0x10) == 0x3a3402de) * 0x15f + (int)puVar75);
    return ppuVar19;
  case (undefined **)0x100027d6d:
    *(byte *)ppuVar61 = (byte)*(code *)ppuVar61 >> 4 | (char)*(code *)ppuVar61 << 4;
    UNRECOVERED_JUMPTABLE_44 = (uint *)((long)UNRECOVERED_JUMPTABLE_47 + 0x44c229ca);
    *UNRECOVERED_JUMPTABLE_44 = *UNRECOVERED_JUMPTABLE_44 >> 0xd | *UNRECOVERED_JUMPTABLE_44 << 0x13
    ;
                    /* WARNING: Could not recover jumptable at 0x000100027d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100027d60 +
                         (int)*(uint *)((long)puVar70 + (long)(int)(uVar68 + uVar64) * 4)))();
    return ppuVar19;
  case (undefined **)0x100027ee4:
    uVar14 = (uint)(-1 < (char)*(code *)(ppuVar52 + -0x38));
                    /* WARNING: Could not recover jumptable at 0x000100027f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100027e60 +
                         (int)*(uint *)((long)ppuVar66 + (long)(int)(uVar64 + uVar14) * 4)))
                         (ppuVar61,&DAT_100027e60 +
                                   (int)*(uint *)((long)ppuVar66 + (long)(int)(uVar64 + uVar14) * 4)
                          ,(((byte)*(code *)(ppuVar52 + -0x38) >> 7) + uVar14) * -0xd + uVar64);
    return ppuVar19;
  case (undefined **)0x1000280cd:
    UNRECOVERED_JUMPTABLE_44 = (uint *)UNRECOVERED_JUMPTABLE_37;
code_r0x0001000280b5:
    puVar75 = (uint *)0xda7fb580;
    ppuVar76 = (undefined **)(ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_45 + 4);
    ppuVar52[-0x51] = UNRECOVERED_JUMPTABLE_45[1];
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         ((long)((long)(ppuVar52 + -0x19f2c8fca975123) +
                ((ulong)(ppuVar52 + -0x19f2c8fca975123) / 3 & 0xfffffffffffffffe) * -3) * 0x10);
    ppuVar52[-0x52] =
         (undefined *)((undefined **)((long)UNRECOVERED_JUMPTABLE_47 + (long)ppuVar52) + -0x4e);
    *(uint *)((long)ppuVar52 + -0x294) = 0x29e01b3b;
code_r0x000100028123:
    *(uint *)(ppuVar52 + -0x4f) = 0xf0e3c17;
    ppuVar52[-0x55] = (undefined *)0x0;
    *(uint *)((long)ppuVar52 + -0x274) = 0x684cc649;
    *(undefined4 *)((long)(ppuVar52 + -0x4e) + (long)UNRECOVERED_JUMPTABLE_47) = 0x44876848;
    *(uint *)((long)ppuVar52 + -0x2b4) = 0xe386d816 - (int)ppuVar76;
    ppuVar52[-0x58] = (code *)((long)UNRECOVERED_JUMPTABLE_47 + (long)ppuVar52) + -0xe8;
                    /* WARNING: Could not recover jumptable at 0x000100028190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                              (long)(int)puVar75 * 4) + 0x1000280ab))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,0x44876848);
    return ppuVar19;
  case (undefined **)0x1000281d7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100028563:
                    /* WARNING: Could not recover jumptable at 0x000100028574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002855e + *(int *)((long)unaff_R12 + (long)(int)uVar14 * 4)))();
    return ppuVar19;
  case (undefined **)0x1000287c4:
    *(undefined ***)((long)ppuVar42 + -8) = ppuVar61;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100028c22:
    out(uVar32,cVar63);
    out((short)*puVar75,cVar63);
    *(uint **)((long)ppuVar42 + -8) = puVar75;
    goto code_r0x000100028c68;
  case (undefined **)0x100028c36:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x45) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x45) + bVar11 + bVar79);
    *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar63;
code_r0x000100028c68:
    *(code *)((long)(ppuVar52 + -0x1a) + (long)ppuVar65) =
         (code)((char)*(code *)((long)(ppuVar52 + -0x1a) + (long)ppuVar65) + 1);
    lVar29 = (long)*(int *)((long)unaff_R12 + (long)(int)UNRECOVERED_JUMPTABLE_45 * 4);
                    /* WARNING: Could not recover jumptable at 0x000100028d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100028bae + lVar29))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,&DAT_100028bae + lVar29,lVar29,ppuVar65,
                          0x1136cffbfaffd5ca);
    return ppuVar19;
  case (undefined **)0x100028d1f:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_41 + 1) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) + uVar68;
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x31);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE >> 1 |
         (uint)((*(uint *)UNRECOVERED_JUMPTABLE & 1) != 0) << 0x1f;
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x1000294a7:
    ppuVar52[-0x29b] = (undefined *)((long)UNRECOVERED_JUMPTABLE_47 + -3);
                    /* WARNING: Could not recover jumptable at 0x0001000294b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)((ulong)UNRECOVERED_JUMPTABLE_41 | 0xca))();
    return ppuVar19;
  case (undefined **)0x10002a11e:
    uVar22 = (ulong)((long)ppuVar52 +
                    ((ulong)ppuVar76 & 0x6acdfc515f45bc36) * -2 + 0x6acdfc515f45bbee) ^
             0x31f48c9bc81966b4;
    ppuVar52[-9] = (code *)((long)UNRECOVERED_JUMPTABLE_41 +
                           uVar22 * -0x295bb3 + (long)UNRECOVERED_JUMPTABLE_47 * 2 +
                           -0x4013200821546080);
    *(uint *)(ppuVar52 + -8) = (int)uVar22 * 0x295bb3 + uVar58 + 0x926a3028;
    ppuVar52[-7] = (undefined *)(ppuVar52 + -0x1a);
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10002a189;
    FUN_1000a30e0(ppuVar76);
    bVar80 = *(uint *)((long)ppuVar52 + -0x3c) == 0x3a3402de;
                    /* WARNING: Could not recover jumptable at 0x00010002a1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002a0ea +
                         *(int *)(&DAT_1006d48d0 + (long)(int)(bVar80 + uVar58) * 4)))
                         (&DAT_10002a0ea +
                          *(int *)(&DAT_1006d48d0 + (long)(int)(bVar80 + uVar58) * 4),
                          (long)*(int *)(&DAT_1006d48d0 + (long)(int)(bVar80 + uVar58) * 4),bVar80,0
                         );
    return ppuVar19;
  case (undefined **)0x10002a279:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002a869:
    if ((long)UNRECOVERED_JUMPTABLE_47 + -1 == 0 || bVar80 == false) {
      ppuVar19 = UNRECOVERED_JUMPTABLE_47 + -0x3d2dae8;
      *(uint *)ppuVar19 = *(uint *)ppuVar19 << 0x1e | *(uint *)ppuVar19 >> 2;
      *(uint *)((long)ppuVar52 + -0x34) = (uint)((long)UNRECOVERED_JUMPTABLE_47 + -1);
      ppuVar52[-8] = (undefined *)puVar75;
      *(uint *)(ppuVar52 + -9) = uVar14 ^ 0x391ff14a;
      *(undefined8 *)((long)ppuVar42 + -8) = 0x10002a889;
      FUN_10009a7a0(ppuVar76);
                    /* WARNING: Could not recover jumptable at 0x00010002a8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_10002a7ae +
                           *(int *)(&DAT_1006e0070 +
                                   (long)(int)((*(uint *)(ppuVar52 + -7) == 0x3a3402de) + uVar72) *
                                   4)))
                           (&UNK_10002a7ae +
                            *(int *)(&DAT_1006e0070 +
                                    (long)(int)((*(uint *)(ppuVar52 + -7) == 0x3a3402de) + uVar72) *
                                    4),
                            (long)*(int *)(&DAT_1006e0070 +
                                          (long)(int)((*(uint *)(ppuVar52 + -7) == 0x3a3402de) +
                                                     uVar72) * 4),
                            *(uint *)(ppuVar52 + -7) == 0x3a3402de,0);
      return ppuVar19;
    }
    return (undefined **)((ulong)ppuVar52 & 0xffffffff);
  case (undefined **)0x10002ab63:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 99) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 99) + -1;
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77);
    *UNRECOVERED_JUMPTABLE =
         (code)((byte)*UNRECOVERED_JUMPTABLE >> (bVar11 & 7) |
               (char)*UNRECOVERED_JUMPTABLE << 8 - (bVar11 & 7));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002ac01:
                    /* WARNING: Could not recover jumptable at 0x00010002ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002abfd +
                         (int)*(uint *)((long)puVar70 +
                                       (ulong)(uint)(int)(short)UNRECOVERED_JUMPTABLE_41 * 4)))();
    return ppuVar19;
  case (undefined **)0x10002acaf:
                    /* WARNING: Could not recover jumptable at 0x00010002acea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002ac45 +
                         *(int *)((ulong)*(uint *)(ppuVar52 + -0x10) +
                                 (long)(int)((uVar58 == 0x3a3402de) + uVar72) * 4)))();
    return ppuVar19;
  case (undefined **)0x10002aec0:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) + -1
    ;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002b01d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002b084:
    iVar57 = (int)CONCAT71((int7)((ulong)ppuVar61 >> 8),uVar14 == 0x68800dcd);
    lVar29 = (long)(int)*(uint *)((long)ppuVar66 + (long)(int)(uVar54 + iVar57) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010002b0ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002b080 + lVar29))
                         (&DAT_10002b080 + lVar29,lVar29,UNRECOVERED_JUMPTABLE_46,
                          ((int)CONCAT71(uVar37,uVar14 != 0x68800dcd) + iVar57) * -0x21f408ba +
                          uVar54);
    return ppuVar19;
  case (undefined **)0x10002b35f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002b49c:
    out(0x82,cVar63);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002b57e:
    uVar14 = (uint)(byte)*(code *)((long)ppuVar52 + -0xcf) | (uVar49 & 0xff) << 8;
                    /* WARNING: Could not recover jumptable at 0x00010002b5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)*(int *)((long)ppuVar69 +
                                        (long)(int)((((uVar14 ^ 0x73d7) + (uVar14 & 0xfffff3d7) * 2
                                                     & 0xffff) == 0x73d7) + uVar64) * 4) +
                         0x10002b57e))();
    return ppuVar19;
  case (undefined **)0x10002b722:
    UNRECOVERED_JUMPTABLE = (code *)((long)puVar75 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x7d);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)cVar63);
                    /* WARNING: Could not recover jumptable at 0x00010002b75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002b659 +
                         (int)*(uint *)((long)puVar70 +
                                       (long)(int)((uVar58 == 0x3a3402de) + uVar72) * 4)))();
    return ppuVar19;
  case (undefined **)0x10002b7f4:
    *(byte *)ppuVar61 =
         (byte)*(code *)ppuVar61 >> (bVar11 & 7) | (char)*(code *)ppuVar61 << 8 - (bVar11 & 7);
    *(byte *)ppuVar61 = (byte)*(code *)ppuVar61 >> 4 | (char)*(code *)ppuVar61 << 4;
    UNRECOVERED_JUMPTABLE_44 = (uint *)(((ulong)ppuVar52 & 0xffffffff) - 0x39);
    *UNRECOVERED_JUMPTABLE_44 = *UNRECOVERED_JUMPTABLE_44 >> 5 | *UNRECOVERED_JUMPTABLE_44 << 0x1b;
    puVar23 = (undefined1 *)((ulong)ppuVar52 & 0xffffff00);
    *puVar23 = *puVar23;
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x48d491c) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x48d491c) + bVar11);
    LOCK();
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0xc) =
         (int)puVar23;
    UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00010002b82b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002b7de +
                         (int)(&switchD_1000577e5::switchdataD_1006dd4b0)[(int)(uVar68 + uVar34)]))
                         (&DAT_10002b7de +
                          (int)(&switchD_1000577e5::switchdataD_1006dd4b0)[(int)(uVar68 + uVar34)],
                          UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,0);
    return ppuVar19;
  case (undefined **)0x10002b960:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = ~(byte)*(code *)UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10002b916:
    uVar22 = (ulong)((uVar54 - *(int *)((long)UNRECOVERED_JUMPTABLE_45 + -0x747fafff)) -
                    (uint)bVar79);
    UNRECOVERED_JUMPTABLE_46 =
         (undefined **)((uVar22 - (uVar22 * 2 + 2 & 0x207e26aab175afae)) + 0x103f135558bad7d8);
    *(byte *)(ppuVar52 + -0x19) = (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x38) ^ 0x10;
    *(byte *)((long)ppuVar52 + -199) = (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x30) ^ 0x3f;
    UNRECOVERED_JUMPTABLE_45 = UNRECOVERED_JUMPTABLE_46;
switchD_100025d1a_caseD_2b97e:
    *(byte *)((long)ppuVar52 + -0xc6) = (byte)((ulong)UNRECOVERED_JUMPTABLE_45 >> 0x28) ^ 0x13;
    *(byte *)((long)ppuVar52 + -0xc5) = (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x20) ^ 0x55;
    *(byte *)((long)ppuVar52 + -0xc4) = (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x18) ^ 0x58;
    *(byte *)((long)ppuVar52 + -0xc3) = (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x10) ^ 0xba;
    uVar22 = (ulong)UNRECOVERED_JUMPTABLE_46 >> 8 ^ 0xd7;
    *(code *)((long)ppuVar52 + -0xc2) = SUB81(uVar22,0);
    *(byte *)((long)ppuVar52 + -0xc1) = (byte)UNRECOVERED_JUMPTABLE_46 ^ 0xd7;
                    /* WARNING: Could not recover jumptable at 0x00010002b9f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002b8cf +
                         (int)(&switchD_100049780::switchdataD_1006dacd0)
                              [(long)UNRECOVERED_JUMPTABLE_47]))
                         (ppuVar61,uVar22,
                          &DAT_10002b8cf +
                          (int)(&switchD_100049780::switchdataD_1006dacd0)
                               [(long)UNRECOVERED_JUMPTABLE_47]);
    return ppuVar19;
  case (undefined **)0x10002b97e:
    goto switchD_100025d1a_caseD_2b97e;
  case (undefined **)0x10002ba40:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar69 + (long)puVar75);
    *(undefined8 *)((long)unaff_R12 + (long)(UNRECOVERED_JUMPTABLE + -0x68557ddf)) = in_XMM8_Qa;
    *(undefined8 *)((code *)((long)unaff_R12 + (long)(UNRECOVERED_JUMPTABLE + -0x68557ddf)) + 8) =
         in_XMM8_Qb;
    *(undefined8 *)((long)unaff_R12 + (long)(UNRECOVERED_JUMPTABLE + -0x68557dcf)) = in_XMM8_Qa;
    *(undefined8 *)((code *)((long)unaff_R12 + (long)(UNRECOVERED_JUMPTABLE + -0x68557dcf)) + 8) =
         in_XMM8_Qb;
    *(undefined8 *)((long)unaff_R12 + (long)(UNRECOVERED_JUMPTABLE + -0x68557dbf)) = in_XMM8_Qa;
    *(undefined8 *)((code *)((long)unaff_R12 + (long)(UNRECOVERED_JUMPTABLE + -0x68557dbf)) + 8) =
         in_XMM8_Qb;
    *(undefined8 *)((long)unaff_R12 + (long)(UNRECOVERED_JUMPTABLE + -0x68557daf)) = in_XMM8_Qa;
    *(undefined8 *)((code *)((long)unaff_R12 + (long)(UNRECOVERED_JUMPTABLE + -0x68557daf)) + 8) =
         in_XMM8_Qb;
    iVar57 = (uint)(UNRECOVERED_JUMPTABLE_41 == (undefined **)0x4) * 0x65 + uVar68;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)ppuVar76 +
                 (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_37 +
                                     (long)(int)(uVar68 + (UNRECOVERED_JUMPTABLE_41 ==
                                                          (undefined **)0x4) + 0x69) * 4));
                    /* WARNING: Could not recover jumptable at 0x00010002ba91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*UNRECOVERED_JUMPTABLE)
                         (UNRECOVERED_JUMPTABLE,UNRECOVERED_JUMPTABLE_45,iVar57,iVar57);
    return ppuVar19;
  case (undefined **)0x10002ba92:
    out(0xa8,uVar14);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002bfac:
    *(uint *)(ppuVar52 + -9) = uVar14;
    ppuVar52[-8] = (undefined *)ppuVar76;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10002bfb8;
    FUN_10009a7a0();
                    /* WARNING: Could not recover jumptable at 0x00010002bfe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002bf69 +
                         *(int *)(&DAT_1006d74d0 +
                                 (long)(int)((*(uint *)(ppuVar52 + -7) == 0x3a3402de) + uVar58) * 4)
                         ))(&DAT_10002bf69 +
                            *(int *)(&DAT_1006d74d0 +
                                    (long)(int)((*(uint *)(ppuVar52 + -7) == 0x3a3402de) + uVar58) *
                                    4),
                            (long)*(int *)(&DAT_1006d74d0 +
                                          (long)(int)((*(uint *)(ppuVar52 + -7) == 0x3a3402de) +
                                                     uVar58) * 4),
                            *(uint *)(ppuVar52 + -7) == 0x3a3402de,0);
    return ppuVar19;
  case (undefined **)0x10002c120:
    puVar75 = (uint *)CONCAT71((int7)((ulong)puVar75 >> 8),0x50);
  case (undefined **)0x10002c125:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uVar54 + (int)puVar75 + uVar68);
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar68 + uVar34);
code_r0x00010002c12b:
                    /* WARNING: Could not recover jumptable at 0x00010002c142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10002c108 +
                         (int)*(uint *)((long)puVar70 +
                                       (long)((int)UNRECOVERED_JUMPTABLE_47 + 0x50b3f9cc) * 4)))
                         (&UNK_10002c108 +
                          (int)*(uint *)((long)puVar70 +
                                        (long)((int)UNRECOVERED_JUMPTABLE_47 + 0x50b3f9cc) * 4),
                          UNRECOVERED_JUMPTABLE_45);
    return ppuVar19;
  case (undefined **)0x10002c12b:
    goto code_r0x00010002c12b;
  case (undefined **)0x10002c3cc:
    bVar27 = (byte)puVar70 ^ (byte)cVar63;
                    /* WARNING: Could not recover jumptable at 0x00010002c407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002c3af +
                         *(int *)((long)ppuVar69 +
                                 (long)(int)(uVar54 + ((byte)(bVar27 - (bVar27 * '\x02' & 0x98)) ==
                                                      '>')) * 4)))
                         (ppuVar61,&DAT_10002c3af +
                                   *(int *)((long)ppuVar69 +
                                           (long)(int)(uVar54 + ((byte)(bVar27 - (bVar27 * '\x02' &
                                                                                 0x98)) == '>')) * 4
                                           ));
    return ppuVar19;
  case (undefined **)0x10002c4b4:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) + -1;
    *(undefined ***)((long)ppuVar42 + -8) = ppuVar52;
    unaff_00084f00 = '\b';
    puVar47 = (undefined1 *)((long)ppuVar42 + -0x10);
    unaff_0008ae00 = (undefined **)((long)ppuVar42 + -0x10);
    puVar50 = (undefined8 *)((long)ppuVar42 + -0x10);
    *(undefined ***)((long)ppuVar42 + -0x10) = ppuVar52;
    cVar9 = '\a';
    do {
      ppuVar52 = ppuVar52 + -1;
      puVar50 = puVar50 + -1;
      *puVar50 = *ppuVar52;
      cVar9 = cVar9 + -1;
      ppuVar19 = UNRECOVERED_JUMPTABLE_41;
      ppuVar42 = (undefined **)puVar47;
    } while ('\0' < cVar9);
code_r0x00010002c4b8:
    lVar29 = (ulong)(byte)(unaff_00084f00 - 1) * -8;
    *(undefined ***)((long)ppuVar42 + lVar29 + -8) = unaff_0008ae00;
    unaff_0008ae00[-9] = (undefined *)(ppuVar19 + 0xfbba8f26dff5eec);
    *(uint *)(unaff_0008ae00 + -8) = uVar68 + (int)puVar75 + 0x926a2fd4;
    *(undefined8 *)((long)ppuVar42 + lVar29 + -0x2958) = 0x10002c4e0;
    FUN_1000a30e0(ppuVar76);
                    /* WARNING: Could not recover jumptable at 0x00010002c4fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002c451 + *(int *)(&DAT_1006d48d0 + (long)(int)puVar75 * 4)))();
    return ppuVar19;
  case (undefined **)0x10002c4bd:
    ppuVar19 = (undefined **)((ulong)puVar75 & 0xffffffff);
    *(undefined2 *)(UNRECOVERED_JUMPTABLE_37 + 9) = in_FPUStatusWord;
    puVar75 = (uint *)UNRECOVERED_JUMPTABLE_41;
    goto code_r0x00010002c4b8;
  case (undefined **)0x10002c518:
                    /* WARNING: Could not recover jumptable at 0x00010002c54b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002c502 +
                         *(int *)(&DAT_1006e0070 +
                                 (long)(int)((uint)(UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1) +
                                            iVar59) * 4)))
                         (&DAT_10002c502 +
                          *(int *)(&DAT_1006e0070 +
                                  (long)(int)((uint)(UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1)
                                             + iVar59) * 4),
                          iVar59 + (uint)(UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1) * 4,
                          (code *)((long)UNRECOVERED_JUMPTABLE_46 + 1));
    return ppuVar19;
  case (undefined **)0x10002c759:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002c7bc:
    lVar29 = (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_37 + (long)(int)(uVar54 + uVar64) * 4)
    ;
                    /* WARNING: Could not recover jumptable at 0x00010002c7e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002c721 + lVar29))
                         (&DAT_10002c721 + lVar29,lVar29,UNRECOVERED_JUMPTABLE_46,
                          (((byte)(((ulong)puVar75 & 0xffffffff) >> 7) & 1) + uVar54) * -0x45e78a50
                          + uVar64);
    return ppuVar19;
  case (undefined **)0x10002c963:
    *(uint *)ppuVar61 = *(uint *)UNRECOVERED_JUMPTABLE_45;
    *(undefined1 *)UNRECOVERED_JUMPTABLE_47 = 0;
    iVar57 = (int)CONCAT71(uVar38,cVar9 == '\0');
    lVar29 = (long)(int)*(uint *)((long)puVar70 + (long)(int)(uVar68 + iVar57) * 4);
    UNRECOVERED_JUMPTABLE = (code *)(lVar29 + 0x10002c965);
                    /* WARNING: Could not recover jumptable at 0x00010002c999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*UNRECOVERED_JUMPTABLE)
                         ((code *)((long)ppuVar61 + (ulong)bVar27 * -8 + 4),iVar57 * 3,
                          UNRECOVERED_JUMPTABLE,lVar29,ppuVar65,ppuVar52[-0x75]);
    return ppuVar19;
  case (undefined **)0x10002ca12:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002cb8c:
                    /* WARNING: Could not recover jumptable at 0x00010002cb8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)ppuVar61 + (long)UNRECOVERED_JUMPTABLE_45))
                         ((code *)((long)ppuVar61 + (long)UNRECOVERED_JUMPTABLE_45));
    return ppuVar19;
  case (undefined **)0x10002cdda:
    lVar29 = (long)*(int *)((long)ppuVar76 + (long)(int)uVar28 * 4);
                    /* WARNING: Could not recover jumptable at 0x00010002cdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002cdca + lVar29))
                         (&DAT_10002cdca + lVar29,UNRECOVERED_JUMPTABLE_45,lVar29,
                          CONCAT71(uVar37,*(code *)((long)puVar70 + 0x60)) ^ 0x3e);
    return ppuVar19;
  case (undefined **)0x10002cf35:
    *(byte *)((long)ppuVar52 + -0xc3) = (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x10) ^ 0xba;
    uVar22 = (ulong)UNRECOVERED_JUMPTABLE_46 >> 8 ^ 0xd7;
    *(code *)((long)ppuVar52 + -0xc2) = SUB81(uVar22,0);
    *(byte *)((long)ppuVar52 + -0xc1) = (byte)UNRECOVERED_JUMPTABLE_46 ^ 0xd7;
                    /* WARNING: Could not recover jumptable at 0x00010002cf72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002ce53 +
                         *(int *)((long)unaff_R12 + (long)UNRECOVERED_JUMPTABLE_47 * 4)))
                         (ppuVar61,uVar22,
                          &DAT_10002ce53 +
                          *(int *)((long)unaff_R12 + (long)UNRECOVERED_JUMPTABLE_47 * 4));
    return ppuVar19;
  case (undefined **)0x10002d1d2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002d320:
    uVar22 = (ulong)(byte)*(code *)((long)ppuVar52 + -0xc9) |
             (ulong)(byte)*(code *)((long)ppuVar52 + -0xca) << 8 |
             (ulong)UNRECOVERED_JUMPTABLE_45 | (ulong)UNRECOVERED_JUMPTABLE_46;
    ppuVar61 = (undefined **)((long)ppuVar66 + -1);
    bVar80 = ((ulong)((long)ppuVar66 + (uVar22 - (uVar22 * 2 & (ulong)ppuVar65))) ^ (ulong)ppuVar61)
             < 0xe;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)((uint)bVar80 * 5);
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)((uint)!bVar80 * 0x28);
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(bVar80 + uVar14);
switchD_100025d1a_caseD_2d36c:
                    /* WARNING: Could not recover jumptable at 0x00010002d382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002d2c1 +
                         *(int *)((long)ppuVar69 + (long)(int)UNRECOVERED_JUMPTABLE_47 * 4)))
                         (ppuVar61,(uVar14 - (int)UNRECOVERED_JUMPTABLE_45) +
                                   (int)UNRECOVERED_JUMPTABLE_46 * 2,UNRECOVERED_JUMPTABLE_46,
                          &DAT_10002d2c1 +
                          *(int *)((long)ppuVar69 + (long)(int)UNRECOVERED_JUMPTABLE_47 * 4));
    return ppuVar19;
  case (undefined **)0x10002d36c:
    goto switchD_100025d1a_caseD_2d36c;
  case (undefined **)0x10002d3df:
    *(code *)((long)UNRECOVERED_JUMPTABLE_45 + 0xf) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_45 + 0xf) & 0x6f);
    puVar50 = (undefined8 *)((long)ppuVar42 + -8);
    puVar48 = (undefined8 *)((long)ppuVar42 + -8);
    *(undefined ***)((long)ppuVar42 + -8) = ppuVar52;
    cVar9 = '\x1b';
    do {
      ppuVar52 = ppuVar52 + -1;
      puVar50 = puVar50 + -1;
      *puVar50 = *ppuVar52;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    *(undefined1 **)((long)ppuVar42 + -0xe8) = (undefined1 *)((long)ppuVar42 + -8);
    puVar50 = (undefined8 *)((long)ppuVar42 + -0x1056);
    *(undefined1 **)((long)ppuVar42 + -0x1056) = (undefined1 *)((long)ppuVar42 + -8);
    cVar9 = '\x1a';
    do {
      puVar48 = puVar48 + -1;
      puVar50 = puVar50 + -1;
      *puVar50 = *puVar48;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    *(undefined1 **)((long)ppuVar42 + -0x112e) = (undefined1 *)((long)ppuVar42 + -0x1056);
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10002d486:
    *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x73) =
         *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x73) + (char)cVar63;
    *(byte *)((long)UNRECOVERED_JUMPTABLE_41 + -1) =
         ((char)ppuVar61 + 'Z') * (byte)UNRECOVERED_JUMPTABLE_46;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)ppuVar66 +
                 (long)(int)*(uint *)((long)puVar78 +
                                     (long)(int)((UNRECOVERED_JUMPTABLE_47 == (undefined **)0x0) +
                                                uVar54) * 4));
                    /* WARNING: Could not recover jumptable at 0x00010002d4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*UNRECOVERED_JUMPTABLE)
                         (uVar54 + (uint)(UNRECOVERED_JUMPTABLE_47 == (undefined **)0x0) * 2,
                          UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE,
                          (long)UNRECOVERED_JUMPTABLE_47 + 2);
    return ppuVar19;
  case (undefined **)0x10002d6de:
    *(byte *)ppuVar61 = (byte)*(code *)ppuVar61 >> 7 | (char)*(code *)ppuVar61 << 1;
    puVar50 = (undefined8 *)((long)ppuVar42 + -8);
    *(undefined ***)((long)ppuVar42 + -8) = ppuVar52;
    cVar9 = '\x0e';
    do {
      ppuVar52 = ppuVar52 + -1;
      puVar50 = puVar50 + -1;
      *puVar50 = *ppuVar52;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    *(undefined1 **)((long)ppuVar42 + -0x80) = (undefined1 *)((long)ppuVar42 + -8);
    puVar17 = (&PTR_DAT_10082ee00)
              [(int)((byte)(((byte)(((uint)(byte)((char)(uVar68 >> 0xc) + (char)cVar63 | 0x92) *
                                     -0x14 & 0xff) * 0x19 >> 9) & 0xc) * '\t' + 0x62) - 0x7c)];
    *(undefined8 *)((long)ppuVar42 + -0xe949) = 0x10002d728;
    (*(code *)(puVar17 + -2))(ppuVar76);
    *(ulong *)((long)ppuVar42 + -0x50) =
         ((ulong)((long)ppuVar42 + ((ulong)ppuVar76 & 0x47f0011b05a640ba) * -2 + 0x47f0011b05a6406a)
         ^ 0x1cc971d192fa9a38) * -0x295bb3 + 0x3d8c459344aa9757;
    *(int *)((long)ppuVar42 + -0x48) =
         (int)((ulong)((long)ppuVar42 +
                      ((ulong)ppuVar76 & 0x47f0011b05a640ba) * -2 + 0x47f0011b05a6406a) ^
              0x1cc971d192fa9a38) * 0x295bb3 + -0x6d95cfca;
    *(uint **)((long)ppuVar42 + -0x40) = puVar75;
    *(undefined8 *)((long)ppuVar42 + -0xe949) = 0x10002d781;
    FUN_1000a30e0(ppuVar76);
    uVar14 = *(uint *)((long)ppuVar42 + -0x44);
    switch(uVar14 == 0x3a3402de) {
    case true:
      iVar57 = (uint)(uVar14 == 0x3a3402de) * 0x54166088 + -0x5416607e;
      *(ulong *)((long)ppuVar42 + -0x50) =
           ((ulong)unaff_R12 & 0xffffffff ^ 0xffbd65bbdfaad7f7) + (ulong)(uVar72 & 0xdfaad7f7) * 2 +
           ((ulong)((long)ppuVar42 +
                   ((ulong)ppuVar76 & 0x7e8b5227f472048a) * -2 + 0x7e8b5227f472043a) ^
           0x25b222ed632ede08) * -0x295bb3 + 0x3dcedfd764ffbf5f;
      *(int *)((long)ppuVar42 + -0x48) =
           (int)((ulong)((long)ppuVar42 +
                        ((ulong)ppuVar76 & 0x7e8b5227f472048a) * -2 + 0x7e8b5227f472043a) ^
                0x25b222ed632ede08) * 0x295bb3 + iVar57 + -0x6d95cfd4;
      *(undefined1 **)((long)ppuVar42 + -0x40) = (undefined1 *)((long)ppuVar42 + -0xd8);
      *(undefined8 *)((long)ppuVar42 + -0xe949) = 0x10004ee3d;
      FUN_1000a30e0(ppuVar76);
      UNRECOVERED_JUMPTABLE =
           (code *)((long)(int)(&switchD_10002d7a3::switchdataD_1006df9b0)
                               [(int)((uint)(*(int *)((long)ppuVar42 + -0x44) == 0x3a3402de) +
                                     iVar57)] + 0x10004edac);
                    /* WARNING: Could not recover jumptable at 0x00010004ee67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*UNRECOVERED_JUMPTABLE)
                           (UNRECOVERED_JUMPTABLE,
                            (long)(int)(&switchD_10002d7a3::switchdataD_1006df9b0)
                                       [(int)((uint)(*(int *)((long)ppuVar42 + -0x44) == 0x3a3402de)
                                             + iVar57)],
                            *(int *)((long)ppuVar42 + -0x44) == 0x3a3402de,0);
      return ppuVar19;
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)((long)ppuVar42 + -0x38)) {
      return (undefined **)(ulong)(uVar14 ^ 0x3a3402de);
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)ppuVar42 + -0xe949) = &UNK_100059edd;
    ___stack_chk_fail();
  case (undefined **)0x10002d9f7:
                    /* WARNING: Could not recover jumptable at 0x00010002d9fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(ulong)(uVar68 + uVar14))();
    return ppuVar19;
  case (undefined **)0x10002dc1a:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10002dda4:
                    /* WARNING: Could not recover jumptable at 0x00010002ddb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002dd9b +
                         *(uint *)((long)UNRECOVERED_JUMPTABLE_47 +
                                  (long)UNRECOVERED_JUMPTABLE_41 * 4)))
                         (ppuVar61,&DAT_10002dd9b +
                                   *(uint *)((long)UNRECOVERED_JUMPTABLE_47 +
                                            (long)UNRECOVERED_JUMPTABLE_41 * 4));
    return ppuVar19;
  case (undefined **)0x10002df10:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + 9);
    *UNRECOVERED_JUMPTABLE =
         (code)((byte)*UNRECOVERED_JUMPTABLE >> 1 | (char)*UNRECOVERED_JUMPTABLE << 7);
    puVar50 = (undefined8 *)((long)ppuVar42 + -8);
    *(undefined ***)((long)ppuVar42 + -8) = ppuVar52;
    cVar9 = '\v';
    do {
      ppuVar52 = ppuVar52 + -1;
      puVar50 = puVar50 + -1;
      *puVar50 = *ppuVar52;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    *(undefined1 **)((long)ppuVar42 + -0x68) = (undefined1 *)((long)ppuVar42 + -8);
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x46) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x46) + bVar11);
    *(uint *)ppuVar61 = (uint)(undefined1 *)((long)ppuVar42 + -0x8db0);
    UNRECOVERED_JUMPTABLE_41[-1] = (undefined1 *)((long)ppuVar42 + -8);
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar61 + (ulong)bVar27 * -8 + 0x21482271);
    *(int *)UNRECOVERED_JUMPTABLE = -*(int *)UNRECOVERED_JUMPTABLE;
    return (undefined **)((ulong)((long)ppuVar42 + -0x8db0) & 0xffffffff);
  case (undefined **)0x10002df3f:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10002e1ee:
    *(uint *)ppuVar61 = (uint)ppuVar42;
    UNRECOVERED_JUMPTABLE_41[-1] = (undefined *)ppuVar52;
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar61 + (ulong)bVar27 * -8 + 0x21482271);
    *(int *)UNRECOVERED_JUMPTABLE = -*(int *)UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_44 = (uint *)(((ulong)ppuVar42 & 0xffffffff) + 0x29);
    *UNRECOVERED_JUMPTABLE_44 = *UNRECOVERED_JUMPTABLE_44 >> 10 | *UNRECOVERED_JUMPTABLE_44 << 0x16;
    *(code *)((long)(ppuVar52 + -0x38) + (long)ppuVar65) =
         (code)((char)*(code *)((long)(ppuVar52 + -0x38) + (long)ppuVar65) + 1);
                    /* WARNING: Could not recover jumptable at 0x00010002e2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002e126 + *(int *)(&DAT_1006d5920 + (long)(int)uVar72 * 4)))();
    return ppuVar19;
  case (undefined **)0x10002e357:
    *(code *)(UNRECOVERED_JUMPTABLE_45 + 0x61791a9) = cVar26;
    if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1 ||
        (char)((char)cVar63 + (char)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8)) == '\0') {
      *(code *)((long)ppuVar52 + (long)((long)UNRECOVERED_JUMPTABLE_45 + -0x17437869)) =
           DAT_2abc88dd;
      iVar57 = (uint)((undefined **)puVar75 == (undefined **)0x4) * 0x2308030f + uVar28;
      UNRECOVERED_JUMPTABLE =
           (code *)((long)ppuVar76 +
                   (long)(int)*(uint *)((long)ppuVar66 +
                                       (long)(int)(((undefined **)puVar75 == (undefined **)0x4) +
                                                   uVar28 + 0x23080308) * 4));
                    /* WARNING: Could not recover jumptable at 0x00010002e3af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*UNRECOVERED_JUMPTABLE)
                           (iVar57,UNRECOVERED_JUMPTABLE_45,iVar57,UNRECOVERED_JUMPTABLE);
      return ppuVar19;
    }
    uVar22 = (ulong)ppuVar69 ^ (ulong)ppuVar66;
    bVar80 = uVar22 < ((ulong)puVar75 ^ (ulong)ppuVar66);
    iVar57 = uVar54 + bVar80;
                    /* WARNING: Could not recover jumptable at 0x00010002e31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&LAB_10002e2ea +
                         (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_37 + (long)iVar57 * 4)))
                         (uVar22,iVar57,bVar80 * '\x05',
                          &LAB_10002e2ea +
                          (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_37 + (long)iVar57 * 4));
    return ppuVar19;
  case (undefined **)0x10002e937:
    if (!bVar79 && !bVar80) {
      *(int *)((long)UNRECOVERED_JUMPTABLE_47 + 0x3e383fb) =
           *(int *)((long)UNRECOVERED_JUMPTABLE_47 + 0x3e383fb) + -1;
    }
    bVar80 = UNRECOVERED_JUMPTABLE_45 < (undefined **)0x3;
                    /* WARNING: Could not recover jumptable at 0x00010002e973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002e921 +
                         *(int *)((long)ppuVar76 + (long)(int)(iVar59 + (uint)bVar80) * 4)))
                         (ppuVar61,(uint)bVar80 + (uint)bVar80 * 10 + (uint)!bVar80 * -3 + iVar59,
                          UNRECOVERED_JUMPTABLE_46,
                          &DAT_10002e921 +
                          *(int *)((long)ppuVar76 + (long)(int)(iVar59 + (uint)bVar80) * 4));
    return ppuVar19;
  case (undefined **)0x10002e9f2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002eaf0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002f070:
                    /* WARNING: Could not recover jumptable at 0x00010002f095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)ppuVar66 +
                         (long)*(int *)(&DAT_1006d48d0 +
                                       (long)(int)(((undefined **)puVar75 == (undefined **)0x4) +
                                                  uVar14) * 4)))
                         ((code *)((long)ppuVar66 +
                                  (long)*(int *)(&DAT_1006d48d0 +
                                                (long)(int)(((undefined **)puVar75 ==
                                                            (undefined **)0x4) + uVar14) * 4)),
                          uVar54 + 4,UNRECOVERED_JUMPTABLE_46,
                          uVar14 + (uint)((undefined **)puVar75 == (undefined **)0x4) * 4);
    return ppuVar19;
  case (undefined **)0x10002f46d:
    uVar22 = (ulong)((long)ppuVar52 +
                    ((ulong)ppuVar76 & 0x42b6a46fa440a1a1) * -2 + 0x42b6a46fa440a159) ^
             0x198fd4a5331c7b23;
    *(uint *)(ppuVar52 + -8) = (int)uVar22 * 0x295bb3 + uVar58 + 0x926a3030;
    ppuVar52[-9] = (undefined *)
                   (((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff ^ (ulong)UNRECOVERED_JUMPTABLE_41)
                    + ((ulong)UNRECOVERED_JUMPTABLE_46 & (ulong)UNRECOVERED_JUMPTABLE_41) * 2 +
                    uVar22 * -0x295bb3 + 0x3f9c5fb7f6ebdfff);
    ppuVar52[-7] = (undefined *)(ppuVar52 + -0x1a);
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10002f4e1;
    FUN_1000a30e0(ppuVar76);
    bVar80 = *(uint *)((long)ppuVar52 + -0x3c) == 0x3a3402de;
    lVar29 = (long)*(int *)((long)unaff_R12 + (long)(int)(bVar80 + uVar58) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010002f50b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002f44c + lVar29))(&DAT_10002f44c + lVar29,lVar29,bVar80,0);
    return ppuVar19;
  case (undefined **)0x10002f5e4:
    ppuVar52[-9] = (undefined *)(CONCAT71(uVar24,(char)cVar63 + 0x42) + -0x213300499110808);
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10002f5fc;
    FUN_1000a30e0();
                    /* WARNING: Could not recover jumptable at 0x00010002f61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10002f571 +
                         (int)(&switchD_1000451f5::switchdataD_1006dc670)[(int)uVar58]))();
    return ppuVar19;
  case (undefined **)0x100030057:
    *(uint *)UNRECOVERED_JUMPTABLE_41 = *(int *)UNRECOVERED_JUMPTABLE_41 - uVar14;
    ppuVar52[-9] = (code *)((long)UNRECOVERED_JUMPTABLE_41 +
                           (-0x200800900440a9 - (long)UNRECOVERED_JUMPTABLE_47));
    ppuVar52[-7] = (undefined *)(ppuVar52 + -0x1a);
    *(uint *)(ppuVar52 + -8) = uVar68 + uVar58 + 0x926a302b;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10003008e;
    FUN_1000a30e0(ppuVar76);
                    /* WARNING: Could not recover jumptable at 0x0001000300c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100030009 +
                         *(int *)(&DAT_1006d8470 +
                                 (long)(int)((*(uint *)((long)ppuVar52 + -0x3c) == 0x3a3402de) +
                                            uVar58) * 4)))();
    return ppuVar19;
  }
  UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)((int)puVar78 - 8);
code_r0x000100025cae:
  UNRECOVERED_JUMPTABLE_47 = (undefined **)((long)puVar75 + 0xc);
  ppuVar52[-0x2e] = (undefined *)UNRECOVERED_JUMPTABLE_47;
  goto code_r0x000100025cb9;
switchD_100025d1a_caseD_25cce:
  ppuVar52 = (undefined **)*ppuVar51;
  ppuVar42 = ppuVar51 + 1;
  UNRECOVERED_JUMPTABLE_37 = ppuVar73;
  goto code_r0x000100025ccf;
switchD_100025d1a_caseD_25d19:
  bVar79 = false;
  goto switchD_100025d1a_switchD;
code_r0x000100025cb1:
  *(uint *)(ppuVar52 + -0x2e) = uVar68;
code_r0x000100025cb9:
  UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)*(uint *)((long)puVar75 + 8);
  UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)*(uint *)((long)puVar75 + 0xc);
switchD_100025d1a_caseD_25cbf:
  ppuVar61 = (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_46 + 0x4a309dde);
  ppuVar65 = (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_41 + 0x6b737ea5);
  ppuVar66 = (undefined **)0x0;
code_r0x000100025ccf:
  bVar80 = (uint)ppuVar61 < 0xa82aab56;
  ppuVar66 = (undefined **)CONCAT71((int7)((ulong)ppuVar66 >> 8),bVar80);
  uVar14 = (uint)UNRECOVERED_JUMPTABLE_45 ^ 0xa82aab42;
  ppuVar69 = (undefined **)(ulong)CONCAT31((int3)(uVar14 >> 8),(uint)ppuVar65 < uVar14 != bVar80);
  puVar70 = (uint *)0x0;
switchD_100025d1a_caseD_25cf0:
  if ((char)ppuVar69 == '\0') {
    ppuVar66 = (undefined **)
               (CONCAT71((int7)((ulong)puVar70 >> 8),(uint)ppuVar65 < (uint)ppuVar61) & 0xffffffff);
  }
  ppuVar61 = (undefined **)
             (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                        [((uint)ppuVar66 & 0xff) + (int)puVar78];
  UNRECOVERED_JUMPTABLE_44 = &switchD_10001f9d9::switchdataD_1006d2190;
  ppuVar56 = UNRECOVERED_JUMPTABLE_37;
  goto code_r0x000100025d10;
code_r0x000100020cc4:
  bVar81 = uVar68 < uVar14;
  bVar83 = uVar68 == uVar14;
  goto code_r0x000100020cc6;
code_r0x000100022517:
  out(uVar33,bVar11);
  goto code_r0x0001000224b7;
switchD_10001997c_caseD_1f50b:
  puVar17 = ppuVar19[-0x21];
  ppuVar19[-0xb] = (undefined *)UNRECOVERED_JUMPTABLE_46;
  UNRECOVERED_JUMPTABLE = (code *)UNRECOVERED_JUMPTABLE_47[(int)UNRECOVERED_JUMPTABLE_41];
  *(undefined8 *)((long)ppuVar42 + -8) = 0x10001f51b;
  uVar14 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE_37,puVar17);
  puVar70 = &switchD_10001f9d9::switchdataD_1006d2190;
  UNRECOVERED_JUMPTABLE_37 =
       (undefined **)
       (ulong)((uVar14 ^ 0x7b7ea97f) +
              (((uint)puVar78 ^ 0xf6fd5272) & uVar14 << ((char)puVar75 + 0x97U & 0x1f)));
  ppuVar71 = unaff_RBX;
code_r0x00010001f53f:
  UNRECOVERED_JUMPTABLE_44 = (uint *)(ulong)((int)UNRECOVERED_JUMPTABLE_37 + 0xb5e7fffe);
  UNRECOVERED_JUMPTABLE_41 = (undefined **)0x0;
  goto code_r0x00010001f548;
code_r0x00010002286d:
  UNRECOVERED_JUMPTABLE_47 = (undefined **)((long)UNRECOVERED_JUMPTABLE_47 + -1);
  if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x0 || !bVar81) {
code_r0x00010002286f:
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)(ppuVar61);
    return ppuVar19;
  }
code_r0x0001000227f0:
  UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_41 | 0x48);
  *(uint *)(ppuVar19 + -0x22) = (uint)UNRECOVERED_JUMPTABLE_41;
  puVar75 = (uint *)unaff_RBX;
  ppuVar51 = ppuVar19;
  UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar71;
  ppuVar56 = (undefined **)puVar78;
  goto code_r0x0001000227f2;
code_r0x0001000277a6:
  *ppuVar61 = *UNRECOVERED_JUMPTABLE_45;
  ppuVar61 = (undefined **)(ulong)((int)ppuVar20 + 8);
  ppuVar51 = (undefined **)0x0;
  puVar23 = (undefined1 *)ppuVar42;
  if (8 < (uint)UNRECOVERED_JUMPTABLE_46) goto code_r0x0001000277bd;
  goto LAB_100027906;
code_r0x0001000277bd:
  ppuVar52[-10] = (undefined *)ppuVar20;
  unaff_R12 = (uint *)0x8;
  ppuVar52[-0xc] = (undefined *)UNRECOVERED_JUMPTABLE_45;
  ppuVar52[-0xb] = (undefined *)UNRECOVERED_JUMPTABLE_46;
  ppuVar19 = ppuVar52;
  ppuVar65 = UNRECOVERED_JUMPTABLE_45;
  goto LAB_1000277f7;
code_r0x000100022321:
  uVar49 = (uint)ppuVar76;
  UNRECOVERED_JUMPTABLE_47 = &PTR__bootstrap_look_up_10082e9f0;
  UNRECOVERED_JUMPTABLE_46 =
       (undefined **)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar49 - 0x1f)] + -3);
  puVar75 = (uint *)ppuVar76;
code_r0x000100022339:
  puVar17 = UNRECOVERED_JUMPTABLE_47[uVar49 ^ 0x24];
  puVar21 = ppuVar19[-0x44];
  ppuVar19[-0x1d] = (undefined *)UNRECOVERED_JUMPTABLE_46;
  *(undefined **)((long)ppuVar42 + -8) = &UNK_100022354;
  uVar14 = (*(code *)UNRECOVERED_JUMPTABLE_46)(puVar17 + -3,puVar21);
  ppuVar65 = (undefined **)&DAT_1006d2600;
  UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar14 ^ 0xee6dddb9);
  UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uVar14 << (((byte)ppuVar56 ^ 0x59) & 0x1f));
code_r0x00010002236b:
  iVar57 = (int)puVar75;
  uVar14 = *(uint *)((long)ppuVar65 +
                    (ulong)((uint)(((uint)UNRECOVERED_JUMPTABLE_41 & 0xdcdbbb72) +
                                   (int)UNRECOVERED_JUMPTABLE_46 == -0x11922247) + iVar57) * 4);
  UNRECOVERED_JUMPTABLE_41 = (undefined **)(&UNK_10002230f + (int)uVar14);
  switch(UNRECOVERED_JUMPTABLE_41) {
  case (undefined **)0x100023294:
    ppuVar42 = (undefined **)((long)ppuVar42 + 8);
    ppuVar76 = (undefined **)(ulong)(iVar57 + 0x58e83487);
    ppuVar56 = (undefined **)(ulong)(iVar57 + 0x58e8348c);
    break;
  case (undefined **)0x100024378:
    (&UNK_100022372)[(int)uVar14] = (&UNK_100022372)[(int)uVar14] + '\x0f';
    ppuVar51 = (undefined **)*ppuVar19;
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar71;
    ppuVar76 = (undefined **)puVar75;
code_r0x00010002431a:
    uVar14 = (int)ppuVar76 + 0xdc871091U & 0x2378ef76;
    *(uint *)(ppuVar51 + -0xb) = *(uint *)(ppuVar51 + -0x15) + 0xce995683;
    ppuVar51[-0xf] = ppuVar51[-0x27];
    ppuVar51[-9] = (undefined *)(ulong)(*(uint *)((long)ppuVar51 + -0x94) + 0xce995683);
    UNRECOVERED_JUMPTABLE_47 = (undefined **)&DAT_10001e5d0;
    lVar29 = (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                 (long)(int)(uVar14 + (UNRECOVERED_JUMPTABLE_41 < unaff_R12)) * 4) +
             0x100024370;
    switch(lVar29) {
    case 0x10001ef08:
code_r0x00010001ef08:
                    /* WARNING: Could not recover jumptable at 0x00010001ef0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE_41 + lVar29))();
      return ppuVar19;
    case 0x100025f7b:
      ppuVar51[-0x57] =
           (code *)((long)ppuVar65 + (0x100024370 - ((ulong)UNRECOVERED_JUMPTABLE_46 & 0x486e0)));
      ppuVar51[-0x56] = (code *)((long)ppuVar66 + (long)ppuVar51[-0x4e]);
      puVar75 = (uint *)&DAT_1006d2600;
    }
LAB_1000245c1:
    ppuVar51[-0x1d] = (undefined *)ppuVar69;
                    /* WARNING: Could not recover jumptable at 0x0001000245ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)puVar75 +
                                              (long)(int)(uVar14 + (UNRECOVERED_JUMPTABLE_41 <
                                                                   UNRECOVERED_JUMPTABLE_47)) * 4) +
                         0x1000245c1))();
    return ppuVar19;
  }
  goto code_r0x000100022321;
code_r0x0001000237c1:
  uVar22 = (ulong)ppuVar51 & 0xffffffff;
  ppuVar51 = (undefined **)(ulong)uVar13;
  pcVar16 = (char *)(uVar22 - 0x73);
  *pcVar16 = *pcVar16 + (char)cVar26;
  goto code_r0x00010002374a;
code_r0x000100023766:
  plVar43 = (long *)(ppuVar42 + -1);
  ppuVar42 = ppuVar42 + -1;
  *plVar43 = 0;
  goto code_r0x00010002374a;
code_r0x00010002270d:
  uVar2 = *(undefined4 *)ppuVar51[-0x44];
  UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x2c];
  ppuVar42[-1] = (undefined *)0x10002272a;
  uVar13 = (*UNRECOVERED_JUMPTABLE)(uVar2,(code *)((long)ppuVar51 + -0x25c));
  ppuVar65 = (undefined **)&DAT_1006d2600;
  UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar13 ^ (uint)ppuVar56 & 0xbb68b6fe);
  UNRECOVERED_JUMPTABLE_46 = extraout_RDX;
code_r0x000100022736:
  UNRECOVERED_JUMPTABLE_41 =
       (undefined **)
       (&UNK_100022703 +
       (int)*(uint *)((long)ppuVar65 +
                     (long)(int)((uint)(((uint)UNRECOVERED_JUMPTABLE_47 ^ 0xfef9da5) +
                                        (uVar13 & 0xfef9dfd) * 2 == 0xfef9dfd) + (int)ppuVar76) * 4)
       );
  switch(UNRECOVERED_JUMPTABLE_41) {
  case (undefined **)0x10002476c:
    *(code *)((long)puVar75 + -0x3d7ee60a) = (code)0xbd;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)*ppuVar42;
    ppuVar65 = (undefined **)&UNK_10001f170;
    ppuVar69 = (undefined **)
               (ulong)((uint)UNRECOVERED_JUMPTABLE_46 <
                      ((uint)UNRECOVERED_JUMPTABLE_41 & *(uint *)((long)ppuVar51 + 0x234e1335)));
    ppuVar66 = (undefined **)0xf99583ef;
    uVar68 = 0x74b7c10 << (((char)UNRECOVERED_JUMPTABLE_45 - 4U ^ 0xb2) & 0x1f) & 0xfdbdfffc;
code_r0x0001000247ba:
    uVar14 = uVar68 + (int)ppuVar66 + 0x86444ebe;
    ppuVar76 = (undefined **)(ulong)((uint)UNRECOVERED_JUMPTABLE_46 < uVar14);
    if (SUB81(ppuVar69,0) != uVar14 < 0x85234ebd) {
      ppuVar76 = (undefined **)(ulong)(uVar14 < 0x85234ebd);
    }
switchD_100020322_caseD_247e5:
                    /* WARNING: Could not recover jumptable at 0x0001000247fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)ppuVar65 +
                         (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                    [(int)(((uint)ppuVar76 & 0xff) + (int)UNRECOVERED_JUMPTABLE_45)]
                         ))();
    return ppuVar19;
  }
  goto code_r0x000100023688;
switchD_100025d1a_caseD_1fdee:
  ppuVar19[-0x1e] = (undefined *)ppuVar61;
  ppuVar19[-0x21] = (undefined *)UNRECOVERED_JUMPTABLE_41;
  ppuVar19 = (undefined **)switchD_100020322::caseD_2214a();
  return ppuVar19;
switchD_100025d1a_caseD_24cc8:
  ppuVar19 = (undefined **)
             FUN_10002431a(ppuVar61,UNRECOVERED_JUMPTABLE_45,&DAT_10001d52d,
                           (long)UNRECOVERED_JUMPTABLE_47 * 2,0x1e2846e84);
  return ppuVar19;
code_r0x000100020674:
                    /* WARNING: Could not recover jumptable at 0x000100020682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_100020648 +
                       (int)*(uint *)((long)ppuVar65 + (long)UNRECOVERED_JUMPTABLE_41 * 4)))();
  return ppuVar19;
code_r0x0001000212d1:
                    /* WARNING: Could not recover jumptable at 0x0001000212ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_100021256 +
                       *(int *)((long)unaff_R12 + (long)(int)(((uint)ppuVar69 & 0xff) + uVar28) * 4)
                       ))(UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                          &DAT_100021256 +
                          *(int *)((long)unaff_R12 +
                                  (long)(int)(((uint)ppuVar69 & 0xff) + uVar28) * 4));
  return ppuVar19;
code_r0x000100023af0:
                    /* WARNING: Could not recover jumptable at 0x000100023b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&LAB_100023add +
                       (int)*(uint *)((long)ppuVar76 +
                                     ((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff) * 4)))
                       (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                        &LAB_100023add +
                        (int)*(uint *)((long)ppuVar76 +
                                      ((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff) * 4));
  return ppuVar19;
code_r0x0001000209a6:
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x0001000196b5:
  uVar68 = (uint)((uint)ppuVar71 < (uint)ppuVar65);
  if ((char)ppuVar56 != '\0') {
    uVar68 = uVar14;
  }
  *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (long)ppuVar76) =
       *(code *)((long)UNRECOVERED_JUMPTABLE_46 + (long)ppuVar76);
                    /* WARNING: Could not recover jumptable at 0x0001000196ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&UNK_100019680 +
                       (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_47 +
                                     (long)(int)((uVar68 & 0xff) + (int)UNRECOVERED_JUMPTABLE_37) *
                                     4)))();
  return ppuVar19;
switchD_100025d1a_caseD_23c6f:
  uVar14 = (uint)(!bVar79 && !bVar80);
  if ((char)ppuVar66 != '\0') {
    uVar14 = (uint)puVar70;
  }
                    /* WARNING: Could not recover jumptable at 0x000100023c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)((long)UNRECOVERED_JUMPTABLE_45 +
                       (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                  [(int)((int)UNRECOVERED_JUMPTABLE_41 + 0x48150571 +
                                        (uVar14 & 0xff))]))();
  return ppuVar19;
code_r0x00010001ecbe:
  do {
    UNRECOVERED_JUMPTABLE_47 = (undefined **)((long)UNRECOVERED_JUMPTABLE_47 + -1);
  } while (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x0 && !bVar81);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x00010001b951:
  uVar14 = *(int *)((long)ppuVar20 + 0xc) + 0x3e7352de;
  uVar68 = (uVar34 - 0x97 | 0x94) + *(int *)(ppuVar20 + 1) + 0x33fbbe8d;
  bVar80 = uVar14 < 0x88751e61;
  if (uVar68 < uVar34 + 0x88751da0 == uVar14 < 0x88751e61) {
    bVar80 = uVar68 < uVar14;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001b9be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&caseD_1b944_1 +
                       *(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(bVar80 + uVar34) * 4)))
                       (&caseD_1b944_1 +
                        *(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(bVar80 + uVar34) * 4))
  ;
  return ppuVar19;
switchD_100025d1a_caseD_26068:
  uVar14 = (uint)ppuVar69;
  bVar80 = uVar14 < ((uint)UNRECOVERED_JUMPTABLE_46 ^ 0x2212d78c);
  if ((uint)UNRECOVERED_JUMPTABLE_44 < (int)ppuVar66 + 0x2212d784U == bVar80) {
    bVar80 = (uint)UNRECOVERED_JUMPTABLE_44 < uVar14;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000260c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_100026041 +
                       *(int *)((long)unaff_R12 + (long)(int)((uint)bVar80 + (int)ppuVar66) * 4)))
                       (ppuVar61);
  return ppuVar19;
switchD_100025d1a_caseD_274c1:
  uVar14 = (int)puVar78 + 3;
  *(uint *)((long)puVar75 + 8) = 0x5dd9ea22;
  uVar68 = *(uint *)((long)ppuVar51 + -0x8c);
  uVar54 = (uVar14 ^ 0xa7254b41) + 0x5dd9ea22;
  bVar80 = 0xfb00dada < uVar68;
  if (uVar54 < ((uVar14 | 1) ^ 0x4ff2566) == 0xfb00dada < uVar68) {
    bVar80 = uVar54 < uVar68 + 0x4ff2525;
  }
  UNRECOVERED_JUMPTABLE =
       (code *)((long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_46 +
                                    (long)(int)((uint)bVar80 + (int)puVar78 + 2) * 4) + 0x1000274c3)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010002753d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)(bVar80,UNRECOVERED_JUMPTABLE);
  return ppuVar19;
code_r0x000100019ee3:
  *(undefined ***)((long)ppuVar42 + -8) = ppuVar19;
  *(undefined **)((long)unaff_RBX + (long)puVar75) = ppuVar19[-0x26];
  *(int *)ppuVar19[-0x30] = (int)ppuVar19[-0x18];
  uVar14 = *unaff_R12;
  uVar68 = (int)puVar78 - 0x67U | 0x68;
  ppuVar19[-0x14] = (undefined *)unaff_RBX;
  lVar29 = *(long *)((long)unaff_RBX + (long)puVar75);
  puVar17 = ppuVar19[-0x34] +
            ((ulong)uVar68 - ((long)ppuVar19[-0x34] * 2 & 0x681f333462e1d3ccU)) +
            -0x4bf06665ce8f1685;
  lVar35 = ((ulong)(uVar14 + 0xb5fe3479) * 2 & 0x13fbffd7a) +
           ((ulong)(uVar14 + 0xb5fe3479) ^ 0x2efa9f7d9fdffebd) + 0xd105608260200143;
  *(byte *)(lVar29 + lVar35) = (byte)((ulong)puVar17 >> 0x38) ^ 0xb4;
  *(byte *)(lVar29 + 1 + lVar35) = (byte)((ulong)puVar17 >> 0x30) ^ 0xf;
  *(byte *)(lVar29 + 2 + lVar35) = (byte)((ulong)puVar17 >> 0x28) ^ 0x99;
  *(byte *)(lVar29 + 3 + lVar35) = (byte)((ulong)puVar17 >> 0x20) ^ 0x9a;
  *(byte *)(lVar29 + 4 + lVar35) = (byte)((ulong)puVar17 >> 0x18) ^ 0x31;
  *(byte *)(lVar29 + 5 + lVar35) = (byte)((ulong)puVar17 >> 0x10) ^ 0x70;
  *(byte *)(lVar29 + 6 + lVar35) = (byte)((ulong)puVar17 >> 8) ^ 0xe9;
  *(byte *)(lVar29 + 7 + lVar35) = (byte)puVar17 ^ 0xe6;
  ppuVar19[-0xf] = (undefined *)unaff_R12;
  *unaff_R12 = *unaff_R12 + 8;
  UNRECOVERED_JUMPTABLE_47 =
       (undefined **)
       ((long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar68 + 1) * 4) +
       0x10001a00b);
code_r0x00010001a029:
                    /* WARNING: Could not recover jumptable at 0x00010001a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_47)();
  return ppuVar19;
code_r0x00010001a2d5:
  UNRECOVERED_JUMPTABLE_41 =
       (undefined **)
       (ulong)((int)UNRECOVERED_JUMPTABLE_47 + (int)UNRECOVERED_JUMPTABLE_44 + 0xf466129a);
code_r0x00010001a2e3:
  iVar57 = (int)puVar78;
  uVar14 = (int)UNRECOVERED_JUMPTABLE_44 * 2 + 0xe8cc2534;
  uVar14 = (uVar14 ^ 0xf9fffe6) + (uVar14 & 0xf9fffe6) * 2 + 0x36192522;
  bVar79 = uVar14 < (iVar57 + 0x8a025b22U & 0x75fda4df) + 0x45b924aa;
  bVar80 = (int)UNRECOVERED_JUMPTABLE_47 + (int)UNRECOVERED_JUMPTABLE_44 + 0x3a1f37a2U < uVar14;
  if (iVar57 + 0xba46da9bU < (uint)UNRECOVERED_JUMPTABLE_41 != bVar79) {
    bVar80 = bVar79;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001a37a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_100016bc9 +
                       *(int *)(&DAT_1006d13e0 + (long)(int)((uint)bVar80 + iVar57) * 4)))();
  return ppuVar19;
code_r0x00010001e197:
                    /* WARNING: Could not recover jumptable at 0x00010001e1ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)((long)*(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                      (long)((int)UNRECOVERED_JUMPTABLE_37 + (int)unaff_R12) * 4) +
                       0x10001e103))();
  return ppuVar19;
DAT_100020c5b:
  iVar57 = (int)puVar78;
  puVar78 = (uint *)(ulong)(iVar57 - 9);
  UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(iVar57 + 0xe9213ab3);
  ppuVar19 = ppuVar52;
  ppuVar71 = (undefined **)puVar70;
code_r0x000100020c66:
  UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)((uint)UNRECOVERED_JUMPTABLE_45 & 0x16dec54a);
  UNRECOVERED_JUMPTABLE_41 = (undefined **)0xc5a563be9a7c3ae5;
  UNRECOVERED_JUMPTABLE_47 = (undefined **)((long)unaff_RBX + -0x3a5a9c416583c51b);
  ppuVar19[-0x5e] = (undefined *)UNRECOVERED_JUMPTABLE_47;
code_r0x000100020c81:
  UNRECOVERED_JUMPTABLE = (code *)((long)unaff_RBX + (long)UNRECOVERED_JUMPTABLE_41);
  UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)*(uint *)UNRECOVERED_JUMPTABLE;
  unaff_R12 = (uint *)0xc5a563be9a7c3ae1;
  UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)*(uint *)((long)unaff_RBX + -0x3a5a9c416583c51f);
  UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)(*(uint *)UNRECOVERED_JUMPTABLE + 0x76b4170c);
  UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar71;
  ppuVar73 = ppuVar56;
code_r0x000100020c98:
  ppuVar56 = ppuVar73;
  uVar14 = (uint)UNRECOVERED_JUMPTABLE_41;
  ppuVar65 = (undefined **)(ulong)(uVar14 + 0x5d4f3451);
code_r0x000100020c9f:
  puVar75 = UNRECOVERED_JUMPTABLE_44;
  uVar68 = (uint)UNRECOVERED_JUMPTABLE_37;
  ppuVar66 = (undefined **)(ulong)(uVar68 < 0x7e33f4ea);
  uVar54 = (uint)UNRECOVERED_JUMPTABLE_45;
  uVar64 = (uint)ppuVar65;
  bVar80 = uVar64 < uVar54 + 0x7e33f3e2 != uVar68 < 0x7e33f4ea;
  uVar28 = CONCAT31((int3)(uVar54 + 0x7e33f3e2 >> 8),bVar80);
  ppuVar69 = (undefined **)(ulong)uVar28;
  uVar58 = (uint)puVar75;
  bVar81 = uVar68 < uVar64;
  bVar83 = uVar68 == uVar64;
code_r0x000100020cc6:
  ppuVar71 = (undefined **)(ulong)(!bVar81 && !bVar83);
  bVar82 = !bVar80;
code_r0x000100020ccd:
  if (bVar82) {
    ppuVar66 = ppuVar71;
  }
  uVar72 = (uint)ppuVar66;
  uVar77 = (uint)puVar78;
  uVar68 = *(uint *)((long)puVar75 + (long)(int)(uVar72 + uVar77) * 4);
  UNRECOVERED_JUMPTABLE_37 = (undefined **)(long)(int)uVar68;
  bVar79 = (undefined **)0xfffffffefffdf3a4 < UNRECOVERED_JUMPTABLE_37;
  ppuVar65 = (undefined **)((long)UNRECOVERED_JUMPTABLE_37 + 0x100020c5b);
  bVar82 = ppuVar65 == (undefined **)0x0;
  uVar24 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8);
  bVar11 = (byte)UNRECOVERED_JUMPTABLE_41;
  sVar12 = (short)UNRECOVERED_JUMPTABLE_41;
  uVar37 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_47 >> 8);
  bVar62 = (byte)ppuVar65;
  uVar34 = (uint)UNRECOVERED_JUMPTABLE_46;
  uVar25 = (undefined6)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x10);
  cVar9 = (char)((ulong)UNRECOVERED_JUMPTABLE_46 >> 8);
  bVar39 = (byte)unaff_RBX;
  uVar53 = (uint)ppuVar56;
  uVar49 = (uint)unaff_RBX;
  cVar63 = SUB81(UNRECOVERED_JUMPTABLE_47,0);
  uVar40 = (uint)unaff_R12;
  uVar13 = (uint)UNRECOVERED_JUMPTABLE_47;
  uVar64 = (uint)ppuVar65;
  ppuVar52 = ppuVar19;
  ppuVar51 = ppuVar19;
  ppuVar61 = UNRECOVERED_JUMPTABLE_37;
  puVar70 = (uint *)ppuVar71;
  UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar71;
  ppuVar76 = (undefined **)puVar75;
  switch(ppuVar65) {
  case (undefined **)0x9e8d41b7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0xc54cf2eb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0xff032f4c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100016bad:
    *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_47) =
         *(uint *)((long)in_GS_OFFSET + (long)UNRECOVERED_JUMPTABLE_47) ^ uVar54;
    *(undefined ***)(*ppuVar19 + -0x138) = UNRECOVERED_JUMPTABLE_47;
                    /* WARNING: Could not recover jumptable at 0x000100016bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_46)();
    return ppuVar19;
  case (undefined **)0x100017b11:
                    /* WARNING: Could not recover jumptable at 0x000100017b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(ulong)(uVar13 + uVar14))();
    return ppuVar19;
  case (undefined **)0x100018341:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001882b:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100018deb:
    bVar27 = bVar11 + (char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0xf);
    bVar80 = CARRY1(bVar11,(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0xf)) ||
             CARRY1(bVar27,bVar79);
    UNRECOVERED_JUMPTABLE_46 = (undefined **)CONCAT71(uVar24,bVar27 + bVar79);
    *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_47 + 0x60e242fe) = 0xc2894d12;
    goto code_r0x000100018df9;
  case (undefined **)0x100018ed3:
    if (bVar79 == SUB81(ppuVar66,0)) {
      ppuVar66 = (undefined **)(ulong)(uVar28 < uVar64);
    }
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (long)ppuVar71) =
         *(code *)((long)ppuVar71 + 0xf23945f9);
                    /* WARNING: Could not recover jumptable at 0x000100018f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100018eaf +
                         (int)*(uint *)((long)unaff_R12 + (long)(int)((int)ppuVar66 + uVar68) * 4)))
                         ();
    return ppuVar19;
  case (undefined **)0x100019868:
    uVar68 = (uVar34 & 0xfbef3fec) + (uVar68 ^ 0x7df79ff6) + 0xa372921;
    bVar80 = uVar14 < uVar68;
    if ((bool)bVar62 != uVar68 < 0x882ec917) {
      bVar80 = uVar68 < 0x882ec917;
    }
                    /* WARNING: Could not recover jumptable at 0x0001000198b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_45 +
                         (long)(int)*(uint *)((long)ppuVar71 + (long)(int)(bVar80 + uVar58) * 4)))()
    ;
    return ppuVar19;
  case (undefined **)0x100019b41:
                    /* WARNING: Could not recover jumptable at 0x000100019b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x100019b0b))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                          (code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x100019b0b),
                          UNRECOVERED_JUMPTABLE_47,ppuVar56);
    return ppuVar19;
  case (undefined **)0x100019dab:
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
    goto code_r0x000100019d54;
  case (undefined **)0x100019efb:
    *(uint *)((long)unaff_RBX + (long)UNRECOVERED_JUMPTABLE_45) = uVar14;
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
    goto code_r0x000100019ee3;
  case (undefined **)0x10001a029:
    goto code_r0x00010001a029;
  case (undefined **)0x10001a286:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x1906800f);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE << 0x19 | *(uint *)UNRECOVERED_JUMPTABLE >> 7;
                    /* WARNING: Could not recover jumptable at 0x00010001a2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001a24a +
                         (int)*(uint *)((long)ppuVar71 +
                                       (long)(int)(((uVar49 + uVar53 + 0xf3cdf232 & uVar14 * 2) +
                                                    uVar13 == -0x6190681) + uVar53) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001a2d2:
    goto code_r0x00010001a2d5;
  case (undefined **)0x10001a2e3:
    goto code_r0x00010001a2e3;
  case (undefined **)0x10001a652:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x1a629);
    goto code_r0x00010001a65b;
  case (undefined **)0x10001abe0:
    goto code_r0x00010001abe0;
  case (undefined **)0x10001ae2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ae5c:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    *(char *)(UNRECOVERED_JUMPTABLE_47 + 0xa7e107b) =
         (char)*(code *)(UNRECOVERED_JUMPTABLE_47 + 0xa7e107b) + (char)cVar63;
    uVar2 = *(undefined4 *)
             ((&PTR__bootstrap_look_up_10082e9f0)[(long)UNRECOVERED_JUMPTABLE_41] + -2);
    puVar17 = *ppuVar65;
    iVar57 = *(int *)((long)UNRECOVERED_JUMPTABLE_37 + 0x100020c67);
    puVar21 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar49 - 0x42)];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001ae9a;
    uVar14 = (*(code *)(puVar21 + -3))
                       (uVar2,puVar17,iVar57 + -0x6d011ee8,ppuVar19 + -0x1f,
                        (code *)((long)ppuVar19 + -0x6c));
                    /* WARNING: Could not recover jumptable at 0x00010001aedb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001ae3e +
                         (int)(&switchD_100019e65::switchdataD_1006d1710)
                              [((uVar49 ^ 0x4befd79c) + (uVar14 ^ 0xfefdbf77) +
                                (uVar14 & 0xfefdbf77) * 2 == (uVar53 ^ 0x5aed973a)) + uVar49]))();
    return ppuVar19;
  case (undefined **)0x10001afa4:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7f);
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + 1;
    iVar57 = *(int *)UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE = (code *)((long)unaff_RBX + 0x44ce9956);
    *UNRECOVERED_JUMPTABLE =
         (code)((char)*UNRECOVERED_JUMPTABLE << 1 | (byte)*UNRECOVERED_JUMPTABLE >> 7);
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x7f);
    *UNRECOVERED_JUMPTABLE =
         (code)((byte)*UNRECOVERED_JUMPTABLE >> 4 | (char)*UNRECOVERED_JUMPTABLE << 4);
    if (iVar57 < 0) {
      *(code *)((long)unaff_RBX + 0x41) = (code)((char)*(code *)((long)unaff_RBX + 0x41) + bVar39);
    }
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10001b02f:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) + -1;
    *(undefined **)((long)ppuVar42 + -8) = &UNK_10001b04a;
    ppuRam00000000fffffe48 = UNRECOVERED_JUMPTABLE_41;
    lVar29 = (*(code *)ppuVar65)(UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_41,0);
    ppuRam00000000fffffe78 = ppuRam00000000fffffe48;
                    /* WARNING: Could not recover jumptable at 0x00010001b084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001b007 +
                         (int)(&switchD_100019e65::switchdataD_1006d1710)
                              [(int)(uVar49 + (lVar29 == 0))]))();
    return ppuVar19;
  case (undefined **)0x10001b1ba:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001b3ff:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)*(uint *)(ppuVar19 + -0xb);
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
    goto code_r0x00010001b3f4;
  case (undefined **)0x10001b6b6:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10001b719:
    *(uint *)UNRECOVERED_JUMPTABLE_47 =
         *(uint *)UNRECOVERED_JUMPTABLE_47 << 0x19 | *(uint *)UNRECOVERED_JUMPTABLE_47 >> 7;
    goto code_r0x00010001b71d;
  case (undefined **)0x10001b7f3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001bc10:
    ppuVar65 = (undefined **)ppuVar19[-9];
    unaff_R12 = &switchD_1000183ca::switchdataD_1006d0f70;
    goto code_r0x00010001bc1f;
  case (undefined **)0x10001bc55:
    return (undefined **)
           CONCAT71(uVar24,bVar11 ^ (&DAT_1006d1b30)
                                    [(byte)((byte)uVar68 ^
                                           (byte)*(code *)(UNRECOVERED_JUMPTABLE_41 + 0xda18e))]);
  case (undefined **)0x10001bceb:
    return (undefined **)
           (ulong)(byte)((byte)UNRECOVERED_JUMPTABLE_45 ^
                        (&DAT_1006cff50)
                        [(byte)((byte)uVar68 ^
                               (&DAT_1006d2b00)[(ulong)UNRECOVERED_JUMPTABLE_45 & 0xff])]);
  case (undefined **)0x10001bf12:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001bf6d:
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x73) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x73) | bVar11);
    uVar28 = (uint)CONCAT71(uVar37,(char)cVar63 +
                                   (char)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x1ff281ca));
    uVar14 = in((short)UNRECOVERED_JUMPTABLE_46);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
    goto code_r0x00010001bf75;
  case (undefined **)0x10001c05c:
    *(undefined **)((long)ppuVar42 + -8) = &UNK_10001c063;
    uVar14 = (*(code *)puVar78)();
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)*(uint *)((long)unaff_R12 +
                                      (long)(int)(uVar58 + 0x78ad9f11 +
                                                 (uint)((int)((uVar58 ^ 0x7cbf9ea7) +
                                                              (uVar14 ^ 0x4eff9776) +
                                                             (uVar14 & 0xceff9776) * 2) <
                                                       (int)((uVar58 + 0xe2c0640e & 0x95ed3afb) +
                                                             0x5aed96be ^ uVar58 ^ 0x87526111))) * 4
                                      ) + 0x100018af4);
                    /* WARNING: Could not recover jumptable at 0x00010001c0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return ppuVar19;
  case (undefined **)0x10001c160:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uint)(*(int *)UNRECOVERED_JUMPTABLE_41 * 0x48);
  case (undefined **)0x10001c15c:
    iVar57 = *(int *)((long)UNRECOVERED_JUMPTABLE_41 * 4 + 0x6d1710);
    ppuVar19[-9] = (undefined *)0x7f31ac3dd4da00c4;
                    /* WARNING: Could not recover jumptable at 0x00010001c186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&UNK_10001c12d + iVar57))(0x3165f9b2,0x7f31ac3dd4da00c4);
    return ppuVar19;
  case (undefined **)0x10001c281:
    uVar14 = uVar77 * 2 + 0x570d41d4;
    uVar14 = (uVar14 << (~bVar39 & 0x1f) & 0xfefeffbc) + (uVar14 ^ 0x7f7f7fde) + 0x5b283f77;
    uVar28 = (uint)(uVar34 < uVar14);
    if (uVar34 < 0xdaa7bf55 != uVar14 < 0xdaa7bf55) {
      uVar28 = (uint)(uVar14 < 0xdaa7bf55);
    }
code_r0x00010001c2e9:
                    /* WARNING: Could not recover jumptable at 0x00010001c300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_45 +
                         (long)(int)*(uint *)((long)ppuVar56 +
                                             (long)(int)((uVar28 & 0xff) + uVar49 + 0x8fac570) * 4))
               )();
    return ppuVar19;
  case (undefined **)0x10001c2e8:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + 0xf);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE << 1 | (uint)((int)*(uint *)UNRECOVERED_JUMPTABLE < 0);
    goto code_r0x00010001c2e9;
  case (undefined **)0x10001c387:
    puVar17 = *(undefined **)((long)puVar78 + (long)(int)(uVar54 - 0x72) * 8);
    ppuVar19[-0x1b] = (undefined *)UNRECOVERED_JUMPTABLE_46;
                    /* WARNING: Could not recover jumptable at 0x00010001c3db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001c358 +
                         *(int *)((long)ppuVar65 +
                                 (long)(int)((UNRECOVERED_JUMPTABLE_46 ==
                                              (undefined **)(puVar17 + -1) &&
                                             (!bVar81 && !bVar83) + uVar14 != 0x5565d56) + uVar54) *
                                 4)))(0x3165f9b1,0x7f31ac3dd4da00c4);
    return ppuVar19;
  case (undefined **)0x10001c3e6:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10001c43c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001c491:
    UNRECOVERED_JUMPTABLE = (code *)((long)unaff_RBX + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x75);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)cVar63);
    *(undefined ***)((long)ppuVar42 + -8) = ppuVar19;
    *(undefined **)puVar75 = ppuVar19[-0x23];
    *(int *)ppuVar19[-0x2e] = (int)ppuVar19[-0x1b];
    puVar70 = (uint *)ppuVar19[-0x28];
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)*puVar70;
    ppuVar61 = (undefined **)ppuVar19[-0xd];
    ppuVar65 = (undefined **)puVar75;
    goto code_r0x00010001c4c7;
  case (undefined **)0x10001c60b:
    *(char *)UNRECOVERED_JUMPTABLE_46 = *(char *)UNRECOVERED_JUMPTABLE_46 + cVar9;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)CONCAT71(uVar24,bVar11 + 0x11);
    goto code_r0x00010001c5fd;
  case (undefined **)0x10001cb74:
    ppuVar19[-0x24] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    ppuVar19 = (undefined **)switchD_100020322::caseD_1b465(UNRECOVERED_JUMPTABLE_41,uVar68);
    return ppuVar19;
  case (undefined **)0x10001cef3:
                    /* WARNING: Could not recover jumptable at 0x00010001cf07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001cea1 +
                         (int)*(uint *)((long)ppuVar71 + (long)UNRECOVERED_JUMPTABLE_41 * 4)))();
    return ppuVar19;
  case (undefined **)0x10001d03b:
    *(code *)UNRECOVERED_JUMPTABLE_37 = *(code *)UNRECOVERED_JUMPTABLE_45;
    if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1) {
      ppuVar19[-0xc] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    }
    ppuVar19[-0x13] = ppuVar19[-0x17];
    ppuVar19[-0x15] = ppuVar19[-0x1a];
    UNRECOVERED_JUMPTABLE_41 = (undefined **)ppuVar19[-0xf];
    ppuVar19[-0x1e] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    goto switchD_100025d1a_caseD_23685;
  case (undefined **)0x10001d230:
    goto code_r0x00010001d230;
  case (undefined **)0x10001d2c9:
    UNRECOVERED_JUMPTABLE_37 = (undefined **)&UNK_10002135e;
    uVar68 = uVar34 * 2 + 0x80a88ee0;
    uVar68 = (uVar68 ^ 0xffbbfbb0) + (uVar68 & 0xffbbfbb0) * 2 + 0x9a06ffb2;
    bVar80 = uVar68 < (uVar14 + 3 ^ 0x99c2fbcf);
    puVar78 = (uint *)(ulong)(uVar13 < uVar68);
    if (uVar13 < 0x99c2fb62 != bVar80) {
      puVar78 = (uint *)(ulong)bVar80;
    }
  case (undefined **)0x10001d336:
                    /* WARNING: Could not recover jumptable at 0x00010001d34e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_37 +
                         (long)*(int *)(&DAT_1006d1e30 +
                                       (long)(int)(((uint)puVar78 & 0xff) + uVar14) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001d352:
    goto code_r0x00010001d980;
  case (undefined **)0x10001d3a3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d3d3:
                    /* WARNING: Could not recover jumptable at 0x00010001d3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_45 + (long)UNRECOVERED_JUMPTABLE_46))
                         (UNRECOVERED_JUMPTABLE_37,
                          (code *)((long)UNRECOVERED_JUMPTABLE_45 + (long)UNRECOVERED_JUMPTABLE_46),
                          0);
    return ppuVar19;
  case (undefined **)0x10001d3e3:
    goto code_r0x00010001d3e3;
  case (undefined **)0x10001d527:
                    /* WARNING: Could not recover jumptable at 0x00010001d52a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 + (long)UNRECOVERED_JUMPTABLE_41))();
    return ppuVar19;
  case (undefined **)0x10001d7da:
    goto switchD_10001a75e_caseD_1d7da;
  case (undefined **)0x10001d8d7:
    *(int *)((long)unaff_RBX + -0x3c7cfbfa) = *(int *)((long)unaff_RBX + -0x3c7cfbfa) + 1;
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x47);
    cVar63 = *UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + 1);
    if (SCARRY1((char)cVar63,'\x01') != (char)*UNRECOVERED_JUMPTABLE < '\0') {
      *(ushort *)((long)UNRECOVERED_JUMPTABLE_47 + 0x1d8d4c01) =
           *(ushort *)((long)UNRECOVERED_JUMPTABLE_47 + 0x1d8d4c01) ^
           (ushort)UNRECOVERED_JUMPTABLE_45;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x00010001d879;
  case (undefined **)0x10001d971:
    goto code_r0x00010001d971;
  case (undefined **)0x10001d9e9:
    goto code_r0x00010001d9d3;
  case (undefined **)0x10001dbb3:
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return ppuVar19;
  case (undefined **)0x10001dd49:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x9ea7af9);
    *UNRECOVERED_JUMPTABLE =
         (code)((char)*UNRECOVERED_JUMPTABLE << ((byte)cVar63 & 7) |
               (byte)*UNRECOVERED_JUMPTABLE >> 8 - ((byte)cVar63 & 7));
    goto code_r0x00010001dcee;
  case (undefined **)0x10001dfc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001e004:
    goto code_r0x00010001e004;
  case (undefined **)0x10001e149:
    uVar54 = uVar54 + 0xad4a3a59;
    bVar80 = uVar54 < (uVar14 ^ 0xb44460b) + uVar58;
    if (uVar13 + 0xce8d1b20 < 0xb4447d1 == bVar80) {
      bVar80 = uVar13 + 0xce8d1b20 < uVar54;
    }
    UNRECOVERED_JUMPTABLE_44 = &switchD_10001f9d9::switchdataD_1006d2190;
    UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)bVar80;
    goto code_r0x00010001e197;
  case (undefined **)0x10001e304:
    puVar75 = (uint *)unaff_RBX;
    UNRECOVERED_JUMPTABLE_37 = ppuVar56;
    goto code_r0x00010001e2d2;
  case (undefined **)0x10001e4b0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001e66d:
    goto code_r0x00010001e66d;
  case (undefined **)0x10001e6d3:
                    /* WARNING: Could not recover jumptable at 0x00010001e704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001e6cb +
                         *(int *)((long)ppuVar65 +
                                 (long)(int)(uVar53 * 3 +
                                            (uint)(*(long *)((long)UNRECOVERED_JUMPTABLE_46 +
                                                            -0x5c05e2a4aeb6ae7e) == 0)) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001e756:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uVar64 + 5);
    UNRECOVERED_JUMPTABLE_37 =
         (undefined **)
         (long)(int)(uVar64 + (uVar68 + uVar54 + uVar72 + 0xa9ca4ccc <
                              (uVar64 + 0x8abfea | 0xb7603b60) + uVar64 + 0x48150465));
    goto code_r0x00010001e789;
  case (undefined **)0x10001e7ef:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001e884:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001e8de:
    uRamb4558b4480558b48 = uVar14;
    goto code_r0x00010001e8e8;
  case (undefined **)0x10001e9a3:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10001ea2a:
    *(uint *)(ppuVar19 + -9) = uVar34;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001ea2f;
    UNRECOVERED_JUMPTABLE_37 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_41)();
    UNRECOVERED_JUMPTABLE_46 = *(undefined ***)(ppuVar19[-9] + -0x7ec08e5aeb2a8122);
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)(ulong)((uVar40 ^ 0xadfb80d6) + *(int *)(ppuVar19[-9] + -0x7ec08e5aeb2a8116))
    ;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(unaff_RBX[(int)(uVar53 ^ 0x67)] + -3);
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(unaff_RBX[(int)(uVar53 - 0x59)] + -3);
    goto code_r0x00010001ea7d;
  case (undefined **)0x10001ea7c:
code_r0x00010001ea7d:
    ppuVar19[-0x23] = (undefined *)UNRECOVERED_JUMPTABLE_37;
    goto code_r0x00010001ea84;
  case (undefined **)0x10001eb2f:
    *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_37 + 0x100020c63) = 0x7c5c78fb;
    ppuVar19[-0x1c] = (undefined *)unaff_RBX;
    ppuVar19[-0x47] = (undefined *)unaff_RBX;
                    /* WARNING: Could not recover jumptable at 0x00010001eb85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001eb2a +
                         (int)*(uint *)((long)ppuVar71 +
                                       (long)(int)(uVar40 + ((uVar40 + 0x9161260d & 0x6e9ed9fb ^
                                                             0xff8) + ((uint)(undefined1 *)
                                                                             ((long)ppuVar42 +
                                                                             0x4872a48f) &
                                                                      0xb78d5b7f) <
                                                            *(uint *)((long)ppuVar19 + -100))) * 4))
               )(UNRECOVERED_JUMPTABLE_37,
                 &DAT_10001eb2a +
                 (int)*(uint *)((long)ppuVar71 +
                               (long)(int)(uVar40 + ((uVar40 + 0x9161260d & 0x6e9ed9fb ^ 0xff8) +
                                                     ((uint)(undefined1 *)
                                                            ((long)ppuVar42 + 0x4872a48f) &
                                                     0xb78d5b7f) < *(uint *)((long)ppuVar19 + -100))
                                          ) * 4));
    return ppuVar19;
  case (undefined **)0x10001ecc9:
    piVar18 = (int *)CONCAT71(uVar24,5);
    if (bVar82 || (long)UNRECOVERED_JUMPTABLE_37 < -0x100020c5b) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((long)piVar18 + -0x39) = *(char *)((long)piVar18 + -0x39) + (char)cVar63;
    uVar14 = (int)piVar18 + *piVar18;
    pcVar16 = (char *)(ulong)uVar14;
    *pcVar16 = *pcVar16 + (char)uVar14;
    pcVar16[-0x48] = pcVar16[-0x48] + (char)cVar63;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)puVar78 | 0xab);
    *(char *)ppuVar65 = *(char *)ppuVar65 + -0x55;
    DAT_9be73fab = DAT_9be73fab + -0x55;
    *(char *)(UNRECOVERED_JUMPTABLE_37 + 0x200) =
         (char)*(code *)(UNRECOVERED_JUMPTABLE_37 + 0x200) + (char)((ulong)unaff_RBX >> 8);
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
    goto code_r0x00010001ec7a;
  case (undefined **)0x10001ecf5:
    uVar14 = uVar49 + uVar68 * 2 + 0x444c4b47;
    uVar68 = uVar14 ^ 0x7ffddf2a;
    uVar14 = uVar14 & 0xfffddf2a;
    ppuVar19[-0x16] = (undefined *)(ulong)(uVar68 + uVar14 * 2 + 0xdddbfaf8);
    uVar14 = uVar68 + uVar14 * 2 + 0x764b767d;
    puVar78 = (uint *)(ulong)(((uint)CONCAT71(uVar24,uRam8d485ff22ff7e381) | 0xfffff3a5) < uVar14);
    unaff_R12 = (uint *)ppuVar69;
    if (0x9b6aa58 < uVar54 != uVar14 < 0xf64955a7) {
      puVar78 = (uint *)(ulong)(uVar14 < 0xf64955a7);
    }
code_r0x00010001ed68:
                    /* WARNING: Could not recover jumptable at 0x00010001ed79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 +
                         (long)(int)*(uint *)((long)unaff_R12 +
                                             (long)(int)(((uint)puVar78 & 0xff) + uVar34) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001ed9e:
    if (bVar82 || (long)UNRECOVERED_JUMPTABLE_37 < -0x100020c5b) {
      *(undefined2 *)((long)UNRECOVERED_JUMPTABLE_47 + 1) = in_CS;
      goto code_r0x00010001ed68;
    }
    goto code_r0x00010001eda0;
  case (undefined **)0x10001edc2:
    if (!bVar82 && -0x100020c5c < (long)UNRECOVERED_JUMPTABLE_37) goto code_r0x00010001edc4;
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x29e900fe);
    *UNRECOVERED_JUMPTABLE =
         (code)((char)*UNRECOVERED_JUMPTABLE << 2 | (byte)*UNRECOVERED_JUMPTABLE >> 6);
    bVar80 = ((byte)*UNRECOVERED_JUMPTABLE & 1) != 0;
    goto code_r0x00010001edcd;
  case (undefined **)0x10001ee1a:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar19 + -0x73);
    *UNRECOVERED_JUMPTABLE = (code)((byte)*UNRECOVERED_JUMPTABLE | bVar11);
    if ((char)*UNRECOVERED_JUMPTABLE < '\0') goto code_r0x00010001ee43;
    uVar14 = *(uint *)(UNRECOVERED_JUMPTABLE_37 + 3);
    UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0xc];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001ee2b;
    lVar29 = (*UNRECOVERED_JUMPTABLE)(uVar68 + uVar14);
    bVar80 = lVar29 == 0;
    goto code_r0x00010001ee32;
  case (undefined **)0x10001eeac:
    UNRECOVERED_JUMPTABLE =
         (code *)CONCAT62(uVar25,CONCAT11(cVar9 >> 0x1f,(char)UNRECOVERED_JUMPTABLE_46));
    *(undefined **)((long)ppuVar42 + -8) = *UNRECOVERED_JUMPTABLE_47;
    ppuVar51 = (undefined **)*ppuVar19;
    goto code_r0x00010001eeb2;
  case (undefined **)0x10001ef64:
    goto code_r0x00010001ef68;
  case (undefined **)0x10001ef77:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uVar54 | 0x90);
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
    goto code_r0x00010001ef6f;
  case (undefined **)0x10001f060:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    ppuVar19 = UNRECOVERED_JUMPTABLE_41 + -9;
    cVar26 = *(code *)ppuVar19;
    *(char *)ppuVar19 = (char)*(code *)ppuVar19 + (char)cVar63;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)CONCAT71(uVar37,0x2c);
    puVar75 = (uint *)CONCAT62((int6)((ulong)unaff_RBX >> 0x10),CONCAT11(0x3c,bVar39));
    UNRECOVERED_JUMPTABLE_37 = ppuVar56;
    if (SCARRY1((char)cVar26,(char)cVar63) == (char)*(code *)ppuVar19 < '\0') {
      ppuVar42 = (undefined **)((long)ppuVar42 + 8);
      *(undefined ***)((long)puVar75 + 8) = UNRECOVERED_JUMPTABLE_41;
      *(uint *)((long)puVar75 + 0x10) = 0;
    }
    goto code_r0x00010001f078;
  case (undefined **)0x10001f10c:
    uVar14 = *(uint *)(ppuVar19 + -10);
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001f111;
    (*(code *)(ulong)uVar14)();
    puVar50 = (undefined8 *)ppuVar19[-0xe];
    *puVar50 = 0;
    puVar50[1] = 0x21493b807c5c68fb;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001f12f;
    (*(code *)(ulong)uVar14)(puVar50);
    puVar78 = &switchD_10001f9d9::switchdataD_1006d2190;
    ppuVar61 = (undefined **)ppuVar19[-0xb];
    goto LAB_10001df31;
  case (undefined **)0x10001f1ac:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f25a:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(long)(int)(uVar77 + (uVar14 == 0));
    UNRECOVERED_JUMPTABLE_44 = &switchD_10001f9d9::switchdataD_1006d2190;
    goto code_r0x00010001f26b;
  case (undefined **)0x10001f384:
    goto code_r0x00010001f384;
  case (undefined **)0x10001f41d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f4fe:
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(ulong)*(uint *)(UNRECOVERED_JUMPTABLE_47 + (long)UNRECOVERED_JUMPTABLE_41);
    goto code_r0x00010001f4fd;
  case (undefined **)0x10001f531:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)uVar68;
    goto switchD_10001997c_caseD_1f50b;
  case (undefined **)0x10001f658:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10001f709:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f76a:
    *(code *)((long)UNRECOVERED_JUMPTABLE_37 + 0xb248b4c) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_37 + 0xb248b4c) << 1);
    ppuVar65 = (undefined **)0x1e2846e84;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)&UNK_100026623;
    goto code_r0x00010002431a;
  case (undefined **)0x10001f7dd:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)0x40bea7f6;
    bVar80 = uVar54 < 0x806a6086;
    if (uVar68 < ((uint)CONCAT71(uVar37,((char)cVar63 - (char)*(code *)(ppuVar19 + 0x5d89476)) -
                                        bVar79) ^ 0x806a602e) == uVar54 < 0x806a6086) {
      bVar80 = uVar68 < uVar54;
    }
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)bVar80;
    puVar70 = (uint *)ppuVar69;
  case (undefined **)0x10001f825:
    goto code_r0x00010001f825;
  case (undefined **)0x10001f833:
    if ((POPCOUNT((ulong)ppuVar65 & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f84a:
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         (&DAT_10001f852 +
         (int)*(uint *)((long)ppuVar71 +
                       (long)(int)((uVar53 == ((uVar58 ^ 0x39) * 0x1f ^ 0x3165f9ec)) + uVar58) * 4))
    ;
code_r0x00010001f882:
                    /* WARNING: Could not recover jumptable at 0x00010001f882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_47)();
    return ppuVar19;
  case (undefined **)0x10001f882:
    goto code_r0x00010001f882;
  case (undefined **)0x10001f89b:
    *(uint *)(unaff_RBX + -0xcf6ffe6) = *(uint *)(unaff_RBX + -0xcf6ffe6) + uVar14;
    goto code_r0x00010001f8a1;
  case (undefined **)0x10001f8a8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f8fd:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    goto code_r0x00010001f8ee;
  case (undefined **)0x10001f991:
    puVar23 = (undefined1 *)((long)UNRECOVERED_JUMPTABLE_47 * 5 + -0x7b);
    *puVar23 = *puVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f997:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001fa25:
    goto code_r0x00010001fa25;
  case (undefined **)0x10001fa7b:
    puVar21 = ppuVar19[-0x1e];
    ppuVar19[-0x41] = puVar21;
    ppuVar19[-0x33] = (undefined *)0x2cc289762f9fc832;
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[(int)((uVar77 ^ 0xa717cb74) + 0x58e83478)];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001faaf;
    puVar17 = (undefined *)(*(code *)(puVar17 + -1))(puVar21,unaff_RBX,ppuVar19 + -0x3d);
    ppuVar19[-0x6c] = puVar17;
    iVar57 = *(int *)(&DAT_1006d2600 +
                     (long)(int)((uVar77 ^ 0xa717cb74) + 0x58e8350d +
                                (uint)(puVar17 == (undefined *)0x0)) * 4);
    *(uint *)(ppuVar19 + -0x1d) = 0x3165f9a5;
                    /* WARNING: Could not recover jumptable at 0x00010001fae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&DAT_10001fa6d + iVar57))();
    return ppuVar19;
  case (undefined **)0x10001fb53:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x47);
    cVar26 = *UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)cVar63);
    uVar14 = in(0x3a);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
    if (SCARRY1((char)cVar26,(char)cVar63) != (char)*UNRECOVERED_JUMPTABLE < '\0') {
      puVar17 = ppuVar19[-0x3f];
      *(uint *)(puVar17 + -0x2cc289762f9fc82a) =
           (uVar14 ^ 0x7567ebef) + (uVar14 & 0xf567ebef) * 2 + -0x10600224;
      *(undefined4 *)(puVar17 + -0x2cc289762f9fc826) = 0x729fead4;
      ppuVar19 = (undefined **)FUN_1000253ca();
      return ppuVar19;
    }
    ppuVar42 = (undefined **)0x48c5a563;
    goto code_r0x00010001fb52;
  case (undefined **)0x10001fbf1:
    goto code_r0x00010001fbf1;
  case (undefined **)0x10001fc0d:
    ppuVar42 = (undefined **)0x82e9f0;
    goto code_r0x00010001fbf1;
  case (undefined **)0x10001fcac:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001fcf1:
    uVar68 = uVar64 * 2 + 0x444c4bbc;
    uVar54 = uVar68 ^ uVar54;
    uVar68 = uVar68 & 0xfdfbfb2e;
    ppuVar19[-0x14] = (undefined *)(ulong)(uVar54 + uVar68 * 2 + 0x5fdddef4);
    uVar68 = uVar54 + uVar68 * 2 + 0x899b936c;
    bVar80 = uVar13 < uVar68;
    if (0x78687165 < uVar34 != uVar68 < 0x87978e9a) {
      bVar80 = uVar68 < 0x87978e9a;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001fd76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000206a0 +
                         *(int *)(&DAT_1006d1e30 + (long)(int)(bVar80 + uVar14) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001fdba:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    ppuVar19[-0xc] = (undefined *)0x5c05e2a4aeb6ae7e;
    ppuVar19[-0x13] = ppuVar19[-0x17];
    ppuVar19[-0x15] = ppuVar19[-0x1a];
    ppuVar61 = (undefined **)ppuVar19[-0xf];
    goto switchD_100025d1a_caseD_1fdee;
  case (undefined **)0x10001fe24:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar58 + 4);
code_r0x00010001fe2b:
    ppuVar19[-0x4e] = (code *)((long)unaff_RBX + (long)ppuVar65 * 8 + 0xb10ffbc92166e26);
    ppuVar61 = (undefined **)unaff_RBX[(long)(&UNK_100020c5e + (long)UNRECOVERED_JUMPTABLE_37)];
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(long)(int)(uVar58 + (ppuVar61 == (undefined **)0x0));
    ppuVar76 = (undefined **)&DAT_1006d2600;
    goto code_r0x00010001fe66;
  case (undefined **)0x10001fe2b:
    goto code_r0x00010001fe2b;
  case (undefined **)0x10001fe98:
switchD_100020322_caseD_1fe99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001fe99:
    goto switchD_100020322_caseD_1fe99;
  case (undefined **)0x10001feb3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ff8a:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)((long)UNRECOVERED_JUMPTABLE_47 + -1);
    if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x0 && bVar11 != 0x7d) {
      return (undefined **)
             CONCAT62((int6)((ulong)UNRECOVERED_JUMPTABLE_41 >> 0x10),
                      CONCAT11((char)(sVar12 % (short)(char)bVar39),
                               (char)(sVar12 / (short)(char)bVar39)));
    }
    bVar79 = false;
    break;
  case (undefined **)0x10001ffa1:
    bVar79 = 0x40034d < uVar34;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar34 - 0x40034e);
    break;
  case (undefined **)0x10001ffdc:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100020003:
    ppuVar19[-0x42] =
         (undefined *)
         ((long)UNRECOVERED_JUMPTABLE_46 +
         (long)(ppuVar19[-0x1d] +
               (0xa28da57793ec794 - ((ulong)UNRECOVERED_JUMPTABLE_47 & 0x1451b4aef27d8fb8))));
    UNRECOVERED_JUMPTABLE_46 = (undefined **)ppuVar19[-0x24];
    uVar22 = (long)UNRECOVERED_JUMPTABLE_46 * 2;
    goto code_r0x00010002003f;
  case (undefined **)0x100020039:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002004f:
    goto code_r0x00010002004f;
  case (undefined **)0x1000201d4:
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
    goto code_r0x000100020198;
  case (undefined **)0x1000202e3:
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(ulong)*(uint *)((long)unaff_RBX + (long)UNRECOVERED_JUMPTABLE_41 * 4);
    goto code_r0x0001000202e2;
  case (undefined **)0x1000204e1:
    UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)(uVar53 + 0xf73b09db & 0x8c4f61f);
    UNRECOVERED_JUMPTABLE_46 = (undefined **)*unaff_RBX;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(*(uint *)(unaff_RBX + 1) + 0xc0544770);
    goto code_r0x0001000204fa;
  case (undefined **)0x100020567:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000207ab:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100020898:
    if (!bVar79 && !bVar82) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x00010002089a;
  case (undefined **)0x10002090d:
    goto code_r0x000100020908;
  case (undefined **)0x100020a55:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100020ae7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100020b4e:
    LOCK();
    cVar26 = *(code *)UNRECOVERED_JUMPTABLE_47;
    *(code *)UNRECOVERED_JUMPTABLE_47 = cVar63;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)CONCAT71(uVar37,cVar26);
    UNLOCK();
    if (!bVar82) goto code_r0x000100020b52;
    goto code_r0x000100020aff;
  case (undefined **)0x100020b73:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0xad740984;
    goto code_r0x000100020b52;
  case (undefined **)0x100020b7a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100020bc9:
    ppuVar65 = (undefined **)&UNK_1000211a9;
    ppuVar69 = (undefined **)(ulong)(uVar54 < 0xcf41d1d6);
    uVar14 = uVar14 * 2 + 0xbe367ece;
    UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)uVar14;
    ppuVar66 = (undefined **)(ulong)uVar14;
    bVar27 = ((byte)cVar63 ^ 0xae) * -0x78 - 0xf;
    goto code_r0x000100020bf8;
  case (undefined **)0x100020c32:
    *(uint *)((long)ppuVar19 + -0x7c) = 0x450f45d2;
    ppuVar56 = (undefined **)puVar78;
    goto code_r0x000100020c3a;
  case (undefined **)0x100020c5b:
    goto DAT_100020c5b;
  case (undefined **)0x100020c62:
    ppuVar42 = (undefined **)0x81e9213a;
    out(0x4a,bVar11);
    auVar6 = vmovshdup_avx(*(undefined1 (*) [32])(UNRECOVERED_JUMPTABLE_41 + -9));
    auVar85 = ZEXT3264(auVar6);
    in(0x3a);
    if ((long)UNRECOVERED_JUMPTABLE_37 < -0x100020c5b) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    UNRECOVERED_JUMPTABLE_45 = (undefined **)0x48c5a563;
  case (undefined **)0x100020c66:
    goto code_r0x000100020c66;
  case (undefined **)0x100020c81:
    goto code_r0x000100020c81;
  case (undefined **)0x100020c83:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x44);
    bVar81 = CARRY4(uVar13,*(uint *)UNRECOVERED_JUMPTABLE);
    uVar68 = uVar13 + *(uint *)UNRECOVERED_JUMPTABLE;
    bVar83 = uVar68 == 0;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)((ulong)uVar68 - 1);
    if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x0 && bVar83) {
      in_ST0 = (longdouble)*(int *)((long)UNRECOVERED_JUMPTABLE_37 + ((ulong)uVar68 - 0x3a));
      goto code_r0x000100020cc6;
    }
    if (SCARRY4(uVar13,*(uint *)UNRECOVERED_JUMPTABLE) != (int)uVar68 < 0)
    goto code_r0x000100020c27;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)0x42c5a563;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)*(uint *)unaff_RBX;
    goto code_r0x000100020c81;
  case (undefined **)0x100020c9f:
    goto code_r0x000100020c9f;
  case (undefined **)0x100020cb1:
    UNRECOVERED_JUMPTABLE_37 =
         (undefined **)(ulong)(uVar68 ^ *(uint *)((long)UNRECOVERED_JUMPTABLE_45 + 0x45));
    goto code_r0x000100020c9f;
  case (undefined **)0x100020cc4:
    goto code_r0x000100020cc4;
  case (undefined **)0x100020cc8:
    return (undefined **)(ulong)uVar68;
  case (undefined **)0x100020ccd:
    goto code_r0x000100020ccd;
  case (undefined **)0x100020ce3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100020d18:
    goto code_r0x000100020d18;
  case (undefined **)0x100020d20:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar34 + uVar68);
    goto code_r0x000100020d18;
  case (undefined **)0x100020e38:
    puVar17 = ppuVar19[-0x2e];
    ppuVar19[-0x2f] = (undefined *)unaff_RBX;
    *unaff_RBX = (undefined *)UNRECOVERED_JUMPTABLE_41;
                    /* WARNING: Could not recover jumptable at 0x000100020e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100025994 +
                         (int)*(uint *)((long)puVar75 +
                                       (long)(int)(uVar77 + (*(long *)(puVar17 + 8) == 0)) * 4)))
                         (UNRECOVERED_JUMPTABLE_41,ppuVar19[-0x46],uVar77 + 7,
                          &DAT_100025994 +
                          (int)*(uint *)((long)puVar75 +
                                        (long)(int)(uVar77 + (*(long *)(puVar17 + 8) == 0)) * 4),
                          0xebe9dd97f1423742);
    return ppuVar19;
  case (undefined **)0x100020eac:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100020feb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100021039:
    *(uint *)UNRECOVERED_JUMPTABLE_37 = *(uint *)UNRECOVERED_JUMPTABLE_45;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002119e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000211f3:
    goto code_r0x0001000211f3;
  case (undefined **)0x10002142e:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10002163d:
    *(undefined ***)((long)ppuVar42 + -8) = unaff_RBX;
    if (bVar82 || (long)UNRECOVERED_JUMPTABLE_37 < -0x100020c5b) {
      UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar13 + uVar14);
    }
    UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0x21];
    *(undefined **)((long)ppuVar42 + -0x10) = &UNK_100021660;
    lVar29 = (*UNRECOVERED_JUMPTABLE)
                       (0x18,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                        UNRECOVERED_JUMPTABLE_47);
                    /* WARNING: Could not recover jumptable at 0x000100021683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10002163f +
                         *(int *)(&DAT_1006d2600 + (long)(int)(uVar77 + (lVar29 == 0)) * 4)))();
    return ppuVar19;
  case (undefined **)0x100021762:
    ppuVar69 = (undefined **)(ulong)(uVar72 < 0x7f78213d);
    ppuVar65 = (undefined **)(ulong)(bVar62 ^ uVar72 < 0x7f78213d);
    bVar80 = uVar72 < uVar13 + 0x3f8c6845;
    bVar79 = uVar72 == uVar13 + 0x3f8c6845;
    goto code_r0x00010002177f;
  case (undefined **)0x1000217a3:
                    /* WARNING: Could not recover jumptable at 0x0001000217a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_41)();
    return ppuVar19;
  case (undefined **)0x1000217ae:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar28 + 0xcb28831e);
    uVar68 = (int)ppuVar19[-0x1d] + 0x3a3c3c3f;
    puVar75 = (uint *)(ulong)(uVar28 + 0xcb28831e < 0x9f44260a);
    goto code_r0x0001000217df;
  case (undefined **)0x1000217dc:
    uVar68 = (uint)CONCAT62(uVar25,CONCAT11(bVar79,(char)UNRECOVERED_JUMPTABLE_46));
code_r0x0001000217df:
    uVar14 = (uint)puVar75;
    ppuVar19[-0x22] = (undefined *)ppuVar56;
    ppuVar56 = (undefined **)(ulong)(byte)(uVar68 < 0x9f44260a ^ (byte)puVar75);
    bVar79 = (uint)UNRECOVERED_JUMPTABLE_47 < uVar68;
    bVar80 = (uint)UNRECOVERED_JUMPTABLE_47 == uVar68;
    goto code_r0x0001000217f8;
  case (undefined **)0x100021826:
code_r0x000100021829:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)((long)UNRECOVERED_JUMPTABLE_47 + -1);
    if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x0) goto code_r0x0001000218a6;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0x8b;
    ppuVar71 = (undefined **)ppuVar19[-9];
    unaff_R12 = (uint *)0x813f71a514d57ede;
    uVar15 = *(undefined8 *)((long)ppuVar71 + -0x7ec08e5aeb2a8122);
    UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0xd];
    *(undefined **)((long)ppuVar42 + -8) = &UNK_100021846;
    (*UNRECOVERED_JUMPTABLE)(uVar15);
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
    goto code_r0x000100021846;
  case (undefined **)0x100021827:
    goto code_r0x000100021829;
  case (undefined **)0x100021853:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000219ca:
    goto code_r0x0001000219ca;
  case (undefined **)0x1000219d3:
    *(uint *)UNRECOVERED_JUMPTABLE_37 = *(uint *)UNRECOVERED_JUMPTABLE_45;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000219fc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100021b95:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uVar14 | 0xffffffde);
    goto code_r0x000100021b8f;
  case (undefined **)0x100021bbe:
    ppuVar51 = (undefined **)(ulong)((uint)ppuVar19 | 0xc1);
    puVar17 = ppuVar51[-0x2a];
    goto code_r0x000100021bcb;
  case (undefined **)0x100021cdd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100021d09:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) + -1;
    *(uint *)((long)unaff_RBX + (long)UNRECOVERED_JUMPTABLE_45) = uVar14;
    *(uint *)ppuVar19[-0x6e] = *(uint *)((long)ppuVar19 + -0x19c);
    ppuVar61 = (undefined **)ppuVar19[-0x20];
    puVar75 = (uint *)0x1d;
    goto LAB_10002513c;
  case (undefined **)0x100021db7:
    UNRECOVERED_JUMPTABLE_41 = UNRECOVERED_JUMPTABLE_46;
    goto code_r0x000100021dba;
  case (undefined **)0x100021f40:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100021f64:
    UNRECOVERED_JUMPTABLE_46 =
         (undefined **)
         (&UNK_100021f41 +
         (int)*(uint *)((long)unaff_R12 +
                       (long)(int)(uVar77 + (UNRECOVERED_JUMPTABLE_41 == (undefined **)0x0)) * 4));
    ppuVar66 = (undefined **)0x3165f9b2;
    ppuVar19[-0x29] = (undefined *)0x0;
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0x0;
    ppuVar65 = (undefined **)ppuVar19[-0xb];
    goto code_r0x000100021f98;
  case (undefined **)0x100021f9a:
    uVar68 = uVar54 - 0x86 | 0x84;
    iVar57 = *(int *)((long)ppuVar69 + -0x7ec08e5aeb2a811a);
    uVar14 = *(int *)((long)ppuVar69 + -0x7ec08e5aeb2a8116) + 0xf9531d1c;
    uVar54 = (uVar68 - 2 ^ 0x11) + iVar57 + 0x35e2ffcc;
    ppuVar19[-9] = (undefined *)ppuVar69;
    bVar80 = uVar14 < 0x758eb8ff;
    if (uVar54 < 0x758eb8ff == uVar14 < 0x758eb8ff) {
      bVar80 = uVar54 < uVar14;
    }
    uVar14 = *(uint *)((long)ppuVar71 + (long)(int)(bVar80 + uVar68) * 4);
    ppuVar19[-0x24] = ppuVar19[-9] + -0x7ec08e5aeb2a8116;
                    /* WARNING: Could not recover jumptable at 0x00010002203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100021f9b + (int)uVar14))(iVar57,&UNK_100021f9b + (int)uVar14);
    return ppuVar19;
  case (undefined **)0x1000220aa:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7d) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7d) + uVar14;
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + 99) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 99) + (char)cVar63);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002236b:
    goto code_r0x00010002236b;
  case (undefined **)0x100022384:
    goto code_r0x00010002236b;
  case (undefined **)0x1000223e5:
    iVar57 = ((long)unaff_R12 <
             (long)(((ulong)UNRECOVERED_JUMPTABLE_41 ^ 0xffffffffffffffc3) +
                   (ulong)((uVar13 ^ 0x11f) * 0x49))) + uVar13;
                    /* WARNING: Could not recover jumptable at 0x000100022419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000223df + *(int *)((long)ppuVar65 + (long)iVar57 * 4)))
                         (UNRECOVERED_JUMPTABLE_37,iVar57,
                          &UNK_1000223df + *(int *)((long)ppuVar65 + (long)iVar57 * 4));
    return ppuVar19;
  case (undefined **)0x1000223ef:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar19 + -0x76b70de4);
    *UNRECOVERED_JUMPTABLE =
         (code)((byte)*UNRECOVERED_JUMPTABLE >> ((byte)cVar63 & 7) |
               (char)*UNRECOVERED_JUMPTABLE << 8 - ((byte)cVar63 & 7));
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100022441:
    goto switchD_100025d1a_caseD_22447;
  case (undefined **)0x100022639:
  case (undefined **)0x100022633:
                    /* WARNING: Could not recover jumptable at 0x000100022646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(ulong)(uVar68 + uVar14))
                         ((code *)(ulong)(uVar68 + uVar14),UNRECOVERED_JUMPTABLE_45,&DAT_100025670);
    return ppuVar19;
  case (undefined **)0x100022700:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100022866:
    ppuVar61 = (undefined **)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)bVar27 * -2 + 1);
    bVar81 = ((ulong)UNRECOVERED_JUMPTABLE_46 & 0x8944a717) == 0;
    goto code_r0x00010002286d;
  case (undefined **)0x100022876:
    ppuVar51 = (undefined **)*ppuVar19;
    ppuVar42 = ppuVar19 + 1;
    goto code_r0x000100022859;
  case (undefined **)0x1000228c7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100022945:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_45 + -0xf7c2777) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_45 + -0xf7c2777) & uVar34;
    if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x1 && uVar13 != uVar14) {
      UNRECOVERED_JUMPTABLE_41 = (undefined **)CONCAT71(uVar24,(bVar11 + 0x40) - (uVar13 < uVar14));
    }
    UNRECOVERED_JUMPTABLE_44 = (uint *)(ulong)(uint)((int)UNRECOVERED_JUMPTABLE_41 * 9);
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)
         (long)(int)((*(long *)ppuVar19[-0x20] == 0x611c7e149b50062b ||
                     ppuVar19[-0x54] + *(long *)ppuVar19[-0x20] == (undefined *)0x100376df8e301b75)
                    + uVar49);
    goto code_r0x000100022995;
  case (undefined **)0x1000229b1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000229eb:
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)(ulong)*(uint *)((long)ppuVar42 + (long)UNRECOVERED_JUMPTABLE_47 * 4);
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar56;
    goto code_r0x0001000229c4;
  case (undefined **)0x100022ca4:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar19 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x1d);
    *UNRECOVERED_JUMPTABLE =
         (code)((byte)*UNRECOVERED_JUMPTABLE >> ((byte)cVar63 & 7) |
               (char)*UNRECOVERED_JUMPTABLE << 8 - ((byte)cVar63 & 7));
    *(undefined ***)((long)ppuVar42 + -8) = ppuVar42;
    *(undefined8 *)((long)ppuVar42 + -0x10) = 0;
    goto code_r0x000100022cac;
  case (undefined **)0x100022d13:
    ppuVar56 = (undefined **)
               (ulong)(uVar77 + ((undefined **)(ulong)((uVar14 ^ uVar49 ^ 0xa22625f2) + 0x5dd9ea22)
                                < UNRECOVERED_JUMPTABLE_47));
    goto code_r0x000100022d2a;
  case (undefined **)0x10002302b:
    *(code *)(ppuVar19 + 6) = *(code *)(ppuVar19 + 6);
    if (bVar62 == 0) {
      ppuVar66 = (undefined **)(ulong)(uVar68 < uVar54);
    }
                    /* WARNING: Could not recover jumptable at 0x000100023064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100022fd7 +
                         (int)*(uint *)((long)ppuVar71 + (long)(int)((int)ppuVar66 + uVar49) * 4)))
                         (&DAT_100022fd7 +
                          (int)*(uint *)((long)ppuVar71 + (long)(int)((int)ppuVar66 + uVar49) * 4),
                          (code *)((long)ppuVar69 + (long)ppuVar56),UNRECOVERED_JUMPTABLE_41);
    return ppuVar19;
  case (undefined **)0x1000230a1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023132:
    ppuVar51 = (undefined **)(ulong)((uint)ppuVar19 * 5);
    UNRECOVERED_JUMPTABLE_46 = (undefined **)puVar75;
    goto code_r0x000100023136;
  case (undefined **)0x100023606:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000236c7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000236ea:
    goto code_r0x0001000236ea;
  case (undefined **)0x100023817:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023852:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000239b2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100023af0:
    goto code_r0x000100023af0;
  case (undefined **)0x100023cfe:
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7f) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7f) - bVar11);
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100024059:
    goto code_r0x000100024059;
  case (undefined **)0x100024142:
    uVar14 = (uVar14 << (bVar39 - 0x3c & 0x1f) & 0xdf2bb3d0) + (uVar34 ^ 0xef95d9e8);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar58 + 0xef95d9bd);
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar14 - (uVar58 + 0xef95d9bd));
    goto code_r0x00010002415f;
  case (undefined **)0x100024226:
    lVar29 = CONCAT71(uVar24,bVar11 + 0x30);
    *(code *)((long)ppuVar19 + -0x7fdddf4e) =
         (code)((char)*(code *)((long)ppuVar19 + -0x7fdddf4e) + (char)cVar63);
    *(code *)((long)UNRECOVERED_JUMPTABLE_45 + lVar29) = (code)0x0;
    *(undefined1 *)(lVar29 + (ulong)(uVar34 + uVar58 + 0xf880211c)) = 1;
    *(uint *)UNRECOVERED_JUMPTABLE_47 = *(uint *)UNRECOVERED_JUMPTABLE_47 + 4;
    *(uint *)(ppuVar19 + -0x1d) = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x000100024280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100024259 + *(int *)(&DAT_1006d2600 + (long)(int)(uVar58 + 1) * 4)))
                         ();
    return ppuVar19;
  case (undefined **)0x100024247:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002448f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000245ad:
    uVar14 = in((short)UNRECOVERED_JUMPTABLE_46);
                    /* WARNING: Could not recover jumptable at 0x00010002461a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000245ef +
                         (int)*(uint *)((long)ppuVar71 +
                                       (long)(int)((uVar14 == (uVar34 ^ uVar13)) + uVar40) * 4)))
                         (UNRECOVERED_JUMPTABLE_37,
                          &UNK_1000245ef +
                          (int)*(uint *)((long)ppuVar71 +
                                        (long)(int)((uVar14 == (uVar34 ^ uVar13)) + uVar40) * 4));
    return ppuVar19;
  case (undefined **)0x100024734:
    uVar22 = (ulong)ppuVar42 & 0xffffffff;
    goto code_r0x000100024736;
  case (undefined **)0x100024771:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x1000247ba:
    goto code_r0x0001000247ba;
  case (undefined **)0x1000248a2:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100024abd:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + 99);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE >> 4 | *(uint *)UNRECOVERED_JUMPTABLE << 0x1c;
                    /* WARNING: Could not recover jumptable at 0x000100024acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)(uVar14 | 0xffffff9a)))();
    return ppuVar19;
  case (undefined **)0x100024d0b:
                    /* WARNING: Could not recover jumptable at 0x000100024d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100024cf4 +
                         *(int *)((long)ppuVar65 +
                                 (long)(int)(((undefined **)unaff_R12 ==
                                             (undefined **)
                                             ((long)UNRECOVERED_JUMPTABLE_41 + (long)puVar78)) +
                                            uVar34) * 4)))();
    return ppuVar19;
  case (undefined **)0x100024e61:
                    /* WARNING: Could not recover jumptable at 0x000100024e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x24e3e))();
    return ppuVar19;
  case (undefined **)0x1000253c1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100025752:
    if ((long)UNRECOVERED_JUMPTABLE_37 < -0x100020c5b) {
      uVar68 = uVar68 + 0x7b82403e;
      ppuVar65 = (undefined **)(ulong)(uVar13 + 0x9cc521cb);
      uVar28 = (uint)(uVar68 < uVar54 + 0xd97c4d92);
      bVar79 = uVar13 + 0x9cc521cb < 0xd97c4e7c;
    }
    puVar70 = (uint *)(ulong)((uint)ppuVar65 < uVar68);
    if (bVar79 != SUB41(uVar28,0)) {
      puVar70 = (uint *)(ulong)uVar28;
    }
    goto code_r0x00010002576d;
  case (undefined **)0x10002589d:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)ppuVar19[-0x1e];
    puVar75 = (uint *)unaff_RBX;
    UNRECOVERED_JUMPTABLE_37 = ppuVar56;
    goto code_r0x0001000258a5;
  case (undefined **)0x100025b18:
    goto code_r0x000100025b18;
  case (undefined **)0x100025d70:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uint)(int)sVar12;
    goto code_r0x000100025d71;
  case (undefined **)0x100026154:
    goto code_r0x000100026154;
  case (undefined **)0x1000264b7:
    if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1 || bVar82) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000264f7:
    ppuVar19[-0x3d] = (undefined *)0x0;
    ppuVar19[-0x3c] = (undefined *)0x2cc289762f9fc832;
                    /* WARNING: Could not recover jumptable at 0x00010002655d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000264f8 +
                         (int)*(uint *)((long)ppuVar71 +
                                       (long)(int)((uint)(ppuVar19[-0x2a] ==
                                                         (undefined *)0x3a5a9c416583c527) +
                                                  uVar49 * 0x11) * 4)))();
    return ppuVar19;
  case (undefined **)0x100026529:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100026597:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7d) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7d) + uVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100026a31:
    UNRECOVERED_JUMPTABLE = (code *)((long)unaff_RBX + (long)UNRECOVERED_JUMPTABLE_47 * 4 + -0x5b);
    *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + -1;
    do {
      UNRECOVERED_JUMPTABLE_47 = (undefined **)((long)UNRECOVERED_JUMPTABLE_47 + -1);
    } while (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x0 && *(int *)UNRECOVERED_JUMPTABLE != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100026a5f:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100026b4f:
    *(undefined8 *)((long)ppuVar42 + -8) = 0x100026b54;
    uVar14 = func_0x00010b3ff289();
    *(undefined ***)((long)ppuVar42 + -8) = UNRECOVERED_JUMPTABLE_37;
    UNRECOVERED_JUMPTABLE_37 = extraout_RDX_00;
    goto code_r0x000100026b55;
  case (undefined **)0x1000270d5:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(long)(int)(uVar40 ^ 0xbf);
  case (undefined **)0x1000270da:
    goto code_r0x0001000270da;
  case (undefined **)0x1000270e0:
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(ulong)*(uint *)(ppuVar19 + (long)UNRECOVERED_JUMPTABLE_41);
    goto code_r0x0001000270da;
  case (undefined **)0x100027ce8:
    *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar11;
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x75) + (char)cVar63);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100028ef4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100029c35:
    uVar15 = CONCAT71((int7)(int3)(uVar68 >> 8),bVar82);
    iVar57 = (int)uVar15;
                    /* WARNING: Could not recover jumptable at 0x000100029c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100029c2e +
                         *(int *)(&DAT_1006d74d0 + (long)(int)(uVar14 + iVar57) * 4)))
                         (uVar15,iVar57 * 5 +
                                 (int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_46 >> 8),!bVar82)
                                 * -2 + uVar14,
                          &UNK_100029c2e +
                          *(int *)(&DAT_1006d74d0 + (long)(int)(uVar14 + iVar57) * 4));
    return ppuVar19;
  }
  uVar68 = uVar68 * 2 + 0x80a88ee0;
  uVar54 = uVar68 ^ (uint)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_47 >> 8),bVar79);
  uVar68 = uVar68 & 0x3febbbde;
  ppuVar19[-0x19] = (undefined *)(ulong)((uVar54 + uVar68 * 2) - 0x40034e);
  uVar68 = uVar54 + uVar68 * 2 + 0x20d64edd;
  bVar80 = uVar14 < uVar68;
  if (SUB81(ppuVar66,0) != uVar68 < 0x60c20abb) {
    bVar80 = uVar68 < 0x60c20abb;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001fff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)((long)UNRECOVERED_JUMPTABLE_45 +
                       (long)(int)*(uint *)((long)ppuVar56 +
                                           (long)(int)((uint)bVar80 + (int)UNRECOVERED_JUMPTABLE_46
                                                      + -0x2e3fe415) * 4)))();
  return ppuVar19;
code_r0x000100022859:
  out(0xa8,(char)UNRECOVERED_JUMPTABLE_41);
  puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[(int)((uint)unaff_R12 ^ 0xb6)];
  puVar21 = ppuVar51[-0x48];
  *(undefined **)((long)ppuVar42 + -8) = &UNK_100022894;
  puVar17 = (undefined *)(*(code *)(puVar17 + -2))(puVar21,UNRECOVERED_JUMPTABLE_41,0);
  UNRECOVERED_JUMPTABLE_44 = (uint *)&DAT_1006d2600;
  ppuVar51[-0x6b] = puVar17;
  bVar80 = puVar17 == (undefined *)0x0;
code_r0x0001000228ac:
                    /* WARNING: Could not recover jumptable at 0x0001000228c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&UNK_10002285b +
                       *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                               (long)(int)((int)unaff_R12 + (uint)bVar80) * 4)))();
  return ppuVar19;
code_r0x00010001db9f:
  uVar68 = (int)ppuVar51[-9] + 0x3654f1a2;
  uVar14 = (uint)UNRECOVERED_JUMPTABLE_46;
  bVar80 = uVar14 < (int)ppuVar65 + 0xb2b15a47U;
  ppuVar19 = (undefined **)(ulong)bVar80;
  UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uVar68 < 0xb2b15a9d != bVar80);
  bVar80 = uVar14 < uVar68;
  bVar83 = uVar14 == uVar68;
  UNRECOVERED_JUMPTABLE_37 = (undefined **)ppuVar51[-0xe];
code_r0x00010001dbea:
  uVar14 = (uint)(!bVar80 && !bVar83);
  if ((char)UNRECOVERED_JUMPTABLE_45 != '\0') {
    uVar14 = (uint)ppuVar19;
  }
                    /* WARNING: Could not emulate address calculation at 0x00010001dc06 */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_10001db6c +
                       (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                            [(int)((uVar14 & 0xff) + (int)UNRECOVERED_JUMPTABLE_44)]))
                       (UNRECOVERED_JUMPTABLE_37,
                        &DAT_10001db6c +
                        (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                             [(int)((uVar14 & 0xff) + (int)UNRECOVERED_JUMPTABLE_44)],
                        (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                   [(int)((uVar14 & 0xff) + (int)UNRECOVERED_JUMPTABLE_44)],
                        UNRECOVERED_JUMPTABLE_47);
  return ppuVar19;
code_r0x00010001bf75:
                    /* WARNING: Could not recover jumptable at 0x00010001bfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&LAB_100019a91 +
                       (int)*(uint *)((long)puVar75 +
                                     (long)(int)((int)UNRECOVERED_JUMPTABLE_44 + 0x8fac5aa +
                                                (uint)((int)UNRECOVERED_JUMPTABLE_41 <
                                                      (int)((uVar28 | 2) ^ 0x5aed971f))) * 4)))
                       (puVar75,&LAB_100019a91 +
                                (int)*(uint *)((long)puVar75 +
                                              (long)(int)((int)UNRECOVERED_JUMPTABLE_44 + 0x8fac5aa
                                                         + (uint)((int)UNRECOVERED_JUMPTABLE_41 <
                                                                 (int)((uVar28 | 2) ^ 0x5aed971f)))
                                              * 4));
  return ppuVar19;
code_r0x00010001fe66:
                    /* WARNING: Could not recover jumptable at 0x00010001fe74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_10002025b +
                       (int)*(uint *)((long)ppuVar76 + (long)UNRECOVERED_JUMPTABLE_46 * 4)))
                       (ppuVar61,&DAT_10002025b,
                        &DAT_10002025b +
                        (int)*(uint *)((long)ppuVar76 + (long)UNRECOVERED_JUMPTABLE_46 * 4),
                        UNRECOVERED_JUMPTABLE_47);
  return ppuVar19;
code_r0x000100021f98:
                    /* WARNING: Could not recover jumptable at 0x000100021f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)UNRECOVERED_JUMPTABLE_46)
                       (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                        UNRECOVERED_JUMPTABLE_47,ppuVar65,ppuVar66);
  return ppuVar19;
code_r0x00010001de78:
  *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (long)UNRECOVERED_JUMPTABLE_45) = (code)0x0;
  UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_46 + 0xa205f286);
  *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (long)UNRECOVERED_JUMPTABLE_45) = (code)0x0;
  uVar14 = (int)UNRECOVERED_JUMPTABLE_46 + 0xa205f287;
  *(code *)((long)UNRECOVERED_JUMPTABLE_41 + (ulong)uVar14) = (code)0x1;
  *(uint *)UNRECOVERED_JUMPTABLE_47 = *(uint *)UNRECOVERED_JUMPTABLE_47 + 4;
  UNRECOVERED_JUMPTABLE_46 = (undefined **)CONCAT71((uint7)(uint3)(uVar14 >> 8),1);
switchD_100023f94_caseD_1de9b:
  puVar75 = (uint *)((ulong)ppuVar76 & 0xffffffff);
code_r0x00010001de97:
  *(ushort *)((long)UNRECOVERED_JUMPTABLE_46 + -0xc76bbff) =
       *(ushort *)((long)UNRECOVERED_JUMPTABLE_46 + -0xc76bbff) ^ (ushort)UNRECOVERED_JUMPTABLE_45;
  uVar14 = (uint)ppuVar76;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                    (long)(int)(((uint)UNRECOVERED_JUMPTABLE_46 & 1) + uVar14) * 4)
               + 0x10001de9b);
  switch(UNRECOVERED_JUMPTABLE) {
  case (code *)0x100020449:
                    /* WARNING: Could not recover jumptable at 0x000100020449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return ppuVar19;
  case (code *)0x100023a29:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)*ppuVar42;
    ppuVar61 = *(undefined ***)((ulong)((uint)puVar75 ^ 0x138) + 0x40);
    bVar79 = ppuVar61 == (undefined **)0x0;
  }
code_r0x000100023a3f:
                    /* WARNING: Could not recover jumptable at 0x000100023a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&UNK_100026a85 +
                       (int)*(uint *)((long)puVar78 + (long)(int)(uVar14 + bVar79) * 4)))
                       (ppuVar61,UNRECOVERED_JUMPTABLE_45,
                        &UNK_100026a85 +
                        (int)*(uint *)((long)puVar78 + (long)(int)(uVar14 + bVar79) * 4));
  return ppuVar19;
switchD_100025d1a_caseD_20403:
  UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x39);
  *UNRECOVERED_JUMPTABLE =
       (code)((byte)*UNRECOVERED_JUMPTABLE >> 6 | (char)*UNRECOVERED_JUMPTABLE << 2);
code_r0x000100020407:
  ppuVar65 = (undefined **)
             (ulong)(uint)((int)CONCAT71((int7)((ulong)ppuVar65 >> 8),bVar80) + (int)puVar75);
switchD_100020322_caseD_2040e:
  ppuVar65 = (undefined **)(long)*(int *)((long)unaff_R12 + (long)(int)ppuVar65 * 4);
  puVar75 = (uint *)0x100020369;
code_r0x00010002041c:
                    /* WARNING: Could not recover jumptable at 0x000100020425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)(*(code *)((long)puVar75 + (long)ppuVar65))(ppuVar61);
  return ppuVar19;
code_r0x000100022995:
  uVar14 = *(uint *)((long)ppuVar65 + (long)UNRECOVERED_JUMPTABLE_41 * 4);
  ppuVar19[-0x1d] = (undefined *)UNRECOVERED_JUMPTABLE_44;
                    /* WARNING: Could not recover jumptable at 0x0001000229aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)(*(code *)(&UNK_100022947 + (int)uVar14))();
  return ppuVar19;
switchD_100025d1a_caseD_26246:
  bVar27 = (byte)UNRECOVERED_JUMPTABLE_47 & 0x1f;
  cVar9 = (char)((ulong)puVar75 >> 8);
  puVar75 = (uint *)CONCAT62((int6)((ulong)puVar75 >> 0x10),CONCAT11(cVar9 >> bVar27,(char)puVar75))
  ;
  bVar80 = ((ulong)UNRECOVERED_JUMPTABLE_47 & 0x1f) == 0;
  DAT_b9fffffe00858b48 = SUB81(UNRECOVERED_JUMPTABLE_41,0);
  out(0xd5,DAT_b9fffffe00858b48);
  *(uint *)((long)UNRECOVERED_JUMPTABLE_45 + -0x67) =
       *(int *)((long)UNRECOVERED_JUMPTABLE_45 + -0x67) + -0x32 +
       (uint)(byte)(bVar80 * bVar79 | !bVar80 * ((cVar9 >> bVar27 - 1 & 1U) != 0));
  uVar28 = (int)UNRECOVERED_JUMPTABLE_47 + *(uint *)UNRECOVERED_JUMPTABLE_41;
  UNRECOVERED_JUMPTABLE_41 = (undefined **)0xc;
code_r0x00010002625e:
  *(uint *)ppuVar51[-0x4d] = uVar28;
  ppuVar69 = (undefined **)(ulong)*(uint *)(ppuVar51 + -0x2b);
  UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)*(uint *)((long)ppuVar51 + -0x154);
  ppuVar52 = ppuVar51;
code_r0x000100026276:
  ppuVar76 = (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_41 + 0x11e);
  UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_41 + 0x3166a971);
code_r0x000100026282:
  iVar59 = (int)ppuVar76;
  iVar57 = 0x3166a97d - (uint)((int)UNRECOVERED_JUMPTABLE_47 + 0xabf54575U < 0x7ffffffe);
  if ((int)ppuVar69 != (int)UNRECOVERED_JUMPTABLE_41) {
    iVar57 = (int)ppuVar69;
  }
switchD_100023ebf_caseD_1:
  uVar34 = (uint)(iVar57 == (iVar59 + 0xa7dfce85U & 0xff37fbfc ^ 0x967163fc) + iVar59 + 3) + iVar59;
  ppuVar51 = ppuVar52;
  ppuVar65 = (undefined **)puVar75;
code_r0x0001000262c4:
  uVar14 = *(uint *)((long)ppuVar65 + (long)(int)uVar34 * 4);
  *(uint *)(ppuVar51 + -0x1d) = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x0001000262e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)(*(code *)((long)(int)uVar14 + 0x1000262a0))();
  return ppuVar19;
code_r0x00010002568d:
  auVar87._8_8_ = UNRECOVERED_JUMPTABLE_46;
  auVar87._0_8_ = (ulong)UNRECOVERED_JUMPTABLE_41;
  ppuVar61 = (undefined **)(ulong)((uint)ppuVar61 ^ 0x1ecdb559);
code_r0x000100025693:
  lVar29 = auVar87._0_8_;
  iVar57 = (int)UNRECOVERED_JUMPTABLE_47;
  uVar22 = (ulong)(uint)((int)ppuVar61 + iVar57);
  *(code *)(lVar29 + uVar22) = *(code *)((long)ppuVar56 + uVar22);
  *(code *)(lVar29 + (ulong)(iVar57 + 0xb9da7ef4)) =
       *(code *)((long)ppuVar56 + (ulong)(iVar57 + 0xb9da7ef4));
  *(code *)(lVar29 + (ulong)(iVar57 + 0xb9da7ef3)) =
       *(code *)((long)ppuVar56 + (ulong)(iVar57 + 0xb9da7ef3));
                    /* WARNING: Could not recover jumptable at 0x0001000256db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(auVar87._8_8_ +
                       (long)(int)*(uint *)((long)puVar75 +
                                           (long)(int)((uint)(iVar57 == 0x4625810d) +
                                                      (int)UNRECOVERED_JUMPTABLE_45) * 4)))();
  return ppuVar19;
switchD_100025d1a_caseD_1ded7:
  out(uVar32,cVar63);
code_r0x00010001dec5:
  puVar17 = ppuVar52[-0x1e];
  *(uint *)(puVar17 + -0x6c76618fb7247bb8) =
       ((uint)UNRECOVERED_JUMPTABLE_41 ^ 0x7d7f7afb) +
       ((uint)UNRECOVERED_JUMPTABLE_41 & 0xfd7f7afb) * 2 + -0x1231200;
  *(undefined4 *)(puVar17 + -0x6c76618fb7247bb4) = 0x21493b80;
  ppuVar52[-0x14] = puVar17;
  ppuVar61 = (undefined **)ppuVar52[-0x41];
  ppuVar52[-0xf] = ppuVar52[-0x42];
switchD_100025d1a_caseD_1df1e:
  puVar75 = (uint *)0xb7eafb74;
code_r0x00010001df1c:
  *(ushort *)((long)puVar75 + -0x4815048c) =
       *(ushort *)((long)puVar75 + -0x4815048c) ^ (ushort)ppuVar61;
  ppuVar52[-9] = ppuVar52[-0x40];
  puVar78 = puVar70;
LAB_10001df31:
  puVar17 = ppuVar52[-9];
  UNRECOVERED_JUMPTABLE = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)puVar75 + 0x481504ae];
  *(undefined8 *)((long)ppuVar42 + -8) = 0x10001df56;
  (*UNRECOVERED_JUMPTABLE)(ppuVar61);
  puVar21 = ppuVar52[-0xf];
  *(undefined8 *)((long)ppuVar42 + -8) = 0x10001df5d;
  (*UNRECOVERED_JUMPTABLE)(puVar21);
                    /* WARNING: Could not recover jumptable at 0x00010001df6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&LAB_10001df31 +
                       (int)*(uint *)((long)puVar78 +
                                     (long)(int)((int)puVar75 + 0x481504b4 +
                                                (uint)(puVar17 == (undefined *)0x0)) * 4)))();
  return ppuVar19;
switchD_100025d1a_caseD_25790:
  bVar27 = (byte)UNRECOVERED_JUMPTABLE_41;
  *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x42) =
       *(char *)((long)UNRECOVERED_JUMPTABLE_47 + -0x42) - bVar27;
  *(byte *)UNRECOVERED_JUMPTABLE_41 = (byte)*(code *)UNRECOVERED_JUMPTABLE_41 | bVar27;
  *(byte *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar27;
  *UNRECOVERED_JUMPTABLE_47 = (undefined *)0x0;
  *(undefined4 *)ppuVar51[-0x25] = 0;
  *(undefined8 *)ppuVar51[-0x26] = 0;
  *(uint *)UNRECOVERED_JUMPTABLE_45 = 0;
  ppuVar61 = *(undefined ***)((&PTR__bootstrap_look_up_10082e9f0)[(int)ppuVar76 + 3] + -3);
  UNRECOVERED_JUMPTABLE_45 =
       (undefined **)
       (switchD_10001f9d9::caseD_0 +
       (int)*(uint *)((long)UNRECOVERED_JUMPTABLE_46 +
                     (ulong)((ppuVar61 == (undefined **)0x0) + 8) * 4));
switchD_100025d1a_caseD_257f6:
  ppuVar51[-0x2c] = (undefined *)UNRECOVERED_JUMPTABLE_47;
                    /* WARNING: Could not recover jumptable at 0x000100025805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)UNRECOVERED_JUMPTABLE_45)
                       (ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                        UNRECOVERED_JUMPTABLE_47,ppuVar65);
  return ppuVar19;
switchD_100025d1a_caseD_2718f:
  *(int *)(UNRECOVERED_JUMPTABLE_41 + 0xe) = (int)in_ST0;
code_r0x000100027193:
  *(uint *)((long)puVar75 + 0xe3c8b48) = (uint)UNRECOVERED_JUMPTABLE_46;
  iVar57 = (int)UNRECOVERED_JUMPTABLE_41;
  puVar75 = (uint *)(ulong)((uint)(byte)*(code *)((long)ppuVar61 + (ulong)(iVar57 + 0xdeb6c481)) <<
                           (((byte)ppuVar65 ^ 0x49) & 0x1f));
  UNRECOVERED_JUMPTABLE_47 =
       (undefined **)
       (ulong)((uint)(byte)*(code *)((long)ppuVar61 + (ulong)(iVar57 + 0xdeb6c482)) << 8 |
              (uint)(byte)*(code *)((long)ppuVar61 + (ulong)(iVar57 + 0xdeb6c480)) << 0x18);
  puVar70 = (uint *)(ulong)(iVar57 + 0xdeb6c483);
switchD_100025d1a_caseD_271d1:
  uVar14 = (uint)(byte)*(code *)((long)ppuVar61 + (long)puVar70) | (uint)UNRECOVERED_JUMPTABLE_47 |
           (uint)puVar75;
  ppuVar51[-0xb] = (undefined *)UNRECOVERED_JUMPTABLE_46;
  *(uint *)UNRECOVERED_JUMPTABLE_46 = (int)UNRECOVERED_JUMPTABLE_41 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100027224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_100027172 +
                       (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                            [(uint)((uVar14 ^ 0xb7efa97f) + (uVar14 & 0x37efa97f) * 2 == -0x48105681
                                   ) + (int)ppuVar66]))();
  return ppuVar19;
code_r0x0001000212f6:
  *(code *)puVar75 = (code)0x45;
  puVar17 = ppuVar51[-0x1d];
  ppuVar51[-0x28] = (undefined *)ppuVar65;
  ppuVar51[-0x27] = (undefined *)ppuVar66;
  ppuVar42[-1] = &UNK_100021314;
  puVar17 = (undefined *)(*(code *)unaff_R12)((int)UNRECOVERED_JUMPTABLE_45 + -3,puVar17);
  ppuVar51[-0x1e] = puVar17;
  UNRECOVERED_JUMPTABLE_37 = (undefined **)ppuVar51[-0x22];
  ppuVar42[-1] = &UNK_100021328;
  auVar86 = (*(code *)UNRECOVERED_JUMPTABLE_37)(puVar17);
  UNRECOVERED_JUMPTABLE_46 = auVar86._8_8_;
  ppuVar66 = (undefined **)ppuVar51[-0x27];
  ppuVar65 = (undefined **)ppuVar51[-0x28];
  UNRECOVERED_JUMPTABLE_45 = (undefined **)&DAT_1006d2600;
  puVar17 = (undefined *)
            (long)*(int *)(&DAT_1006d2600 +
                          (long)(int)((uint)(auVar86._0_8_ == ppuVar65) + (int)ppuVar76) * 4);
  switch(&UNK_1000212f1 + (long)puVar17) {
  case (undefined *)0x100022276:
code_r0x000100022276:
    uVar22 = (ulong)(uint)((int)UNRECOVERED_JUMPTABLE_45 + *(int *)ppuVar52[-0x2d]);
    uVar60 = uVar22 << (((byte)UNRECOVERED_JUMPTABLE_37 ^ 0xe) & 0x3f) & 0x1e2846e84;
    ppuVar52[-0x28] = puVar17;
    ppuVar19 = (undefined **)
               switchD_100020322::caseD_2214a
                         (uVar60,(uVar22 + 0xebe9dd97f1423742) - uVar60,UNRECOVERED_JUMPTABLE_46,
                          &UNK_10002182b,ppuVar65,ppuVar66);
    return ppuVar19;
  }
switchD_100025d1a_caseD_2335a:
  UNRECOVERED_JUMPTABLE = (code *)ppuVar52[-0x4f];
  *(undefined8 *)((long)ppuVar42 + -8) = 0x100023376;
  uVar14 = (*UNRECOVERED_JUMPTABLE)(ppuVar52 + -0x16,0);
                    /* WARNING: Could not emulate address calculation at 0x0001000233a6 */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_100020621 +
                       *(int *)(&DAT_1006d2600 +
                               (long)(int)((int)ppuVar76 + 0x58e8348b +
                                          (uint)((int)((uVar14 ^ 0xe3fbf4ed) +
                                                       (uVar14 & 0xe3fbf4ed) * 2 + -0x63fbf4ed) <
                                                (int)(((int)puVar78 + 0xbf7cfde3U & 0x408301ff) -
                                                     0x3b))) * 4)))();
  return ppuVar19;
code_r0x000100020529:
  ppuVar19[-0x14] = (undefined *)UNRECOVERED_JUMPTABLE_37;
  ppuVar19[-0x16] = (undefined *)UNRECOVERED_JUMPTABLE_37;
  ppuVar19[-0x19] = (undefined *)UNRECOVERED_JUMPTABLE_37;
  ppuVar19[-0x1c] = (undefined *)UNRECOVERED_JUMPTABLE_37;
  ppuVar19[-0xc] = (undefined *)0x5c05e2a4aeb6ae7e;
  ppuVar19[-0x18] = (undefined *)0x5c05e2a4aeb6ae7e;
  ppuVar19[-0x1b] = (undefined *)0x5c05e2a4aeb6ae7e;
  ppuVar19[-0x26] = (undefined *)UNRECOVERED_JUMPTABLE_41;
  ppuVar19 = (undefined **)
             switchD_100020322::caseD_2214a
                       (0x5c05e2a4aeb6ae7e,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                        UNRECOVERED_JUMPTABLE_47);
  return ppuVar19;
code_r0x00010001f384:
  *(undefined **)((long)ppuVar42 + -8) = &UNK_10001f388;
  lVar29 = (*(code *)UNRECOVERED_JUMPTABLE_41)();
  iVar57 = *(int *)((long)UNRECOVERED_JUMPTABLE_41 +
                   (long)(int)((int)puVar78 + (uint)(lVar29 == 0)) * 4);
  ppuVar19[-0x2b] = (undefined *)0x0;
  ppuVar19[-0xc] = (undefined *)0x5c05e2a4aeb6ae7e;
                    /* WARNING: Could not recover jumptable at 0x00010001f3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)(*(code *)(&UNK_10001f351 + iVar57))();
  return ppuVar19;
switchD_100025d1a_caseD_23685:
code_r0x000100023688:
  ppuVar19[-0xf] = (undefined *)UNRECOVERED_JUMPTABLE_41;
  ppuVar19 = (undefined **)switchD_100020322::caseD_2214a();
  return ppuVar19;
switchD_100025d1a_caseD_2748c:
  *(char *)UNRECOVERED_JUMPTABLE_41 =
       (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)UNRECOVERED_JUMPTABLE_41;
  *(char *)(ppuVar61 + 0x200) = (char)*(code *)(ppuVar61 + 0x200) + (char)((ulong)puVar75 >> 8);
  ppuVar51[-0xe] = (undefined *)UNRECOVERED_JUMPTABLE_46;
  UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0xc];
  *(undefined8 *)((long)ppuVar42 + -8) = 0x10002749b;
  lVar29 = (*UNRECOVERED_JUMPTABLE)();
  *(long *)ppuVar51[-0xe] = lVar29;
                    /* WARNING: Could not recover jumptable at 0x0001000274be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_10002744d +
                       (int)*(uint *)((long)puVar78 +
                                     (long)(int)((int)ppuVar76 + (uint)(lVar29 == 0)) * 4)))();
  return ppuVar19;
code_r0x00010001f548:
                    /* WARNING: Could not recover jumptable at 0x00010001f569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_10001f4d3 +
                       (int)*(uint *)((long)puVar70 +
                                     (long)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_41 >>
                                                                8),(int)UNRECOVERED_JUMPTABLE_44 ==
                                                                   0x3166a97d) + (int)ppuVar71) * 4)
                       ))();
  return ppuVar19;
code_r0x00010001fc2b:
  uVar22 = (ulong)((int)ppuVar61 + 0xad740986);
  uVar14 = (uint)puVar75;
  puVar17 = *(undefined **)((long)unaff_R12 + (long)(int)(uVar14 ^ 0x2e3fe4d4) * 8);
  *(char *)((long)ppuVar76 + uVar22) = puVar17[uVar22 - 5] + -0x73;
  iVar57 = ((uint)UNRECOVERED_JUMPTABLE_41 ^ 0x8e) + (int)ppuVar65;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)UNRECOVERED_JUMPTABLE_45 +
               (long)(int)*(uint *)((long)puVar78 +
                                   (long)(int)(uVar14 + (-1 < (int)((uVar14 + 0xd1c01b34) - iVar57 |
                                                                   iVar57 - (uVar14 + 0xd1c01b34)))
                                              + -0x2e3fe43e) * 4));
                    /* WARNING: Could not recover jumptable at 0x00010001fc8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*UNRECOVERED_JUMPTABLE)
                       (iVar57,UNRECOVERED_JUMPTABLE_45,puVar17 + -5,(int)ppuVar61 + -1,
                        UNRECOVERED_JUMPTABLE);
  return ppuVar19;
code_r0x000100022d2a:
  lVar29 = (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_37 + (long)(int)ppuVar56 * 4);
                    /* WARNING: Could not recover jumptable at 0x000100022d42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&UNK_100022cec + lVar29))
                       (UNRECOVERED_JUMPTABLE_37,&UNK_100022cec + lVar29,lVar29,
                        UNRECOVERED_JUMPTABLE_47,ppuVar19[-0x21]);
  return ppuVar19;
code_r0x00010001b33e:
  do {
  } while (-0x10001ba33 < (long)UNRECOVERED_JUMPTABLE_47);
  puVar75 = UNRECOVERED_JUMPTABLE_44;
  if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x1 && !bVar83) {
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uVar13 + 0x83c1b60f);
  }
code_r0x00010001b347:
                    /* WARNING: Could not recover jumptable at 0x00010001b35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)((long)*(int *)((long)puVar75 +
                                      (long)((int)UNRECOVERED_JUMPTABLE_41 + (int)ppuVar76) * 4) +
                       0x10001b330))();
  return ppuVar19;
code_r0x00010001b3f4:
  uVar14 = *(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                    (long)(int)((int)unaff_RBX + 0x8fac58a +
                               (uint)(*(uint *)(ppuVar19 + -0xb) == ((uint)puVar78 ^ 0x3166a953))) *
                    4);
  ppuVar19[-10] = (undefined *)unaff_R12;
                    /* WARNING: Could not recover jumptable at 0x00010001b42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&DAT_10001b3a6 + (int)uVar14))
                       (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                        &DAT_10001b3a6 + (int)uVar14,UNRECOVERED_JUMPTABLE_44);
  return ppuVar19;
code_r0x000100020198:
  out((short)UNRECOVERED_JUMPTABLE_46,(char)UNRECOVERED_JUMPTABLE_41);
  *(uint *)((long)ppuVar19 + -0x1bc) = (uint)UNRECOVERED_JUMPTABLE_47;
  UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0x21];
  *(undefined **)((long)ppuVar42 + -8) = &UNK_1000201c1;
  puVar17 = (undefined *)
            (*UNRECOVERED_JUMPTABLE)
                      (((uint)UNRECOVERED_JUMPTABLE_44 ^ 0x18 ^ ((uint)puVar75 ^ 0x79) * 2 ^
                       0x56092ea0) + (int)UNRECOVERED_JUMPTABLE_41);
  ppuVar19[-100] = puVar17;
  iVar57 = *(int *)(&DAT_1006d2600 +
                   (long)(int)((uint)UNRECOVERED_JUMPTABLE_44 + (uint)(puVar17 == (undefined *)0x0))
                   * 4);
  *(uint *)(ppuVar19 + -0x1d) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x0001000201f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)(*(code *)(&DAT_100020192 + iVar57))();
  return ppuVar19;
code_r0x00010001f679:
  pbVar1 = (byte *)((long)ppuVar61 * 5 + 0x45);
  *pbVar1 = *pbVar1 & (byte)UNRECOVERED_JUMPTABLE_41;
                    /* WARNING: Could not recover jumptable at 0x00010001f6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&UNK_10001f67a +
                       *(int *)((long)unaff_R12 +
                               (long)(int)((uint)((int)ppuVar66 ==
                                                 (uVar64 & 0x86c96137 ^ 0x32) * 0x1f + 0x3166a920) +
                                          (int)UNRECOVERED_JUMPTABLE_37 + 0x79369e9f) * 4)))
                       (ppuVar51[-0xb],UNRECOVERED_JUMPTABLE_45,
                        &UNK_10001f67a +
                        *(int *)((long)unaff_R12 +
                                (long)(int)((uint)((int)ppuVar66 ==
                                                  (uVar64 & 0x86c96137 ^ 0x32) * 0x1f + 0x3166a920)
                                           + (int)UNRECOVERED_JUMPTABLE_37 + 0x79369e9f) * 4));
  return ppuVar19;
code_r0x00010001e789:
                    /* WARNING: Could not recover jumptable at 0x00010001e7a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)(&UNK_10001e758 +
                       *(int *)((long)UNRECOVERED_JUMPTABLE_46 + (long)UNRECOVERED_JUMPTABLE_37 * 4)
                       ))(&UNK_10001e758 +
                          *(int *)((long)UNRECOVERED_JUMPTABLE_46 +
                                  (long)UNRECOVERED_JUMPTABLE_37 * 4),UNRECOVERED_JUMPTABLE_45,
                          ppuVar19[-0xe]);
  return ppuVar19;
code_r0x00010001c5fd:
  return (undefined **)
         CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8),
                  ((byte)UNRECOVERED_JUMPTABLE_41 | 8) ^
                  (&DAT_1006d1d30)[(uint)UNRECOVERED_JUMPTABLE_47 ^ 0xb7]);
code_r0x00010001ba87:
  UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 - 0x7c);
  *(uint *)UNRECOVERED_JUMPTABLE =
       *(uint *)UNRECOVERED_JUMPTABLE << 0x1f | *(uint *)UNRECOVERED_JUMPTABLE >> 1;
  uVar68 = (uint)ppuVar65;
  if (!bVar83) {
    ppuVar66 = ppuVar65;
  }
code_r0x00010001ba8f:
  bVar79 = SUB81(ppuVar66,0);
  uVar54 = (uint)ppuVar66;
  uVar74 = (uint)ppuVar76;
  uVar28 = *(uint *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)((uVar54 & 0xff) + uVar74) * 4);
  UNRECOVERED_JUMPTABLE_47 = (undefined **)(long)(int)uVar28;
  bVar80 = (undefined **)0xfffffffefffe45cd < UNRECOVERED_JUMPTABLE_47;
  UNRECOVERED_JUMPTABLE_45 = (undefined **)((long)UNRECOVERED_JUMPTABLE_47 + 0x10001ba32);
  bVar83 = UNRECOVERED_JUMPTABLE_45 == (undefined **)0x0;
  bVar81 = (POPCOUNT((ulong)UNRECOVERED_JUMPTABLE_45 & 0xff) & 1U) == 0;
  cVar26 = SUB41(uVar28,0);
  iVar30 = (int7)(int3)(uVar28 >> 8);
  uVar58 = (uint)UNRECOVERED_JUMPTABLE_46;
  uVar37 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_46 >> 8);
  cVar31 = SUB81(UNRECOVERED_JUMPTABLE_46,0);
  bVar11 = (byte)((ulong)UNRECOVERED_JUMPTABLE_46 >> 8);
  uVar32 = SUB82(UNRECOVERED_JUMPTABLE_46,0);
  uVar13 = (uint)UNRECOVERED_JUMPTABLE_41;
  uVar25 = (undefined6)((ulong)UNRECOVERED_JUMPTABLE_41 >> 0x10);
  uVar24 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8);
  cVar63 = SUB81(UNRECOVERED_JUMPTABLE_41,0);
  cVar9 = (char)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8);
  uVar77 = (uint)UNRECOVERED_JUMPTABLE_37;
  uVar34 = (uint)ppuVar71;
  cVar36 = (char)((ulong)ppuVar71 >> 8);
  uVar53 = (uint)UNRECOVERED_JUMPTABLE_45;
  uVar49 = (uint)ppuVar19;
  uVar67 = (uint)ppuVar69;
  ppuVar61 = UNRECOVERED_JUMPTABLE_47;
  unaff_RBX = ppuVar71;
  ppuVar51 = ppuVar19;
  ppuVar20 = (undefined **)UNRECOVERED_JUMPTABLE_44;
  puVar75 = (uint *)ppuVar76;
  ppuVar52 = ppuVar19;
  switch(UNRECOVERED_JUMPTABLE_45) {
  case (undefined **)0xd2604785:
    UNRECOVERED_JUMPTABLE = (code *)swi(0xe);
    (*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100011984:
    uVar14 = uVar58 + uVar64 + 0x59b074a8;
    uVar68 = uVar58 * 2 + 0x55784140;
    uVar68 = (uVar68 ^ 0xdfe3df71) + (uVar68 & 0xdfe3df70) * 2 + 0xcf107554;
    bVar79 = uVar68 < uVar64 + 0xaef45404;
    bVar80 = uVar14 < uVar68;
    if (uVar14 < 0xaef454c5 != bVar79) {
      bVar80 = bVar79;
    }
                    /* WARNING: Could not recover jumptable at 0x000100011a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100013dbb +
                         (int)(&switchD_100013a5e::switchdataD_1006d0050)
                              [(int)((uint)bVar80 + uVar64 + 6)]))();
    return ppuVar19;
  case (undefined **)0x1000128e8:
                    /* WARNING: Could not recover jumptable at 0x0001000128e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_47)();
    return ppuVar19;
  case (undefined **)0x100013118:
    cVar26 = *(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x77);
    *(uint *)((long)ppuVar71 + 0x41) = ~*(uint *)((long)ppuVar71 + 0x41);
    lVar29 = (long)(int)*(uint *)((long)ppuVar65 +
                                 (long)(int)(((int)CONCAT71(uVar24,(char)cVar63 + (char)cVar26) ==
                                             uVar64 + 0x5aed971c) + uVar34) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100013146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100013116 + lVar29))
                         (UNRECOVERED_JUMPTABLE_37,&DAT_100013116 + lVar29,lVar29,uVar77 + 0x35);
    return ppuVar19;
  case (undefined **)0x100013602:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x49) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x49) + (char)cVar63 + bVar80);
                    /* WARNING: Could not recover jumptable at 0x000100013616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000135e1 +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                 ((ulong)UNRECOVERED_JUMPTABLE_45 & 0xffffffff) * 4)))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                          &UNK_1000135e1 +
                          *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                  ((ulong)UNRECOVERED_JUMPTABLE_45 & 0xffffffff) * 4));
    return ppuVar19;
  case (undefined **)0x100013bc2:
    ppuVar19[-0x1a] = (undefined *)UNRECOVERED_JUMPTABLE_46;
    ppuVar19[-0x1c] = (undefined *)UNRECOVERED_JUMPTABLE_46;
    ppuVar19[-0x1b] = (undefined *)UNRECOVERED_JUMPTABLE_46;
    ppuVar19[-10] = (undefined *)0x742c45ff88570c30;
    ppuVar19[-0x12] = (undefined *)0x742c45ff88570c30;
                    /* WARNING: Could not recover jumptable at 0x000100013bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(ulong)(uVar13 + uVar28))();
    return ppuVar19;
  case (undefined **)0x100013caa:
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + 99) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 99) + (char)cVar26);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001463f:
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 ^ 0x9b)];
    ppuVar19[-0x1b] = (undefined *)0x0;
    puVar21 = ppuVar19[-0x2c];
    ppuVar19[-0x19] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    ppuVar42[-1] = &UNK_100014687;
    lVar29 = (*(code *)(puVar17 + -2))(puVar21,UNRECOVERED_JUMPTABLE_41,0);
    uVar14 = (&switchD_100013a5e::switchdataD_1006d0050)[(int)(uVar14 + (lVar29 == 0))];
    ppuVar19[-0x15] = ppuVar19[-0x19];
                    /* WARNING: Could not recover jumptable at 0x0001000146cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001463f + (int)uVar14))
                         (ppuVar19[-0xb],unaff_R12,&UNK_10001463f + (int)uVar14,ppuVar19[-0x19],
                          ppuVar19[-9],ppuVar56);
    return ppuVar19;
  case (undefined **)0x100014918:
    if (cVar63 == *(code *)UNRECOVERED_JUMPTABLE_37 ||
        (char)cVar63 < (char)*(code *)UNRECOVERED_JUMPTABLE_37) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (cVar63 != *(code *)UNRECOVERED_JUMPTABLE_37 &&
        (char)*(code *)UNRECOVERED_JUMPTABLE_37 <= (char)cVar63) {
      LOCK();
      *(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0xe5e7a3ed) = cVar31;
      UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((long)UNRECOVERED_JUMPTABLE_46 + -0x74b3742d) =
         *(char *)((long)UNRECOVERED_JUMPTABLE_46 + -0x74b3742d) + cVar36;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100014b82:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100014cd2:
                    /* WARNING: Could not recover jumptable at 0x000100014cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_46)(0x3165f9b2,0);
    return ppuVar19;
  case (undefined **)0x100014e00:
    UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0xc];
    puVar50 = (undefined8 *)ppuVar19[-0xb];
    *puVar50 = 0;
    puVar50[1] = 0x4d14149255b31aa0;
    ppuVar42[-1] = (undefined *)0x10001a11a;
    (*UNRECOVERED_JUMPTABLE)();
    ppuVar19[-9] = (undefined *)0x7f31ac3dd4da00c4;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)ppuVar19[-10];
    ppuVar19[-0x1e] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar56 = (undefined **)ppuVar19[-0x19];
LAB_1000190e1:
    *(uint *)(ppuVar19 + -0xb) = uVar72;
    ppuVar19[-10] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    UNRECOVERED_JUMPTABLE = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar74 ^ 0x8b832f)];
    puVar17 = ppuVar19[-0x15];
    ppuVar42[-1] = (undefined *)0x100019118;
    (*UNRECOVERED_JUMPTABLE)(puVar17);
    puVar17 = ppuVar19[-0x1c];
    ppuVar42[-1] = (undefined *)0x100019125;
    (*UNRECOVERED_JUMPTABLE)(puVar17);
    uVar14 = (&switchD_100019e65::switchdataD_1006d1710)
             [(int)((uVar74 - 0x8b82d1) + (uint)(ppuVar56 == (undefined **)0x0))];
    ppuVar19[-0x19] = (undefined *)ppuVar56;
    ppuVar19[-0xd] = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x000100019148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&LAB_1000190e1 + (int)uVar14))();
    return ppuVar19;
  case (undefined **)0x10001505d:
    puVar17 = ppuVar76[(int)(uVar58 - 0x7f)];
    ppuVar19[-0xd] = (undefined *)ppuVar56;
                    /* WARNING: Could not recover jumptable at 0x00010001509f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100015042 +
                         *(int *)((long)unaff_R12 +
                                 (long)(int)((ppuVar56 == (undefined **)(puVar17 + -1) &&
                                             uVar49 != uVar13) + uVar58) * 4)))
                         (0x3165f9b1,UNRECOVERED_JUMPTABLE_45,0x5a793496016ebe8);
    return ppuVar19;
  case (undefined **)0x10001526c:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x45) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x45) + -1;
    out(0x4c,uVar40);
    ppuVar56 = (undefined **)(ulong)(uVar64 + 0x185a222e & 0xe7a5dd7f);
    UNRECOVERED_JUMPTABLE_41 = *(undefined ***)((long)ppuVar71 + (long)ppuVar19[-0xd]);
    uVar28 = 0x15dad;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)ppuVar19[-0x29];
    goto LAB_10001a4cf;
  case (undefined **)0x100015429:
    ppuVar19[-0x17] = (undefined *)ppuVar65;
    ppuVar19[-0x1a] = (undefined *)ppuVar65;
    ppuVar19[-0x1b] = (undefined *)ppuVar65;
    ppuVar19[-0x19] = (undefined *)ppuVar65;
    ppuVar19[-0x18] = (undefined *)ppuVar65;
    ppuVar19[-10] = (undefined *)0x18646b13513134f3;
    ppuVar19[-0x25] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    uVar28 = 0x1a145;
    goto LAB_10001a4cf;
  case (undefined **)0x1000159b7:
                    /* WARNING: Could not recover jumptable at 0x0001000159c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_37 +
                         (long)*(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                       (long)(int)((uVar34 & 0xff) + uVar13) * 4)))();
    return ppuVar19;
  case (undefined **)0x100015c04:
    ppuVar19 = (undefined **)((ulong)ppuVar69 & 0xffffffff);
    if (cVar36 != '\0') {
      ppuVar19 = ppuVar66;
    }
    UNRECOVERED_JUMPTABLE =
         (code *)((long)UNRECOVERED_JUMPTABLE_47 +
                 (long)*(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                               (long)(int)(((uint)ppuVar19 & 0xff) + uVar34 + 0x78ad9f86) * 4));
                    /* WARNING: Could not recover jumptable at 0x000100015c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return ppuVar19;
  case (undefined **)0x100015c33:
    cVar63 = *(code *)((long)UNRECOVERED_JUMPTABLE_37 + (long)UNRECOVERED_JUMPTABLE_47);
    uVar14 = (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)(uVar53 + 0x825b8ccc)) |
             (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)(uVar53 + 0x825b8ccb)) <<
             8 | (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)(uVar53 + 0x825b8cca)
                                      ) << ((bVar79 ^ 0x27U) & 0x1f) | uVar68 << 0x18;
    *(uint *)UNRECOVERED_JUMPTABLE_46 = uVar53 + 8;
    *(uint *)ppuVar19[-0x2f] = (uVar14 ^ 0xb7efa97f) + (uVar14 & 0x37efa97f) * 2 + 0x48105681;
    *(uint *)(ppuVar19 + -10) = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x000100015cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)*(int *)((long)unaff_R12 +
                                        (long)(int)((ppuVar56 == (undefined **)(ulong)(byte)cVar63)
                                                   + uVar54) * 4) + 0x100015c9f))();
    return ppuVar19;
  case (undefined **)0x100015d7b:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7d) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7d) + uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015e06:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100015f91:
                    /* WARNING: Could not recover jumptable at 0x000100015f99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_45 + (long)UNRECOVERED_JUMPTABLE_47))
                         (UNRECOVERED_JUMPTABLE_37,
                          (code *)((long)UNRECOVERED_JUMPTABLE_45 + (long)UNRECOVERED_JUMPTABLE_47))
    ;
    return ppuVar19;
  case (undefined **)0x1000161d6:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE >> 1 |
         (uint)((*(uint *)UNRECOVERED_JUMPTABLE & 1) != 0) << 0x1f;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001648d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000164f0:
    out(5,uVar13);
    ppuVar19[-0x20] = (undefined *)0x0;
    *(uint *)((long)ppuVar19 + -0x7c) = 0;
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 ^ 0x5c)];
    ppuVar19[-0xc] = puVar17;
    uVar2 = *(undefined4 *)(puVar17 + -2);
    puVar17 = *(undefined **)UNRECOVERED_JUMPTABLE_44;
    iVar57 = *(int *)((long)UNRECOVERED_JUMPTABLE_44 + 0xc);
    puVar21 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 - 0x4b)];
    ppuVar19[-0xb] = puVar21 + -3;
    ppuVar42[-1] = (undefined *)0x10001655a;
    uVar68 = (*(code *)(puVar21 + -3))
                       (uVar2,puVar17,iVar57 + -0x4a01cb87,ppuVar19 + -0x20,
                        (code *)((long)ppuVar19 + -0x7c));
                    /* WARNING: Could not recover jumptable at 0x00010001659a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000164e4 +
                         (int)*(uint *)((long)ppuVar65 +
                                       (long)(int)(((uVar72 + uVar64 + 0x4eedf71b ^ uVar68) +
                                                    (uVar68 & 0xceedf77e) * 2 + 0xfbff9fd8 ==
                                                   ((uVar14 + 0xd10139c6 | 0x2604008c) ^ 0xade8adc7)
                                                   ) + uVar14) * 4)))(ppuVar65);
    return ppuVar19;
  case (undefined **)0x1000165ca:
                    /* WARNING: Could not recover jumptable at 0x0001000165e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000165ac + (int)*(uint *)((long)ppuVar65 + (ulong)uVar28 * 4)))
                         (UNRECOVERED_JUMPTABLE_37,
                          &UNK_1000165ac + (int)*(uint *)((long)ppuVar65 + (ulong)uVar28 * 4));
    return ppuVar19;
  case (undefined **)0x1000169e7:
    uVar14 = in(uVar32);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)uVar14;
    if (bVar83 || (long)UNRECOVERED_JUMPTABLE_47 < -0x10001ba32) {
      *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)uVar14;
    }
    ppuVar76 = (undefined **)*ppuVar76;
    puVar17 = &UNK_100017342;
    ppuVar19[-0x29] = (undefined *)UNRECOVERED_JUMPTABLE_41;
code_r0x00010001b465:
    iVar57 = (int)ppuVar71;
    uVar14 = iVar57 + 10U | 4;
                    /* WARNING: Could not recover jumptable at 0x00010001b4b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(switchD_100020322::caseD_1b465 +
                 (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                      [(int)(iVar57 + (uint)(UNRECOVERED_JUMPTABLE_41 < ppuVar76))]))
                         ((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)
                                     [(int)(iVar57 + (uint)(UNRECOVERED_JUMPTABLE_41 < ppuVar76))],
                          (((int)ppuVar56 + uVar14) - (iVar57 + 0xe2846e76U & (int)ppuVar56 * 2)) +
                          -0xebdc8da,ppuVar76,puVar17,uVar14,
                          switchD_100020322::caseD_1b465 +
                          (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                               [(int)(iVar57 + (uint)(UNRECOVERED_JUMPTABLE_41 < ppuVar76))]);
    return ppuVar19;
  case (undefined **)0x100016a2c:
                    /* WARNING: Could not recover jumptable at 0x000100016a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100016a0d +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                 (long)(int)(uVar13 + (UNRECOVERED_JUMPTABLE_37 == (undefined **)0x0
                                                      )) * 4)))
                         (0x3165f9b3,UNRECOVERED_JUMPTABLE_45,
                          &UNK_100016a0d +
                          *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                  (long)(int)(uVar13 + (UNRECOVERED_JUMPTABLE_37 ==
                                                       (undefined **)0x0)) * 4));
    return ppuVar19;
  case (undefined **)0x100016ac2:
                    /* WARNING: Could not recover jumptable at 0x000100016ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 + (long)UNRECOVERED_JUMPTABLE_41))();
    return ppuVar19;
  case (undefined **)0x100016ce9:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return ppuVar19;
  case (undefined **)0x100016d44:
    ppuVar42[-1] = (undefined *)UNRECOVERED_JUMPTABLE_41;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100016e33:
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return ppuVar19;
  case (undefined **)0x100016ed4:
    iVar57 = (((uVar28 & 0x4e735884) * 2 - uVar77) + 0xb18ca779 ^ 0x68ec24c8) * 0x65773fe7;
    *(uint *)(ppuVar19 + -7) = (iVar57 + uVar34) - 0x4d;
    *(uint *)((long)ppuVar19 + -0x3c) = uVar13 + iVar57 + 0x55e3dc1;
    ppuVar42[-1] = &UNK_100016f0b;
    FUN_100014c30();
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)
         (ulong)((byte)~((byte)((byte)((uVar34 ^ 0x52e88d1f) - *(uint *)((long)ppuVar19 + -0x34) >>
                                      0x18) |
                               (byte)(*(uint *)((long)ppuVar19 + -0x34) - (uVar34 ^ 0x52e88d1f) >>
                                     0x18)) >> 7 ^ (byte)ppuVar76) & 1);
    unaff_R12 = (uint *)ppuVar65;
  case (undefined **)0x100016f33:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(long)(int)((int)UNRECOVERED_JUMPTABLE_41 + uVar34);
code_r0x000100016f37:
    uVar14 = *(uint *)((long)unaff_R12 + (long)UNRECOVERED_JUMPTABLE_41 * 4);
    ppuVar19[-10] = (undefined *)0x18646b13513134f3;
                    /* WARNING: Could not recover jumptable at 0x000100016f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&UNK_100016ec6 + (int)uVar14))();
    return ppuVar19;
  case (undefined **)0x100016f37:
    goto code_r0x000100016f37;
  case (undefined **)0x100017058:
    *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar63;
    ppuVar71 = (undefined **)(ulong)(uVar34 - uVar74);
    ppuVar56 = (undefined **)(ulong)((uVar34 - uVar74 ^ 0xc9efc428) + *(uint *)(ppuVar65 + 1));
    ppuVar76 = (undefined **)*ppuVar65;
    puVar17 = &UNK_1000171ed;
    ppuVar19[-0x25] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    goto code_r0x00010001b465;
  case (undefined **)0x1000170bf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001715e:
    ppuVar42[-1] = (undefined *)0xffffffffc7fffffe;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000171bd:
                    /* WARNING: Could not recover jumptable at 0x0001000171d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x1000171a6))();
    return ppuVar19;
  case (undefined **)0x100017213:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100017268:
    if (-0x10001ba33 < (long)UNRECOVERED_JUMPTABLE_47) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    ppuVar19[-0x13] = (undefined *)ppuVar76;
    lVar29 = *(long *)((long)ppuVar76 + (long)ppuVar56);
    iVar57 = (int)CONCAT71(uVar24,(char)cVar63 + '$');
    *(undefined1 *)(lVar29 + (ulong)(uVar34 + iVar57 + 0x8d9ec7e1)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x8d9ec87a)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x8d9ec87b)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x8d9ec87c)) = 1;
    ppuVar19[-0x2b] = (undefined *)unaff_R12;
    *unaff_R12 = *unaff_R12 + 4;
                    /* WARNING: Could not recover jumptable at 0x0001000172b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001728f +
                         (int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar34 + 4)]))
                         (ppuVar19[-0xd],UNRECOVERED_JUMPTABLE_45,(ulong)(iVar57 + 0x8d9ec87b),
                          &UNK_10001728f +
                          (int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar34 + 4)],
                          ppuVar19[-9],0x3166a97d);
    return ppuVar19;
  case (undefined **)0x1000173e2:
    ppuVar19[-0x24] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001000173f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_46 + (long)UNRECOVERED_JUMPTABLE_47))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                          (code *)((long)UNRECOVERED_JUMPTABLE_46 + (long)UNRECOVERED_JUMPTABLE_47),
                          0,0x3165f9b2);
    return ppuVar19;
  case (undefined **)0x100017666:
    uVar14 = *(uint *)(ppuVar19 + -0x11);
    ppuVar19[-0x11] = (undefined *)(ulong)uVar14;
    lVar29 = *(long *)((undefined *)(ulong)uVar14 + -0x1ce67bd8e8191850);
    *(undefined1 *)(lVar29 + (ulong)(uVar13 + 0x92fee118)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(uVar13 + 0x92fee119)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(uVar13 + 0x92fee11a)) = 0;
    *(undefined1 *)(lVar29 + (ulong)(uVar13 + 0x92fee11b)) = 1;
    ppuVar19[-0x2b] = (undefined *)unaff_R12;
    *unaff_R12 = *unaff_R12 + (uVar74 - 2 ^ 0x9e);
                    /* WARNING: Could not recover jumptable at 0x0001000176d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000176b7 +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar74 - 1) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001794b:
                    /* WARNING: Could not recover jumptable at 0x00010001795d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x100017932))();
    return ppuVar19;
  case (undefined **)0x100017cca:
    cRam488c0c6349006b92 = cVar63;
                    /* WARNING: Could not recover jumptable at 0x000100017cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x17c9c))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                          (code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x17c9c));
    return ppuVar19;
  case (undefined **)0x100017e12:
    *(long *)((long)UNRECOVERED_JUMPTABLE_41 + -0x73) =
         (long)*(float *)((long)ppuVar19 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x73);
    if ((long)UNRECOVERED_JUMPTABLE_47 < -0x10001ba32) {
      iVar57 = ((~uVar77 & 0x538875e) - (~uVar77 | 0x538875f) ^ 0xdc5804ee) * 0x65773fe7;
      *(uint *)((long)ppuVar19 + -0x3c) = uVar13 + iVar57 + uVar34 + 0x55e3d6d;
      *(uint *)(ppuVar19 + -7) = (iVar57 + uVar34) - 0x53;
      ppuVar42[-1] = (undefined *)0x100017e55;
      FUN_100014c30();
      iVar57 = *(int *)((long)unaff_R12 +
                       (long)(int)((*(uint *)((long)ppuVar19 + -0x34) == uVar34 + 0x52e88cfd) +
                                  uVar34) * 4);
      ppuVar19[-0xc] = (undefined *)0x5a793496016ebe8;
                    /* WARNING: Could not recover jumptable at 0x000100017e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)(*(code *)(&DAT_100017e0f + iVar57))();
      return ppuVar19;
    }
                    /* WARNING: Could not recover jumptable at 0x000100017e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100017dda +
                         *(int *)((long)unaff_R12 +
                                 (long)(int)((ppuVar65 == (undefined **)0x0) - 0xa4) * 4)))();
    return ppuVar19;
  case (undefined **)0x100018007:
                    /* WARNING: Could not recover jumptable at 0x000100018015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100017fdf +
                         *(int *)((long)ppuVar56 + (long)UNRECOVERED_JUMPTABLE_37 * 4)))();
    return ppuVar19;
  case (undefined **)0x1000180a0:
    ppuVar19 = (undefined **)
               FUN_10001c312(UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                             (uVar34 ^ 0xfb643c8d) + (uVar13 ^ 0x4efdd7d6));
    return ppuVar19;
  case (undefined **)0x10001810d:
    if (!SCARRY8((long)UNRECOVERED_JUMPTABLE_47,0x10001ba32)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001817a:
    ppuVar51 = (undefined **)*ppuVar19;
    ppuVar42 = ppuVar19 + 1;
  case (undefined **)0x100018129:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar51 + -0x73);
    uVar14 = *(uint *)UNRECOVERED_JUMPTABLE;
    uVar68 = *(uint *)UNRECOVERED_JUMPTABLE;
    *(uint *)UNRECOVERED_JUMPTABLE = uVar68 + uVar58 + (uint)bVar80;
    uVar22 = (ulong)((uVar28 - (int)ppuVar42) -
                    (uint)(CARRY4(uVar14,uVar58) || CARRY4(uVar68 + uVar58,(uint)bVar80)));
    *(char *)((long)UNRECOVERED_JUMPTABLE_46 + -0x59eefb3a) =
         *(char *)((long)UNRECOVERED_JUMPTABLE_46 + -0x59eefb3a) + '\x01';
    *(undefined1 *)(uVar22 + (uVar13 + 0x92fee11a)) = 0x37;
    *(undefined1 *)(uVar22 + (uVar13 + 0x92fee11b)) = 0xc0;
    ppuVar51[-0x2c] = (undefined *)unaff_R12;
    *unaff_R12 = *unaff_R12 + (uVar74 ^ 0x99);
    lVar29 = (long)*(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar74 + 1) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100018189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100018163 + lVar29))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,&UNK_100018163 + lVar29,
                          lVar29,0x3166a97d);
    return ppuVar19;
  case (undefined **)0x1000181ba:
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) | (byte)cVar26);
    ppuVar42[-1] = (undefined *)ppuVar19;
    pbVar1 = (byte *)((ulong)(uVar13 + 0x9afcba4e) - 0x73);
    bVar27 = *pbVar1;
    *pbVar1 = *pbVar1 + (char)cVar26;
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(ulong)((uVar13 + 0x9afcc606) - (uint)CARRY1(bVar27,(byte)cVar26));
  case (undefined **)0x1000181aa:
    iVar57 = *(int *)((long)UNRECOVERED_JUMPTABLE_44 + 8);
    puVar17 = *(undefined **)UNRECOVERED_JUMPTABLE_44;
    ppuVar19[-0x25] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    ppuVar19 = (undefined **)
               switchD_100020322::caseD_18d74
                         (UNRECOVERED_JUMPTABLE_37,(uVar72 ^ 0xb22d64bf) + iVar57,puVar17,
                          UNRECOVERED_JUMPTABLE_41);
    return ppuVar19;
  case (undefined **)0x1000182fe:
                    /* WARNING: Could not recover jumptable at 0x000100018305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_47)();
    return ppuVar19;
  case (undefined **)0x1000185b1:
    in(uVar32);
                    /* WARNING: Could not recover jumptable at 0x0001000185da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000185a8 +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                 (long)(int)(uVar53 + ((undefined **)UNRECOVERED_JUMPTABLE_44 ==
                                                      (undefined **)0x0)) * 4)))();
    return ppuVar19;
  case (undefined **)0x1000186ae:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100018748:
    ppuVar19[-0x14] =
         (undefined *)(ulong)((uVar67 ^ 0x7fbf3fa7) + (uVar67 & 0xffbf3fa6) * 2 + uVar53);
    uVar14 = (uVar67 ^ 0x7fbf3fa7) + (uVar67 & 0xffbf3fa6) * 2 + 0x6d4db16a;
    bVar80 = uVar13 * 2 + 0x5499cac0 < uVar14;
    if (bVar79 != uVar14 < 0xed0cf111) {
      bVar80 = uVar14 < 0xed0cf111;
    }
                    /* WARNING: Could not recover jumptable at 0x0001000187b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_37 +
                         (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                                    [(int)(bVar80 + uVar13)]))();
    return ppuVar19;
  case (undefined **)0x1000187c0:
    *(uint *)(ppuVar19 + -10) = uVar13;
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 - 0x6c)];
    puVar21 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 ^ 0x5c)];
    ppuVar42[-1] = (undefined *)0x1000187f7;
    (*(code *)(puVar17 + -1))(ppuVar56,puVar21 + -2);
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[uVar14 & 0x54ad4595];
    ppuVar42[-1] = (undefined *)0x10001880b;
    (*(code *)(puVar17 + -1))(ppuVar56);
    puVar17 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 ^ 0x6b)];
    ppuVar19[-0x17] = (undefined *)ppuVar56;
    puVar21 = ppuVar19[-0x21];
    ppuVar19[-0x11] = puVar17 + -2;
    ppuVar42[-1] = (undefined *)0x100018835;
    uVar15 = (*(code *)(puVar17 + -2))(ppuVar56,puVar21);
    UNRECOVERED_JUMPTABLE = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 ^ 0x5b)];
    ppuVar19[-0x14] = UNRECOVERED_JUMPTABLE;
    ppuVar42[-1] = (undefined *)0x100018850;
    puVar17 = (undefined *)(*UNRECOVERED_JUMPTABLE)(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010001888d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000187b7 +
                         (int)(&switchD_1000183ca::switchdataD_1006d0f70)
                              [(int)((puVar17 ==
                                     (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 & 0xeb29af86)]
                                     + -0xe) + uVar14)]))();
    return ppuVar19;
  case (undefined **)0x10001898a:
    iVar57 = uVar13 + 0xe58141c8 + (uint)bVar80;
    out(uVar32,iVar57);
    ppuVar71 = ppuVar71 + 0x28803c;
    *(uint *)ppuVar71 = *(uint *)ppuVar71 << 0x18 | *(uint *)ppuVar71 >> 8;
                    /* WARNING: Could not recover jumptable at 0x0001000189ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&LAB_100018982 + *(int *)((long)unaff_R12 + (long)iVar57 * 4)))
                         (UNRECOVERED_JUMPTABLE_37,0xb60f37ea,UNRECOVERED_JUMPTABLE_46,
                          &LAB_100018982 + *(int *)((long)unaff_R12 + (long)iVar57 * 4));
    return ppuVar19;
  case (undefined **)0x100018b20:
    if ((long)UNRECOVERED_JUMPTABLE_45 >= 0) {
      UNRECOVERED_JUMPTABLE =
           (code *)((long)*(int *)((long)unaff_R12 +
                                  ((ulong)((long)UNRECOVERED_JUMPTABLE_47 +
                                          (long)(&UNK_10001ba36 + (ulong)bVar27 * -8)) & 0xffffffff)
                                  * 4) + 0x100018af4);
                    /* WARNING: Could not recover jumptable at 0x000100018b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return ppuVar19;
    }
    uVar14 = (&switchD_1000183ca::switchdataD_1006d0f70)[(long)UNRECOVERED_JUMPTABLE_47];
    ppuVar19[-0x29] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100018b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100018b37 + (int)uVar14))
                         (&switchD_1000183ca::switchdataD_1006d0f70,
                          (code *)((long)UNRECOVERED_JUMPTABLE_47 +
                                  (long)(&UNK_10001ba36 + (ulong)bVar27 * -8)),0,
                          &DAT_100018b37 + (int)uVar14,0x3165f9b2);
    return ppuVar19;
  case (undefined **)0x100018d9a:
    goto code_r0x000100018da1;
  case (undefined **)0x100018ddb:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar28 + uVar13);
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uVar74 + 0xdc50a668);
    UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)(uVar28 + uVar13 < 0x1260e242);
    bVar80 = uVar74 + 0xdc50a668 < 0x1260e242;
code_r0x000100018df9:
    uVar14 = (uint)((uint)UNRECOVERED_JUMPTABLE_45 < (uint)UNRECOVERED_JUMPTABLE_47);
    if (bVar80 != (bool)(char)UNRECOVERED_JUMPTABLE_37) {
      uVar14 = (uint)UNRECOVERED_JUMPTABLE_37;
    }
                    /* WARNING: Could not recover jumptable at 0x000100018e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(switchD_10001cb4f::caseD_0 +
                 (int)*(uint *)((long)unaff_R12 +
                               (ulong)((uVar14 & 0xff) + (int)UNRECOVERED_JUMPTABLE_46) * 4)))
                         (UNRECOVERED_JUMPTABLE_37,
                          switchD_10001cb4f::caseD_0 +
                          (int)*(uint *)((long)unaff_R12 +
                                        (ulong)((uVar14 & 0xff) + (int)UNRECOVERED_JUMPTABLE_46) * 4
                                        ));
    return ppuVar19;
  case (undefined **)0x100018f20:
    if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x0) {
      if (bVar81) {
        UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar64 ^ 0x4aed970a);
      }
      iVar57 = (uVar13 == (uint)UNRECOVERED_JUMPTABLE_46) + uVar28;
                    /* WARNING: Could not recover jumptable at 0x000100018f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_100018f19 + *(int *)((long)unaff_R12 + (long)iVar57 * 4)))
                           (UNRECOVERED_JUMPTABLE_37,iVar57,
                            &UNK_100018f19 + *(int *)((long)unaff_R12 + (long)iVar57 * 4));
      return ppuVar19;
    }
    puVar17 = &DAT_10001ba32;
    if ((char)*(code *)((long)ppuVar19 + -0x397e0382) <= (char)cVar26) {
      *(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0xb9dc3927) =
           *(code *)((long)UNRECOVERED_JUMPTABLE_46 + 0xb9dc3927);
      *(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0xb9dc3926) =
           *(code *)((long)UNRECOVERED_JUMPTABLE_46 + 0xb9dc3926);
      UNRECOVERED_JUMPTABLE_37 = (undefined **)0x1ba2e;
      *(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0xb9dc3925) =
           *(code *)((long)UNRECOVERED_JUMPTABLE_46 + 0xb9dc3925);
      puVar17 = (undefined *)0x0;
    }
    bRam0000000004b60f44 = bRam0000000004b60f44 ^ bVar11;
                    /* WARNING: Could not recover jumptable at 0x000100018fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100018f50 +
                         *(int *)((long)ppuVar56 +
                                 (long)(int)((int)CONCAT71((int7)((ulong)puVar17 >> 8),
                                                           (bRam000000002a371943 & 0x46) == 0) +
                                            uVar54) * 4)))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_46
                          ,0x4b60f44,
                          &DAT_100018f50 +
                          *(int *)((long)ppuVar56 +
                                  (long)(int)((int)CONCAT71((int7)((ulong)puVar17 >> 8),
                                                            (bRam000000002a371943 & 0x46) == 0) +
                                             uVar54) * 4));
    return ppuVar19;
  case (undefined **)0x100019074:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000190db:
    uVar72 = *(uint *)(ppuVar19 + -0x19);
    goto LAB_1000190e1;
  case (undefined **)0x100019287:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100019333:
    ppuVar19 = (undefined **)(ulong)(uVar68 < uVar28);
    if ((bool)(byte)ppuVar69 != bVar79) {
      ppuVar19 = ppuVar66;
    }
                    /* WARNING: Could not recover jumptable at 0x000100019368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000192f4 +
                         (int)(&switchD_100019e65::switchdataD_1006d1710)
                              [(int)(((uint)ppuVar19 & 0xff) + uVar53)]))
                         (UNRECOVERED_JUMPTABLE_37,
                          &DAT_1000192f4 +
                          (int)(&switchD_100019e65::switchdataD_1006d1710)
                               [(int)(((uint)ppuVar19 & 0xff) + uVar53)],CONCAT71(uVar37,bVar80));
    return ppuVar19;
  case (undefined **)0x100019444:
    *(char *)((long)ppuVar71 + -0x79) = *(char *)((long)ppuVar71 + -0x79) - (char)cVar31;
    bVar27 = *(byte *)ppuVar71;
    *(byte *)ppuVar71 = *(char *)ppuVar71 + bVar11;
                    /* WARNING: Could not recover jumptable at 0x000100019486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)ppuVar76[(int)((byte)((byte)(uVar34 * 0x79f54c43) ^
                                              (&DAT_1006d1a30)
                                              [(byte)(&DAT_1006d0b70)[uVar34 * 0x79f54c43 & 0xff] ^
                                               99]) - 0x32)])
                         ((uVar13 - 0x8753aa) - (uint)CARRY1(bVar27,bVar11));
    return ppuVar19;
  case (undefined **)0x1000194aa:
    bVar27 = *(byte *)(*(long *)((long)unaff_R12 + -0x18646b13513134f3) +
                      (ulong)(uVar77 + 0xa66ae929));
    *(uint *)UNRECOVERED_JUMPTABLE_45 = uVar77 + 4;
    lVar29 = (long)*(int *)((long)ppuVar71 +
                           (long)(int)((uint)((undefined **)unaff_R12 == UNRECOVERED_JUMPTABLE_46) +
                                      (uVar13 ^ 0xb)) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001954c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&LAB_100019526 + lVar29))
                         (uVar77 + 4,UNRECOVERED_JUMPTABLE_45,&LAB_100019526 + lVar29,lVar29,
                          ppuVar71,(ulong)bVar27 << 0x18);
    return ppuVar19;
  case (undefined **)0x10001952d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x1000195c6:
    *(uint *)(ppuVar19 + -0x19) = uVar77;
    ppuVar19[-0x18] = (undefined *)UNRECOVERED_JUMPTABLE_37;
    ppuVar19[-10] = (undefined *)UNRECOVERED_JUMPTABLE_45;
                    /* WARNING: Could not recover jumptable at 0x0001000195d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_41)();
    return ppuVar19;
  case (undefined **)0x10001965b:
    ppuVar19[-0x1a] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar19[-9] = (undefined *)0x7f31ac3dd4da00c4;
                    /* WARNING: Could not recover jumptable at 0x000100019676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_46)();
    return ppuVar19;
  case (undefined **)0x1000196b5:
    goto code_r0x0001000196b5;
  case (undefined **)0x10001977a:
    uVar13 = uVar13 & 0xffffff92;
    iVar57 = ((int)ppuVar19[-0x33] - ((int)ppuVar19[-0x33] << ((byte)cVar26 & 0x1f) & 0x38691beeU))
             + -0x63cb7209;
    *(byte *)((long)UNRECOVERED_JUMPTABLE_46 + (ulong)(uVar13 + 0x92fee118)) =
         (byte)((uint)iVar57 >> 0x18) ^ 0x9c;
    *(byte *)((long)UNRECOVERED_JUMPTABLE_46 + (ulong)(uVar13 + 0x92fee119)) =
         (byte)((uint)iVar57 >> 0x10) ^ 0x34;
    *(byte *)((long)UNRECOVERED_JUMPTABLE_46 + (ulong)(uVar13 + 0x92fee11a)) =
         (byte)((uint)iVar57 >> 8) ^ 0x8d;
    *(byte *)((long)UNRECOVERED_JUMPTABLE_46 + (ulong)(uVar13 + 0x92fee11b)) = (byte)iVar57 ^ 0xf7;
    ppuVar19[-0x2a] = (undefined *)ppuVar65;
    *(uint *)ppuVar65 = *(uint *)ppuVar65 + 4;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)0x1;
  case (undefined **)0x100019801:
                    /* WARNING: Could not recover jumptable at 0x000100019814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&LAB_1000197ef +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                 (long)(int)((int)UNRECOVERED_JUMPTABLE_41 + uVar72) * 4)))();
    return ppuVar19;
  case (undefined **)0x100019853:
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0xf) = cVar63;
    pbVar1 = (byte *)((long)ppuVar71 + -0x73);
    *pbVar1 = *pbVar1 << 4 | *pbVar1 >> 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100019906:
                    /* WARNING: Could not recover jumptable at 0x000100019918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(ulong)(uVar13 + uVar28))();
    return ppuVar19;
  case (undefined **)0x100019a3c:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)(uVar13 | 0xffffff9c));
                    /* WARNING: Could not recover jumptable at 0x000100019a4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*UNRECOVERED_JUMPTABLE)
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                          *(undefined **)((long)unaff_R12 + (ulong)(uVar34 + 0x1a) * 8),
                          UNRECOVERED_JUMPTABLE);
    return ppuVar19;
  case (undefined **)0x100019aa0:
    iVar57 = in(uVar32);
    lVar29 = (long)*(int *)((long)UNRECOVERED_JUMPTABLE_41 +
                           (long)(int)(uVar74 + 0x8fac5aa + (uint)(iVar57 < (int)ppuVar19[1])) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100019acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&LAB_100019a91 + lVar29))
                         (UNRECOVERED_JUMPTABLE_41,&LAB_100019a91 + lVar29,lVar29,
                          CONCAT71(iVar30,(char)cVar26 +
                                          (char)*(code *)((long)UNRECOVERED_JUMPTABLE_47 +
                                                         0x1ff281ca)));
    return ppuVar19;
  case (undefined **)0x100019acc:
    out(0x59,cVar63);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100019b75:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100019b99:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)*ppuVar76;
    ppuVar56 = (undefined **)(ulong)(uVar72 | 2);
    ppuVar19[-0x2b] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    uVar28 = 0x15786;
    unaff_R12 = (uint *)ppuVar19[-0xf];
LAB_10001a4cf:
    iVar57 = *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                     (long)(int)((int)ppuVar56 +
                                (uint)(UNRECOVERED_JUMPTABLE_41 < UNRECOVERED_JUMPTABLE_46)) * 4);
    switch((long)iVar57 + 0x10001a4cf) {
    case 0x100018a20:
      iVar57 = *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                       (ulong)((int)ppuVar71 + (uint)((int)ppuVar71 == 0)) * 4);
      ppuVar19[-0x18] = (undefined *)((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x000100018a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)(&UNK_100018a06 + iVar57))
                           (ppuVar19[-0xd],
                            (undefined *)((ulong)UNRECOVERED_JUMPTABLE_46 & 0xffffffff),
                            UNRECOVERED_JUMPTABLE_46,0,UNRECOVERED_JUMPTABLE_44,0x3165f9b3);
      return ppuVar19;
    }
    uVar68 = uVar14 * 2 + 0x5499cac0;
    uVar68 = (uVar68 << (((char)((ulong)UNRECOVERED_JUMPTABLE_41 ^ 0x19) + 6U ^ 0x61) & 0x1f) &
             0xff663754) + (uVar68 ^ 0x7fb31baa) + 0xc47a008;
    bVar80 = uVar28 + uVar14 + 0x3647a112 < uVar68;
    if ((int)unaff_R12 + 0x740543f1U < iVar57 + 0xaa4ce560U != uVar68 < 0x8bfabbb2) {
      bVar80 = uVar68 < 0x8bfabbb2;
    }
                    /* WARNING: Could not recover jumptable at 0x000100017f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001a3ba +
                         (int)(&switchD_100019e65::switchdataD_1006d1710)
                              [(int)((uint)bVar80 + (int)((ulong)UNRECOVERED_JUMPTABLE_41 ^ 0x19))])
               )();
    return ppuVar19;
  case (undefined **)0x100019bf1:
                    /* WARNING: Could not recover jumptable at 0x000100019c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100019bd1 +
                         *(int *)((long)ppuVar56 +
                                 (long)(int)(((uVar14 & uVar34) == 0) + uVar67) * 4)))();
    return ppuVar19;
  case (undefined **)0x100019c83:
                    /* WARNING: Could not recover jumptable at 0x000100019c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_100019c20 +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar14 + uVar53) * 4)
                         ))();
    return ppuVar19;
  case (undefined **)0x100019d3b:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(uVar28 + 0xf4661217);
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar13 + uVar53 + 0x42d7444);
    unaff_RBX = (undefined **)(ulong)(uVar13 + 5);
    UNRECOVERED_JUMPTABLE_45 = (undefined **)&UNK_1000165a5;
    goto code_r0x000100019d54;
  case (undefined **)0x100019d4e:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)0x165a5;
code_r0x000100019d54:
    uVar14 = (int)puVar78 * 2 + 0xe8cc2534;
    uVar14 = ((uint)unaff_RBX ^ uVar14 ^ 0x7bbfffff) + (uVar14 & 0xfbbfff76) * 2 + 0x940762b6;
    bVar80 = (uint)UNRECOVERED_JUMPTABLE_46 < uVar14;
    if (0xf0389dd2 < (uint)UNRECOVERED_JUMPTABLE_47 != uVar14 < 0xfc7622d) {
      bVar80 = uVar14 < 0xfc7622d;
    }
                    /* WARNING: Could not recover jumptable at 0x000100019dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_45 +
                         (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                             (long)(int)((uint)bVar80 +
                                                        (int)UNRECOVERED_JUMPTABLE_41) * 4)))();
    return ppuVar19;
  case (undefined **)0x100019e37:
    ppuVar19[-0x18] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar19[-0x14] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar19[-0x17] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar19[-0x16] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar19[-0x1a] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar19[-9] = (undefined *)UNRECOVERED_JUMPTABLE_46;
    ppuVar19[-0x12] = (undefined *)UNRECOVERED_JUMPTABLE_44;
                    /* WARNING: Could not recover jumptable at 0x000100019e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_41)();
    return ppuVar19;
  case (undefined **)0x100019ee3:
    goto code_r0x000100019ee3;
  case (undefined **)0x100019f01:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100019f83:
    goto code_r0x000100019ee3;
  case (undefined **)0x10001a031:
    ppuVar19[-0xc] = (undefined *)ppuVar69;
                    /* WARNING: Could not recover jumptable at 0x00010001a08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001a031 +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                 (long)(int)((uint)(((uVar64 - 0x11 | 0x1c) + 0xac6b6600 &
                                                     uVar77 * 2 ^ uVar64 - 3 ^ 0xa0006614) +
                                                    (uVar77 ^ 0xa777844d) == 0x5635b30f) +
                                            (uVar64 - 3)) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001a15b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001a1f4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001a2d5:
    goto code_r0x00010001a2d5;
  case (undefined **)0x10001a308:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001a42f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001a4e0:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uVar13 & uVar53);
    goto LAB_10001a4cf;
  case (undefined **)0x10001a541:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x73) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x73) + (char)cVar26);
    *(uint *)(ppuVar19 + -0xb) = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x00010001a559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_46 + (ulong)(uVar13 - 0x3a)))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,0);
    return ppuVar19;
  case (undefined **)0x10001a5b4:
                    /* WARNING: Could not recover jumptable at 0x00010001a5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001a55e +
                         *(int *)((long)ppuVar71 +
                                 (long)(int)(((uVar14 + 0x66ffff94 &
                                              uVar13 << (((byte)cVar26 ^ 0x62) & 0x1f)) + uVar58 ==
                                             0x337ffffd) + uVar72) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001a60a:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)CONCAT71(uVar37,0x48);
    break;
  case (undefined **)0x10001a621:
    ppuVar42[-1] = (undefined *)ppuVar19;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(uint)(int)(short)UNRECOVERED_JUMPTABLE_41;
    break;
  case (undefined **)0x10001a659:
    UNRECOVERED_JUMPTABLE = (code *)(ulong)(uVar28 + uVar13);
code_r0x00010001a65b:
                    /* WARNING: Could not recover jumptable at 0x00010001a65b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
    return ppuVar19;
  case (undefined **)0x10001a672:
    UNRECOVERED_JUMPTABLE_37 =
         (undefined **)(ulong)(((uVar53 + 0x14 | 0x91) + 0x80807f7f ^ uVar64) + uVar13);
code_r0x00010001a686:
    *(undefined **)((long)ppuVar42 + -8) = &UNK_10001a689;
    lVar29 = (*(code *)UNRECOVERED_JUMPTABLE_44)(UNRECOVERED_JUMPTABLE_37);
    iVar57 = *(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar74 + (lVar29 == 0)) * 4);
    ppuVar19[-0x25] = (undefined *)0x0;
    ppuVar19[-0x17] = (undefined *)0x0;
    ppuVar19[-0x1a] = (undefined *)0x0;
    ppuVar19[-0x1b] = (undefined *)0x0;
    ppuVar19[-0x19] = (undefined *)0x0;
    ppuVar19[-0x18] = (undefined *)0x0;
    ppuVar19[-10] = (undefined *)0x18646b13513134f3;
                    /* WARNING: Could not recover jumptable at 0x00010001a6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&UNK_10001a65e + iVar57))();
    return ppuVar19;
  case (undefined **)0x10001a67f:
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x1ff3144) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + 0x1ff3144) + -0x39);
    goto code_r0x00010001a686;
  case (undefined **)0x10001a6d4:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x47) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x47) + -1;
    ppuVar42[-1] = (undefined *)UNRECOVERED_JUMPTABLE_47;
    puVar50 = (undefined8 *)(ulong)(uVar49 + *(uint *)((long)ppuVar71 + 100));
    pcVar16 = (char *)(((ulong)UNRECOVERED_JUMPTABLE_41 ^ 0x31) - 0x77);
    *pcVar16 = (*pcVar16 - (char)cVar26) - CARRY4(uVar49,*(uint *)((long)ppuVar71 + 100));
    ppuVar19 = (undefined **)*puVar50;
    ppuVar42 = (undefined **)(puVar50 + 1);
    goto code_r0x00010001a686;
  case (undefined **)0x10001a768:
    *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x41) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x41) + -1;
    UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)((uVar77 - iRam00000000b11dafba) - (uint)bVar80)
    ;
    goto code_r0x00010001a771;
  case (undefined **)0x10001a76e:
    pbVar1 = (byte *)((long)UNRECOVERED_JUMPTABLE_47 * 5 + 0x40006e8c8);
    *pbVar1 = *pbVar1 | (byte)ppuVar71;
code_r0x00010001a771:
    ppuVar42[-1] = &UNK_10001a77b;
    pcVar16 = (char *)func_0xea01a779(UNRECOVERED_JUMPTABLE_37);
    *pcVar16 = *pcVar16 + (char)pcVar16;
    UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0xd];
    ppuVar42[-1] = (undefined *)0x10001a789;
    (*UNRECOVERED_JUMPTABLE)(unaff_R12);
    ppuVar19[-0xf] = (undefined *)UNRECOVERED_JUMPTABLE_44;
    ppuVar19[-0x13] = (undefined *)ppuVar71;
    ppuVar19[-10] = ppuVar19[-10];
    ppuVar19[-0x1b] = (undefined *)unaff_R12;
                    /* WARNING: Could not recover jumptable at 0x00010001a7f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                                     [(int)((uint)((int)*(uint *)(ppuVar19 + -0xb) <
                                                  (int)((uVar74 ^ 0x8b8344) + 0x93ddd82a &
                                                        0x6c2227bd ^ 0x3166a94c)) +
                                           (uVar74 ^ 0x8b8344))] + 0x10001a7ad))();
    return ppuVar19;
  case (undefined **)0x10001a7fc:
    iVar57 = (uVar13 == (uVar64 + 0x5aed96e3 ^ (uVar34 | 0x40))) + uVar28;
    lVar29 = (long)*(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)iVar57 * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001a82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001a7f5 + lVar29))
                         (uVar77 ^ 0x36,iVar57,&UNK_10001a7f5 + lVar29,lVar29,0x3165f9a4);
    return ppuVar19;
  case (undefined **)0x10001a9c8:
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar19 + -0x77);
    *(uint *)UNRECOVERED_JUMPTABLE =
         *(uint *)UNRECOVERED_JUMPTABLE >> 8 | *(uint *)UNRECOVERED_JUMPTABLE << 0x18;
code_r0x00010001a9cc:
                    /* WARNING: Could not recover jumptable at 0x00010001a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_47)();
    return ppuVar19;
  case (undefined **)0x10001aa40:
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)*(uint *)(ppuVar19 + -0x1f);
  case (undefined **)0x10001a9e4:
    *ppuVar76 = (undefined *)0x0;
    *(undefined8 *)((long)ppuVar69 + -0x7f31ac3dd4da00bc) = 0x4d14149255b31aa0;
    ppuVar42[-1] = &UNK_10001aa0b;
    (*(code *)ppuVar71)(ppuVar76,UNRECOVERED_JUMPTABLE_45);
    puVar75 = &switchD_100019e65::switchdataD_1006d1710;
    ppuVar56 = (undefined **)(ulong)(uVar14 - 0x8b82e7);
    unaff_R12 = (uint *)(ulong)(uVar14 - 0x8b830d | 0x31);
    uVar2 = *(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 ^ 0x8b830e)] + -3);
    puVar17 = ppuVar19[-0x1f];
    uVar68 = *(uint *)((long)ppuVar19 + -0x6c);
    puVar21 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 - 0x8b82ea)];
    ppuVar42[-1] = (undefined *)0x10001aa5f;
    (*(code *)(puVar21 + -2))(uVar2,puVar17,uVar68);
    ppuVar76 = ppuVar69;
code_r0x00010001aa5f:
    uVar14 = *(uint *)((long)puVar75 +
                      (long)(int)((uVar14 - 0x8b82ed) +
                                 (uint)(*(uint *)(ppuVar19 + -0xb) ==
                                       ((int)unaff_R12 + 0x3166a92aU ^ (uint)ppuVar56))) * 4);
    ppuVar19[-9] = (undefined *)ppuVar76;
                    /* WARNING: Could not recover jumptable at 0x00010001aa9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(FUN_10001aa0e + (long)(int)uVar14 + 7))();
    return ppuVar19;
  case (undefined **)0x10001aa83:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_41 + -0x73) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_41 + -0x73) | 0xd;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001aac8:
    lVar29 = (long)*(int *)((long)UNRECOVERED_JUMPTABLE_44 + ((ulong)ppuVar71 & 0xffffffff) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001aae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001aa9f + lVar29))
                         (0,UNRECOVERED_JUMPTABLE_45,&DAT_10001aa9f + lVar29,lVar29,0x3165f9b2,
                          ppuVar19[-0xb]);
    return ppuVar19;
  case (undefined **)0x10001ab91:
    ppuVar42[-1] = (undefined *)UNRECOVERED_JUMPTABLE_37;
    uVar14 = (uVar13 << (((byte)ppuVar71 ^ 0xc2) & 0x1f) & 0xfffabeac) + (uVar13 ^ 0xfffd5f56) +
             0xdb4d4f3c;
    bVar80 = uVar77 < uVar14;
    if (bVar79 != uVar14 < 0xdb4aae92) {
      bVar80 = uVar14 < 0xdb4aae92;
    }
    UNRECOVERED_JUMPTABLE_47 = (undefined **)(ulong)(bVar80 + uVar58);
    ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
code_r0x00010001abe0:
                    /* WARNING: Could not recover jumptable at 0x00010001abf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)ppuVar65 +
                         (long)(int)*(uint *)((long)ppuVar56 +
                                             (long)((int)UNRECOVERED_JUMPTABLE_47 + 0x8fac61e) * 4))
               )();
    return ppuVar19;
  case (undefined **)0x10001abfb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ac02:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ac6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ac70:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) + -1
    ;
    plVar46 = (long *)(ppuVar42 + -1);
    ppuVar42[-1] = (undefined *)ppuVar19;
    cVar9 = '\x10';
    do {
      ppuVar19 = ppuVar19 + -1;
      plVar46 = plVar46 + -1;
      *plVar46 = (long)*ppuVar19;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    ppuVar42[-0x12] = (undefined *)(ppuVar42 + -1);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)in_GS_OFFSET + (long)((long)UNRECOVERED_JUMPTABLE_41 + -0x47));
    *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE ^ uVar28;
    *(undefined ***)((long)ppuVar42 + -0xb8d9) = UNRECOVERED_JUMPTABLE_47;
    pcVar16 = (char *)(((ulong)UNRECOVERED_JUMPTABLE_41 ^ 0x31) - 0x77);
    *pcVar16 = (*pcVar16 - (char)cVar26) -
               CARRY4((uint)(ppuVar42 + -1),*(uint *)((long)ppuVar71 + 100));
                    /* WARNING: Could not recover jumptable at 0x00010001ac88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(long)(int)((ulong)UNRECOVERED_JUMPTABLE_41 ^ 0x31))();
    return ppuVar19;
  case (undefined **)0x10001ac8a:
    puVar17 = *(undefined **)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar74 ^ 0x5a) * 8);
    ppuVar19[-0x1c] = (undefined *)ppuVar56;
    puVar21 = ppuVar19[-0xb];
    ppuVar42[-1] = &UNK_10001acba;
    lVar29 = (*(code *)(puVar17 + -1))(ppuVar56,puVar21,ppuVar19 + -0x1f);
    iVar57 = *(int *)(&DAT_1006d13e0 + (long)(int)(uVar74 + (lVar29 == 0)) * 4);
    ppuVar19[-0x29] = (undefined *)0x0;
    ppuVar19[-0xd] = (undefined *)0x18646b13513134f3;
    ppuVar19[-10] = (undefined *)0x18646b13513134f3;
                    /* WARNING: Could not recover jumptable at 0x00010001acfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&UNK_10001ac8c + iVar57))();
    return ppuVar19;
  case (undefined **)0x10001ad58:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ad61:
    ppuVar42[-1] = (undefined *)
                   ((ulong)(in_NT & 1) * 0x4000 |
                    (ulong)SCARRY8((long)UNRECOVERED_JUMPTABLE_47,0x10001ba32) * 0x800 |
                    (ulong)(bVar27 & 1) * 0x400 | (ulong)(in_IF & 1) * 0x200 |
                    (ulong)(in_TF & 1) * 0x100 | (ulong)((long)UNRECOVERED_JUMPTABLE_45 < 0) * 0x80
                    | (ulong)bVar83 * 0x40 | (ulong)(in_AF & 1) * 0x10 | (ulong)bVar81 * 4 |
                    (ulong)bVar80 | (ulong)(in_ID & 1) * 0x200000 | (ulong)(in_VIP & 1) * 0x100000 |
                    (ulong)(in_VIF & 1) * 0x80000 | (ulong)(in_AC & 1) * 0x40000);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ad78:
    *(byte *)UNRECOVERED_JUMPTABLE_47 =
         ((char)*(code *)UNRECOVERED_JUMPTABLE_47 - bVar11) -
         CARRY4(uVar49,*(uint *)((long)ppuVar71 + 100));
                    /* WARNING: Could not recover jumptable at 0x00010001ada0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001ad6b +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                 (long)(int)((int)CONCAT71(iVar30,ppuVar69 ==
                                                                  UNRECOVERED_JUMPTABLE_41) + uVar64
                                            ) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001adb3:
    uVar14 = in(uVar32);
    lVar29 = (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_37 +
                                 (long)(int)((uVar14 == (uVar28 ^ uVar34)) + uVar64) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001add5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001adaa + lVar29))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,&UNK_10001adaa + lVar29,
                          lVar29,UNRECOVERED_JUMPTABLE_37);
    return ppuVar19;
  case (undefined **)0x10001afab:
    ppuVar42[-1] = (undefined *)UNRECOVERED_JUMPTABLE_45;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001b0ba:
    *(uint *)(ppuVar19 + -9) = uVar28;
    ppuVar19[-0xf] = ppuVar19[-0x15];
    ppuVar19[-0x13] = ppuVar19[-0x1c];
    ppuVar19[-0x1e] = ppuVar19[-10];
    ppuVar19[-0x21] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    ppuVar19 = (undefined **)switchD_100020322::caseD_18d74();
    return ppuVar19;
  case (undefined **)0x10001b2b8:
    UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0xc];
    ppuVar42[-1] = &UNK_10001b2bd;
    (*UNRECOVERED_JUMPTABLE)();
    *(undefined **)UNRECOVERED_JUMPTABLE_44 = ppuVar19[-0x23];
    *(int *)ppuVar19[-0x2e] = (int)ppuVar19[-0x1d];
    piVar18 = (int *)ppuVar19[-0x28];
    iVar57 = *piVar18;
    puVar75 = &switchD_100019e65::switchdataD_1006d1710;
    puVar17 = *(undefined **)UNRECOVERED_JUMPTABLE_44;
    puVar17[iVar57 + 0x92fee118] = 0;
    puVar17[iVar57 + 0x92fee119] = 0;
    puVar17[iVar57 + 0x92fee11a] = 0;
    puVar17[iVar57 + uVar34 + 0x92fee111] = 1;
    ppuVar19[-0x28] = (undefined *)piVar18;
    *piVar18 = *piVar18 + 4;
    ppuVar76 = (undefined **)(ulong)(uVar34 + 0xad);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)0x1;
    goto code_r0x00010001b347;
  case (undefined **)0x10001b33e:
    goto code_r0x00010001b33e;
  case (undefined **)0x10001b66f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001b6e4:
code_r0x00010001b6cd:
    uVar68 = (uint)ppuVar71;
    uVar2 = *(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar68 ^ 0x4f)] + -2);
    puVar17 = ppuVar19[-0x22];
    ppuVar19[-0xb] = (undefined *)UNRECOVERED_JUMPTABLE_46;
    UNRECOVERED_JUMPTABLE = (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar68 ^ 0x6a)];
    ppuVar42[-1] = (undefined *)0x10001b6fe;
    uVar14 = (*UNRECOVERED_JUMPTABLE)(uVar2,puVar17);
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         (ulong)((((uint)ppuVar76 ^ 0x45 ^ uVar14 ^ 0x73f6e9d2) + (uVar14 & 0xf3f6e9ff) * 2 ==
                 0x73f6e9ff) + uVar68);
code_r0x00010001b71d:
                    /* WARNING: Could not recover jumptable at 0x00010001b738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)unaff_R12 +
                                              (long)(int)UNRECOVERED_JUMPTABLE_47 * 4) + 0x10001b6bf
                         ))();
    return ppuVar19;
  case (undefined **)0x10001b82c:
                    /* WARNING: Could not recover jumptable at 0x00010001b837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)(uVar13 | 0xffffffd9)))();
    return ppuVar19;
  case (undefined **)0x10001b8aa:
    UNRECOVERED_JUMPTABLE_37 = (undefined **)0x3165f9a5;
    ppuVar19[-0x27] = (undefined *)0x0;
    ppuVar19[-0xc] = (undefined *)0x5a793496016ebe8;
  case (undefined **)0x10001b8be:
                    /* WARNING: Could not recover jumptable at 0x00010001b8c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)UNRECOVERED_JUMPTABLE_47)
                         ((code *)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)bVar27 * -8 + 4),
                          (code *)((long)UNRECOVERED_JUMPTABLE_47 +
                                  (long)(&UNK_10001ba36 + (ulong)bVar27 * -8)));
    return ppuVar19;
  case (undefined **)0x10001b925:
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) | (byte)cVar26);
    *(uint *)UNRECOVERED_JUMPTABLE_37 = *(uint *)UNRECOVERED_JUMPTABLE_45;
    uVar14 = in(0xff);
    *(int *)((ulong)uVar14 - 0x77) = *(int *)((ulong)uVar14 - 0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001b94a:
    if (bVar81) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    ppuVar42[-1] = &UNK_10001b94f;
    (*(code *)&DAT_10001ba32)();
    UNRECOVERED_JUMPTABLE = (code *)swi(0x85);
    (*UNRECOVERED_JUMPTABLE)();
  case (undefined **)0x10001b951:
    goto code_r0x00010001b951;
  case (undefined **)0x10001b9a0:
    goto code_r0x00010001b951;
  case (undefined **)0x10001ba11:
    *(int *)UNRECOVERED_JUMPTABLE_47 = *(int *)UNRECOVERED_JUMPTABLE_47 + 1;
  case (undefined **)0x10001ba09:
    ppuVar61 = (undefined **)*UNRECOVERED_JUMPTABLE_46;
    lVar29 = (long)(int)(&switchD_100019e65::switchdataD_1006d1710)
                        [(int)((uVar34 ^ 0xb) + (uint)(ppuVar61 == (undefined **)0x0))];
    goto code_r0x00010001ba25;
  case (undefined **)0x10001ba32:
    ppuVar76 = (undefined **)(ulong)(uVar74 + 0x16f13267);
    goto code_r0x00010001ba39;
  case (undefined **)0x10001ba38:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ba39:
    goto code_r0x00010001ba39;
  case (undefined **)0x10001ba58:
    goto code_r0x00010001ba58;
  case (undefined **)0x10001ba76:
    LOCK();
    ppuVar19 = (undefined **)CONCAT44((int)((ulong)ppuVar19 >> 0x20),uRam00000000c793c9bc);
    UNLOCK();
    uRam00000000c793c9bc = uVar49;
    goto code_r0x00010001ba7c;
  case (undefined **)0x10001ba88:
    goto switchD_10001997c_caseD_1ba88;
  case (undefined **)0x10001ba9b:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_41 | 0x8b);
    goto code_r0x00010001ba8f;
  case (undefined **)0x10001ba9f:
    goto code_r0x00010001ba9f;
  case (undefined **)0x10001baba:
    out(uVar32,uVar13);
    uVar14 = *(uint *)(ppuVar65 + 1);
    puVar17 = *ppuVar65;
    *(undefined ***)(*ppuVar19 + -0x130) = UNRECOVERED_JUMPTABLE_41;
    ppuVar19 = (undefined **)
               switchD_100020322::caseD_1b465
                         (UNRECOVERED_JUMPTABLE_41,uVar64 + uVar14,puVar17,&DAT_10001bae2);
    return ppuVar19;
  case (undefined **)0x10001baef:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001baf7:
    *(uint *)UNRECOVERED_JUMPTABLE_45 = *(uint *)UNRECOVERED_JUMPTABLE_45 >> ((byte)cVar26 & 0x1f);
    UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar19 + (long)UNRECOVERED_JUMPTABLE_45 * 8 + 0x4b);
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE << 1);
    uVar2 = *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_45 + (long)UNRECOVERED_JUMPTABLE_37);
    UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0xe];
    ppuVar42[-1] = &UNK_10001bb03;
    (*UNRECOVERED_JUMPTABLE)(uVar2);
    *(undefined **)((long)ppuVar76 + (long)ppuVar56) = ppuVar19[-0x26];
    *(int *)ppuVar19[-0x32] = (int)ppuVar19[-0x18];
    piVar18 = (int *)ppuVar19[-0x2c];
    iVar57 = *piVar18;
    ppuVar19[-0x13] = (undefined *)ppuVar76;
    lVar29 = *(long *)((long)ppuVar76 + (long)ppuVar56);
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x8d9ec879)) = 0x38;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x8d9ec87a)) = 0x5b;
    *(undefined1 *)(lVar29 + (ulong)(uVar34 + iVar57 + 0x8d9ec7cf)) = 0x2c;
    *(undefined1 *)(lVar29 + (ulong)(iVar57 + 0x8d9ec87c)) = 0xe8;
    ppuVar19[-0x2c] = (undefined *)piVar18;
    *piVar18 = *piVar18 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010001bba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)(&switchD_1000183ca::switchdataD_1006d0f70)[(int)(uVar34 + 2)]
                         + 0x10001bb87))(ppuVar19[-0xd]);
    return ppuVar19;
  case (undefined **)0x10001bc0f:
    puVar75 = (uint *)((long)ppuVar71 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x45);
    *puVar75 = *puVar75 >> ((byte)cVar26 & 0x1f) | *puVar75 << 0x20 - ((byte)cVar26 & 0x1f);
    ppuVar42[-1] = (undefined *)ppuVar71;
    ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
code_r0x00010001bc1f:
                    /* WARNING: Could not recover jumptable at 0x00010001bc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001bc1f +
                         *(int *)((long)unaff_R12 +
                                 (long)(int)((int)ppuVar56 + (uint)(ppuVar65 == (undefined **)0x0))
                                 * 4)))();
    return ppuVar19;
  case (undefined **)0x10001bc83:
    return (undefined **)
           CONCAT71(uVar24,(byte)cVar63 ^ (byte)*(code *)(UNRECOVERED_JUMPTABLE_47 + 0xda366));
  case (undefined **)0x10001bdc2:
                    /* WARNING: Could not recover jumptable at 0x00010001bdea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001bd0e +
                         *(int *)(&DAT_1006d13e0 +
                                 (long)(int)((int)CONCAT71(iVar30,UNRECOVERED_JUMPTABLE_41 ==
                                                                  UNRECOVERED_JUMPTABLE_37) + uVar72
                                            ) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001be10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001bf75:
    goto code_r0x00010001bf75;
  case (undefined **)0x10001bfca:
    ppuVar42[-1] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) | (byte)cVar63);
    bVar79 = uVar77 < (uVar34 ^ 0x6eca7219);
    bVar80 = uVar58 + 0x38ba36a7 < uVar77;
    if (uVar58 + 0x38ba36a7 < uVar28 * 5 + 0x6eca71c8 != bVar79) {
      bVar80 = bVar79;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001c032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001bfa9 +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(bVar80 + uVar53) * 4)
                         ))(&UNK_10001bfa9 +
                            *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                    (long)(int)(bVar80 + uVar53) * 4));
    return ppuVar19;
  case (undefined **)0x10001c205:
    ppuVar42[-1] = (undefined *)ppuVar19;
    *(code *)((long)ppuVar19 + -0x77) =
         (code)((char)*(code *)((long)ppuVar19 + -0x77) + (char)cVar63);
    iVar57 = (uVar72 ^ 0xb22d641f) + *(int *)((long)UNRECOVERED_JUMPTABLE_44 + 8);
    ppuVar19[-0x18] = (undefined *)UNRECOVERED_JUMPTABLE_47;
    ppuVar19[-0x14] = (undefined *)UNRECOVERED_JUMPTABLE_47;
    ppuVar19[-0x17] = (undefined *)UNRECOVERED_JUMPTABLE_47;
    ppuVar19[-0x16] = (undefined *)UNRECOVERED_JUMPTABLE_47;
    ppuVar19[-0x1a] = (undefined *)UNRECOVERED_JUMPTABLE_47;
    ppuVar19[-9] = (undefined *)0x7f31ac3dd4da00c4;
    ppuVar19[-0x23] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    goto code_r0x000100018d74;
  case (undefined **)0x10001c3f6:
    UNRECOVERED_JUMPTABLE_37 =
         (undefined **)(ulong)(uVar14 + (uVar53 * 2 & 0xac6b661e ^ 0xa0006604) + 0xefefcdfa);
    ppuVar66 = (undefined **)0x0;
    goto code_r0x00010001c416;
  case (undefined **)0x10001c414:
code_r0x00010001c416:
                    /* WARNING: Could not recover jumptable at 0x00010001c434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001c3e0 +
                         *(int *)((long)unaff_R12 +
                                 (long)(int)((int)CONCAT71((int7)((ulong)ppuVar66 >> 8),
                                                           (int)UNRECOVERED_JUMPTABLE_37 ==
                                                           0x46258109) + uVar68) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001c539:
    if (UNRECOVERED_JUMPTABLE_47 != (undefined **)0x1 && bVar83) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    UNRECOVERED_JUMPTABLE_37 =
         (undefined **)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)bVar27 * -8 + 4);
    ppuVar19[-0x11] = ppuVar19[-0x15];
    ppuVar19[-0x14] = ppuVar19[-0x17];
    puVar17 = ppuVar19[-0xf];
    ppuVar19[-0x1d] = puVar17;
    goto code_r0x00010001c57c;
  case (undefined **)0x10001c57a:
    puVar17 = *ppuVar42;
code_r0x00010001c57c:
    ppuVar19[-0xf] = puVar17;
    ppuVar19 = (undefined **)
               switchD_100020322::caseD_1b465
                         (UNRECOVERED_JUMPTABLE_37,
                          ((ulong)(uVar34 + 0xd4b899a & 0xf2b475ff) ^ 0xfffffff1) & (ulong)ppuVar56,
                          ppuVar19[-0x27],&LAB_100017a4d);
    return ppuVar19;
  case (undefined **)0x10001c585:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x73) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x73) | 0x89480843;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001c5b3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001c5fd:
    goto code_r0x00010001c5fd;
  case (undefined **)0x10001c5fe:
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0xb7f1) =
         (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0xb7f1) | (byte)cVar63);
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x73);
    cVar63 = *UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (code)((char)*UNRECOVERED_JUMPTABLE + (char)cVar26);
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(ulong)(uVar13 + 0x6b5724 + (uint)CARRY1((byte)cVar63,(byte)cVar26));
    goto code_r0x00010001c5fd;
  case (undefined **)0x10001c62a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001c7aa:
    if (*(int *)((long)ppuVar71 + -0x5c) <= (int)uVar53) goto code_r0x00010001c7d3;
    *(uint *)((long)ppuVar19 +
             CONCAT62(uVar25,CONCAT11(cVar9 + (char)*(code *)UNRECOVERED_JUMPTABLE_41 + bVar80,
                                      cVar63))) = uVar28;
  case (undefined **)0x10001c7a1:
    *(undefined8 *)((long)UNRECOVERED_JUMPTABLE_44 + (long)*ppuVar42) = 0x7da4733b2012d9ab;
    *ppuVar42 = &UNK_10001c7bb;
    (*(code *)unaff_R12)(ppuVar76);
    unaff_R12 = &switchD_1000183ca::switchdataD_1006d0f70;
    ppuVar19[-0xb] = (undefined *)UNRECOVERED_JUMPTABLE_44;
    ppuVar42 = ppuVar42 + 1;
code_r0x00010001c7d3:
    uVar2 = *(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar34 + 0x78ad9ebc)] + -3);
    puVar17 = ppuVar19[-0x1f];
    uVar14 = *(uint *)((long)ppuVar19 + -0x7c);
    puVar21 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar34 + 0x78ad9edc)];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001c817;
    (*(code *)(puVar21 + -2))(uVar2,puVar17,uVar14);
    uVar14 = (uVar34 ^ 0x8752614e) * 5 ^ 0x3166a975 | uVar34 + 0x78ad9ede;
    iVar57 = *(int *)((long)unaff_R12 +
                     (long)(int)((-1 < (int)(uVar14 - *(uint *)(ppuVar19 + -10) |
                                            *(uint *)(ppuVar19 + -10) - uVar14)) + 0x78ad9ede +
                                uVar34) * 4);
    ppuVar19[-0xc] = ppuVar19[-0xb];
                    /* WARNING: Could not recover jumptable at 0x00010001c858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&DAT_10001c7c5 + iVar57))();
    return ppuVar19;
  case (undefined **)0x10001c7d3:
    goto code_r0x00010001c7d3;
  case (undefined **)0x10001c96c:
    *(byte *)((long)ppuVar71 + -0x72b7c30f) = *(byte *)((long)ppuVar71 + -0x72b7c30f) | (byte)cVar63
    ;
    return (undefined **)
           (ulong)CONCAT31((int3)(uVar13 + 0x6b6287 >> 8),
                           (byte)(uVar13 + 0x6b6287) ^
                           (byte)*(code *)((long)UNRECOVERED_JUMPTABLE_47 +
                                          CONCAT62((int6)((ulong)UNRECOVERED_JUMPTABLE_46 >> 0x10),
                                                   CONCAT11(0xc,cVar31))));
  case (undefined **)0x10001c995:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001ca76:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x10001cab4:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_41 + -0x77) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001cae0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001cb90:
    ppuVar52 = ppuVar42 + -1;
    ppuVar51 = ppuVar42 + -1;
    ppuVar42[-1] = (undefined *)ppuVar19;
    ppuVar42[-2] = (undefined *)ppuVar56;
    ppuVar42[-3] = (undefined *)ppuVar76;
    ppuVar42[-4] = (undefined *)UNRECOVERED_JUMPTABLE_44;
    ppuVar42[-5] = (undefined *)unaff_R12;
    ppuVar42[-6] = (undefined *)ppuVar71;
    ppuVar42[-7] = (undefined *)*(long *)PTR____stack_chk_guard_10082cb58;
    ppuVar42[-0x2b] = (undefined *)0x3a5a9c416583c527;
    ppuVar42[-0x34] = (undefined *)0x2cc289762f9fc832;
    *(undefined4 *)((long)ppuVar42 + -0x1b4) = 0x3166a97d;
    ppuVar42[-0x51] = (undefined *)0x0;
    *(undefined4 *)((long)ppuVar42 + -0x1ac) = 0x3166a97d;
    ppuVar42[-0x2e] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    ppuVar42[-0x3c] = (undefined *)UNRECOVERED_JUMPTABLE_46;
    ppuVar42[-0x33] = (undefined *)UNRECOVERED_JUMPTABLE_47;
    *(undefined4 *)(ppuVar42 + -0x1e) = 0x3165f9b4;
    plVar46 = (long *)(ppuVar42 + -0x73);
    switch((ppuVar65 == (undefined **)0x0 || UNRECOVERED_JUMPTABLE_47 == (undefined **)0x0) ||
           (UNRECOVERED_JUMPTABLE_46 == (undefined **)0x0 ||
           UNRECOVERED_JUMPTABLE_45 == (undefined **)0x0)) {
    case false:
      *(undefined8 *)ppuVar42[-0x2e] = 0;
      *(undefined4 *)ppuVar42[-0x3c] = 0;
      *(undefined8 *)ppuVar42[-0x33] = 0;
      *(uint *)ppuVar65 = 0;
      *(undefined4 *)((long)ppuVar42 + -0x1bc) = 0;
      *(undefined4 *)(ppuVar42 + -0x38) = 0;
      *(undefined4 *)((long)ppuVar42 + -0x1cc) = 0;
      ppuVar42[-0x52] = (undefined *)0x0;
      UNRECOVERED_JUMPTABLE_46 =
           (undefined **)
           (switchD_10001cc54::caseD_0 +
           *(int *)(&DAT_1006d2600 +
                   (ulong)((UNRECOVERED_JUMPTABLE_37 == (undefined **)0x0) + 7) * 4));
      ppuVar61 = &PTR__bootstrap_look_up_10082e9f0;
      ppuVar42[-0x20] = PTR__free_10082eaf0;
      ppuVar42[-0x22] = PTR__malloc_10082ea28;
      ppuVar42[-0x50] = PTR_DAT_10082ead8 + -3;
      ppuVar42[-0x2d] = PTR_DAT_10082ea68 + -2;
      ppuVar42[-0x44] = PTR_DAT_1008c34d8_1_10082eab8 + -1;
      ppuVar42[-0x45] = PTR_DAT_10082ea30 + -3;
      ppuVar42[-0x46] = PTR_DAT_1008c34d0_3_10082ea80 + -3;
      ppuVar42[-0x21] = PTR_DAT_10088e798_3_10082ea48 + -0xb;
      ppuVar42[-0x48] = PTR_DAT_10082ea88;
      ppuVar42[-0x49] = PTR_s_om_apple_adid_1006d0b54_1_10082ea58 + -1;
      UNRECOVERED_JUMPTABLE_47 = (undefined **)0x3165f9b4;
      ppuVar42[-0x25] = PTR_DAT_10082ea88;
      ppuVar42[-0x27] = PTR_DAT_10082ea88;
      UNRECOVERED_JUMPTABLE_45 = (undefined **)PTR_DAT_10082ea88;
code_r0x000100023eb1:
      ppuVar51[-0x29] = (undefined *)UNRECOVERED_JUMPTABLE_37;
      ppuVar51[-0x4d] = (undefined *)ppuVar65;
                    /* WARNING: Could not recover jumptable at 0x000100023ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar19 = (undefined **)
                 (*(code *)UNRECOVERED_JUMPTABLE_46)
                           (ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                            UNRECOVERED_JUMPTABLE_47);
      return ppuVar19;
    }
switchD_10001cc54_caseD_1:
    if (*(undefined **)PTR____stack_chk_guard_10082cb58 == ppuVar52[-6]) {
      return (undefined **)(ulong)(*(uint *)(ppuVar52 + -0x1d) + 0xce995683);
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)plVar46 + -8) = &UNK_100022f83;
    ___stack_chk_fail();
  case (undefined **)0x10001cd17:
    *(char *)UNRECOVERED_JUMPTABLE_41 =
         (char)*(code *)UNRECOVERED_JUMPTABLE_41 << 1 |
         (char)*(code *)UNRECOVERED_JUMPTABLE_41 < '\0';
                    /* WARNING: Could not recover jumptable at 0x00010001cd31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001cce2 +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)uVar68 * 4)))();
    return ppuVar19;
  case (undefined **)0x10001cd3b:
    ppuVar56 = (undefined **)(ulong)(uVar64 & 0x9a5218ff);
    *(undefined4 *)((long)ppuVar71 + 0x4c) = 0x50a01b4b;
    ppuVar71[5] = ppuVar19[-0x10];
    puVar17 = *(undefined **)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar72 - 0xa2) * 8);
    ppuVar42[-1] = &UNK_10001cd67;
    ppuVar76 = (undefined **)(*(code *)(puVar17 + -3))();
    ppuVar19[-0x40] = (undefined *)ppuVar76;
  case (undefined **)0x10001cd71:
    uVar15 = *(undefined8 *)(ppuVar19[-9] + -0x583fea33108f2bd4);
    iVar57 = *(int *)(ppuVar19[-9] + -0x583fea33108f2bc8);
    puVar17 = *(undefined **)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar72 - 0xa6) * 8);
    puVar21 = *(undefined **)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar72 - 0x9c) * 8);
    ppuVar42[-1] = (undefined *)0x10001cdc8;
    (*(code *)(puVar17 + -3))(ppuVar76,puVar21 + -3,uVar15,((uint)ppuVar56 ^ 0xa205f2be) + iVar57);
    puVar17 = *(undefined **)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar72 ^ 0xb0) * 8);
    puVar21 = ppuVar19[-0x21];
    ppuVar42[-1] = (undefined *)0x10001cde6;
    puVar17 = (undefined *)(*(code *)(puVar17 + -2))(puVar21,0);
    ppuVar19[-0x41] = puVar17;
                    /* WARNING: Could not recover jumptable at 0x00010001ce15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001cd34 +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                              [(int)(uVar72 + (puVar17 == (undefined *)0x0))]))();
    return ppuVar19;
  case (undefined **)0x10001ce81:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x7d);
    cVar31 = *UNRECOVERED_JUMPTABLE;
    cVar63 = *UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (code)(((char)cVar63 - (char)cVar26) - bVar80);
    *(int *)UNRECOVERED_JUMPTABLE_47 = *(int *)UNRECOVERED_JUMPTABLE_47 + 1;
                    /* WARNING: Could not recover jumptable at 0x00010001ce9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)*(int *)((long)UNRECOVERED_JUMPTABLE_46 +
                                        (long)(int)(uVar74 + 0x48150491 +
                                                   (uint)((byte)cVar31 < (byte)cVar26 ||
                                                         (byte)((char)cVar63 - (char)cVar26) <
                                                         bVar80)) * 4) + 0x10001ce77))();
    return ppuVar19;
  case (undefined **)0x10001d142:
    out(0x41,uVar13);
    puVar75 = (uint *)ppuVar71;
switchD_100025d1a_caseD_1d144:
    iVar57 = ((int)ppuVar52 - 0x3cU ^ 0xd96083b1) * 0x65773fe7;
    *(uint *)(ppuVar52 + -7) = (iVar57 + uVar72) - 0x36;
    *(uint *)((long)ppuVar52 + -0x3c) =
         (int)UNRECOVERED_JUMPTABLE_41 + iVar57 + (int)puVar78 + 0x505c1cf0;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001d178;
    FUN_100014c30();
    uVar14 = *(uint *)((long)puVar70 +
                      (long)(int)((*(uint *)((long)ppuVar52 + -0x34) == ((uint)puVar75 ^ 0x52e88d74)
                                  ) + uVar72) * 4);
    ppuVar52[-0xc] = (undefined *)0x5c05e2a4aeb6ae7e;
                    /* WARNING: Could not recover jumptable at 0x00010001d1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&DAT_10001d13b + (int)uVar14))();
    return ppuVar19;
  case (undefined **)0x10001d15b:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)CONCAT71(uVar24,(char)cVar63 + '!' + bVar80);
    puVar75 = (uint *)ppuVar71;
    goto switchD_100025d1a_caseD_1d144;
  case (undefined **)0x10001d1bc:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)ppuVar19[-0xf];
    *(uint *)((long)UNRECOVERED_JUMPTABLE_46 + -0x5c05e2a4aeb6ae76) =
         (*(uint *)(ppuVar19 + -0x20) ^ 0x7fddff7f) + (*(uint *)(ppuVar19 + -0x20) & 0xffddff7f) * 2
         + -0x2204255d;
    *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_46 + -0x5c05e2a4aeb6ae72) = 0x645a0480;
    unaff_R12 = (uint *)0x2e3fe4cf;
    ppuVar19[-0xc] = (undefined *)UNRECOVERED_JUMPTABLE_46;
    ppuVar19[-0x17] = ppuVar19[-0x13];
    ppuVar19[-0x1a] = ppuVar19[-0x15];
    ppuVar19[-0x1f] = (undefined *)0x2e3fe4cf;
    *(uint *)(ppuVar19 + -0xe) = 0x3166a97d;
code_r0x00010001d230:
    ppuVar19[-0xf] = (undefined *)UNRECOVERED_JUMPTABLE_46;
    bVar80 = ppuVar19[-0x23] == (undefined *)0x0;
    ppuVar56 = (undefined **)((ulong)unaff_R12 & 0xffffffff);
code_r0x00010001d242:
    UNRECOVERED_JUMPTABLE =
         (code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)((uint)unaff_R12 ^ 0x2e3fe4ed)];
    puVar17 = ppuVar19[-0x17];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001d26f;
    (*UNRECOVERED_JUMPTABLE)(puVar17);
    puVar17 = ppuVar19[-0x1a];
    ppuVar19[-0x10] = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001d27d;
    (*UNRECOVERED_JUMPTABLE)(puVar17);
                    /* WARNING: Could not emulate address calculation at 0x00010001d280 */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)*(int *)(&DAT_1006d1e30 +
                                        (long)(int)((int)ppuVar56 + -0x2e3fe4b5 + (uint)bVar80) * 4)
                         + 0x10001d225))();
    return ppuVar19;
  case (undefined **)0x10001d1c6:
    if (!bVar83 && -0x10001ba33 < (long)UNRECOVERED_JUMPTABLE_47) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)((long)UNRECOVERED_JUMPTABLE_37 + 0x25) = in_FPUStatusWord;
    if (bVar83 || (long)UNRECOVERED_JUMPTABLE_47 < -0x10001ba32) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d410:
    UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)(byte)((char)cVar63 + -0x6d + bVar80);
  case (undefined **)0x10001d40a:
    out(0x48,(char)UNRECOVERED_JUMPTABLE_41);
                    /* WARNING: Could not recover jumptable at 0x00010001d41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001d3da +
                         *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                 ((ulong)UNRECOVERED_JUMPTABLE_45 & 0xffffffff) * 4)))
                         (UNRECOVERED_JUMPTABLE_37,
                          &UNK_10001d3da +
                          *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                  ((ulong)UNRECOVERED_JUMPTABLE_45 & 0xffffffff) * 4));
    return ppuVar19;
  case (undefined **)0x10001d4d7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001d63d:
                    /* WARNING: Could not recover jumptable at 0x00010001d640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_46 + (long)UNRECOVERED_JUMPTABLE_47))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,
                          (code *)((long)UNRECOVERED_JUMPTABLE_46 + (long)UNRECOVERED_JUMPTABLE_47))
    ;
    return ppuVar19;
  case (undefined **)0x10001d64d:
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x10001b9c2) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x10001b9c2) + cVar9);
                    /* WARNING: Could not recover jumptable at 0x00010001d650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_46)();
    return ppuVar19;
  case (undefined **)0x10001d69e:
    plVar46 = (long *)ppuVar42;
LAB_10001d6a3:
    ppuVar19[-0x10] = (undefined *)UNRECOVERED_JUMPTABLE_46;
    uVar14 = (uint)unaff_R12;
    puVar75 = (uint *)(ulong)(uVar14 + 0xe4a25b18 & 0xed1dc03d);
    ppuVar56 = (undefined **)(ulong)(uVar14 + 0xd1c01b32 | 0x30);
    UNRECOVERED_JUMPTABLE_41 = &PTR__bootstrap_look_up_10082e9f0;
    UNRECOVERED_JUMPTABLE_37 =
         (undefined **)
         (ulong)*(uint *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar14 ^ 0x2e3fe4cc)] + -3);
    UNRECOVERED_JUMPTABLE_45 = (undefined **)ppuVar19[-0x25];
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)*(uint *)((long)ppuVar19 + -0x8c);
    uVar22 = (ulong)(int)(uVar14 + 0xd1c01b54);
code_r0x00010001d6f0:
    puVar17 = UNRECOVERED_JUMPTABLE_41[uVar22];
    *(undefined8 *)((long)plVar46 + -8) = 0x10001d6fd;
    (*(code *)(puVar17 + -2))
              (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46);
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)
         (long)(int)((int)unaff_R12 + -0x2e3fe46f +
                    (uint)(*(uint *)(ppuVar19 + -0xe) == (int)ppuVar56 + (int)puVar75 + 0x3166a927U)
                    );
    UNRECOVERED_JUMPTABLE_44 = (uint *)ppuVar65;
  case (undefined **)0x10001d71c:
    goto code_r0x00010001d71c;
  case (undefined **)0x10001d788:
    if (!bVar81) {
      *(uint *)UNRECOVERED_JUMPTABLE_41 = *(int *)UNRECOVERED_JUMPTABLE_41 + uVar13;
      *(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x6b) =
           (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_47 + 0x6b) + (char)cVar63);
      *(code *)((long)UNRECOVERED_JUMPTABLE_37 + -0x77) =
           (code)~(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_37 + -0x77);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x00010001d77c:
    *(int *)((code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x39) + (long)UNRECOVERED_JUMPTABLE_41) =
         *(int *)((code *)((long)UNRECOVERED_JUMPTABLE_47 + -0x39) + (long)UNRECOVERED_JUMPTABLE_41)
         + -1;
                    /* WARNING: Could not recover jumptable at 0x00010001d786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)UNRECOVERED_JUMPTABLE_37)
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46
                          ,UNRECOVERED_JUMPTABLE_47,0x362ace52);
    return ppuVar19;
  case (undefined **)0x10001d7c2:
    UNRECOVERED_JUMPTABLE_46 =
         (undefined **)
         (&UNK_10001d78b +
         *(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                 (long)(int)((int)CONCAT71(uVar24,ppuVar71 == UNRECOVERED_JUMPTABLE_47) + uVar53) *
                 4));
switchD_10001a75e_caseD_1d7da:
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0x0;
code_r0x00010001d7e2:
                    /* WARNING: Could not recover jumptable at 0x00010001d7e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)UNRECOVERED_JUMPTABLE_46)
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46
                          ,UNRECOVERED_JUMPTABLE_47);
    return ppuVar19;
  case (undefined **)0x10001da7b:
                    /* WARNING: Could not recover jumptable at 0x00010001da7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_47)();
    return ppuVar19;
  case (undefined **)0x10001daea:
code_r0x00010001dac8:
                    /* WARNING: Could not recover jumptable at 0x00010001daf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001da80 +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                              [(int)(((uint)UNRECOVERED_JUMPTABLE_44 & 0xff) +
                                    (int)UNRECOVERED_JUMPTABLE_47)]))();
    return ppuVar19;
  case (undefined **)0x10001de02:
    *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar63;
    *(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x45) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_41 + -0x45) + (char)cVar26);
    if (!SBORROW1((char)cVar63,-0x2c)) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      ppuVar19 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
      return ppuVar19;
    }
code_r0x00010001ddfa:
                    /* WARNING: Could not recover jumptable at 0x00010001ddfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_44)();
    return ppuVar19;
  case (undefined **)0x10001de78:
    goto code_r0x00010001de78;
  case (undefined **)0x10001df09:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001dfe0:
    lVar29 = CONCAT71(uVar24,(char)cVar63 + '0');
    ppuVar61 = (undefined **)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)bVar27 * -8 + 4);
    *(uint *)UNRECOVERED_JUMPTABLE_37 = *(uint *)UNRECOVERED_JUMPTABLE_45;
    *(undefined1 *)(lVar29 + (ulong)(uVar58 + 0xa205f285)) = 0x49;
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uVar58 + 0xa205f286);
    *(code *)((long)UNRECOVERED_JUMPTABLE_45 + lVar29) = (code)0x51;
    UNRECOVERED_JUMPTABLE_46 = (undefined **)(ulong)(uVar58 + 0xa205f287);
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE_46 + lVar29) = 0xec;
    *(int *)UNRECOVERED_JUMPTABLE_47 = *(int *)UNRECOVERED_JUMPTABLE_47 + 4;
code_r0x00010001e004:
    ppuVar56 = (undefined **)(ulong)((int)ppuVar76 - 7);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)0x1;
code_r0x00010001e01d:
    lVar29 = (long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                 (long)(int)(((uint)UNRECOVERED_JUMPTABLE_41 & 1) + (int)ppuVar56) *
                                 4);
    switch(lVar29 + 0x10001e013) {
    case 0x10001c564:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x00010001ba25:
                    /* WARNING: Could not recover jumptable at 0x00010001ba2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001ba06 + lVar29))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                          &UNK_10001ba06 + lVar29);
    return ppuVar19;
  case (undefined **)0x10001e3dd:
    ppuVar42[-1] = (undefined *)UNRECOVERED_JUMPTABLE_47;
    vpsubusw_avx(in_XMM14,*(undefined1 (*) [16])
                           ((ulong)((uVar13 + 0xfeb65c06) - (uint)bVar80) - 0x45));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001e49e:
    UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)(uVar77 ^ 0x7ffff80c);
    ppuVar65 = (undefined **)&UNK_10001d9fd;
    bVar80 = uVar58 < uVar53;
    UNRECOVERED_JUMPTABLE_44 = unaff_R12;
code_r0x00010001e4c6:
    uVar14 = uVar28 * 2 + 0x80a88ee0;
    uVar68 = uVar14 ^ 0x3ffffc9d;
    uVar14 = uVar14 * 2 & (uint)UNRECOVERED_JUMPTABLE_37;
    ppuVar19[-0x18] = (undefined *)(ulong)((uVar14 + uVar68) - 0x54440d);
    uVar14 = uVar14 + uVar68 + 0x47c870d4;
    bVar79 = uVar58 < uVar14;
    if ((bool)(bVar80 ^ uVar14 < 0x87c86d71)) {
      bVar79 = uVar14 < 0x87c86d71;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001e52a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)ppuVar65 +
                         (long)*(int *)((long)UNRECOVERED_JUMPTABLE_44 +
                                       (long)(int)(bVar79 + uVar13) * 4)))();
    return ppuVar19;
  case (undefined **)0x10001e4c1:
    goto code_r0x00010001e4c6;
  case (undefined **)0x10001e5ee:
    uVar28 = uVar13 + 1;
    if (uVar68 + 0xc38fcf99 < uVar13 + 0xf9ba9ce8 == SUB81(UNRECOVERED_JUMPTABLE_37,0)) {
      UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)(uVar68 + 0xc38fcf99 < uVar53);
    }
code_r0x00010001e61a:
                    /* WARNING: Could not recover jumptable at 0x00010001e634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_44 +
                         (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                    [(int)(((uint)UNRECOVERED_JUMPTABLE_37 & 0xff) + uVar28)]))
                         ((code *)((long)UNRECOVERED_JUMPTABLE_44 +
                                  (long)(int)(&switchD_10001f9d9::switchdataD_1006d2190)
                                             [(int)(((uint)UNRECOVERED_JUMPTABLE_37 & 0xff) + uVar28
                                                   )]));
    return ppuVar19;
  case (undefined **)0x10001e629:
    *(int *)((long)UNRECOVERED_JUMPTABLE_47 + 99) =
         *(int *)((long)UNRECOVERED_JUMPTABLE_47 + 99) + -1;
    goto code_r0x00010001e61a;
  case (undefined **)0x10001e789:
    goto code_r0x00010001e789;
  case (undefined **)0x10001e8c7:
    uVar22 = (ulong)(uint)(int)(short)UNRECOVERED_JUMPTABLE_41;
code_r0x00010001e8c8:
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)(&UNK_10001e8bd + *(int *)((long)unaff_R12 + uVar22 * 4));
    UNRECOVERED_JUMPTABLE_46 = (undefined **)ppuVar52[-0x10];
code_r0x00010001e8e8:
                    /* WARNING: Could not recover jumptable at 0x00010001e8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)UNRECOVERED_JUMPTABLE_47)
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46
                          ,UNRECOVERED_JUMPTABLE_47);
    return ppuVar19;
  case (undefined **)0x10001ead5:
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)
         (ulong)*(uint *)((long)UNRECOVERED_JUMPTABLE_47 + (long)UNRECOVERED_JUMPTABLE_46 * 4);
    ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
code_r0x00010001ea84:
    ppuVar19[-0xf] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001ea8a;
    (*(code *)UNRECOVERED_JUMPTABLE_41)
              (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
               UNRECOVERED_JUMPTABLE_47);
    uVar14 = (uint)ppuVar56;
    puVar17 = unaff_RBX[(int)(uVar14 ^ 0x7d)];
    puVar21 = unaff_RBX[(int)(uVar14 ^ 0x68)];
    ppuVar19[-0x13] = (undefined *)0x0;
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001eaba;
    lVar29 = (*(code *)(puVar17 + -2))(puVar21 + -1,0);
                    /* WARNING: Could not emulate address calculation at 0x00010001ead4 */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001ea0d +
                         *(int *)(&DAT_1006d1e30 + (long)(int)(uVar14 + (lVar29 == 0)) * 4)))
                         (ppuVar19[-0xb]);
    return ppuVar19;
  case (undefined **)0x10001ee30:
code_r0x00010001ee32:
    UNRECOVERED_JUMPTABLE_46 =
         (undefined **)(long)(int)*(uint *)((long)ppuVar71 + (long)(int)(uVar40 + bVar80) * 4);
    UNRECOVERED_JUMPTABLE_47 = (undefined **)&DAT_10001ee17;
code_r0x00010001ee43:
    UNRECOVERED_JUMPTABLE_47 =
         (undefined **)((long)UNRECOVERED_JUMPTABLE_47 + (long)UNRECOVERED_JUMPTABLE_46);
code_r0x00010001ee56:
                    /* WARNING: Could not recover jumptable at 0x00010001ee56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_47)();
    return ppuVar19;
  case (undefined **)0x10001ef19:
    *(char *)UNRECOVERED_JUMPTABLE_41 = (char)*(code *)UNRECOVERED_JUMPTABLE_41 + (char)cVar63;
    return (undefined **)
           (ulong)(uint)(*(int *)((long)UNRECOVERED_JUMPTABLE_47 + -0x7d) * -0x7ebe6239);
  case (undefined **)0x10001effd:
    *(uint *)((long)UNRECOVERED_JUMPTABLE_41 + -0x73) =
         *(uint *)((long)UNRECOVERED_JUMPTABLE_41 + -0x73) | 0xd;
    UNRECOVERED_JUMPTABLE = (code *)swi(0xff);
    (*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f01e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10001f266:
code_r0x00010001f26b:
    lVar29 = (long)*(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)UNRECOVERED_JUMPTABLE_47 * 4);
                    /* WARNING: Could not recover jumptable at 0x00010001f283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001f22f + lVar29))
                         (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,&UNK_10001f22f + lVar29,
                          lVar29,ppuVar19[-9]);
    return ppuVar19;
  case (undefined **)0x10001f384:
    goto code_r0x00010001f384;
  case (undefined **)0x10001f50b:
    goto switchD_10001997c_caseD_1f50b;
  case (undefined **)0x10001f548:
    goto code_r0x00010001f548;
  case (undefined **)0x10001f591:
code_r0x00010001f575:
    UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-10];
    ppuVar42[-1] = &UNK_10001f58a;
    (*UNRECOVERED_JUMPTABLE)(ppuVar65);
    puVar78 = (uint *)(ulong)(((uVar72 | 0x83) - 7 | 0x10) - 7);
    ppuVar19[-0x1c] = (undefined *)ppuVar76;
    puVar75 = (uint *)ppuVar76;
    ppuVar52 = ppuVar19;
    UNRECOVERED_JUMPTABLE_37 = (undefined **)UNRECOVERED_JUMPTABLE_44;
code_r0x00010001e2d2:
    uVar53 = (uint)UNRECOVERED_JUMPTABLE_37;
    uVar68 = (uint)puVar78;
    ppuVar76 = (undefined **)(ulong)(uVar68 - 0x14);
    uVar2 = *(undefined4 *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar68 ^ 0x8a)] + -3);
    puVar17 = ppuVar52[-0x1f];
    uVar14 = *(uint *)((long)ppuVar52 + -100);
    puVar21 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar68 - 0x66)];
    *(undefined8 *)((long)ppuVar42 + -8) = 0x10001e309;
    (*(code *)(puVar21 + -2))(uVar2,puVar17,uVar14);
LAB_10001e31a:
    uVar14 = (int)ppuVar76 - 0x4dU | 0x10;
    if (uVar53 != uVar14 + 0x3166a945) {
      puVar75 = (uint *)0x6c76618fb7247bc0;
    }
    ppuVar52[-0x14] = (undefined *)puVar75;
                    /* WARNING: Could not recover jumptable at 0x00010001e364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&LAB_10001eaf5 +
                         (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                              [(int)((uVar53 == ((uVar14 ^ 10) + 0xf ^ 0x3166a93c)) + uVar14)]))();
    return ppuVar19;
  case (undefined **)0x10001f679:
    goto code_r0x00010001f679;
  case (undefined **)0x10001f894:
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)(long)(int)(uVar13 + (*(int *)UNRECOVERED_JUMPTABLE_41 == 0));
code_r0x00010001f8a1:
                    /* WARNING: Could not recover jumptable at 0x00010001f8af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_10001f884 +
                         *(int *)((long)puVar78 + (long)UNRECOVERED_JUMPTABLE_41 * 4)))();
    return ppuVar19;
  case (undefined **)0x10001fae2:
    ppuVar42 = (undefined **)
               ((long)UNRECOVERED_JUMPTABLE_47 + (long)(&UNK_10001ba36 + (ulong)bVar27 * -8));
    *(uint *)UNRECOVERED_JUMPTABLE_37 = *(uint *)UNRECOVERED_JUMPTABLE_45;
    ppuVar71 = (undefined **)UNRECOVERED_JUMPTABLE_44;
    if (UNRECOVERED_JUMPTABLE_47 == (undefined **)0x1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x00010001fb52:
    cVar9 = in(0);
    pcVar16 = (char *)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8),cVar9);
    *pcVar16 = *pcVar16 + cVar9;
    ppuVar19[-0x62] = (code *)((long)unaff_RBX + -0x3a5a9c416583c51b);
    uVar14 = *(int *)((long)unaff_RBX + -0x3a5a9c416583c51b) + 0x5a46bdd6;
    uVar68 = *(int *)((long)unaff_RBX + -0x3a5a9c416583c51f) + 0x40e1db1b;
    ppuVar69 = (undefined **)(ulong)(uVar14 < 0x61c69bb4);
    bVar81 = uVar68 < ((uint)ppuVar42 ^ 0x61c69a36) + (int)pcVar16 == uVar14 < 0x61c69bb4;
    uVar14 = (uint)(uVar68 < uVar14);
    UNRECOVERED_JUMPTABLE_45 = ppuVar42;
    unaff_R12 = (uint *)ppuVar71;
code_r0x00010001fbbf:
    uVar68 = (uint)ppuVar69;
    if (bVar81) {
      uVar68 = uVar14;
    }
                    /* WARNING: Could not recover jumptable at 0x00010001fbdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_10001fb48 +
                         (int)*(uint *)((long)unaff_R12 +
                                       (long)(int)((uVar68 & 0xff) + (int)UNRECOVERED_JUMPTABLE_45)
                                       * 4)))();
    return ppuVar19;
  case (undefined **)0x10001fc38:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100020198:
    goto code_r0x000100020198;
  case (undefined **)0x100020529:
    goto code_r0x000100020529;
  case (undefined **)0x100020674:
    goto code_r0x000100020674;
  case (undefined **)0x1000208ef:
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)
         (long)(int)*(uint *)((long)ppuVar76 +
                             (long)(int)(uVar68 + 0x58e834d6 +
                                        (uint)(UNRECOVERED_JUMPTABLE_37 == (undefined **)0x0)) * 4);
    UNRECOVERED_JUMPTABLE_47 = (undefined **)&DAT_100021110;
code_r0x000100020908:
                    /* WARNING: Could not recover jumptable at 0x000100020912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_47 + (long)UNRECOVERED_JUMPTABLE_41))();
    return ppuVar19;
  case (undefined **)0x100020b47:
    out(0x9f,cVar63);
    UNRECOVERED_JUMPTABLE_37 =
         (undefined **)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)bVar27 * -8 + 4);
    UNRECOVERED_JUMPTABLE_45 =
         (undefined **)
         ((long)UNRECOVERED_JUMPTABLE_47 + (long)(&UNK_10001ba36 + (ulong)bVar27 * -8));
    *(char *)UNRECOVERED_JUMPTABLE_46 = *(char *)UNRECOVERED_JUMPTABLE_46 + 's';
    UNRECOVERED_JUMPTABLE_47 = (undefined **)0xad740986;
code_r0x000100020b52:
    *(byte *)((long)puVar75 + (long)UNRECOVERED_JUMPTABLE_37) =
         (char)*(code *)((long)UNRECOVERED_JUMPTABLE_46 + (long)UNRECOVERED_JUMPTABLE_37) + 0x8d;
    uVar22 = (ulong)((int)UNRECOVERED_JUMPTABLE_47 + 0xad740985);
    *(byte *)((long)puVar75 + uVar22) =
         (char)*(code *)((long)UNRECOVERED_JUMPTABLE_46 + uVar22) + 0x8d;
    ppuVar61 = (undefined **)(ulong)((int)UNRECOVERED_JUMPTABLE_47 + 0xad740984);
    ppuVar65 = (undefined **)
               (ulong)(byte)(((char)*(code *)((long)UNRECOVERED_JUMPTABLE_46 + (long)ppuVar61) +
                             (char)UNRECOVERED_JUMPTABLE_45) - 6);
    ppuVar76 = (undefined **)puVar75;
switchD_100025d1a_caseD_20b84:
    *(code *)((long)ppuVar76 + (long)ppuVar61) = SUB81(ppuVar65,0);
    uVar22 = (ulong)((int)UNRECOVERED_JUMPTABLE_47 + 0xad740983);
    *(byte *)((long)ppuVar76 + uVar22) =
         (char)*(code *)((long)UNRECOVERED_JUMPTABLE_46 + uVar22) + 0x8d;
                    /* WARNING: Could not recover jumptable at 0x000100020bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)(int)*(uint *)((long)puVar78 +
                                              (long)(int)((uint)((int)UNRECOVERED_JUMPTABLE_47 ==
                                                                0x528bf67d) +
                                                         (int)UNRECOVERED_JUMPTABLE_41) * 4) +
                         0x100020b40))();
    return ppuVar19;
  case (undefined **)0x100020f2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002128e:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x1000212ce:
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100021300:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x10002136e:
    ppuVar61 = (undefined **)((long)UNRECOVERED_JUMPTABLE_37 + (ulong)bVar27 * -2 + 1);
    *(code *)UNRECOVERED_JUMPTABLE_37 = cVar63;
    uVar10 = in(0x3f);
    UNRECOVERED_JUMPTABLE_41 = (undefined **)CONCAT71(uVar24,uVar10);
    ppuVar19[-0x20] = (undefined *)0x0;
code_r0x00010002137d:
    UNRECOVERED_JUMPTABLE_46 = (undefined **)0x7ec08e5aeb2a8122;
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)
         (long)(int)((uint)(ppuVar69 == (undefined **)0x7ec08e5aeb2a8122) +
                    (int)UNRECOVERED_JUMPTABLE_41);
    puVar70 = UNRECOVERED_JUMPTABLE_44;
switchD_100025d1a_caseD_21394:
                    /* WARNING: Could not recover jumptable at 0x0001000213b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_100021364 +
                         (int)*(uint *)((long)puVar70 + (long)UNRECOVERED_JUMPTABLE_41 * 4)))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                          0x5c05e2a4aeb6ae7e,ppuVar65,0x31660556);
    return ppuVar19;
  case (undefined **)0x1000215c0:
    ppuVar42[-1] = (undefined *)ppuVar19;
    UNRECOVERED_JUMPTABLE_41 = (undefined **)CONCAT62(uVar25,CONCAT11(0x48,cVar63));
    *(uint *)(ppuVar19 + -0x30) = (uint)UNRECOVERED_JUMPTABLE_41;
code_r0x0001000215b1:
    UNRECOVERED_JUMPTABLE_45 =
         (undefined **)
         ((code *)((long)UNRECOVERED_JUMPTABLE_45 + (long)UNRECOVERED_JUMPTABLE_47) +
         -(long)UNRECOVERED_JUMPTABLE_37);
    UNRECOVERED_JUMPTABLE_47 = (undefined **)&UNK_10001e879;
    ppuVar19[-0x30] = (undefined *)UNRECOVERED_JUMPTABLE_41;
    ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
code_r0x00010002214a:
                    /* WARNING: Could not emulate address calculation at 0x00010002215f */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(switchD_100020322::caseD_2214a +
                 *(int *)(&DAT_1006d1e30 +
                         (long)(int)((int)ppuVar56 +
                                    (uint)(UNRECOVERED_JUMPTABLE_41 < UNRECOVERED_JUMPTABLE_46)) * 4
                         )))((long)*(int *)(&DAT_1006d1e30 +
                                           (long)(int)((int)ppuVar56 +
                                                      (uint)(UNRECOVERED_JUMPTABLE_41 <
                                                            UNRECOVERED_JUMPTABLE_46)) * 4),
                             UNRECOVERED_JUMPTABLE_45,UNRECOVERED_JUMPTABLE_46,
                             UNRECOVERED_JUMPTABLE_47,(int)ppuVar56 + -2,
                             switchD_100020322::caseD_2214a +
                             *(int *)(&DAT_1006d1e30 +
                                     (long)(int)((int)ppuVar56 +
                                                (uint)(UNRECOVERED_JUMPTABLE_41 <
                                                      UNRECOVERED_JUMPTABLE_46)) * 4));
    return ppuVar19;
  case (undefined **)0x100021808:
    *(code *)((long)ppuVar66 + 0xf) = (code)0xb6;
    plVar46 = (long *)(ppuVar42 + -1);
    ppuVar42[-1] = (undefined *)ppuVar19;
    cVar9 = '\b';
    do {
      ppuVar19 = ppuVar19 + -1;
      plVar46 = plVar46 + -1;
      *plVar46 = (long)*ppuVar19;
      cVar9 = cVar9 + -1;
    } while ('\0' < cVar9);
    ppuVar42[-10] = (undefined *)(ppuVar42 + -1);
    ppuVar61 = UNRECOVERED_JUMPTABLE_37;
code_r0x000100021811:
                    /* WARNING: Could not recover jumptable at 0x000100021828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&DAT_1000217a6 + (int)*(uint *)((long)unaff_R12 + (long)(int)uVar28 * 4)))
                         (ppuVar61,UNRECOVERED_JUMPTABLE_45,
                          &DAT_1000217a6 + (int)*(uint *)((long)unaff_R12 + (long)(int)uVar28 * 4));
    return ppuVar19;
  case (undefined **)0x10002181e:
    *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE_41 + 1) + -1
    ;
    return UNRECOVERED_JUMPTABLE_41;
  case (undefined **)0x100021836:
    ppuVar42 = (undefined **)0x14d57ede;
    ppuVar55 = (undefined **)
               ((long)UNRECOVERED_JUMPTABLE_47 + (long)(&UNK_10001ba36 + (ulong)bVar27 * -8));
    *(uint *)UNRECOVERED_JUMPTABLE_37 = *(uint *)UNRECOVERED_JUMPTABLE_45;
code_r0x00010002183a:
    bVar11 = (byte)UNRECOVERED_JUMPTABLE_41;
    bVar27 = bVar11 + 0xa5;
    bVar79 = 0x5a < bVar11 || CARRY1(bVar27,bVar80);
    UNRECOVERED_JUMPTABLE_41 =
         (undefined **)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8),bVar27 + bVar80);
    if (SCARRY1(bVar11,-0x5b) == SCARRY1(bVar27,bVar80)) {
code_r0x00010002187d:
      cVar36 = (char)UNRECOVERED_JUMPTABLE_41;
      cVar9 = cVar36 + -0x5b;
      UNRECOVERED_JUMPTABLE_41 =
           (undefined **)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_41 >> 8),cVar9 + bVar79);
      UNRECOVERED_JUMPTABLE_45 = ppuVar55;
      if (SCARRY1(cVar36,-0x5b) == SCARRY1(cVar9,bVar79)) {
        UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar71 + (long)UNRECOVERED_JUMPTABLE_47 * 4 + 0x45)
        ;
        *(int *)UNRECOVERED_JUMPTABLE =
             *(int *)UNRECOVERED_JUMPTABLE + (int)UNRECOVERED_JUMPTABLE_47;
        ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
        goto code_r0x0001000218a6;
      }
      *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) =
           *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) | 0x908d0a0c;
      *(int *)((long)ppuVar42 + (long)UNRECOVERED_JUMPTABLE_41 * 8 + -0x7d) =
           *(int *)((long)ppuVar42 + (long)UNRECOVERED_JUMPTABLE_41 * 8 + -0x7d) - (int)ppuVar42;
      ppuVar51 = ppuVar19;
    }
    else {
      *(uint *)((long)UNRECOVERED_JUMPTABLE_46 + -0x75) =
           *(uint *)((long)UNRECOVERED_JUMPTABLE_46 + -0x75) | 0x55ff233c;
      UNRECOVERED_JUMPTABLE_47 = ppuVar56;
code_r0x000100021846:
      *(undefined **)((long)ppuVar71 + (long)unaff_R12) = ppuVar19[-0x28];
      *(int *)ppuVar19[-0x2d] = (int)ppuVar19[-0x1b];
      UNRECOVERED_JUMPTABLE_41 = (undefined **)(ulong)*(uint *)ppuVar19[-0x31];
      ppuVar51 = ppuVar19;
      UNRECOVERED_JUMPTABLE_45 = (undefined **)ppuVar19[-0x31];
      ppuVar69 = ppuVar71;
      ppuVar56 = UNRECOVERED_JUMPTABLE_47;
    }
code_r0x00010002186d:
    uVar14 = ((uint)ppuVar56 ^ 0x89) * 0x46;
    unaff_R12 = (uint *)(ulong)uVar14;
    UNRECOVERED_JUMPTABLE_47 = *(undefined ***)((long)ppuVar69 + -0x7ec08e5aeb2a8122);
    iVar57 = (int)UNRECOVERED_JUMPTABLE_41;
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)(iVar57 + 0x83c46419)) = (code)0x0;
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)(uVar14 + 0x83c4638e + iVar57)) = (code)0x0;
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)(iVar57 + 0x83c4641b)) = (code)0x0;
    ppuVar19 = ppuVar51;
    ppuVar56 = (undefined **)UNRECOVERED_JUMPTABLE_44;
code_r0x0001000218a6:
    *(code *)((long)UNRECOVERED_JUMPTABLE_47 + (ulong)((int)UNRECOVERED_JUMPTABLE_41 + 0x83c4641c))
         = (code)0x0;
    ppuVar19[-0x31] = (undefined *)UNRECOVERED_JUMPTABLE_45;
    *(uint *)UNRECOVERED_JUMPTABLE_45 = *(uint *)UNRECOVERED_JUMPTABLE_45 + 4;
                    /* WARNING: Could not recover jumptable at 0x0001000218f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)(&UNK_1000218c5 +
                         (int)*(uint *)((long)ppuVar56 + (long)((int)unaff_R12 + 1) * 4)))();
    return ppuVar19;
  case (undefined **)0x100021926:
code_r0x00010002192b:
    UNRECOVERED_JUMPTABLE = (code *)ppuVar51[-0x11];
    ppuVar42[-1] = (undefined *)0x10002193b;
    lVar29 = (*UNRECOVERED_JUMPTABLE)(uVar13 + (int)UNRECOVERED_JUMPTABLE_44 + -0x1fecfe16);
    ppuVar76 = (undefined **)(ulong)((int)ppuVar76 + (uint)(lVar29 == 0));
code_r0x000100021946:
    puVar17 = (undefined *)(long)*(int *)((long)ppuVar56 + (long)(int)ppuVar76 * 4);
    ppuVar51[-0x14] = puVar17;
    ppuVar51[-0x16] = puVar17;
    ppuVar51[-0x19] = puVar17;
    ppuVar51[-0x1c] = puVar17;
    ppuVar51[-0xc] = (undefined *)0x5c05e2a4aeb6ae7e;
    ppuVar51[-0x18] = (undefined *)0x5c05e2a4aeb6ae7e;
    ppuVar51[-0x1b] = (undefined *)0x5c05e2a4aeb6ae7e;
    ppuVar51[-0x26] = (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001000219aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)(&DAT_100021906 + (long)puVar17))();
    return ppuVar19;
  case (undefined **)0x100021eac:
    uVar2 = *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_47 + -2);
    uVar15 = *(undefined8 *)((long)ppuVar69 + -0x7ec08e5aeb2a8122);
    ppuVar19[-9] = (undefined *)ppuVar69;
    iVar57 = *(int *)((long)ppuVar69 + -0x7ec08e5aeb2a8116);
    puVar17 = ppuVar65[(int)(uVar13 & 0xc32b47c5)];
    ppuVar42[-1] = (undefined *)0x100021ef3;
    uVar14 = (*(code *)(puVar17 + -3))
                       (uVar2,uVar15,iVar57 + -0x7c3b9be7,ppuVar19 + -0x25,
                        (code *)((long)ppuVar19 + -0x8c));
    uVar28 = uVar34 ^ uVar14;
    goto code_r0x000100021ef7;
  case (undefined **)0x100021eb1:
    uVar14 = (uint)CONCAT71(uVar24,(char)cVar63 + -0x5b + bVar80);
    if (SCARRY1((char)cVar63,-0x5b) != SCARRY1((char)cVar63 + -0x5b,bVar80)) {
      *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) =
           *(uint *)((long)UNRECOVERED_JUMPTABLE_47 + -0x75) | 0x19ba0a34;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x000100021ef7:
                    /* WARNING: Could not recover jumptable at 0x000100021f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)*(int *)(&DAT_1006d1e30 +
                                        (long)(int)(((int)((uVar28 ^ 0xffefb7cc) +
                                                          (uVar14 & 0xffefb7f6) * 2) <
                                                    (int)((uVar34 ^ 0xf) + 0xfefb787 ^
                                                         (uVar34 ^ 0x2d) * 3)) + uVar34) * 4) +
                         0x100021f05))
                         ((code *)((long)*(int *)(&DAT_1006d1e30 +
                                                 (long)(int)(((int)((uVar28 ^ 0xffefb7cc) +
                                                                   (uVar14 & 0xffefb7f6) * 2) <
                                                             (int)((uVar34 ^ 0xf) + 0xfefb787 ^
                                                                  (uVar34 ^ 0x2d) * 3)) + uVar34) *
                                                 4) + 0x100021f05));
    return ppuVar19;
  case (undefined **)0x100021eb7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (undefined **)0x100022abf:
                    /* WARNING: Could not recover jumptable at 0x000100022abf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_41)();
    return ppuVar19;
  case (undefined **)0x100024a0c:
code_r0x000100024a0d:
    uVar68 = (uint)UNRECOVERED_JUMPTABLE_37;
    uVar54 = (uint)ppuVar65;
    uVar14 = (uint)ppuVar76;
    bVar80 = SUB81(ppuVar66,0);
    UNRECOVERED_JUMPTABLE_45 = (undefined **)(ulong)(uint)((int)UNRECOVERED_JUMPTABLE_45 << 0xd);
code_r0x000100024a10:
    uVar68 = uVar54 + uVar68 * 2 + 0x8f98b3ae;
    bVar79 = uVar28 < uVar68;
    if (bVar80 != uVar68 < 0xfd8f7547) {
      bVar79 = uVar68 < 0xfd8f7547;
    }
                    /* WARNING: Could not recover jumptable at 0x000100024a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar19 = (undefined **)
               (*(code *)((long)UNRECOVERED_JUMPTABLE_45 +
                         (long)*(int *)(&DAT_1006d2600 + (long)(int)(bVar79 + uVar14) * 4)))();
    return ppuVar19;
  }
  iVar57 = uVar64 + *(int *)((long)UNRECOVERED_JUMPTABLE_44 + 8) + -0x4dd29c03;
  ppuVar19[-0x24] = (undefined *)UNRECOVERED_JUMPTABLE_41;
code_r0x000100018d74:
  UNRECOVERED_JUMPTABLE_37 = (undefined **)(ulong)(uVar64 ^ 2);
  UNRECOVERED_JUMPTABLE_45 =
       (undefined **)
       (ulong)((iVar57 - ((uVar64 + 0xe2846e86 ^ uVar64 ^ 2) & iVar57 * 2)) + 0xf1423742);
  bVar80 = UNRECOVERED_JUMPTABLE_41 < UNRECOVERED_JUMPTABLE_46;
code_r0x000100018da1:
                    /* WARNING: Could not recover jumptable at 0x000100018db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(switchD_100020322::caseD_18d74 +
               *(int *)((long)UNRECOVERED_JUMPTABLE_44 + (long)(int)(uVar64 + bVar80) * 4)))
                       (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45);
  return ppuVar19;
code_r0x0001000202e2:
  UNRECOVERED_JUMPTABLE =
       (code *)((long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                    (long)UNRECOVERED_JUMPTABLE_41 * 4) + 0x1000202ad);
  *(uint *)(ppuVar19 + -0x1d) = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x0001000202fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*UNRECOVERED_JUMPTABLE)
                       (UNRECOVERED_JUMPTABLE_37,UNRECOVERED_JUMPTABLE_45,0,UNRECOVERED_JUMPTABLE);
  return ppuVar19;
code_r0x00010001d71c:
  ppuVar42 = UNRECOVERED_JUMPTABLE_41 + -0xd;
  *(uint *)ppuVar42 = *(uint *)ppuVar42 >> 1 | (uint)(((ulong)*ppuVar42 & 1) != 0) << 0x1f;
  uVar14 = *(uint *)((long)UNRECOVERED_JUMPTABLE_44 + (long)UNRECOVERED_JUMPTABLE_41 * 4);
  ppuVar19[-0xc] = ppuVar19[-0x10];
                    /* WARNING: Could not recover jumptable at 0x00010001d73a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)(*(code *)((long)(int)uVar14 + 0x10001d6a3))();
  return ppuVar19;
code_r0x0001000229c4:
  UNRECOVERED_JUMPTABLE = (code *)ppuVar19[-0x11];
  *(undefined **)((long)ppuVar42 + -8) = &UNK_1000229dc;
  lVar29 = (*UNRECOVERED_JUMPTABLE)
                     (((uint)UNRECOVERED_JUMPTABLE_44 & 0x6f0163d5 ^ 0x405442ff) +
                      (int)UNRECOVERED_JUMPTABLE_46,UNRECOVERED_JUMPTABLE_45,
                      UNRECOVERED_JUMPTABLE_46,UNRECOVERED_JUMPTABLE_47);
  uVar14 = *(uint *)((long)unaff_R12 + (long)(int)((int)puVar78 + (uint)(lVar29 == 0)) * 4);
  ppuVar19[-0x2a] = (undefined *)0x0;
                    /* WARNING: Could not emulate address calculation at 0x0001000229ea */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)(*(code *)(&DAT_1000229af + (int)uVar14))();
  return ppuVar19;
switchD_100025d1a_caseD_266b3:
  UNRECOVERED_JUMPTABLE =
       (code *)((long)ppuVar65 +
               (-0x4bf06665ce8f161a - ((ulong)UNRECOVERED_JUMPTABLE_46 & (ulong)ppuVar61)));
  lVar29 = *(long *)((long)puVar75 + -0x583fea33108f2bd4);
  *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + lVar29 + 0x1416486c6004085) =
       (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x38) ^ 0xb4;
  *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + lVar29 + 0x1416486c6004086) =
       (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x30) ^ 0xf;
  *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + lVar29 + 0x1416486c6004087) =
       (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x28) ^ 0x99;
  *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + lVar29 + 0x1416486c6004088) =
       (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x20) ^ 0x9a;
  *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + lVar29 + 0x1416486c6004089) =
       (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x18) ^ 0x31;
  *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + lVar29 + 0x1416486c600408a) =
       (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x10) ^ 0x70;
  *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + lVar29 + 0x1416486c600408b) =
       (byte)((ulong)UNRECOVERED_JUMPTABLE >> 8) ^ 0xe9;
  *(byte *)((long)UNRECOVERED_JUMPTABLE_47 + lVar29 + 0x1416486c600408c) =
       (byte)UNRECOVERED_JUMPTABLE ^ 0xe6;
  *(int *)UNRECOVERED_JUMPTABLE_41 = *(int *)UNRECOVERED_JUMPTABLE_41 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010002677f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar19 = (undefined **)
             (*(code *)((long)(int)*(uint *)((long)UNRECOVERED_JUMPTABLE_44 +
                                            (long)((int)puVar78 + 1) * 4) + 0x10002675c))();
  return ppuVar19;
}

