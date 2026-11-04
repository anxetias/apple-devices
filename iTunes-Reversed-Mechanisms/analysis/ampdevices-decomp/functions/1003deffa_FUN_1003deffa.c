// name: FUN_1003deffa
// address: 1003deffa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1003deffa(long param_1,int param_2,undefined4 *param_3,double *param_4,ulong *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_30 [8];
  
  if (param_2 == -1) {
    *param_3 = *(undefined4 *)(param_1 + 0x53c);
    *param_4 = (double)*(uint *)(param_1 + 0x4a4) *
               (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)*(undefined8 *)(param_1 + 0x4c0)) -
                _DAT_10070d3d0) +
               ((double)CONCAT44(DAT_10070d3c0._4_4_,
                                 (int)((ulong)*(undefined8 *)(param_1 + 0x4c0) >> 0x20)) -
               _UNK_10070d3d8));
    uVar1 = *(ulong *)(param_1 + 0x4d0);
  }
  else {
    uVar1 = FUN_1003da99e(param_1,param_2,local_30,param_3);
    if (*(ulong *)(param_1 + 0x4d0) < uVar1) {
      *param_3 = 0;
      *param_4 = 0.0;
      uVar2 = 0xffffffce;
      uVar1 = 0xffffffffffffffff;
      goto LAB_1003df0b3;
    }
    *param_4 = ((double)CONCAT44((undefined4)DAT_10070d3c0,local_30._0_4_) - _DAT_10070d3d0) +
               ((double)CONCAT44(DAT_10070d3c0._4_4_,local_30._4_4_) - _UNK_10070d3d8);
  }
  uVar2 = 0;
LAB_1003df0b3:
  *param_5 = uVar1;
  return uVar2;
}

