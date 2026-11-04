// name: FUN_1005f28ca
// address: 1005f28ca

void FUN_1005f28ca(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  FUN_1001b7a5c(local_50);
  FUN_1001b7a88(local_40,param_3);
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1 = operator_new(0x30);
  *puVar1 = &PTR_FUN_10086fbf8;
  puVar1[1] = FUN_1004508b1;
  FUN_1001b7a88(puVar1 + 2,local_50);
  FUN_1001b7a88(puVar1 + 4,local_40);
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  FUN_1001b7a50(local_40);
  FUN_1001b7a50(local_50);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}

