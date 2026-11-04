// name: FUN_100156f26
// address: 100156f26

undefined1 FUN_100156f26(long param_1)

{
  undefined1 uVar1;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined2 local_e8;
  undefined1 local_e6;
  undefined2 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined2 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [32];
  undefined1 local_40 [16];
  
  FUN_1001b7a44(local_158);
  FUN_1001b7a44(local_148);
  FUN_1001b7a44(local_138);
  FUN_1001b7a44(local_128);
  FUN_1001b7a44(local_118);
  FUN_1001b7a44(local_108);
  FUN_1001b7a44(local_f8);
  local_e8 = 0;
  local_e6 = 0;
  local_e0 = 0;
  FUN_1001b7a44(local_d8);
  FUN_1001b7a44(local_c8);
  local_b8 = 0;
  FUN_1001b7a44(local_b0);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_100157480(local_60);
  FUN_1001b7a44(local_40);
  FUN_100157130(param_1,local_158);
  FUN_1001332c4(local_158);
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 0x128);
  *(undefined1 *)(param_1 + 0x128) = 0;
  UNLOCK();
  return uVar1;
}

