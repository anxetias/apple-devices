// name: FUN_10011e05c
// address: 10011e05c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011e05c(long param_1)

{
  float *pfVar1;
  undefined1 auVar2 [12];
  long lVar3;
  float fVar9;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar8 [16];
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined1 local_28 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_02;
  
  *(undefined4 *)(param_1 + 0xc150) = 0xbf800000;
  auVar4 = pmovsxbd(in_XMM0,_DAT_100707650);
  lVar3 = 0;
  do {
    auVar10 = pblendw(auVar4,_DAT_1007075f0,0xaa);
    local_48 = auVar4._0_4_;
    uStack_44 = auVar4._4_4_;
    uStack_40 = auVar4._8_4_;
    uStack_3c = auVar4._12_4_;
    auVar5._0_4_ = local_48 >> 0x10;
    auVar5._4_4_ = uStack_44 >> 0x10;
    auVar5._8_4_ = uStack_40 >> 0x10;
    auVar5._12_4_ = uStack_3c >> 0x10;
    auVar4 = pblendw(auVar5,_DAT_100707600,0xaa);
    fVar9 = auVar4._4_4_ - _UNK_100707614;
    auVar7._8_4_ = (auVar4._8_4_ - _UNK_100707618) + auVar10._8_4_;
    auVar7._12_4_ = (auVar4._12_4_ - _UNK_10070761c) + auVar10._12_4_;
    local_28._0_8_ = _logf();
    local_28._8_8_ = extraout_XMM0_Qb;
    auVar6._0_8_ = _logf();
    auVar6._8_8_ = extraout_XMM0_Qb_00;
    auVar4 = insertps(local_28,auVar6,0x10);
    auVar2._4_8_ = extraout_XMM0_Qb_00;
    auVar2._0_4_ = fVar9 + auVar10._4_4_;
    auVar7._0_8_ = auVar2._0_8_ << 0x20;
    auVar10._0_8_ = _logf(auVar7._8_8_);
    auVar10._8_8_ = extraout_XMM0_Qb_01;
    auVar4 = insertps(auVar4,auVar10,0x20);
    auVar8._0_8_ = _logf();
    auVar8._8_8_ = extraout_XMM0_Qb_02;
    auVar4 = insertps(auVar4,auVar8,0x30);
    fVar9 = auVar4._4_4_ * _UNK_100707624;
    fVar11 = auVar4._8_4_ * _UNK_100707628;
    fVar12 = auVar4._12_4_ * _UNK_10070762c;
    pfVar1 = (float *)(param_1 + 0xc154 + lVar3 * 4);
    *pfVar1 = auVar4._0_4_ * _DAT_100707620;
    pfVar1[1] = fVar9;
    pfVar1[2] = fVar11;
    pfVar1[3] = fVar12;
    lVar3 = lVar3 + 4;
    auVar4._0_4_ = local_48 + _DAT_100707630;
    auVar4._4_4_ = uStack_44 + _UNK_100707634;
    auVar4._8_4_ = uStack_40 + _UNK_100707638;
    auVar4._12_4_ = uStack_3c + _UNK_10070763c;
  } while (lVar3 != 0x40);
  return;
}

