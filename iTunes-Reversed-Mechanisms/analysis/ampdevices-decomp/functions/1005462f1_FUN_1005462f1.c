// name: FUN_1005462f1
// address: 1005462f1

void FUN_1005462f1(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  uVar1 = FUN_100416f20(param_1,0x10cc02c4);
  FUN_1001b7eb0(local_38,uVar1);
  FUN_1001bbec4(local_48,local_38,param_2);
  FUN_1001b7a50(local_38);
  uVar1 = FUN_100416f20(param_1 & 0xffffffff,0x10cc02c5);
  FUN_1001b7eb0(local_38,uVar1);
  FUN_100450ae1(local_48,local_38,param_3);
  FUN_1001b7a50(local_38);
  FUN_1001b7a50(local_48);
  return;
}

