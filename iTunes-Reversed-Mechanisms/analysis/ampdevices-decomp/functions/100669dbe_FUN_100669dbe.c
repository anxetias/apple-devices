// name: FUN_100669dbe
// address: 100669dbe

void FUN_100669dbe(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_100871d00;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}

