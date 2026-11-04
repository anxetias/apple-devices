// name: FUN_10045451a
// address: 10045451a

void FUN_10045451a(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_100859a48;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}

