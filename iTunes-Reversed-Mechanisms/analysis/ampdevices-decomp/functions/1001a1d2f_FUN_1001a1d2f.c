// name: FUN_1001a1d2f
// address: 1001a1d2f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1001a1d2f(undefined8 *param_1,long *param_2,undefined1 (*param_3) [16],long param_4,
             undefined8 *param_5,ulong param_6,long *param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined1 param_11,undefined1 param_12,char param_13)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  double dVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long *plVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  long *local_168;
  long *plStack_160;
  double local_158;
  double dStack_150;
  long *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_100 [8];
  long *local_f8;
  undefined1 local_f0 [8];
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *plStack_c8;
  double local_c0;
  double dStack_b8;
  undefined1 local_a8 [24];
  undefined8 *local_90;
  undefined8 *local_88;
  double local_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  long *local_58;
  long *plStack_50;
  double local_48;
  double dStack_40;
  
  local_a8._0_16_ = (undefined1  [16])0x0;
  local_148 = param_7;
  uStack_140 = param_8;
  local_138 = param_9;
  uStack_130 = param_10;
  if (param_3 == (undefined1 (*) [16])0x0) {
    local_78 = (undefined1  [16])0x0;
    auVar2 = *(undefined1 (*) [16])(*param_2 + 0xa8);
    auVar10 = pblendw((undefined1  [16])0x0,auVar2,0x33);
    local_68 = ((double)(auVar2._0_8_ >> 0x20 | _DAT_10070e510) - _DAT_10070e520) +
               SUB168(auVar10 | _DAT_10070e500,0);
    dStack_60 = ((double)(auVar2._8_8_ >> 0x20 | _UNK_10070e518) - _UNK_10070e528) +
                SUB168(auVar10 | _DAT_10070e500,8);
  }
  else {
    local_78 = *param_3;
    local_68 = *(double *)param_3[1];
    dStack_60 = *(double *)(param_3[1] + 8);
  }
  dVar14 = local_68;
  local_48 = (double)param_9;
  dStack_40 = (double)param_10;
  local_58 = param_7;
  plStack_50 = (long *)param_8;
  uVar7 = param_6 | 2;
  if (uVar7 == 3) {
    local_68 = dStack_60;
    uVar3 = local_78._4_4_;
    uVar6 = local_78._8_8_;
    local_78._8_4_ = local_78._0_4_;
    local_78._0_8_ = uVar6;
    local_78._12_4_ = uVar3;
    dStack_60 = dVar14;
  }
  local_128 = local_78._0_8_;
  uStack_120 = local_78._8_8_;
  local_80 = (double)param_4;
  dVar14 = local_68;
  if (param_4 != 0) {
    dVar14 = local_80;
  }
  uVar6 = local_78._0_8_;
  uVar13 = local_78._8_8_;
  dVar15 = dStack_60;
  local_118 = dVar14;
  dStack_110 = dStack_60;
  local_90 = param_5;
  local_88 = param_1;
  uVar5 = FUN_10019f4e6(&local_d0,param_12,param_11);
  local_58 = local_d0;
  plStack_50 = plStack_c8;
  local_48 = local_c0;
  dStack_40 = dStack_b8;
  if (param_4 == 0) {
    if (param_3 != (undefined1 (*) [16])0x0) {
      local_78 = *param_3;
      local_68 = *(double *)param_3[1];
      dStack_60 = *(double *)(param_3[1] + 8);
      local_80 = (double)CONCAT44(local_80._4_4_,(int)CONCAT71((int7)((ulong)uVar5 >> 8),1));
      goto LAB_1001a1fa6;
    }
  }
  else {
    _CGRectOffset((local_68 - local_80) * DAT_100700b00,0,&local_d0);
    dVar8 = ((local_68 - local_80) * local_c0) / local_80;
    local_48 = local_c0 + dVar8;
    local_58 = (long *)(dVar8 * DAT_10070c188 + (double)local_d0);
  }
  local_78 = ZEXT816(0);
  auVar2 = *(undefined1 (*) [16])(*param_2 + 0xa8);
  auVar10 = pblendw(local_78,auVar2,0x33);
  local_68 = ((double)(auVar2._0_8_ >> 0x20 | _DAT_10070e510) - _DAT_10070e520) +
             SUB168(auVar10 | _DAT_10070e500,0);
  dStack_60 = ((double)(auVar2._8_8_ >> 0x20 | _UNK_10070e518) - _UNK_10070e528) +
              SUB168(auVar10 | _DAT_10070e500,8);
  local_80 = (double)((ulong)local_80 & 0xffffffff00000000);
  plStack_50 = plStack_c8;
  dStack_40 = dStack_b8;
LAB_1001a1fa6:
  dVar8 = local_68;
  if (uVar7 == 3) {
    uVar5 = local_78._8_8_;
    local_78._8_8_ = local_78._0_8_;
    local_78._0_8_ = uVar5;
    local_68 = dStack_60;
    dStack_60 = dVar8;
  }
  plStack_c8 = plStack_50;
  dStack_b8 = dStack_40;
  FUN_100194eea(&local_d0,&local_58,local_78,0x22,0);
  local_48 = local_c0;
  dStack_40 = dStack_b8;
  local_58 = local_d0;
  plStack_50 = plStack_c8;
  plVar9 = local_d0;
  plVar11 = plStack_c8;
  dVar8 = local_c0;
  dVar12 = dStack_b8;
  _CGRectOffset((ulong)local_d0 ^ _DAT_100700b30,(ulong)plStack_c8 ^ _DAT_100700b30);
  local_158 = local_c0;
  dStack_150 = dStack_b8;
  local_168 = local_d0;
  plStack_160 = plStack_c8;
  FUN_1001a75cc(DAT_100700458,&local_d0,&local_158,0,1,1,0,plVar9,plVar11,dVar8,dVar12,uVar6,uVar13,
                dVar14,dVar15);
  local_a8._8_8_ = plStack_c8;
  local_a8._0_8_ = local_d0;
  if (local_d0 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_10069c40d(uVar6);
    }
    uVar6 = 0x237c;
    FUN_1001782e9(0,0);
  }
  else {
    local_e0 = local_d0;
    local_d8 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      LOCK();
      plStack_c8[1] = plStack_c8[1] + 1;
      UNLOCK();
    }
    FUN_10017c19c(&local_d0,*param_2);
    FUN_1001970e4(&local_e0,&local_d0);
    if (local_d8 != (long *)0x0) {
      LOCK();
      plVar9 = local_d8 + 1;
      lVar1 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar6 = local_a8._0_8_;
    FUN_1001a7790(local_100,*local_88);
    FUN_10017c008(DAT_100700458,uVar6,local_100,&local_148,&local_168,0,0);
    if (local_f8 != (long *)0x0) {
      LOCK();
      plVar9 = local_f8 + 1;
      lVar1 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_f8 + 0x10))(local_f8);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_88 = (undefined8 *)0x0;
    if (param_6 - 1 < 3) {
      local_88 = *(undefined8 **)(&DAT_100710470 + param_6 * 8);
    }
    FUN_10017c1c0(*param_2);
    if (local_80._0_1_ != '\0') {
      FUN_10017b2fe(*param_2);
    }
    if (((double)local_88 != 0.0) ||
       (plVar9 = local_58, plVar11 = plStack_50, NAN((double)local_88))) {
      FUN_10017b212(((double)local_88 * DAT_100700b18) / DAT_10070f3d0,0,0,*param_2);
      if (param_6 == 3) {
        plVar9 = (long *)((ulong)(local_68 - (double)local_58) ^ _DAT_100700b30);
        plVar11 = plStack_50;
      }
      else if (param_6 == 2) {
        plVar9 = (long *)((ulong)(local_68 - (double)local_58) ^ _DAT_100700b30);
        plVar11 = (long *)((ulong)(dStack_60 - (double)plStack_50) ^ _UNK_100700b38);
      }
      else {
        plVar9 = (long *)0x0;
        plVar11 = (long *)0x0;
        if (param_6 == 1) {
          plVar9 = local_58;
          plVar11 = (long *)((ulong)(dStack_60 - (double)plStack_50) ^ _DAT_100700b30);
        }
      }
    }
    FUN_10017b1fc(plVar9,plVar11,*param_2);
    if (param_13 != '\0') {
      FUN_10017c0ba(*param_2,4);
    }
    lVar1 = *param_2;
    FUN_1001a7790(local_f0,local_a8._0_8_);
    FUN_10017c008(DAT_100700458,lVar1,local_f0,&local_168,&local_168,0,0);
    if (local_e8 != (long *)0x0) {
      LOCK();
      plVar9 = local_e8 + 1;
      lVar1 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_e8 + 0x10))(local_e8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (param_13 != '\0') {
      FUN_10017c0ba(*param_2,0);
    }
    FUN_10017b174(*param_2);
    plVar9 = local_58;
    uVar6 = 0;
    if (local_90 != (undefined8 *)0x0) {
      if (uVar7 == 3) {
        local_48 = dStack_40;
        local_58 = plStack_50;
        plStack_50 = plVar9;
      }
      local_90[2] = local_48;
      local_90[3] = dStack_40;
      *local_90 = local_58;
      local_90[1] = plStack_50;
      if (param_3 != (undefined1 (*) [16])0x0) {
        _CGRectIntersection(&local_d0);
        local_90[2] = local_c0;
        local_90[3] = dStack_b8;
        *local_90 = local_d0;
        local_90[1] = plStack_c8;
      }
    }
  }
  if ((long *)local_a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(local_a8._8_8_ + 8);
    lVar1 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*(long *)local_a8._8_8_ + 0x10))(local_a8._8_8_);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar6;
}

