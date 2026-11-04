// name: FUN_100205a92
// address: 100205a92

void FUN_100205a92(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  *puVar2 = &PTR_FUN_10083d5c0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = uVar1;
  return;
}

