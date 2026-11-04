// name: FUN_1002ac7f2
// address: 1002ac7f2

undefined8 * FUN_1002ac7f2(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x40);
  *puVar1 = &PTR_FUN_100845940;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_1002ac976(puVar1 + 2,param_1 + 0x10);
  return puVar1;
}

