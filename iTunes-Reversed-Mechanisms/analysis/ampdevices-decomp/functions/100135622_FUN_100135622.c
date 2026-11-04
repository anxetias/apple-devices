// name: FUN_100135622
// address: 100135622

undefined4 FUN_100135622(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  
  FUN_1001aaf3c(local_30,param_3);
  FUN_1001a7bac(local_28,local_30);
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,local_28);
  FUN_1001ab240(local_28);
  FUN_1001ab006(local_30);
  return uVar1;
}

