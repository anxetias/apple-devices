// name: FUN_10014869e
// address: 10014869e

void FUN_10014869e(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1 = operator_new(0x40);
  *puVar1 = &PTR_FUN_10083a900;
  FUN_10028593a(puVar1 + 2,param_2);
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  return;
}

