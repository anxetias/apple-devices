// name: FUN_1001484cc
// address: 1001484cc

undefined4 FUN_1001484cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  
  FUN_10032f0f2(local_50);
  uVar1 = FUN_1001a90d0(param_1,param_2,local_50);
  if ((char)uVar1 != '\0') {
    FUN_1001a7b90(local_30,local_50);
    FUN_1001a7b78(local_40,local_30);
    FUN_1001a7b1c(param_3,local_40);
    FUN_1001a7a94(local_40);
    FUN_1001ab240(local_30);
  }
  FUN_1001a7a94(local_50);
  return uVar1;
}

