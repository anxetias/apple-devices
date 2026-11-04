// name: FUN_10054887e
// address: 10054887e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10054887e(long param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar13 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM8 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  undefined1 auVar24 [16];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x818);
  if (*(int *)(lVar1 + 4) == 0x73747a32) {
    pbVar4 = (byte *)(lVar1 + 0x14);
    uVar9 = *(uint *)(lVar1 + 0x10);
    uVar8 = (ulong)uVar9;
    if (*(int *)(lVar1 + 0xc) == 8) {
      if (uVar8 != 0) {
        uVar7 = 0;
        uVar9 = 0;
        do {
          if (uVar9 <= pbVar4[uVar7]) {
            uVar9 = (uint)pbVar4[uVar7];
          }
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
        goto LAB_100548a27;
      }
    }
    else if (*(int *)(lVar1 + 0xc) == 4) {
      if (uVar8 != 0) {
        uVar6 = uVar9 + 1 & 0xfffffffe;
        uVar9 = uVar9 - 1;
        auVar17 = pmovsxbd(in_XMM3,_DAT_1007563f0);
        auVar18 = pmovsxbd(in_XMM5,_DAT_1007115d0);
        auVar19 = pmovsxbd(in_XMM8,_DAT_1007563f4);
        auVar11 = (undefined1  [16])0x0;
        do {
          auVar21 = auVar11;
          uVar12 = auVar17._0_4_;
          uVar14 = auVar17._4_4_;
          iVar15 = auVar17._8_4_;
          iVar16 = auVar17._12_4_;
          auVar13._0_4_ = -(uint)(((uVar9 < uVar12) * uVar9 | (uVar9 >= uVar12) * uVar12) == uVar12)
          ;
          auVar13._4_4_ = -(uint)(((uVar9 < uVar14) * uVar9 | (uVar9 >= uVar14) * uVar14) == uVar14)
          ;
          auVar13._8_4_ = -(uint)((uint)(iVar15 == 0) * iVar15 == iVar15);
          auVar13._12_4_ = -(uint)((uint)(iVar16 == 0) * iVar16 == iVar16);
          auVar22 = auVar21;
          if ((auVar13._0_4_ & 1) != 0) {
            auVar22 = ZEXT116(*pbVar4);
          }
          if ((auVar13._4_4_ & 1) != 0) {
            auVar22._0_8_ = auVar22._0_8_ & 0xffffffffffff00ff | (ulong)*pbVar4 << 8;
          }
          auVar17 = auVar17 & auVar18;
          auVar10._0_4_ = -(uint)(auVar17._0_4_ == 0);
          auVar10._4_4_ = -(uint)(auVar17._4_4_ == 0);
          auVar10._8_4_ = -(uint)(auVar17._8_4_ == 0);
          auVar10._12_4_ = -(uint)(auVar17._12_4_ == 0);
          auVar11 = packssdw(auVar10,auVar10);
          auVar11 = packsswb(auVar11,auVar11);
          auVar24._0_2_ = auVar22._0_2_ >> 4;
          auVar24._2_2_ = auVar22._2_2_ >> 4;
          auVar24._4_2_ = auVar22._4_2_ >> 4;
          auVar24._6_2_ = auVar22._6_2_ >> 4;
          auVar24._8_2_ = auVar22._8_2_ >> 4;
          auVar24._10_2_ = auVar22._10_2_ >> 4;
          auVar24._12_2_ = auVar22._12_2_ >> 4;
          auVar24._14_2_ = auVar22._14_2_ >> 4;
          auVar11 = pblendvb(auVar22 & _DAT_1007563d0,auVar24 & _DAT_1007563c0,auVar11);
          auVar17 = pmovzxbd(auVar11,auVar11);
          uVar2 = auVar21._0_4_;
          uVar20 = auVar17._0_4_;
          auVar11._0_4_ = (uVar20 < uVar2) * uVar2 | (uVar20 >= uVar2) * uVar20;
          uVar2 = auVar21._4_4_;
          uVar20 = auVar17._4_4_;
          auVar11._4_4_ = (uVar20 < uVar2) * uVar2 | (uVar20 >= uVar2) * uVar20;
          uVar2 = auVar21._8_4_;
          uVar20 = auVar17._8_4_;
          uVar23 = auVar17._12_4_;
          auVar11._8_4_ = (uVar20 < uVar2) * uVar2 | (uVar20 >= uVar2) * uVar20;
          uVar2 = auVar21._12_4_;
          auVar11._12_4_ = (uVar23 < uVar2) * uVar2 | (uVar23 >= uVar2) * uVar23;
          auVar17._0_4_ = uVar12 + auVar19._0_4_;
          auVar17._4_4_ = uVar14 + auVar19._4_4_;
          auVar17._8_4_ = iVar15 + auVar19._8_4_;
          auVar17._12_4_ = iVar16 + auVar19._12_4_;
          pbVar4 = pbVar4 + 1;
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
        auVar11 = blendvps(auVar21,auVar11,auVar13);
        uVar9 = auVar11._0_4_;
        uVar6 = auVar11._4_4_;
        uVar9 = (uVar6 < uVar9) * uVar9 | (uVar6 >= uVar9) * uVar6;
LAB_100548a27:
        if (uVar9 != 0) goto LAB_100548a2f;
      }
    }
    else if (uVar8 != 0) {
      uVar7 = 0;
      uVar9 = 0;
      do {
        if (uVar9 <= *(ushort *)(pbVar4 + uVar7 * 2)) {
          uVar9 = (uint)*(ushort *)(pbVar4 + uVar7 * 2);
        }
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
      goto LAB_100548a27;
    }
LAB_100548abd:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_2a = "maxSampleSize > 0";
LAB_100548b6b:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(int *)(lVar1 + 4) != 0x7374737a) goto LAB_100548abd;
    uVar9 = *(uint *)(lVar1 + 0xc);
    if (uVar9 == 0) {
      if ((ulong)*(uint *)(lVar1 + 0x10) != 0) {
        uVar8 = 0;
        uVar9 = 0;
        do {
          uVar6 = *(uint *)(lVar1 + 0x14 + uVar8 * 4);
          if (uVar9 <= uVar6) {
            uVar9 = uVar6;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(lVar1 + 0x10) != uVar8);
        goto LAB_100548a27;
      }
      goto LAB_100548abd;
    }
LAB_100548a2f:
    if (*(int *)(param_1 + 0x850) != 0x616c6163) {
      if (uVar9 < 0x12000) goto LAB_100548ae1;
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 == '\0') goto LAB_100548ad6;
      local_2a = "maxSampleSize < kMaxAACPacketSize";
      goto LAB_100548b6b;
    }
    if ((*(uint *)(param_1 + 0x100c) != 0) && (*(uint *)(param_1 + 0x100c) < uVar9)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "maxSampleSize <= mDPAGConfig.maxFrameBytes";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (uVar9 < 0xab97bc0) goto LAB_100548ae1;
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_2a = "maxSampleSize < kMaxDPAGPacketSize";
      goto LAB_100548b6b;
    }
  }
LAB_100548ad6:
  uVar9 = 0;
  FUN_1001782e9(0,0);
LAB_100548ae1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

