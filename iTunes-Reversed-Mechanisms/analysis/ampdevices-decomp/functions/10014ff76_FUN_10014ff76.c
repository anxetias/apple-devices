// name: FUN_10014ff76
// address: 10014ff76

undefined8 * FUN_10014ff76(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  *puVar1 = &PTR_FUN_10083b630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  FUN_10028593a(puVar1 + 4,param_1 + 0x20);
  return puVar1;
}

