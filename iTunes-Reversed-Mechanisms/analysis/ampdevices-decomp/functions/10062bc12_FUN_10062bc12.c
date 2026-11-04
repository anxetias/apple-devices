// name: FUN_10062bc12
// address: 10062bc12

void FUN_10062bc12(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_100871208;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return;
}

