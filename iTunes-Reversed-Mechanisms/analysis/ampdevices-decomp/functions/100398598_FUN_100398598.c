// name: FUN_100398598
// address: 100398598

undefined8 * FUN_100398598(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x440);
  *puVar1 = &PTR_FUN_100856080;
  _memcpy(puVar1 + 1,(void *)(param_1 + 8),0x438);
  return puVar1;
}

