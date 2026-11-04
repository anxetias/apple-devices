// name: FUN_10026c4be
// address: 10026c4be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026c4be(long param_1)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  short *psVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  long lVar18;
  uint *puVar19;
  int *piVar20;
  int *piVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  byte bVar25;
  ushort uVar26;
  short sVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  uint uVar31;
  undefined1 *puVar32;
  long lVar33;
  undefined1 *puVar34;
  char *pcVar35;
  long lVar36;
  long lVar37;
  byte *pbVar38;
  sbyte sVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  ulong uVar48;
  long lVar49;
  long lVar50;
  undefined1 uVar51;
  ulong uVar52;
  ulong uVar53;
  undefined1 *puVar54;
  long lVar55;
  long lVar56;
  byte bVar57;
  short sVar58;
  undefined4 uVar59;
  ulong uVar60;
  long lVar61;
  undefined4 *puVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  float *pfVar66;
  long lVar67;
  uint uVar68;
  int iVar69;
  long lVar70;
  ulong uVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  short *psVar75;
  long lVar76;
  int iVar77;
  int iVar78;
  long lVar79;
  float *pfVar80;
  long lVar81;
  int iVar82;
  long lVar83;
  long lVar84;
  uint uVar85;
  char *pcVar86;
  ulong uVar87;
  long lVar88;
  long lVar89;
  uint uVar90;
  byte *pbVar91;
  ushort *puVar92;
  long lVar93;
  long lVar94;
  undefined4 *puVar95;
  long lVar96;
  byte bVar97;
  byte *pbVar98;
  long lVar99;
  undefined1 *puVar100;
  char *pcVar101;
  bool bVar102;
  bool bVar103;
  double dVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  undefined8 uVar108;
  undefined1 in_XMM1 [16];
  undefined1 auVar109 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar110 [16];
  float fVar111;
  undefined1 in_XMM5 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  long local_2b0;
  long local_2a8;
  long local_268;
  char *local_230;
  byte *local_228;
  long local_1f0;
  long local_1e8;
  long local_1b8;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_150;
  uint local_144;
  long local_120;
  char *local_100;
  long local_f8;
  long local_d8;
  long local_a0;
  int local_7c;
  undefined1 *local_78;
  byte *local_70;
  ulong local_68;
  ulong local_60;
  uint local_58 [3];
  ushort uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar28 = *(char *)(param_1 + 0x13);
  uVar59 = 0x240;
  if (cVar28 == '\0') {
    uVar59 = 0x480;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar59;
  *(uint *)(param_1 + 0x6aa8) = (cVar28 == '\0') + 1;
  pbVar91 = *(byte **)(param_1 + 0x5c);
  uVar31 = *(uint *)(param_1 + 0x6c);
  uVar68 = ((uint)pbVar91[2] | (uint)pbVar91[1] << 8 | (uint)*pbVar91 << 0x10) <<
           ((byte)uVar31 & 0x1f);
  if (cVar28 == '\0') {
    uVar45 = uVar31 + 9 >> 3;
    *(byte **)(param_1 + 0x5c) = pbVar91 + uVar45;
    uVar31 = uVar31 + 9 & 7;
    *(uint *)(param_1 + 0x6c) = uVar31;
    *(ushort *)(param_1 + 0x6aac) = (ushort)(uVar68 >> 0xf) & 0x1ff;
    uVar26 = *(ushort *)(pbVar91 + uVar45);
    bVar103 = *(char *)(param_1 + 0x14) == '\0';
    bVar97 = 7;
    if (bVar103) {
      bVar97 = 0x1f;
    }
    uVar90 = uVar31 + (uint)bVar103 * 2 + 3;
    uVar68 = uVar90 & 7;
    pbVar91 = pbVar91 + uVar45 + (uVar90 >> 3);
    *(byte **)(param_1 + 0x5c) = pbVar91;
    *(uint *)(param_1 + 0x6c) = uVar68;
    *(byte *)(param_1 + 0x6aae) =
         (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << (sbyte)uVar31) >>
               !bVar103 * '\x02' + 0xb) & bVar97;
    uVar53 = (ulong)*(byte *)(param_1 + 0x15);
    if (uVar53 == 0) {
      uVar52 = 0;
      uVar31 = 2;
    }
    else {
      lVar63 = param_1 + 0xd4;
      uVar52 = 0;
      do {
        lVar79 = 0;
        do {
          bVar97 = *pbVar91;
          cVar28 = (char)uVar68;
          pbVar91 = pbVar91 + (uVar68 + 1 >> 3);
          uVar68 = uVar68 + 1 & 7;
          *(byte **)(param_1 + 0x5c) = pbVar91;
          *(uint *)(param_1 + 0x6c) = uVar68;
          *(bool *)(lVar63 + lVar79) = (bVar97 >> ((byte)(7 - cVar28) & 0x1f) & 1) != 0;
          lVar79 = lVar79 + 1;
        } while (lVar79 != 4);
        uVar52 = uVar52 + 1;
        lVar63 = lVar63 + 0x20;
      } while (uVar52 != uVar53);
      uVar31 = *(uint *)(param_1 + 0x6aa8);
      uVar52 = uVar53;
      if (uVar31 == 0) goto LAB_10026d105;
    }
    local_f8 = param_1 + 0x6ae4;
    uVar71 = 0;
    local_d8 = param_1 + 0x6ad0;
    do {
      if (uVar53 != 0) {
        pbVar91 = *(byte **)(param_1 + 0x5c);
        uVar68 = *(uint *)(param_1 + 0x6c);
        local_60 = param_1 + 0x6ab0 + uVar71 * 4;
        local_78 = (undefined1 *)(param_1 + 0x6ab8 + uVar71 * 4);
        local_68 = param_1 + 0x6acc + uVar71 * 2;
        local_70 = (byte *)(param_1 + 0x6b18 + uVar71 * 2);
        uVar87 = 0;
        lVar63 = local_d8;
        lVar79 = local_f8;
        do {
          bVar97 = *pbVar91;
          bVar57 = pbVar91[1];
          bVar40 = pbVar91[2];
          uVar48 = (ulong)(uVar68 + 0xc >> 3);
          pbVar38 = pbVar91 + uVar48;
          *(byte **)(param_1 + 0x5c) = pbVar38;
          uVar45 = uVar68 + 0xc & 7;
          *(uint *)(param_1 + 0x6c) = uVar45;
          *(ushort *)(local_60 + uVar87 * 2) =
               (ushort)((((uint)bVar40 | (uint)bVar57 << 8 | (uint)bVar97 << 0x10) <<
                        ((byte)uVar68 & 0x1f)) >> 0xc) & 0xfff;
          bVar97 = pbVar91[uVar48];
          bVar57 = pbVar91[uVar48 + 1];
          bVar40 = pbVar91[uVar48 + 2];
          uVar90 = uVar45 + 9 >> 3;
          *(byte **)(param_1 + 0x5c) = pbVar38 + uVar90;
          uVar68 = uVar45 + 9 & 7;
          *(uint *)(param_1 + 0x6c) = uVar68;
          *(ushort *)(local_78 + uVar87 * 2) =
               (ushort)((((uint)bVar40 | (uint)bVar57 << 8 | (uint)bVar97 << 0x10) << (sbyte)uVar45)
                       >> 0xf) & 0x1ff;
          pbVar91 = pbVar38 + uVar90;
          pbVar98 = pbVar91 + 1;
          bVar97 = *pbVar91;
          bVar57 = *pbVar98;
          *(byte **)(param_1 + 0x5c) = pbVar98;
          *(uint *)(param_1 + 0x6c) = uVar68;
          *(char *)(uVar87 + param_1 + 0x6ac0 + uVar71 * 2) =
               (char)(((uint)CONCAT11(bVar97,bVar57) << (sbyte)uVar68) >> 8);
          bVar97 = *pbVar98;
          bVar57 = pbVar91[2];
          pbVar91 = pbVar38 + uVar90 + (ulong)(uVar68 + 4 >> 3) + 1;
          *(byte **)(param_1 + 0x5c) = pbVar91;
          uVar45 = uVar68 + 4 & 7;
          *(uint *)(param_1 + 0x6c) = uVar45;
          *(short *)(param_1 + 0x6ac4 + uVar71 * 4 + uVar87 * 2) =
               (short)(((uint)CONCAT11(bVar97,bVar57) << (sbyte)uVar68 & 0xffff) >> 0xc);
          bVar97 = *pbVar91;
          puVar92 = (ushort *)(pbVar91 + (uVar45 + 1 >> 3));
          *(ushort **)(param_1 + 0x5c) = puVar92;
          uVar68 = uVar45 + 1 & 7;
          *(uint *)(param_1 + 0x6c) = uVar68;
          lVar99 = param_1 + 0x6adc + uVar71 * 2;
          lVar2 = param_1 + 0x6ae0 + uVar71 * 2;
          bVar97 = bVar97 >> ((byte)uVar45 ^ 7) & 1;
          *(byte *)(uVar87 + local_68) = bVar97;
          if (bVar97 == 0) {
            *(undefined1 *)(uVar87 + lVar99) = 0;
            *(undefined1 *)(uVar87 + lVar2) = 0;
            lVar99 = -3;
            do {
              uVar26 = *puVar92;
              sVar39 = (sbyte)uVar68;
              puVar92 = (ushort *)((ulong)(uVar68 + 5 >> 3) + (long)puVar92);
              *(ushort **)(param_1 + 0x5c) = puVar92;
              uVar68 = uVar68 + 5 & 7;
              *(uint *)(param_1 + 0x6c) = uVar68;
              *(byte *)(lVar63 + 3 + lVar99) =
                   (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << sVar39) >> 0xb) & 0x1f;
              lVar99 = lVar99 + 1;
            } while (lVar99 != 0);
            uVar26 = *puVar92;
            uVar48 = (ulong)(uVar68 + 4 >> 3);
            pbVar91 = (byte *)((long)puVar92 + uVar48);
            *(byte **)(param_1 + 0x5c) = pbVar91;
            uVar45 = uVar68 + 4 & 7;
            *(uint *)(param_1 + 0x6c) = uVar45;
            *(byte *)(uVar87 + param_1 + 0x6af0 + uVar71 * 2) =
                 (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << (sbyte)uVar68) >> 0xc) & 0xf;
            uVar26 = *(ushort *)((long)puVar92 + uVar48);
            puVar92 = (ushort *)(pbVar91 + (uVar45 + 3 >> 3));
            *(ushort **)(param_1 + 0x5c) = puVar92;
            uVar68 = uVar45 + 3 & 7;
            *(uint *)(param_1 + 0x6c) = uVar68;
            bVar97 = (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << (sbyte)uVar45) >> 0xd) & 7
            ;
          }
          else {
            uVar26 = *puVar92;
            uVar48 = (ulong)(uVar68 + 2 >> 3);
            pbVar91 = (byte *)((long)puVar92 + uVar48);
            *(byte **)(param_1 + 0x5c) = pbVar91;
            uVar45 = uVar68 + 2 & 7;
            *(uint *)(param_1 + 0x6c) = uVar45;
            *(byte *)(uVar87 + lVar99) =
                 (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << (sbyte)uVar68) >> 0xe) & 3;
            bVar97 = *(byte *)((long)puVar92 + uVar48);
            puVar92 = (ushort *)(pbVar91 + (uVar45 + 1 >> 3));
            uVar68 = uVar45 + 1 & 7;
            *(ushort **)(param_1 + 0x5c) = puVar92;
            *(uint *)(param_1 + 0x6c) = uVar68;
            *(bool *)(uVar87 + lVar2) = (bVar97 >> ((byte)uVar45 ^ 7) & 1) != 0;
            lVar93 = 0;
            bVar103 = true;
            do {
              bVar102 = bVar103;
              uVar26 = *puVar92;
              sVar39 = (sbyte)uVar68;
              puVar92 = (ushort *)((ulong)(uVar68 + 5 >> 3) + (long)puVar92);
              *(ushort **)(param_1 + 0x5c) = puVar92;
              uVar68 = uVar68 + 5 & 7;
              *(uint *)(param_1 + 0x6c) = uVar68;
              lVar3 = param_1 + 0x6ad0 + uVar71 * 6;
              *(byte *)(lVar93 + lVar3 + uVar87 * 3) =
                   (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << sVar39) >> 0xb) & 0x1f;
              lVar93 = 1;
              bVar103 = false;
            } while (bVar102);
            *(undefined1 *)(lVar3 + 2 + uVar87 * 3) = 0;
            lVar93 = -3;
            do {
              uVar26 = *puVar92;
              sVar39 = (sbyte)uVar68;
              puVar92 = (ushort *)((ulong)(uVar68 + 3 >> 3) + (long)puVar92);
              *(ushort **)(param_1 + 0x5c) = puVar92;
              uVar68 = uVar68 + 3 & 7;
              *(uint *)(param_1 + 0x6c) = uVar68;
              *(byte *)(lVar79 + 3 + lVar93) =
                   (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << sVar39) >> 0xd) & 7;
              lVar93 = lVar93 + 1;
            } while (lVar93 != 0);
            if ((*(char *)(lVar99 + uVar87) == '\x02') && (*(char *)(uVar87 + lVar2) == '\0')) {
              bVar97 = 0xc;
              uVar51 = 8;
            }
            else {
              bVar97 = 0xd;
              uVar51 = 7;
            }
            *(undefined1 *)(uVar87 + param_1 + 0x6af0 + uVar71 * 2) = uVar51;
          }
          *(byte *)(uVar87 + param_1 + 0x6af4 + uVar71 * 2) = bVar97;
          uVar26 = *puVar92;
          uVar48 = (ulong)(uVar68 + 1 >> 3);
          uVar45 = uVar68 + 1 & 7;
          pbVar91 = (byte *)((long)puVar92 + uVar48);
          *(byte **)(param_1 + 0x5c) = pbVar91;
          *(uint *)(param_1 + 0x6c) = uVar45;
          local_70[uVar87] = ((byte)uVar26 >> ((byte)uVar68 ^ 7) & 1) != 0;
          bVar97 = *(byte *)((long)puVar92 + uVar48);
          uVar68 = uVar45 + 1 >> 3;
          uVar90 = uVar45 + 1 & 7;
          *(byte **)(param_1 + 0x5c) = pbVar91 + uVar68;
          *(uint *)(param_1 + 0x6c) = uVar90;
          *(bool *)(uVar87 + param_1 + 0x6b1c + uVar71 * 2) =
               (bVar97 >> ((byte)uVar45 ^ 7) & 1) != 0;
          bVar97 = pbVar91[uVar68];
          pbVar91 = pbVar91 + uVar68 + (uVar90 + 1 >> 3);
          uVar68 = uVar90 + 1 & 7;
          *(byte **)(param_1 + 0x5c) = pbVar91;
          *(uint *)(param_1 + 0x6c) = uVar68;
          *(bool *)(uVar87 + param_1 + 0x6b20 + uVar71 * 2) =
               (bVar97 >> ((byte)uVar90 ^ 7) & 1) != 0;
          uVar87 = uVar87 + 1;
          lVar79 = lVar79 + 3;
          lVar63 = lVar63 + 3;
        } while (uVar87 != uVar52);
      }
      uVar71 = uVar71 + 1;
      local_f8 = local_f8 + 6;
      local_d8 = local_d8 + 6;
    } while (uVar71 != uVar31);
  }
  else {
    uVar45 = uVar31 + 8 >> 3;
    *(byte **)(param_1 + 0x5c) = pbVar91 + uVar45;
    uVar31 = uVar31 & 7;
    *(uint *)(param_1 + 0x6c) = uVar31;
    *(ushort *)(param_1 + 0x6aac) = (ushort)(uVar68 >> 0x10) & 0xff;
    bVar103 = *(char *)(param_1 + 0x14) == '\0';
    uVar26 = *(ushort *)(pbVar91 + uVar45);
    uVar90 = (uVar31 - bVar103) + 2;
    uVar68 = uVar90 & 7;
    pbVar91 = pbVar91 + uVar45 + (uVar90 >> 3);
    *(byte **)(param_1 + 0x5c) = pbVar91;
    *(uint *)(param_1 + 0x6c) = uVar68;
    *(byte *)(param_1 + 0x6aae) =
         (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << (sbyte)uVar31) >> (bVar103 | 0xeU)) &
         !bVar103 * '\x02' + 1U;
    auVar106 = _DAT_100700430;
    bVar97 = *(byte *)(param_1 + 0x15);
    uVar53 = (ulong)bVar97;
    if (uVar53 != 0) {
      lVar63 = uVar53 - 1;
      auVar105._8_4_ = (int)lVar63;
      auVar105._0_8_ = lVar63;
      auVar105._12_4_ = (int)((ulong)lVar63 >> 0x20);
      auVar109 = pmovsxbq(in_XMM1,_DAT_10071c730);
      auVar110 = pmovsxbq(in_XMM2,_DAT_10071c732);
      uVar52 = 0;
      auVar105 = auVar105 ^ _DAT_100700430;
      auVar112 = pmovsxbq(in_XMM5,_DAT_10071c734);
      do {
        auVar113 = auVar110 ^ auVar106;
        iVar69 = auVar105._4_4_;
        iVar77 = auVar105._12_4_;
        if ((bool)(~(auVar113._4_4_ == iVar69 && auVar105._0_4_ < auVar113._0_4_ ||
                    iVar69 < auVar113._4_4_) & 1)) {
          *(undefined4 *)(param_1 + 0xd4 + uVar52) = 0;
        }
        if (auVar113._12_4_ <= iVar77 &&
            (auVar113._12_4_ != iVar77 || auVar113._8_4_ <= auVar105._8_4_)) {
          *(undefined4 *)(param_1 + 0xf4 + uVar52) = 0;
        }
        auVar113 = auVar109 ^ auVar106;
        if (auVar113._4_4_ <= iVar69 &&
            (auVar113._4_4_ != iVar69 || auVar113._0_4_ <= auVar105._0_4_)) {
          *(undefined4 *)(param_1 + 0x114 + uVar52) = 0;
        }
        if (auVar113._12_4_ <= iVar77 &&
            (auVar113._12_4_ != iVar77 || auVar113._8_4_ <= auVar105._8_4_)) {
          *(undefined4 *)(param_1 + 0x134 + uVar52) = 0;
        }
        lVar63 = auVar110._8_8_;
        auVar110._0_8_ = auVar110._0_8_ + auVar112._0_8_;
        auVar110._8_8_ = lVar63 + auVar112._8_8_;
        lVar63 = auVar109._8_8_;
        auVar109._0_8_ = auVar109._0_8_ + auVar112._0_8_;
        auVar109._8_8_ = lVar63 + auVar112._8_8_;
        uVar52 = uVar52 + 0x80;
      } while (((uint)bVar97 * 0x20 + 0x60 & 0xffffff80) != uVar52);
      lVar63 = param_1 + 0x6ae4;
      uVar52 = 0;
      lVar79 = param_1 + 0x6ad0;
      do {
        bVar97 = *pbVar91;
        bVar57 = pbVar91[1];
        bVar40 = pbVar91[2];
        uVar71 = (ulong)(uVar68 + 0xc >> 3);
        pbVar38 = pbVar91 + uVar71;
        *(byte **)(param_1 + 0x5c) = pbVar38;
        uVar31 = uVar68 + 0xc & 7;
        *(uint *)(param_1 + 0x6c) = uVar31;
        *(ushort *)(param_1 + 0x6ab0 + uVar52 * 2) =
             (ushort)((((uint)bVar40 | (uint)bVar57 << 8 | (uint)bVar97 << 0x10) << (sbyte)uVar68)
                     >> 0xc) & 0xfff;
        bVar97 = pbVar91[uVar71];
        bVar57 = pbVar91[uVar71 + 1];
        bVar40 = pbVar91[uVar71 + 2];
        uVar45 = uVar31 + 9 >> 3;
        *(byte **)(param_1 + 0x5c) = pbVar38 + uVar45;
        uVar68 = uVar31 + 9 & 7;
        *(uint *)(param_1 + 0x6c) = uVar68;
        *(ushort *)(param_1 + 0x6ab8 + uVar52 * 2) =
             (ushort)((((uint)bVar40 | (uint)bVar57 << 8 | (uint)bVar97 << 0x10) << (sbyte)uVar31)
                     >> 0xf) & 0x1ff;
        pbVar91 = pbVar38 + uVar45;
        pbVar98 = pbVar91 + 1;
        bVar97 = *pbVar91;
        bVar57 = *pbVar98;
        *(byte **)(param_1 + 0x5c) = pbVar98;
        *(uint *)(param_1 + 0x6c) = uVar68;
        *(char *)(param_1 + 0x6ac0 + uVar52) =
             (char)(((uint)CONCAT11(bVar97,bVar57) << (sbyte)uVar68) >> 8);
        bVar97 = *pbVar98;
        bVar57 = pbVar91[2];
        bVar40 = pbVar91[3];
        pbVar91 = pbVar38 + uVar45 + (ulong)(uVar68 + 9 >> 3) + 1;
        *(byte **)(param_1 + 0x5c) = pbVar91;
        uVar31 = uVar68 + 9 & 7;
        *(uint *)(param_1 + 0x6c) = uVar31;
        *(ushort *)(param_1 + 0x6ac4 + uVar52 * 2) =
             (ushort)((((uint)bVar40 | (uint)bVar57 << 8 | (uint)bVar97 << 0x10) << (sbyte)uVar68)
                     >> 0xf) & 0x1ff;
        bVar97 = *pbVar91;
        puVar92 = (ushort *)(pbVar91 + (uVar31 + 1 >> 3));
        *(ushort **)(param_1 + 0x5c) = puVar92;
        uVar68 = uVar31 + 1 & 7;
        *(uint *)(param_1 + 0x6c) = uVar68;
        bVar97 = bVar97 >> ((byte)uVar31 ^ 7) & 1;
        *(byte *)(param_1 + 0x6acc + uVar52) = bVar97;
        if (bVar97 == 0) {
          *(undefined1 *)(param_1 + 0x6adc + uVar52) = 0;
          *(undefined1 *)(param_1 + 0x6ae0 + uVar52) = 0;
          lVar99 = -3;
          do {
            uVar26 = *puVar92;
            sVar39 = (sbyte)uVar68;
            puVar92 = (ushort *)((ulong)(uVar68 + 5 >> 3) + (long)puVar92);
            *(ushort **)(param_1 + 0x5c) = puVar92;
            uVar68 = uVar68 + 5 & 7;
            *(uint *)(param_1 + 0x6c) = uVar68;
            *(byte *)(lVar79 + 3 + lVar99) =
                 (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << sVar39) >> 0xb) & 0x1f;
            lVar99 = lVar99 + 1;
          } while (lVar99 != 0);
          uVar26 = *puVar92;
          uVar71 = (ulong)(uVar68 + 4 >> 3);
          pbVar91 = (byte *)((long)puVar92 + uVar71);
          *(byte **)(param_1 + 0x5c) = pbVar91;
          uVar31 = uVar68 + 4 & 7;
          *(uint *)(param_1 + 0x6c) = uVar31;
          *(byte *)(param_1 + 0x6af0 + uVar52) =
               (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << (sbyte)uVar68) >> 0xc) & 0xf;
          uVar26 = *(ushort *)((long)puVar92 + uVar71);
          puVar92 = (ushort *)(pbVar91 + (uVar31 + 3 >> 3));
          *(ushort **)(param_1 + 0x5c) = puVar92;
          uVar68 = uVar31 + 3 & 7;
          *(uint *)(param_1 + 0x6c) = uVar68;
          bVar97 = (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << (sbyte)uVar31) >> 0xd) & 7;
        }
        else {
          uVar26 = *puVar92;
          uVar71 = (ulong)(uVar68 + 2 >> 3);
          pbVar91 = (byte *)((long)puVar92 + uVar71);
          *(byte **)(param_1 + 0x5c) = pbVar91;
          uVar31 = uVar68 + 2 & 7;
          *(uint *)(param_1 + 0x6c) = uVar31;
          *(byte *)(param_1 + 0x6adc + uVar52) =
               (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << (sbyte)uVar68) >> 0xe) & 3;
          bVar97 = *(byte *)((long)puVar92 + uVar71);
          puVar92 = (ushort *)(pbVar91 + (uVar31 + 1 >> 3));
          uVar68 = uVar31 + 1 & 7;
          *(ushort **)(param_1 + 0x5c) = puVar92;
          *(uint *)(param_1 + 0x6c) = uVar68;
          *(bool *)(param_1 + 0x6ae0 + uVar52) = (bVar97 >> ((byte)uVar31 ^ 7) & 1) != 0;
          lVar99 = 0;
          bVar103 = true;
          do {
            bVar102 = bVar103;
            uVar26 = *puVar92;
            sVar39 = (sbyte)uVar68;
            puVar92 = (ushort *)((ulong)(uVar68 + 5 >> 3) + (long)puVar92);
            *(ushort **)(param_1 + 0x5c) = puVar92;
            uVar68 = uVar68 + 5 & 7;
            *(uint *)(param_1 + 0x6c) = uVar68;
            *(byte *)(lVar99 + uVar52 * 3 + param_1 + 0x6ad0) =
                 (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << sVar39) >> 0xb) & 0x1f;
            lVar99 = 1;
            bVar103 = false;
          } while (bVar102);
          *(undefined1 *)(param_1 + 0x6ad2 + uVar52 * 3) = 0;
          lVar99 = -3;
          do {
            uVar26 = *puVar92;
            sVar39 = (sbyte)uVar68;
            puVar92 = (ushort *)((ulong)(uVar68 + 3 >> 3) + (long)puVar92);
            *(ushort **)(param_1 + 0x5c) = puVar92;
            uVar68 = uVar68 + 3 & 7;
            *(uint *)(param_1 + 0x6c) = uVar68;
            *(byte *)(lVar63 + 3 + lVar99) =
                 (byte)(((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) << sVar39) >> 0xd) & 7;
            lVar99 = lVar99 + 1;
          } while (lVar99 != 0);
          if ((*(char *)(param_1 + 0x6adc + uVar52) == '\x02') &&
             (*(char *)(param_1 + 0x6ae0 + uVar52) == '\0')) {
            bVar97 = 0xc;
            uVar51 = 8;
          }
          else {
            bVar97 = 0xd;
            uVar51 = 7;
          }
          *(undefined1 *)(param_1 + 0x6af0 + uVar52) = uVar51;
        }
        *(byte *)(param_1 + 0x6af4 + uVar52) = bVar97;
        *(undefined1 *)(param_1 + 0x6b18 + uVar52) = 0;
        uVar26 = *puVar92;
        uVar71 = (ulong)(uVar68 + 1 >> 3);
        pbVar91 = (byte *)((long)puVar92 + uVar71);
        uVar31 = uVar68 + 1 & 7;
        *(byte **)(param_1 + 0x5c) = pbVar91;
        *(uint *)(param_1 + 0x6c) = uVar31;
        *(bool *)(param_1 + 0x6b1c + uVar52) = ((byte)uVar26 >> ((byte)uVar68 ^ 7) & 1) != 0;
        bVar97 = *(byte *)((long)puVar92 + uVar71);
        pbVar91 = pbVar91 + (uVar31 + 1 >> 3);
        uVar68 = uVar31 + 1 & 7;
        *(byte **)(param_1 + 0x5c) = pbVar91;
        *(uint *)(param_1 + 0x6c) = uVar68;
        *(bool *)(param_1 + 0x6b20 + uVar52) = (bVar97 >> ((byte)uVar31 ^ 7) & 1) != 0;
        uVar52 = uVar52 + 1;
        lVar63 = lVar63 + 3;
        lVar79 = lVar79 + 3;
      } while (uVar52 != uVar53);
    }
  }
LAB_10026d105:
  if ((*(short *)(param_1 + 0x6ab6) != 0 ||
       (uint)*(ushort *)(param_1 + 0x6ab4) +
       (uint)*(ushort *)(param_1 + 0x6ab2) + (uint)*(ushort *)(param_1 + 0x6ab0) != 0) ||
     (*(char *)(param_1 + 0x6ac3) != '\0' ||
      (uint)*(byte *)(param_1 + 0x6ac2) +
      (uint)*(byte *)(param_1 + 0x6ac1) + (uint)*(byte *)(param_1 + 0x6ac0) != 0))
  goto LAB_10026d151;
  bVar103 = *(char *)(param_1 + 2) == '\x03';
  iVar69 = 0x15;
  if (bVar103) {
    iVar69 = 0x24;
  }
  lVar63 = *(long *)(param_1 + 0x50);
  iVar77 = (uint)bVar103 * 8 + 0xd;
  if (*(char *)(param_1 + 9) != '\x03') {
    iVar77 = iVar69;
  }
  uVar53 = (ulong)(iVar77 + 0x3cU & 0x39);
  bVar97 = *(byte *)(lVar63 + uVar53);
  if (bVar97 < 0x56) {
    if (bVar97 == 0x49) {
      if (((*(char *)(lVar63 + 1 + uVar53) == 'n') && (*(char *)(lVar63 + 2 + uVar53) == 'f')) &&
         (*(char *)(lVar63 + 3 + uVar53) == 'o')) goto LAB_1002709f7;
    }
    else if ((((bVar97 == 0x53) && (*(char *)(lVar63 + 1 + uVar53) == 'M')) &&
             (*(char *)(lVar63 + 2 + uVar53) == 'P')) && (*(char *)(lVar63 + 3 + uVar53) == 'B')) {
LAB_1002709f7:
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
  }
  else if (bVar97 == 0x56) {
    if (((*(char *)(lVar63 + 1 + uVar53) == 'B') && (*(char *)(lVar63 + 2 + uVar53) == 'R')) &&
       (*(char *)(lVar63 + 3 + uVar53) == 'I')) goto LAB_1002709f7;
  }
  else if (((bVar97 == 0x58) && (*(char *)(lVar63 + 1 + uVar53) == 'i')) &&
          ((*(char *)(lVar63 + 2 + uVar53) == 'n' && (*(char *)(lVar63 + 3 + uVar53) == 'g'))))
  goto LAB_1002709f7;
LAB_10026d151:
  if (*(ushort *)(param_1 + 0x6aac) == 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    uVar31 = 0;
LAB_10026d18c:
    bVar103 = false;
  }
  else {
    uVar31 = *(uint *)(param_1 + 0x78);
    uVar68 = (uint)*(ushort *)(param_1 + 0x6aac);
    bVar103 = uVar31 < uVar68;
    if (!bVar103 && uVar31 - uVar68 != 0) {
      FUN_1001c631b((ulong)(uVar31 - uVar68) + *(long *)(param_1 + 0x70),*(long *)(param_1 + 0x70),
                    uVar68);
      uVar31 = (uint)*(ushort *)(param_1 + 0x6aac);
      *(uint *)(param_1 + 0x78) = uVar31;
      goto LAB_10026d18c;
    }
  }
  uVar52 = (ulong)*(uint *)(param_1 + 0x24) + *(long *)(param_1 + 0x50);
  uVar53 = *(ulong *)(param_1 + 0x5c);
  uVar68 = 0;
  if (uVar53 < uVar52) {
    uVar68 = (int)uVar52 - (int)uVar53;
  }
  uVar45 = 0x700 - uVar31;
  if (uVar68 + uVar31 < 0x701) {
    uVar45 = uVar68;
  }
  if (uVar45 != 0) {
    FUN_1001c631b(uVar53,(ulong)uVar31 + *(long *)(param_1 + 0x70),(ulong)uVar45);
    uVar31 = *(int *)(param_1 + 0x78) + uVar45;
    *(uint *)(param_1 + 0x78) = uVar31;
    if ((9 < uVar45) && (*(uint *)(param_1 + 0x4c) < 3)) {
      lVar63 = *(long *)(param_1 + 0x5c);
      uVar53 = 0;
      do {
        if ((*(char *)(lVar63 + uVar53) == -0x4c) && (iVar69 = (int)uVar53, 9 < uVar45 - iVar69)) {
          bVar97 = 0xff;
          lVar79 = 0;
          do {
            bVar97 = (&DAT_10071d790)
                     [bVar97 ^ *(byte *)(lVar63 + (ulong)(uint)(iVar69 + (int)lVar79))];
            lVar79 = lVar79 + 1;
          } while (lVar79 != 9);
          if (bVar97 == *(byte *)(lVar63 + (ulong)(iVar69 + 9))) {
            *(uint *)(param_1 + 0x836c) =
                 (uint)CONCAT11(*(undefined1 *)(lVar63 + 1 + uVar53),
                                *(undefined1 *)(lVar63 + (ulong)(iVar69 + 2)));
            *(uint *)(param_1 + 0x8370) =
                 (uint)*(byte *)(lVar63 + (ulong)(iVar69 + 6)) |
                 (uint)*(byte *)(lVar63 + (ulong)(iVar69 + 5)) << 8 |
                 (uint)*(byte *)(lVar63 + (ulong)(iVar69 + 4)) << 0x10 |
                 (uint)*(byte *)(lVar63 + (ulong)(iVar69 + 3)) << 0x18;
          }
        }
        uVar53 = uVar53 + 1;
      } while (uVar53 != uVar45);
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  uVar53 = *(ulong *)(param_1 + 0x70);
  *(ulong *)(param_1 + 0x5c) = uVar53;
  *(uint *)(param_1 + 0x58) = uVar31;
  uVar52 = (ulong)uVar31;
  *(ulong *)(param_1 + 100) = uVar53 + uVar52;
  if (bVar103) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    uVar71 = uVar53;
  }
  else {
    if (*(int *)(param_1 + 0x6aa8) != 0) {
      lVar63 = param_1 + 0x6adc;
      lVar79 = param_1 + 0x6b18;
      lVar99 = param_1 + 0x6b24;
      lVar2 = param_1 + 0x6c18;
      lVar93 = param_1 + 0x6c44;
      lVar3 = param_1 + 0x6acc;
      lVar4 = param_1 + 0x6af0;
      psVar5 = (short *)(param_1 + 0x6cc4);
      lVar6 = param_1 + 0x6af8;
      lVar7 = param_1 + 0x6b08;
      lVar8 = param_1 + 0x6c70;
      lVar9 = param_1 + 0x6c84;
      lVar10 = param_1 + 0x6cb4;
      lVar11 = param_1 + 0x6ac0;
      lVar12 = param_1 + 0x7164;
      lVar13 = param_1 + 0x6b1c;
      lVar14 = param_1 + 0x8364;
      lVar15 = param_1 + 0x4698;
      uVar53 = (ulong)*(byte *)(param_1 + 0x15);
      lVar73 = param_1 + 0x6b85;
      lVar76 = param_1 + 0x6b2a;
      lVar81 = param_1 + 0x6b2f;
      lVar84 = param_1 + 0x6b34;
      lVar96 = param_1 + 0x6b8e;
      local_1b8 = param_1 + 0x6b3a;
      pcVar86 = (char *)(param_1 + 0x6c47);
      local_230 = (char *)(param_1 + 0x6bac);
      local_228 = (byte *)(param_1 + 0x6ba3);
      local_144 = 0;
      local_68 = 0;
      lVar67 = param_1 + 0x6b7c;
      lVar89 = lVar99;
      local_268 = lVar93;
      local_150 = lVar2;
      do {
        uVar52 = local_68;
        if ((char)uVar53 == '\0') {
          uVar53 = 0;
        }
        else {
          puVar16 = (undefined8 *)(lVar93 + local_68 * 0xd);
          pauVar17 = (undefined1 (*) [16])(lVar2 + local_68 * 0x16);
          lVar72 = local_68 * 0x16;
          puVar32 = (undefined1 *)(local_68 * 0xd + lVar93 + 0xc);
          lVar70 = local_68 * 0x4e + param_1 + 0x6b7c;
          lVar88 = local_68 * 2;
          lVar56 = param_1 + 0x6ab8 + local_68 * 4;
          lVar50 = local_68 * 2;
          lVar61 = param_1 + 0x6c60 + local_68 * 8;
          uVar53 = 0;
          lVar55 = lVar12;
          local_2b0 = param_1 + 0x6b56;
          local_2a8 = param_1 + 0x6b50;
          local_1f0 = lVar73;
          local_1e8 = lVar96;
          local_198 = lVar84;
          local_190 = param_1 + 0x6b60;
          local_188 = lVar81;
          local_180 = param_1 + 0x6b5b;
          local_178 = lVar76;
          local_120 = lVar89;
          local_a0 = lVar67;
          do {
            uVar71 = local_68;
            lVar33 = uVar53 * 0x27;
            iVar69 = *(int *)(param_1 + 0x58);
            pbVar91 = *(byte **)(param_1 + 0x5c);
            uVar31 = *(uint *)(param_1 + 0x6c);
            lVar18 = param_1 + 0x6ae0 + local_68 * 2;
            cVar28 = *(char *)(uVar53 + lVar18);
            local_70 = (byte *)(param_1 + 0x6ac4 + local_68 * 4);
            iVar77 = *(int *)(param_1 + 100);
            local_60 = uVar53;
            if (*(char *)(param_1 + 0x13) == '\0') {
              bVar97 = (&DAT_10071d8e0)[(ulong)*(ushort *)(local_70 + uVar53 * 2) * 2];
              bVar57 = (&DAT_10071d8e1)[(ulong)*(ushort *)(local_70 + uVar53 * 2) * 2];
              uVar68 = (uint)bVar97;
              if ((*(char *)(uVar53 + lVar3 + local_68 * 2) == '\x01') &&
                 (*(char *)(uVar53 + lVar63 + local_68 * 2) == '\x02')) {
                bVar40 = 0x18 - bVar97;
                if (cVar28 == '\0') {
                  lVar94 = 0;
                  pbVar38 = pbVar91;
                  lVar74 = local_a0;
                  uVar68 = uVar31;
                  do {
                    lVar36 = -3;
                    do {
                      bVar42 = *pbVar38;
                      bVar44 = pbVar38[1];
                      bVar41 = pbVar38[2];
                      bVar43 = (byte)uVar68;
                      pbVar38 = pbVar38 + (uVar68 + bVar97 >> 3);
                      *(byte **)(param_1 + 0x5c) = pbVar38;
                      uVar68 = uVar68 + bVar97 & 7;
                      *(uint *)(param_1 + 0x6c) = uVar68;
                      *(char *)(lVar74 + 3 + lVar36) =
                           (char)((((uint)bVar41 | (uint)bVar44 << 8 | (uint)bVar42 << 0x10) <<
                                   (bVar43 & 0x1f) & 0xffffff) >> (bVar40 & 0x1f));
                      lVar36 = lVar36 + 1;
                    } while (lVar36 != 0);
                    lVar94 = lVar94 + 1;
                    lVar74 = lVar74 + 3;
                  } while (lVar94 != 6);
                  pbVar38 = *(byte **)(param_1 + 0x5c);
                  uVar68 = *(uint *)(param_1 + 0x6c);
                  lVar94 = 6;
                  lVar74 = local_1e8;
                  do {
                    lVar36 = -3;
                    do {
                      bVar97 = *pbVar38;
                      bVar40 = pbVar38[1];
                      bVar42 = pbVar38[2];
                      bVar44 = (byte)uVar68;
                      uVar68 = uVar68 + bVar57;
                      pbVar38 = pbVar38 + (uVar68 >> 3);
                      *(byte **)(param_1 + 0x5c) = pbVar38;
                      uVar68 = uVar68 & 7;
                      *(uint *)(param_1 + 0x6c) = uVar68;
                      *(char *)(lVar74 + 3 + lVar36) =
                           (char)((((uint)bVar42 | (uint)bVar40 << 8 | (uint)bVar97 << 0x10) <<
                                   (bVar44 & 0x1f) & 0xffffff) >> (0x18 - bVar57 & 0x1f));
                      lVar36 = lVar36 + 1;
                    } while (lVar36 != 0);
                    lVar94 = lVar94 + 1;
                    lVar74 = lVar74 + 3;
                  } while (lVar94 != 0xc);
                  *(undefined2 *)(lVar33 + 0x24 + lVar70) = 0;
                  *(undefined1 *)(lVar33 + 0x26 + lVar70) = 0;
                }
                else {
                  lVar74 = 0;
                  pbVar38 = pbVar91;
                  uVar45 = uVar31;
                  do {
                    bVar97 = *pbVar38;
                    bVar42 = pbVar38[1];
                    bVar44 = pbVar38[2];
                    bVar41 = (byte)uVar45;
                    pbVar38 = pbVar38 + (uVar45 + uVar68 >> 3);
                    *(byte **)(param_1 + 0x5c) = pbVar38;
                    uVar45 = uVar45 + uVar68 & 7;
                    *(uint *)(param_1 + 0x6c) = uVar45;
                    *(char *)(local_120 + lVar74) =
                         (char)((((uint)bVar44 | (uint)bVar42 << 8 | (uint)bVar97 << 0x10) <<
                                 (bVar41 & 0x1f) & 0xffffff) >> (bVar40 & 0x1f));
                    lVar74 = lVar74 + 1;
                  } while (lVar74 != 8);
                  if (((*(char *)(param_1 + 9) == '\x01') && (uVar53 == 1)) &&
                     ((*(byte *)(param_1 + 10) & 1) != 0)) {
                    if (local_68 == 0) {
                      *(undefined8 *)(param_1 + 0x6b48) = *(undefined8 *)(param_1 + 0x6b74);
                      *(undefined8 *)(param_1 + 0x6b42) = *(undefined8 *)(param_1 + 0x6b6e);
                    }
                    else {
                      lVar74 = -0xe;
                      do {
                        *(undefined1 *)(param_1 + 0x6b7c + lVar74) =
                             *(undefined1 *)(param_1 + 0x6b50 + lVar74);
                        lVar74 = lVar74 + 1;
                      } while (lVar74 != 0);
                    }
                  }
                  *(undefined1 *)((undefined8 *)(lVar70 + lVar33) + 1) = 0;
                  *(undefined8 *)(lVar70 + lVar33) = 0;
                  pbVar38 = *(byte **)(param_1 + 0x5c);
                  uVar45 = *(uint *)(param_1 + 0x6c);
                  lVar94 = 3;
                  lVar74 = local_1f0;
                  do {
                    lVar36 = -3;
                    do {
                      bVar97 = *pbVar38;
                      bVar42 = pbVar38[1];
                      bVar44 = pbVar38[2];
                      bVar41 = (byte)uVar45;
                      pbVar38 = pbVar38 + (uVar45 + uVar68 >> 3);
                      *(byte **)(param_1 + 0x5c) = pbVar38;
                      uVar45 = uVar45 + uVar68 & 7;
                      *(uint *)(param_1 + 0x6c) = uVar45;
                      *(char *)(lVar74 + 3 + lVar36) =
                           (char)((((uint)bVar44 | (uint)bVar42 << 8 | (uint)bVar97 << 0x10) <<
                                   (bVar41 & 0x1f) & 0xffffff) >> (bVar40 & 0x1f));
                      lVar36 = lVar36 + 1;
                    } while (lVar36 != 0);
                    lVar94 = lVar94 + 1;
                    lVar74 = lVar74 + 3;
                  } while (lVar94 != 6);
                  pbVar38 = *(byte **)(param_1 + 0x5c);
                  uVar68 = *(uint *)(param_1 + 0x6c);
                  lVar94 = 6;
                  lVar74 = local_1e8;
                  do {
                    lVar36 = -3;
                    do {
                      bVar97 = *pbVar38;
                      bVar40 = pbVar38[1];
                      bVar42 = pbVar38[2];
                      bVar44 = (byte)uVar68;
                      uVar68 = uVar68 + bVar57;
                      pbVar38 = pbVar38 + (uVar68 >> 3);
                      *(byte **)(param_1 + 0x5c) = pbVar38;
                      uVar68 = uVar68 & 7;
                      *(uint *)(param_1 + 0x6c) = uVar68;
                      *(char *)(lVar74 + 3 + lVar36) =
                           (char)((((uint)bVar42 | (uint)bVar40 << 8 | (uint)bVar97 << 0x10) <<
                                   (bVar44 & 0x1f) & 0xffffff) >> (0x18 - bVar57 & 0x1f));
                      lVar36 = lVar36 + 1;
                    } while (lVar36 != 0);
                    lVar94 = lVar94 + 1;
                    lVar74 = lVar74 + 3;
                  } while (lVar94 != 0xc);
                  *(undefined2 *)(lVar33 + 0x24 + lVar70) = 0;
                  *(undefined1 *)(lVar33 + 0x26 + lVar70) = 0;
                  *(undefined8 *)(*pauVar17 + 0xe) = 0x707070707070707;
                  *pauVar17 = _DAT_10071c5c0;
                }
                *(undefined8 *)((long)puVar16 + 5) = 0x707070707070707;
                *puVar16 = 0x707070707070707;
                bVar103 = false;
              }
              else {
                if ((local_68 == 0) || (*(char *)(param_1 + 0xd4 + uVar53 * 0x20) == '\0')) {
                  lVar74 = -6;
                  pbVar38 = pbVar91;
                  uVar45 = uVar31;
                  do {
                    bVar40 = *pbVar38;
                    bVar42 = pbVar38[1];
                    bVar44 = pbVar38[2];
                    bVar41 = (byte)uVar45;
                    pbVar38 = pbVar38 + (uVar45 + uVar68 >> 3);
                    *(byte **)(param_1 + 0x5c) = pbVar38;
                    uVar45 = uVar45 + uVar68 & 7;
                    *(uint *)(param_1 + 0x6c) = uVar45;
                    *(char *)(local_120 + 6 + lVar74) =
                         (char)((((uint)bVar44 | (uint)bVar42 << 8 | (uint)bVar40 << 0x10) <<
                                 (bVar41 & 0x1f) & 0xffffff) >> (0x18 - bVar97 & 0x1f));
                    lVar74 = lVar74 + 1;
                  } while (lVar74 != 0);
                }
                else {
                  lVar74 = -6;
                  do {
                    *(undefined1 *)(local_2a8 + 6 + lVar74) =
                         *(undefined1 *)(local_2a8 + -0x26 + lVar74);
                    lVar74 = lVar74 + 1;
                  } while (lVar74 != 0);
                }
                lVar74 = uVar53 * 0x20 + param_1 + 0xd4;
                if ((local_68 == 0) || (*(char *)(lVar74 + 1) == '\0')) {
                  pbVar38 = *(byte **)(param_1 + 0x5c);
                  uVar45 = *(uint *)(param_1 + 0x6c);
                  lVar94 = -5;
                  do {
                    bVar40 = *pbVar38;
                    bVar42 = pbVar38[1];
                    bVar44 = pbVar38[2];
                    bVar41 = (byte)uVar45;
                    pbVar38 = pbVar38 + (uVar45 + uVar68 >> 3);
                    *(byte **)(param_1 + 0x5c) = pbVar38;
                    uVar45 = uVar45 + uVar68 & 7;
                    *(uint *)(param_1 + 0x6c) = uVar45;
                    *(char *)(local_178 + 5 + lVar94) =
                         (char)((((uint)bVar44 | (uint)bVar42 << 8 | (uint)bVar40 << 0x10) <<
                                 (bVar41 & 0x1f) & 0xffffff) >> (0x18 - bVar97 & 0x1f));
                    lVar94 = lVar94 + 1;
                  } while (lVar94 != 0);
                }
                else {
                  lVar94 = -5;
                  do {
                    *(undefined1 *)(local_2b0 + 5 + lVar94) =
                         *(undefined1 *)(local_2b0 + -0x27 + lVar94);
                    lVar94 = lVar94 + 1;
                  } while (lVar94 != 0);
                }
                if ((local_68 == 0) || (*(char *)(lVar74 + 2) == '\0')) {
                  pbVar38 = *(byte **)(param_1 + 0x5c);
                  uVar68 = *(uint *)(param_1 + 0x6c);
                  lVar94 = -5;
                  do {
                    bVar97 = *pbVar38;
                    bVar40 = pbVar38[1];
                    bVar42 = pbVar38[2];
                    bVar44 = (byte)uVar68;
                    pbVar38 = pbVar38 + (uVar68 + bVar57 >> 3);
                    *(byte **)(param_1 + 0x5c) = pbVar38;
                    uVar68 = uVar68 + bVar57 & 7;
                    *(uint *)(param_1 + 0x6c) = uVar68;
                    *(char *)(local_188 + 5 + lVar94) =
                         (char)((((uint)bVar42 | (uint)bVar40 << 8 | (uint)bVar97 << 0x10) <<
                                 (bVar44 & 0x1f) & 0xffffff) >> (0x18 - bVar57 & 0x1f));
                    lVar94 = lVar94 + 1;
                  } while (lVar94 != 0);
                }
                else {
                  lVar94 = -5;
                  do {
                    *(undefined1 *)(local_180 + 5 + lVar94) =
                         *(undefined1 *)(local_180 + -0x27 + lVar94);
                    lVar94 = lVar94 + 1;
                  } while (lVar94 != 0);
                }
                if ((local_68 == 0) || (*(char *)(lVar74 + 3) == '\0')) {
                  pbVar38 = *(byte **)(param_1 + 0x5c);
                  uVar68 = *(uint *)(param_1 + 0x6c);
                  lVar74 = -5;
                  do {
                    bVar97 = *pbVar38;
                    bVar40 = pbVar38[1];
                    bVar42 = pbVar38[2];
                    bVar44 = (byte)uVar68;
                    pbVar38 = pbVar38 + (uVar68 + bVar57 >> 3);
                    *(byte **)(param_1 + 0x5c) = pbVar38;
                    uVar68 = uVar68 + bVar57 & 7;
                    *(uint *)(param_1 + 0x6c) = uVar68;
                    *(char *)(local_198 + 5 + lVar74) =
                         (char)((((uint)bVar42 | (uint)bVar40 << 8 | (uint)bVar97 << 0x10) <<
                                 (bVar44 & 0x1f) & 0xffffff) >> (0x18 - bVar57 & 0x1f));
                    lVar74 = lVar74 + 1;
                  } while (lVar74 != 0);
                }
                else {
                  lVar74 = -5;
                  do {
                    *(undefined1 *)(local_190 + 5 + lVar74) =
                         *(undefined1 *)(local_190 + -0x27 + lVar74);
                    lVar74 = lVar74 + 1;
                  } while (lVar74 != 0);
                }
                *(undefined1 *)(local_68 * 0x2c + lVar99 + 0x15 + uVar53 * 0x16) = 0;
                *(undefined8 *)(*pauVar17 + 0xe) = 0x707070707070707;
                *pauVar17 = _DAT_10071c5c0;
                bVar103 = true;
              }
            }
            else {
              cVar30 = *(char *)(uVar53 + lVar63 + local_68 * 2);
              uVar26 = *(ushort *)(local_70 + uVar53 * 2);
              uVar68 = (uint)uVar26;
              if (((*(byte *)(param_1 + 10) | 2) == 3) && (uVar53 == 1)) {
                uVar90 = (uint)(uVar26 >> 1);
                if (uVar26 < 0x168) {
                  uVar45 = uVar68 / 0x48;
                  local_58[0] = uVar45;
                  bVar97 = (char)(uVar26 >> 1) + ((byte)((uVar90 & 0xff) / 9) & 0xfc) * -9;
                  uVar68 = (uint)bVar97 * 0x2b;
                  auVar106._8_8_ = 0;
                  auVar106._0_8_ =
                       (ulong)(uVar68 >> 8) | (ulong)(byte)(bVar97 + (char)(uVar68 >> 8) * -6) << 8;
                  auVar106 = pmovzxbd(auVar106,auVar106);
                  local_58[1] = auVar106._0_4_;
                  local_58[2] = auVar106._4_4_;
                  uStack_4c = 0;
                  uStack_4a = 0;
                  *(undefined1 *)(param_1 + 0x6b19 + local_68 * 2) = 0;
                  local_78 = (undefined1 *)0x3;
                }
                else if (uVar26 < 0x1e8) {
                  uVar45 = uVar90 - 0xb4 >> 4 & 3;
                  local_58[0] = uVar45;
                  local_58[1] = uVar90 - 0xb4 >> 2 & 3;
                  local_58[2] = uVar90 & 3;
                  uStack_4c = 0;
                  uStack_4a = 0;
                  *(undefined1 *)(param_1 + 0x6b19 + local_68 * 2) = 0;
                  local_78 = (undefined1 *)0x4;
                }
                else {
                  if (0x1ff < uVar26) {
                    local_78 = (undefined1 *)FUN_1001cc310();
                    cVar29 = _os_log_type_enabled(local_78,0x10);
                    if (cVar29 != '\0') {
                      local_58[0] = 0x8220202;
                      local_58[1] = 0x7a0a90;
                      local_58[2] = 1;
                      uStack_4c = 0x822;
                      uStack_4a = 0x65cf;
                      uStack_48 = 0x1007b;
                      __os_log_error_impl(0x100000000,local_78,0x10,"%{public}s: (%{public}s)",
                                          local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    uVar90 = 0xff;
                  }
                  uVar90 = uVar90 - 0xf4;
                  uVar45 = uVar90 / 3;
                  local_58[0] = uVar90 / 3;
                  local_58[1] = uVar90 % 3;
                  local_58[2] = 0;
                  uStack_4c = 0;
                  uStack_4a = 0;
                  *(undefined1 *)(param_1 + 0x6b19 + uVar71 * 2) = 0;
                  local_78 = (undefined1 *)0x5;
                }
              }
              else {
                uVar45 = (uint)uVar26;
                if (uVar68 < 400) {
                  uVar45 = uVar45 / 0x50;
                  local_58[0] = uVar45;
                  local_58[1] = (uint)(byte)((char)(uVar26 >> 4) +
                                            (char)((uVar26 >> 4 & 0xff) / 5) * -5);
                  local_58[2] = uVar26 >> 2 & 3;
                  uStack_4c = uVar26 & 3;
                  uStack_4a = 0;
                  *(undefined1 *)(uVar53 + lVar79 + local_68 * 2) = 0;
                  local_78 = (undefined1 *)0x0;
                }
                else if (uVar45 < 500) {
                  uVar90 = uVar68 - 400;
                  uVar45 = uVar90 / 0x14;
                  local_58[0] = uVar90 / 0x14;
                  local_58[1] = (uVar90 >> 2) % 5;
                  local_58[2] = uVar68 & 3;
                  uStack_4c = 0;
                  uStack_4a = 0;
                  *(undefined1 *)(uVar53 + lVar79 + local_68 * 2) = 0;
                  local_78 = (undefined1 *)0x1;
                }
                else {
                  if (0x1ff < uVar45) {
                    local_78 = (undefined1 *)FUN_1001cc310();
                    cVar29 = _os_log_type_enabled(local_78,0x10);
                    if (cVar29 != '\0') {
                      local_58[0] = 0x8220202;
                      local_58[1] = 0x7a0a90;
                      local_58[2] = 1;
                      uStack_4c = 0x822;
                      uStack_4a = 0x65b7;
                      uStack_48 = 0x1007b;
                      __os_log_error_impl(0x100000000,local_78,0x10,"%{public}s: (%{public}s)",
                                          local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    uVar68 = 0x1ff;
                  }
                  uVar68 = uVar68 - 500;
                  uVar45 = uVar68 / 3;
                  local_58[0] = uVar68 / 3;
                  local_58[1] = uVar68 % 3;
                  local_58[2] = 0;
                  uStack_4c = 0;
                  uStack_4a = 0;
                  *(undefined1 *)(local_60 + lVar79 + uVar71 * 2) = 1;
                  local_78 = (undefined1 *)0x2;
                }
              }
              uStack_4a = 0;
              if (cVar30 == '\x02') {
                puVar100 = puVar32;
                if (cVar28 == '\0') {
                  lVar74 = 0;
                  uVar68 = 0;
                  do {
                    uVar45 = uVar68;
                    if (2 < (byte)(&DAT_10071d894)[lVar74 + (long)local_78 * 0xc]) {
                      uVar90 = local_58[lVar74];
                      uVar45 = (byte)(&DAT_10071d894)[lVar74 + (long)local_78 * 0xc] / 3 + uVar68;
                      bVar97 = ~(byte)(-1 << ((byte)uVar90 & 0x1f));
                      if (uVar90 == 0) {
                        bVar97 = 1;
                      }
                      do {
                        lVar94 = -3;
                        do {
                          if (uVar90 == 0) {
                            uVar51 = 0;
                          }
                          else {
                            pbVar38 = *(byte **)(param_1 + 0x5c);
                            uVar51 = (undefined1)
                                     ((((uint)pbVar38[2] |
                                       (uint)pbVar38[1] << 8 | (uint)*pbVar38 << 0x10) <<
                                       ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >>
                                     (0x18 - (byte)uVar90 & 0x1f));
                            uVar85 = *(int *)(param_1 + 0x6c) + (uVar90 & 0xff);
                            *(byte **)(param_1 + 0x5c) = pbVar38 + (uVar85 >> 3);
                            *(uint *)(param_1 + 0x6c) = uVar85 & 7;
                          }
                          *(undefined1 *)((ulong)uVar68 * 3 + local_a0 + 3 + lVar94) = uVar51;
                          lVar94 = lVar94 + 1;
                        } while (lVar94 != 0);
                        if (local_60 == 1) {
                          *(byte *)((ulong)uVar68 + (long)puVar16) = bVar97;
                        }
                        uVar68 = uVar68 + 1;
                      } while (uVar68 != uVar45);
                    }
                    uVar68 = uVar45;
                    lVar74 = lVar74 + 1;
                  } while (lVar74 != 4);
                  puVar34 = (undefined1 *)(lVar70 + lVar33 + 0x26);
                  *(undefined2 *)(lVar70 + lVar33 + 0x24) = 0;
                  bVar103 = false;
                }
                else {
                  bVar97 = 0x18 - (byte)uVar45;
                  bVar57 = ~(byte)(-1 << ((byte)uVar45 & 0x1f));
                  if (uVar45 == 0) {
                    bVar57 = 1;
                  }
                  lVar74 = 0;
                  do {
                    if (uVar45 == 0) {
                      uVar51 = 0;
                    }
                    else {
                      pbVar38 = *(byte **)(param_1 + 0x5c);
                      uVar51 = (undefined1)
                               ((((uint)pbVar38[2] | (uint)pbVar38[1] << 8 | (uint)*pbVar38 << 0x10)
                                 << ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >>
                               (bVar97 & 0x1f));
                      uVar68 = *(int *)(param_1 + 0x6c) + (uVar45 & 0xff);
                      *(byte **)(param_1 + 0x5c) = pbVar38 + (uVar68 >> 3);
                      *(uint *)(param_1 + 0x6c) = uVar68 & 7;
                    }
                    *(undefined1 *)(local_120 + lVar74) = uVar51;
                    if (local_60 == 1) {
                      *(byte *)(local_150 + lVar74) = bVar57;
                    }
                    lVar74 = lVar74 + 1;
                  } while (lVar74 != 6);
                  uVar53 = 3;
                  if (2 < (byte)(&DAT_10071d898)[(long)local_78 * 0xc] - 6) {
                    uVar68 = ((byte)(&DAT_10071d898)[(long)local_78 * 0xc] - 6) / 3;
                    if (uVar68 < 2) {
                      uVar68 = 1;
                    }
                    uVar53 = (ulong)(uVar68 + 3);
                    uVar71 = 3;
                    lVar74 = local_1f0;
                    do {
                      lVar94 = -3;
                      do {
                        if (uVar45 == 0) {
                          uVar51 = 0;
                        }
                        else {
                          pbVar38 = *(byte **)(param_1 + 0x5c);
                          uVar51 = (undefined1)
                                   ((((uint)pbVar38[2] |
                                     (uint)pbVar38[1] << 8 | (uint)*pbVar38 << 0x10) <<
                                     ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >>
                                   (bVar97 & 0x1f));
                          uVar68 = *(int *)(param_1 + 0x6c) + (uVar45 & 0xff);
                          *(byte **)(param_1 + 0x5c) = pbVar38 + (uVar68 >> 3);
                          *(uint *)(param_1 + 0x6c) = uVar68 & 7;
                        }
                        *(undefined1 *)(lVar74 + 3 + lVar94) = uVar51;
                        lVar94 = lVar94 + 1;
                      } while (lVar94 != 0);
                      if (local_60 == 1) {
                        *(byte *)(uVar71 + (long)puVar16) = bVar57;
                      }
                      uVar71 = uVar71 + 1;
                      lVar74 = lVar74 + 3;
                    } while (uVar71 != uVar53);
                  }
                  puVar34 = (undefined1 *)0x1;
                  do {
                    puVar54 = puVar34;
                    bVar97 = puVar54[(long)(&DAT_10071d898 + (long)local_78 * 0xc)];
                    if (2 < bVar97) {
                      uVar68 = local_58[(long)puVar54];
                      bVar57 = ~(byte)(-1 << ((byte)uVar68 & 0x1f));
                      if (uVar68 == 0) {
                        bVar57 = 1;
                      }
                      uVar45 = 0;
                      do {
                        lVar74 = -3;
                        do {
                          if (uVar68 == 0) {
                            uVar51 = 0;
                          }
                          else {
                            pbVar38 = *(byte **)(param_1 + 0x5c);
                            uVar51 = (undefined1)
                                     ((((uint)pbVar38[2] |
                                       (uint)pbVar38[1] << 8 | (uint)*pbVar38 << 0x10) <<
                                       ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >>
                                     (0x18 - (byte)uVar68 & 0x1f));
                            uVar90 = *(int *)(param_1 + 0x6c) + (uVar68 & 0xff);
                            *(byte **)(param_1 + 0x5c) = pbVar38 + (uVar90 >> 3);
                            *(uint *)(param_1 + 0x6c) = uVar90 & 7;
                          }
                          *(undefined1 *)(uVar53 * 3 + local_a0 + 3 + lVar74) = uVar51;
                          lVar74 = lVar74 + 1;
                        } while (lVar74 != 0);
                        if (local_60 == 1) {
                          *(byte *)(uVar53 + (long)puVar16) = bVar57;
                        }
                        uVar53 = (ulong)((int)uVar53 + 1);
                        uVar45 = uVar45 + 1;
                      } while (uVar45 != bVar97 / 3);
                    }
                    puVar34 = puVar54 + 1;
                  } while (puVar54 + 1 != (undefined1 *)0x4);
                  puVar34 = (undefined1 *)(lVar70 + lVar33 + 0x26);
                  *(undefined2 *)(lVar70 + lVar33 + 0x24) = 0;
                  bVar103 = false;
                  local_78 = puVar54;
                }
              }
              else {
                local_78 = &DAT_10071d890 + (long)local_78 * 0xc;
                lVar74 = 0;
                uVar68 = 0;
                do {
                  bVar97 = local_78[lVar74];
                  uVar90 = (uint)bVar97;
                  uVar45 = uVar68;
                  if (bVar97 != 0) {
                    uVar85 = local_58[lVar74];
                    bVar57 = ~(byte)(-1 << ((byte)uVar85 & 0x1f));
                    if (uVar85 == 0) {
                      bVar57 = 1;
                    }
                    uVar45 = uVar68 + bVar97;
                    do {
                      if (uVar85 == 0) {
                        uVar51 = 0;
                      }
                      else {
                        pbVar38 = *(byte **)(param_1 + 0x5c);
                        uVar51 = (undefined1)
                                 ((((uint)pbVar38[2] |
                                   (uint)pbVar38[1] << 8 | (uint)*pbVar38 << 0x10) <<
                                   ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >>
                                 (0x18 - (byte)uVar85 & 0x1f));
                        uVar46 = *(int *)(param_1 + 0x6c) + (uVar85 & 0xff);
                        *(byte **)(param_1 + 0x5c) = pbVar38 + (uVar46 >> 3);
                        *(uint *)(param_1 + 0x6c) = uVar46 & 7;
                        uVar71 = local_68;
                      }
                      *(undefined1 *)((ulong)uVar68 + local_60 * 0x16 + uVar71 * 0x2c + lVar99) =
                           uVar51;
                      if (local_60 == 1) {
                        (*pauVar17)[uVar68] = bVar57;
                      }
                      uVar68 = uVar68 + 1;
                      uVar90 = uVar90 - 1;
                    } while (uVar90 != 0);
                  }
                  uVar68 = uVar45;
                  lVar74 = lVar74 + 1;
                } while (lVar74 != 4);
                puVar34 = (undefined1 *)(uVar71 * 0x2c + lVar99 + local_60 * 0x16 + 0x15);
                bVar103 = true;
                puVar100 = (undefined1 *)(lVar72 + lVar2 + 0x15);
              }
              *puVar34 = 0;
              *puVar100 = 1;
            }
            uVar53 = local_60;
            pcVar35 = (char *)(lVar18 + local_60);
            lVar74 = param_1 + 0x6ad0 + uVar52 * 6;
            lVar94 = local_60 * 3;
            bVar97 = *(byte *)(lVar74 + lVar94);
            bVar57 = *(byte *)(lVar74 + 1 + lVar94);
            bVar40 = *(byte *)(lVar74 + 2 + lVar94);
            local_58[0] = 0;
            local_7c = 0;
            lVar74 = lVar3 + local_68 * 2;
            uVar71 = (ulong)(byte)((char)*(undefined4 *)
                                          (&DAT_10071c740 + (ulong)*(byte *)(param_1 + 2) * 4) *
                                   '\x03' + *(char *)(param_1 + 6));
            if ((*(char *)(local_60 + lVar74) == '\0') ||
               (*(char *)(local_60 + lVar63 + local_68 * 2) != '\x02')) {
              uVar68 = (uint)*(byte *)(local_60 + lVar4 + local_68 * 2);
              uVar45 = *(byte *)(local_60 + param_1 + 0x6af4 + lVar88) + uVar68 + 1;
              uVar87 = (ulong)uVar45;
              if (0x14 < uVar45) {
                uVar87 = 0x15;
              }
              uVar68 = (uint)*(short *)(&DAT_10071c9c0 + (ulong)(uVar68 + 1) * 2 + uVar71 * 0x4a);
              local_78 = (undefined1 *)
                         CONCAT44(local_78._4_4_,
                                  (int)*(short *)(&DAT_10071c9c2 + uVar87 * 2 + uVar71 * 0x4a));
            }
            else {
              if (*pcVar35 == '\0') {
                uVar68 = *(short *)(&DAT_10071c9ee +
                                   (ulong)((uint)*(byte *)(local_60 + lVar4 + local_68 * 2) * 0x5556
                                           + 0x5556 >> 0x10) * 2 + uVar71 * 0x4a) * 3;
              }
              else {
                lVar36 = uVar71 * 0x4a;
                if (*(char *)(param_1 + 0x13) != '\0') {
                  uVar68 = (int)*(short *)(&DAT_10071c9cc + lVar36) +
                           ((int)*(short *)(&DAT_10071c9f6 + lVar36) -
                           (int)*(short *)(&DAT_10071c9f4 + lVar36)) * 2;
                  local_78 = (undefined1 *)CONCAT44(local_78._4_4_,0x240);
                  goto LAB_10026e464;
                }
                uVar68 = (uint)*(short *)(&DAT_10071c9c2 +
                                         (ulong)*(byte *)(local_60 + lVar4 + local_68 * 2) * 2 +
                                         lVar36);
              }
              local_78 = (undefined1 *)CONCAT44(local_78._4_4_,0x240);
            }
LAB_10026e464:
            uVar26 = *(ushort *)(lVar56 + local_60 * 2);
            lVar36 = param_1 + 0x6ab0 + local_68 * 4;
            if (uVar26 < 0x121) {
              uVar45 = (uint)uVar26 + (uint)uVar26;
            }
            else {
              uVar45 = 0;
              *(undefined2 *)(lVar36 + local_60 * 2) = 0;
              *(undefined2 *)(lVar56 + local_60 * 2) = 0;
              (local_70 + local_60 * 2)[0] = 0;
              (local_70 + local_60 * 2)[1] = 0;
            }
            if (uVar45 <= uVar68) {
              uVar68 = uVar45;
            }
            uVar87 = (ulong)uVar68;
            if ((bVar97 < 0xf) && ((0x4011U >> (bVar97 & 0x1f) & 1) != 0)) {
              FUN_1001c62d9(psVar5,uVar87 * 2);
              psVar75 = psVar5 + uVar87;
            }
            else {
              psVar75 = psVar5;
              if (uVar68 == 0) {
                uVar87 = 0;
              }
              else {
                lVar64 = (ulong)bVar97 * 0x10;
                local_70 = (byte *)CONCAT44(local_70._4_4_,
                                            0x18 - (uint)(byte)(&DAT_100844581)[lVar64]);
                lVar49 = *(long *)(&DAT_100844588 + lVar64);
                uVar90 = 0;
                do {
                  pbVar38 = *(byte **)(param_1 + 0x5c);
                  lVar65 = (ulong)((((uint)pbVar38[2] |
                                    (uint)pbVar38[1] << 8 | (uint)*pbVar38 << 0x10) <<
                                    ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >>
                                  ((byte)local_70 & 0x1f)) * 3;
                  cVar30 = *(char *)(lVar49 + 2 + lVar65);
                  if (cVar30 < '\x01') {
                    FUN_1002725f8(param_1,&DAT_100844780 + (ulong)bVar97 * 0x18,local_58,&local_7c);
                    iVar82 = local_7c;
                    uVar85 = local_58[0];
                  }
                  else {
                    pcVar101 = (char *)(lVar65 + lVar49);
                    uVar46 = *(int *)(param_1 + 0x6c) + (int)cVar30;
                    pbVar38 = pbVar38 + (uVar46 >> 3);
                    uVar46 = uVar46 & 7;
                    cVar30 = *pcVar101;
                    local_58[0] = (uint)cVar30;
                    cVar29 = pcVar101[1];
                    local_7c = (int)cVar29;
                    *(byte **)(param_1 + 0x5c) = pbVar38;
                    *(uint *)(param_1 + 0x6c) = uVar46;
                    iVar82 = local_7c;
                    uVar85 = local_58[0];
                    if ((0xc < bVar97) && (cVar29 == '\x0f' || cVar30 == '\x0f')) {
                      bVar42 = (byte)uVar46;
                      if (cVar30 == '\x0f') {
                        bVar44 = (&DAT_100844580)[lVar64];
                        bVar41 = *pbVar38;
                        bVar43 = pbVar38[1];
                        bVar25 = pbVar38[2];
                        uVar46 = uVar46 + bVar44;
                        uVar85 = uVar46 >> 3;
                        *(byte **)(param_1 + 0x5c) = pbVar38 + uVar85;
                        uVar47 = uVar46 & 7;
                        *(uint *)(param_1 + 0x6c) = uVar47;
                        local_58[0] = ((((uint)bVar25 | (uint)bVar43 << 8 | (uint)bVar41 << 0x10) <<
                                        bVar42 & 0xffffff) >> (0x18 - bVar44 & 0x1f)) + 0xf;
                        bVar42 = pbVar38[uVar85];
                        pbVar38 = pbVar38 + uVar85 + (uVar47 + 1 >> 3);
                        *(byte **)(param_1 + 0x5c) = pbVar38;
                        uVar46 = uVar47 + 1 & 7;
                        *(uint *)(param_1 + 0x6c) = uVar46;
                        uVar85 = local_58[0];
                        if ((bVar42 >> ((byte)uVar47 ^ 7) & 1) != 0) {
                          local_58[0] = -local_58[0];
                          uVar85 = local_58[0];
                        }
                      }
                      else if (cVar30 == '\0') {
                        uVar85 = 0;
                      }
                      else {
                        bVar44 = *pbVar38;
                        pbVar38 = pbVar38 + (uVar46 + 1 >> 3);
                        *(byte **)(param_1 + 0x5c) = pbVar38;
                        uVar46 = uVar46 + 1 & 7;
                        *(uint *)(param_1 + 0x6c) = uVar46;
                        if ((bVar44 >> (bVar42 ^ 7) & 1) != 0) {
                          local_58[0] = -local_58[0];
                          uVar85 = local_58[0];
                        }
                      }
                      if (cVar29 == '\0') {
                        iVar82 = 0;
                      }
                      else {
                        if (cVar29 == '\x0f') {
                          bVar44 = *pbVar38;
                          bVar41 = pbVar38[1];
                          bVar43 = pbVar38[2];
                          sVar39 = (sbyte)uVar46;
                          bVar25 = (&DAT_100844580)[lVar64];
                          uVar46 = uVar46 + bVar25;
                          uVar47 = uVar46 >> 3;
                          *(byte **)(param_1 + 0x5c) = pbVar38 + uVar47;
                          uVar46 = uVar46 & 7;
                          *(uint *)(param_1 + 0x6c) = uVar46;
                          bVar42 = pbVar38[uVar47];
                          *(byte **)(param_1 + 0x5c) = pbVar38 + uVar47 + (uVar46 + 1 >> 3);
                          *(uint *)(param_1 + 0x6c) = uVar46 + 1 & 7;
                          iVar82 = ((((uint)bVar43 | (uint)bVar41 << 8 | (uint)bVar44 << 0x10) <<
                                     sVar39 & 0xffffff) >> (0x18 - bVar25 & 0x1f)) + 0xf;
                        }
                        else {
                          bVar42 = *pbVar38;
                          *(byte **)(param_1 + 0x5c) = pbVar38 + (uVar46 + 1 >> 3);
                          *(uint *)(param_1 + 0x6c) = uVar46 + 1 & 7;
                        }
                        local_7c = iVar82;
                        if ((bVar42 >> ((byte)uVar46 ^ 7) & 1) != 0) {
                          iVar82 = -iVar82;
                          local_7c = iVar82;
                        }
                      }
                    }
                  }
                  *psVar75 = (short)uVar85;
                  psVar75[1] = (short)iVar82;
                  psVar75 = psVar75 + 2;
                  uVar90 = uVar90 + 2;
                } while (uVar90 < uVar68);
                uVar87 = (ulong)((uVar68 - 1 & 0xfffffffe) + 2);
              }
            }
            uVar68 = (uint)local_78;
            if (uVar45 <= (uint)local_78) {
              uVar68 = uVar45;
            }
            local_78 = (undefined1 *)CONCAT44(local_78._4_4_,uVar68);
            uVar90 = (uint)uVar87;
            if (((bVar57 < 0xf) && ((0x4011U >> (bVar57 & 0x1f) & 1) != 0)) &&
               (uVar85 = uVar68 - uVar90, uVar90 <= uVar68 && uVar85 != 0)) {
              FUN_1001c62d9(psVar75,(ulong)uVar85 * 2);
              psVar75 = psVar75 + uVar85;
              uVar87 = (ulong)local_78 & 0xffffffff;
            }
            else if (uVar90 < uVar68) {
              lVar49 = (ulong)bVar57 * 0x10;
              cVar30 = (&DAT_100844581)[lVar49];
              pbVar38 = *(byte **)(&DAT_100844588 + lVar49);
              local_70 = pbVar38;
              do {
                pbVar98 = *(byte **)(param_1 + 0x5c);
                lVar64 = (ulong)((((uint)pbVar98[2] | (uint)pbVar98[1] << 8 | (uint)*pbVar98 << 0x10
                                  ) << ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >>
                                (0x18U - cVar30 & 0x1f)) * 3;
                if ((char)pbVar38[lVar64 + 2] < '\x01') {
                  FUN_1002725f8(param_1,&DAT_100844780 + (ulong)bVar57 * 0x18,local_58,&local_7c);
                  pbVar38 = local_70;
                  iVar82 = local_7c;
                  uVar68 = local_58[0];
                }
                else {
                  uVar90 = *(int *)(param_1 + 0x6c) + (int)(char)pbVar38[lVar64 + 2];
                  pbVar98 = pbVar98 + (uVar90 >> 3);
                  uVar90 = uVar90 & 7;
                  bVar97 = pbVar38[lVar64];
                  local_58[0] = (uint)(char)bVar97;
                  bVar42 = (pbVar38 + lVar64)[1];
                  local_7c = (int)(char)bVar42;
                  *(byte **)(param_1 + 0x5c) = pbVar98;
                  *(uint *)(param_1 + 0x6c) = uVar90;
                  iVar82 = local_7c;
                  uVar68 = local_58[0];
                  if ((0xc < bVar57) && (bVar42 == 0xf || bVar97 == 0xf)) {
                    bVar44 = (byte)uVar90;
                    if (bVar97 == 0xf) {
                      bVar97 = (&DAT_100844580)[lVar49];
                      bVar41 = *pbVar98;
                      bVar43 = pbVar98[1];
                      bVar25 = pbVar98[2];
                      uVar90 = uVar90 + bVar97;
                      uVar68 = uVar90 >> 3;
                      *(byte **)(param_1 + 0x5c) = pbVar98 + uVar68;
                      uVar85 = uVar90 & 7;
                      *(uint *)(param_1 + 0x6c) = uVar85;
                      local_58[0] = ((((uint)bVar25 | (uint)bVar43 << 8 | (uint)bVar41 << 0x10) <<
                                      bVar44 & 0xffffff) >> (0x18 - bVar97 & 0x1f)) + 0xf;
                      bVar97 = pbVar98[uVar68];
                      pbVar98 = pbVar98 + uVar68 + (uVar85 + 1 >> 3);
                      *(byte **)(param_1 + 0x5c) = pbVar98;
                      uVar90 = uVar85 + 1 & 7;
                      *(uint *)(param_1 + 0x6c) = uVar90;
                      pbVar38 = local_70;
                      uVar68 = local_58[0];
                      if ((bVar97 >> ((byte)uVar85 ^ 7) & 1) != 0) {
                        local_58[0] = -local_58[0];
                        uVar68 = local_58[0];
                      }
                    }
                    else if (bVar97 == 0) {
                      uVar68 = 0;
                    }
                    else {
                      bVar97 = *pbVar98;
                      pbVar98 = pbVar98 + (uVar90 + 1 >> 3);
                      *(byte **)(param_1 + 0x5c) = pbVar98;
                      uVar90 = uVar90 + 1 & 7;
                      *(uint *)(param_1 + 0x6c) = uVar90;
                      pbVar38 = local_70;
                      if ((bVar97 >> (bVar44 ^ 7) & 1) != 0) {
                        local_58[0] = -local_58[0];
                        uVar68 = local_58[0];
                      }
                    }
                    if (bVar42 == 0) {
                      iVar82 = 0;
                    }
                    else {
                      if (bVar42 == 0xf) {
                        bVar42 = *pbVar98;
                        bVar44 = pbVar98[1];
                        bVar41 = pbVar98[2];
                        sVar39 = (sbyte)uVar90;
                        bVar43 = (&DAT_100844580)[lVar49];
                        uVar90 = uVar90 + bVar43;
                        uVar85 = uVar90 >> 3;
                        *(byte **)(param_1 + 0x5c) = pbVar98 + uVar85;
                        uVar90 = uVar90 & 7;
                        *(uint *)(param_1 + 0x6c) = uVar90;
                        bVar97 = pbVar98[uVar85];
                        *(byte **)(param_1 + 0x5c) = pbVar98 + uVar85 + (uVar90 + 1 >> 3);
                        *(uint *)(param_1 + 0x6c) = uVar90 + 1 & 7;
                        iVar82 = ((((uint)bVar41 | (uint)bVar44 << 8 | (uint)bVar42 << 0x10) <<
                                   sVar39 & 0xffffff) >> (0x18 - bVar43 & 0x1f)) + 0xf;
                      }
                      else {
                        bVar97 = *pbVar98;
                        *(byte **)(param_1 + 0x5c) = pbVar98 + (uVar90 + 1 >> 3);
                        *(uint *)(param_1 + 0x6c) = uVar90 + 1 & 7;
                      }
                      pbVar38 = local_70;
                      local_7c = iVar82;
                      if ((bVar97 >> ((byte)uVar90 ^ 7) & 1) != 0) {
                        iVar82 = -iVar82;
                        local_7c = iVar82;
                      }
                    }
                  }
                }
                *psVar75 = (short)uVar68;
                psVar75[1] = (short)iVar82;
                psVar75 = psVar75 + 2;
                uVar68 = (int)uVar87 + 2;
                uVar87 = (ulong)uVar68;
              } while (uVar68 < (uint)local_78);
            }
            uVar68 = (uint)uVar87;
            if (((bVar40 < 0xf) && ((0x4011U >> (bVar40 & 0x1f) & 1) != 0)) &&
               (uVar90 = uVar45 - uVar68, uVar68 <= uVar45 && uVar90 != 0)) {
              uVar87 = (ulong)uVar45;
              FUN_1001c62d9(psVar75,(ulong)uVar90 * 2);
              psVar75 = psVar75 + uVar90;
              uVar48 = local_60;
              fVar111 = DAT_100700b50;
            }
            else {
              uVar48 = local_60;
              fVar111 = DAT_100700b50;
              if (uVar68 < uVar45) {
                lVar49 = (ulong)bVar40 * 0x10;
                local_78 = (undefined1 *)
                           CONCAT44(local_78._4_4_,0x18 - (uint)(byte)(&DAT_100844581)[lVar49]);
                pbVar38 = *(byte **)(&DAT_100844588 + lVar49);
                local_70 = pbVar38;
                do {
                  pbVar98 = *(byte **)(param_1 + 0x5c);
                  lVar64 = (ulong)((((uint)pbVar98[2] |
                                    (uint)pbVar98[1] << 8 | (uint)*pbVar98 << 0x10) <<
                                    ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >>
                                  ((byte)local_78 & 0x1f)) * 3;
                  if ((char)pbVar38[lVar64 + 2] < '\x01') {
                    FUN_1002725f8(param_1,&DAT_100844780 + (ulong)bVar40 * 0x18,local_58,&local_7c);
                    pbVar38 = local_70;
                    uVar48 = local_60;
                    fVar111 = DAT_100700b50;
                    uVar68 = local_58[0];
                    iVar82 = local_7c;
                  }
                  else {
                    uVar90 = *(int *)(param_1 + 0x6c) + (int)(char)pbVar38[lVar64 + 2];
                    pbVar98 = pbVar98 + (uVar90 >> 3);
                    uVar90 = uVar90 & 7;
                    bVar97 = pbVar38[lVar64];
                    local_58[0] = (uint)(char)bVar97;
                    bVar57 = (pbVar38 + lVar64)[1];
                    local_7c = (int)(char)bVar57;
                    *(byte **)(param_1 + 0x5c) = pbVar98;
                    *(uint *)(param_1 + 0x6c) = uVar90;
                    uVar68 = local_58[0];
                    iVar82 = local_7c;
                    if ((0xc < bVar40) && (bVar57 == 0xf || bVar97 == 0xf)) {
                      bVar42 = (byte)uVar90;
                      if (bVar97 == 0xf) {
                        bVar97 = (&DAT_100844580)[lVar49];
                        bVar44 = *pbVar98;
                        bVar41 = pbVar98[1];
                        bVar43 = pbVar98[2];
                        uVar90 = uVar90 + bVar97;
                        uVar85 = uVar90 >> 3;
                        *(byte **)(param_1 + 0x5c) = pbVar98 + uVar85;
                        uVar46 = uVar90 & 7;
                        *(uint *)(param_1 + 0x6c) = uVar46;
                        uVar68 = ((((uint)bVar43 | (uint)bVar41 << 8 | (uint)bVar44 << 0x10) <<
                                   bVar42 & 0xffffff) >> (0x18 - bVar97 & 0x1f)) + 0xf;
                        bVar97 = pbVar98[uVar85];
                        pbVar98 = pbVar98 + uVar85 + (uVar46 + 1 >> 3);
                        *(byte **)(param_1 + 0x5c) = pbVar98;
                        uVar90 = uVar46 + 1 & 7;
                        *(uint *)(param_1 + 0x6c) = uVar90;
                        pbVar38 = local_70;
                        uVar48 = local_60;
                        local_58[0] = uVar68;
                        if ((bVar97 >> ((byte)uVar46 ^ 7) & 1) != 0) {
                          uVar68 = -uVar68;
                          local_58[0] = uVar68;
                        }
                      }
                      else if (bVar97 == 0) {
                        uVar68 = 0;
                      }
                      else {
                        bVar97 = *pbVar98;
                        pbVar98 = pbVar98 + (uVar90 + 1 >> 3);
                        *(byte **)(param_1 + 0x5c) = pbVar98;
                        uVar90 = uVar90 + 1 & 7;
                        *(uint *)(param_1 + 0x6c) = uVar90;
                        pbVar38 = local_70;
                        if ((bVar97 >> (bVar42 ^ 7) & 1) != 0) {
                          uVar68 = -local_58[0];
                          local_58[0] = uVar68;
                        }
                      }
                      if (bVar57 == 0) {
                        iVar82 = 0;
                      }
                      else {
                        if (bVar57 == 0xf) {
                          bVar57 = *pbVar98;
                          bVar42 = pbVar98[1];
                          bVar44 = pbVar98[2];
                          sVar39 = (sbyte)uVar90;
                          bVar41 = (&DAT_100844580)[lVar49];
                          uVar90 = uVar90 + bVar41;
                          uVar85 = uVar90 >> 3;
                          *(byte **)(param_1 + 0x5c) = pbVar98 + uVar85;
                          uVar90 = uVar90 & 7;
                          *(uint *)(param_1 + 0x6c) = uVar90;
                          bVar97 = pbVar98[uVar85];
                          *(byte **)(param_1 + 0x5c) = pbVar98 + uVar85 + (uVar90 + 1 >> 3);
                          *(uint *)(param_1 + 0x6c) = uVar90 + 1 & 7;
                          iVar82 = ((((uint)bVar44 | (uint)bVar42 << 8 | (uint)bVar57 << 0x10) <<
                                     sVar39 & 0xffffff) >> (0x18 - bVar41 & 0x1f)) + 0xf;
                        }
                        else {
                          bVar97 = *pbVar98;
                          *(byte **)(param_1 + 0x5c) = pbVar98 + (uVar90 + 1 >> 3);
                          *(uint *)(param_1 + 0x6c) = uVar90 + 1 & 7;
                        }
                        pbVar38 = local_70;
                        local_7c = iVar82;
                        if ((bVar97 >> ((byte)uVar90 ^ 7) & 1) != 0) {
                          iVar82 = -iVar82;
                          local_7c = iVar82;
                        }
                      }
                    }
                  }
                  *psVar75 = (short)uVar68;
                  psVar75[1] = (short)iVar82;
                  psVar75 = psVar75 + 2;
                  uVar68 = (int)uVar87 + 2;
                  uVar87 = (ulong)uVar68;
                } while (uVar68 < uVar45);
              }
            }
            iVar69 = uVar31 + ((int)pbVar91 + (iVar69 - iVar77)) * 8;
            uVar60 = *(long *)(param_1 + 100) - (ulong)*(uint *)(param_1 + 0x58);
            pbVar91 = *(byte **)(param_1 + 0x5c);
            uVar68 = *(uint *)(param_1 + 0x6c);
            uVar31 = uVar68 + ((int)pbVar91 - (int)uVar60) * 8;
            uVar90 = (uint)*(ushort *)(lVar36 + uVar48 * 2) + iVar69;
            uVar45 = (uint)uVar87;
            if ((uVar31 < uVar90) && (uVar45 < 0x240)) {
              iVar77 = *(int *)(&DAT_10071d900 +
                               (ulong)*(byte *)(uVar48 + param_1 + 0x6b20 + lVar50) * 4);
              do {
                lVar49 = (ulong)((((uint)pbVar91[2] | (uint)pbVar91[1] << 8 | (uint)*pbVar91 << 0x10
                                  ) << ((byte)uVar68 & 0x1f)) >> 0xe & 0x3ff) * 5;
                cVar30 = (&UNK_10071d904)[lVar49 + iVar77];
                pbVar91 = pbVar91 + (uVar68 + (int)cVar30 >> 3);
                *(byte **)(param_1 + 0x5c) = pbVar91;
                uVar68 = uVar68 + (int)cVar30 & 7;
                *(uint *)(param_1 + 0x6c) = uVar68;
                auVar106 = pmovsxbw(ZEXT416(*(uint *)(&DAT_10071d900 + lVar49 + iVar77)),
                                    ZEXT416(*(uint *)(&DAT_10071d900 + lVar49 + iVar77)));
                *(long *)psVar75 = auVar106._0_8_;
                psVar75 = psVar75 + 4;
                uVar85 = (uint)uVar87;
                uVar45 = uVar85 + 4;
                uVar31 = uVar68 + ((int)pbVar91 - (int)uVar60) * 8;
                uVar90 = (uint)*(ushort *)(lVar36 + uVar48 * 2) + iVar69;
                if (uVar90 <= uVar31) break;
                uVar87 = (ulong)uVar45;
              } while (uVar85 < 0x23c);
            }
            uVar90 = uVar90 - uVar31;
            if ((int)uVar90 < 0) {
              bVar102 = uVar45 < 4;
              uVar45 = uVar45 - 4;
              if (bVar102) {
                uVar45 = 0;
              }
              uVar31 = -uVar90 - uVar68;
              if (-uVar90 < uVar68 || uVar31 == 0) {
                uVar90 = uVar90 + uVar68;
              }
              else {
                *(undefined4 *)(param_1 + 0x6c) = 0;
                uVar87 = (long)pbVar91 - (ulong)(uVar31 >> 3);
                *(ulong *)(param_1 + 0x5c) = uVar87;
                if ((uVar31 & 7) != 0) {
                  *(uint *)(param_1 + 0x6c) = 8 - (uVar31 & 7);
                  uVar87 = uVar87 - 1;
                  *(ulong *)(param_1 + 0x5c) = uVar87;
                }
                if (uVar60 <= uVar87) goto LAB_10026efad;
                *(ulong *)(param_1 + 0x5c) = uVar60;
                uVar90 = 0;
              }
LAB_10026efaa:
              *(uint *)(param_1 + 0x6c) = uVar90;
            }
            else {
              uVar31 = uVar68;
              if (0x10 < uVar90) {
                do {
                  pbVar91 = pbVar91 + (uVar31 + 0x10 >> 3);
                  uVar90 = uVar90 - 0x10;
                  uVar31 = 0;
                } while (0x10 < uVar90);
                uVar68 = uVar68 & 7;
LAB_10026ecbb:
                *(byte **)(param_1 + 0x5c) = pbVar91 + (uVar90 + uVar68 >> 3);
                uVar90 = uVar90 + uVar68 & 7;
                goto LAB_10026efaa;
              }
              if (uVar90 != 0) goto LAB_10026ecbb;
            }
LAB_10026efad:
            pcVar101 = (char *)(lVar74 + local_60);
            uVar87 = 0x240;
            if (uVar45 < 0x240) {
              uVar87 = (ulong)uVar45;
            }
            lVar36 = lVar6 + local_68 * 8;
            *(int *)(lVar36 + local_60 * 4) = (int)uVar87;
            if ((*pcVar101 == '\0') || (*(char *)(local_60 + lVar63 + local_68 * 2) != '\x02')) {
              uVar31 = (((int)uVar87 + 0x11U & 0xffff) / 0x24) * 2 + 2;
              if (0x1f < uVar31) {
                uVar31 = 0x20;
              }
              *(uint *)(lVar7 + local_68 * 8 + local_60 * 4) = uVar31;
            }
            else {
              *(undefined4 *)(lVar7 + local_68 * 8 + local_60 * 4) = 0x20;
            }
            puVar19 = (uint *)(lVar36 + local_60 * 4);
            if (uVar45 < 0x240) {
              FUN_1001c62d9(psVar75,uVar45 * -2 + 0x480);
              uVar87 = (ulong)*puVar19;
              fVar111 = DAT_100700b50;
            }
            uVar31 = (uint)uVar87;
            while ((uVar68 = 0, uVar31 != 0 && (uVar68 = (uint)uVar87, psVar5[uVar87] == 0))) {
              uVar31 = uVar68 - 1;
              uVar87 = (ulong)uVar31;
            }
            iVar69 = uVar68 + 1;
            if (psVar5[uVar68] == 0) {
              iVar69 = 0;
            }
            *(int *)(lVar61 + local_60 * 4) = iVar69;
            if ((*pcVar101 == '\0') || (*(char *)(local_60 + lVar63 + local_68 * 2) != '\x02')) {
              *(undefined1 *)(local_60 + lVar8 + local_68 * 2) = 0;
              cVar30 = '\0';
            }
            else {
              lVar36 = lVar8 + local_68 * 2;
              if (*pcVar35 == '\0') {
                *(undefined1 *)(local_60 + lVar36) = 2;
                cVar30 = '\x02';
              }
              else {
                if (*(char *)(param_1 + 0x13) == '\0') {
                  sVar58 = *(short *)(&DAT_10071c9d0 + uVar71 * 0x4a);
                }
                else {
                  sVar58 = *(short *)(&DAT_10071c9cc + uVar71 * 0x4a);
                }
                cVar30 = (sVar58 < iVar69) * '\x02';
                *(char *)(lVar36 + local_60) = cVar30;
              }
            }
            lVar36 = param_1 + 0x6c74 + local_68 * 8;
            *(undefined4 *)(lVar36 + local_60 * 4) = 0;
            lVar49 = lVar9 + uVar52 * 0x18;
            *(undefined8 *)(lVar49 + uVar53 * 0xc) = 0;
            *(undefined4 *)(lVar49 + 8 + uVar53 * 0xc) = 0;
            lVar64 = lVar10 + local_68 * 8;
            *(undefined4 *)(lVar64 + local_60 * 4) = 0;
            iVar69 = *(int *)(lVar61 + local_60 * 4);
            if (cVar30 == '\0') {
              lVar64 = 0;
              do {
                if (iVar69 <= *(short *)(&DAT_10071c9c0 + lVar64 * 2 + uVar71 * 0x4a))
                goto LAB_10026f297;
                lVar64 = lVar64 + 1;
              } while (lVar64 != 0x16);
              lVar64 = 0x16;
LAB_10026f297:
              *(int *)(lVar36 + local_60 * 4) = (int)lVar64;
            }
            else {
              piVar20 = (int *)(lVar49 + uVar53 * 0xc);
              piVar21 = (int *)(lVar64 + local_60 * 4);
              lVar36 = uVar71 * 0x4a;
              lVar64 = 0;
              do {
                if (iVar69 <= *(short *)(&DAT_10071c9ee + lVar64 * 2 + lVar36) * 3)
                goto LAB_10026f1f2;
                lVar64 = lVar64 + 1;
              } while (lVar64 != 0xd);
              lVar64 = 0xd;
LAB_10026f1f2:
              iVar69 = (int)lVar64;
              *piVar21 = iVar69;
              *piVar20 = iVar69;
              piVar20[1] = iVar69;
              piVar20[2] = iVar69;
              lVar64 = 0;
              do {
                lVar65 = (long)*piVar21;
                if (0 < lVar65) {
                  sVar58 = *(short *)(&DAT_10071c9ee + lVar65 * 2 + lVar36);
                  do {
                    iVar69 = (int)sVar58;
                    sVar58 = *(short *)(&UNK_10071c9ec + lVar65 * 2 + lVar36);
                    iVar82 = (int)sVar58;
                    iVar77 = iVar69 - iVar82;
                    if (iVar77 != 0 && iVar82 <= iVar69) {
                      iVar69 = iVar82 * 3 + iVar77 * (int)lVar64;
                      lVar83 = (long)iVar69;
                      do {
                        if (psVar5[lVar83] != 0) {
                          piVar20[lVar64] = (int)lVar65;
                          goto LAB_10026f262;
                        }
                        lVar83 = lVar83 + 1;
                      } while (lVar83 < iVar77 + iVar69);
                    }
                    bVar102 = 1 < lVar65;
                    lVar65 = lVar65 + -1;
                  } while (bVar102);
                }
LAB_10026f262:
                lVar64 = lVar64 + 1;
              } while (lVar64 != 3);
            }
            lVar36 = DAT_1008a32b0;
            if (cVar28 == '\0' || bVar103) {
              if (bVar103) {
                uVar31 = *puVar19;
                pfVar66 = (float *)(local_60 * 0x900 + lVar12);
                if (0 < (int)uVar31) {
                  pbVar91 = (byte *)(local_60 * 0x16 + local_68 * 0x2c + lVar99);
                  fVar22 = *(float *)(&DAT_1008a2eb0 +
                                     (ulong)*(byte *)(local_60 + lVar11 + local_68 * 2) * 4);
                  lVar33 = (ulong)(byte)((char)*(undefined4 *)
                                                (&DAT_10071c740 + (ulong)*(byte *)(param_1 + 2) * 4)
                                         * '\x03' + *(char *)(param_1 + 6)) * 0x4a;
                  uVar45 = (uint)*(byte *)(local_60 + lVar79 + local_68 * 2) << 7 |
                           (uint)*(byte *)(local_60 + lVar13 + local_68 * 2) << 8;
                  uVar68 = (int)*(short *)(&DAT_10071c9c2 + lVar33);
                  if ((int)uVar31 < (int)*(short *)(&DAT_10071c9c2 + lVar33)) {
                    uVar68 = uVar31;
                  }
                  uVar53 = (ulong)((uint)*pbVar91 << 2 | uVar45);
                  lVar94 = 0;
                  iVar69 = 0;
                  psVar75 = psVar5;
                  while( true ) {
                    fVar107 = (float)(~-(uint)(fVar111 <
                                              *(float *)(&DAT_1008a32c0 + uVar53 * 4) * fVar22) &
                                     (uint)(*(float *)(&DAT_1008a32c0 + uVar53 * 4) * fVar22));
                    uVar90 = uVar68;
                    if (3 < (int)uVar68) {
                      do {
                        *pfVar66 = *(float *)(lVar36 + (long)*psVar75 * 4) * fVar107;
                        pfVar66[1] = *(float *)(lVar36 + (long)psVar75[1] * 4) * fVar107;
                        pfVar66[2] = *(float *)(lVar36 + (long)psVar75[2] * 4) * fVar107;
                        psVar1 = psVar75 + 3;
                        psVar75 = psVar75 + 4;
                        pfVar66[3] = *(float *)(lVar36 + (long)*psVar1 * 4) * fVar107;
                        pfVar66 = pfVar66 + 4;
                        iVar69 = iVar69 + 4;
                        uVar68 = uVar90 - 4;
                        bVar103 = 7 < uVar90;
                        uVar90 = uVar68;
                      } while (bVar103);
                    }
                    if (0 < (int)uVar68) {
                      uVar90 = uVar68 + 1;
                      do {
                        sVar58 = *psVar75;
                        psVar75 = psVar75 + 1;
                        *pfVar66 = *(float *)(lVar36 + (long)sVar58 * 4) * fVar107;
                        pfVar66 = pfVar66 + 1;
                        uVar90 = uVar90 - 1;
                      } while (1 < uVar90);
                      iVar69 = uVar68 + iVar69;
                    }
                    uVar90 = uVar31 - iVar69;
                    if (uVar90 == 0 || (int)uVar31 < iVar69) break;
                    uVar68 = *(short *)(&DAT_10071c9c4 + lVar94 * 2 + lVar33) - iVar69;
                    if ((int)uVar90 <= *(short *)(&DAT_10071c9c4 + lVar94 * 2 + lVar33) - iVar69) {
                      uVar68 = uVar90;
                    }
                    lVar64 = lVar94 + 1;
                    puVar19 = &DAT_10073f794 + lVar94;
                    lVar94 = lVar94 + 1;
                    uVar53 = (ulong)(int)((uint)pbVar91[lVar64] << 2 | *puVar19 | uVar45);
                  }
                }
              }
              else {
                uVar31 = *puVar19;
                local_78 = (undefined1 *)(ulong)uVar31;
                if ((int)uVar31 < 1) {
                  pfVar66 = (float *)(local_60 * 0x900 + lVar12);
                }
                else {
                  fVar22 = *(float *)(&DAT_1008a2eb0 +
                                     (ulong)*(byte *)(local_60 + lVar11 + local_68 * 2) * 4);
                  uVar51 = *(undefined1 *)(local_60 + lVar13 + local_68 * 2);
                  local_70 = (byte *)((ulong)(byte)((char)*(undefined4 *)
                                                           (&DAT_10071c740 +
                                                           (ulong)*(byte *)(param_1 + 2) * 4) *
                                                    '\x03' + *(char *)(param_1 + 6)) * 0x4a);
                  iVar78 = (int)*(short *)(local_70 + 0x10071c9f0);
                  iVar69 = iVar78 * 3;
                  lVar64 = 0;
                  lVar65 = 0;
                  iVar77 = 0;
                  iVar82 = 0;
                  do {
                    if ((int)lVar65 == iVar69) {
                      lVar37 = (long)iVar82;
                      iVar82 = iVar82 + 1;
                      lVar83 = lVar37 + 1;
                      iVar69 = *(short *)(local_70 + (long)(&DAT_10071c9f2 + lVar37 * 2)) * 3;
                      iVar78 = (int)*(short *)(local_70 + (long)(&DAT_10071c9f2 + lVar37 * 2)) -
                               (int)*(short *)(local_70 + (long)(&DAT_10071c9f0 + lVar37 * 2));
                      iVar77 = *(short *)(local_70 + (long)(&DAT_10071c9f0 + lVar37 * 2)) * 3;
                    }
                    else {
                      lVar83 = (long)iVar82;
                    }
                    uVar53 = (long)((int)lVar65 - iVar77) / (long)iVar78 & 0xffffffff;
                    *(float *)(lVar55 + lVar65 * 4) =
                         (float)(~-(uint)(fVar111 <
                                         *(float *)(&DAT_1008a3ac0 +
                                                   (ulong)((uint)CONCAT11(uVar51,*(undefined1 *)
                                                                                  (uVar53 + lVar83 *
                                                                                            3 + 
                                                  lVar33 + lVar70)) |
                                                  (uint)*(byte *)(uVar53 + param_1 + 0x6ae4 +
                                                                           uVar52 * 6 + lVar94) << 5
                                                  ) * 4) * fVar22) &
                                (uint)(*(float *)(&DAT_1008a3ac0 +
                                                 (ulong)((uint)CONCAT11(uVar51,*(undefined1 *)
                                                                                (uVar53 + lVar83 * 3
                                                                                          + lVar33 +
                                                                                          lVar70)) |
                                                        (uint)*(byte *)(uVar53 + param_1 + 0x6ae4 +
                                                                                 uVar52 * 6 + lVar94
                                                                       ) << 5) * 4) * fVar22)) *
                         *(float *)(lVar36 + (long)psVar5[lVar65] * 4);
                    lVar65 = lVar65 + 1;
                    lVar64 = lVar64 + -4;
                  } while (uVar31 != (uint)lVar65);
                  pfVar66 = (float *)(lVar55 - lVar64);
                }
              }
              FUN_1001c62d9(pfVar66);
            }
            else {
              local_78 = (undefined1 *)(local_60 * 0x16 + local_68 * 0x2c + lVar99);
              fVar22 = *(float *)(&DAT_1008a2eb0 +
                                 (ulong)*(byte *)(local_60 + lVar11 + local_68 * 2) * 4);
              pfVar66 = (float *)(lVar12 + local_60 * 0x900);
              uVar53 = (ulong)*(byte *)(local_60 + lVar13 + local_68 * 2) << 8;
              bVar97 = *(byte *)(local_60 + lVar79 + local_68 * 2);
              cVar28 = *(char *)(param_1 + 0x13);
              pbVar91 = (byte *)((ulong)(byte)((char)*(undefined4 *)
                                                      (&DAT_10071c740 +
                                                      (ulong)*(byte *)(param_1 + 2) * 4) * '\x03' +
                                              *(char *)(param_1 + 6)) * 0x4a);
              sVar58 = 0;
              lVar64 = 0;
              iVar69 = 0;
              psVar75 = psVar5;
              do {
                iVar78 = (int)sVar58;
                sVar58 = *(short *)(pbVar91 + (long)(&DAT_10071c9c2 + lVar64 * 2));
                iVar82 = (int)sVar58;
                fVar107 = *(float *)(&DAT_1008a32c0 +
                                    ((long)(int)(&DAT_10073f790)[lVar64] | (ulong)bVar97 << 7 |
                                     (ulong)(byte)local_78[lVar64] << 2 | uVar53) * 4) * fVar22;
                iVar77 = iVar82 - iVar78;
                if (iVar77 != 0 && iVar78 <= iVar82) {
                  do {
                    sVar27 = *psVar75;
                    psVar75 = psVar75 + 1;
                    *pfVar66 = *(float *)(lVar36 + (long)sVar27 * 4) *
                               (float)(~-(uint)(fVar111 < fVar107) & (uint)fVar107);
                    pfVar66 = pfVar66 + 1;
                    iVar77 = iVar77 + -1;
                  } while (iVar77 != 0);
                  iVar69 = (iVar69 - iVar78) + iVar82;
                }
                lVar64 = lVar64 + 1;
              } while (lVar64 != (ulong)(cVar28 == '\0') * 2 + 6);
              local_70 = pbVar91;
              if (*(char *)(local_60 + lVar8 + local_68 * 2) == '\x02') {
                uVar31 = *(uint *)(lVar10 + local_68 * 8);
                uVar68 = *(uint *)(param_1 + 0x6cb8 + local_68 * 8);
                if ((int)uVar68 < (int)uVar31) {
                  uVar68 = uVar31;
                }
                if (3 < (int)uVar68) {
                  uVar87 = (ulong)*(ushort *)(pbVar91 + 0x10071c9f4);
                  uVar71 = 3;
                  do {
                    uVar48 = uVar71 + 1;
                    iVar77 = (int)(short)uVar87;
                    uVar87 = (ulong)*(short *)(pbVar91 + (long)(&DAT_10071c9f0 + uVar71 * 2));
                    iVar82 = *(short *)(pbVar91 + (long)(&DAT_10071c9f0 + uVar71 * 2)) - iVar77;
                    local_70 = (byte *)((long)-iVar77 + uVar87);
                    lVar64 = 0;
                    puVar100 = (undefined1 *)(long)(iVar77 * 3);
                    do {
                      local_78 = puVar100;
                      if (0 < iVar82) {
                        puVar100 = local_78;
                        do {
                          fVar107 = *(float *)(&DAT_1008a3ac0 +
                                              (ulong)((uint)*(byte *)(uVar71 * 3 + lVar33 + lVar70 +
                                                                     lVar64) |
                                                      (uint)*(byte *)(param_1 + 0x6ae4 + uVar52 * 6
                                                                     + lVar94 + lVar64) << 5 |
                                                     (uint)uVar53) * 4) * fVar22;
                          *(float *)(lVar55 + (long)puVar100 * 4) =
                               (float)(~-(uint)(fVar111 < fVar107) & (uint)fVar107) *
                               *(float *)(lVar36 + (long)*(short *)(param_1 + 0x6cc4 +
                                                                   (long)puVar100 * 2) * 4);
                          iVar69 = iVar69 + 1;
                          puVar100 = puVar100 + 1;
                        } while ((long)puVar100 < (long)(iVar82 * (int)lVar64 + iVar82 + iVar77 * 3)
                                );
                      }
                      lVar64 = lVar64 + 1;
                      puVar100 = local_78 + (long)local_70;
                    } while (lVar64 != 3);
                    uVar71 = uVar48;
                  } while (uVar48 != uVar68);
                }
                if (iVar69 < 0x240) {
                  pfVar66 = (float *)(local_60 * 0x900 + param_1 + (long)iVar69 * 4 + 0x7164);
LAB_10026f7d6:
                  ___bzero(pfVar66);
                }
              }
              else if (iVar69 < 0x240) goto LAB_10026f7d6;
            }
            uVar53 = local_60 + 1;
            bVar97 = *(byte *)(param_1 + 0x15);
            local_120 = local_120 + 0x16;
            local_1f0 = local_1f0 + 0x27;
            local_a0 = local_a0 + 0x27;
            local_2a8 = local_2a8 + 0x16;
            local_2b0 = local_2b0 + 0x16;
            local_178 = local_178 + 0x16;
            local_180 = local_180 + 0x16;
            local_188 = local_188 + 0x16;
            local_190 = local_190 + 0x16;
            local_198 = local_198 + 0x16;
            local_1e8 = local_1e8 + 0x27;
            lVar55 = lVar55 + 0x900;
          } while (uVar53 < bVar97);
          if (bVar97 < 2) {
LAB_1002702c6:
            if (bVar97 == 0) {
              uVar53 = 0;
              goto LAB_1002707c4;
            }
          }
          else if (*(char *)(param_1 + 9) == '\x01') {
            iVar69 = *(int *)(lVar7 + local_68 * 8);
            iVar77 = *(int *)(param_1 + 0x6b0c + local_68 * 8);
            if (iVar69 < iVar77) {
              *(int *)(lVar7 + local_68 * 8) = iVar77;
            }
            else if (iVar77 < iVar69) {
              *(int *)(param_1 + 0x6b0c + local_68 * 8) = iVar69;
            }
            uVar31 = *(uint *)(lVar6 + local_68 * 8);
            uVar68 = *(uint *)(param_1 + 0x6afc + local_68 * 8);
            if ((int)uVar31 < (int)uVar68) {
              *(uint *)(lVar6 + local_68 * 8) = uVar68;
              uVar31 = uVar68;
            }
            else if ((int)uVar68 < (int)uVar31) {
              *(uint *)(param_1 + 0x6afc + local_68 * 8) = uVar31;
              uVar68 = uVar31;
            }
            bVar97 = *(byte *)(param_1 + 10);
            uVar53 = (ulong)bVar97;
            if ((bVar97 & 1) == 0) {
              if ((bVar97 & 2) != 0) {
                if ((int)uVar68 < (int)uVar31) {
                  uVar68 = uVar31;
                }
                if (0 < (int)uVar68) {
                  uVar53 = 0;
                  do {
                    fVar111 = *(float *)(param_1 + 0x7164 + uVar53 * 4);
                    fVar22 = *(float *)(param_1 + 0x7a64 + uVar53 * 4);
                    dVar104 = (double)(fVar111 - fVar22) * DAT_10071c700;
                    *(float *)(param_1 + 0x7164 + uVar53 * 4) =
                         (float)((double)(fVar111 + fVar22) * DAT_10071c700);
                    *(float *)(param_1 + 0x7a64 + uVar53 * 4) = (float)dVar104;
                    uVar53 = uVar53 + 1;
                  } while (uVar68 != uVar53);
                }
              }
            }
            else {
              local_60 = CONCAT44(local_60._4_4_,(uint)bVar97);
              if ((*(char *)(lVar3 + local_68 * 2) == '\0') ||
                 (*(char *)(lVar63 + local_68 * 2) != '\x02')) {
                uVar31 = *(uint *)(param_1 + 0x6c74 + local_68 * 8);
                uVar68 = *(uint *)(param_1 + 0x6c78 + local_68 * 8);
                if ((int)uVar68 < (int)uVar31) {
                  uVar68 = uVar31;
                }
                *(undefined1 *)(lVar14 + local_68 * 4) = 0xff;
                if (0 < (int)uVar68) {
                  uVar71 = 0;
                  do {
                    if ((((uVar53 & 1) == 0) ||
                        ((long)uVar71 < (long)*(int *)(param_1 + 0x6c78 + local_68 * 8))) ||
                       (*(char *)(local_1b8 + uVar71) == *(char *)(local_150 + uVar71))) {
                      if ((uVar53 & 2) != 0) {
                        FUN_100272ada(param_1,local_68,uVar71 & 0xffffffff,0);
                        goto LAB_10026ffd8;
                      }
                    }
                    else {
                      if (((uint)uVar71 & 0xff) < (uint)*(byte *)(lVar14 + local_68 * 4)) {
                        *(char *)(lVar14 + local_68 * 4) = (char)uVar71;
                      }
                      FUN_100272949(param_1,local_68,uVar71 & 0xffffffff,0);
LAB_10026ffd8:
                      uVar53 = local_60 & 0xffffffff;
                    }
                    uVar71 = uVar71 + 1;
                  } while (uVar68 != uVar71);
                }
              }
              else if (*(char *)(param_1 + 0x6ae0 + local_68 * 2) == '\0') {
                uVar31 = *(uint *)(lVar10 + local_68 * 8);
                uVar68 = *(uint *)(param_1 + 0x6cb8 + local_68 * 8);
                if ((int)uVar68 < (int)uVar31) {
                  uVar68 = uVar31;
                }
                local_70 = local_228;
                puVar32 = (undefined1 *)0x0;
                do {
                  lVar88 = lVar14 + local_68 * 4;
                  puVar32[lVar88 + 1] = 0xff;
                  if (0 < (int)uVar68) {
                    pbVar38 = puVar32 + lVar88 + 1;
                    lVar88 = (long)puVar32 * 4;
                    uVar71 = 0;
                    pbVar91 = local_70;
                    local_78 = puVar32;
                    do {
                      if ((((uVar53 & 1) == 0) ||
                          ((long)uVar71 < (long)*(int *)(lVar49 + lVar88 + 0xc))) ||
                         (*pbVar91 == *(byte *)(local_268 + uVar71))) {
                        if ((uVar53 & 2) != 0) {
                          FUN_100272ada(param_1,local_68,uVar71 & 0xffffffff,
                                        (ulong)puVar32 & 0xffffffff);
                          uVar53 = local_60 & 0xffffffff;
                          puVar32 = local_78;
                        }
                      }
                      else {
                        if (((uint)uVar71 & 0xff) < (uint)*pbVar38) {
                          *pbVar38 = (byte)uVar71;
                        }
                        FUN_100272949(param_1,local_68,uVar71 & 0xffffffff,
                                      (ulong)puVar32 & 0xffffffff);
                        uVar53 = local_60 & 0xffffffff;
                        puVar32 = local_78;
                      }
                      uVar71 = uVar71 + 1;
                      pbVar91 = pbVar91 + 3;
                    } while (uVar68 != uVar71);
                  }
                  puVar32 = puVar32 + 1;
                  local_70 = local_70 + 1;
                } while (puVar32 != (undefined1 *)0x3);
              }
              else {
                cVar28 = *(char *)(param_1 + 0x13);
                local_70 = (byte *)(lVar14 + local_68 * 4);
                *(undefined1 *)(param_1 + 0x8364 + local_68 * 4) = 0xff;
                uVar71 = 0;
                do {
                  if ((((uVar53 & 1) == 0) || (*(char *)(param_1 + 0x6c71 + local_68 * 2) != '\0'))
                     || (((long)uVar71 < (long)*(int *)(param_1 + 0x6c78 + local_68 * 8) ||
                         (*(char *)(local_1b8 + uVar71) == *(char *)(local_150 + uVar71))))) {
                    if ((uVar53 & 2) != 0) {
                      FUN_100272ada(param_1,local_68,uVar71 & 0xffffffff,0);
                      uVar53 = local_60 & 0xffffffff;
                    }
                  }
                  else {
                    if (uVar71 < *local_70) {
                      *local_70 = (byte)uVar71;
                    }
                    FUN_100272949(param_1,local_68,uVar71 & 0xffffffff,0);
                    uVar53 = local_60 & 0xffffffff;
                  }
                  uVar71 = uVar71 + 1;
                } while ((ulong)(cVar28 == '\0') * 2 + 6 != uVar71);
                uVar31 = *(uint *)(lVar10 + local_68 * 8);
                uVar68 = *(uint *)(param_1 + 0x6cb8 + local_68 * 8);
                if ((int)uVar68 < (int)uVar31) {
                  uVar68 = uVar31;
                }
                local_78 = (undefined1 *)(ulong)uVar68;
                local_100 = local_230;
                uVar71 = 0;
                do {
                  local_70[uVar71 + 1] = 0xff;
                  if (3 < (int)(uint)local_78) {
                    puVar32 = (undefined1 *)0x3;
                    pcVar35 = pcVar86;
                    pcVar101 = local_100;
                    do {
                      if ((((uVar53 & 1) == 0) ||
                          ((long)puVar32 < (long)*(int *)(lVar49 + uVar71 * 4 + 0xc))) ||
                         (*pcVar101 == *pcVar35)) {
                        if ((uVar53 & 2) != 0) {
                          FUN_100272ada(param_1,local_68,(ulong)puVar32 & 0xffffffff,
                                        uVar71 & 0xffffffff);
                          uVar53 = local_60 & 0xffffffff;
                        }
                      }
                      else {
                        if (((uint)puVar32 & 0xff) < (uint)local_70[uVar71 + 1]) {
                          local_70[uVar71 + 1] = (byte)puVar32;
                        }
                        FUN_100272949(param_1,local_68,(ulong)puVar32 & 0xffffffff,
                                      uVar71 & 0xffffffff);
                        uVar53 = local_60 & 0xffffffff;
                      }
                      puVar32 = puVar32 + 1;
                      pcVar35 = pcVar35 + 1;
                      pcVar101 = pcVar101 + 3;
                    } while (local_78 != puVar32);
                  }
                  uVar71 = uVar71 + 1;
                  local_100 = local_100 + 1;
                } while (uVar71 != 3);
              }
            }
            iVar69 = *(int *)(param_1 + 0x6c60 + local_68 * 8);
            iVar77 = *(int *)(param_1 + 0x6c64 + local_68 * 8);
            if (iVar77 < iVar69) {
              iVar77 = iVar69;
            }
            *(int *)(param_1 + 0x6c60 + local_68 * 8) = iVar77;
            *(int *)(param_1 + 0x6c64 + local_68 * 8) = iVar77;
            iVar69 = *(int *)(param_1 + 0x6c74 + local_68 * 8);
            iVar77 = *(int *)(param_1 + 0x6c78 + local_68 * 8);
            if (iVar77 < iVar69) {
              iVar77 = iVar69;
            }
            *(int *)(param_1 + 0x6c74 + local_68 * 8) = iVar77;
            *(int *)(param_1 + 0x6c78 + local_68 * 8) = iVar77;
            iVar69 = *(int *)(param_1 + 0x6cb4 + local_68 * 8);
            iVar77 = *(int *)(param_1 + 0x6cb8 + local_68 * 8);
            if (iVar77 < iVar69) {
              iVar77 = iVar69;
            }
            *(int *)(param_1 + 0x6cb4 + local_68 * 8) = iVar77;
            *(int *)(param_1 + 0x6cb8 + local_68 * 8) = iVar77;
            uVar108 = *(undefined8 *)(lVar9 + uVar52 * 0x18);
            uVar24 = *(undefined8 *)(param_1 + 0x6c90 + uVar52 * 0x18);
            iVar69 = (int)uVar108;
            iVar78 = (int)uVar24;
            iVar82 = (int)((ulong)uVar24 >> 0x20);
            iVar77 = (int)((ulong)uVar108 >> 0x20);
            uVar108 = CONCAT44((uint)(iVar82 < iVar77) * iVar77 | (uint)(iVar82 >= iVar77) * iVar82,
                               (uint)(iVar78 < iVar69) * iVar69 | (uint)(iVar78 >= iVar69) * iVar78)
            ;
            *(undefined8 *)(lVar9 + uVar52 * 0x18) = uVar108;
            *(undefined8 *)(param_1 + 0x6c90 + uVar52 * 0x18) = uVar108;
            iVar69 = *(int *)(param_1 + 0x6c8c + uVar52 * 0x18);
            iVar77 = *(int *)(param_1 + 0x6c98 + uVar52 * 0x18);
            if (iVar77 < iVar69) {
              iVar77 = iVar69;
            }
            *(int *)(param_1 + 0x6c8c + uVar52 * 0x18) = iVar77;
            *(int *)(param_1 + 0x6c98 + uVar52 * 0x18) = iVar77;
            bVar97 = *(byte *)(param_1 + 0x15);
            goto LAB_1002702c6;
          }
          uVar52 = 0;
          puVar32 = (undefined1 *)(param_1 + 0x2298);
          lVar88 = lVar12;
          do {
            bVar97 = *(byte *)(param_1 + 6);
            if ((*(char *)(uVar52 + lVar74) == '\0') ||
               (*(char *)(uVar52 + lVar63 + local_68 * 2) != '\x02')) {
              lVar50 = uVar52 * 0x900 + lVar12;
              *(long *)(param_1 + 0x4f98) = lVar50;
            }
            else {
              iVar69 = *(int *)(&DAT_10071c740 + (ulong)*(byte *)(param_1 + 2) * 4);
              *(long *)(param_1 + 0x4f98) = lVar15;
              lVar56 = (long)(int)(iVar69 * 3 + (uint)bVar97);
              if (*(char *)(uVar52 + lVar18) == '\0') {
                lVar61 = 0;
              }
              else {
                lVar61 = 0;
                lVar50 = 0;
                do {
                  iVar69 = (short)lVar61 * 3;
                  lVar61 = (long)*(short *)(&DAT_10071c9f0 + lVar50 * 2 + lVar56 * 0x4a);
                  if (iVar69 < (int)(lVar61 * 3)) {
                    lVar72 = (long)iVar69;
                    do {
                      *(undefined4 *)(lVar15 + lVar72 * 4) = *(undefined4 *)(lVar88 + lVar72 * 4);
                      lVar72 = lVar72 + 1;
                    } while (lVar61 * 3 != lVar72);
                  }
                  lVar50 = lVar50 + 1;
                } while (lVar50 != 3);
                lVar61 = 3;
              }
              lVar56 = lVar56 * 0x4a;
              uVar31 = (uint)*(ushort *)(&DAT_10071c9ee + lVar61 * 2 + lVar56);
              do {
                sVar58 = (short)uVar31;
                uVar31 = (uint)*(short *)(&DAT_10071c9f0 + lVar61 * 2 + lVar56);
                lVar61 = lVar61 + 1;
                uVar68 = uVar31 - (int)sVar58;
                iVar69 = sVar58 * 3;
                puVar62 = (undefined4 *)(lVar15 + (long)iVar69 * 4);
                lVar50 = 0;
                do {
                  if (0 < (int)uVar68) {
                    uVar53 = 0;
                    puVar95 = puVar62;
                    do {
                      *puVar95 = *(undefined4 *)((long)iVar69 * 4 + lVar88 + uVar53 * 4);
                      uVar53 = uVar53 + 1;
                      puVar95 = puVar95 + 3;
                    } while (uVar68 != uVar53);
                  }
                  lVar50 = lVar50 + 1;
                  puVar62 = puVar62 + 1;
                  iVar69 = iVar69 + uVar68;
                } while (lVar50 != 3);
                lVar50 = lVar15;
              } while (lVar61 != 0xd);
            }
            cVar28 = *(char *)(lVar74 + uVar52);
            local_78 = puVar32;
            local_60 = uVar52;
            if ((cVar28 == '\0') || (*(char *)(uVar52 + lVar63 + local_68 * 2) != '\x02')) {
              iVar69 = *(int *)(lVar7 + local_68 * 8 + uVar52 * 4);
              if (1 < iVar69) {
                iVar69 = iVar69 + -1;
                goto LAB_1002704c3;
              }
LAB_10027061c:
              uVar31 = (uint)(bVar97 == 2 && *(char *)(param_1 + 0x11) == '\x02') * 2 + 2;
              if ((cVar28 == '\0') || (cVar28 = '\0', *(char *)(uVar52 + lVar18) == '\0'))
              goto LAB_100270650;
LAB_100270687:
              FUN_1003bd030(param_1,cVar28,0,uVar31 - 1,uVar52 & 0xffffffff);
            }
            else {
              bVar103 = bVar97 == 2 && *(char *)(param_1 + 0x11) == '\x02';
              if (*(char *)(uVar52 + lVar18) != '\0') {
                iVar69 = (uint)bVar103 * 2 + 1;
LAB_1002704c3:
                pfVar66 = (float *)(lVar50 + 0x44);
                iVar77 = 0;
                do {
                  pfVar80 = pfVar66;
                  uVar53 = 0;
                  do {
                    fVar111 = (float)(&DAT_1008a45c0)[uVar53];
                    fVar22 = (float)(&DAT_1008a45e0)[uVar53];
                    fVar107 = *pfVar80;
                    fVar23 = *(float *)(lVar50 + 0x48 + uVar53 * 4);
                    *pfVar80 = fVar107 * fVar111 - fVar22 * fVar23;
                    *(float *)(lVar50 + 0x48 + uVar53 * 4) = fVar23 * fVar111 + fVar22 * fVar107;
                    fVar111 = (float)(&DAT_1008a45c4)[uVar53];
                    fVar22 = (float)(&DAT_1008a45e4)[uVar53];
                    fVar107 = pfVar80[-1];
                    fVar23 = *(float *)(lVar50 + 0x4c + uVar53 * 4);
                    pfVar80[-1] = fVar107 * fVar111 - fVar22 * fVar23;
                    *(float *)(lVar50 + 0x4c + uVar53 * 4) = fVar23 * fVar111 + fVar22 * fVar107;
                    fVar111 = (float)(&DAT_1008a45c8)[uVar53];
                    fVar22 = (float)(&DAT_1008a45e8)[uVar53];
                    fVar107 = pfVar80[-2];
                    fVar23 = *(float *)(lVar50 + 0x50 + uVar53 * 4);
                    pfVar80[-2] = fVar107 * fVar111 - fVar22 * fVar23;
                    *(float *)(lVar50 + 0x50 + uVar53 * 4) = fVar23 * fVar111 + fVar22 * fVar107;
                    fVar111 = (float)(&DAT_1008a45cc)[uVar53];
                    fVar22 = (float)(&DAT_1008a45ec)[uVar53];
                    fVar107 = pfVar80[-3];
                    fVar23 = *(float *)(lVar50 + 0x54 + uVar53 * 4);
                    pfVar80[-3] = fVar107 * fVar111 - fVar22 * fVar23;
                    *(float *)(lVar50 + 0x54 + uVar53 * 4) = fVar23 * fVar111 + fVar22 * fVar107;
                    pfVar80 = pfVar80 + -4;
                    uVar71 = uVar53 & 0xfffffffc;
                    uVar53 = uVar53 + 4;
                  } while (uVar71 == 0);
                  iVar77 = iVar77 + 1;
                  pfVar66 = pfVar66 + 0x12;
                  lVar50 = lVar50 + 0x48;
                } while (iVar77 != iVar69);
                cVar28 = *(char *)(lVar74 + uVar52);
                goto LAB_10027061c;
              }
              uVar31 = (uint)bVar103 * 2 + 2;
LAB_100270650:
              cVar28 = *(char *)(uVar52 + lVar63 + local_68 * 2);
              if (cVar28 != '\x02') goto LAB_100270687;
              FUN_1003bc61e(param_1,2,0,uVar31 - 1,uVar52 & 0xffffffff);
            }
            cVar28 = *(char *)(uVar52 + lVar63 + local_68 * 2);
            uVar68 = *(uint *)(lVar7 + local_68 * 8 + uVar52 * 4);
            if (uVar68 <= uVar31) {
              uVar68 = uVar31;
            }
            if (cVar28 == '\x02') {
              FUN_1003bc61e(param_1,2);
              uVar52 = local_60;
              FUN_1003bcd27(param_1,2,uVar68,0x1f,local_60 & 0xffffffff);
            }
            else {
              FUN_1003bd030(param_1,cVar28,uVar31,uVar68 - 1,uVar52);
              uVar52 = local_60;
              FUN_1003bdba9(param_1,cVar28,uVar68,0x1f,local_60 & 0xffffffff);
            }
            lVar50 = 0;
            uVar31 = local_144;
            do {
              puVar62 = (undefined4 *)(param_1 + 25000 + lVar50 * 4);
              lVar56 = 0;
              do {
                *(undefined4 *)(local_78 + lVar56 * 4 + (ulong)uVar31 * 0x80) = *puVar62;
                puVar62 = puVar62 + 0x12;
                lVar56 = lVar56 + 1;
              } while ((int)lVar56 != 0x20);
              lVar50 = lVar50 + 1;
              uVar31 = uVar31 + 1;
            } while (lVar50 != 0x12);
            uVar52 = uVar52 + 1;
            uVar53 = (ulong)*(byte *)(param_1 + 0x15);
            lVar88 = lVar88 + 0x900;
            puVar32 = local_78 + 0x1200;
          } while (uVar52 < uVar53);
        }
LAB_1002707c4:
        local_68 = local_68 + 1;
        local_150 = local_150 + 0x16;
        lVar89 = lVar89 + 0x2c;
        lVar73 = lVar73 + 0x4e;
        lVar67 = lVar67 + 0x4e;
        lVar76 = lVar76 + 0x2c;
        lVar81 = lVar81 + 0x2c;
        lVar84 = lVar84 + 0x2c;
        lVar96 = lVar96 + 0x4e;
        local_1b8 = local_1b8 + 0x2c;
        pcVar86 = pcVar86 + 0xd;
        local_230 = local_230 + 0x4e;
        local_268 = local_268 + 0xd;
        local_228 = local_228 + 0x4e;
        local_144 = local_144 + 0x12;
      } while (local_68 < *(uint *)(param_1 + 0x6aa8));
    }
    FUN_100271db7(param_1);
    uVar71 = *(ulong *)(param_1 + 0x5c);
    uVar53 = *(ulong *)(param_1 + 0x70);
    uVar52 = (ulong)*(uint *)(param_1 + 0x78);
  }
  iVar69 = 0;
  if (uVar71 < uVar52 + uVar53) {
    iVar69 = (int)(uVar52 + uVar53) - (int)uVar71;
  }
  if (iVar69 != 0) {
    FUN_1001c631b(uVar71,uVar53,iVar69);
  }
  *(int *)(param_1 + 0x78) = iVar69;
  switch(*(undefined1 *)(param_1 + 10)) {
  case 0:
    lVar63 = 0x837c;
    break;
  case 2:
    lVar63 = 0x8374;
    break;
  case 3:
    *(int *)(param_1 + 0x8374) = *(int *)(param_1 + 0x8374) + 1;
  case 1:
    lVar63 = 0x8378;
    break;
  default:
    goto switchD_10027087a_default;
  }
  *(int *)(param_1 + lVar63) = *(int *)(param_1 + lVar63) + 1;
switchD_10027087a_default:
  if ((ulong)*(uint *)(param_1 + 0x6aa8) != 0) {
    lVar63 = param_1 + 0x6b1c;
    uVar53 = 0;
    do {
      if ((ulong)*(byte *)(param_1 + 0x15) != 0) {
        uVar52 = 0;
        do {
          if (*(char *)(lVar63 + -0x40 + uVar52) == '\x02') {
            *(int *)(param_1 + 0x8380) = *(int *)(param_1 + 0x8380) + 1;
          }
          if (*(char *)(lVar63 + uVar52) != '\0') {
            *(int *)(param_1 + 0x8384) = *(int *)(param_1 + 0x8384) + 1;
          }
          if (*(char *)(lVar63 + -4 + uVar52) != '\0') {
            *(int *)(param_1 + 0x8388) = *(int *)(param_1 + 0x8388) + 1;
          }
          uVar52 = uVar52 + 1;
        } while (*(byte *)(param_1 + 0x15) != uVar52);
      }
      uVar53 = uVar53 + 1;
      lVar63 = lVar63 + 2;
    } while (uVar53 != *(uint *)(param_1 + 0x6aa8));
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

