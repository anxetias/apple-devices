// name: FUN_1003a4ec8
// address: 1003a4ec8

undefined8 * FUN_1003a4ec8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  *puVar1 = &PTR_FUN_100856840;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  FUN_10028593a(puVar1 + 4,param_1 + 0x20);
  return puVar1;
}

