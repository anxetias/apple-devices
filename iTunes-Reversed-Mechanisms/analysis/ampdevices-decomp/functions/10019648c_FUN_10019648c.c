// name: FUN_10019648c
// address: 10019648c

void FUN_10019648c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = FUN_1001705fc(*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

