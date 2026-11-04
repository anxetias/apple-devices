// name: FUN_1001b4c94
// address: 1001b4c94

void FUN_1001b4c94(long *param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_1001953aa((int)param_1[0xf],&local_68);
  (**(code **)(*param_1 + 0x78))(&local_48,param_1);
  *(undefined4 *)param_3[1] = local_38;
  *(undefined4 *)(param_3[1] + 4) = uStack_34;
  *(undefined4 *)(param_3[1] + 8) = uStack_30;
  *(undefined4 *)(param_3[1] + 0xc) = uStack_2c;
  *(undefined8 *)*param_3 = local_48;
  *(undefined8 *)(*param_3 + 8) = uStack_40;
  dStack_60 = *(double *)(*param_3 + 8) + dStack_60;
  auVar1._8_4_ = SUB84(dStack_60,0);
  auVar1._0_8_ = *(double *)*param_3 + local_68;
  auVar1._12_4_ = (int)((ulong)dStack_60 >> 0x20);
  *param_3 = auVar1;
  *(undefined8 *)param_3[1] = local_58;
  *(undefined8 *)(param_3[1] + 8) = uStack_50;
  FUN_1001953aa(SUB84(DAT_100700458 / (double)param_1[0xf],0),&local_48,param_3);
  *(ulong *)param_3[1] = CONCAT44(uStack_34,local_38);
  *(ulong *)(param_3[1] + 8) = CONCAT44(uStack_2c,uStack_30);
  *(undefined8 *)*param_3 = local_48;
  *(undefined8 *)(*param_3 + 8) = uStack_40;
  return;
}

