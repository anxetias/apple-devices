// name: FUN_10012d389
// address: 10012d389

undefined4 *
FUN_10012d389(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 local_40 [16];
  
  FUN_10032f0f2(local_40);
  uVar1 = FUN_100415bc2(param_2,param_4,0,param_3,local_40);
  *param_1 = uVar1;
  FUN_1001a7abe(param_1 + 2,local_40);
  FUN_1001a85d4(local_40);
  return param_1;
}

