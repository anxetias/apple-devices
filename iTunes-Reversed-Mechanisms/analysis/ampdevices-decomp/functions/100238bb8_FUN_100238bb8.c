// name: FUN_100238bb8
// address: 100238bb8

void FUN_100238bb8(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_100238bea();
    operator_delete(*(void **)*param_1);
    return;
  }
  return;
}

