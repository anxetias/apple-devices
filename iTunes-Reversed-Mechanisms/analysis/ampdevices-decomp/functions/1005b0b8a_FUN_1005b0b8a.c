// name: FUN_1005b0b8a
// address: 1005b0b8a

void FUN_1005b0b8a(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_10086f0d0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}

