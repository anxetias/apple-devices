// name: FUN_1001b7380
// address: 1001b7380

undefined1  [16]
FUN_1001b7380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 extraout_RDX;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_50 [3];
  undefined8 local_38;
  
  plVar1 = (long *)FUN_10020e43c(param_1,&local_38,param_2);
  if (*plVar1 == 0) {
    FUN_1001b73fc(local_50,param_1,param_3,param_4,param_5);
    FUN_10020e4b6(param_1,local_38,plVar1,local_50[0]);
    uVar2 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
  }
  else {
    uVar2 = 0;
    local_50[0] = *plVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = local_50[0];
  return auVar3;
}

