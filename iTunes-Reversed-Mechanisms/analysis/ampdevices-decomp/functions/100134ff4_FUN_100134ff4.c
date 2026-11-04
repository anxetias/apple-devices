// name: FUN_100134ff4
// address: 100134ff4

undefined8 * FUN_100134ff4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  *puVar1 = &PTR_FUN_1008395f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  FUN_10028593a(puVar1 + 4,param_1 + 0x20);
  return puVar1;
}

