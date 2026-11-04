// name: FUN_1001cfa79
// address: 1001cfa79

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001cfa79(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  char cVar24;
  int iVar25;
  uint uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  undefined1 *puVar30;
  ulong uVar31;
  int *piVar32;
  undefined8 *puVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar53 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar54 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar55 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar56 [16];
  undefined1 in_XMM7 [16];
  undefined1 auVar57 [16];
  undefined1 in_XMM8 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar63;
  int iVar64;
  undefined1 auVar61 [16];
  int iVar65;
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  int iVar79;
  int iVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  uint local_3c;
  undefined8 local_38;
  
  iVar25 = FUN_1001cf1e5();
  if (iVar25 == 0) {
    iVar25 = FUN_1001cf1e5(param_2);
    auVar23 = _DAT_100700430;
    auVar36._8_8_ = extraout_XMM1_Qb;
    auVar36._0_8_ = extraout_XMM1_Qa;
    if (iVar25 == 0) {
      if ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
         (uVar28 = (ulong)*(uint *)(param_1 + 0x10),
         *(uint *)(param_1 + 0x10) == *(uint *)(param_2 + 0x10))) {
        if (uVar28 == 0) {
          return 1;
        }
        lVar29 = uVar28 - 1;
        puVar30 = (undefined1 *)(*(long *)(param_2 + 0x68) + 0x1eb);
        auVar35._8_4_ = (int)lVar29;
        auVar35._0_8_ = lVar29;
        auVar35._12_4_ = (int)((ulong)lVar29 >> 0x20);
        uVar31 = 0;
        auVar53 = pmovsxbq(in_XMM3,_DAT_100711ff0);
        auVar54 = pmovsxbq(in_XMM4,_DAT_100711ff2);
        auVar55 = pmovsxbq(in_XMM5,_DAT_100711ff4);
        auVar56 = pmovsxbq(in_XMM6,_DAT_100711ff6);
        auVar57 = pmovsxbq(in_XMM7,_DAT_100711ff8);
        auVar58 = pmovsxbq(in_XMM8,_DAT_100711ffa);
        do {
          auVar59._8_4_ = (int)uVar31;
          auVar59._0_8_ = uVar31;
          auVar59._12_4_ = (int)(uVar31 >> 0x20);
          auVar61 = auVar35 ^ auVar23;
          auVar66 = (auVar59 | auVar58) ^ auVar23;
          iVar25 = auVar61._0_4_;
          iVar79 = -(uint)(iVar25 < auVar66._0_4_);
          iVar63 = auVar61._4_4_;
          auVar68._4_4_ = -(uint)(iVar63 < auVar66._4_4_);
          iVar64 = auVar61._8_4_;
          iVar83 = -(uint)(iVar64 < auVar66._8_4_);
          iVar65 = auVar61._12_4_;
          auVar68._12_4_ = -(uint)(iVar65 < auVar66._12_4_);
          auVar37._4_4_ = iVar79;
          auVar37._0_4_ = iVar79;
          auVar37._8_4_ = iVar83;
          auVar37._12_4_ = iVar83;
          auVar36 = pshuflw(auVar36,auVar37,0xe8);
          auVar67._4_4_ = -(uint)(auVar66._4_4_ == iVar63);
          auVar67._12_4_ = -(uint)(auVar66._12_4_ == iVar65);
          auVar67._0_4_ = auVar67._4_4_;
          auVar67._8_4_ = auVar67._12_4_;
          auVar66 = pshuflw(in_XMM2,auVar67,0xe8);
          auVar68._0_4_ = auVar68._4_4_;
          auVar68._8_4_ = auVar68._12_4_;
          auVar37 = pshuflw(auVar36,auVar68,0xe8);
          auVar61._8_4_ = 0xffffffff;
          auVar61._0_8_ = 0xffffffffffffffff;
          auVar61._12_4_ = 0xffffffff;
          auVar61 = (auVar37 | auVar66 & auVar36) ^ auVar61;
          auVar36 = packssdw(auVar61,auVar61);
          if ((auVar36._0_4_ & 1) != 0) {
            puVar30[-0x1e0] = 0;
          }
          auVar10._4_4_ = iVar79;
          auVar10._0_4_ = iVar79;
          auVar10._8_4_ = iVar83;
          auVar10._12_4_ = iVar83;
          auVar68 = auVar67 & auVar10 | auVar68;
          auVar36 = packssdw(auVar68,auVar68);
          auVar66._8_4_ = 0xffffffff;
          auVar66._0_8_ = 0xffffffffffffffff;
          auVar66._12_4_ = 0xffffffff;
          auVar36 = packssdw(auVar36 ^ auVar66,auVar36 ^ auVar66);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[1] & 1) != 0) {
            puVar30[-0x1c0] = 0;
          }
          auVar36 = (auVar59 | auVar57) ^ auVar23;
          auVar46._0_4_ = -(uint)(iVar25 < auVar36._0_4_);
          auVar46._4_4_ = -(uint)(iVar63 < auVar36._4_4_);
          auVar46._8_4_ = -(uint)(iVar64 < auVar36._8_4_);
          auVar46._12_4_ = -(uint)(iVar65 < auVar36._12_4_);
          auVar69._4_4_ = auVar46._0_4_;
          auVar69._0_4_ = auVar46._0_4_;
          auVar69._8_4_ = auVar46._8_4_;
          auVar69._12_4_ = auVar46._8_4_;
          iVar79 = -(uint)(auVar36._4_4_ == iVar63);
          iVar83 = -(uint)(auVar36._12_4_ == iVar65);
          auVar11._4_4_ = iVar79;
          auVar11._0_4_ = iVar79;
          auVar11._8_4_ = iVar83;
          auVar11._12_4_ = iVar83;
          auVar80._4_4_ = auVar46._4_4_;
          auVar80._0_4_ = auVar46._4_4_;
          auVar80._8_4_ = auVar46._12_4_;
          auVar80._12_4_ = auVar46._12_4_;
          auVar36 = auVar11 & auVar69 | auVar80;
          auVar36 = packssdw(auVar36,auVar36);
          auVar1._8_4_ = 0xffffffff;
          auVar1._0_8_ = 0xffffffffffffffff;
          auVar1._12_4_ = 0xffffffff;
          auVar36 = packssdw(auVar36 ^ auVar1,auVar36 ^ auVar1);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[2] & 1) != 0) {
            puVar30[-0x1a0] = 0;
          }
          auVar36 = pshufhw(auVar36,auVar69,0x84);
          auVar12._4_4_ = iVar79;
          auVar12._0_4_ = iVar79;
          auVar12._8_4_ = iVar83;
          auVar12._12_4_ = iVar83;
          auVar37 = pshufhw(auVar46,auVar12,0x84);
          auVar61 = pshufhw(auVar36,auVar80,0x84);
          auVar38._8_4_ = 0xffffffff;
          auVar38._0_8_ = 0xffffffffffffffff;
          auVar38._12_4_ = 0xffffffff;
          auVar38 = (auVar61 | auVar37 & auVar36) ^ auVar38;
          auVar36 = packssdw(auVar38,auVar38);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[3] & 1) != 0) {
            puVar30[-0x180] = 0;
          }
          auVar36 = (auVar59 | auVar56) ^ auVar23;
          auVar47._0_4_ = -(uint)(iVar25 < auVar36._0_4_);
          auVar47._4_4_ = -(uint)(iVar63 < auVar36._4_4_);
          auVar47._8_4_ = -(uint)(iVar64 < auVar36._8_4_);
          auVar47._12_4_ = -(uint)(iVar65 < auVar36._12_4_);
          auVar13._4_4_ = auVar47._0_4_;
          auVar13._0_4_ = auVar47._0_4_;
          auVar13._8_4_ = auVar47._8_4_;
          auVar13._12_4_ = auVar47._8_4_;
          auVar37 = pshuflw(auVar80,auVar13,0xe8);
          auVar39._0_4_ = -(uint)(auVar36._0_4_ == iVar25);
          auVar39._4_4_ = -(uint)(auVar36._4_4_ == iVar63);
          auVar39._8_4_ = -(uint)(auVar36._8_4_ == iVar64);
          auVar39._12_4_ = -(uint)(auVar36._12_4_ == iVar65);
          auVar70._4_4_ = auVar39._4_4_;
          auVar70._0_4_ = auVar39._4_4_;
          auVar70._8_4_ = auVar39._12_4_;
          auVar70._12_4_ = auVar39._12_4_;
          auVar36 = pshuflw(auVar39,auVar70,0xe8);
          auVar71._4_4_ = auVar47._4_4_;
          auVar71._0_4_ = auVar47._4_4_;
          auVar71._8_4_ = auVar47._12_4_;
          auVar71._12_4_ = auVar47._12_4_;
          auVar61 = pshuflw(auVar47,auVar71,0xe8);
          auVar2._8_4_ = 0xffffffff;
          auVar2._0_8_ = 0xffffffffffffffff;
          auVar2._12_4_ = 0xffffffff;
          auVar36 = packssdw(auVar36 & auVar37,(auVar61 | auVar36 & auVar37) ^ auVar2);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[4] & 1) != 0) {
            puVar30[-0x160] = 0;
          }
          auVar14._4_4_ = auVar47._0_4_;
          auVar14._0_4_ = auVar47._0_4_;
          auVar14._8_4_ = auVar47._8_4_;
          auVar14._12_4_ = auVar47._8_4_;
          auVar71 = auVar70 & auVar14 | auVar71;
          auVar61 = packssdw(auVar71,auVar71);
          auVar3._8_4_ = 0xffffffff;
          auVar3._0_8_ = 0xffffffffffffffff;
          auVar3._12_4_ = 0xffffffff;
          auVar36 = packssdw(auVar36,auVar61 ^ auVar3);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[5] & 1) != 0) {
            puVar30[-0x140] = 0;
          }
          auVar36 = (auVar59 | auVar55) ^ auVar23;
          auVar48._0_4_ = -(uint)(iVar25 < auVar36._0_4_);
          auVar48._4_4_ = -(uint)(iVar63 < auVar36._4_4_);
          auVar48._8_4_ = -(uint)(iVar64 < auVar36._8_4_);
          auVar48._12_4_ = -(uint)(iVar65 < auVar36._12_4_);
          auVar72._4_4_ = auVar48._0_4_;
          auVar72._0_4_ = auVar48._0_4_;
          auVar72._8_4_ = auVar48._8_4_;
          auVar72._12_4_ = auVar48._8_4_;
          iVar79 = -(uint)(auVar36._4_4_ == iVar63);
          iVar83 = -(uint)(auVar36._12_4_ == iVar65);
          auVar15._4_4_ = iVar79;
          auVar15._0_4_ = iVar79;
          auVar15._8_4_ = iVar83;
          auVar15._12_4_ = iVar83;
          auVar81._4_4_ = auVar48._4_4_;
          auVar81._0_4_ = auVar48._4_4_;
          auVar81._8_4_ = auVar48._12_4_;
          auVar81._12_4_ = auVar48._12_4_;
          auVar36 = auVar15 & auVar72 | auVar81;
          auVar36 = packssdw(auVar36,auVar36);
          auVar4._8_4_ = 0xffffffff;
          auVar4._0_8_ = 0xffffffffffffffff;
          auVar4._12_4_ = 0xffffffff;
          auVar36 = packssdw(auVar36 ^ auVar4,auVar36 ^ auVar4);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[6] & 1) != 0) {
            puVar30[-0x120] = 0;
          }
          auVar36 = pshufhw(auVar36,auVar72,0x84);
          auVar16._4_4_ = iVar79;
          auVar16._0_4_ = iVar79;
          auVar16._8_4_ = iVar83;
          auVar16._12_4_ = iVar83;
          auVar37 = pshufhw(auVar48,auVar16,0x84);
          auVar61 = pshufhw(auVar36,auVar81,0x84);
          auVar40._8_4_ = 0xffffffff;
          auVar40._0_8_ = 0xffffffffffffffff;
          auVar40._12_4_ = 0xffffffff;
          auVar40 = (auVar61 | auVar37 & auVar36) ^ auVar40;
          auVar36 = packssdw(auVar40,auVar40);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[7] & 1) != 0) {
            puVar30[-0x100] = 0;
          }
          auVar36 = (auVar59 | auVar54) ^ auVar23;
          auVar49._0_4_ = -(uint)(iVar25 < auVar36._0_4_);
          auVar49._4_4_ = -(uint)(iVar63 < auVar36._4_4_);
          auVar49._8_4_ = -(uint)(iVar64 < auVar36._8_4_);
          auVar49._12_4_ = -(uint)(iVar65 < auVar36._12_4_);
          auVar17._4_4_ = auVar49._0_4_;
          auVar17._0_4_ = auVar49._0_4_;
          auVar17._8_4_ = auVar49._8_4_;
          auVar17._12_4_ = auVar49._8_4_;
          auVar37 = pshuflw(auVar81,auVar17,0xe8);
          auVar41._0_4_ = -(uint)(auVar36._0_4_ == iVar25);
          auVar41._4_4_ = -(uint)(auVar36._4_4_ == iVar63);
          auVar41._8_4_ = -(uint)(auVar36._8_4_ == iVar64);
          auVar41._12_4_ = -(uint)(auVar36._12_4_ == iVar65);
          auVar73._4_4_ = auVar41._4_4_;
          auVar73._0_4_ = auVar41._4_4_;
          auVar73._8_4_ = auVar41._12_4_;
          auVar73._12_4_ = auVar41._12_4_;
          auVar36 = pshuflw(auVar41,auVar73,0xe8);
          auVar74._4_4_ = auVar49._4_4_;
          auVar74._0_4_ = auVar49._4_4_;
          auVar74._8_4_ = auVar49._12_4_;
          auVar74._12_4_ = auVar49._12_4_;
          auVar61 = pshuflw(auVar49,auVar74,0xe8);
          auVar50._8_4_ = 0xffffffff;
          auVar50._0_8_ = 0xffffffffffffffff;
          auVar50._12_4_ = 0xffffffff;
          auVar50 = (auVar61 | auVar36 & auVar37) ^ auVar50;
          auVar61 = packssdw(auVar50,auVar50);
          auVar36 = packsswb(auVar36 & auVar37,auVar61);
          if ((auVar36[8] & 1) != 0) {
            puVar30[-0xe0] = 0;
          }
          auVar18._4_4_ = auVar49._0_4_;
          auVar18._0_4_ = auVar49._0_4_;
          auVar18._8_4_ = auVar49._8_4_;
          auVar18._12_4_ = auVar49._8_4_;
          auVar74 = auVar73 & auVar18 | auVar74;
          auVar61 = packssdw(auVar74,auVar74);
          auVar5._8_4_ = 0xffffffff;
          auVar5._0_8_ = 0xffffffffffffffff;
          auVar5._12_4_ = 0xffffffff;
          auVar61 = packssdw(auVar61 ^ auVar5,auVar61 ^ auVar5);
          auVar36 = packsswb(auVar36,auVar61);
          if ((auVar36[9] & 1) != 0) {
            puVar30[-0xc0] = 0;
          }
          auVar36 = (auVar59 | auVar53) ^ auVar23;
          auVar51._0_4_ = -(uint)(iVar25 < auVar36._0_4_);
          auVar51._4_4_ = -(uint)(iVar63 < auVar36._4_4_);
          auVar51._8_4_ = -(uint)(iVar64 < auVar36._8_4_);
          auVar51._12_4_ = -(uint)(iVar65 < auVar36._12_4_);
          auVar75._4_4_ = auVar51._0_4_;
          auVar75._0_4_ = auVar51._0_4_;
          auVar75._8_4_ = auVar51._8_4_;
          auVar75._12_4_ = auVar51._8_4_;
          iVar79 = -(uint)(auVar36._4_4_ == iVar63);
          iVar83 = -(uint)(auVar36._12_4_ == iVar65);
          auVar19._4_4_ = iVar79;
          auVar19._0_4_ = iVar79;
          auVar19._8_4_ = iVar83;
          auVar19._12_4_ = iVar83;
          auVar82._4_4_ = auVar51._4_4_;
          auVar82._0_4_ = auVar51._4_4_;
          auVar82._8_4_ = auVar51._12_4_;
          auVar82._12_4_ = auVar51._12_4_;
          auVar36 = auVar19 & auVar75 | auVar82;
          auVar36 = packssdw(auVar36,auVar36);
          auVar6._8_4_ = 0xffffffff;
          auVar6._0_8_ = 0xffffffffffffffff;
          auVar6._12_4_ = 0xffffffff;
          auVar36 = packssdw(auVar36 ^ auVar6,auVar36 ^ auVar6);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[10] & 1) != 0) {
            puVar30[-0xa0] = 0;
          }
          auVar36 = pshufhw(auVar36,auVar75,0x84);
          auVar20._4_4_ = iVar79;
          auVar20._0_4_ = iVar79;
          auVar20._8_4_ = iVar83;
          auVar20._12_4_ = iVar83;
          auVar37 = pshufhw(auVar51,auVar20,0x84);
          auVar61 = pshufhw(auVar36,auVar82,0x84);
          auVar42._8_4_ = 0xffffffff;
          auVar42._0_8_ = 0xffffffffffffffff;
          auVar42._12_4_ = 0xffffffff;
          auVar42 = (auVar61 | auVar37 & auVar36) ^ auVar42;
          auVar36 = packssdw(auVar42,auVar42);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[0xb] & 1) != 0) {
            puVar30[-0x80] = 0;
          }
          auVar36 = (auVar59 | _DAT_100700c80) ^ auVar23;
          auVar52._0_4_ = -(uint)(iVar25 < auVar36._0_4_);
          auVar52._4_4_ = -(uint)(iVar63 < auVar36._4_4_);
          auVar52._8_4_ = -(uint)(iVar64 < auVar36._8_4_);
          auVar52._12_4_ = -(uint)(iVar65 < auVar36._12_4_);
          auVar21._4_4_ = auVar52._0_4_;
          auVar21._0_4_ = auVar52._0_4_;
          auVar21._8_4_ = auVar52._8_4_;
          auVar21._12_4_ = auVar52._8_4_;
          auVar37 = pshuflw(auVar82,auVar21,0xe8);
          auVar43._0_4_ = -(uint)(auVar36._0_4_ == iVar25);
          auVar43._4_4_ = -(uint)(auVar36._4_4_ == iVar63);
          auVar43._8_4_ = -(uint)(auVar36._8_4_ == iVar64);
          auVar43._12_4_ = -(uint)(auVar36._12_4_ == iVar65);
          auVar76._4_4_ = auVar43._4_4_;
          auVar76._0_4_ = auVar43._4_4_;
          auVar76._8_4_ = auVar43._12_4_;
          auVar76._12_4_ = auVar43._12_4_;
          auVar36 = pshuflw(auVar43,auVar76,0xe8);
          auVar77._4_4_ = auVar52._4_4_;
          auVar77._0_4_ = auVar52._4_4_;
          auVar77._8_4_ = auVar52._12_4_;
          auVar77._12_4_ = auVar52._12_4_;
          auVar61 = pshuflw(auVar52,auVar77,0xe8);
          auVar7._8_4_ = 0xffffffff;
          auVar7._0_8_ = 0xffffffffffffffff;
          auVar7._12_4_ = 0xffffffff;
          auVar36 = packssdw(auVar36 & auVar37,(auVar61 | auVar36 & auVar37) ^ auVar7);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[0xc] & 1) != 0) {
            puVar30[-0x60] = 0;
          }
          auVar22._4_4_ = auVar52._0_4_;
          auVar22._0_4_ = auVar52._0_4_;
          auVar22._8_4_ = auVar52._8_4_;
          auVar22._12_4_ = auVar52._8_4_;
          auVar77 = auVar76 & auVar22 | auVar77;
          auVar61 = packssdw(auVar77,auVar77);
          auVar8._8_4_ = 0xffffffff;
          auVar8._0_8_ = 0xffffffffffffffff;
          auVar8._12_4_ = 0xffffffff;
          auVar36 = packssdw(auVar36,auVar61 ^ auVar8);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[0xd] & 1) != 0) {
            puVar30[-0x40] = 0;
          }
          auVar36 = (auVar59 | _DAT_100700c70) ^ auVar23;
          auVar44._0_4_ = -(uint)(iVar25 < auVar36._0_4_);
          auVar44._4_4_ = -(uint)(iVar63 < auVar36._4_4_);
          auVar44._8_4_ = -(uint)(iVar64 < auVar36._8_4_);
          auVar44._12_4_ = -(uint)(iVar65 < auVar36._12_4_);
          auVar78._4_4_ = auVar44._0_4_;
          auVar78._0_4_ = auVar44._0_4_;
          auVar78._8_4_ = auVar44._8_4_;
          auVar78._12_4_ = auVar44._8_4_;
          auVar60._4_4_ = -(uint)(auVar36._4_4_ == iVar63);
          auVar60._12_4_ = -(uint)(auVar36._12_4_ == iVar65);
          auVar60._0_4_ = auVar60._4_4_;
          auVar60._8_4_ = auVar60._12_4_;
          auVar62._4_4_ = auVar44._4_4_;
          auVar62._0_4_ = auVar44._4_4_;
          auVar62._8_4_ = auVar44._12_4_;
          auVar62._12_4_ = auVar44._12_4_;
          auVar61 = auVar60 & auVar78 | auVar62;
          auVar36 = packssdw(auVar44,auVar61);
          auVar9._8_4_ = 0xffffffff;
          auVar9._0_8_ = 0xffffffffffffffff;
          auVar9._12_4_ = 0xffffffff;
          auVar36 = packssdw(auVar36 ^ auVar9,auVar36 ^ auVar9);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[0xe] & 1) != 0) {
            puVar30[-0x20] = 0;
          }
          auVar36 = pshufhw(auVar36,auVar78,0x84);
          in_XMM2 = pshufhw(auVar61,auVar60,0x84);
          in_XMM2 = in_XMM2 & auVar36;
          auVar36 = pshufhw(auVar36,auVar62,0x84);
          auVar45._8_4_ = 0xffffffff;
          auVar45._0_8_ = 0xffffffffffffffff;
          auVar45._12_4_ = 0xffffffff;
          auVar45 = (auVar36 | in_XMM2) ^ auVar45;
          auVar36 = packssdw(auVar45,auVar45);
          auVar36 = packsswb(auVar36,auVar36);
          if ((auVar36[0xf] & 1) != 0) {
            *puVar30 = 0;
          }
          uVar31 = uVar31 + 0x10;
          puVar30 = puVar30 + 0x200;
        } while ((uVar28 + 0xf & 0xfffffffffffffff0) != uVar31);
        piVar32 = *(int **)(param_1 + 0x68);
        local_50 = param_1 + 0x18;
        local_48 = param_2 + 0x18;
        local_3c = 0;
LAB_1001d008f:
        uVar26 = *(uint *)(param_2 + 0x10);
        uVar34 = 0;
        if (uVar26 != 0) {
          puVar33 = (undefined8 *)(*(long *)(param_2 + 0x68) + 0x10);
          do {
            if ((((*(char *)((long)puVar33 + -5) == '\0') && (*piVar32 == *(int *)(puVar33 + -2)))
                && (piVar32[1] == *(int *)((long)puVar33 + -0xc))) &&
               ((piVar32[3] == *(int *)((long)puVar33 + -4) &&
                ((char)piVar32[2] == *(char *)(puVar33 + -1))))) {
              if ((char)piVar32[2] == '\0') {
                local_38 = 0;
                iVar25 = FUN_1001dd8b2(local_50,piVar32[4],&local_60,0);
                if (iVar25 == 0) {
                  local_38 = 0;
                  iVar25 = FUN_1001dd8b2(local_48,*(undefined4 *)puVar33,&local_58,0);
                  if (iVar25 == 0) {
                    local_38 = FUN_1001c5630(local_60,local_58,piVar32[3]);
                  }
                }
                cVar24 = (char)local_38;
              }
              else {
                cVar24 = FUN_1001cfa79(*(undefined8 *)(piVar32 + 4),*puVar33);
              }
              if (cVar24 != '\0') goto LAB_1001d016e;
              uVar26 = *(uint *)(param_2 + 0x10);
            }
            uVar34 = uVar34 + 1;
            puVar33 = puVar33 + 4;
            if (uVar26 <= uVar34) {
              return 0;
            }
          } while( true );
        }
      }
    }
    else {
      uVar27 = FUN_1001cc310();
      cVar24 = _os_log_type_enabled(uVar27,0x10);
      if (cVar24 != '\0') {
        FUN_1006b063a(iVar25,uVar27);
      }
    }
  }
  else {
    uVar27 = FUN_1001cc310();
    cVar24 = _os_log_type_enabled(uVar27,0x10);
    if (cVar24 != '\0') {
      FUN_1006b05ce(iVar25,uVar27);
    }
  }
  return 0;
LAB_1001d016e:
  *(undefined1 *)((long)puVar33 + -5) = 1;
  piVar32 = piVar32 + 8;
  local_3c = local_3c + 1;
  if (*(uint *)(param_1 + 0x10) <= local_3c) {
    return 1;
  }
  goto LAB_1001d008f;
}

