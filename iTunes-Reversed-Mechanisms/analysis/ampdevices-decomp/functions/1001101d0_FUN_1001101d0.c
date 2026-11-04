// name: FUN_1001101d0
// address: 1001101d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001101d0(long param_1,ulong param_2,int param_3,undefined8 *param_4,long param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
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
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 uVar37;
  uint uVar38;
  int iVar39;
  long lVar40;
  long lVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lVar58;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar60 [16];
  long lVar61;
  undefined1 in_XMM2 [16];
  undefined1 auVar62 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar63 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar64 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar65 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar66 [16];
  undefined1 in_XMM7 [16];
  undefined1 auVar67 [16];
  undefined1 in_XMM8 [16];
  undefined1 auVar68 [16];
  undefined1 in_XMM11 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  int iVar79;
  undefined1 auVar77 [16];
  int iVar80;
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  int iVar94;
  int iVar98;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  
  lVar40 = (param_2 & 0xffffffff) * 0x20a0;
  *(long *)(param_1 + 0xba8) = param_1 + lVar40 + 0xbb0;
  plVar1 = (long *)(param_1 + 0xbc0 + lVar40);
  plVar1[-1] = (long)plVar1;
  uVar44 = (ulong)*(uint *)(param_5 + 0xc);
  *(uint *)((long)plVar1 + -0xc) = *(uint *)(param_5 + 0xc);
  *(short *)(plVar1 + -2) = (short)(*(uint *)(param_1 + 0x48) >> 3);
  plVar1[2] = param_1 + uVar44 * 4 + 0x19338;
  plVar1[1] = param_1 + 0x19368 + uVar44 * 4;
  *plVar1 = param_1 + 0x1ab6c + uVar44;
  *(undefined4 *)(plVar1 + 4) = 1;
  puVar2 = (undefined1 *)(param_1 + 0x1ab84 + uVar44 * 8);
  plVar1[5] = (long)puVar2;
  *puVar2 = 1;
  lVar40 = plVar1[-1];
  puVar5 = *(undefined4 **)(*(long *)(param_1 + 0x1abf0) + (ulong)**(byte **)(lVar40 + 0x10) * 8);
  uVar4 = *(undefined4 *)((long)puVar5 + 3);
  *(undefined4 *)(lVar40 + 0x18) = *puVar5;
  *(undefined4 *)(lVar40 + 0x1b) = uVar4;
  lVar40 = *(long *)(param_1 + 0xba8);
  puVar6 = *(undefined8 **)(lVar40 + 8);
  uVar45 = (ulong)*(byte *)(puVar6 + 3);
  *(int *)(param_1 + 0x1ab68) = param_3;
  puVar7 = (uint *)*param_4;
  uVar38 = *puVar7;
  uVar42 = puVar7[1];
  if (uVar42 * 8 <= uVar38) {
    return -2;
  }
  uVar43 = ((uVar42 >> 2) + 1) - (uint)((uVar42 & 3) == 0);
  *(uint *)(param_1 + 0x34) = uVar43;
  uVar42 = uVar38 >> 5;
  *(uint *)(param_1 + 0x18) = uVar42;
  if (uVar42 < uVar43) {
    *(uint **)(param_1 + 0x40) = puVar7;
    lVar41 = *(long *)(puVar7 + 2);
    *(long *)(param_1 + 0x20) = lVar41;
    *(uint *)(param_1 + 0x28) = uVar38 & 0x1f;
    puVar7 = (uint *)(lVar41 + (ulong)uVar42 * 4);
    uVar42 = *puVar7;
    *(uint *)(param_1 + 0x2c) =
         (uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 | uVar42 << 0x18) <<
         (sbyte)(uVar38 & 0x1f);
    *(uint **)(param_1 + 0x10) = puVar7;
  }
  if ((param_3 != 0) && (*(char *)(param_5 + 6) != '\0')) {
    *(undefined1 *)*puVar6 = 0;
    **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 6;
    iVar39 = *(int *)(param_1 + 0x28);
    uVar38 = iVar39 + 6;
    *(uint *)(param_1 + 0x28) = uVar38;
    if (uVar38 < 0x20) {
      *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8) =
           (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1a);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 6;
    }
    else {
      if (uVar38 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar42 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar42;
        uVar38 = 0;
        if (uVar42 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar38 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar42 * 4);
        }
        uVar38 = uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 | (uVar38 & 0xff00) << 8 | uVar38 << 0x18
        ;
        *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8) =
             (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1a);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar39 + -0x1a;
        lVar40 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar40 + 4;
        uVar38 = *(uint *)(lVar40 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar38 = uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 | (uVar38 & 0xff00) << 8 | uVar38 << 0x18
        ;
        *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8) =
             (byte)((byte)((uVar38 >> (-(char)iVar39 & 0x1fU)) >> 0x18) |
                   (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18)) >> 2;
        uVar38 = uVar38 << (*(byte *)(param_1 + 0x28) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar38;
    }
    if (*(byte *)(param_1 + 0x1dbba + uVar45) <
        *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8)) {
      return -2;
    }
    uVar37 = FUN_10010cf44(param_1);
    *(undefined1 *)(param_1 + 0x1ab78 + uVar44) = uVar37;
    lVar40 = *(long *)(param_1 + 0xba8);
  }
  **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 8;
  iVar39 = *(int *)(param_1 + 0x28);
  uVar38 = iVar39 + 8;
  *(uint *)(param_1 + 0x28) = uVar38;
  if (uVar38 < 0x20) {
    iVar39 = *(int *)(param_1 + 0x2c);
    *(char *)(lVar40 + 0x3a8) = (char)((uint)iVar39 >> 0x18);
    uVar38 = iVar39 << 8;
LAB_100110460:
    *(uint *)(param_1 + 0x2c) = uVar38;
  }
  else {
    if (uVar38 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar42 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar42;
      uVar38 = 0;
      if (uVar42 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar38 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar42 * 4);
      }
      uVar38 = uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 | (uVar38 & 0xff00) << 8 | uVar38 << 0x18;
      *(undefined1 *)(lVar40 + 0x3a8) = *(undefined1 *)(param_1 + 0x2f);
      goto LAB_100110460;
    }
    *(int *)(param_1 + 0x28) = iVar39 + -0x18;
    lVar41 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar41 + 4;
    uVar38 = *(uint *)(lVar41 + 4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar38 = uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 | (uVar38 & 0xff00) << 8 | uVar38 << 0x18;
    *(byte *)(lVar40 + 0x3a8) =
         (byte)((uVar38 >> (-(char)iVar39 & 0x1fU)) >> 0x18) |
         (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18);
    *(uint *)(param_1 + 0x2c) = uVar38 << ((byte)(iVar39 + -0x18) & 0x1f);
  }
  if (*(int *)(param_1 + 0x1ab68) == 0) {
    *(undefined1 *)**(undefined8 **)(lVar40 + 8) = 0;
    **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 6;
    iVar39 = *(int *)(param_1 + 0x28);
    uVar38 = iVar39 + 6;
    *(uint *)(param_1 + 0x28) = uVar38;
    if (uVar38 < 0x20) {
      *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8) =
           (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1a);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 6;
    }
    else {
      if (uVar38 == 0x20) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar42 = *(int *)(param_1 + 0x18) + 1;
        *(uint *)(param_1 + 0x18) = uVar42;
        uVar38 = 0;
        if (uVar42 < *(uint *)(param_1 + 0x34)) {
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
          uVar38 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar42 * 4);
        }
        uVar38 = uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 | (uVar38 & 0xff00) << 8 | uVar38 << 0x18
        ;
        *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8) =
             (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x1a);
      }
      else {
        *(int *)(param_1 + 0x28) = iVar39 + -0x1a;
        lVar40 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar40 + 4;
        uVar38 = *(uint *)(lVar40 + 4);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        uVar38 = uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 | (uVar38 & 0xff00) << 8 | uVar38 << 0x18
        ;
        *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8) =
             (byte)((byte)((uVar38 >> (-(char)iVar39 & 0x1fU)) >> 0x18) |
                   (byte)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x18)) >> 2;
        uVar38 = uVar38 << (*(byte *)(param_1 + 0x28) & 0x1f);
      }
      *(uint *)(param_1 + 0x2c) = uVar38;
    }
    if (*(byte *)(param_1 + 0x1dbba + uVar45) <
        *(byte *)**(undefined8 **)(*(long *)(param_1 + 0xba8) + 8)) {
      return -2;
    }
    *(undefined1 *)(param_1 + 0x1ab78 + uVar44) = 0;
  }
  else if ((*(char *)(param_5 + 6) == '\0') && (*(char *)(param_5 + 4) != '\0')) {
    puVar6 = *(undefined8 **)(param_1 + 3000 + (ulong)*(uint *)(param_5 + 8) * 0x20a0);
    if (puVar6 == (undefined8 *)0x0) {
      return -2;
    }
    puVar8 = *(undefined8 **)(lVar40 + 8);
    uVar32 = *puVar6;
    uVar33 = puVar6[1];
    uVar34 = puVar6[2];
    uVar35 = puVar6[3];
    in_XMM2 = *(undefined1 (*) [16])(puVar6 + 4);
    in_XMM3 = *(undefined1 (*) [16])(puVar6 + 6);
    *(undefined1 (*) [16])(puVar8 + 6) = in_XMM3;
    *(undefined1 (*) [16])(puVar8 + 4) = in_XMM2;
    puVar8[2] = uVar34;
    puVar8[3] = uVar35;
    *puVar8 = uVar32;
    puVar8[1] = uVar33;
  }
  iVar39 = FUN_10010e260(param_1,param_5 + 0x74);
  if (iVar39 != 0) {
    return -2;
  }
  FUN_10010e5da(param_1);
  auVar48._8_8_ = extraout_XMM1_Qb;
  auVar48._0_8_ = extraout_XMM1_Qa;
  lVar40 = *(long *)(param_1 + 0xba8);
  **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + 1;
  iVar39 = *(int *)(param_1 + 0x28);
  uVar38 = iVar39 + 1;
  *(uint *)(param_1 + 0x28) = uVar38;
  if (uVar38 < 0x20) {
    uVar38 = *(uint *)(param_1 + 0x2c);
    *(byte *)(lVar40 + 0x1d78) = (byte)(uVar38 >> 0x1f);
    uVar42 = uVar38 * 2;
  }
  else {
    if (uVar38 != 0x20) {
      *(int *)(param_1 + 0x28) = iVar39 + -0x1f;
      lVar41 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar41 + 4;
      uVar38 = *(uint *)(lVar41 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar42 = uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 | (uVar38 & 0xff00) << 8 | uVar38 << 0x18;
      uVar38 = uVar42 >> (-(char)iVar39 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(byte *)(lVar40 + 0x1d78) = (byte)(uVar38 >> 0x1f);
      *(uint *)(param_1 + 0x2c) = uVar42 << ((byte)(iVar39 + -0x1f) & 0x1f);
      goto LAB_1001106ab;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar42 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar42;
    uVar38 = 0;
    if (uVar42 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar38 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar42 * 4);
    }
    uVar42 = uVar38 >> 0x18 | (uVar38 & 0xff0000) >> 8 | (uVar38 & 0xff00) << 8 | uVar38 << 0x18;
    uVar38 = *(uint *)(param_1 + 0x2c);
    *(byte *)(lVar40 + 0x1d78) = (byte)(uVar38 >> 0x1f);
  }
  *(uint *)(param_1 + 0x2c) = uVar42;
LAB_1001106ab:
  if ((int)uVar38 < 0) {
    iVar39 = FUN_10010d152(param_1);
    if (iVar39 != 0) {
      return -2;
    }
  }
  else {
    lVar41 = *(long *)(lVar40 + 8);
    bVar3 = *(byte *)(lVar41 + 0x19);
    uVar4 = *(undefined4 *)(lVar41 + 0x1b);
    *(undefined4 *)(lVar40 + 0x1e10) = *(undefined4 *)(lVar41 + 0x18);
    *(undefined4 *)(lVar40 + 0x1e13) = uVar4;
    auVar36 = _DAT_100700430;
    if ((ulong)bVar3 != 0) {
      lVar41 = (ulong)bVar3 - 1;
      auVar47._8_4_ = (int)lVar41;
      auVar47._0_8_ = lVar41;
      auVar47._12_4_ = (int)((ulong)lVar41 >> 0x20);
      auVar60 = pmovsxbq(auVar48,_DAT_100700cbc);
      auVar62 = pmovsxbq(in_XMM2,_DAT_100700cbe);
      auVar63 = pmovsxbq(in_XMM3,_DAT_100700cc0);
      auVar64 = pmovsxbq(in_XMM4,_DAT_100700cc2);
      auVar65 = pmovsxbq(in_XMM5,_DAT_100700cc4);
      auVar66 = pmovsxbq(in_XMM6,_DAT_100700cc6);
      auVar67 = pmovsxbq(in_XMM7,_DAT_100700cc8);
      auVar68 = pmovsxbq(in_XMM8,_DAT_100700cca);
      lVar41 = 0;
      auVar48 = auVar47;
      do {
        auVar77 = auVar47 ^ auVar36;
        auVar81 = auVar68 ^ auVar36;
        iVar39 = auVar77._0_4_;
        iVar94 = -(uint)(iVar39 < auVar81._0_4_);
        iVar59 = auVar77._4_4_;
        auVar83._4_4_ = -(uint)(iVar59 < auVar81._4_4_);
        iVar79 = auVar77._8_4_;
        iVar98 = -(uint)(iVar79 < auVar81._8_4_);
        iVar80 = auVar77._12_4_;
        auVar83._12_4_ = -(uint)(iVar80 < auVar81._12_4_);
        auVar49._4_4_ = iVar94;
        auVar49._0_4_ = iVar94;
        auVar49._8_4_ = iVar98;
        auVar49._12_4_ = iVar98;
        auVar48 = pshuflw(auVar48,auVar49,0xe8);
        auVar82._4_4_ = -(uint)(auVar81._4_4_ == iVar59);
        auVar82._12_4_ = -(uint)(auVar81._12_4_ == iVar80);
        auVar82._0_4_ = auVar82._4_4_;
        auVar82._8_4_ = auVar82._12_4_;
        auVar81 = pshuflw(in_XMM11,auVar82,0xe8);
        auVar83._0_4_ = auVar83._4_4_;
        auVar83._8_4_ = auVar83._12_4_;
        auVar49 = pshuflw(auVar48,auVar83,0xe8);
        auVar77._8_4_ = 0xffffffff;
        auVar77._0_8_ = 0xffffffffffffffff;
        auVar77._12_4_ = 0xffffffff;
        auVar77 = (auVar49 | auVar81 & auVar48) ^ auVar77;
        auVar48 = packssdw(auVar77,auVar77);
        if ((auVar48._0_4_ & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x1e60 + lVar41) = 0;
        }
        auVar18._4_4_ = iVar94;
        auVar18._0_4_ = iVar94;
        auVar18._8_4_ = iVar98;
        auVar18._12_4_ = iVar98;
        auVar83 = auVar82 & auVar18 | auVar83;
        auVar48 = packssdw(auVar83,auVar83);
        auVar81._8_4_ = 0xffffffff;
        auVar81._0_8_ = 0xffffffffffffffff;
        auVar81._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar81,auVar48 ^ auVar81);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[1] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x1eb0 + lVar41) = 0;
        }
        auVar48 = auVar67 ^ auVar36;
        auVar69._0_4_ = -(uint)(iVar39 < auVar48._0_4_);
        auVar69._4_4_ = -(uint)(iVar59 < auVar48._4_4_);
        auVar69._8_4_ = -(uint)(iVar79 < auVar48._8_4_);
        auVar69._12_4_ = -(uint)(iVar80 < auVar48._12_4_);
        auVar84._4_4_ = auVar69._0_4_;
        auVar84._0_4_ = auVar69._0_4_;
        auVar84._8_4_ = auVar69._8_4_;
        auVar84._12_4_ = auVar69._8_4_;
        iVar94 = -(uint)(auVar48._4_4_ == iVar59);
        iVar98 = -(uint)(auVar48._12_4_ == iVar80);
        auVar19._4_4_ = iVar94;
        auVar19._0_4_ = iVar94;
        auVar19._8_4_ = iVar98;
        auVar19._12_4_ = iVar98;
        auVar95._4_4_ = auVar69._4_4_;
        auVar95._0_4_ = auVar69._4_4_;
        auVar95._8_4_ = auVar69._12_4_;
        auVar95._12_4_ = auVar69._12_4_;
        auVar48 = auVar19 & auVar84 | auVar95;
        auVar48 = packssdw(auVar48,auVar48);
        auVar9._8_4_ = 0xffffffff;
        auVar9._0_8_ = 0xffffffffffffffff;
        auVar9._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar9,auVar48 ^ auVar9);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[2] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x1f00 + lVar41) = 0;
        }
        auVar48 = pshufhw(auVar48,auVar84,0x84);
        auVar20._4_4_ = iVar94;
        auVar20._0_4_ = iVar94;
        auVar20._8_4_ = iVar98;
        auVar20._12_4_ = iVar98;
        auVar49 = pshufhw(auVar69,auVar20,0x84);
        auVar77 = pshufhw(auVar48,auVar95,0x84);
        auVar50._8_4_ = 0xffffffff;
        auVar50._0_8_ = 0xffffffffffffffff;
        auVar50._12_4_ = 0xffffffff;
        auVar50 = (auVar77 | auVar49 & auVar48) ^ auVar50;
        auVar48 = packssdw(auVar50,auVar50);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[3] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x1f50 + lVar41) = 0;
        }
        auVar48 = auVar66 ^ auVar36;
        auVar70._0_4_ = -(uint)(iVar39 < auVar48._0_4_);
        auVar70._4_4_ = -(uint)(iVar59 < auVar48._4_4_);
        auVar70._8_4_ = -(uint)(iVar79 < auVar48._8_4_);
        auVar70._12_4_ = -(uint)(iVar80 < auVar48._12_4_);
        auVar21._4_4_ = auVar70._0_4_;
        auVar21._0_4_ = auVar70._0_4_;
        auVar21._8_4_ = auVar70._8_4_;
        auVar21._12_4_ = auVar70._8_4_;
        auVar49 = pshuflw(auVar95,auVar21,0xe8);
        auVar51._0_4_ = -(uint)(auVar48._0_4_ == iVar39);
        auVar51._4_4_ = -(uint)(auVar48._4_4_ == iVar59);
        auVar51._8_4_ = -(uint)(auVar48._8_4_ == iVar79);
        auVar51._12_4_ = -(uint)(auVar48._12_4_ == iVar80);
        auVar85._4_4_ = auVar51._4_4_;
        auVar85._0_4_ = auVar51._4_4_;
        auVar85._8_4_ = auVar51._12_4_;
        auVar85._12_4_ = auVar51._12_4_;
        auVar48 = pshuflw(auVar51,auVar85,0xe8);
        auVar86._4_4_ = auVar70._4_4_;
        auVar86._0_4_ = auVar70._4_4_;
        auVar86._8_4_ = auVar70._12_4_;
        auVar86._12_4_ = auVar70._12_4_;
        auVar77 = pshuflw(auVar70,auVar86,0xe8);
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 & auVar49,(auVar77 | auVar48 & auVar49) ^ auVar10);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[4] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x1fa0 + lVar41) = 0;
        }
        auVar22._4_4_ = auVar70._0_4_;
        auVar22._0_4_ = auVar70._0_4_;
        auVar22._8_4_ = auVar70._8_4_;
        auVar22._12_4_ = auVar70._8_4_;
        auVar86 = auVar85 & auVar22 | auVar86;
        auVar77 = packssdw(auVar86,auVar86);
        auVar11._8_4_ = 0xffffffff;
        auVar11._0_8_ = 0xffffffffffffffff;
        auVar11._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48,auVar77 ^ auVar11);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[5] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x1ff0 + lVar41) = 0;
        }
        auVar48 = auVar65 ^ auVar36;
        auVar71._0_4_ = -(uint)(iVar39 < auVar48._0_4_);
        auVar71._4_4_ = -(uint)(iVar59 < auVar48._4_4_);
        auVar71._8_4_ = -(uint)(iVar79 < auVar48._8_4_);
        auVar71._12_4_ = -(uint)(iVar80 < auVar48._12_4_);
        auVar87._4_4_ = auVar71._0_4_;
        auVar87._0_4_ = auVar71._0_4_;
        auVar87._8_4_ = auVar71._8_4_;
        auVar87._12_4_ = auVar71._8_4_;
        iVar94 = -(uint)(auVar48._4_4_ == iVar59);
        iVar98 = -(uint)(auVar48._12_4_ == iVar80);
        auVar23._4_4_ = iVar94;
        auVar23._0_4_ = iVar94;
        auVar23._8_4_ = iVar98;
        auVar23._12_4_ = iVar98;
        auVar96._4_4_ = auVar71._4_4_;
        auVar96._0_4_ = auVar71._4_4_;
        auVar96._8_4_ = auVar71._12_4_;
        auVar96._12_4_ = auVar71._12_4_;
        auVar48 = auVar23 & auVar87 | auVar96;
        auVar48 = packssdw(auVar48,auVar48);
        auVar12._8_4_ = 0xffffffff;
        auVar12._0_8_ = 0xffffffffffffffff;
        auVar12._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar12,auVar48 ^ auVar12);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[6] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x2040 + lVar41) = 0;
        }
        auVar48 = pshufhw(auVar48,auVar87,0x84);
        auVar24._4_4_ = iVar94;
        auVar24._0_4_ = iVar94;
        auVar24._8_4_ = iVar98;
        auVar24._12_4_ = iVar98;
        auVar49 = pshufhw(auVar71,auVar24,0x84);
        auVar77 = pshufhw(auVar48,auVar96,0x84);
        auVar52._8_4_ = 0xffffffff;
        auVar52._0_8_ = 0xffffffffffffffff;
        auVar52._12_4_ = 0xffffffff;
        auVar52 = (auVar77 | auVar49 & auVar48) ^ auVar52;
        auVar48 = packssdw(auVar52,auVar52);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[7] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x2090 + lVar41) = 0;
        }
        auVar48 = auVar64 ^ auVar36;
        auVar72._0_4_ = -(uint)(iVar39 < auVar48._0_4_);
        auVar72._4_4_ = -(uint)(iVar59 < auVar48._4_4_);
        auVar72._8_4_ = -(uint)(iVar79 < auVar48._8_4_);
        auVar72._12_4_ = -(uint)(iVar80 < auVar48._12_4_);
        auVar25._4_4_ = auVar72._0_4_;
        auVar25._0_4_ = auVar72._0_4_;
        auVar25._8_4_ = auVar72._8_4_;
        auVar25._12_4_ = auVar72._8_4_;
        auVar49 = pshuflw(auVar96,auVar25,0xe8);
        auVar53._0_4_ = -(uint)(auVar48._0_4_ == iVar39);
        auVar53._4_4_ = -(uint)(auVar48._4_4_ == iVar59);
        auVar53._8_4_ = -(uint)(auVar48._8_4_ == iVar79);
        auVar53._12_4_ = -(uint)(auVar48._12_4_ == iVar80);
        auVar88._4_4_ = auVar53._4_4_;
        auVar88._0_4_ = auVar53._4_4_;
        auVar88._8_4_ = auVar53._12_4_;
        auVar88._12_4_ = auVar53._12_4_;
        auVar48 = pshuflw(auVar53,auVar88,0xe8);
        auVar89._4_4_ = auVar72._4_4_;
        auVar89._0_4_ = auVar72._4_4_;
        auVar89._8_4_ = auVar72._12_4_;
        auVar89._12_4_ = auVar72._12_4_;
        auVar77 = pshuflw(auVar72,auVar89,0xe8);
        auVar73._8_4_ = 0xffffffff;
        auVar73._0_8_ = 0xffffffffffffffff;
        auVar73._12_4_ = 0xffffffff;
        auVar73 = (auVar77 | auVar48 & auVar49) ^ auVar73;
        auVar77 = packssdw(auVar73,auVar73);
        auVar48 = packsswb(auVar48 & auVar49,auVar77);
        if ((auVar48[8] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x20e0 + lVar41) = 0;
        }
        auVar26._4_4_ = auVar72._0_4_;
        auVar26._0_4_ = auVar72._0_4_;
        auVar26._8_4_ = auVar72._8_4_;
        auVar26._12_4_ = auVar72._8_4_;
        auVar89 = auVar88 & auVar26 | auVar89;
        auVar77 = packssdw(auVar89,auVar89);
        auVar13._8_4_ = 0xffffffff;
        auVar13._0_8_ = 0xffffffffffffffff;
        auVar13._12_4_ = 0xffffffff;
        auVar77 = packssdw(auVar77 ^ auVar13,auVar77 ^ auVar13);
        auVar48 = packsswb(auVar48,auVar77);
        if ((auVar48[9] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x2130 + lVar41) = 0;
        }
        auVar48 = auVar63 ^ auVar36;
        auVar74._0_4_ = -(uint)(iVar39 < auVar48._0_4_);
        auVar74._4_4_ = -(uint)(iVar59 < auVar48._4_4_);
        auVar74._8_4_ = -(uint)(iVar79 < auVar48._8_4_);
        auVar74._12_4_ = -(uint)(iVar80 < auVar48._12_4_);
        auVar90._4_4_ = auVar74._0_4_;
        auVar90._0_4_ = auVar74._0_4_;
        auVar90._8_4_ = auVar74._8_4_;
        auVar90._12_4_ = auVar74._8_4_;
        iVar94 = -(uint)(auVar48._4_4_ == iVar59);
        iVar98 = -(uint)(auVar48._12_4_ == iVar80);
        auVar27._4_4_ = iVar94;
        auVar27._0_4_ = iVar94;
        auVar27._8_4_ = iVar98;
        auVar27._12_4_ = iVar98;
        auVar97._4_4_ = auVar74._4_4_;
        auVar97._0_4_ = auVar74._4_4_;
        auVar97._8_4_ = auVar74._12_4_;
        auVar97._12_4_ = auVar74._12_4_;
        auVar48 = auVar27 & auVar90 | auVar97;
        auVar48 = packssdw(auVar48,auVar48);
        auVar14._8_4_ = 0xffffffff;
        auVar14._0_8_ = 0xffffffffffffffff;
        auVar14._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar14,auVar48 ^ auVar14);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[10] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x2180 + lVar41) = 0;
        }
        auVar48 = pshufhw(auVar48,auVar90,0x84);
        auVar28._4_4_ = iVar94;
        auVar28._0_4_ = iVar94;
        auVar28._8_4_ = iVar98;
        auVar28._12_4_ = iVar98;
        auVar49 = pshufhw(auVar74,auVar28,0x84);
        auVar77 = pshufhw(auVar48,auVar97,0x84);
        auVar54._8_4_ = 0xffffffff;
        auVar54._0_8_ = 0xffffffffffffffff;
        auVar54._12_4_ = 0xffffffff;
        auVar54 = (auVar77 | auVar49 & auVar48) ^ auVar54;
        auVar48 = packssdw(auVar54,auVar54);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xb] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x21d0 + lVar41) = 0;
        }
        auVar48 = auVar62 ^ auVar36;
        auVar75._0_4_ = -(uint)(iVar39 < auVar48._0_4_);
        auVar75._4_4_ = -(uint)(iVar59 < auVar48._4_4_);
        auVar75._8_4_ = -(uint)(iVar79 < auVar48._8_4_);
        auVar75._12_4_ = -(uint)(iVar80 < auVar48._12_4_);
        auVar29._4_4_ = auVar75._0_4_;
        auVar29._0_4_ = auVar75._0_4_;
        auVar29._8_4_ = auVar75._8_4_;
        auVar29._12_4_ = auVar75._8_4_;
        auVar49 = pshuflw(auVar97,auVar29,0xe8);
        auVar55._0_4_ = -(uint)(auVar48._0_4_ == iVar39);
        auVar55._4_4_ = -(uint)(auVar48._4_4_ == iVar59);
        auVar55._8_4_ = -(uint)(auVar48._8_4_ == iVar79);
        auVar55._12_4_ = -(uint)(auVar48._12_4_ == iVar80);
        auVar91._4_4_ = auVar55._4_4_;
        auVar91._0_4_ = auVar55._4_4_;
        auVar91._8_4_ = auVar55._12_4_;
        auVar91._12_4_ = auVar55._12_4_;
        auVar48 = pshuflw(auVar55,auVar91,0xe8);
        auVar92._4_4_ = auVar75._4_4_;
        auVar92._0_4_ = auVar75._4_4_;
        auVar92._8_4_ = auVar75._12_4_;
        auVar92._12_4_ = auVar75._12_4_;
        auVar77 = pshuflw(auVar75,auVar92,0xe8);
        auVar15._8_4_ = 0xffffffff;
        auVar15._0_8_ = 0xffffffffffffffff;
        auVar15._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 & auVar49,(auVar77 | auVar48 & auVar49) ^ auVar15);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xc] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x2220 + lVar41) = 0;
        }
        auVar30._4_4_ = auVar75._0_4_;
        auVar30._0_4_ = auVar75._0_4_;
        auVar30._8_4_ = auVar75._8_4_;
        auVar30._12_4_ = auVar75._8_4_;
        auVar92 = auVar91 & auVar30 | auVar92;
        auVar77 = packssdw(auVar92,auVar92);
        auVar16._8_4_ = 0xffffffff;
        auVar16._0_8_ = 0xffffffffffffffff;
        auVar16._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48,auVar77 ^ auVar16);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xd] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x2270 + lVar41) = 0;
        }
        auVar48 = auVar60 ^ auVar36;
        auVar76._0_4_ = -(uint)(iVar39 < auVar48._0_4_);
        auVar76._4_4_ = -(uint)(iVar59 < auVar48._4_4_);
        auVar76._8_4_ = -(uint)(iVar79 < auVar48._8_4_);
        auVar76._12_4_ = -(uint)(iVar80 < auVar48._12_4_);
        auVar93._4_4_ = auVar76._0_4_;
        auVar93._0_4_ = auVar76._0_4_;
        auVar93._8_4_ = auVar76._8_4_;
        auVar93._12_4_ = auVar76._8_4_;
        iVar39 = -(uint)(auVar48._4_4_ == iVar59);
        iVar59 = -(uint)(auVar48._12_4_ == iVar80);
        auVar78._4_4_ = iVar39;
        auVar78._0_4_ = iVar39;
        auVar78._8_4_ = iVar59;
        auVar78._12_4_ = iVar59;
        auVar56._4_4_ = auVar76._4_4_;
        auVar56._0_4_ = auVar76._4_4_;
        auVar56._8_4_ = auVar76._12_4_;
        auVar56._12_4_ = auVar76._12_4_;
        auVar56 = auVar78 & auVar93 | auVar56;
        auVar48 = packssdw(auVar56,auVar56);
        auVar17._8_4_ = 0xffffffff;
        auVar17._0_8_ = 0xffffffffffffffff;
        auVar17._12_4_ = 0xffffffff;
        auVar48 = packssdw(auVar48 ^ auVar17,auVar48 ^ auVar17);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xe] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x22c0 + lVar41) = 0;
        }
        auVar48 = pshufhw(auVar48,auVar93,0x84);
        in_XMM11 = pshufhw(auVar76,auVar78,0x84);
        in_XMM11 = in_XMM11 & auVar48;
        auVar31._4_4_ = auVar76._4_4_;
        auVar31._0_4_ = auVar76._4_4_;
        auVar31._8_4_ = auVar76._12_4_;
        auVar31._12_4_ = auVar76._12_4_;
        auVar48 = pshufhw(auVar48,auVar31,0x84);
        auVar57._8_4_ = 0xffffffff;
        auVar57._0_8_ = 0xffffffffffffffff;
        auVar57._12_4_ = 0xffffffff;
        auVar57 = (auVar48 | in_XMM11) ^ auVar57;
        auVar48 = packssdw(auVar57,auVar57);
        auVar48 = packsswb(auVar48,auVar48);
        if ((auVar48[0xf] & 1) != 0) {
          *(undefined1 *)(lVar40 + 0x2310 + lVar41) = 0;
        }
        auVar48 = pmovsxbq(auVar48,_DAT_100700ccc);
        lVar46 = auVar48._0_8_;
        lVar61 = auVar68._8_8_;
        auVar68._0_8_ = auVar68._0_8_ + lVar46;
        lVar58 = auVar48._8_8_;
        auVar68._8_8_ = lVar61 + lVar58;
        lVar61 = auVar67._8_8_;
        auVar67._0_8_ = auVar67._0_8_ + lVar46;
        auVar67._8_8_ = lVar61 + lVar58;
        lVar61 = auVar66._8_8_;
        auVar66._0_8_ = auVar66._0_8_ + lVar46;
        auVar66._8_8_ = lVar61 + lVar58;
        lVar61 = auVar65._8_8_;
        auVar65._0_8_ = auVar65._0_8_ + lVar46;
        auVar65._8_8_ = lVar61 + lVar58;
        lVar61 = auVar64._8_8_;
        auVar64._0_8_ = auVar64._0_8_ + lVar46;
        auVar64._8_8_ = lVar61 + lVar58;
        lVar61 = auVar63._8_8_;
        auVar63._0_8_ = auVar63._0_8_ + lVar46;
        auVar63._8_8_ = lVar61 + lVar58;
        lVar61 = auVar62._8_8_;
        auVar62._0_8_ = auVar62._0_8_ + lVar46;
        auVar62._8_8_ = lVar61 + lVar58;
        lVar61 = auVar60._8_8_;
        auVar60._0_8_ = auVar60._0_8_ + lVar46;
        auVar60._8_8_ = lVar61 + lVar58;
        lVar41 = lVar41 + 0x500;
      } while ((ulong)((uint)bVar3 * 0x10 + 0xf0 & 0x1f00) * 5 != lVar41);
    }
  }
  iVar39 = FUN_10010ec56(param_1);
  return (uint)(iVar39 == 0) * 2 + -2;
}

