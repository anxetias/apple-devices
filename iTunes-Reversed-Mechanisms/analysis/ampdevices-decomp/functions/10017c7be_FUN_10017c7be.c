// name: FUN_10017c7be
// address: 10017c7be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10017c7be(undefined8 *param_1,undefined8 param_2,undefined1 param_3,uint param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(uint *)(param_1 + 5) = param_4 | 1;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  uVar2 = _CGImageGetWidth(param_2);
  param_1[6] = uVar2;
  uVar2 = _CGImageGetHeight(param_2);
  param_1[7] = uVar2;
  uVar3 = (undefined4)((ulong)DAT_10070d3c0 >> 0x20);
  auVar4._8_4_ = (int)((ulong)uVar2 >> 0x20);
  auVar4._0_8_ = uVar2;
  auVar4._12_4_ = uVar3;
  dVar1 = (((double)CONCAT44((int)DAT_10070d3c0,(int)param_1[6]) - _DAT_10070d3d0) +
          ((double)CONCAT44(uVar3,(int)((ulong)param_1[6] >> 0x20)) - _UNK_10070d3d8)) /
          (((double)CONCAT44((int)DAT_10070d3c0,(int)uVar2) - _DAT_10070d3d0) +
          (auVar4._8_8_ - _UNK_10070d3d8));
  param_1[8] = dVar1;
  *(bool *)(param_1 + 9) =
       DAT_10070e560 < (double)((ulong)(dVar1 + _DAT_10070e558) & _DAT_100700b40);
  *(undefined1 *)((long)param_1 + 0x49) = param_3;
  _CGImageRetain(*param_1);
  return;
}

