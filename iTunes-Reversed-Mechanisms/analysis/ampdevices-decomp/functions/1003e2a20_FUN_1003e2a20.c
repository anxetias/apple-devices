// name: FUN_1003e2a20
// address: 1003e2a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e2a20(double *param_1,uint *param_2,ulong *param_3)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  double dVar7;
  
  dVar1 = *param_1;
  param_2[0x515] = (uint)(float)dVar1;
  param_2[0x40b] = (int)(long)dVar1 << 0x10;
  dVar4 = _DAT_100708b48;
  dVar3 = param_1[6];
  auVar6._8_4_ = (int)((ulong)dVar3 >> 0x20);
  auVar6._0_8_ = dVar3;
  auVar6._12_4_ = DAT_10070d3c0._4_4_;
  uVar2 = *(uint *)((long)param_1 + 0x14);
  dVar7 = (double)uVar2;
  param_2[0x405] =
       (uint)(long)(((((double)CONCAT44((undefined4)DAT_10070d3c0,SUB84(dVar3,0)) - _DAT_10070d3d0)
                     + (auVar6._8_8_ - _UNK_10070d3d8)) * dVar7) / (dVar1 / _DAT_100708b48));
  param_2[0x40a] =
       (uint)(long)(((double)*(uint *)(param_1 + 2) * dVar1 * _DAT_100747c98) / (dVar7 * dVar4));
  *param_2 = *param_2 | 0x18800;
  if (param_3 != (ulong *)0x0) {
    *(undefined2 *)((long)param_3 + 0x16) = *(undefined2 *)((long)param_1 + 0x1c);
    *(undefined4 *)((long)param_3 + 0x5c) = 0;
    param_3[0xc] = (long)dVar3 * (ulong)uVar2;
    param_3[0xd] = 0;
    *(undefined8 *)((long)param_3 + 0x54) = 1;
    uVar5 = 1;
    if (*(int *)(param_1 + 1) == 0x6c70636d) {
      uVar5 = 0x2bd;
    }
    *(undefined2 *)((long)param_3 + 0x1a) = uVar5;
    *param_3 = *param_3 | 0x1040000004;
  }
  return;
}

