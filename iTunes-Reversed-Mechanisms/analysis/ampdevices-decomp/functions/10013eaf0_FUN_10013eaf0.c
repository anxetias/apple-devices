// name: FUN_10013eaf0
// address: 10013eaf0

void FUN_10013eaf0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10083a590;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001b7a44(param_1 + 4);
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_10032f0f2(param_1 + 8);
  FUN_1001b7a44(param_1 + 10);
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1001b7a44(param_1 + 0xf);
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0x32aaaba7;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((long)param_1 + 0x141) = 0;
  *(undefined8 *)((long)param_1 + 0x149) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  FUN_1001b7a44(param_1 + 0x2d);
  FUN_1001b7a44(param_1 + 0x2f);
  LOCK();
  UNLOCK();
  iVar1 = DAT_1008c4d50 + 1;
  *(int *)(param_1 + 0x31) = DAT_1008c4d50;
  DAT_1008c4d50 = iVar1;
  lVar2 = FUN_100156d72();
  FUN_1001b7a5c(param_1 + 0x32,lVar2 + 0x118);
  return;
}

