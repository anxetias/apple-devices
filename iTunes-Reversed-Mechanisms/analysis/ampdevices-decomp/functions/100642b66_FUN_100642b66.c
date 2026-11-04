// name: FUN_100642b66
// address: 100642b66

undefined8 * FUN_100642b66(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xa8);
  *puVar1 = &PTR_FUN_100871480;
  _memcpy(puVar1 + 1,(void *)(param_1 + 8),0xa0);
  return puVar1;
}

