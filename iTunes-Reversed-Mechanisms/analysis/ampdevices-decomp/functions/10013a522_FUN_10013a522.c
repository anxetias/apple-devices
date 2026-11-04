// name: FUN_10013a522
// address: 10013a522

undefined8 * FUN_10013a522(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  *puVar1 = &PTR_FUN_100839df8;
  FUN_10028593a(puVar1 + 2,param_1 + 0x10);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  return puVar1;
}

