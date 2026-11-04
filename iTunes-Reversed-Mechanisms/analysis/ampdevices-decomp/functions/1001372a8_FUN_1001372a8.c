// name: FUN_1001372a8
// address: 1001372a8

void FUN_1001372a8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_2;
    FUN_100135e68(param_2 + 2);
    operator_delete(param_2);
    param_2 = puVar1;
  }
  return;
}

