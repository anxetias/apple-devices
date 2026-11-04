// name: FUN_100194d94
// address: 100194d94

undefined4 *
FUN_100194d94(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long param_4,double *param_5
             ,uint param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  if ((param_6 >> 0xb & 1) == 0) {
    local_48 = (double)FUN_100194bff(param_4 + 0x10,param_5 + 2,param_6,param_7);
    uStack_40 = CONCAT44(uVar2,uVar1);
    local_58 = *param_5;
    uStack_50 = param_5[1];
    if ((param_6 & 1) == 0) {
      if ((param_6 & 4) == 0) {
        if ((param_6 >> 0x17 & 1) == 0) {
          FUN_100194eea(&local_78,&local_58,param_5,2,0);
          local_48 = local_68;
          uStack_40 = uStack_60;
          local_58 = (double)CONCAT44(uStack_74,local_78);
          uStack_50 = (double)CONCAT44(uStack_6c,uStack_70);
        }
      }
      else {
        uStack_50 = (param_5[1] + param_5[3]) - (double)CONCAT44(uVar2,uVar1);
      }
    }
    else {
      uStack_50 = param_5[1];
    }
    if ((param_6 & 0x10) == 0) {
      if ((param_6 & 0x40) == 0) {
        FUN_100194eea(&local_78,&local_58,param_5,0x20,0);
        local_58 = (double)CONCAT44(uStack_74,local_78);
        uStack_50 = (double)CONCAT44(uStack_6c,uStack_70);
        local_48 = local_68;
        uStack_40 = uStack_60;
      }
      else {
        local_58 = (*param_5 + param_5[2]) - local_48;
      }
    }
    else {
      local_58 = *param_5;
    }
  }
  else {
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = 0x3ff0000000000000;
    }
    local_58._0_4_ = *(undefined4 *)param_5;
    local_58._4_4_ = *(undefined4 *)((long)param_5 + 4);
    uStack_50._0_4_ = *(undefined4 *)(param_5 + 1);
    uStack_50._4_4_ = *(undefined4 *)((long)param_5 + 0xc);
    local_48._0_4_ = *(undefined4 *)(param_5 + 2);
    local_48._4_4_ = *(undefined4 *)((long)param_5 + 0x14);
    uStack_40._0_4_ = *(undefined4 *)(param_5 + 3);
    uStack_40._4_4_ = *(undefined4 *)((long)param_5 + 0x1c);
  }
  param_3[4] = (undefined4)local_48;
  param_3[5] = local_48._4_4_;
  param_3[6] = (undefined4)uStack_40;
  param_3[7] = uStack_40._4_4_;
  *param_3 = (undefined4)local_58;
  param_3[1] = local_58._4_4_;
  param_3[2] = (undefined4)uStack_50;
  param_3[3] = uStack_50._4_4_;
  return param_3;
}

