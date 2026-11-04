// name: FUN_100424bc2
// address: 100424bc2

void FUN_100424bc2(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [16];
  
  *(undefined1 *)(param_2 + 0x30) = 1;
  FUN_1001c334a(local_30,0x10cf0026);
  FUN_1001b80b2(param_2 + 0x20,local_30);
  FUN_1001b7a50(local_30);
  *(undefined1 *)(param_2 + 0x69) = 0;
  FUN_1001c334a(local_30,0x10cf000f);
  FUN_1001b80b2(param_2 + 0x38,local_30);
  FUN_1001b7a50(local_30);
  *(undefined1 *)(param_2 + 0xa8) = 0;
  uVar1 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc00d5);
  FUN_1001b81f2(param_2 + 0x88,uVar1);
  return;
}

