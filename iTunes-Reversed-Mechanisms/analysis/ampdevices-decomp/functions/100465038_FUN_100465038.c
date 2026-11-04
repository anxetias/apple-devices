// name: FUN_100465038
// address: 100465038

void FUN_100465038(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  while (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    FUN_100464fdf(param_1 + 2);
    operator_delete(param_1);
    param_1 = puVar1;
  }
  return;
}

