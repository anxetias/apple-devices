// name: FUN_100426500
// address: 100426500

void FUN_100426500(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_100858220;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return;
}

