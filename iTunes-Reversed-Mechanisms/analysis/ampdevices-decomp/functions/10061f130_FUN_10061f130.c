// name: FUN_10061f130
// address: 10061f130

void FUN_10061f130(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_100870e10;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

