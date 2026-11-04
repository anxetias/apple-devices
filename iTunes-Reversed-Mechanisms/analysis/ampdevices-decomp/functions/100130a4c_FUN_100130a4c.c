// name: FUN_100130a4c
// address: 100130a4c

void FUN_100130a4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_2;
    FUN_100205d70(param_2 + 7);
    FUN_100205d70(param_2 + 5);
    FUN_100205d70(param_2 + 3);
    operator_delete(param_2);
    param_2 = puVar1;
  }
  return;
}

