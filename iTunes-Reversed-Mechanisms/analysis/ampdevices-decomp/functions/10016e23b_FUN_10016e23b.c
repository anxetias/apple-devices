// name: FUN_10016e23b
// address: 10016e23b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10016e23b(double param_1,undefined2 *param_2)

{
  double dVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auVar8 [12];
  ulong local_98;
  int local_90;
  undefined1 local_88 [8];
  int local_80;
  undefined8 local_78;
  int local_70;
  undefined1 local_68 [12];
  undefined1 local_58 [16];
  long local_48;
  int local_40;
  undefined4 local_38;
  int local_34;
  
  uVar7 = (uint)((ulong)param_1 >> 0x20);
  uVar6 = SUB84(param_1,0);
  if ((param_1 != 0.0) || (NAN(param_1))) {
    if (param_1 < 0.0) {
      *(undefined1 *)param_2 = 0x2d;
      param_2 = (undefined2 *)((long)param_2 + 1);
      uVar6 = (undefined4)((ulong)param_1 ^ _DAT_100700b30);
      uVar7 = (uint)(((ulong)param_1 ^ _DAT_100700b30) >> 0x20);
    }
    uVar4 = uVar7 >> 0x14 & 0x7ff;
    uVar3 = CONCAT44(uVar7,uVar6) & 0xfffffffffffff;
    local_98 = uVar3 + 0x10000000000000;
    if (uVar4 == 0) {
      local_98 = uVar3;
    }
    local_90 = -0x432;
    if (uVar4 != 0) {
      local_90 = uVar4 - 0x433;
    }
    FUN_10016e5ac(&local_98,local_58,local_88);
    dVar1 = (double)(-0x3d - local_80) * _DAT_10070d3b0 + _DAT_10070d3b8;
    iVar2 = (int)((int)dVar1 + (uint)((double)(int)dVar1 != dVar1)) >> 3;
    uVar3 = (ulong)(iVar2 + 1);
    local_34 = 0x15c - (iVar2 * 8 + 8);
    local_78 = *(undefined8 *)(&DAT_10070deb0 + uVar3 * 8);
    local_70 = (int)*(short *)(&DAT_10070e170 + uVar3 * 2);
    uVar3 = 0x3f;
    if (local_98 != 0) {
      for (; local_98 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    local_48 = local_98 << ((byte)(uVar3 ^ 0x3f) & 0x3f);
    local_40 = local_90 - (int)(uVar3 ^ 0x3f);
    local_68 = FUN_10016e63e(&local_48,&local_78);
    auVar8 = FUN_10016e63e(local_88,&local_78);
    local_40 = auVar8._8_4_;
    uVar3 = FUN_10016e63e(local_58,&local_78);
    local_48 = auVar8._0_8_ + -1;
    FUN_10016e69f(local_68,&local_48,auVar8._0_8_ + ~uVar3 + -1,param_2,&local_38,&local_34);
    puVar5 = (undefined1 *)FUN_10016e3f6(param_2,local_38,local_34);
  }
  else {
    *param_2 = 0x2e30;
    *(undefined1 *)(param_2 + 1) = 0x30;
    puVar5 = (undefined1 *)((long)param_2 + 3);
  }
  return puVar5;
}

