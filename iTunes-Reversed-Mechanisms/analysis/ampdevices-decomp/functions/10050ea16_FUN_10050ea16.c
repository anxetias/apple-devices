// name: FUN_10050ea16
// address: 10050ea16

undefined8 * FUN_10050ea16(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x40);
  *puVar1 = &PTR_FUN_10085f470;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_1002ac976(puVar1 + 2,param_1 + 0x10);
  return puVar1;
}

