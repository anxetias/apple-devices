// name: FUN_1004117b4
// address: 1004117b4

void FUN_1004117b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  while (param_2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_2;
    FUN_1001b7a50(param_2 + 2);
    operator_delete(param_2);
    param_2 = puVar1;
  }
  return;
}

