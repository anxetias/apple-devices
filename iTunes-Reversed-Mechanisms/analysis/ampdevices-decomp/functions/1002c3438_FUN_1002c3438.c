// name: FUN_1002c3438
// address: 1002c3438

undefined1  [16] FUN_1002c3438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_48 [3];
  undefined8 local_30;
  
  plVar1 = (long *)FUN_10020e43c(param_1,&local_30,param_2);
  if (*plVar1 == 0) {
    FUN_1002c34a0(local_48,param_1,param_3);
    FUN_10020e4b6(param_1,local_30,plVar1,local_48[0]);
    uVar2 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar2 = 0;
    local_48[0] = *plVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = local_48[0];
  return auVar3;
}

