// name: FUN_10010c2ba
// address: 10010c2ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010c2ba(void)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  int *piVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  char *pcVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar29;
  undefined1 in_XMM0 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar33 [16];
  int iVar35;
  undefined1 auVar34 [16];
  int iVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar52;
  int iVar54;
  undefined1 auVar53 [16];
  undefined1 in_XMM11 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 in_XMM12 [16];
  undefined1 auVar57 [16];
  ulong uVar28;
  
  auVar9 = _DAT_100700430;
  auVar30 = pmovsxbq(in_XMM0,_DAT_100700c90);
  auVar31 = pmovsxbq(in_XMM1,_DAT_100700c92);
  auVar32 = pmovsxbq(in_XMM2,_DAT_100700c94);
  auVar33 = pmovsxbq(in_XMM3,_DAT_100700c96);
  uVar16 = 0;
LAB_10010c315:
  puVar4 = (&PTR_PTR_1008358d0)[uVar16];
  bVar1 = (&DAT_100700d0c)[uVar16];
  uVar19 = 0;
  puVar24 = (undefined8 *)((long)&DAT_100700cdc + (long)(int)(&DAT_100700cdc)[uVar16]);
LAB_10010c33b:
  lVar14 = uVar19 * 0x10;
  uVar2 = *(ushort *)(puVar4 + lVar14 + 10);
  uVar20 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> uVar20 == 0; uVar20 = uVar20 - 1) {
    }
  }
  iVar15 = (uVar20 ^ 0xffffffe0) + 0x21;
  if (uVar2 == 0) {
    iVar15 = 0;
  }
  uVar3 = *(undefined2 *)(puVar4 + lVar14 + 8);
  uVar20 = (int)uVar19 + iVar15;
  puVar5 = *(ushort **)(puVar4 + lVar14);
  puVar25 = puVar24;
LAB_10010c382:
  pcVar23 = (char *)*puVar25;
  uVar22 = 0x80000000;
  uVar27 = 0;
  uVar26 = 0;
  do {
    cVar10 = *pcVar23;
    if (cVar10 == '1') {
      uVar27 = uVar27 + uVar22;
    }
    else if (cVar10 == '\0') break;
    uVar26 = uVar26 + (cVar10 != ' ');
    uVar22 = uVar22 >> (cVar10 != ' ');
    pcVar23 = pcVar23 + 1;
  } while( true );
  uVar22 = (uint)*(short *)(puVar25 + 1);
  switch(uVar16 & 0xffffffff) {
  case 0:
  case 1:
  case 2:
  case 3:
    uVar13 = (uVar22 % 0x1b) % 9;
    uVar22 = uVar13 / 3 << 2 | (uVar22 % 0x1b) / 9 << 4 | uVar22 / 0x1b << 6 | uVar13 % 3;
    break;
  case 4:
  case 5:
    uVar22 = uVar22 / 9 << 5 | uVar22 % 9;
    break;
  case 6:
  case 7:
    uVar22 = (uVar22 & 7) + (uVar22 & 0xfffffff8) * 4;
    break;
  case 8:
  case 9:
    uVar13 = uVar22 % 0xd;
    uVar22 = uVar22 / 0xd << 5;
    goto LAB_10010c4c2;
  case 10:
    uVar13 = (uint)(uVar22 % 0x11 == 0x10 || uVar22 - 0x110 < 0x11) << 10;
    uVar22 = uVar22 / 0x11 << 5 | uVar22 % 0x11;
LAB_10010c4c2:
    uVar22 = uVar22 | uVar13;
  }
  if ((long)uVar19 < (long)((ulong)bVar1 - 1)) {
    if (uVar27 == 0) {
      uVar13 = 0x20;
    }
    else {
      uVar13 = 0x1f;
      if (uVar27 != 0) {
        for (; uVar27 >> uVar13 == 0; uVar13 = uVar13 - 1) {
        }
      }
      uVar13 = uVar13 ^ 0x1f;
    }
    if (uVar19 != uVar13) goto LAB_10010c7dd;
    iVar15 = 1 << ((char)uVar20 - (char)uVar26 & 0x1fU);
    if (uVar20 < uVar26) {
      iVar15 = 0;
    }
    puVar25 = puVar25 + 2;
    uVar27 = (uVar27 >> ((byte)uVar3 & 0x1f)) - (uint)uVar2;
    uVar28 = (ulong)uVar27;
    if (uVar27 < iVar15 + uVar27) {
      uVar21 = (ushort)(uVar22 << 5) | (ushort)uVar26;
      lVar17 = (iVar15 + uVar27) - uVar28;
      lVar18 = lVar17 + -1;
      auVar34._8_4_ = (int)lVar18;
      auVar34._0_8_ = lVar18;
      auVar34._12_4_ = (int)((ulong)lVar18 >> 0x20);
      auVar34 = auVar34 ^ auVar9;
      uVar29 = 0;
      do {
        auVar46._8_4_ = (int)uVar29;
        auVar46._0_8_ = uVar29;
        auVar46._12_4_ = (int)(uVar29 >> 0x20);
        auVar38 = (auVar46 | auVar33) ^ auVar9;
        iVar15 = auVar34._0_4_;
        iVar52 = -(uint)(iVar15 < auVar38._0_4_);
        iVar35 = auVar34._4_4_;
        auVar39._4_4_ = -(uint)(iVar35 < auVar38._4_4_);
        iVar51 = auVar34._8_4_;
        iVar54 = -(uint)(iVar51 < auVar38._8_4_);
        iVar36 = auVar34._12_4_;
        auVar39._12_4_ = -(uint)(iVar36 < auVar38._12_4_);
        auVar48._4_4_ = iVar52;
        auVar48._0_4_ = iVar52;
        auVar48._8_4_ = iVar54;
        auVar48._12_4_ = iVar54;
        auVar55 = pshuflw(in_XMM11,auVar48,0xe8);
        auVar41._4_4_ = -(uint)(auVar38._4_4_ == iVar35);
        auVar41._12_4_ = -(uint)(auVar38._12_4_ == iVar36);
        auVar41._0_4_ = auVar41._4_4_;
        auVar41._8_4_ = auVar41._12_4_;
        auVar57 = pshuflw(in_XMM12,auVar41,0xe8);
        auVar39._0_4_ = auVar39._4_4_;
        auVar39._8_4_ = auVar39._12_4_;
        auVar56 = pshuflw(auVar55,auVar39,0xe8);
        auVar38._8_4_ = 0xffffffff;
        auVar38._0_8_ = 0xffffffffffffffff;
        auVar38._12_4_ = 0xffffffff;
        auVar38 = (auVar56 | auVar57 & auVar55) ^ auVar38;
        auVar38 = packssdw(auVar38,auVar38);
        if ((auVar38._0_4_ & 1) != 0) {
          puVar5[uVar28 + uVar29] = uVar21;
        }
        auVar39 = auVar41 & auVar48 | auVar39;
        auVar38 = packssdw(auVar39,auVar39);
        auVar56._8_4_ = 0xffffffff;
        auVar56._0_8_ = 0xffffffffffffffff;
        auVar56._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar56,auVar38 ^ auVar56);
        if ((auVar38[2] & 1) != 0) {
          puVar5[uVar28 + uVar29 + 1] = uVar21;
        }
        auVar38 = (auVar46 | auVar32) ^ auVar9;
        iVar52 = -(uint)(iVar15 < auVar38._0_4_);
        auVar53._4_4_ = -(uint)(iVar35 < auVar38._4_4_);
        iVar54 = -(uint)(iVar51 < auVar38._8_4_);
        auVar53._12_4_ = -(uint)(iVar36 < auVar38._12_4_);
        auVar40._4_4_ = iVar52;
        auVar40._0_4_ = iVar52;
        auVar40._8_4_ = iVar54;
        auVar40._12_4_ = iVar54;
        auVar47._4_4_ = -(uint)(auVar38._4_4_ == iVar35);
        auVar47._12_4_ = -(uint)(auVar38._12_4_ == iVar36);
        auVar47._0_4_ = auVar47._4_4_;
        auVar47._8_4_ = auVar47._12_4_;
        auVar53._0_4_ = auVar53._4_4_;
        auVar53._8_4_ = auVar53._12_4_;
        auVar38 = auVar47 & auVar40 | auVar53;
        auVar38 = packssdw(auVar38,auVar38);
        auVar6._8_4_ = 0xffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar6._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar6,auVar38 ^ auVar6);
        if ((auVar38[4] & 1) != 0) {
          puVar5[uVar28 + uVar29 + 2] = uVar21;
        }
        auVar41 = pshufhw(auVar40,auVar40,0x84);
        auVar48 = pshufhw(auVar47,auVar47,0x84);
        auVar39 = pshufhw(auVar41,auVar53,0x84);
        auVar42._8_4_ = 0xffffffff;
        auVar42._0_8_ = 0xffffffffffffffff;
        auVar42._12_4_ = 0xffffffff;
        auVar42 = (auVar39 | auVar48 & auVar41) ^ auVar42;
        auVar41 = packssdw(auVar42,auVar42);
        if ((auVar41[6] & 1) != 0) {
          puVar5[uVar28 + uVar29 + 3] = uVar21;
        }
        auVar41 = (auVar46 | auVar31) ^ auVar9;
        iVar52 = -(uint)(iVar15 < auVar41._0_4_);
        auVar44._4_4_ = -(uint)(iVar35 < auVar41._4_4_);
        iVar54 = -(uint)(iVar51 < auVar41._8_4_);
        auVar44._12_4_ = -(uint)(iVar36 < auVar41._12_4_);
        auVar49._4_4_ = iVar52;
        auVar49._0_4_ = iVar52;
        auVar49._8_4_ = iVar54;
        auVar49._12_4_ = iVar54;
        auVar38 = pshuflw(auVar38,auVar49,0xe8);
        auVar43._4_4_ = -(uint)(auVar41._4_4_ == iVar35);
        auVar43._12_4_ = -(uint)(auVar41._12_4_ == iVar36);
        auVar43._0_4_ = auVar43._4_4_;
        auVar43._8_4_ = auVar43._12_4_;
        auVar41 = pshuflw(auVar57 & auVar55,auVar43,0xe8);
        in_XMM12 = auVar41 & auVar38;
        auVar44._0_4_ = auVar44._4_4_;
        auVar44._8_4_ = auVar44._12_4_;
        auVar38 = pshuflw(auVar38,auVar44,0xe8);
        auVar55._8_4_ = 0xffffffff;
        auVar55._0_8_ = 0xffffffffffffffff;
        auVar55._12_4_ = 0xffffffff;
        auVar55 = (auVar38 | in_XMM12) ^ auVar55;
        in_XMM11 = packssdw(auVar55,auVar55);
        if ((in_XMM11[8] & 1) != 0) {
          puVar5[uVar28 + uVar29 + 4] = uVar21;
        }
        auVar44 = auVar43 & auVar49 | auVar44;
        auVar38 = packssdw(auVar44,auVar44);
        auVar57._8_4_ = 0xffffffff;
        auVar57._0_8_ = 0xffffffffffffffff;
        auVar57._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar57,auVar38 ^ auVar57);
        if ((auVar38[10] & 1) != 0) {
          puVar5[uVar28 + uVar29 + 5] = uVar21;
        }
        auVar38 = (auVar46 | auVar30) ^ auVar9;
        iVar15 = -(uint)(iVar15 < auVar38._0_4_);
        auVar50._4_4_ = -(uint)(iVar35 < auVar38._4_4_);
        iVar51 = -(uint)(iVar51 < auVar38._8_4_);
        auVar50._12_4_ = -(uint)(iVar36 < auVar38._12_4_);
        auVar45._4_4_ = iVar15;
        auVar45._0_4_ = iVar15;
        auVar45._8_4_ = iVar51;
        auVar45._12_4_ = iVar51;
        auVar37._4_4_ = -(uint)(auVar38._4_4_ == iVar35);
        auVar37._12_4_ = -(uint)(auVar38._12_4_ == iVar36);
        auVar37._0_4_ = auVar37._4_4_;
        auVar37._8_4_ = auVar37._12_4_;
        auVar50._0_4_ = auVar50._4_4_;
        auVar50._8_4_ = auVar50._12_4_;
        auVar38 = auVar37 & auVar45 | auVar50;
        auVar38 = packssdw(auVar38,auVar38);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 ^ auVar7,auVar38 ^ auVar7);
        if ((auVar38[0xc] & 1) != 0) {
          puVar5[uVar28 + uVar29 + 6] = uVar21;
        }
        auVar46 = pshufhw(auVar45,auVar45,0x84);
        auVar38 = pshufhw(auVar37,auVar37,0x84);
        auVar41 = pshufhw(auVar46,auVar50,0x84);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar38 = packssdw(auVar38 & auVar46,(auVar41 | auVar38 & auVar46) ^ auVar8);
        if ((auVar38[0xe] & 1) != 0) {
          puVar5[uVar28 + uVar29 + 7] = uVar21;
        }
        uVar29 = uVar29 + 8;
      } while ((lVar17 + 7U & 0xfffffffffffffff8) != uVar29);
    }
    goto LAB_10010c382;
  }
  if (uVar27 != 0) {
    uVar12 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar12,0x10);
    if (cVar10 != '\0') {
      FUN_100669ea6(uVar12);
    }
    FUN_1001782e9(0,0);
    return;
  }
  puVar25 = puVar24 + 2;
  *puVar5 = (ushort)(uVar22 << 5) | (ushort)uVar26;
LAB_10010c7dd:
  *(ulong *)(puVar4 + lVar14) = (long)puVar5 - (ulong)((uint)uVar2 * 2);
  uVar19 = uVar19 + 1;
  puVar24 = puVar25;
  if (uVar19 != (uint)bVar1 + (uint)(bVar1 == 0)) goto LAB_10010c33b;
  uVar16 = uVar16 + 1;
  if (uVar16 == 0xc) {
    piVar11 = &DAT_1008c4cc0;
    lVar14 = 0;
    do {
      *piVar11 = 1 << (-(&DAT_100700d0c)[lVar14] & 0x1f);
      lVar14 = lVar14 + 1;
      piVar11 = piVar11 + 1;
    } while (lVar14 != 0xb);
    return;
  }
  goto LAB_10010c315;
}

