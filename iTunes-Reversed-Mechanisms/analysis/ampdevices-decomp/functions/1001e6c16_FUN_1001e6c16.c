// name: FUN_1001e6c16
// address: 1001e6c16

undefined4 FUN_1001e6c16(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  FUN_1001b7a5c(local_58,param_1);
  FUN_1001e6cd9(local_48,local_58);
  FUN_1001b7a5c(local_28,param_2);
  FUN_1001e6cd9(local_38,local_28);
  uVar1 = FUN_1001b96de(local_48,local_38,0x40);
  FUN_1001b7a50(local_38);
  FUN_1001b7a50(local_28);
  FUN_1001b7a50(local_48);
  FUN_1001b7a50(local_58);
  return uVar1;
}

