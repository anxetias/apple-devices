// name: FUN_10040c727
// address: 10040c727

void FUN_10040c727(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_38 [16];
  
  FUN_1001b7eb0(local_38);
  FUN_1001b80b2(param_1 + 0x2c88,local_38);
  FUN_1001b7a50(local_38);
  *(undefined4 *)(param_1 + 0x2c98) = param_3;
  *(undefined4 *)(param_1 + 0x2c9c) = param_4;
  FUN_10040730b(param_1);
  return;
}

