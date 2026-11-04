// name: FUN_1002e922d
// address: 1002e922d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002e922d(long param_1,ulong param_2,uint param_3,undefined4 param_4)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  char cVar29;
  int iVar30;
  undefined4 uVar31;
  undefined8 uVar32;
  char *pcVar33;
  long lVar34;
  ulong uVar35;
  float *pfVar36;
  int iVar37;
  float *pfVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  int iVar42;
  long lVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar52;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  float fVar54;
  long lVar55;
  float fVar56;
  uint uVar57;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar32 = FUN_1001cc310();
    cVar29 = _os_log_type_enabled(uVar32,0x10);
    if (cVar29 != '\0') {
      pcVar33 = "normData != nullptr";
LAB_1002e9778:
      uStack_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar33,0);
      uStack_48 = (undefined6)((ulong)pcVar33 >> 0x10);
      __os_log_error_impl(0x100000000,uVar32,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else if (param_2 == 0) {
    uVar32 = FUN_1001cc310();
    cVar29 = _os_log_type_enabled(uVar32,0x10);
    if (cVar29 != '\0') {
      pcVar33 = "samples != nullptr";
      goto LAB_1002e9778;
    }
  }
  else {
    if (param_3 - 1 < 2) {
      auVar49 = *(undefined1 (*) [16])(param_1 + 0x2080);
      lVar55 = auVar49._0_8_;
      lVar39 = auVar49._8_8_;
      if (((param_3 == 2) && ((param_2 & 0xf) == 0)) && (*(char *)(param_1 + 0x217c) == '\x01')) {
        auVar53 = *(undefined1 (*) [16])(param_1 + 0x2090);
        auVar47._0_8_ = -(ulong)(lVar55 == 0);
        auVar47._8_8_ = -(ulong)(lVar39 == 0);
        lVar43 = auVar53._0_8_;
        auVar48._0_8_ = -(ulong)(lVar43 == 0);
        lVar34 = auVar53._8_8_;
        auVar48._8_8_ = -(ulong)(lVar34 == 0);
        auVar48 = packssdw(auVar47,auVar48);
        iVar30 = movmskps((uint)param_2 & 0xf,auVar48);
        uVar31 = 0;
        if (iVar30 != 0) {
          uVar32 = FUN_1001cc310();
          cVar29 = _os_log_type_enabled(uVar32,0x10);
          if (cVar29 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0xd2b1;
            uStack_48 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar32,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          uVar31 = FUN_1001782e9(0,1);
        }
        if ((_DAT_100742600 & auVar49) != (undefined1  [16])0x0) {
          uVar32 = FUN_1001cc310();
          cVar29 = _os_log_type_enabled(uVar32,0x10);
          if (cVar29 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0xd31e;
            uStack_48 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar32,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          uVar31 = FUN_1001782e9(0,1);
        }
        if ((_DAT_100742600 & auVar53) != (undefined1  [16])0x0) {
          uVar32 = FUN_1001cc310();
          cVar29 = _os_log_type_enabled(uVar32,0x10);
          if (cVar29 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0xd379;
            uStack_48 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar32,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          uVar31 = FUN_1001782e9(0,1);
        }
        uVar28 = _UNK_10070418c;
        uVar27 = _UNK_100704188;
        uVar26 = _UNK_100704184;
        uVar57 = _DAT_100704180;
        auVar49._0_8_ = -(ulong)(lVar43 == 0);
        auVar49._8_8_ = -(ulong)(lVar34 == 0);
        auVar53._0_8_ = -(ulong)(lVar55 == 0);
        auVar53._8_8_ = -(ulong)(lVar39 == 0);
        auVar49 = packssdw(auVar53,auVar49);
        iVar30 = movmskps(uVar31,auVar49);
        iVar42 = 0;
        iVar37 = 0;
        if (iVar30 == 0) {
          pfVar38 = (float *)&DAT_100742630;
          lVar40 = 0;
          auVar45 = _DAT_100700430;
          auVar51 = _DAT_100700430;
          do {
            pfVar36 = (float *)(param_2 + lVar40 * 4);
            fVar54 = pfVar36[1];
            fVar56 = pfVar36[2];
            fVar46 = pfVar36[3];
            pfVar1 = (float *)(param_2 + 0x10 + lVar40 * 4);
            fVar52 = *pfVar1;
            fVar3 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            pfVar1 = (float *)(param_2 + 0x20 + lVar40 * 4);
            fVar10 = *pfVar1;
            fVar11 = pfVar1[1];
            fVar12 = pfVar1[2];
            fVar13 = pfVar1[3];
            pfVar1 = (float *)(param_2 + 0x30 + lVar40 * 4);
            fVar14 = *pfVar1;
            fVar15 = pfVar1[1];
            fVar16 = pfVar1[2];
            fVar17 = pfVar1[3];
            fVar18 = *pfVar38;
            fVar19 = pfVar38[1];
            fVar20 = pfVar38[2];
            fVar21 = pfVar38[3];
            fVar22 = pfVar38[4];
            fVar23 = pfVar38[5];
            fVar24 = pfVar38[6];
            fVar25 = pfVar38[7];
            auVar44._0_4_ = (uint)*pfVar36 & uVar57;
            auVar44._4_4_ = (uint)fVar56 & uVar26;
            auVar44._8_4_ = (uint)fVar52 & uVar27;
            auVar44._12_4_ = (uint)fVar8 & uVar28;
            auVar6._4_4_ = (uint)fVar12 & uVar26;
            auVar6._0_4_ = (uint)fVar10 & uVar57;
            auVar6._8_4_ = (uint)fVar14 & uVar27;
            auVar6._12_4_ = (uint)fVar16 & uVar28;
            auVar49 = maxps(auVar44,auVar6);
            auVar45 = maxps(auVar49,auVar45);
            auVar50._0_4_ = (uint)fVar54 & uVar57;
            auVar50._4_4_ = (uint)fVar46 & uVar26;
            auVar50._8_4_ = (uint)fVar3 & uVar27;
            auVar50._12_4_ = (uint)fVar9 & uVar28;
            auVar7._4_4_ = (uint)fVar13 & uVar26;
            auVar7._0_4_ = (uint)fVar11 & uVar57;
            auVar7._8_4_ = (uint)fVar15 & uVar27;
            auVar7._12_4_ = (uint)fVar17 & uVar28;
            auVar49 = maxps(auVar50,auVar7);
            auVar51 = maxps(auVar49,auVar51);
            pfVar1 = (float *)(lVar55 + lVar40);
            *pfVar1 = *pfVar36 * fVar18;
            pfVar1[1] = fVar52 * fVar20;
            pfVar1[2] = fVar10 * fVar22;
            pfVar1[3] = fVar14 * fVar24;
            pfVar36 = (float *)(lVar39 + lVar40);
            *pfVar36 = fVar56 * fVar19;
            pfVar36[1] = fVar8 * fVar21;
            pfVar36[2] = fVar12 * fVar23;
            pfVar36[3] = fVar16 * fVar25;
            pfVar36 = (float *)(lVar43 + lVar40);
            *pfVar36 = fVar54 * fVar18;
            pfVar36[1] = fVar3 * fVar20;
            pfVar36[2] = fVar11 * fVar22;
            pfVar36[3] = fVar15 * fVar24;
            pfVar36 = (float *)(lVar34 + lVar40);
            *pfVar36 = fVar46 * fVar19;
            pfVar36[1] = fVar9 * fVar21;
            pfVar36[2] = fVar13 * fVar23;
            pfVar36[3] = fVar17 * fVar25;
            lVar40 = lVar40 + 0x10;
            pfVar38 = pfVar38 + 8;
          } while ((int)lVar40 != 0x800);
          fVar56 = auVar45._12_4_;
          fVar52 = auVar51._12_4_;
          fVar54 = auVar45._8_4_;
          fVar46 = auVar51._8_4_;
          if (auVar45._0_4_ <= auVar45._4_4_) {
            auVar45._0_4_ = auVar45._4_4_;
          }
          if (auVar45._0_4_ <= fVar54) {
            auVar45._0_4_ = fVar54;
          }
          if (auVar45._0_4_ <= fVar56) {
            auVar45._0_4_ = fVar56;
          }
          if (auVar51._0_4_ <= auVar51._4_4_) {
            auVar51._0_4_ = auVar51._4_4_;
          }
          if (auVar51._0_4_ <= fVar46) {
            auVar51._0_4_ = fVar46;
          }
          if (auVar51._0_4_ <= fVar52) {
            auVar51._0_4_ = fVar52;
          }
          iVar42 = (int)(auVar45._0_4_ * DAT_10070c174);
          iVar37 = (int)(auVar51._0_4_ * DAT_10070c174);
        }
        uVar32 = *(undefined8 *)(param_1 + 0x2088);
        local_58 = (undefined4)*(undefined8 *)(param_1 + 0x2080);
        uStack_54 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2080) >> 0x20);
        uStack_50 = (undefined4)uVar32;
        uStack_4c = (undefined2)((ulong)uVar32 >> 0x20);
        uStack_4a = (undefined2)((ulong)uVar32 >> 0x30);
        _vDSP_fft_zrip(**(undefined8 **)(param_1 + 0x20a0),&local_58,1,10,1);
        uVar32 = *(undefined8 *)(param_1 + 0x2098);
        local_58 = (undefined4)*(undefined8 *)(param_1 + 0x2090);
        uStack_54 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2090) >> 0x20);
        uStack_50 = (undefined4)uVar32;
        uStack_4c = (undefined2)((ulong)uVar32 >> 0x20);
        uStack_4a = (undefined2)((ulong)uVar32 >> 0x30);
        _vDSP_fft_zrip(**(undefined8 **)(param_1 + 0x20a0),&local_58,1,10,1);
        lVar39 = 0;
        fVar54 = 0.0;
        fVar56 = 0.0;
        do {
          uVar4 = *(ushort *)(param_1 + 0x20a8 + lVar39 * 8);
          uVar41 = (ulong)uVar4;
          uVar5 = *(ushort *)(param_1 + 0x20aa + lVar39 * 8);
          fVar46 = 0.0;
          fVar52 = 0.0;
          if (uVar4 < uVar5) {
            do {
              auVar49 = insertps(ZEXT416(*(uint *)(*(long *)(param_1 + 0x2098) + uVar41 * 4)),
                                 *(undefined4 *)(*(long *)(param_1 + 0x2088) + uVar41 * 4),0x10);
              auVar53 = insertps(ZEXT416(*(uint *)(*(long *)(param_1 + 0x2090) + uVar41 * 4)),
                                 *(undefined4 *)(*(long *)(param_1 + 0x2080) + uVar41 * 4),0x10);
              fVar46 = fVar46 + (auVar53._0_4_ * auVar53._0_4_ + auVar49._0_4_ * auVar49._0_4_) *
                                _DAT_100742610;
              fVar52 = fVar52 + (auVar53._4_4_ * auVar53._4_4_ + auVar49._4_4_ * auVar49._4_4_) *
                                _UNK_100742614;
              uVar41 = uVar41 + 1;
            } while (uVar5 != uVar41);
          }
          fVar3 = *(float *)(param_1 + 0x20ac + lVar39 * 8);
          fVar54 = fVar54 + fVar3 * fVar46;
          fVar56 = fVar56 + fVar3 * fVar52;
          lVar39 = lVar39 + 1;
        } while (lVar39 != 0x19);
        if (_DAT_100742620 < fVar56) {
          *(float *)(param_1 + 0x2190) = *(float *)(param_1 + 0x2190) + fVar56;
          *(int *)(param_1 + 0x2198) = *(int *)(param_1 + 0x2198) + 1;
        }
        if (_DAT_100742620 < fVar54) {
          *(float *)(param_1 + 0x2194) = *(float *)(param_1 + 0x2194) + fVar54;
          *(int *)(param_1 + 0x219c) = *(int *)(param_1 + 0x219c) + 1;
        }
        if (*(float *)(param_1 + 0x2180) <= fVar56 && fVar56 != *(float *)(param_1 + 0x2180)) {
          *(float *)(param_1 + 0x2180) = fVar56;
          *(undefined4 *)(param_1 + 0x2188) = param_4;
        }
        if (*(float *)(param_1 + 0x2184) <= fVar54 && fVar54 != *(float *)(param_1 + 0x2184)) {
          *(float *)(param_1 + 0x2184) = fVar54;
          *(undefined4 *)(param_1 + 0x218c) = param_4;
        }
        if (*(int *)(param_1 + 0x21a0) < iVar42) {
          *(int *)(param_1 + 0x21a0) = iVar42;
          *(undefined4 *)(param_1 + 0x21a8) = param_4;
        }
        uVar32 = 0;
        if (*(int *)(param_1 + 0x21a4) < iVar37) {
          *(int *)(param_1 + 0x21a4) = iVar37;
          *(undefined4 *)(param_1 + 0x21ac) = param_4;
        }
      }
      else {
        lVar43 = param_2 + 4;
        pfVar38 = (float *)(param_2 + 0xf8);
        lVar34 = 4;
        uVar41 = 0;
        uVar57 = _DAT_100704180;
        do {
          if (param_3 == 2) {
            fVar54 = 0.0;
            uVar35 = 0xfffffffffffffff0;
            pfVar36 = pfVar38;
            do {
              *(float *)(lVar55 + 0x40 + uVar35 * 4) =
                   pfVar36[-0x3e] * (float)(&DAT_1007426b0)[uVar35 * 2];
              *(float *)(lVar39 + 0x40 + uVar35 * 4) =
                   pfVar36[-0x3c] * (float)(&DAT_1007426b4)[uVar35 * 2];
              *(float *)(lVar55 + 0x44 + uVar35 * 4) =
                   pfVar36[-0x3a] * (float)(&DAT_1007426b8)[uVar35 * 2];
              *(float *)(lVar39 + 0x44 + uVar35 * 4) =
                   pfVar36[-0x38] * (float)(&DAT_1007426bc)[uVar35 * 2];
              *(float *)(lVar55 + 0x48 + uVar35 * 4) =
                   pfVar36[-0x36] * (float)(&DAT_1007426c0)[uVar35 * 2];
              *(float *)(lVar39 + 0x48 + uVar35 * 4) =
                   pfVar36[-0x34] * (float)(&DAT_1007426c4)[uVar35 * 2];
              *(float *)(lVar55 + 0x4c + uVar35 * 4) =
                   pfVar36[-0x32] * *(float *)(&UNK_1007426c8 + uVar35 * 8);
              *(float *)(lVar39 + 0x4c + uVar35 * 4) =
                   pfVar36[-0x30] * *(float *)(&UNK_1007426cc + uVar35 * 8);
              *(float *)(lVar55 + 0x50 + uVar35 * 4) =
                   pfVar36[-0x2e] * *(float *)(&UNK_1007426d0 + uVar35 * 8);
              *(float *)(lVar39 + 0x50 + uVar35 * 4) =
                   pfVar36[-0x2c] * *(float *)(&UNK_1007426d4 + uVar35 * 8);
              *(float *)(lVar55 + 0x54 + uVar35 * 4) =
                   pfVar36[-0x2a] * *(float *)(&UNK_1007426d8 + uVar35 * 8);
              *(float *)(lVar39 + 0x54 + uVar35 * 4) =
                   pfVar36[-0x28] * *(float *)(&UNK_1007426dc + uVar35 * 8);
              *(float *)(lVar55 + 0x58 + uVar35 * 4) =
                   pfVar36[-0x26] * *(float *)(&UNK_1007426e0 + uVar35 * 8);
              *(float *)(lVar39 + 0x58 + uVar35 * 4) =
                   pfVar36[-0x24] * *(float *)(&UNK_1007426e4 + uVar35 * 8);
              *(float *)(lVar55 + 0x5c + uVar35 * 4) =
                   pfVar36[-0x22] * *(float *)(&UNK_1007426e8 + uVar35 * 8);
              *(float *)(lVar39 + 0x5c + uVar35 * 4) =
                   pfVar36[-0x20] * *(float *)(&UNK_1007426ec + uVar35 * 8);
              *(float *)(lVar55 + 0x60 + uVar35 * 4) =
                   pfVar36[-0x1e] * *(float *)(&UNK_1007426f0 + uVar35 * 8);
              *(float *)(lVar39 + 0x60 + uVar35 * 4) =
                   pfVar36[-0x1c] * *(float *)(&UNK_1007426f4 + uVar35 * 8);
              *(float *)(lVar55 + 100 + uVar35 * 4) =
                   pfVar36[-0x1a] * *(float *)(&UNK_1007426f8 + uVar35 * 8);
              *(float *)(lVar39 + 100 + uVar35 * 4) =
                   pfVar36[-0x18] * *(float *)(&UNK_1007426fc + uVar35 * 8);
              *(float *)(lVar55 + 0x68 + uVar35 * 4) =
                   pfVar36[-0x16] * *(float *)(&UNK_100742700 + uVar35 * 8);
              *(float *)(lVar39 + 0x68 + uVar35 * 4) =
                   pfVar36[-0x14] * *(float *)(&UNK_100742704 + uVar35 * 8);
              *(float *)(lVar55 + 0x6c + uVar35 * 4) =
                   pfVar36[-0x12] * *(float *)(&UNK_100742708 + uVar35 * 8);
              *(float *)(lVar39 + 0x6c + uVar35 * 4) =
                   pfVar36[-0x10] * *(float *)(&UNK_10074270c + uVar35 * 8);
              *(float *)(lVar55 + 0x70 + uVar35 * 4) =
                   pfVar36[-0xe] * *(float *)(&UNK_100742710 + uVar35 * 8);
              *(float *)(lVar39 + 0x70 + uVar35 * 4) =
                   pfVar36[-0xc] * *(float *)(&UNK_100742714 + uVar35 * 8);
              *(float *)(lVar55 + 0x74 + uVar35 * 4) =
                   pfVar36[-10] * *(float *)(&UNK_100742718 + uVar35 * 8);
              *(float *)(lVar39 + 0x74 + uVar35 * 4) =
                   pfVar36[-8] * *(float *)(&UNK_10074271c + uVar35 * 8);
              *(float *)(lVar55 + 0x78 + uVar35 * 4) =
                   pfVar36[-6] * *(float *)(&UNK_100742720 + uVar35 * 8);
              *(float *)(lVar39 + 0x78 + uVar35 * 4) =
                   pfVar36[-4] * *(float *)(&UNK_100742724 + uVar35 * 8);
              *(float *)(lVar55 + 0x7c + uVar35 * 4) =
                   pfVar36[-2] * *(float *)(&UNK_100742728 + uVar35 * 8);
              *(float *)(lVar39 + 0x7c + uVar35 * 4) =
                   *pfVar36 * *(float *)(&UNK_10074272c + uVar35 * 8);
              fVar56 = (float)((uint)pfVar36[-0x3e] & uVar57);
              if ((float)((uint)pfVar36[-0x3e] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x3c] & uVar57);
              if ((float)((uint)pfVar36[-0x3c] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x3a] & uVar57);
              if ((float)((uint)pfVar36[-0x3a] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x38] & uVar57);
              if ((float)((uint)pfVar36[-0x38] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x36] & uVar57);
              if ((float)((uint)pfVar36[-0x36] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x34] & uVar57);
              if ((float)((uint)pfVar36[-0x34] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x32] & uVar57);
              if ((float)((uint)pfVar36[-0x32] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x30] & uVar57);
              if ((float)((uint)pfVar36[-0x30] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x2e] & uVar57);
              if ((float)((uint)pfVar36[-0x2e] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x2c] & uVar57);
              if ((float)((uint)pfVar36[-0x2c] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x2a] & uVar57);
              if ((float)((uint)pfVar36[-0x2a] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x28] & uVar57);
              if ((float)((uint)pfVar36[-0x28] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x26] & uVar57);
              if ((float)((uint)pfVar36[-0x26] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x24] & uVar57);
              if ((float)((uint)pfVar36[-0x24] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x22] & uVar57);
              if ((float)((uint)pfVar36[-0x22] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x20] & uVar57);
              if ((float)((uint)pfVar36[-0x20] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x1e] & uVar57);
              if ((float)((uint)pfVar36[-0x1e] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x1c] & uVar57);
              if ((float)((uint)pfVar36[-0x1c] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x1a] & uVar57);
              if ((float)((uint)pfVar36[-0x1a] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x18] & uVar57);
              if ((float)((uint)pfVar36[-0x18] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x16] & uVar57);
              if ((float)((uint)pfVar36[-0x16] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x14] & uVar57);
              if ((float)((uint)pfVar36[-0x14] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0x12] & uVar57);
              if ((float)((uint)pfVar36[-0x12] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0x10] & uVar57);
              if ((float)((uint)pfVar36[-0x10] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-0xe] & uVar57);
              if ((float)((uint)pfVar36[-0xe] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-0xc] & uVar57);
              if ((float)((uint)pfVar36[-0xc] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-10] & uVar57);
              if ((float)((uint)pfVar36[-10] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-8] & uVar57);
              if ((float)((uint)pfVar36[-8] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-6] & uVar57);
              if ((float)((uint)pfVar36[-6] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)pfVar36[-4] & uVar57);
              if ((float)((uint)pfVar36[-4] & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              fVar56 = (float)((uint)pfVar36[-2] & uVar57);
              if ((float)((uint)pfVar36[-2] & uVar57) <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)((uint)*pfVar36 & uVar57);
              if ((float)((uint)*pfVar36 & uVar57) <= fVar56) {
                fVar54 = fVar56;
              }
              uVar35 = uVar35 + 0x10;
              pfVar36 = pfVar36 + 0x40;
            } while (uVar35 < 0x1f0);
          }
          else {
            fVar54 = 0.0;
            lVar40 = 0;
            do {
              *(float *)(lVar55 + lVar40) =
                   *(float *)(lVar43 + -4 + lVar40 * 2) *
                   *(float *)((long)&DAT_100742630 + lVar40 * 2);
              *(float *)(lVar39 + lVar40) =
                   *(float *)(lVar43 + lVar40 * 2) * *(float *)((long)&DAT_100742634 + lVar40 * 2);
              fVar56 = (float)(*(uint *)(lVar43 + -4 + lVar40 * 2) & uVar57);
              if (fVar56 <= fVar54) {
                fVar56 = fVar54;
              }
              fVar54 = (float)(*(uint *)(lVar43 + lVar40 * 2) & uVar57);
              if (fVar54 <= fVar56) {
                fVar54 = fVar56;
              }
              lVar40 = lVar40 + 4;
            } while (lVar40 != 0x800);
          }
          local_58 = auVar49._0_4_;
          uStack_54 = auVar49._4_4_;
          uStack_50 = auVar49._8_4_;
          uStack_4c = auVar49._12_2_;
          uStack_4a = auVar49._14_2_;
          _vDSP_fft_zrip(**(undefined8 **)(param_1 + 0x20a0),&local_58,1,10,1);
          fVar56 = 0.0;
          lVar40 = 0;
          do {
            uVar4 = *(ushort *)(param_1 + 0x20a8 + lVar40 * 8);
            uVar35 = (ulong)uVar4;
            uVar5 = *(ushort *)(param_1 + 0x20aa + lVar40 * 8);
            fVar46 = 0.0;
            if (uVar4 < uVar5) {
              do {
                fVar52 = *(float *)(lVar55 + uVar35 * 4);
                fVar3 = *(float *)(lVar39 + uVar35 * 4);
                fVar46 = fVar46 + (fVar52 * fVar52 + fVar3 * fVar3) * DAT_100700b5c;
                uVar35 = uVar35 + 1;
              } while (uVar5 != uVar35);
            }
            fVar56 = fVar56 + fVar46 * *(float *)(param_1 + 0x20ac + lVar40 * 8);
            lVar40 = lVar40 + 1;
          } while (lVar40 != 0x19);
          fVar54 = fVar54 * DAT_10070c174;
          if (_DAT_100742620 < fVar56) {
            *(float *)(param_1 + 0x2190 + uVar41 * 4) =
                 *(float *)(param_1 + 0x2190 + uVar41 * 4) + fVar56;
            piVar2 = (int *)(param_1 + 0x2198 + uVar41 * 4);
            *piVar2 = *piVar2 + 1;
          }
          uVar57 = _DAT_100704180;
          pfVar36 = (float *)(param_1 + 0x2180 + uVar41 * 4);
          if (*pfVar36 <= fVar56 && fVar56 != *pfVar36) {
            *(float *)(param_1 + 0x2180 + uVar41 * 4) = fVar56;
            *(undefined4 *)(param_1 + 0x2188 + uVar41 * 4) = param_4;
          }
          if (*(int *)(param_1 + 0x21a0 + uVar41 * 4) < (int)fVar54) {
            *(int *)(param_1 + 0x21a0 + uVar41 * 4) = (int)fVar54;
            *(undefined4 *)(param_1 + 0x21a8 + uVar41 * 4) = param_4;
          }
          uVar41 = uVar41 + 1;
          lVar43 = lVar43 + lVar34;
          pfVar38 = (float *)((long)pfVar38 + lVar34);
          lVar34 = lVar34 + 4;
        } while (uVar41 != param_3);
        uVar32 = 0;
      }
      goto LAB_1002e97ab;
    }
    uVar32 = FUN_1001cc310();
    cVar29 = _os_log_type_enabled(uVar32,0x10);
    if (cVar29 != '\0') {
      pcVar33 = "(numChannels == 1) || (numChannels == 2)";
      goto LAB_1002e9778;
    }
  }
  FUN_1001782e9(0,0);
  uVar32 = 0xffffffce;
LAB_1002e97ab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar32;
}

