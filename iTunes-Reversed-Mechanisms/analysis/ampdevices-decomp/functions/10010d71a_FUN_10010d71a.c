// name: FUN_10010d71a
// address: 10010d71a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10010d71a(long param_1,uint param_2,int param_3,undefined8 *param_4,long param_5,
                 char param_6)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *puVar4;
  long *plVar5;
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
  undefined1 uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  int *piVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  long lVar52;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar54 [16];
  long lVar55;
  undefined1 in_XMM2 [16];
  undefined1 auVar56 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar57 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar58 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar59 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar60 [16];
  undefined1 in_XMM7 [16];
  undefined1 auVar61 [16];
  undefined1 in_XMM8 [16];
  undefined1 auVar62 [16];
  undefined1 in_XMM11 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  int iVar73;
  undefined1 auVar71 [16];
  int iVar74;
  undefined1 auVar72 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  int iVar88;
  int iVar92;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  
  iVar33 = -2;
  if (0xb < param_2) {
    return -2;
  }
  lVar34 = param_1 + (ulong)param_2 * 0x20a0;
  lVar35 = lVar34 + 0xbb0;
  *(long *)(param_1 + 0xba8) = lVar35;
  plVar1 = (long *)(param_1 + 0xbc0 + (ulong)param_2 * 0x20a0);
  plVar1[-1] = (long)plVar1;
  uVar39 = (ulong)*(uint *)(param_5 + 0xc);
  *(uint *)((long)plVar1 + -0xc) = *(uint *)(param_5 + 0xc);
  *(short *)(plVar1 + -2) = (short)(*(uint *)(param_1 + 0x48) >> 3);
  plVar1[2] = param_1 + uVar39 * 4 + 0x19338;
  *plVar1 = param_1 + 0x1ab6c + uVar39;
  *(int *)(param_1 + 0x1ab68) = param_3;
  puVar4 = (uint *)*param_4;
  uVar32 = *puVar4;
  uVar37 = puVar4[1];
  if (uVar37 * 8 <= uVar32) {
    return -2;
  }
  uVar38 = ((uVar37 >> 2) + 1) - (uint)((uVar37 & 3) == 0);
  *(uint *)(param_1 + 0x34) = uVar38;
  uVar37 = uVar32 >> 5;
  *(uint *)(param_1 + 0x18) = uVar37;
  if (uVar37 < uVar38) {
    *(uint **)(param_1 + 0x40) = puVar4;
    lVar40 = *(long *)(puVar4 + 2);
    *(long *)(param_1 + 0x20) = lVar40;
    *(uint *)(param_1 + 0x28) = uVar32 & 0x1f;
    puVar4 = (uint *)(lVar40 + (ulong)uVar37 * 4);
    uVar37 = *puVar4;
    *(uint *)(param_1 + 0x2c) =
         (uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 | uVar37 << 0x18) <<
         (sbyte)(uVar32 & 0x1f);
    *(uint **)(param_1 + 0x10) = puVar4;
  }
  if (param_3 == 0) {
    **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 8;
    iVar31 = *(int *)(param_1 + 0x28);
    uVar32 = iVar31 + 8;
    *(uint *)(param_1 + 0x28) = uVar32;
    if (uVar32 < 0x20) {
      iVar31 = *(int *)(param_1 + 0x2c);
      *(char *)(lVar34 + 0xf58) = (char)((uint)iVar31 >> 0x18);
      uVar32 = iVar31 << 8;
LAB_10010d927:
      *(uint *)(param_1 + 0x2c) = uVar32;
    }
    else {
      if (uVar32 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar37 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar37;
        uVar32 = 0;
        if (uVar37 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar32 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar37 * 4);
        }
        uVar32 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18
        ;
        *(undefined1 *)(lVar34 + 0xf58) = *(undefined1 *)(param_1 + 0x2f);
        goto LAB_10010d927;
      }
      *(int *)(param_1 + 0x28) = iVar31 + -0x18;
      lVar35 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar35 + 4;
      uVar32 = *(uint *)(lVar35 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar32 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
      *(byte *)(lVar34 + 0xf58) =
           (byte)((uVar32 >> (-(char)iVar31 & 0x1fU)) >> 0x18) |
           (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18);
      *(uint *)(param_1 + 0x2c) = uVar32 << ((byte)(iVar31 + -0x18) & 0x1f);
    }
    iVar31 = FUN_10010c9f8(param_1);
    if (iVar31 != 0) {
      return -2;
    }
    *(undefined1 *)(param_1 + 0x1ab78 + uVar39) = 0;
  }
  else {
    if ((*(char *)(param_5 + 6) == '\0') || (*(char *)(param_5 + 4) == '\0')) {
      plVar5 = *(long **)(param_1 + 3000 + (ulong)*(uint *)(param_5 + 8) * 0x20a0);
      if (plVar5 == (long *)0x0) {
        return -2;
      }
      lVar34 = *plVar5;
      lVar40 = plVar5[1];
      lVar52 = plVar5[2];
      lVar55 = plVar5[3];
      in_XMM2 = *(undefined1 (*) [16])(plVar5 + 4);
      in_XMM3 = *(undefined1 (*) [16])(plVar5 + 6);
      *(undefined1 (*) [16])(plVar1 + 6) = in_XMM3;
      *(undefined1 (*) [16])(plVar1 + 4) = in_XMM2;
      plVar1[2] = lVar52;
      plVar1[3] = lVar55;
      *plVar1 = lVar34;
      plVar1[1] = lVar40;
    }
    else {
      iVar31 = FUN_10010c9f8(param_1);
      if (iVar31 != 0) {
        return -2;
      }
      uVar30 = FUN_10010cf44(param_1);
      *(undefined1 *)(param_1 + 0x1ab78 + uVar39) = uVar30;
      lVar35 = *(long *)(param_1 + 0xba8);
    }
    **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 8;
    iVar31 = *(int *)(param_1 + 0x28);
    uVar32 = iVar31 + 8;
    *(uint *)(param_1 + 0x28) = uVar32;
    if (uVar32 < 0x20) {
      iVar31 = *(int *)(param_1 + 0x2c);
      *(char *)(lVar35 + 0x3a8) = (char)((uint)iVar31 >> 0x18);
      uVar32 = iVar31 << 8;
    }
    else {
      if (uVar32 != 0x20) {
        *(int *)(param_1 + 0x28) = iVar31 + -0x18;
        lVar34 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar34 + 4;
        uVar32 = *(uint *)(lVar34 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar32 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18
        ;
        *(byte *)(lVar35 + 0x3a8) =
             (byte)((uVar32 >> (-(char)iVar31 & 0x1fU)) >> 0x18) |
             (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18);
        *(uint *)(param_1 + 0x2c) = uVar32 << ((byte)(iVar31 + -0x18) & 0x1f);
        goto LAB_10010d9fa;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar37 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar37;
      uVar32 = 0;
      if (uVar37 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar32 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar37 * 4);
      }
      uVar32 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
      *(undefined1 *)(lVar35 + 0x3a8) = *(undefined1 *)(param_1 + 0x2f);
    }
    *(uint *)(param_1 + 0x2c) = uVar32;
  }
LAB_10010d9fa:
  iVar31 = FUN_10010e260(param_1,param_5 + 0x74);
  if (iVar31 != 0) {
    return -2;
  }
  FUN_10010e5da(param_1);
  auVar42._8_8_ = extraout_XMM1_Qb;
  auVar42._0_8_ = extraout_XMM1_Qa;
  lVar34 = *(long *)(param_1 + 0xba8);
  *(undefined4 *)(lVar34 + 0xd30) = 0;
  piVar36 = *(int **)(param_1 + 0x40);
  *piVar36 = *piVar36 + 1;
  iVar31 = *(int *)(param_1 + 0x28);
  uVar32 = iVar31 + 1;
  *(uint *)(param_1 + 0x28) = uVar32;
  if (uVar32 < 0x20) {
    uVar32 = *(uint *)(param_1 + 0x2c);
    uVar37 = uVar32 >> 0x1f;
    *(uint *)(lVar34 + 0xd30) = uVar37;
    uVar32 = uVar32 * 2;
LAB_10010da9c:
    *(uint *)(param_1 + 0x2c) = uVar32;
  }
  else {
    if (uVar32 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar37 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar37;
      uVar32 = 0;
      if (uVar37 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar32 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar37 * 4);
      }
      uVar32 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
      uVar37 = *(uint *)(param_1 + 0x2c) >> 0x1f;
      *(uint *)(lVar34 + 0xd30) = uVar37;
      goto LAB_10010da9c;
    }
    *(int *)(param_1 + 0x28) = iVar31 + -0x1f;
    lVar35 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar35 + 4;
    uVar32 = *(uint *)(lVar35 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar32 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
    uVar37 = (uVar32 >> (-(char)iVar31 & 0x1fU) | *(uint *)(param_1 + 0x2c)) >> 0x1f;
    *(uint *)(lVar34 + 0xd30) = uVar37;
    *(uint *)(param_1 + 0x2c) = uVar32 << ((byte)(iVar31 + -0x1f) & 0x1f);
  }
  *(undefined1 *)(lVar34 + 0xd34) = 0;
  if (uVar37 != 0) {
    if (*(char *)(*(long *)(lVar34 + 8) + 0x18) == '\0') {
      return -2;
    }
    iVar31 = FUN_10010e974(param_1);
    auVar42._8_8_ = extraout_XMM1_Qb_00;
    auVar42._0_8_ = extraout_XMM1_Qa_00;
    if (iVar31 != 0) {
      return -2;
    }
    lVar34 = *(long *)(param_1 + 0xba8);
    piVar36 = *(int **)(param_1 + 0x40);
  }
  *piVar36 = *piVar36 + 1;
  iVar31 = *(int *)(param_1 + 0x28);
  uVar32 = iVar31 + 1;
  *(uint *)(param_1 + 0x28) = uVar32;
  if (uVar32 < 0x20) {
    uVar32 = *(uint *)(param_1 + 0x2c);
    *(byte *)(lVar34 + 0x1d78) = (byte)(uVar32 >> 0x1f);
    uVar37 = uVar32 * 2;
  }
  else {
    if (uVar32 != 0x20) {
      *(int *)(param_1 + 0x28) = iVar31 + -0x1f;
      lVar35 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar35 + 4;
      uVar32 = *(uint *)(lVar35 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar37 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
      uVar32 = uVar37 >> (-(char)iVar31 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(byte *)(lVar34 + 0x1d78) = (byte)(uVar32 >> 0x1f);
      *(uint *)(param_1 + 0x2c) = uVar37 << ((byte)(iVar31 + -0x1f) & 0x1f);
      goto LAB_10010dbb2;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar37 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar37;
    uVar32 = 0;
    if (uVar37 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar32 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar37 * 4);
    }
    uVar37 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
    uVar32 = *(uint *)(param_1 + 0x2c);
    *(byte *)(lVar34 + 0x1d78) = (byte)(uVar32 >> 0x1f);
  }
  *(uint *)(param_1 + 0x2c) = uVar37;
LAB_10010dbb2:
  if ((int)uVar32 < 0 && param_6 == '\0') {
    iVar31 = FUN_10010d152(param_1);
    if (iVar31 != 0) {
      return -2;
    }
  }
  else {
    lVar35 = *(long *)(lVar34 + 8);
    bVar2 = *(byte *)(lVar35 + 0x19);
    uVar3 = *(undefined4 *)(lVar35 + 0x1b);
    *(undefined4 *)(lVar34 + 0x1e10) = *(undefined4 *)(lVar35 + 0x18);
    *(undefined4 *)(lVar34 + 0x1e13) = uVar3;
    auVar29 = _DAT_100700430;
    if ((ulong)bVar2 != 0) {
      lVar35 = (ulong)bVar2 - 1;
      auVar41._8_4_ = (int)lVar35;
      auVar41._0_8_ = lVar35;
      auVar41._12_4_ = (int)((ulong)lVar35 >> 0x20);
      auVar54 = pmovsxbq(auVar42,_DAT_100700caa);
      auVar56 = pmovsxbq(in_XMM2,_DAT_100700cac);
      auVar57 = pmovsxbq(in_XMM3,_DAT_100700cae);
      auVar58 = pmovsxbq(in_XMM4,_DAT_100700cb0);
      auVar59 = pmovsxbq(in_XMM5,_DAT_100700cb2);
      auVar60 = pmovsxbq(in_XMM6,_DAT_100700cb4);
      auVar61 = pmovsxbq(in_XMM7,_DAT_100700cb6);
      auVar62 = pmovsxbq(in_XMM8,_DAT_100700cb8);
      lVar35 = 0;
      auVar42 = auVar41;
      do {
        auVar71 = auVar41 ^ auVar29;
        auVar75 = auVar62 ^ auVar29;
        iVar31 = auVar71._0_4_;
        iVar88 = -(uint)(iVar31 < auVar75._0_4_);
        iVar53 = auVar71._4_4_;
        auVar77._4_4_ = -(uint)(iVar53 < auVar75._4_4_);
        iVar73 = auVar71._8_4_;
        iVar92 = -(uint)(iVar73 < auVar75._8_4_);
        iVar74 = auVar71._12_4_;
        auVar77._12_4_ = -(uint)(iVar74 < auVar75._12_4_);
        auVar43._4_4_ = iVar88;
        auVar43._0_4_ = iVar88;
        auVar43._8_4_ = iVar92;
        auVar43._12_4_ = iVar92;
        auVar42 = pshuflw(auVar42,auVar43,0xe8);
        auVar76._4_4_ = -(uint)(auVar75._4_4_ == iVar53);
        auVar76._12_4_ = -(uint)(auVar75._12_4_ == iVar74);
        auVar76._0_4_ = auVar76._4_4_;
        auVar76._8_4_ = auVar76._12_4_;
        auVar75 = pshuflw(in_XMM11,auVar76,0xe8);
        auVar77._0_4_ = auVar77._4_4_;
        auVar77._8_4_ = auVar77._12_4_;
        auVar43 = pshuflw(auVar42,auVar77,0xe8);
        auVar71._8_4_ = 0xffffffff;
        auVar71._0_8_ = 0xffffffffffffffff;
        auVar71._12_4_ = 0xffffffff;
        auVar71 = (auVar43 | auVar75 & auVar42) ^ auVar71;
        auVar42 = packssdw(auVar71,auVar71);
        if ((auVar42._0_4_ & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x1e60 + lVar35) = 0;
        }
        auVar15._4_4_ = iVar88;
        auVar15._0_4_ = iVar88;
        auVar15._8_4_ = iVar92;
        auVar15._12_4_ = iVar92;
        auVar77 = auVar76 & auVar15 | auVar77;
        auVar42 = packssdw(auVar77,auVar77);
        auVar75._8_4_ = 0xffffffff;
        auVar75._0_8_ = 0xffffffffffffffff;
        auVar75._12_4_ = 0xffffffff;
        auVar42 = packssdw(auVar42 ^ auVar75,auVar42 ^ auVar75);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[1] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x1eb0 + lVar35) = 0;
        }
        auVar42 = auVar61 ^ auVar29;
        auVar63._0_4_ = -(uint)(iVar31 < auVar42._0_4_);
        auVar63._4_4_ = -(uint)(iVar53 < auVar42._4_4_);
        auVar63._8_4_ = -(uint)(iVar73 < auVar42._8_4_);
        auVar63._12_4_ = -(uint)(iVar74 < auVar42._12_4_);
        auVar78._4_4_ = auVar63._0_4_;
        auVar78._0_4_ = auVar63._0_4_;
        auVar78._8_4_ = auVar63._8_4_;
        auVar78._12_4_ = auVar63._8_4_;
        iVar88 = -(uint)(auVar42._4_4_ == iVar53);
        iVar92 = -(uint)(auVar42._12_4_ == iVar74);
        auVar16._4_4_ = iVar88;
        auVar16._0_4_ = iVar88;
        auVar16._8_4_ = iVar92;
        auVar16._12_4_ = iVar92;
        auVar89._4_4_ = auVar63._4_4_;
        auVar89._0_4_ = auVar63._4_4_;
        auVar89._8_4_ = auVar63._12_4_;
        auVar89._12_4_ = auVar63._12_4_;
        auVar42 = auVar16 & auVar78 | auVar89;
        auVar42 = packssdw(auVar42,auVar42);
        auVar6._8_4_ = 0xffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar6._12_4_ = 0xffffffff;
        auVar42 = packssdw(auVar42 ^ auVar6,auVar42 ^ auVar6);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[2] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x1f00 + lVar35) = 0;
        }
        auVar42 = pshufhw(auVar42,auVar78,0x84);
        auVar17._4_4_ = iVar88;
        auVar17._0_4_ = iVar88;
        auVar17._8_4_ = iVar92;
        auVar17._12_4_ = iVar92;
        auVar43 = pshufhw(auVar63,auVar17,0x84);
        auVar71 = pshufhw(auVar42,auVar89,0x84);
        auVar44._8_4_ = 0xffffffff;
        auVar44._0_8_ = 0xffffffffffffffff;
        auVar44._12_4_ = 0xffffffff;
        auVar44 = (auVar71 | auVar43 & auVar42) ^ auVar44;
        auVar42 = packssdw(auVar44,auVar44);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[3] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x1f50 + lVar35) = 0;
        }
        auVar42 = auVar60 ^ auVar29;
        auVar64._0_4_ = -(uint)(iVar31 < auVar42._0_4_);
        auVar64._4_4_ = -(uint)(iVar53 < auVar42._4_4_);
        auVar64._8_4_ = -(uint)(iVar73 < auVar42._8_4_);
        auVar64._12_4_ = -(uint)(iVar74 < auVar42._12_4_);
        auVar18._4_4_ = auVar64._0_4_;
        auVar18._0_4_ = auVar64._0_4_;
        auVar18._8_4_ = auVar64._8_4_;
        auVar18._12_4_ = auVar64._8_4_;
        auVar43 = pshuflw(auVar89,auVar18,0xe8);
        auVar45._0_4_ = -(uint)(auVar42._0_4_ == iVar31);
        auVar45._4_4_ = -(uint)(auVar42._4_4_ == iVar53);
        auVar45._8_4_ = -(uint)(auVar42._8_4_ == iVar73);
        auVar45._12_4_ = -(uint)(auVar42._12_4_ == iVar74);
        auVar79._4_4_ = auVar45._4_4_;
        auVar79._0_4_ = auVar45._4_4_;
        auVar79._8_4_ = auVar45._12_4_;
        auVar79._12_4_ = auVar45._12_4_;
        auVar42 = pshuflw(auVar45,auVar79,0xe8);
        auVar80._4_4_ = auVar64._4_4_;
        auVar80._0_4_ = auVar64._4_4_;
        auVar80._8_4_ = auVar64._12_4_;
        auVar80._12_4_ = auVar64._12_4_;
        auVar71 = pshuflw(auVar64,auVar80,0xe8);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar42 = packssdw(auVar42 & auVar43,(auVar71 | auVar42 & auVar43) ^ auVar7);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[4] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x1fa0 + lVar35) = 0;
        }
        auVar19._4_4_ = auVar64._0_4_;
        auVar19._0_4_ = auVar64._0_4_;
        auVar19._8_4_ = auVar64._8_4_;
        auVar19._12_4_ = auVar64._8_4_;
        auVar80 = auVar79 & auVar19 | auVar80;
        auVar71 = packssdw(auVar80,auVar80);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar42 = packssdw(auVar42,auVar71 ^ auVar8);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[5] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x1ff0 + lVar35) = 0;
        }
        auVar42 = auVar59 ^ auVar29;
        auVar65._0_4_ = -(uint)(iVar31 < auVar42._0_4_);
        auVar65._4_4_ = -(uint)(iVar53 < auVar42._4_4_);
        auVar65._8_4_ = -(uint)(iVar73 < auVar42._8_4_);
        auVar65._12_4_ = -(uint)(iVar74 < auVar42._12_4_);
        auVar81._4_4_ = auVar65._0_4_;
        auVar81._0_4_ = auVar65._0_4_;
        auVar81._8_4_ = auVar65._8_4_;
        auVar81._12_4_ = auVar65._8_4_;
        iVar88 = -(uint)(auVar42._4_4_ == iVar53);
        iVar92 = -(uint)(auVar42._12_4_ == iVar74);
        auVar20._4_4_ = iVar88;
        auVar20._0_4_ = iVar88;
        auVar20._8_4_ = iVar92;
        auVar20._12_4_ = iVar92;
        auVar90._4_4_ = auVar65._4_4_;
        auVar90._0_4_ = auVar65._4_4_;
        auVar90._8_4_ = auVar65._12_4_;
        auVar90._12_4_ = auVar65._12_4_;
        auVar42 = auVar20 & auVar81 | auVar90;
        auVar42 = packssdw(auVar42,auVar42);
        auVar9._8_4_ = 0xffffffff;
        auVar9._0_8_ = 0xffffffffffffffff;
        auVar9._12_4_ = 0xffffffff;
        auVar42 = packssdw(auVar42 ^ auVar9,auVar42 ^ auVar9);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[6] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x2040 + lVar35) = 0;
        }
        auVar42 = pshufhw(auVar42,auVar81,0x84);
        auVar21._4_4_ = iVar88;
        auVar21._0_4_ = iVar88;
        auVar21._8_4_ = iVar92;
        auVar21._12_4_ = iVar92;
        auVar43 = pshufhw(auVar65,auVar21,0x84);
        auVar71 = pshufhw(auVar42,auVar90,0x84);
        auVar46._8_4_ = 0xffffffff;
        auVar46._0_8_ = 0xffffffffffffffff;
        auVar46._12_4_ = 0xffffffff;
        auVar46 = (auVar71 | auVar43 & auVar42) ^ auVar46;
        auVar42 = packssdw(auVar46,auVar46);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[7] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x2090 + lVar35) = 0;
        }
        auVar42 = auVar58 ^ auVar29;
        auVar66._0_4_ = -(uint)(iVar31 < auVar42._0_4_);
        auVar66._4_4_ = -(uint)(iVar53 < auVar42._4_4_);
        auVar66._8_4_ = -(uint)(iVar73 < auVar42._8_4_);
        auVar66._12_4_ = -(uint)(iVar74 < auVar42._12_4_);
        auVar22._4_4_ = auVar66._0_4_;
        auVar22._0_4_ = auVar66._0_4_;
        auVar22._8_4_ = auVar66._8_4_;
        auVar22._12_4_ = auVar66._8_4_;
        auVar43 = pshuflw(auVar90,auVar22,0xe8);
        auVar47._0_4_ = -(uint)(auVar42._0_4_ == iVar31);
        auVar47._4_4_ = -(uint)(auVar42._4_4_ == iVar53);
        auVar47._8_4_ = -(uint)(auVar42._8_4_ == iVar73);
        auVar47._12_4_ = -(uint)(auVar42._12_4_ == iVar74);
        auVar82._4_4_ = auVar47._4_4_;
        auVar82._0_4_ = auVar47._4_4_;
        auVar82._8_4_ = auVar47._12_4_;
        auVar82._12_4_ = auVar47._12_4_;
        auVar42 = pshuflw(auVar47,auVar82,0xe8);
        auVar83._4_4_ = auVar66._4_4_;
        auVar83._0_4_ = auVar66._4_4_;
        auVar83._8_4_ = auVar66._12_4_;
        auVar83._12_4_ = auVar66._12_4_;
        auVar71 = pshuflw(auVar66,auVar83,0xe8);
        auVar67._8_4_ = 0xffffffff;
        auVar67._0_8_ = 0xffffffffffffffff;
        auVar67._12_4_ = 0xffffffff;
        auVar67 = (auVar71 | auVar42 & auVar43) ^ auVar67;
        auVar71 = packssdw(auVar67,auVar67);
        auVar42 = packsswb(auVar42 & auVar43,auVar71);
        if ((auVar42[8] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x20e0 + lVar35) = 0;
        }
        auVar23._4_4_ = auVar66._0_4_;
        auVar23._0_4_ = auVar66._0_4_;
        auVar23._8_4_ = auVar66._8_4_;
        auVar23._12_4_ = auVar66._8_4_;
        auVar83 = auVar82 & auVar23 | auVar83;
        auVar71 = packssdw(auVar83,auVar83);
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar71 = packssdw(auVar71 ^ auVar10,auVar71 ^ auVar10);
        auVar42 = packsswb(auVar42,auVar71);
        if ((auVar42[9] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x2130 + lVar35) = 0;
        }
        auVar42 = auVar57 ^ auVar29;
        auVar68._0_4_ = -(uint)(iVar31 < auVar42._0_4_);
        auVar68._4_4_ = -(uint)(iVar53 < auVar42._4_4_);
        auVar68._8_4_ = -(uint)(iVar73 < auVar42._8_4_);
        auVar68._12_4_ = -(uint)(iVar74 < auVar42._12_4_);
        auVar84._4_4_ = auVar68._0_4_;
        auVar84._0_4_ = auVar68._0_4_;
        auVar84._8_4_ = auVar68._8_4_;
        auVar84._12_4_ = auVar68._8_4_;
        iVar88 = -(uint)(auVar42._4_4_ == iVar53);
        iVar92 = -(uint)(auVar42._12_4_ == iVar74);
        auVar24._4_4_ = iVar88;
        auVar24._0_4_ = iVar88;
        auVar24._8_4_ = iVar92;
        auVar24._12_4_ = iVar92;
        auVar91._4_4_ = auVar68._4_4_;
        auVar91._0_4_ = auVar68._4_4_;
        auVar91._8_4_ = auVar68._12_4_;
        auVar91._12_4_ = auVar68._12_4_;
        auVar42 = auVar24 & auVar84 | auVar91;
        auVar42 = packssdw(auVar42,auVar42);
        auVar11._8_4_ = 0xffffffff;
        auVar11._0_8_ = 0xffffffffffffffff;
        auVar11._12_4_ = 0xffffffff;
        auVar42 = packssdw(auVar42 ^ auVar11,auVar42 ^ auVar11);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[10] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x2180 + lVar35) = 0;
        }
        auVar42 = pshufhw(auVar42,auVar84,0x84);
        auVar25._4_4_ = iVar88;
        auVar25._0_4_ = iVar88;
        auVar25._8_4_ = iVar92;
        auVar25._12_4_ = iVar92;
        auVar43 = pshufhw(auVar68,auVar25,0x84);
        auVar71 = pshufhw(auVar42,auVar91,0x84);
        auVar48._8_4_ = 0xffffffff;
        auVar48._0_8_ = 0xffffffffffffffff;
        auVar48._12_4_ = 0xffffffff;
        auVar48 = (auVar71 | auVar43 & auVar42) ^ auVar48;
        auVar42 = packssdw(auVar48,auVar48);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[0xb] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x21d0 + lVar35) = 0;
        }
        auVar42 = auVar56 ^ auVar29;
        auVar69._0_4_ = -(uint)(iVar31 < auVar42._0_4_);
        auVar69._4_4_ = -(uint)(iVar53 < auVar42._4_4_);
        auVar69._8_4_ = -(uint)(iVar73 < auVar42._8_4_);
        auVar69._12_4_ = -(uint)(iVar74 < auVar42._12_4_);
        auVar26._4_4_ = auVar69._0_4_;
        auVar26._0_4_ = auVar69._0_4_;
        auVar26._8_4_ = auVar69._8_4_;
        auVar26._12_4_ = auVar69._8_4_;
        auVar43 = pshuflw(auVar91,auVar26,0xe8);
        auVar49._0_4_ = -(uint)(auVar42._0_4_ == iVar31);
        auVar49._4_4_ = -(uint)(auVar42._4_4_ == iVar53);
        auVar49._8_4_ = -(uint)(auVar42._8_4_ == iVar73);
        auVar49._12_4_ = -(uint)(auVar42._12_4_ == iVar74);
        auVar85._4_4_ = auVar49._4_4_;
        auVar85._0_4_ = auVar49._4_4_;
        auVar85._8_4_ = auVar49._12_4_;
        auVar85._12_4_ = auVar49._12_4_;
        auVar42 = pshuflw(auVar49,auVar85,0xe8);
        auVar86._4_4_ = auVar69._4_4_;
        auVar86._0_4_ = auVar69._4_4_;
        auVar86._8_4_ = auVar69._12_4_;
        auVar86._12_4_ = auVar69._12_4_;
        auVar71 = pshuflw(auVar69,auVar86,0xe8);
        auVar12._8_4_ = 0xffffffff;
        auVar12._0_8_ = 0xffffffffffffffff;
        auVar12._12_4_ = 0xffffffff;
        auVar42 = packssdw(auVar42 & auVar43,(auVar71 | auVar42 & auVar43) ^ auVar12);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[0xc] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x2220 + lVar35) = 0;
        }
        auVar27._4_4_ = auVar69._0_4_;
        auVar27._0_4_ = auVar69._0_4_;
        auVar27._8_4_ = auVar69._8_4_;
        auVar27._12_4_ = auVar69._8_4_;
        auVar86 = auVar85 & auVar27 | auVar86;
        auVar71 = packssdw(auVar86,auVar86);
        auVar13._8_4_ = 0xffffffff;
        auVar13._0_8_ = 0xffffffffffffffff;
        auVar13._12_4_ = 0xffffffff;
        auVar42 = packssdw(auVar42,auVar71 ^ auVar13);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[0xd] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x2270 + lVar35) = 0;
        }
        auVar42 = auVar54 ^ auVar29;
        auVar70._0_4_ = -(uint)(iVar31 < auVar42._0_4_);
        auVar70._4_4_ = -(uint)(iVar53 < auVar42._4_4_);
        auVar70._8_4_ = -(uint)(iVar73 < auVar42._8_4_);
        auVar70._12_4_ = -(uint)(iVar74 < auVar42._12_4_);
        auVar87._4_4_ = auVar70._0_4_;
        auVar87._0_4_ = auVar70._0_4_;
        auVar87._8_4_ = auVar70._8_4_;
        auVar87._12_4_ = auVar70._8_4_;
        iVar31 = -(uint)(auVar42._4_4_ == iVar53);
        iVar53 = -(uint)(auVar42._12_4_ == iVar74);
        auVar72._4_4_ = iVar31;
        auVar72._0_4_ = iVar31;
        auVar72._8_4_ = iVar53;
        auVar72._12_4_ = iVar53;
        auVar50._4_4_ = auVar70._4_4_;
        auVar50._0_4_ = auVar70._4_4_;
        auVar50._8_4_ = auVar70._12_4_;
        auVar50._12_4_ = auVar70._12_4_;
        auVar50 = auVar72 & auVar87 | auVar50;
        auVar42 = packssdw(auVar50,auVar50);
        auVar14._8_4_ = 0xffffffff;
        auVar14._0_8_ = 0xffffffffffffffff;
        auVar14._12_4_ = 0xffffffff;
        auVar42 = packssdw(auVar42 ^ auVar14,auVar42 ^ auVar14);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[0xe] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x22c0 + lVar35) = 0;
        }
        auVar42 = pshufhw(auVar42,auVar87,0x84);
        in_XMM11 = pshufhw(auVar70,auVar72,0x84);
        in_XMM11 = in_XMM11 & auVar42;
        auVar28._4_4_ = auVar70._4_4_;
        auVar28._0_4_ = auVar70._4_4_;
        auVar28._8_4_ = auVar70._12_4_;
        auVar28._12_4_ = auVar70._12_4_;
        auVar42 = pshufhw(auVar42,auVar28,0x84);
        auVar51._8_4_ = 0xffffffff;
        auVar51._0_8_ = 0xffffffffffffffff;
        auVar51._12_4_ = 0xffffffff;
        auVar51 = (auVar42 | in_XMM11) ^ auVar51;
        auVar42 = packssdw(auVar51,auVar51);
        auVar42 = packsswb(auVar42,auVar42);
        if ((auVar42[0xf] & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x2310 + lVar35) = 0;
        }
        auVar42 = pmovsxbq(auVar42,_DAT_100700cba);
        lVar40 = auVar42._0_8_;
        lVar55 = auVar62._8_8_;
        auVar62._0_8_ = auVar62._0_8_ + lVar40;
        lVar52 = auVar42._8_8_;
        auVar62._8_8_ = lVar55 + lVar52;
        lVar55 = auVar61._8_8_;
        auVar61._0_8_ = auVar61._0_8_ + lVar40;
        auVar61._8_8_ = lVar55 + lVar52;
        lVar55 = auVar60._8_8_;
        auVar60._0_8_ = auVar60._0_8_ + lVar40;
        auVar60._8_8_ = lVar55 + lVar52;
        lVar55 = auVar59._8_8_;
        auVar59._0_8_ = auVar59._0_8_ + lVar40;
        auVar59._8_8_ = lVar55 + lVar52;
        lVar55 = auVar58._8_8_;
        auVar58._0_8_ = auVar58._0_8_ + lVar40;
        auVar58._8_8_ = lVar55 + lVar52;
        lVar55 = auVar57._8_8_;
        auVar57._0_8_ = auVar57._0_8_ + lVar40;
        auVar57._8_8_ = lVar55 + lVar52;
        lVar55 = auVar56._8_8_;
        auVar56._0_8_ = auVar56._0_8_ + lVar40;
        auVar56._8_8_ = lVar55 + lVar52;
        lVar55 = auVar54._8_8_;
        auVar54._0_8_ = auVar54._0_8_ + lVar40;
        auVar54._8_8_ = lVar55 + lVar52;
        lVar35 = lVar35 + 0x500;
      } while ((ulong)((uint)bVar2 * 0x10 + 0xf0 & 0x1f00) * 5 != lVar35);
    }
  }
  **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 1;
  iVar31 = *(int *)(param_1 + 0x28);
  uVar32 = iVar31 + 1;
  *(uint *)(param_1 + 0x28) = uVar32;
  if (uVar32 < 0x20) {
    uVar32 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar32 * 2;
  }
  else if (uVar32 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar32 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar32;
    uVar37 = 0;
    if (uVar32 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar37 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar32 * 4);
    }
    uVar32 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 | uVar37 << 0x18;
  }
  else {
    *(int *)(param_1 + 0x28) = iVar31 + -0x1f;
    lVar34 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar34 + 4;
    uVar32 = *(uint *)(lVar34 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar37 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
    uVar32 = uVar37 >> (-(char)iVar31 & 0x1fU) | *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar37 << ((byte)(iVar31 + -0x1f) & 0x1f);
  }
  if ((-1 < (int)uVar32) &&
     ((param_6 != '\x01' || *(char *)(*(long *)(param_1 + 0xba8) + 0x1d78) == '\0' ||
      (iVar31 = FUN_10010d152(param_1), iVar31 == 0)))) {
    iVar33 = FUN_10010ec56(param_1);
    iVar33 = (uint)(iVar33 == 0) * 2 + -2;
  }
  return iVar33;
}

